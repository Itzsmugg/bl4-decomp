// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f4316e FUN_140f4316e body=5456 status=ok
// SIG undefined FUN_140f4316e(void)

void FUN_140f4316e(longlong param_1)

{
  longlong **pplVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *_Src;
  char cVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  void *_Dst;
  longlong *plVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  void *pvVar29;
  ulonglong uVar30;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_1e8 [32];
  uint *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  uint *local_178;
  int local_16c;
  undefined8 local_168;
  longlong *local_160;
  undefined4 local_158;
  longlong local_150;
  longlong *local_148;
  undefined4 local_140;
  longlong local_138;
  undefined4 local_130;
  longlong local_128;
  undefined4 local_120;
  longlong local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  uint *local_98;
  uint local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(char *)(param_1 + 0x1ef) == '\0') {
    *(undefined1 *)(param_1 + 0x1ef) = 1;
    iVar26 = *(int *)(param_1 + 0x38);
    if (iVar26 == *(int *)(param_1 + 100)) {
      local_1c0 = (longlong *)(param_1 + 0x30);
      uVar19 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x3b0) -
               *(int *)(*(longlong *)(param_1 + 0xa0) + 0x3dc);
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar19);
        }
        uVar27 = uVar19 - iVar26;
        if (uVar27 != 0 && iVar26 <= (int)uVar19) {
          iVar23 = *(int *)(param_1 + 0x3c);
          iVar12 = iVar26;
          if (iVar23 < (int)uVar19) {
            FUN_1446f4a44(local_1c0);
            iVar12 = *(int *)(param_1 + 0x38);
            iVar23 = *(int *)(param_1 + 0x3c);
          }
          *(uint *)(param_1 + 0x38) = iVar12 + uVar27;
          if ((uint)(iVar23 - iVar12) < uVar27) {
            FUN_1447711aa(local_1c0);
          }
          if (iVar12 < (int)uVar19) {
            lVar22 = *local_1c0;
            uVar30 = (ulonglong)uVar19;
            iVar23 = *(int *)(param_1 + 100);
            puVar18 = (undefined4 *)(uVar30 * 0x20 + lVar22 + -0x1c);
            do {
              iVar13 = (int)uVar30;
              if (iVar23 != 0) {
                *(int *)(lVar22 + (longlong)*(int *)(param_1 + 0x60) * 0x20) = iVar13 + -1;
              }
              puVar18[-1] = 0xffffffff;
              uVar5 = 0xffffffff;
              if (0 < *(int *)(param_1 + 100)) {
                uVar5 = *(undefined4 *)(param_1 + 0x60);
              }
              uVar30 = uVar30 - 1;
              *puVar18 = uVar5;
              *(int *)(param_1 + 0x60) = iVar13 + -1;
              iVar23 = *(int *)(param_1 + 100) + 1;
              *(int *)(param_1 + 100) = iVar23;
              puVar18 = puVar18 + -8;
            } while ((longlong)iVar12 < (longlong)uVar30);
          }
          if (iVar26 == 0) {
            pvVar29 = (void *)(param_1 + 0x40);
            *(uint *)(param_1 + 0x58) = uVar27;
            uVar25 = uVar27 + 0x1f >> 5;
            if (*(int *)(param_1 + 0x5c) + 0x1fU >> 5 < uVar25) {
              FUN_14499171c(pvVar29,0,uVar25,4);
              *(uint *)(param_1 + 0x5c) = uVar27 + 0x1f & 0xffffffe0;
            }
            _Dst = *(void **)(param_1 + 0x50);
            if (*(void **)(param_1 + 0x50) == (void *)0x0) {
              _Dst = pvVar29;
            }
            if (uVar27 < 0x101) {
              uVar25 = uVar25 + (uVar25 == 0);
            }
            memset(_Dst,0,(ulonglong)(uVar25 << 2));
            iVar26 = *(int *)(param_1 + 0x58);
            iVar23 = iVar26 + 0x1f;
            if (-1 < iVar26) {
              iVar23 = iVar26;
            }
            if (iVar26 % 0x20 != 0) {
              if (*(void **)(param_1 + 0x50) != (void *)0x0) {
                pvVar29 = *(void **)(param_1 + 0x50);
              }
              bVar11 = -(char)(iVar26 % 0x20);
              *(uint *)((longlong)pvVar29 + (longlong)(iVar23 >> 5) * 4) =
                   (uint)(*(int *)((longlong)pvVar29 + (longlong)(iVar23 >> 5) * 4) <<
                         (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
            }
          }
          else if (-1 < (int)uVar27) {
            uVar5 = FUN_144a54ea4(param_1 + 0x40,uVar27);
            FUN_1447c6044(param_1 + 0x40,uVar5,uVar27,0);
          }
        }
        iVar26 = 1;
        if (3 < uVar19) {
          uVar19 = (uVar19 | 1) + 0xe;
          iVar26 = 0x1f;
          if (uVar19 != 0) {
            for (; uVar19 >> iVar26 == 0; iVar26 = iVar26 + -1) {
            }
          }
          iVar26 = 1 << ((byte)iVar26 & 0x1f);
        }
        if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x78) < iVar26)) {
          *(int *)(param_1 + 0x78) = iVar26;
          FUN_140f446c0(local_1c0);
        }
      }
      lVar22 = *(longlong *)(param_1 + 0xa0);
      puVar10 = (uint *)(lVar22 + 0x3b8);
      uVar19 = *(uint *)(lVar22 + 0x3d0);
      if (uVar19 == 0) {
        uVar30 = 1;
        plVar24 = (longlong *)0x0;
        uVar27 = 0;
        iVar26 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar22 + 0x3c8);
        if (*(uint **)(lVar22 + 0x3c8) == (uint *)0x0) {
          puVar6 = puVar10;
        }
        uVar27 = *puVar6;
        if (uVar27 == 0) {
          iVar26 = uVar19 + 0x1e;
          if (-1 < (int)(uVar19 - 1)) {
            iVar26 = uVar19 - 1;
          }
          plVar24 = (longlong *)0x0;
          plVar16 = (longlong *)(ulonglong)(uint)(iVar26 >> 5);
          if (iVar26 >> 5 < 1) {
            plVar16 = plVar24;
          }
          iVar26 = 0;
          do {
            if (plVar16 == plVar24) goto LAB_140f436a8;
            iVar26 = iVar26 + 0x20;
            uVar27 = puVar6[(longlong)plVar24 + 1];
            plVar24 = (longlong *)((longlong)plVar24 + 1);
          } while (uVar27 == 0);
        }
        else {
          plVar24 = (longlong *)0x0;
          iVar26 = 0;
        }
        uVar30 = (ulonglong)(-uVar27 & uVar27);
        uVar17 = uVar30 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar27 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar19 <= (int)uVar27) {
          uVar27 = uVar19;
        }
      }
      if (uVar27 != uVar19) {
        local_180 = param_1 + 0xa8;
        local_198 = param_1 + 0x40;
        local_188 = param_1 + 0x68;
        uVar25 = 0xffffffff;
        local_1a0 = lVar22;
        local_190 = (ulonglong)uVar19;
        local_178 = puVar10;
        do {
          local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,uVar25);
          lVar21 = *(longlong *)(lVar22 + 0x3a8);
          puVar6 = *(uint **)(lVar21 + 0x10 + (longlong)(int)uVar27 * 0x20);
          local_1a8 = plVar24;
          lVar7 = FUN_140672052(*(undefined8 *)(param_1 + 8));
          if ((lVar7 != 0) &&
             (cVar4 = FUN_140a63060(extraout_XMM0_Da,puVar6,local_180,lVar7), cVar4 != '\0')) {
            local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,iVar26);
            local_1c8 = puVar6;
            if (*(int *)(param_1 + 100) == 0) {
              iVar26 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar26 + 1;
              if (*(int *)(param_1 + 0x3c) == iVar26) {
                FUN_1447711aa(local_1c0,iVar26);
              }
              lVar22 = local_198;
              lVar28 = (longlong)iVar26;
              iVar23 = FUN_144a54ea4(local_198,1);
              lVar7 = *(longlong *)(param_1 + 0x50);
              if (*(longlong *)(param_1 + 0x50) == 0) {
                lVar7 = lVar22;
              }
              iVar12 = iVar23 + 0x1f;
              if (-1 < iVar23) {
                iVar12 = iVar23;
              }
              bVar11 = (byte)iVar23 & 0x1f;
              puVar10 = (uint *)(lVar7 + (longlong)(iVar12 >> 5) * 4);
              *puVar10 = *puVar10 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
            }
            else {
              iVar26 = *(int *)(param_1 + 0x60);
              lVar28 = (longlong)iVar26;
              iVar23 = *(int *)(*(longlong *)(param_1 + 0x30) + 4 + lVar28 * 0x20);
              *(int *)(param_1 + 0x60) = iVar23;
              iVar12 = *(int *)(param_1 + 100) + -1;
              *(int *)(param_1 + 100) = iVar12;
              if (iVar12 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar23 * 0x20) =
                     0xffffffff;
              }
            }
            puVar20 = (undefined8 *)(lVar21 + (longlong)(int)uVar27 * 0x20);
            lVar22 = *(longlong *)(param_1 + 0x50);
            if (*(longlong *)(param_1 + 0x50) == 0) {
              lVar22 = local_198;
            }
            iVar23 = iVar26 + 0x1f;
            if (-1 < iVar26) {
              iVar23 = iVar26;
            }
            puVar10 = (uint *)(lVar22 + (longlong)(iVar23 >> 5) * 4);
            *puVar10 = *puVar10 | 1 << ((byte)iVar26 & 0x1f);
            lVar22 = *(longlong *)(param_1 + 0x30);
            lVar28 = lVar28 * 0x20;
            puVar10 = (uint *)(lVar22 + lVar28);
            iVar23 = *(int *)(puVar20 + 1);
            *(int *)(lVar22 + 8 + lVar28) = iVar23;
            *(undefined8 *)(lVar22 + lVar28) = *puVar20;
            *(undefined8 *)(lVar22 + 0x10 + lVar28) = 0;
            *(undefined4 *)(lVar22 + 0x18 + lVar28) = 0xffffffff;
            if (iVar23 == 0) {
              uVar19 = *puVar10;
            }
            else {
              uVar19 = FUN_144a78877(*puVar10,iVar23);
            }
            iVar23 = 1;
            if (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100) == 1) {
              uVar27 = 1;
LAB_140f4356a:
              iVar12 = iVar26;
              if (((int)uVar27 < 1) || (iVar23 <= *(int *)(param_1 + 0x78))) {
                uVar19 = *(int *)(param_1 + 0x78) - 1U & uVar19;
                puVar10[7] = uVar19;
                lVar22 = *(longlong *)(param_1 + 0x70);
                if (*(longlong *)(param_1 + 0x70) == 0) {
                  lVar22 = local_188;
                }
                puVar10[6] = *(uint *)(lVar22 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                                (longlong)(int)uVar19) * 4);
                lVar22 = *(longlong *)(param_1 + 0x70);
                if (*(longlong *)(param_1 + 0x70) == 0) {
                  lVar22 = local_188;
                }
                *(int *)(lVar22 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)uVar19)
                                  * 4) = iVar26;
              }
              else {
                *(int *)(param_1 + 0x78) = iVar23;
                FUN_140f446c0(local_1c0,local_1c8);
              }
            }
            else {
              iVar12 = FUN_140f54d48(local_1c0,uVar19,puVar10);
              if (iVar12 == -1) {
                uVar27 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
                if (3 < uVar27) {
                  uVar17 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
                  lVar22 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                    }
                  }
                  iVar23 = 1 << ((byte)lVar22 & 0x1f);
                }
                goto LAB_140f4356a;
              }
              lVar22 = *local_1c0;
              uVar19 = *puVar10;
              uVar27 = puVar10[1];
              uVar25 = puVar10[2];
              uVar3 = puVar10[3];
              *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar12 * 0x20) =
                   *(undefined8 *)(puVar10 + 4);
              puVar10 = (uint *)(lVar22 + (longlong)iVar12 * 0x20);
              *puVar10 = uVar19;
              puVar10[1] = uVar27;
              puVar10[2] = uVar25;
              puVar10[3] = uVar3;
              FUN_148918136(local_1c0,iVar26);
            }
            lVar22 = *(longlong *)(param_1 + 0x30);
            uVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))
                              (*(longlong **)(param_1 + 8),local_1c8,param_1);
            *(undefined8 *)(lVar22 + 0x10 + (longlong)iVar12 * 0x20) = uVar8;
            lVar22 = local_1a0;
            puVar10 = local_178;
            iVar26 = (int)local_1b0;
          }
          uVar25 = (uint)local_1b8 & ~(uint)uVar30;
          puVar6 = *(uint **)(lVar22 + 0x3c8);
          if (*(uint **)(lVar22 + 0x3c8) == (uint *)0x0) {
            puVar6 = puVar10;
          }
          uVar19 = *(uint *)(lVar22 + 0x3d0);
          iVar23 = (int)local_1a8;
          lVar21 = (longlong)iVar23;
          uVar27 = puVar6[lVar21] & uVar25;
          plVar24 = local_1a8;
          if (uVar27 == 0) {
            iVar12 = uVar19 + 0x1e;
            if (-1 < (int)(uVar19 - 1)) {
              iVar12 = uVar19 - 1;
            }
            iVar12 = iVar12 >> 5;
            iVar26 = iVar26 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar23) {
              iVar13 = iVar23;
            }
            if (iVar23 < iVar12) {
              lVar7 = 0;
              do {
                uVar27 = puVar6[lVar21 + lVar7 + 1];
                if (uVar27 != 0) {
                  plVar24 = (longlong *)(ulonglong)(iVar23 + (int)lVar7 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_140f4366f;
                }
                iVar26 = iVar26 + 0x20;
                lVar7 = lVar7 + 1;
              } while (iVar13 - lVar21 != lVar7);
              uVar25 = 0xffffffff;
              iVar23 = iVar13;
            }
            plVar24 = (longlong *)(ulonglong)(iVar23 + 1);
            uVar27 = uVar19;
          }
          else {
LAB_140f4366f:
            uVar30 = (ulonglong)(-uVar27 & uVar27);
            uVar17 = uVar30 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar27 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if ((int)uVar19 <= (int)uVar27) {
              uVar27 = uVar19;
            }
          }
        } while (uVar27 != (uint)local_190);
        lVar22 = *(longlong *)(param_1 + 0xa0);
      }
LAB_140f436a8:
      if ((longlong)*(int *)(lVar22 + 0x4a0) != 0) {
        plVar24 = *(longlong **)(lVar22 + 0x498);
        plVar16 = plVar24 + (longlong)*(int *)(lVar22 + 0x4a0) * 2;
        do {
          uVar30 = (ulonglong)*(uint *)(plVar24 + 1);
          if (0 < (int)*(uint *)(plVar24 + 1)) {
            lVar22 = 0;
            do {
              iVar26 = (int)uVar30;
              if (lVar22 == 0) {
                uVar8 = 0;
              }
              else {
                puVar18 = *(undefined4 **)(*(longlong *)(*plVar24 + -8 + lVar22 * 8) + 8);
                if (puVar18 == (undefined4 *)0x0) {
                  puVar18 = &DAT_14c9485f0;
                }
                FUN_144a7660c(puVar18,&local_b8,1);
                local_110 = (undefined4)uStack_b0;
                local_118 = local_b8;
                uVar8 = FUN_140f54c6c(param_1,&local_118);
                iVar26 = (int)plVar24[1];
              }
              if (lVar22 < iVar26 + -1) {
                puVar18 = *(undefined4 **)(*(longlong *)(*plVar24 + 8 + lVar22 * 8) + 8);
                if (puVar18 == (undefined4 *)0x0) {
                  puVar18 = &DAT_14c9485f0;
                }
                FUN_144a7660c(puVar18,&local_b8,1);
                local_120 = (undefined4)uStack_b0;
                local_128 = local_b8;
                uVar9 = FUN_140f54c6c(param_1,&local_128);
              }
              else {
                uVar9 = 0;
              }
              puVar18 = *(undefined4 **)(*(longlong *)(*plVar24 + lVar22 * 8) + 8);
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = &DAT_14c9485f0;
              }
              FUN_144a7660c(puVar18,&local_b8,1);
              local_130 = (undefined4)uStack_b0;
              local_138 = local_b8;
              lVar21 = FUN_140f54c6c(param_1,&local_138);
              if (lVar21 != 0) {
                *(undefined8 *)(lVar21 + 0x98) = uVar8;
                *(undefined8 *)(lVar21 + 0xa0) = uVar9;
              }
              lVar22 = lVar22 + 1;
              uVar30 = (ulonglong)(int)plVar24[1];
            } while (lVar22 < (longlong)uVar30);
          }
          plVar24 = plVar24 + 2;
        } while (plVar24 != plVar16);
        lVar22 = *(longlong *)(param_1 + 0xa0);
      }
      if ((longlong)*(int *)(lVar22 + 0x4b0) != 0) {
        plVar24 = *(longlong **)(lVar22 + 0x4a8);
        plVar16 = plVar24 + (longlong)*(int *)(lVar22 + 0x4b0) * 2;
        do {
          local_98 = (uint *)0x0;
          local_90 = 0;
          uStack_8c = 4;
          if (0 < (int)plVar24[1]) {
            lVar22 = 0;
            do {
              puVar18 = *(undefined4 **)(*(longlong *)(*plVar24 + lVar22 * 8) + 8);
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = &DAT_14c9485f0;
              }
              FUN_144a7660c(puVar18,&local_108,1);
              local_140 = (int)uStack_100;
              local_148 = local_108;
              lVar21 = FUN_140f54c6c(param_1,&local_148);
              uVar19 = local_90;
              if (lVar21 != 0) {
                lVar7 = (longlong)(int)local_90;
                local_90 = local_90 + 1;
                if (uStack_8c < local_90) {
                  FUN_1489181a8(&local_b8,uVar19);
                }
                puVar10 = local_98;
                if (local_98 == (uint *)0x0) {
                  puVar10 = (uint *)&local_b8;
                }
                *(longlong *)(puVar10 + lVar7 * 2) = lVar21;
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 < (int)plVar24[1]);
            lVar22 = (longlong)(int)local_90;
            local_1c8 = local_98;
            if (local_98 == (uint *)0x0) {
              local_1c8 = (uint *)&local_b8;
            }
            if (lVar22 != 0) {
              lVar21 = 0;
              do {
                local_150 = *(longlong *)((longlong)local_1c8 + lVar21);
                local_108 = (longlong *)0x0;
                uStack_100 = (longlong *)0x0;
                FUN_1457c9b90(&local_108,&local_b8);
                local_d8 = &local_150;
                FUN_1457c9ea0(&local_108,&local_d8);
                _Src = local_108;
                pplVar1 = (longlong **)(local_150 + 0xc0);
                if (pplVar1 != &local_108) {
                  iVar26 = (int)uStack_100;
                  lVar7 = (longlong)(int)uStack_100;
                  *(int *)(local_150 + 200) = (int)uStack_100;
                  if ((int)uStack_100 == 0 && *(int *)(local_150 + 0xcc) == 0) {
                    *(undefined4 *)(local_150 + 0xcc) = 0;
                  }
                  else {
                    FUN_140ce2904(pplVar1,(ulonglong)uStack_100 & 0xffffffff);
                    if (iVar26 != 0) {
                      memcpy(*pplVar1,_Src,lVar7 << 3);
                    }
                  }
                }
                if (local_108 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                lVar21 = lVar21 + 8;
              } while (lVar22 * 8 != lVar21);
            }
            if (local_98 != (uint *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar24 = plVar24 + 2;
        } while (plVar24 != plVar16);
      }
      uVar30 = 0;
      local_98 = (uint *)0x0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_1c8 = (uint *)(param_1 + 0x40);
      uVar19 = *(uint *)(param_1 + 0x58);
      plVar24 = (longlong *)(ulonglong)uVar19;
      if (uVar19 == 0) {
        uVar17 = 1;
        uVar27 = 0;
        iVar26 = 0;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar10 = local_1c8;
        }
        uVar27 = *puVar10;
        if (uVar27 == 0) {
          iVar26 = uVar19 + 0x1e;
          if (-1 < (int)(uVar19 - 1)) {
            iVar26 = uVar19 - 1;
          }
          uVar30 = 0;
          uVar17 = (ulonglong)(uint)(iVar26 >> 5);
          if (iVar26 >> 5 < 1) {
            uVar17 = uVar30;
          }
          iVar26 = 0;
          do {
            if (uVar17 == uVar30) goto LAB_140f43f9c;
            iVar26 = iVar26 + 0x20;
            uVar27 = puVar10[uVar30 + 1];
            uVar30 = uVar30 + 1;
          } while (uVar27 == 0);
        }
        else {
          uVar30 = 0;
          iVar26 = 0;
        }
        uVar17 = (ulonglong)(-uVar27 & uVar27);
        uVar2 = uVar17 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uVar27 = (iVar26 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if ((int)uVar19 <= (int)uVar27) {
          uVar27 = uVar19;
        }
      }
      if (uVar27 == uVar19) {
LAB_140f43f9c:
        local_d0 = local_a8;
        local_d8 = (longlong *)0x100000000;
        local_c8._0_4_ = 0xffffffff;
        local_c8._4_4_ = 0;
        local_c0 = 0;
        uVar19 = 0;
      }
      else {
        uVar19 = 0xffffffff;
        do {
          lVar22 = *(longlong *)(*local_1c0 + 0x10 + (longlong)(int)uVar27 * 0x20);
          lVar7 = FUN_1406b1df4(*(undefined8 *)(lVar22 + 0x40));
          lVar21 = *(longlong *)(lVar22 + 0x40);
          if (lVar7 != 0) {
            local_108 = (longlong *)0x0;
            uStack_100 = (longlong *)0x0;
            local_1b0 = plVar24;
            if ((longlong)*(int *)(lVar21 + 0x28) != 0) {
              local_1a8 = *(longlong **)(lVar21 + 0x20);
              local_1b8 = (longlong *)((longlong)*(int *)(lVar21 + 0x28) << 3);
              plVar24 = (longlong *)0x0;
              do {
                puVar18 = *(undefined4 **)
                           (*(longlong *)((longlong)local_1a8 + (longlong)plVar24) + 8);
                if (puVar18 == (undefined4 *)0x0) {
                  puVar18 = &DAT_14c9485f0;
                }
                FUN_144a7660c(puVar18,&local_d8,1);
                local_158 = local_d0._0_4_;
                local_160 = local_d8;
                lVar21 = FUN_140f54c6c(param_1,&local_160);
                if (lVar21 != 0) {
                  lVar7 = (longlong)(int)uStack_100;
                  uVar27 = (int)uStack_100 + 1;
                  uStack_100 = (longlong *)CONCAT44(uStack_100._4_4_,uVar27);
                  if (uStack_100._4_4_ < uVar27) {
                    local_1a0 = lVar7;
                    FUN_140f54fb6(&local_108,lVar7);
                    lVar7 = local_1a0;
                  }
                  local_108[lVar7] = lVar21;
                  *(longlong *)(lVar21 + 0xb8) = lVar22;
                }
                plVar24 = plVar24 + 1;
              } while (local_1b8 != plVar24);
            }
            pplVar1 = (longlong **)(lVar22 + 0xa8);
            if (pplVar1 != &local_108) {
              iVar23 = (int)uStack_100;
              lVar21 = (longlong)(int)uStack_100;
              local_1b8 = local_108;
              *(int *)(lVar22 + 0xb0) = (int)uStack_100;
              if ((int)uStack_100 == 0 && *(int *)(lVar22 + 0xb4) == 0) {
                *(undefined4 *)(lVar22 + 0xb4) = 0;
              }
              else {
                FUN_140ce2904(pplVar1,(ulonglong)uStack_100 & 0xffffffff);
                if (iVar23 != 0) {
                  memcpy(*pplVar1,local_1b8,lVar21 << 3);
                }
              }
            }
            if (local_108 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            lVar21 = *(longlong *)(lVar22 + 0x40);
            plVar24 = local_1b0;
          }
          if (*(int *)(lVar21 + 0x3b0) != 0) {
            local_168 = *(undefined8 *)(lVar21 + 0x3b4);
            local_1b0 = plVar24;
            local_16c = *(int *)(lVar21 + 0x3b0);
            local_108 = (longlong *)FUN_140f54c6c(param_1,&local_16c);
            plVar24 = local_1b0;
            if (local_108 != (longlong *)0x0) {
              uVar27 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_108 >> 4)) * -0x7a143595;
              uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
              plVar24 = (longlong *)FUN_1457c99ea(&local_b8,uVar27 >> 0x10 ^ uVar27,&local_108);
              iVar23 = (int)plVar24[1];
              *(uint *)(plVar24 + 1) = iVar23 + 1U;
              if (*(uint *)((longlong)plVar24 + 0xc) < iVar23 + 1U) {
                FUN_140f54fb6(plVar24,iVar23);
              }
              *(longlong *)(*plVar24 + (longlong)iVar23 * 8) = lVar22;
              FUN_1457c996a(lVar22,local_108);
              plVar24 = local_1b0;
            }
          }
          uVar19 = uVar19 & ~(uint)uVar17;
          puVar10 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar10 = local_1c8;
          }
          uVar25 = *(uint *)(param_1 + 0x58);
          iVar23 = (int)uVar30;
          lVar22 = (longlong)iVar23;
          uVar27 = puVar10[lVar22] & uVar19;
          if (uVar27 == 0) {
            iVar12 = uVar25 + 0x1e;
            if (-1 < (int)(uVar25 - 1)) {
              iVar12 = uVar25 - 1;
            }
            iVar12 = iVar12 >> 5;
            iVar26 = iVar26 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar23) {
              iVar13 = iVar23;
            }
            if (iVar23 < iVar12) {
              lVar21 = 0;
              do {
                uVar27 = puVar10[lVar22 + lVar21 + 1];
                if (uVar27 != 0) {
                  uVar30 = (ulonglong)(iVar23 + (int)lVar21 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_140f4385d;
                }
                iVar26 = iVar26 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar13 - lVar22 != lVar21);
              uVar19 = 0xffffffff;
              iVar23 = iVar13;
            }
            uVar30 = (ulonglong)(iVar23 + 1);
            uVar27 = uVar25;
          }
          else {
LAB_140f4385d:
            uVar17 = (ulonglong)(-uVar27 & uVar27);
            uVar2 = uVar17 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            uVar27 = (iVar26 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if ((int)uVar25 <= (int)uVar27) {
              uVar27 = uVar25;
            }
          }
        } while (uVar27 != (uint)plVar24);
        local_d0 = local_a8;
        local_d8 = (longlong *)0x100000000;
        local_c8._0_4_ = 0xffffffff;
        local_c8._4_4_ = 0;
        local_c0 = 0;
        uVar19 = 0;
        if (local_90 != 0) {
          FUN_1449c0562(&local_d8);
          uVar19 = local_90;
        }
      }
      local_f0._0_4_ = (uint)local_c8;
      local_f0._4_4_ = local_c8._4_4_;
      local_e8 = local_c0;
      local_e4 = local_bc;
      uStack_100 = local_d8;
      local_f8 = local_d0;
      local_108 = &local_b8;
      if ((local_c8._4_4_ != uVar19) || (local_d0 != local_a8)) {
        do {
          do {
            FUN_1457c9912(*(longlong *)(*local_108 + (longlong)local_f0._4_4_ * 0x20) + 0xd8);
            local_f0._0_4_ = (uint)local_f0 & ~uStack_100._4_4_;
            FUN_1449c0562(&uStack_100);
          } while (local_f0._4_4_ != uVar19);
        } while ((local_f8 != local_a8) || (local_108 != &local_b8));
      }
      iVar26 = *(int *)(param_1 + 0x58);
      if (iVar26 == 0) {
        uVar17 = 1;
        uVar30 = 0;
        iVar23 = 0;
        iVar12 = 0;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar10 = local_1c8;
        }
        uVar19 = *puVar10;
        if (uVar19 == 0) {
          iVar23 = iVar26 + 0x1e;
          if (-1 < iVar26 + -1) {
            iVar23 = iVar26 + -1;
          }
          uVar30 = 0;
          uVar17 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar17 = uVar30;
          }
          iVar12 = 0;
          do {
            if (uVar17 == uVar30) goto LAB_140f43b5c;
            iVar12 = iVar12 + 0x20;
            uVar19 = puVar10[uVar30 + 1];
            uVar30 = uVar30 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar30 = 0;
          iVar12 = 0;
        }
        uVar17 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar17 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar23 = (iVar12 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar26 <= iVar23) {
          iVar23 = iVar26;
        }
      }
      if (iVar23 != iVar26) {
        uVar19 = 0xffffffff;
        puVar10 = local_1c8;
        do {
          lVar22 = *(longlong *)(*local_1c0 + 0x10 + (longlong)iVar23 * 0x20);
          if (((*(longlong *)(lVar22 + 0xb8) != 0) &&
              (lVar21 = FUN_1406b1df4(*(undefined8 *)(*(longlong *)(lVar22 + 0xb8) + 0x40)),
              puVar10 = local_1c8, lVar21 != 0)) && (*(char *)(lVar21 + 0x7f) == '\x01')) {
            local_108 = (longlong *)0x0;
            uStack_100 = (longlong *)0x0;
            FUN_1457c9f7e(lVar22,&local_108,0);
            if ((longlong)(int)uStack_100 != 0) {
              local_1b0 = local_108;
              local_1b8 = (longlong *)((longlong)(int)uStack_100 << 3);
              plVar24 = (longlong *)0x0;
              do {
                local_1a8 = plVar24;
                FUN_1457c9aaa(*(longlong *)((longlong)local_1b0 + (longlong)plVar24) + 0x168,
                              &local_d8,lVar22,&LAB_148910a50);
                plVar24 = local_1a8 + 1;
              } while (local_1b8 != plVar24);
            }
            puVar10 = local_1c8;
            if (local_108 != (longlong *)0x0) {
              FUN_1400020a8();
              puVar10 = local_1c8;
            }
          }
          lVar21 = *(longlong *)(*(longlong *)(lVar22 + 0x40) + 0x338);
          if (((lVar21 != 0) && (*(char *)(lVar21 + 8) == '\x01')) &&
             (*(char *)(lVar21 + 0x10) == '\x01')) {
            FUN_143df13ba(lVar22);
            puVar10 = local_1c8;
          }
          uVar19 = uVar19 & ~(uint)uVar17;
          puVar6 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar6 = puVar10;
          }
          iVar13 = *(int *)(param_1 + 0x58);
          iVar23 = (int)uVar30;
          lVar22 = (longlong)iVar23;
          uVar27 = puVar6[lVar22] & uVar19;
          if (uVar27 == 0) {
            iVar14 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar14 = iVar13 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar23) {
              iVar15 = iVar23;
            }
            if (iVar23 < iVar14) {
              lVar21 = 0;
              do {
                uVar27 = puVar6[lVar22 + lVar21 + 1];
                if (uVar27 != 0) {
                  uVar30 = (ulonglong)(iVar23 + (int)lVar21 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_140f43b2d;
                }
                iVar12 = iVar12 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar15 - lVar22 != lVar21);
              uVar19 = 0xffffffff;
              iVar23 = iVar15;
            }
            uVar30 = (ulonglong)(iVar23 + 1);
            puVar10 = local_1c8;
            iVar23 = iVar13;
          }
          else {
LAB_140f43b2d:
            uVar17 = (ulonglong)(-uVar27 & uVar27);
            uVar2 = uVar17 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar23 = (iVar12 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar23) {
              iVar23 = iVar13;
            }
          }
        } while (iVar23 != iVar26);
      }
LAB_140f43b5c:
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      local_d8 = (longlong *)&DAT_100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      local_d0 = local_a8;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
      }
      uStack_100 = local_d8;
      local_f8 = local_d0;
      local_f0 = local_c8;
      uVar8 = local_f0;
      local_e8 = local_c0;
      local_e4 = local_bc;
      local_f0._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      local_108 = &local_b8;
      if (local_f0._4_4_ < *(int *)(local_d0 + 0x18)) {
        iVar26 = local_f0._4_4_;
        local_f0 = uVar8;
        do {
          if (*(longlong *)(*local_108 + 8 + (longlong)iVar26 * 0x20) != 0) {
            FUN_1400020a8();
          }
          local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~uStack_100._4_4_);
          FUN_1449c0562(&uStack_100);
          iVar26 = local_f0._4_4_;
          uVar8 = local_f0;
        } while (local_f0._4_4_ < *(int *)(local_f8 + 0x18));
      }
      local_f0 = uVar8;
      uVar30 = uStack_b0 >> 0x20;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      if ((int)uVar30 != 0) {
        FUN_1446f4a44(&local_b8,0);
      }
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < uStack_8c) {
        uStack_8c = 0x80;
        FUN_1446efbd8(local_a8,0);
      }
      if (local_98 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f446c0 FUN_140f446c0 body=618 status=ok
// SIG undefined FUN_140f446c0(void)

void FUN_140f446c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
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
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0);
    }
LAB_140f44707:
    uVar4 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar9 != uVar4);
  }
  else {
    if (uVar9 == 0) goto LAB_140f447f4;
    FUN_1446efa72(plVar7,0);
    if (0 < (int)uVar9) goto LAB_140f44707;
  }
  local_50 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  local_54 = 1;
  if (iVar5 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = local_50;
    }
    uVar9 = *puVar11;
    if (uVar9 == 0) {
      iVar10 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar10 = iVar5 + -1;
      }
      uVar8 = 0;
      uVar6 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar6 = uVar8;
      }
      local_58 = (int)uVar6 + 1;
      local_40 = (int)uVar6 * 0x20 + 0x20;
      iVar10 = 0;
      do {
        local_44 = iVar5;
        if (uVar6 == uVar8) goto LAB_140f447c8;
        iVar10 = iVar10 + 0x20;
        uVar9 = puVar11[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar9 == 0);
      local_58 = (int)uVar8;
      local_40 = iVar10;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar9 & uVar9;
    uVar6 = (ulonglong)local_54 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar5 <= local_44) {
      local_44 = iVar5;
    }
  }
LAB_140f447c8:
  local_48 = 0xffffffff;
  local_60 = param_1;
  if (local_44 < iVar5) {
    do {
      iVar10 = local_44;
      piVar2 = (int *)(*local_60 + (longlong)local_44 * 0x20);
      iVar5 = *(int *)(*local_60 + 8 + (longlong)local_44 * 0x20);
      if (iVar5 == 0) {
        iVar5 = *piVar2;
      }
      else {
        iVar5 = FUN_144a78877(*piVar2,iVar5);
      }
      uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
      iVar5 = (int)uVar6;
      piVar2[7] = iVar5;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      piVar2[6] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
LAB_140f447f4:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4492c FUN_140f4492c body=486 status=ok
// SIG undefined FUN_140f4492c(void)

void FUN_140f4492c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 140f44b14 FUN_140f44b14 body=115 status=ok
// SIG undefined FUN_140f44b14(void)

void FUN_140f44b14(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x130), lVar2 != 0)) {
    lVar3 = FUN_14016d2a8();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      *(longlong *)(param_1 + 0xa30) = lVar1;
      FUN_140f44b88(param_1,param_2);
      return;
    }
  }
  *(undefined8 *)(param_1 + 0xa30) = 0;
  return;
}



// FUNCTION 140f44b88 FUN_140f44b88 body=226 status=ok
// SIG undefined FUN_140f44b88(void)

void FUN_140f44b88(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (lVar5 = *(longlong *)(lVar1 + 0x130), lVar5 != 0)) {
    lVar3 = FUN_140890cca();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      param_1[0x1b] = lVar1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
      FUN_140320438(param_1 + 3,param_2);
      *(undefined1 *)((longlong)param_1 + 0x49) = 0;
      *(undefined1 *)((longlong)param_1 + 0x93) = 0;
      (**(code **)(*param_1 + 0x128))(param_1,param_1 + 0x1c);
      plVar4 = (longlong *)param_1[0x1e];
      if ((longlong *)param_1[0x1e] == (longlong *)0x0) {
        plVar4 = param_1 + 0x1c;
      }
      lVar1 = param_1[0x1f];
      if ((longlong)(int)lVar1 == 0) {
        return;
      }
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)((longlong)plVar4 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,param_1[0x1b]);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar1 * 8 != lVar5);
      return;
    }
  }
  param_1[0x1b] = 0;
  return;
}



// FUNCTION 140f44c6a FUN_140f44c6a body=138 status=ok
// SIG undefined FUN_140f44c6a(void)

void FUN_140f44c6a(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x130))();
  iVar1 = *(int *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x1c) < iVar1 + 1U) {
    FUN_1457ca070(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar3 = param_2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
  iVar1 = *(int *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x1c) < iVar1 + 1U) {
    FUN_1457ca070(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar3 = param_2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 140f44cf4 FUN_140f44cf4 body=497 status=ok
// SIG undefined FUN_140f44cf4(void)

void FUN_140f44cf4(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != '\0') {
    plVar3 = (longlong *)FUN_140389788();
    lVar6 = plVar3[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar6 = plVar3[0x22];
      if (lVar6 == 0) goto LAB_140f44d1e;
    }
    FUN_1457ca196(param_1 + 0x1b0,lVar6 + 0x28);
    FUN_1457ca1f0(param_1 + 0x1d0,lVar6 + 0xa0);
    FUN_1457ca24e(param_1 + 0x1c0,lVar6 + 0x90);
    if ((longlong)*(int *)(lVar6 + 0xb8) != 0) {
      puVar5 = *(undefined8 **)(lVar6 + 0xb0);
      lVar6 = (longlong)*(int *)(lVar6 + 0xb8) << 4;
      do {
        puVar4 = (undefined8 *)FUN_147d94558(param_1 + 0x1c0);
        *puVar4 = *puVar5;
        FUN_147d94598(puVar5,&local_70);
        local_68 = local_70;
        local_60 = 0;
        plStack_58 = (longlong *)0x0;
        FUN_1413a4742(puVar4 + 2,&local_68);
        plVar3 = plStack_58;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_58)(plStack_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        puVar5 = puVar5 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
  }
LAB_140f44d1e:
  if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
    FUN_147da250a(param_1 + 0x240);
    FUN_147da264e(param_1 + 0x240);
  }
  if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
    FUN_147da276a(param_1 + 0x290);
    FUN_147da28ae(param_1 + 0x290);
  }
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
    FUN_140f44ee6(param_1 + 0x1f0);
    FUN_140f45030(param_1 + 0x1f0);
  }
  *(byte *)(param_1 + 0x334) = *(byte *)(param_1 + 0x334) & 0xfe;
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f44ee6 FUN_140f44ee6 body=329 status=ok
// SIG undefined FUN_140f44ee6(void)

void FUN_140f44ee6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 140f45030 FUN_140f45030 body=468 status=ok
// SIG undefined FUN_140f45030(void)

void FUN_140f45030(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_140f4517f;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar6 * 0x30);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_140f4517f;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_140f4517f:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140f45204 FUN_140f45204 body=40 status=ok
// SIG undefined FUN_140f45204(void)

undefined8 FUN_140f45204(undefined8 param_1,int param_2)

{
  FUN_1457ca320();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f4522c FUN_140f4522c body=137 status=ok
// SIG undefined FUN_140f4522c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f4522c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x000140f452a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140f452b6 FUN_140f452b6 body=90 status=ok
// SIG undefined FUN_140f452b6(void)

void FUN_140f452b6(longlong param_1,undefined8 param_2)

{
  FUN_14011750a(param_1 + 0x10);
  FUN_140b788e0(param_2,param_1 + 0x30);
  FUN_140f45310(param_2,param_1 + 0x1c);
  FUN_14011750a(param_1 + 0x24,param_2);
  FUN_140e34c00(param_2,param_1 + 0x40);
  FUN_140f453a4(param_2,param_1 + 0x50);
  return;
}



// FUNCTION 140f45310 FUN_140f45310 body=148 status=ok
// SIG undefined FUN_140f45310(void)

longlong * FUN_140f45310(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 4);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140f453a4 FUN_140f453a4 body=401 status=ok
// SIG undefined FUN_140f453a4(void)

longlong * FUN_140f453a4(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
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
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1446dda88(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14011750a(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1446dda88(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1457ca3da(param_2);
        FUN_14011750a(uVar3,param_1);
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



// FUNCTION 140f45536 FUN_140f45536 body=40 status=ok
// SIG undefined FUN_140f45536(void)

undefined8 FUN_140f45536(undefined8 param_1,int param_2)

{
  FUN_140f4555e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f4555e FUN_140f4555e body=1399 status=ok
// SIG undefined FUN_140f4555e(void)

void FUN_140f4555e(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0db840;
  plVar1 = param_1 + 0x82;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x86) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x85)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x85)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x7b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x7f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x7e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x7e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x73;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x77) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x76)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x76)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x6c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x70) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x6f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x6f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 100;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x68) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x67)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x67)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x5d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x61) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x60)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x60)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x51;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x55) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x54)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x54)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x49;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x4d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x4c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x4c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x42;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x46) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x45)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x45)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x3b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x34;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x37)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x37)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
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



// FUNCTION 140f45ba2 FUN_140f45ba2 body=59 status=ok
// SIG undefined FUN_140f45ba2(void)

undefined8 * FUN_140f45ba2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b64f4a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f45bde thunk_FUN_140f45be4 body=5 status=ok
// SIG undefined thunk_FUN_140f45be4(void)

void thunk_FUN_140f45be4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [8];
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  byte bStack_38;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      puStack_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_1446efa72(&puStack_88,0,3,0x10);
      puVar5 = puStack_88;
      uStack_80 = 3;
      *puStack_88 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      puStack_88[2] = lVar6;
      *puStack_88 = &PTR_FUN_14b9a6890;
      puStack_88[3] = 0;
      FUN_14485c47a(puStack_88 + 3,param_1);
      puVar5[4] = param_1;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_14487d8d8(&uStack_78,&puStack_88);
      bStack_38 = 1;
      FUN_14016fdb0(uVar2,auStack_90,&uStack_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[bStack_38])(&uStack_78);
      FUN_1449db362(&puStack_88);
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((uStack_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f45be4 FUN_140f45be4 body=417 status=ok
// SIG undefined FUN_140f45be4(void)

void FUN_140f45be4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar5 = local_88;
      local_80 = 3;
      *local_88 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_88[2] = lVar6;
      *local_88 = &PTR_FUN_14b9a6890;
      local_88[3] = 0;
      FUN_14485c47a(local_88 + 3,param_1);
      puVar5[4] = param_1;
      local_78 = 0;
      local_70 = 0;
      FUN_14487d8d8(&local_78,&local_88);
      local_38 = 1;
      FUN_14016fdb0(uVar2,local_90,&local_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
      FUN_1449db362(&local_88);
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f45d9c FUN_140f45d9c body=137 status=ok
// SIG undefined FUN_140f45d9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f45d9c(undefined8 *param_1,int param_2)

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
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140f45e26 FUN_140f45e26 body=149 status=ok
// SIG undefined FUN_140f45e26(void)

void FUN_140f45e26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  FUN_140f45ebc(puVar1,param_7,param_8);
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e12070;
  puVar1[10] = param_5;
  puVar1[0xb] = param_6;
  *(undefined4 *)(puVar1 + 0xc) = param_4;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000140f45eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 140f45ebc FUN_140f45ebc body=97 status=ok
// SIG undefined FUN_140f45ebc(void)

undefined8 * FUN_140f45ebc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_LAB_149e12290;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_14020fad6(param_1 + 1);
  if ((*(uint *)(param_1 + 3) & 0x1040) == 0x40) {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 0x100;
  }
  return param_1;
}



// FUNCTION 140f45f1e FUN_140f45f1e body=1384 status=ok
// SIG undefined FUN_140f45f1e(void)

longlong * FUN_140f45f1e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  longlong *plVar2;
  char cVar3;
  byte extraout_var;
  longlong **pplVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_b8 [40];
  LPCRITICAL_SECTION local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_5c [4];
  longlong **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = (LPCRITICAL_SECTION)(param_1 + 0x178);
  EnterCriticalSection(local_90);
  plVar6 = (longlong *)(param_1 + 8);
  FUN_140056680(&local_58);
  uVar5 = 0;
  iVar11 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    pplVar4 = local_58;
    if ((int)local_50 == 0) {
      pplVar4 = (longlong **)&DAT_149dfb77a;
    }
    lVar15 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)((longlong)pplVar4 + lVar15 * 2);
      uVar13 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
      uVar16 = (uint)(uVar5 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar13) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar16 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar16 & 0xff ^ uVar13 >> 8 & 0xff) * 4));
      lVar15 = lVar15 + 1;
    } while (iVar11 != (int)lVar15);
  }
  iVar11 = FUN_14483203a(plVar6,uVar5,&local_58);
  if ((iVar11 == -1) || (lVar15 = (longlong)iVar11 * 0x20 + *plVar6, lVar15 == 0)) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = *(longlong **)(lVar15 + 0x10);
  }
  if (local_58 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
  if ((uVar5 & 0x20) != 0) {
    (**(code **)(*param_3 + 0x80))(param_3);
  }
  local_88 = plVar6;
  if (plVar7 == (longlong *)0x0) {
    FUN_140056680(&local_78,param_2);
    FUN_14125a740(plVar6);
    pplVar4 = local_50;
    *local_50 = local_78;
    uVar5 = 0;
    local_78 = (longlong *)0x0;
    *(undefined4 *)(local_50 + 1) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_50 + 0xc) = local_70._4_4_;
    local_70 = 0;
    local_50[2] = param_3;
    *(undefined4 *)(local_50 + 3) = 0xffffffff;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,local_58._0_4_);
    iVar11 = *(int *)(local_50 + 1);
    iVar14 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar14 = 0;
    }
    if (0 < iVar14) {
      if (iVar11 == 0) {
        plVar6 = (longlong *)&DAT_149dfb77a;
      }
      else {
        plVar6 = *local_50;
      }
      lVar15 = 0;
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)((longlong)plVar6 + lVar15 * 2);
        uVar13 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
        uVar16 = (uint)(uVar5 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar13) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar16 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar16 & 0xff ^ uVar13 >> 8 & 0xff) * 4));
        lVar15 = lVar15 + 1;
      } while (iVar14 != (int)lVar15);
    }
    cVar3 = FUN_14125a6ce(local_88,uVar5,local_50,&local_68);
    lpCriticalSection = local_90;
    if (cVar3 == '\0') {
      uVar13 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
      if (uVar13 < 4) {
        iVar11 = 1;
      }
      else {
        uVar10 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
        lVar15 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((int)uVar13 < 1) || (iVar11 <= *(int *)(param_1 + 0x50))) {
        uVar13 = *(int *)(param_1 + 0x50) - 1U & (uint)uVar5;
        *(uint *)((longlong)pplVar4 + 0x1c) = uVar13;
        lVar15 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar15 = param_1 + 0x40;
        }
        *(undefined4 *)(pplVar4 + 3) =
             *(undefined4 *)
              (lVar15 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar13) * 4);
        lVar15 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar15 = param_1 + 0x40;
        }
        *(undefined4 *)
         (lVar15 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar13) * 4) =
             local_68._0_4_;
      }
      else {
        *(int *)(param_1 + 0x50) = iVar11;
        FUN_141703288(local_88);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_80 = param_2;
    lVar15 = (**(code **)(*plVar7 + 0x38))(plVar7);
    if (lVar15 != 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar6 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x80))(plVar7);
    iVar11 = 3 - (uint)(plVar7 == (longlong *)0x0);
    if (plVar6 == (longlong *)0x0) {
      iVar11 = 1;
    }
    plVar8 = (longlong *)(**(code **)(*param_3 + 0x38))(param_3);
    param_3 = (longlong *)(**(code **)(*param_3 + 0x80))(param_3);
    uVar9 = local_80;
    iVar14 = 3 - (uint)(param_3 == (longlong *)0x0);
    if (plVar8 == (longlong *)0x0) {
      iVar14 = 1;
    }
    if (iVar11 != iVar14) {
      FUN_140033559(".\\Runtime/Core/Private/HAL/ConsoleManager.cpp",0xc0f,
                    L"Console object named \'%s\' can\'t be replaced with the new one of different type!"
                    ,local_80);
    }
    plVar2 = local_88;
    if (plVar6 == (longlong *)0x0 || plVar8 == (longlong *)0x0) {
      if (plVar7 == (longlong *)0x0) {
        param_3 = (longlong *)0x0;
        lpCriticalSection = local_90;
      }
      else {
        local_68 = param_3;
        FUN_140056680(&local_78,uVar9);
        local_58 = &local_78;
        local_50 = &local_68;
        FUN_14125a50e(plVar2,local_5c);
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(*plVar7 + 0x90))(plVar7);
        lpCriticalSection = local_90;
      }
    }
    else {
      uVar13 = (**(code **)(*plVar6 + 0x18))(plVar6);
      uVar16 = (**(code **)(*plVar8 + 0x18))(plVar8);
      if ((uVar13 & 0x10) == 0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,uVar16);
        uVar9 = (**(code **)(*plVar8 + 8))(plVar8);
        (**(code **)(*plVar6 + 0x10))(plVar6,uVar9);
        (**(code **)(*plVar8 + 0x90))(plVar8);
        param_3 = plVar6;
        lpCriticalSection = local_90;
      }
      else {
        if ((uVar16 >> 0x18 & 1) == 0) {
          bVar12 = 0;
        }
        else {
          (**(code **)(*plVar6 + 0x18))(plVar6);
          bVar12 = extraout_var & 1;
        }
        uVar13 = (**(code **)(*plVar8 + 0x18))(plVar8);
        if ((bVar12 == 0) && ((uVar13 & 1) == 0)) {
          uVar13 = (**(code **)(*plVar6 + 0x18))(plVar6);
          (**(code **)(*plVar6 + 0xc0))(plVar6,&local_58);
          pplVar4 = local_58;
          if ((int)local_50 == 0) {
            pplVar4 = (longlong **)&DAT_149dfb77a;
          }
          (**(code **)(*plVar8 + 0x98))(plVar8,pplVar4,uVar13 & 0xff000000,0);
          if (local_58 != (longlong **)0x0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*plVar6 + 0x90))(plVar6);
        local_68 = plVar8;
        FUN_140056680(&local_78,uVar9);
        local_58 = &local_78;
        local_50 = &local_68;
        FUN_14125a50e(plVar2,local_5c);
        param_3 = plVar8;
        lpCriticalSection = local_90;
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
          lpCriticalSection = local_90;
        }
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 140f46488 FUN_140f46488 body=115 status=ok
// SIG undefined FUN_140f46488(void)

void FUN_140f46488(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_20 = *param_3;
  FUN_140f464fc(lVar1 + 0x38);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f464fc FUN_140f464fc body=118 status=ok
// SIG undefined FUN_140f464fc(void)

int FUN_140f464fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_140f46572();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_140f465f6(param_1,iVar3);
    }
    lVar1 = *param_1;
    lVar2 = *param_2;
    *(longlong *)(lVar1 + (longlong)iVar3 * 0x10) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(lVar1 + (longlong)iVar3 * 0x10 + 8) = param_2[1];
  }
  return iVar3;
}



// FUNCTION 140f46572 FUN_140f46572 body=132 status=ok
// SIG undefined FUN_140f46572(void)

int FUN_140f46572(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    iVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if ((*(longlong *)(lVar1 + lVar6) == lVar2) &&
         (*(longlong *)(lVar1 + 8 + lVar6) == param_2[1])) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return -1;
}



// FUNCTION 140f465f6 FUN_140f465f6 body=269 status=ok
// SIG undefined FUN_140f465f6(void)

void FUN_140f465f6(longlong param_1,int param_2)

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



// FUNCTION 140f46704 FUN_140f46704 body=40 status=ok
// SIG undefined FUN_140f46704(void)

undefined8 FUN_140f46704(undefined8 param_1,int param_2)

{
  FUN_140f4672c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f4672c FUN_140f4672c body=389 status=ok
// SIG undefined FUN_140f4672c(void)

void FUN_140f4672c(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac47cd0;
  plVar1 = param_1 + 0x1f;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x23) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x22)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x22)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1b)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
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



// FUNCTION 140f468b2 FUN_140f468b2 body=168 status=ok
// SIG undefined FUN_140f468b2(void)

void FUN_140f468b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) != 0) {
        FUN_140f4695a();
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar6);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
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
  iVar3 = *(int *)(param_1 + 0x5c);
  FUN_14135d683(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1465559b8(param_1 + 0x50,0);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 140f4695a FUN_140f4695a body=1232 status=ok
// SIG undefined FUN_140f4695a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f4695a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined4 uVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar26 [16];
  undefined1 auVar20 [16];
  
  lVar4 = *param_1;
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
  }
  auVar7 = _DAT_149931e80;
  if ((longlong)(int)param_1[0x1a] != 0) {
    plVar15 = (longlong *)param_1[0x19];
    plVar6 = plVar15 + (int)param_1[0x1a];
    auVar25 = pmovsxbq(unaff_XMM7,0x302);
    auVar26 = pmovsxbq(unaff_XMM8,0x100);
    do {
      lVar19 = *plVar15;
      if (lVar19 != 0) {
        plVar13 = *(longlong **)(lVar19 + 0x80);
        if (plVar13 == (longlong *)0x0) {
LAB_140f46cf0:
          plVar13 = (longlong *)0x0;
        }
        else {
          iVar9 = (int)plVar13[1];
          do {
            if (iVar9 == 0) goto LAB_140f46cf0;
            LOCK();
            iVar8 = (int)plVar13[1];
            bVar16 = iVar9 == iVar8;
            if (bVar16) {
              *(int *)(plVar13 + 1) = iVar9 + 1;
              iVar8 = iVar9;
            }
            iVar9 = iVar8;
            UNLOCK();
          } while (!bVar16);
        }
        lVar14 = *(longlong *)(lVar19 + 0x78);
        bVar16 = true;
        if (plVar5 != (longlong *)0x0) {
          iVar9 = (int)plVar5[1];
          do {
            if (iVar9 == 0) goto LAB_140f46a47;
            LOCK();
            iVar8 = (int)plVar5[1];
            bVar17 = iVar9 == iVar8;
            if (bVar17) {
              *(int *)(plVar5 + 1) = iVar9 + 1;
              iVar8 = iVar9;
            }
            iVar9 = iVar8;
            UNLOCK();
          } while (!bVar17);
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
            bVar16 = false;
          }
          else {
            bVar16 = false;
          }
        }
LAB_140f46a47:
        if (plVar13 == (longlong *)0x0) {
          lVar14 = 0;
        }
        else {
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        lVar10 = lVar4;
        if (bVar16) {
          lVar10 = 0;
        }
        if (lVar14 == lVar10) {
          plVar13 = *(longlong **)(lVar19 + 0x80);
          *(undefined8 *)(lVar19 + 0x78) = 0;
          *(undefined8 *)(lVar19 + 0x80) = 0;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))();
            }
          }
          if ((longlong)*(int *)(lVar19 + 0x30) != 0) {
            uVar3 = (longlong)*(int *)(lVar19 + 0x30) * 0x24 - 0x24;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar3;
            uVar18 = SUB164(auVar24 * ZEXT816(0xe38e38e38e38e38f),8);
            uVar22 = (undefined4)(uVar3 / 0x120000000);
            auVar20._0_8_ = CONCAT44(uVar22,uVar18);
            auVar20._8_4_ = uVar18;
            auVar20._12_4_ = uVar22;
            auVar21._0_8_ = auVar20._0_8_ >> 5;
            auVar21._8_8_ = auVar20._8_8_ >> 5;
            puVar12 = (undefined4 *)(*(longlong *)(lVar19 + 0x28) + 0x8c);
            uVar11 = 0;
            do {
              lVar19 = SUB168(auVar21 | auVar7,0);
              lVar14 = SUB168(auVar21 | auVar7,8);
              if ((bool)(~(lVar19 < (longlong)(uVar11 ^ auVar7._0_8_)) & 1)) {
                puVar12[-0x1b] = 0xffffffff;
              }
              auVar23._8_4_ = (int)uVar11;
              auVar23._0_8_ = uVar11;
              auVar23._12_4_ = (int)(uVar11 >> 0x20);
              if ((longlong)((auVar23._8_8_ | auVar26._8_8_) ^ auVar7._8_8_) <= lVar14) {
                puVar12[-0x12] = 0xffffffff;
              }
              auVar24 = (auVar23 | auVar25) ^ auVar7;
              if (auVar24._0_8_ <= lVar19) {
                puVar12[-9] = 0xffffffff;
              }
              if (auVar24._8_8_ <= lVar14) {
                *puVar12 = 0xffffffff;
              }
              uVar11 = uVar11 + 4;
              puVar12 = puVar12 + 0x24;
            } while ((uVar3 / 0x24 + 4 & 0xfffffffffffffffc) != uVar11);
          }
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar6);
  }
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  param_1[0x10] = 0;
  iVar9 = *(int *)((longlong)param_1 + 0x94);
  FUN_140f46e87(param_1[0x11],(int)param_1[0x12]);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0x94) != 0)) {
    FUN_1488dcf78(param_1 + 0x11);
  }
  param_1[0x13] = 0;
  plVar6 = (longlong *)param_1[0x14];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x14] = 0;
    LOCK();
    plVar15 = plVar6 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  iVar9 = *(int *)((longlong)param_1 + 0xb4);
  FUN_140f46ebd(param_1[0x15],(int)param_1[0x16]);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0xb4) != 0)) {
    FUN_141897d74(param_1 + 0x15,0);
  }
  param_1[0x17] = 0;
  plVar6 = (longlong *)param_1[0x18];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x18] = 0;
    LOCK();
    plVar15 = plVar6 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (*(int *)((longlong)param_1 + 0xd4) < 0) {
    FUN_1488dcf48(param_1 + 0x19);
  }
  iVar9 = *(int *)((longlong)param_1 + 0xf4);
  FUN_140b343a6(param_1[0x1d],(int)param_1[0x1e]);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0xf4) != 0)) {
    FUN_1488dcfa8(param_1 + 0x1d);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f46e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140f46e2a FUN_140f46e2a body=9 status=ok
// SIG undefined FUN_140f46e2a(void)

void FUN_140f46e2a(longlong param_1)

{
  FUN_140f46e34(param_1 + 0x10);
  return;
}



// FUNCTION 140f46e34 FUN_140f46e34 body=83 status=ok
// SIG undefined FUN_140f46e34(void)

void FUN_140f46e34(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_140f46e34(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f46e87 FUN_140f46e87 body=54 status=ok
// SIG undefined FUN_140f46e87(void)

void FUN_140f46e87(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f46ebd FUN_140f46ebd body=65 status=ok
// SIG undefined FUN_140f46ebd(void)

void FUN_140f46ebd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x68);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f46efe FUN_140f46efe body=56 status=ok
// SIG undefined FUN_140f46efe(void)

void FUN_140f46efe(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x30);
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
      plVar3 = plVar3 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f46f44 FUN_140f46f44 body=31 status=ok
// SIG undefined FUN_140f46f44(void)

undefined8 FUN_140f46f44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f46f64 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 140f46f6a FUN_140f46f6a body=315 status=ok
// SIG undefined FUN_140f46f6a(void)

char * FUN_140f46f6a(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x180))();
  iVar4 = (**(code **)*plVar5)(plVar5);
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_58,iVar6);
      (**(code **)(*local_58 + 0x50))(local_58,param_2,param_3,param_4);
      if (*param_2 != '\0') {
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_50 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        goto LAB_140f47033;
      }
      FUN_14493db24(param_2);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      iVar6 = iVar6 + 1;
    } while (iVar4 != iVar6);
  }
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
LAB_140f47033:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f470a6 FUN_140f470a6 body=85 status=ok
// SIG undefined FUN_140f470a6(void)

undefined1 * FUN_140f470a6(longlong param_1,undefined1 *param_2)

{
  if ((*(byte *)(param_1 + 0x39) & 8) == 0) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_140f470fc(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 140f470fc FUN_140f470fc body=270 status=ok
// SIG undefined FUN_140f470fc(void)

undefined1 * FUN_140f470fc(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f4720e(&DAT_14cb90e48);
  local_38 = *(undefined8 *)(param_4 + 0x20);
  local_30 = *(undefined8 *)(param_4 + 0x28);
  local_28 = *(longlong **)(param_4 + 0x30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  bVar6 = *(byte *)(param_1 + 0x2c0);
  if ((bVar6 & 2) == 0) {
LAB_140f471d1:
    if ((bVar6 & 1) != 0) {
      cVar4 = FUN_140230656(&local_38);
      if (cVar4 == '\0') goto LAB_140f47166;
    }
    uVar5 = 1;
  }
  else {
    cVar4 = FUN_140230656(&local_38);
    if (cVar4 == '\0') {
      bVar6 = *(byte *)(param_1 + 0x2c0);
      goto LAB_140f471d1;
    }
LAB_140f47166:
    uVar5 = 0;
  }
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  plVar3 = local_28;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4720e FUN_140f4720e body=648 status=ok
// SIG undefined FUN_140f4720e(void)

void FUN_140f4720e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f4759e();
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar7 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[10];
    }
    iVar8 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)param_1[0xb] - 1U & *(uint *)(param_2 + 0xc)) * 4);
    if (iVar8 != -1) {
      do {
        lVar10 = param_1[2] + (longlong)iVar8 * 0x80;
        if (*(uint *)(param_1[2] + (longlong)iVar8 * 0x80) == *(uint *)(param_2 + 0xc)) break;
        iVar8 = *(int *)(lVar10 + 0x78);
        lVar10 = 0;
      } while (iVar8 != -1);
      goto LAB_140f4727f;
    }
  }
  lVar10 = 0;
LAB_140f4727f:
  local_58 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_2 + 0x20))->QuadPart;
  local_50 = *(undefined8 *)(param_2 + 0x28);
  local_48 = *(longlong **)(param_2 + 0x30);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_140f47498(&local_58);
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (cVar5 != '\0') {
    lVar6 = *(longlong *)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x30);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    bVar11 = true;
    if (lVar6 == DAT_14c965770) {
      uVar9 = 0;
    }
    else if (lVar6 == DAT_14c965788) {
      bVar11 = false;
      uVar9 = 1;
    }
    else if (lVar6 == DAT_14c9657b8) {
      uVar9 = 2;
    }
    else {
      bVar11 = lVar6 != DAT_14c9657d0;
      uVar9 = 3;
      if (bVar11) {
        uVar9 = 0xffffffff;
      }
    }
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
    if (uVar9 < 0x80000000) {
      uVar12 = *(uint *)(param_2 + 0x40);
      if (!bVar11) {
        uVar12 = uVar12 ^ 0x80000000;
      }
      *(uint *)(lVar10 + 0x20 + uVar9 * 4) = uVar12;
    }
    plVar7 = (longlong *)param_1[1];
    if (plVar7 != (longlong *)0x0) {
      iVar8 = (int)plVar7[1];
      do {
        if (iVar8 == 0) goto LAB_140f473be;
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar11 = iVar8 == iVar4;
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar8 + 1;
          iVar4 = iVar8;
        }
        iVar8 = iVar4;
        UNLOCK();
      } while (!bVar11);
      puVar3 = (undefined8 *)*param_1;
      if (puVar3 != (undefined8 *)0x0) {
        QueryPerformanceCounter(&local_58);
        lVar6 = local_58.QuadPart - puVar3[3];
        auVar13._8_4_ = (int)((ulonglong)lVar6 >> 0x20);
        auVar13._0_8_ = lVar6;
        auVar13._12_4_ = 0x45300000;
        *(float *)(lVar10 + 0xc) =
             (float)((((double)CONCAT44(0x43300000,(int)lVar6) - 4503599627370496.0) +
                     (auVar13._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
        (**(code **)(*(longlong *)*puVar3 + 0x98))((longlong *)*puVar3,lVar10 + 8);
      }
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
LAB_140f473be:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f47498 FUN_140f47498 body=261 status=ok
// SIG undefined FUN_140f47498(void)

undefined8 FUN_140f47498(undefined8 *param_1)

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
LAB_140f4757a:
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
        goto LAB_140f4757a;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_140f474be;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(char *)(lVar4 + 0x42) == '\x02');
LAB_140f474be:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140f4759e FUN_140f4759e body=422 status=ok
// SIG undefined FUN_140f4759e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f4759e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  uint local_a4;
  uint *local_a0;
  uint *local_98;
  undefined1 local_8c [4];
  uint local_88 [2];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*param_1 != 0) && (param_1[1] != 0)) && (0 < *(int *)(param_1[1] + 8))) {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
      plVar6 = param_1 + 9;
      if ((longlong *)param_1[10] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[10];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[0xb] - 1U & uVar3) * 4);
      if (iVar7 != -1) {
        lVar4 = param_1[2];
        do {
          if (*(uint *)(lVar4 + (longlong)iVar7 * 0x80) == uVar3) goto LAB_140f47613;
          iVar7 = *(int *)((longlong)iVar7 * 0x80 + lVar4 + 0x78);
        } while (iVar7 != -1);
      }
    }
    local_78 = &local_70;
    local_80 = &local_60;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_a0 = &local_a4;
    local_98 = local_88;
    local_a4 = uVar3;
    local_88[0] = uVar3;
    FUN_1457ca4ae(param_1 + 2,local_8c);
    plVar6 = (longlong *)param_1[1];
    if (plVar6 == (longlong *)0x0) {
LAB_140f4770d:
      local_b0 = 0;
      local_b8 = 0x11;
      (**(code **)(*_DAT_00000000 + 0x88))(_DAT_00000000,local_88[0],"UE4 Standard Gamepad",4);
    }
    else {
      iVar7 = (int)plVar6[1];
      do {
        if (iVar7 == 0) goto LAB_140f4770d;
        LOCK();
        iVar5 = (int)plVar6[1];
        bVar8 = iVar7 == iVar5;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_b0 = 0;
      local_b8 = 0x11;
      (**(code **)(**(longlong **)*param_1 + 0x88))
                (*(longlong **)*param_1,local_88[0],"UE4 Standard Gamepad",4);
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
  }
LAB_140f47613:
  if ((local_18 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f47745 FUN_140f47745 body=107 status=ok
// SIG undefined FUN_140f47745(void)

void FUN_140f47745(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f47896(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a39e9e0;
  puVar1[0x98] = 0;
  puVar1[0x99] = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9b] = 0;
  puVar1[0x9c] = 0;
  puVar1[0x9d] = 0;
  lVar2 = FUN_140f477b0();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  puVar1[0x9d] = lVar2;
  *(undefined1 *)(puVar1 + 0x67) = 1;
  return;
}



// FUNCTION 140f477b0 FUN_140f477b0 body=228 status=ok
// SIG undefined FUN_140f477b0(void)

longlong FUN_140f477b0(void)

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
  if (DAT_14caa1338 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458bb756;
    local_38 = &LAB_147445785;
    local_40 = &LAB_14090bcb1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xce0;
    FUN_14081cfa3(L"/Script/Foliage",L"FoliageInstancedStaticMeshComponent",&DAT_14caa1338,
                  &DAT_147445784);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1338;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f47896 FUN_140f47896 body=1114 status=ok
// SIG undefined FUN_140f47896(void)

undefined8 * FUN_140f47896(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_70;
  GUID local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a39df10;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 10) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xb) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xff7fffff;
  param_1[0xc] = 0xff7fffff7f7fffff;
  lVar2 = 0x70;
  do {
    pbVar1 = (byte *)((longlong)param_1 + lVar2 + -8);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined4 *)((longlong)param_1 + lVar2 + -4) = 0x3f000000;
    *(byte *)((longlong)param_1 + lVar2) = *(byte *)((longlong)param_1 + lVar2) & 0xfe;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0xa0);
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xff7fffff7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x18) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x19) = 0xff7fffff;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x800000007fffffff;
  FUN_144805afa(param_1 + 0x36);
  *(byte *)((longlong)param_1 + 0x339) = (*(byte *)((longlong)param_1 + 0x339) & 0xf8) + 1;
  param_1[0x70] = 0xff7fffff7f7fffff;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x3f4) = 0x404;
  param_1[0x71] = &DAT_14a176f00;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  FUN_140f47dd8(param_1 + 0x82);
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4bc) = 1;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 1;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[0xb] = &DAT_3f8000003f800000;
  param_1[0xc] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xc8800000;
  *(undefined4 *)(param_1 + 0x19) = 0x48800000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f000000;
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) & 0xfffffff8 | 5;
  *(undefined4 *)(param_1 + 0x24) = 10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) & 0xfe;
  param_1[0x21] = 0x3fecccccc0000000;
  param_1[0x22] = 0x3fecccccc0000000;
  param_1[0x23] = 0x3fecccccc0000000;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 1;
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) & 0xffffffc0 | 0x37;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(byte *)((longlong)param_1 + 0x18c) = *(byte *)((longlong)param_1 + 0x18c) & 0xf8;
  *(undefined4 *)((longlong)param_1 + 0x194) = 8;
  *(byte *)((longlong)param_1 + 0x19c) = *(byte *)((longlong)param_1 + 0x19c) & 0xfe;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 3;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_140078ec2(param_1 + 0x36,DAT_14cad0f30);
  param_1[0x6c] = 0x343160000;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 3;
  param_1[0x70] = 0x404000003f800000;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x6b] = 0x424800003f800000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0x42c8000042c80000;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0x4120000000000000;
  puVar4 = (undefined8 *)(param_1[0x81] + 0x30);
  if (param_1[0x81] == 0) {
    puVar4 = param_1 + 0x71;
  }
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar4,&local_68,0,0);
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar4,&local_68,0x3f800000,0x3f800000);
  local_68.Data1 = 0;
  local_68.Data2 = 0;
  local_68.Data3 = 0;
  local_68.Data4[0] = '\0';
  local_68.Data4[1] = '\0';
  local_68.Data4[2] = '\0';
  local_68.Data4[3] = '\0';
  local_68.Data4[4] = '\0';
  local_68.Data4[5] = '\0';
  local_68.Data4[6] = '\0';
  local_68.Data4[7] = '\0';
  CoCreateGuid(&local_68);
  *(ulong *)(param_1 + 5) = local_68.Data1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 6) = local_68.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_68.Data4._4_4_;
  lVar3 = FUN_140f47cf2();
  lVar2 = *(longlong *)(lVar3 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar3);
    lVar2 = *(longlong *)(lVar3 + 0x110);
  }
  *(uint *)((longlong)param_1 + 0x4a4) =
       *(uint *)((longlong)param_1 + 0x4a4) & 0xfffc7fff | (uint)*(byte *)(lVar2 + 0x38) << 0xf;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xfd;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x295) = 1;
  *(uint *)(param_1 + 0x66) = *(uint *)(param_1 + 0x66) & 0xffffe0ff | 0x100;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f47cf2 FUN_140f47cf2 body=228 status=ok
// SIG undefined FUN_140f47cf2(void)

longlong FUN_140f47cf2(void)

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
  if (DAT_14caa1410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_147445915;
    local_40 = FUN_146321808;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Foliage",L"GbxFoliageSettings",&DAT_14caa1410,&DAT_147445914);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f47dd8 FUN_140f47dd8 body=247 status=ok
// SIG undefined FUN_140f47dd8(void)

undefined1 * FUN_140f47dd8(undefined1 *param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x7f7fffff;
  *(undefined2 *)(param_1 + 0x74) = 0x404;
  *(undefined **)(param_1 + 8) = &DAT_14a176f00;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  LOCK();
  UNLOCK();
  local_50 = DAT_14c761474 + 1;
  local_58 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(param_1 + 8,local_44,0,0x3f800000);
  LOCK();
  UNLOCK();
  local_50 = DAT_14c761474 + 1;
  local_58 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(param_1 + 8,local_44,0x3f800000,0);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f47ed0 FUN_140f47ed0 body=82 status=ok
// SIG undefined FUN_140f47ed0(void)

void FUN_140f47ed0(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_140f47f24(local_28,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f47f24 FUN_140f47f24 body=635 status=ok
// SIG undefined FUN_140f47f24(void)

void FUN_140f47f24(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 **local_e8;
  undefined4 local_e0;
  undefined8 **local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = param_3;
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar4 != 0) {
    local_f8 = 0;
    FUN_140f481a0(lVar4,param_2,param_4,0xffffffffffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
  }
  param_1 = param_1 + 0x57;
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_98);
    local_a8 = local_98;
    local_a0 = local_90;
    FUN_14015671e(local_68);
    lVar4 = local_98;
    local_b8 = 0;
    uStack_b0 = 0;
    if ((longlong)local_90 != 0) {
      lVar5 = 0;
      do {
        local_70 = *(undefined8 *)(lVar4 + lVar5);
        local_78 = 1;
        local_80 = &local_70;
        cVar2 = FUN_144b06fd6(local_50,&local_80);
        uVar1 = uStack_b0;
        if (cVar2 == '\0') {
          lVar6 = (longlong)(int)uStack_b0;
          uVar3 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
          if (uStack_b0._4_4_ < uVar3) {
            FUN_14075a758(&local_b8,uVar1 & 0xffffffff);
          }
          *(undefined8 *)(local_b8 + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar5);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)local_90 * 8 != lVar5);
    }
    if (local_98 != 0) {
      FUN_1400020a8(local_98);
    }
    local_98 = local_b8;
    local_90 = (int)uStack_b0;
    local_8c = uStack_b0._4_4_;
    local_c8 = local_b8;
    local_c0 = (int)uStack_b0;
    FUN_146e21220(local_50,&local_c8,param_2,param_4);
    FUN_1448635f4(local_68);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_80 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_88);
    if (local_80 != (undefined8 *)0x0) {
      local_d0 = 1;
      local_d8 = &local_80;
      FUN_14015671e(local_68);
      local_e0 = 1;
      local_e8 = &local_80;
      FUN_146e21220(local_50,&local_e8,param_2,param_4);
      FUN_1448635f4(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f481a0 FUN_140f481a0 body=274 status=ok
// SIG undefined FUN_140f481a0(void)

void FUN_140f481a0(longlong param_1,undefined4 *param_2,undefined1 param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar2 = param_4 < 0xffffffff00000000 && (int)param_4 != -1;
  local_88 = *(longlong *)(param_2 + 4);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x30,8);
  *local_68 = (longlong)&PTR_FUN_14aa1de40;
  local_68[3] = local_88;
  *(undefined4 *)(local_68 + 1) = local_98;
  *(undefined4 *)((longlong)local_68 + 0xc) = uStack_94;
  *(undefined4 *)(local_68 + 2) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x14) = uStack_8c;
  *(undefined1 *)(local_68 + 4) = param_3;
  *(bool *)((longlong)local_68 + 0x21) = bVar2;
  local_68[5] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_143622af4;
  }
  local_a8 = local_78;
  FUN_140f482b4(param_1,param_4,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff,
                param_5);
  if (local_78[0] != (code *)0x0) {
    plVar1 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f482b4 FUN_140f482b4 body=316 status=ok
// SIG undefined FUN_140f482b4(void)

void FUN_140f482b4(longlong param_1,ulonglong param_2,char param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_2;
  if ((param_3 == '\0') || (0xfffffffeffffffff < param_2 || (int)param_2 == -1)) {
    local_40 = &local_50;
    local_50 = param_5;
    local_48 = FUN_1436224d6;
    FUN_144966906(param_1 + 0x138);
    goto LAB_140f4830d;
  }
  if (param_4 == 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x140);
    if ((*(longlong *)(lVar2 + 0xb0) == 0) && (lVar2 = FUN_1448abda6(lVar2), lVar2 == 0))
    goto LAB_140f4830d;
    lVar3 = FUN_14479d2ce(param_1 + 0x140);
    lVar2 = *(longlong *)(lVar3 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(lVar3);
    }
    param_4 = FUN_140636ec6(lVar2);
    if (param_4 == 0) goto LAB_140f4830d;
  }
  local_38 = CONCAT44((int)param_2 - *(int *)(param_4 + 0x930),(undefined4)local_38);
  uVar1 = FUN_14479d2ce(param_1 + 0x140);
  local_58 = 1;
  FUN_147ca26cc(param_4,&local_38,uVar1,param_5);
LAB_140f4830d:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f483f2 FUN_140f483f2 body=21 status=ok
// SIG undefined FUN_140f483f2(void)

undefined8 FUN_140f483f2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140f48408 FUN_140f48408 body=237 status=ok
// SIG undefined FUN_140f48408(void)

void FUN_140f48408(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((longlong)*(int *)(param_1 + 0x1e8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    lVar6 = (longlong)*(int *)(param_1 + 0x1e8) << 3;
    lVar5 = 0;
    do {
      cVar2 = FUN_1447ffd82(*(longlong *)(lVar1 + lVar5 * 8) + 0x48,param_2);
      if (cVar2 != '\0') {
        uVar4 = (uint)lVar5;
        if ((int)uVar4 < 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x1e8);
        if (iVar3 <= (int)uVar4) {
          return;
        }
        uVar7 = (ulonglong)(uVar4 & 0x7fffffff);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + uVar7 * 8);
        if (lVar1 != 0) {
          FUN_140f484f6(lVar1);
          FUN_1400020a8(lVar1);
          iVar3 = *(int *)(param_1 + 0x1e8);
        }
        if (iVar3 - 1U != uVar4) {
          memmove((void *)(*(longlong *)(param_1 + 0x1e0) + uVar7 * 8),
                  (void *)(*(longlong *)(param_1 + 0x1e0) + uVar7 * 8 + 8),
                  (longlong)(int)((iVar3 - 1U) - uVar4) << 3);
          iVar3 = *(int *)(param_1 + 0x1e8);
        }
        *(int *)(param_1 + 0x1e8) = iVar3 + -1;
        FUN_1457ca91a((longlong *)(param_1 + 0x1e0));
        return;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 140f484f6 FUN_140f484f6 body=67 status=ok
// SIG undefined FUN_140f484f6(void)

void FUN_140f484f6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_140f4853a(lVar1);
      FUN_1400020a8(lVar1);
      *(undefined8 *)(param_1 + lVar2) = 0;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x48);
  return;
}



// FUNCTION 140f4853a FUN_140f4853a body=243 status=ok
// SIG undefined FUN_140f4853a(void)

void FUN_140f4853a(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (DAT_14c9a7d48 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c9a7d48 + 0x1f0));
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar6 = 0;
      do {
        lVar5 = DAT_14c9a7d48;
        lVar4 = *(longlong *)(lVar3 + 8 + lVar6);
        if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 1)) {
          lVar4 = **(longlong **)(lVar3 + lVar6);
          FUN_140f48678(DAT_14c9a7d48 + 0x218,*(undefined4 *)(lVar4 + 8),1);
          FUN_1457ca9b2(lVar5,lVar4);
        }
        lVar6 = lVar6 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar6);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_14c9a7d48 + 0x1f0));
  }
  FUN_140f4862d(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 140f4862d FUN_140f4862d body=73 status=ok
// SIG undefined FUN_140f4862d(void)

void FUN_140f4862d(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f48676 FUN_140f48676 body=1 status=ok
// SIG undefined FUN_140f48676(void)

void FUN_140f48676(void)

{
  return;
}



// FUNCTION 140f48678 FUN_140f48678 body=119 status=ok
// SIG undefined FUN_140f48678(void)

void FUN_140f48678(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x10 + *param_1 + 8);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_140f486f0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140f486f0 FUN_140f486f0 body=138 status=ok
// SIG undefined FUN_140f486f0(void)

void FUN_140f486f0(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f4877a FUN_140f4877a body=89 status=ok
// SIG undefined FUN_140f4877a(void)

void FUN_140f4877a(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140bf6712();
  while (plVar2 != (longlong *)0x0) {
    if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*plVar2 + 0x60))();
    }
    if (plVar2[3] != 0) {
      LOCK();
      piVar1 = (int *)(plVar2[3] + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    FUN_140bf6920(plVar2);
    plVar2 = (longlong *)FUN_140bf6712(param_1);
  }
  return;
}



// FUNCTION 140f487d4 FUN_140f487d4 body=307 status=ok
// SIG undefined FUN_140f487d4(void)

void FUN_140f487d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a40ccc();
  if (*(longlong *)(param_1 + 0x120) != 0) goto LAB_140f48864;
  uVar3 = FUN_140f4891c();
  FUN_140f48956(param_1,&local_38,uVar3,FUN_14107c7ae);
  if (local_30 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = local_38;
    plVar4 = *(longlong **)(param_1 + 0x128);
    if (plVar4 == (longlong *)0x0) goto LAB_140f48864;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined8 *)(param_1 + 0x120) = local_38;
    plVar4 = *(longlong **)(param_1 + 0x128);
    if (local_30 == plVar4) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) goto LAB_140f48864;
        goto LAB_140f488b7;
      }
      goto LAB_140f48864;
    }
    *(longlong **)(param_1 + 0x128) = local_30;
    if (plVar4 == (longlong *)0x0) goto LAB_140f48864;
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
LAB_140f488b7:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_140f48864:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f4891c FUN_140f4891c body=57 status=ok
// SIG undefined FUN_140f4891c(void)

void FUN_140f4891c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af78 = FUN_140002ddd(FUN_1464cd5e9,uVar1,L"GbxBrainService_LocationTracker");
  }
  return;
}



// FUNCTION 140f48956 FUN_140f48956 body=263 status=ok
// SIG undefined FUN_140f48956(void)

undefined8 *
FUN_140f48956(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (iVar3 == 0) {
LAB_140f48a2e:
    uVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48);
    uVar6 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != iVar3 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
      goto LAB_140f48a2e;
      uVar6 = *puVar7;
    }
  }
  lVar5 = FUN_140f48a60(uVar6);
  if (lVar5 != 0) {
    FUN_140f48abc(lVar5,&local_38,param_3,param_4);
    *param_2 = local_38;
    param_2[1] = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
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
            goto LAB_140f48a38;
          }
        }
      }
    }
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140f48a38:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 140f48a60 FUN_140f48a60 body=91 status=ok
// SIG undefined FUN_140f48a60(void)

undefined8 FUN_140f48a60(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140b040c0();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140b040c0();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140f48aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140f48abc FUN_140f48abc body=555 status=ok
// SIG undefined FUN_140f48abc(void)

undefined8 * FUN_140f48abc(longlong param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x458);
  if ((longlong)iVar3 == 0) {
LAB_140f48af4:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x450);
    lVar7 = 0;
    do {
      if ((*(longlong *)(lVar4 + lVar7) != 0) &&
         (cVar5 = FUN_1448093f4(*(longlong *)(lVar4 + lVar7),param_3), cVar5 != '\0')) {
        plVar8 = *(longlong **)(lVar4 + lVar7);
        plVar6 = *(longlong **)(lVar4 + 8 + lVar7);
        if (plVar6 == (longlong *)0x0) {
          if (plVar8 != (longlong *)0x0) goto LAB_140f48cb0;
          goto LAB_140f48af4;
        }
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plVar9 = plVar6;
        if (plVar8 != (longlong *)0x0) goto LAB_140f48b8e;
        break;
      }
      lVar7 = lVar7 + 0x10;
      plVar9 = (longlong *)0x0;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  (*param_4)(&local_58);
  plVar8 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  if (local_50 == plVar9) {
    if (plVar9 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      goto LAB_140f48b24;
    }
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plVar6 = plVar9;
    if ((int)*plVar2 != 0) goto LAB_140f48b24;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar9 = plVar8;
  }
  else {
    plVar6 = local_50;
    if (plVar9 == (longlong *)0x0) goto LAB_140f48b24;
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140f48b24;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar6 = plVar8;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))();
  }
LAB_140f48b24:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  (**(code **)(*local_58 + 0x10))(local_58,param_1);
  iVar3 = *(int *)(param_1 + 0x458);
  *(uint *)(param_1 + 0x458) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x45c) < iVar3 + 1U) {
    FUN_140f48ce8((longlong *)(param_1 + 0x450),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x450);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = local_58;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  plVar8 = local_58;
  if (plVar6 == (longlong *)0x0) {
LAB_140f48cb0:
    *param_2 = plVar8;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_140f48b8e:
    *param_2 = plVar8;
    param_2[1] = plVar6;
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
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f48ce8 FUN_140f48ce8 body=269 status=ok
// SIG undefined FUN_140f48ce8(void)

void FUN_140f48ce8(longlong param_1,int param_2)

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



// FUNCTION 140f48e04 FUN_140f48e04 body=40 status=ok
// SIG undefined FUN_140f48e04(void)

undefined8 FUN_140f48e04(undefined8 param_1,int param_2)

{
  FUN_140f48e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f48e2c FUN_140f48e2c body=136 status=ok
// SIG undefined FUN_140f48e2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f48e2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b484030;
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
                    /* WARNING: Could not recover jumptable at 0x000140f48ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140f48eb4 FUN_140f48eb4 body=6075 status=ok
// SIG undefined FUN_140f48eb4(void)

void FUN_140f48eb4(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  byte bVar13;
  code **ppcVar14;
  code *pcVar15;
  uint uVar16;
  int iVar17;
  undefined1 **ppuVar18;
  code *pcVar19;
  undefined1 auStack_908 [32];
  char *local_8e8;
  uint local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  wchar_t *local_8c8;
  code *local_8c0;
  undefined1 *local_8b8;
  code **local_8b0;
  code *local_8a8;
  code *local_8a0;
  longlong *local_898;
  undefined1 **local_890;
  code **local_888;
  undefined1 **local_880;
  undefined1 *local_878;
  undefined1 **local_870;
  int local_864;
  longlong *local_860;
  longlong local_858;
  longlong local_850;
  undefined1 **local_848;
  int local_840;
  undefined1 **local_838;
  int local_830;
  undefined1 **local_828;
  int local_820;
  code **local_818;
  undefined8 local_810;
  char local_801;
  undefined8 *local_800;
  undefined8 local_7f8;
  undefined1 *local_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined4 local_7dc;
  code **local_7d8;
  undefined8 local_7d0;
  undefined1 *local_7c8;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b4;
  code *local_7b0;
  code **local_7a8;
  code *local_7a0;
  undefined1 *local_798;
  undefined8 local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined1 **local_778;
  int local_770;
  code **local_768;
  undefined8 local_760;
  undefined1 *local_758;
  undefined8 local_750;
  undefined4 local_748;
  undefined4 local_744;
  undefined8 local_660;
  undefined8 local_658;
  undefined1 local_650 [8];
  undefined8 local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  longlong local_628;
  undefined4 local_620;
  code *local_618 [172];
  longlong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_908;
  lVar12 = param_1[2];
  if (lVar12 != 0) {
    if (DAT_14cacb1f8 == 0) {
      local_8b0 = local_618;
      local_618[0] = FUN_1449e2820;
      local_8a0 = FUN_14081d0ea;
      local_8a8 = FUN_1427b09ee;
      local_8b8 = &LAB_1478defb1;
      local_8c0 = FUN_1463a1b02;
      local_8c8 = L"Engine";
      uStack_8d0 = 0;
      local_8d8 = CONCAT44(local_8d8._4_4_,0x10004001);
      local_8e0 = 8;
      local_8e8 = (char *)CONCAT44(local_8e8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    plVar6 = (longlong *)FUN_144718840(lVar12,DAT_14cacb1f8);
    if (plVar6 != (longlong *)0x0) {
      lVar12 = *param_2;
      if ((((lVar12 == 0) || (lVar9 = FUN_1402e44f4(), lVar9 == 0)) ||
          (*(int *)(lVar12 + 0x38) < *(int *)(lVar9 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
          lVar9 + 0x30)) {
        pcVar15 = (code *)0x0;
      }
      else {
        pcVar15 = (code *)*param_2;
      }
      lVar12 = param_1[4];
      local_7b0 = FUN_1433d7510;
      local_7a8 = local_618;
      FUN_140788b96(lVar12);
      local_b8 = 0;
      local_b0 = 0x400000000;
      local_a0 = 0;
      local_98 = 0x2000000000;
      uStack_90 = 0xffffffff;
      local_80 = 0;
      local_78 = 0;
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6);
      if ((longlong)*(int *)(puVar7 + 1) != 0) {
        local_890 = (undefined1 **)*puVar7;
        local_870 = local_890 + *(int *)(puVar7 + 1);
        do {
          local_888 = (code **)((longlong)*(int *)(*local_890 + 0x44) + (longlong)param_1);
          pcVar19 = pcVar15;
          if ((pcVar15 == (code *)0x0) &&
             (((pcVar19 = local_888[0x10], pcVar19 == (code *)0x0 ||
               (lVar9 = FUN_1402e44f4(), lVar9 == 0)) ||
              ((*(int *)(pcVar19 + 0x38) < *(int *)(lVar9 + 0x38) ||
               ((*(longlong *)(*(longlong *)(pcVar19 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 != lVar9 + 0x30 || (pcVar19 = local_888[0x10], pcVar19 == (code *)0x0)))))))) {
            local_768 = local_888;
            local_7a0 = (code *)0x0;
            local_768 = (code **)(*(code *)*param_3)(param_3[1],&local_7a0,&local_768);
            uVar5 = ((uint)((ulonglong)local_768 >> 0x14) & 0xffff ^
                    (uint)((ulonglong)local_768 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            uVar10 = FUN_1478fd7f8(local_618,uVar5 >> 0x10 ^ uVar5,&local_768);
            local_7a0 = (code *)0x0;
            lVar9 = FUN_1478fead8(uVar10,0,&local_7a0);
LAB_140f4a5d9:
            local_880 = (undefined1 **)(longlong)*(int *)(lVar9 + 0x28);
            uVar5 = *(int *)(lVar9 + 0x28) + 1;
            *(uint *)(lVar9 + 0x28) = uVar5;
            if (*(uint *)(lVar9 + 0x2c) < uVar5) {
              FUN_1478fea68(lVar9,local_880);
            }
            if (*(longlong *)(lVar9 + 0x20) != 0) {
              lVar9 = *(longlong *)(lVar9 + 0x20);
            }
            *(code ***)(lVar9 + (longlong)local_880 * 8) = local_888;
          }
          else {
            uVar10 = FUN_144a83cc4();
            plVar6 = (longlong *)FUN_144718840(pcVar19,uVar10);
            puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x80))(plVar6);
            if ((longlong)*(int *)(puVar7 + 1) != 0) {
              plVar6 = (longlong *)*puVar7;
              lVar9 = (longlong)*(int *)(puVar7 + 1) * 0x78;
              do {
                if ((code *)*plVar6 == local_888[0x19]) {
                  if ((plVar6 != (longlong *)0x0) && ((char)plVar6[0xe] == '\x01')) {
                    local_768 = local_888;
                    local_7a0 = pcVar15;
                    local_768 = (code **)(*(code *)*param_3)(param_3[1],&local_7a0,&local_768);
                    uVar5 = ((uint)((ulonglong)local_768 >> 0x14) & 0xffff ^
                            (uint)((ulonglong)local_768 >> 4)) * -0x7a143595;
                    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
                    uVar10 = FUN_1478fd7f8(local_618,uVar5 >> 0x10 ^ uVar5,&local_768);
                    lVar9 = plVar6[1];
                    uVar5 = (uint)((ulonglong)lVar9 >> 0x10);
                    uVar16 = (uint)lVar9 & 0xffff;
                    lVar9 = FUN_1478fe35e(uVar10,((uint)lVar9 << 0x10 | uVar16) +
                                                 (int)((ulonglong)lVar9 >> 0x20) +
                                                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4),
                                          plVar6 + 1);
                    goto LAB_140f4a5d9;
                  }
                  break;
                }
                plVar6 = plVar6 + 0xf;
                lVar9 = lVar9 + -0x78;
              } while (lVar9 != 0);
            }
          }
          local_890 = local_890 + 1;
        } while (local_890 != local_870);
      }
      local_768 = (code **)0x100000000;
      local_760 = (code *)local_a8;
      local_758 = (undefined1 *)0xffffffff;
      local_750._0_4_ = 0;
      iVar17 = 0;
      if ((int)local_98 != 0) {
        FUN_144a81a4c(&local_768);
        iVar17 = (int)local_98;
      }
      local_7c0 = local_758;
      uVar10 = local_7c0;
      local_7b8 = (uint)local_750;
      local_7b4 = local_750._4_4_;
      local_7d0 = local_768;
      local_7c8 = local_760;
      local_7c0._4_4_ = (int)((ulonglong)local_758 >> 0x20);
      local_7d8 = local_618;
      if ((local_7c0._4_4_ != iVar17) || (local_760 != (code *)local_a8)) {
        local_860 = (longlong *)(lVar12 + 0xb78);
        iVar4 = local_7c0._4_4_;
        local_7c0 = uVar10;
        do {
          ppcVar14 = (code **)local_7d8[0xac];
          if ((code **)local_7d8[0xac] == (code **)0x0) {
            ppcVar14 = local_7d8;
          }
          local_768 = (code **)ppcVar14[(longlong)iVar4 * 0x2b];
          local_660 = 0;
          local_658 = 0x400000000;
          local_648 = 0;
          local_640 = 0x2000000000;
          uStack_638 = 0xffffffff;
          local_628 = 0;
          local_620 = 0;
          FUN_1478fa5d0(&local_760);
          local_7a0 = (code *)0x100000000;
          local_798 = local_650;
          local_790 = 0xffffffff;
          local_788 = 0;
          local_864 = 0;
          if ((int)local_640 != 0) {
            FUN_144a81a4c(&local_7a0);
            local_864 = (int)local_640;
          }
          local_7e8 = local_790;
          uVar10 = local_7e8;
          local_7e0 = local_788;
          local_7dc = local_784;
          local_7f8 = local_7a0;
          local_7f0 = local_798;
          local_800 = &local_760;
          local_7e8._4_4_ = (int)((ulonglong)local_790 >> 0x20);
          iVar4 = local_7e8._4_4_;
          if ((local_7e8._4_4_ != local_864) || (local_7e8 = uVar10, local_798 != local_650)) {
            do {
              local_7e8 = uVar10;
              puVar7 = (undefined8 *)local_800[0x20];
              if ((undefined8 *)local_800[0x20] == (undefined8 *)0x0) {
                puVar7 = local_800;
              }
              local_7a0 = (code *)puVar7[(longlong)iVar4 * 8];
              FUN_1478fa996(&local_798);
              local_850 = FUN_14021165e(lVar12);
              ppcVar14 = local_768;
              if (local_850 == 0) {
                local_870 = local_778;
                if (local_778 == (undefined1 **)0x0) {
                  local_870 = &local_798;
                }
                if (local_7a0 == (code *)0x0) {
                  local_880 = (undefined1 **)(longlong)local_770;
                  if (local_880 != (undefined1 **)0x0) {
                    local_880 = (undefined1 **)((longlong)local_880 << 3);
                    local_890 = (undefined1 **)0x0;
                    do {
                      ppcVar14 = local_768;
                      local_888 = *(code ***)((longlong)local_870 + (longlong)local_890);
                      if ((local_768 == (code **)0x0) || (local_768 == (code **)param_1[2])) {
                        FUN_14790fbf8(local_888,param_1);
                        if ((param_4 == '\0') &&
                           ((local_898 = (longlong *)FUN_147508a86(local_888),
                            local_898 != (longlong *)0x0 && (local_888[0x11] != (code *)0x0)))) {
                          lVar9 = param_1[4];
                          if (lVar9 != 0) {
                            lVar8 = FUN_144a74fb4();
                            lVar9 = *(longlong *)(lVar9 + 0x10);
                            if (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                                (*(longlong *)
                                  (*(longlong *)(lVar9 + 0x30) +
                                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                               (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                              FUN_14036294a(param_1[4],1,1);
                            }
                          }
                          local_878 = (undefined1 *)param_1[0x7c];
                          if (local_878 == (undefined1 *)0x0) {
                            local_878 = (undefined1 *)(**(code **)(*param_1 + 0x350))(param_1);
                            param_1[0x7c] = (longlong)local_878;
                          }
                          lVar9 = local_898[4];
                          if (lVar9 != 0) {
                            lVar8 = FUN_144a74fb4();
                            lVar9 = *(longlong *)(lVar9 + 0x10);
                            if (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                                (*(longlong *)
                                  (*(longlong *)(lVar9 + 0x30) +
                                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                               (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                              FUN_14036294a(local_898[4],1,1);
                            }
                          }
                          plVar6 = local_898;
                          if (local_898[0x7c] == 0) {
                            lVar9 = (**(code **)(*local_898 + 0x350))(local_898);
                            plVar6[0x7c] = lVar9;
                          }
                          FUN_1433d6c74(local_888,local_878);
                        }
                      }
                      else {
                        lVar9 = FUN_147508a86(local_888);
                        if ((lVar9 == 0) || (ppcVar14 != *(code ***)(lVar9 + 0x10))) {
                          local_8d8 = 0;
                          uStack_8d0 = 0;
                          local_8e0 = local_8e0 & 0xffffff00;
                          local_8e8 = (char *)0x0;
                          local_898 = (longlong *)FUN_1417b484e(lVar12,ppcVar14,0,0);
                          bVar3 = *(byte *)((longlong)local_898 + 0x31);
                          *(byte *)((longlong)local_898 + 0x31) = bVar3 | 8;
                          bVar13 = ((byte)*(code *)(local_888 + 0x17) & 2) << 4;
                          *(byte *)((longlong)local_898 + 0x31) = bVar3 & 0xdf | 8 | bVar13;
                          *(byte *)((longlong)local_898 + 0x31) =
                               bVar3 & 0xcf | 8 | bVar13 |
                               ((byte)*(code *)(local_888 + 0x17) & 1) << 4;
                          FUN_140737aec(local_898,0);
                          plVar6 = local_898;
                          if ((*(byte *)(lVar12 + 0x9f) & 0x20) != 0) {
                            (**(code **)(*local_898 + 0x330))(local_898);
                            uVar10 = FUN_14477b072(plVar6,DAT_14cacb518);
                            (**(code **)(*plVar6 + 0x248))(plVar6,uVar10,0);
                          }
                          local_838 = local_778;
                          if (local_778 == (undefined1 **)0x0) {
                            local_838 = &local_798;
                          }
                          local_830 = local_770;
                          FUN_1433d6afe(local_898,&local_838);
                          FUN_14790fbf8(local_888,param_1);
                          if ((param_4 == '\0') && (local_888[0x11] != (code *)0x0)) {
                            lVar9 = param_1[4];
                            if (lVar9 != 0) {
                              lVar8 = FUN_144a74fb4();
                              lVar9 = *(longlong *)(lVar9 + 0x10);
                              if (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                                  (*(longlong *)
                                    (*(longlong *)(lVar9 + 0x30) +
                                    (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                                 (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                                FUN_14036294a(param_1[4],1,1);
                              }
                            }
                            local_878 = (undefined1 *)param_1[0x7c];
                            if (local_878 == (undefined1 *)0x0) {
                              local_878 = (undefined1 *)(**(code **)(*param_1 + 0x350))(param_1);
                              param_1[0x7c] = (longlong)local_878;
                            }
                            lVar9 = local_898[4];
                            if (lVar9 != 0) {
                              lVar8 = FUN_144a74fb4();
                              lVar9 = *(longlong *)(lVar9 + 0x10);
                              if (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                                  (*(longlong *)
                                    (*(longlong *)(lVar9 + 0x30) +
                                    (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                                 (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                                FUN_14036294a(local_898[4],1,1);
                              }
                            }
                            plVar6 = local_898;
                            if (local_898[0x7c] == 0) {
                              lVar9 = (**(code **)(*local_898 + 0x350))(local_898);
                              plVar6[0x7c] = lVar9;
                            }
                            FUN_1433d6c74(local_888,local_878);
                          }
                          if ((local_898 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
                            FUN_1456cec3c(local_898);
                          }
                          iVar4 = *(int *)(lVar12 + 0xb80);
                          *(uint *)(lVar12 + 0xb80) = iVar4 + 1U;
                          if (*(uint *)(lVar12 + 0xb84) < iVar4 + 1U) {
                            FUN_1478fec76(local_860,iVar4);
                          }
                          *(longlong **)(*local_860 + (longlong)iVar4 * 8) = local_898;
                          if ((local_898 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
                            FUN_1456cec3c(local_898);
                          }
                        }
                      }
                      local_890 = local_890 + 1;
                    } while (local_880 != local_890);
                  }
                }
                else if ((local_768 == (code **)0x0) || (local_768 == (code **)param_1[2])) {
                  local_888 = (code **)(longlong)local_770;
                  if (local_888 != (code **)0x0) {
                    local_888 = (code **)((longlong)local_888 << 3);
                    ppcVar14 = (code **)0x0;
                    do {
                      local_890 = *(undefined1 ***)((longlong)local_870 + (longlong)ppcVar14);
                      FUN_14790fbf8(local_890,param_1,0);
                      if (((param_4 == '\0') &&
                          (local_880 = (undefined1 **)FUN_147508a86(local_890),
                          local_880 != (undefined1 **)0x0)) &&
                         (local_890[0x11] != (undefined1 *)0x0)) {
                        local_898 = (longlong *)param_1[4];
                        if (local_898 != (longlong *)0x0) {
                          lVar9 = FUN_144a74fb4();
                          if (((*(int *)(lVar9 + 0x38) <=
                                *(int *)(*(longlong *)((longlong)local_898 + 0x10) + 0x38)) &&
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)((longlong)local_898 + 0x10) + 0x30) +
                                (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                             (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                            FUN_14036294a(param_1[4],1,1);
                          }
                        }
                        local_898 = (longlong *)param_1[0x7c];
                        if (local_898 == (longlong *)0x0) {
                          local_898 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1);
                          param_1[0x7c] = (longlong)local_898;
                        }
                        local_878 = local_880[4];
                        if (local_878 != (undefined1 *)0x0) {
                          lVar9 = FUN_144a74fb4();
                          if (((*(int *)(lVar9 + 0x38) <=
                                *(int *)(*(longlong *)(local_878 + 0x10) + 0x38)) &&
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(local_878 + 0x10) + 0x30) +
                                (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                             (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                            FUN_14036294a(local_880[4],1,1);
                          }
                        }
                        if (local_880[0x7c] == (undefined1 *)0x0) {
                          puVar11 = (undefined1 *)(**(code **)(*local_880 + 0x350))();
                          local_880[0x7c] = puVar11;
                        }
                        FUN_1433d6c74(local_890,local_898);
                      }
                      ppcVar14 = ppcVar14 + 1;
                    } while (local_888 != ppcVar14);
                  }
                }
                else {
                  lVar9 = FUN_147508a86(*local_870);
                  if ((lVar9 == 0) || (ppcVar14 != *(code ***)(lVar9 + 0x10))) {
                    local_8d8 = 0;
                    uStack_8d0 = 0;
                    local_8e0 = local_8e0 & 0xffffff00;
                    local_8e8 = (char *)0x0;
                    local_890 = (undefined1 **)FUN_1417b484e(lVar12,ppcVar14,0,0);
                    *(byte *)((longlong)local_890 + 0x31) =
                         *(byte *)((longlong)local_890 + 0x31) | 8;
                    FUN_140737aec(local_890,0);
                    ppuVar18 = local_890;
                    if ((*(byte *)(lVar12 + 0x9f) & 0x20) != 0) {
                      (**(code **)(*local_890 + 0x330))(local_890);
                      uVar10 = FUN_14477b072(ppuVar18,DAT_14cacb518);
                      (**(code **)(*ppuVar18 + 0x248))(ppuVar18,uVar10,0);
                    }
                    local_848 = local_778;
                    if (local_778 == (undefined1 **)0x0) {
                      local_848 = &local_798;
                    }
                    local_840 = local_770;
                    FUN_1433d6afe(local_890,&local_848);
                    local_880 = local_778;
                    if (local_778 == (undefined1 **)0x0) {
                      local_880 = &local_798;
                    }
                    local_870 = (undefined1 **)(longlong)local_770;
                    if (local_870 != (undefined1 **)0x0) {
                      local_870 = (undefined1 **)((longlong)local_870 << 3);
                      ppuVar18 = (undefined1 **)0x0;
                      do {
                        local_888 = *(code ***)((longlong)local_880 + (longlong)ppuVar18);
                        FUN_14790fbf8(local_888,param_1,local_890);
                        bVar3 = ((byte)*(code *)(local_888 + 0x17) & 2) << 4 |
                                *(byte *)((longlong)local_890 + 0x31);
                        *(byte *)((longlong)local_890 + 0x31) = bVar3;
                        *(byte *)((longlong)local_890 + 0x31) =
                             ((byte)*(code *)(local_888 + 0x17) & 1) << 4 | bVar3;
                        ppuVar18 = ppuVar18 + 1;
                      } while (local_870 != ppuVar18);
                    }
                    if (param_4 == '\0') {
                      lVar9 = param_1[4];
                      if (lVar9 != 0) {
                        lVar8 = FUN_144a74fb4();
                        lVar9 = *(longlong *)(lVar9 + 0x10);
                        if (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                             == lVar8 + 0x30)) && (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                          FUN_14036294a(param_1[4],1,1);
                        }
                      }
                      local_880 = (undefined1 **)param_1[0x7c];
                      if (local_880 == (undefined1 **)0x0) {
                        local_880 = (undefined1 **)(**(code **)(*param_1 + 0x350))(param_1);
                        param_1[0x7c] = (longlong)local_880;
                      }
                      puVar11 = local_890[4];
                      if (puVar11 != (undefined1 *)0x0) {
                        lVar8 = FUN_144a74fb4();
                        lVar9 = *(longlong *)(puVar11 + 0x10);
                        if (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                             == lVar8 + 0x30)) && (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                          FUN_14036294a(local_890[4],1,1);
                        }
                      }
                      ppuVar18 = local_890;
                      local_898 = (longlong *)local_890[0x7c];
                      if (local_898 == (longlong *)0x0) {
                        local_898 = (longlong *)(**(code **)(*local_890 + 0x350))(local_890);
                        ppuVar18[0x7c] = (undefined1 *)local_898;
                      }
                      local_870 = local_778;
                      if (local_778 == (undefined1 **)0x0) {
                        local_870 = &local_798;
                      }
                      local_888 = (code **)(longlong)local_770;
                      if (local_888 != (code **)0x0) {
                        local_888 = (code **)((longlong)local_888 << 3);
                        ppcVar14 = (code **)0x0;
                        do {
                          if (*(longlong *)
                               (*(longlong *)((longlong)local_870 + (longlong)ppcVar14) + 0x88) != 0
                             ) {
                            FUN_1433d6c74(*(longlong *)((longlong)local_870 + (longlong)ppcVar14),
                                          local_880,local_890);
                          }
                          ppcVar14 = ppcVar14 + 1;
                        } while (local_888 != ppcVar14);
                      }
                    }
                    if ((local_890 != (undefined1 **)0x0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(local_890);
                    }
                    iVar4 = *(int *)(lVar12 + 0xb80);
                    *(uint *)(lVar12 + 0xb80) = iVar4 + 1U;
                    if (*(uint *)(lVar12 + 0xb84) < iVar4 + 1U) {
                      FUN_1478fec76(local_860,iVar4);
                    }
                    *(undefined1 ***)(*local_860 + (longlong)iVar4 * 8) = local_890;
                    if ((local_890 != (undefined1 **)0x0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(local_890);
                    }
                  }
                }
              }
              else {
                local_880 = local_778;
                if (local_778 == (undefined1 **)0x0) {
                  local_880 = &local_798;
                }
                local_870 = (undefined1 **)(longlong)local_770;
                if (local_870 != (undefined1 **)0x0) {
                  local_888 = local_768;
                  local_870 = (undefined1 **)((longlong)local_870 << 3);
                  ppuVar18 = (undefined1 **)0x0;
                  do {
                    local_890 = *(undefined1 ***)((longlong)local_880 + (longlong)ppuVar18);
                    if ((local_888 == (code **)0x0) || (local_888 == (code **)param_1[2])) {
                      FUN_14790fbf8(local_890,param_1,0);
                      if ((param_4 == '\0') &&
                         ((local_898 = (longlong *)FUN_147508a86(local_890),
                          local_898 != (longlong *)0x0 && (local_890[0x11] != (undefined1 *)0x0))))
                      {
LAB_140f49cb4:
                        local_878 = (undefined1 *)param_1[4];
                        if (local_878 != (undefined1 *)0x0) {
                          lVar9 = FUN_144a74fb4();
                          if (((*(int *)(lVar9 + 0x38) <=
                                *(int *)(*(longlong *)((longlong)local_878 + 0x10) + 0x38)) &&
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)((longlong)local_878 + 0x10) + 0x30) +
                                (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                             (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                            FUN_14036294a(param_1[4],1,1);
                          }
                        }
                        local_878 = (undefined1 *)param_1[0x7c];
                        if (local_878 == (undefined1 *)0x0) {
                          local_878 = (undefined1 *)(**(code **)(*param_1 + 0x350))(param_1);
                          param_1[0x7c] = (longlong)local_878;
                        }
                        local_858 = local_898[4];
                        if (local_858 != 0) {
                          lVar9 = FUN_144a74fb4();
                          if (((*(int *)(lVar9 + 0x38) <=
                                *(int *)(*(longlong *)(local_858 + 0x10) + 0x38)) &&
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(local_858 + 0x10) + 0x30) +
                                (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                             (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
                            FUN_14036294a(local_898[4],1,1);
                          }
                        }
                        if (local_898[0x7c] == 0) {
                          lVar9 = (**(code **)(*local_898 + 0x350))();
                          local_898[0x7c] = lVar9;
                        }
                        FUN_1433d6c74(local_890,local_878);
                      }
                    }
                    else {
                      lVar9 = FUN_147508a86(local_890);
                      if ((lVar9 == 0) || (local_888 != *(code ***)(lVar9 + 0x10))) {
                        (**(code **)(*local_890 + 0x108))(local_890,&local_810);
                        local_898 = (longlong *)local_810;
                        local_818 = local_888;
                        if (DAT_14c950c29 == '\x01') {
                          FUN_1456cec3c(local_888);
                        }
                        local_8e8 = &local_801;
                        local_898 = (longlong *)
                                    FUN_14792de52(local_850,param_1,&local_818,local_898);
                        if (local_801 == '\x01') {
                          local_828 = local_778;
                          if (local_778 == (undefined1 **)0x0) {
                            local_828 = &local_798;
                          }
                          local_820 = local_770;
                          FUN_1433d6afe(local_898,&local_828);
                        }
                        FUN_14790fbf8(local_890,param_1,local_898);
                        bVar3 = *(byte *)((longlong)local_898 + 0x31);
                        bVar13 = (*(byte *)(local_890 + 0x17) & 2) << 4;
                        *(byte *)((longlong)local_898 + 0x31) = bVar13 | bVar3;
                        *(byte *)((longlong)local_898 + 0x31) =
                             bVar13 | bVar3 & 0xef |
                             (*(char *)(local_890 + 0x17) << 4 | bVar3) & 0x10;
                        if (param_4 == '\0') goto LAB_140f49cb4;
                      }
                    }
                    ppuVar18 = ppuVar18 + 1;
                  } while (local_870 != ppuVar18);
                }
              }
              if (local_778 != (undefined1 **)0x0) {
                FUN_1400020a8();
              }
              local_7e8 = CONCAT44(local_7e8._4_4_,(uint)local_7e8 & ~local_7f8._4_4_);
              FUN_144a81a4c(&local_7f8);
              iVar4 = local_7e8._4_4_;
              uVar10 = local_7e8;
            } while (local_800 != &local_760 ||
                     (local_7f0 != local_650 || local_7e8._4_4_ != local_864));
          }
          local_620 = 0;
          if (local_628 != 0) {
            FUN_1400020a8();
          }
          FUN_1478faad8(&local_760);
          local_7c0 = CONCAT44(local_7c0._4_4_,(uint)local_7c0 & ~local_7d0._4_4_);
          FUN_144a81a4c(&local_7d0);
          iVar4 = local_7c0._4_4_;
        } while (((local_7c0._4_4_ != iVar17) || (local_7c8 != local_a8)) ||
                (uVar10 = local_7c0, local_7d8 != local_618));
      }
      local_7c0 = uVar10;
      local_78 = 0;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      local_7a0 = (code *)0x100000000;
      local_790 = 0xffffffff;
      local_788 = 0;
      local_798 = local_a8;
      if ((int)local_98 != 0) {
        FUN_144a81a4c(&local_7a0);
      }
      local_760 = local_7a0;
      local_758 = local_798;
      local_750 = local_790;
      uVar10 = local_750;
      local_748 = local_788;
      local_744 = local_784;
      local_750._4_4_ = (int)((ulonglong)local_790 >> 0x20);
      local_768 = local_618;
      if (local_750._4_4_ < *(int *)(local_798 + 0x10)) {
        iVar17 = local_750._4_4_;
        local_750 = uVar10;
        do {
          ppcVar14 = (code **)local_768[0xac];
          if ((code **)local_768[0xac] == (code **)0x0) {
            ppcVar14 = local_768;
          }
          lVar12 = (longlong)iVar17;
          *(undefined4 *)(ppcVar14 + lVar12 * 0x2b + 0x29) = 0;
          if (ppcVar14[lVar12 * 0x2b + 0x28] != (code *)0x0) {
            FUN_1400020a8();
          }
          FUN_1478faad8(ppcVar14 + lVar12 * 0x2b + 1);
          local_750 = CONCAT44(local_750._4_4_,(uint)local_750 & ~local_760._4_4_);
          FUN_144a81a4c(&local_760);
          iVar17 = local_750._4_4_;
          uVar10 = local_750;
        } while (local_750._4_4_ < *(int *)(local_758 + 0x10));
      }
      local_750 = uVar10;
      uVar1 = local_b0 >> 0x20;
      local_b0 = local_b0 & 0xffffffff00000000;
      if ((int)uVar1 != 0) {
        FUN_140f4a670(local_618);
      }
      uStack_90 = 0xffffffff;
      uVar1 = local_98 >> 0x20;
      local_98 = local_98 & 0xffffffff00000000;
      if (0x20 < (uint)uVar1) {
        local_98 = 0x2000000000;
        FUN_14008f53c(local_a8,0);
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_908) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f4a670 FUN_140f4a670 body=92 status=ok
// SIG undefined FUN_140f4a670(void)

void FUN_140f4a670(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x56c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
    if (*(void **)((longlong)param_1 + 0x560) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x560),
              (longlong)*(int *)((longlong)param_1 + 0x568) * 0x158);
      FUN_1446efa72((longlong)param_1 + 0x560,0,0,0x158);
      return;
    }
  }
  return;
}



// FUNCTION 140f4a6cc FUN_140f4a6cc body=617 status=ok
// SIG undefined FUN_140f4a6cc(void)

void FUN_140f4a6cc(undefined8 param_1,longlong param_2)

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
            goto LAB_140f4a7b7;
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
LAB_140f4a7b7:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f4a936(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4a936 FUN_140f4a936 body=131 status=ok
// SIG undefined FUN_140f4a936(void)

void FUN_140f4a936(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x3e0);
  if (0 < (int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x3d8);
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
          uVar2 = *(uint *)(param_1 + 0x3e0);
        }
        *(uint *)(param_1 + 0x3e0) = uVar2 - 1;
        FUN_140f4a9ba(param_1,param_2);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 140f4a9ba FUN_140f4a9ba body=216 status=ok
// SIG undefined FUN_140f4a9ba(void)

void FUN_140f4a9ba(longlong param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*param_2 + 0x4a0))(param_2,&DAT_14cadad9c);
    FUN_1401bf202(param_2);
    (**(code **)(*param_2 + 0xa98))(param_2);
    FUN_140bd5bb0(param_2,0x7f7fffff);
    lVar3 = FUN_1447210f0(param_1);
    dVar1 = *(double *)(lVar3 + 0x6d0);
    iVar2 = *(int *)(param_1 + 0x3f0);
    *(uint *)(param_1 + 0x3f0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x3f4) < iVar2 + 1U) {
      FUN_1457cab7a((longlong *)(param_1 + 1000),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 1000);
    *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(float *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = (float)dVar1;
  }
  return;
}



// FUNCTION 140f4aa92 FUN_140f4aa92 body=90 status=ok
// SIG undefined FUN_140f4aa92(void)

undefined8 * FUN_140f4aa92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140f4aaec(param_1,iVar1,0);
    FUN_140f4abd5(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 140f4aaec FUN_140f4aaec body=233 status=ok
// SIG undefined FUN_140f4aaec(void)

void FUN_140f4aaec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f4abd5 FUN_140f4abd5 body=311 status=ok
// SIG undefined FUN_140f4abd5(void)

void FUN_140f4abd5(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      puVar6[-7] = *param_2;
      puVar6[-6] = 0;
      iVar1 = *(int *)(param_2 + 2);
      pvVar2 = (void *)param_2[1];
      *(int *)(puVar6 + -5) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + -0x24) = 0;
      }
      else {
        FUN_1446dd670(puVar6 + -6,iVar1,0);
        memcpy((void *)puVar6[-6],pvVar2,(longlong)iVar1 * 2);
      }
      *(undefined1 *)(puVar6 + -4) = *(undefined1 *)(param_2 + 3);
      puVar6[-3] = param_2[4];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
      uVar4 = *(undefined4 *)(param_2 + 6);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
      *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar3;
      *(undefined4 *)(puVar6 + -1) = uVar4;
      *(undefined4 *)((longlong)puVar6 + -4) = uVar5;
      *puVar6 = 0;
      iVar1 = *(int *)(param_2 + 8);
      pvVar2 = (void *)param_2[7];
      *(int *)(puVar6 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar6,iVar1,0);
        memcpy((void *)*puVar6,pvVar2,(longlong)iVar1 * 2);
      }
      puVar6[2] = 0;
      iVar1 = *(int *)(param_2 + 10);
      pvVar2 = (void *)param_2[9];
      *(int *)(puVar6 + 3) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar6 + 2,iVar1,0);
        memcpy((void *)puVar6[2],pvVar2,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 0xb);
      param_2 = param_2 + 0xc;
      puVar6 = puVar6 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f4ad0c FUN_140f4ad0c body=271 status=ok
// SIG undefined FUN_140f4ad0c(void)

undefined8 * FUN_140f4ad0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 140f4ae1c FUN_140f4ae1c body=29 status=ok
// SIG undefined FUN_140f4ae1c(void)

undefined8 * FUN_140f4ae1c(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 140f4ae3a FUN_140f4ae3a body=138 status=ok
// SIG undefined FUN_140f4ae3a(void)

bool FUN_140f4ae3a(longlong *param_1,float param_2,undefined8 param_3,float *param_4,
                  undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float extraout_XMM0_Da;
  
  if (param_1[0x4b] == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)param_1[0x4c];
  }
  lVar2 = (**(code **)(*plVar3 + 0x10))();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    if (0 < *(int *)(lVar2 + 0x40)) {
      fVar4 = (float)FUN_1405583ce(*(undefined8 *)(lVar2 + 0x38));
      if (0.0 < fVar4) {
        *param_4 = param_2 / fVar4;
      }
    }
    (**(code **)(*param_1 + 0x58))(param_1,param_3,param_5);
    bVar1 = extraout_XMM0_Da <= *param_4;
  }
  return bVar1;
}



// FUNCTION 140f4aec4 FUN_140f4aec4 body=927 status=ok
// SIG undefined FUN_140f4aec4(void)

float FUN_140f4aec4(longlong param_1,longlong *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  longlong local_b0;
  code *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(param_1 + 0x250);
  if (lVar8 != 0) {
    if (DAT_14cba8288 == 0) {
      local_d0 = &local_a8;
      local_a8 = FUN_141864c34;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_1464cee30;
      local_d8 = &LAB_148bfac22;
      local_e0 = &LAB_140f21842;
      local_e8 = &DAT_149e063b2;
      local_f0 = 0;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (*(longlong *)(lVar8 + 0x3f70) != 0)) {
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x3f70) + 0xfb0);
      local_b0 = lVar8;
      lVar5 = FUN_1405831b2();
      fVar10 = *(float *)(lVar5 + 0x1068);
      uVar2 = local_90;
      if (lVar8 != 0) {
        pcVar1 = (code *)(lVar5 + 0x1070);
        lVar8 = lVar5 + 0x1080;
        local_80 = 0x100000000;
        local_70 = 0xffffffff;
        local_68 = 0;
        iVar7 = 0;
        local_78 = lVar8;
        if (*(int *)(lVar5 + 0x1098) != 0) {
          FUN_1449c0562(&local_80);
          iVar7 = *(int *)(lVar5 + 0x1098);
        }
        local_90 = local_70;
        uVar2 = local_90;
        local_88 = local_68;
        local_84 = local_64;
        local_a0 = local_80;
        local_98 = local_78;
        local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
        local_a8 = pcVar1;
        if ((local_90._4_4_ != iVar7) || (local_78 != lVar8)) {
          iVar4 = local_90._4_4_;
          local_90 = uVar2;
          do {
            local_78 = CONCAT44(local_78._4_4_,
                                *(undefined4 *)(*(longlong *)local_a8 + 8 + (longlong)iVar4 * 0x14))
            ;
            local_80 = *(undefined8 *)(*(longlong *)local_a8 + (longlong)iVar4 * 0x14);
            cVar3 = FUN_14021d296(&local_b0,&local_80);
            if (cVar3 != '\0') {
              fVar10 = (float)local_78;
              uVar2 = local_90;
              break;
            }
            local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
            FUN_1449c0562(&local_a0);
            iVar4 = local_90._4_4_;
          } while (((local_90._4_4_ != iVar7) || (local_98 != lVar8)) ||
                  (uVar2 = local_90, local_a8 != pcVar1));
        }
      }
      local_90 = uVar2;
      lVar8 = FUN_1405831b2();
      iVar7 = -param_3;
      if (-param_3 < 0) {
        iVar7 = param_3;
      }
      if (*(int *)(lVar8 + 0x10c8) <= iVar7) {
        iVar7 = *(int *)(lVar8 + 0x10c8);
      }
      fVar9 = 1.0;
      if (0 < iVar7) {
        if (param_3 < 1) {
          if (-1 < param_3) goto LAB_140f4b059;
          pfVar6 = (float *)(*(longlong *)(lVar8 + 0x10c0) + (ulonglong)(iVar7 - 1U) * 0xc + 8);
        }
        else {
          pfVar6 = (float *)(*(longlong *)(lVar8 + 0x10c0) + (ulonglong)(iVar7 - 1U) * 0xc + 4);
        }
        fVar9 = *pfVar6;
      }
LAB_140f4b059:
      fVar10 = fVar10 * fVar9;
      if (param_2 != (longlong *)0x0) {
        fVar9 = (float)(**(code **)(*param_2 + 0x38))(param_2);
        fVar10 = fVar10 * fVar9;
      }
      goto LAB_140f4b06f;
    }
  }
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
  }
  fVar10 = 1.0;
LAB_140f4b06f:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar10;
}



// FUNCTION 140f4b292 FUN_140f4b292 body=488 status=ok
// SIG undefined FUN_140f4b292(void)

undefined8 * FUN_140f4b292(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b5de920;
  local_28 = "CarryableObjectCategory_Default";
  local_20 = 0x1f;
  local_1c = 0;
  uVar5 = FUN_14001a6c0(&local_28,1);
  param_1[0x8b] = (ulonglong)uVar5;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined8 *)((longlong)param_1 + 0x493) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x44228000;
  uVar4 = DAT_14c8462c8._4_4_;
  uVar3 = (undefined4)DAT_14c8462c8;
  uVar2 = DAT_14c8462c0._4_4_;
  *(undefined4 *)(param_1 + 0x95) = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = uVar2;
  *(undefined4 *)(param_1 + 0x96) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar4;
  param_1[0x97] = DAT_14c8462d0;
  *(undefined2 *)(param_1 + 0x98) = 1;
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
  param_1[0x99] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2f9) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4b48a FUN_140f4b48a body=60 status=ok
// SIG undefined FUN_140f4b48a(void)

undefined8 * FUN_140f4b48a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b753d50;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f4b4cc FUN_140f4b4cc body=228 status=ok
// SIG undefined FUN_140f4b4cc(void)

longlong FUN_140f4b4cc(void)

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
  if (DAT_14cba5c48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bdf51b;
    local_40 = &LAB_145c5e55f;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2600;
    FUN_14081cfa3(L"/Script/OakGame",L"MissionUsable",&DAT_14cba5c48,&DAT_148bdf51a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5c48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4b5c0 FUN_140f4b5c0 body=72 status=ok
// SIG undefined FUN_140f4b5c0(void)

undefined8 * FUN_140f4b5c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b07dc30;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f4b608 FUN_140f4b608 body=21 status=ok
// SIG undefined FUN_140f4b608(void)

undefined8 FUN_140f4b608(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140f4b634 FUN_140f4b634 body=42 status=ok
// SIG undefined FUN_140f4b634(void)

void FUN_140f4b634(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140e50888(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f4b649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_140f4b674();
  FUN_14104c314(uVar2);
  return;
}



// FUNCTION 140f4b65e FUN_140f4b65e body=21 status=ok
// SIG undefined FUN_140f4b65e(void)

void FUN_140f4b65e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140f4b674();
  FUN_14104c314(uVar1);
  return;
}



// FUNCTION 140f4b674 FUN_140f4b674 body=113 status=ok
// SIG undefined FUN_140f4b674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f4b674(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb6ff30;
  if (DAT_14cb6ff30 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1400,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x28;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb6ff30;
    DAT_14cb6ff38 = DAT_14cb6ff38 + 0x10;
  }
  DAT_14cb6ff30 = (undefined8 *)*puVar2;
  _DAT_14cb6ff3c = _DAT_14cb6ff3c + 1;
  return;
}



// FUNCTION 140f4b6e6 FUN_140f4b6e6 body=198 status=ok
// SIG undefined FUN_140f4b6e6(void)

int FUN_140f4b6e6(longlong param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x108);
    iVar6 = iVar5 + param_2;
    *(int *)(param_1 + 0x108) = iVar6;
    iVar1 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf8);
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,iVar6);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
      iVar6 = *(int *)(param_1 + 0x108);
    }
    if (iVar5 < iVar6) {
      lVar3 = (longlong)iVar5;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + lVar3 * 4) = param_3;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x108));
    }
    FUN_140f4b7ac(param_1 + 400,param_2,param_4);
  }
  return iVar5;
}



// FUNCTION 140f4b7ac FUN_140f4b7ac body=100 status=ok
// SIG undefined FUN_140f4b7ac(void)

int FUN_140f4b7ac(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if ((longlong)iVar2 != 0) {
    iVar3 = *(int *)(*plVar1 + (longlong)(iVar2 + -1) * 4);
    iVar4 = -iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar3;
    }
  }
  if (param_2 != 0) {
    iVar3 = -(param_2 + iVar4);
    if (param_3 != '\0') {
      iVar3 = param_2 + iVar4;
    }
    *(uint *)(param_1 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar3;
  }
  return iVar4;
}



// FUNCTION 140f4b81a FUN_140f4b81a body=1535 status=ok
// SIG undefined FUN_140f4b81a(void)

undefined8 FUN_140f4b81a(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bd42e8();
  FUN_14480c34d(param_2,param_1 + 0x18);
  local_3c = *(uint *)(param_1 + 0x38);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    }
    else {
      FUN_14572512c(param_2,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  local_40 = *(uint *)(param_1 + 0x78);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_40,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    local_40 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    plVar6 = (longlong *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 < (int)local_3c) {
      *(uint *)(param_1 + 0x38) = local_3c;
      uVar8 = local_3c - iVar2;
      if ((uint)(*(int *)(param_1 + 0x3c) - iVar2) < uVar8) {
        FUN_14475e4ac(plVar6);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar6),0,(longlong)(int)uVar8 << 2);
    }
    else {
      uVar8 = local_3c;
      if ((int)local_3c < 0) goto LAB_140f4bd82;
      if ((int)local_3c < iVar2) {
        *(uint *)(param_1 + 0x38) = local_3c;
        FUN_1401fef06(plVar6);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 < (int)local_3c) {
      *(uint *)(param_1 + 0x48) = local_3c;
      uVar8 = local_3c - iVar2;
      if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar8) {
        FUN_14475e4ac(plVar6);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar6),0,(longlong)(int)uVar8 << 2);
    }
    else {
      uVar8 = local_3c;
      if ((int)local_3c < 0) goto LAB_140f4bd82;
      if ((int)local_3c < iVar2) {
        *(uint *)(param_1 + 0x48) = local_3c;
        FUN_1401fef06(plVar6);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 < (int)local_3c) {
      *(uint *)(param_1 + 0x58) = local_3c;
      uVar8 = local_3c - iVar2;
      if ((uint)(*(int *)(param_1 + 0x5c) - iVar2) < uVar8) {
        FUN_14475e4ac(plVar6);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar6),0,(longlong)(int)uVar8 << 2);
    }
    else {
      uVar8 = local_3c;
      if ((int)local_3c < 0) goto LAB_140f4bd82;
      if ((int)local_3c < iVar2) {
        *(uint *)(param_1 + 0x58) = local_3c;
        FUN_1401fef06(plVar6);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x68);
    if (iVar2 < (int)local_3c) {
      *(uint *)(param_1 + 0x68) = local_3c;
      uVar8 = local_3c - iVar2;
      if ((uint)(*(int *)(param_1 + 0x6c) - iVar2) < uVar8) {
        FUN_14475e4ac(plVar6);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar6),0,(longlong)(int)uVar8 << 2);
    }
    else {
      uVar8 = local_3c;
      if ((int)local_3c < 0) goto LAB_140f4bd82;
      if ((int)local_3c < iVar2) {
        *(uint *)(param_1 + 0x68) = local_3c;
        FUN_1401fef06(plVar6);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x80);
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 < (int)local_3c) {
      *(uint *)(param_1 + 0x88) = local_3c;
      uVar8 = local_3c - iVar2;
      if ((uint)(*(int *)(param_1 + 0x8c) - iVar2) < uVar8) {
        FUN_1446f48e2(plVar6);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar6),0,(longlong)(int)uVar8 << 2);
    }
    else {
      uVar8 = local_3c;
      if ((int)local_3c < 0) goto LAB_140f4bd82;
      if ((int)local_3c < iVar2) {
        *(uint *)(param_1 + 0x88) = local_3c;
        FUN_14479f406(plVar6);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x90);
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 < (int)local_3c) {
      *(uint *)(param_1 + 0x98) = local_3c;
      uVar8 = local_3c - iVar2;
      if ((uint)(*(int *)(param_1 + 0x9c) - iVar2) < uVar8) {
        FUN_1446f48e2(plVar6);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar6),0,(longlong)(int)uVar8 << 2);
    }
    else {
      uVar8 = local_3c;
      if ((int)local_3c < 0) goto LAB_140f4bd82;
      if ((int)local_3c < iVar2) {
        *(uint *)(param_1 + 0x98) = local_3c;
        FUN_14479f406(plVar6);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 < (int)local_40) {
      *(uint *)(param_1 + 0x78) = local_40;
      uVar8 = local_40 - iVar2;
      if ((uint)(*(int *)(param_1 + 0x7c) - iVar2) < uVar8) {
        FUN_14475e4ac(plVar6);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar6),0,(longlong)(int)uVar8 << 2);
    }
    else {
      uVar8 = local_40;
      if ((int)local_40 < 0) {
LAB_140f4bd82:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar8);
      }
      if ((int)local_40 < iVar2) {
        *(uint *)(param_1 + 0x78) = local_40;
        FUN_1401fef06(plVar6);
      }
    }
  }
  if (0 < (int)local_3c) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar9);
      puVar4 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar7 = *puVar4;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 4;
    } while (lVar10 < (int)local_3c);
  }
  piVar5 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
    local_3c = (uint)*(byte *)(param_1 + 0xa8);
    (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    if (1 < local_3c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xa8) = local_3c != 0;
  }
  else {
    *(bool *)(param_1 + 0xa8) = *piVar5 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar5 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
    local_3c = (uint)*(byte *)(param_1 + 0xa9);
    (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    if (1 < local_3c) {
      FUN_14572541c(param_2);
    }
    plVar6 = (longlong *)(ulonglong)local_3c;
    *(bool *)(param_1 + 0xa9) = local_3c != 0;
  }
  else {
    *(bool *)(param_1 + 0xa9) = *piVar5 != 0;
    plVar6 = (longlong *)param_2[1];
    *plVar6 = *plVar6 + 4;
  }
  *param_4 = 1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4be1a FUN_140f4be1a body=84 status=ok
// SIG undefined FUN_140f4be1a(void)

void FUN_140f4be1a(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_140f4be70(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4be70 FUN_140f4be70 body=101 status=ok
// SIG undefined FUN_140f4be70(void)

void FUN_140f4be70(undefined8 *param_1,longlong param_2)

{
  FUN_140659b5e(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 140f4bed6 FUN_140f4bed6 body=2106 status=ok
// SIG undefined FUN_140f4bed6(void)

void FUN_140f4bed6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  uint *puVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  uint local_a4;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  uint *local_90;
  uint *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  uint *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[0x13] != 0) goto LAB_140f4c0dd;
  lVar22 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_2 + 0x80);
  if (plVar14 == (longlong *)0x0) {
LAB_140f4bf8a:
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar13 = (int)plVar14[1];
    do {
      if (iVar13 == 0) goto LAB_140f4bf8a;
      LOCK();
      iVar16 = (int)plVar14[1];
      bVar26 = iVar13 == iVar16;
      if (bVar26) {
        *(int *)(plVar14 + 1) = iVar13 + 1;
        iVar16 = iVar13;
      }
      iVar13 = iVar16;
      UNLOCK();
    } while (!bVar26);
  }
  lVar19 = *(longlong *)(param_2 + 0x78);
  bVar26 = true;
  if (plVar4 != (longlong *)0x0) {
    iVar13 = (int)plVar4[1];
    do {
      if (iVar13 == 0) goto LAB_140f4bf66;
      LOCK();
      iVar16 = (int)plVar4[1];
      bVar27 = iVar13 == iVar16;
      if (bVar27) {
        *(int *)(plVar4 + 1) = iVar13 + 1;
        iVar16 = iVar13;
      }
      iVar13 = iVar16;
      UNLOCK();
    } while (!bVar27);
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
    bVar26 = false;
  }
LAB_140f4bf66:
  if (plVar14 == (longlong *)0x0) {
    lVar19 = 0;
  }
  else {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  lVar20 = 0;
  if (!bVar26) {
    lVar20 = lVar22;
  }
  if (lVar19 != lVar20) {
    iVar13 = *(int *)(param_2 + 0x20);
    if ((longlong)iVar13 != 0) {
      iVar16 = *(int *)(param_2 + 0x30);
      if ((longlong)iVar16 != 0) {
        lVar19 = *(longlong *)(param_2 + 0x18);
        lVar20 = lVar19;
        do {
          if ((longlong)*(int *)(lVar20 + 0x10) != 0) {
            piVar23 = *(int **)(lVar20 + 8);
            piVar2 = piVar23 + (longlong)*(int *)(lVar20 + 0x10) * 2;
            do {
              if (((*piVar23 < 0) || (iVar16 <= *piVar23)) || (1 < (uint)piVar23[1]))
              goto LAB_140f4c0ce;
              piVar23 = piVar23 + 2;
            } while (piVar23 != piVar2);
          }
          lVar20 = lVar20 + 0x50;
        } while (lVar20 != (longlong)iVar13 * 0x50 + lVar19);
        lVar17 = *(longlong *)(param_2 + 0x28);
        lVar20 = lVar17 + (longlong)iVar16 * 0x24;
        do {
          lVar21 = 8;
          do {
            iVar16 = *(int *)(lVar17 + lVar21);
            if ((((longlong)iVar16 < 0) || (iVar13 <= iVar16)) ||
               ((iVar12 = *(int *)(lVar17 + 4 + lVar21), iVar12 < 0 ||
                (*(int *)(lVar19 + 0x10 + (longlong)iVar16 * 0x50) <= iVar12)))) goto LAB_140f4c0ce;
            lVar21 = lVar21 + 0xc;
          } while (lVar21 != 0x20);
          lVar17 = lVar17 + 0x24;
        } while (lVar17 != lVar20);
        plVar14 = *(longlong **)(param_2 + 0x80);
        if (plVar14 != (longlong *)0x0) {
          iVar13 = (int)plVar14[1];
          do {
            if (iVar13 == 0) goto LAB_140f4c078;
            LOCK();
            iVar16 = (int)plVar14[1];
            bVar26 = iVar13 == iVar16;
            if (bVar26) {
              *(int *)(plVar14 + 1) = iVar13 + 1;
              iVar16 = iVar13;
            }
            iVar13 = iVar16;
            UNLOCK();
          } while (!bVar26);
          lVar19 = *(longlong *)(param_2 + 0x78);
          if (lVar19 != 0) {
            local_80 = plVar14;
            if (*(longlong *)(lVar19 + 0x98) == 0) {
              uVar10 = *(uint *)(lVar19 + 0xd0);
              local_b0 = lVar19;
              if ((longlong)(int)uVar10 != 0) {
                iVar13 = (int)param_1[0x1a];
                *(uint *)(param_1 + 0x1a) = iVar13 + uVar10;
                if ((uint)(*(int *)((longlong)param_1 + 0xd4) - iVar13) < uVar10) {
                  FUN_140f4c9aa(param_1 + 0x19,iVar13);
                }
                memcpy((void *)((longlong)iVar13 * 8 + param_1[0x19]),*(void **)(local_b0 + 200),
                       (longlong)(int)uVar10 << 3);
                iVar13 = *(int *)(local_b0 + 0xd0);
                lVar19 = local_b0;
                if ((longlong)iVar13 != 0) {
                  lVar20 = *(longlong *)(local_b0 + 200);
                  lVar17 = 0;
                  do {
                    lVar21 = *(longlong *)(lVar20 + lVar17);
                    if (lVar21 != 0) {
                      if (plVar4 != (longlong *)0x0) {
                        LOCK();
                        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
                        UNLOCK();
                      }
                      plVar14 = *(longlong **)(lVar21 + 0x80);
                      *(longlong *)(lVar21 + 0x78) = lVar22;
                      *(longlong **)(lVar21 + 0x80) = plVar4;
                      if (plVar14 != (longlong *)0x0) {
                        LOCK();
                        piVar2 = (int *)((longlong)plVar14 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar14 + 0x10))();
                          lVar19 = local_b0;
                        }
                      }
                    }
                    lVar17 = lVar17 + 8;
                  } while ((longlong)iVar13 * 8 != lVar17);
                }
              }
              uVar10 = *(uint *)(lVar19 + 0xe0);
              if ((longlong)(int)uVar10 != 0) {
                iVar13 = (int)param_1[0x1c];
                *(uint *)(param_1 + 0x1c) = iVar13 + uVar10;
                if ((uint)(*(int *)((longlong)param_1 + 0xe4) - iVar13) < uVar10) {
                  FUN_140f4cb96(param_1 + 0x1b,iVar13);
                  lVar19 = local_b0;
                }
                memcpy((void *)((longlong)iVar13 * 8 + param_1[0x1b]),*(void **)(lVar19 + 0xd8),
                       (longlong)(int)uVar10 << 3);
                lVar19 = local_b0;
              }
              local_98 = param_1 + 2;
              uVar10 = (int)param_1[3] - *(int *)((longlong)param_1 + 0x44);
              uVar15 = (*(int *)(lVar19 + 0x18) - *(int *)(lVar19 + 0x44)) + uVar10;
              if (uVar10 < uVar15) {
                if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456acd4b((longlong)(int)uVar15);
                }
                FUN_140f4ccf8(local_98,uVar15);
                if (uVar15 < 4) {
                  iVar13 = 1;
                }
                else {
                  uVar10 = (uVar15 | 1) + 0xe;
                  iVar13 = 0x1f;
                  if (uVar10 != 0) {
                    for (; uVar10 >> iVar13 == 0; iVar13 = iVar13 + -1) {
                    }
                  }
                  iVar13 = 1 << ((byte)iVar13 & 0x1f);
                }
                if (((int)param_1[0xb] == 0) || (lVar19 = local_b0, (int)param_1[0xb] < iVar13)) {
                  *(int *)(param_1 + 0xb) = iVar13;
                  FUN_141305170(local_98);
                  lVar19 = local_b0;
                }
              }
              puVar18 = (uint *)(lVar19 + 0x20);
              local_70 = 0x100000000;
              local_60 = 0xffffffff;
              local_58 = 0;
              local_68 = puVar18;
              if (*(int *)(lVar19 + 0x38) == 0) {
                uVar25 = 1;
                local_a4 = 0xffffffff;
                uVar10 = 0;
                local_60._4_4_ = 0;
                iVar13 = 0;
              }
              else {
                FUN_1449c0562(&local_70);
                uVar25 = local_70 >> 0x20;
                local_a4 = (uint)local_60;
                uVar10 = *(uint *)(local_b0 + 0x38);
                lVar19 = local_b0;
                iVar13 = (int)local_70;
              }
              if (local_60._4_4_ != uVar10 || local_68 != puVar18) {
                local_78 = param_1 + 9;
                uVar15 = local_60._4_4_;
                iVar16 = local_58;
                local_a0 = uVar10;
                local_90 = puVar18;
                local_88 = local_68;
                do {
                  plVar14 = local_98;
                  lVar22 = *(longlong *)(lVar19 + 0x10);
                  local_9c = iVar16;
                  FUN_140f4c7d4(local_98,&local_70);
                  puVar8 = local_68;
                  puVar24 = local_88;
                  puVar3 = (undefined8 *)(lVar22 + (longlong)(int)uVar15 * 0x28);
                  uVar7 = puVar3[1];
                  *(undefined8 *)local_68 = *puVar3;
                  *(undefined8 *)(local_68 + 2) = uVar7;
                  puVar18 = (uint *)(lVar22 + 0x10 + (longlong)(int)uVar15 * 0x28);
                  uVar10 = puVar18[1];
                  uVar15 = puVar18[2];
                  uVar6 = puVar18[3];
                  local_68[4] = *puVar18;
                  local_68[5] = uVar10;
                  local_68[6] = uVar15;
                  local_68[7] = uVar6;
                  local_68[8] = 0xffffffff;
                  local_4c = (int)local_70;
                  uVar10 = *local_68;
                  uVar15 = ((uint)(*(ulonglong *)(local_68 + 2) >> 0x14) & 0xffff ^
                           (uint)(*(ulonglong *)(local_68 + 2) >> 4)) * -0x7a143595;
                  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                  uVar10 = (uVar15 >> 0x10 ^ uVar15) + (uVar10 >> 2) + uVar10 * 0x40 + 0x9e3779b9 ^
                           uVar10;
                  local_b8 = 0;
                  cVar9 = FUN_140f4c72e(plVar14,uVar10,local_68,&local_4c);
                  if (cVar9 == '\0') {
                    uVar15 = (int)param_1[3] - *(int *)((longlong)param_1 + 0x44);
                    if (uVar15 < 4) {
                      iVar16 = 1;
                    }
                    else {
                      uVar11 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
                      lVar22 = 0x3f;
                      if (uVar11 != 0) {
                        for (; uVar11 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                        }
                      }
                      iVar16 = 1 << ((byte)lVar22 & 0x1f);
                    }
                    if (((int)uVar15 < 1) || (iVar16 <= (int)param_1[0xb])) {
                      uVar10 = (int)param_1[0xb] - 1U & uVar10;
                      puVar8[9] = uVar10;
                      plVar14 = (longlong *)param_1[10];
                      if ((longlong *)param_1[10] == (longlong *)0x0) {
                        plVar14 = local_78;
                      }
                      puVar8[8] = *(uint *)((longlong)plVar14 +
                                           ((longlong)(int)param_1[0xb] - 1U & (longlong)(int)uVar10
                                           ) * 4);
                      plVar14 = (longlong *)param_1[10];
                      if ((longlong *)param_1[10] == (longlong *)0x0) {
                        plVar14 = local_78;
                      }
                      *(undefined4 *)
                       ((longlong)plVar14 +
                       ((longlong)(int)param_1[0xb] - 1U & (longlong)(int)uVar10) * 4) = local_4c;
                    }
                    else {
                      *(int *)(param_1 + 0xb) = iVar16;
                      FUN_141305170(local_98);
                    }
                  }
                  local_a4 = local_a4 & ~(uint)uVar25;
                  puVar18 = *(uint **)(puVar24 + 4);
                  if (*(uint **)(puVar24 + 4) == (uint *)0x0) {
                    puVar18 = puVar24;
                  }
                  uVar10 = puVar24[6];
                  lVar22 = (longlong)iVar13;
                  uVar15 = puVar18[lVar22] & local_a4;
                  iVar16 = local_9c;
                  if (uVar15 == 0) {
                    iVar12 = uVar10 + 0x1e;
                    if (-1 < (int)(uVar10 - 1)) {
                      iVar12 = uVar10 - 1;
                    }
                    iVar12 = iVar12 >> 5;
                    iVar16 = local_9c + 0x20;
                    iVar5 = iVar12;
                    if (iVar12 < iVar13) {
                      iVar5 = iVar13;
                    }
                    if (iVar13 < iVar12) {
                      lVar19 = 0;
                      do {
                        uVar15 = puVar18[lVar22 + lVar19 + 1];
                        if (uVar15 != 0) {
                          iVar13 = iVar13 + (int)lVar19 + 1;
                          local_a4 = 0xffffffff;
                          goto LAB_140f4c4d2;
                        }
                        iVar16 = iVar16 + 0x20;
                        lVar19 = lVar19 + 1;
                      } while (iVar5 - lVar22 != lVar19);
                      local_a4 = 0xffffffff;
                      iVar13 = iVar5;
                    }
                    iVar13 = iVar13 + 1;
                    puVar24 = local_88;
                    uVar15 = uVar10;
                  }
                  else {
LAB_140f4c4d2:
                    uVar25 = (ulonglong)(-uVar15 & uVar15);
                    uVar11 = uVar25 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar11 != 0) {
                      for (; uVar11 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    uVar15 = (iVar16 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    if ((int)uVar10 <= (int)uVar15) {
                      uVar15 = uVar10;
                    }
                  }
                  lVar19 = local_b0;
                } while (uVar15 != local_a0 || puVar24 != local_90);
              }
              *(undefined4 *)(lVar19 + 0xd0) = 0;
              if (*(int *)(lVar19 + 0xd4) < 0) {
                FUN_1488dcf48(lVar19 + 200);
              }
            }
            plVar1 = local_80;
            LOCK();
            plVar14 = local_80 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
            goto LAB_140f4c0ce;
          }
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
LAB_140f4c078:
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
        }
        plVar14 = *(longlong **)(param_2 + 0x80);
        *(longlong *)(param_2 + 0x78) = lVar22;
        *(longlong **)(param_2 + 0x80) = plVar4;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
        iVar13 = (int)param_1[0x1a];
        *(uint *)(param_1 + 0x1a) = iVar13 + 1U;
        if (*(uint *)((longlong)param_1 + 0xd4) < iVar13 + 1U) {
          FUN_140f4c9aa(param_1 + 0x19,iVar13);
        }
        *(longlong *)(param_1[0x19] + (longlong)iVar13 * 8) = param_2;
      }
    }
  }
LAB_140f4c0ce:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
  }
LAB_140f4c0dd:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f4c72e FUN_140f4c72e body=166 status=ok
// SIG undefined FUN_140f4c72e(void)

void FUN_140f4c72e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  longlong *plVar10;
  int iVar11;
  
  uVar9 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar9 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 == -1) {
      uVar9 = 0;
    }
    else {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x28);
        if ((*piVar1 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar11 * 0x28) == *(longlong *)(param_3 + 2))) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_140f4cb0c(iVar2,*param_4,1);
          *param_4 = iVar11;
          uVar9 = 1;
          break;
        }
        iVar11 = piVar1[8];
        uVar9 = 0;
      } while (iVar11 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 140f4c7d4 FUN_140f4c7d4 body=470 status=ok
// SIG undefined FUN_140f4c7d4(void)

int * FUN_140f4c7d4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140549c28(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140f4c9aa FUN_140f4c9aa body=353 status=ok
// SIG undefined FUN_140f4c9aa(void)

void FUN_140f4c9aa(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f4ca2f;
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
LAB_140f4ca2f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f4cb0c FUN_140f4cb0c body=138 status=ok
// SIG undefined FUN_140f4cb0c(void)

void FUN_140f4cb0c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f4cb96 FUN_140f4cb96 body=353 status=ok
// SIG undefined FUN_140f4cb96(void)

void FUN_140f4cb96(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f4cc1b;
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
LAB_140f4cc1b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f4ccf8 FUN_140f4ccf8 body=421 status=ok
// SIG undefined FUN_140f4ccf8(void)

void FUN_140f4ccf8(longlong *param_1,uint param_2)

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
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x28 + -0x24);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar8 + -1;
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
        puVar5 = puVar5 + -10;
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



// FUNCTION 140f4ce9e FUN_140f4ce9e body=1384 status=ok
// SIG undefined FUN_140f4ce9e(void)

void FUN_140f4ce9e(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 auStack_7f8 [32];
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined *local_7c8;
  code *local_7c0;
  longlong local_7b8;
  longlong lStack_7b0;
  void *local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_790;
  undefined1 local_788 [1792];
  undefined1 *local_88;
  uint local_80;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar4 = FUN_1446ddbd2();
    local_7d0 = CONCAT44(local_7d0._4_4_,2);
    local_7d8 = CONCAT71(local_7d8._1_7_,1);
    FUN_140021b28(local_788,uVar4,param_2,param_3);
    if (0 < (int)local_80) {
      do {
        puVar6 = local_88;
        if (local_88 == (undefined1 *)0x0) {
          puVar6 = local_788;
        }
        puVar7 = *(undefined1 **)(puVar6 + (ulonglong)local_80 * 0xe0 + -0x18);
        if (*(undefined1 **)(puVar6 + (ulonglong)local_80 * 0xe0 + -0x18) == (undefined1 *)0x0) {
          puVar7 = puVar6 + (ulonglong)local_80 * 0xe0 + -0xd8;
        }
        lVar2 = *(longlong *)
                 (puVar7 + (longlong)*(int *)(puVar6 + (ulonglong)local_80 * 0xe0 + -8) * 0x18);
        if (lVar2 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(lVar2 + 0x20);
        }
        plVar3 = *(longlong **)
                  (puVar7 + (longlong)*(int *)(puVar6 + (ulonglong)local_80 * 0xe0 + -8) * 0x18 + 8)
        ;
        if ((longlong)(int)param_5[1] != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*param_5 + lVar8) == lVar5) {
              local_68 = 1;
              goto LAB_140f4d07e;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)param_5[1] * 8 != lVar8);
        }
        local_7a8 = (void *)0x0;
        uStack_7a0 = 0;
        local_7b8 = 0;
        lStack_7b0 = 0;
        if (lVar2 != 0) {
          lVar5 = *(longlong *)(lVar2 + 8);
          lVar8 = FUN_140f4d408();
          if (*(ulonglong *)(lVar8 + 8) == 0) {
            bVar10 = lVar5 != 0;
            if (lVar5 != lVar8 && bVar10) {
              do {
                lVar5 = *(longlong *)(lVar5 + 0x30);
                bVar10 = lVar5 != 0;
                if (lVar5 == lVar8) break;
              } while (lVar5 != 0);
            }
            if (!bVar10) goto LAB_140f4cfdc;
LAB_140f4d09a:
            if (plVar3 != (longlong *)0x0) {
              local_7b8 = plVar3[1];
              lStack_7b0 = plVar3[2];
              if (&local_7a8 != (void **)(plVar3 + 3)) {
                uVar1 = *(uint *)(plVar3 + 4);
                _Src = (void *)plVar3[3];
                uStack_7a0 = CONCAT44(uStack_7a0._4_4_,uVar1);
                if (uVar1 == 0 && uStack_7a0._4_4_ == 0) {
                  uStack_7a0 = (ulonglong)uVar1;
                }
                else {
                  FUN_1446dd670(&local_7a8,uVar1);
                  if (uVar1 != 0) {
                    memcpy(local_7a8,_Src,(longlong)(int)uVar1 * 2);
                  }
                }
              }
            }
          }
          else {
            if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar8 + 8)) != 0) goto LAB_140f4d09a;
LAB_140f4cfdc:
            puVar9 = *(undefined **)(lVar2 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1))
            {
              FUN_1446f4b16();
              local_7c0 = FUN_140f17fc6;
              local_7c8 = &DAT_14c951c78;
              local_7d0 = 0;
              local_7d8 = 0x24008001;
              FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
              atexit(FUN_142818859);
              _Init_thread_footer(&DAT_14c9529b0);
            }
            if (DAT_14c952968 == 0) {
              bVar10 = puVar9 != (undefined *)0x0;
              if (puVar9 != &DAT_14c952960 && bVar10) {
                do {
                  puVar9 = *(undefined **)(puVar9 + 0x30);
                  bVar10 = puVar9 != (undefined *)0x0;
                  if (puVar9 == &DAT_14c952960) break;
                } while (puVar9 != (undefined *)0x0);
              }
              if (bVar10) goto LAB_140f4d378;
LAB_140f4d020:
              puVar9 = *(undefined **)(lVar2 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952a58) &&
                 (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                local_7c8 = (undefined *)FUN_1446ddbd2();
                local_7c0 = FUN_1403a682c;
                local_7d0 = 0;
                local_7d8 = 0x108001;
                FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                atexit(FUN_142818c9e);
                _Init_thread_footer(&DAT_14c952a58);
              }
              if (DAT_14c952a10 == 0) {
                bVar10 = puVar9 != (undefined *)0x0;
                if (puVar9 != &DAT_14c952a08 && bVar10) {
                  do {
                    puVar9 = *(undefined **)(puVar9 + 0x30);
                    bVar10 = puVar9 != (undefined *)0x0;
                    if (puVar9 == &DAT_14c952a08) break;
                  } while (puVar9 != (undefined *)0x0);
                }
                if (bVar10) goto LAB_140f4d111;
              }
              else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) != 0) {
LAB_140f4d111:
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9491a8) &&
                   (FUN_144b3d300(&DAT_14c9491a8), DAT_14c9491a8 == -1)) {
                  FUN_1446f470e(&local_790,L"SoftObjectPath");
                  DAT_14c9491a0 = FUN_141473ad5(local_790);
                  _Init_thread_footer(&DAT_14c9491a8);
                }
                if ((*(longlong *)(lVar2 + 0x70) == DAT_14c9491a0) ||
                   (lVar5 = FUN_140f4d4be(), *(longlong *)(lVar2 + 0x70) == lVar5)) {
                  if (plVar3 != (longlong *)0x0) {
                    local_7b8 = *plVar3;
                    lStack_7b0 = plVar3[1];
                    FUN_144a787a6(&local_7a8,plVar3 + 2);
                  }
                  local_68 = 1;
                }
              }
            }
            else {
              if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952968) == 0) goto LAB_140f4d020;
LAB_140f4d378:
              if (plVar3 != (longlong *)0x0) {
                local_7b8 = plVar3[1];
                lStack_7b0 = plVar3[2];
                FUN_144a787a6(&local_7a8,plVar3 + 3);
              }
            }
          }
          if (local_7b8 != 0) {
            FUN_144a6c37a(param_4,&local_7b8);
          }
        }
        if (local_7a8 != (void *)0x0) {
          FUN_1400020a8();
        }
LAB_140f4d07e:
        FUN_140caedf2(local_788);
      } while (0 < (int)local_80);
    }
    FUN_140021a7a(local_788);
  }
  if ((local_60 ^ (ulonglong)auStack_7f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f4d408 FUN_140f4d408 body=181 status=ok
// SIG undefined FUN_140f4d408(void)

undefined * FUN_140f4d408(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952958) {
    FUN_144b3d300(&DAT_14c952958);
    if (DAT_14c952958 == -1) {
      FUN_1446ef9c4();
      FUN_14000176a(&DAT_14c952908,L"FSoftClassProperty",0x200000000,0,0x224008001,0,&DAT_14c952960,
                    FUN_145dc52f2);
      atexit(FUN_14281882c);
      _Init_thread_footer(&DAT_14c952958);
    }
  }
  return &DAT_14c952908;
}



// FUNCTION 140f4d4be FUN_140f4d4be body=164 status=ok
// SIG undefined FUN_140f4d4be(void)

undefined8 FUN_140f4d4be(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9491b8) {
    FUN_144b3d300(&DAT_14c9491b8);
    if (DAT_14c9491b8 == -1) {
      FUN_1446f470e(&local_18,L"SoftClassPath",1);
      DAT_14c9491b0 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c9491b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c9491b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4d564 FUN_140f4d564 body=26 status=ok
// SIG undefined FUN_140f4d564(void)

void FUN_140f4d564(undefined8 param_1)

{
  FUN_140f4d57e();
  FUN_1401a021e(param_1);
  return;
}



// FUNCTION 140f4d57e FUN_140f4d57e body=1846 status=ok
// SIG undefined FUN_140f4d57e(void)

void FUN_140f4d57e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1[0xe3] == 0) || (lVar6 = FUN_1457b68d8(param_1[0x15]), lVar6 == 0))
  goto LAB_140f4d91e;
  lVar14 = param_1[0x15];
  if (*(int *)(lVar6 + 0x20) == 0) {
LAB_140f4db53:
    lVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar6 + 0x1c);
    lVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(lVar6 + 0x20) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))
         ) goto LAB_140f4db53;
      lVar10 = *plVar7;
    }
  }
  if ((lVar14 != 0) && (lVar10 == 0)) {
    lVar10 = FUN_140f4df0c(lVar14);
    cVar5 = '\x01';
    if ((lVar10 != 0) && ((*(byte *)(lVar14 + 0x60) & 2) != 0)) {
      cVar5 = FUN_1401b0ffe(lVar10);
    }
    if ((lVar10 != 0) && (cVar5 != '\0')) {
      local_88 = (code *)&LAB_1458ec534;
      local_80 = 0;
      FUN_1457cae08(lVar10 + 0x28,local_90,param_1);
    }
  }
  FUN_140457ffc(lVar6,param_1);
  local_88 = (code *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pcVar4 = local_88;
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14b3e7b60;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  *(longlong *)(local_88 + 0x10) = lVar10;
  *(undefined ***)local_88 = &PTR_FUN_14b3e75e0;
  *(undefined8 *)(local_88 + 0x18) = 0;
  iVar12 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_88 + 0x18) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar12 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar12 = *(int *)(lVar14 + 0x10);
      bVar17 = iVar12 == 0;
      if (bVar17) {
        *(int *)(lVar14 + 0x10) = iVar15;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar12 = iVar15;
      }
    }
  }
  *(int *)(pcVar4 + 0x1c) = iVar12;
  *(undefined1 **)(pcVar4 + 0x20) = &LAB_1458f7332;
  *(undefined4 *)(pcVar4 + 0x28) = 0;
  FUN_140f4dcf0(lVar6,local_90,&local_88);
  if (local_80 == 0) {
LAB_140f4d727:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_140f4d727;
  }
  if (*(int *)(lVar6 + 0x20) == 0) {
LAB_140f4d8ff:
    uVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar6 + 0x1c);
    uVar9 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if ((lVar14 == 0) ||
         ((((*(int *)(lVar14 + 0x10) != *(int *)(lVar6 + 0x20) ||
            ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)) || (*(longlong *)(lVar6 + 0x30) == 0)) ||
          (*(int *)(lVar6 + 0x2c) == 0)))) goto LAB_140f4d8ff;
      uVar3 = *(uint *)(lVar6 + 0x28);
      uVar9 = 0;
      if (((int)uVar3 < 0) || (uVar9 = 0, DAT_14c9647dc <= (int)uVar3)) goto LAB_140f4d902;
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if ((lVar14 == 0) ||
         (((*(int *)(lVar14 + 0x10) != *(int *)(lVar6 + 0x2c) ||
           ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)) || (lVar14 = FUN_140f4dcb6(), lVar14 == 0)))
         ) goto LAB_140f4d8ff;
      uVar3 = *(uint *)(lVar14 + 0xc);
      local_88 = (code *)(ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      uVar11 = *(uint *)(lVar14 + 0x10);
      if (*(uint *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        uVar13 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar13);
        }
        LOCK();
        uVar11 = *(uint *)(lVar14 + 0x10);
        bVar17 = uVar11 == 0;
        if (bVar17) {
          *(uint *)(lVar14 + 0x10) = uVar13;
          uVar11 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_88;
        if (bVar17) {
          uVar11 = uVar13;
        }
      }
      local_88._0_4_ = uVar3;
      local_88 = (code *)CONCAT44(uVar11,(uint)local_88);
      plVar7 = (longlong *)FUN_1407699b8(lVar6 + 0x50,uVar11 ^ (uint)local_88);
      lVar14 = *plVar7;
      if (lVar14 == 0) {
        plVar8 = (longlong *)FUN_14001cc68(0x80,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_14b3e7190;
        plVar8[2] = *(longlong *)(lVar6 + 0x1c);
        lVar14 = *(longlong *)(lVar6 + 0x30);
        plVar8[3] = *(longlong *)(lVar6 + 0x28);
        plVar8[4] = lVar14;
        *(undefined1 *)(plVar8 + 5) = 0;
        plVar8[10] = 0;
        *(undefined4 *)(plVar8 + 0xb) = 0;
        plVar8[6] = 0;
        plVar8[7] = 0;
        *(undefined8 *)((longlong)plVar8 + 0x5c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar8 + 100) = 0;
        plVar8[0xe] = 0;
        *(undefined4 *)(plVar8 + 0xf) = 0;
        if (plVar8 == (longlong *)0x0) {
          *plVar7 = 0x10;
          plVar16 = (longlong *)plVar7[1];
          lVar14 = 0x10;
          if (plVar16 == (longlong *)0x0) goto LAB_140f4d87a;
          plVar7[1] = 0;
LAB_140f4dbfb:
          LOCK();
          plVar2 = plVar16 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          if (plVar8 != (longlong *)0x0) goto LAB_140f4da7c;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          *plVar7 = (longlong)(plVar8 + 2);
          plVar16 = (longlong *)plVar7[1];
          if (plVar8 == plVar16) {
            LOCK();
            plVar16 = plVar8 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
          else {
            plVar7[1] = (longlong)plVar8;
            if (plVar16 != (longlong *)0x0) goto LAB_140f4dbfb;
          }
LAB_140f4da7c:
          LOCK();
          plVar16 = plVar8 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
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
        lVar14 = *plVar7;
      }
LAB_140f4d87a:
      plVar7 = (longlong *)plVar7[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar14 == 0) {
LAB_140f4d8d8:
        uVar9 = 0;
      }
      else {
        if (*(char *)(lVar14 + 0x18) == '\0') {
          *(undefined1 *)(lVar14 + 0x18) = 1;
          local_78 = 0;
          local_68 = &PTR_LAB_14b3e71b0;
          local_88 = FUN_143c99eac;
          local_60 = lVar14;
          FUN_1457cad6e(lVar6);
        }
        if (*(int *)(lVar14 + 0x28) == *(int *)(lVar14 + 0x54)) goto LAB_140f4d8d8;
        lVar6 = param_1[0xe3];
        uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar11 = (uint)lVar6 & 0xffff;
        lVar10 = lVar14 + 0x58;
        if (*(longlong *)(lVar14 + 0x60) != 0) {
          lVar10 = *(longlong *)(lVar14 + 0x60);
        }
        iVar12 = *(int *)(lVar10 + (ulonglong)
                                   (*(int *)(lVar14 + 0x68) - 1U &
                                   (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar11)
                                   + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar12 == -1) goto LAB_140f4d8d8;
        uVar9 = 0;
        do {
          plVar8 = (longlong *)(*(longlong *)(lVar14 + 0x20) + (longlong)iVar12 * 0x18);
          if (*plVar8 == lVar6) {
            uVar9 = 0;
            if ((plVar8 != (longlong *)0x0) && (plVar8 != (longlong *)&DAT_fffffffffffffff8)) {
              uVar9 = FUN_14479d2ce();
            }
            break;
          }
          iVar12 = (int)plVar8[2];
        } while (iVar12 != -1);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
LAB_140f4d902:
  (**(code **)(*param_1 + 0xa78))(param_1,uVar9);
  if (0 < (int)param_1[0x28]) {
    FUN_140058d06(param_1,4,0);
  }
LAB_140f4d91e:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f4dcb6 FUN_140f4dcb6 body=57 status=ok
// SIG undefined FUN_140f4dcb6(void)

void FUN_140f4dcb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58810 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58810 = FUN_140002ddd(FUN_1464c2888,uVar1,L"GbxActorPartState_Mesh");
  }
  return;
}



// FUNCTION 140f4dcf0 FUN_140f4dcf0 body=370 status=ok
// SIG undefined FUN_140f4dcf0(void)

undefined8 * FUN_140f4dcf0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140f4df0c FUN_140f4df0c body=91 status=ok
// SIG undefined FUN_140f4df0c(void)

undefined8 FUN_140f4df0c(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140f4df5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140f4df68 FUN_140f4df68 body=219 status=ok
// SIG undefined FUN_140f4df68(void)

void FUN_140f4df68(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (*param_2 != 0) {
    uVar4 = FUN_1464c27f0();
    plVar5 = (longlong *)FUN_1403566f4(param_1,uVar4);
    if ((longlong)(int)plVar5[1] != 0) {
      plVar9 = (longlong *)*plVar5;
      plVar5 = plVar9 + (int)plVar5[1];
      do {
        plVar1 = (longlong *)*plVar9;
        if (plVar1 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar7 = FUN_1464c27f0();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            pcVar2 = (code *)*param_2;
            plVar8 = (longlong *)param_2[2];
            if ((longlong *)param_2[2] == (longlong *)0x0) {
              plVar8 = param_2 + 4;
            }
            uVar4 = (**(code **)(*plVar8 + 8))();
            cVar3 = (*pcVar2)(uVar4,plVar1);
            if (cVar3 == '\0') break;
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar5);
    }
    if (*param_2 != 0) {
      plVar5 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[2];
      }
                    /* WARNING: Could not recover jumptable at 0x000140f4e03f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140f4e044 FUN_140f4e044 body=40 status=ok
// SIG undefined FUN_140f4e044(void)

undefined8 FUN_140f4e044(undefined8 param_1,int param_2)

{
  FUN_140f4e06c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f4e06c FUN_140f4e06c body=233 status=ok
// SIG undefined FUN_140f4e06c(void)

void FUN_140f4e06c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a89f470;
  param_1[5] = &PTR_FUN_14a89f720;
  param_1[6] = &DAT_14a176f00;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14a177080;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_14472eb64(param_1 + 7,0);
  }
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 100)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0x80;
    FUN_1446efbd8(param_1 + 9,0);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140f4e156 FUN_140f4e156 body=21 status=ok
// SIG undefined FUN_140f4e156(void)

undefined8 FUN_140f4e156(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140f4e16c FUN_140f4e16c body=492 status=ok
// SIG undefined FUN_140f4e16c(void)

void FUN_140f4e16c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147f6f09d;
    local_50 = &LAB_146201c25;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar3 = DAT_14cb253f8;
  if (((DAT_14cb253f8[0x22] != 0) ||
      ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), plVar3[0x22] != 0)) &&
     (DAT_14cb25be0 != (longlong *)0x0)) {
    (**(code **)(*DAT_14cb25be0 + 0x2a8))(DAT_14cb25be0,param_2);
  }
  if (DAT_14cb259f8 == 0) {
    if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((param_2 != 0) && (DAT_14cb25a58 != DAT_14cb25a84)) {
    puVar4 = &DAT_14cb25a88;
    if (DAT_14cb25a90 != (undefined *)0x0) {
      puVar4 = DAT_14cb25a90;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14cb25a98 - 1U &
                              (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb25a50 + (longlong)iVar2 * 0x20;
      if (*(longlong *)(DAT_14cb25a50 + (longlong)iVar2 * 0x20) == param_2) {
        if ((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0 && lVar1 != 0) {
          FUN_140521208(*(undefined8 *)(lVar1 + 8));
          FUN_1457caf08(param_2);
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 140f4e404 FUN_140f4e404 body=32 status=ok
// SIG undefined FUN_140f4e404(void)

undefined8 * FUN_140f4e404(undefined8 *param_1)

{
  FUN_140f4e424();
  *param_1 = &PTR_FUN_14b369330;
  return param_1;
}



// FUNCTION 140f4e424 FUN_140f4e424 body=108 status=ok
// SIG undefined FUN_140f4e424(void)

undefined8 * FUN_140f4e424(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a167f30;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0xff;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140f4e490 FUN_140f4e490 body=253 status=ok
// SIG undefined FUN_140f4e490(void)

uint FUN_140f4e490(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    lVar5 = param_1 + 0x78;
  }
  else {
    lVar5 = FUN_1408710a5();
    lVar5 = lVar5 + 0x40;
  }
  lVar5 = FUN_1402d24da(lVar5);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140f4e5ce(lVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x18;
    do {
      lVar8 = plVar9[1];
      if (lVar8 == 0) {
        uVar6 = FUN_1402d1c56();
        lVar8 = FUN_14477b664(uVar6);
        plVar9[1] = lVar8;
      }
      lVar7 = plVar9[2];
      if (lVar7 == 0) {
        if ((lVar8 != 0) && (*plVar9 != 0)) {
          plVar1 = *(longlong **)(lVar8 + 0xb8);
          if (plVar1 != (longlong *)0x0) {
            cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
            if (cVar2 != '\0') {
              uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar7 = FUN_144aff482(uVar6,plVar9);
              plVar9[2] = lVar7;
              if (lVar7 != 0) goto LAB_140f4e53e;
              goto LAB_140f4e547;
            }
          }
          plVar9[2] = 0;
        }
      }
      else {
LAB_140f4e53e:
        uVar4 = FUN_140f4e58e(lVar7,uVar3);
        uVar3 = uVar3 | uVar4;
      }
LAB_140f4e547:
      plVar9 = plVar9 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return uVar3;
}



// FUNCTION 140f4e58e FUN_140f4e58e body=64 status=ok
// SIG undefined FUN_140f4e58e(void)

ulonglong FUN_140f4e58e(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lVar1 = FUN_1402d24da(param_1 + 0x28);
    if (lVar1 != 0) {
      uVar2 = FUN_1402d24da(param_1 + 0x28);
      uVar3 = FUN_140f4e5ce(uVar2);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 140f4e5ce FUN_140f4e5ce body=222 status=ok
// SIG undefined FUN_140f4e5ce(void)

uint FUN_140f4e5ce(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = FUN_14477bcf0();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((longlong)*(int *)(lVar3 + 0x50) < 1) {
      uVar2 = 0x80000000;
    }
    else {
      uVar2 = 0x80000000;
      lVar8 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x48) + lVar8 * 8);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x30) == '\0') {
            if ((longlong)*(int *)(param_1 + 0x38) != 0) {
              lVar7 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar7) == lVar4)
                goto LAB_140f4e637;
                lVar7 = lVar7 + 0x18;
              } while ((longlong)*(int *)(param_1 + 0x38) * 0x18 != lVar7);
            }
          }
          else {
LAB_140f4e637:
            uVar2 = uVar2 | 1 << ((uint)lVar8 & 0x1f);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != *(int *)(lVar3 + 0x50));
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x38) * 3;
    uVar2 = 0;
    do {
      if (*(int *)(lVar3 + 0x50) != 0) {
        lVar4 = 0;
        lVar8 = (longlong)*(int *)(lVar3 + 0x50) << 3;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x48) + lVar4 * 8) == *plVar5) {
            uVar6 = 1 << ((byte)lVar4 & 0x1f);
            if ((int)lVar4 != -1) goto LAB_140f4e68d;
            break;
          }
          lVar4 = lVar4 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      uVar6 = 0;
LAB_140f4e68d:
      uVar2 = uVar2 | uVar6;
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
  }
  return uVar2;
}



// FUNCTION 140f4e6ac FUN_140f4e6ac body=284 status=ok
// SIG undefined FUN_140f4e6ac(void)

void FUN_140f4e6ac(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x48);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
    uVar1 = *(uint *)(lVar2 + 0x30);
    if ((LPCRITICAL_SECTION)(lVar2 + 8) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
    }
    if ((1 < uVar1) && (uVar1 != 4)) {
      if (uVar1 == 5) {
        lVar2 = *(longlong *)(param_2 + 0x48);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
        *(undefined4 *)(lVar2 + 0x30) = 0;
        if (lVar2 != -8) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
      }
      else {
        if (ABS(*(float *)(param_2 + 0x44)) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
        lVar2 = *(longlong *)(param_2 + 0x48);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
        *(undefined4 *)(lVar2 + 0x30) = 4;
        if ((LPCRITICAL_SECTION)(lVar2 + 8) != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
        }
        local_40 = &local_48;
        local_38 = param_2 + 0x44;
        FUN_147f84fda(param_1 + 0x20,local_2c,&local_40,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4e7ec FUN_140f4e7ec body=93 status=ok
// SIG undefined FUN_140f4e7ec(void)

void FUN_140f4e7ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
  *(undefined4 *)(lVar1 + 0x30) = 1;
  if ((LPCRITICAL_SECTION)(lVar1 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
  }
  AK::SoundEngine::PrepareBank
            (1,*(uint *)(param_2 + 0x38),FUN_1438abb2c,*(void **)(param_2 + 0x48),1,0);
  return;
}



// FUNCTION 140f4e84a FUN_140f4e84a body=56 status=ok
// SIG undefined FUN_140f4e84a(void)

void FUN_140f4e84a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f4e882 FUN_140f4e882 body=343 status=ok
// SIG undefined FUN_140f4e882(void)

undefined1 * FUN_140f4e882(longlong param_1,undefined1 *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 != 0) {
    uVar2 = FUN_140f4e9da();
    cVar1 = FUN_1448093f4(lVar6,uVar2);
    if ((param_3 != 0) && (cVar1 != '\0')) {
      uVar2 = FUN_140338614();
      plVar3 = (longlong *)FUN_144718840(param_3,uVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        plVar3 = *(longlong **)(lVar4 + 0x40);
        if (plVar3 != (longlong *)0x0 && *(longlong *)(lVar4 + 0x38) != 0) {
          uVar2 = FUN_140f4ea14(param_1);
          FUN_140f4ea62(lVar6 + 8,local_78,uVar2,param_1 + 0x40);
          local_60 = local_78[0];
          FUN_1446dcdd4(local_58);
          plVar5 = (longlong *)FUN_1400d6974(local_58);
          if (plVar5 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar4 = FUN_140fe7bec();
            if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)) {
              plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
              if (plVar5 != plVar3) goto LAB_140f4e8fb;
            }
          }
          *param_2 = 1;
          *(undefined4 *)(param_2 + 0xc) = 1;
          uVar2 = DAT_14cb7c588;
          goto LAB_140f4e90c;
        }
      }
    }
  }
LAB_140f4e8fb:
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar2 = DAT_14cb7c580;
LAB_140f4e90c:
  *(undefined8 *)(param_2 + 4) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4e9da FUN_140f4e9da body=57 status=ok
// SIG undefined FUN_140f4e9da(void)

void FUN_140f4e9da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba07c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba07c0 = FUN_140002ddd(FUN_1465aa959,uVar1,L"FactEvaluator_IsHoldingCarryable");
  }
  return;
}



// FUNCTION 140f4ea14 FUN_140f4ea14 body=77 status=ok
// SIG undefined FUN_140f4ea14(void)

undefined8 FUN_140f4ea14(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x1c);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x18);
  uVar3 = 0;
  if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar4 + 2) != iVar1) {
      return 0;
    }
    if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar3 = *puVar4;
  }
  return uVar3;
}



// FUNCTION 140f4ea62 FUN_140f4ea62 body=315 status=ok
// SIG undefined FUN_140f4ea62(void)

undefined8 * FUN_140f4ea62(char *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *param_2 = uVar2;
    local_38 = 0;
    FUN_140076e46(*(undefined4 *)(param_1 + 0x10),uVar2,&local_38);
    param_2[1] = local_38;
    param_2[2] = 0;
    goto LAB_140f4eaac;
  }
  if (param_3 == (longlong *)0x0) {
LAB_140f4eb73:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  lVar3 = (**(code **)(*param_3 + 0x2b0))(param_3);
  if (lVar3 == 0) goto LAB_140f4eb73;
  plVar4 = (longlong *)FUN_14039ffc6(lVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_140f4eb73;
  (**(code **)(*plVar4 + 0x78))(plVar4,&local_38,param_4);
  if (local_38 == 0) {
LAB_140f4eb93:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    lVar3 = FUN_140ca9be8(local_38,param_1 + 0x20);
    if (lVar3 == 0) goto LAB_140f4eb93;
    FUN_1411a0e4c(lVar3 + 0x10,param_2);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
LAB_140f4eaac:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f4eba4 FUN_140f4eba4 body=664 status=ok
// SIG undefined FUN_140f4eba4(void)

undefined8 FUN_140f4eba4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
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
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  undefined1 uVar23;
  longlong lVar24;
  longlong lVar25;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    FUN_1404306dc(param_2 + 0x20,param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x34);
    uVar6 = *(undefined4 *)(param_3 + 0x38);
    uVar7 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar5;
    *(undefined4 *)(param_2 + 0x38) = uVar6;
    *(undefined4 *)(param_2 + 0x3c) = uVar7;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    FUN_140430734(param_2 + 0x48,param_3 + 0x48);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
    if (param_3 != param_2) {
      if (*(char *)(param_3 + 100) == '\x01') {
        *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
        uVar23 = 1;
      }
      else {
        if (*(char *)(param_2 + 100) != '\x01') goto LAB_140f4ec33;
        uVar23 = 0;
      }
      *(undefined1 *)(param_2 + 100) = uVar23;
    }
LAB_140f4ec33:
    FUN_14043078c(param_2 + 0x68,param_3 + 0x68);
    FUN_1404307f4(param_2 + 0x100,param_3 + 0x100);
    uVar5 = *(undefined4 *)(param_3 + 0x134);
    uVar6 = *(undefined4 *)(param_3 + 0x138);
    uVar7 = *(undefined4 *)(param_3 + 0x13c);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_3 + 0x130);
    *(undefined4 *)(param_2 + 0x134) = uVar5;
    *(undefined4 *)(param_2 + 0x138) = uVar6;
    *(undefined4 *)(param_2 + 0x13c) = uVar7;
    if (param_3 != param_2) {
      FUN_140cae301(*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x148));
      iVar3 = *(int *)(param_3 + 0x148);
      uVar4 = *(undefined8 *)(param_3 + 0x140);
      *(int *)(param_2 + 0x148) = iVar3;
      if (iVar3 == 0 && *(int *)(param_2 + 0x14c) == 0) {
        *(undefined4 *)(param_2 + 0x14c) = 0;
      }
      else {
        FUN_140f4ee3c((undefined8 *)(param_2 + 0x140),iVar3);
        FUN_140f4ef21(*(undefined8 *)(param_2 + 0x140),uVar4,iVar3);
      }
      iVar3 = *(int *)(param_3 + 0x158);
      uVar4 = *(undefined8 *)(param_3 + 0x150);
      *(int *)(param_2 + 0x158) = iVar3;
      if (iVar3 == 0 && *(int *)(param_2 + 0x15c) == 0) {
        *(undefined4 *)(param_2 + 0x15c) = 0;
      }
      else {
        FUN_140f4f01a(param_2 + 0x150,iVar3);
        FUN_140f4f164(*(undefined8 *)(param_2 + 0x150),uVar4,iVar3);
      }
    }
    uVar4 = *(undefined8 *)(param_3 + 0x160);
    uVar20 = *(undefined8 *)(param_3 + 0x168);
    uVar21 = *(undefined8 *)(param_3 + 0x178);
    *(undefined8 *)(param_2 + 0x170) = *(undefined8 *)(param_3 + 0x170);
    *(undefined8 *)(param_2 + 0x178) = uVar21;
    *(undefined8 *)(param_2 + 0x160) = uVar4;
    *(undefined8 *)(param_2 + 0x168) = uVar20;
    lVar25 = 0x1e0;
    bVar22 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x50 + lVar25) = *(undefined2 *)(param_3 + -0x50 + lVar25);
      *(undefined8 *)(param_2 + -0x58 + lVar25) = *(undefined8 *)(param_3 + -0x58 + lVar25);
      puVar1 = (undefined4 *)(param_3 + -0x48 + lVar25);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + -0x38 + lVar25);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + -0x48 + lVar25);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar1 = (undefined4 *)(param_2 + -0x38 + lVar25);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      *(undefined8 *)(param_2 + -0x2b + lVar25) = *(undefined8 *)(param_3 + -0x2b + lVar25);
      *(undefined8 *)(param_2 + -0x20 + lVar25) = *(undefined8 *)(param_3 + -0x20 + lVar25);
      *(undefined4 *)(param_2 + -0x10 + lVar25) = *(undefined4 *)(param_3 + -0x10 + lVar25);
      *(undefined8 *)(param_2 + -0x18 + lVar25) = *(undefined8 *)(param_3 + -0x18 + lVar25);
      lVar24 = *(longlong *)(param_3 + -8 + lVar25);
      if ((bVar22 & 1) != 0) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar24 = *(longlong *)(param_3 + -8 + lVar25);
          bVar22 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -8 + lVar25) = lVar24;
      puVar1 = (undefined4 *)(param_3 + lVar25);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar25);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x20 + lVar25);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar15 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x2a + lVar25);
      uVar16 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + lVar25);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar25);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      puVar1 = (undefined4 *)(param_2 + 0x20 + lVar25);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1[2] = uVar14;
      puVar1[3] = uVar15;
      puVar1 = (undefined4 *)(param_2 + 0x2a + lVar25);
      *puVar1 = uVar16;
      puVar1[1] = uVar17;
      puVar1[2] = uVar18;
      puVar1[3] = uVar19;
      lVar25 = lVar25 + 0xa0;
    } while (lVar25 != 0x3c0);
    param_4 = param_4 + -1;
    param_3 = param_3 + 0x360;
    param_2 = param_2 + 0x360;
  } while( true );
}



// FUNCTION 140f4ee3c FUN_140f4ee3c body=229 status=ok
// SIG undefined FUN_140f4ee3c(void)

void FUN_140f4ee3c(longlong param_1,int param_2,int param_3)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
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
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f4ef21 FUN_140f4ef21 body=249 status=ok
// SIG undefined FUN_140f4ef21(void)

void FUN_140f4ef21(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    do {
      puVar3[-10] = *param_2;
      puVar3[-8] = 0;
      puVar3[-7] = 0;
      puVar3[-6] = 0;
      puVar3[-5] = 0;
      puVar3[-4] = 0;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      FUN_140c19bee(puVar3 + -9,param_2 + 1);
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 0xb);
      uVar2 = param_2[10];
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_140aead42(puVar3,iVar1,0);
        FUN_140aead15(*puVar3,uVar2);
      }
      puVar3[2] = 0;
      iVar1 = *(int *)(param_2 + 0xd);
      _Src = (void *)param_2[0xc];
      *(int *)(puVar3 + 3) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
      }
      else {
        FUN_144801f7c(puVar3 + 2,iVar1,0);
        memcpy((void *)puVar3[2],_Src,(longlong)iVar1 << 3);
      }
      puVar3 = puVar3 + 0xe;
      param_2 = param_2 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f4f01a FUN_140f4f01a body=330 status=ok
// SIG undefined FUN_140f4f01a(void)

void FUN_140f4f01a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x68;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f4f088;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140f4f088:
    iVar5 = (int)(uVar4 / 0x68);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x68,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f4f164 FUN_140f4f164 body=334 status=ok
// SIG undefined FUN_140f4f164(void)

void FUN_140f4f164(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    bVar9 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar10);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      *(undefined8 *)(param_1 + 0x10 + lVar10) = *(undefined8 *)(param_2 + 0x10 + lVar10);
      lVar4 = *(longlong *)(param_2 + 0x18 + lVar10);
      *(longlong *)(param_1 + 0x18 + lVar10) = lVar4;
      if (((bVar9 & 1) != 0) && (lVar4 != 0)) {
        FUN_1456cec3c();
        bVar9 = DAT_14c950c29;
      }
      lVar4 = param_1 + lVar10;
      lVar3 = param_2 + lVar10;
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar3 + 0x20);
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
      *(undefined1 *)(lVar4 + 0x2c) = *(undefined1 *)(lVar3 + 0x2c);
      lVar5 = *(longlong *)(lVar3 + 0x30);
      *(longlong *)(lVar4 + 0x30) = lVar5;
      if (((bVar9 & 1) != 0) && (lVar5 != 0)) {
        FUN_1456cec3c();
        bVar9 = DAT_14c950c29;
      }
      lVar5 = *(longlong *)(lVar3 + 0x38);
      *(longlong *)(lVar4 + 0x38) = lVar5;
      if (((bVar9 & 1) != 0) && (lVar5 != 0)) {
        FUN_1456cec3c();
        bVar9 = DAT_14c950c29;
      }
      *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(lVar3 + 0x40);
      *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar3 + 0x48);
      *(undefined1 *)(lVar4 + 0x4c) = *(undefined1 *)(lVar3 + 0x4c);
      lVar5 = *(longlong *)(lVar3 + 0x50);
      *(longlong *)(lVar4 + 0x50) = lVar5;
      if (((bVar9 & 1) != 0) && (lVar5 != 0)) {
        FUN_1456cec3c();
        bVar9 = DAT_14c950c29;
      }
      lVar5 = *(longlong *)(lVar3 + 0x58);
      *(longlong *)(lVar4 + 0x58) = lVar5;
      if (((bVar9 & 1) != 0) && (lVar5 != 0)) {
        FUN_1456cec3c();
        bVar9 = DAT_14c950c29;
      }
      *(undefined1 *)(lVar4 + 0x60) = *(undefined1 *)(lVar3 + 0x60);
      lVar10 = lVar10 + 0x68;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f4f2b2 FUN_140f4f2b2 body=653 status=ok
// SIG undefined FUN_140f4f2b2(void)

void FUN_140f4f2b2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_140f4f43f;
  FUN_140f4f540();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_58,*param_3);
  if (local_58 != 0) {
    if ((((*(int *)(local_58 + 0x30) != 0) && (uVar2 = *(uint *)(local_58 + 0x2c), -1 < (int)uVar2))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(local_58 + 0x30))) &&
        ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        FUN_1400bbfc4(&local_48,lVar6);
        *(undefined4 *)(param_3 + 2) = local_48;
        *(undefined4 *)((longlong)param_3 + 0x14) = uStack_44;
        *(undefined4 *)(param_3 + 3) = uStack_40;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_3c;
        if (param_3 + 2 == (undefined8 *)&local_48) {
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_3[4] != 0) {
            FUN_1400020a8();
          }
          param_3[4] = local_38;
          local_38 = 0;
          *(undefined4 *)(param_3 + 5) = local_30;
          *(undefined4 *)((longlong)param_3 + 0x2c) = local_2c;
        }
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        uVar2 = *(uint *)(lVar6 + 0xc);
        if (cVar4 != '\0') {
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
            param_3[1] = 0;
            goto LAB_140f4f42b;
          }
        }
        *(uint *)(param_3 + 1) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar5 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar5 = *(int *)(lVar6 + 0x10);
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(lVar6 + 0x10) = iVar8;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar5 = iVar8;
          }
        }
        *(int *)((longlong)param_3 + 0xc) = iVar5;
        goto LAB_140f4f42b;
      }
    }
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined4 *)(param_3 + 5) = 0;
    if (*(int *)((longlong)param_3 + 0x2c) < 0) {
      FUN_1446f8c06(param_3 + 4,0);
    }
    puVar3 = (undefined2 *)param_3[4];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
LAB_140f4f42b:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_140f4f43f:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f4f540 FUN_140f4f540 body=101 status=ok
// SIG undefined FUN_140f4f540(void)

undefined * FUN_140f4f540(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1c8b0) {
    FUN_144b3d300(&DAT_14cc1c8b0);
    if (DAT_14cc1c8b0 == -1) {
      FUN_1457cb0fe();
      atexit((_func_5014 *)&LAB_14452b4c2);
      _Init_thread_footer(&DAT_14cc1c8b0);
    }
  }
  return &DAT_14cc1c7d8;
}



// FUNCTION 140f4f5a6 FUN_140f4f5a6 body=182 status=ok
// SIG undefined FUN_140f4f5a6(void)

void FUN_140f4f5a6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar1 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0xc0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0xc0) == param_3) {
          if ((lVar3 != 0) && (lVar3 != -0x10)) {
            *param_2 = *(undefined8 *)(lVar3 + 0x10);
            lVar3 = *(longlong *)(lVar3 + 0x18);
            param_2[1] = lVar3;
            if (lVar3 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xb0);
      } while (iVar2 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140f4f65c FUN_140f4f65c body=1536 status=ok
// SIG undefined FUN_140f4f65c(void)

undefined8 * FUN_140f4f65c(longlong *param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  
  cVar11 = (**(code **)(*param_1 + 0x2f8))();
  dVar21 = DAT_14c8464f0;
  dVar22 = DAT_14c8464e8;
  dVar23 = DAT_14c8464e0;
  if (cVar11 != '\x01') {
    lVar12 = FUN_140f4fc64(param_1);
    if (lVar12 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = *(char *)(lVar12 + 0x30);
    }
    if ((longlong)(int)param_1[0x18] != 0) {
      plVar15 = (longlong *)param_1[0x17];
      plVar13 = plVar15 + (longlong)(int)param_1[0x18] * 0x10;
      local_f0 = 0.0;
      bVar5 = true;
      local_108 = 0.0;
      local_110 = 0.0;
      local_f8 = 0.0;
      local_100 = 0.0;
      dVar7 = 0.0;
      dVar2 = dVar22;
      dVar3 = dVar21;
      dVar4 = dVar23;
      do {
        uVar24 = SUB84(dVar21,0);
        uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
        uVar27 = SUB84(dVar22,0);
        uVar28 = (undefined4)((ulonglong)dVar22 >> 0x20);
        uVar30 = SUB84(dVar23,0);
        uVar31 = (undefined4)((ulonglong)dVar23 >> 0x20);
        plVar16 = plVar15;
        dVar20 = dVar3;
        dVar19 = dVar2;
        dVar18 = dVar4;
        while( true ) {
          while( true ) {
            plVar15 = plVar16 + 0x10;
            lVar12 = *plVar16;
            if (lVar12 != 0) break;
            plVar16 = plVar15;
            if (plVar15 == plVar13) {
              if (bVar5) {
                return (undefined8 *)0x0;
              }
              goto LAB_140f4f8ab;
            }
          }
          dVar4 = (*(double *)(lVar12 + 0x200) - *(double *)(lVar12 + 0x218)) * (double)plVar16[6];
          dVar2 = (*(double *)(lVar12 + 0x208) - *(double *)(lVar12 + 0x220)) * (double)plVar16[7];
          dVar3 = (*(double *)(lVar12 + 0x210) - *(double *)(lVar12 + 0x228)) * (double)plVar16[8];
          dVar23 = (*(double *)(lVar12 + 0x200) + *(double *)(lVar12 + 0x218)) * (double)plVar16[6];
          dVar22 = (*(double *)(lVar12 + 0x208) + *(double *)(lVar12 + 0x220)) * (double)plVar16[7];
          dVar21 = (*(double *)(lVar12 + 0x210) + *(double *)(lVar12 + 0x228)) * (double)plVar16[8];
          cVar1 = (char)plVar16[0xf];
          dVar8 = local_110;
          dVar9 = local_108;
          dVar10 = local_f0;
          if (cVar1 == '\0') {
            dVar21 = dVar21 + (double)plVar16[0xe];
            dVar22 = dVar22 + (double)plVar16[0xd];
            dVar23 = dVar23 + (double)plVar16[0xc];
            dVar3 = dVar3 + (double)plVar16[0xe];
            dVar2 = dVar2 + (double)plVar16[0xd];
            dVar4 = dVar4 + (double)plVar16[0xc];
          }
          else if (cVar1 == '\x01') {
            bVar17 = cVar11 == '\0';
            dVar6 = local_f0;
            if (bVar17) {
              dVar6 = dVar7;
            }
            local_e8 = local_108;
            if (bVar17) {
              local_e8 = local_100;
            }
            local_118 = local_110;
            if (bVar17) {
              local_118 = local_f8;
            }
            if (dVar6 <= ABS((double)plVar16[0xe])) {
              dVar6 = ABS((double)plVar16[0xe]);
            }
            if (local_e8 <= ABS((double)plVar16[0xd])) {
              local_e8 = ABS((double)plVar16[0xd]);
            }
            if (local_118 <= ABS((double)plVar16[0xc])) {
              local_118 = ABS((double)plVar16[0xc]);
            }
            dVar8 = local_118;
            dVar9 = local_e8;
            dVar10 = dVar6;
            if (bVar17) {
              dVar8 = local_110;
              dVar9 = local_108;
              local_100 = local_e8;
              local_f8 = local_118;
              dVar10 = local_f0;
              dVar7 = dVar6;
            }
          }
          else if (cVar1 == '\x02') {
            if (dVar7 <= ABS((double)plVar16[0xe])) {
              dVar7 = ABS((double)plVar16[0xe]);
            }
            if (local_100 <= ABS((double)plVar16[0xd])) {
              local_100 = ABS((double)plVar16[0xd]);
            }
            if (local_f8 <= ABS((double)plVar16[0xc])) {
              local_f8 = ABS((double)plVar16[0xc]);
            }
          }
          else if (cVar1 == '\x03') {
            if (local_f0 <= ABS((double)plVar16[0xe])) {
              local_f0 = ABS((double)plVar16[0xe]);
            }
            if (local_108 <= ABS((double)plVar16[0xd])) {
              local_108 = ABS((double)plVar16[0xd]);
            }
            dVar9 = local_108;
            dVar10 = local_f0;
            if (local_110 <= ABS((double)plVar16[0xc])) {
              dVar8 = ABS((double)plVar16[0xc]);
            }
          }
          local_f0 = dVar10;
          local_108 = dVar9;
          local_110 = dVar8;
          uVar32 = (undefined4)((ulonglong)dVar23 >> 0x20);
          uVar29 = (undefined4)((ulonglong)dVar22 >> 0x20);
          uVar26 = (undefined4)((ulonglong)dVar21 >> 0x20);
          if (bVar5) break;
          if (dVar4 <= dVar18) {
            dVar18 = dVar4;
          }
          if (dVar2 <= dVar19) {
            dVar19 = dVar2;
          }
          if (dVar3 <= dVar20) {
            dVar20 = dVar3;
          }
          if ((double)CONCAT44(uVar31,uVar30) <= dVar23) {
            uVar30 = SUB84(dVar23,0);
            uVar31 = uVar32;
          }
          if ((double)CONCAT44(uVar28,uVar27) <= dVar22) {
            uVar27 = SUB84(dVar22,0);
            uVar28 = uVar29;
          }
          if ((double)CONCAT44(uVar25,uVar24) <= dVar21) {
            uVar24 = SUB84(dVar21,0);
            uVar25 = uVar26;
          }
          plVar16 = plVar15;
          if (plVar15 == plVar13) goto LAB_140f4f8ab;
        }
        bVar5 = false;
        dVar18 = dVar4;
        dVar19 = dVar2;
        dVar20 = dVar3;
        uVar24 = SUB84(dVar21,0);
        uVar25 = uVar26;
        uVar27 = SUB84(dVar22,0);
        uVar28 = uVar29;
        uVar30 = SUB84(dVar23,0);
        uVar31 = uVar32;
      } while (plVar15 != plVar13);
LAB_140f4f8ab:
      dVar23 = ABS((double)CONCAT44(uVar25,uVar24));
      if (ABS((double)CONCAT44(uVar25,uVar24)) <= ABS(dVar20)) {
        dVar23 = ABS(dVar20);
      }
      dVar22 = ABS((double)CONCAT44(uVar28,uVar27));
      if (ABS((double)CONCAT44(uVar28,uVar27)) <= ABS(dVar19)) {
        dVar22 = ABS(dVar19);
      }
      dVar21 = ABS((double)CONCAT44(uVar31,uVar30));
      if (ABS((double)CONCAT44(uVar31,uVar30)) <= ABS(dVar18)) {
        dVar21 = ABS(dVar18);
      }
      puVar14 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      *puVar14 = &PTR_FUN_14adff8b0;
      *(undefined1 *)(puVar14 + 1) = 1;
      *(undefined4 *)((longlong)puVar14 + 0xc) = 0xffffffff;
      *(undefined1 *)(puVar14 + 2) = 1;
      *(undefined4 *)((longlong)puVar14 + 0x14) = 0xffffffff;
      *(undefined1 *)(puVar14 + 3) = 1;
      *(undefined4 *)((longlong)puVar14 + 0x1c) = 0xffffffff;
      *(undefined1 *)(puVar14 + 4) = 1;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 0xffffffff;
      puVar14[5] = dVar21;
      puVar14[6] = dVar22;
      puVar14[7] = dVar23;
      puVar14[8] = local_110;
      puVar14[9] = local_108;
      puVar14[10] = local_f0;
      puVar14[0xb] = local_f8;
      puVar14[0xc] = local_100;
      puVar14[0xd] = dVar7;
      *(char *)(puVar14 + 0xe) = cVar11;
      return puVar14;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f4fc64 FUN_140f4fc64 body=671 status=ok
// SIG undefined FUN_140f4fc64(void)

longlong FUN_140f4fc64(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb3e268 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
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
  lVar5 = DAT_14cb3e268;
  if (DAT_14c951858 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
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
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar5 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         (lVar2 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar5 + 0x30)) {
        lVar2 = 0;
      }
    } while ((lVar2 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    if ((lVar2 != 0) && (lVar5 = (longlong)*(int *)(lVar2 + 0x50), lVar5 != 0)) {
      if (*(char *)(lVar2 + 0x40) == '\0') {
        lVar3 = *(longlong *)(lVar2 + 0x48);
      }
      else {
        lVar4 = *(longlong *)(lVar2 + 0x48);
        if (((*(int *)(param_1 + 0x9c) == 0 && *(int *)(param_1 + 0x98) == 0) &&
            *(int *)(param_1 + 0xa0) == 0) && *(int *)(param_1 + 0xa4) == 0) {
          lVar5 = lVar5 * 0x368;
          do {
            if ((((*(int *)(lVar4 + 8) == *(int *)(lVar2 + 0x30)) &&
                 (*(int *)(lVar4 + 0xc) == *(int *)(lVar2 + 0x34))) &&
                (*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x38))) &&
               (lVar3 = lVar4, *(int *)(lVar4 + 0x14) == *(int *)(lVar2 + 0x3c))) break;
            lVar4 = lVar4 + 0x368;
            lVar5 = lVar5 + -0x368;
            lVar3 = 0;
          } while (lVar5 != 0);
        }
        else {
          lVar5 = lVar5 * 0x368;
          do {
            if (((*(int *)(lVar4 + 8) == *(int *)(param_1 + 0x98)) &&
                (*(int *)(lVar4 + 0xc) == *(int *)(param_1 + 0x9c))) &&
               ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0xa0) &&
                (lVar3 = lVar4, *(int *)(lVar4 + 0x14) == *(int *)(param_1 + 0xa4))))) break;
            lVar4 = lVar4 + 0x368;
            lVar5 = lVar5 + -0x368;
            lVar3 = 0;
          } while (lVar5 != 0);
        }
      }
      goto LAB_140f4fcff;
    }
  }
  lVar3 = 0;
LAB_140f4fcff:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140f4ff18 FUN_140f4ff18 body=287 status=ok
// SIG undefined FUN_140f4ff18(void)

void FUN_140f4ff18(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  uint local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14cbcdba0;
  local_50 = DAT_14cbcdb98;
  FUN_1448075d0(local_40);
  pbVar2 = (byte *)*param_3;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar6 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar3[9];
      }
      iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[10] - 1U & local_40[0]) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *plVar3 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar5 * 0x40) == local_40[0]) {
            if ((((lVar1 != 0) &&
                 (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
            goto LAB_140f4ffc5;
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x38);
        } while (iVar5 != -1);
      }
    }
  }
  puVar4 = &DAT_14c9a1308;
LAB_140f4ffc5:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar4 != (byte *)0x0) && ((*(byte *)*puVar4 & 3) != 0)) {
    FUN_14049dff8(param_1 + 8,puVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f50038 FUN_140f50038 body=622 status=ok
// SIG undefined FUN_140f50038(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140f50038(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char *_Str;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1108 [32];
  ulonglong local_10e8;
  uint local_10e0;
  longlong local_10d8;
  undefined8 local_10d0;
  wchar_t *local_10c8;
  code *local_10c0;
  undefined1 *local_10b8;
  code **local_10b0;
  code *local_10a8;
  code *local_10a0;
  undefined8 local_1098;
  undefined8 local_1090;
  code *local_1088 [260];
  undefined1 local_868 [256];
  longlong local_768;
  undefined8 local_760;
  undefined4 local_758;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1108;
  if (*param_1 == 0) {
    _Str = (char *)*param_2;
    local_768 = 0;
    if (_Str == (char *)0x0) {
      local_760 = 0;
      local_758 = 0;
    }
    else {
      sVar3 = strlen(_Str);
      FUN_1446e6fe8(local_868,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1446f470e(&local_1090,local_760,1);
    if (DAT_14c951858 == 0) {
      local_10b0 = local_1088;
      local_1088[0] = FUN_1449e2820;
      local_10a0 = FUN_14081d0ea;
      local_10a8 = FUN_14081d0ea;
      local_10b8 = &LAB_1468c5283;
      local_10c0 = FUN_142809da0;
      local_10c8 = L"Engine";
      local_10d0 = 0x400000000;
      local_10d8 = CONCAT44(local_10d8._4_4_,0x10000000);
      local_10e0 = 8;
      local_10e8 = CONCAT44(local_10e8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    local_10e0 = 0;
    local_10e8 = local_10e8 & 0xffffffff00000000;
    lVar4 = FUN_140be85e0(DAT_14c951858,0,local_1090,0);
    if (local_768 != 0) {
      FUN_1400020a8();
    }
    *param_1 = lVar4;
    *(uint *)(lVar4 + 0x2c) = *(uint *)(lVar4 + 0x2c) | *(uint *)((longlong)param_2 + 0x14);
    local_1088[0] = *(code **)(lVar4 + 0x18);
    FUN_14026f16c(local_1088,local_868,0x40b);
    iVar1 = *(int *)(param_2 + 2);
    if ((longlong)iVar1 != 0) {
      lVar2 = param_2[1];
      lVar6 = 0;
      do {
        lVar5 = (**(code **)(lVar2 + lVar6))();
        if (*(longlong *)(lVar5 + 0x20) == lVar4) {
          local_1098 = *(undefined8 *)(lVar5 + 0x18);
          FUN_14026f16c(&local_1098,local_1088,0x40b);
          local_10e0 = local_10e0 & 0xffffff00;
          local_10e8 = 0;
          local_10d8 = lVar5;
          FUN_14058d631(local_868,local_1088,5,2);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f502a8 FUN_140f502a8 body=84 status=ok
// SIG undefined FUN_140f502a8(void)

void FUN_140f502a8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_140f502fe(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f502fe FUN_140f502fe body=736 status=ok
// SIG undefined FUN_140f502fe(void)

void FUN_140f502fe(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = *param_1;
  uVar2 = *param_2;
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_140f5034b:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140f5034b;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0xc];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_140f503dd:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140f503dd;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x18];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_140f50465:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140f50465;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  if ((char)param_2[0x25] != '\x01') {
    return;
  }
  lVar4 = *param_1;
  uVar2 = param_2[0x24];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_140f50533;
  if (iVar3 == 0) {
LAB_140f504f4:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140f504f4;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_140f50533:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140f505de FUN_140f505de body=76 status=ok
// SIG undefined FUN_140f505de(void)

void FUN_140f505de(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f5062a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b60fba0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xd7) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return;
}



// FUNCTION 140f5062a FUN_140f5062a body=163 status=ok
// SIG undefined FUN_140f5062a(void)

undefined8 * FUN_140f5062a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b129070;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x200000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xba) = 0;
  return param_1;
}



// FUNCTION 140f506ce FUN_140f506ce body=370 status=ok
// SIG undefined FUN_140f506ce(void)

undefined8 * FUN_140f506ce(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140f5086a FUN_140f5086a body=541 status=ok
// SIG undefined FUN_140f5086a(void)

undefined8 * FUN_140f5086a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14acdbb10;
  param_1[5] = 0;
  param_1[6] = 0;
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
  param_1[7] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 8) = 0;
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
  param_1[9] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 10) = DAT_14c844848;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 140f50a88 FUN_140f50a88 body=178 status=ok
// SIG undefined FUN_140f50a88(void)

uint FUN_140f50a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f50b9e(param_1,&local_48,param_2);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x18))(local_48,param_3);
  }
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
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 140f50b56 FUN_140f50b56 body=23 status=ok
// SIG undefined FUN_140f50b56(void)

undefined1 FUN_140f50b56(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 140f50b6e FUN_140f50b6e body=23 status=ok
// SIG undefined FUN_140f50b6e(void)

undefined1 FUN_140f50b6e(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 140f50b86 FUN_140f50b86 body=23 status=ok
// SIG undefined FUN_140f50b86(void)

undefined1 FUN_140f50b86(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 140f50b9e FUN_140f50b9e body=175 status=ok
// SIG undefined FUN_140f50b9e(void)

void FUN_140f50b9e(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    lVar3 = (longlong)*(int *)(param_1 + 0x58) << 4;
    do {
      if ((((*(int *)(param_1 + 0x14) == param_3[3] &&
             (*(int *)(param_1 + 0x10) == param_3[2] &&
             (*(int *)(param_1 + 0xc) == param_3[1] && *(int *)(param_1 + 8) == *param_3))) &&
           (lVar1 = *plVar2, *(int *)(lVar1 + 0x50) == param_3[4])) &&
          (*(int *)(lVar1 + 0x54) == param_3[5])) &&
         (((*(int *)(lVar1 + 0x58) == param_3[6] && (*(int *)(lVar1 + 0x5c) == param_3[7])) &&
          (*(longlong *)(lVar1 + 0x60) == *(longlong *)(param_3 + 8))))) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = lVar1;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140f50c4e FUN_140f50c4e body=370 status=ok
// SIG undefined FUN_140f50c4e(void)

undefined8 * FUN_140f50c4e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140f50dce FUN_140f50dce body=370 status=ok
// SIG undefined FUN_140f50dce(void)

undefined8 * FUN_140f50dce(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140f50f54 FUN_140f50f54 body=228 status=ok
// SIG undefined FUN_140f50f54(void)

longlong FUN_140f50f54(void)

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
  if (DAT_14cb9fad8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148b8776f;
    local_40 = &LAB_1413f9412;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x27e0;
    FUN_14081cfa3(L"/Script/OakGame",L"CarryableObjectContainer",&DAT_14cb9fad8,FUN_1465a696a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9fad8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f51048 FUN_140f51048 body=132 status=ok
// SIG undefined FUN_140f51048(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f51048(undefined8 *param_1,int param_2)

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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f510cc FUN_140f510cc body=122 status=ok
// SIG undefined FUN_140f510cc(void)

undefined8 *
FUN_140f510cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (undefined8 *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)*DAT_14c8407a8)(DAT_14c8407a8,param_2,param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = &PTR_FUN_149e142c0;
  uVar1 = (**(code **)(*(longlong *)param_1[1] + 0x78))();
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 140f5114c FUN_140f5114c body=233 status=ok
// SIG undefined FUN_140f5114c(void)

void FUN_140f5114c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  void *_Src;
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14001cc68(0x70,0x10);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_50;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar3 * 2);
  }
  local_68 = 0;
  FUN_140e44f3e(uVar1,&local_58,param_4,param_5);
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,uVar1);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5123e FUN_140f5123e body=377 status=ok
// SIG undefined FUN_140f5123e(void)

void FUN_140f5123e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_14067009e(param_1[0x2d],(int)param_1[0x2e]);
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x19];
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
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f513b8 FUN_140f513b8 body=261 status=ok
// SIG undefined FUN_140f513b8(void)

void FUN_140f513b8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (DAT_14cb96828 == (undefined8 *)0x0) {
    DAT_14cb96828 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *DAT_14cb96828 = 0;
    DAT_14cb96828[1] = 0;
    DAT_14cb96828[2] = 0;
    DAT_14cb96828[3] = 0;
    DAT_14cb96828[4] = 0;
    DAT_14cb96828[5] = 0;
  }
  puVar2 = DAT_14cb96828;
  iVar3 = *(int *)(param_1 + 0xc0);
  if (-1 < iVar3) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      FUN_1457cca06(param_2);
    }
    iVar3 = *(int *)(puVar2 + 3);
    if (0 < iVar3) {
      lVar5 = 8;
      lVar6 = 0;
      do {
        if ((*(byte *)(puVar2[2] + lVar5) & 4) != 0) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_148a66008(param_2,iVar3);
          }
          lVar1 = *param_2;
          lVar4 = (longlong)iVar3 * 0x20;
          *(char *)(lVar1 + lVar4) = (char)lVar6;
          *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
          *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0x47efffffe0000000;
          *(undefined8 *)(lVar1 + 0x18 + lVar4) = 0xb810000000000000;
          iVar3 = *(int *)(puVar2 + 3);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x80;
      } while (lVar6 < iVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 140f514be FUN_140f514be body=387 status=ok
// SIG undefined FUN_140f514be(void)

void FUN_140f514be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (DAT_14cb96828 == (undefined8 *)0x0) {
    DAT_14cb96828 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *DAT_14cb96828 = 0;
    DAT_14cb96828[1] = 0;
    DAT_14cb96828[2] = 0;
    DAT_14cb96828[3] = 0;
    DAT_14cb96828[4] = 0;
    DAT_14cb96828[5] = 0;
  }
  puVar5 = DAT_14cb96828;
  uVar3 = *(uint *)(param_1 + 0xc0);
  uVar10 = (ulonglong)uVar3;
  if (-1 < (int)uVar3) {
    plVar1 = (longlong *)(param_2 + 8);
    FUN_140f517a3(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
    *(undefined4 *)(param_2 + 0x10) = 0;
    if (*(uint *)(param_2 + 0x14) != uVar3) {
      FUN_140f517d2(plVar1,uVar3);
    }
    iVar6 = *(int *)(puVar5 + 3);
    if (0 < iVar6) {
      lVar8 = 8;
      lVar9 = 0;
      do {
        if ((*(byte *)(puVar5[2] + lVar8) & 2) != 0) {
          iVar6 = *(int *)(param_2 + 0x10);
          *(uint *)(param_2 + 0x10) = iVar6 + 1U;
          if (*(uint *)(param_2 + 0x14) < iVar6 + 1U) {
            FUN_148a65f74(plVar1,iVar6);
          }
          lVar4 = *plVar1;
          lVar7 = (longlong)iVar6 * 0x30;
          *(char *)(lVar4 + lVar7) = (char)lVar9;
          *(undefined8 *)(lVar4 + 8 + lVar7) = 0;
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = 0x47efffffe0000000;
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = 0xb810000000000000;
          puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar7);
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar3 = *(uint *)(param_1 + 0x90);
          uVar10 = (ulonglong)uVar3;
          if ((int)uVar3 < 1) {
            if ((int)uVar3 < 0) goto LAB_140f51639;
          }
          else {
            *(uint *)(lVar4 + lVar7 + 0x28) = uVar3;
            FUN_140f51642(lVar7 + lVar4 + 0x20);
            memset(*(void **)(lVar4 + lVar7 + 0x20),0,uVar10 * 4);
          }
          iVar6 = *(int *)(puVar5 + 3);
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x80;
      } while (lVar9 < iVar6);
    }
    return;
  }
LAB_140f51639:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar10);
}



// FUNCTION 140f51642 FUN_140f51642 body=353 status=ok
// SIG undefined FUN_140f51642(void)

void FUN_140f51642(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f516c7;
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
LAB_140f516c7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 140f517a3 FUN_140f517a3 body=47 status=ok
// SIG undefined FUN_140f517a3(void)

void FUN_140f517a3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
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



// FUNCTION 140f517d2 FUN_140f517d2 body=230 status=ok
// SIG undefined FUN_140f517d2(void)

void FUN_140f517d2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x2ab) {
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 140f518b8 FUN_140f518b8 body=475 status=ok
// SIG undefined FUN_140f518b8(void)

longlong * FUN_140f518b8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_14472eaf0(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f51a94 FUN_140f51a94 body=102 status=ok
// SIG undefined FUN_140f51a94(void)

void FUN_140f51a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1e7df0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140f51afa(param_1 + 0x12);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140f51afa FUN_140f51afa body=55 status=ok
// SIG undefined FUN_140f51afa(void)

void FUN_140f51afa(longlong *param_1)

{
  FUN_140f51b32(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f51b32 FUN_140f51b32 body=503 status=ok
// SIG undefined FUN_140f51b32(void)

void FUN_140f51b32(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140f51cac;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar4 * 0x38) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
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
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_140f51cac;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140f51cac:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140f51d2a FUN_140f51d2a body=458 status=ok
// SIG undefined FUN_140f51d2a(void)

undefined4 *
FUN_140f51d2a(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f52006(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  lVar10 = puVar2[1];
  *(longlong *)(local_40 + 6) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  uVar6 = local_40[2];
  if (uVar6 != 0) {
    uVar5 = uVar6 >> 0xd ^ uVar5 - uVar6;
    uVar7 = uVar5 << 8 ^ (-0x61c88647 - uVar6) - uVar5;
    uVar9 = uVar7 >> 0xd ^ (uVar6 - uVar5) - uVar7;
    uVar6 = uVar9 >> 0xc ^ (uVar5 - uVar7) - uVar9;
    uVar5 = uVar6 << 0x10 ^ (uVar7 - uVar9) - uVar6;
    uVar7 = uVar5 >> 5 ^ (uVar9 - uVar6) - uVar5;
    uVar6 = uVar7 >> 3 ^ (uVar6 - uVar5) - uVar7;
    uVar5 = uVar6 << 10 ^ (uVar5 - uVar7) - uVar6;
    uVar5 = uVar5 >> 0xf ^ uVar7 - (uVar6 + uVar5);
  }
  local_58 = param_4;
  cVar3 = FUN_140f51ef6(param_1,uVar5,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[9] = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140f521e2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f51ef6 FUN_140f51ef6 body=176 status=ok
// SIG undefined FUN_140f51ef6(void)

void FUN_140f51ef6(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int iVar13;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar13 = FUN_140f51fa6();
    if (iVar13 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x28);
      plVar4 = *(longlong **)(puVar3 + 6);
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
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      uVar9 = param_3[5];
      uVar10 = param_3[6];
      uVar11 = param_3[7];
      puVar3[4] = param_3[4];
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148e44ba6(param_1,*param_4,1);
      *param_4 = iVar13;
      uVar12 = 1;
      goto LAB_140f51f2c;
    }
  }
  uVar12 = 0;
LAB_140f51f2c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  return;
}



// FUNCTION 140f51fa6 FUN_140f51fa6 body=95 status=ok
// SIG undefined FUN_140f51fa6(void)

int FUN_140f51fa6(longlong *param_1,uint param_2,int *param_3)

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
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f52006 FUN_140f52006 body=476 status=ok
// SIG undefined FUN_140f52006(void)

int * FUN_140f52006(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140549c28(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140f521e2 FUN_140f521e2 body=685 status=ok
// SIG undefined FUN_140f521e2(void)

void FUN_140f521e2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
  }
  else {
    if (uVar15 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar15,4);
    if ((int)uVar15 < 1) goto LAB_140f52248;
  }
  uVar3 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar15 != uVar3);
LAB_140f52248:
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar12 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar12 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar15 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar5 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar12) {
      iVar12 = iVar4;
    }
  }
  if (iVar12 < iVar4) {
    uVar15 = 0xffffffff;
    do {
      piVar2 = (int *)(*param_1 + (longlong)iVar12 * 0x28);
      if (piVar2[2] == 0) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = FUN_144a78877(*piVar2,piVar2[2]);
      }
      uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar5;
      piVar2[9] = iVar4;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      piVar2[8] = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar12 = (int)uVar16;
      lVar13 = (longlong)iVar12;
      uVar3 = puVar8[lVar13] & uVar15;
      if (uVar3 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar6 <= iVar12) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar8[lVar13 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar13 == lVar10) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar12 + (int)lVar10 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar5 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar4);
  }
  return;
}



// FUNCTION 140f52490 FUN_140f52490 body=481 status=ok
// SIG undefined FUN_140f52490(void)

void FUN_140f52490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)FUN_140372928();
  if (plVar3 != (longlong *)0x0) {
    local_b8 = 0;
    uStack_b0 = 0;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_b8,param_4);
    if ((longlong)(int)uStack_b0 == 0) {
      uVar5 = 0;
    }
    else {
      lVar7 = (longlong)(int)uStack_b0 * 0xd0;
      lVar6 = local_b8;
      do {
        FUN_1448729ea(lVar6 + 0x10,&local_a0,param_2);
        if (local_80 == 3) {
          uVar8 = local_a0;
          bVar2 = 3;
        }
        else {
          FUN_1400b56fe(&local_78,&local_a0,3);
          uVar8 = 0;
          if (local_58 != 0) {
            uVar8 = local_78;
          }
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
          if (pcVar1 != (code *)0x0) {
            puVar4 = &local_78;
            if (0x18 < local_60) {
              puVar4 = (undefined4 *)CONCAT44(uStack_74,local_78);
            }
            (*pcVar1)(puVar4);
          }
          bVar2 = local_80;
          if (0x18 < local_60) {
            FUN_1400020a8(CONCAT44(uStack_74,local_78));
            bVar2 = local_80;
          }
        }
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
        if (pcVar1 != (code *)0x0) {
          puVar4 = &local_a0;
          if (0x18 < local_88) {
            puVar4 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
          }
          (*pcVar1)(puVar4);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
        }
        FUN_140f52672(param_3,uVar8,lVar6);
        lVar6 = lVar6 + 0xd0;
        lVar7 = lVar7 + -0xd0;
      } while (lVar7 != 0);
      uVar5 = uStack_b0 & 0xffffffff;
    }
    FUN_140372266(local_b8,uVar5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f52672 FUN_140f52672 body=291 status=ok
// SIG undefined FUN_140f52672(void)

undefined8 FUN_140f52672(float *param_1,float param_2,ulonglong *param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_78 [44];
  float local_4c;
  ulonglong *local_48;
  float *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if ((param_2 <= 1e-08) && (*(char *)(param_1 + 1) != '\x01')) {
    uVar5 = 0;
    goto LAB_140f5271d;
  }
  pfVar1 = param_1 + 2;
  uVar4 = *param_3;
  if (uVar4 == 0) {
    uVar4 = param_3[1];
  }
  uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_140f52796(pfVar1,uVar2 >> 0x10 ^ uVar2,param_3);
  if (iVar3 == -1) {
LAB_140f526ee:
    fVar7 = *param_1;
  }
  else {
    pfVar6 = *(float **)(param_1 + 0x382);
    if (*(float **)(param_1 + 0x382) == (float *)0x0) {
      pfVar6 = pfVar1;
    }
    pfVar6 = pfVar6 + (longlong)iVar3 * 0x38;
    if (pfVar6 + 0x34 == (float *)0x0 || pfVar6 == (float *)0x0) goto LAB_140f526ee;
    fVar7 = *param_1 - pfVar6[0x34];
  }
  *param_1 = fVar7 + param_2;
  local_40 = &local_4c;
  local_48 = param_3;
  FUN_140f5287c(pfVar1,local_34,&local_48,0);
  uVar5 = 1;
LAB_140f5271d:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f52796 FUN_140f52796 body=230 status=ok
// SIG undefined FUN_140f52796(void)

int FUN_140f52796(longlong param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xe08) != *(int *)(param_1 + 0xe2c)) {
    lVar4 = param_1 + 0xe30;
    if (*(longlong *)(param_1 + 0xe50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xe58) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0xe00);
      do {
        if (lVar4 == 0) {
          lVar4 = param_1;
        }
        lVar5 = (longlong)iVar3 * 0xe0;
        if ((((*(longlong *)(lVar4 + lVar5) == *param_3) &&
             (lVar4 = lVar4 + lVar5, *(longlong *)(lVar4 + 8) == param_3[1])) &&
            (cVar1 = FUN_1401b48d6(lVar4 + 0x10,param_3 + 2), cVar1 != '\0')) &&
           (cVar1 = FUN_1401b48d6(lVar4 + 0x60,param_3 + 0xc), cVar1 != '\0')) {
          return iVar3;
        }
        lVar4 = *(longlong *)(param_1 + 0xe00);
        lVar2 = lVar4;
        if (lVar4 == 0) {
          lVar2 = param_1;
        }
        iVar3 = *(int *)(lVar2 + 0xd8 + lVar5);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f5287c FUN_140f5287c body=372 status=ok
// SIG undefined FUN_140f5287c(void)

undefined4 *
FUN_140f5287c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140f52cc2(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  FUN_140f52b20(local_48,*param_3);
  *(undefined4 *)(local_48 + 0x1a) = *puVar1;
  *(undefined4 *)(local_48 + 0x1b) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = *local_48;
  if (uVar6 == 0) {
    uVar6 = local_48[1];
  }
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_140f52a66(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    cVar3 = FUN_140f529f2(param_1,*(int *)(param_1 + 0xe08) - *(int *)(param_1 + 0xe2c),0);
    if (cVar3 == '\0') {
      uVar6 = (longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0xe58) - 1U;
      iVar5 = (int)uVar6;
      *(int *)((longlong)local_48 + 0xdc) = iVar5;
      lVar7 = *(longlong *)(param_1 + 0xe50);
      if (*(longlong *)(param_1 + 0xe50) == 0) {
        lVar7 = param_1 + 0xe30;
      }
      *(undefined4 *)(local_48 + 0x1b) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0xe58) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0xe50);
      if (*(longlong *)(param_1 + 0xe50) == 0) {
        lVar7 = param_1 + 0xe30;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0xe58) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f529f2 FUN_140f529f2 body=115 status=ok
// SIG undefined FUN_140f529f2(void)

undefined8 FUN_140f529f2(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 3) {
    iVar4 = 8;
  }
  if (param_2 < 4) {
    iVar4 = 8;
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0xe58))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0xe58) <= iVar4)))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xe58) = iVar4;
    FUN_140f52f0a(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140f52a66 FUN_140f52a66 body=185 status=ok
// SIG undefined FUN_140f52a66(void)

void FUN_140f52a66(longlong param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xe08) - *(int *)(param_1 + 0xe2c) != 1) {
    iVar2 = FUN_140f52796();
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xe00);
      if (*(longlong *)(param_1 + 0xe00) == 0) {
        lVar3 = param_1;
      }
      _Dst = (void *)(lVar3 + (longlong)iVar2 * 0xe0);
      if (*(longlong *)(lVar3 + 0xc0 + (longlong)iVar2 * 0xe0) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)((longlong)_Dst + 0xb0) != 0) {
        FUN_1400020a8();
      }
      memmove(_Dst,param_3,0xd8);
      FUN_1488d3bda(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_140f52aa0;
    }
  }
  uVar1 = 0;
LAB_140f52aa0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140f52b20 FUN_140f52b20 body=418 status=ok
// SIG undefined FUN_140f52b20(void)

undefined8 * FUN_140f52b20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[3] = param_2[3];
  uVar2 = FUN_14477b664(param_2[4]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[4] = uVar2;
  param_1[5] = param_2[5];
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = param_2[0xd];
  uVar2 = FUN_14477b664(param_2[0xe]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[0xe] = uVar2;
  param_1[0xf] = param_2[0xf];
  uVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0x17);
  uVar2 = param_2[0x16];
  *(int *)(param_1 + 0x17) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_148766baa(param_1 + 0x16,iVar1,0);
    FUN_148766c1d(param_1[0x16],uVar2,iVar1);
  }
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  uVar2 = param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_148766c4a(param_1 + 0x18,iVar1,0);
    FUN_148766cb9(param_1[0x18],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 140f52cc2 FUN_140f52cc2 body=583 status=ok
// SIG undefined FUN_140f52cc2(void)

int * FUN_140f52cc2(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0xe2c) == 0) {
    iVar9 = *(int *)(param_1 + 0xe08);
    *(int *)(param_1 + 0xe08) = iVar9 + 1;
    if (*(int *)(param_1 + 0xe0c) == iVar9) {
      FUN_1488d3b4c(param_1,iVar9);
    }
    iVar11 = *(int *)(param_1 + 0xe20);
    if (iVar11 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar2 = iVar11 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    lVar8 = param_1 + 0xe10;
    iVar7 = iVar11 + 1;
    iVar10 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar10 >> 5 == iVar2) {
      *(int *)(param_1 + 0xe20) = iVar7;
    }
    else {
      if (*(int *)(param_1 + 0xe24) <= iVar11) {
        if (iVar11 + 0x20U < 0x40) {
          iVar7 = 0x20;
          iVar2 = iVar11;
        }
        else {
          uVar12 = iVar11 + 0x20U >> 5;
          if (*(int *)(param_1 + 0xe24) + 0x1fU < 0x40) {
            uVar6 = 4;
            if (4 < uVar12) {
              uVar6 = uVar12;
            }
          }
          else {
            uVar6 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar6 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar7 = -0x20;
          if ((int)uVar12 <= iVar2) {
            iVar7 = iVar2 << 5;
          }
          iVar2 = *(int *)(param_1 + 0xe20);
        }
        *(int *)(param_1 + 0xe24) = iVar7;
        FUN_14008f53c(lVar8,iVar2);
        iVar7 = *(int *)(param_1 + 0xe20) + 1;
      }
      iVar2 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
      *(int *)(param_1 + 0xe20) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar3 = *(longlong *)(param_1 + 0xe18);
        if (*(longlong *)(param_1 + 0xe18) == 0) {
          lVar3 = lVar8;
        }
        bVar5 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar3 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar3 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar9;
    if (*(longlong *)(param_1 + 0xe18) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe18);
    }
    bVar5 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0xe00);
    if (*(longlong *)(param_1 + 0xe00) == 0) {
      lVar8 = param_1;
    }
    iVar9 = *(int *)(param_1 + 0xe28);
    lVar3 = (longlong)iVar9;
    iVar11 = *(int *)(lVar8 + 4 + lVar3 * 0xe0);
    *(int *)(param_1 + 0xe28) = iVar11;
    iVar2 = *(int *)(param_1 + 0xe2c) + -1;
    *(int *)(param_1 + 0xe2c) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar11 * 0xe0) = 0xffffffff;
    }
  }
  lVar8 = param_1 + 0xe10;
  if (*(longlong *)(param_1 + 0xe18) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xe18);
  }
  iVar11 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar11 = iVar9;
  }
  puVar1 = (uint *)(lVar8 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  *param_2 = iVar9;
  lVar8 = *(longlong *)(param_1 + 0xe00);
  if (*(longlong *)(param_1 + 0xe00) == 0) {
    lVar8 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar3 * 0xe0 + lVar8;
  return param_2;
}



// FUNCTION 140f52f0a FUN_140f52f0a body=717 status=ok
// SIG undefined FUN_140f52f0a(void)

void FUN_140f52f0a(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if (*(longlong *)(param_1 + 0xe50) != 0) {
    FUN_1446efa72(param_1 + 0xe50,0,0,4);
  }
  uVar9 = *(uint *)(param_1 + 0xe58);
  if (uVar9 != 0) {
    lVar1 = param_1 + 0xe30;
    uVar14 = 0;
    FUN_140a8e97c(lVar1,0,uVar9);
    if (0 < (int)uVar9) {
      uVar2 = 0;
      do {
        lVar13 = *(longlong *)(param_1 + 0xe50);
        if (*(longlong *)(param_1 + 0xe50) == 0) {
          lVar13 = lVar1;
        }
        *(undefined4 *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0xe58) + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar9 != uVar2);
    }
    iVar7 = *(int *)(param_1 + 0xe20);
    if (iVar7 == 0) {
      uVar5 = 1;
      iVar12 = 0;
      iVar3 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0xe18);
      if (*(uint **)(param_1 + 0xe18) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0xe10);
      }
      uVar9 = *puVar4;
      if (uVar9 == 0) {
        iVar12 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar12 = iVar7 + -1;
        }
        uVar14 = 0;
        uVar5 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar5 = uVar14;
        }
        iVar3 = 0;
        do {
          if (uVar5 == uVar14) {
            return;
          }
          iVar3 = iVar3 + 0x20;
          uVar9 = puVar4[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar14 = 0;
        iVar3 = 0;
      }
      uVar5 = (ulonglong)(-uVar9 & uVar9);
      uVar8 = uVar5 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = (iVar3 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar12) {
        iVar12 = iVar7;
      }
    }
    if (iVar12 < iVar7) {
      uVar9 = 0xffffffff;
      do {
        lVar13 = *(longlong *)(param_1 + 0xe00);
        if (*(longlong *)(param_1 + 0xe00) == 0) {
          lVar13 = param_1;
        }
        lVar6 = lVar13 + (longlong)iVar12 * 0xe0;
        uVar8 = *(ulonglong *)(lVar13 + (longlong)iVar12 * 0xe0);
        if (uVar8 == 0) {
          uVar8 = *(ulonglong *)(lVar6 + 8);
        }
        uVar2 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        uVar8 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)*(int *)(param_1 + 0xe58) - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar6 + 0xdc) = iVar7;
        lVar13 = *(longlong *)(param_1 + 0xe50);
        if (*(longlong *)(param_1 + 0xe50) == 0) {
          lVar13 = lVar1;
        }
        *(undefined4 *)(lVar6 + 0xd8) =
             *(undefined4 *)(lVar13 + ((longlong)*(int *)(param_1 + 0xe58) - 1U & uVar8) * 4);
        lVar13 = *(longlong *)(param_1 + 0xe50);
        if (*(longlong *)(param_1 + 0xe50) == 0) {
          lVar13 = lVar1;
        }
        *(int *)(lVar13 + ((longlong)iVar7 & (longlong)*(int *)(param_1 + 0xe58) - 1U) * 4) = iVar12
        ;
        uVar9 = uVar9 & ~(uint)uVar5;
        puVar4 = *(uint **)(param_1 + 0xe18);
        if (*(uint **)(param_1 + 0xe18) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0xe10);
        }
        iVar7 = *(int *)(param_1 + 0xe20);
        iVar12 = (int)uVar14;
        lVar13 = (longlong)iVar12;
        uVar2 = puVar4[lVar13] & uVar9;
        if (uVar2 == 0) {
          iVar10 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar10 = iVar7 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar12) {
            iVar11 = iVar12;
          }
          if (iVar10 <= iVar12) {
            return;
          }
          lVar6 = 0;
          while( true ) {
            iVar3 = iVar3 + 0x20;
            uVar2 = puVar4[lVar13 + lVar6 + 1];
            if (uVar2 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar11 - lVar13 == lVar6) {
              return;
            }
          }
          uVar14 = (ulonglong)(iVar12 + (int)lVar6 + 1);
          uVar9 = 0xffffffff;
        }
        uVar5 = (ulonglong)(-uVar2 & uVar2);
        uVar8 = uVar5 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar12 = (iVar3 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar7);
    }
  }
  return;
}



// FUNCTION 140f531d8 FUN_140f531d8 body=34 status=ok
// SIG undefined FUN_140f531d8(void)

void FUN_140f531d8(undefined8 param_1)

{
  FUN_140f53a74();
  FUN_1401b2056(param_1);
  FUN_140f531fa(param_1);
  return;
}



// FUNCTION 140f531fa FUN_140f531fa body=1939 status=ok
// SIG undefined FUN_140f531fa(void)

void FUN_140f531fa(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  undefined8 in_R11;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined8 unaff_R14;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  byte local_139;
  longlong local_138;
  ulonglong local_130;
  uint local_124;
  code *local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (longlong *)0x0;
  local_50 = 0x1800000000;
  lVar5 = FUN_140f5398e();
  local_138 = lVar5;
  if ((lVar5 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar5 != 0) goto LAB_140f5327e;
    uVar16 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140f5371c;
    uVar16 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
LAB_140f537b6:
    lVar11 = 0;
    lVar15 = local_138;
LAB_140f532ab:
    bVar22 = lVar11 == DAT_14cad00c8;
    lVar11 = lVar15;
    bVar2 = lVar5 != 0;
    if (bVar22) {
      if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_138);
      }
      FUN_147f67162(param_1,local_118);
      goto LAB_140f537f1;
    }
  }
  else {
    FUN_1456cec3c(lVar5);
LAB_140f5327e:
    lVar11 = lVar5;
    if (DAT_14cad00c8 == 0) {
      local_160 = &local_120;
      local_120 = FUN_144a7958c;
      local_150 = FUN_14081d0ea;
      local_158 = FUN_14081d0ea;
      local_168 = &LAB_1479b7a0c;
      local_170 = &LAB_1463b464e;
      local_178 = L"Engine";
      local_180 = 0;
      local_188 = 0x10000005;
      local_190 = 8;
      local_198 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar11 = local_138;
      if (DAT_14cad00c8 == 0) {
        uVar16 = 0;
LAB_140f5371c:
        local_160 = &local_120;
        local_120 = FUN_144a7958c;
        local_150 = FUN_14081d0ea;
        local_158 = FUN_14081d0ea;
        local_168 = &LAB_1479b7a0c;
        local_170 = &LAB_1463b464e;
        local_178 = L"Engine";
        local_180 = 0;
        local_188 = 0x10000005;
        local_190 = 8;
        local_198 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        uVar16 = uVar16 & 0xffffffff;
        goto LAB_140f537b6;
      }
    }
    bVar2 = true;
    if (*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      lVar15 = lVar11;
      if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) goto LAB_140f532ab;
    }
  }
  local_139 = bVar2;
  if (((bool)local_139 != false) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar11);
    uVar16 = uVar16 & 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 0x268);
  if (uVar4 == 0) {
    uVar21 = 1;
    uVar13 = 0;
    uVar3 = 0;
    iVar19 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x250);
    }
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      iVar19 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar19 = uVar4 - 1;
      }
      uVar13 = 0;
      uVar21 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar21 = uVar13;
      }
      iVar19 = 0;
      do {
        if (uVar21 == uVar13) goto LAB_140f537f1;
        iVar19 = iVar19 + 0x20;
        uVar3 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar13 = 0;
      iVar19 = 0;
    }
    uVar21 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar21 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar3 = (iVar19 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar3) {
      uVar3 = uVar4;
    }
  }
  if (uVar3 != uVar4) {
    uVar20 = 0xffffffff;
    local_130 = (ulonglong)uVar4;
    bVar14 = local_139;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar5 != 0) {
        if ((DAT_14c950c29 & bVar14) == 1) {
          FUN_1456cec3c(lVar11);
          uVar16 = uVar16 & 0xffffffff;
          lVar11 = local_138;
          bVar14 = local_139;
LAB_140f533a3:
          if (DAT_14cad00c8 == 0) {
            local_160 = &local_120;
            local_120 = FUN_144a7958c;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_14081d0ea;
            local_168 = &LAB_1479b7a0c;
            local_170 = &LAB_1463b464e;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = 8;
            local_198 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            uVar16 = uVar16 & 0xffffffff;
            lVar11 = local_138;
            bVar14 = local_139;
            if (DAT_14cad00c8 == 0) goto LAB_140f535c7;
          }
          if (*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140f535c7;
          lVar15 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar15 = lVar11;
          }
        }
        else {
          if ((char)uVar16 == '\0') goto LAB_140f533a3;
LAB_140f535c7:
          lVar15 = 0;
        }
        uVar1 = local_50;
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
          lVar11 = (longlong)(int)local_50;
          uVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar4);
          if (local_50._4_4_ < uVar4) {
            local_124 = (uint)uVar16;
            FUN_147f672b4(local_118,uVar1 & 0xffffffff);
            uVar16 = (ulonglong)local_124;
            bVar14 = local_139;
          }
          plVar7 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar7 = local_118;
          }
          plVar7[lVar11] = lVar5;
          lVar11 = local_138;
        }
      }
      uVar20 = uVar20 & ~(uint)uVar21;
      puVar6 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x250);
      }
      uVar4 = *(uint *)(param_1 + 0x268);
      iVar12 = (int)uVar13;
      lVar5 = (longlong)iVar12;
      uVar3 = puVar6[lVar5] & uVar20;
      if (uVar3 == 0) {
        iVar8 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar8 = uVar4 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        bVar14 = local_139;
        if (iVar12 < iVar8) {
          lVar15 = 0;
          do {
            uVar3 = puVar6[lVar5 + lVar15 + 1];
            if (uVar3 != 0) {
              uVar13 = (ulonglong)(iVar12 + (int)lVar15 + 1);
              uVar20 = 0xffffffff;
              goto LAB_140f534c1;
            }
            iVar19 = iVar19 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar5 != lVar15);
          uVar20 = 0xffffffff;
          iVar12 = iVar9;
        }
        uVar13 = (ulonglong)(iVar12 + 1);
        lVar11 = local_138;
        uVar3 = uVar4;
      }
      else {
LAB_140f534c1:
        uVar21 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar21 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar3 = (iVar19 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar3) {
          uVar3 = uVar4;
        }
      }
    } while (uVar3 != (uint)local_130);
  }
LAB_140f537f1:
  iVar19 = (int)local_50;
  lVar5 = (longlong)(int)local_50;
  if (1 < lVar5) {
    lVar11 = *(longlong *)(param_1 + 0x390);
    plVar7 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar7 = local_118;
    }
    iVar8 = 0;
    iVar12 = 0;
    bVar2 = *plVar7 == lVar11;
    do {
      lVar10 = (longlong)iVar12;
      iVar17 = iVar12;
      lVar15 = lVar10;
      iVar9 = iVar12 + 1;
      if (iVar12 + 1 < iVar19) {
        iVar9 = iVar19;
      }
      do {
        lVar15 = lVar15 + 1;
        iVar18 = iVar9;
        if (lVar5 <= lVar15) break;
        iVar17 = iVar17 + 1;
        iVar18 = iVar17;
      } while (bVar2 == (plVar7[lVar15] == lVar11));
      if (!bVar2) {
        if (iVar8 != iVar12) {
          memmove(plVar7 + iVar8,plVar7 + lVar10,(longlong)(iVar18 - iVar12) << 3);
        }
        iVar8 = iVar8 + (iVar18 - iVar12);
      }
      iVar12 = iVar18;
      bVar2 = (bool)(bVar2 ^ 1);
    } while (lVar15 < lVar5);
    local_50 = CONCAT44(local_50._4_4_,iVar8);
    plVar7 = local_118;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (iVar8 != 0) {
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)((longlong)plVar7 + lVar5) + 0x420))
                  (*(longlong **)((longlong)plVar7 + lVar5),0);
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar8 * 8 != lVar5);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5398e FUN_140f5398e body=228 status=ok
// SIG undefined FUN_140f5398e(void)

longlong FUN_140f5398e(void)

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
  if (DAT_14caa9580 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_1474a4118;
    local_40 = &LAB_14632df65;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xaf0;
    FUN_14081cfa3(L"/Script/GeometryCollectionEngine",L"GeometryCollectionComponent",&DAT_14caa9580,
                  FUN_14632df3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa9580;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f53a74 FUN_140f53a74 body=2731 status=ok
// SIG undefined FUN_140f53a74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f53a74(longlong param_1)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  double *pdVar13;
  uint uVar14;
  int iVar15;
  short *psVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double _X;
  double _X_00;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double _X_01;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  undefined8 local_1d0;
  ulonglong local_1c8;
  uint local_1c0;
  int local_1bc;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  int local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  short *local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  
  lVar8 = DAT_14cb24a78;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((*(char *)(param_1 + 0x3a0) != '\0') || (*(longlong *)(param_1 + 0x390) == 0)) ||
     (*(longlong *)(param_1 + 0x390) != *(longlong *)(param_1 + 0x1c8))) goto LAB_140f53bb5;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar4 == 0x40000002) {
    uVar18 = 0;
  }
  else {
    bVar25 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
      if (iVar4 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar25 = DVar6 == DVar7;
      }
      else {
        bVar25 = false;
      }
    }
    uVar18 = (ulonglong)(bVar25 ^ 1);
  }
  if ((*(int *)(lVar8 + uVar18 * 4) != 1) ||
     (plVar5 = *(longlong **)(param_1 + 0x1c8), plVar5 == (longlong *)0x0)) goto LAB_140f53bb5;
  lVar8 = FUN_140a6d95c();
  if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (((*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30 || (lVar8 = (**(code **)(plVar5[0x15e] + 0x38))(plVar5 + 0x15e), lVar8 == 0))
      || (*(longlong *)(lVar8 + 0xf8) == 0)))) goto LAB_140f53bb5;
  lVar17 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar12 = (longlong *)FUN_145a7712c();
    lVar17 = plVar12[0x22];
    if (plVar12[0x22] == 0) {
      (**(code **)(*plVar12 + 1000))(plVar12);
      DAT_14cb24ad0 = plVar12[0x22];
      lVar17 = DAT_14cb24ad0;
      if (DAT_14cb24ad0 == 0) goto LAB_140f53bb5;
    }
  }
  DAT_14cb24ad0 = lVar17;
  lVar11 = DAT_14cb24ad0;
  lVar17 = DAT_14cb24ad0 + 200;
  lVar9 = FUN_147f65ade(lVar17);
  if (lVar9 == 0) {
    FUN_14475cc44(lVar11 + 0xd0,&local_f8);
    psVar16 = &DAT_149dfb77a;
    if (dStack_f0._0_4_ != 0) {
      psVar16 = local_f8;
    }
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      uVar10 = FUN_1459ebcbe();
      FUN_14583a8aa(uVar10,0);
    }
    if (local_f8 != (short *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar11 = FUN_147f65ade(lVar17);
  if ((lVar11 == 0) ||
     (lVar11 = FUN_147f65ade(lVar17), *(int *)(lVar11 + 0x38) == *(int *)(lVar11 + 100)))
  goto LAB_140f53bb5;
  FUN_1400bbfc4(&local_138,lVar8);
  local_148 = (void *)0x0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  lVar8 = FUN_147f65ade(lVar17);
  iVar4 = *(int *)(lVar8 + 0x58);
  if (iVar4 == 0) {
    uVar23 = 1;
    uVar18 = 0;
    iVar19 = 0;
    iVar24 = 0;
  }
  else {
    puVar20 = *(uint **)(lVar8 + 0x50);
    if (*(uint **)(lVar8 + 0x50) == (uint *)0x0) {
      puVar20 = (uint *)(lVar8 + 0x40);
    }
    uVar22 = *puVar20;
    if (uVar22 == 0) {
      iVar24 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar24 = iVar4 + -1;
      }
      uVar18 = 0;
      uVar23 = (ulonglong)(uint)(iVar24 >> 5);
      if (iVar24 >> 5 < 1) {
        uVar23 = uVar18;
      }
      iVar19 = 0;
      do {
        if (uVar23 == uVar18) goto LAB_140f53d95;
        iVar19 = iVar19 + 0x20;
        uVar22 = puVar20[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar18 = 0;
      iVar19 = 0;
    }
    uVar23 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar23 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar24 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar24) {
      iVar24 = iVar4;
    }
  }
  if (iVar24 != iVar4) {
    local_1a0 = local_130;
    local_1bc = local_120;
    iVar21 = iVar4 + 0x1e;
    if (-1 < iVar4 + -1) {
      iVar21 = iVar4 + -1;
    }
    local_1a8 = local_128;
    iVar21 = iVar21 >> 5;
    uVar22 = 0xffffffff;
LAB_140f53e3f:
    if ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x30 + (longlong)iVar24 * 0x58) == local_138)
       && (lVar17 = (longlong)iVar24 * 0x58 + *(longlong *)(lVar8 + 0x30),
          *(longlong *)(lVar17 + 0x38) == local_130)) {
      if (*(int *)(lVar17 + 0x48) == local_120) {
        if (1 < local_120) {
          local_1b0 = *(longlong *)(lVar17 + 0x40);
          local_1b8 = 0;
          do {
            uVar2 = *(ushort *)(local_1b0 + local_1b8);
            local_1c8 = (ulonglong)uVar2;
            uVar3 = *(ushort *)(local_128 + local_1b8);
            local_1c0 = (uint)uVar3;
            if (uVar2 == uVar3) {
              if (uVar2 == 0) break;
            }
            else {
              if (0x7f < (uVar3 | uVar2)) {
                uVar14 = uVar2 - local_1c0;
                goto LAB_140f53fa2;
              }
              if ((&DAT_149e05da0)[local_1c8] != (&DAT_149e05da0)[local_1c0])
              goto code_r0x000140f53f9b;
            }
            local_1b8 = local_1b8 + 2;
          } while( true );
        }
      }
      else if (*(int *)(lVar17 + 0x48) + local_120 != 1) goto LAB_140f53e51;
      goto LAB_140f53fce;
    }
    goto LAB_140f53e51;
  }
LAB_140f53d95:
  if (local_158 != 0) {
    FUN_14475cc44(&local_158,&local_f8);
    psVar16 = &DAT_149dfb77a;
    if (dStack_f0._0_4_ != 0) {
      psVar16 = local_f8;
    }
    if ((psVar16 == (short *)0x0) || (*psVar16 == 0)) {
      lVar8 = 0;
    }
    else {
      uVar10 = FUN_1406d0862();
      lVar8 = FUN_14583a8aa(uVar10,0,psVar16);
    }
    if (local_f8 != (short *)0x0) {
      FUN_1400020a8();
    }
    if (lVar8 != 0) {
LAB_140f54050:
      if (*(longlong *)(lVar8 + 0xe0) != 0) {
        lVar17 = plVar5[1];
        FUN_1446f470e(&local_160,L"StaticMeshComponent0",1);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffffffffff00;
        plVar12 = (longlong *)FUN_141797230(param_1,local_160,(int)lVar17,0);
        FUN_14092e51e(param_1,plVar12);
        local_178 = plVar5[0x36];
        lStack_170 = plVar5[0x37];
        local_168 = plVar5[0x38];
        local_1d8 = CONCAT71(local_1d8._1_7_,1);
        FUN_14020f75c(plVar12,&local_178,0,0);
        local_188 = plVar5[0x35];
        local_198 = plVar5[0x33];
        lStack_190 = plVar5[0x34];
        auVar31 = *(undefined1 (*) [16])(plVar12 + 0x36);
        dVar27 = auVar31._0_8_;
        dVar28 = auVar31._8_8_;
        dVar26 = (double)plVar12[0x38];
        pdVar13 = (double *)plVar12[0x46];
        if (pdVar13 == (double *)0x0) {
          pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
          dVar29 = DAT_14c8463d8;
          *pdVar13 = DAT_14c8463d0;
          pdVar13[1] = dVar29;
          dVar29 = DAT_14c8463e8;
          pdVar13[2] = DAT_14c8463e0;
          pdVar13[3] = dVar29;
          dVar29 = DAT_14c846500;
          pdVar13[4] = DAT_14c8464f8;
          pdVar13[5] = dVar29;
          pdVar13[6] = DAT_14c846508;
          plVar12[0x46] = (longlong)pdVar13;
        }
        auVar35 = _DAT_1499387d0;
        if ((((pdVar13[4] != dVar27) || (NAN(pdVar13[4]) || NAN(dVar27))) || (pdVar13[5] != dVar28))
           || (NAN(pdVar13[5]) || NAN(dVar28))) {
LAB_140f5414b:
          auVar37._8_8_ = 0;
          auVar37._0_8_ = dVar26;
          dVar29 = (double)DAT_1499387d0;
          dVar30 = DAT_1499387d0._8_8_;
          auVar31 = divpd(auVar31,_DAT_1499387d0);
          auVar34 = divpd(auVar37,_DAT_1499387d0);
          auVar31 = roundpd(auVar31,auVar31,3);
          auVar34 = roundpd(auVar34,auVar34,3);
          auVar43._0_8_ = dVar27 - auVar31._0_8_ * dVar29;
          auVar43._8_8_ = dVar28 - auVar31._8_8_ * dVar30;
          auVar38._0_8_ = dVar26 - auVar34._0_8_ * dVar29;
          auVar38._8_8_ = 0.0 - auVar34._8_8_ * dVar30;
          auVar41._0_8_ = auVar43._0_8_ + dVar29;
          auVar41._8_8_ = auVar43._8_8_ + dVar30;
          auVar36._0_8_ = auVar38._0_8_ + dVar29;
          auVar36._8_8_ = auVar38._8_8_ + dVar30;
          auVar34._8_8_ = -(ulonglong)(0.0 <= auVar43._8_8_);
          auVar34._0_8_ = -(ulonglong)(0.0 <= auVar43._0_8_);
          auVar31 = blendvpd(auVar41,auVar43,auVar34);
          auVar42._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
          auVar42._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
          auVar34 = blendvpd(auVar36,auVar38,auVar42);
          auVar39._0_8_ = auVar31._0_8_ + -360.0;
          auVar39._8_8_ = auVar31._8_8_ + -360.0;
          auVar32._8_8_ = -(ulonglong)(180.0 < auVar31._8_8_);
          auVar32._0_8_ = -(ulonglong)(180.0 < auVar31._0_8_);
          auVar42 = blendvpd(auVar31,auVar39,auVar32);
          auVar33._8_8_ = -(ulonglong)(180.0 < auVar34._8_8_);
          auVar33._0_8_ = -(ulonglong)(180.0 < auVar34._0_8_);
          auVar31._8_8_ = auVar34._8_8_ + 0.0;
          auVar31._0_8_ = auVar34._0_8_ + -360.0;
          auVar31 = blendvpd(auVar34,auVar31,auVar33);
          *(undefined1 (*) [16])(pdVar13 + 4) = auVar42;
          dVar26 = auVar31._0_8_;
          pdVar13[6] = dVar26;
          auVar44._8_8_ = 0;
          auVar44._0_8_ = dVar26;
          auVar31 = divpd(auVar42,auVar35);
          auVar35 = divpd(auVar44,auVar35);
          auVar31 = roundpd(auVar31,auVar31,3);
          auVar35 = roundpd(auVar35,auVar35,3);
          dVar40 = (auVar42._0_8_ - auVar31._0_8_ * dVar29) * 0.008726646259971648;
          _X = (auVar42._8_8_ - auVar31._8_8_ * dVar30) * 0.008726646259971648;
          _X_00 = (dVar26 - auVar35._0_8_ * dVar29) * 0.008726646259971648;
          _X_01 = (0.0 - auVar35._8_8_ * dVar30) * 0.008726646259971648;
          dVar26 = sin(dVar40);
          dVar27 = sin(_X);
          dVar28 = sin(_X_00);
          sin(_X_01);
          dVar29 = cos(dVar40);
          dVar30 = cos(_X);
          dVar40 = cos(_X_00);
          cos(_X_01);
          *pdVar13 = dVar26 * dVar27 * dVar40 - dVar29 * dVar30 * dVar28;
          pdVar13[1] = -(dVar26 * dVar30 * dVar40) - dVar29 * dVar27 * dVar28;
          pdVar13[2] = -(dVar30 * dVar26 * dVar28) + dVar27 * dVar29 * dVar40;
          pdVar13[3] = dVar27 * dVar26 * dVar28 + dVar30 * dVar29 * dVar40;
        }
        else if ((pdVar13[6] != dVar26) || (NAN(pdVar13[6]) || NAN(dVar26))) goto LAB_140f5414b;
        local_f8 = (short *)*pdVar13;
        dStack_f0 = pdVar13[1];
        local_e8 = pdVar13[2];
        dStack_e0 = pdVar13[3];
        local_118 = local_198;
        lStack_110 = lStack_190;
        local_108 = local_188;
        local_1d0 = CONCAT71(local_1d0._1_7_,1);
        local_1d8 = 0;
        FUN_144927ad4(plVar12,&local_118,&local_f8,0);
        if (*(char *)(*(longlong *)(lVar8 + 0xe0) + 0x91) == '\0') {
          FUN_1400337aa(lVar8);
        }
        (**(code **)(*plVar12 + 0xa78))(plVar12,lVar8);
        FUN_14045627c(plVar12,1,1);
        FUN_1449e3cec(plVar12,0,1);
        lVar8 = (**(code **)(*plVar12 + 0x7b8))(plVar12,0,1,0xffffffff);
        *(undefined8 *)(lVar8 + 0x44) = DAT_14cad0ef0;
        *(undefined8 *)(lVar8 + 0xa0) = 0;
        *(byte *)(lVar8 + 0x3d) = *(byte *)(lVar8 + 0x3d) & 0xbf;
        *(undefined1 *)(lVar8 + 0x15) = 0;
        FUN_1400bcfd8(lVar8);
        FUN_1401a080a(plVar12);
        (**(code **)(*plVar12 + 0x690))(plVar12,0);
        (**(code **)(*plVar12 + 0xa8))(plVar12);
        *(undefined8 *)(param_1 + 0x390) = 0;
        (**(code **)(*plVar5 + 0x420))(plVar5,0);
      }
    }
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_140f53bb5:
  if ((local_d0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140f53f9b:
  uVar14 = (uint)(byte)(&DAT_149e05da0)[local_1c8] - (uint)(byte)(&DAT_149e05da0)[local_1c0];
LAB_140f53fa2:
  local_1c8 = (ulonglong)uVar14;
  if (uVar14 == 0) {
LAB_140f53fce:
    lVar8 = FUN_1401ca522(lVar17);
    local_158 = *(longlong *)(lVar17 + 8);
    uStack_150 = *(undefined8 *)(lVar17 + 0x10);
    if (&local_148 != (void **)(lVar17 + 0x18)) {
      uVar22 = *(uint *)(lVar17 + 0x20);
      _Src = *(void **)(lVar17 + 0x18);
      uStack_140 = CONCAT44(uStack_140._4_4_,uVar22);
      if (uVar22 == 0 && uStack_140._4_4_ == 0) {
        uStack_140 = (ulonglong)uVar22;
      }
      else {
        FUN_1446dd670(&local_148,uVar22);
        if (uVar22 != 0) {
          memcpy(local_148,_Src,(longlong)(int)uVar22 * 2);
        }
      }
    }
    if (lVar8 != 0) goto LAB_140f54050;
    goto LAB_140f53d95;
  }
LAB_140f53e51:
  uVar22 = uVar22 & ~(uint)uVar23;
  puVar20 = *(uint **)(lVar8 + 0x50);
  if (*(uint **)(lVar8 + 0x50) == (uint *)0x0) {
    puVar20 = (uint *)(lVar8 + 0x40);
  }
  iVar24 = (int)uVar18;
  lVar17 = (longlong)iVar24;
  uVar14 = puVar20[lVar17] & uVar22;
  if (uVar14 == 0) {
    iVar15 = iVar21;
    if (iVar21 < iVar24) {
      iVar15 = iVar24;
    }
    if (iVar21 <= iVar24) goto LAB_140f53d95;
    lVar11 = 0;
    while( true ) {
      iVar19 = iVar19 + 0x20;
      uVar14 = puVar20[lVar17 + lVar11 + 1];
      if (uVar14 != 0) break;
      lVar11 = lVar11 + 1;
      if (iVar15 - lVar17 == lVar11) goto LAB_140f53d95;
    }
    uVar18 = (ulonglong)(iVar24 + (int)lVar11 + 1);
    uVar22 = 0xffffffff;
  }
  uVar23 = (ulonglong)(-uVar14 & uVar14);
  uVar1 = uVar23 * 2 + 1;
  lVar17 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  iVar24 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
  if (iVar4 <= iVar24) goto LAB_140f53d95;
  goto LAB_140f53e3f;
}



// FUNCTION 140f54520 FUN_140f54520 body=270 status=ok
// SIG undefined FUN_140f54520(void)

undefined8 FUN_140f54520(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140f54628;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f54628;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140f54628:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f545d6;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140f545d6;
    }
  }
  uVar6 = 0;
LAB_140f545d6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f54630 FUN_140f54630 body=75 status=ok
// SIG undefined FUN_140f54630(void)

void FUN_140f54630(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x9f0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x60) != 0)) {
        FUN_148827eb2();
      }
      lVar4 = lVar4 + 0x80;
    } while ((longlong)iVar1 * 0x80 != lVar4);
  }
  return;
}



// FUNCTION 140f5467b FUN_140f5467b body=49 status=ok
// SIG undefined FUN_140f5467b(void)

longlong FUN_140f5467b(void)

{
  if (DAT_14cabd3f8 == 0) {
    FUN_140f50038(&DAT_14cabd3f8,&PTR_s__Script_MassEntity_14a5afad8);
  }
  return DAT_14cabd3f8;
}



// FUNCTION 140f546ac FUN_140f546ac body=49 status=ok
// SIG undefined FUN_140f546ac(void)

longlong FUN_140f546ac(void)

{
  if (DAT_14cb26ab0 == 0) {
    FUN_140f50038(&DAT_14cb26ab0,&PTR_s__Script_EnhancedInput_14acc1c28);
  }
  return DAT_14cb26ab0;
}



// FUNCTION 140f546de FUN_140f546de body=149 status=ok
// SIG undefined FUN_140f546de(void)

undefined8 * FUN_140f546de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b296140;
  FUN_140f547a2(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140f54773(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
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
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f54773 FUN_140f54773 body=47 status=ok
// SIG undefined FUN_140f54773(void)

void FUN_140f54773(longlong param_1,int param_2)

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



// FUNCTION 140f547a2 FUN_140f547a2 body=49 status=ok
// SIG undefined FUN_140f547a2(void)

void FUN_140f547a2(longlong param_1,int param_2)

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



// FUNCTION 140f547d3 FUN_140f547d3 body=49 status=ok
// SIG undefined FUN_140f547d3(void)

longlong FUN_140f547d3(void)

{
  if (DAT_14cb906d0 == 0) {
    FUN_140f50038(&DAT_14cb906d0,&PTR_s__Script_CohtmlPlugin_14b448136_2_14b448118);
  }
  return DAT_14cb906d0;
}



// FUNCTION 140f54804 FUN_140f54804 body=407 status=ok
// SIG undefined FUN_140f54804(void)

void FUN_140f54804(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  cVar4 = FUN_140526f64();
  if (cVar4 != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x1c0);
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    iVar2 = *(int *)(param_1 + 0x108);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x100);
      lVar5 = 0;
      do {
        FUN_140f5499c(*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    iVar2 = *(int *)(param_1 + 0x118);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
      lVar5 = 0;
      do {
        FUN_140f5499c(*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x100);
      lVar5 = 0;
      do {
        FUN_140f55216(*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    iVar2 = *(int *)(param_1 + 0x118);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
      lVar5 = 0;
      do {
        FUN_140f55216(*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    *(undefined1 *)(param_1 + 0x1c0) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x1c1);
    *(undefined1 *)(param_1 + 0x1c1) = 1;
    iVar2 = *(int *)(param_1 + 0x128);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      lVar5 = 0;
      do {
        FUN_140f54da8(*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x100);
      lVar5 = 0;
      do {
        FUN_140f54a3a(*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    iVar2 = *(int *)(param_1 + 0x118);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
      lVar5 = 0;
      do {
        FUN_140f54a3a(*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    *(undefined1 *)(param_1 + 0x1c1) = uVar1;
  }
  return;
}



// FUNCTION 140f5499c FUN_140f5499c body=157 status=ok
// SIG undefined FUN_140f5499c(void)

void FUN_140f5499c(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140f42f34();
  if ((lVar2 == 0) || (cVar1 = FUN_1405f61f4(lVar2), cVar1 != '\x06')) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140f54b44(param_1,&local_38);
    lVar2 = local_38;
    lVar4 = (longlong)(int)uStack_30;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        FUN_140f55118(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while (lVar4 * 8 != lVar3);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f54a3a FUN_140f54a3a body=265 status=ok
// SIG undefined FUN_140f54a3a(void)

void FUN_140f54a3a(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f54df0(param_1,1);
  lVar4 = FUN_140f42f34(param_1);
  if (((lVar4 != 0) && (cVar2 = FUN_1405f61f4(lVar4), cVar2 == '\x03')) &&
     (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x128) == '\x01')) {
    uVar1 = *(undefined1 *)(param_1 + 0x11);
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_14890de1e(*(undefined8 *)(param_1 + 0x80),3,4);
    *(undefined1 *)(param_1 + 0x11) = uVar1;
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140f54b44(param_1);
  lVar4 = FUN_140f42f34(param_1);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1405f61f4(lVar4);
  }
  FUN_140d82b18(param_1,uVar3);
  lVar4 = local_38;
  lVar6 = (longlong)(int)uStack_30;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      FUN_140f55bbc(*(undefined8 *)(lVar4 + lVar5));
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f54b44 FUN_140f54b44 body=295 status=ok
// SIG undefined FUN_140f54b44(void)

void FUN_140f54b44(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x38)) {
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x4c0);
    if (lVar6 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x4b8);
      lVar5 = 0;
      do {
        piVar3 = *(int **)(*(longlong *)(lVar2 + lVar5) + 8);
        if (piVar3 == (int *)0x0) {
          piVar3 = &DAT_14c9485f0;
        }
        if (((*piVar3 == 0) || (iVar1 = piVar3[1], iVar1 == 0)) || (*piVar3 == DAT_14c948000)) {
LAB_140f54c53:
          local_50 = DAT_14c948620;
          local_58 = DAT_14c948618;
        }
        else {
          if ((iVar1 < 2) && (piVar3[9] < 1)) {
            piVar3 = piVar3 + 2;
          }
          else {
            piVar3 = *(int **)(piVar3 + 6);
          }
          if (iVar1 < 1) goto LAB_140f54c53;
          local_50 = piVar3[2];
          local_58 = *(undefined8 *)piVar3;
        }
        lVar4 = FUN_140f54c6c(param_1,&local_58);
        if (lVar4 != 0) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_140f54fb6(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f54c6c FUN_140f54c6c body=220 status=ok
// SIG undefined FUN_140f54c6c(void)

undefined8 FUN_140f54c6c(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_2;
  uVar5 = param_2[2];
  if (uVar5 != 0) {
    uVar3 = uVar5 >> 0xd ^ uVar3 - uVar5;
    uVar7 = uVar3 << 8 ^ (-0x61c88647 - uVar5) - uVar3;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar3) - uVar7;
    uVar5 = uVar8 >> 0xc ^ (uVar3 - uVar7) - uVar8;
    uVar3 = uVar5 << 0x10 ^ (uVar7 - uVar8) - uVar5;
    uVar7 = uVar3 >> 5 ^ (uVar8 - uVar5) - uVar3;
    uVar5 = uVar7 >> 3 ^ (uVar5 - uVar3) - uVar7;
    uVar3 = uVar5 << 10 ^ (uVar3 - uVar7) - uVar5;
    uVar3 = uVar3 >> 0xf ^ uVar7 - (uVar5 + uVar3);
  }
  iVar2 = FUN_140f54d48((longlong *)(param_1 + 0x30),uVar3);
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar4 = 0;
    if ((lVar1 + (longlong)iVar2 * 0x20 != 0) &&
       (puVar6 = (undefined8 *)(lVar1 + (longlong)iVar2 * 0x20 + 0x10), puVar6 != (undefined8 *)0x0)
       ) {
      uVar4 = *puVar6;
    }
  }
  return uVar4;
}



// FUNCTION 140f54d48 FUN_140f54d48 body=95 status=ok
// SIG undefined FUN_140f54d48(void)

int FUN_140f54d48(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f54da8 FUN_140f54da8 body=72 status=ok
// SIG undefined FUN_140f54da8(void)

void FUN_140f54da8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_140e1935a();
  if (lVar2 == 0) {
    bVar3 = true;
  }
  else {
    cVar1 = FUN_140e192e0(lVar2);
    bVar3 = cVar1 == '\0';
  }
  FUN_140d82cdc(param_1,bVar3,*(longlong *)(param_1 + 0x60) + 0x78,param_1 + 0x28);
  FUN_140d82b92(*(undefined8 *)(param_1 + 8),param_1);
  return;
}



// FUNCTION 140f54df0 FUN_140f54df0 body=354 status=ok
// SIG undefined FUN_140f54df0(void)

void FUN_140f54df0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x1ec) != param_2) {
    *(char *)(param_1 + 0x1ec) = param_2;
    if (param_2 == '\0') {
      FUN_140f54f6a(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
      *(undefined4 *)(param_1 + 0xd8) = 0;
      if (*(int *)(param_1 + 0xdc) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
    else {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x368);
      if (lVar8 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x360);
        lVar7 = 0;
        do {
          FUN_1457cce6a(*(undefined8 *)(lVar4 + lVar7),&local_50,param_1);
          iVar3 = *(int *)(param_1 + 0xd8);
          *(uint *)(param_1 + 0xd8) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0xdc) < iVar3 + 1U) {
            FUN_1457cd00a((longlong *)(param_1 + 0xd0),iVar3);
          }
          plVar6 = local_48;
          lVar5 = *(longlong *)(param_1 + 0xd0);
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = local_50;
          *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_48)(local_48);
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
          lVar7 = lVar7 + 0x10;
        } while (lVar8 * 0x10 != lVar7);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f54f6a FUN_140f54f6a body=75 status=ok
// SIG undefined FUN_140f54f6a(void)

void FUN_140f54f6a(longlong param_1,int param_2)

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



// FUNCTION 140f54fb6 FUN_140f54fb6 body=353 status=ok
// SIG undefined FUN_140f54fb6(void)

void FUN_140f54fb6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f5503b;
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
LAB_140f5503b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f55118 FUN_140f55118 body=254 status=ok
// SIG undefined FUN_140f55118(void)

void FUN_140f55118(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  
  lVar2 = FUN_1401bd7a2(*(undefined8 *)(param_1 + 0x40));
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x38) == '\x01')) &&
      (lVar2 = FUN_140dcc81c(param_1), lVar2 != 0)) &&
     (bVar1 = FUN_141042fba(lVar2), (bVar1 & 0x1e) == 4)) {
    FUN_148910ea2(param_1);
  }
  lVar2 = FUN_1401bd7a2(*(undefined8 *)(param_1 + 0x40));
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x39) == '\x01')) {
    lVar2 = FUN_1401bd7a2(*(undefined8 *)(param_1 + 0x40));
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x3a) == '\0')) {
      cVar4 = *(char *)(*(longlong *)(param_1 + 8) + 0x1c4);
    }
    else {
      cVar4 = '\0';
    }
    lVar2 = FUN_1401bd7a2(*(undefined8 *)(param_1 + 0x40));
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x3b) == '\0')) {
      lVar2 = FUN_140dcc81c(param_1);
      if (lVar2 == 0) {
        return;
      }
      bVar1 = FUN_141042fba(lVar2);
      bVar5 = bVar1 < 6;
    }
    else {
      bVar5 = false;
    }
    if (cVar4 == '\0' && !bVar5) {
      lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x1c8);
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1c0) + lVar3) == param_1
             ) {
            FUN_148910ea2(param_1);
            return;
          }
          lVar3 = lVar3 + 8;
        } while (lVar2 * 8 != lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140f55216 FUN_140f55216 body=2469 status=ok
// SIG undefined FUN_140f55216(void)

void FUN_140f55216(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  char cVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  char local_99;
  longlong local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  int local_7c;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar20 = *(char *)(param_1 + 0x1ed);
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  cVar9 = FUN_14189d00a();
  if (cVar9 != '\0') {
    FUN_140f691f2(param_1,*(longlong *)(param_1 + 0xa0) + 0x130);
  }
  FUN_140f691f2(param_1,*(longlong *)(param_1 + 0xa0) + 0xb0);
  lVar26 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x4c0);
  if (lVar26 != 0) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x4b8);
    lVar24 = 0;
    do {
      lVar15 = *(longlong *)(lVar14 + lVar24);
      lVar12 = FUN_140672052(*(undefined8 *)(param_1 + 8));
      if ((lVar12 != 0) &&
         (cVar9 = FUN_140a63060(extraout_XMM0_Da,lVar15,param_1 + 0xa8,lVar12), cVar9 != '\0')) {
        FUN_140f691f2(param_1,lVar15 + 0x50);
      }
      lVar24 = lVar24 + 8;
    } while (lVar26 * 8 != lVar24);
  }
  lVar26 = FUN_140f42f34(param_1);
  if ((lVar26 == 0) || (cVar9 = FUN_1405f61f4(lVar26), cVar9 != '\x06')) {
    lVar26 = *(longlong *)(param_1 + 0xa0);
    lVar14 = *(longlong *)(lVar26 + 0x788);
    if (lVar14 == 0) {
      uVar13 = FUN_1406ef318();
      lVar14 = FUN_14477b664(uVar13);
      *(longlong *)(lVar26 + 0x788) = lVar14;
    }
    lVar24 = *(longlong *)(lVar26 + 0x790);
    if (lVar24 == 0) {
      if ((lVar14 != 0) && (*(longlong *)(lVar26 + 0x780) != 0)) {
        plVar27 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar27 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar27 + 0x108))(plVar27), cVar9 == '\0')) {
          *(undefined8 *)(lVar26 + 0x790) = 0;
        }
        else {
          uVar13 = (**(code **)(*plVar27 + 0x110))(plVar27);
          lVar24 = FUN_144aff482(uVar13,(longlong *)(lVar26 + 0x780));
          *(longlong *)(lVar26 + 0x790) = lVar24;
          if (lVar24 != 0) goto LAB_140f5533d;
        }
      }
    }
    else {
LAB_140f5533d:
      local_78 = (code *)0x0;
      uStack_70 = 0;
      FUN_1410cfcf6(param_1,&local_78);
      pcVar7 = local_78;
      lVar26 = (longlong)(int)uStack_70;
      if (lVar26 == 0) {
LAB_140f55461:
        plVar27 = (longlong *)0x0;
      }
      else {
        lVar14 = 0;
        do {
          plVar27 = *(longlong **)(pcVar7 + lVar14);
          if ((((plVar27 != (longlong *)0x0) &&
               (cVar9 = (**(code **)(*plVar27 + 0x6c8))(plVar27), cVar9 != '\0')) &&
              ((cVar9 = FUN_14016169c(plVar27,&local_7c), cVar9 == '\0' || (local_7c == 0)))) &&
             (plVar27[0x73] != 0)) {
            lVar15 = FUN_140082f10();
            plVar27 = (longlong *)plVar27[0x73];
            if ((((plVar27 != (longlong *)0x0) && (lVar15 != 0)) &&
                (lVar12 = plVar27[2], lVar12 != 0)) &&
               ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar12 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                 == lVar15 + 0x30)))) goto LAB_140f5546c;
          }
          lVar14 = lVar14 + 8;
        } while (lVar26 * 8 != lVar14);
        if ((int)uStack_70 == 0) goto LAB_140f55461;
        lVar26 = *(longlong *)local_78;
        if (lVar26 == 0) {
          plVar27 = (longlong *)0x0;
          goto LAB_140f5546c;
        }
        if (*(longlong *)(lVar26 + 0x398) == 0) goto LAB_140f55461;
        lVar14 = FUN_140082f10();
        plVar6 = *(longlong **)(lVar26 + 0x398);
        if (plVar6 == (longlong *)0x0) goto LAB_140f55461;
        plVar27 = (longlong *)0x0;
        if ((lVar14 != 0) && (lVar26 = plVar6[2], lVar26 != 0)) {
          if (*(int *)(lVar26 + 0x38) < *(int *)(lVar14 + 0x38)) goto LAB_140f55461;
          plVar27 = (longlong *)0x0;
          if (*(longlong *)(*(longlong *)(lVar26 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
              lVar14 + 0x30) {
            plVar27 = plVar6;
          }
        }
      }
LAB_140f5546c:
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
      if ((plVar27 == (longlong *)0x0) || (lVar26 = FUN_1401b2ade(plVar27), lVar26 == 0)) {
LAB_140f554b8:
        lVar26 = 0;
      }
      else {
        if (DAT_14cb61cd0 == 0) {
          local_78 = FUN_141030f22;
          local_b0 = FUN_14081d0ea;
          local_b8 = &LAB_1463b31ae;
          local_c0 = &local_78;
          local_c8 = &LAB_1486dca4f;
          local_d0 = &LAB_1464f50a6;
          local_d8 = &DAT_149e063b2;
          local_e0 = 0;
          local_e8 = 0x10000004;
          local_f0 = 8;
          local_f8 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(*(longlong *)(lVar26 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
        goto LAB_140f554b8;
      }
      if ((((*(char *)(*(longlong *)(param_1 + 0xa0) + 0x798) != '\x01') ||
           ((lVar26 != 0 && (*(char *)(lVar26 + 0xd68) == '\x01')))) &&
          (lVar26 = (**(code **)(*plVar27 + 0x7e0))(plVar27,&DAT_14cb8dcf0), lVar26 != 0)) &&
         (cVar9 = FUN_14095026a(lVar26,lVar24), cVar9 != '\0')) {
        FUN_140f13ae4(param_1,6,0);
      }
    }
  }
  lVar26 = FUN_140f42f34(param_1);
  if (lVar26 != 0) {
    bVar10 = FUN_1405f61f4(lVar26);
    if (bVar10 == 5) goto LAB_140f558cb;
    if (bVar10 == 6) {
      FUN_140d850e0(param_1,1);
      goto LAB_140f558cb;
    }
    if (bVar10 == 7) {
      FUN_140d853aa(param_1,local_90,*(longlong *)(param_1 + 0xa0) + 0x180,1);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      goto LAB_140f558cb;
    }
    if ((1 < bVar10) && (FUN_140f691f2(param_1,*(longlong *)(param_1 + 0xa0) + 0xd8), 3 < bVar10)) {
      FUN_140f69170(param_1);
      lVar26 = *(longlong *)(param_1 + 0xa0);
      iVar11 = FUN_140e5d7c8(param_1);
      iVar4 = *(int *)(lVar26 + 0x68);
      if ((longlong)iVar4 != 0) {
        lVar26 = *(longlong *)(lVar26 + 0x60);
        lVar14 = 0;
        do {
          if (*(int *)(lVar26 + lVar14) == iVar11) {
            lVar26 = lVar26 + lVar14;
            goto LAB_140f55673;
          }
          lVar14 = lVar14 + 0xc0;
        } while ((longlong)iVar4 * 0xc0 != lVar14);
        if (0 < iVar4) {
LAB_140f55673:
          if (lVar26 != 0) {
            FUN_140f691f2(param_1,lVar26 + 0x48);
          }
        }
      }
      FUN_140f691f2(param_1,*(longlong *)(param_1 + 0xa0) + 0x100);
    }
  }
  FUN_143df5470(*(undefined8 *)(param_1 + 0x80));
  local_78 = (code *)0x0;
  uStack_70 = 0;
  FUN_140f54b44(param_1,&local_78);
  pcVar7 = local_78;
  lVar26 = (longlong)(int)uStack_70;
  if (lVar26 != 0) {
    lVar14 = 0;
    local_99 = cVar20;
    do {
      lVar24 = *(longlong *)(pcVar7 + lVar14);
      lVar15 = FUN_140dcc81c(lVar24);
      if (lVar15 == 0) goto switchD_140f55753_caseD_a;
      bVar10 = FUN_141042fba(lVar15);
      if (2 < bVar10) {
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 200);
        if (bVar10 == 3) goto switchD_140f55753_caseD_a;
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0xf8);
        *(undefined8 *)(lVar24 + 0xe8) = 0;
        *(undefined8 *)(lVar24 + 0xf0) = 0;
        FUN_143df1de6(lVar24,1);
      }
      switch(bVar10) {
      case 7:
        lVar15 = *(longlong *)(lVar24 + 0x40);
        lVar12 = 0x158;
        break;
      case 8:
        lVar15 = *(longlong *)(lVar24 + 0x40);
        lVar12 = 0x158;
        goto LAB_140f55844;
      case 9:
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x158);
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x1b8);
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x1e8);
        uVar13 = 3;
        goto LAB_140f55826;
      default:
        goto switchD_140f55753_caseD_a;
      case 0xb:
        lVar15 = *(longlong *)(lVar24 + 0x40);
        lVar12 = 0x188;
        break;
      case 0xc:
        lVar15 = *(longlong *)(lVar24 + 0x40);
        lVar12 = 0x188;
        goto LAB_140f55844;
      case 0xd:
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x188);
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x1b8);
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x1e8);
        uVar13 = 1;
LAB_140f55826:
        FUN_1457af436(lVar24,uVar13);
        goto switchD_140f55753_caseD_a;
      case 0xf:
        lVar15 = *(longlong *)(lVar24 + 0x40);
        lVar12 = 0x128;
        break;
      case 0x10:
        lVar15 = *(longlong *)(lVar24 + 0x40);
        lVar12 = 0x128;
LAB_140f55844:
        FUN_140f691f2(lVar24,lVar15 + lVar12);
        lVar15 = *(longlong *)(lVar24 + 0x40);
        lVar12 = 0x1b8;
        break;
      case 0x11:
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x128);
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x1b8);
        FUN_140f691f2(lVar24,*(longlong *)(lVar24 + 0x40) + 0x1e8);
        FUN_148910500(lVar24);
        goto switchD_140f55753_caseD_a;
      }
      FUN_140f691f2(lVar24,lVar15 + lVar12);
switchD_140f55753_caseD_a:
      FUN_143df5470(*(undefined8 *)(lVar24 + 0x30));
      lVar14 = lVar14 + 8;
      cVar20 = local_99;
    } while (lVar26 * 8 != lVar14);
  }
  if (local_78 != (code *)0x0) {
    FUN_1400020a8(local_78);
  }
LAB_140f558cb:
  *(char *)(param_1 + 0x1ed) = cVar20;
  if ((cVar20 == '\0') && (*(int *)(param_1 + 0x114) < *(int *)(param_1 + 0xe8))) {
    local_98 = param_1 + 0xe0;
    local_99 = *(char *)(param_1 + 0x1ee);
    *(undefined1 *)(param_1 + 0x1ee) = 1;
    iVar4 = *(int *)(param_1 + 0x108);
    if (iVar4 == 0) {
      uVar21 = 1;
      uVar25 = 0;
      iVar11 = 0;
      iVar23 = 0;
    }
    else {
      puVar16 = *(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        puVar16 = (uint *)(param_1 + 0xf0);
      }
      uVar17 = *puVar16;
      if (uVar17 == 0) {
        iVar11 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar11 = iVar4 + -1;
        }
        uVar25 = 0;
        uVar21 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar21 = uVar25;
        }
        iVar23 = 0;
        do {
          if (uVar21 == uVar25) goto LAB_140f55a9c;
          iVar23 = iVar23 + 0x20;
          uVar17 = puVar16[uVar25 + 1];
          uVar25 = uVar25 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar25 = 0;
        iVar23 = 0;
      }
      uVar21 = (ulonglong)(-uVar17 & uVar17);
      uVar3 = uVar21 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar11 = (iVar23 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar11) {
        iVar11 = iVar4;
      }
    }
    if (iVar11 != iVar4) {
      uVar17 = 0xffffffff;
      do {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar11 * 0x18);
        local_78 = (code *)*puVar2;
        uStack_70._4_1_ = (undefined1)*(undefined4 *)((longlong)puVar2 + 0xc);
        uVar8 = uStack_70._4_1_;
        uStack_70 = puVar2[1];
        FUN_140ee4c0a(param_1,&local_78,uVar8);
        uVar17 = ~(uint)uVar21 & uVar17;
        puVar16 = *(uint **)(param_1 + 0x100);
        if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
          puVar16 = (uint *)(param_1 + 0xf0);
        }
        iVar5 = *(int *)(param_1 + 0x108);
        iVar11 = (int)uVar25;
        lVar26 = (longlong)iVar11;
        uVar22 = puVar16[lVar26] & uVar17;
        if (uVar22 == 0) {
          iVar18 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar18 = iVar5 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar19 = iVar18;
          if (iVar18 < iVar11) {
            iVar19 = iVar11;
          }
          if (iVar11 < iVar18) {
            lVar14 = 0;
            do {
              uVar22 = puVar16[lVar26 + lVar14 + 1];
              if (uVar22 != 0) {
                uVar25 = (ulonglong)(iVar11 + (int)lVar14 + 1);
                uVar17 = 0xffffffff;
                goto LAB_140f55a57;
              }
              iVar23 = iVar23 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar19 - lVar26 != lVar14);
            uVar17 = 0xffffffff;
            iVar11 = iVar19;
          }
          uVar25 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar5;
        }
        else {
LAB_140f55a57:
          uVar21 = (ulonglong)(-uVar22 & uVar22);
          uVar3 = uVar21 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar11 = (iVar23 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar11) {
            iVar11 = iVar5;
          }
        }
      } while (iVar11 != iVar4);
    }
LAB_140f55a9c:
    FUN_140ee4a2c(local_98);
    *(char *)(param_1 + 0x1ee) = local_99;
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f55bbc FUN_140f55bbc body=511 status=ok
// SIG undefined FUN_140f55bbc(void)

void FUN_140f55bbc(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  FUN_140f55dbc(param_1,2,*(longlong *)(param_1 + 0x40) + 200,3);
  FUN_140f55dbc(param_1,3,*(longlong *)(param_1 + 0x40) + 0xf8,4);
  lVar3 = FUN_140dcc81c(param_1);
  if (lVar3 != 0) {
    bVar1 = FUN_141042fba(lVar3);
    if ((bVar1 < 0x12) && ((0x22200U >> (bVar1 & 0x1f) & 1) != 0)) goto LAB_140f55c5b;
  }
  lVar3 = FUN_140dcc81c(param_1);
  if (lVar3 != 0) {
    bVar1 = FUN_141042fba(lVar3);
    if (bVar1 < 0x12) {
      if ((0x3c0U >> (bVar1 & 0x1f) & 1) == 0) {
        if ((0x3c00U >> (bVar1 & 0x1f) & 1) == 0) {
          if ((0x3c000U >> (bVar1 & 0x1f) & 1) == 0) goto LAB_140f55c5b;
          FUN_140f55dbc(param_1,0xe,*(longlong *)(param_1 + 0x40) + 0x128,0xf);
          FUN_140f55dbc(param_1,0xf,*(longlong *)(param_1 + 0x40) + 0x1b8,0x10);
          lVar3 = *(longlong *)(param_1 + 0x40) + 0x1e8;
          uVar4 = 0x10;
          uVar5 = 0x11;
        }
        else {
          FUN_140f55dbc(param_1,10,*(longlong *)(param_1 + 0x40) + 0x188,0xb);
          FUN_140f55dbc(param_1,0xb,*(longlong *)(param_1 + 0x40) + 0x1b8,0xc);
          lVar3 = *(longlong *)(param_1 + 0x40) + 0x1e8;
          uVar4 = 0xc;
          uVar5 = 0xd;
        }
      }
      else {
        FUN_140f55dbc(param_1,6,*(longlong *)(param_1 + 0x40) + 0x158,7);
        FUN_140f55dbc(param_1,7,*(longlong *)(param_1 + 0x40) + 0x1b8,8);
        lVar3 = *(longlong *)(param_1 + 0x40) + 0x1e8;
        uVar4 = 8;
        uVar5 = 9;
      }
      FUN_140f55dbc(param_1,uVar4,lVar3,uVar5);
    }
  }
LAB_140f55c5b:
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x408) != '\0') {
    lVar3 = FUN_140dcc81c(param_1);
    if (lVar3 != 0) {
      bVar1 = FUN_141042fba(lVar3);
      if ((bVar1 & 0x1e) == 4) {
        FUN_143df56c8(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x408));
      }
    }
  }
  lVar3 = FUN_140dcc81c(param_1);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_141042fba(lVar3);
  }
  FUN_141056144(param_1,uVar2);
  lVar3 = FUN_140dcc81c(param_1);
  if (lVar3 != 0) {
    bVar1 = FUN_141042fba(lVar3);
    if ((bVar1 & 0x1e) == 4) {
      FUN_140f55e1a(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140f55dbc FUN_140f55dbc body=94 status=ok
// SIG undefined FUN_140f55dbc(void)

void FUN_140f55dbc(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_140dcc81c();
  if (lVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_141042fba(lVar3);
  }
  if ((cVar2 == (char)param_2) && (*(char *)(param_3 + 0x28) == '\x01')) {
    uVar1 = *(undefined1 *)(param_1 + 0x11);
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_148910592(*(undefined8 *)(param_1 + 0x30),param_2,param_4);
    *(undefined1 *)(param_1 + 0x11) = uVar1;
  }
  return;
}



// FUNCTION 140f55e1a FUN_140f55e1a body=391 status=ok
// SIG undefined FUN_140f55e1a(void)

void FUN_140f55e1a(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1;
  do {
    lVar5 = lVar4;
    lVar4 = *(longlong *)(lVar5 + 0xb8);
  } while (*(longlong *)(lVar5 + 0xb8) != 0);
  if (((*(longlong *)(lVar5 + 0x98) != 0) || (*(longlong *)(lVar5 + 0xa0) != 0)) &&
     (lVar4 = FUN_140dcc81c(param_1), lVar4 != 0)) {
    cVar3 = FUN_141042fba(lVar4);
    if (cVar3 == '\x05') {
      cVar3 = FUN_140f3d908(param_1);
      if (cVar3 == '\0') {
        FUN_140dcc746(param_1,4);
        FUN_140d853aa(param_1,local_48,*(longlong *)(param_1 + 0x40) + 0x240,param_2);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))();
          }
        }
        iVar2 = *(int *)(param_1 + 0xb0);
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(param_1 + 0xa8);
          lVar5 = 0;
          do {
            FUN_140f55e1a(*(undefined8 *)(lVar4 + lVar5),param_2);
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar2 * 8 != lVar5);
        }
      }
    }
    else if ((cVar3 == '\x04') && (cVar3 = FUN_140f3d908(param_1), cVar3 != '\0')) {
      FUN_140dcc746(param_1,5);
      FUN_140d853aa(param_1,local_38,*(longlong *)(param_1 + 0x40) + 0x218,param_2);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      iVar2 = *(int *)(param_1 + 0xb0);
      if ((longlong)iVar2 != 0) {
        lVar4 = *(longlong *)(param_1 + 0xa8);
        lVar5 = 0;
        do {
          FUN_140f55e1a(*(undefined8 *)(lVar4 + lVar5),param_2);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar2 * 8 != lVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f55fa2 FUN_140f55fa2 body=277 status=ok
// SIG undefined FUN_140f55fa2(void)

undefined8 FUN_140f55fa2(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140f560b1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f560b1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140f560b1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f5605f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140f5605f;
    }
  }
  uVar6 = 0;
LAB_140f5605f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f560b8 FUN_140f560b8 body=1586 status=ok
// SIG undefined FUN_140f560b8(void)

void FUN_140f560b8(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_140f566ec();
  if ((plVar4 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 == 0))
  goto LAB_140f563dc;
  plVar4 = (longlong *)(lVar5 + 0x30);
  FUN_140457ffc(plVar4,param_1);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar7 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14b421670;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b9ad910;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar3;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar3;
      }
    }
  }
  *(int *)((longlong)plVar7 + 0x1c) = iVar8;
  plVar7[4] = (longlong)FUN_1410a60ee;
  *(undefined4 *)(plVar7 + 5) = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*local_58 + 0x30))(), cVar2 == '\0')) {
    if (local_50 == 0) goto LAB_140f56286;
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140f56279;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x44) < 1) {
      iVar8 = *(int *)(lVar5 + 0x38);
      iVar3 = *(int *)(lVar5 + 0x40) + -1;
      *(int *)(lVar5 + 0x40) = iVar3;
      if (iVar3 <= iVar8) {
        iVar3 = iVar8;
        if (0 < iVar8) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar4 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar7 = *(longlong **)(*plVar4 + (longlong)iVar9 * 0x10),
                plVar7 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar7 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar4,iVar9);
              FUN_14005b248(plVar4);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar3 = *(int *)(lVar5 + 0x38);
          } while (iVar9 < iVar3);
        }
        iVar9 = 2;
        if (2 < iVar3 * 2) {
          iVar9 = iVar3 * 2;
        }
        *(int *)(lVar5 + 0x40) = iVar9;
        if ((iVar9 < iVar8) && (*(int *)(lVar5 + 0x3c) != iVar3)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar8 = *(int *)(lVar5 + 0x38);
    *(uint *)(lVar5 + 0x38) = iVar8 + 1U;
    if (*(uint *)(lVar5 + 0x3c) < iVar8 + 1U) {
      FUN_1447a71f6(plVar4,iVar8);
    }
    lVar10 = *plVar4;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar10 + lVar6) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar6) = 0;
    *(longlong **)(lVar10 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar6) = local_50;
LAB_140f56279:
    local_50 = 0;
LAB_140f56286:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar7 = (longlong *)(lVar5 + 0xf0);
  FUN_140457ffc(plVar7,param_1);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar4 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14b9ad9f0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b9ad980;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar3;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar3;
      }
    }
  }
  *(int *)((longlong)plVar4 + 0x1c) = iVar8;
  plVar4[4] = (longlong)FUN_14426d0f4;
  *(undefined4 *)(plVar4 + 5) = 0;
  if ((local_58 == (longlong *)0x0 || local_50 == 0) ||
     (cVar2 = (**(code **)(*local_58 + 0x30))(), cVar2 == '\0')) {
    if (local_50 == 0) goto LAB_140f563b8;
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140f563ab;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x104) < 1) {
      iVar8 = *(int *)(lVar5 + 0xf8);
      iVar3 = *(int *)(lVar5 + 0x100) + -1;
      *(int *)(lVar5 + 0x100) = iVar3;
      if (iVar3 <= iVar8) {
        iVar3 = iVar8;
        if (0 < iVar8) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar7 + (longlong)iVar9 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar4 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar7,iVar9);
              FUN_14005b248(plVar7);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar3 = *(int *)(lVar5 + 0xf8);
          } while (iVar9 < iVar3);
        }
        iVar9 = 2;
        if (2 < iVar3 * 2) {
          iVar9 = iVar3 * 2;
        }
        *(int *)(lVar5 + 0x100) = iVar9;
        if ((iVar9 < iVar8) && (*(int *)(lVar5 + 0xfc) != iVar3)) {
          FUN_14045812c(plVar7);
        }
      }
    }
    if (local_58 != (longlong *)0x0 && local_50 != 0) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar8 = *(int *)(lVar5 + 0xf8);
    *(uint *)(lVar5 + 0xf8) = iVar8 + 1U;
    if (*(uint *)(lVar5 + 0xfc) < iVar8 + 1U) {
      FUN_1447a71f6(plVar7,iVar8);
    }
    lVar10 = *plVar7;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar10 + lVar6) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar6) = 0;
    *(longlong **)(lVar10 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar6) = local_50;
LAB_140f563ab:
    local_50 = 0;
LAB_140f563b8:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar10 = FUN_140f56a62(param_1);
  if (lVar10 != 0) {
    FUN_1410a652e(param_1,lVar5,lVar10);
  }
LAB_140f563dc:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f566ec FUN_140f566ec body=654 status=ok
// SIG undefined FUN_140f566ec(void)

longlong FUN_140f566ec(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      plVar5 = *(longlong **)(lVar1 + 0x3d0);
      if ((plVar5 == (longlong *)0x0) &&
         (plVar5 = *(longlong **)(lVar1 + 0x7a0), plVar5 == (longlong *)0x0)) {
LAB_140f5682f:
        plVar5 = *(longlong **)(lVar1 + 0xa08);
        if (plVar5 == (longlong *)0x0) goto LAB_140f5683b;
      }
      else {
        if (DAT_14cba8288 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141864c34;
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
        if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
            DAT_14cba8288 + 0x30)) goto LAB_140f5682f;
        uVar2 = FUN_140f5697c();
        lVar3 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar2);
        if (lVar3 == 0) goto LAB_140f5682f;
        uVar2 = FUN_140f5697c();
        lVar4 = FUN_144718840(lVar3,uVar2);
        if ((lVar3 == lVar4) || (lVar4 == 0)) goto LAB_140f5682f;
      }
      uVar2 = FUN_140f5697c();
      lVar1 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar2);
      if (lVar1 != 0) {
        uVar2 = FUN_140f5697c();
        lVar3 = FUN_144718840(lVar1,uVar2);
        if (lVar1 != lVar3) goto LAB_140f567fd;
      }
    }
  }
LAB_140f5683b:
  lVar3 = 0;
LAB_140f567fd:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5697c FUN_140f5697c body=228 status=ok
// SIG undefined FUN_140f5697c(void)

longlong FUN_140f5697c(void)

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
  if (DAT_14cb697f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487558e7;
    local_40 = FUN_146521ba6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProgressGraphOwner",&DAT_14cb697f0,&DAT_1487558e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb697f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f56a62 FUN_140f56a62 body=546 status=ok
// SIG undefined FUN_140f56a62(void)

longlong FUN_140f56a62(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_140f566ec();
  if ((plVar2 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_1410a623c();
    lVar7 = *(longlong *)(lVar4 + 0x58);
    if (lVar7 == 0) {
      uVar9 = FUN_145764ed6();
      lVar7 = FUN_14477b664(uVar9);
      *(longlong *)(lVar4 + 0x58) = lVar7;
    }
    if (((*(longlong *)(lVar4 + 0x60) == 0) && (lVar7 != 0)) && (*(longlong *)(lVar4 + 0x50) != 0))
    {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar1 == '\0')) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar9 = FUN_144aff482(uVar9,(longlong *)(lVar4 + 0x50));
      }
      *(undefined8 *)(lVar4 + 0x60) = uVar9;
    }
    FUN_140f56c86(lVar3,&local_58);
    lVar3 = local_58;
    if ((longlong)local_50 == 0) {
      lVar7 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar7 = *(longlong *)(lVar3 + lVar4);
        if (((lVar7 != 0) && (lVar5 = FUN_140a489cc(lVar7), lVar5 != 0)) &&
           (cVar1 = FUN_140a30c40(lVar7), cVar1 != '\0')) {
          lVar6 = FUN_1410a623c();
          lVar8 = *(longlong *)(lVar6 + 0x58);
          if (lVar8 == 0) {
            uVar9 = FUN_145764ed6();
            lVar8 = FUN_14477b664(uVar9);
            *(longlong *)(lVar6 + 0x58) = lVar8;
          }
          lVar10 = *(longlong *)(lVar6 + 0x60);
          if (lVar10 == 0) {
            if ((lVar8 == 0) || (*(longlong *)(lVar6 + 0x50) == 0)) goto LAB_140f56b38;
            plVar2 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar2 + 0x108))(), cVar1 == '\0')) {
              lVar10 = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar6 + 0x50));
            }
            *(longlong *)(lVar6 + 0x60) = lVar10;
          }
          if (lVar5 == lVar10) goto LAB_140f56b48;
        }
LAB_140f56b38:
        lVar4 = lVar4 + 8;
      } while ((longlong)local_50 * 8 != lVar4);
      lVar7 = 0;
    }
LAB_140f56b48:
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 140f56c86 FUN_140f56c86 body=146 status=ok
// SIG undefined FUN_140f56c86(void)

longlong * FUN_140f56c86(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 != 0) && (iVar1 = *(int *)(param_1 + 0xb8), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if ((lVar4 != 0) && (lVar5 = FUN_140a489cc(lVar4), lVar5 == param_3)) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140f56d18(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return param_2;
}



// FUNCTION 140f56d18 FUN_140f56d18 body=353 status=ok
// SIG undefined FUN_140f56d18(void)

void FUN_140f56d18(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f56d9d;
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
LAB_140f56d9d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f56ee4 FUN_140f56ee4 body=777 status=ok
// SIG undefined FUN_140f56ee4(void)

void FUN_140f56ee4(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_70;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0xa90) == 0) {
    FUN_1406987fe(param_1 + 0x988,&local_88);
    bVar9 = true;
    if (((int)local_88 != 0) && (local_88._4_4_ != 0)) {
      bVar9 = (int)local_88 == DAT_14c948000;
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (!bVar9) {
      lVar4 = FUN_1447210f0(param_1);
      if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x155) & 0x20) == 0)) {
        if (*(longlong *)(lVar4 + 0x1f0) == 0) {
          puVar5 = (undefined8 *)(lVar4 + 0x458);
        }
        else {
          puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar5;
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        puVar5 = local_98;
        local_90 = 3;
        *local_98 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_98[2] = lVar6;
        *local_98 = &PTR_FUN_14b3e9590;
        local_98[3] = 0;
        iVar7 = 0;
        if (param_1 != 0) {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_98 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          iVar7 = *(int *)(lVar4 + 0x10);
          if (*(int *)(lVar4 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar7 = *(int *)(lVar4 + 0x10);
            bVar9 = iVar7 == 0;
            if (bVar9) {
              *(int *)(lVar4 + 0x10) = iVar8;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar9) {
              iVar7 = iVar8;
            }
          }
        }
        *(int *)((longlong)puVar5 + 0x1c) = iVar7;
        puVar5[4] = &LAB_140f56ed6;
        *(undefined4 *)(puVar5 + 5) = 0;
        local_88 = 0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_98);
        local_48 = 1;
        FUN_14016fdb0(uVar2,local_a0,&local_88);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
        if (local_90 != 0) {
          if (local_98 == (undefined8 *)0x0) goto LAB_140f570e6;
          (**(code **)*local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90 = 0;
        }
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_140f570e6;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0xd8);
  if ((((lVar4 != 0) ||
       ((*(longlong *)(param_1 + 0x80) != 0 &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x1c8), lVar4 != 0)))) &&
      (plVar3 = *(longlong **)(param_1 + 0x1c8), plVar3 != (longlong *)0x0)) &&
     (*(byte *)((longlong)plVar3 + 0x1fb) < *(byte *)(lVar4 + 0x1fb))) {
    (**(code **)(*plVar3 + 0x588))();
  }
  FUN_140fbdf08(param_1);
LAB_140f570e6:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f571ee FUN_140f571ee body=869 status=ok
// SIG undefined FUN_140f571ee(void)

void FUN_140f571ee(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar1 = *(char **)(param_2 + 0x20);
  *(char **)(param_2 + 0x20) = pcVar1 + 1;
  if (*pcVar1 == '\x01') {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    *(char **)(param_2 + 0x20) = pcVar1 + 2;
    (*(code *)(&DAT_14c962c70)[(byte)pcVar1[1]])(*(undefined8 *)(param_2 + 0x18),param_2,&local_78);
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    pbVar2 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    (*(code *)(&DAT_14c962c70)[*pbVar2])(*(undefined8 *)(param_2 + 0x18),param_2,&local_88);
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    pbVar2 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    (*(code *)(&DAT_14c962c70)[*pbVar2])(*(undefined8 *)(param_2 + 0x18),param_2,&local_98);
    local_68 = local_88;
    uStack_60._0_4_ = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      uStack_60._0_4_ = 0;
    }
    FUN_1446e940c(local_9c,&local_68);
    local_68 = local_98;
    iVar4 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iVar4 = 0;
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
    FUN_1446e940c(local_a0,&local_68);
    FUN_140f57608(&local_68,local_a0,local_9c,&local_78);
    FUN_140008f88(param_3,&local_68);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
LAB_140f57338:
    plVar6 = local_78;
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
      plVar6 = local_78;
    }
    goto LAB_140f5734c;
  }
  switch(*pcVar1) {
  case '\0':
    plVar5 = (longlong *)FUN_140e82300();
    plVar6 = (longlong *)*plVar5;
    plVar3 = (longlong *)*param_3;
    if (plVar3 != plVar6) {
      *param_3 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_3 + 1) = (int)plVar5[1];
  default:
    goto switchD_140f5739c_caseD_1;
  case '\x02':
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    *(char **)(param_2 + 0x20) = pcVar1 + 2;
    (*(code *)(&DAT_14c962c70)[(byte)pcVar1[1]])(*(undefined8 *)(param_2 + 0x18),param_2,&local_68);
    FUN_145aa9352(&local_78,&local_68);
    break;
  case '\x03':
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    *(char **)(param_2 + 0x20) = pcVar1 + 2;
    (*(code *)(&DAT_14c962c70)[(byte)pcVar1[1]])(*(undefined8 *)(param_2 + 0x18),param_2,&local_68);
    FUN_140233b1a(&local_78,&local_68);
    break;
  case '\x04':
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    *(char **)(param_2 + 0x20) = pcVar1 + 10;
    (*(code *)(&DAT_14c962c70)[(byte)pcVar1[9]])(*(undefined8 *)(param_2 + 0x18),param_2,&local_78);
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    pbVar2 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    (*(code *)(&DAT_14c962c70)[*pbVar2])(*(undefined8 *)(param_2 + 0x18),param_2,&local_88);
    local_68 = local_88;
    iVar4 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar4 = 0;
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
    FUN_1446e940c(&local_98);
    plVar6 = local_78;
    if ((int)uStack_70 == 0) {
      plVar6 = (longlong *)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_a8,plVar6,1);
    FUN_1467d14c4(&local_68,local_a8,&local_98,1);
    FUN_140008f88(param_3,&local_68);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    goto LAB_140f57338;
  }
  FUN_140008f88(param_3,&local_78);
  plVar6 = local_68;
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
    plVar6 = local_68;
  }
LAB_140f5734c:
  if (plVar6 != (longlong *)0x0) {
    FUN_1400020a8();
  }
switchD_140f5739c_caseD_1:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f57554 FUN_140f57554 body=178 status=ok
// SIG undefined FUN_140f57554(void)

void FUN_140f57554(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_30,*(undefined8 *)(param_2 + 0x20));
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  pcVar2 = *(char **)(param_2 + 0x20);
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    *(char **)(param_2 + 0x20) = pcVar2;
    cVar1 = *pcVar2;
  }
  *(char **)(param_2 + 0x20) = pcVar2 + 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f57608 FUN_140f57608 body=159 status=ok
// SIG undefined FUN_140f57608(void)

undefined8 *
FUN_140f57608(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_4 + 8) < 2) {
    FUN_140e82300();
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else {
    lVar2 = FUN_140208cc8(FUN_1456e5a62);
    local_30 = *param_2;
    local_2c = *param_3;
    FUN_140f576a8(*(undefined8 *)(lVar2 + 0x78),param_1,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f576a8 FUN_140f576a8 body=983 status=ok
// SIG undefined FUN_140f576a8(void)

longlong * FUN_140f576a8(longlong *param_1,longlong *param_2,undefined8 *param_3,int *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  PSRWLOCK pRVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_88 [40];
  int *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  EnterCriticalSection(lpCriticalSection);
  iVar8 = 0;
  uVar7 = 0;
  if (param_4[1] != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
      FUN_1456aef72(&DAT_14c8450d0);
      DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
    pRVar5 = DAT_14c845160;
    iVar2 = param_4[1];
    AcquireSRWLockShared(DAT_14c845160);
    uVar7 = *(uint *)(*(longlong *)((longlong)pRVar5[3].Ptr + (longlong)(iVar2 / 0x555) * 8) + 0xc +
                     (longlong)(iVar2 % 0x555) * 0x18);
    ReleaseSRWLockShared(pRVar5);
  }
  if (*param_4 != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
      FUN_1456aef72(&DAT_14c8450d0);
      DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
    pRVar5 = DAT_14c845160;
    iVar8 = *param_4;
    AcquireSRWLockShared(DAT_14c845160);
    iVar8 = *(int *)(*(longlong *)((longlong)pRVar5[3].Ptr + (longlong)(iVar8 / 0x555) * 8) + 0xc +
                    (longlong)(iVar8 % 0x555) * 0x18);
    ReleaseSRWLockShared(pRVar5);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = uVar7 >> 0xd ^ iVar8 - uVar7;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar7) - uVar6;
    uVar11 = uVar10 >> 0xd ^ (uVar7 - uVar6) - uVar10;
    uVar12 = uVar11 >> 0xc ^ (uVar6 - uVar10) - uVar11;
    uVar7 = uVar12 << 0x10 ^ (uVar10 - uVar11) - uVar12;
    uVar6 = uVar7 >> 5 ^ (uVar11 - uVar12) - uVar7;
    uVar10 = uVar6 >> 3 ^ (uVar12 - uVar7) - uVar6;
    uVar7 = uVar10 << 10 ^ (uVar7 - uVar6) - uVar10;
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar14 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar7 >> 0xf ^ uVar6 - (uVar10 + uVar7))) *
                    4);
    if (iVar8 != -1) {
      lVar3 = *param_1;
      do {
        lVar13 = (longlong)iVar8 * 0x20;
        lVar1 = lVar3 + lVar13;
        if ((*(int *)(lVar3 + lVar13) == *param_4) && (*(int *)(lVar3 + 4 + lVar13) == param_4[1]))
        {
          plVar14 = (longlong *)(lVar1 + 8);
          if ((plVar14 == (longlong *)0x0 || lVar1 == 0) ||
             (puVar9 = (undefined8 *)(**(code **)(*(longlong *)*plVar14 + 0x20))(),
             puVar9 == (undefined8 *)0x0)) break;
          iVar8 = *(int *)(param_3 + 1);
          if (iVar8 == *(int *)(puVar9 + 1)) {
            if ((1 < iVar8) && (iVar8 = wcscmp((wchar_t *)*param_3,(wchar_t *)*puVar9), iVar8 != 0))
            break;
          }
          else if (*(int *)(puVar9 + 1) + iVar8 != 1) break;
          plVar14 = (longlong *)*plVar14;
          *param_2 = (longlong)plVar14;
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
          goto LAB_140f5798d;
        }
        iVar8 = *(int *)(lVar1 + 0x18);
      } while (iVar8 != -1);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar4 = *(undefined8 *)param_4;
  puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_149e19310;
  puVar9[2] = uVar4;
  puVar9[3] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar9 + 0x24) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  puVar9[5] = 0;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  *param_2 = (longlong)puVar9;
  *(undefined4 *)(param_2 + 1) = 8;
  EnterCriticalSection(lpCriticalSection);
  local_60 = param_4;
  local_58 = param_2;
  FUN_1415bfba6(param_1,local_4c);
LAB_140f5798d:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f57a96 FUN_140f57a96 body=351 status=ok
// SIG undefined FUN_140f57a96(void)

void FUN_140f57a96(longlong param_1)

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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140f57c08(param_1 + 0x60e8);
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      if (lVar1 == 0) goto LAB_140f57be3;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_140f57be3:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f57c08 FUN_140f57c08 body=94 status=ok
// SIG undefined FUN_140f57c08(void)

void FUN_140f57c08(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) & 0xfe;
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    fVar3 = -1.0;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + lVar2);
      if ((lVar1 != 0) && (fVar3 <= *(float *)(lVar1 + 0xc54))) {
        fVar3 = *(float *)(lVar1 + 0xc54);
      }
      lVar2 = lVar2 + 0x170;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 0x170 - lVar2 != 0);
    FUN_140f57c66(param_1,0x7fffffff,lVar2,
                  CONCAT71((int7)((ulonglong)lVar1 >> 8),
                           *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x60)) &
                  0xffffffffffffff01);
    return;
  }
  return;
}



// FUNCTION 140f57c66 FUN_140f57c66 body=800 status=ok
// SIG undefined FUN_140f57c66(void)

void FUN_140f57c66(longlong param_1,uint param_2,float param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  int local_f8;
  uint local_f4;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined2 local_d0 [2];
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar5 = *(int *)(param_1 + 0xa8);
  if (0 < iVar5) {
    local_f0 = (ulonglong)param_2;
    lVar10 = 0x58;
    uVar7 = 0;
    local_f4 = param_2;
    do {
      if (param_2 == 0x7fffffff || local_f0 == uVar7) {
        lVar2 = *(longlong *)(param_1 + 0xa0);
        lVar8 = *(longlong *)(lVar2 + -0x38 + lVar10);
        if (lVar8 != 0) {
          if (param_3 < 0.0) {
            param_3 = *(float *)(lVar8 + 0xc54);
          }
          *(byte *)(lVar2 + 0x10 + lVar10) =
               *(byte *)(lVar2 + 0x10 + lVar10) & 0xfd | param_4 * '\x02';
          local_e8 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x150));
          lVar8 = *(longlong *)(param_1 + 0x150);
          local_e0 = (undefined8 *)0x0;
          local_d8 = 0;
          FUN_1446efa72(&local_e0,0,3,0x10);
          puVar3 = local_e0;
          local_d8 = 3;
          *local_e0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar6 == 0) {
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_e0[2] = lVar6;
          *local_e0 = &PTR_FUN_14b4a9a20;
          local_e0[3] = 0;
          if (lVar8 == 0) {
            iVar5 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar8 + 0xc);
            *(uint *)(local_e0 + 3) = uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            iVar5 = *(int *)(lVar8 + 0x10);
            if (*(int *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar11 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar11) {
                local_f8 = iVar9;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
                iVar9 = local_f8;
              }
              LOCK();
              iVar5 = *(int *)(lVar8 + 0x10);
              bVar11 = iVar5 == 0;
              if (bVar11) {
                *(int *)(lVar8 + 0x10) = iVar9;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar11) {
                iVar5 = iVar9;
              }
            }
          }
          *(int *)((longlong)puVar3 + 0x1c) = iVar5;
          puVar3[4] = param_1;
          *(int *)(puVar3 + 5) = (int)uVar7;
          local_c8 = 0;
          local_c0 = 0;
          FUN_14487d8d8(&local_c8,&local_e0);
          local_88 = 1;
          local_d0[0] = 0;
          local_cc = 0xbf800000;
          local_108 = local_d0;
          FUN_1406f4044(local_e8,lVar2 + lVar10,&local_c8,param_3);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
          param_2 = local_f4;
          if (local_d8 == 0) {
LAB_140f57e63:
            if (local_e0 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_e0 != (undefined8 *)0x0) {
            (**(code **)*local_e0)(local_e0,0);
            FUN_1446efa72(&local_e0,0,0,0x10);
            local_d8 = 0;
            goto LAB_140f57e63;
          }
          iVar5 = *(int *)(param_1 + 0xa8);
        }
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x170;
    } while ((longlong)uVar7 < (longlong)iVar5);
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f57f94 FUN_140f57f94 body=6916 status=ok
// SIG undefined FUN_140f57f94(void)

uint * FUN_140f57f94(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  ulonglong *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  int iVar29;
  uint *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong *puVar34;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  uint *local_230;
  uint local_224;
  longlong *local_220;
  uint *local_218;
  longlong *local_210;
  uint *local_208;
  uint *local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  uint *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  uint local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  uint *local_128;
  undefined8 local_120;
  uint *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  uint local_f8 [8];
  uint *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140f5851a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  lVar6 = FUN_14185421a();
  local_1b0 = lVar6;
  local_1a8 = param_1;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_143da12ca();
  local_220 = param_2;
  local_210 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar6;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar8 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar31 = 1;
        uVar32 = 0;
        iVar29 = 0;
        iVar25 = 0;
      }
      else {
        puVar20 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar20 = puVar8;
        }
        uVar24 = *puVar20;
        if (uVar24 == 0) {
          iVar29 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar29 = iVar22 + -1;
          }
          uVar32 = 0;
          uVar31 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar31 = uVar32;
          }
          iVar29 = 0;
          do {
            if (uVar31 == uVar32) goto LAB_140f5833d;
            iVar29 = iVar29 + 0x20;
            uVar24 = puVar20[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar32 = 0;
          iVar29 = 0;
        }
        uVar31 = (ulonglong)(-uVar24 & uVar24);
        uVar1 = uVar31 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar25 = (iVar29 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar25) {
          iVar25 = iVar22;
        }
      }
      if (iVar25 == iVar22) {
LAB_140f5833d:
        local_230 = (uint *)0x0;
        puVar20 = local_230;
      }
      else {
        uVar24 = 0xffffffff;
        local_230 = (uint *)0x0;
        iVar19 = iVar22;
        do {
          lVar6 = param_3[0xb];
          lVar23 = (longlong)iVar25 * 200;
          if (*(int *)(lVar6 + 0x60 + lVar23) != *(int *)(lVar6 + 0x8c + lVar23)) {
            lVar33 = lVar6 + lVar23;
            lVar28 = lVar33 + 0x90;
            if (*(longlong *)(lVar33 + 0x98) != 0) {
              lVar28 = *(longlong *)(lVar33 + 0x98);
            }
            iVar25 = *(int *)(lVar28 + (ulonglong)
                                       (*(int *)(lVar33 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar25 != -1) {
              local_220 = (longlong *)CONCAT44(local_220._4_4_,iVar29);
              plVar16 = (longlong *)(lVar23 + lVar6 + 0x58);
              lVar6 = *plVar16;
              do {
                if (*(undefined ***)(lVar6 + (longlong)iVar25 * 0x10) == local_108) {
                  lVar33 = lVar33 + 8;
                  FUN_140326250(plVar16,&local_108);
                  FUN_140325a06(lVar33,&local_148,&local_108,0);
                  iVar19 = (int)param_3[0x10];
                  local_230 = (uint *)CONCAT71((int7)((ulonglong)lVar33 >> 8),1);
                  break;
                }
                iVar25 = *(int *)((longlong)iVar25 * 0x10 + lVar6 + 8);
              } while (iVar25 != -1);
              iVar29 = (int)local_220;
            }
          }
          uVar24 = uVar24 & ~(uint)uVar31;
          puVar20 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar20 = puVar8;
          }
          iVar25 = (int)uVar32;
          lVar6 = (longlong)iVar25;
          uVar18 = puVar20[lVar6] & uVar24;
          if (uVar18 == 0) {
            iVar13 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar13 = iVar19 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar25) {
              iVar14 = iVar25;
            }
            if (iVar25 < iVar13) {
              lVar23 = 0;
              do {
                uVar18 = puVar20[lVar6 + lVar23 + 1];
                if (uVar18 != 0) {
                  uVar32 = (ulonglong)(iVar25 + (int)lVar23 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_140f584b1;
                }
                iVar29 = iVar29 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar14 - lVar6 != lVar23);
              uVar24 = 0xffffffff;
              iVar25 = iVar14;
            }
            uVar32 = (ulonglong)(iVar25 + 1);
            param_3 = local_210;
            iVar25 = iVar19;
          }
          else {
LAB_140f584b1:
            uVar31 = (ulonglong)(-uVar18 & uVar18);
            uVar1 = uVar31 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar25 = (iVar29 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar19 <= iVar25) {
              iVar25 = iVar19;
            }
          }
          puVar20 = local_230;
        } while (iVar25 != iVar22);
      }
      goto LAB_140f59a8a;
    }
    local_1e0 = param_1;
    if ((char)param_2[9] == '\x01') {
      local_128 = (uint *)0x0;
      local_120 = 0x800000000;
      puVar8 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        puVar20 = (uint *)&DAT_00000001;
        uVar31 = 0;
        uVar24 = 0;
        iVar29 = 0;
      }
      else {
        puVar20 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar20 = puVar8;
        }
        uVar18 = *puVar20;
        if (uVar18 == 0) {
          iVar29 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar29 = iVar22 + -1;
          }
          uVar31 = 0;
          uVar32 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar32 = uVar31;
          }
          uVar24 = 0;
          do {
            if (uVar32 == uVar31) goto LAB_140f58b76;
            uVar24 = uVar24 + 0x20;
            uVar18 = puVar20[uVar31 + 1];
            uVar31 = uVar31 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar31 = 0;
          uVar24 = 0;
        }
        puVar20 = (uint *)(ulonglong)(-uVar18 & uVar18);
        uVar32 = (longlong)puVar20 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar29 = (uVar24 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar29) {
          iVar29 = iVar22;
        }
      }
      if (iVar29 < iVar22) {
        local_200 = (uint *)(param_3 + 0xb);
        local_1c0 = param_3 + 7;
        uVar18 = 0xffffffff;
        local_1c8 = puVar8;
LAB_140f585d2:
        local_1cc = iVar29;
        local_1f0 = CONCAT44(local_1f0._4_4_,uVar18);
        puVar27 = (uint *)(*(longlong *)local_200 + (longlong)local_1cc * 200);
        puVar30 = puVar27 + 2;
        uVar18 = *puVar27;
        local_218 = puVar20;
        if (((puVar27[4] != puVar27[0xf]) || (puVar27[0x18] != puVar27[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar16 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar16 = local_1c0;
          }
          iVar22 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_3[9] - 1U & uVar18) * 4);
          if (iVar22 != -1) {
            do {
              lVar6 = *param_3 + (longlong)iVar22 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar22 * 0x10) == uVar18) {
                if ((lVar6 != 0) && (lVar6 != -4)) {
                  uVar15 = puVar27[0xc];
                  local_1f8 = uVar31;
                  local_224 = uVar24;
                  local_1d0 = uVar18;
                  if (uVar15 == 0) {
                    uVar31 = 1;
                    uVar32 = 0;
                    iVar22 = 0;
                    uVar24 = 0;
                    goto LAB_140f5871e;
                  }
                  puVar20 = *(uint **)(puVar27 + 10);
                  if (*(uint **)(puVar27 + 10) == (uint *)0x0) {
                    puVar20 = puVar27 + 6;
                  }
                  uVar24 = *puVar20;
                  if (uVar24 != 0) {
                    uVar32 = 0;
                    iVar22 = 0;
                    goto LAB_140f586e8;
                  }
                  iVar22 = uVar15 + 0x1e;
                  if (-1 < (int)(uVar15 - 1)) {
                    iVar22 = uVar15 - 1;
                  }
                  uVar32 = 0;
                  uVar31 = (ulonglong)(uint)(iVar22 >> 5);
                  if (iVar22 >> 5 < 1) {
                    uVar31 = uVar32;
                  }
                  iVar22 = 0;
                  goto LAB_140f586cf;
                }
                break;
              }
              iVar22 = *(int *)(lVar6 + 8);
            } while (iVar22 != -1);
          }
        }
        goto LAB_140f58a4f;
      }
LAB_140f58b76:
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)local_220 + 0x4b) = 1;
      }
      puVar8 = local_128;
      if ((*(char *)((longlong)local_220 + 0x49) == '\x01') && (param_3[0x22] != 0)) {
        FUN_141069c5a();
        puVar8 = local_128;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140f5851a;
      }
      plVar16 = (longlong *)*param_2;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)param_2[1];
        local_d8 = (uint *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_143da1dac(&local_1b0);
        if (cVar5 == '\0') {
LAB_140f5977b:
          if (local_d8 != (uint *)0x0) {
            FUN_1400020a8();
          }
LAB_140f5978d:
          puVar20 = (uint *)0x0;
          goto LAB_140f59a8a;
        }
        iVar22 = 0;
        local_128 = (uint *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        if (0 < local_100) {
          plVar11 = param_3 + 7;
          local_1e8 = param_3 + 0xb;
          do {
            plVar7 = local_1e0;
            local_1b4 = 0;
            puVar34 = (ulonglong *)plVar16[1];
            puVar8 = (uint *)*puVar34 + 1;
            if ((uint *)puVar34[1] < puVar8) {
              if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar16 + 0x170))(plVar16,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar16,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar34;
              *puVar34 = (ulonglong)puVar8;
            }
            uVar31 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar17 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar17 = plVar11;
              }
              iVar29 = *(int *)((longlong)plVar17 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar29 != -1) {
                do {
                  lVar6 = *param_3 + (longlong)iVar29 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar29 * 0x10) == local_1b4) {
                    if ((lVar6 != 0) && ((uint *)(lVar6 + 4) != (uint *)0x0)) {
                      local_1b8 = *(uint *)(lVar6 + 4);
                      puVar8 = (uint *)((longlong)(int)local_1b8 * 0x150 + *plVar7);
                      lVar6 = (longlong)(int)local_120;
                      uVar24 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar24);
                      if (local_120._4_4_ < uVar24) {
                        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
                      }
                      puVar20 = local_128;
                      if (local_128 == (uint *)0x0) {
                        puVar20 = &local_148;
                      }
                      puVar20[lVar6] = local_1b8;
                      goto LAB_140f58e06;
                    }
                    break;
                  }
                  iVar29 = *(int *)(lVar6 + 8);
                } while (iVar29 != -1);
              }
            }
            local_1b8 = 0;
            puVar8 = (uint *)FUN_1488c972a(plVar7);
            *puVar8 = local_1b4;
            local_1b8 = (int)plVar7[1] - 1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar31 = local_150;
            lVar6 = (longlong)(int)local_150;
            uVar24 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar24);
            if (local_150._4_4_ < uVar24) {
              FUN_1400cc390(local_178,uVar31 & 0xffffffff);
            }
            puVar9 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar9 = local_178;
            }
            puVar9[lVar6] = local_1b8;
LAB_140f58e06:
            plVar7 = local_220;
            puVar8[2] = (uint)local_108;
            puVar8[1] = puVar8[1] + 1;
            lVar6 = local_220[4];
            FUN_144958770(lVar6 + 0x30,0);
            FUN_144958770(lVar6 + 0x80,0);
            *(undefined1 *)(lVar6 + 0x28) = 1;
            puVar20 = (uint *)plVar16[0x15];
            plVar7[7] = local_1d8;
            plVar7[6] = (longlong)puVar8;
            local_190 = puVar20;
            (**(code **)(*(longlong *)plVar7[8] + 8))((longlong *)plVar7[8],plVar7);
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) == 0) {
              lVar6 = plVar7[4];
              if ((*(int *)(lVar6 + 0x38) == *(int *)(lVar6 + 100)) &&
                 (*(int *)(lVar6 + 0x88) == *(int *)(lVar6 + 0xb4))) {
                FUN_1456fd588(local_1e8,local_1b4);
                plVar7 = local_220;
              }
              else {
                local_208 = (uint *)(lVar6 + 0x30);
                puVar8 = (uint *)FUN_1456fd5f6(local_1e8,local_1b4);
                local_230 = puVar8;
                if (puVar8[2] - puVar8[0xd] == *(int *)(lVar6 + 0x38) - *(int *)(lVar6 + 100)) {
                  local_218 = puVar8 + 4;
                  uVar24 = puVar8[10];
                  if (uVar24 == 0) {
                    uVar32 = 1;
                    uVar31 = 0;
                    iVar29 = 0;
                    uVar18 = 0;
                  }
                  else {
                    puVar27 = *(uint **)(puVar8 + 8);
                    if (*(uint **)(puVar8 + 8) == (uint *)0x0) {
                      puVar27 = local_218;
                    }
                    uVar18 = *puVar27;
                    if (uVar18 == 0) {
                      iVar29 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar29 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar32 = (ulonglong)(uint)(iVar29 >> 5);
                      if (iVar29 >> 5 < 1) {
                        uVar32 = uVar31;
                      }
                      iVar29 = 0;
                      do {
                        if (uVar32 == uVar31) goto LAB_140f5902b;
                        iVar29 = iVar29 + 0x20;
                        uVar18 = puVar27[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar18 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar29 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar18 & uVar18);
                    uVar1 = uVar32 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar18 = (iVar29 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar18) {
                      uVar18 = uVar24;
                    }
                  }
                  if (uVar18 != uVar24) {
                    if (*(uint **)(puVar8 + 8) != (uint *)0x0) {
                      local_218 = *(uint **)(puVar8 + 8);
                    }
                    iVar25 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar25 = uVar24 - 1;
                    }
                    if (*(int *)(lVar6 + 0x38) == *(int *)(lVar6 + 100)) goto LAB_140f59013;
                    local_1f0 = *(longlong *)puVar8;
                    iVar25 = iVar25 >> 5;
                    local_1f8 = lVar6 + 0x68;
                    if (*(ulonglong *)(lVar6 + 0x70) != 0) {
                      local_1f8 = *(ulonglong *)(lVar6 + 0x70);
                    }
                    local_224 = *(int *)(lVar6 + 0x78) - 1;
                    local_200 = local_218 + 1;
                    uVar15 = 0xffffffff;
                    do {
                      lVar23 = *(longlong *)(local_1f0 + (longlong)(int)uVar18 * 0x10);
                      iVar19 = *(int *)(local_1f8 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       local_224) * 4);
                      if (iVar19 == -1) goto LAB_140f59013;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar19 * 0x10) !=
                             lVar23) {
                        iVar19 = *(int *)((longlong)iVar19 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar19 == -1) goto LAB_140f59013;
                      }
                      uVar15 = uVar15 & ~(uint)uVar32;
                      iVar19 = (int)uVar31;
                      lVar23 = (longlong)iVar19;
                      uVar18 = local_218[lVar23] & uVar15;
                      if (uVar18 == 0) {
                        iVar13 = iVar25;
                        if (iVar25 < iVar19) {
                          iVar13 = iVar19;
                        }
                        if (iVar25 <= iVar19) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar29 = iVar29 + 0x20;
                          uVar18 = local_200[lVar23 + lVar33];
                          if (uVar18 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar23 == lVar33) goto LAB_140f5902b;
                        }
                        uVar31 = (ulonglong)(iVar19 + (int)lVar33 + 1);
                        uVar15 = 0xffffffff;
                      }
                      uVar32 = (ulonglong)(-uVar18 & uVar18);
                      uVar1 = uVar32 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar18 = (iVar29 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar18 < (int)uVar24);
                  }
                }
                else {
LAB_140f59013:
                  FUN_140492002(puVar8,local_208);
                  *(undefined1 *)((longlong)local_220 + 0x4c) = 1;
                }
LAB_140f5902b:
                local_208 = (uint *)(lVar6 + 0x80);
                if (local_230[0x16] - local_230[0x21] ==
                    *(int *)(lVar6 + 0x88) - *(int *)(lVar6 + 0xb4)) {
                  local_218 = puVar8 + 0x18;
                  uVar24 = local_230[0x1e];
                  if (uVar24 == 0) {
                    uVar32 = 1;
                    uVar31 = 0;
                    iVar29 = 0;
                    uVar18 = 0;
                  }
                  else {
                    puVar27 = *(uint **)(local_230 + 0x1c);
                    if (*(uint **)(local_230 + 0x1c) == (uint *)0x0) {
                      puVar27 = local_218;
                    }
                    uVar18 = *puVar27;
                    if (uVar18 == 0) {
                      iVar29 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar29 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar32 = (ulonglong)(uint)(iVar29 >> 5);
                      if (iVar29 >> 5 < 1) {
                        uVar32 = uVar31;
                      }
                      iVar29 = 0;
                      do {
                        if (uVar32 == uVar31) goto LAB_140f59143;
                        iVar29 = iVar29 + 0x20;
                        uVar18 = puVar27[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar18 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar29 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar18 & uVar18);
                    uVar1 = uVar32 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar18 = (iVar29 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar18) {
                      uVar18 = uVar24;
                    }
                  }
                  if (uVar18 != uVar24) {
                    if (*(uint **)(local_230 + 0x1c) != (uint *)0x0) {
                      local_218 = *(uint **)(local_230 + 0x1c);
                    }
                    iVar25 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar25 = uVar24 - 1;
                    }
                    if (*(int *)(lVar6 + 0x88) == *(int *)(lVar6 + 0xb4)) goto LAB_140f5912c;
                    iVar25 = iVar25 >> 5;
                    local_1f0 = lVar6 + 0xb8;
                    if (*(longlong *)(lVar6 + 0xc0) != 0) {
                      local_1f0 = *(longlong *)(lVar6 + 0xc0);
                    }
                    uVar15 = *(int *)(lVar6 + 200) - 1;
                    local_1f8 = CONCAT44(local_1f8._4_4_,uVar15);
                    local_200 = local_218 + 1;
                    local_224 = 0xffffffff;
                    do {
                      lVar23 = *(longlong *)
                                (*(longlong *)(local_230 + 0x14) + (longlong)(int)uVar18 * 0x10);
                      iVar19 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       uVar15) * 4);
                      if (iVar19 == -1) goto LAB_140f5912c;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar19 * 0x10) !=
                             lVar23) {
                        iVar19 = *(int *)((longlong)iVar19 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar19 == -1) goto LAB_140f5912c;
                      }
                      uVar26 = local_224 & ~(uint)uVar32;
                      iVar19 = (int)uVar31;
                      lVar23 = (longlong)iVar19;
                      uVar18 = local_218[lVar23] & uVar26;
                      if (uVar18 == 0) {
                        iVar13 = iVar25;
                        if (iVar25 < iVar19) {
                          iVar13 = iVar19;
                        }
                        if (iVar25 <= iVar19) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar29 = iVar29 + 0x20;
                          uVar18 = local_200[lVar23 + lVar33];
                          if (uVar18 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar23 == lVar33) goto LAB_140f59143;
                        }
                        uVar31 = (ulonglong)(iVar19 + (int)lVar33 + 1);
                        local_224 = 0xffffffff;
                        uVar26 = local_224;
                      }
                      local_224 = uVar26;
                      uVar32 = (ulonglong)(-uVar18 & uVar18);
                      uVar1 = uVar32 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar18 = (iVar29 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar18 < (int)uVar24);
                  }
                }
                else {
LAB_140f5912c:
                  FUN_140492002(puVar8 + 0x14,local_208);
                  *(undefined1 *)((longlong)local_220 + 0x4c) = 1;
                }
LAB_140f59143:
                puVar27 = local_230;
                local_230[0x2a] = 0;
                if (local_230[0x2b] != 0) {
                  FUN_144893a1c(puVar8 + 0x28,0);
                }
                puVar27[0x2c] = (int)plVar16[0x15] - (int)puVar20;
                FUN_14049209c(&local_190,plVar16,puVar8 + 0x28);
                plVar7 = local_220;
                if (*(int *)(lVar6 + 0x38) != *(int *)(lVar6 + 100)) {
                  *(undefined1 *)((longlong)local_220 + 0x4b) = 1;
                }
              }
            }
            lVar6 = plVar7[4];
            FUN_144958770(lVar6 + 0x30,0);
            FUN_144958770(lVar6 + 0x80,0);
            *(undefined1 *)(lVar6 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (uint *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140f5977b;
            }
            iVar22 = iVar22 + 1;
            param_3 = local_210;
            param_2 = local_198;
          } while (iVar22 < local_100);
        }
        plVar16 = local_1a8;
        if (((char)param_2[10] == '\0') && (iVar22 = (int)local_1a8[1], 0 < iVar22)) {
          uVar31 = 0;
          do {
            uVar32 = local_d0;
            iVar29 = *(int *)(*plVar16 + 8 + uVar31 * 0x150);
            if ((iVar29 < (int)(uint)local_108) && (local_108._4_4_ < iVar29)) {
              puVar8 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar8 = local_f8;
              }
              lVar6 = (longlong)(int)local_d0;
              if (lVar6 != 0) {
                lVar23 = 0;
                do {
                  if (uVar31 == *(uint *)((longlong)puVar8 + lVar23)) goto LAB_140f59855;
                  lVar23 = lVar23 + 4;
                } while (lVar6 * 4 - lVar23 != 0);
              }
              uVar24 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar24);
              if (local_d0._4_4_ < uVar24) {
                FUN_1400cc390(local_f8,uVar32 & 0xffffffff);
              }
              puVar8 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar8 = local_f8;
              }
              puVar8[lVar6] = (uint)uVar31;
              iVar22 = (int)plVar16[1];
            }
LAB_140f59855:
            uVar31 = uVar31 + 1;
          } while ((longlong)uVar31 < (longlong)iVar22);
        }
        plVar16 = local_1a0;
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar11 = local_1a8;
        puVar8 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar8 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_210 = local_210 + 0xb;
          lVar23 = (longlong)(int)local_d0;
          lVar6 = 0;
          do {
            iVar22 = *(int *)((longlong)puVar8 + lVar6);
            if ((-1 < (longlong)iVar22) && (iVar22 < (int)plVar11[1])) {
              lVar33 = (longlong)iVar22 * 0x150;
              iVar22 = FUN_1456fd588(local_210,*(undefined4 *)(*plVar11 + lVar33));
              if (0 < iVar22) {
                *(undefined1 *)((longlong)param_2 + 0x4c) = 1;
              }
              FUN_1488c5c7c(lVar33 + *plVar11,plVar16);
            }
            lVar6 = lVar6 + 4;
          } while (lVar23 * 4 != lVar6);
        }
        plVar11 = local_1a8;
        puVar9 = local_158;
        if (local_158 == (undefined4 *)0x0) {
          puVar9 = local_178;
        }
        lVar6 = (longlong)(int)local_150;
        if (lVar6 != 0) {
          lVar23 = 0;
          do {
            if ((plVar16[0x22] != 0) &&
               (lVar33 = (longlong)*(int *)((longlong)puVar9 + lVar23) * 0x150 + *plVar11,
               *(longlong *)(lVar33 + 0x100) = plVar16[0x22], *(int *)(lVar33 + 0x108) != -1)) {
              FUN_141069ce4();
            }
            lVar23 = lVar23 + 4;
          } while (lVar6 * 4 != lVar23);
        }
        plVar11 = local_1a8;
        puVar8 = local_128;
        if (local_128 == (uint *)0x0) {
          puVar8 = &local_148;
        }
        lVar6 = (longlong)(int)local_120;
        if (lVar6 != 0) {
          lVar23 = 0;
          do {
            if (plVar16[0x22] != 0) {
              FUN_141069ce4(plVar16[0x22],
                            (longlong)*(int *)((longlong)puVar8 + lVar23) * 0x150 + *plVar11);
            }
            lVar23 = lVar23 + 4;
          } while (lVar6 * 4 != lVar23);
        }
        if (plVar16[0x22] != 0) {
          FUN_141069c5a();
        }
        if (0 < (int)local_d0) {
          puVar8 = local_d8;
          if (local_d8 == (uint *)0x0) {
            puVar8 = local_f8;
          }
          FUN_144958a06(puVar8);
          plVar11 = local_1a8;
          if (0 < (longlong)(int)local_d0) {
            uVar31 = (longlong)(int)local_d0 + 1;
            do {
              puVar8 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar8 = local_f8;
              }
              if ((-1 < (int)puVar8[uVar31 - 2]) && ((int)puVar8[uVar31 - 2] < (int)plVar11[1])) {
                FUN_1488c97c2(plVar11);
              }
              uVar31 = uVar31 - 1;
            } while (1 < uVar31);
          }
          FUN_14010afec(plVar16,0);
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = local_d8;
        if (local_128 != (uint *)0x0) {
          FUN_1400020a8();
          puVar8 = local_d8;
        }
        goto LAB_140f59a7e;
      }
      lVar6 = param_2[3];
      if (lVar6 == 0) {
        local_230 = (uint *)CONCAT44(local_230._4_4_,0xffffffff);
        lVar6 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar6 + 0x70);
        cVar5 = FUN_143da13b0(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140f5978d;
        local_230 = (uint *)CONCAT44(local_230._4_4_,uVar3);
        lVar6 = lVar6 + 0x20;
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &PTR_FUN_14ab190a0;
      puVar10[8] = 0;
      *(undefined4 *)(puVar10 + 9) = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar10 + 0x54) = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0xffffffff;
      puVar12 = (undefined8 *)param_2[2];
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14ab190c0;
      plVar11[2] = (longlong)puVar10;
      if (puVar10 == (undefined8 *)0x0) {
LAB_140f59536:
        *puVar12 = puVar10;
        plVar7 = (longlong *)puVar12[1];
        if (plVar11 == plVar7) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar11 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar4 = (int *)((longlong)plVar11 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar22 = *piVar4;
              UNLOCK();
              plVar7 = plVar11;
              goto joined_r0x000140f59573;
            }
          }
        }
        else {
          puVar12[1] = plVar11;
          if (plVar7 != (longlong *)0x0) goto LAB_140f5958f;
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          puVar10[1] = puVar10;
          if ((longlong *)puVar10[2] != plVar11) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar7 = (longlong *)puVar10[2];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar7 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar7 + 0x10))();
              }
            }
            puVar10[2] = plVar11;
          }
          LOCK();
          plVar7 = plVar11 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar4 = (int *)((longlong)plVar11 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_140f59536;
        }
        puVar10[1] = puVar10;
        *puVar12 = puVar10;
        plVar7 = (longlong *)puVar12[1];
        if (plVar7 != (longlong *)0x0) {
          puVar12[1] = 0;
LAB_140f5958f:
          LOCK();
          plVar11 = plVar7 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar4 = (int *)((longlong)plVar7 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar22 = *piVar4;
            UNLOCK();
joined_r0x000140f59573:
            if (iVar22 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      plVar11 = local_220;
      local_148 = *(uint *)((longlong)param_3 + 0x54);
      *(uint *)(puVar10 + 0xe) = local_148;
      local_144 = local_230._0_4_;
      local_140 = 0;
      local_118 = (uint *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_220 + 0x4e) == '\x01') {
        FUN_143da16a0(&local_1b0,puVar10 + 4,&local_108);
      }
      else {
        local_238 = local_138;
        FUN_143da178c(&local_1b0,puVar10 + 4,lVar6,&local_108);
        *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_143da1bba(&local_1b0);
      if (0 < (int)local_c0) {
        lVar6 = 0;
        do {
          puVar12 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar12 = &local_108;
          }
          iVar22 = *(int *)(puVar12 + lVar6);
          lVar23 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar12 + lVar6 * 8 + 4);
          puVar34 = (ulonglong *)plVar16[1];
          puVar9 = (undefined4 *)*puVar34 + 1;
          if ((undefined4 *)puVar34[1] < puVar9) {
            if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar16 + 0x170))(plVar16,local_178,4);
            }
            else {
              FUN_14572512c(plVar16,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar34;
            *puVar34 = (ulonglong)puVar9;
          }
          plVar11[7] = local_1d8;
          plVar11[6] = (longlong)iVar22 * 0x150 + lVar23;
          (**(code **)(*(longlong *)plVar11[8] + 8))((longlong *)plVar11[8],plVar11);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)local_c0);
      }
      puVar8 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar8 = local_118;
      }
    }
LAB_140f59a7e:
    if (puVar8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar22 = (int)param_3[0x10];
    if (iVar22 == 0) {
      uVar31 = 1;
      iVar25 = 0;
      uVar32 = 0;
      iVar29 = 0;
    }
    else {
      puVar8 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar8 = (uint *)(param_3 + 0xd);
      }
      uVar24 = *puVar8;
      if (uVar24 == 0) {
        iVar29 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar29 = iVar22 + -1;
        }
        uVar32 = 0;
        uVar31 = (ulonglong)(uint)(iVar29 >> 5);
        if (iVar29 >> 5 < 1) {
          uVar31 = uVar32;
        }
        iVar25 = 0;
        do {
          if (uVar31 == uVar32) goto LAB_140f59a88;
          iVar25 = iVar25 + 0x20;
          uVar24 = puVar8[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar24 == 0);
      }
      else {
        iVar25 = 0;
        uVar32 = 0;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar29 = (iVar25 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar29) {
        iVar29 = iVar22;
      }
    }
    puVar20 = (uint *)0x1;
    if (iVar29 == iVar22) goto LAB_140f59a8a;
    uVar24 = 0xffffffff;
    local_230 = (uint *)(param_3 + 0xd);
    do {
      lVar6 = local_210[0xb];
      lVar23 = (longlong)iVar29 * 200;
      FUN_1403257c8(param_2[0xd],lVar23 + lVar6 + 8);
      FUN_1403257c8(param_2[0xd],lVar23 + lVar6 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar6 + lVar23 + 0xb0);
      }
      uVar24 = uVar24 & ~(uint)uVar31;
      puVar8 = (uint *)local_210[0xf];
      if ((uint *)local_210[0xf] == (uint *)0x0) {
        puVar8 = local_230;
      }
      iVar19 = (int)local_210[0x10];
      iVar29 = (int)uVar32;
      lVar6 = (longlong)iVar29;
      uVar18 = puVar8[lVar6] & uVar24;
      if (uVar18 == 0) {
        iVar13 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar13 = iVar19 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar29) {
          iVar14 = iVar29;
        }
        if (iVar29 < iVar13) {
          lVar23 = 0;
          do {
            uVar18 = puVar8[lVar6 + lVar23 + 1];
            if (uVar18 != 0) {
              uVar32 = (ulonglong)(iVar29 + (int)lVar23 + 1);
              uVar24 = 0xffffffff;
              goto LAB_140f58228;
            }
            iVar25 = iVar25 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar14 - lVar6 != lVar23);
          uVar24 = 0xffffffff;
          iVar29 = iVar14;
        }
        uVar32 = (ulonglong)(iVar29 + 1);
        iVar29 = iVar19;
      }
      else {
LAB_140f58228:
        uVar31 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar31 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar29 = (iVar25 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar29) {
          iVar29 = iVar19;
        }
      }
    } while (iVar29 != iVar22);
  }
LAB_140f59a88:
  puVar20 = (uint *)0x1;
LAB_140f59a8a:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar20;
  while( true ) {
    iVar22 = iVar22 + 0x20;
    uVar24 = puVar20[uVar32 + 1];
    uVar32 = uVar32 + 1;
    if (uVar24 != 0) break;
LAB_140f586cf:
    if (uVar31 == uVar32) goto LAB_140f58a2a;
  }
LAB_140f586e8:
  uVar31 = (ulonglong)(-uVar24 & uVar24);
  uVar1 = uVar31 * 2 + 1;
  lVar6 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  uVar24 = (iVar22 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
  if ((int)uVar15 <= (int)uVar24) {
    uVar24 = uVar15;
  }
LAB_140f5871e:
  if ((int)uVar24 < (int)uVar15) {
    local_208 = puVar27 + 0x16;
    uVar18 = 0xffffffff;
    local_1e8 = (longlong *)((ulonglong)local_1e8 & 0xffffffff00000000);
    local_230 = puVar30;
    do {
      plVar16 = local_220;
      puVar34 = (ulonglong *)((longlong)(int)uVar24 * 0x10 + *(longlong *)puVar30);
      cVar5 = (**(code **)(*(longlong *)local_220[4] + 0x330))((longlong *)local_220[4],puVar34,0);
      if (cVar5 == '\0') {
        puVar21 = puVar34;
        lVar6 = (**(code **)(*(longlong *)plVar16[4] + 800))((longlong *)plVar16[4],puVar34);
        puVar30 = local_230;
        if (lVar6 != 0) {
          local_1e8 = (longlong *)
                      CONCAT44(local_1e8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar21 >> 8),1));
          if ((*puVar34 & 1) == 0 && *puVar34 != 0) {
            FUN_140325a06(local_208,&local_108,puVar34,0);
          }
          goto LAB_140f587bd;
        }
      }
      else {
LAB_140f587bd:
        puVar30 = local_230;
        FUN_140646052(local_230,uVar24);
      }
      plVar16 = local_220;
      uVar18 = uVar18 & ~(uint)uVar31;
      puVar8 = *(uint **)(puVar30 + 8);
      if (*(uint **)(puVar30 + 8) == (uint *)0x0) {
        puVar8 = puVar27 + 6;
      }
      uVar15 = puVar30[10];
      iVar29 = (int)uVar32;
      lVar6 = (longlong)iVar29;
      uVar24 = puVar8[lVar6] & uVar18;
      if (uVar24 == 0) {
        iVar25 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar25 = uVar15 - 1;
        }
        iVar25 = iVar25 >> 5;
        iVar19 = iVar25;
        if (iVar25 < iVar29) {
          iVar19 = iVar29;
        }
        if (iVar25 <= iVar29) break;
        lVar23 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar24 = puVar8[lVar6 + lVar23 + 1];
          if (uVar24 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar19 - lVar6 == lVar23) goto LAB_140f58865;
        }
        uVar32 = (ulonglong)(iVar29 + (int)lVar23 + 1);
        uVar18 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar24 = (iVar22 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while ((int)uVar24 < (int)uVar15);
LAB_140f58865:
    puVar8 = local_1c8;
    if (((ulonglong)local_1e8 & 1) != 0) {
      *(undefined1 *)((longlong)local_220 + 0x49) = 1;
      if (*(char *)((longlong)local_220 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_220[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar16 + 0x4a) = 1;
        puVar30 = local_230;
      }
      uVar31 = local_120;
      lVar6 = local_1d8;
      plVar11 = local_210;
      if ((int)local_210[1] != *(int *)((longlong)local_210 + 0x34)) {
        plVar7 = (longlong *)local_210[8];
        if ((longlong *)local_210[8] == (longlong *)0x0) {
          plVar7 = local_1c0;
        }
        iVar22 = *(int *)((longlong)plVar7 + (ulonglong)((int)local_210[9] - 1U & local_1d0) * 4);
        if (iVar22 != -1) {
          do {
            lVar23 = *local_210 + (longlong)iVar22 * 0x10;
            if (*(uint *)(*local_210 + (longlong)iVar22 * 0x10) == local_1d0) goto LAB_140f588f8;
            iVar22 = *(int *)(lVar23 + 8);
          } while (iVar22 != -1);
        }
      }
      lVar23 = 0;
LAB_140f588f8:
      uVar24 = *(uint *)(lVar23 + 4);
      lVar23 = (longlong)(int)uVar24 * 0x150 + *local_1e0;
      lVar33 = (longlong)(int)local_120;
      uVar18 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar18);
      if (local_120._4_4_ < uVar18) {
        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
        puVar30 = local_230;
      }
      puVar8 = local_128;
      if (local_128 == (uint *)0x0) {
        puVar8 = &local_148;
      }
      puVar8[lVar33] = uVar24;
      FUN_1448fcc30(&local_108,plVar16[4],*(undefined8 *)(puVar30 + 0x28),
                    (longlong)(int)puVar30[0x2c]);
      plVar16[7] = lVar6;
      plVar16[6] = lVar23;
      plVar16[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)plVar16[8] + 8))((longlong *)plVar16[8],plVar16);
      if (plVar11[0x22] != 0) {
        FUN_141069ce4(plVar11[0x22],lVar23);
      }
      puVar8 = local_1c8;
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
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
      lVar6 = local_90;
      puVar30 = local_230;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar6);
        puVar30 = local_230;
      }
    }
  }
LAB_140f58a2a:
  param_3 = local_210;
  uVar31 = local_1f8;
  uVar24 = local_224;
  if ((puVar30[2] == puVar30[0xd]) && (puVar30[0x16] == puVar30[0x21])) {
LAB_140f58a4f:
    FUN_1456fd4bc(local_200,local_1cc);
  }
  uVar18 = (uint)local_1f0 & ~(uint)local_218;
  puVar20 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar20 = puVar8;
  }
  iVar22 = (int)param_3[0x10];
  iVar29 = (int)uVar31;
  lVar6 = (longlong)iVar29;
  uVar15 = puVar20[lVar6] & uVar18;
  if (uVar15 == 0) {
    iVar25 = iVar22 + 0x1e;
    if (-1 < iVar22 + -1) {
      iVar25 = iVar22 + -1;
    }
    iVar25 = iVar25 >> 5;
    iVar19 = iVar25;
    if (iVar25 < iVar29) {
      iVar19 = iVar29;
    }
    if (iVar25 <= iVar29) goto LAB_140f58b76;
    lVar23 = 0;
    while( true ) {
      uVar24 = uVar24 + 0x20;
      uVar15 = puVar20[lVar6 + lVar23 + 1];
      if (uVar15 != 0) break;
      lVar23 = lVar23 + 1;
      if (iVar19 - lVar6 == lVar23) goto LAB_140f58b76;
    }
    uVar31 = (ulonglong)(iVar29 + (int)lVar23 + 1);
    uVar18 = 0xffffffff;
  }
  puVar20 = (uint *)(ulonglong)(-uVar15 & uVar15);
  uVar32 = (longlong)puVar20 * 2 + 1;
  lVar6 = 0x3f;
  if (uVar32 != 0) {
    for (; uVar32 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  iVar29 = (uVar24 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
  if (iVar22 <= iVar29) goto LAB_140f58b76;
  goto LAB_140f585d2;
}



// FUNCTION 140f59aba FUN_140f59aba body=104 status=ok
// SIG undefined FUN_140f59aba(void)

void FUN_140f59aba(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1411f2994();
  FUN_140f59b4e(&DAT_14cb751d8,*(undefined8 *)(param_1 + 4));
  if (DAT_14cb751d0 == param_1) {
    DAT_14cb751d0 = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f59b2e FUN_140f59b2e body=31 status=ok
// SIG undefined FUN_140f59b2e(void)

undefined8 FUN_140f59b2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f59b4e FUN_140f59b4e body=155 status=ok
// SIG undefined FUN_140f59b4e(void)

undefined8 FUN_140f59b4e(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_140f59bea(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140f59bea FUN_140f59bea body=91 status=ok
// SIG undefined FUN_140f59bea(void)

void FUN_140f59bea(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140f59c46(param_1,param_2,1);
  return;
}



// FUNCTION 140f59c46 FUN_140f59c46 body=136 status=ok
// SIG undefined FUN_140f59c46(void)

void FUN_140f59c46(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f59cce FUN_140f59cce body=116 status=ok
// SIG undefined FUN_140f59cce(void)

void FUN_140f59cce(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0xec) != 0) && (uVar1 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xec))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x30))();
        FUN_140f59d42(uVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f59d42 FUN_140f59d42 body=280 status=ok
// SIG undefined FUN_140f59d42(void)

void FUN_140f59d42(longlong param_1)

{
  undefined8 *_Dst;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 ***local_40 [3];
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0;
  _Dst = (undefined8 *)(param_1 + 0x18);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      puVar2 = (undefined8 *)*_Dst;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*_Dst);
  }
  *(undefined2 *)(param_1 + 0x30) = 0;
  pcVar1 = DAT_14c9a85b8;
  if ((DAT_14c9a85b8 == (code *)0x0) && (pcVar1 = DAT_14c9a85b0, DAT_14c9a85b0 == (code *)0x0)) {
    memcpy(_Dst,local_40,(longlong)DAT_14c9a8510);
  }
  else {
    (*pcVar1)(_Dst,local_40);
  }
  *(undefined1 *)(param_1 + 0x38) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_40[0];
    if (local_28 < 0x19) {
      ppppuVar3 = local_40;
    }
    (*DAT_14c9a85d0)(ppppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f59e6a FUN_140f59e6a body=528 status=ok
// SIG undefined FUN_140f59e6a(void)

void FUN_140f59e6a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_50 = DAT_14cb862d0;
    local_58 = DAT_14cb862c8;
    FUN_1448075d0(local_48);
    pbVar2 = (byte *)*param_3;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar3 = &DAT_14c9a1288;
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
        plVar5 = plVar3 + 8;
        if ((longlong *)plVar3[9] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar3[9];
        }
        iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_48[0]) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_48[0]) {
              if ((((lVar1 != 0) &&
                   (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
              goto LAB_140f59f22;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar4 = &DAT_14c9a1308;
LAB_140f59f22:
    if ((byte *)*puVar4 == (byte *)0x0) {
      bVar7 = false;
    }
    else {
      bVar7 = (*(byte *)*puVar4 & 3) == 1;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar7) {
      local_50 = DAT_14cb862d0;
      local_58 = DAT_14cb862c8;
      FUN_1448075d0(local_48);
      pbVar2 = (byte *)*param_3;
      if (pbVar2 != (byte *)0x0) {
        if ((*pbVar2 & 2) == 0) {
          plVar3 = &DAT_14c9a1288;
        }
        else {
          plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
          plVar5 = plVar3 + 8;
          if ((longlong *)plVar3[9] != (longlong *)0x0) {
            plVar5 = (longlong *)plVar3[9];
          }
          iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_48[0]) * 4);
          if (iVar6 != -1) {
            do {
              lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
              if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_48[0]) {
                if (((lVar1 != 0) &&
                    (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar4 != (byte *)0x0 && ((*(byte *)*puVar4 & 0x40) == 0))))
                goto LAB_140f5a018;
                break;
              }
              iVar6 = *(int *)(lVar1 + 0x38);
            } while (iVar6 != -1);
          }
        }
      }
      puVar4 = &DAT_14c9a1308;
LAB_140f5a018:
      FUN_140f5a07c(puVar4,param_1 + 0x18);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5a07c FUN_140f5a07c body=145 status=ok
// SIG undefined FUN_140f5a07c(void)

void FUN_140f5a07c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  local_48 = (undefined4)param_2[1];
  local_40 = 0;
  local_1c = 1;
  local_20 = local_48;
  FUN_140008118(local_38,param_1);
  if ((*param_2 != local_38[0]) || ((int)param_2[1] != 0x6000)) {
    *param_2 = local_38[0];
    *(undefined4 *)(param_2 + 1) = 0x6000;
    param_2[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5a10e FUN_140f5a10e body=360 status=ok
// SIG undefined FUN_140f5a10e(void)

undefined8 FUN_140f5a10e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = 0;
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) goto LAB_140f5a235;
  if (((((param_2[6] != 0) &&
        (((lVar1 = *(longlong *)(param_2[6] + 0x360), lVar1 != 0 &&
          ((*(byte *)(lVar1 + 0x155) & 1) != 0)) && (*(longlong *)(lVar1 + 0x30) != 0)))) &&
       (((*(int *)(*(longlong *)(lVar1 + 0x30) + 0xa8) != 0 && (*(char *)(param_1 + 0x91) == '\0'))
        && (*(char *)(param_1 + 0x9c) == '\0')))) &&
      ((*(char *)(param_1 + 0x8d) == '\0' && (*(char *)(param_1 + 0x88) == '\x01')))) &&
     ((bVar2 = (**(code **)(*param_2 + 0x498))(param_2), bVar2 - 7 < 2 ||
      ((bVar2 == 3 || (bVar2 == 5)))))) {
    if (*(int *)(param_1 + 0x178) == 0) {
      *(undefined1 *)(param_1 + 0x89) = 1;
      uVar4 = 1;
      goto LAB_140f5a235;
    }
    uVar4 = 1;
    if (((((*(byte *)(param_1 + 0x89) & 1) != 0) || (param_2[0x3c] == 0)) ||
        (lVar1 = *(longlong *)(param_2[0x3c] + 0x68), lVar1 == 0)) ||
       ((FUN_140f5a278(lVar1,local_2c,param_1 + 0x28,0), local_2c[0] < 0 ||
        (iVar3 = FUN_1402d8968(lVar1,local_2c), iVar3 - 0xbU < 0xfffffff7)))) goto LAB_140f5a235;
  }
  uVar4 = 0;
LAB_140f5a235:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140f5a278 FUN_140f5a278 body=206 status=ok
// SIG undefined FUN_140f5a278(void)

void FUN_140f5a278(longlong param_1,undefined2 *param_2,int *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar4 = 0xffff;
  if ((*param_3 < 0) || ((longlong)*(int *)(param_1 + 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      if (((lVar2 != 0) && (*(short *)(lVar2 + 4) < 0)) && (*param_3 == *(int *)(lVar2 + 0x50))) {
        if (param_4 != (undefined8 *)0x0) {
          if (*(int *)(lVar2 + 0xb8) == 0) {
LAB_140f5a32c:
            uVar6 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar2 + 0xb4);
            uVar6 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              puVar7 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((puVar7 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar7 + 2) != *(int *)(lVar2 + 0xb8) ||
                  ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_140f5a32c;
              uVar6 = *puVar7;
            }
          }
          *param_4 = uVar6;
        }
        uVar4 = *(undefined2 *)(lVar2 + 2);
        uVar3 = *(undefined2 *)(lVar2 + 8);
        break;
      }
      lVar5 = lVar5 + 8;
      uVar3 = 0;
    } while ((longlong)*(int *)(param_1 + 0x10) * 8 != lVar5);
  }
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}



// FUNCTION 140f5a346 FUN_140f5a346 body=484 status=ok
// SIG undefined FUN_140f5a346(void)

void FUN_140f5a346(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 == -1) {
    param_4 = *(int *)(param_3 + 0x2c);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = param_1;
  if (((param_4 == 1) && (*(longlong *)(param_1 + 0x1b0) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar2 != 0)) {
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
    if (lVar2 != 0) {
      FUN_1447a97f4(&local_88,lVar2 + 0x80);
      local_b8 = local_a0;
      FUN_1414e7168(&local_98,param_3,&DAT_14cb8dbe8,&local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  uVar3 = (ulonglong)*(int *)(param_3 + 0x80);
  if (0 < (longlong)uVar3) {
    lVar2 = uVar3 * 0x50 + -0x48;
    lVar5 = uVar3 * 0x70;
    do {
      lVar5 = lVar5 + -0x70;
      lVar4 = 0x60;
      if (1 < (byte)(*(char *)(*(longlong *)(local_a0 + 0x1f0) + lVar2) - 1U)) {
        lVar4 = 0;
      }
      local_b8 = lVar4 + *(longlong *)(param_3 + 0x78) + lVar5;
      local_b0 = (longlong *)CONCAT44(local_b0._4_4_,(int)(uVar3 - 1));
      local_a8 = &local_88;
      FUN_14164dd40(param_2,param_3,param_4);
      lVar2 = lVar2 + -0x50;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  local_b8 = param_3 + 0x68;
  local_b0 = &local_88;
  FUN_14164d87e(param_2,param_3,param_4);
  if (0 < (int)uStack_80) {
    FUN_143e5f94d(param_3,param_2,param_4,&local_88);
  }
  FUN_14164d856(local_88,(int)uStack_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1414e70fc(&local_98);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5a52b FUN_140f5a52b body=589 status=ok
// SIG undefined FUN_140f5a52b(void)

void FUN_140f5a52b(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*param_1 == 0) || (param_1[1] == 0)) || (*(int *)(param_1[1] + 8) < 1)) &&
     (((uVar5 = FUN_1401cb356(), *param_1 == 0 || (param_1[1] == 0)) ||
      (*(int *)(param_1[1] + 8) < 1)))) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar4 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar6;
    *local_58 = &PTR_FUN_14b434880;
    local_58[3] = 0;
    iVar8 = 0;
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_2 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar8 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar8;
    puVar4[4] = FUN_140a996fa;
    local_68 = 0x40400000;
    FUN_1405f67fc(uVar5,&local_48,&local_58,L"OnTimerSaveProfiles_Slow");
    *param_1 = local_48;
    local_48 = 0;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = (longlong)local_40;
    local_40 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_140f5a6ec;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140f5a6ec:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5a77a FUN_140f5a77a body=793 status=ok
// SIG undefined FUN_140f5a77a(void)

ulonglong FUN_140f5a77a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  uint local_78;
  int local_74;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined **local_48;
  longlong local_40;
  undefined8 *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x158) != '\0') goto LAB_140f5a9bb;
  local_a8 = 0;
  local_a0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (code *)0x0;
  plStack_d0 = (longlong *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  if (*param_2 == 0) {
    local_78 = 0;
    iVar6 = 0;
  }
  else {
    local_78 = *(uint *)(*param_2 + 0xc);
    if ((int)local_78 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_78 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_78 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar6 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar7;
      }
    }
  }
  local_74 = iVar6;
  cVar4 = FUN_143e5db62(param_1,param_2);
  if (cVar4 == '\0') {
LAB_140f5a984:
    uVar8 = 0;
  }
  else {
    local_108 = 0;
    FUN_1401412e0(param_1 + 0x68,&local_68,1,0);
    plVar2 = plStack_d0;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_d8 = local_68;
    plStack_d0 = local_60;
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
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)local_60 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    puVar9 = &DAT_14c9a1288;
    if ((local_d8 != (code *)0x0) && (((byte)*local_d8 & 2) != 0)) {
      puVar9 = (undefined8 *)(*(longlong *)(local_d8 + 8) + 0x18);
    }
    local_f0 = DAT_14cb8db20;
    local_f8 = DAT_14cb8db18;
    FUN_1448075d0(&local_68);
    FUN_14045886c(puVar9,&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    local_48 = &PTR_LAB_14b434680;
    local_38 = &local_e8;
    local_68 = FUN_143e65b6e;
    local_40 = param_1;
    cVar4 = FUN_143e5e082(param_1);
    if (cVar4 == '\0') goto LAB_140f5a984;
    uVar5 = FUN_143e5dc90(param_1,&local_e8);
    uVar8 = (ulonglong)uVar5;
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_c8);
  plVar2 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_140f5a9bb:
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140f5aa94 FUN_140f5aa94 body=138 status=ok
// SIG undefined FUN_140f5aa94(void)

void FUN_140f5aa94(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0xd0);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))();
      lVar2 = FUN_145838c02(uVar3);
      if (lVar2 != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))();
        FUN_145838c02(uVar3);
        return;
      }
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar2 = FUN_140f5ab1e();
    if (lVar2 != 0) {
      FUN_140f5ab1e(*(undefined8 *)(param_1 + 200));
      return;
    }
  }
  FUN_143d172a0(param_1);
  return;
}



// FUNCTION 140f5ab1e FUN_140f5ab1e body=609 status=ok
// SIG undefined FUN_140f5ab1e(void)

longlong FUN_140f5ab1e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_145c20674();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
LAB_140f5ab3e:
    if (lVar5 != 0) {
      return lVar3;
    }
    uVar4 = FUN_145c20674();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      return *(longlong *)(param_1 + 0x28);
    }
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 != 0) {
      plVar6 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar5 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x28) = lVar5;
      return lVar5;
    }
    return 0;
  }
  if ((lVar5 != 0) && (*plVar1 != 0)) {
    plVar6 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar3 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0x28) = lVar3;
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x20);
        goto LAB_140f5ab3e;
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x38) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  plVar6 = *(longlong **)(param_1 + 0x40);
  if (plVar6 == (longlong *)0x0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar6 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
      plVar6 = (longlong *)FUN_144aff482(uVar4,plVar1);
      *(longlong **)(param_1 + 0x40) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = *(longlong *)(param_1 + 0x38);
        goto LAB_140f5ac75;
      }
    }
    return 0;
  }
LAB_140f5ac75:
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x38) = lVar5;
    plVar6 = *(longlong **)(param_1 + 0x40);
    if (((plVar6 == (longlong *)0x0) && (plVar6 = (longlong *)0x0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar6 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar6 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar6 + 0x108))(), cVar2 == '\0'))
      {
        plVar6 = (longlong *)0x0;
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
        plVar6 = (longlong *)FUN_144aff482(uVar4,plVar1);
      }
      *(longlong **)(param_1 + 0x40) = plVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140f5ac8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
  return lVar5;
}



// FUNCTION 140f5ad80 FUN_140f5ad80 body=93 status=ok
// SIG undefined FUN_140f5ad80(void)

undefined8 * FUN_140f5ad80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f5addd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f5ae84(param_1,iVar1);
      FUN_140f5ae08(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140f5addd FUN_140f5addd body=43 status=ok
// SIG undefined FUN_140f5addd(void)

void FUN_140f5addd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140f5ae08 FUN_140f5ae08 body=124 status=ok
// SIG undefined FUN_140f5ae08(void)

void FUN_140f5ae08(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar5[-2];
      _Src = *(void **)(puVar5 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *(undefined4 *)(param_1 + 2) = *puVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      param_1 = param_1 + 4;
      puVar5 = puVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f5ae84 FUN_140f5ae84 body=216 status=ok
// SIG undefined FUN_140f5ae84(void)

void FUN_140f5ae84(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f5af5c FUN_140f5af5c body=21 status=ok
// SIG undefined FUN_140f5af5c(void)

undefined8 FUN_140f5af5c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140f5af72 FUN_140f5af72 body=178 status=ok
// SIG undefined FUN_140f5af72(void)

void FUN_140f5af72(undefined8 param_1)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(DAT_14cab35f8 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*DAT_14cab35f8;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
    puVar1 = local_38;
    if (local_30 != 0) goto LAB_140f5afed;
  }
  puVar1 = &DAT_149dfb77a;
LAB_140f5afed:
  FUN_140f5b025(param_1,puVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5b025 FUN_140f5b025 body=126 status=ok
// SIG undefined FUN_140f5b025(void)

ulonglong FUN_140f5b025(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38 [2];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_140f5b0a6();
  FUN_140f5b112(uVar2,local_38,param_2);
  cVar1 = (&DAT_149e30aa8)[local_28];
  if (cVar1 == '\x01') {
    *param_1 = local_38[0];
  }
  (*(code *)(&PTR_LAB_149e30660)[local_28])(local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)local_38 >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5b0a6 FUN_140f5b0a6 body=108 status=ok
// SIG undefined FUN_140f5b0a6(void)

undefined * FUN_140f5b0a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868638) {
    FUN_144b3d300(&DAT_14c868638);
    if (DAT_14c868638 == -1) {
      FUN_1457cdce2(&DAT_14c8683a0);
      atexit((_func_5014 *)&LAB_142782eb5);
      _Init_thread_footer(&DAT_14c868638);
    }
  }
  return &DAT_14c8683a0;
}



// FUNCTION 140f5b112 FUN_140f5b112 body=1111 status=ok
// SIG undefined FUN_140f5b112(void)

double * FUN_140f5b112(longlong param_1,double *param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_168 [36];
  undefined1 local_144 [4];
  longlong *local_140 [2];
  undefined **local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int local_100;
  int local_fc;
  double local_f0;
  byte local_c8;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
  double local_a0;
  byte local_78;
  undefined1 local_60 [16];
  byte local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1449078e7(&local_48,param_3,param_1);
  if ((&DAT_149e19eee)[local_38] == '\0') {
    FUN_14023423e(&local_b8,&local_48);
    (*(code *)(&PTR_FUN_149e19f00)[local_38])(&local_48);
    local_38 = 2;
    FUN_14023423e(param_2,&local_b8);
    *(undefined1 *)(param_2 + 2) = 1;
    if ((longlong *)CONCAT44(iStack_b4,local_b8) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(iStack_b4,local_b8) + 0x10))();
    }
    goto LAB_140f5b2bd;
  }
  local_118 = local_48;
  uStack_110 = uStack_40;
  local_48 = 0;
  uStack_40 = 0;
  (*(code *)(&PTR_FUN_149e19f00)[local_38])(&local_48);
  local_38 = 2;
  FUN_140f5b56a(local_60,&local_118,param_1 + 0x18);
  if ((&DAT_149e1da58)[local_50] == '\0') {
    FUN_14023423e(&local_b8,local_60);
    (*(code *)(&PTR_FUN_149e1da60)[local_50])(local_60);
    local_50 = 2;
    FUN_14023423e(param_2,&local_b8);
    *(undefined1 *)(param_2 + 2) = 1;
    if ((longlong *)CONCAT44(iStack_b4,local_b8) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(iStack_b4,local_b8) + 0x10))();
    }
  }
  else {
    local_128 = param_1 + 0x158;
    local_130 = &PTR_FUN_149e1da80;
    local_120 = 0;
    FUN_14488fa50(&local_b8,local_60);
    if ((&DAT_149e1dc64)[local_78] == '\0') {
      plVar1 = (longlong *)CONCAT44(iStack_b4,local_b8);
      *param_2 = (double)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
LAB_140f5b554:
      *(int *)(param_2 + 1) = local_b0;
      *(undefined1 *)(param_2 + 2) = 1;
    }
    else if ((((local_b8 == DAT_14c758c44) && (iStack_b4 == DAT_14c758c48)) &&
             (local_b0 == DAT_14c758c4c)) && (local_ac == DAT_14c758c50)) {
      if (local_a0 <= 1.0) {
        FUN_146812e7e(&local_108);
      }
      else {
        FUN_14110c29e();
      }
      uVar2 = (ulonglong)local_c8;
      if ((&DAT_149e1dc64)[uVar2] == '\0') {
        FUN_14023423e(local_140,&local_108);
        (*(code *)(&PTR_LAB_149e1d9c0)[local_c8])(&local_108);
        local_c8 = 2;
        FUN_14023423e(param_2,local_140);
        *(undefined1 *)(param_2 + 2) = 1;
        if (local_140[0] != (longlong *)0x0) {
          (**(code **)(*local_140[0] + 0x10))();
        }
        (*(code *)(&PTR_LAB_149e1d9c0)[local_c8])();
      }
      else {
        if ((((int)local_108 != 0x4edaa92f) || (local_108._4_4_ != -0x48a1b462)) ||
           ((local_100 != -0x481f543e || (local_fc != -0x7267e035)))) {
          (*(code *)(&PTR_LAB_149e1d9c0)[uVar2])(&local_108);
          goto LAB_140f5b4b8;
        }
        *param_2 = local_f0;
        *(undefined1 *)(param_2 + 2) = 0;
        (*(code *)(&PTR_LAB_149e1d9c0)[uVar2])();
      }
    }
    else if (((local_b8 == 0x4edaa92f) && (iStack_b4 == -0x48a1b462)) &&
            ((local_b0 == -0x481f543e && (local_ac == -0x7267e035)))) {
      *param_2 = local_a0;
      *(undefined1 *)(param_2 + 2) = 0;
    }
    else {
LAB_140f5b4b8:
      local_108 = L"UnrecognizedResult";
      local_100 = 0x12;
      FUN_1446e940c(local_140,&local_108);
      local_108 = L"FFrameRate";
      local_100 = 10;
      FUN_1446e940c(local_144,&local_108);
      FUN_140208bae(&local_108,local_144,local_140,L"Unrecognized result returned from expression");
      *param_2 = (double)local_108;
      local_b0 = local_100;
      if (local_108 == (wchar_t *)0x0) goto LAB_140f5b554;
      (**(code **)(*(longlong *)local_108 + 8))();
      *(int *)(param_2 + 1) = local_100;
      *(undefined1 *)(param_2 + 2) = 1;
      if (local_108 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_108 + 0x10))();
      }
    }
    (*(code *)(&PTR_LAB_149e1d9c0)[local_78])();
  }
  (*(code *)(&PTR_FUN_149e1da60)[local_50])();
LAB_140f5b2bd:
  (*(code *)(&PTR_FUN_149e19f00)[local_38])();
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f5b56a FUN_140f5b56a body=143 status=ok
// SIG undefined FUN_140f5b56a(void)

undefined8 FUN_140f5b56a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f5b5fa(local_48,param_3,param_2);
  FUN_140f5b640(local_48,param_1);
  FUN_140bcafba(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1449079f2(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5b5fa FUN_140f5b5fa body=68 status=ok
// SIG undefined FUN_140f5b5fa(void)

undefined4 * FUN_140f5b5fa(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = param_2;
  *(longlong *)(param_1 + 8) = param_3;
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 8);
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_140f5b6f0(param_1 + 2);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}


