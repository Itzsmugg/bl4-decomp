// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a1f9bc FUN_143a1f9bc body=282 status=ok
// SIG undefined FUN_143a1f9bc(void)

undefined8 * FUN_143a1f9bc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a1fadc FUN_143a1fadc body=1148 status=ok
// SIG undefined FUN_143a1fadc(void)

void FUN_143a1fadc(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_14814347c(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1ff5a FUN_143a1ff5a body=1685 status=ok
// SIG undefined FUN_143a1ff5a(void)

ulonglong FUN_143a1ff5a(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a1fff8;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a1fff8;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 2;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1fffa;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a20129;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a20541;
          goto LAB_143a20132;
        }
LAB_143a20541:
        FUN_148146888(&local_c0,&DAT_14ca85100);
        goto LAB_143a20209;
      }
LAB_143a20129:
      if (iVar3 == 0x10) goto LAB_143a20541;
LAB_143a20132:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a20541;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a20541;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a202b3;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a202b3:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a20333;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a20333:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbff30;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbff10;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_148146d98;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aeb4);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a20209:
      FUN_14080c2b4();
      goto LAB_143a1fffa;
    }
  }
LAB_143a1fff8:
  uVar19 = 0;
LAB_143a1fffa:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a205f0 FUN_143a205f0 body=1801 status=ok
// SIG undefined FUN_143a205f0(void)

ulonglong FUN_143a205f0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 unaff_RSI;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  char *local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar15 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x60);
    }
    iVar7 = *(int *)(lVar15 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) * 4);
    if (iVar7 != -1) {
      do {
        plVar16 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x18);
        if (*plVar16 == lVar4) {
          if ((plVar16 != (longlong *)0x0) && (pcVar5 = (char *)plVar16[1], pcVar5 != (char *)0x0))
          {
            uVar18 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a2071d;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar15 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar5 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar5 == '\0') {
                *pcVar5 = '\x01';
                FUN_14054c6c4(pcVar5 + 0x10,lVar15 + 0x50);
              }
              pcVar21 = pcVar5 + 0x10;
              lVar15 = *(longlong *)(param_2 + 0x28);
              uVar22 = (ulonglong)param_3;
              iVar7 = *(int *)(lVar15 + uVar22 * 8);
              iVar3 = *(int *)(pcVar5 + 0x18);
              if (iVar3 < iVar7) {
                *(int *)(pcVar5 + 0x18) = iVar7;
                if ((uint)(*(int *)(pcVar5 + 0x1c) - iVar3) < (uint)(iVar7 - iVar3)) {
                  local_c0 = pcVar21;
                  FUN_1446f48e2(pcVar21);
                  pcVar21 = local_c0;
                }
              }
              else {
                if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4();
                }
                if (iVar7 < iVar3) {
                  *(int *)(pcVar5 + 0x18) = iVar7;
                  local_c0 = pcVar21;
                  FUN_14479f406(pcVar21);
                  pcVar21 = local_c0;
                }
              }
              lVar20 = (longlong)*(int *)(lVar15 + uVar22 * 8);
              if (0 < lVar20) {
                memcpy(*(void **)pcVar21,
                       (void *)((longlong)*(int *)(lVar15 + 4 + uVar22 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar20 << 2);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a2071d;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar16 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar16 == (longlong *)0x0 ||
                (puVar10 = (undefined8 *)(**(code **)(*plVar16 + 0x420))(),
                puVar10 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar10)(puVar10,&DAT_14cb3e918);
            }
            lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar7 = *(int *)(lVar15 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar4;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar7 != 2) {
                if (iVar7 != 1) goto LAB_143a20832;
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                if (DVar8 == DVar9) goto LAB_143a20c46;
                goto LAB_143a2083b;
              }
            }
            else {
LAB_143a20832:
              if (iVar7 != 0x10) {
LAB_143a2083b:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar15 + 0xc60), iVar7 == 2))
                  goto LAB_143a20c46;
                  if (iVar7 == 1) {
                    DVar8 = FUN_140ad26c0();
                    DVar9 = GetCurrentThreadId();
                    if (DVar8 == DVar9) goto LAB_143a20c46;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar10 = (undefined8 *)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x308);
                  puVar12 = (uint *)*puVar10;
                  if (puVar12 != (uint *)0x0) goto LAB_143a209b8;
                  while( true ) {
                    uVar14 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar14 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar14 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar4 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar11 = *(undefined4 **)(lVar4 + 0x310);
                    *(undefined8 *)(lVar4 + 0x310) = 0;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar11 = 0xffffffff;
                    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                    puVar11[0x12] = 0;
                    *puVar10 = puVar11;
                    FUN_140217a48(puVar10);
                    puVar12 = (uint *)*puVar10;
LAB_143a209b8:
                    puVar19 = (undefined8 *)
                              (*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar17 = (uint *)(puVar19 + 0x1a);
                    uVar14 = puVar12[0x12];
                    if (puVar17 <= puVar12 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                      LOCK();
                      uVar2 = *puVar12;
                      *puVar12 = *puVar12 + uVar14 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar14) != 0xffffffff) break;
                      puVar12 = (uint *)*puVar10;
                      *puVar12 = 0xffffffff;
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                      puVar12[0x12] = 0;
                      *puVar10 = puVar12;
                      puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                      puVar17 = (uint *)(puVar19 + 0x1a);
                      uVar14 = 0;
                      if (puVar17 <= puVar12 + 0x4000) {
                        uVar14 = 1;
                        goto LAB_143a20a38;
                      }
                    }
                  }
                  uVar14 = uVar14 + 1;
LAB_143a20a38:
                  *(uint **)(puVar12 + 0x10) = puVar17;
                  puVar12[0x12] = uVar14;
                  iVar7 = 0;
                  FUN_1447247dc(puVar19,0);
                  *puVar19 = &PTR_FUN_14adbff60;
                  *(undefined4 *)(puVar19 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar19 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar19 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar19 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar19 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar19 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar19 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar19 + 0xc4) = uStack_94;
                  puVar19[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar14 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                      uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                      iVar7 = 0;
                    }
                    else {
                      uVar22 = 2;
                    }
                  }
                  else {
                    iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar22 = 5;
                  }
                  if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
                  }
                  puVar19[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar19[9] = puVar19;
                  puVar19[10] = puVar19;
                  lVar4 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar4 == 0) {
                    uVar6 = 1;
                    if ((char)uVar22 != '\x06') {
                      uVar6 = uVar22;
                    }
                    uVar22 = uVar6;
                    uVar13 = 0;
                  }
                  else {
                    if ((char)uVar22 == '\x06') {
                      uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                    }
                    uVar13 = *(undefined8 *)(lVar4 + 0x30);
                  }
                  puVar19[0xf] = uVar13;
                  puVar19[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar19 + 0x1c) = iVar7;
                  if (puVar19 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar19);
                    LOCK();
                    piVar1 = (int *)(puVar19 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar19)(puVar19,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbff40;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_148146f3e;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aeb8);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar16 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar16 = local_68;
                    }
                    (**(code **)(*plVar16 + 0x10))();
                  }
                }
                goto LAB_143a2071d;
              }
            }
LAB_143a20c46:
            FUN_148146e4e(&local_b0,&DAT_14ca85100);
            goto LAB_143a2071d;
          }
          break;
        }
        iVar7 = (int)plVar16[2];
      } while (iVar7 != -1);
    }
  }
  uVar18 = 0;
LAB_143a2071d:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a20d00 FUN_143a20d00 body=1581 status=ok
// SIG undefined FUN_143a20d00(void)

undefined8 FUN_143a20d00(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined1 local_dc [4];
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 *local_98;
  undefined8 **local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar4 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar4 + 0x48) & 0xfe) == 2) {
    bVar6 = *(byte *)(lVar4 + 0x30) >> 1 & 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  local_90 = &local_e8;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_108 = *(longlong *)(param_4 + 0x100);
  local_98 = &local_108;
  local_e8 = param_3;
  FUN_145980042(param_1 + 0x20,local_dc,&local_98);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a20f33;
  local_dc[0] = 0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14adbff70;
  local_d8 = FUN_141824fc2;
  local_b0 = local_dc;
  FUN_140bb9115(param_2,param_4);
  uStack_100 = *(undefined8 *)(param_4 + 0x100);
  local_f8 = *(undefined8 *)(param_4 + 0x870);
  uStack_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_ec = CONCAT31(uStack_ec._1_3_,local_dc[0]);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_108 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a20e56;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a21287;
      goto LAB_143a20e5f;
    }
  }
  else {
LAB_143a20e56:
    if (iVar7 != 0x10) {
LAB_143a20e5f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143a21287;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a21287;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a21007;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a21007:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a21087;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a21087:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adbffb0;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_108._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_100._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_f8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = uStack_f0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_ec;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = (undefined8 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14adbff90;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(local_88 + 4) = uStack_f0;
        *(undefined4 *)((longlong)local_88 + 0x24) = uStack_ec;
        *(undefined4 *)(local_88 + 1) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_88 + 0xc) = local_108._4_4_;
        *(undefined4 *)(local_88 + 2) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)local_88 + 0x14) = uStack_100._4_4_;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98 = (undefined8 *)&LAB_145890a62;
        }
        local_118 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3aebc);
        if (local_98 != (undefined8 *)0x0) {
          plVar14 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a20f33;
    }
  }
LAB_143a21287:
  FUN_145890a68(&local_108,&DAT_14ca85100);
LAB_143a20f33:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2132e FUN_143a2132e body=1307 status=ok
// SIG undefined FUN_143a2132e(void)

void FUN_143a2132e(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a2139c;
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a2138b;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a21390;
      goto LAB_143a21401;
    }
  }
  else {
LAB_143a2138b:
    if (iVar6 != 0x10) {
LAB_143a21401:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a21390;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a21390;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a214e6;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a214e6:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a21568;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a21568:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adbffe0;
        puVar15[0x15] = param_1;
        puVar15[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbffc0;
        local_88[0] = &LAB_145829b58;
        local_60 = param_1;
        local_58 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3aec0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a2139c;
    }
  }
LAB_143a21390:
  FUN_145829b6c(param_1 + 0x70,uVar11);
LAB_143a2139c:
  FUN_145840450(param_1 + 0x20,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a218f6 FUN_143a218f6 body=450 status=ok
// SIG undefined FUN_143a218f6(void)

void FUN_143a218f6(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1481437a4(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a21aba FUN_143a21aba body=282 status=ok
// SIG undefined FUN_143a21aba(void)

undefined8 * FUN_143a21aba(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a21bd4 FUN_143a21bd4 body=282 status=ok
// SIG undefined FUN_143a21bd4(void)

undefined8 * FUN_143a21bd4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a21cf4 FUN_143a21cf4 body=282 status=ok
// SIG undefined FUN_143a21cf4(void)

undefined8 * FUN_143a21cf4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a21e0e FUN_143a21e0e body=282 status=ok
// SIG undefined FUN_143a21e0e(void)

undefined8 * FUN_143a21e0e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a21f28 FUN_143a21f28 body=1148 status=ok
// SIG undefined FUN_143a21f28(void)

void FUN_143a21f28(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_1481475c4(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a223a6 FUN_143a223a6 body=1682 status=ok
// SIG undefined FUN_143a223a6(void)

ulonglong FUN_143a223a6(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a22444;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a22444;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(undefined4 *)(pcVar21 + 8);
      *(undefined4 *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a22446;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a22572;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a2298a;
          goto LAB_143a2257b;
        }
LAB_143a2298a:
        FUN_148149c68(&local_c0,&DAT_14ca85100);
        goto LAB_143a22652;
      }
LAB_143a22572:
      if (iVar3 == 0x10) goto LAB_143a2298a;
LAB_143a2257b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a2298a;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a2298a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a226fc;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a226fc:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a2277c;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a2277c:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adc0590;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adc0570;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_14814a172;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aec4);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a22652:
      FUN_14080c2b4();
      goto LAB_143a22446;
    }
  }
LAB_143a22444:
  uVar19 = 0;
LAB_143a22446:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a22a3a FUN_143a22a3a body=1805 status=ok
// SIG undefined FUN_143a22a3a(void)

ulonglong FUN_143a22a3a(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 unaff_RSI;
  ulonglong uVar18;
  undefined8 *puVar19;
  size_t _Size;
  ulonglong uVar20;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  size_t local_c8;
  void *local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar15 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x60);
    }
    iVar7 = *(int *)(lVar15 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar7 != -1) {
      do {
        plVar16 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x18);
        if (*plVar16 == lVar3) {
          if ((plVar16 != (longlong *)0x0) && (pcVar4 = (char *)plVar16[1], pcVar4 != (char *)0x0))
          {
            uVar18 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a22b4c;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar15 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                if (pcVar4 + 0x10 != (char *)(lVar15 + 0x50)) {
                  iVar7 = *(int *)(lVar15 + 0x58);
                  local_c8 = (size_t)iVar7;
                  pvVar5 = *(void **)(lVar15 + 0x50);
                  *(int *)(pcVar4 + 0x18) = iVar7;
                  if (iVar7 == 0 && *(int *)(pcVar4 + 0x1c) == 0) {
                    pcVar4[0x1c] = '\0';
                    pcVar4[0x1d] = '\0';
                    pcVar4[0x1e] = '\0';
                    pcVar4[0x1f] = '\0';
                  }
                  else {
                    local_c0 = pvVar5;
                    FUN_1447a127e();
                    if ((int)local_c8 != 0) {
                      memcpy(*(void **)(pcVar4 + 0x10),local_c0,local_c8);
                    }
                  }
                }
              }
              local_c8 = *(longlong *)(param_2 + 0x28);
              uVar20 = (ulonglong)param_3;
              FUN_140393c76(pcVar4 + 0x10,*(undefined4 *)(local_c8 + uVar20 * 8),1);
              _Size = (size_t)*(int *)(local_c8 + uVar20 * 8);
              if (0 < (longlong)_Size) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c8 + 4 + uVar20 * 8) +
                               *(longlong *)(param_2 + 0x48)),_Size);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a22b4c;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar16 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar16 == (longlong *)0x0 ||
                (puVar10 = (undefined8 *)(**(code **)(*plVar16 + 0x420))(),
                puVar10 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar10)(puVar10,&DAT_14cb3e918);
            }
            lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar7 = *(int *)(lVar15 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar7 != 2) {
                if (iVar7 != 1) goto LAB_143a22c82;
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                if (DVar8 == DVar9) goto LAB_143a23099;
                goto LAB_143a22c8b;
              }
            }
            else {
LAB_143a22c82:
              if (iVar7 != 0x10) {
LAB_143a22c8b:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar15 + 0xc60), iVar7 == 2))
                  goto LAB_143a23099;
                  if (iVar7 == 1) {
                    DVar8 = FUN_140ad26c0();
                    DVar9 = GetCurrentThreadId();
                    if (DVar8 == DVar9) goto LAB_143a23099;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar10 = (undefined8 *)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x308);
                  puVar12 = (uint *)*puVar10;
                  if (puVar12 != (uint *)0x0) goto LAB_143a22e0b;
                  while( true ) {
                    uVar14 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar14 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar14 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar11 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar11 = 0xffffffff;
                    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                    puVar11[0x12] = 0;
                    *puVar10 = puVar11;
                    FUN_140217a48(puVar10);
                    puVar12 = (uint *)*puVar10;
LAB_143a22e0b:
                    puVar19 = (undefined8 *)
                              (*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar17 = (uint *)(puVar19 + 0x1a);
                    uVar14 = puVar12[0x12];
                    if (puVar17 <= puVar12 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                      LOCK();
                      uVar2 = *puVar12;
                      *puVar12 = *puVar12 + uVar14 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar14) != 0xffffffff) break;
                      puVar12 = (uint *)*puVar10;
                      *puVar12 = 0xffffffff;
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                      puVar12[0x12] = 0;
                      *puVar10 = puVar12;
                      puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                      puVar17 = (uint *)(puVar19 + 0x1a);
                      uVar14 = 0;
                      if (puVar17 <= puVar12 + 0x4000) {
                        uVar14 = 1;
                        goto LAB_143a22e8b;
                      }
                    }
                  }
                  uVar14 = uVar14 + 1;
LAB_143a22e8b:
                  *(uint **)(puVar12 + 0x10) = puVar17;
                  puVar12[0x12] = uVar14;
                  iVar7 = 0;
                  FUN_1447247dc(puVar19,0);
                  *puVar19 = &PTR_FUN_14adc05c0;
                  *(undefined4 *)(puVar19 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar19 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar19 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar19 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar19 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar19 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar19 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar19 + 0xc4) = uStack_94;
                  puVar19[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar14 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                      uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                      iVar7 = 0;
                    }
                    else {
                      uVar20 = 2;
                    }
                  }
                  else {
                    iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar20 = 5;
                  }
                  if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
                  }
                  puVar19[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar19[9] = puVar19;
                  puVar19[10] = puVar19;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar6 = 1;
                    if ((char)uVar20 != '\x06') {
                      uVar6 = uVar20;
                    }
                    uVar20 = uVar6;
                    uVar13 = 0;
                  }
                  else {
                    if ((char)uVar20 == '\x06') {
                      uVar20 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar13 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar19[0xf] = uVar13;
                  puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar19 + 0x1c) = iVar7;
                  if (puVar19 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar19);
                    LOCK();
                    piVar1 = (int *)(puVar19 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar19)(puVar19,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adc05a0;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_14814a318;
                  }
                  local_d8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aec8);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar16 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar16 = local_68;
                    }
                    (**(code **)(*plVar16 + 0x10))();
                  }
                }
                goto LAB_143a22b4c;
              }
            }
LAB_143a23099:
            FUN_14814a228(&local_b0,&DAT_14ca85100);
            goto LAB_143a22b4c;
          }
          break;
        }
        iVar7 = (int)plVar16[2];
      } while (iVar7 != -1);
    }
  }
  uVar18 = 0;
LAB_143a22b4c:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a23148 FUN_143a23148 body=1581 status=ok
// SIG undefined FUN_143a23148(void)

undefined8 FUN_143a23148(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined1 local_dc [4];
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 *local_98;
  undefined8 **local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar4 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar4 + 0x48) & 0xfe) == 2) {
    bVar6 = *(byte *)(lVar4 + 0x30) >> 1 & 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  local_90 = &local_e8;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_108 = *(longlong *)(param_4 + 0x100);
  local_98 = &local_108;
  local_e8 = param_3;
  FUN_14814a3ce(param_1 + 0x20,local_dc,&local_98);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a2337b;
  local_dc[0] = 0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14adc05d0;
  local_d8 = FUN_14814a89a;
  local_b0 = local_dc;
  FUN_140bb9115(param_2,param_4);
  uStack_100 = *(undefined8 *)(param_4 + 0x100);
  local_f8 = *(undefined8 *)(param_4 + 0x870);
  uStack_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_ec = CONCAT31(uStack_ec._1_3_,local_dc[0]);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_108 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a2329e;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a236cf;
      goto LAB_143a232a7;
    }
  }
  else {
LAB_143a2329e:
    if (iVar7 != 0x10) {
LAB_143a232a7:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143a236cf;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a236cf;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a2344f;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a2344f:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a234cf;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a234cf:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adc0610;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_108._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_100._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_f8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = uStack_f0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_ec;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = (undefined8 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14adc05f0;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(local_88 + 4) = uStack_f0;
        *(undefined4 *)((longlong)local_88 + 0x24) = uStack_ec;
        *(undefined4 *)(local_88 + 1) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_88 + 0xc) = local_108._4_4_;
        *(undefined4 *)(local_88 + 2) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)local_88 + 0x14) = uStack_100._4_4_;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98 = (undefined8 *)&LAB_14814aefc;
        }
        local_118 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3aecc);
        if (local_98 != (undefined8 *)0x0) {
          plVar14 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a2337b;
    }
  }
LAB_143a236cf:
  FUN_14814a904(&local_108,&DAT_14ca85100);
LAB_143a2337b:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a23776 FUN_143a23776 body=1307 status=ok
// SIG undefined FUN_143a23776(void)

void FUN_143a23776(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a237e4;
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a237d3;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a237d8;
      goto LAB_143a23849;
    }
  }
  else {
LAB_143a237d3:
    if (iVar6 != 0x10) {
LAB_143a23849:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a237d8;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a237d8;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a2392e;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a2392e:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a239b0;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a239b0:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adc0640;
        puVar15[0x15] = param_1;
        puVar15[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adc0620;
        local_88[0] = &LAB_14814b094;
        local_60 = param_1;
        local_58 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3aed0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a237e4;
    }
  }
LAB_143a237d8:
  FUN_14814afb2(param_1 + 0x70,uVar11);
LAB_143a237e4:
  FUN_14814b152(param_1 + 0x20,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a23c92 FUN_143a23c92 body=398 status=ok
// SIG undefined FUN_143a23c92(void)

void FUN_143a23c92(longlong param_1)

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



// FUNCTION 143a23e20 FUN_143a23e20 body=1872 status=ok
// SIG undefined FUN_143a23e20(void)

void FUN_143a23e20(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *_Dst;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar12 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar12 = *(int *)(param_3 + 1);
  }
  if (iVar12 == (int)param_1[5]) goto LAB_143a242fa;
  FUN_143a23c92(param_1);
  *(int *)(param_1 + 5) = iVar12;
  *(int *)(param_1 + 4) = iVar12 * 4 + 4;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  bVar13 = *(int *)((longlong)param_1 + 0x2c) != -1;
  uVar10 = 0x400;
  if (!bVar13) {
    uVar10 = 0x10;
  }
  iVar12 = iVar12 * 4 + 4;
  local_a8 = (undefined8 *)CONCAT44(DAT_14c873ed8,iVar12);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar13 * 8 + 0x4121);
  if (iVar12 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar10);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar10;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar10);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar10;
  }
  lVar11 = local_b0;
  plVar9 = param_1 + 1;
  if (plVar9 == &local_b0) {
LAB_143a2401c:
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
    lVar11 = *plVar9;
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_143a2401c;
    }
  }
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x28) & 0x10) == 0)) {
    local_a8._0_3_ = 0x13900;
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar8 = param_1 + 3;
  if (plVar8 == &local_b0) {
LAB_143a24153:
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  else {
    lVar11 = *plVar8;
    *plVar8 = local_b0;
    local_b0 = 0;
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_143a24153;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar9 == 0) || ((*(byte *)(*plVar9 + 0x28) & 0x10) == 0)) {
      local_a8 = (undefined8 *)0x13901;
    }
    else {
      local_a8 = (undefined8 *)0x40001;
    }
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar9 = param_1 + 2;
    if (plVar9 != &local_b0) {
      lVar11 = *plVar9;
      *plVar9 = local_b0;
      local_b0 = 0;
      if (lVar11 == 0) goto LAB_143a242fa;
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar11;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar13) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar13) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar11;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar13) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar13) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
LAB_143a242fa:
  lVar5 = param_1[4];
  lVar11 = param_1[1];
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar5);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar11,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1));
  }
  *(undefined1 *)((longlong)_Dst + (longlong)(int)param_1[5] * 4) = 0;
  lVar11 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar11);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar11);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar11 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar11 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar11 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar11 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a24572 FUN_143a24572 body=450 status=ok
// SIG undefined FUN_143a24572(void)

void FUN_143a24572(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1481478ec(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a24736 FUN_143a24736 body=282 status=ok
// SIG undefined FUN_143a24736(void)

undefined8 * FUN_143a24736(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a24850 FUN_143a24850 body=282 status=ok
// SIG undefined FUN_143a24850(void)

undefined8 * FUN_143a24850(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a2496a FUN_143a2496a body=282 status=ok
// SIG undefined FUN_143a2496a(void)

undefined8 * FUN_143a2496a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a24a84 FUN_143a24a84 body=282 status=ok
// SIG undefined FUN_143a24a84(void)

undefined8 * FUN_143a24a84(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a24b9e FUN_143a24b9e body=1148 status=ok
// SIG undefined FUN_143a24b9e(void)

void FUN_143a24b9e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_14814b6f4(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2501c FUN_143a2501c body=1682 status=ok
// SIG undefined FUN_143a2501c(void)

ulonglong FUN_143a2501c(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a250ba;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a250ba;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(undefined4 *)(pcVar21 + 8);
      *(undefined4 *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a250bc;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a251e8;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a25600;
          goto LAB_143a251f1;
        }
LAB_143a25600:
        FUN_14814ddc0(&local_c0,&DAT_14ca85100);
        goto LAB_143a252c8;
      }
LAB_143a251e8:
      if (iVar3 == 0x10) goto LAB_143a25600;
LAB_143a251f1:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a25600;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a25600;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a25372;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a25372:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a253f2;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a253f2:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adc0bf0;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adc0bd0;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_14814e372;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aed4);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a252c8:
      FUN_14080c2b4();
      goto LAB_143a250bc;
    }
  }
LAB_143a250ba:
  uVar19 = 0;
LAB_143a250bc:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a256b0 FUN_143a256b0 body=1893 status=ok
// SIG undefined FUN_143a256b0(void)

ulonglong FUN_143a256b0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  void *pvVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined8 unaff_RSI;
  ulonglong uVar19;
  undefined8 *puVar20;
  size_t _Size;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  char *local_c8;
  void *local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18);
        if (*plVar17 == lVar4) {
          if ((plVar17 != (longlong *)0x0) && (pcVar5 = (char *)plVar17[1], pcVar5 != (char *)0x0))
          {
            uVar19 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a259af;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar16 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar5 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar5 == '\0') {
                *pcVar5 = '\x01';
                if (pcVar5 + 0x10 != (char *)(lVar16 + 0x50)) {
                  iVar8 = *(int *)(lVar16 + 0x58);
                  pvVar6 = *(void **)(lVar16 + 0x50);
                  *(int *)(pcVar5 + 0x18) = iVar8;
                  if (iVar8 == 0 && *(int *)(pcVar5 + 0x1c) == 0) {
                    pcVar5[0x1c] = '\0';
                    pcVar5[0x1d] = '\0';
                    pcVar5[0x1e] = '\0';
                    pcVar5[0x1f] = '\0';
                  }
                  else {
                    local_c8 = (char *)(longlong)iVar8;
                    local_c0 = pvVar6;
                    FUN_1447cd5fa();
                    if ((int)local_c8 != 0) {
                      memcpy(*(void **)(pcVar5 + 0x10),local_c0,(size_t)local_c8);
                    }
                  }
                }
              }
              pcVar21 = pcVar5 + 0x10;
              lVar16 = *(longlong *)(param_2 + 0x28);
              uVar22 = (ulonglong)param_3;
              iVar8 = *(int *)(lVar16 + uVar22 * 8);
              iVar3 = *(int *)(pcVar5 + 0x18);
              if (iVar3 < iVar8) {
                *(int *)(pcVar5 + 0x18) = iVar8;
                if ((uint)(*(int *)(pcVar5 + 0x1c) - iVar3) < (uint)(iVar8 - iVar3)) {
                  local_c8 = pcVar21;
                  FUN_1401c3474(pcVar21);
                  pcVar21 = local_c8;
                }
              }
              else {
                if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4();
                }
                if (iVar8 < iVar3) {
                  *(int *)(pcVar5 + 0x18) = iVar8;
                  local_c8 = pcVar21;
                  FUN_1403ed828(pcVar21);
                  pcVar21 = local_c8;
                }
              }
              _Size = (size_t)*(int *)(lVar16 + uVar22 * 8);
              if (0 < (longlong)_Size) {
                memcpy(*(void **)pcVar21,
                       (void *)((longlong)*(int *)(lVar16 + 4 + uVar22 * 8) +
                               *(longlong *)(param_2 + 0x48)),_Size);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a259af;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar17 == (longlong *)0x0 ||
                (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(),
                puVar11 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
            }
            lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar8 = *(int *)(lVar16 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar4;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar8 != 2) {
                if (iVar8 != 1) goto LAB_143a258cb;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                if (DVar9 == DVar10) goto LAB_143a25d49;
                goto LAB_143a258d4;
              }
            }
            else {
LAB_143a258cb:
              if (iVar8 != 0x10) {
LAB_143a258d4:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
                  goto LAB_143a25d49;
                  if (iVar8 == 1) {
                    DVar9 = FUN_140ad26c0();
                    DVar10 = GetCurrentThreadId();
                    if (DVar9 == DVar10) goto LAB_143a25d49;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar11 = (undefined8 *)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x308);
                  puVar13 = (uint *)*puVar11;
                  if (puVar13 != (uint *)0x0) goto LAB_143a25a8c;
                  while( true ) {
                    uVar15 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar15 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar15 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar4 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar12 = *(undefined4 **)(lVar4 + 0x310);
                    *(undefined8 *)(lVar4 + 0x310) = 0;
                    if (puVar12 == (undefined4 *)0x0) {
                      puVar12 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar12 = 0xffffffff;
                    *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
                    puVar12[0x12] = 0;
                    *puVar11 = puVar12;
                    FUN_140217a48(puVar11);
                    puVar13 = (uint *)*puVar11;
LAB_143a25a8c:
                    puVar20 = (undefined8 *)
                              (*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar18 = (uint *)(puVar20 + 0x1a);
                    uVar15 = puVar13[0x12];
                    if (puVar18 <= puVar13 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
                      LOCK();
                      uVar2 = *puVar13;
                      *puVar13 = *puVar13 + uVar15 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar15) != 0xffffffff) break;
                      puVar13 = (uint *)*puVar11;
                      *puVar13 = 0xffffffff;
                      *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
                      puVar13[0x12] = 0;
                      *puVar11 = puVar13;
                      puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
                      puVar18 = (uint *)(puVar20 + 0x1a);
                      uVar15 = 0;
                      if (puVar18 <= puVar13 + 0x4000) {
                        uVar15 = 1;
                        goto LAB_143a25b0c;
                      }
                    }
                  }
                  uVar15 = uVar15 + 1;
LAB_143a25b0c:
                  *(uint **)(puVar13 + 0x10) = puVar18;
                  puVar13[0x12] = uVar15;
                  iVar8 = 0;
                  FUN_1447247dc(puVar20,0);
                  *puVar20 = &PTR_FUN_14adc0c20;
                  *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar20 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar20 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar20 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_94;
                  puVar20[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar15 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
                      uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
                      iVar8 = 0;
                    }
                    else {
                      uVar22 = 2;
                    }
                  }
                  else {
                    iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar22 = 5;
                  }
                  if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
                  }
                  puVar20[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar20[9] = puVar20;
                  puVar20[10] = puVar20;
                  lVar4 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar4 == 0) {
                    uVar7 = 1;
                    if ((char)uVar22 != '\x06') {
                      uVar7 = uVar22;
                    }
                    uVar22 = uVar7;
                    uVar14 = 0;
                  }
                  else {
                    if ((char)uVar22 == '\x06') {
                      uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                    }
                    uVar14 = *(undefined8 *)(lVar4 + 0x30);
                  }
                  puVar20[0xf] = uVar14;
                  puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar20 + 0x1c) = iVar8;
                  if (puVar20 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar20);
                    LOCK();
                    piVar1 = (int *)(puVar20 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar20)(puVar20,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adc0c00;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_14814e518;
                  }
                  local_d8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aed8);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar17 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar17 = local_68;
                    }
                    (**(code **)(*plVar17 + 0x10))();
                  }
                }
                goto LAB_143a259af;
              }
            }
LAB_143a25d49:
            FUN_14814e428(&local_b0,&DAT_14ca85100);
            goto LAB_143a259af;
          }
          break;
        }
        iVar8 = (int)plVar17[2];
      } while (iVar8 != -1);
    }
  }
  uVar19 = 0;
LAB_143a259af:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a25e16 FUN_143a25e16 body=1581 status=ok
// SIG undefined FUN_143a25e16(void)

undefined8 FUN_143a25e16(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined1 local_dc [4];
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 *local_98;
  undefined8 **local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar4 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar4 + 0x48) & 0xfe) == 2) {
    bVar6 = *(byte *)(lVar4 + 0x30) >> 1 & 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  local_90 = &local_e8;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_108 = *(longlong *)(param_4 + 0x100);
  local_98 = &local_108;
  local_e8 = param_3;
  FUN_14814e5ce(param_1 + 0x20,local_dc,&local_98);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a26049;
  local_dc[0] = 0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14adc0c30;
  local_d8 = FUN_14814ea9a;
  local_b0 = local_dc;
  FUN_140bb9115(param_2,param_4);
  uStack_100 = *(undefined8 *)(param_4 + 0x100);
  local_f8 = *(undefined8 *)(param_4 + 0x870);
  uStack_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_ec = CONCAT31(uStack_ec._1_3_,local_dc[0]);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_108 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a25f6c;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a2639d;
      goto LAB_143a25f75;
    }
  }
  else {
LAB_143a25f6c:
    if (iVar7 != 0x10) {
LAB_143a25f75:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143a2639d;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a2639d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a2611d;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a2611d:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a2619d;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a2619d:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adc0c70;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_108._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_100._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_f8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = uStack_f0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_ec;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = (undefined8 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14adc0c50;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(local_88 + 4) = uStack_f0;
        *(undefined4 *)((longlong)local_88 + 0x24) = uStack_ec;
        *(undefined4 *)(local_88 + 1) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_88 + 0xc) = local_108._4_4_;
        *(undefined4 *)(local_88 + 2) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)local_88 + 0x14) = uStack_100._4_4_;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98 = (undefined8 *)&LAB_14814f0fc;
        }
        local_118 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3aedc);
        if (local_98 != (undefined8 *)0x0) {
          plVar14 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a26049;
    }
  }
LAB_143a2639d:
  FUN_14814eb04(&local_108,&DAT_14ca85100);
LAB_143a26049:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a26444 FUN_143a26444 body=1307 status=ok
// SIG undefined FUN_143a26444(void)

void FUN_143a26444(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a264b2;
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a264a1;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a264a6;
      goto LAB_143a26517;
    }
  }
  else {
LAB_143a264a1:
    if (iVar6 != 0x10) {
LAB_143a26517:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a264a6;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a264a6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a265fc;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a265fc:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a2667e;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a2667e:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adc0ca0;
        puVar15[0x15] = param_1;
        puVar15[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adc0c80;
        local_88[0] = &LAB_14814f294;
        local_60 = param_1;
        local_58 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3aee0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a264b2;
    }
  }
LAB_143a264a6:
  FUN_14814f1b2(param_1 + 0x70,uVar11);
LAB_143a264b2:
  FUN_14814f352(param_1 + 0x20,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a26960 FUN_143a26960 body=398 status=ok
// SIG undefined FUN_143a26960(void)

void FUN_143a26960(longlong param_1)

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



// FUNCTION 143a26aee FUN_143a26aee body=1882 status=ok
// SIG undefined FUN_143a26aee(void)

void FUN_143a26aee(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar14 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < (int)param_3[1]) {
    iVar14 = (int)param_3[1];
  }
  if (iVar14 == (int)param_1[5]) goto LAB_143a26fc8;
  FUN_143a26960(param_1);
  *(int *)(param_1 + 5) = iVar14;
  *(int *)(param_1 + 4) = iVar14 * 4 + 4;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  bVar15 = *(int *)((longlong)param_1 + 0x2c) != -1;
  uVar13 = 0x400;
  if (!bVar15) {
    uVar13 = 0x10;
  }
  iVar14 = iVar14 * 4 + 4;
  local_a8 = (undefined8 *)CONCAT44(DAT_14c873ed8,iVar14);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar15 * 8 + 0x4121);
  if (iVar14 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar13);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar13;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar13);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar13;
  }
  lVar10 = local_b0;
  plVar11 = param_1 + 1;
  if (plVar11 == &local_b0) {
LAB_143a26cea:
    lVar10 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar15) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
    lVar10 = *plVar11;
  }
  else {
    lVar5 = *plVar11;
    *plVar11 = local_b0;
    local_b0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar15) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_143a26cea;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    local_a8._0_3_ = 0x13900;
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar9 = param_1 + 3;
  if (plVar9 == &local_b0) {
LAB_143a26e21:
    lVar10 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar15) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    lVar10 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar15) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_143a26e21;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar11 == 0) || ((*(byte *)(*plVar11 + 0x28) & 0x10) == 0)) {
      local_a8 = (undefined8 *)0x13901;
    }
    else {
      local_a8 = (undefined8 *)0x40001;
    }
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar11 = param_1 + 2;
    if (plVar11 != &local_b0) {
      lVar10 = *plVar11;
      *plVar11 = local_b0;
      local_b0 = 0;
      if (lVar10 == 0) goto LAB_143a26fc8;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar10;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar15 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar15) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar15) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
    lVar10 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar10;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar15 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar15) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar15) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
LAB_143a26fc8:
  lVar5 = param_1[4];
  lVar10 = param_1[1];
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar5);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  lVar10 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar10,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2);
  }
  lVar5 = param_3[1];
  if (0 < (int)lVar5) {
    lVar6 = *param_3;
    lVar12 = 0;
    do {
      *(char *)(lVar10 + lVar12) = -*(char *)(lVar6 + lVar12);
      lVar12 = lVar12 + 1;
    } while ((int)lVar5 != (int)lVar12);
  }
  *(undefined1 *)(lVar10 + (longlong)(int)param_1[5] * 4) = 0;
  lVar10 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar10);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar10);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar10 = *param_1;
    local_b0 = CONCAT44((int)param_3[1],*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar10 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar10 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar10 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a2724a FUN_143a2724a body=450 status=ok
// SIG undefined FUN_143a2724a(void)

void FUN_143a2724a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14814ba1c(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2740e FUN_143a2740e body=282 status=ok
// SIG undefined FUN_143a2740e(void)

undefined8 * FUN_143a2740e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a27528 FUN_143a27528 body=282 status=ok
// SIG undefined FUN_143a27528(void)

undefined8 * FUN_143a27528(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a27642 FUN_143a27642 body=282 status=ok
// SIG undefined FUN_143a27642(void)

undefined8 * FUN_143a27642(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a2775c FUN_143a2775c body=282 status=ok
// SIG undefined FUN_143a2775c(void)

undefined8 * FUN_143a2775c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a27876 FUN_143a27876 body=1148 status=ok
// SIG undefined FUN_143a27876(void)

void FUN_143a27876(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_14814f8b6(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a27cf4 FUN_143a27cf4 body=1685 status=ok
// SIG undefined FUN_143a27cf4(void)

ulonglong FUN_143a27cf4(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a27d92;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a27d92;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 3;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a27d94;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a27ec3;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a282db;
          goto LAB_143a27ecc;
        }
LAB_143a282db:
        FUN_148152270(&local_c0,&DAT_14ca85100);
        goto LAB_143a27fa3;
      }
LAB_143a27ec3:
      if (iVar3 == 0x10) goto LAB_143a282db;
LAB_143a27ecc:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a282db;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a282db;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a2804d;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a2804d:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a280cd;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a280cd:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adc1250;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adc1230;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_148152780;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aee4);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a27fa3:
      FUN_14080c2b4();
      goto LAB_143a27d94;
    }
  }
LAB_143a27d92:
  uVar19 = 0;
LAB_143a27d94:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2838a FUN_143a2838a body=1733 status=ok
// SIG undefined FUN_143a2838a(void)

ulonglong FUN_143a2838a(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 unaff_RSI;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar18 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar18 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        if (*plVar14 == lVar3) {
          if ((plVar14 != (longlong *)0x0) && (pcVar4 = (char *)plVar14[1], pcVar4 != (char *)0x0))
          {
            uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a285c4;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar18 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                FUN_148150064(pcVar4 + 0x10,lVar18 + 0x50);
              }
              local_c0 = *(longlong *)(param_2 + 0x28);
              uVar19 = (ulonglong)param_3;
              FUN_1481516d2(pcVar4 + 0x10,*(undefined4 *)(local_c0 + uVar19 * 8));
              lVar18 = (longlong)*(int *)(local_c0 + uVar19 * 8);
              if (0 < lVar18) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c0 + 4 + uVar19 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar18 << 3);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a285c4;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar14 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar14 == (longlong *)0x0 ||
                (puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0x420))(),
                puVar9 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar6 = *(int *)(lVar18 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar6 != 2) {
                if (iVar6 != 1) goto LAB_143a284e3;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143a289a1;
                goto LAB_143a284ec;
              }
            }
            else {
LAB_143a284e3:
              if (iVar6 != 0x10) {
LAB_143a284ec:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar18 + 0xc60), iVar6 == 2))
                  goto LAB_143a289a1;
                  if (iVar6 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143a289a1;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar9 = (undefined8 *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x308);
                  puVar11 = (uint *)*puVar9;
                  if (puVar11 != (uint *)0x0) goto LAB_143a28713;
                  while( true ) {
                    uVar13 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar13 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar13 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar10 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar10 = 0xffffffff;
                    *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
                    puVar10[0x12] = 0;
                    *puVar9 = puVar10;
                    FUN_140217a48(puVar9);
                    puVar11 = (uint *)*puVar9;
LAB_143a28713:
                    puVar17 = (undefined8 *)
                              (*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar15 = (uint *)(puVar17 + 0x1a);
                    uVar13 = puVar11[0x12];
                    if (puVar15 <= puVar11 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                      LOCK();
                      uVar2 = *puVar11;
                      *puVar11 = *puVar11 + uVar13 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar13) != 0xffffffff) break;
                      puVar11 = (uint *)*puVar9;
                      *puVar11 = 0xffffffff;
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                      puVar11[0x12] = 0;
                      *puVar9 = puVar11;
                      puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                      puVar15 = (uint *)(puVar17 + 0x1a);
                      uVar13 = 0;
                      if (puVar15 <= puVar11 + 0x4000) {
                        uVar13 = 1;
                        goto LAB_143a28793;
                      }
                    }
                  }
                  uVar13 = uVar13 + 1;
LAB_143a28793:
                  *(uint **)(puVar11 + 0x10) = puVar15;
                  puVar11[0x12] = uVar13;
                  iVar6 = 0;
                  FUN_1447247dc(puVar17,0);
                  *puVar17 = &PTR_FUN_14adc1280;
                  *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar17 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar17 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar17 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_94;
                  puVar17[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar13 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                      uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
                      iVar6 = 0;
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar19 = 5;
                  }
                  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                  }
                  puVar17[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar17[9] = puVar17;
                  puVar17[10] = puVar17;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar5 = 1;
                    if ((char)uVar19 != '\x06') {
                      uVar5 = uVar19;
                    }
                    uVar19 = uVar5;
                    uVar12 = 0;
                  }
                  else {
                    if ((char)uVar19 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar12 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar17[0xf] = uVar12;
                  puVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar17 + 0x1c) = iVar6;
                  if (puVar17 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar17);
                    LOCK();
                    piVar1 = (int *)(puVar17 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar17)(puVar17,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adc1260;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_148152926;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aee8);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar14 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar14 = local_68;
                    }
                    (**(code **)(*plVar14 + 0x10))();
                  }
                }
                goto LAB_143a285c4;
              }
            }
LAB_143a289a1:
            FUN_148152836(&local_b0,&DAT_14ca85100);
            goto LAB_143a285c4;
          }
          break;
        }
        iVar6 = (int)plVar14[2];
      } while (iVar6 != -1);
    }
  }
  uVar16 = 0;
LAB_143a285c4:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a28a50 FUN_143a28a50 body=1581 status=ok
// SIG undefined FUN_143a28a50(void)

undefined8 FUN_143a28a50(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined1 local_dc [4];
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 *local_98;
  undefined8 **local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar4 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar4 + 0x48) & 0xfe) == 2) {
    bVar6 = *(byte *)(lVar4 + 0x30) >> 1 & 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  local_90 = &local_e8;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_108 = *(longlong *)(param_4 + 0x100);
  local_98 = &local_108;
  local_e8 = param_3;
  FUN_148152a0c(param_1 + 0x20,local_dc,&local_98);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a28c83;
  local_dc[0] = 0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14adc1290;
  local_d8 = FUN_148152ed8;
  local_b0 = local_dc;
  FUN_140bb9115(param_2,param_4);
  uStack_100 = *(undefined8 *)(param_4 + 0x100);
  local_f8 = *(undefined8 *)(param_4 + 0x870);
  uStack_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_ec = CONCAT31(uStack_ec._1_3_,local_dc[0]);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_108 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a28ba6;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a28fd7;
      goto LAB_143a28baf;
    }
  }
  else {
LAB_143a28ba6:
    if (iVar7 != 0x10) {
LAB_143a28baf:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143a28fd7;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a28fd7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a28d57;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a28d57:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a28dd7;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a28dd7:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adc12d0;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_108._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_100._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_f8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = uStack_f0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_ec;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = (undefined8 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14adc12b0;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(local_88 + 4) = uStack_f0;
        *(undefined4 *)((longlong)local_88 + 0x24) = uStack_ec;
        *(undefined4 *)(local_88 + 1) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_88 + 0xc) = local_108._4_4_;
        *(undefined4 *)(local_88 + 2) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)local_88 + 0x14) = uStack_100._4_4_;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98 = (undefined8 *)&LAB_14815353a;
        }
        local_118 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3aeec);
        if (local_98 != (undefined8 *)0x0) {
          plVar14 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a28c83;
    }
  }
LAB_143a28fd7:
  FUN_148152f42(&local_108,&DAT_14ca85100);
LAB_143a28c83:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2907e FUN_143a2907e body=1307 status=ok
// SIG undefined FUN_143a2907e(void)

void FUN_143a2907e(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a290ec;
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a290db;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a290e0;
      goto LAB_143a29151;
    }
  }
  else {
LAB_143a290db:
    if (iVar6 != 0x10) {
LAB_143a29151:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a290e0;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a290e0;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a29236;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a29236:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a292b8;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a292b8:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adc1300;
        puVar15[0x15] = param_1;
        puVar15[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adc12e0;
        local_88[0] = &LAB_1481536d2;
        local_60 = param_1;
        local_58 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3aef0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a290ec;
    }
  }
LAB_143a290e0:
  FUN_1481535f0(param_1 + 0x70,uVar11);
LAB_143a290ec:
  FUN_148153790(param_1 + 0x20,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2959a FUN_143a2959a body=398 status=ok
// SIG undefined FUN_143a2959a(void)

void FUN_143a2959a(longlong param_1)

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



// FUNCTION 143a29728 FUN_143a29728 body=1879 status=ok
// SIG undefined FUN_143a29728(void)

void FUN_143a29728(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *_Dst;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar12 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar12 = *(int *)(param_3 + 1);
  }
  if (iVar12 == (int)param_1[5]) goto LAB_143a29c02;
  FUN_143a2959a(param_1);
  *(int *)(param_1 + 5) = iVar12;
  *(int *)(param_1 + 4) = iVar12 * 8 + 8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  bVar13 = *(int *)((longlong)param_1 + 0x2c) != -1;
  uVar10 = 0x400;
  if (!bVar13) {
    uVar10 = 0x10;
  }
  iVar12 = iVar12 * 8 + 8;
  local_a8 = (undefined8 *)CONCAT44(DAT_14c873998,iVar12);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar13 * 8 + 0x4121);
  if (iVar12 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar10);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar10;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar10);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar10;
  }
  lVar11 = local_b0;
  plVar9 = param_1 + 1;
  if (plVar9 == &local_b0) {
LAB_143a29924:
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
    lVar11 = *plVar9;
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_143a29924;
    }
  }
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x28) & 0x10) == 0)) {
    local_a8._0_3_ = 0x11d00;
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar8 = param_1 + 3;
  if (plVar8 == &local_b0) {
LAB_143a29a5b:
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  else {
    lVar11 = *plVar8;
    *plVar8 = local_b0;
    local_b0 = 0;
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_143a29a5b;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar9 == 0) || ((*(byte *)(*plVar9 + 0x28) & 0x10) == 0)) {
      local_a8 = (undefined8 *)0x11d01;
    }
    else {
      local_a8 = (undefined8 *)0x40001;
    }
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar9 = param_1 + 2;
    if (plVar9 != &local_b0) {
      lVar11 = *plVar9;
      *plVar9 = local_b0;
      local_b0 = 0;
      if (lVar11 == 0) goto LAB_143a29c02;
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar11;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar13) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar13) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar11;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar13) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar13) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
LAB_143a29c02:
  lVar5 = param_1[4];
  lVar11 = param_1[1];
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar5);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar11,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) << 3);
  }
  *(undefined8 *)((longlong)_Dst + (longlong)(int)param_1[5] * 8) = 0xffffffffffffffff;
  lVar11 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar11);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar11);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar11 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar11 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar11 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar11 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a29e80 FUN_143a29e80 body=450 status=ok
// SIG undefined FUN_143a29e80(void)

void FUN_143a29e80(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14814fbde(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2a044 FUN_143a2a044 body=282 status=ok
// SIG undefined FUN_143a2a044(void)

undefined8 * FUN_143a2a044(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a2a15e FUN_143a2a15e body=282 status=ok
// SIG undefined FUN_143a2a15e(void)

undefined8 * FUN_143a2a15e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a2a278 FUN_143a2a278 body=282 status=ok
// SIG undefined FUN_143a2a278(void)

undefined8 * FUN_143a2a278(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a2a392 FUN_143a2a392 body=282 status=ok
// SIG undefined FUN_143a2a392(void)

undefined8 * FUN_143a2a392(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a091f0);
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



// FUNCTION 143a2a4cc FUN_143a2a4cc body=29 status=ok
// SIG undefined FUN_143a2a4cc(void)

undefined8 FUN_143a2a4cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a2a4e9 FUN_143a2a4e9 body=7879 status=ok
// SIG undefined FUN_143a2a4e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a2a4e9(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  char **local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14cb399f8);
  if (cVar2 == '\0') {
    _DAT_14cb399f8 = 0;
    uRam000000014cb39a00 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14ada46b0;
  local_88 = (char **)0x1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ada4700,1,&PTR_FUN_14ada46d0);
  local_88 = (char **)0x14ada4728;
  FUN_145d706a8(&DAT_14cb3af08,L"NiagaraDynamicData",0,L"r.RenderCommandPipe.NiagaraDynamicData");
  atexit((_func_5014 *)&LAB_1439f4d36);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb39cd0,L"fx.Niagara.ParallelGDME",&DAT_14c76280c,
                L"Allow Niagara to run parallel in GDME.");
  atexit(FUN_1439f4d42);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39ce0,L"fx.Niagara.Solo.TickEarly",&DAT_14c762810,
                L"When enabled will tick kin the first available tick group.");
  atexit(FUN_1439f4d87);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39cf0,L"fx.Niagara.Solo.AllowAsyncWorkToEndOfFrame",&DAT_14c762814,
                L"Allow async work to continue until the end of the frame for solo Niagara instances, if false it will complete within the tick group it started in."
               );
  atexit(FUN_1439f4dcc);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39d00,L"fx.SuppressNiagaraSystems",&DAT_14cb39d10,
                L"If > 0 Niagara particle systems will not be activated. \n");
  atexit(FUN_1439f4e11);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39d18,L"fx.Niagara.ComponentWarnNullAsset",&DAT_14cb39d28,
                L"When enabled we will warn if a NiagaraComponent is activate with a null asset.  This is sometimes useful for tracking down components that can be removed."
               );
  atexit(FUN_1439f4e56);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39d30,L"fx.Niagara.ComponentWarnAsleepCullReaction",&DAT_14c762818,
                L"When enabled we will warn if a NiagaraComponent completes naturally but has Asleep mode set for cullreaction."
               );
  atexit(FUN_1439f4e9b);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39d40,L"fx.Niagara.UseFastSetUserParametersToDefaultValues",&DAT_14c76281c,
                L"When a component is activated we will check the surpession list.");
  atexit(FUN_1439f4ee0);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39d50,L"fx.Niagara.ForceWaitForCompilationOnActivate",&DAT_14cb39d60,
                L"When a component is activated it will stall waiting for any pending shader compilation."
               );
  atexit(FUN_1439f4f25);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb39d68,L"r.PSOPrecache.NiagaraComponentPSOPrecachePriority",&DAT_14cb39d78,
                L"Niagara component PSO precache priority level.\n 0. Niagara component\'s PSO precache requests are set to high priority (default)\n 1. Niagara component\'s PSO precache requests are set to highest priority"
               );
  atexit(FUN_1439f4f6a);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_14adbbc00;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14cb39d80,L"fx.Niagara.DumpComponents",
                L"Dump Information about all Niagara Components",&local_70);
  if (local_68 == 0) {
LAB_143a2a85d:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2a85d;
  }
  atexit(FUN_1439f4faf);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_14adbbc90;
  ppuStack_80 = (undefined **)((ulonglong)ppuStack_80 & 0xffffffff00000000);
  local_88 = &local_70;
  FUN_141703554(&DAT_14cb39d90,L"fx.Niagara.Scalability.CanPreventCullingOnPlayerFX",&DAT_14c762820,
                L"When enabled Niagara can optionally prevent scalability culling on FX linked to the player."
               );
  if (local_68 == 0) {
LAB_143a2a943:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2a943;
  }
  atexit(FUN_1439f4ff4);
  FUN_1446f470e(&DAT_14cb39dd0,L"Source",1);
  FUN_1446f470e(&DAT_14cb39dd8,L"Source Tangent",1);
  FUN_1446f470e(&DAT_14cb39de0,L"Target",1);
  FUN_1446f470e(&DAT_14cb39de8,L"Target Tangent",1);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb39df8,L"gbx.LightBeam.GlobalMaxLength",&DAT_14cb39df0,
                L"If >0, the length of light beams are clamped in non-editor builds.");
  atexit(FUN_1439f7aa6);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb39e08,L"fx.Niagara.LeakDetector.Enabled",&DAT_14cb39e18,
                L"Enables or disables the leak detector.");
  atexit(FUN_1439f7b10);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb39e20,L"fx.Niagara.LeakDetector.TickDeltaSeconds",&DAT_14c762824,
                L"The time in seconds that must pass before we sample the component information.");
  atexit(FUN_1439f7b55);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39e30,L"fx.Niagara.LeakDetector.GrowthCountThreshold",&DAT_14c762828,
                L"We need to see growth this many times without a drop in count before we consider it a leak."
               );
  atexit(FUN_1439f7b9a);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39e40,L"fx.Niagara.LeakDetector.ReportActiveLeaks",&DAT_14c76282c,
                L"How do we report active components leaks?0 - Never report.1 - Report immediately. (default)2 - Report on GC.\n"
               );
  atexit(FUN_1439f7bdf);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39e50,L"fx.Niagara.LeakDetector.ReportTotalLeaks",&DAT_14c762830,
                L"How do we report total components leaks?0 - Never report.1 - Report immediately.2 - Report on GC. (default)\n"
               );
  atexit(FUN_1439f7c24);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb39e60,L"fx.Niagara.LeakDetector.DebugMessageTime",&DAT_14c762834,
                L"Time we display the debug message for on screen.");
  atexit(FUN_1439f7c69);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = (char **)0x2;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ada65d0,1,&PTR_FUN_14ada6580);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb39eb8,L"FX.NiagaraComponentPool.KillUnusedTime",&DAT_14c762838,
                L"How long a pooled particle component needs to be unused for before it is destroyed."
               );
  atexit(FUN_1439f8094);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39ec8,L"FX.NiagaraComponentPool.Enable",&DAT_14c76283c,
                L"How many Particle System Components to preallocate when creating new ones for the pool."
               );
  atexit(FUN_1439f80d9);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39ed8,L"FX.NiagaraComponentPool.Validation",&DAT_14cb39ee8,
                L"Enables pooling validation.");
  atexit(FUN_1439f811e);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb39ef0,L"FX.NiagaraComponentPool.CleanTime",&DAT_14c762840,
                L"How often should the pool be cleaned (in seconds).");
  atexit(FUN_1439f8163);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb39f00,L"FX.NiagaraComponentPool.KeepComponentsRegistered",&DAT_14c762844,
                L"If non-zero, components returend to the pool are kept registered with the world but set invisible. This will reduce the cost of pushing/popping components int."
               );
  atexit(FUN_1439f81a8);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_14a1e19d0;
  *(undefined **)(local_70 + 0x18) = &DAT_1481111c6;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14156bb80(&DAT_14cb39f10,L"FX.DumpNCPoolInfo",L"Dump Niagara System Pooling Info",&local_70);
  if (local_68 == 0) {
LAB_143a2ad0f:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2ad0f;
  }
  atexit(FUN_1439f81ed);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = (char **)0x1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ada7420,1,&PTR_FUN_14ada73f0);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb39f50,L"fx.Niagara.ComponentRenderComponentCountWarning",&DAT_14c762848,
                L"The max number of allowed components before a ui warning is shown in the component renderer."
               );
  atexit(FUN_1439f835e);
  DAT_14cb39fa0 = 0;
  _DAT_14cb39fa8 = 0;
  atexit((_func_5014 *)&LAB_1439f83a3);
  DAT_14cb39fe8 = 0;
  _DAT_14cb39ff0 = 0;
  DAT_14cb39fc8 = 0;
  _DAT_14cb39fd0 = 0;
  _DAT_14cb39ff4 = 0xffffffff00000080;
  DAT_14cb39ffc = 0;
  DAT_14cb3a008 = 0;
  DAT_14cb3a010 = 0;
  atexit(FUN_1439f83e5);
  _DAT_14cb3a038 = 0;
  _DAT_14cb3a040 = 0;
  DAT_14cb3a018 = 0;
  _DAT_14cb3a020 = 0;
  _DAT_14cb3a044 = 0xffffffff00000080;
  DAT_14cb3a04c = 0;
  DAT_14cb3a058 = 0;
  DAT_14cb3a060 = 0;
  atexit(FUN_1439f848e);
  _DAT_14cb3a088 = 0;
  _DAT_14cb3a090 = 0;
  DAT_14cb3a068 = 0;
  _DAT_14cb3a070 = 0;
  _DAT_14cb3a094 = 0xffffffff00000080;
  DAT_14cb3a09c = 0;
  DAT_14cb3a0a8 = 0;
  DAT_14cb3a0b0 = 0;
  atexit(FUN_1439f84bd);
  DAT_14cb3a0d8 = 0;
  _DAT_14cb3a0e0 = 0;
  DAT_14cb3a0b8 = 0;
  _DAT_14cb3a0c0 = 0;
  _DAT_14cb3a0e4 = 0xffffffff00000080;
  DAT_14cb3a0ec = 0;
  DAT_14cb3a0f8 = 0;
  DAT_14cb3a100 = 0;
  atexit(FUN_1439f84ec);
  DAT_14cb3a108 = 0;
  uRam000000014cb3a110 = 0;
  atexit((_func_5014 *)&LAB_1439f8595);
  DAT_14cb3a118 = 0;
  uRam000000014cb3a120 = 0;
  atexit((_func_5014 *)&LAB_1439f85a6);
  DAT_14cb3a128 = 0;
  uRam000000014cb3a130 = 0;
  atexit((_func_5014 *)&LAB_1439f85b7);
  DAT_14cb3a138 = 0;
  uRam000000014cb3a140 = 0;
  atexit((_func_5014 *)&LAB_1439f85c8);
  DAT_14cb3a148 = 0;
  _DAT_14cb3a150 = 0;
  atexit((_func_5014 *)&LAB_1439f85d9);
  DAT_14cb3a158 = 0;
  _DAT_14cb3a160 = 0;
  atexit((_func_5014 *)&LAB_1439f85ea);
  DAT_14cb3a168 = 0;
  _DAT_14cb3a170 = 0;
  atexit((_func_5014 *)&LAB_1439f85fb);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(code **)(local_70 + 0x18) = FUN_1439f860c;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb3a178,L"fx.Niagara.SetSystemDenyList",&DAT_14cb3a108,
                L"Set the system deny List to use. (i.e. NS_SystemA,NS_SystemB)");
  if (local_68 == 0) {
LAB_143a2afeb:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2afeb;
  }
  atexit(FUN_1439f8649);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(code **)(local_70 + 0x18) = FUN_1439f868e;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb3a188,L"fx.Niagara.SetEmitterDenyList",&DAT_14cb3a118,
                L"Set the emitter deny list to use. (i.e. NS_SystemA:EmitterA,NS_SystemB:EmitterA)")
  ;
  if (local_68 == 0) {
LAB_143a2b0ce:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2b0ce;
  }
  atexit(FUN_1439f8721);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(code **)(local_70 + 0x18) = FUN_1439f868e;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb3a198,L"fx.Niagara.SetGpuEmitterDenyList",&DAT_14cb3a128,
                L"Set the Gpu emitter deny list to use. (i.e. NS_SystemA:EmitterA,NS_SystemB:EmitterA)"
               );
  if (local_68 == 0) {
LAB_143a2b1aa:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2b1aa;
  }
  atexit(FUN_1439f8766);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(code **)(local_70 + 0x18) = FUN_1439f868e;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb3a1a8,L"fx.Niagara.SetGpuDataInterfaceDenyList",&DAT_14cb3a138,
                L"Set the Gpu data interface deny list to use.  (i.e. UMyDataInteraceA,UMyDataInteraceB)"
               );
  if (local_68 == 0) {
LAB_143a2b286:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2b286;
  }
  atexit(FUN_1439f87ab);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(undefined1 **)(local_70 + 0x18) = &LAB_148111625;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb3a1b8,L"fx.Niagara.SetGpuRHIDenyList",&DAT_14cb3a148,
                L"Set Gpu RHI deny list to use, comma separated and uses wildcards, i.e. (*MyRHI*) would exclude anything that contains MyRHI"
               );
  if (local_68 == 0) {
LAB_143a2b369:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2b369;
  }
  atexit(FUN_1439f87f0);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(undefined1 **)(local_70 + 0x18) = &LAB_148111625;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb3a1c8,L"fx.Niagara.SetGpuRHIAdapterDenyList",&DAT_14cb3a158,
                L"Set Gpu RHI Adapter deny list to use, comma separated and uses wildcards, i.e. (*MyGpu*) would exclude anything that contains MyGpu"
               );
  if (local_68 == 0) {
LAB_143a2b445:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2b445;
  }
  atexit(FUN_1439f8835);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(undefined1 **)(local_70 + 0x18) = &LAB_148111625;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_1412c810e(&DAT_14cb3a1d8,L"fx.Niagara.SetGpuDenyList",&DAT_14cb3a168,
                L"Set Gpu deny list to use, more targetted than to allow comparing OS,OSVersion,CPU,GPU.\nFormat is OSLabel,OSVersion,CPU,GPU| blank entries are assumed to auto pass matching.\nFor example, =\",,MyCpu,MyGpu+MyOS,,,\" would match MyCpu & MyGpu or MyOS."
               );
  if (local_68 == 0) {
LAB_143a2b521:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a2b521;
  }
  atexit(FUN_1439f887a);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e17030;
  *(undefined1 **)(local_70 + 0x18) = &LAB_148111625;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = &local_70;
  FUN_14171ec12(&DAT_14cb3a1e8,L"fx.Niagara.GpuEmitterCheckFloat16Support",&DAT_14c76284e,
                L"When enabled we check to see if the RHI has support for Float16 UAV read / write, if it doesn\'t GPU emitters that use Float16 are banned from running."
               );
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_143a2b60b;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143a2b60b:
  atexit(FUN_1439f88bf);
  DAT_14cb3a1f8 = 0;
  _DAT_14cb3a200 = 0;
  atexit(FUN_1439f8b3b);
  DAT_14cb3a208 = 0;
  _DAT_14cb3a210 = 0;
  atexit(FUN_1439f8b6c);
  DAT_14cb3a218 = 0;
  _DAT_14cb3a220 = 0;
  atexit(FUN_1439f8b9d);
  DAT_14cb3a228 = 0;
  _DAT_14cb3a230 = 0;
  atexit(FUN_1439f8bce);
  DAT_14cb3a258 = 0;
  DAT_14cb3a260 = 0;
  DAT_14cb3a238 = 0;
  _DAT_14cb3a240 = 0;
  _DAT_14cb3a264 = 0xffffffff00000080;
  DAT_14cb3a26c = 0;
  DAT_14cb3a278 = 0;
  DAT_14cb3a280 = 0;
  atexit(FUN_1439f8bff);
  _DAT_14cb3a2a8 = 0;
  _DAT_14cb3a2b0 = 0;
  DAT_14cb3a288 = 0;
  _DAT_14cb3a290 = 0;
  _DAT_14cb3a2b4 = 0xffffffff00000080;
  DAT_14cb3a2bc = 0;
  DAT_14cb3a2c8 = 0;
  DAT_14cb3a2d0 = 0;
  atexit(FUN_1439f8c28);
  DAT_14cb3a2d8 = 0;
  _DAT_14cb3a2e0 = 0;
  atexit(FUN_1439f8c57);
  DAT_14cb3a308 = 0;
  DAT_14cb3a310 = 0;
  DAT_14cb3a2e8 = 0;
  _DAT_14cb3a2f0 = 0;
  _DAT_14cb3a314 = 0xffffffff00000080;
  DAT_14cb3a31c = 0;
  DAT_14cb3a328 = 0;
  DAT_14cb3a330 = 0;
  atexit(FUN_1439f8c88);
  _DAT_14cb3a358 = 0;
  _DAT_14cb3a360 = 0;
  DAT_14cb3a338 = 0;
  _DAT_14cb3a340 = 0;
  _DAT_14cb3a364 = 0xffffffff00000080;
  DAT_14cb3a36c = 0;
  DAT_14cb3a378 = 0;
  DAT_14cb3a380 = 0;
  atexit(FUN_1439f8cb1);
  DAT_14cb3a3a8 = 0;
  DAT_14cb3a3b0 = 0;
  DAT_14cb3a388 = 0;
  _DAT_14cb3a390 = 0;
  _DAT_14cb3a3b4 = 0xffffffff00000080;
  DAT_14cb3a3bc = 0;
  DAT_14cb3a3c8 = 0;
  DAT_14cb3a3d0 = 0;
  atexit(FUN_1439f8ce0);
  _DAT_14cb3a3f8 = 0;
  _DAT_14cb3a400 = 0;
  DAT_14cb3a3d8 = 0;
  _DAT_14cb3a3e0 = 0;
  _DAT_14cb3a404 = 0xffffffff00000080;
  DAT_14cb3a40c = 0;
  DAT_14cb3a418 = 0;
  DAT_14cb3a420 = 0;
  atexit(FUN_1439f8d09);
  _DAT_14cb3a448 = 0;
  _DAT_14cb3a450 = 0;
  _DAT_14cb3a428 = 0;
  _DAT_14cb3a430 = 0;
  _DAT_14cb3a454 = 0xffffffff00000080;
  DAT_14cb3a45c = 0;
  DAT_14cb3a468 = 0;
  DAT_14cb3a470 = 0;
  atexit(FUN_1439f8d38);
  DAT_14cb3a478 = 0;
  _DAT_14cb3a480 = 0;
  atexit(FUN_1439f8d67);
  local_70 = "InputPin";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb3a488 = (ulonglong)uVar3;
  local_70 = "OutputPin";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb3a490 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb3af58,&DAT_149e31290,1);
  FUN_1446f470e(&DAT_14cb3a498,L"Engine",1);
  FUN_1446f470e(&DAT_14cb3a4a0,L"System",1);
  FUN_1446f470e(&DAT_14cb3a4a8,L"Emitter",1);
  FUN_1446f470e(&DAT_14cb3a4b0,L"Particles",1);
  FUN_1446f470e(&DAT_14cb3a4b8,L"Module",1);
  FUN_1446f470e(&DAT_14cb3a4c0,L"Output",1);
  FUN_1446f470e(&DAT_14cb3a4c8,L"Transient",1);
  FUN_1446f470e(&DAT_14cb3a4d0,L"StackContext",1);
  FUN_1446f470e(&DAT_14cb3a4d8,L"DataInstance",1);
  FUN_1446f470e(&DAT_14cb3a4e0,L"StaticSwitch",1);
  FUN_1446f470e(&DAT_14cb3a4e8,L"Array",1);
  FUN_1446f470e(&DAT_14cb3a4f0,&DAT_14ada7f98,1);
  FUN_140056680(&DAT_14cb3a4f8,L"Initial");
  atexit((_func_5014 *)&LAB_1439f8d98);
  FUN_1446f470e(&DAT_14cb3a508,L"Local",1);
  FUN_1446f470e(&DAT_14cb3a510,L"Initial",1);
  FUN_1446f470e(&DAT_14cb3afa0,L"Previous",1);
  FUN_1446f470e(&DAT_14cb3a518,L"Owner",1);
  FUN_1446f470e(&DAT_14cb3a520,L"EngineOwner",1);
  FUN_1446f470e(&DAT_14cb3a528,L"EngineSystem",1);
  FUN_1446f470e(&DAT_14cb3a530,L"EngineEmitter",1);
  FUN_1446f470e(&DAT_14cb3a538,L"Custom",1);
  FUN_140056680(&DAT_14cb3afb8,L"SetVariables");
  atexit((_func_5014 *)&LAB_1439f8da9);
  FUN_140056680(&DAT_14cb3afd8,L"Engine");
  atexit((_func_5014 *)&LAB_1439f8dba);
  FUN_140056680(&DAT_14cb3aff8,L"Emitter");
  atexit((_func_5014 *)&LAB_1439f8dcb);
  FUN_140056680(&DAT_14cb3a540,L"Output");
  atexit((_func_5014 *)&LAB_1439f8ddc);
  FUN_140056680(&DAT_14cb3afa8,L"Module");
  atexit((_func_5014 *)&LAB_1439f8ded);
  FUN_140056680(&DAT_14cb3a550,&DAT_14ada7f98);
  atexit((_func_5014 *)&LAB_1439f8dfe);
  FUN_140056680(&DAT_14cb3af70,L"Particles");
  atexit((_func_5014 *)&LAB_1439f8e0f);
  FUN_140056680(&DAT_14cb3afc8,L"Constants");
  atexit((_func_5014 *)&LAB_1439f8e20);
  FUN_140056680(&DAT_14cb3af90,L"StackContext");
  atexit((_func_5014 *)&LAB_1439f8e31);
  FUN_140056680(&DAT_14cb3af80,L"System");
  atexit((_func_5014 *)&LAB_1439f8e42);
  FUN_140056680(&DAT_14cb3afe8,&DAT_149e31290);
  atexit((_func_5014 *)&LAB_1439f8e53);
  FUN_140056680(&DAT_14cb3af60,L"__INTERNAL__");
  atexit((_func_5014 *)&LAB_1439f8e64);
  FUN_140056680(&DAT_14cb3aef8,L"Previous");
  atexit((_func_5014 *)&LAB_1439f8e75);
  FUN_1446f470e(&DAT_14cb3a560,L"Input",1);
  FUN_1446f470e(&DAT_14cb3a568,L"Output",1);
  FUN_1446f470e(&DAT_14cb3a570,L"OutputModule",1);
  FUN_1446f470e(&DAT_14cb3a578,L"ScriptTransient",1);
  FUN_1446f470e(&DAT_14cb3a580,L"ScriptPersistent",1);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3a5e8,L"fx.EnableNiagaraCRHandler",&DAT_14cb3a5f8,
                L"If > 0 Niagara will push some state into the crash reporter. This is not free so should not be used unless actively tracking a crash in the wild. Even then it should only be enabled on the platforms needed etc. \n"
               );
  atexit(FUN_143a04817);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = (char **)0x1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adadf50,1,&PTR_FUN_14adadf20);
  FUN_1446f470e(&DAT_14cb3a630,L"TotalCullProxies",1);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14adaf580;
  local_88 = (char **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adaf5a0,2,0);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb3a6b8,L"fx.Niagara.DataChannels.WarnOnLateWrites",&DAT_14cb3a6b0,
                L"If true, late writes to NDCs will generate warnings. Late meaning after their final allowed tick group."
               );
  atexit(FUN_143a04893);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3a6d0,L"fx.Niagara.DataChannels.LogWritesToOutputLog",&DAT_14cb3a6c8,
                L"0=Disabled, 1=Log write summary, 2=Also write data; If >0, the NDC debugger will print all data channel writes to the output log."
               );
  atexit(FUN_143a048d8);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3a6e8,L"fx.Niagara.DataChannels.FrameDataToCapture",&DAT_14cb3a6e0,
                L"The number of frames the debugger will capture for write requests.");
  atexit(FUN_143a0491d);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb3a6f8,L"fx.Niagara.DataChannels.AutoUploadGPUSpawnData",&DAT_14c76284f,
                L"When true we will automatically upload any CPU NDC data to the GPU if it has been used to spawn GPU particles."
               );
  atexit(FUN_143a04962);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3a748,L"fx.Niagara.DataChannels.AllowLazyHandlerInit",&DAT_14c762850,
                L"True if we allow lazy initialization of NDC handlers.");
  atexit(FUN_143a07507);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3a760,L"fx.Niagara.DataChannels.DumpHandlerTick",&DAT_14cb3a758,
                &DAT_14ad81004);
  atexit(FUN_143a07773);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb3a770 = (ulonglong)uVar3;
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3a778,L"fx.Niagara.DataChannels.AllowAsyncLoad",&DAT_14c762854,
                L"True if we should attempt to load systems etc asynchronosly.");
  atexit(FUN_143a077c8);
  local_88 = (char **)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3a788,L"fx.Niagara.DataChannels.BlockAsyncLoadOnUse",&DAT_14c762858,
                L"True if we should block on any pending async loads when those assets are used.");
  atexit(FUN_143a0780d);
  uStack_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adb02b0,1,0);
  uStack_78 = 0;
  local_88 = (char **)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adb0940,1,0);
  FUN_1446f470e(&DAT_14cb3a7c8,L"LoadTexture",1);
  FUN_1446f470e(&DAT_14cb3a7d0,L"GatherRedTexture",1);
  FUN_1446f470e(&DAT_14cb3a7d8,L"SampleTexture",1);
  FUN_1446f470e(&DAT_14cb3a7e0,L"TextureDimensions",1);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = (char **)0x1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adb1650,2,&PTR_FUN_14adb1620);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = (char **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adb4510,8,0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = (char **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adb9270,1,0);
  FUN_1446f470e(&DAT_14cb3aa68,L"Length",1);
  FUN_1446f470e(&DAT_14cb3aa70,L"IsValidIndex",1);
  FUN_1446f470e(&DAT_14cb3aa78,L"LastIndex",1);
  FUN_1446f470e(&DAT_14cb3aa80,&DAT_14ad8c4d2,1);
  FUN_1446f470e(&DAT_14cb3aa88,L"Clear",1);
  FUN_1446f470e(&DAT_14cb3aa90,L"Resize",1);
  FUN_1446f470e(&DAT_14cb3aa98,L"SetArrayElem",1);
  FUN_1446f470e(&DAT_14cb3aaa0,&DAT_149e97e80,1);
  FUN_1446f470e(&DAT_14cb3aaa8,L"RemoveLastElem",1);
  local_70 = "AtomicAdd";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3aab0 = (ulonglong)uVar3;
  local_70 = "AtomicMin";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3aab8 = (ulonglong)uVar3;
  local_70 = "AtomicMax";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3aac0 = (ulonglong)uVar3;
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = (char **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adba460,3,0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = (char **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adbaaa0,1,0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = (char **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adbb000,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2c3d6 FUN_143a2c3d6 body=1366 status=ok
// SIG undefined FUN_143a2c3d6(void)

void FUN_143a2c3d6(longlong param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined8 local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  int local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 0x114) = param_2;
  *(undefined4 *)(param_1 + 0x118) = param_3;
  param_2 = *(int *)(param_1 + 0x158) * param_2;
  if (param_2 == 0) goto LAB_143a2c410;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a2c45d;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a2c466;
      goto LAB_143a2c4f7;
    }
LAB_143a2c466:
    if (*(int *)(param_1 + 0x150) != 0) {
      FUN_14011fb0c(param_1 + 0x140);
    }
    local_98 = (code **)CONCAT44(local_98._4_4_,param_2);
    local_80 = 0;
    local_88 = 1;
    local_90 = 0xd;
    FUN_140661c88(param_1 + 0x140,&DAT_14ca85100,
                  L"FNiagaraDataInterfaceProxyOscilloscope_GPUDownsampledBuffer",4);
  }
  else {
LAB_143a2c45d:
    if (iVar6 == 0x10) goto LAB_143a2c466;
LAB_143a2c4f7:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_143a2c466;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a2c466;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_143a2c5d5;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_143a3b683);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_143a2c5d5:
        puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x17);
        uVar12 = puVar10[0x12];
        if (puVar14 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_143a2c655;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143a2c655:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      iVar6 = 0;
      FUN_1447247dc(puVar15,0);
      *puVar15 = &PTR_FUN_14adcbf80;
      *(int *)(puVar15 + 0x15) = param_2;
      puVar15[0x16] = param_1;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar6 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
      }
      puVar15[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar15[9] = puVar15;
      puVar15[10] = puVar15;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar15[0xf] = uVar11;
      puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar15 + 0x1c) = iVar6;
      if (puVar15 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar15);
        LOCK();
        piVar1 = (int *)(puVar15 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar15)(puVar15,1);
        }
      }
    }
    else {
      local_98 = local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14adcbf30;
      local_78[0] = FUN_143a3b5ea;
      local_50 = param_2;
      local_48 = param_1;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateDIAudioBuffer",&DAT_14cb3baf4);
      if (local_78[0] != (code *)0x0) {
        pppuVar13 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar13 = &local_58;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  FUN_14702fd0c(param_1 + 0x160,*(int *)(param_1 + 0x114) << 3,1);
LAB_143a2c410:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2c92e FUN_143a2c92e body=1195 status=ok
// SIG undefined FUN_143a2c92e(void)

void FUN_143a2c92e(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_70 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a2c971;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a2c976;
      goto LAB_143a2c9a7;
    }
  }
  else {
LAB_143a2c971:
    if (iVar6 != 0x10) {
LAB_143a2c9a7:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a2c976;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a2c976;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a2cb00;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a2cb00:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a2cb80;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a2cb80:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adcbfe0;
        puVar16[0x15] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14adcbfc0;
        local_68[0] = &LAB_143a3b9d0;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateDIAudioBuffer",&DAT_14cb3baf8);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a2ca3e;
    }
  }
LAB_143a2c976:
  FUN_143a3b862(&local_70,&DAT_14ca85100);
LAB_143a2ca3e:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2cdda FUN_143a2cdda body=3550 status=ok
// SIG undefined FUN_143a2cdda(void)

undefined8 FUN_143a2cdda(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  void *_Src;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  size_t _Size;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  longlong local_288;
  longlong *local_278;
  undefined4 *local_270;
  undefined4 *local_268;
  longlong local_260;
  undefined8 local_258;
  undefined4 *local_250;
  uint *local_248;
  longlong *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  void *local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 *local_168;
  int local_160;
  int local_158 [4];
  code *local_148;
  longlong *local_138;
  longlong local_128 [14];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  plVar8 = *(longlong **)(param_3 + 0xe);
  local_250 = param_3;
  lVar7 = FUN_1400bd118(*(undefined8 *)(param_3 + 0xc));
  local_260 = *(longlong *)(lVar7 + 0x10);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_1e0[0] = 0xffffffff;
  local_1d8 = 0;
  local_1d0[0] = FUN_144830b78(local_1d0,&DAT_14cb42160);
  local_1c8 = (void *)0x0;
  uStack_1c0 = 0;
  local_278 = plVar8;
  if (**(longlong **)(param_2 + 8) == 0) {
    do {
      cVar4 = FUN_14816e200(param_2 + 0x10);
    } while (cVar4 != '\0');
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x34);
    if ((uint)((int)uStack_b0 - local_84) < uVar6) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar6);
      }
      FUN_14816e370(&local_b8,uVar6);
      iVar5 = 1;
      if (3 < uVar6) {
        uVar6 = (uVar6 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((local_70 == 0) || (local_70 < iVar5)) {
        local_70 = iVar5;
        FUN_14816e50e();
      }
    }
    *(undefined4 *)(param_2 + 0x34) = 0;
  }
  cVar4 = FUN_1481598ca(param_2 + 0x10,local_1e0);
  if (cVar4 != '\0') {
    do {
      plVar8 = (longlong *)FUN_14816e6b6(&local_b8,local_1e0[0]);
      iVar5 = (int)plVar8[1];
      lVar7 = (longlong)iVar5;
      *(uint *)(plVar8 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar5 + 1U) {
        FUN_14816ea8e(plVar8,iVar5);
      }
      _Src = local_1c8;
      lVar9 = *plVar8;
      *(undefined4 *)(lVar9 + lVar7 * 0x28) = local_1e0[0];
      *(undefined8 *)(lVar9 + 8 + lVar7 * 0x28) = local_1d8;
      *(undefined4 *)(lVar9 + 0x10 + lVar7 * 0x28) = local_1d0[0];
      *(undefined8 *)(lVar9 + 0x18 + lVar7 * 0x28) = 0;
      _Size = (size_t)(int)uStack_1c0;
      *(int *)(lVar9 + 0x20 + lVar7 * 0x28) = (int)uStack_1c0;
      if (_Size == 0) {
        *(undefined4 *)(lVar9 + lVar7 * 0x28 + 0x24) = 0;
      }
      else {
        puVar10 = (undefined8 *)(lVar9 + lVar7 * 0x28 + 0x18);
        FUN_1447a127e(puVar10,uStack_1c0 & 0xffffffff,0);
        memcpy((void *)*puVar10,_Src,_Size);
      }
      cVar4 = FUN_1481598ca(param_2 + 0x10,local_1e0);
    } while (cVar4 != '\0');
  }
  if ((local_278 == (longlong *)0x0) || (**(longlong **)(param_2 + 8) == 0)) goto LAB_143a2d74e;
  local_1f8 = (undefined4 *)0x0;
  uStack_1f0 = 0;
  uStack_178 = 0x3f800000;
  iStack_174 = 0x3f800000;
  uStack_170 = 0x3f800000;
  uStack_16c = 0xffffffff;
  do {
    cVar4 = FUN_1481599f4(param_2,&local_1a8);
    uVar27 = uStack_1f0;
    if (cVar4 == '\0') goto LAB_143a2d0fb;
    lVar7 = (longlong)(int)(uint)uStack_1f0;
    uVar6 = (uint)uStack_1f0 + 1;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar6);
    if (uStack_1f0._4_4_ < uVar6) {
      FUN_14816eb22(&local_1f8,uVar27 & 0xffffffff);
      uVar6 = (uint)uStack_1f0;
    }
    *(ulonglong *)(local_1f8 + lVar7 * 0x10 + 0xc) = CONCAT44(iStack_174,uStack_178);
    *(ulonglong *)((longlong)(local_1f8 + lVar7 * 0x10 + 0xc) + 8) = CONCAT44(uStack_16c,uStack_170)
    ;
    *(longlong *)(local_1f8 + lVar7 * 0x10 + 8) = local_188;
    *(ulonglong *)((longlong)(local_1f8 + lVar7 * 0x10 + 8) + 8) = CONCAT44(uStack_17c,uStack_180);
    *(undefined8 *)(local_1f8 + lVar7 * 0x10 + 4) = local_198;
    *(undefined8 *)((longlong)(local_1f8 + lVar7 * 0x10 + 4) + 8) = uStack_190;
    puVar19 = local_1f8 + lVar7 * 0x10;
    *puVar19 = (undefined4)local_1a8;
    puVar19[1] = local_1a8._4_4_;
    puVar19[2] = (int)uStack_1a0;
    puVar19[3] = uStack_1a0._4_4_;
  } while ((*(int *)(param_2 + 0xe0) < 1) || ((int)uVar6 < *(int *)(param_2 + 0xe0)));
  do {
    cVar4 = FUN_14816eba8(param_2);
  } while (cVar4 != '\0');
LAB_143a2d0fb:
  if ((((local_260 != 0) && (*(int *)(param_2 + 0x4c) != 0)) &&
      (uVar6 = *(uint *)(param_2 + 0x48), -1 < (int)uVar6)) &&
     ((((int)uVar6 < DAT_14c9647dc &&
       (lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar7 != 0)) &&
      ((*(int *)(lVar7 + 0x10) == *(int *)(param_2 + 0x4c) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
    if (local_250[0x13] == 0) {
LAB_143a2d1c4:
      uVar16 = 0;
    }
    else {
      uVar6 = local_250[0x12];
      uVar16 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if (((plVar8 == (longlong *)0x0) ||
            ((((int)plVar8[2] != local_250[0x13] || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
             (*plVar8 == 0)))) || (lVar7 = *(longlong *)(*plVar8 + 0x120), lVar7 == 0))
        goto LAB_143a2d1c4;
        uVar16 = *(undefined8 *)(lVar7 + 0xa8);
      }
    }
    if ((longlong)(int)(uint)uStack_1f0 != 0) {
      puVar19 = local_1f8 + (longlong)(int)(uint)uStack_1f0 * 0x10;
      local_248 = (uint *)(param_2 + 0x88);
      puVar21 = local_1f8;
      lVar7 = local_260;
      local_270 = puVar19;
      local_258 = uVar16;
      do {
        if ((int)uStack_b0 != local_84) {
          puVar13 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar13 = local_80;
          }
          iVar5 = *(int *)(puVar13 + (ulonglong)(local_70 - 1U & puVar21[0xf]) * 4);
          while (iVar5 != -1) {
            lVar9 = local_b8 + (longlong)iVar5 * 0x20;
            if (*(uint *)(local_b8 + (longlong)iVar5 * 0x20) == puVar21[0xf]) goto LAB_143a2d27c;
            iVar5 = *(int *)(lVar9 + 0x18);
          }
        }
        lVar9 = 0;
LAB_143a2d27c:
        plVar8 = (longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
          plVar8 = (longlong *)0x0;
        }
        if ((*(int *)(param_2 + 0xac) < *(int *)(param_2 + 0x80)) || (plVar8 != (longlong *)0x0)) {
          local_240 = plVar8;
          lVar9 = FUN_148159a5f(DAT_14c951640);
          iVar5 = *(int *)(param_2 + 0xa0);
          local_268 = puVar21;
          if (iVar5 == 0) {
            uVar28 = 1;
            uVar27 = 0;
            iVar26 = 0;
            iVar17 = 0;
          }
          else {
            puVar15 = *(uint **)(param_2 + 0x98);
            if (*(uint **)(param_2 + 0x98) == (uint *)0x0) {
              puVar15 = local_248;
            }
            uVar6 = *puVar15;
            if (uVar6 == 0) {
              iVar26 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar26 = iVar5 + -1;
              }
              uVar27 = 0;
              uVar14 = (ulonglong)(uint)(iVar26 >> 5);
              if (iVar26 >> 5 < 1) {
                uVar14 = uVar27;
              }
              iVar26 = 0;
              do {
                if (uVar14 == uVar27) goto LAB_143a2d358;
                iVar26 = iVar26 + 0x20;
                uVar6 = puVar15[uVar27 + 1];
                uVar27 = uVar27 + 1;
              } while (uVar6 == 0);
            }
            else {
              uVar27 = 0;
              iVar26 = 0;
            }
            uVar28 = (ulonglong)(-uVar6 & uVar6);
            uVar14 = uVar28 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar17 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if (iVar5 <= iVar17) {
              iVar17 = iVar5;
            }
          }
          if (iVar17 != iVar5) {
            local_278 = (longlong *)(lVar9 + 0x28);
            uVar6 = 0xffffffff;
            do {
              FUN_1481596bb(local_158,(longlong)iVar17 * 0x28 + *(longlong *)(param_2 + 0x78));
              iVar17 = *(int *)(lVar9 + 0x30);
              *(uint *)(lVar9 + 0x30) = iVar17 + 1U;
              if (*(uint *)(lVar9 + 0x34) < iVar17 + 1U) {
                FUN_147046b0e(local_278,iVar17);
              }
              FUN_1470469b8((longlong)iVar17 * 0xa0 + *local_278,local_158);
              FUN_147046490(local_158);
              uVar6 = uVar6 & ~(uint)uVar28;
              puVar15 = *(uint **)(param_2 + 0x98);
              if (*(uint **)(param_2 + 0x98) == (uint *)0x0) {
                puVar15 = local_248;
              }
              iVar1 = *(int *)(param_2 + 0xa0);
              iVar17 = (int)uVar27;
              lVar7 = (longlong)iVar17;
              uVar25 = puVar15[lVar7] & uVar6;
              if (uVar25 == 0) {
                iVar11 = iVar1 + 0x1e;
                if (-1 < iVar1 + -1) {
                  iVar11 = iVar1 + -1;
                }
                iVar11 = iVar11 >> 5;
                iVar26 = iVar26 + 0x20;
                iVar12 = iVar11;
                if (iVar11 < iVar17) {
                  iVar12 = iVar17;
                }
                if (iVar17 < iVar11) {
                  lVar20 = 0;
                  do {
                    uVar25 = puVar15[lVar7 + lVar20 + 1];
                    if (uVar25 != 0) {
                      uVar27 = (ulonglong)(iVar17 + (int)lVar20 + 1);
                      uVar6 = 0xffffffff;
                      goto LAB_143a2d6ce;
                    }
                    iVar26 = iVar26 + 0x20;
                    lVar20 = lVar20 + 1;
                  } while (iVar12 - lVar7 != lVar20);
                  uVar6 = 0xffffffff;
                  iVar17 = iVar12;
                }
                uVar27 = (ulonglong)(iVar17 + 1);
                iVar17 = iVar1;
              }
              else {
LAB_143a2d6ce:
                uVar28 = (ulonglong)(-uVar25 & uVar25);
                uVar14 = uVar28 * 2 + 1;
                lVar7 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                iVar17 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                if (iVar1 <= iVar17) {
                  iVar17 = iVar1;
                }
              }
            } while (iVar17 != iVar5);
          }
LAB_143a2d358:
          uVar16 = local_258;
          lVar7 = local_260;
          puVar19 = local_270;
          puVar21 = local_268;
          if ((local_240 != (longlong *)0x0) && ((longlong)(int)local_240[1] != 0)) {
            lVar20 = (longlong)(int)local_240[1] * 0x28;
            lVar22 = *local_240 + 8;
            do {
              FUN_1481596bb(local_158,lVar22);
              iVar5 = *(int *)(lVar9 + 0x30);
              *(uint *)(lVar9 + 0x30) = iVar5 + 1U;
              if (*(uint *)(lVar9 + 0x34) < iVar5 + 1U) {
                FUN_147046b0e((longlong *)(lVar9 + 0x28),iVar5);
              }
              FUN_1470469b8((longlong)iVar5 * 0xa0 + *(longlong *)(lVar9 + 0x28),local_158);
              FUN_147046490(local_158);
              lVar22 = lVar22 + 0x28;
              lVar20 = lVar20 + -0x28;
              puVar19 = local_270;
              puVar21 = local_268;
            } while (lVar20 != 0);
          }
        }
        else {
          lVar9 = 0;
        }
        if ((*(int *)(param_2 + 0x5c) == 0) || (uVar6 = *(uint *)(param_2 + 0x58), (int)uVar6 < 0))
        {
LAB_143a2d724:
          local_298 = 0;
        }
        else {
          local_298 = 0;
          if ((int)uVar6 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) ||
                (*(int *)(puVar10 + 2) != *(int *)(param_2 + 0x5c))) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143a2d724;
            local_298 = *puVar10;
          }
        }
        if ((*(int *)(param_2 + 0x54) == 0) || (uVar6 = *(uint *)(param_2 + 0x50), (int)uVar6 < 0))
        {
LAB_143a2d72b:
          local_2a0 = 0;
        }
        else {
          local_2a0 = 0;
          if ((int)uVar6 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) ||
                (*(int *)(puVar10 + 2) != *(int *)(param_2 + 0x54))) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143a2d72b;
            local_2a0 = *puVar10;
          }
        }
        local_2a8 = puVar21[0xe];
        local_2b0 = puVar21[0xd];
        local_2b8 = puVar21[0xc];
        local_208 = *(undefined8 *)(puVar21 + 10);
        local_218 = *(undefined8 *)(puVar21 + 6);
        uStack_210 = *(undefined8 *)(puVar21 + 8);
        local_228 = *(undefined8 *)(puVar21 + 4);
        local_238 = *puVar21;
        uStack_234 = puVar21[1];
        uStack_230 = puVar21[2];
        uStack_22c = puVar21[3];
        if ((*(int *)(param_2 + 0x4c) == 0) || (uVar6 = *(uint *)(param_2 + 0x48), (int)uVar6 < 0))
        {
LAB_143a2d732:
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((int)uVar6 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) ||
                (*(int *)(puVar10 + 2) != *(int *)(param_2 + 0x4c))) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143a2d732;
            uVar18 = *puVar10;
          }
        }
        local_290 = uVar16;
        local_288 = lVar9;
        FUN_147abea3c(lVar7,uVar18,&local_238,&local_218);
        puVar21 = puVar21 + 0x10;
      } while (puVar21 != puVar19);
    }
  }
  if (local_1f8 != (undefined4 *)0x0) {
    FUN_1400020a8(local_1f8);
  }
LAB_143a2d74e:
  uVar27 = 0;
  local_158[0] = 0;
  local_148 = (code *)0x0;
  local_138 = (longlong *)0x0;
  local_188 = 0;
  uStack_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_17c = 0x80;
  uStack_178 = 0xffffffff;
  iStack_174 = 0;
  local_168 = (undefined4 *)0x0;
  local_160 = 0;
  cVar4 = FUN_148159af4(param_2 + 0x20,local_158);
  if (cVar4 != '\0') {
    do {
      pcVar3 = local_148;
      if (local_158[0] < 1) {
LAB_143a2d892:
        uVar16 = 0;
      }
      else {
        uVar6 = *(uint *)(param_2 + 0x40);
        lVar7 = *(longlong *)(param_2 + 0x38);
        uVar25 = 0;
        if (0 < (int)uVar6) {
          uVar25 = 0;
          uVar14 = (ulonglong)uVar6;
          uVar23 = uVar6;
          do {
            uVar14 = uVar14 >> 1;
            uVar24 = (uint)uVar14 + uVar25;
            if (*(int *)(lVar7 + (ulonglong)uVar24 * 0xc) < local_158[0]) {
              uVar25 = uVar24 + (uVar23 & 1);
            }
            bVar2 = 1 < uVar23;
            uVar23 = (uint)uVar14;
          } while (bVar2);
        }
        if (((int)uVar6 <= (int)uVar25) ||
           (local_158[0] < *(int *)(lVar7 + (ulonglong)uVar25 * 0xc))) goto LAB_143a2d892;
        lVar7 = lVar7 + (ulonglong)uVar25 * 0xc;
        puVar15 = (uint *)(lVar7 + 4);
        if ((puVar15 == (uint *)0x0) ||
           ((iVar5 = *(int *)(lVar7 + 8), iVar5 == 0 || (uVar6 = *puVar15, (int)uVar6 < 0))))
        goto LAB_143a2d892;
        uVar16 = 0;
        if ((int)uVar6 < DAT_14c9647dc) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          if ((((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != iVar5)) ||
              ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) ||
             ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143a2d892;
          uVar16 = *puVar10;
        }
      }
      if (local_148 != (code *)0x0) {
        local_1f8 = local_250;
        plVar8 = local_138;
        if (local_138 == (longlong *)0x0) {
          plVar8 = local_128;
        }
        local_1b8 = param_2;
        local_1b0 = uVar16;
        uVar16 = (**(code **)(*plVar8 + 8))();
        (*pcVar3)(uVar16,&local_1b8,&local_1b0,&local_1f8);
      }
      FUN_1447cbafe(&local_1a8,&local_1f8,local_158,0);
      cVar4 = FUN_148159af4(param_2 + 0x20,local_158);
    } while (cVar4 != '\0');
  }
  do {
    uVar6 = (uint)uVar27;
    if (*(int *)(param_2 + 0x40) <= (int)uVar6) break;
    lVar7 = *(longlong *)(param_2 + 0x38);
    if ((int)uStack_1a0 != iStack_174) {
      uVar25 = *(uint *)(lVar7 + uVar27 * 0xc);
      puVar19 = local_168;
      if (local_168 == (undefined4 *)0x0) {
        puVar19 = &uStack_170;
      }
      for (iVar5 = puVar19[local_160 - 1U & uVar25]; iVar5 != -1;
          iVar5 = *(int *)(local_1a8 + (longlong)iVar5 * 0xc + 4)) {
        if (*(uint *)(local_1a8 + (longlong)iVar5 * 0xc) == uVar25) goto LAB_143a2da51;
      }
    }
    uVar14 = *(ulonglong *)(lVar7 + 4 + uVar27 * 0xc);
    if (((((uVar14 >> 0x20 != 0) && (uVar25 = (uint)uVar14, -1 < (int)uVar25)) &&
         (((int)uVar25 < DAT_14c9647dc &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0xd & 0x3fff8))),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)(uVar14 >> 0x20))))))) &&
        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
       ((((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
         (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)) &&
        (cVar4 = (**(code **)(plVar8[0x55] + 0xa8))(plVar8 + 0x55), cVar4 != '\0')))) {
      (**(code **)(*plVar8 + 0x600))(plVar8);
    }
    iVar5 = *(int *)(param_2 + 0x40);
    if (~uVar6 + iVar5 != 0) {
      memmove((void *)(*(longlong *)(param_2 + 0x38) + uVar27 * 0xc),
              (void *)(*(longlong *)(param_2 + 0x38) + uVar27 * 0xc + 0xc),
              (longlong)(int)(~uVar6 + iVar5) * 0xc);
      iVar5 = *(int *)(param_2 + 0x40);
    }
    *(int *)(param_2 + 0x40) = iVar5 + -1;
    FUN_14816ebf4((longlong *)(param_2 + 0x38));
    uVar6 = uVar6 - 1;
LAB_143a2da51:
    uVar27 = (ulonglong)(uVar6 + 1);
  } while (-2 < (int)uVar6);
  local_160 = 0;
  if (local_168 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  uVar27 = uStack_1a0 >> 0x20;
  uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
  if ((int)uVar27 != 0) {
    FUN_1447a08a2(&local_1a8,0);
  }
  uStack_178 = 0xffffffff;
  iStack_174 = 0;
  uStack_180 = 0;
  if (0x80 < uStack_17c) {
    uStack_17c = 0x80;
    FUN_1446efbd8(&local_198,0);
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != (code *)0x0) {
    plVar8 = local_128;
    if (local_138 != (longlong *)0x0) {
      plVar8 = local_138;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (local_1c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148169522(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2dc9c FUN_143a2dc9c body=1298 status=ok
// SIG undefined FUN_143a2dc9c(void)

void FUN_143a2dc9c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined1 *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_143a2e10d;
    if (iVar6 != 1) goto LAB_143a2dcfa;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143a2e10d;
  }
  else {
LAB_143a2dcfa:
    if (iVar6 == 0x10) goto LAB_143a2e10d;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_143a2e10d:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a2e10d;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_143a2de83;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_143a3b683);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_143a2de83:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x18);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar3 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x18);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_143a2df03;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_143a2df03:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar15,0);
    *puVar15 = &PTR_FUN_14adcc180;
    *(undefined4 *)(puVar15 + 0x15) = param_2;
    *(undefined4 *)((longlong)puVar15 + 0xac) = param_3;
    *(undefined4 *)(puVar15 + 0x16) = param_4;
    puVar15[0x17] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar6 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar16 != '\x06') {
        uVar5 = uVar16;
      }
      uVar16 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar15[0xf] = uVar11;
    puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar15 + 0x1c) = iVar6;
    if (puVar15 == (undefined8 *)0x0) {
      local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
      FUN_1447439e4(puVar15);
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  else {
    local_a8 = local_98;
    local_88 = (undefined ***)0x0;
    local_78 = &PTR_LAB_14adcc130;
    local_98[0] = &LAB_143a3c720;
    local_70 = param_2;
    local_6c = param_3;
    local_68 = param_4;
    local_60 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"FUpdateSpectrumBuffer",&DAT_14cb3bafc);
    if (local_98[0] != (undefined1 *)0x0) {
      pppuVar13 = local_88;
      if (local_88 == (undefined ***)0x0) {
        pppuVar13 = &local_78;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2e1dc FUN_143a2e1dc body=1332 status=ok
// SIG undefined FUN_143a2e1dc(void)

void FUN_143a2e1dc(longlong param_1,float param_2,float param_3,float param_4,uint param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined1 local_d0;
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x178);
  puVar2 = *(undefined8 **)(param_1 + 0x178);
  if (puVar2 != (undefined8 *)0x0) {
    *plVar1 = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x170);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1ac) < 0) {
    FUN_1470345fa(param_1 + 0x1a0,0);
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) < 0) {
    FUN_1470345fa(param_1 + 0x1b0,0);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(int *)(param_1 + 0x1cc) < 0) {
    FUN_1470345fa(param_1 + 0x1c0,0);
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) < 0) {
    FUN_1470345fa(param_1 + 0x1d0,0);
  }
  *(undefined4 *)(param_1 + 0x140) = 0x3f800000;
  if ((int)param_5 < 1 || param_4 <= 0.0) goto LAB_143a2e327;
  fVar13 = logf(param_3);
  fVar14 = logf(param_2);
  fVar14 = fVar13 * 1.442695 - fVar14 * 1.442695;
  fVar13 = 0.01;
  if (0.01 <= fVar14) {
    fVar13 = fVar14;
  }
  fVar14 = 0.01;
  if (0.01 <= (float)(int)param_5 / fVar13) {
    fVar14 = (float)(int)param_5 / fVar13;
  }
  fVar13 = (float)exp2f(1.0 / fVar14);
  fVar15 = (fVar13 + -1.0) * param_2;
  fVar13 = 0.01;
  if (0.01 <= fVar15) {
    fVar13 = fVar15;
  }
  fVar13 = (param_4 * 3.0) / fVar13;
  uVar10 = 8;
  local_c8 = 0x10100000007;
  do {
    bVar9 = (byte)uVar10;
    local_c8 = local_c8 + 1;
    if (0xc < uVar10) break;
    uVar10 = uVar10 + 1;
  } while (1 << (bVar9 & 0x1f) < -((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1));
  cVar3 = FUN_147033900(&local_c8,&DAT_14c99e378);
  if (cVar3 == '\0') goto LAB_143a2e327;
  FUN_142af1dc4(&local_e0,&local_c8,&DAT_14c99e378);
  plVar12 = local_e0;
  if (plVar1 == &local_e0) {
LAB_143a2e4fc:
    if (local_e0 != (longlong *)0x0) {
      (**(code **)*local_e0)();
    }
    plVar12 = (longlong *)*plVar1;
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)local_e0;
    local_e0 = (longlong *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      goto LAB_143a2e4fc;
    }
  }
  if (plVar12 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar12 + 8))();
    iVar6 = *(int *)(param_1 + 0x1a8);
    *(uint *)(param_1 + 0x1a8) = iVar6 + (uint)uVar8;
    if ((uint)(*(int *)(param_1 + 0x1ac) - iVar6) < (uint)uVar8) {
      local_f0 = uVar8;
      FUN_145ca0cd4(param_1 + 0x1a0);
      uVar8 = local_f0;
    }
    memset((void *)((longlong)iVar6 * 4 + *(longlong *)(param_1 + 0x1a0)),0,
           (longlong)(int)uVar8 << 2);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x178) + 8))();
    iVar6 = *(int *)(param_1 + 0x1b8);
    iVar11 = iVar6 + iVar5 + 2;
    *(int *)(param_1 + 0x1b8) = iVar11;
    if ((uint)(*(int *)(param_1 + 0x1bc) - iVar6) < iVar5 + 2U) {
      FUN_145ca0cd4(param_1 + 0x1b0);
      iVar11 = *(int *)(param_1 + 0x1b8);
    }
    iVar6 = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = iVar6 + iVar11 / 2;
    if ((uint)(*(int *)(param_1 + 0x1cc) - iVar6) < (uint)(iVar11 / 2)) {
      FUN_145ca0cd4(param_1 + 0x1c0);
    }
    iVar6 = *(int *)(param_1 + 0x1d8);
    *(uint *)(param_1 + 0x1d8) = iVar6 + param_5;
    if ((uint)(*(int *)(param_1 + 0x1dc) - iVar6) < param_5) {
      FUN_145ca0cd4(param_1 + 0x1d0);
    }
    iVar6 = (**(code **)(*(longlong *)*plVar1 + 8))();
    fVar15 = (float)iVar6;
    uVar4 = (**(code **)(*(longlong *)*plVar1 + 0x10))();
    fVar13 = fVar15;
    switch(uVar4) {
    case 1:
      fVar13 = 1.0 / (fVar15 * fVar15);
      break;
    case 2:
      fVar13 = 1.0 / fVar15;
      break;
    case 3:
      fVar13 = fVar15 * fVar15;
      break;
    case 4:
      break;
    default:
      fVar13 = 1.0;
    }
    *(float *)(param_1 + 0x140) = fVar13;
    fVar13 = 1.0;
    if (1.0 <= fVar15) {
      fVar13 = fVar15;
    }
    fVar15 = (float)exp2f(1.0 / fVar14);
    fVar15 = (fVar15 + -1.0) * param_2;
    local_d4 = 0.01;
    if (0.01 <= fVar15) {
      local_d4 = fVar15;
    }
    local_d4 = (param_4 / fVar13) / local_d4;
    if (2.0 <= local_d4) {
      local_d4 = 2.0;
    }
    if (local_d4 <= 0.5) {
      local_d4 = 0.5;
    }
    local_e0 = (longlong *)CONCAT44(fVar14,param_5);
    local_d0 = 2;
    local_d8 = param_2;
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x178) + 8))();
    FUN_1470302a3(&local_e8,&local_e0,uVar7,param_4);
    puVar2 = *(undefined8 **)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = local_e8;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
LAB_143a2e327:
  if ((local_c0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a2e712 FUN_143a2e712 body=1231 status=ok
// SIG undefined FUN_143a2e712(void)

void FUN_143a2e712(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  float local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a2e75b;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a2e760;
      goto LAB_143a2e798;
    }
  }
  else {
LAB_143a2e75b:
    if (iVar6 != 0x10) {
LAB_143a2e798:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a2e760;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a2e760;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a2e8fe;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a2e8fe:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a2e97e;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a2e97e:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adcc1b0;
        *(float *)(puVar15 + 0x15) = param_2;
        puVar15[0x16] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14adcc190;
        local_78[0] = &LAB_143a3c918;
        local_50 = param_2;
        local_48 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateSpectrumBuffer",&DAT_14cb3bb00);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a2e834;
    }
  }
LAB_143a2e760:
  if (10.0 <= param_2) {
    param_2 = 10.0;
  }
  if (param_2 <= -200.0) {
    param_2 = -200.0;
  }
  *(float *)(param_1 + 0x134) = param_2;
LAB_143a2e834:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2ebe2 FUN_143a2ebe2 body=1195 status=ok
// SIG undefined FUN_143a2ebe2(void)

void FUN_143a2ebe2(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_70 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a2ec25;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a2ec2a;
      goto LAB_143a2ec5b;
    }
  }
  else {
LAB_143a2ec25:
    if (iVar6 != 0x10) {
LAB_143a2ec5b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a2ec2a;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a2ec2a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a2edb4;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a2edb4:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a2ee34;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a2ee34:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adcc240;
        puVar16[0x15] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14adcc220;
        local_68[0] = &LAB_143a3cca4;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateSpectrumBuffer",&DAT_14cb3bb04);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a2ecf2;
    }
  }
LAB_143a2ec2a:
  FUN_143a3cad8(&local_70,&DAT_14ca85100);
LAB_143a2ecf2:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2f0c2 FUN_143a2f0c2 body=1562 status=ok
// SIG undefined FUN_143a2f0c2(void)

bool FUN_143a2f0c2(longlong param_1,float *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  undefined8 *puVar28;
  longlong lVar29;
  float extraout_XMM0_Da;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  int local_dc;
  float *local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d0 = param_1;
  if (param_2 != (float *)0x0) {
    param_2[0x1a] = 0.0;
    local_c8 = param_3;
    if (param_2[0x1b] != 0.0) {
      FUN_14816f81e(param_2 + 0x18);
    }
    while (lVar26 = **(longlong **)(param_2 + 0x16), lVar26 != 0) {
      uVar4 = *(undefined4 *)(lVar26 + 8);
      uVar5 = *(undefined4 *)(lVar26 + 0xc);
      uVar3 = *(undefined8 *)(lVar26 + 0x10);
      lVar29 = *(longlong *)(param_2 + 0x16);
      *(longlong *)(param_2 + 0x16) = lVar26;
      *(undefined8 *)(lVar26 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar26 + 0x10) = 0;
      if (lVar29 != 0) {
        FUN_1400020a8();
      }
      fVar6 = param_2[0x1a];
      fVar13 = (float)((int)fVar6 + 1);
      param_2[0x1a] = fVar13;
      if ((uint)param_2[0x1b] < (uint)fVar13) {
        FUN_14816f84e(param_2 + 0x18);
      }
      lVar26 = *(longlong *)(param_2 + 0x18);
      lVar29 = (longlong)(int)fVar6 * 0x10;
      *(undefined4 *)(lVar26 + lVar29) = uVar4;
      *(undefined4 *)(lVar26 + 4 + lVar29) = uVar5;
      *(undefined8 *)(lVar26 + 8 + lVar29) = uVar3;
    }
    fVar6 = param_2[0x1a];
    uVar25 = (ulonglong)(int)fVar6;
    if (0 < (longlong)uVar25) {
      local_c0 = *(undefined8 **)(param_2 + 0x18);
      uVar17 = 0;
      puVar24 = local_c0;
      do {
        if ((uVar17 + 1 < uVar25) &&
           ((double)puVar24[3] <= (double)puVar24[1] && (double)puVar24[1] != (double)puVar24[3])) {
          local_98 = (code *)*puVar24;
          uStack_90 = puVar24[1];
          *puVar24 = puVar24[2];
          puVar24[1] = puVar24[3];
          puVar24[2] = local_98;
          puVar24[3] = uStack_90;
        }
        uVar17 = uVar17 + 2;
        puVar24 = puVar24 + 4;
      } while (uVar17 < uVar25);
      if (2 < (int)fVar6) {
        iVar20 = 2;
        do {
          local_dc = iVar20 * 2;
          local_b8 = (longlong)local_dc;
          lVar26 = 0;
          do {
            iVar23 = (int)fVar6 - (int)lVar26;
            if (local_dc <= iVar23) {
              iVar23 = local_dc;
            }
            if (iVar20 < iVar23 && 0 < iVar20) {
              iVar21 = 0;
              iVar19 = iVar20;
              while( true ) {
                iVar15 = 0;
                if (iVar19 - iVar21 != 0 && iVar21 <= iVar19) {
                  iVar15 = 0;
                  uVar27 = iVar19 - iVar21;
                  do {
                    iVar14 = iVar15 + (uVar27 >> 1);
                    if ((double)local_c0[lVar26 * 2 +
                                         (longlong)iVar21 * 2 + (longlong)iVar14 * 2 + 1] <=
                        (double)local_c0[lVar26 * 2 + (longlong)iVar19 * 2 + 1]) {
                      iVar15 = iVar14 + (uVar27 & 1);
                    }
                    bVar9 = 1 < uVar27;
                    uVar27 = uVar27 >> 1;
                  } while (bVar9);
                }
                iVar15 = iVar15 + iVar21;
                iVar21 = iVar19 - iVar15;
                if (iVar21 == 0 || iVar19 < iVar15) break;
                if (iVar23 - iVar19 == 0 || iVar23 < iVar19) {
                  iVar14 = 0;
                }
                else {
                  puVar24 = local_c0 + lVar26 * 2 + (longlong)iVar15 * 2;
                  iVar14 = 0;
                  uVar27 = iVar23 - iVar19;
                  do {
                    uVar2 = (uVar27 >> 1) + iVar14;
                    if ((double)local_c0[lVar26 * 2 +
                                         (longlong)iVar19 * 2 + (ulonglong)uVar2 * 2 + 1] <=
                        (double)puVar24[1] &&
                        (double)puVar24[1] !=
                        (double)local_c0[lVar26 * 2 +
                                         (longlong)iVar19 * 2 + (ulonglong)uVar2 * 2 + 1]) {
                      iVar14 = uVar2 + (uVar27 & 1);
                    }
                    bVar9 = 1 < uVar27;
                    uVar27 = uVar27 >> 1;
                  } while (bVar9);
                  iVar19 = iVar19 + iVar14;
                  if (0 < iVar14) {
                    puVar28 = puVar24 + (longlong)(iVar19 - iVar15) * 2;
                    puVar16 = puVar24 + (longlong)iVar21 * 2;
                    puVar22 = puVar24 + (longlong)iVar21 * 2;
                    do {
                      while( true ) {
                        puVar1 = puVar16 + 2;
                        local_98 = (code *)*puVar24;
                        uStack_90 = puVar24[1];
                        uVar3 = puVar16[1];
                        *puVar24 = *puVar16;
                        puVar24[1] = uVar3;
                        puVar24 = puVar24 + 2;
                        *puVar16 = local_98;
                        puVar16[1] = uStack_90;
                        if (puVar1 == puVar28) break;
                        puVar16 = puVar1;
                        if (puVar24 == puVar22) {
                          puVar22 = puVar1;
                        }
                      }
                      puVar16 = puVar22;
                    } while (puVar24 != puVar22);
                  }
                }
                if ((iVar23 <= iVar19) || (iVar21 = iVar15 + iVar14 + 1, iVar19 <= iVar21)) break;
              }
            }
            lVar26 = lVar26 + local_b8;
          } while (lVar26 < (longlong)uVar25);
          iVar20 = local_dc;
        } while (local_dc < (int)fVar6);
      }
    }
    dVar12 = (double)*(float *)(local_c8 + 0x14) * 65536.0;
    dVar11 = (double)*(float *)(local_c8 + 0x10) * 65536.0;
    dVar10 = (double)*(float *)(local_c8 + 0xc) * 65536.0;
    *(double *)(param_2 + 0xc) = dVar10;
    *(double *)(param_2 + 0xe) = dVar11;
    *(double *)(param_2 + 0x10) = dVar12;
    local_d8 = param_2;
    lVar26 = FUN_1400bd118(*(undefined8 *)(local_c8 + 0x30));
    lVar26 = *(longlong *)(lVar26 + 0x10);
    if (lVar26 != 0) {
      if ((*(int *)(local_d0 + 0x38) < *(int *)(lVar26 + 0x238)) && (0 < *(int *)(lVar26 + 0x238)))
      {
        lVar29 = 0;
        iVar20 = 0;
        do {
          iVar23 = *(int *)(*(longlong *)(lVar26 + 0x230) + 4 + lVar29 * 8);
          if (((((iVar23 != 0) &&
                (uVar27 = *(uint *)(*(longlong *)(lVar26 + 0x230) + lVar29 * 8), -1 < (int)uVar27))
               && ((int)uVar27 < DAT_14c9647dc)) &&
              ((plVar18 = (longlong *)
                          ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
               plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar23)))) &&
             (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
              ((lVar7 = *plVar18, lVar7 != 0 && (lVar8 = *(longlong *)(lVar7 + 0x430), lVar8 != 0)))
              ))) {
            if (DAT_14cae9568 == 0) {
              local_98 = FUN_1417de738;
              local_f0 = &LAB_145893408;
              local_f8 = &LAB_1458cbbd2;
              local_108 = &LAB_147ba21f1;
              local_110 = &LAB_1463e9233;
              local_118 = L"Engine";
              local_120 = 0;
              local_128 = 0x1000000c;
              local_130 = 8;
              local_138 = 0x2b8;
              local_100 = &local_98;
              FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
            }
            lVar8 = *(longlong *)(lVar8 + 0x10);
            if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                DAT_14cae9568 + 0x30)) {
              if (iVar20 == *(int *)(local_d0 + 0x38)) {
                plVar18 = *(longlong **)(lVar7 + 0x448);
                if (plVar18 != (longlong *)0x0) {
                  (**(code **)(*plVar18 + 0x730))(plVar18,&local_b0);
                  param_2 = local_d8;
                  *local_d8 = (float)(local_b0 - dVar10);
                  local_d8[1] = (float)(local_a8 - dVar11);
                  local_d8[2] = (float)(local_a0 - dVar12);
                  (**(code **)(**(longlong **)(lVar7 + 0x448) + 0x728))
                            (*(longlong **)(lVar7 + 0x448),&local_98);
                  *(undefined8 *)(param_2 + 8) = local_88;
                  param_2[4] = (float)local_98;
                  param_2[5] = local_98._4_4_;
                  param_2[6] = (float)uStack_90;
                  param_2[7] = uStack_90._4_4_;
                  (**(code **)(**(longlong **)(lVar7 + 0x448) + 0x6e8))();
                  param_2[10] = extraout_XMM0_Da;
                  goto LAB_143a2f690;
                }
                break;
              }
              iVar20 = iVar20 + 1;
            }
          }
          lVar29 = lVar29 + 1;
        } while ((int)lVar29 < *(int *)(lVar26 + 0x238));
      }
    }
    local_d8[0] = 0.0;
    local_d8[1] = 0.0;
    local_d8[2] = 0.0;
    local_d8[4] = 0.0;
    local_d8[5] = 0.0;
    local_d8[6] = 0.0;
    local_d8[7] = 0.0;
    local_d8[7] = 0.0;
    local_d8[8] = 0.0;
    local_d8[9] = 0.0;
    local_d8[10] = 0.0;
    param_2 = local_d8;
  }
LAB_143a2f690:
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 == (float *)0x0;
}



// FUNCTION 143a2f6de FUN_143a2f6de body=570 status=ok
// SIG undefined FUN_143a2f6de(void)

void FUN_143a2f6de(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3b188) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adcae50;
  }
  else {
    if (lVar1 == DAT_14cb3b190) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cb3b198) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 != DAT_14cb3b180) goto LAB_143a2f876;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adcafa0;
  }
  puVar3 = local_30;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_143a2f821:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a2f821;
    }
  }
  *param_4 = (longlong)puVar3;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143a2f876;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a2f876:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2f980 FUN_143a2f980 body=176 status=ok
// SIG undefined FUN_143a2f980(void)

undefined8 FUN_143a2f980(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  InitializeSRWLock((PSRWLOCK)(param_2 + 1));
  param_2[0xd] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *param_2 = param_3;
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x30);
    param_2[5] = *(longlong *)(param_3 + 0x100);
    param_2[0xd] = lVar1;
    FUN_144732568(0,0);
    *(undefined4 *)(param_2 + 7) = 0;
    if (*(int *)((longlong)param_2 + 0x3c) != 0) {
      FUN_140044ae0(param_2 + 6,0);
    }
    FUN_144732568(param_2[8],(int)param_2[9]);
    *(undefined4 *)(param_2 + 9) = 0;
    if (*(int *)((longlong)param_2 + 0x4c) != 0) {
      FUN_140044ae0(param_2 + 8,0);
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return 1;
}



// FUNCTION 143a2fa30 FUN_143a2fa30 body=418 status=ok
// SIG undefined FUN_143a2fa30(void)

void FUN_143a2fa30(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cb3b200) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (*param_2 != DAT_14cb3b208) goto LAB_143a2fb4d;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar2 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14adcb0f0;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_143a2faf8:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a2faf8;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143a2fb4d;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a2fb4d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2fbe6 FUN_143a2fbe6 body=516 status=ok
// SIG undefined FUN_143a2fbe6(void)

void FUN_143a2fbe6(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 != DAT_14cb3b280) || ((int)param_2[3] != 1)) || ((int)param_2[4] != 4)) {
    if ((int)param_4[1] == 0) {
LAB_143a2fd1d:
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_4;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_4,0,0,0x10);
        *(undefined4 *)(param_4 + 1) = 0;
        goto LAB_143a2fd1d;
      }
    }
    *param_4 = 0;
    *(undefined4 *)(param_4 + 1) = 0;
    goto LAB_143a2fd37;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar1 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14adcc2d0;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_143a2fcbf:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a2fcbf;
    }
  }
  *param_4 = (longlong)puVar1;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143a2fd37;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a2fd37:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a2fdfe FUN_143a2fdfe body=1259 status=ok
// SIG undefined FUN_143a2fdfe(void)

void FUN_143a2fdfe(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a30244;
    if (iVar7 != 1) goto LAB_143a2fe5c;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a30244;
  }
  else {
LAB_143a2fe5c:
    if (iVar7 == 0x10) goto LAB_143a30244;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a30244:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a30244;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a2ffc9;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a3b683);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a2ffc9:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a30049;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a30049:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adcc440;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adcc420;
    local_68[0] = &LAB_143a3ceb6;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDITexture_RemoveInstance",&DAT_14cb3bc9c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a302fe FUN_143a302fe body=1895 status=ok
// SIG undefined FUN_143a302fe(void)

undefined8 FUN_143a302fe(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_118 [32];
  code **local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar13 = param_2[4];
  if ((ulonglong)uVar13 != 0xffffffff) {
    if (((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(*(longlong *)(param_2 + 6) + 0x48))) &&
       (lVar19 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 6) + 0x40) + (ulonglong)uVar13 * 8),
       lVar19 != 0)) {
      if (DAT_14cb0b430 == 0) {
        local_c0 = local_88;
        local_88[0] = FUN_1449e2820;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_145892f94;
        local_c8 = &LAB_147d6dbf3;
        local_d0 = &LAB_1464081e0;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000001;
        local_f0 = 8;
        local_f8 = (code **)CONCAT44(local_f8._4_4_,0x138);
        FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
      }
      if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) == DAT_14cb0b430 + 0x30))
      goto LAB_143a3038e;
    }
    FUN_144b34b0c(param_2,0);
    goto LAB_143a303a3;
  }
  lVar19 = *(longlong *)(param_1 + 0x38);
LAB_143a3038e:
  cVar4 = FUN_144b34b0c(param_2,lVar19);
  if (lVar19 == 0 || cVar4 != '\0') goto LAB_143a303a3;
  lVar9 = FUN_140265cda();
  if (*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) {
    lVar20 = 0;
  }
  else {
    lVar20 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30) {
      lVar20 = lVar19;
    }
  }
  lVar9 = FUN_1458f150a();
  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
      != lVar9 + 0x30)) {
    if (lVar20 == 0) goto LAB_143a303a3;
LAB_143a30422:
    puVar11 = *(uint **)(lVar20 + 0x138);
    if (puVar11 == (uint *)0x0) {
      uVar16 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = *puVar11;
      uVar16 = (ulonglong)puVar11[1];
    }
  }
  else {
    if (lVar20 != 0) goto LAB_143a30422;
    uVar13 = *(uint *)(lVar19 + 0x140);
    uVar16 = (ulonglong)uVar13;
  }
  uVar5 = *(uint *)(lVar19 + 0xc);
  *param_2 = uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar5 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    uVar17 = DAT_14c964868 + 1;
    bVar21 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar21) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar17);
    }
    LOCK();
    uVar5 = *(uint *)(lVar9 + 0x10);
    bVar21 = uVar5 == 0;
    if (bVar21) {
      *(uint *)(lVar9 + 0x10) = uVar17;
      uVar5 = 0;
    }
    UNLOCK();
    if (bVar21) {
      uVar5 = uVar17;
    }
  }
  param_2[1] = uVar5;
  uStack_90 = (ulonglong)uVar13 | uVar16 << 0x20;
  *(ulonglong *)(param_2 + 2) = uStack_90;
  local_a8 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = *(undefined8 *)(param_3 + 0x100);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  local_98 = lVar19;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a304d9;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a304de;
      goto LAB_143a30533;
    }
  }
  else {
LAB_143a304d9:
    if (iVar6 != 0x10) {
LAB_143a30533:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_143a304de;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a304de;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a306ae;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar19 + 0x310);
          *(undefined8 *)(lVar19 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a306ae:
          puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar18 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar5 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar18 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a3072e;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a3072e:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14adcc470;
        *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar18 + 0xac) = local_a8._4_4_;
        *(undefined4 *)(puVar18 + 0x16) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_a0._4_4_;
        *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar18 + 0xbc) = local_98._4_4_;
        *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_90._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar19 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar19 == 0) {
          uVar3 = 1;
          if ((char)uVar16 != '\x06') {
            uVar3 = uVar16;
          }
          uVar16 = uVar3;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar19 + 0x30);
        }
        puVar18[0xf] = uVar12;
        puVar18[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar6;
        if (puVar18 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14adcc450;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_98._4_4_;
        *(undefined4 *)(local_78 + 4) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_90._4_4_;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_a8._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a0._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = (code *)&LAB_143a3d334;
        }
        local_f8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDITexture_UpdateInstance",&DAT_14cb3bca0);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a303a3;
    }
  }
LAB_143a304de:
  FUN_143a3d08e(&local_a8);
LAB_143a303a3:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a30a66 FUN_143a30a66 body=987 status=ok
// SIG undefined FUN_143a30a66(void)

void FUN_143a30a66(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_78 [32];
  uint *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar8 = *(longlong *)(param_2[2] + 0x10);
    lVar13 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar13 = *(longlong *)(lVar2 + 0x50);
    }
    iVar9 = *(int *)(lVar13 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar13 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x30;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x30) == lVar8)
        goto LAB_143a30af9;
        iVar9 = *(int *)(lVar13 + 0x28);
      } while (iVar9 != -1);
    }
  }
  lVar13 = 0;
LAB_143a30af9:
  lVar2 = *param_2;
  uVar16 = (int)param_2[10] + 0xfU & 0xfffffff0;
  FUN_148170e10();
  puVar17 = (undefined8 *)((ulonglong)uVar16 + param_2[7]);
  *(uint *)(param_2 + 10) = DAT_14cb3bce4 + uVar16;
  if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0x10) == 0)) {
    *puVar17 = DAT_14c967818;
    puVar17[2] = DAT_14c9c0d80;
    uVar5 = FUN_140579634(param_2[1],lVar2,3);
    puVar17[1] = uVar5;
  }
  else {
    *puVar17 = *(undefined8 *)(lVar13 + 0x18);
    puVar17[2] = *(undefined8 *)(lVar13 + 8);
    lVar8 = *(longlong *)param_2[5];
    uVar11 = *(ulonglong *)(lVar8 + 0x20);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x20;
    }
    sVar3 = (short)(puVar17 + 1) - (short)param_2[7];
    if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
      lVar14 = 0;
      do {
        if (*(short *)(uVar11 + lVar14) == sVar3) goto LAB_143a30c23;
        lVar14 = lVar14 + 6;
      } while ((longlong)*(int *)(lVar8 + 0x28) * 6 != lVar14);
    }
    uVar11 = *(ulonglong *)(lVar8 + 0x10);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x10;
    }
    if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
      lVar14 = 0;
      do {
        if (*(short *)(uVar11 + lVar14) == sVar3) goto LAB_143a30c23;
        lVar14 = lVar14 + 4;
      } while ((longlong)*(int *)(lVar8 + 0x18) * 4 != lVar14);
    }
  }
  goto LAB_143a30bcb;
LAB_143a30c23:
  lVar8 = *(longlong *)(lVar13 + 0x20);
  if (lVar8 == 0) {
    uVar11 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + 0x60);
    if (uVar11 != 0) {
      LOCK();
      *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
      UNLOCK();
      puVar12 = (uint *)(uVar11 + 8);
      uVar16 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar4 = uVar16 & 0x7fffffff ^ uVar16 >> 0x10;
      uVar16 = *(uint *)(lVar2 + 0x248);
      uVar10 = uVar16 & uVar4;
      lVar8 = lVar2 + 0x230;
      if (*(longlong *)(lVar2 + 0x238) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x238);
      }
      do {
        if (*(uint *)(lVar8 + (longlong)(int)uVar10 * 4) == uVar4) {
          lVar14 = *(longlong *)(lVar2 + 0x220);
          if (*(longlong *)(lVar2 + 0x220) == 0) {
            lVar14 = lVar2 + 0x218;
          }
          iVar9 = *(int *)(lVar14 + (longlong)(int)uVar10 * 4);
          lVar14 = (longlong)iVar9 * 0x10;
          if (uVar11 == *(ulonglong *)(*(longlong *)(lVar2 + 0x1d8) + lVar14)) {
            if ((iVar9 != -1) &&
               (plVar15 = (longlong *)(*(longlong *)(lVar2 + 0x1d8) + lVar14 + 8),
               plVar15 != (longlong *)0x0)) {
              lVar8 = *plVar15;
              *(longlong *)(lVar13 + 0x20) = lVar8;
              if (lVar8 == 0) goto LAB_143a30d0f;
              goto LAB_143a30dba;
            }
            break;
          }
        }
        uVar10 = uVar10 + 1 & uVar16;
      } while (uVar10 != (*(int *)(lVar2 + 0x24c) + uVar4 + 1 & uVar16));
      *(undefined8 *)(lVar13 + 0x20) = 0;
LAB_143a30d0f:
      FUN_1447ec05f(&local_50,uVar11,L"NiagaraTextureCube");
      uVar5 = FUN_14473c272(lVar2,&local_50,0);
      *(undefined8 *)(lVar13 + 0x20) = uVar5;
      local_58 = puVar12;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x38))();
        uVar5 = *(undefined8 *)(lVar13 + 0x20);
      }
      FUN_14022b18a(lVar2,uVar5);
      lVar8 = *(longlong *)(lVar13 + 0x20);
      if (lVar8 == 0) {
        lVar8 = 0;
        puVar12 = local_58;
      }
      else {
        lVar14 = param_2[1];
        iVar9 = *(int *)(lVar14 + 0x260);
        *(uint *)(lVar14 + 0x260) = iVar9 + 1U;
        if (*(uint *)(lVar14 + 0x264) < iVar9 + 1U) {
          FUN_144904f42((longlong *)(lVar14 + 600),iVar9);
        }
        lVar14 = *(longlong *)(lVar14 + 600);
        lVar18 = (longlong)iVar9 * 0x10;
        *(longlong *)(lVar14 + lVar18) = lVar8;
        *(undefined4 *)(lVar14 + 8 + lVar18) = 0x70;
        *(undefined1 *)(lVar14 + 0xc + lVar18) = 1;
        lVar8 = *(longlong *)(lVar13 + 0x20);
        puVar12 = local_58;
      }
LAB_143a30dba:
      LOCK();
      uVar16 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 1) {
        LOCK();
        uVar16 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar16 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(uVar11 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = uVar11;
          plVar15 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar15;
              LOCK();
              bVar19 = plVar15 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar19) {
                plVar15 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar19 = plVar7 != DAT_14ca843c8;
              plVar15 = plVar6;
              if (bVar19) {
                plVar7 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
      if (lVar8 != 0) goto LAB_143a30e22;
    }
    lVar8 = FUN_140579634(param_2[1],lVar2,3);
  }
LAB_143a30e22:
  puVar17[1] = lVar8;
LAB_143a30bcb:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a30e42 FUN_143a30e42 body=1245 status=ok
// SIG undefined FUN_143a30e42(void)

void FUN_143a30e42(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x28);
  local_70 = *(undefined4 *)(param_1 + 0x44);
  local_78 = *(undefined8 *)(param_1 + 0x3c);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a30e94;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a30e99;
      goto LAB_143a30ec9;
    }
  }
  else {
LAB_143a30e94:
    if (iVar7 != 0x10) {
LAB_143a30ec9:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143a30e99;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a30e99;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a31035;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a31035:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a310b5;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a310b5:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adcc4c0;
        puVar17[0x15] = lVar4;
        puVar17[0x16] = local_78;
        *(undefined4 *)(puVar17 + 0x17) = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14adcc4a0;
        local_38 = local_78;
        local_30 = local_70;
        local_68[0] = &LAB_143a3d50e;
        local_40 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateDIColorCurve",&DAT_14cb3bdb4);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143a30f70;
    }
  }
LAB_143a30e99:
  *(undefined4 *)(lVar4 + 0x18) = local_70;
  *(undefined8 *)(lVar4 + 0x10) = local_78;
LAB_143a30f70:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a31320 FUN_143a31320 body=435 status=ok
// SIG undefined FUN_143a31320(void)

void FUN_143a31320(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 != DAT_14cb3b2e8) || ((int)param_2[3] != 1)) || ((int)param_2[4] != 1))
  goto LAB_143a3144e;
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar2 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14adcc4d0;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_143a313f9:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a313f9;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143a3144e;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a3144e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a314e6 FUN_143a314e6 body=69 status=ok
// SIG undefined FUN_143a314e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a314e6(void)

{
  _DAT_14cb3b308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a31528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b310,1);
  return;
}



// FUNCTION 143a3152b FUN_143a3152b body=69 status=ok
// SIG undefined FUN_143a3152b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a3152b(void)

{
  _DAT_14cb3b320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a3156d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b328,1);
  return;
}



// FUNCTION 143a315e4 FUN_143a315e4 body=55 status=ok
// SIG undefined FUN_143a315e4(void)

void FUN_143a315e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3b338 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3b338 = FUN_14171c317(FUN_14646fcb2,uVar1,L"ENiagaraDataInterfaceEmitterBindingMode");
  }
  return;
}



// FUNCTION 143a3161c FUN_143a3161c body=1300 status=ok
// SIG undefined FUN_143a3161c(void)

longlong FUN_143a3161c(int *param_1,longlong param_2,code *param_3)

{
  int *piVar1;
  uint uVar2;
  code *_Src;
  bool bVar3;
  longlong *plVar4;
  code **ppcVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_908 [32];
  undefined4 local_8e8;
  undefined4 local_8e0;
  undefined4 local_8d8;
  undefined8 local_8d0;
  wchar_t *local_8c8;
  code *local_8c0;
  undefined1 *local_8b8;
  code **local_8b0;
  code *local_8a8;
  code *local_8a0;
  code *local_898;
  code *pcStack_890;
  undefined1 *local_888;
  char local_880;
  undefined1 local_878 [2070];
  undefined1 local_62 [10];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_908;
  if (*param_1 == 0) {
    if (DAT_14cb3e268 == 0) {
      local_8b0 = &local_898;
      local_898 = FUN_1449e2820;
      local_8a0 = FUN_14081d0ea;
      local_8a8 = FUN_14081d0ea;
      local_8b8 = &LAB_1481bbd47;
      local_8c0 = FUN_143a7bac5;
      local_8c8 = L"Engine";
      local_8d0 = 0;
      local_8d8 = 0x10000000;
      local_8e0 = 8;
      local_8e8 = 0x70;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEmitter");
    }
    lVar8 = DAT_14cb3e268;
    if (DAT_14c951858 == 0) {
      local_8b0 = &local_898;
      local_898 = FUN_1449e2820;
      local_8a0 = FUN_14081d0ea;
      local_8a8 = FUN_14081d0ea;
      local_8b8 = &LAB_1468c5283;
      local_8c0 = FUN_142809da0;
      local_8c8 = L"Engine";
      local_8d0 = 0x400000000;
      local_8d8 = 0x10000000;
      local_8e0 = 8;
      local_8e8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package");
    }
    lVar15 = *(longlong *)(param_3 + 0x20);
    if (lVar15 != 0) {
      iVar7 = *(int *)(lVar8 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar7) ||
           (lVar14 = lVar15,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar7 * 8)
           != lVar8 + 0x30)) {
          lVar14 = 0;
        }
      } while ((lVar14 == 0) && (lVar15 = *(longlong *)(lVar15 + 0x20), lVar15 != 0));
      if (lVar14 != 0) {
        piVar1 = (int *)(param_2 + 0x110);
        if ((longlong)*piVar1 != 0) {
          plVar9 = (longlong *)(param_2 + 0x108);
          lVar8 = 0;
          do {
            param_2 = *(longlong *)(*plVar9 + lVar8);
            if (*(longlong *)(param_2 + 0x28) == lVar14) goto LAB_143a318e1;
            lVar8 = lVar8 + 0x10;
          } while ((longlong)*piVar1 * 0x10 != lVar8);
        }
        goto LAB_143a318df;
      }
    }
    local_898 = (code *)0x0;
    pcStack_890 = (code *)0x0;
    local_58[0] = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0xe0);
    local_58[1] = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0xd8);
    lVar8 = 0;
    do {
      lVar15 = *(longlong *)((longlong)local_58 + lVar8);
      if ((lVar15 != 0) && ((longlong)*(int *)(lVar15 + 0x390) != 0)) {
        ppcVar5 = (code **)(*(longlong *)(lVar15 + 0x388) + 0x10);
        lVar14 = 0;
        do {
          if (ppcVar5[6] == param_3) {
            if (*(longlong *)(lVar15 + 0x388) != lVar14) {
              if (ppcVar5 == &local_898) goto LAB_143a318c8;
              uVar2 = *(uint *)(ppcVar5 + 1);
              _Src = *ppcVar5;
              pcStack_890 = (code *)(ulonglong)uVar2;
              if ((longlong)(int)uVar2 == 0) goto LAB_143a318df;
              FUN_1446dd670(&local_898,uVar2,0);
              memcpy(local_898,_Src,(longlong)(int)uVar2 * 2);
              if ((int)pcStack_890 < 2) goto LAB_143a318c8;
              bVar3 = true;
              if ((longlong)*(int *)(param_2 + 0x110) == 0) goto LAB_143a318d0;
              plVar9 = *(longlong **)(param_2 + 0x108);
              plVar4 = plVar9 + (longlong)*(int *)(param_2 + 0x110) * 2;
              goto LAB_143a31989;
            }
            break;
          }
          ppcVar5 = ppcVar5 + 10;
          lVar14 = lVar14 + -0x50;
        } while (-lVar14 != (longlong)*(int *)(lVar15 + 0x390) * 0x50);
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x10);
LAB_143a318c8:
    bVar3 = true;
LAB_143a318d0:
    if (local_898 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar3) goto LAB_143a318e1;
  }
  else if (*(longlong *)(param_1 + 1) != 0) {
    local_898 = (code *)local_878;
    local_880 = '\0';
    local_888 = local_62;
    pcStack_890 = local_898;
    FUN_14005eb5c(param_1 + 1,&local_898);
    if ((longlong)*(int *)(param_2 + 0x110) != 0) {
      plVar9 = *(longlong **)(param_2 + 0x108);
      plVar4 = plVar9 + (longlong)*(int *)(param_2 + 0x110) * 2;
      iVar7 = (int)((ulonglong)((longlong)pcStack_890 - (longlong)local_898) >> 1);
LAB_143a316cd:
      param_2 = *plVar9;
      lVar8 = *(longlong *)(param_2 + 0x28);
      if (lVar8 == 0) goto LAB_143a3176e;
      uVar2 = *(uint *)(lVar8 + 0x68);
      iVar13 = uVar2 - 1;
      if (uVar2 == 0) {
        iVar13 = 0;
      }
      if (iVar13 != iVar7) goto LAB_143a3176e;
      if ((iVar7 != 0 && ((longlong)pcStack_890 - (longlong)local_898 & 0x1ffffffffU) >> 1 != 0) &&
          1 < uVar2) {
        lVar14 = 0;
        lVar15 = (longlong)iVar7;
        do {
          uVar11 = *(ushort *)(local_898 + lVar14);
          uVar10 = (ulonglong)uVar11;
          uVar6 = *(ushort *)(*(longlong *)(lVar8 + 0x60) + lVar14);
          if (uVar11 == uVar6) {
            if (uVar11 == 0) break;
          }
          else {
            if (0x7f < (uVar6 | uVar11)) goto LAB_143a31762;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar12 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar12]) goto LAB_143a31762;
          }
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) break;
          lVar14 = lVar14 + 2;
        } while( true );
      }
      goto LAB_143a3182e;
    }
LAB_143a3177b:
    if (local_880 == '\x01') {
      FUN_1400020a8();
    }
  }
LAB_143a318df:
  param_2 = 0;
LAB_143a318e1:
  if ((local_58[2] ^ (ulonglong)auStack_908) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_143a31989:
  param_2 = *plVar9;
  lVar8 = *(longlong *)(param_2 + 0x28);
  if (lVar8 == 0) goto LAB_143a319ef;
  if (*(int *)(lVar8 + 0x68) == (int)pcStack_890) {
    lVar15 = 0;
    do {
      uVar11 = *(ushort *)(*(longlong *)(lVar8 + 0x60) + lVar15);
      uVar10 = (ulonglong)uVar11;
      uVar6 = *(ushort *)(local_898 + lVar15);
      if (uVar11 == uVar6) {
        if (uVar11 == 0) goto LAB_143a319fd;
      }
      else {
        if (0x7f < (uVar6 | uVar11)) goto LAB_143a319dc;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar12 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar12]) goto LAB_143a319dc;
      }
      lVar15 = lVar15 + 2;
    } while( true );
  }
  if (*(int *)(lVar8 + 0x68) + (int)pcStack_890 != 1) goto LAB_143a319ef;
  goto LAB_143a319fd;
LAB_143a319dc:
  if (uVar11 == uVar6) {
LAB_143a319fd:
    bVar3 = false;
    goto LAB_143a318d0;
  }
LAB_143a319ef:
  plVar9 = plVar9 + 2;
  if (plVar9 == plVar4) goto LAB_143a318d0;
  goto LAB_143a31989;
LAB_143a31762:
  if (uVar11 == uVar6) {
LAB_143a3182e:
    if (local_880 == '\x01') {
      FUN_1400020a8();
    }
    goto LAB_143a318e1;
  }
LAB_143a3176e:
  plVar9 = plVar9 + 2;
  if (plVar9 == plVar4) goto LAB_143a3177b;
  goto LAB_143a316cd;
}



// FUNCTION 143a31b31 FUN_143a31b31 body=55 status=ok
// SIG undefined FUN_143a31b31(void)

void FUN_143a31b31(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3b3a8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3b3a8 = FUN_14171c317(FUN_14646feb3,uVar1,L"ENDIExport_GPUAllocationMode");
  }
  return;
}



// FUNCTION 143a31b68 FUN_143a31b68 body=69 status=ok
// SIG undefined FUN_143a31b68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a31b68(void)

{
  _DAT_14cb3b3e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a31baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b3e8,1);
  return;
}



// FUNCTION 143a31bae FUN_143a31bae body=1394 status=ok
// SIG undefined FUN_143a31bae(void)

undefined8 FUN_143a31bae(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_6c;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14646ff92(param_2);
  lVar4 = *(longlong *)(param_1 + 0x28);
  uStack_88 = *(undefined8 *)(param_3 + 0x100);
  local_80 = CONCAT31(local_80._1_3_,*(undefined1 *)(param_1 + 0x58));
  uStack_7c = *(undefined4 *)(param_1 + 0x5c);
  uStack_78 = *(undefined4 *)(param_1 + 0x60);
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar12 + 0xc60);
  local_90 = lVar4;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a31c30;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a32048;
      goto LAB_143a31c39;
    }
  }
  else {
LAB_143a31c30:
    if (iVar6 != 0x10) {
LAB_143a31c39:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar12 + 0xc60), iVar6 == 2))
        goto LAB_143a32048;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a32048;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a31dca;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a31dca:
          puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar10[0x12];
          if (puVar15 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar10 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a31e4a;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a31e4a:
        *(uint **)(puVar10 + 0x10) = puVar15;
        puVar10[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adcc728;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_90;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_90._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_88._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = local_80;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = uStack_7c;
        *(undefined4 *)(puVar17 + 0x18) = uStack_78;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_74;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar11;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_68[0] = (code *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x28,8);
        *local_58 = (longlong)&PTR_LAB_14adcc6e0;
        *(undefined4 *)(local_58 + 3) = local_80;
        *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_7c;
        *(undefined4 *)(local_58 + 4) = uStack_78;
        *(undefined4 *)((longlong)local_58 + 0x24) = uStack_74;
        *(undefined4 *)(local_58 + 1) = (undefined4)local_90;
        *(undefined4 *)((longlong)local_58 + 0xc) = local_90._4_4_;
        *(undefined4 *)(local_58 + 2) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)local_58 + 0x14) = uStack_88._4_4_;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68[0] = FUN_143a3e0a8;
        }
        local_98 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIExport_AddProxy",&DAT_14cb3be40);
        if (local_68[0] != (code *)0x0) {
          plVar14 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar14 = local_48;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a31d01;
    }
  }
LAB_143a32048:
  local_68[0] = (code *)&uStack_88;
  FUN_145a0efaa(lVar4 + 0x10,&local_6c);
  lVar12 = (longlong)local_6c;
  lVar4 = *(longlong *)(lVar4 + 0x10);
  *(undefined1 *)(lVar4 + 8 + lVar12 * 0x48) = (undefined1)local_80;
  *(undefined4 *)(lVar4 + 0xc + lVar12 * 0x48) = uStack_7c;
  *(undefined4 *)(lVar4 + 0x10 + lVar12 * 0x48) = uStack_78;
LAB_143a31d01:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a32122 FUN_143a32122 body=1253 status=ok
// SIG undefined FUN_143a32122(void)

void FUN_143a32122(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146470004(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a32562;
    if (iVar7 != 1) goto LAB_143a3217a;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a32562;
  }
  else {
LAB_143a3217a:
    if (iVar7 == 0x10) goto LAB_143a32562;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a32562:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a32562;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a322e7;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a3b683);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a322e7:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a32367;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a32367:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adcc790;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adcc740;
    local_68[0] = &LAB_143a3e352;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNDIExport_RemoveProxy",&DAT_14cb3be44);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3261c FUN_143a3261c body=1891 status=ok
// SIG undefined FUN_143a3261c(void)

bool FUN_143a3261c(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == (uint *)0x0) goto LAB_143a32895;
  local_90 = *(undefined8 *)param_2;
  if ((((*(longlong *)(param_1 + 0x38) == 0) ||
       (plVar11 = (longlong *)FUN_144741050(param_1 + 0x40), param_3 == 0)) || (*plVar11 == 0)) ||
     (lVar12 = FUN_1404e5848(param_2 + 8,param_3 + 0x1e8,param_1 + 0x38), lVar12 == 0)) {
    *param_2 = 0;
    uVar16 = 0;
  }
  else {
    uVar16 = *(uint *)(lVar12 + 0xc);
    *param_2 = uVar16;
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar16 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      uVar19 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar19);
      }
      LOCK();
      uVar16 = *(uint *)(lVar12 + 0x10);
      bVar23 = uVar16 == 0;
      if (bVar23) {
        *(uint *)(lVar12 + 0x10) = uVar19;
        uVar16 = 0;
      }
      UNLOCK();
      if (bVar23) {
        uVar16 = uVar19;
      }
    }
  }
  param_2[1] = uVar16;
  cVar7 = FUN_1401246e4(&local_90,param_2);
  if (cVar7 != '\0') goto LAB_143a32895;
  lVar12 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_3 + 0x38);
  lVar4 = *(longlong *)(param_3 + 0x100);
  lVar5 = *(longlong *)param_2;
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar17 + 0xc60);
  iVar20 = (int)((ulonglong)lVar4 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143a3273b;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143a32744;
      goto LAB_143a327cc;
    }
  }
  else {
LAB_143a3273b:
    if (iVar8 != 0x10) {
LAB_143a327cc:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar17 + 0xc60), iVar8 == 2)) {
LAB_143a32c3d:
          if (*(int *)(lVar12 + 0x18) != *(int *)(lVar12 + 0x44)) {
            lVar17 = lVar12 + 0x48;
            if (*(longlong *)(lVar12 + 0x50) != 0) {
              lVar17 = *(longlong *)(lVar12 + 0x50);
            }
            iVar8 = *(int *)(lVar17 + (ulonglong)
                                      (*(int *)(lVar12 + 0x58) - 1U & (int)lVar4 + iVar20 * 0x17) *
                                      4);
            if (iVar8 != -1) {
              do {
                plVar11 = (longlong *)(*(longlong *)(lVar12 + 0x10) + (longlong)iVar8 * 0x48);
                if (*plVar11 == lVar4) goto LAB_143a32ca2;
                iVar8 = (int)plVar11[8];
              } while (iVar8 != -1);
            }
          }
          goto LAB_143a32895;
        }
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a32c3d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_143a32963;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_143a32963:
          puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar21 + 0x19);
          uVar16 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar19 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar19 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar21 + 0x19);
            uVar16 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_143a329e3;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_143a329e3:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar16;
        iVar8 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14adcc7f8;
        puVar21[0x15] = lVar12;
        puVar21[0x16] = lVar4;
        puVar21[0x17] = lVar5;
        puVar21[0x18] = lVar3;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
        }
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar21[9] = puVar21;
        puVar21[10] = puVar21;
        lVar12 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar12 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar15 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar12 + 0x30);
        }
        puVar21[0xf] = uVar15;
        puVar21[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar8;
        if (puVar21 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar21);
          LOCK();
          piVar1 = (int *)(puVar21 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14adcc7a0;
        local_78[1] = lVar12;
        local_78[2] = lVar4;
        local_78[3] = lVar5;
        local_78[4] = lVar3;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = FUN_143a3e52a;
        }
        local_98 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIExport_UpdateHandler",&DAT_14cb3be48);
        if (local_88[0] != (code *)0x0) {
          plVar11 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar11 = local_68;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      goto LAB_143a32895;
    }
  }
LAB_143a32744:
  if (*(int *)(lVar12 + 0x18) != *(int *)(lVar12 + 0x44)) {
    lVar17 = lVar12 + 0x48;
    if (*(longlong *)(lVar12 + 0x50) != 0) {
      lVar17 = *(longlong *)(lVar12 + 0x50);
    }
    iVar8 = *(int *)(lVar17 + (ulonglong)(*(int *)(lVar12 + 0x58) - 1U & (int)lVar4 + iVar20 * 0x17)
                              * 4);
    if (iVar8 != -1) {
      do {
        plVar11 = (longlong *)(*(longlong *)(lVar12 + 0x10) + (longlong)iVar8 * 0x48);
        if (*plVar11 == lVar4) goto LAB_143a32ca2;
        iVar8 = (int)plVar11[8];
      } while (iVar8 != -1);
    }
  }
LAB_143a32895:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 == (uint *)0x0;
LAB_143a32ca2:
  if (((ulonglong)(plVar11 + 1) & 0xfffffffffffffff7) != 0) {
    *(longlong *)((longlong)plVar11 + 0x14) = lVar5;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)plVar11 + 0x1c) = 0;
      iVar8 = 0;
    }
    else {
      uVar16 = *(uint *)(lVar3 + 0xc);
      *(uint *)((longlong)plVar11 + 0x1c) = uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar8 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar8 = *(int *)(lVar12 + 0x10);
        bVar23 = iVar8 == 0;
        if (bVar23) {
          *(int *)(lVar12 + 0x10) = iVar20;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar8 = iVar20;
        }
      }
    }
    *(int *)(plVar11 + 4) = iVar8;
  }
  goto LAB_143a32895;
}



// FUNCTION 143a32d80 FUN_143a32d80 body=454 status=ok
// SIG undefined FUN_143a32d80(void)

undefined8 FUN_143a32d80(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (**(longlong **)(param_2 + 0x18) != 0) {
    lVar6 = FUN_14479d2ce(param_2);
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(lVar6 + 0x10);
      uVar7 = FUN_145a79354();
      cVar4 = FUN_144a7ff9e(uVar2,uVar7);
      if (cVar4 != '\0') {
        local_68 = 0;
        uStack_60 = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        cVar4 = FUN_148162210(param_2 + 0x10);
        if (cVar4 != '\0') {
          do {
            uVar3 = uStack_60;
            lVar8 = (longlong)(int)uStack_60;
            uVar5 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
            if (uStack_60._4_4_ < uVar5) {
              FUN_14816c288(&local_68,uVar3 & 0xffffffff);
            }
            lVar8 = lVar8 * 0x38;
            *(undefined8 *)(local_68 + 0x30 + lVar8) = local_78;
            puVar1 = (undefined4 *)(local_68 + 0x20 + lVar8);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
            puVar1 = (undefined4 *)(local_68 + 0x10 + lVar8);
            *puVar1 = uStack_98;
            puVar1[1] = (undefined4)uStack_94;
            puVar1[2] = uStack_94._4_4_;
            puVar1[3] = uStack_8c;
            puVar1 = (undefined4 *)(local_68 + lVar8);
            *puVar1 = (undefined4)local_a8;
            puVar1[1] = local_a8._4_4_;
            puVar1[2] = uStack_a0;
            puVar1[3] = uStack_9c;
            cVar4 = FUN_148162210(param_2 + 0x10,&local_a8);
          } while (cVar4 != '\0');
        }
        local_b0 = *(undefined4 *)(param_3 + 0x14);
        local_b8 = *(undefined8 *)(param_3 + 0xc);
        local_c0 = 0;
        FUN_14485c47a(&local_c0,*(undefined8 *)(param_3 + 0x38));
        local_d0 = (undefined4)local_68;
        uStack_cc = local_68._4_4_;
        uStack_c8 = (int)uStack_60;
        uStack_c4 = uStack_60._4_4_;
        local_68 = 0;
        uStack_60 = 0;
        local_d8 = 0;
        FUN_14485c47a(&local_d8,lVar6);
        FUN_148162110(local_d8,&local_d0,local_c0,&local_b8);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a32f6e FUN_143a32f6e body=69 status=ok
// SIG undefined FUN_143a32f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a32f6e(void)

{
  _DAT_14cb3b498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a32fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b4a0,1);
  return;
}



// FUNCTION 143a33008 FUN_143a33008 body=69 status=ok
// SIG undefined FUN_143a33008(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a33008(void)

{
  _DAT_14cb3b650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a3304a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b658,1);
  return;
}



// FUNCTION 143a3304d FUN_143a3304d body=69 status=ok
// SIG undefined FUN_143a3304d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a3304d(void)

{
  _DAT_14cb3b660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a3308f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b668,1);
  return;
}



// FUNCTION 143a33092 FUN_143a33092 body=3548 status=ok
// SIG undefined FUN_143a33092(void)

undefined8 FUN_143a33092(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  void *pvVar6;
  double dVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  byte *pbVar17;
  undefined4 *puVar19;
  uint *puVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong *plVar23;
  uint *puVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  undefined1 auStack_1e8 [32];
  undefined1 **local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 ***local_190;
  undefined1 *local_188;
  code *local_180;
  longlong *local_170;
  int local_164;
  undefined1 **local_160;
  longlong **pplStack_158;
  longlong local_150;
  longlong local_148;
  longlong lStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  char local_117;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined4 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined1 *local_98 [2];
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  longlong lVar18;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  memset(param_2,0,0xb0);
  *(undefined1 *)param_2 = 1;
  lVar18 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_2[2] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_2[3] = lVar18;
  uVar8 = DAT_14c8463f8._4_4_;
  uVar27 = (undefined4)DAT_14c8463f8;
  uVar12 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar12;
  *(undefined4 *)(param_2 + 5) = uVar27;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar8;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar12 = FUN_144830b78(param_2 + 10,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 10) = uVar12;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  pplStack_158 = &local_170;
  local_98[0] = *(undefined1 **)(param_3 + 0x100);
  local_170 = param_2;
  local_160 = local_98;
  FUN_1415631e2(param_1 + 0x88,&local_164,&local_160);
  *(undefined4 *)((longlong)local_170 + 4) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(local_170 + 1) = *(undefined4 *)(param_1 + 0x40);
  local_164 = 0;
  FUN_1412c8ca8(param_1,local_170 + 0xf,local_170 + 0x11,&local_164);
  iVar13 = local_164 + *(int *)(param_1 + 0x48);
  iVar14 = 1;
  if (1 < iVar13) {
    iVar14 = iVar13;
  }
  *(int *)((longlong)local_170 + 0xc) = iVar14;
  uVar12 = *(undefined4 *)(param_1 + 0x54);
  uVar27 = *(undefined4 *)(param_1 + 0x58);
  uVar8 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(local_170 + 4) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((longlong)local_170 + 0x24) = uVar12;
  *(undefined4 *)(local_170 + 5) = uVar27;
  *(undefined4 *)((longlong)local_170 + 0x2c) = uVar8;
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_160 = (undefined1 **)FUN_1449e2820;
      local_180 = FUN_14081d0ea;
      local_188 = &LAB_140eca530;
      local_198 = &LAB_148063819;
      local_1a0 = &LAB_1460672b6;
      local_1a8 = L"Niagara";
      local_1b0 = 0;
      local_1b8 = 0x10000006;
      local_1c0 = 8;
      local_1c8 = (undefined1 **)CONCAT44(local_1c8._4_4_,0x130);
      local_190 = &local_160;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar23 = DAT_14cb366a0;
    lVar18 = DAT_14cb366a0[0x22];
    if (lVar18 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      lVar18 = plVar23[0x22];
    }
    pbVar17 = (byte *)(lVar18 + 0xe1);
  }
  else {
    pbVar17 = (byte *)(param_1 + 0x80);
  }
  uVar22 = (uint)*pbVar17;
  if (DAT_14c762868 < 3) {
    uVar22 = DAT_14c762868;
  }
  FUN_143938173(&local_160,uVar22,0x600004,1);
  if (((ulonglong)local_160 & 0x100) == 0) {
    if (*(char *)((longlong)local_170 + 0x31) == '\x01') {
      uVar11 = 0;
      goto LAB_143a33264;
    }
  }
  else {
    *(undefined1 *)(local_170 + 6) = local_160._0_1_;
    uVar11 = 1;
LAB_143a33264:
    *(undefined1 *)((longlong)local_170 + 0x31) = uVar11;
  }
  fVar9 = DAT_14c762864;
  if (1e-08 < ABS(DAT_14c762864 + -1.0)) {
    iVar14 = (int)((float)*(int *)((longlong)local_170 + 4) * DAT_14c762864);
    if (iVar14 < 2) {
      iVar14 = 1;
    }
    *(int *)((longlong)local_170 + 4) = iVar14;
    iVar13 = (int)((float)(int)local_170[1] * fVar9);
    iVar14 = 1;
    if (1 < iVar13) {
      iVar14 = iVar13;
    }
    *(int *)(local_170 + 1) = iVar14;
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    iVar14 = (int)local_170[1];
  }
  else {
    dVar4 = *(double *)(param_1 + 0x50);
    uVar12 = SUB84(dVar4,0);
    uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = *(double *)(param_1 + 0x58);
    if (dVar4 <= dVar5) {
      uVar12 = SUB84(dVar5,0);
      uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    dVar7 = (double)CONCAT44(uVar27,uVar12) / (double)*(int *)(param_1 + 0x44);
    *(int *)((longlong)local_170 + 4) =
         (int)((ulonglong)(longlong)ROUND(dVar4 / dVar7 + dVar4 / dVar7 + -0.5) >> 1);
    dVar4 = *(double *)(param_1 + 0x58) / dVar7;
    iVar14 = (int)((ulonglong)(longlong)ROUND(dVar4 + dVar4 + -0.5) >> 1);
    *(int *)(local_170 + 1) = iVar14;
    dVar4 = *(double *)(param_1 + 0x50);
    dVar5 = *(double *)(param_1 + 0x58);
    if ((dVar4 <= dVar5) || (ABS((double)iVar14 * dVar7 - dVar5) <= 1e-08)) {
      if ((dVar4 < dVar5) &&
         (1e-08 < ABS((double)*(int *)((longlong)local_170 + 4) * dVar7 - dVar4))) {
        *(int *)((longlong)local_170 + 4) = *(int *)((longlong)local_170 + 4) + 1;
        iVar14 = (int)local_170[1];
      }
    }
    else {
      iVar14 = iVar14 + 1;
      *(int *)(local_170 + 1) = iVar14;
    }
    local_170[4] = (longlong)((double)*(int *)((longlong)local_170 + 4) * dVar7);
    local_170[5] = (longlong)((double)iVar14 * dVar7);
    *(int *)(param_1 + 0x3c) = *(int *)((longlong)local_170 + 4);
    iVar14 = (int)local_170[1];
    *(int *)(param_1 + 0x40) = iVar14;
  }
  local_170[2] = (longlong)((double)local_170[4] / (double)*(int *)((longlong)local_170 + 4));
  local_170[3] = (longlong)((double)local_170[5] / (double)iVar14);
  local_170[0xe] = 0;
  FUN_1404e5848(local_170 + 7,param_3 + 0x1e8,param_1 + 0x60);
  FUN_143a33e70(local_170,uVar22);
  *(undefined1 *)local_170 = *(undefined1 *)(param_1 + 0x38);
  lVar18 = *(longlong *)(param_1 + 0x28);
  if (local_170[0xe] == 0) {
    local_160 = (undefined1 **)0x0;
  }
  else {
    local_160 = (undefined1 **)FUN_1447b4020();
  }
  plVar23 = local_170;
  local_150 = *(longlong *)(param_3 + 0x100);
  local_148 = *local_170;
  lStack_140 = local_170[1];
  local_138 = (undefined4)local_170[2];
  uStack_134 = *(undefined4 *)((longlong)local_170 + 0x14);
  uStack_130 = (undefined4)local_170[3];
  uStack_12c = *(undefined4 *)((longlong)local_170 + 0x1c);
  local_128 = (undefined4)local_170[4];
  uStack_124 = *(undefined4 *)((longlong)local_170 + 0x24);
  uStack_120 = (undefined4)local_170[5];
  uStack_11c = *(undefined4 *)((longlong)local_170 + 0x2c);
  local_117 = *(char *)((longlong)local_170 + 0x31);
  if (local_117 == '\x01') {
    local_118 = (undefined1)local_170[6];
  }
  local_110 = (undefined4)local_170[7];
  uStack_10c = *(undefined4 *)((longlong)local_170 + 0x3c);
  uStack_108 = (undefined4)local_170[8];
  uStack_104 = *(undefined4 *)((longlong)local_170 + 0x44);
  local_100 = local_170[9];
  local_f8 = (undefined4)local_170[10];
  local_f0 = (void *)0x0;
  uVar22 = *(uint *)(local_170 + 0xc);
  pvVar6 = (void *)local_170[0xb];
  local_e8 = CONCAT44(local_e8._4_4_,uVar22);
  pplStack_158 = (longlong **)lVar18;
  if ((longlong)(int)uVar22 == 0) {
    local_e8 = (ulonglong)uVar22;
  }
  else {
    FUN_1447a127e(&local_f0,uVar22,0);
    memcpy(local_f0,pvVar6,(longlong)(int)uVar22);
  }
  local_e0 = (undefined4)plVar23[0xd];
  local_d8 = plVar23[0xe];
  local_d0 = (void *)0x0;
  uVar22 = *(uint *)(plVar23 + 0x10);
  pvVar6 = (void *)plVar23[0xf];
  local_c8 = CONCAT44(local_c8._4_4_,uVar22);
  if ((longlong)(int)uVar22 == 0) {
    local_c8 = (ulonglong)uVar22;
  }
  else {
    FUN_14181d5f4(&local_d0,uVar22,0);
    memcpy(local_d0,pvVar6,(longlong)(int)uVar22 * 0xc);
  }
  local_c0 = (void *)0x0;
  uVar22 = *(uint *)(plVar23 + 0x12);
  pvVar6 = (void *)plVar23[0x11];
  local_b8 = CONCAT44(local_b8._4_4_,uVar22);
  if ((longlong)(int)uVar22 == 0) {
    local_b8 = (ulonglong)uVar22;
  }
  else {
    FUN_1447bda9e(&local_c0,uVar22,0);
    memcpy(local_c0,pvVar6,(longlong)(int)uVar22 << 2);
  }
  local_a0 = plVar23[0x15];
  local_b0 = (undefined4)plVar23[0x13];
  uStack_ac = *(undefined4 *)((longlong)plVar23 + 0x9c);
  uStack_a8 = (undefined4)plVar23[0x14];
  uStack_a4 = *(undefined4 *)((longlong)plVar23 + 0xa4);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar14 = *(int *)(lVar18 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar14 != 2) {
      if (iVar14 != 1) goto LAB_143a335fb;
      DVar15 = FUN_140ad26c0();
      DVar16 = GetCurrentThreadId();
      if (DVar15 == DVar16) goto LAB_143a33600;
      goto LAB_143a3362d;
    }
  }
  else {
LAB_143a335fb:
    if (iVar14 != 0x10) {
LAB_143a3362d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar14 = *(int *)(lVar18 + 0xc60), iVar14 == 2))
        goto LAB_143a33600;
        if (iVar14 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          if (DVar15 == DVar16) goto LAB_143a33600;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar20 = (uint *)*puVar2;
        if (puVar20 != (uint *)0x0) goto LAB_143a3394d;
        while( true ) {
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_143a3b683);
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
          *puVar2 = puVar19;
          FUN_140217a48(puVar2);
          puVar20 = (uint *)*puVar2;
LAB_143a3394d:
          puVar26 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar24 = (uint *)(puVar26 + 0x2e);
          uVar22 = puVar20[0x12];
          if (puVar24 <= puVar20 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
            LOCK();
            uVar3 = *puVar20;
            *puVar20 = *puVar20 + uVar22 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar22) != 0xffffffff) break;
            puVar20 = (uint *)*puVar2;
            *puVar20 = 0xffffffff;
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
            puVar20[0x12] = 0;
            *puVar2 = puVar20;
            puVar26 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
            puVar24 = (uint *)(puVar26 + 0x2e);
            uVar22 = 0;
            if (puVar24 <= puVar20 + 0x4000) {
              uVar22 = 1;
              goto LAB_143a339cd;
            }
          }
        }
        uVar22 = uVar22 + 1;
LAB_143a339cd:
        *(uint **)(puVar20 + 0x10) = puVar24;
        puVar20[0x12] = uVar22;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14adcc940;
        puVar26[0x17] = local_150;
        puVar26[0x15] = local_160;
        puVar26[0x16] = pplStack_158;
        puVar26[0x18] = local_148;
        puVar26[0x19] = lStack_140;
        *(undefined4 *)(puVar26 + 0x1a) = local_138;
        *(undefined4 *)((longlong)puVar26 + 0xd4) = uStack_134;
        *(undefined4 *)(puVar26 + 0x1b) = uStack_130;
        *(undefined4 *)((longlong)puVar26 + 0xdc) = uStack_12c;
        *(undefined4 *)(puVar26 + 0x1c) = local_128;
        *(undefined4 *)((longlong)puVar26 + 0xe4) = uStack_124;
        *(undefined4 *)(puVar26 + 0x1d) = uStack_120;
        *(undefined4 *)((longlong)puVar26 + 0xec) = uStack_11c;
        *(char *)((longlong)puVar26 + 0xf1) = local_117;
        if (local_117 == '\x01') {
          *(undefined1 *)(puVar26 + 0x1e) = local_118;
        }
        puVar26[0x1f] = CONCAT44(uStack_10c,local_110);
        puVar26[0x20] = CONCAT44(uStack_104,uStack_108);
        puVar26[0x21] = local_100;
        *(undefined4 *)(puVar26 + 0x22) = local_f8;
        puVar26[0x23] = local_f0;
        iVar14 = 0;
        local_f0 = (void *)0x0;
        *(undefined4 *)(puVar26 + 0x24) = (undefined4)local_e8;
        *(undefined4 *)((longlong)puVar26 + 0x124) = local_e8._4_4_;
        local_e8 = 0;
        *(undefined4 *)(puVar26 + 0x25) = local_e0;
        puVar26[0x26] = local_d8;
        puVar26[0x27] = local_d0;
        local_d0 = (void *)0x0;
        *(undefined4 *)(puVar26 + 0x28) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar26 + 0x144) = local_c8._4_4_;
        local_c8 = 0;
        puVar26[0x29] = local_c0;
        local_c0 = (void *)0x0;
        *(undefined4 *)(puVar26 + 0x2a) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar26 + 0x154) = local_b8._4_4_;
        local_b8 = 0;
        puVar26[0x2d] = local_a0;
        *(undefined4 *)(puVar26 + 0x2b) = local_b0;
        *(undefined4 *)((longlong)puVar26 + 0x15c) = uStack_ac;
        *(undefined4 *)(puVar26 + 0x2c) = uStack_a8;
        *(undefined4 *)((longlong)puVar26 + 0x164) = uStack_a4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar22 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
            uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
          }
          else {
            uVar25 = 2;
          }
        }
        else {
          iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar25 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar10 = 1;
          if ((char)uVar25 != '\x06') {
            uVar10 = uVar25;
          }
          uVar25 = uVar10;
          uVar21 = 0;
        }
        else {
          if ((char)uVar25 == '\x06') {
            uVar25 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar21 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar26[0xf] = uVar21;
        puVar26[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar14;
        if (puVar26 == (undefined8 *)0x0) {
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar1 = (int *)(puVar26 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_98[0] = (undefined1 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0xd0,8);
        *local_88 = (longlong)&PTR_LAB_14adcc920;
        local_88[3] = local_150;
        local_88[1] = (longlong)local_160;
        local_88[2] = (longlong)pplStack_158;
        local_88[4] = local_148;
        local_88[5] = lStack_140;
        *(undefined4 *)(local_88 + 6) = local_138;
        *(undefined4 *)((longlong)local_88 + 0x34) = uStack_134;
        *(undefined4 *)(local_88 + 7) = uStack_130;
        *(undefined4 *)((longlong)local_88 + 0x3c) = uStack_12c;
        *(undefined4 *)(local_88 + 8) = local_128;
        *(undefined4 *)((longlong)local_88 + 0x44) = uStack_124;
        *(undefined4 *)(local_88 + 9) = uStack_120;
        *(undefined4 *)((longlong)local_88 + 0x4c) = uStack_11c;
        *(char *)((longlong)local_88 + 0x51) = local_117;
        if (local_117 == '\x01') {
          *(undefined1 *)(local_88 + 10) = local_118;
        }
        local_88[0xb] = CONCAT44(uStack_10c,local_110);
        local_88[0xc] = CONCAT44(uStack_104,uStack_108);
        local_88[0xd] = local_100;
        *(undefined4 *)(local_88 + 0xe) = local_f8;
        local_88[0xf] = (longlong)local_f0;
        local_f0 = (void *)0x0;
        *(undefined4 *)(local_88 + 0x10) = (undefined4)local_e8;
        *(undefined4 *)((longlong)local_88 + 0x84) = local_e8._4_4_;
        local_e8 = 0;
        *(undefined4 *)(local_88 + 0x11) = local_e0;
        local_88[0x12] = local_d8;
        local_88[0x13] = (longlong)local_d0;
        local_d0 = (void *)0x0;
        *(undefined4 *)(local_88 + 0x14) = (undefined4)local_c8;
        *(undefined4 *)((longlong)local_88 + 0xa4) = local_c8._4_4_;
        local_c8 = 0;
        local_88[0x15] = (longlong)local_c0;
        local_c0 = (void *)0x0;
        *(undefined4 *)(local_88 + 0x16) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_88 + 0xb4) = local_b8._4_4_;
        local_b8 = 0;
        local_88[0x19] = local_a0;
        *(undefined4 *)(local_88 + 0x17) = local_b0;
        *(undefined4 *)((longlong)local_88 + 0xbc) = uStack_ac;
        *(undefined4 *)(local_88 + 0x18) = uStack_a8;
        *(undefined4 *)((longlong)local_88 + 0xc4) = uStack_a4;
        if (local_88 != (longlong *)&DAT_fffffffffffffff8) {
          local_98[0] = &LAB_143a3ee78;
        }
        local_1c8 = local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3bf8c);
        if (local_98[0] != (undefined1 *)0x0) {
          plVar23 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar23 = local_78;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
      }
      goto LAB_143a33841;
    }
  }
LAB_143a33600:
  FUN_143a3e93a(&local_160);
LAB_143a33841:
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_f0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a33e70 FUN_143a33e70 body=1083 status=ok
// SIG undefined FUN_143a33e70(void)

ulonglong FUN_143a33e70(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 0x38);
  if (((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
      ((int)uVar1 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x48))) &&
     (lVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + (ulonglong)uVar1 * 8),
     lVar5 != 0)) {
    lVar6 = FUN_1458bbce6();
    lVar8 = *(longlong *)(lVar5 + 0x10);
    iVar4 = *(int *)(lVar8 + 0x38);
    if ((iVar4 < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      if (DAT_14cb0b9a0 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146408884;
        local_58 = &LAB_147d719e1;
        local_60 = &LAB_140fb41fe;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x168;
        FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
        lVar8 = *(longlong *)(lVar5 + 0x10);
        iVar4 = *(int *)(lVar8 + 0x38);
      }
      if ((iVar4 < *(int *)(DAT_14cb0b9a0 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8)
          != DAT_14cb0b9a0 + 0x30)) goto LAB_143a33ebe;
    }
    *(longlong *)(param_1 + 0x70) = lVar5;
  }
LAB_143a33ebe:
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = FUN_1458bbce6();
    if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      plVar3 = *(longlong **)(param_1 + 0x70);
      if (plVar3 != (longlong *)0x0) {
        if (DAT_14cb0b9a0 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_146408884;
          local_58 = &LAB_147d719e1;
          local_60 = &LAB_140fb41fe;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x168;
          FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
        }
        if ((*(int *)(DAT_14cb0b9a0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) ==
            DAT_14cb0b9a0 + 0x30)) {
          iVar4 = *(int *)(param_1 + 0xc);
          if ((DAT_14ca84e40 / *(int *)(param_1 + 8)) * (DAT_14ca84e40 / *(int *)(param_1 + 4)) <
              iVar4) {
            *(undefined8 *)(param_1 + 0x70) = 0;
          }
          else {
            iVar11 = (int)*(undefined8 *)(param_1 + 4);
            iVar7 = DAT_14ca84e40 / iVar11;
            iVar12 = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
            uVar10 = DAT_14c967818;
            if (iVar4 <= (DAT_14ca84e40 / iVar12) * iVar7) {
              if (iVar4 < iVar7) {
                iVar7 = iVar4;
              }
              uVar10 = CONCAT44(((iVar4 + iVar7 + -1) / iVar7) * iVar12,iVar7 * iVar11);
            }
            FUN_14393826e(&local_30,param_2,0x600004);
            if (local_30._4_1_ == '\x01') {
              iVar4 = (int)((ulonglong)uVar10 >> 0x20);
              if ((((int)plVar3[0x28] != (int)uVar10) ||
                  (*(int *)((longlong)plVar3 + 0x144) != iVar4)) ||
                 ((uint)local_30 != *(byte *)((longlong)plVar3 + 0x15b))) {
                *(char *)((longlong)plVar3 + 0x15b) = (char)local_30;
                plVar3[0x29] = 0x3f000000;
                plVar3[0x2a] = 0;
                *(byte *)((longlong)plVar3 + 0x15c) = *(byte *)((longlong)plVar3 + 0x15c) & 0xfd;
                *(int *)(plVar3 + 0x28) = (int)uVar10;
                *(int *)((longlong)plVar3 + 0x144) = iVar4;
                (**(code **)(*plVar3 + 0x318))(plVar3);
                uVar9 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
                FUN_140768b6e(plVar3,1);
                goto LAB_143a33ec9;
              }
            }
          }
        }
      }
    }
    else {
      FUN_143938173(&local_30,param_2,0x600004,1);
      if ((local_30._1_1_ == '\x01') &&
         ((((int)plVar3[0x28] != *(int *)(param_1 + 4) ||
           (*(int *)((longlong)plVar3 + 0x144) != *(int *)(param_1 + 8))) ||
          (((int)plVar3[0x29] != *(int *)(param_1 + 0xc) ||
           (*(char *)((longlong)plVar3 + 0x15c) != (char)local_30)))))) {
        *(char *)((longlong)plVar3 + 0x15c) = (char)local_30;
        *(undefined8 *)((longlong)plVar3 + 0x14c) = 0x3f000000;
        *(undefined8 *)((longlong)plVar3 + 0x154) = 0;
        uVar2 = *(undefined4 *)(param_1 + 0xc);
        plVar3[0x28] = *(longlong *)(param_1 + 4);
        *(undefined4 *)(plVar3 + 0x29) = uVar2;
        (**(code **)(*plVar3 + 0x318))(plVar3);
        uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        FUN_14373a478(plVar3,1);
        goto LAB_143a33ec9;
      }
    }
  }
  uVar9 = 0;
LAB_143a33ec9:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143a342ac FUN_143a342ac body=1470 status=ok
// SIG undefined FUN_143a342ac(void)

void FUN_143a342ac(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1411a5f0e(param_1 + 0x88,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_2 + 0x31) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar14 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a34349;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a3434e;
      goto LAB_143a3437d;
    }
  }
  else {
LAB_143a34349:
    if (iVar6 != 0x10) {
LAB_143a3437d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar14 + 0xc60), iVar6 == 2))
        goto LAB_143a3434e;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a3434e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a344f7;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar14 + 0x310);
          *(undefined8 *)(lVar14 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a344f7:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar15 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x17);
            uVar12 = 0;
            if (puVar15 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a34579;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a34579:
        *(uint **)(puVar10 + 0x10) = puVar15;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adcc970;
        puVar16[0x15] = lVar4;
        puVar16[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar17 != '\x06') {
            uVar5 = uVar17;
          }
          uVar17 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14adcc950;
        local_78[0] = &LAB_143a3f0b8;
        local_50 = lVar4;
        local_48 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3bf90);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a34419;
    }
  }
LAB_143a3434e:
  FUN_14128efea(lVar4 + 0x10,uVar11);
LAB_143a34419:
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar4 = *(longlong *)(param_3 + 0x100);
    lVar14 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x118);
    }
    iVar6 = *(int *)(lVar14 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                              (longlong)*(int *)(param_1 + 0x120) - 1U) * 4);
    if (iVar6 != -1) {
      lVar14 = *(longlong *)(param_1 + 0xd8);
      do {
        if (*(longlong *)(lVar14 + (longlong)iVar6 * 0x18) == lVar4) {
          FUN_148171aec((longlong *)(param_1 + 0xd8));
          break;
        }
        iVar6 = *(int *)(lVar14 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3486c FUN_143a3486c body=2271 status=ok
// SIG undefined FUN_143a3486c(void)

undefined4 FUN_143a3486c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  undefined ***pppuVar22;
  uint *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0xbc)) {
LAB_143a34915:
    lVar12 = 0;
  }
  else {
    lVar17 = *(longlong *)(param_3 + 0x100);
    lVar12 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar12 = *(longlong *)(param_1 + 200);
    }
    iVar8 = *(int *)(lVar12 + (ulonglong)
                              (*(int *)(param_1 + 0xd0) - 1U &
                              (int)lVar17 + (int)((ulonglong)lVar17 >> 0x20) * 0x17) * 4);
    if (iVar8 == -1) goto LAB_143a34915;
    lVar12 = 0;
    do {
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar8 * 0x18);
      if (*plVar19 == lVar17) {
        if (plVar19 == (longlong *)0x0) goto LAB_143a34915;
        lVar12 = plVar19[1];
        break;
      }
      iVar8 = (int)plVar19[2];
    } while (iVar8 != -1);
  }
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_90 = local_78;
      local_78[0] = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_140eca530;
      local_98 = &LAB_148063819;
      local_a0 = &LAB_1460672b6;
      local_a8 = L"Niagara";
      local_b0 = 0;
      local_b8 = 0x10000006;
      local_c0 = 8;
      local_c8 = (code **)CONCAT44(local_c8._4_4_,0x130);
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar19 = DAT_14cb366a0;
    lVar17 = DAT_14cb366a0[0x22];
    if (lVar17 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      lVar17 = plVar19[0x22];
    }
    pbVar11 = (byte *)(lVar17 + 0xe1);
  }
  else {
    pbVar11 = (byte *)(param_1 + 0x80);
  }
  uVar20 = (uint)*pbVar11;
  if (DAT_14c762868 < 3) {
    uVar20 = DAT_14c762868;
  }
  uVar7 = FUN_143a33e70(lVar12,uVar20);
  lVar17 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar12 + 0x70) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_1447b4020();
  }
  lVar24 = *(longlong *)(param_3 + 0x100);
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar21 + 0xc60);
  iVar5 = (int)((ulonglong)lVar24 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143a349bf;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143a349c8;
      goto LAB_143a34b06;
    }
  }
  else {
LAB_143a349bf:
    if (iVar8 != 0x10) {
LAB_143a34b06:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar21 + 0xc60), iVar8 == 2)) {
LAB_143a34fe9:
          if (*(int *)(lVar17 + 0x18) != *(int *)(lVar17 + 0x44)) {
            lVar21 = lVar17 + 0x48;
            if (*(longlong *)(lVar17 + 0x50) != 0) {
              lVar21 = *(longlong *)(lVar17 + 0x50);
            }
            iVar8 = *(int *)(lVar21 + (ulonglong)
                                      (*(int *)(lVar17 + 0x58) - 1U & (int)lVar24 + iVar5 * 0x17) *
                                      4);
            if (iVar8 != -1) {
              do {
                lVar21 = *(longlong *)(lVar17 + 0x10) + (longlong)iVar8 * 0xd0;
                if (*(longlong *)(*(longlong *)(lVar17 + 0x10) + (longlong)iVar8 * 0xd0) == lVar24)
                goto LAB_143a35050;
                iVar8 = *(int *)(lVar21 + 200);
              } while (iVar8 != -1);
            }
          }
          lVar21 = 0;
LAB_143a35050:
          lVar17 = lVar21 + 8;
          if (lVar21 == 0) {
            lVar17 = 0;
          }
          if ((lVar12 == 0) || (lVar12 = *(longlong *)(lVar12 + 0x10), lVar12 == 0)) {
            lVar24 = *(longlong *)(lVar17 + 0x70);
            if (lVar24 == 0) goto LAB_143a34bb0;
            *(undefined8 *)(lVar17 + 0x70) = 0;
          }
          else {
            lVar24 = *(longlong *)(lVar17 + 0x70);
            if (lVar24 == lVar12) goto LAB_143a34bb0;
            *(longlong *)(lVar17 + 0x70) = lVar12;
            LOCK();
            *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
            UNLOCK();
            if (lVar24 == 0) goto LAB_143a34bb0;
          }
          LOCK();
          puVar15 = (uint *)(lVar24 + 8);
          uVar20 = *puVar15;
          *puVar15 = *puVar15 - 1;
          UNLOCK();
          if ((uVar20 & 0x3fffffff) == 1) {
            LOCK();
            puVar15 = (uint *)(lVar24 + 8);
            uVar20 = *puVar15;
            *puVar15 = *puVar15 | 0x40000000;
            UNLOCK();
            if ((uVar20 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(lVar24 + 0xd);
              plVar13 = (longlong *)FUN_14001cc68(0x10,8);
              plVar13[1] = lVar24;
              plVar19 = DAT_14ca843c0;
              plVar18 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar13 = (longlong)plVar19;
                  LOCK();
                  bVar27 = plVar19 != DAT_14ca843c0;
                  plVar18 = plVar13;
                  if (bVar27) {
                    plVar19 = DAT_14ca843c0;
                    plVar18 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar18;
                  UNLOCK();
                } while (bVar27);
              }
              else {
                do {
                  *plVar13 = (longlong)plVar18;
                  LOCK();
                  bVar27 = plVar18 != DAT_14ca843c8;
                  plVar19 = plVar13;
                  if (bVar27) {
                    plVar18 = DAT_14ca843c8;
                    plVar19 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar19;
                  UNLOCK();
                } while (bVar27);
              }
            }
          }
          goto LAB_143a34bb0;
        }
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a34fe9;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar15 = (uint *)*puVar2;
        if (puVar15 != (uint *)0x0) goto LAB_143a34c7d;
        while( true ) {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_143a34c7d:
          puVar26 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar23 = (uint *)(puVar26 + 0x18);
          uVar20 = puVar15[0x12];
          if (puVar23 <= puVar15 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar3 = *puVar15;
            *puVar15 = *puVar15 + uVar20 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar20) != 0xffffffff) break;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar26 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
            puVar23 = (uint *)(puVar26 + 0x18);
            uVar20 = 0;
            if (puVar23 <= puVar15 + 0x4000) {
              uVar20 = 1;
              goto LAB_143a34cfd;
            }
          }
        }
        uVar20 = uVar20 + 1;
LAB_143a34cfd:
        *(uint **)(puVar15 + 0x10) = puVar23;
        puVar15[0x12] = uVar20;
        iVar8 = 0;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14adcc9a0;
        puVar26[0x15] = lVar12;
        puVar26[0x16] = lVar17;
        puVar26[0x17] = lVar24;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar20 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
            uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
            iVar8 = 0;
          }
          else {
            uVar25 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar25 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar17 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar17 == 0) {
          uVar6 = 1;
          if ((char)uVar25 != '\x06') {
            uVar6 = uVar25;
          }
          uVar25 = uVar6;
          uVar16 = 0;
        }
        else {
          if ((char)uVar25 == '\x06') {
            uVar25 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
          }
          uVar16 = *(undefined8 *)(lVar17 + 0x30);
        }
        puVar26[0xf] = uVar16;
        puVar26[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar8;
        if (puVar26 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar1 = (int *)(puVar26 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_c8 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14adcc980;
        local_78[0] = FUN_143a3f290;
        local_50 = lVar12;
        local_48 = lVar17;
        local_40 = lVar24;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3bf94);
        if (local_78[0] != (code *)0x0) {
          pppuVar22 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar22 = &local_58;
          }
          (*(code *)(*pppuVar22)[2])();
        }
      }
      goto LAB_143a34bb0;
    }
  }
LAB_143a349c8:
  if (*(int *)(lVar17 + 0x18) != *(int *)(lVar17 + 0x44)) {
    lVar21 = lVar17 + 0x48;
    if (*(longlong *)(lVar17 + 0x50) != 0) {
      lVar21 = *(longlong *)(lVar17 + 0x50);
    }
    iVar8 = *(int *)(lVar21 + (ulonglong)(*(int *)(lVar17 + 0x58) - 1U & (int)lVar24 + iVar5 * 0x17)
                              * 4);
    if (iVar8 != -1) {
      do {
        lVar21 = *(longlong *)(lVar17 + 0x10) + (longlong)iVar8 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar17 + 0x10) + (longlong)iVar8 * 0xd0) == lVar24)
        goto LAB_143a34a2f;
        iVar8 = *(int *)(lVar21 + 200);
      } while (iVar8 != -1);
    }
  }
  lVar21 = 0;
LAB_143a34a2f:
  lVar17 = lVar21 + 8;
  if (lVar21 == 0) {
    lVar17 = 0;
  }
  if ((lVar12 == 0) || (lVar12 = *(longlong *)(lVar12 + 0x10), lVar12 == 0)) {
    lVar24 = *(longlong *)(lVar17 + 0x70);
    if (lVar24 == 0) goto LAB_143a34bb0;
    *(undefined8 *)(lVar17 + 0x70) = 0;
  }
  else {
    lVar24 = *(longlong *)(lVar17 + 0x70);
    if (lVar24 == lVar12) goto LAB_143a34bb0;
    *(longlong *)(lVar17 + 0x70) = lVar12;
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
    if (lVar24 == 0) goto LAB_143a34bb0;
  }
  LOCK();
  puVar15 = (uint *)(lVar24 + 8);
  uVar20 = *puVar15;
  *puVar15 = *puVar15 - 1;
  UNLOCK();
  if ((uVar20 & 0x3fffffff) == 1) {
    LOCK();
    puVar15 = (uint *)(lVar24 + 8);
    uVar20 = *puVar15;
    *puVar15 = *puVar15 | 0x40000000;
    UNLOCK();
    if ((uVar20 >> 0x1e & 1) == 0) {
      bVar4 = *(byte *)(lVar24 + 0xd);
      plVar13 = (longlong *)FUN_14001cc68(0x10,8);
      plVar13[1] = lVar24;
      plVar19 = DAT_14ca843c0;
      plVar18 = DAT_14ca843c8;
      if ((bVar4 & 2) == 0) {
        do {
          *plVar13 = (longlong)plVar19;
          LOCK();
          bVar27 = plVar19 != DAT_14ca843c0;
          plVar18 = plVar13;
          if (bVar27) {
            plVar19 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar18;
          UNLOCK();
        } while (bVar27);
      }
      else {
        do {
          *plVar13 = (longlong)plVar18;
          LOCK();
          bVar27 = plVar18 != DAT_14ca843c8;
          plVar19 = plVar13;
          if (bVar27) {
            plVar18 = DAT_14ca843c8;
            plVar19 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar19;
          UNLOCK();
        } while (bVar27);
      }
    }
  }
LAB_143a34bb0:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3514c FUN_143a3514c body=1854 status=ok
// SIG undefined FUN_143a3514c(void)

ulonglong FUN_143a3514c(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  uint *puVar19;
  ulonglong unaff_RBP;
  undefined7 uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == (longlong *)0x0 || param_2 == 0) {
    uVar21 = 0;
    goto LAB_143a35363;
  }
  lVar11 = *(longlong *)(param_2 + 0x760);
  plVar3 = *(longlong **)(param_2 + 0x768);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((((param_4 < 0 || lVar11 == 0) || (*(int *)(param_1 + 0x48) <= param_4)) ||
      ((int)param_3[0x28] != *(int *)(param_1 + 0x3c))) ||
     ((*(int *)((longlong)param_3 + 0x144) != *(int *)(param_1 + 0x40) ||
      (cVar7 = (**(code **)(*param_3 + 0x3b8))(param_3), cVar7 != '\r')))) {
    uVar21 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x100);
    lVar10 = FUN_1447b4020(param_3);
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar8 = *(int *)(lVar17 + 0xc60);
    iVar5 = (int)((ulonglong)lVar11 >> 0x20);
    if (DAT_14c86a9fc == 0) {
      if (iVar8 != 2) {
        if (iVar8 != 1) goto LAB_143a35231;
        uVar16 = FUN_140ad26c0();
        unaff_RBP = (ulonglong)uVar16;
        DVar9 = GetCurrentThreadId();
        if (uVar16 == DVar9) goto LAB_143a3523a;
        goto LAB_143a353b4;
      }
LAB_143a3523a:
      if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
        lVar17 = lVar4 + 0x48;
        if (*(longlong *)(lVar4 + 0x50) != 0) {
          lVar17 = *(longlong *)(lVar4 + 0x50);
        }
        iVar8 = *(int *)(lVar17 + (ulonglong)
                                  (*(int *)(lVar4 + 0x58) - 1U & (int)lVar11 + iVar5 * 0x17) * 4);
        if (iVar8 != -1) {
          do {
            lVar17 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar8 * 0xd0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar8 * 0xd0) == lVar11)
            goto LAB_143a3529b;
            iVar8 = *(int *)(lVar17 + 200);
          } while (iVar8 != -1);
        }
      }
    }
    else {
LAB_143a35231:
      if (iVar8 == 0x10) goto LAB_143a3523a;
LAB_143a353b4:
      if (DAT_14ca9a438 != '\0') {
LAB_143a353e5:
        uVar20 = (undefined7)(unaff_RBP >> 8);
        if (DAT_14ca9a43c == 0) {
          puVar12 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar14 = (uint *)*puVar12;
          if (puVar14 != (uint *)0x0) goto LAB_143a35524;
          while( true ) {
            uVar16 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar16 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar16 | 1;
              __tlregdtor(&LAB_143a3b683);
            }
            lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar13 = *(undefined4 **)(lVar17 + 0x310);
            *(undefined8 *)(lVar17 + 0x310) = 0;
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar12 = puVar13;
            FUN_140217a48(puVar12);
            puVar14 = (uint *)*puVar12;
LAB_143a35524:
            puVar22 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar22 + 0x19);
            uVar16 = puVar14[0x12];
            if (puVar19 <= puVar14 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
              LOCK();
              uVar2 = *puVar14;
              *puVar14 = *puVar14 + uVar16 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar16) != 0xffffffff) break;
              puVar14 = (uint *)*puVar12;
              *puVar14 = 0xffffffff;
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
              puVar14[0x12] = 0;
              *puVar12 = puVar14;
              puVar22 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar22 + 0x19);
              uVar16 = 0;
              if (puVar19 <= puVar14 + 0x4000) {
                uVar16 = 1;
                goto LAB_143a355a4;
              }
            }
          }
          uVar16 = uVar16 + 1;
LAB_143a355a4:
          *(uint **)(puVar14 + 0x10) = puVar19;
          puVar14[0x12] = uVar16;
          iVar8 = 0;
          FUN_1447247dc(puVar22,0);
          *puVar22 = &PTR_FUN_14adcc9f0;
          puVar22[0x15] = lVar4;
          puVar22[0x16] = lVar11;
          puVar22[0x17] = lVar10;
          *(int *)(puVar22 + 0x18) = param_4;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar16 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
              uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
              iVar8 = 0;
            }
            else {
              uVar21 = 2;
            }
          }
          else {
            iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar21 = 5;
          }
          if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
          }
          puVar22[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar22[9] = puVar22;
          puVar22[10] = puVar22;
          lVar11 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar11 == 0) {
            uVar6 = 1;
            if ((char)uVar21 != '\x06') {
              uVar6 = uVar21;
            }
            uVar21 = uVar6;
            uVar15 = 0;
          }
          else {
            if ((char)uVar21 == '\x06') {
              uVar21 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
            }
            uVar15 = *(undefined8 *)(lVar11 + 0x30);
          }
          puVar22[0xf] = uVar15;
          puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar22 + 0x1c) = iVar8;
          if (puVar22 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
            UNLOCK();
            local_88 = (code *)CONCAT71(local_88._1_7_,1);
            FUN_1447439e4(puVar22);
            LOCK();
            piVar1 = (int *)(puVar22 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar21 = CONCAT71(uVar20,1);
            if (*piVar1 == 0) {
              (**(code **)*puVar22)(puVar22,1);
            }
            goto LAB_143a35341;
          }
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          local_88 = (code *)0x0;
          puVar12 = (undefined8 *)FUN_14001cc68(0x28,8);
          uStack_78 = SUB84(puVar12,0);
          local_74 = (int)((ulonglong)puVar12 >> 0x20);
          *puVar12 = &PTR_LAB_14adcc9d0;
          puVar12[1] = lVar4;
          puVar12[2] = lVar11;
          puVar12[3] = lVar10;
          *(int *)(puVar12 + 4) = param_4;
          if (puVar12 + 1 != (longlong *)0x0) {
            local_88 = FUN_143a3f752;
          }
          local_98 = &local_88;
          FUN_14005a792(&DAT_14ca9a440,L"FUpdateDIColorCurve",&DAT_14cb3bf98);
          if (local_88 != (code *)0x0) {
            plVar18 = (longlong *)CONCAT44(local_74,uStack_78);
            if ((longlong *)CONCAT44(local_74,uStack_78) == (longlong *)0x0) {
              plVar18 = (longlong *)&local_68;
            }
            (**(code **)(*plVar18 + 0x10))();
          }
        }
        uVar21 = CONCAT71(uVar20,1);
        goto LAB_143a35341;
      }
      if ((DAT_14c86a9f8 == '\x01') && (iVar8 = *(int *)(lVar17 + 0xc60), iVar8 != 2)) {
        if (iVar8 == 1) {
          uVar16 = FUN_140ad26c0();
          unaff_RBP = (ulonglong)uVar16;
          DVar9 = GetCurrentThreadId();
          if (uVar16 == DVar9) goto LAB_143a357ff;
        }
        goto LAB_143a353e5;
      }
LAB_143a357ff:
      if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
        lVar17 = lVar4 + 0x48;
        if (*(longlong *)(lVar4 + 0x50) != 0) {
          lVar17 = *(longlong *)(lVar4 + 0x50);
        }
        iVar8 = *(int *)(lVar17 + (ulonglong)
                                  (*(int *)(lVar4 + 0x58) - 1U & (int)lVar11 + iVar5 * 0x17) * 4);
        if (iVar8 != -1) {
          do {
            lVar17 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar8 * 0xd0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar8 * 0xd0) == lVar11)
            goto LAB_143a3529b;
            iVar8 = *(int *)(lVar17 + 200);
          } while (iVar8 != -1);
        }
      }
    }
    lVar17 = 0;
LAB_143a3529b:
    lVar11 = lVar17 + 8;
    if (lVar17 == 0) {
      lVar11 = 0;
    }
    uVar21 = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (((lVar10 != 0) && (lVar11 != 0 && *(longlong *)(lVar10 + 0x10) != 0)) &&
       (*(longlong **)(lVar11 + 0x60) != (longlong *)0x0)) {
      local_70 = DAT_14c9a5298;
      local_68 = DAT_14c9a52a0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 1;
      uStack_58 = 0;
      local_54 = 0x100000000;
      local_88 = *(code **)(lVar11 + 0xc);
      uStack_80 = 1;
      local_7c = 0;
      uStack_78 = 0;
      local_74 = param_4;
      FUN_1477f1eb1(&DAT_14ca85100,*(undefined8 *)(**(longlong **)(lVar11 + 0x60) + 8));
    }
  }
LAB_143a35341:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar3 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
LAB_143a35363:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3588c FUN_143a3588c body=1692 status=ok
// SIG undefined FUN_143a3588c(void)

ulonglong FUN_143a3588c(longlong param_1,longlong param_2,undefined1 **param_3,undefined4 *param_4,
                       undefined4 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined ***pppuVar18;
  undefined1 **ppuVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    *param_4 = 0xffffffff;
    *param_5 = 0xffffffff;
    uVar22 = 0;
    goto LAB_143a359e6;
  }
  lVar5 = *(longlong *)(param_2 + 0x760);
  plVar6 = *(longlong **)(param_2 + 0x768);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0xbc))) {
LAB_143a359b7:
    *param_4 = 0xffffffff;
    *param_5 = 0xffffffff;
LAB_143a359c2:
    uVar22 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x100);
    lVar17 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar17 = *(longlong *)(param_1 + 200);
    }
    iVar10 = *(int *)(lVar17 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U &
                               (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar10 == -1) goto LAB_143a359b7;
    while (plVar3 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar10 * 0x18),
          *plVar3 != lVar5) {
      iVar10 = (int)plVar3[2];
      if (iVar10 == -1) goto LAB_143a359b7;
    }
    if ((plVar3 == (longlong *)0x0) || (lVar17 = plVar3[1], lVar17 == 0)) goto LAB_143a359b7;
    uVar16 = *(uint *)(lVar17 + 0xc);
    iVar23 = (int)*(undefined8 *)(lVar17 + 4);
    uVar22 = (longlong)DAT_14ca84e40 / (longlong)iVar23;
    iVar20 = (int)((ulonglong)*(undefined8 *)(lVar17 + 4) >> 0x20);
    uVar8 = (longlong)DAT_14ca84e40 % (longlong)iVar20;
    iVar10 = (int)uVar22;
    uVar12 = DAT_14c967818;
    uVar21 = DAT_14c967818;
    if ((int)uVar16 <= (DAT_14ca84e40 / iVar20) * iVar10) {
      uVar22 = uVar22 & 0xffffffff;
      if ((int)uVar16 < iVar10) {
        uVar22 = (ulonglong)uVar16;
      }
      iVar10 = (int)uVar22;
      lVar17 = (longlong)(int)(uVar16 + iVar10 + -1);
      lVar7 = lVar17 / (longlong)iVar10;
      uVar8 = lVar17 % (longlong)iVar10;
      uVar12 = lVar7 << 0x20 | uVar22;
      uVar21 = CONCAT44(iVar20 * (int)lVar7,iVar10 * iVar23);
    }
    *param_4 = (int)uVar12;
    *param_5 = (int)(uVar12 >> 0x20);
    if ((((param_3 == (undefined1 **)0x0) || (*(int *)(param_3 + 0x28) != (int)uVar21)) ||
        (*(int *)((longlong)param_3 + 0x144) != (int)(uVar21 >> 0x20))) ||
       (cVar9 = (**(code **)(*param_3 + 0x3b8))(param_3,uVar8 & 0xffffffff), cVar9 != '\r'))
    goto LAB_143a359c2;
    local_90 = *(undefined8 *)(param_1 + 0x28);
    uStack_88 = lVar5;
    local_80 = (undefined1 *)FUN_1447b4020(param_3);
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar5 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 != 1) goto LAB_143a35abb;
        uVar16 = FUN_140ad26c0();
        param_3 = (undefined1 **)(ulonglong)uVar16;
        DVar11 = GetCurrentThreadId();
        if (uVar16 == DVar11) goto LAB_143a35ac0;
        goto LAB_143a35af1;
      }
LAB_143a35ac0:
      FUN_143a3fb76(&local_90,&DAT_14ca85100);
      goto LAB_143a35b92;
    }
LAB_143a35abb:
    if (iVar10 == 0x10) goto LAB_143a35ac0;
LAB_143a35af1:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar5 + 0xc60), iVar10 == 2))
      goto LAB_143a35ac0;
      if (iVar10 == 1) {
        uVar16 = FUN_140ad26c0();
        param_3 = (undefined1 **)(ulonglong)uVar16;
        DVar11 = GetCurrentThreadId();
        if (uVar16 == DVar11) goto LAB_143a35ac0;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar2;
      if (puVar14 != (uint *)0x0) goto LAB_143a35c3a;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143a3b683);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        FUN_140217a48(puVar2);
        puVar14 = (uint *)*puVar2;
LAB_143a35c3a:
        param_3 = (undefined1 **)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        ppuVar19 = param_3 + 0x18;
        uVar16 = puVar14[0x12];
        if (ppuVar19 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar4 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar2;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          param_3 = (undefined1 **)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          ppuVar19 = param_3 + 0x18;
          uVar16 = 0;
          if (ppuVar19 <= puVar14 + 0x4000) {
            uVar16 = 1;
            goto LAB_143a35cba;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143a35cba:
      *(undefined1 ***)(puVar14 + 0x10) = ppuVar19;
      puVar14[0x12] = uVar16;
      iVar10 = 0;
      FUN_1447247dc(param_3,0);
      *param_3 = (undefined1 *)&PTR_FUN_14adcca20;
      *(undefined4 *)(param_3 + 0x15) = (undefined4)local_90;
      *(undefined4 *)((longlong)param_3 + 0xac) = local_90._4_4_;
      *(undefined4 *)(param_3 + 0x16) = (undefined4)uStack_88;
      *(undefined4 *)((longlong)param_3 + 0xb4) = uStack_88._4_4_;
      param_3[0x17] = local_80;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
          iVar10 = 0;
        }
        else {
          uVar22 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar22 = 5;
      }
      if (*(code **)(param_3[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(param_3[0xe] + 0x18))(param_3 + 0xe,param_3 + 9);
      }
      param_3[0xe] = (undefined1 *)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      param_3[9] = (undefined1 *)param_3;
      param_3[10] = (undefined1 *)param_3;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar8 = 1;
        if ((char)uVar22 != '\x06') {
          uVar8 = uVar22;
        }
        uVar22 = uVar8;
        puVar15 = (undefined1 *)0x0;
      }
      else {
        if ((char)uVar22 == '\x06') {
          uVar22 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        puVar15 = *(undefined1 **)(lVar5 + 0x30);
      }
      param_3[0xf] = puVar15;
      param_3[0x10] = (undefined1 *)(uVar22 << 0x3b | 0xc00000527800b400);
      *(int *)((longlong)param_3 + 0x1c) = iVar10;
      if (param_3 == (undefined1 **)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(param_3 + 1) = *(int *)(param_3 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(param_3);
        LOCK();
        ppuVar19 = param_3 + 1;
        *(int *)ppuVar19 = *(int *)ppuVar19 + -1;
        UNLOCK();
        if (*(int *)ppuVar19 == 0) {
          (**(code **)*param_3)(param_3,1);
        }
      }
    }
    else {
      param_3 = local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14adcca00;
      local_50 = (undefined4)local_90;
      uStack_4c = local_90._4_4_;
      uStack_48 = (undefined4)uStack_88;
      uStack_44 = uStack_88._4_4_;
      local_40 = local_80;
      local_78[0] = &LAB_143a3fcd8;
      local_98 = param_3;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateDIColorCurve",&DAT_14cb3bf9c);
      if (local_78[0] != (undefined1 *)0x0) {
        pppuVar18 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar18 = &local_58;
        }
        (*(code *)(*pppuVar18)[2])();
      }
    }
LAB_143a35b92:
    uVar22 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_143a359e6:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar22 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a35f2a FUN_143a35f2a body=3558 status=ok
// SIG undefined FUN_143a35f2a(void)

undefined8 FUN_143a35f2a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  byte *pbVar10;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_1a8 [32];
  undefined1 **local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  code *local_130;
  longlong lStack_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  char local_e7;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined4 local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  longlong lVar11;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(char *)(param_2 + 0x13) != '\x01') || (*(int *)((longlong)param_2 + 4) < 1)) ||
     (*(int *)(param_2 + 1) < 1)) goto LAB_143a365a1;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[2] = (double)param_2[4] / (double)*(int *)((longlong)param_2 + 4);
  param_2[3] = (double)param_2[5] / (double)*(int *)(param_2 + 1);
  if (param_2[0xe] == 0) {
    lStack_128 = *(longlong *)(param_1 + 0x28);
LAB_143a3601e:
    local_130 = (code *)0x0;
  }
  else {
    if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
      if (DAT_14cb366a0 == (longlong *)0x0) {
        local_150 = &local_130;
        local_130 = FUN_1449e2820;
        local_140 = FUN_14081d0ea;
        local_148 = &LAB_140eca530;
        local_158 = &LAB_148063819;
        local_160 = &LAB_1460672b6;
        local_168 = L"Niagara";
        local_170 = 0;
        local_178 = 0x10000006;
        local_180 = 8;
        local_188 = (undefined1 **)CONCAT44(local_188._4_4_,0x130);
        FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
      }
      plVar17 = DAT_14cb366a0;
      lVar11 = DAT_14cb366a0[0x22];
      if (lVar11 == 0) {
        (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
        lVar11 = plVar17[0x22];
      }
      pbVar10 = (byte *)(lVar11 + 0xe1);
    }
    else {
      pbVar10 = (byte *)(param_1 + 0x80);
    }
    uVar18 = (uint)*pbVar10;
    if (DAT_14c762868 < 3) {
      uVar18 = DAT_14c762868;
    }
    FUN_143a33e70(param_2,uVar18);
    lStack_128 = *(longlong *)(param_1 + 0x28);
    if (param_2[0xe] == 0) goto LAB_143a3601e;
    local_130 = (code *)FUN_1447b4020();
  }
  local_120 = *(longlong *)(param_3 + 0x100);
  local_108 = *(undefined4 *)(param_2 + 2);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_100 = *(undefined4 *)(param_2 + 3);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_f8 = *(undefined4 *)(param_2 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_f0 = *(undefined4 *)(param_2 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_118 = (undefined4)*param_2;
  uStack_114 = (undefined4)((ulonglong)*param_2 >> 0x20);
  uStack_110 = (undefined4)param_2[1];
  uStack_10c = (undefined4)((ulonglong)param_2[1] >> 0x20);
  local_e7 = *(char *)((longlong)param_2 + 0x31);
  if (local_e7 == '\x01') {
    local_e8 = *(undefined1 *)(param_2 + 6);
  }
  local_e0 = *(undefined4 *)(param_2 + 7);
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_d8 = *(undefined4 *)(param_2 + 8);
  uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x44);
  local_d0 = param_2[9];
  local_c8 = *(undefined4 *)(param_2 + 10);
  local_c0 = (void *)0x0;
  uVar18 = *(uint *)(param_2 + 0xc);
  pvVar5 = (void *)param_2[0xb];
  local_b8 = CONCAT44(local_b8._4_4_,uVar18);
  if ((longlong)(int)uVar18 == 0) {
    local_b8 = (ulonglong)uVar18;
  }
  else {
    FUN_1447a127e(&local_c0,uVar18,0);
    memcpy(local_c0,pvVar5,(longlong)(int)uVar18);
  }
  local_b0 = *(undefined4 *)(param_2 + 0xd);
  local_a8 = param_2[0xe];
  local_a0 = (void *)0x0;
  uVar18 = *(uint *)(param_2 + 0x10);
  pvVar5 = (void *)param_2[0xf];
  local_98 = CONCAT44(local_98._4_4_,uVar18);
  if ((longlong)(int)uVar18 == 0) {
    local_98 = (ulonglong)uVar18;
  }
  else {
    FUN_14181d5f4(&local_a0,uVar18,0);
    memcpy(local_a0,pvVar5,(longlong)(int)uVar18 * 0xc);
  }
  local_90 = (void *)0x0;
  uVar18 = *(uint *)(param_2 + 0x12);
  pvVar5 = (void *)param_2[0x11];
  local_88 = CONCAT44(local_88._4_4_,uVar18);
  if ((longlong)(int)uVar18 == 0) {
    local_88 = (ulonglong)uVar18;
  }
  else {
    FUN_1447bda9e(&local_90,uVar18,0);
    memcpy(local_90,pvVar5,(longlong)(int)uVar18 << 2);
  }
  local_70 = param_2[0x15];
  local_80 = *(undefined4 *)(param_2 + 0x13);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x9c);
  uStack_78 = *(undefined4 *)(param_2 + 0x14);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0xa4);
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar11 + 0xc60);
  if (DAT_14c86a9fc != 0) {
LAB_143a361c3:
    if (iVar7 != 0x10) goto LAB_143a36350;
LAB_143a361cc:
    if (*(int *)(lStack_128 + 0x18) != *(int *)(lStack_128 + 0x44)) {
      lVar11 = lStack_128 + 0x48;
      if (*(longlong *)(lStack_128 + 0x50) != 0) {
        lVar11 = *(longlong *)(lStack_128 + 0x50);
      }
      iVar7 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(lStack_128 + 0x58) - 1U &
                                (int)local_120 + (int)((ulonglong)local_120 >> 0x20) * 0x17) * 4);
      if (iVar7 != -1) {
        do {
          lVar11 = *(longlong *)(lStack_128 + 0x10) + (longlong)iVar7 * 0xd0;
          if (*(longlong *)(*(longlong *)(lStack_128 + 0x10) + (longlong)iVar7 * 0xd0) == local_120)
          goto LAB_143a36244;
          iVar7 = *(int *)(lVar11 + 200);
        } while (iVar7 != -1);
      }
    }
    lVar11 = 0;
LAB_143a36244:
    lVar23 = lVar11 + 8;
    if (lVar11 == 0) {
      lVar23 = 0;
    }
    *(ulonglong *)(lVar23 + 0xc) = CONCAT44(uStack_110,uStack_114);
    *(undefined4 *)(lVar23 + 0x14) = uStack_10c;
    *(undefined4 *)(lVar23 + 0x18) = local_108;
    *(undefined4 *)(lVar23 + 0x1c) = uStack_104;
    *(undefined4 *)(lVar23 + 0x20) = uStack_100;
    *(undefined4 *)(lVar23 + 0x24) = uStack_fc;
    FUN_141098b4c(lVar23 + 0x40);
    *(undefined8 *)(lVar23 + 0x60) = 0;
    *(undefined8 *)(lVar23 + 0x68) = 0;
    if ((local_130 == (code *)0x0) || (lVar11 = *(longlong *)(local_130 + 0x10), lVar11 == 0)) {
      lVar22 = *(longlong *)(lVar23 + 0x70);
      if (lVar22 != 0) {
        *(undefined8 *)(lVar23 + 0x70) = 0;
LAB_143a362c8:
        LOCK();
        puVar14 = (uint *)(lVar22 + 8);
        uVar18 = *puVar14;
        *puVar14 = *puVar14 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          LOCK();
          puVar14 = (uint *)(lVar22 + 8);
          uVar18 = *puVar14;
          *puVar14 = *puVar14 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar22 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = lVar22;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar17;
                LOCK();
                bVar24 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar12;
                if (bVar24) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar24);
            }
            else {
              do {
                *plVar12 = (longlong)plVar16;
                LOCK();
                bVar24 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar12;
                if (bVar24) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar24);
            }
          }
        }
      }
    }
    else {
      lVar22 = *(longlong *)(lVar23 + 0x70);
      if (lVar22 != lVar11) {
        *(longlong *)(lVar23 + 0x70) = lVar11;
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
        if (lVar22 != 0) goto LAB_143a362c8;
      }
    }
    goto LAB_143a3656c;
  }
  if (iVar7 == 2) goto LAB_143a361cc;
  if (iVar7 != 1) goto LAB_143a361c3;
  DVar8 = FUN_140ad26c0();
  DVar9 = GetCurrentThreadId();
  if (DVar8 == DVar9) goto LAB_143a361cc;
LAB_143a36350:
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 = *(int *)(lVar11 + 0xc60), iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143a36b68;
      }
      goto LAB_143a36381;
    }
LAB_143a36b68:
    if (*(int *)(lStack_128 + 0x18) != *(int *)(lStack_128 + 0x44)) {
      lVar11 = lStack_128 + 0x48;
      if (*(longlong *)(lStack_128 + 0x50) != 0) {
        lVar11 = *(longlong *)(lStack_128 + 0x50);
      }
      iVar7 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(lStack_128 + 0x58) - 1U &
                                (int)local_120 + (int)((ulonglong)local_120 >> 0x20) * 0x17) * 4);
      if (iVar7 != -1) {
        do {
          lVar11 = *(longlong *)(lStack_128 + 0x10) + (longlong)iVar7 * 0xd0;
          if (*(longlong *)(*(longlong *)(lStack_128 + 0x10) + (longlong)iVar7 * 0xd0) == local_120)
          goto LAB_143a36be0;
          iVar7 = *(int *)(lVar11 + 200);
        } while (iVar7 != -1);
      }
    }
    lVar11 = 0;
LAB_143a36be0:
    lVar23 = lVar11 + 8;
    if (lVar11 == 0) {
      lVar23 = 0;
    }
    *(ulonglong *)(lVar23 + 0xc) = CONCAT44(uStack_110,uStack_114);
    *(undefined4 *)(lVar23 + 0x14) = uStack_10c;
    *(undefined4 *)(lVar23 + 0x18) = local_108;
    *(undefined4 *)(lVar23 + 0x1c) = uStack_104;
    *(undefined4 *)(lVar23 + 0x20) = uStack_100;
    *(undefined4 *)(lVar23 + 0x24) = uStack_fc;
    FUN_141098b4c(lVar23 + 0x40);
    *(undefined8 *)(lVar23 + 0x60) = 0;
    *(undefined8 *)(lVar23 + 0x68) = 0;
    if ((local_130 == (code *)0x0) || (lVar11 = *(longlong *)(local_130 + 0x10), lVar11 == 0)) {
      lVar22 = *(longlong *)(lVar23 + 0x70);
      if (lVar22 != 0) {
        *(undefined8 *)(lVar23 + 0x70) = 0;
LAB_143a36c64:
        LOCK();
        puVar14 = (uint *)(lVar22 + 8);
        uVar18 = *puVar14;
        *puVar14 = *puVar14 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          LOCK();
          puVar14 = (uint *)(lVar22 + 8);
          uVar18 = *puVar14;
          *puVar14 = *puVar14 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar22 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = lVar22;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar17;
                LOCK();
                bVar24 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar12;
                if (bVar24) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar24);
            }
            else {
              do {
                *plVar12 = (longlong)plVar16;
                LOCK();
                bVar24 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar12;
                if (bVar24) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar24);
            }
          }
        }
      }
    }
    else {
      lVar22 = *(longlong *)(lVar23 + 0x70);
      if (lVar22 != lVar11) {
        *(longlong *)(lVar23 + 0x70) = lVar11;
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
        if (lVar22 != 0) goto LAB_143a36c64;
      }
    }
  }
  else {
LAB_143a36381:
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar2;
      if (puVar14 != (uint *)0x0) goto LAB_143a3666a;
      while( true ) {
        uVar18 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar18 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar18 | 1;
          __tlregdtor(&LAB_143a3b683);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        FUN_140217a48(puVar2);
        puVar14 = (uint *)*puVar2;
LAB_143a3666a:
        puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar21 + 0x2e);
        uVar18 = puVar14[0x12];
        if (puVar19 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar3 = *puVar14;
          *puVar14 = *puVar14 + uVar18 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar18) != 0xffffffff) break;
          puVar14 = (uint *)*puVar2;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar21 + 0x2e);
          uVar18 = 0;
          if (puVar19 <= puVar14 + 0x4000) {
            uVar18 = 1;
            goto LAB_143a366ea;
          }
        }
      }
      uVar18 = uVar18 + 1;
LAB_143a366ea:
      *(uint **)(puVar14 + 0x10) = puVar19;
      puVar14[0x12] = uVar18;
      FUN_1447247dc(puVar21,0);
      *puVar21 = &PTR_FUN_14adcca50;
      puVar21[0x17] = local_120;
      puVar21[0x15] = local_130;
      puVar21[0x16] = lStack_128;
      puVar21[0x18] = CONCAT44(uStack_114,local_118);
      puVar21[0x19] = CONCAT44(uStack_10c,uStack_110);
      *(undefined4 *)(puVar21 + 0x1a) = local_108;
      *(undefined4 *)((longlong)puVar21 + 0xd4) = uStack_104;
      *(undefined4 *)(puVar21 + 0x1b) = uStack_100;
      *(undefined4 *)((longlong)puVar21 + 0xdc) = uStack_fc;
      *(undefined4 *)(puVar21 + 0x1c) = local_f8;
      *(undefined4 *)((longlong)puVar21 + 0xe4) = uStack_f4;
      *(undefined4 *)(puVar21 + 0x1d) = uStack_f0;
      *(undefined4 *)((longlong)puVar21 + 0xec) = uStack_ec;
      *(char *)((longlong)puVar21 + 0xf1) = local_e7;
      if (local_e7 == '\x01') {
        *(undefined1 *)(puVar21 + 0x1e) = local_e8;
      }
      puVar21[0x1f] = CONCAT44(uStack_dc,local_e0);
      puVar21[0x20] = CONCAT44(uStack_d4,uStack_d8);
      puVar21[0x21] = local_d0;
      *(undefined4 *)(puVar21 + 0x22) = local_c8;
      puVar21[0x23] = local_c0;
      iVar7 = 0;
      local_c0 = (void *)0x0;
      *(undefined4 *)(puVar21 + 0x24) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar21 + 0x124) = local_b8._4_4_;
      local_b8 = 0;
      *(undefined4 *)(puVar21 + 0x25) = local_b0;
      puVar21[0x26] = local_a8;
      puVar21[0x27] = local_a0;
      local_a0 = (void *)0x0;
      *(undefined4 *)(puVar21 + 0x28) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar21 + 0x144) = local_98._4_4_;
      local_98 = 0;
      puVar21[0x29] = local_90;
      local_90 = (void *)0x0;
      *(undefined4 *)(puVar21 + 0x2a) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar21 + 0x154) = local_88._4_4_;
      local_88 = 0;
      puVar21[0x2d] = local_70;
      *(undefined4 *)(puVar21 + 0x2b) = local_80;
      *(undefined4 *)((longlong)puVar21 + 0x15c) = uStack_7c;
      *(undefined4 *)(puVar21 + 0x2c) = uStack_78;
      *(undefined4 *)((longlong)puVar21 + 0x164) = uStack_74;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar18 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
          uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
        }
        else {
          uVar20 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar20 = 5;
      }
      if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
      }
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar21[9] = puVar21;
      puVar21[10] = puVar21;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        uVar6 = 1;
        if ((char)uVar20 != '\x06') {
          uVar6 = uVar20;
        }
        uVar20 = uVar6;
        uVar15 = 0;
      }
      else {
        if ((char)uVar20 == '\x06') {
          uVar20 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar11 + 0x30);
      }
      puVar21[0xf] = uVar15;
      puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar21 + 0x1c) = iVar7;
      if (puVar21 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar21);
        LOCK();
        piVar1 = (int *)(puVar21 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    else {
      local_68[0] = (undefined1 *)0x0;
      local_58 = (longlong *)FUN_14001cc68(0xd0,8);
      *local_58 = (longlong)&PTR_LAB_14adcca30;
      local_58[3] = local_120;
      local_58[1] = (longlong)local_130;
      local_58[2] = lStack_128;
      local_58[4] = CONCAT44(uStack_114,local_118);
      local_58[5] = CONCAT44(uStack_10c,uStack_110);
      *(undefined4 *)(local_58 + 6) = local_108;
      *(undefined4 *)((longlong)local_58 + 0x34) = uStack_104;
      *(undefined4 *)(local_58 + 7) = uStack_100;
      *(undefined4 *)((longlong)local_58 + 0x3c) = uStack_fc;
      *(undefined4 *)(local_58 + 8) = local_f8;
      *(undefined4 *)((longlong)local_58 + 0x44) = uStack_f4;
      *(undefined4 *)(local_58 + 9) = uStack_f0;
      *(undefined4 *)((longlong)local_58 + 0x4c) = uStack_ec;
      *(char *)((longlong)local_58 + 0x51) = local_e7;
      if (local_e7 == '\x01') {
        *(undefined1 *)(local_58 + 10) = local_e8;
      }
      local_58[0xb] = CONCAT44(uStack_dc,local_e0);
      local_58[0xc] = CONCAT44(uStack_d4,uStack_d8);
      local_58[0xd] = local_d0;
      *(undefined4 *)(local_58 + 0xe) = local_c8;
      local_58[0xf] = (longlong)local_c0;
      local_c0 = (void *)0x0;
      *(undefined4 *)(local_58 + 0x10) = (undefined4)local_b8;
      *(undefined4 *)((longlong)local_58 + 0x84) = local_b8._4_4_;
      local_b8 = 0;
      *(undefined4 *)(local_58 + 0x11) = local_b0;
      local_58[0x12] = local_a8;
      local_58[0x13] = (longlong)local_a0;
      local_a0 = (void *)0x0;
      *(undefined4 *)(local_58 + 0x14) = (undefined4)local_98;
      *(undefined4 *)((longlong)local_58 + 0xa4) = local_98._4_4_;
      local_98 = 0;
      local_58[0x15] = (longlong)local_90;
      local_90 = (void *)0x0;
      *(undefined4 *)(local_58 + 0x16) = (undefined4)local_88;
      *(undefined4 *)((longlong)local_58 + 0xb4) = local_88._4_4_;
      local_88 = 0;
      local_58[0x19] = local_70;
      *(undefined4 *)(local_58 + 0x17) = local_80;
      *(undefined4 *)((longlong)local_58 + 0xbc) = uStack_7c;
      *(undefined4 *)(local_58 + 0x18) = uStack_78;
      *(undefined4 *)((longlong)local_58 + 0xc4) = uStack_74;
      if (local_58 != (longlong *)&DAT_fffffffffffffff8) {
        local_68[0] = &LAB_143a3ffea;
      }
      local_188 = local_68;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3bfa0);
      if (local_68[0] != (undefined1 *)0x0) {
        plVar17 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar17 = local_48;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
    }
  }
LAB_143a3656c:
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143a365a1:
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a36d12 FUN_143a36d12 body=281 status=ok
// SIG undefined FUN_143a36d12(void)

void FUN_143a36d12(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_2[2];
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0xd0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0xd0) == lVar3) {
          if ((lVar5 != 0) && (lVar5 != -8)) {
            lVar3 = lVar5 + 0x48;
            if (*(longlong *)(lVar5 + 0x58) != 0) {
              lVar3 = *(longlong *)(lVar5 + 0x58);
            }
            iVar4 = *(int *)(lVar5 + 0x60);
            if ((longlong)iVar4 != 0) {
              uVar1 = *param_2;
              lVar5 = 0;
              do {
                uVar2 = FUN_14024867a(*(undefined8 *)(lVar3 + lVar5),uVar1);
                local_58 = 0;
                uStack_50 = 0;
                FUN_140c4fe69(uVar1,uVar2,&local_58,2);
                lVar5 = lVar5 + 8;
              } while ((longlong)iVar4 * 8 != lVar5);
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 200);
      } while (iVar4 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a36e2c FUN_143a36e2c body=724 status=ok
// SIG undefined FUN_143a36e2c(void)

void FUN_143a36e2c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar6 = param_2[2];
    lVar8 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x50);
    }
    iVar9 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0xd0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0xd0) == lVar6) break;
        iVar9 = *(int *)(lVar8 + 200);
        lVar8 = 0;
      } while (iVar9 != -1);
      goto LAB_143a36eb2;
    }
  }
  lVar8 = 0;
LAB_143a36eb2:
  lVar6 = lVar8 + 8;
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  lVar8 = *(longlong *)(lVar6 + 0x70);
  if (((lVar8 != 0) && (plVar2 = *(longlong **)(lVar6 + 0x60), plVar2 != (longlong *)0x0)) &&
     (*plVar2 != 0)) {
    uVar3 = *param_2;
    if (*(char *)(lVar8 + 0x52) == '\x01') {
      FUN_1481de44c(plVar2,uVar3,lVar8,L"NiagaraRenderTargetToCopyTo");
    }
    else if (*(char *)(lVar8 + 0x52) == '\0') {
      local_4c = *(int *)(lVar6 + 0x14);
      local_50[0] = 0;
      local_48 = *(undefined8 *)(lVar6 + 0xc);
      local_40 = DAT_14c967818;
      local_38 = DAT_14c967818;
      iVar9 = DAT_14ca84e40 / (int)local_48;
      iVar10 = (int)((ulonglong)local_48 >> 0x20);
      if (local_4c <= (DAT_14ca84e40 / iVar10) * iVar9) {
        if (local_4c < iVar9) {
          iVar9 = local_4c;
        }
        local_50[0] = 1;
        iVar4 = (local_4c + iVar9 + -1) / iVar9;
        local_40 = CONCAT44(iVar4,iVar9);
        local_38 = CONCAT44(iVar10 * iVar4,iVar9 * (int)local_48);
      }
      uVar5 = FUN_1481de422(plVar2,uVar3);
      FUN_1481649aa(local_50,uVar3,uVar5,lVar8);
    }
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar8 = lVar6 + 0x40;
    if (*(longlong *)(lVar6 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar6 + 0x50);
    }
    iVar9 = *(int *)(lVar6 + 0x58);
    if ((longlong)iVar9 != 0) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(lVar8 + lVar7);
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar9 * 8 != lVar7);
    }
    lVar6 = *(longlong *)(lVar6 + 0xb8);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
        lVar8 = param_2[2];
        lVar7 = lVar6 + 0x48;
        if (*(longlong *)(lVar6 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar6 + 0x50);
        }
        iVar9 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(lVar6 + 0x58) - 1U &
                                 (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
        if (iVar9 != -1) {
          do {
            lVar7 = *(longlong *)(lVar6 + 0x10) + (longlong)iVar9 * 0xd0;
            if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar9 * 0xd0) == lVar8)
            goto LAB_143a37037;
            iVar9 = *(int *)(lVar7 + 200);
          } while (iVar9 != -1);
        }
      }
      lVar7 = 0;
LAB_143a37037:
      lVar6 = lVar7 + 0x48;
      if (*(longlong *)(lVar7 + 0x58) != 0) {
        lVar6 = *(longlong *)(lVar7 + 0x58);
      }
      iVar9 = *(int *)(lVar7 + 0x60);
      if ((longlong)iVar9 != 0) {
        lVar8 = 0;
        do {
          lVar7 = *(longlong *)(lVar6 + lVar8);
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar9 * 8 != lVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a37224 FUN_143a37224 body=2621 status=ok
// SIG undefined FUN_143a37224(void)

ulonglong FUN_143a37224(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  int iVar18;
  longlong lVar19;
  uint *puVar20;
  ulonglong uVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  uint uVar27;
  ushort uVar28;
  longlong lVar29;
  int iVar30;
  longlong *plVar31;
  bool bVar32;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [3];
  undefined4 local_bc;
  undefined1 *local_b8;
  int local_ac;
  code *local_a8;
  undefined1 **local_a0;
  undefined ***local_98;
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar21 = 0;
  memset(param_2,0,0xb0);
  *param_2 = 1;
  uVar14 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  *(undefined8 *)(param_2 + 0x18) = uVar14;
  uVar5 = DAT_14c8463f8._4_4_;
  uVar4 = (undefined4)DAT_14c8463f8;
  uVar8 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_2 + 0x20) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_2 + 0x24) = uVar8;
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  *(undefined4 *)(param_2 + 0x2c) = uVar5;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  uVar8 = FUN_144830b78(param_2 + 0x50,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 0x50) = uVar8;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x89) = 0;
  *(undefined8 *)(param_2 + 0x91) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  local_a0 = &local_b8;
  local_100 = *(code **)(param_3 + 0x100);
  local_a8 = (code *)&local_100;
  local_b8 = param_2;
  FUN_1415631e2(param_1 + 0x88,local_d8);
  if ((longlong)*(int *)(param_3 + 0x110) != 0) {
    plVar16 = *(longlong **)(param_3 + 0x108);
    plVar31 = plVar16 + (longlong)*(int *)(param_3 + 0x110) * 2;
LAB_143a3731f:
    lVar24 = *plVar16;
    lVar3 = *(longlong *)(lVar24 + 0x28);
    if (lVar3 == 0) goto LAB_143a37398;
    iVar9 = *(int *)(param_1 + 0x130);
    if (iVar9 == *(int *)(lVar3 + 0x68)) {
      if (1 < iVar9) {
        lVar29 = 0;
        do {
          uVar28 = *(ushort *)(*(longlong *)(param_1 + 0x128) + lVar29);
          uVar21 = (ulonglong)uVar28;
          uVar22 = *(ushort *)(*(longlong *)(lVar3 + 0x60) + lVar29);
          if (uVar28 == uVar22) {
            if (uVar28 == 0) break;
          }
          else {
            if (0x7f < (uVar22 | uVar28)) goto LAB_143a37385;
            uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
            uVar23 = (ulonglong)uVar22;
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
            if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[uVar23]) goto LAB_143a37385;
          }
          lVar29 = lVar29 + 2;
        } while( true );
      }
    }
    else if (*(int *)(lVar3 + 0x68) + iVar9 != 1) goto LAB_143a37398;
    goto LAB_143a373aa;
  }
  goto LAB_143a3757e;
LAB_143a37385:
  if (uVar28 == uVar22) {
LAB_143a373aa:
    if (((lVar24 != 0) && (lVar24 = *(longlong *)(lVar24 + 0x18), lVar24 != 0)) &&
       (lVar3 = *(longlong *)(lVar24 + 0x58), lVar3 != 0)) {
      FUN_1400b22c2(&local_100);
      iVar9 = (int)uStack_f8;
      if ((int)uStack_f8 < 2) {
        local_a8 = (code *)0x0;
        uVar15 = *(uint *)(param_1 + 0x140);
        _Src = *(void **)(param_1 + 0x138);
        local_a0 = (undefined1 **)CONCAT44(local_a0._4_4_,uVar15);
        if ((longlong)(int)uVar15 == 0) {
          local_a0 = (undefined1 **)(ulonglong)uVar15;
        }
        else {
          FUN_1446dd670(&local_a8,uVar15,0);
          memcpy(local_a8,_Src,(longlong)(int)uVar15 * 2);
        }
      }
      else {
        iVar30 = *(int *)(param_1 + 0x140) + -1;
        if (*(int *)(param_1 + 0x140) == 0) {
          iVar30 = 0;
        }
        local_a8 = local_100;
        local_100 = (code *)0x0;
        iVar7 = uStack_f8._4_4_;
        local_a0 = uStack_f8;
        uStack_f8 = (undefined1 **)0x0;
        iVar18 = iVar30 + iVar9;
        if (iVar18 < iVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar30);
        }
        if (iVar7 < iVar18) {
          FUN_1446f8c06(&local_a8);
        }
        FUN_1400020e8(&local_a8,*(undefined8 *)(param_1 + 0x138));
      }
      if (local_100 != (code *)0x0) {
        FUN_1400020a8();
      }
      if ((longlong)*(int *)(lVar24 + 0xb0) == 0) goto LAB_143a3754d;
      plVar31 = *(longlong **)(lVar24 + 0xa8);
      plVar16 = plVar31 + *(int *)(lVar24 + 0xb0);
      lVar24 = 0;
      goto LAB_143a3748f;
    }
    goto LAB_143a3757c;
  }
LAB_143a37398:
  plVar16 = plVar16 + 2;
  if (plVar16 == plVar31) goto LAB_143a3757c;
  goto LAB_143a3731f;
  while( true ) {
    lVar24 = lVar24 + 1;
    plVar31 = plVar31 + 1;
    if (plVar31 == plVar16) break;
LAB_143a3748f:
    lVar29 = *plVar31;
    FUN_14029eeae(lVar24 * 0x48 + *(longlong *)(lVar3 + 0x290),&local_100);
    if ((int)uStack_f8 == (int)local_a0) {
      bVar32 = true;
      if (1 < (int)uStack_f8) {
        lVar26 = 0;
        while( true ) {
          uVar28 = *(ushort *)(local_100 + lVar26);
          uVar15 = (uint)uVar28;
          uVar22 = *(ushort *)(local_a8 + lVar26);
          uVar27 = (uint)uVar22;
          if (uVar28 != uVar22) {
            if ((uVar22 | uVar28) < 0x80) {
              uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar28];
              uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar22];
              if ((&DAT_149e05da0)[uVar28] == (&DAT_149e05da0)[uVar22]) goto LAB_143a374e6;
            }
            iVar9 = uVar15 - uVar27;
            goto LAB_143a37528;
          }
          if (uVar28 == 0) break;
LAB_143a374e6:
          lVar26 = lVar26 + 2;
        }
        iVar9 = 0;
LAB_143a37528:
        bVar32 = iVar9 == 0;
      }
    }
    else {
      bVar32 = (int)local_a0 + (int)uStack_f8 == 1;
    }
    if (local_100 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (bVar32) {
      lVar24 = *(longlong *)(lVar29 + 0x28);
      goto LAB_143a3755a;
    }
  }
LAB_143a3754d:
  lVar29 = 0;
  lVar24 = 0;
LAB_143a3755a:
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (lVar24 == 0 || lVar29 == 0) {
LAB_143a3757c:
    uVar21 = 0;
    goto LAB_143a3757e;
  }
  local_bc = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1412c8ca8(param_1);
  if (*(int *)(lVar29 + 0x90) != *(int *)(lVar29 + 0xbc)) {
    lVar26 = *(longlong *)(param_3 + 0x100);
    lVar19 = lVar29 + 0xc0;
    if (*(longlong *)(lVar29 + 200) != 0) {
      lVar19 = *(longlong *)(lVar29 + 200);
    }
    iVar9 = *(int *)(lVar19 + (ulonglong)
                              (*(int *)(lVar29 + 0xd0) - 1U &
                              (int)lVar26 + (int)((ulonglong)lVar26 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        plVar16 = (longlong *)(*(longlong *)(lVar29 + 0x88) + (longlong)iVar9 * 0x18);
        if (*plVar16 == lVar26) {
          if (plVar16 != (longlong *)0x0) {
            lVar26 = plVar16[1];
            *(longlong *)(local_b8 + 0xa0) = lVar29;
            *(longlong *)(local_b8 + 0xa8) = lVar26;
            if (((lVar26 == 0) || (*(int *)(lVar29 + 0x48) < 1)) ||
               (*(int *)(lVar29 + 0x48) == *(int *)(lVar26 + 0xc))) goto LAB_143a376aa;
            uVar21 = 0;
            goto LAB_143a3781b;
          }
          break;
        }
        iVar9 = (int)plVar16[2];
      } while (iVar9 != -1);
    }
  }
  *(longlong *)(local_b8 + 0xa0) = lVar29;
  *(undefined8 *)(local_b8 + 0xa8) = 0;
LAB_143a376aa:
  local_100 = *(code **)(param_1 + 0x28);
  uStack_f8 = *(undefined1 ***)(param_3 + 0x100);
  lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar29 + 0xc60);
  local_f0 = lVar24;
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143a376e8;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143a376ed;
      goto LAB_143a3774b;
    }
LAB_143a376ed:
    pcVar6 = local_100;
    local_a8 = (code *)&uStack_f8;
    FUN_14117c176(local_100 + 0x10,&local_ac);
    lVar24 = *(longlong *)(pcVar6 + 0x10);
LAB_143a37710:
    *(longlong *)(lVar24 + 0xc0 + (longlong)local_ac * 0xd0) = local_f0;
  }
  else {
LAB_143a376e8:
    if (iVar9 == 0x10) goto LAB_143a376ed;
LAB_143a3774b:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar9 = *(int *)(lVar29 + 0xc60), iVar9 != 2)) {
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143a37c19;
        }
        goto LAB_143a3777c;
      }
LAB_143a37c19:
      pcVar6 = local_100;
      local_a8 = (code *)&uStack_f8;
      FUN_14117c176(local_100 + 0x10,&local_ac);
      lVar24 = *(longlong *)(pcVar6 + 0x10);
      goto LAB_143a37710;
    }
LAB_143a3777c:
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_143a378e2;
      while( true ) {
        uVar15 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar15 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar15 | 1;
          __tlregdtor(&LAB_143a3b683);
        }
        lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar24 + 0x310);
        *(undefined8 *)(lVar24 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        FUN_140217a48(puVar2);
        puVar13 = (uint *)*puVar2;
LAB_143a378e2:
        puVar25 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar25 + 0x18);
        uVar15 = puVar13[0x12];
        if (puVar20 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar27 = *puVar13;
          *puVar13 = *puVar13 + uVar15 + 1;
          UNLOCK();
          if ((uVar27 ^ uVar15) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar25 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar25 + 0x18);
          uVar15 = 0;
          if (puVar20 <= puVar13 + 0x4000) {
            uVar15 = 1;
            goto LAB_143a37962;
          }
        }
      }
      uVar15 = uVar15 + 1;
LAB_143a37962:
      *(uint **)(puVar13 + 0x10) = puVar20;
      puVar13[0x12] = uVar15;
      iVar9 = 0;
      FUN_1447247dc(puVar25,0);
      *puVar25 = &PTR_FUN_14adcca80;
      *(undefined4 *)(puVar25 + 0x15) = (undefined4)local_100;
      *(undefined4 *)((longlong)puVar25 + 0xac) = local_100._4_4_;
      *(int *)(puVar25 + 0x16) = (int)uStack_f8;
      *(int *)((longlong)puVar25 + 0xb4) = uStack_f8._4_4_;
      puVar25[0x17] = local_f0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar15 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
          iVar9 = 0;
        }
        else {
          uVar21 = 2;
        }
      }
      else {
        iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar21 = 5;
      }
      if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
      }
      puVar25[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar25[9] = puVar25;
      puVar25[10] = puVar25;
      lVar24 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar24 == 0) {
        uVar23 = 1;
        if ((char)uVar21 != '\x06') {
          uVar23 = uVar21;
        }
        uVar21 = uVar23;
        uVar14 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar24 + 0x38) >> 0x3b;
        }
        uVar14 = *(undefined8 *)(lVar24 + 0x30);
      }
      puVar25[0xf] = uVar14;
      puVar25[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar25 + 0x1c) = iVar9;
      if (puVar25 == (undefined8 *)0x0) {
        local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
        UNLOCK();
        local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(puVar25);
        LOCK();
        piVar1 = (int *)(puVar25 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar25)(puVar25,1);
        }
      }
    }
    else {
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_LAB_14adcca60;
      local_80 = (undefined4)local_100;
      uStack_7c = local_100._4_4_;
      uStack_78 = (int)uStack_f8;
      uStack_74 = uStack_f8._4_4_;
      local_70 = local_f0;
      local_a8 = FUN_143a4022a;
      local_108 = &local_a8;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3bfa4);
      if (local_a8 != (code *)0x0) {
        pppuVar17 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar17 = &local_88;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
  }
  uVar21 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
LAB_143a3781b:
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
LAB_143a3757e:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a37c62 FUN_143a37c62 body=1302 status=ok
// SIG undefined FUN_143a37c62(void)

void FUN_143a37c62(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_2 + 0x31) = 0;
  }
  FUN_1411a5f0e(param_1 + 0x88,*(undefined8 *)(param_3 + 0x100));
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a37cff;
    if (iVar7 != 1) goto LAB_143a37cfa;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a37cff;
  }
  else {
LAB_143a37cfa:
    if (iVar7 == 0x10) goto LAB_143a37cff;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a37cff:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a37cff;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a37e9b;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a3b683);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a37e9b:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a37f1b;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a37f1b:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adccab0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adcca90;
    local_68[0] = &LAB_143a404a8;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3bfa8);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3818d FUN_143a3818d body=69 status=ok
// SIG undefined FUN_143a3818d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a3818d(void)

{
  _DAT_14cb3b730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a381cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b738,1);
  return;
}



// FUNCTION 143a381d2 FUN_143a381d2 body=69 status=ok
// SIG undefined FUN_143a381d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a381d2(void)

{
  _DAT_14cb3b740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a38214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3b748,1);
  return;
}



// FUNCTION 143a382c2 FUN_143a382c2 body=5180 status=ok
// SIG undefined FUN_143a382c2(void)

undefined8 FUN_143a382c2(longlong param_1,undefined1 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  longlong *plVar18;
  int *piVar19;
  uint *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_208 [32];
  code ****local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  code ****local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  int local_18c;
  undefined1 *local_188;
  undefined1 local_17c [4];
  code ****local_178;
  undefined1 **ppuStack_170;
  undefined ***local_168;
  longlong local_160;
  undefined **local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_108;
  char local_107;
  undefined2 local_106;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  memset(param_2,0,0xd0);
  FUN_148167088(param_2);
  ppuStack_170 = &local_188;
  local_88 = *(code *****)(param_3 + 0x100);
  local_188 = param_2;
  local_178 = (code ****)&local_88;
  FUN_148172aea(param_1 + 0xa0,local_17c,&local_178,0);
  local_18c = 0;
  local_1e8 = (code ****)0x0;
  FUN_148167150(param_1,local_188 + 0xa0,local_188 + 0xb0,&local_18c);
  iVar13 = *(int *)(param_1 + 0x70);
  iVar5 = local_18c + iVar13;
  *(int *)(local_188 + 0x1c) = iVar5;
  *(int *)(local_188 + 0x20) = local_18c;
  iVar11 = *(int *)(param_1 + 0x50);
  if (iVar11 == 2) {
    dVar27 = (double)*(float *)(param_1 + 0x48);
    dVar28 = dVar27;
    dVar31 = dVar27;
LAB_143a38422:
    *(double *)(local_188 + 0x28) = dVar31;
    *(double *)(local_188 + 0x30) = dVar28;
    *(double *)(local_188 + 0x38) = dVar27;
    iVar11 = *(int *)(param_1 + 0x50);
  }
  else {
    if (iVar11 == 1) {
      dVar27 = *(double *)(param_1 + 0x58);
      uVar25 = SUB84(dVar27,0);
      uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar31 = *(double *)(param_1 + 0x60);
      if (dVar27 <= dVar31) {
        uVar25 = SUB84(dVar31,0);
        uVar26 = (undefined4)((ulonglong)dVar31 >> 0x20);
      }
      dVar27 = *(double *)(param_1 + 0x68);
      if ((double)CONCAT44(uVar26,uVar25) <= dVar27) {
        uVar25 = SUB84(dVar27,0);
        uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
      }
      dVar27 = (double)CONCAT44(uVar26,uVar25) / (double)*(int *)(param_1 + 0x4c);
      dVar28 = dVar27;
      dVar31 = dVar27;
      goto LAB_143a38422;
    }
    if (iVar11 == 0) {
      *(undefined4 *)(local_188 + 4) = *(undefined4 *)(param_1 + 0x3c);
      iVar11 = *(int *)(param_1 + 0x40);
      *(int *)(local_188 + 8) = iVar11;
      iVar12 = *(int *)(param_1 + 0x44);
      *(int *)(local_188 + 0xc) = iVar12;
      *(undefined8 *)(local_188 + 0x50) = *(undefined8 *)(param_1 + 0x68);
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(local_188 + 0x40) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(local_188 + 0x48) = uVar8;
      dVar27 = *(double *)(local_188 + 0x50) / (double)iVar12;
      dVar28 = *(double *)(local_188 + 0x48) / (double)iVar11;
      dVar31 = *(double *)(local_188 + 0x40) / (double)*(int *)(local_188 + 4);
      goto LAB_143a38422;
    }
  }
  if (iVar11 - 1U < 2) {
    dVar27 = *(double *)(param_1 + 0x58) / *(double *)(local_188 + 0x28);
    *(int *)(local_188 + 4) = (int)((ulonglong)(longlong)ROUND(dVar27 + dVar27 + -0.5) >> 1);
    dVar27 = *(double *)(local_188 + 0x28);
    uVar25 = SUB84(dVar27,0);
    uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar31 = *(double *)(param_1 + 0x60) / dVar27;
    iVar11 = (int)((ulonglong)(longlong)ROUND(dVar31 + dVar31 + -0.5) >> 1);
    *(int *)(local_188 + 8) = iVar11;
    dVar31 = *(double *)(param_1 + 0x68) / dVar27;
    iVar12 = (int)((ulonglong)(longlong)ROUND(dVar31 + dVar31 + -0.5) >> 1);
    *(int *)(local_188 + 0xc) = iVar12;
    dVar31 = *(double *)(param_1 + 0x58);
    dVar32 = *(double *)(param_1 + 0x60);
    dVar28 = *(double *)(param_1 + 0x68);
    if ((dVar31 <= dVar32) || (dVar31 <= dVar28)) {
      if ((dVar31 < dVar32) && (dVar28 < dVar32)) {
        if (1e-08 < ABS((double)*(int *)(local_188 + 4) * dVar27 - dVar31)) {
          *(int *)(local_188 + 4) = *(int *)(local_188 + 4) + 1;
          dVar28 = *(double *)(param_1 + 0x68);
          uVar25 = (undefined4)*(undefined8 *)(local_188 + 0x28);
          uVar26 = (undefined4)((ulonglong)*(undefined8 *)(local_188 + 0x28) >> 0x20);
          iVar12 = *(int *)(local_188 + 0xc);
        }
        goto LAB_143a38550;
      }
      if ((dVar31 < dVar28) && (dVar32 < dVar28)) {
        if (1e-08 < ABS((double)*(int *)(local_188 + 4) * dVar27 - dVar31)) {
          *(int *)(local_188 + 4) = *(int *)(local_188 + 4) + 1;
          dVar32 = *(double *)(param_1 + 0x60);
          uVar25 = (undefined4)*(undefined8 *)(local_188 + 0x28);
          uVar26 = (undefined4)((ulonglong)*(undefined8 *)(local_188 + 0x28) >> 0x20);
          iVar11 = *(int *)(local_188 + 8);
        }
        if (ABS((double)iVar11 * (double)CONCAT44(uVar26,uVar25) - dVar32) <= 1e-08)
        goto LAB_143a38575;
        piVar19 = (int *)(local_188 + 8);
        goto LAB_143a38571;
      }
    }
    else {
      if (1e-08 < ABS((double)iVar11 * dVar27 - dVar32)) {
        *(int *)(local_188 + 8) = iVar11 + 1;
        dVar28 = *(double *)(param_1 + 0x68);
      }
LAB_143a38550:
      iVar11 = iVar12;
      if (1e-08 < ABS((double)iVar11 * (double)CONCAT44(uVar26,uVar25) - dVar28)) {
        piVar19 = (int *)(local_188 + 0xc);
LAB_143a38571:
        *piVar19 = iVar11 + 1;
      }
    }
LAB_143a38575:
    iVar11 = *(int *)(local_188 + 4);
    *(double *)(local_188 + 0x40) = (double)iVar11 * (double)CONCAT44(uVar26,uVar25);
    *(double *)(local_188 + 0x48) =
         (double)*(int *)(local_188 + 8) * (double)CONCAT44(uVar26,uVar25);
    *(double *)(local_188 + 0x50) =
         (double)*(int *)(local_188 + 0xc) * (double)CONCAT44(uVar26,uVar25);
  }
  else {
    iVar11 = *(int *)(local_188 + 4);
  }
  fVar29 = DAT_14c76286c;
  if (((iVar11 < 1) || (*(int *)(local_188 + 8) < 1)) || (*(int *)(local_188 + 0xc) < 1))
  goto LAB_143a38940;
  if (1e-08 < ABS(DAT_14c76286c + -1.0)) {
    iVar11 = (int)((float)iVar11 * DAT_14c76286c);
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    *(int *)(local_188 + 4) = iVar11;
    iVar11 = (int)((float)*(int *)(local_188 + 8) * fVar29);
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    *(int *)(local_188 + 8) = iVar11;
    iVar12 = (int)((float)*(int *)(local_188 + 0xc) * fVar29);
    iVar11 = 1;
    if (1 < iVar12) {
      iVar11 = iVar12;
    }
    *(int *)(local_188 + 0xc) = iVar11;
  }
  if (iVar5 == 0) {
    local_88 = *(code *****)(param_1 + 0x28);
    uStack_80 = *(code *****)(param_3 + 0x100);
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar5 = *(int *)(lVar17 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar5 != 2) {
        if (iVar5 != 1) goto LAB_143a38739;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143a38e87;
        goto LAB_143a38742;
      }
    }
    else {
LAB_143a38739:
      if (iVar5 != 0x10) {
LAB_143a38742:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar17 + 0xc60), iVar5 == 2))
          goto LAB_143a38e87;
          if (iVar5 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            if (DVar6 == DVar7) goto LAB_143a38e87;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar1 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar10 = (uint *)*puVar1;
          if (puVar10 != (uint *)0x0) goto LAB_143a38a3c;
          while( true ) {
            uVar14 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar14 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar14 | 1;
              __tlregdtor(&LAB_143a3b683);
            }
            lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar9 = *(undefined4 **)(lVar17 + 0x310);
            *(undefined8 *)(lVar17 + 0x310) = 0;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar9 = 0xffffffff;
            *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar1 = puVar9;
            FUN_140217a48(puVar1);
            puVar10 = (uint *)*puVar1;
LAB_143a38a3c:
            puVar24 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar24 + 0x17);
            uVar14 = puVar10[0x12];
            if (puVar20 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar2 = *puVar10;
              *puVar10 = *puVar10 + uVar14 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar14) != 0xffffffff) break;
              puVar10 = (uint *)*puVar1;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar1 = puVar10;
              puVar24 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
              puVar20 = (uint *)(puVar24 + 0x17);
              uVar14 = 0;
              if (puVar20 <= puVar10 + 0x4000) {
                uVar14 = 1;
                goto LAB_143a38abc;
              }
            }
          }
          uVar14 = uVar14 + 1;
LAB_143a38abc:
          *(uint **)(puVar10 + 0x10) = puVar20;
          puVar10[0x12] = uVar14;
          iVar5 = 0;
          FUN_1447247dc(puVar24,0);
          *puVar24 = &PTR_FUN_14adccc10;
          *(undefined4 *)(puVar24 + 0x15) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar24 + 0xac) = local_88._4_4_;
          *(undefined4 *)(puVar24 + 0x16) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar24 + 0xb4) = uStack_80._4_4_;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar14 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
              uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
              iVar5 = 0;
            }
            else {
              uVar22 = 2;
            }
          }
          else {
            iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar22 = 5;
          }
          if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
          }
          puVar24[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar24[9] = puVar24;
          puVar24[10] = puVar24;
          lVar17 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar17 == 0) {
            uVar3 = 1;
            if ((char)uVar22 != '\x06') {
              uVar3 = uVar22;
            }
            uVar22 = uVar3;
            uVar8 = 0;
          }
          else {
            if ((char)uVar22 == '\x06') {
              uVar22 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
            }
            uVar8 = *(undefined8 *)(lVar17 + 0x30);
          }
          puVar24[0xf] = uVar8;
          puVar24[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar24 + 0x1c) = iVar5;
          if (puVar24 == (undefined8 *)0x0) {
            local_178 = (code ****)CONCAT71(local_178._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
            UNLOCK();
            local_178 = (code ****)CONCAT71(local_178._1_7_,1);
            FUN_1447439e4(puVar24);
            LOCK();
            piVar19 = (int *)(puVar24 + 1);
            *piVar19 = *piVar19 + -1;
            UNLOCK();
            if (*piVar19 == 0) {
              (**(code **)*puVar24)(puVar24,1);
            }
          }
        }
        else {
          local_168 = (undefined ***)0x0;
          local_158 = &PTR_LAB_14adccbf0;
          local_150 = (undefined4)local_88;
          uStack_14c = local_88._4_4_;
          uStack_148 = (undefined4)uStack_80;
          uStack_144 = uStack_80._4_4_;
          local_178 = (code ****)FUN_143a406a6;
          local_1e8 = (code ****)&local_178;
          FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3c064);
          if ((code *****)local_178 != (code *****)0x0) {
            pppuVar16 = local_168;
            if (local_168 == (undefined ***)0x0) {
              pppuVar16 = &local_158;
            }
            (*(code *)(*pppuVar16)[2])();
          }
        }
        goto LAB_143a387fd;
      }
    }
LAB_143a38e87:
    local_178 = (code ****)&uStack_80;
    FUN_148172ff6(local_88 + 2,local_17c,&local_178,0);
  }
  else {
    if ((*(byte *)(param_1 + 0x99) & 1) == 0) {
      if (DAT_14cb366a0 == (longlong *)0x0) {
        local_178 = (code ****)FUN_1449e2820;
        local_1a0 = FUN_14081d0ea;
        local_1a8 = &LAB_140eca530;
        local_1b8 = &LAB_148063819;
        local_1c0 = &LAB_1460672b6;
        local_1c8 = L"Niagara";
        local_1d0 = 0;
        local_1d8 = 0x10000006;
        local_1e0 = 8;
        local_1e8 = (code ****)CONCAT44(local_1e8._4_4_,0x130);
        local_1b0 = (code ****)&local_178;
        FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
      }
      plVar18 = DAT_14cb366a0;
      lVar17 = DAT_14cb366a0[0x22];
      if (lVar17 == 0) {
        (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
        lVar17 = plVar18[0x22];
      }
      pbVar15 = (byte *)(lVar17 + 0xe1);
    }
    else {
      pbVar15 = (byte *)(param_1 + 0x98);
    }
    uVar14 = (uint)*pbVar15;
    if (DAT_14c762870 < 3) {
      uVar14 = DAT_14c762870;
    }
    if (((4 < iVar5) || (*(int *)(local_188 + 0xa8) != 1)) || (DAT_14c762874 == 0)) {
      if (*(int *)(local_188 + 0xc) < 0x801 &&
          (*(int *)(local_188 + 8) < 0x801 && *(int *)(local_188 + 4) < 0x801)) {
        fVar29 = 2048.0 / (float)*(int *)(local_188 + 4);
        fVar30 = 2048.0 / (float)*(int *)(local_188 + 8);
        iVar13 = (int)ROUND(fVar29 + fVar29 + -0.5) >> 1;
        iVar12 = (int)ROUND(fVar30 + fVar30 + -0.5) >> 1;
        fVar29 = 2048.0 / (float)*(int *)(local_188 + 0xc);
        iVar11 = (int)ROUND(fVar29 + fVar29 + -0.5) >> 1;
        iVar23 = iVar12 * iVar13 * iVar11;
        if ((iVar5 <= iVar23) || (iVar23 < 1)) {
          if (iVar5 <= iVar13) {
            iVar13 = iVar5;
          }
          fVar29 = (float)iVar5 / (float)iVar13;
          iVar23 = -((int)ROUND(-0.5 - (fVar29 + fVar29)) >> 1);
          if (iVar12 < iVar23) {
            iVar23 = iVar12;
          }
          fVar29 = (float)iVar5 / (float)(iVar23 * iVar13);
          *(int *)(local_188 + 0x10) = iVar13;
          *(int *)(local_188 + 0x14) = iVar23;
          iVar5 = -((int)ROUND(-0.5 - (fVar29 + fVar29)) >> 1);
          if (iVar11 < iVar5) {
            iVar5 = iVar11;
          }
          *(int *)(local_188 + 0x18) = iVar5;
          local_188[0x5a] = 0;
          FUN_143938173(&local_178,uVar14,0x600008,1);
          if (((ulonglong)local_178 & 0x100) == 0) {
            if (local_188[0x59] == '\x01') {
              uVar4 = 0;
              goto LAB_143a38d85;
            }
          }
          else {
            local_188[0x58] = local_178._0_1_;
            uVar4 = 1;
LAB_143a38d85:
            local_188[0x59] = uVar4;
          }
          goto LAB_143a38d88;
        }
      }
LAB_143a38940:
      uVar8 = 0;
      goto LAB_143a38942;
    }
    if (0 < iVar13) goto LAB_143a38940;
    *(undefined1 **)(local_188 + 0x10) = &DAT_100000001;
    *(undefined4 *)(local_188 + 0x18) = 1;
    FUN_143938173(&local_178,uVar14,0x600008,iVar5);
    if (((ulonglong)local_178 & 0x100) == 0) {
      if (local_188[0x59] == '\x01') {
        uVar4 = 0;
        goto LAB_143a38b36;
      }
    }
    else {
      local_188[0x58] = local_178._0_1_;
      uVar4 = 1;
LAB_143a38b36:
      local_188[0x59] = uVar4;
    }
    local_188[0x5a] = 1;
LAB_143a38d88:
    *(undefined8 *)(local_188 + 0x98) = 0;
    FUN_1404e5848(local_188 + 0x60,param_3 + 0x1e8,param_1 + 0x78);
    FUN_143a39700(local_188,uVar14);
    *local_188 = *(undefined1 *)(param_1 + 0x38);
    local_178 = *(code *****)(param_1 + 0x28);
    if (*(longlong *)(local_188 + 0x98) == 0) {
      ppuStack_170 = (undefined1 **)0x0;
    }
    else {
      ppuStack_170 = (undefined1 **)FUN_1447b4020();
    }
    local_168 = *(undefined ****)(param_3 + 0x100);
    FUN_148167288(&local_160,local_188);
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar5 = *(int *)(lVar17 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar5 != 2) {
        if (iVar5 != 1) goto LAB_143a38e39;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143a38e42;
        goto LAB_143a38f0d;
      }
LAB_143a38e42:
      FUN_143a408c8(&local_178);
    }
    else {
LAB_143a38e39:
      if (iVar5 == 0x10) goto LAB_143a38e42;
LAB_143a38f0d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar17 + 0xc60), iVar5 == 2))
        goto LAB_143a38e42;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_143a38e42;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar1;
        if (puVar10 != (uint *)0x0) goto LAB_143a38feb;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar1 = puVar9;
          FUN_140217a48(puVar1);
          puVar10 = (uint *)*puVar1;
LAB_143a38feb:
          puVar24 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar24 + 0x32);
          uVar14 = puVar10[0x12];
          if (puVar20 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar2 = *puVar10;
            *puVar10 = *puVar10 + uVar14 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar14) != 0xffffffff) break;
            puVar10 = (uint *)*puVar1;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar1 = puVar10;
            puVar24 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar24 + 0x32);
            uVar14 = 0;
            if (puVar20 <= puVar10 + 0x4000) {
              uVar14 = 1;
              goto LAB_143a3906b;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143a3906b:
        *(uint **)(puVar10 + 0x10) = puVar20;
        puVar10[0x12] = uVar14;
        FUN_1447247dc(puVar24,0);
        *puVar24 = &PTR_FUN_14adccc40;
        puVar24[0x15] = local_178;
        puVar24[0x16] = ppuStack_170;
        puVar24[0x17] = local_168;
        plVar18 = &local_160;
        plVar21 = puVar24 + 0x18;
        for (lVar17 = 0xb; lVar17 != 0; lVar17 = lVar17 + -1) {
          *plVar21 = *plVar18;
          plVar18 = plVar18 + 1;
          plVar21 = plVar21 + 1;
        }
        *(char *)((longlong)puVar24 + 0x119) = local_107;
        if (local_107 == '\x01') {
          *(undefined1 *)(puVar24 + 0x23) = local_108;
        }
        *(undefined2 *)((longlong)puVar24 + 0x11a) = local_106;
        puVar24[0x24] = local_100;
        puVar24[0x25] = lStack_f8;
        puVar24[0x26] = local_f0;
        *(undefined4 *)(puVar24 + 0x27) = local_e8;
        puVar24[0x28] = local_e0;
        iVar5 = 0;
        local_e0 = 0;
        *(undefined4 *)(puVar24 + 0x29) = (undefined4)local_d8;
        *(undefined4 *)((longlong)puVar24 + 0x14c) = local_d8._4_4_;
        local_d8 = 0;
        *(undefined4 *)(puVar24 + 0x2a) = local_d0;
        puVar24[0x2b] = local_c8;
        puVar24[0x2c] = local_c0;
        local_c0 = 0;
        *(undefined4 *)(puVar24 + 0x2d) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar24 + 0x16c) = local_b8._4_4_;
        local_b8 = 0;
        puVar24[0x2e] = local_b0;
        local_b0 = 0;
        *(undefined4 *)(puVar24 + 0x2f) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar24 + 0x17c) = local_a8._4_4_;
        local_a8 = 0;
        *(undefined4 *)(puVar24 + 0x30) = local_a0;
        *(undefined4 *)((longlong)puVar24 + 0x184) = uStack_9c;
        *(undefined4 *)(puVar24 + 0x31) = uStack_98;
        *(undefined4 *)((longlong)puVar24 + 0x18c) = uStack_94;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar17 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar17 == 0) {
          uVar3 = 1;
          if ((char)uVar22 != '\x06') {
            uVar3 = uVar22;
          }
          uVar22 = uVar3;
          uVar8 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar17 + 0x30);
        }
        puVar24[0xf] = uVar8;
        puVar24[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar5;
        if (puVar24 == (undefined8 *)0x0) {
          local_88 = (code ****)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          local_88 = (code ****)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar24);
          LOCK();
          piVar19 = (int *)(puVar24 + 1);
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (*piVar19 == 0) {
            (**(code **)*puVar24)(puVar24,1);
          }
        }
      }
      else {
        local_88 = (code ****)0x0;
        local_78 = (longlong *)FUN_14001cc68(0xf0,8);
        *local_78 = (longlong)&PTR_LAB_14adccc20;
        local_78[3] = (longlong)local_168;
        local_78[1] = (longlong)local_178;
        local_78[2] = (longlong)ppuStack_170;
        plVar18 = &local_160;
        plVar21 = local_78 + 4;
        for (lVar17 = 0xb; lVar17 != 0; lVar17 = lVar17 + -1) {
          *plVar21 = *plVar18;
          plVar18 = plVar18 + 1;
          plVar21 = plVar21 + 1;
        }
        *(char *)((longlong)local_78 + 0x79) = local_107;
        if (local_107 == '\x01') {
          *(undefined1 *)(local_78 + 0xf) = local_108;
        }
        *(undefined2 *)((longlong)local_78 + 0x7a) = local_106;
        local_78[0x10] = local_100;
        local_78[0x11] = lStack_f8;
        local_78[0x12] = local_f0;
        *(undefined4 *)(local_78 + 0x13) = local_e8;
        local_78[0x14] = local_e0;
        local_e0 = 0;
        *(undefined4 *)(local_78 + 0x15) = (undefined4)local_d8;
        *(undefined4 *)((longlong)local_78 + 0xac) = local_d8._4_4_;
        local_d8 = 0;
        *(undefined4 *)(local_78 + 0x16) = local_d0;
        local_78[0x17] = local_c8;
        local_78[0x18] = local_c0;
        local_c0 = 0;
        *(undefined4 *)(local_78 + 0x19) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_78 + 0xcc) = local_b8._4_4_;
        local_b8 = 0;
        local_78[0x1a] = local_b0;
        local_b0 = 0;
        *(undefined4 *)(local_78 + 0x1b) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_78 + 0xdc) = local_a8._4_4_;
        local_a8 = 0;
        *(undefined4 *)(local_78 + 0x1c) = local_a0;
        *(undefined4 *)((longlong)local_78 + 0xe4) = uStack_9c;
        *(undefined4 *)(local_78 + 0x1d) = uStack_98;
        *(undefined4 *)((longlong)local_78 + 0xec) = uStack_94;
        if (local_78 != (longlong *)&DAT_fffffffffffffff8) {
          local_88 = (code ****)&LAB_143a40e4c;
        }
        local_1e8 = (code ****)&local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3c068);
        if (local_88 != (code ****)0x0) {
          plVar18 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar18 = local_68;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
      }
    }
    FUN_148167420(&local_160);
  }
LAB_143a387fd:
  uVar8 = 1;
LAB_143a38942:
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a39700 FUN_143a39700 body=341 status=ok
// SIG undefined FUN_143a39700(void)

void FUN_143a39700(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_68 [46];
  char local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)(*(longlong *)(param_1 + 0x68) + 0x48))) {
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x40) + (ulonglong)uVar1 * 8);
    if (lVar5 != 0) {
      lVar3 = FUN_14129eed6();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) {
        lVar5 = 0;
      }
      *(longlong *)(param_1 + 0x98) = lVar5;
    }
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar4 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 4);
    FUN_143938173(&local_3a,param_2,0x600008,1);
    if ((local_39 == '\x01') &&
       (((lVar5 = *(longlong *)(param_1 + 0x98), *(int *)(lVar5 + 0x140) != iVar7 ||
         (*(int *)(lVar5 + 0x144) != iVar6)) ||
        ((*(int *)(lVar5 + 0x148) != iVar4 || (*(char *)(lVar5 + 0x15c) != local_3a)))))) {
      *(char *)(lVar5 + 0x15c) = local_3a;
      lVar5 = *(longlong *)(param_1 + 0x98);
      *(undefined8 *)(lVar5 + 0x14c) = 0;
      *(undefined8 *)(lVar5 + 0x154) = 0;
      plVar2 = *(longlong **)(param_1 + 0x98);
      *(int *)(plVar2 + 0x28) = iVar7;
      *(int *)((longlong)plVar2 + 0x144) = iVar6;
      *(int *)(plVar2 + 0x29) = iVar4;
      (**(code **)(*plVar2 + 0x318))();
      FUN_14373cdea(*(undefined8 *)(param_1 + 0x98),1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a39856 FUN_143a39856 body=1275 status=ok
// SIG undefined FUN_143a39856(void)

void FUN_143a39856(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148173870(param_1 + 0xa0,*(undefined8 *)(param_3 + 0x100));
  FUN_148167420(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a39cac;
    if (iVar7 != 1) goto LAB_143a398c4;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a39cac;
  }
  else {
LAB_143a398c4:
    if (iVar7 == 0x10) goto LAB_143a39cac;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a39cac:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a39cac;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a39a31;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a3b683);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a39a31:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a39ab1;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a39ab1:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adccc70;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adccc50;
    local_68[0] = &LAB_143a4103a;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3c06c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a39d66 FUN_143a39d66 body=2270 status=ok
// SIG undefined FUN_143a39d66(void)

undefined8 FUN_143a39d66(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  undefined ***pppuVar21;
  uint *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0xd4)) {
LAB_143a39e0c:
    lVar11 = 0;
  }
  else {
    lVar16 = *(longlong *)(param_3 + 0x100);
    lVar11 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xe0);
    }
    iVar7 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xe8) - 1U &
                              (int)lVar16 + (int)((ulonglong)lVar16 >> 0x20) * 0x17) * 4);
    if (iVar7 == -1) goto LAB_143a39e0c;
    lVar11 = 0;
    do {
      plVar18 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar7 * 0x18);
      if (*plVar18 == lVar16) {
        if (plVar18 == (longlong *)0x0) goto LAB_143a39e0c;
        lVar11 = plVar18[1];
        break;
      }
      iVar7 = (int)plVar18[2];
    } while (iVar7 != -1);
  }
  if ((*(byte *)(param_1 + 0x99) & 1) == 0) {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_90 = local_78;
      local_78[0] = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_140eca530;
      local_98 = &LAB_148063819;
      local_a0 = &LAB_1460672b6;
      local_a8 = L"Niagara";
      local_b0 = 0;
      local_b8 = 0x10000006;
      local_c0 = 8;
      local_c8 = (code **)CONCAT44(local_c8._4_4_,0x130);
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar18 = DAT_14cb366a0;
    lVar16 = DAT_14cb366a0[0x22];
    if (lVar16 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      lVar16 = plVar18[0x22];
    }
    pbVar10 = (byte *)(lVar16 + 0xe1);
  }
  else {
    pbVar10 = (byte *)(param_1 + 0x98);
  }
  uVar19 = (uint)*pbVar10;
  if (DAT_14c762870 < 3) {
    uVar19 = DAT_14c762870;
  }
  FUN_143a39700(lVar11,uVar19);
  lVar16 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar11 + 0x98) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_1447b4020();
  }
  lVar23 = *(longlong *)(param_3 + 0x100);
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar20 + 0xc60);
  iVar5 = (int)((ulonglong)lVar23 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a39eb5;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a39ebe;
      goto LAB_143a3a001;
    }
  }
  else {
LAB_143a39eb5:
    if (iVar7 != 0x10) {
LAB_143a3a001:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar20 + 0xc60), iVar7 == 2)) {
LAB_143a3a4dd:
          if (*(int *)(lVar16 + 0x18) != *(int *)(lVar16 + 0x44)) {
            lVar20 = lVar16 + 0x48;
            if (*(longlong *)(lVar16 + 0x50) != 0) {
              lVar20 = *(longlong *)(lVar16 + 0x50);
            }
            iVar7 = *(int *)(lVar20 + (ulonglong)
                                      (*(int *)(lVar16 + 0x58) - 1U & (int)lVar23 + iVar5 * 0x17) *
                                      4);
            if (iVar7 != -1) {
              do {
                lVar20 = *(longlong *)(lVar16 + 0x10) + (longlong)iVar7 * 0x120;
                if (*(longlong *)(*(longlong *)(lVar16 + 0x10) + (longlong)iVar7 * 0x120) == lVar23)
                goto LAB_143a3a53f;
                iVar7 = *(int *)(lVar20 + 0x118);
              } while (iVar7 != -1);
            }
          }
          lVar20 = 0;
LAB_143a3a53f:
          lVar16 = lVar20 + 8;
          if (lVar20 == 0) {
            lVar16 = 0;
          }
          if ((lVar11 == 0) || (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 == 0)) {
            lVar23 = *(longlong *)(lVar16 + 0xf0);
            if (lVar23 == 0) goto LAB_143a3a0ab;
            *(undefined8 *)(lVar16 + 0xf0) = 0;
          }
          else {
            lVar23 = *(longlong *)(lVar16 + 0xf0);
            if (lVar23 == lVar11) goto LAB_143a3a0ab;
            *(longlong *)(lVar16 + 0xf0) = lVar11;
            LOCK();
            *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
            UNLOCK();
            if (lVar23 == 0) goto LAB_143a3a0ab;
          }
          LOCK();
          puVar14 = (uint *)(lVar23 + 8);
          uVar19 = *puVar14;
          *puVar14 = *puVar14 - 1;
          UNLOCK();
          if ((uVar19 & 0x3fffffff) == 1) {
            LOCK();
            puVar14 = (uint *)(lVar23 + 8);
            uVar19 = *puVar14;
            *puVar14 = *puVar14 | 0x40000000;
            UNLOCK();
            if ((uVar19 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(lVar23 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar23;
              plVar18 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar18;
                  LOCK();
                  bVar26 = plVar18 != DAT_14ca843c0;
                  plVar17 = plVar12;
                  if (bVar26) {
                    plVar18 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar17;
                  LOCK();
                  bVar26 = plVar17 != DAT_14ca843c8;
                  plVar18 = plVar12;
                  if (bVar26) {
                    plVar17 = DAT_14ca843c8;
                    plVar18 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar18;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
          goto LAB_143a3a0ab;
        }
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a3a4dd;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_143a3a176;
        while( true ) {
          uVar19 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar19 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar19 | 1;
            __tlregdtor(&LAB_143a3b683);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_143a3a176:
          puVar25 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar25 + 0x18);
          uVar19 = puVar14[0x12];
          if (puVar22 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar3 = *puVar14;
            *puVar14 = *puVar14 + uVar19 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar19) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar25 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar22 = (uint *)(puVar25 + 0x18);
            uVar19 = 0;
            if (puVar22 <= puVar14 + 0x4000) {
              uVar19 = 1;
              goto LAB_143a3a1f6;
            }
          }
        }
        uVar19 = uVar19 + 1;
LAB_143a3a1f6:
        *(uint **)(puVar14 + 0x10) = puVar22;
        puVar14[0x12] = uVar19;
        iVar7 = 0;
        FUN_1447247dc(puVar25,0);
        *puVar25 = &PTR_FUN_14adccca0;
        puVar25[0x15] = lVar11;
        puVar25[0x16] = lVar16;
        puVar25[0x17] = lVar23;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar19 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
            uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
            iVar7 = 0;
          }
          else {
            uVar24 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar24 = 5;
        }
        if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
        }
        puVar25[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar25[9] = puVar25;
        puVar25[10] = puVar25;
        lVar16 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar16 == 0) {
          uVar6 = 1;
          if ((char)uVar24 != '\x06') {
            uVar6 = uVar24;
          }
          uVar24 = uVar6;
          uVar15 = 0;
        }
        else {
          if ((char)uVar24 == '\x06') {
            uVar24 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar16 + 0x30);
        }
        puVar25[0xf] = uVar15;
        puVar25[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar25 + 0x1c) = iVar7;
        if (puVar25 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar25);
          LOCK();
          piVar1 = (int *)(puVar25 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar25)(puVar25,1);
          }
        }
      }
      else {
        local_c8 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14adccc80;
        local_78[0] = FUN_143a41212;
        local_50 = lVar11;
        local_48 = lVar16;
        local_40 = lVar23;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3c070);
        if (local_78[0] != (code *)0x0) {
          pppuVar21 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar21 = &local_58;
          }
          (*(code *)(*pppuVar21)[2])();
        }
      }
      goto LAB_143a3a0ab;
    }
  }
LAB_143a39ebe:
  if (*(int *)(lVar16 + 0x18) != *(int *)(lVar16 + 0x44)) {
    lVar20 = lVar16 + 0x48;
    if (*(longlong *)(lVar16 + 0x50) != 0) {
      lVar20 = *(longlong *)(lVar16 + 0x50);
    }
    iVar7 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar16 + 0x58) - 1U & (int)lVar23 + iVar5 * 0x17)
                              * 4);
    if (iVar7 != -1) {
      do {
        lVar20 = *(longlong *)(lVar16 + 0x10) + (longlong)iVar7 * 0x120;
        if (*(longlong *)(*(longlong *)(lVar16 + 0x10) + (longlong)iVar7 * 0x120) == lVar23)
        goto LAB_143a39f20;
        iVar7 = *(int *)(lVar20 + 0x118);
      } while (iVar7 != -1);
    }
  }
  lVar20 = 0;
LAB_143a39f20:
  lVar16 = lVar20 + 8;
  if (lVar20 == 0) {
    lVar16 = 0;
  }
  if ((lVar11 == 0) || (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 == 0)) {
    lVar23 = *(longlong *)(lVar16 + 0xf0);
    if (lVar23 == 0) goto LAB_143a3a0ab;
    *(undefined8 *)(lVar16 + 0xf0) = 0;
  }
  else {
    lVar23 = *(longlong *)(lVar16 + 0xf0);
    if (lVar23 == lVar11) goto LAB_143a3a0ab;
    *(longlong *)(lVar16 + 0xf0) = lVar11;
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
    if (lVar23 == 0) goto LAB_143a3a0ab;
  }
  LOCK();
  puVar14 = (uint *)(lVar23 + 8);
  uVar19 = *puVar14;
  *puVar14 = *puVar14 - 1;
  UNLOCK();
  if ((uVar19 & 0x3fffffff) == 1) {
    LOCK();
    puVar14 = (uint *)(lVar23 + 8);
    uVar19 = *puVar14;
    *puVar14 = *puVar14 | 0x40000000;
    UNLOCK();
    if ((uVar19 >> 0x1e & 1) == 0) {
      bVar4 = *(byte *)(lVar23 + 0xd);
      plVar12 = (longlong *)FUN_14001cc68(0x10,8);
      plVar12[1] = lVar23;
      plVar18 = DAT_14ca843c0;
      plVar17 = DAT_14ca843c8;
      if ((bVar4 & 2) == 0) {
        do {
          *plVar12 = (longlong)plVar18;
          LOCK();
          bVar26 = plVar18 != DAT_14ca843c0;
          plVar17 = plVar12;
          if (bVar26) {
            plVar18 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar17;
          UNLOCK();
        } while (bVar26);
      }
      else {
        do {
          *plVar12 = (longlong)plVar17;
          LOCK();
          bVar26 = plVar17 != DAT_14ca843c8;
          plVar18 = plVar12;
          if (bVar26) {
            plVar17 = DAT_14ca843c8;
            plVar18 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar18;
          UNLOCK();
        } while (bVar26);
      }
    }
  }
LAB_143a3a0ab:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3a646 FUN_143a3a646 body=2791 status=ok
// SIG undefined FUN_143a3a646(void)

undefined8 FUN_143a3a646(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_178 [32];
  code **local_158;
  longlong local_148;
  longlong lStack_140;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined1 local_e0;
  char local_df;
  undefined2 local_de;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((param_2 == 0) || (*(char *)(param_2 + 0x5b) != '\x01')) ||
      (uVar12 = *(uint *)(param_2 + 4), (int)uVar12 < 1)) ||
     ((uVar3 = *(uint *)(param_2 + 8), (int)uVar3 < 1 ||
      (uVar4 = *(uint *)(param_2 + 0xc), (int)uVar4 < 1)))) goto LAB_143a3a960;
  *(undefined1 *)(param_2 + 0x5b) = 0;
  *(double *)(param_2 + 0x28) = *(double *)(param_2 + 0x40) / (double)(int)uVar12;
  *(double *)(param_2 + 0x30) = *(double *)(param_2 + 0x48) / (double)(int)uVar3;
  *(double *)(param_2 + 0x38) = *(double *)(param_2 + 0x50) / (double)(int)uVar4;
  lVar13 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_2 + 0x5a) == '\0') {
    if (0x800 < uVar4 || (0x800 < uVar3 || 0x800 < uVar12)) goto LAB_143a3a960;
    iVar11 = (int)ROUND(2048.0 / (float)(int)uVar12 + 2048.0 / (float)(int)uVar12 + -0.5) >> 1;
    iVar21 = (int)ROUND(2048.0 / (float)(int)uVar3 + 2048.0 / (float)(int)uVar3 + -0.5) >> 1;
    iVar20 = (int)ROUND(2048.0 / (float)(int)uVar4 + 2048.0 / (float)(int)uVar4 + -0.5) >> 1;
    iVar16 = iVar21 * iVar11 * iVar20;
    iVar22 = *(int *)(param_2 + 0x1c);
    if ((iVar22 < 1) || (0 < iVar16 && iVar16 < iVar22)) goto LAB_143a3a960;
    if (iVar22 <= iVar11) {
      iVar11 = iVar22;
    }
    fVar24 = (float)iVar22 / (float)iVar11;
    iVar16 = -((int)ROUND(-0.5 - (fVar24 + fVar24)) >> 1);
    if (iVar21 < iVar16) {
      iVar16 = iVar21;
    }
    fVar24 = (float)iVar22 / (float)(iVar16 * iVar11);
    iVar22 = -((int)ROUND(-0.5 - (fVar24 + fVar24)) >> 1);
    if (iVar20 < iVar22) {
      iVar22 = iVar20;
    }
  }
  else {
    iVar11 = 1;
    iVar16 = 1;
    iVar22 = 1;
  }
  *(int *)(param_2 + 0x10) = iVar11;
  *(int *)(param_2 + 0x14) = iVar16;
  *(int *)(param_2 + 0x18) = iVar22;
  lStack_140 = *(longlong *)(param_3 + 0x100);
  local_148 = lVar13;
  FUN_148167288(local_138);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar13 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar11 != 2) {
      if (iVar11 != 1) goto LAB_143a3a868;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143a3a871;
      goto LAB_143a3a9b0;
    }
LAB_143a3a871:
    if (*(int *)(local_148 + 0x18) != *(int *)(local_148 + 0x44)) {
      lVar13 = local_148 + 0x48;
      if (*(longlong *)(local_148 + 0x50) != 0) {
        lVar13 = *(longlong *)(local_148 + 0x50);
      }
      iVar11 = *(int *)(lVar13 + (ulonglong)
                                 (*(int *)(local_148 + 0x58) - 1U &
                                 (int)lStack_140 + (int)((ulonglong)lStack_140 >> 0x20) * 0x17) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar13 = *(longlong *)(local_148 + 0x10) + (longlong)iVar11 * 0x120;
          if (*(longlong *)(*(longlong *)(local_148 + 0x10) + (longlong)iVar11 * 0x120) ==
              lStack_140) goto LAB_143a3a8e4;
          iVar11 = *(int *)(lVar13 + 0x118);
        } while (iVar11 != -1);
      }
    }
LAB_143a3a8e2:
    lVar13 = 0;
LAB_143a3a8e4:
    lVar17 = lVar13 + 8;
    if (lVar13 == 0) {
      lVar17 = 0;
    }
    *(undefined4 *)(lVar17 + 0x14) = local_12c;
    *(undefined8 *)(lVar17 + 0xc) = local_138._4_8_;
    *(undefined8 *)(lVar17 + 0x18) = local_128;
    *(undefined4 *)(lVar17 + 0x20) = local_120;
    *(undefined4 *)(lVar17 + 0x24) = local_11c;
    *(undefined4 *)(lVar17 + 0x28) = local_118;
    *(undefined4 *)(lVar17 + 0x30) = local_110;
    *(undefined4 *)(lVar17 + 0x34) = uStack_10c;
    *(undefined4 *)(lVar17 + 0x38) = uStack_108;
    *(undefined4 *)(lVar17 + 0x3c) = uStack_104;
    *(undefined8 *)(lVar17 + 0x40) = local_100;
    FUN_141098b4c(lVar17 + 0xa8);
    *(undefined8 *)(lVar17 + 200) = 0;
    *(undefined8 *)(lVar17 + 0xd0) = 0;
    FUN_14011fb0c(lVar17 + 0xd8);
  }
  else {
LAB_143a3a868:
    if (iVar11 == 0x10) goto LAB_143a3a871;
LAB_143a3a9b0:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar11 = *(int *)(lVar13 + 0xc60), iVar11 != 2)) {
        if (iVar11 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_143a3b09f;
        }
        goto LAB_143a3a9e1;
      }
LAB_143a3b09f:
      if (*(int *)(local_148 + 0x18) != *(int *)(local_148 + 0x44)) {
        lVar13 = local_148 + 0x48;
        if (*(longlong *)(local_148 + 0x50) != 0) {
          lVar13 = *(longlong *)(local_148 + 0x50);
        }
        iVar11 = *(int *)(lVar13 + (ulonglong)
                                   (*(int *)(local_148 + 0x58) - 1U &
                                   (int)lStack_140 + (int)((ulonglong)lStack_140 >> 0x20) * 0x17) *
                                   4);
        if (iVar11 != -1) {
          do {
            lVar13 = *(longlong *)(local_148 + 0x10) + (longlong)iVar11 * 0x120;
            if (*(longlong *)(*(longlong *)(local_148 + 0x10) + (longlong)iVar11 * 0x120) ==
                lStack_140) goto LAB_143a3a8e4;
            iVar11 = *(int *)(lVar13 + 0x118);
          } while (iVar11 != -1);
        }
      }
      goto LAB_143a3a8e2;
    }
LAB_143a3a9e1:
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar2;
      if (puVar9 != (uint *)0x0) goto LAB_143a3aa8e;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_143a3b683);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar2 = puVar8;
        FUN_140217a48(puVar2);
        puVar9 = (uint *)*puVar2;
LAB_143a3aa8e:
        puVar23 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar23 + 0x31);
        uVar12 = puVar9[0x12];
        if (puVar15 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar3 = *puVar9;
          *puVar9 = *puVar9 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar9 = (uint *)*puVar2;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          puVar23 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar23 + 0x31);
          uVar12 = 0;
          if (puVar15 <= puVar9 + 0x4000) {
            uVar12 = 1;
            goto LAB_143a3ab0e;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143a3ab0e:
      *(uint **)(puVar9 + 0x10) = puVar15;
      puVar9[0x12] = uVar12;
      FUN_1447247dc(puVar23,0);
      *puVar23 = &PTR_FUN_14adcccd0;
      puVar23[0x15] = local_148;
      puVar23[0x16] = lStack_140;
      plVar14 = (longlong *)local_138;
      plVar18 = puVar23 + 0x17;
      for (lVar13 = 0xb; lVar13 != 0; lVar13 = lVar13 + -1) {
        *plVar18 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar18 = plVar18 + 1;
      }
      *(char *)((longlong)puVar23 + 0x111) = local_df;
      if (local_df == '\x01') {
        *(undefined1 *)(puVar23 + 0x22) = local_e0;
      }
      *(undefined2 *)((longlong)puVar23 + 0x112) = local_de;
      puVar23[0x23] = local_d8;
      puVar23[0x24] = lStack_d0;
      puVar23[0x25] = local_c8;
      *(undefined4 *)(puVar23 + 0x26) = local_c0;
      puVar23[0x27] = local_b8;
      iVar11 = 0;
      local_b8 = 0;
      *(undefined4 *)(puVar23 + 0x28) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar23 + 0x144) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(puVar23 + 0x29) = local_a8;
      puVar23[0x2a] = local_a0;
      puVar23[0x2b] = local_98;
      local_98 = 0;
      *(undefined4 *)(puVar23 + 0x2c) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar23 + 0x164) = local_90._4_4_;
      local_90 = 0;
      puVar23[0x2d] = local_88;
      local_88 = 0;
      *(undefined4 *)(puVar23 + 0x2e) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar23 + 0x174) = local_80._4_4_;
      local_80 = 0;
      *(undefined4 *)(puVar23 + 0x2f) = local_78;
      *(undefined4 *)((longlong)puVar23 + 0x17c) = uStack_74;
      *(undefined4 *)(puVar23 + 0x30) = uStack_70;
      *(undefined4 *)((longlong)puVar23 + 0x184) = uStack_6c;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
      }
      puVar23[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar23[9] = puVar23;
      puVar23[10] = puVar23;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar10 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar23[0xf] = uVar10;
      puVar23[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar23 + 0x1c) = iVar11;
      if (puVar23 == (undefined8 *)0x0) {
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar23);
        LOCK();
        piVar1 = (int *)(puVar23 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar23)(puVar23,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_58 = (longlong *)FUN_14001cc68(0xe8,8);
      *local_58 = (longlong)&PTR_LAB_14adcccb0;
      local_58[1] = local_148;
      local_58[2] = lStack_140;
      plVar14 = (longlong *)local_138;
      plVar18 = local_58 + 3;
      for (lVar13 = 0xb; lVar13 != 0; lVar13 = lVar13 + -1) {
        *plVar18 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar18 = plVar18 + 1;
      }
      *(char *)((longlong)local_58 + 0x71) = local_df;
      if (local_df == '\x01') {
        *(undefined1 *)(local_58 + 0xe) = local_e0;
      }
      *(undefined2 *)((longlong)local_58 + 0x72) = local_de;
      local_58[0xf] = local_d8;
      local_58[0x10] = lStack_d0;
      local_58[0x11] = local_c8;
      *(undefined4 *)(local_58 + 0x12) = local_c0;
      local_58[0x13] = local_b8;
      local_b8 = 0;
      *(undefined4 *)(local_58 + 0x14) = (undefined4)local_b0;
      *(undefined4 *)((longlong)local_58 + 0xa4) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(local_58 + 0x15) = local_a8;
      local_58[0x16] = local_a0;
      local_58[0x17] = local_98;
      local_98 = 0;
      *(undefined4 *)(local_58 + 0x18) = (undefined4)local_90;
      *(undefined4 *)((longlong)local_58 + 0xc4) = local_90._4_4_;
      local_90 = 0;
      local_58[0x19] = local_88;
      local_88 = 0;
      *(undefined4 *)(local_58 + 0x1a) = (undefined4)local_80;
      *(undefined4 *)((longlong)local_58 + 0xd4) = local_80._4_4_;
      local_80 = 0;
      *(undefined4 *)(local_58 + 0x1b) = local_78;
      *(undefined4 *)((longlong)local_58 + 0xdc) = uStack_74;
      *(undefined4 *)(local_58 + 0x1c) = uStack_70;
      *(undefined4 *)((longlong)local_58 + 0xe4) = uStack_6c;
      if (local_58 != (longlong *)&DAT_fffffffffffffff8) {
        local_68[0] = FUN_143a4160e;
      }
      local_158 = local_68;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3c074);
      if (local_68[0] != (code *)0x0) {
        plVar14 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar14 = local_48;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  FUN_148167420(local_138);
LAB_143a3a960:
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3b188 FUN_143a3b188 body=31 status=ok
// SIG undefined FUN_143a3b188(void)

undefined8 FUN_143a3b188(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3b1ac FUN_143a3b1ac body=31 status=ok
// SIG undefined FUN_143a3b1ac(void)

undefined8 FUN_143a3b1ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3b1d4 FUN_143a3b1d4 body=31 status=ok
// SIG undefined FUN_143a3b1d4(void)

undefined8 FUN_143a3b1d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3b214 FUN_143a3b214 body=361 status=ok
// SIG undefined FUN_143a3b214(void)

void FUN_143a3b214(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = *(longlong *)(param_2[2] + 0x10);
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x48);
        if (*plVar5 == lVar1) break;
        iVar3 = (int)plVar5[8];
        plVar5 = (longlong *)0x0;
      } while (iVar3 != -1);
      goto LAB_143a3b299;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_143a3b299:
  if (*(char *)((longlong)plVar5 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)plVar5 + 0x24) = 0;
    uVar2 = *(undefined8 *)(param_2[1] + 0x28);
    local_88 = (undefined4)plVar5[5];
    uStack_84 = *(undefined8 *)((longlong)plVar5 + 0x14);
    uStack_7c = *(undefined8 *)((longlong)plVar5 + 0x1c);
    FUN_148119302(param_2,&uStack_74);
    local_68[0] = (code *)0x0;
    local_58 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_58 = &PTR_FUN_14adcb810;
    *(undefined4 *)(local_58 + 3) = uStack_7c._4_4_;
    *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_74;
    *(undefined4 *)(local_58 + 4) = uStack_70;
    *(undefined4 *)((longlong)local_58 + 0x24) = uStack_6c;
    *(undefined4 *)(local_58 + 1) = local_88;
    *(undefined4 *)((longlong)local_58 + 0xc) = (undefined4)uStack_84;
    *(undefined4 *)(local_58 + 2) = uStack_84._4_4_;
    *(undefined4 *)((longlong)local_58 + 0x14) = (undefined4)uStack_7c;
    if (local_58 + 1 != (undefined8 *)0x0) {
      local_68[0] = FUN_14816c06e;
    }
    FUN_1481c8a80(uVar2,*param_2,plVar5[6],local_68);
  }
  plVar5[6] = 0;
  plVar5[7] = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a3b382 FUN_143a3b382 body=31 status=ok
// SIG undefined FUN_143a3b382(void)

undefined8 FUN_143a3b382(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3b3a6 FUN_143a3b3a6 body=448 status=ok
// SIG undefined FUN_143a3b3a6(void)

void FUN_143a3b3a6(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  uint local_64;
  uint *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_2;
  lVar4 = *param_1;
  fVar8 = (float)*(int *)(*param_3 + 0x74) * (*(float *)(lVar4 + 0x118) / 1000.0);
  local_64 = uVar3;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14adc1ac0;
  lVar7 = *(longlong *)(lVar4 + 0x108);
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14adc1ae0;
  *(undefined4 *)(plVar5 + 5) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
  FUN_14703854a(lVar4 + 0x60,plVar5 + 6,
                ((int)ROUND(fVar8 + fVar8 + -0.5) << 2 | 4U) - 1 & 0xfffffff8,0x3f800000);
  *(uint *)(plVar5 + 9) = uVar3;
  plVar5[10] = lVar7;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  local_78 = plVar5 + 2;
  local_70 = plVar5;
  FUN_148157f32(&local_78,plVar5 + 2);
  local_60 = &local_64;
  local_58 = &local_78;
  FUN_14816dbfa((longlong *)(lVar4 + 0x10),local_4c);
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)();
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar7 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar4 + 0x58) - 1U & local_64) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      do {
        lVar7 = lVar4 + (longlong)iVar6 * 0x20;
        if (*(uint *)(lVar4 + (longlong)iVar6 * 0x20) == local_64) goto LAB_143a3b536;
        iVar6 = *(int *)(lVar7 + 0x18);
      } while (iVar6 != -1);
    }
  }
  lVar7 = 0;
LAB_143a3b536:
  FUN_14811efce(*(undefined8 *)(lVar7 + 8));
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3b57e FUN_143a3b57e body=29 status=ok
// SIG undefined FUN_143a3b57e(void)

undefined8 FUN_143a3b57e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3b5c0 FUN_143a3b5c0 body=29 status=ok
// SIG undefined FUN_143a3b5c0(void)

undefined8 FUN_143a3b5c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3b5ea FUN_143a3b5ea body=102 status=ok
// SIG undefined FUN_143a3b5ea(void)

void FUN_143a3b5ea(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 2) + 0x140;
  if (*(int *)(*(longlong *)(param_1 + 2) + 0x150) != 0) {
    FUN_14011fb0c(lVar1);
  }
  FUN_140661c88(lVar1,param_2,L"FNiagaraDataInterfaceProxyOscilloscope_GPUDownsampledBuffer",4,
                *param_1,0xd,1,0);
  return;
}



// FUNCTION 143a3b65a FUN_143a3b65a body=12 status=ok
// SIG undefined FUN_143a3b65a(void)

void FUN_143a3b65a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3b663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3b666 FUN_143a3b666 body=29 status=ok
// SIG undefined FUN_143a3b666(void)

undefined8 FUN_143a3b666(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3b6aa FUN_143a3b6aa body=282 status=ok
// SIG undefined FUN_143a3b6aa(void)

undefined8 * FUN_143a3b6aa(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3b7c4 FUN_143a3b7c4 body=157 status=ok
// SIG undefined FUN_143a3b7c4(void)

void FUN_143a3b7c4(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x16] + 0x140;
  if (*(int *)(param_1[0x16] + 0x150) != 0) {
    FUN_14011fb0c(lVar2);
  }
  FUN_140661c88(lVar2,&DAT_14ca85100,L"FNiagaraDataInterfaceProxyOscilloscope_GPUDownsampledBuffer",
                4,*(undefined4 *)(param_1 + 0x15),0xd,1,0);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3b856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a3b862 FUN_143a3b862 body=366 status=ok
// SIG undefined FUN_143a3b862(void)

void FUN_143a3b862(longlong *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Dst;
  size_t _Size;
  
  lVar3 = *param_1;
  FUN_1481589be(lVar3);
  iVar2 = *(int *)(lVar3 + 0x138);
  if (((longlong)iVar2 != 0) && (*(int *)(lVar3 + 0x150) == 0)) {
    FUN_140661c88(lVar3 + 0x140,param_2,L"GPUDownsampledBuffer",4,
                  *(int *)(lVar3 + 0x158) * *(int *)(lVar3 + 0x114),0xd,1,0);
  }
  if (*(int *)(lVar3 + 0x150) != 0) {
    _Size = (longlong)iVar2 << 2;
    uVar4 = *(undefined8 *)(lVar3 + 0x140);
    cVar1 = *(char *)(param_2 + 0x69);
    if (cVar1 == '\0') {
      FUN_14002049c(param_2,1);
    }
    _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0,(int)_Size,1)
    ;
    if (cVar1 == '\0') {
      FUN_14002049c(param_2,0);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x180);
    EnterCriticalSection(lpCriticalSection);
    memcpy(_Dst,*(void **)(lVar3 + 0x130),_Size);
    uVar4 = *(undefined8 *)(lVar3 + 0x140);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3b9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}



// FUNCTION 143a3b9e0 FUN_143a3b9e0 body=12 status=ok
// SIG undefined FUN_143a3b9e0(void)

void FUN_143a3b9e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3b9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3b9ec FUN_143a3b9ec body=29 status=ok
// SIG undefined FUN_143a3b9ec(void)

undefined8 FUN_143a3b9ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3ba0a FUN_143a3ba0a body=282 status=ok
// SIG undefined FUN_143a3ba0a(void)

undefined8 * FUN_143a3ba0a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3bb24 FUN_143a3bb24 body=105 status=ok
// SIG undefined FUN_143a3bb24(void)

void FUN_143a3bb24(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a3b862(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a3b862(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3bb67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3bb8e FUN_143a3bb8e body=78 status=ok
// SIG undefined FUN_143a3bb8e(void)

void FUN_143a3bb8e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x2a8);
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(plVar3);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a3bbd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))(plVar3,*param_1,*(undefined1 *)(param_1 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 143a3bc0c FUN_143a3bc0c body=29 status=ok
// SIG undefined FUN_143a3bc0c(void)

undefined8 FUN_143a3bc0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3bc2a FUN_143a3bc2a body=78 status=ok
// SIG undefined FUN_143a3bc2a(void)

void FUN_143a3bc2a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x2a8);
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(plVar3);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a3bc6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x30))(plVar3,*param_1,*(undefined4 *)(param_1 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 143a3bca8 FUN_143a3bca8 body=29 status=ok
// SIG undefined FUN_143a3bca8(void)

undefined8 FUN_143a3bca8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3bcc6 FUN_143a3bcc6 body=79 status=ok
// SIG undefined FUN_143a3bcc6(void)

void FUN_143a3bcc6(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x2a8);
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(plVar3);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a3bd0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x40))(plVar3,*param_1,*(undefined4 *)(param_1 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 143a3bd46 FUN_143a3bd46 body=29 status=ok
// SIG undefined FUN_143a3bd46(void)

undefined8 FUN_143a3bd46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3bd64 FUN_143a3bd64 body=67 status=ok
// SIG undefined FUN_143a3bd64(void)

void FUN_143a3bd64(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(lVar1 + 0x2a8);
    if (cVar2 != '\0') {
      FUN_14342e4a4(lVar1,*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143a3bdc4 FUN_143a3bdc4 body=12 status=ok
// SIG undefined FUN_143a3bdc4(void)

void FUN_143a3bdc4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3bdcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3bdd0 FUN_143a3bdd0 body=29 status=ok
// SIG undefined FUN_143a3bdd0(void)

undefined8 FUN_143a3bdd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3bdee FUN_143a3bdee body=67 status=ok
// SIG undefined FUN_143a3bdee(void)

void FUN_143a3bdee(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(lVar1 + 0x2a8);
    if (cVar2 != '\0') {
      FUN_14342df16(lVar1,*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143a3be4e FUN_143a3be4e body=12 status=ok
// SIG undefined FUN_143a3be4e(void)

void FUN_143a3be4e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3be57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3be5a FUN_143a3be5a body=29 status=ok
// SIG undefined FUN_143a3be5a(void)

undefined8 FUN_143a3be5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3be78 FUN_143a3be78 body=123 status=ok
// SIG undefined FUN_143a3be78(void)

void FUN_143a3be78(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(lVar1 + 0x2a8);
    if (cVar2 != '\0') {
      local_28 = *(undefined8 *)(param_1 + 4);
      local_38 = *param_1;
      uStack_34 = param_1[1];
      uStack_30 = param_1[2];
      uStack_2c = param_1[3];
      local_48 = 0;
      FUN_140d93b16(lVar1,&local_38,0,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3bf1a FUN_143a3bf1a body=12 status=ok
// SIG undefined FUN_143a3bf1a(void)

void FUN_143a3bf1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3bf23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3bf26 FUN_143a3bf26 body=29 status=ok
// SIG undefined FUN_143a3bf26(void)

undefined8 FUN_143a3bf26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3bf44 FUN_143a3bf44 body=137 status=ok
// SIG undefined FUN_143a3bf44(void)

void FUN_143a3bf44(float *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2a8) + 0xa8))(lVar1 + 0x2a8);
    if (cVar2 != '\0') {
      local_20 = (double)param_1[2];
      local_28 = (double)param_1[1];
      local_30 = (double)*param_1;
      local_38 = 0;
      FUN_14020f670(lVar1,&local_30,0,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3bff2 FUN_143a3bff2 body=12 status=ok
// SIG undefined FUN_143a3bff2(void)

void FUN_143a3bff2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3bffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3bffe FUN_143a3bffe body=29 status=ok
// SIG undefined FUN_143a3bffe(void)

undefined8 FUN_143a3bffe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3c04c FUN_143a3c04c body=12 status=ok
// SIG undefined FUN_143a3c04c(void)

void FUN_143a3c04c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3c055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3c058 FUN_143a3c058 body=29 status=ok
// SIG undefined FUN_143a3c058(void)

undefined8 FUN_143a3c058(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3c076 FUN_143a3c076 body=1258 status=ok
// SIG undefined FUN_143a3c076(void)

void FUN_143a3c076(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar11 = *(int *)(*param_4 + 0x4c);
  if (((((iVar11 == 0) || (uVar13 = *(uint *)(*param_4 + 0x48), (int)uVar13 < 0)) ||
       (DAT_14c9647dc <= (int)uVar13)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != iVar11)))) ||
     (lVar2 = *param_2, (*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_143a3c3a2;
  lVar12 = *plVar9;
  uVar3 = *(ulonglong *)(lVar2 + 0x48);
  if (((uVar3 >> 0x20 == 0 || lVar12 == 0) || (uVar13 = (uint)uVar3, (int)uVar13 < 0)) ||
     (DAT_14c9647dc <= (int)uVar13)) goto LAB_143a3c3a2;
  uVar10 = (ulonglong)((uint)(uVar3 >> 0x10) & 0x7fff);
  puVar6 = (undefined8 *)
           ((ulonglong)((uVar13 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar10 * 8));
  if (((puVar6 == (undefined8 *)0x0) ||
      (iVar11 = (int)(uVar3 >> 0x20), *(int *)(puVar6 + 2) != iVar11)) ||
     ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_143a3c3a2;
  local_b8 = 1;
  if (*(char *)(lVar2 + 0xe4) == '\0') {
    if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
      plVar9 = (longlong *)*puVar6;
    }
    else {
      plVar9 = (longlong *)0x0;
    }
    local_b8 = (**(code **)(*plVar9 + 0x300))();
  }
  if (*(int *)(lVar2 + 0x5c) == 0) {
LAB_143a3c4de:
    local_90 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x58);
    local_90 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar2 + 0x5c) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143a3c4de;
      local_90 = *puVar6;
    }
  }
  if (((((*(int *)(lVar2 + 100) != 0) && (uVar1 = *(uint *)(lVar2 + 0x60), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar2 + 100))))) &&
     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar7 = *plVar9;
    }
    else {
      lVar7 = 0;
    }
    if (*(char *)(lVar7 + 0x28) == '\x01') {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar9;
      }
      else {
        lVar7 = 0;
      }
      local_90 = *(undefined8 *)(lVar7 + 0x30);
    }
  }
  if (*(int *)(lVar2 + 0x54) == 0) {
LAB_143a3c4e5:
    local_98 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50);
    local_98 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar2 + 0x54) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143a3c4e5;
      local_98 = *puVar6;
    }
  }
  local_a0 = *(undefined4 *)(param_1 + 0x40);
  local_a8 = *(undefined4 *)(param_1 + 0x3c);
  local_b0 = *(undefined4 *)(param_1 + 0x38);
  local_48 = *(undefined8 *)(param_1 + 0x30);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  local_78 = *(undefined4 *)(param_1 + 8);
  uStack_74 = *(undefined4 *)(param_1 + 0xc);
  uStack_70 = *(undefined4 *)(param_1 + 0x10);
  uStack_6c = *(undefined4 *)(param_1 + 0x14);
  local_68 = *(undefined8 *)(param_1 + 0x18);
  if (((((int)uVar13 < DAT_14c9647dc) &&
       (puVar6 = (undefined8 *)
                 ((ulonglong)((uVar13 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar10 * 8))
       , puVar6 != (undefined8 *)0x0)) && (*(int *)(puVar6 + 2) == iVar11)) &&
     ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
    uVar5 = *puVar6;
  }
  else {
    uVar5 = 0;
  }
  local_c8 = &local_58;
  local_88 = 1;
  local_c0 = 1;
  plVar9 = (longlong *)FUN_1434f6e2c(uVar5,lVar12,0,&local_78);
  if (plVar9 != (longlong *)0x0) {
    if ((((*(int *)(lVar2 + 100) != 0) && (uVar13 = *(uint *)(lVar2 + 0x60), -1 < (int)uVar13)) &&
        (((int)uVar13 < DAT_14c9647dc &&
         ((plVar4 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
          plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(lVar2 + 100))))))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar12 = *plVar4;
      }
      else {
        lVar12 = 0;
      }
      if (*(char *)(lVar12 + 0x38) == '\x01') {
        if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
          lVar12 = *plVar4;
        }
        else {
          lVar12 = 0;
        }
        FUN_14342da8c(plVar9,lVar12 + 0x40);
        (**(code **)(*plVar9 + 0x5e8))(plVar9,*(undefined4 *)(param_1 + 0x40));
      }
    }
    if (0.0 < *(float *)(param_1 + 0x44)) {
      local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffffffffff00);
      (**(code **)(*plVar9 + 0x5d8))
                (plVar9,*(float *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0x40));
    }
    local_7c = 0;
    local_80 = *(uint *)((longlong)plVar9 + 0xc);
    if ((int)local_80 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((local_80 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_80 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar11 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar11 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar8;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar8;
      }
    }
    local_7c = iVar11;
    FUN_14816f286(lVar2 + 0x38,param_1);
  }
LAB_143a3c3a2:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a3c562 FUN_143a3c562 body=71 status=ok
// SIG undefined FUN_143a3c562(void)

void FUN_143a3c562(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14adcc0f0;
  lVar2 = 9;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143a3c5b0 FUN_143a3c5b0 body=29 status=ok
// SIG undefined FUN_143a3c5b0(void)

void FUN_143a3c5b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3c5ce FUN_143a3c5ce body=29 status=ok
// SIG undefined FUN_143a3c5ce(void)

undefined8 FUN_143a3c5ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3c5ec FUN_143a3c5ec body=236 status=ok
// SIG undefined FUN_143a3c5ec(void)

void FUN_143a3c5ec(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  param_3 = (longlong *)*param_3;
  if (param_3 != (longlong *)0x0) {
    lVar2 = *param_2;
    cVar5 = (**(code **)(param_3[0x55] + 0xa8))(param_3 + 0x55);
    if (cVar5 != '\0') {
      if ((float)param_1[1] <= 0.0) {
        (**(code **)(*param_3 + 0x600))(param_3);
      }
      else {
        (**(code **)(*param_3 + 0x5e0))(param_3,param_1[1],0,0);
      }
      uVar6 = *(uint *)(lVar2 + 0x40);
      lVar3 = *(longlong *)(lVar2 + 0x38);
      uVar8 = 0;
      uVar7 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar1 = (uVar7 >> 1) + uVar8;
          if (*(int *)(lVar3 + (ulonglong)uVar1 * 0xc) < *param_1) {
            uVar8 = uVar1 + (uVar7 & 1);
          }
          bVar4 = 1 < uVar7;
          uVar7 = uVar7 >> 1;
        } while (bVar4);
      }
      if (((int)uVar8 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar8 * 0xc) <= *param_1)) {
        if (~uVar8 + uVar6 != 0) {
          _Dst = (void *)(lVar3 + (ulonglong)uVar8 * 0xc);
          memmove(_Dst,(void *)((longlong)_Dst + 0xc),(longlong)(int)(~uVar8 + uVar6) * 0xc);
          uVar6 = *(uint *)(lVar2 + 0x40);
        }
        *(uint *)(lVar2 + 0x40) = uVar6 - 1;
        FUN_14816ebf4(lVar2 + 0x38);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a3c6f6 FUN_143a3c6f6 body=12 status=ok
// SIG undefined FUN_143a3c6f6(void)

void FUN_143a3c6f6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3c6ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3c702 FUN_143a3c702 body=29 status=ok
// SIG undefined FUN_143a3c702(void)

undefined8 FUN_143a3c702(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3c744 FUN_143a3c744 body=12 status=ok
// SIG undefined FUN_143a3c744(void)

void FUN_143a3c744(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3c74d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3c750 FUN_143a3c750 body=29 status=ok
// SIG undefined FUN_143a3c750(void)

undefined8 FUN_143a3c750(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3c76e FUN_143a3c76e body=282 status=ok
// SIG undefined FUN_143a3c76e(void)

undefined8 * FUN_143a3c76e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3c888 FUN_143a3c888 body=143 status=ok
// SIG undefined FUN_143a3c888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a3c888(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14815d5e0(_DAT_000000b8,_DAT_000000a8,_DAT_000000ac,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14815d5e0(param_1[0x17],*(undefined4 *)(param_1 + 0x15),
                *(undefined4 *)((longlong)param_1 + 0xac),*(undefined4 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3c90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3c944 FUN_143a3c944 body=12 status=ok
// SIG undefined FUN_143a3c944(void)

void FUN_143a3c944(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3c94d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3c950 FUN_143a3c950 body=29 status=ok
// SIG undefined FUN_143a3c950(void)

undefined8 FUN_143a3c950(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3c96e FUN_143a3c96e body=282 status=ok
// SIG undefined FUN_143a3c96e(void)

undefined8 * FUN_143a3c96e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3cad8 FUN_143a3cad8 body=460 status=ok
// SIG undefined FUN_143a3cad8(void)

void FUN_143a3cad8(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  
  lVar3 = *param_1;
  FUN_14815dacc(lVar3);
  iVar10 = *(int *)(lVar3 + 0x130) * *(int *)(lVar3 + 0x138);
  iVar7 = *(int *)(lVar3 + 0x130) * 4;
  iVar11 = *(int *)(lVar3 + 0x138) * iVar7;
  puVar1 = (undefined8 *)(lVar3 + 0x1f0);
  iVar5 = iVar11;
  if (iVar11 != *(int *)(lVar3 + 0x200)) {
    if (*(int *)(lVar3 + 0x200) != 0) {
      FUN_14011fb0c(puVar1);
    }
    if (0 < iVar10) {
      FUN_140661c88(puVar1,param_2,L"FNiagaraDataInterfaceProxySpectrum_GPUBuffer",4,iVar10,0xd,1,0)
      ;
    }
    iVar5 = *(int *)(lVar3 + 0x200);
  }
  if (iVar5 != 0) {
    uVar4 = *puVar1;
    cVar2 = *(char *)(param_2 + 0x69);
    if (cVar2 == '\0') {
      FUN_14002049c(param_2,1);
    }
    lVar6 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0,iVar11,1);
    if (cVar2 == '\0') {
      FUN_14002049c(param_2,0);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x208);
    EnterCriticalSection(lpCriticalSection);
    if (0 < *(int *)(lVar3 + 0x138)) {
      lVar9 = 0;
      lVar8 = 0;
      do {
        memcpy((void *)(lVar6 + (longlong)(int)lVar8 * (longlong)*(int *)(lVar3 + 0x130) * 4),
               *(void **)(*(longlong *)(lVar3 + 0x160) + lVar9),(longlong)iVar7);
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar8 < *(int *)(lVar3 + 0x138));
    }
    uVar4 = *puVar1;
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3cc8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}



// FUNCTION 143a3ccb4 FUN_143a3ccb4 body=12 status=ok
// SIG undefined FUN_143a3ccb4(void)

void FUN_143a3ccb4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3ccbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3ccc0 FUN_143a3ccc0 body=29 status=ok
// SIG undefined FUN_143a3ccc0(void)

undefined8 FUN_143a3ccc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3ccde FUN_143a3ccde body=282 status=ok
// SIG undefined FUN_143a3ccde(void)

undefined8 * FUN_143a3ccde(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3cdf8 FUN_143a3cdf8 body=105 status=ok
// SIG undefined FUN_143a3cdf8(void)

void FUN_143a3cdf8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a3cad8(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a3cad8(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3ce3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3ce92 FUN_143a3ce92 body=31 status=ok
// SIG undefined FUN_143a3ce92(void)

undefined8 FUN_143a3ce92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3ced4 FUN_143a3ced4 body=12 status=ok
// SIG undefined FUN_143a3ced4(void)

void FUN_143a3ced4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3cedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3cee0 FUN_143a3cee0 body=29 status=ok
// SIG undefined FUN_143a3cee0(void)

undefined8 FUN_143a3cee0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3cefe FUN_143a3cefe body=282 status=ok
// SIG undefined FUN_143a3cefe(void)

undefined8 * FUN_143a3cefe(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3d018 FUN_143a3d018 body=117 status=ok
// SIG undefined FUN_143a3d018(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a3d018(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481706c4(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481706c4(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3d083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3d08e FUN_143a3d08e body=678 status=ok
// SIG undefined FUN_143a3d08e(void)

void FUN_143a3d08e(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar4 = (longlong *)
           FUN_148170828(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  if (param_1[2] == 0) {
    lVar6 = plVar4[1];
    if (lVar6 != 0) {
      plVar4[1] = 0;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar6;
          plVar7 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar8 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar6 = *plVar4;
    lVar9 = DAT_14c967818;
    if (lVar6 != 0) {
      *plVar4 = 0;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      lVar9 = DAT_14c967818;
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        lVar9 = DAT_14c967818;
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar6;
          plVar7 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar8 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
              lVar9 = DAT_14c967818;
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
              lVar9 = DAT_14c967818;
            } while (bVar10);
          }
        }
      }
    }
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1[2] + 0x128) + 0x10);
    lVar9 = plVar4[1];
    if (lVar9 != lVar6) {
      plVar4[1] = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      if (lVar9 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar9 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar9;
            plVar7 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar10 = plVar7 != DAT_14ca843c0;
                plVar8 = plVar5;
                if (bVar10) {
                  plVar7 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar5 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar10) {
                  plVar8 = DAT_14ca843c8;
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
    lVar6 = FUN_1447b4020(param_1[2]);
    if (lVar6 == 0) {
      plVar7 = &DAT_14c9c0d80;
    }
    else {
      lVar6 = FUN_1447b4020(param_1[2]);
      plVar7 = (longlong *)(lVar6 + 0x18);
    }
    lVar6 = *plVar7;
    lVar9 = *plVar4;
    if (lVar9 != lVar6) {
      *plVar4 = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      if (lVar9 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar9 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar9;
            plVar7 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar10 = plVar7 != DAT_14ca843c0;
                plVar8 = plVar5;
                if (bVar10) {
                  plVar7 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar5 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar10) {
                  plVar8 = DAT_14ca843c8;
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
    lVar9 = param_1[3];
  }
  plVar4[2] = lVar9;
  return;
}



// FUNCTION 143a3d344 FUN_143a3d344 body=29 status=ok
// SIG undefined FUN_143a3d344(void)

void FUN_143a3d344(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3d362 FUN_143a3d362 body=29 status=ok
// SIG undefined FUN_143a3d362(void)

undefined8 FUN_143a3d362(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3d380 FUN_143a3d380 body=282 status=ok
// SIG undefined FUN_143a3d380(void)

undefined8 * FUN_143a3d380(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3d49a FUN_143a3d49a body=91 status=ok
// SIG undefined FUN_143a3d49a(void)

void FUN_143a3d49a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a3d08e(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a3d08e(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3d4d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3d52a FUN_143a3d52a body=12 status=ok
// SIG undefined FUN_143a3d52a(void)

void FUN_143a3d52a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3d533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3d536 FUN_143a3d536 body=29 status=ok
// SIG undefined FUN_143a3d536(void)

undefined8 FUN_143a3d536(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3d554 FUN_143a3d554 body=282 status=ok
// SIG undefined FUN_143a3d554(void)

undefined8 * FUN_143a3d554(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3d6d4 FUN_143a3d6d4 body=31 status=ok
// SIG undefined FUN_143a3d6d4(void)

undefined8 FUN_143a3d6d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3d6f8 FUN_143a3d6f8 body=631 status=ok
// SIG undefined FUN_143a3d6f8(void)

void FUN_143a3d6f8(longlong param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  byte bVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_68 [40];
  float *local_40;
  uint local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 1) {
    iVar13 = *(int *)(param_2 + 0x30);
    uVar7 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar13);
    *(int *)(param_2 + 0x30) = iVar13 + 1;
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar13 * 8);
    iVar13 = *(int *)(param_2 + 0x44) * uVar7;
    bVar12 = 1;
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar9 = uVar3 & 0x7fff;
    uVar7 = (uint)(uVar3 >> 0xf);
    lVar6 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar3 < 0) {
      lVar10 = (ulonglong)(uVar9 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar6 + 0x20);
      lVar10 = 0;
      if (iVar13 <= (int)uVar9) {
        do {
          uVar9 = uVar9 - iVar13;
          iVar13 = (*(int **)(lVar6 + 0x20))[lVar10 + 1];
          lVar10 = lVar10 + 1;
        } while (iVar13 <= (int)uVar9);
      }
      lVar10 = (longlong)(int)uVar9 + *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar10 * 8);
    }
    iVar13 = *(int *)(lVar6 + 0x4c) * uVar7;
    bVar12 = *param_2;
  }
  if ((bVar12 & 1) == 0) {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar9 = uVar3 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_40 = &local_34;
      local_38 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x80);
      local_38 = 1;
      local_40 = (float *)((ulonglong)(uVar9 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70)
                          + (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x30);
    bVar12 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar4);
    local_38 = (uint)bVar12;
    *(int *)(param_2 + 0x30) = iVar4 + 1;
    local_40 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar12 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar4 * 8));
  }
  pbVar8 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar8 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar8) {
    pfVar11 = (float *)(lVar10 + (longlong)iVar13 * 4);
    iVar13 = 0;
    do {
      fVar1 = *(float *)(param_1 + 0x54);
      fVar14 = (*pfVar11 - *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x50) * fVar1;
      if (fVar1 <= fVar14) {
        fVar14 = fVar1;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14),3);
      fVar15 = auVar16._0_4_;
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)fVar15 * 4);
      *local_40 = (*(float *)(*(longlong *)(param_1 + 0x38) +
                             (longlong)
                             (int)(float)(~-(uint)(fVar15 < fVar1) & (uint)fVar15 |
                                         (uint)(fVar15 + 1.0) & -(uint)(fVar15 < fVar1)) * 4) -
                  fVar2) * (fVar14 - fVar15) + fVar2;
      local_40 = local_40 + (int)local_38;
      iVar13 = iVar13 + 1;
      pbVar8 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar8 = param_2 + 0x3c;
      }
      pfVar11 = (float *)((longlong)pfVar11 + (ulonglong)(uVar7 << 2));
    } while (iVar13 < *(int *)pbVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a3d97c FUN_143a3d97c body=368 status=ok
// SIG undefined FUN_143a3d97c(void)

void FUN_143a3d97c(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *_Dst;
  uint uVar3;
  
  *(int *)(*param_1 + 0x10) = (int)param_1[1];
  *(undefined4 *)(*param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(*param_1 + 0x18) = (int)param_1[2];
  *(int *)(*param_1 + 0x1c) = (int)(longlong)*(float *)((longlong)param_1 + 0x14);
  *(int *)(*param_1 + 0x20) = (int)param_1[3];
  FUN_14011fb0c(*param_1 + 0x28);
  if ((int)param_1[5] < 1) {
    return;
  }
  FUN_140661c88(*param_1 + 0x28,param_2,L"CurveLUT",4,(int)param_1[5],0xd,1,0);
  uVar3 = (int)param_1[5] << 2;
  uVar2 = *(undefined8 *)(*param_1 + 0x28);
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0,uVar3,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,(void *)param_1[4],(ulonglong)uVar3);
  uVar2 = *(undefined8 *)(*param_1 + 0x28);
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a3daa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 143a3dafc FUN_143a3dafc body=29 status=ok
// SIG undefined FUN_143a3dafc(void)

void FUN_143a3dafc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3db1a FUN_143a3db1a body=57 status=ok
// SIG undefined FUN_143a3db1a(void)

undefined8 * FUN_143a3db1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adcc670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3db54 FUN_143a3db54 body=282 status=ok
// SIG undefined FUN_143a3db54(void)

undefined8 * FUN_143a3db54(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3dc6e FUN_143a3dc6e body=99 status=ok
// SIG undefined FUN_143a3dc6e(void)

void FUN_143a3dc6e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a3d97c(param_1 + 0x15,&DAT_14ca85100);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3dcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a3dcd2 FUN_143a3dcd2 body=445 status=ok
// SIG undefined FUN_143a3dcd2(void)

void FUN_143a3dcd2(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_898 [40];
  undefined8 local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_898;
  if ((longlong)*(int *)(param_2 + 0x390) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x388);
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar6 + 0x40 + lVar5) == *param_1) {
        *(undefined1 *)param_1[1] = 1;
        uVar4 = DAT_14cb3b000;
        lVar3 = DAT_14cb3aff8;
        local_870 = *(undefined8 *)(lVar6 + 8 + lVar5);
        uVar9 = (ulonglong)(DAT_14cb3b000 - 1);
        if (DAT_14cb3b000 == 0) {
          uVar9 = 0;
        }
        local_868 = local_848;
        local_850 = '\0';
        local_858 = local_32;
        local_860 = local_868;
        FUN_14005eb5c(&local_870,&local_868);
        iVar8 = (int)uVar9;
        iVar7 = (int)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
        if ((iVar8 < 2) || (*(short *)(lVar3 + -2 + uVar9 * 2) != 0x2e)) {
          if (iVar7 <= iVar8 + 1) goto LAB_143a3de81;
          bVar10 = false;
          if ((iVar8 < 0) ||
             (uVar9 = (ulonglong)iVar8, bVar10 = false, *(short *)(local_868 + uVar9 * 2) != 0x2e))
          goto LAB_143a3ddc4;
          if (uVar4 < 2) {
            bVar10 = true;
            goto LAB_143a3ddc4;
          }
        }
        else if (iVar7 <= iVar8) {
LAB_143a3de81:
          bVar10 = false;
          goto LAB_143a3ddc4;
        }
        lVar6 = 0;
        goto LAB_143a3de10;
      }
      lVar5 = lVar5 + 0x50;
    } while ((longlong)*(int *)(param_2 + 0x390) * 0x50 != lVar5);
  }
LAB_143a3ddd6:
  if ((local_30 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143a3de10:
  uVar1 = *(ushort *)(lVar3 + lVar6);
  uVar2 = *(ushort *)(local_868 + lVar6);
  if (uVar1 == uVar2) {
    iVar7 = 0;
    if ((uVar1 == 0) || (uVar9 == 1)) goto LAB_143a3de68;
  }
  else {
    if (0x7f < (uVar2 | uVar1)) {
      iVar7 = (uint)uVar1 - (uint)uVar2;
LAB_143a3de68:
      bVar10 = iVar7 == 0;
LAB_143a3ddc4:
      if (local_850 == '\x01') {
        FUN_1400020a8();
      }
      *(bool *)param_1[2] = bVar10;
      goto LAB_143a3ddd6;
    }
    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
      iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      goto LAB_143a3de68;
    }
    if (uVar9 == 1) {
      iVar7 = 0;
      goto LAB_143a3de68;
    }
  }
  uVar9 = uVar9 - 1;
  lVar6 = lVar6 + 2;
  goto LAB_143a3de10;
}



// FUNCTION 143a3de90 FUN_143a3de90 body=277 status=ok
// SIG undefined FUN_143a3de90(void)

void FUN_143a3de90(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1[7] != 0) && (uVar1 = param_1[6], -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
  {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[7])) &&
         (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && ((*plVar2 != 0 && (param_1[1] != 0)))))) &&
        (uVar1 = *param_1, -1 < (int)uVar1)) &&
       (((((int)uVar1 < DAT_14c9647dc &&
          (plVar2 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar2 != (longlong *)0x0)) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
        (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))))) {
      local_10 = (double)(float)param_1[10] * 65536.0;
      local_18 = (double)(float)param_1[9] * 65536.0;
      local_20 = (double)(float)param_1[8] * 65536.0;
      FUN_148161e46(*plVar2,param_1 + 2);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3dfa6 FUN_143a3dfa6 body=164 status=ok
// SIG undefined FUN_143a3dfa6(void)

undefined8 * FUN_143a3dfa6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14adcc6c0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1481716ca(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],_Src,(longlong)iVar1 * 0x38);
  }
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 143a3e050 FUN_143a3e050 body=29 status=ok
// SIG undefined FUN_143a3e050(void)

void FUN_143a3e050(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3e06e FUN_143a3e06e body=57 status=ok
// SIG undefined FUN_143a3e06e(void)

undefined8 * FUN_143a3e06e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adcc6c0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3e0a8 FUN_143a3e0a8 body=123 status=ok
// SIG undefined FUN_143a3e0a8(void)

void FUN_143a3e0a8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 1;
  FUN_145a0efaa(lVar1 + 0x10,&local_24);
  lVar2 = (longlong)local_24;
  lVar1 = *(longlong *)(lVar1 + 0x10);
  *(char *)(lVar1 + 8 + lVar2 * 0x48) = (char)param_1[2];
  *(undefined4 *)(lVar1 + 0xc + lVar2 * 0x48) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(lVar1 + 0x10 + lVar2 * 0x48) = (int)param_1[3];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3e12e FUN_143a3e12e body=29 status=ok
// SIG undefined FUN_143a3e12e(void)

void FUN_143a3e12e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3e14c FUN_143a3e14c body=29 status=ok
// SIG undefined FUN_143a3e14c(void)

undefined8 FUN_143a3e14c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3e16a FUN_143a3e16a body=282 status=ok
// SIG undefined FUN_143a3e16a(void)

undefined8 * FUN_143a3e16a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3e284 FUN_143a3e284 body=184 status=ok
// SIG undefined FUN_143a3e284(void)

void FUN_143a3e284(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xb0;
  FUN_145a0efaa(lVar2 + 0x10,&local_24);
  lVar3 = (longlong)local_24;
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 8 + lVar3 * 0x48) = *(undefined1 *)(param_1 + 0xb8);
  *(undefined4 *)(lVar2 + 0xc + lVar3 * 0x48) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x48) = *(undefined4 *)(param_1 + 0xc0);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3e370 FUN_143a3e370 body=12 status=ok
// SIG undefined FUN_143a3e370(void)

void FUN_143a3e370(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3e379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3e37c FUN_143a3e37c body=29 status=ok
// SIG undefined FUN_143a3e37c(void)

undefined8 FUN_143a3e37c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3e39a FUN_143a3e39a body=282 status=ok
// SIG undefined FUN_143a3e39a(void)

undefined8 * FUN_143a3e39a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3e4b4 FUN_143a3e4b4 body=117 status=ok
// SIG undefined FUN_143a3e4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a3e4b4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14584facc(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14584facc(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3e51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3e52a FUN_143a3e52a body=279 status=ok
// SIG undefined FUN_143a3e52a(void)

void FUN_143a3e52a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar3 = param_1[1];
    lVar7 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar6 * 0x48);
        if (*plVar1 == lVar3) {
          if (((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) == 0) {
            return;
          }
          *(longlong *)((longlong)plVar1 + 0x14) = param_1[2];
          if (param_1[3] == 0) {
            *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
            iVar6 = 0;
          }
          else {
            uVar2 = *(uint *)(param_1[3] + 0xc);
            *(uint *)((longlong)plVar1 + 0x1c) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            iVar6 = *(int *)(lVar4 + 0x10);
            if (*(int *)(lVar4 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar5 = DAT_14c964868 + 1;
              bVar8 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar8) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar5);
              }
              LOCK();
              iVar6 = *(int *)(lVar4 + 0x10);
              bVar8 = iVar6 == 0;
              if (bVar8) {
                *(int *)(lVar4 + 0x10) = iVar5;
                iVar6 = 0;
              }
              UNLOCK();
              if (bVar8) {
                iVar6 = iVar5;
              }
            }
          }
          *(int *)(plVar1 + 4) = iVar6;
          return;
        }
        iVar6 = (int)plVar1[8];
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 143a3e64c FUN_143a3e64c body=29 status=ok
// SIG undefined FUN_143a3e64c(void)

void FUN_143a3e64c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3e66a FUN_143a3e66a body=29 status=ok
// SIG undefined FUN_143a3e66a(void)

undefined8 FUN_143a3e66a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3e688 FUN_143a3e688 body=282 status=ok
// SIG undefined FUN_143a3e688(void)

undefined8 * FUN_143a3e688(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3e7a2 FUN_143a3e7a2 body=357 status=ok
// SIG undefined FUN_143a3e7a2(void)

void FUN_143a3e7a2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar8 = param_1[0x15];
  if (*(int *)(lVar8 + 0x18) != *(int *)(lVar8 + 0x44)) {
    lVar4 = param_1[0x16];
    lVar7 = lVar8 + 0x48;
    if (*(longlong *)(lVar8 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar8 + 0x50);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar8 + 0x58) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar5 * 0x48);
        if (*plVar2 == lVar4) {
          if (((ulonglong)(plVar2 + 1) & 0xfffffffffffffff7) != 0) {
            *(undefined8 *)((longlong)plVar2 + 0x14) = param_1[0x17];
            if (param_1[0x18] == 0) {
              *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
              iVar5 = 0;
            }
            else {
              uVar3 = *(uint *)(param_1[0x18] + 0xc);
              *(uint *)((longlong)plVar2 + 0x1c) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              iVar5 = *(int *)(lVar8 + 0x10);
              if (*(int *)(lVar8 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                iVar6 = DAT_14c964868 + 1;
                bVar9 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar9) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar6);
                }
                LOCK();
                iVar5 = *(int *)(lVar8 + 0x10);
                bVar9 = iVar5 == 0;
                if (bVar9) {
                  *(int *)(lVar8 + 0x10) = iVar6;
                  iVar5 = 0;
                }
                UNLOCK();
                if (bVar9) {
                  iVar5 = iVar6;
                }
              }
            }
            *(int *)(plVar2 + 4) = iVar5;
          }
          break;
        }
        iVar5 = (int)plVar2[8];
      } while (iVar5 != -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3e8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a3e914 FUN_143a3e914 body=25 status=ok
// SIG undefined FUN_143a3e914(void)

void FUN_143a3e914(void)

{
  FUN_145d4928e();
  FUN_14170c56a(&DAT_14cb3b428);
  return;
}



// FUNCTION 143a3e93a FUN_143a3e93a body=1340 status=ok
// SIG undefined FUN_143a3e93a(void)

void FUN_143a3e93a(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  int local_58 [2];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = param_1[1];
  local_50 = (code *)(param_1 + 2);
  FUN_14117c176(lVar3 + 0x10,local_58);
  lVar18 = *(longlong *)(lVar3 + 0x10);
  lVar3 = lVar18 + (longlong)local_58[0] * 0xd0;
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_1[1] + 8);
  *(char *)(lVar3 + 0x10) = (char)param_1[3];
  *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x24);
  lVar19 = param_1[6];
  *(longlong *)(lVar3 + 0x20) = param_1[5];
  *(longlong *)(lVar3 + 0x28) = lVar19;
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x3c);
  lVar19 = param_1[8];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x44);
  *(int *)(lVar3 + 0x30) = (int)param_1[7];
  *(undefined4 *)(lVar3 + 0x34) = uVar5;
  *(int *)(lVar3 + 0x38) = (int)lVar19;
  *(undefined4 *)(lVar3 + 0x3c) = uVar6;
  plVar15 = (longlong *)(lVar18 + (longlong)local_58[0] * 0xd0 + 0x40);
  if (param_1 + 9 != plVar15) {
    if (*(char *)((longlong)param_1 + 0x49) == '\x01') {
      *(char *)plVar15 = (char)param_1[9];
      uVar8 = 1;
    }
    else {
      if (*(char *)(lVar3 + 0x41) != '\x01') goto LAB_143a3ea05;
      uVar8 = 0;
    }
    *(undefined1 *)(lVar3 + 0x41) = uVar8;
  }
LAB_143a3ea05:
  plVar15 = (longlong *)(lVar3 + 0xb0);
  if (plVar15 != param_1 + 0x14) {
    iVar16 = (int)param_1[0x15];
    _Src = (void *)param_1[0x14];
    *(int *)(lVar3 + 0xb8) = iVar16;
    if (iVar16 == 0 && *(int *)(lVar3 + 0xbc) == 0) {
      *(undefined4 *)(lVar3 + 0xbc) = 0;
    }
    else {
      FUN_1447bda9e(plVar15,iVar16);
      if (iVar16 != 0) {
        memcpy((void *)*plVar15,_Src,(longlong)iVar16 << 2);
      }
    }
  }
  iVar16 = (int)param_1[0x13];
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  plVar15 = (longlong *)(lVar3 + 0x90);
  if (*(int *)(lVar3 + 0x9c) < iVar16) {
    FUN_1402191ca(plVar15);
    iVar16 = (int)param_1[0x13];
  }
  if (0 < iVar16) {
    lVar19 = 8;
    lVar18 = 0;
    do {
      lVar12 = param_1[0x12];
      iVar16 = *(int *)(lVar3 + 0x98);
      uVar9 = iVar16 + 1;
      *(uint *)(lVar3 + 0x98) = uVar9;
      if (*(uint *)(lVar3 + 0x9c) < uVar9) {
        FUN_1446f84a2(plVar15);
      }
      *(undefined8 *)(*plVar15 + (longlong)iVar16 * 8) = *(undefined8 *)(lVar12 + -8 + lVar19);
      plVar10 = (longlong *)FUN_144741050(param_1[0x12] + lVar19);
      uVar17 = *(ushort *)((longlong)plVar10 + 0xc);
      if (uVar17 == 0xffff) {
        lVar12 = *plVar10;
        if (lVar12 == 0) {
LAB_143a3ecc0:
          uVar17 = 0;
        }
        else {
          lVar11 = DAT_14cb420c0;
          if ((short)plVar10[1] == 3) goto LAB_143a3eb9d;
          if ((short)plVar10[1] == 1) goto LAB_143a3ecc0;
          if (DAT_14c948f88 == 0) {
            local_60 = (code *)&DAT_1427db2a2;
            lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948f88 = lVar12;
            FUN_1446f470e(local_58,L"Struct",1);
            local_80 = &local_60;
            local_88 = &LAB_146891313;
            local_90 = FUN_146272f63;
            local_a0 = L"Engine";
            local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
            local_a8 = 8;
            local_b0 = 0x10000020;
            local_b8._0_4_ = 8;
            FUN_14574b4b2(lVar12);
            local_68 = DAT_14c927740;
            DAT_14c948f88 = lVar12;
            if (DAT_14c927740 == 0) {
              local_50 = FUN_1449e2820;
              local_70 = FUN_14081d0ea;
              local_78 = FUN_14081d0ea;
              local_80 = &local_50;
              local_88 = &LAB_146856450;
              local_90 = FUN_1427b121c;
              local_98 = L"Engine";
              local_a0 = (wchar_t *)0x0;
              local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
              local_b0 = 8;
              local_b8._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar12 = DAT_14c948f88;
            local_68 = DAT_14c927740;
            uVar13 = FUN_1400163b0();
            local_b8 = L"Struct";
            FUN_14574b446(uVar13,lVar12,local_68,L"/Script/CoreUObject");
            lVar12 = *plVar10;
            if (lVar12 != 0) goto LAB_143a3eb65;
LAB_143a3ecb9:
            lVar11 = 0;
          }
          else {
LAB_143a3eb65:
            if (DAT_14c948f88 == 0) goto LAB_143a3ecb9;
            lVar4 = *(longlong *)(lVar12 + 0x10);
            lVar11 = 0;
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_143a3ecb9;
              lVar11 = lVar12;
              if (*(longlong *)
                   (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) !=
                  DAT_14c948f88 + 0x30) {
                lVar11 = 0;
              }
            }
          }
LAB_143a3eb9d:
          sVar7 = (short)*(undefined4 *)(lVar11 + 0x5c);
          uVar17 = -sVar7 & ((short)*(undefined4 *)(lVar11 + 0x58) + sVar7) - 1U;
        }
        *(ushort *)((longlong)plVar10 + 0xc) = uVar17;
      }
      iVar16 = *(int *)(lVar3 + 0xa8);
      uVar9 = iVar16 + 1;
      *(uint *)(lVar3 + 0xa8) = uVar9;
      if (*(uint *)(lVar3 + 0xac) < uVar9) {
        FUN_1446f48e2((longlong *)(lVar3 + 0xa0));
      }
      *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)iVar16 * 4) = (int)(short)uVar17 >> 2;
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0xc;
    } while (lVar18 < (int)param_1[0x13]);
  }
  if ((*param_1 == 0) || (lVar18 = *(longlong *)(*param_1 + 0x10), lVar18 == 0)) {
    lVar19 = *(longlong *)(lVar3 + 0x78);
    if (lVar19 == 0) goto LAB_143a3edff;
    *(undefined8 *)(lVar3 + 0x78) = 0;
  }
  else {
    lVar19 = *(longlong *)(lVar3 + 0x78);
    if (lVar19 == lVar18) goto LAB_143a3edff;
    *(longlong *)(lVar3 + 0x78) = lVar18;
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
    if (lVar19 == 0) goto LAB_143a3edff;
  }
  LOCK();
  puVar1 = (uint *)(lVar19 + 8);
  uVar9 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar9 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar19 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar9 >> 0x1e & 1) == 0) {
      bVar2 = *(byte *)(lVar19 + 0xd);
      plVar14 = (longlong *)FUN_14001cc68(0x10,8);
      plVar14[1] = lVar19;
      plVar15 = DAT_14ca843c0;
      plVar10 = DAT_14ca843c8;
      if ((bVar2 & 2) == 0) {
        do {
          *plVar14 = (longlong)plVar15;
          LOCK();
          bVar20 = plVar15 != DAT_14ca843c0;
          plVar10 = plVar14;
          if (bVar20) {
            plVar15 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar10;
          UNLOCK();
        } while (bVar20);
      }
      else {
        do {
          *plVar14 = (longlong)plVar10;
          LOCK();
          bVar20 = plVar10 != DAT_14ca843c8;
          plVar15 = plVar14;
          if (bVar20) {
            plVar10 = DAT_14ca843c8;
            plVar15 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar15;
          UNLOCK();
        } while (bVar20);
      }
    }
  }
LAB_143a3edff:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a3ee88 FUN_143a3ee88 body=29 status=ok
// SIG undefined FUN_143a3ee88(void)

void FUN_143a3ee88(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3eea6 FUN_143a3eea6 body=103 status=ok
// SIG undefined FUN_143a3eea6(void)

undefined8 * FUN_143a3eea6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adcc920;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3ef0e FUN_143a3ef0e body=282 status=ok
// SIG undefined FUN_143a3ef0e(void)

undefined8 * FUN_143a3ef0e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3f028 FUN_143a3f028 body=144 status=ok
// SIG undefined FUN_143a3f028(void)

void FUN_143a3f028(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a3e93a(param_1 + 0x15);
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xf1) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3f0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a3f0d6 FUN_143a3f0d6 body=12 status=ok
// SIG undefined FUN_143a3f0d6(void)

void FUN_143a3f0d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3f0df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3f0e2 FUN_143a3f0e2 body=29 status=ok
// SIG undefined FUN_143a3f0e2(void)

undefined8 FUN_143a3f0e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3f100 FUN_143a3f100 body=282 status=ok
// SIG undefined FUN_143a3f100(void)

undefined8 * FUN_143a3f100(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3f21a FUN_143a3f21a body=117 status=ok
// SIG undefined FUN_143a3f21a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a3f21a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14128efea(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14128efea(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3f261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3f290 FUN_143a3f290 body=296 status=ok
// SIG undefined FUN_143a3f290(void)

void FUN_143a3f290(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  lVar5 = param_1[1];
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar4 = param_1[2];
    lVar9 = lVar5 + 0x48;
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      lVar9 = *(longlong *)(lVar5 + 0x50);
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(lVar5 + 0x58) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar9 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar10 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar10 * 0xd0) == lVar4)
        goto LAB_143a3f306;
        iVar10 = *(int *)(lVar9 + 200);
      } while (iVar10 != -1);
    }
  }
  lVar9 = 0;
LAB_143a3f306:
  lVar5 = lVar9 + 8;
  if (lVar9 == 0) {
    lVar5 = 0;
  }
  if ((*param_1 == 0) || (lVar4 = *(longlong *)(*param_1 + 0x10), lVar4 == 0)) {
    lVar9 = *(longlong *)(lVar5 + 0x70);
    if (lVar9 == 0) {
      return;
    }
    *(undefined8 *)(lVar5 + 0x70) = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar5 + 0x70);
    if (lVar9 == lVar4) {
      return;
    }
    *(longlong *)(lVar5 + 0x70) = lVar4;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    if (lVar9 == 0) {
      return;
    }
  }
  LOCK();
  puVar1 = (uint *)(lVar9 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar2 >> 0x1e & 1) == 0) {
      bVar3 = *(byte *)(lVar9 + 0xd);
      plVar6 = (longlong *)FUN_14001cc68(0x10,8);
      plVar6[1] = lVar9;
      plVar8 = DAT_14ca843c0;
      plVar7 = DAT_14ca843c8;
      if ((bVar3 & 2) == 0) {
        do {
          *plVar6 = (longlong)plVar8;
          LOCK();
          bVar11 = plVar8 != DAT_14ca843c0;
          plVar7 = plVar6;
          if (bVar11) {
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar7;
          UNLOCK();
        } while (bVar11);
      }
      else {
        do {
          *plVar6 = (longlong)plVar7;
          LOCK();
          bVar11 = plVar7 != DAT_14ca843c8;
          plVar8 = plVar6;
          if (bVar11) {
            plVar7 = DAT_14ca843c8;
            plVar8 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar8;
          UNLOCK();
        } while (bVar11);
      }
    }
  }
  return;
}



// FUNCTION 143a3f3c2 FUN_143a3f3c2 body=12 status=ok
// SIG undefined FUN_143a3f3c2(void)

void FUN_143a3f3c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3f3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3f3ce FUN_143a3f3ce body=29 status=ok
// SIG undefined FUN_143a3f3ce(void)

undefined8 FUN_143a3f3ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3f3ec FUN_143a3f3ec body=282 status=ok
// SIG undefined FUN_143a3f3ec(void)

undefined8 * FUN_143a3f3ec(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3f506 FUN_143a3f506 body=362 status=ok
// SIG undefined FUN_143a3f506(void)

void FUN_143a3f506(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar6 = param_1[0x16];
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar5 = param_1[0x17];
    lVar10 = lVar6 + 0x48;
    if (*(longlong *)(lVar6 + 0x50) != 0) {
      lVar10 = *(longlong *)(lVar6 + 0x50);
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(lVar6 + 0x58) - 1U &
                               (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar11 != -1) {
      do {
        lVar10 = *(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 0xd0) == lVar5)
        goto LAB_143a3f595;
        iVar11 = *(int *)(lVar10 + 200);
      } while (iVar11 != -1);
    }
  }
  lVar10 = 0;
LAB_143a3f595:
  lVar6 = lVar10 + 8;
  if (lVar10 == 0) {
    lVar6 = 0;
  }
  if ((param_1[0x15] == 0) || (lVar5 = *(longlong *)(param_1[0x15] + 0x10), lVar5 == 0)) {
    lVar10 = *(longlong *)(lVar6 + 0x70);
    if (lVar10 == 0) goto LAB_143a3f62d;
    *(undefined8 *)(lVar6 + 0x70) = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar6 + 0x70);
    if (lVar10 == lVar5) goto LAB_143a3f62d;
    *(longlong *)(lVar6 + 0x70) = lVar5;
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    if (lVar10 == 0) goto LAB_143a3f62d;
  }
  LOCK();
  puVar1 = (uint *)(lVar10 + 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar3 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar3 >> 0x1e & 1) == 0) {
      bVar4 = *(byte *)(lVar10 + 0xd);
      plVar7 = (longlong *)FUN_14001cc68(0x10,8);
      plVar7[1] = lVar10;
      plVar9 = DAT_14ca843c0;
      plVar8 = DAT_14ca843c8;
      if ((bVar4 & 2) == 0) {
        do {
          *plVar7 = (longlong)plVar9;
          LOCK();
          bVar12 = plVar9 != DAT_14ca843c0;
          plVar8 = plVar7;
          if (bVar12) {
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar8;
          UNLOCK();
        } while (bVar12);
      }
      else {
        do {
          *plVar7 = (longlong)plVar8;
          LOCK();
          bVar12 = plVar8 != DAT_14ca843c8;
          plVar9 = plVar7;
          if (bVar12) {
            plVar8 = DAT_14ca843c8;
            plVar9 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar9;
          UNLOCK();
        } while (bVar12);
      }
    }
  }
LAB_143a3f62d:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3f64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a3f734 FUN_143a3f734 body=29 status=ok
// SIG undefined FUN_143a3f734(void)

undefined8 FUN_143a3f734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3f752 FUN_143a3f752 body=328 status=ok
// SIG undefined FUN_143a3f752(void)

void FUN_143a3f752(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar1 = param_1[1];
    lVar3 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x50);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xd0) == lVar1)
        goto LAB_143a3f7d8;
        iVar4 = *(int *)(lVar3 + 200);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_143a3f7d8:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if (((param_1[2] != 0) && (lVar2 != 0 && *(longlong *)(param_1[2] + 0x10) != 0)) &&
     (*(longlong **)(lVar2 + 0x60) != (longlong *)0x0)) {
    local_34 = DAT_14c9a5298;
    local_2c = DAT_14c9a52a0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 1;
    uStack_1c = 0;
    local_18 = 0x100000000;
    local_4c = *(undefined8 *)(lVar2 + 0xc);
    local_44 = 1;
    local_38 = (undefined4)param_1[3];
    local_40 = 0;
    FUN_1477f1eb1(param_2,*(undefined8 *)(**(longlong **)(lVar2 + 0x60) + 8));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3f8a6 FUN_143a3f8a6 body=29 status=ok
// SIG undefined FUN_143a3f8a6(void)

void FUN_143a3f8a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a3f8c4 FUN_143a3f8c4 body=29 status=ok
// SIG undefined FUN_143a3f8c4(void)

undefined8 FUN_143a3f8c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3f8e2 FUN_143a3f8e2 body=282 status=ok
// SIG undefined FUN_143a3f8e2(void)

undefined8 * FUN_143a3f8e2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3f9fc FUN_143a3f9fc body=377 status=ok
// SIG undefined FUN_143a3f9fc(void)

void FUN_143a3f9fc(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
    lVar2 = param_1[0x16];
    lVar4 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x50);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar3 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar4 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar5 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar5 * 0xd0) == lVar2)
        goto LAB_143a3fa98;
        iVar5 = *(int *)(lVar4 + 200);
      } while (iVar5 != -1);
    }
  }
  lVar4 = 0;
LAB_143a3fa98:
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  if (((param_1[0x17] != 0) && (lVar3 != 0 && *(longlong *)(param_1[0x17] + 0x10) != 0)) &&
     (*(longlong **)(lVar3 + 0x60) != (longlong *)0x0)) {
    local_34 = DAT_14c9a5298;
    local_2c = DAT_14c9a52a0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 1;
    uStack_1c = 0;
    local_18 = 0x100000000;
    local_4c = *(undefined8 *)(lVar3 + 0xc);
    local_44 = 1;
    local_38 = *(undefined4 *)(param_1 + 0x18);
    local_40 = 0;
    FUN_1477f1eb1(&DAT_14ca85100,*(undefined8 *)(**(longlong **)(lVar3 + 0x60) + 8));
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3fb76 FUN_143a3fb76 body=353 status=ok
// SIG undefined FUN_143a3fb76(void)

void FUN_143a3fb76(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
    lVar1 = param_1[1];
    lVar5 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar3 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar4 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar4 * 0xd0) == lVar1)
        goto LAB_143a3fbfe;
        iVar4 = *(int *)(lVar5 + 200);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_143a3fbfe:
  lVar3 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  if (((param_1[2] != 0) && (lVar3 != 0 && *(longlong *)(param_1[2] + 0x10) != 0)) &&
     (*(longlong **)(lVar3 + 0x60) != (longlong *)0x0)) {
    local_3c = *(int *)(lVar3 + 0x14);
    local_40[0] = 0;
    local_38 = *(undefined8 *)(lVar3 + 0xc);
    local_30 = DAT_14c967818;
    local_28 = DAT_14c967818;
    iVar4 = DAT_14ca84e40 / (int)local_38;
    iVar6 = (int)((ulonglong)local_38 >> 0x20);
    if (local_3c <= (DAT_14ca84e40 / iVar6) * iVar4) {
      if (local_3c < iVar4) {
        iVar4 = local_3c;
      }
      local_40[0] = 1;
      iVar2 = (local_3c + iVar4 + -1) / iVar4;
      local_30 = CONCAT44(iVar2,iVar4);
      local_28 = CONCAT44(iVar6 * iVar2,iVar4 * (int)local_38);
    }
    FUN_148171bb6(local_40,param_2,*(undefined8 *)(**(longlong **)(lVar3 + 0x60) + 8));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a3fce8 FUN_143a3fce8 body=12 status=ok
// SIG undefined FUN_143a3fce8(void)

void FUN_143a3fce8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a3fcf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a3fcf4 FUN_143a3fcf4 body=29 status=ok
// SIG undefined FUN_143a3fcf4(void)

undefined8 FUN_143a3fcf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a3fd12 FUN_143a3fd12 body=282 status=ok
// SIG undefined FUN_143a3fd12(void)

undefined8 * FUN_143a3fd12(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a3fe2c FUN_143a3fe2c body=105 status=ok
// SIG undefined FUN_143a3fe2c(void)

void FUN_143a3fe2c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a3fb76(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a3fb76(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a3fe6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a3fe96 FUN_143a3fe96 body=339 status=ok
// SIG undefined FUN_143a3fe96(void)

void FUN_143a3fe96(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  
  lVar11 = param_1[1];
  if (*(int *)(lVar11 + 0x18) != *(int *)(lVar11 + 0x44)) {
    lVar4 = param_1[2];
    lVar10 = lVar11 + 0x48;
    if (*(longlong *)(lVar11 + 0x50) != 0) {
      lVar10 = *(longlong *)(lVar11 + 0x50);
    }
    iVar12 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(lVar11 + 0x58) - 1U &
                               (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        lVar10 = *(longlong *)(lVar11 + 0x10) + (longlong)iVar12 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar12 * 0xd0) == lVar4)
        goto LAB_143a3ff10;
        iVar12 = *(int *)(lVar10 + 200);
      } while (iVar12 != -1);
    }
  }
  lVar10 = 0;
LAB_143a3ff10:
  lVar11 = lVar10 + 8;
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  *(undefined8 *)(lVar11 + 0xc) = *(undefined8 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar11 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x2c);
  lVar4 = param_1[6];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x34);
  *(int *)(lVar11 + 0x18) = (int)param_1[5];
  *(undefined4 *)(lVar11 + 0x1c) = uVar5;
  *(int *)(lVar11 + 0x20) = (int)lVar4;
  *(undefined4 *)(lVar11 + 0x24) = uVar6;
  FUN_141098b4c(lVar11 + 0x40);
  *(undefined8 *)(lVar11 + 0x60) = 0;
  *(undefined8 *)(lVar11 + 0x68) = 0;
  if ((*param_1 == 0) || (lVar4 = *(longlong *)(*param_1 + 0x10), lVar4 == 0)) {
    lVar10 = *(longlong *)(lVar11 + 0x70);
    if (lVar10 == 0) {
      return;
    }
    *(undefined8 *)(lVar11 + 0x70) = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar11 + 0x70);
    if (lVar10 == lVar4) {
      return;
    }
    *(longlong *)(lVar11 + 0x70) = lVar4;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    if (lVar10 == 0) {
      return;
    }
  }
  LOCK();
  puVar1 = (uint *)(lVar10 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar2 >> 0x1e & 1) == 0) {
      bVar3 = *(byte *)(lVar10 + 0xd);
      plVar7 = (longlong *)FUN_14001cc68(0x10,8);
      plVar7[1] = lVar10;
      plVar9 = DAT_14ca843c0;
      plVar8 = DAT_14ca843c8;
      if ((bVar3 & 2) == 0) {
        do {
          *plVar7 = (longlong)plVar9;
          LOCK();
          bVar13 = plVar9 != DAT_14ca843c0;
          plVar8 = plVar7;
          if (bVar13) {
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar8;
          UNLOCK();
        } while (bVar13);
      }
      else {
        do {
          *plVar7 = (longlong)plVar8;
          LOCK();
          bVar13 = plVar8 != DAT_14ca843c8;
          plVar9 = plVar7;
          if (bVar13) {
            plVar8 = DAT_14ca843c8;
            plVar9 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar9;
          UNLOCK();
        } while (bVar13);
      }
    }
  }
  return;
}



// FUNCTION 143a3fffa FUN_143a3fffa body=29 status=ok
// SIG undefined FUN_143a3fffa(void)

void FUN_143a3fffa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a40018 FUN_143a40018 body=103 status=ok
// SIG undefined FUN_143a40018(void)

undefined8 * FUN_143a40018(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adcca30;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a40080 FUN_143a40080 body=282 status=ok
// SIG undefined FUN_143a40080(void)

undefined8 * FUN_143a40080(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a4019a FUN_143a4019a body=144 status=ok
// SIG undefined FUN_143a4019a(void)

void FUN_143a4019a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a3fe96(param_1 + 0x15);
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xf1) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a40219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a4022a FUN_143a4022a body=113 status=ok
// SIG undefined FUN_143a4022a(void)

void FUN_143a4022a(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 1;
  FUN_14117c176(lVar1 + 0x10,&local_24);
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0xc0 + (longlong)local_24 * 0xd0) = param_1[2];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a402a6 FUN_143a402a6 body=12 status=ok
// SIG undefined FUN_143a402a6(void)

void FUN_143a402a6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a402af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a402b2 FUN_143a402b2 body=29 status=ok
// SIG undefined FUN_143a402b2(void)

undefined8 FUN_143a402b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a402d0 FUN_143a402d0 body=282 status=ok
// SIG undefined FUN_143a402d0(void)

undefined8 * FUN_143a402d0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a403ea FUN_143a403ea body=168 status=ok
// SIG undefined FUN_143a403ea(void)

void FUN_143a403ea(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xb0;
  FUN_14117c176(lVar2 + 0x10,&local_24);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0xc0 + (longlong)local_24 * 0xd0) =
       *(undefined8 *)(param_1 + 0xb8);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a404c6 FUN_143a404c6 body=12 status=ok
// SIG undefined FUN_143a404c6(void)

void FUN_143a404c6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a404cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a404d2 FUN_143a404d2 body=29 status=ok
// SIG undefined FUN_143a404d2(void)

undefined8 FUN_143a404d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a404f0 FUN_143a404f0 body=282 status=ok
// SIG undefined FUN_143a404f0(void)

undefined8 * FUN_143a404f0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a4060a FUN_143a4060a body=117 status=ok
// SIG undefined FUN_143a4060a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a4060a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14128efea(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14128efea(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a40651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a40680 FUN_143a40680 body=25 status=ok
// SIG undefined FUN_143a40680(void)

void FUN_143a40680(void)

{
  FUN_14606e16e();
  FUN_14170c56a(&DAT_14cb3b6c0);
  return;
}



// FUNCTION 143a406a6 FUN_143a406a6 body=81 status=ok
// SIG undefined FUN_143a406a6(void)

void FUN_143a406a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1 + 1;
  FUN_148172ff6(*param_1 + 0x10,local_c,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a40702 FUN_143a40702 body=12 status=ok
// SIG undefined FUN_143a40702(void)

void FUN_143a40702(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a4070b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a4070e FUN_143a4070e body=29 status=ok
// SIG undefined FUN_143a4070e(void)

undefined8 FUN_143a4070e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a4072c FUN_143a4072c body=282 status=ok
// SIG undefined FUN_143a4072c(void)

undefined8 * FUN_143a4072c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a40846 FUN_143a40846 body=129 status=ok
// SIG undefined FUN_143a40846(void)

void FUN_143a40846(undefined8 *param_1)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_20 = param_1 + 0x16;
  FUN_148172ff6(param_1[0x15] + 0x10,local_14,&local_20,0);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a408c8 FUN_143a408c8 body=1411 status=ok
// SIG undefined FUN_143a408c8(void)

void FUN_143a408c8(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  int local_58 [2];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  local_50 = (code *)(param_1 + 2);
  FUN_148172ff6(lVar3 + 0x10,local_58,&local_50,0);
  lVar18 = *(longlong *)(lVar3 + 0x10);
  lVar3 = lVar18 + (longlong)local_58[0] * 0x120;
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(*param_1 + 8);
  *(char *)(lVar3 + 0x10) = (char)param_1[3];
  *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x1c);
  *(longlong *)(lVar3 + 0x20) = param_1[5];
  *(int *)(lVar3 + 0x28) = (int)param_1[6];
  *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x34);
  *(int *)(lVar3 + 0x30) = (int)param_1[7];
  lVar19 = param_1[9];
  *(longlong *)(lVar3 + 0x38) = param_1[8];
  *(longlong *)(lVar3 + 0x40) = lVar19;
  *(longlong *)(lVar3 + 0x48) = param_1[10];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x5c);
  lVar19 = param_1[0xc];
  uVar6 = *(undefined4 *)((longlong)param_1 + 100);
  *(int *)(lVar3 + 0x50) = (int)param_1[0xb];
  *(undefined4 *)(lVar3 + 0x54) = uVar5;
  *(int *)(lVar3 + 0x58) = (int)lVar19;
  *(undefined4 *)(lVar3 + 0x5c) = uVar6;
  *(longlong *)(lVar3 + 0x60) = param_1[0xd];
  plVar10 = (longlong *)(lVar18 + (longlong)local_58[0] * 0x120 + 0x68);
  if (param_1 + 0xe != plVar10) {
    if (*(char *)((longlong)param_1 + 0x71) == '\x01') {
      *(char *)plVar10 = (char)param_1[0xe];
      uVar8 = 1;
    }
    else {
      if (*(char *)(lVar3 + 0x69) != '\x01') goto LAB_143a409c8;
      uVar8 = 0;
    }
    *(undefined1 *)(lVar3 + 0x69) = uVar8;
  }
LAB_143a409c8:
  *(undefined1 *)(lVar3 + 0x6a) = *(undefined1 *)((longlong)param_1 + 0x72);
  plVar10 = (longlong *)(lVar3 + 0xa0);
  if (plVar10 != param_1 + 0x19) {
    iVar16 = (int)param_1[0x1a];
    _Src = (void *)param_1[0x19];
    *(int *)(lVar3 + 0xa8) = iVar16;
    if (iVar16 == 0 && *(int *)(lVar3 + 0xac) == 0) {
      *(undefined4 *)(lVar3 + 0xac) = 0;
    }
    else {
      FUN_1447bda9e(plVar10,iVar16);
      if (iVar16 != 0) {
        memcpy((void *)*plVar10,_Src,(longlong)iVar16 << 2);
      }
    }
  }
  iVar16 = (int)param_1[0x18];
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  plVar10 = (longlong *)(lVar3 + 0x80);
  if (*(int *)(lVar3 + 0x8c) < iVar16) {
    FUN_1402191ca(plVar10);
    iVar16 = (int)param_1[0x18];
  }
  if (0 < iVar16) {
    lVar19 = 8;
    lVar18 = 0;
    do {
      lVar13 = param_1[0x17];
      iVar16 = *(int *)(lVar3 + 0x88);
      uVar9 = iVar16 + 1;
      *(uint *)(lVar3 + 0x88) = uVar9;
      if (*(uint *)(lVar3 + 0x8c) < uVar9) {
        FUN_1446f84a2(plVar10);
      }
      *(undefined8 *)(*plVar10 + (longlong)iVar16 * 8) = *(undefined8 *)(lVar13 + -8 + lVar19);
      plVar11 = (longlong *)FUN_144741050(param_1[0x17] + lVar19);
      uVar17 = *(ushort *)((longlong)plVar11 + 0xc);
      if (uVar17 == 0xffff) {
        lVar13 = *plVar11;
        if (lVar13 == 0) {
LAB_143a40c88:
          uVar17 = 0;
        }
        else {
          lVar12 = DAT_14cb420c0;
          if ((short)plVar11[1] == 3) goto LAB_143a40b65;
          if ((short)plVar11[1] == 1) goto LAB_143a40c88;
          if (DAT_14c948f88 == 0) {
            local_60 = (code *)&DAT_1427db2a2;
            lVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948f88 = lVar13;
            FUN_1446f470e(local_58,L"Struct",1);
            local_80 = &local_60;
            local_88 = &LAB_146891313;
            local_90 = FUN_146272f63;
            local_a0 = L"Engine";
            local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
            local_a8 = 8;
            local_b0 = 0x10000020;
            local_b8._0_4_ = 8;
            FUN_14574b4b2(lVar13);
            local_68 = DAT_14c927740;
            DAT_14c948f88 = lVar13;
            if (DAT_14c927740 == 0) {
              local_50 = FUN_1449e2820;
              local_70 = FUN_14081d0ea;
              local_78 = FUN_14081d0ea;
              local_80 = &local_50;
              local_88 = &LAB_146856450;
              local_90 = FUN_1427b121c;
              local_98 = L"Engine";
              local_a0 = (wchar_t *)0x0;
              local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
              local_b0 = 8;
              local_b8._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar13 = DAT_14c948f88;
            local_68 = DAT_14c927740;
            uVar14 = FUN_1400163b0();
            local_b8 = L"Struct";
            FUN_14574b446(uVar14,lVar13,local_68,L"/Script/CoreUObject");
            lVar13 = *plVar11;
            if (lVar13 != 0) goto LAB_143a40b2d;
LAB_143a40c81:
            lVar12 = 0;
          }
          else {
LAB_143a40b2d:
            if (DAT_14c948f88 == 0) goto LAB_143a40c81;
            lVar4 = *(longlong *)(lVar13 + 0x10);
            lVar12 = 0;
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_143a40c81;
              lVar12 = lVar13;
              if (*(longlong *)
                   (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) !=
                  DAT_14c948f88 + 0x30) {
                lVar12 = 0;
              }
            }
          }
LAB_143a40b65:
          sVar7 = (short)*(undefined4 *)(lVar12 + 0x5c);
          uVar17 = -sVar7 & ((short)*(undefined4 *)(lVar12 + 0x58) + sVar7) - 1U;
        }
        *(ushort *)((longlong)plVar11 + 0xc) = uVar17;
      }
      iVar16 = *(int *)(lVar3 + 0x98);
      uVar9 = iVar16 + 1;
      *(uint *)(lVar3 + 0x98) = uVar9;
      if (*(uint *)(lVar3 + 0x9c) < uVar9) {
        FUN_1446f48e2((longlong *)(lVar3 + 0x90));
      }
      *(int *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar16 * 4) = (int)(short)uVar17 >> 2;
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0xc;
    } while (lVar18 < (int)param_1[0x18]);
  }
  if ((param_1[1] == 0) || (lVar18 = *(longlong *)(param_1[1] + 0x10), lVar18 == 0)) {
    lVar19 = *(longlong *)(lVar3 + 0xf8);
    if (lVar19 == 0) goto LAB_143a40dd4;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
  }
  else {
    lVar19 = *(longlong *)(lVar3 + 0xf8);
    if (lVar19 == lVar18) goto LAB_143a40dd4;
    *(longlong *)(lVar3 + 0xf8) = lVar18;
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
    if (lVar19 == 0) goto LAB_143a40dd4;
  }
  LOCK();
  puVar1 = (uint *)(lVar19 + 8);
  uVar9 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar9 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar19 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar9 >> 0x1e & 1) == 0) {
      bVar2 = *(byte *)(lVar19 + 0xd);
      plVar15 = (longlong *)FUN_14001cc68(0x10,8);
      plVar15[1] = lVar19;
      plVar10 = DAT_14ca843c0;
      plVar11 = DAT_14ca843c8;
      if ((bVar2 & 2) == 0) {
        do {
          *plVar15 = (longlong)plVar10;
          LOCK();
          bVar20 = plVar10 != DAT_14ca843c0;
          plVar11 = plVar15;
          if (bVar20) {
            plVar10 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar11;
          UNLOCK();
        } while (bVar20);
      }
      else {
        do {
          *plVar15 = (longlong)plVar11;
          LOCK();
          bVar20 = plVar11 != DAT_14ca843c8;
          plVar10 = plVar15;
          if (bVar20) {
            plVar11 = DAT_14ca843c8;
            plVar10 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar10;
          UNLOCK();
        } while (bVar20);
      }
    }
  }
LAB_143a40dd4:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a40e5c FUN_143a40e5c body=29 status=ok
// SIG undefined FUN_143a40e5c(void)

void FUN_143a40e5c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a40e7a FUN_143a40e7a body=52 status=ok
// SIG undefined FUN_143a40e7a(void)

undefined8 * FUN_143a40e7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adccc20;
  FUN_148167420(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a40eae FUN_143a40eae body=282 status=ok
// SIG undefined FUN_143a40eae(void)

undefined8 * FUN_143a40eae(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a40fc8 FUN_143a40fc8 body=113 status=ok
// SIG undefined FUN_143a40fc8(void)

void FUN_143a40fc8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a408c8(0xa8);
    FUN_148167420(0xc0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a408c8(param_1 + 0x15);
  FUN_148167420(param_1 + 0x18);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a4102f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a41058 FUN_143a41058 body=12 status=ok
// SIG undefined FUN_143a41058(void)

void FUN_143a41058(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a41061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a41064 FUN_143a41064 body=29 status=ok
// SIG undefined FUN_143a41064(void)

undefined8 FUN_143a41064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a41082 FUN_143a41082 body=282 status=ok
// SIG undefined FUN_143a41082(void)

undefined8 * FUN_143a41082(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a4119c FUN_143a4119c body=117 status=ok
// SIG undefined FUN_143a4119c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a4119c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14817394c(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14817394c(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a41207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a41212 FUN_143a41212 body=309 status=ok
// SIG undefined FUN_143a41212(void)

void FUN_143a41212(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  lVar5 = param_1[1];
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar4 = param_1[2];
    lVar9 = lVar5 + 0x48;
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      lVar9 = *(longlong *)(lVar5 + 0x50);
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(lVar5 + 0x58) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar9 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar10 * 0x120;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar10 * 0x120) == lVar4)
        goto LAB_143a41289;
        iVar10 = *(int *)(lVar9 + 0x118);
      } while (iVar10 != -1);
    }
  }
  lVar9 = 0;
LAB_143a41289:
  lVar5 = lVar9 + 8;
  if (lVar9 == 0) {
    lVar5 = 0;
  }
  if ((*param_1 == 0) || (lVar4 = *(longlong *)(*param_1 + 0x10), lVar4 == 0)) {
    lVar9 = *(longlong *)(lVar5 + 0xf0);
    if (lVar9 == 0) {
      return;
    }
    *(undefined8 *)(lVar5 + 0xf0) = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar5 + 0xf0);
    if (lVar9 == lVar4) {
      return;
    }
    *(longlong *)(lVar5 + 0xf0) = lVar4;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    if (lVar9 == 0) {
      return;
    }
  }
  LOCK();
  puVar1 = (uint *)(lVar9 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar2 >> 0x1e & 1) == 0) {
      bVar3 = *(byte *)(lVar9 + 0xd);
      plVar6 = (longlong *)FUN_14001cc68(0x10,8);
      plVar6[1] = lVar9;
      plVar8 = DAT_14ca843c0;
      plVar7 = DAT_14ca843c8;
      if ((bVar3 & 2) == 0) {
        do {
          *plVar6 = (longlong)plVar8;
          LOCK();
          bVar11 = plVar8 != DAT_14ca843c0;
          plVar7 = plVar6;
          if (bVar11) {
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar7;
          UNLOCK();
        } while (bVar11);
      }
      else {
        do {
          *plVar6 = (longlong)plVar7;
          LOCK();
          bVar11 = plVar7 != DAT_14ca843c8;
          plVar8 = plVar6;
          if (bVar11) {
            plVar7 = DAT_14ca843c8;
            plVar8 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar8;
          UNLOCK();
        } while (bVar11);
      }
    }
  }
  return;
}



// FUNCTION 143a41352 FUN_143a41352 body=12 status=ok
// SIG undefined FUN_143a41352(void)

void FUN_143a41352(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a4135b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}


