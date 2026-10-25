// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14094b946 FUN_14094b946 body=3653 status=ok
// SIG undefined FUN_14094b946(void)

void FUN_14094b946(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  longlong *plVar29;
  ulonglong uVar30;
  ulonglong *_Src;
  longlong *plVar31;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint *local_90;
  longlong *local_88;
  ulonglong local_80;
  uint *local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_5c;
  char *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_2;
  if ((*param_2 != 0) && (*(char *)(*param_2 + 0x3c) == '\0')) {
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      _Src = *(ulonglong **)(param_1 + 0x18);
      puVar22 = _Src + (longlong)*(int *)(param_1 + 0x20) * 0x18;
      do {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb25bd8) &&
           (FUN_144b3d300(&DAT_14cb25bd8), DAT_14cb25bd8 == -1)) {
          local_58 = "default";
          local_50 = (longlong *)CONCAT35(local_50._5_3_,7);
          uVar21 = FUN_14001a6c0(&local_58,1);
          DAT_14cb25bd0 = (ulonglong)uVar21;
          _Init_thread_footer(&DAT_14cb25bd8);
        }
        uVar23 = *_Src;
        lVar11 = *local_88;
        if (uVar23 == DAT_14cb25bd0 || uVar23 == 0) {
          memcpy((void *)(lVar11 + 0x60),_Src,0x92);
          FUN_140d273b0(lVar11 + 0xf8,_Src + 0x13);
          *(char *)(lVar11 + 0x108) = (char)_Src[0x15];
          FUN_140d27362(lVar11 + 0x110,_Src + 0x16);
          *(char *)(lVar11 + 0x118) = (char)_Src[0x17];
        }
        else {
          lVar15 = *(longlong *)(lVar11 + 0x120);
          iVar26 = *(int *)(lVar11 + 0x128);
          lVar14 = (longlong)iVar26;
          if (lVar14 != 0) {
            uVar30 = 0;
            do {
              if ((*(ulonglong *)(lVar15 + 8 + uVar30) == _Src[1]) &&
                 (*(ulonglong *)(lVar15 + uVar30) == uVar23)) {
                if ((int)(uVar30 >> 6) * -0x55555555 != -1) goto LAB_14094bbae;
                break;
              }
              uVar30 = uVar30 + 0xc0;
            } while (lVar14 * 0xc0 != uVar30);
          }
          *(uint *)(lVar11 + 0x128) = iVar26 + 1U;
          if (*(uint *)(lVar11 + 300) < iVar26 + 1U) {
            FUN_14084a9a4((longlong *)(lVar11 + 0x120),iVar26);
            lVar15 = *(longlong *)(lVar11 + 0x120);
          }
          lVar14 = lVar14 * 0xc0;
          lVar11 = lVar15 + lVar14;
          uVar23 = _Src[1];
          puVar2 = (ulonglong *)(lVar15 + lVar14);
          *puVar2 = *_Src;
          puVar2[1] = uVar23;
          puVar27 = _Src + 2;
          puVar28 = puVar2 + 2;
          for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar28 = *puVar27;
            puVar27 = puVar27 + 1;
            puVar28 = puVar28 + 1;
          }
          *(int *)(puVar2 + 0xe) = (int)_Src[0xe];
          *(undefined4 *)((longlong)puVar2 + 0x74) = *(undefined4 *)((longlong)_Src + 0x74);
          *(char *)(puVar2 + 0xf) = (char)_Src[0xf];
          *(undefined1 *)((longlong)puVar2 + 0x79) = *(undefined1 *)((longlong)_Src + 0x79);
          *(undefined8 *)((longlong)puVar2 + 0x7c) = *(undefined8 *)((longlong)_Src + 0x7c);
          *(short *)(puVar2 + 0x12) = (short)_Src[0x12];
          puVar2[0x13] = 0;
          iVar26 = (int)_Src[0x14];
          uVar23 = _Src[0x13];
          *(int *)(puVar2 + 0x14) = iVar26;
          if (iVar26 == 0) {
            *(undefined4 *)(lVar11 + 0xa4) = 0;
          }
          else {
            puVar25 = (undefined8 *)(lVar15 + lVar14 + 0x98);
            FUN_140d27400(puVar25,iVar26,0);
            FUN_144796a68(*puVar25,uVar23,iVar26);
          }
          *(char *)(lVar11 + 0xa8) = (char)_Src[0x15];
          uVar23 = _Src[0x16];
          *(ulonglong *)(lVar11 + 0xb0) = uVar23;
          if (uVar23 != 0) {
            *(int *)(uVar23 + 0x108) = *(int *)(uVar23 + 0x108) + 1;
          }
          *(char *)(lVar11 + 0xb8) = (char)_Src[0x17];
        }
LAB_14094bbae:
        _Src = _Src + 0x18;
      } while (_Src != puVar22);
    }
    puVar8 = (uint *)(param_1 + 0x38);
    uVar21 = *(uint *)(param_1 + 0x50);
    local_70 = param_1;
    if (uVar21 == 0) {
      uVar30 = 1;
      iVar26 = 0;
      uVar23 = 0;
      uVar6 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar10 = puVar8;
      }
      uVar6 = *puVar10;
      if (uVar6 == 0) {
        iVar26 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar26 = uVar21 - 1;
        }
        uVar23 = 0;
        uVar30 = (ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          uVar30 = uVar23;
        }
        iVar26 = 0;
        do {
          if (uVar30 == uVar23) goto LAB_14094bca5;
          iVar26 = iVar26 + 0x20;
          uVar6 = puVar10[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar6 == 0);
      }
      else {
        iVar26 = 0;
        uVar23 = 0;
      }
      uVar30 = (ulonglong)(-uVar6 & uVar6);
      uVar9 = uVar30 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar6 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar21 <= (int)uVar6) {
        uVar6 = uVar21;
      }
    }
    if (uVar6 != uVar21) {
      uVar20 = 0xffffffff;
      local_90 = (uint *)(ulonglong)uVar21;
      local_78 = puVar8;
      do {
        local_80 = CONCAT44(local_80._4_4_,iVar26);
        lVar11 = *(longlong *)(param_1 + 0x28);
        plVar31 = (longlong *)(lVar11 + (longlong)(int)uVar6 * 0x28);
        lVar15 = plVar31[2];
        if (lVar15 == 0) {
          uVar13 = FUN_140067708();
          lVar15 = FUN_14477b664(uVar13);
          plVar31[2] = lVar15;
        }
        plVar29 = (longlong *)(lVar11 + (longlong)(int)uVar6 * 0x28 + 8);
        lVar11 = plVar31[3];
        if (lVar11 == 0) {
          if (lVar15 == 0) {
LAB_14094be6e:
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if (*plVar29 != 0) {
              plVar4 = *(longlong **)(lVar15 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
LAB_14094c0cc:
                lVar11 = 0;
LAB_14094be03:
                plVar31[3] = lVar11;
                puVar8 = local_78;
              }
              else {
                uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar11 = FUN_144aff482(uVar13,plVar29);
                plVar31[3] = lVar11;
                puVar8 = local_78;
                if (lVar11 != 0) {
                  lVar15 = plVar31[2];
                  goto LAB_14094bd83;
                }
                lVar11 = 0;
              }
            }
          }
        }
        else {
LAB_14094bd83:
          if (lVar15 == 0) {
            uVar13 = FUN_140067708();
            lVar15 = FUN_14477b664(uVar13);
            plVar31[2] = lVar15;
            lVar11 = plVar31[3];
            if (lVar11 == 0) {
              if (lVar15 == 0) goto LAB_14094be6e;
              lVar11 = 0;
              if (*plVar29 != 0) {
                plVar4 = *(longlong **)(lVar15 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0'))
                goto LAB_14094c0cc;
                uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar11 = FUN_144aff482(uVar13,plVar29);
                goto LAB_14094be03;
              }
            }
          }
        }
        local_68 = lVar11;
        FUN_140942716(&local_68);
        if ((local_68 != 0 & DAT_14cb26569) == 1) {
          lVar15 = *local_88;
          lVar11 = lVar15 + 0x1b0;
          FUN_140d07206(lVar11,&local_58);
          plVar29 = local_50;
          *local_50 = *plVar31;
          local_50[1] = local_68;
          FUN_140942716(local_50 + 1);
          *(undefined4 *)(plVar29 + 2) = 0xffffffff;
          local_5c = local_58._0_4_;
          lVar14 = *plVar29;
          uVar21 = (uint)((ulonglong)lVar14 >> 0x10);
          uVar6 = (uint)lVar14 & 0xffff;
          uVar21 = ((uint)lVar14 << 0x10 | uVar6) + (int)((ulonglong)lVar14 >> 0x20) +
                   (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar6 >> 4);
          local_98 = 0;
          cVar5 = FUN_140d06c5c(lVar11,uVar21,plVar29,&local_5c);
          puVar8 = local_78;
          if (cVar5 == '\0') {
            uVar6 = *(int *)(lVar15 + 0x1b8) - *(int *)(lVar15 + 0x1e4);
            iVar26 = 1;
            if (3 < uVar6) {
              uVar9 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
              lVar14 = 0x3f;
              if (uVar9 != 0) {
                for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar26 = 1 << ((byte)lVar14 & 0x1f);
            }
            if (((int)uVar6 < 1) || (iVar26 <= *(int *)(lVar15 + 0x1f8))) {
              uVar21 = *(int *)(lVar15 + 0x1f8) - 1U & uVar21;
              *(uint *)((longlong)plVar29 + 0x14) = uVar21;
              lVar11 = *(longlong *)(lVar15 + 0x1f0);
              if (*(longlong *)(lVar15 + 0x1f0) == 0) {
                lVar11 = lVar15 + 0x1e8;
              }
              *(undefined4 *)(plVar29 + 2) =
                   *(undefined4 *)
                    (lVar11 + ((longlong)*(int *)(lVar15 + 0x1f8) - 1U & (longlong)(int)uVar21) * 4)
              ;
              lVar11 = *(longlong *)(lVar15 + 0x1f0);
              if (*(longlong *)(lVar15 + 0x1f0) == 0) {
                lVar11 = lVar15 + 0x1e8;
              }
              *(undefined4 *)
               (lVar11 + ((longlong)*(int *)(lVar15 + 0x1f8) - 1U & (longlong)(int)uVar21) * 4) =
                   local_5c;
            }
            else {
              *(int *)(lVar15 + 0x1f8) = iVar26;
              FUN_140d074d6(lVar11);
              puVar8 = local_78;
            }
          }
        }
        if ((local_68 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_68 + 0x50));
        }
        uVar20 = uVar20 & ~(uint)uVar30;
        puVar10 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar10 = puVar8;
        }
        uVar21 = *(uint *)(param_1 + 0x50);
        iVar7 = (int)uVar23;
        lVar11 = (longlong)iVar7;
        uVar6 = puVar10[lVar11] & uVar20;
        iVar26 = (int)local_80;
        if (uVar6 == 0) {
          iVar24 = uVar21 + 0x1e;
          if (-1 < (int)(uVar21 - 1)) {
            iVar24 = uVar21 - 1;
          }
          iVar24 = iVar24 >> 5;
          iVar26 = (int)local_80 + 0x20;
          iVar16 = iVar24;
          if (iVar24 < iVar7) {
            iVar16 = iVar7;
          }
          if (iVar7 < iVar24) {
            lVar15 = 0;
            do {
              uVar6 = puVar10[lVar11 + lVar15 + 1];
              if (uVar6 != 0) {
                uVar23 = (ulonglong)(iVar7 + (int)lVar15 + 1);
                uVar20 = 0xffffffff;
                goto LAB_14094c082;
              }
              iVar26 = iVar26 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar16 - lVar11 != lVar15);
            uVar20 = 0xffffffff;
            iVar7 = iVar16;
          }
          uVar23 = (ulonglong)(iVar7 + 1);
          puVar8 = local_78;
          param_1 = local_70;
          uVar6 = uVar21;
        }
        else {
LAB_14094c082:
          uVar30 = (ulonglong)(-uVar6 & uVar6);
          uVar9 = uVar30 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar6 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if ((int)uVar21 <= (int)uVar6) {
            uVar6 = uVar21;
          }
        }
      } while (uVar6 != (uint)local_90);
    }
LAB_14094bca5:
    uVar21 = *(uint *)(param_1 + 0xa0);
    if (uVar21 == 0) {
      uVar23 = 1;
      uVar30 = 0;
      iVar26 = 0;
      uVar6 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x88);
      }
      uVar6 = *puVar8;
      if (uVar6 == 0) {
        iVar26 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar26 = uVar21 - 1;
        }
        uVar30 = 0;
        uVar23 = (ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          uVar23 = uVar30;
        }
        iVar26 = 0;
        do {
          if (uVar23 == uVar30) goto LAB_14094c0e8;
          iVar26 = iVar26 + 0x20;
          uVar6 = puVar8[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar30 = 0;
        iVar26 = 0;
      }
      uVar23 = (ulonglong)(-uVar6 & uVar6);
      uVar9 = uVar23 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar6 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar21 <= (int)uVar6) {
        uVar6 = uVar21;
      }
    }
    if (uVar6 != uVar21) {
      uVar20 = 0xffffffff;
      local_80 = (ulonglong)uVar21;
      do {
        lVar11 = *(longlong *)(local_70 + 0x78);
        puVar25 = (undefined8 *)(lVar11 + (longlong)(int)uVar6 * 0x28);
        lVar15 = puVar25[2];
        if (lVar15 == 0) {
          uVar13 = FUN_140067708();
          lVar15 = FUN_14477b664(uVar13);
          puVar25[2] = lVar15;
        }
        plVar31 = (longlong *)(lVar11 + (longlong)(int)uVar6 * 0x28 + 8);
        pcVar12 = (char *)puVar25[3];
        if (pcVar12 == (char *)0x0) {
          if (lVar15 == 0) {
LAB_14094c2b1:
            pcVar12 = (char *)0x0;
          }
          else {
            pcVar12 = (char *)0x0;
            if (*plVar31 != 0) {
              plVar29 = *(longlong **)(lVar15 + 0xb8);
              if ((plVar29 != (longlong *)0x0) &&
                 (cVar5 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar5 != '\0')) {
                uVar13 = (**(code **)(*plVar29 + 0x110))(plVar29);
                pcVar12 = (char *)FUN_144aff482(uVar13,plVar31);
                puVar25[3] = pcVar12;
                if (pcVar12 != (char *)0x0) {
                  lVar15 = puVar25[2];
                  goto LAB_14094c1cc;
                }
                goto LAB_14094c2b1;
              }
LAB_14094c416:
              pcVar12 = (char *)0x0;
LAB_14094c24b:
              puVar25[3] = pcVar12;
            }
          }
        }
        else {
LAB_14094c1cc:
          if (lVar15 == 0) {
            uVar13 = FUN_140067708();
            lVar11 = FUN_14477b664(uVar13);
            puVar25[2] = lVar11;
            pcVar12 = (char *)puVar25[3];
            if (pcVar12 == (char *)0x0) {
              if (lVar11 == 0) goto LAB_14094c2b1;
              pcVar12 = (char *)0x0;
              if (*plVar31 != 0) {
                plVar29 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar29 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar5 == '\0'))
                goto LAB_14094c416;
                uVar13 = (**(code **)(*plVar29 + 0x110))(plVar29);
                pcVar12 = (char *)FUN_144aff482(uVar13,plVar31);
                goto LAB_14094c24b;
              }
            }
          }
        }
        local_58 = pcVar12;
        FUN_140942716(&local_58);
        if ((local_58 != (char *)0x0 & DAT_14cb26569) == 1) {
          lVar11 = *local_88;
          iVar7 = *(int *)(lVar11 + 0x138);
          *(uint *)(lVar11 + 0x138) = iVar7 + 1U;
          if (*(uint *)(lVar11 + 0x13c) < iVar7 + 1U) {
            FUN_14181b05c((longlong *)(lVar11 + 0x130),iVar7);
          }
          puVar3 = (undefined8 *)(*(longlong *)(lVar11 + 0x130) + (longlong)iVar7 * 0x10);
          *puVar3 = *puVar25;
          puVar3[1] = local_58;
          FUN_140942716();
        }
        if ((local_58 != (char *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_58 + 0x50));
        }
        uVar20 = uVar20 & ~(uint)uVar23;
        puVar8 = *(uint **)(local_70 + 0x98);
        if (*(uint **)(local_70 + 0x98) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x88);
        }
        uVar21 = *(uint *)(local_70 + 0xa0);
        iVar7 = (int)uVar30;
        lVar11 = (longlong)iVar7;
        uVar6 = puVar8[lVar11] & uVar20;
        if (uVar6 == 0) {
          iVar24 = uVar21 + 0x1e;
          if (-1 < (int)(uVar21 - 1)) {
            iVar24 = uVar21 - 1;
          }
          iVar24 = iVar24 >> 5;
          iVar26 = iVar26 + 0x20;
          iVar16 = iVar24;
          if (iVar24 < iVar7) {
            iVar16 = iVar7;
          }
          if (iVar7 < iVar24) {
            lVar15 = 0;
            do {
              uVar6 = puVar8[lVar11 + lVar15 + 1];
              if (uVar6 != 0) {
                uVar30 = (ulonglong)(iVar7 + (int)lVar15 + 1);
                uVar20 = 0xffffffff;
                goto LAB_14094c3d2;
              }
              iVar26 = iVar26 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar16 - lVar11 != lVar15);
            uVar20 = 0xffffffff;
            iVar7 = iVar16;
          }
          uVar30 = (ulonglong)(iVar7 + 1);
          uVar6 = uVar21;
        }
        else {
LAB_14094c3d2:
          uVar23 = (ulonglong)(-uVar6 & uVar6);
          uVar9 = uVar23 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar6 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if ((int)uVar21 <= (int)uVar6) {
            uVar6 = uVar21;
          }
        }
      } while (uVar6 != (uint)local_80);
    }
LAB_14094c0e8:
    puVar8 = (uint *)(local_70 + 0x108);
    iVar26 = *(int *)(local_70 + 0x120);
    lVar11 = local_70;
    if (iVar26 == 0) {
      uVar30 = 1;
      uVar23 = 0;
      iVar24 = 0;
      iVar7 = 0;
    }
    else {
      puVar10 = *(uint **)(local_70 + 0x118);
      if (*(uint **)(local_70 + 0x118) == (uint *)0x0) {
        puVar10 = puVar8;
      }
      uVar21 = *puVar10;
      if (uVar21 == 0) {
        iVar7 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar7 = iVar26 + -1;
        }
        uVar23 = 0;
        uVar30 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar30 = uVar23;
        }
        iVar24 = 0;
        do {
          if (uVar30 == uVar23) goto LAB_14094c431;
          iVar24 = iVar24 + 0x20;
          uVar21 = puVar10[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar23 = 0;
        iVar24 = 0;
      }
      uVar30 = (ulonglong)(-uVar21 & uVar21);
      uVar9 = uVar30 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar7 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar26 <= iVar7) {
        iVar7 = iVar26;
      }
    }
    if (iVar7 != iVar26) {
      uVar21 = 0xffffffff;
      local_90 = puVar8;
      do {
        local_80 = CONCAT44(local_80._4_4_,iVar24);
        lVar15 = *(longlong *)(lVar11 + 0xf8);
        pcVar12 = (char *)(lVar15 + (longlong)iVar7 * 0x28);
        lVar14 = *(longlong *)(pcVar12 + 0x10);
        if (lVar14 == 0) {
          uVar13 = FUN_1407f787c();
          lVar14 = FUN_14477b664(uVar13);
          *(longlong *)(pcVar12 + 0x10) = lVar14;
          puVar8 = local_90;
        }
        plVar31 = (longlong *)(lVar15 + (longlong)iVar7 * 0x28 + 8);
        if (*(longlong *)(pcVar12 + 0x18) == 0) {
          if ((lVar14 != 0) && (*plVar31 != 0)) {
            plVar29 = *(longlong **)(lVar14 + 0xb8);
            if ((plVar29 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar5 == '\0')) {
              pcVar12[0x18] = '\0';
              pcVar12[0x19] = '\0';
              pcVar12[0x1a] = '\0';
              pcVar12[0x1b] = '\0';
              pcVar12[0x1c] = '\0';
              pcVar12[0x1d] = '\0';
              pcVar12[0x1e] = '\0';
              pcVar12[0x1f] = '\0';
              puVar8 = local_90;
            }
            else {
              uVar13 = (**(code **)(*plVar29 + 0x110))(plVar29);
              lVar15 = FUN_144aff482(uVar13,plVar31);
              *(longlong *)(pcVar12 + 0x18) = lVar15;
              puVar8 = local_90;
              if (lVar15 != 0) goto LAB_14094c627;
            }
          }
        }
        else {
LAB_14094c627:
          local_58 = pcVar12;
          local_50 = plVar31;
          FUN_147f83eca(*local_88 + 0x280,&local_68,&local_58);
          puVar8 = local_90;
        }
        uVar21 = uVar21 & ~(uint)uVar30;
        puVar10 = *(uint **)(lVar11 + 0x118);
        if (*(uint **)(lVar11 + 0x118) == (uint *)0x0) {
          puVar10 = puVar8;
        }
        iVar16 = *(int *)(lVar11 + 0x120);
        iVar7 = (int)uVar23;
        lVar15 = (longlong)iVar7;
        uVar6 = puVar10[lVar15] & uVar21;
        iVar24 = (int)local_80;
        if (uVar6 == 0) {
          iVar17 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar17 = iVar16 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar24 = (int)local_80 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar7) {
            iVar18 = iVar7;
          }
          if (iVar7 < iVar17) {
            lVar14 = 0;
            do {
              uVar6 = puVar10[lVar15 + lVar14 + 1];
              if (uVar6 != 0) {
                uVar23 = (ulonglong)(iVar7 + (int)lVar14 + 1);
                uVar21 = 0xffffffff;
                goto LAB_14094c5f0;
              }
              iVar24 = iVar24 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar18 - lVar15 != lVar14);
            uVar21 = 0xffffffff;
            iVar7 = iVar18;
          }
          uVar23 = (ulonglong)(iVar7 + 1);
          puVar8 = local_90;
          lVar11 = local_70;
          iVar7 = iVar16;
        }
        else {
LAB_14094c5f0:
          uVar30 = (ulonglong)(-uVar6 & uVar6);
          uVar9 = uVar30 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar7 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar16 <= iVar7) {
            iVar7 = iVar16;
          }
        }
      } while (iVar7 != iVar26);
    }
LAB_14094c431:
    lVar15 = *local_88;
    uVar21 = *(uint *)(lVar11 + 0xd0);
    if (uVar21 != 0) {
      iVar26 = *(int *)(lVar15 + 0x208);
      *(uint *)(lVar15 + 0x208) = iVar26 + uVar21;
      if ((uint)(*(int *)(lVar15 + 0x20c) - iVar26) < uVar21) {
        FUN_1407f7952((longlong *)(lVar15 + 0x200),iVar26);
      }
      FUN_1405bd383((longlong)iVar26 * 0x20 + *(longlong *)(lVar15 + 0x200),
                    *(undefined8 *)(lVar11 + 200),uVar21);
      lVar15 = *local_88;
    }
    uVar21 = *(uint *)(lVar11 + 0xe0);
    if (uVar21 != 0) {
      iVar26 = *(int *)(lVar15 + 0x218);
      *(uint *)(lVar15 + 0x218) = iVar26 + uVar21;
      if ((uint)(*(int *)(lVar15 + 0x21c) - iVar26) < uVar21) {
        FUN_1407f7a52((longlong *)(lVar15 + 0x210),iVar26);
      }
      FUN_1405bd624((longlong)iVar26 * 0x18 + *(longlong *)(lVar15 + 0x210),
                    *(undefined8 *)(lVar11 + 0xd8),uVar21);
      lVar15 = *local_88;
    }
    uVar21 = *(uint *)(lVar11 + 0xf0);
    if (uVar21 != 0) {
      iVar26 = *(int *)(lVar15 + 0x228);
      *(uint *)(lVar15 + 0x228) = iVar26 + uVar21;
      if ((uint)(*(int *)(lVar15 + 0x22c) - iVar26) < uVar21) {
        FUN_14644907a((longlong *)(lVar15 + 0x220),iVar26);
      }
      FUN_1412e9105((longlong)iVar26 * 0x100 + *(longlong *)(lVar15 + 0x220),
                    *(undefined8 *)(lVar11 + 0xe8),uVar21);
    }
  }
  plVar31 = (longlong *)local_88[1];
  if (plVar31 != (longlong *)0x0) {
    LOCK();
    plVar29 = plVar31 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)*plVar31)(plVar31);
      LOCK();
      piVar1 = (int *)((longlong)plVar31 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14094c78c FUN_14094c78c body=399 status=ok
// SIG undefined FUN_14094c78c(void)

void FUN_14094c78c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
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
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  int iVar23;
  longlong lVar24;
  
  if (param_3 != 0) {
    lVar24 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar24) = *(undefined4 *)(param_2 + 8 + lVar24);
      *(undefined8 *)(param_1 + lVar24) = *(undefined8 *)(param_2 + lVar24);
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar24);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(param_1 + 0x20 + lVar24) = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar24) = *(undefined8 *)(param_2 + 0x10 + lVar24);
      uVar22 = FUN_14477b664(*(undefined8 *)(param_2 + 0x18 + lVar24));
      uVar22 = FUN_14477b664(uVar22);
      *(undefined8 *)(param_1 + 0x18 + lVar24) = uVar22;
      *(undefined8 *)(param_1 + 0x20 + lVar24) = *(undefined8 *)(param_2 + 0x20 + lVar24);
      puVar3 = (undefined4 *)(param_2 + 0x28 + lVar24);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_1 + 0x28 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      *(undefined8 *)(param_1 + 0x48 + lVar24) = 0;
      puVar2 = (undefined8 *)(param_1 + 0x38 + lVar24);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(param_1 + 0x38 + lVar24) = *(undefined8 *)(param_2 + 0x38 + lVar24);
      uVar22 = FUN_14477b664(*(undefined8 *)(param_2 + 0x40 + lVar24));
      uVar22 = FUN_14477b664(uVar22);
      *(undefined8 *)(param_1 + 0x40 + lVar24) = uVar22;
      *(undefined8 *)(param_1 + 0x48 + lVar24) = *(undefined8 *)(param_2 + 0x48 + lVar24);
      uVar22 = *(undefined8 *)(param_2 + 0x50 + lVar24);
      *(undefined8 *)(param_1 + 0x55 + lVar24) = *(undefined8 *)(param_2 + 0x55 + lVar24);
      *(undefined8 *)(param_1 + 0x50 + lVar24) = uVar22;
      lVar5 = *(longlong *)(param_2 + 0x60 + lVar24);
      *(longlong *)(param_1 + 0x60 + lVar24) = lVar5;
      if ((lVar5 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        piVar6 = *(int **)(lVar5 + 0x50);
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar23 = 5;
        }
        else {
          if ((char)piVar6[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_14094c895;
          }
          iVar23 = 2;
        }
        LOCK();
        piVar6[2] = iVar23;
        UNLOCK();
      }
LAB_14094c895:
      lVar5 = param_1 + lVar24;
      lVar1 = param_2 + lVar24;
      *(undefined8 *)(lVar5 + 0x68) = 0;
      *(undefined8 *)(lVar5 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar1 + 0x70);
      uVar7 = *(undefined4 *)(lVar1 + 0x7c);
      uVar8 = *(undefined4 *)(lVar1 + 0x80);
      uVar9 = *(undefined4 *)(lVar1 + 0x84);
      uVar10 = *(undefined4 *)(lVar1 + 0x88);
      uVar11 = *(undefined4 *)(lVar1 + 0x8c);
      uVar12 = *(undefined4 *)(lVar1 + 0x90);
      uVar13 = *(undefined4 *)(lVar1 + 0x94);
      uVar14 = *(undefined4 *)(lVar1 + 0x98);
      uVar15 = *(undefined4 *)(lVar1 + 0x9c);
      uVar16 = *(undefined4 *)(lVar1 + 0xa0);
      uVar17 = *(undefined4 *)(lVar1 + 0xa4);
      uVar18 = *(undefined4 *)(lVar1 + 0xa8);
      uVar19 = *(undefined4 *)(lVar1 + 0xac);
      uVar20 = *(undefined4 *)(lVar1 + 0xb0);
      uVar21 = *(undefined4 *)(lVar1 + 0xb4);
      *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(lVar1 + 0x78);
      *(undefined4 *)(lVar5 + 0x7c) = uVar7;
      *(undefined4 *)(lVar5 + 0x80) = uVar8;
      *(undefined4 *)(lVar5 + 0x84) = uVar9;
      *(undefined4 *)(lVar5 + 0x88) = uVar10;
      *(undefined4 *)(lVar5 + 0x8c) = uVar11;
      *(undefined4 *)(lVar5 + 0x90) = uVar12;
      *(undefined4 *)(lVar5 + 0x94) = uVar13;
      *(undefined4 *)(lVar5 + 0x98) = uVar14;
      *(undefined4 *)(lVar5 + 0x9c) = uVar15;
      *(undefined4 *)(lVar5 + 0xa0) = uVar16;
      *(undefined4 *)(lVar5 + 0xa4) = uVar17;
      *(undefined4 *)(lVar5 + 0xa8) = uVar18;
      *(undefined4 *)(lVar5 + 0xac) = uVar19;
      *(undefined4 *)(lVar5 + 0xb0) = uVar20;
      *(undefined4 *)(lVar5 + 0xb4) = uVar21;
      lVar24 = lVar24 + 0xc0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14094c91b FUN_14094c91b body=123 status=ok
// SIG undefined FUN_14094c91b(void)

void FUN_14094c91b(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      puVar1 = (undefined8 *)(param_1 + 8 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar3) = 0;
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      uVar2 = FUN_14477b664(*(undefined8 *)(param_2 + 0x10 + lVar3));
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_1 + 0x10 + lVar3) = uVar2;
      *(undefined8 *)(param_1 + 0x18 + lVar3) = *(undefined8 *)(param_2 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14094c996 FUN_14094c996 body=44 status=ok
// SIG undefined FUN_14094c996(void)

undefined8 FUN_14094c996(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_14094c9c2(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 14094c9c2 FUN_14094c9c2 body=105 status=ok
// SIG undefined FUN_14094c9c2(void)

void FUN_14094c9c2(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14094ca78();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14094ca2c(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094ca2c FUN_14094ca2c body=76 status=ok
// SIG undefined FUN_14094ca2c(void)

void FUN_14094ca2c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14094ca78();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14094ca69;
    }
  }
  lVar2 = 0;
LAB_14094ca69:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14094ca78 FUN_14094ca78 body=228 status=ok
// SIG undefined FUN_14094ca78(void)

longlong FUN_14094ca78(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae8d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148c403b5;
    local_40 = FUN_1465ec0f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakShiftUISubsystem",&DAT_14cbae8d0,&DAT_148c403b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae8d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094cb5d FUN_14094cb5d body=24 status=ok
// SIG undefined FUN_14094cb5d(void)

undefined1 FUN_14094cb5d(char param_1)

{
  if ((byte)(param_1 + 1U) < 0xc) {
    return (&DAT_14b40b6c4)[(byte)(param_1 + 1U)];
  }
  return 0;
}



// FUNCTION 14094cb76 FUN_14094cb76 body=42 status=ok
// SIG undefined FUN_14094cb76(void)

void FUN_14094cb76(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) == 0) {
    *(char *)(param_1 + 0x191) = (char)param_3;
    *(undefined1 *)(param_1 + 0x192) = 1;
    return;
  }
  FUN_1465897f8(*(longlong *)(DAT_14cb98ab0 + 0x28),param_3);
  return;
}



// FUNCTION 14094cba0 FUN_14094cba0 body=38 status=ok
// SIG undefined FUN_14094cba0(void)

undefined8 FUN_14094cba0(undefined8 param_1,int param_2)

{
  FUN_14094cbc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14094cbc6 FUN_14094cbc6 body=275 status=ok
// SIG undefined FUN_14094cbc6(void)

void FUN_14094cbc6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a395230;
  plVar6 = (longlong *)param_1[0xd];
  if (plVar6 == (longlong *)0x0) goto LAB_14094cbe2;
  plVar5 = param_1 + 0xc;
  if (*plVar5 == 0) {
    lVar7 = 0;
LAB_14094cc72:
    *plVar6 = lVar7;
  }
  else {
    *(longlong **)(*plVar5 + 8) = plVar6;
    plVar6 = (longlong *)param_1[0xd];
    if (plVar6 != (longlong *)0x0) {
      lVar7 = *plVar5;
      goto LAB_14094cc72;
    }
  }
  *plVar5 = 0;
  param_1[0xd] = 0;
  FUN_140b49746();
  FUN_14094cda0(&DAT_14ca9edd8,param_1 + 5);
  if (param_1[9] != 0) {
    FUN_1402eeb06();
    FUN_14094ccda(&DAT_14ca9ed78,*(undefined4 *)(param_1[9] + 0x80));
  }
LAB_14094cbe2:
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  lVar7 = param_1[9];
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar7;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar8) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar8 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar8) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 14094ccda FUN_14094ccda body=104 status=ok
// SIG undefined FUN_14094ccda(void)

undefined8 FUN_14094ccda(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14094cd42(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14094cd42 FUN_14094cd42 body=93 status=ok
// SIG undefined FUN_14094cd42(void)

void FUN_14094cd42(longlong *param_1,int param_2)

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
  FUN_14094cefe(param_1,param_2,1);
  return;
}



// FUNCTION 14094cda0 FUN_14094cda0 body=122 status=ok
// SIG undefined FUN_14094cda0(void)

undefined8 FUN_14094cda0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == lVar2) {
          FUN_14094ce1a();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14094ce1a FUN_14094ce1a body=91 status=ok
// SIG undefined FUN_14094ce1a(void)

void FUN_14094ce1a(longlong *param_1,int param_2)

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
  FUN_14094ce76(param_1,param_2,1);
  return;
}



// FUNCTION 14094ce76 FUN_14094ce76 body=136 status=ok
// SIG undefined FUN_14094ce76(void)

void FUN_14094ce76(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14094cefe FUN_14094cefe body=138 status=ok
// SIG undefined FUN_14094cefe(void)

void FUN_14094cefe(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14094cf88 FUN_14094cf88 body=21 status=ok
// SIG undefined FUN_14094cf88(void)

undefined8 FUN_14094cf88(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14094cf9e FUN_14094cf9e body=1843 status=ok
// SIG undefined FUN_14094cf9e(void)

/* WARNING: Removing unreachable block (ram,0x00014094d568) */
/* WARNING: Removing unreachable block (ram,0x00014094d586) */

void FUN_14094cf9e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  byte bVar8;
  undefined8 *_Src;
  undefined8 uVar9;
  undefined *puVar10;
  byte bVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_b8 [40];
  char local_90 [8];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68 [2];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_2 == 0) || (*param_2 != *(longlong *)(param_1 + 0xe8))) goto LAB_14094d11e;
  cVar4 = *(char *)(param_1 + 0x78);
  if (cVar4 == '\x03') {
    bVar8 = *(byte *)(param_1 + 0x120);
  }
  else {
    bVar8 = 1;
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        bVar8 = *(byte *)(param_1 + 0x120) ^ 1;
      }
      else {
        bVar8 = 0;
      }
    }
  }
  *(byte *)(*(longlong *)(param_1 + 0xe8) + 0xc70) = bVar8;
  plVar2 = (longlong *)(param_1 + 0xf8);
  FUN_14094d6d2(param_1,plVar2);
  lVar17 = *(longlong *)(param_1 + 0xe8);
  iVar5 = *(int *)(lVar17 + 0x4f0);
  if (((longlong)iVar5 < 0) || (*(int *)(lVar17 + 0x880) <= iVar5)) {
LAB_14094d05c:
    local_48 = 0;
    local_40 = 0;
  }
  else {
    lVar14 = lVar17 + 0x4f8;
    if (*(longlong *)(lVar17 + 0x878) != 0) {
      lVar14 = *(longlong *)(lVar17 + 0x878);
    }
    puVar12 = (undefined8 *)((longlong)iVar5 * 0x38 + lVar14);
    if (puVar12 == (undefined8 *)0x0) goto LAB_14094d05c;
    bVar8 = *(byte *)(puVar12 + 4);
    local_48 = *(ushort *)(puVar12 + 3);
    if (local_48 < 0x19) {
      ppppuVar6 = local_60;
      _Src = puVar12;
    }
    else {
      ppppuVar6 = (undefined8 ****)FUN_14001cc68(local_48,0);
      _Src = (undefined8 *)*puVar12;
      local_60[0] = ppppuVar6;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar8 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(ppppuVar6,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar8 * 0x120)));
    }
    else {
      (*pcVar3)();
    }
    local_40 = *(byte *)(puVar12 + 4);
    lVar17 = *(longlong *)(param_1 + 0xe8);
  }
  bVar11 = local_40;
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(lVar17 + 0x898);
  *(undefined4 *)(param_1 + 0x130) = 1;
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar17 + 0x4f0);
  bVar8 = *(byte *)(param_1 + 0x118);
  if (local_40 == bVar8) {
    plVar7 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x110)) {
      plVar7 = *(longlong **)(param_1 + 0xf8);
    }
    ppppuVar6 = (undefined8 ****)local_60[0];
    if (local_48 < 0x19) {
      ppppuVar6 = local_60;
    }
    if (*(code **)(&DAT_14c9a85e0 + (uint)local_40 * 0x120) == (code *)0x0) {
      iVar5 = memcmp(ppppuVar6,plVar7,
                     (longlong)
                     *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)local_40 * 0x120)));
      if (iVar5 != 0) goto LAB_14094d1c0;
    }
    else {
      cVar4 = (**(code **)(&DAT_14c9a85e0 + (uint)local_40 * 0x120))();
      bVar11 = local_40;
      if (cVar4 == '\0') {
        bVar8 = *(byte *)(param_1 + 0x118);
        goto LAB_14094d1bc;
      }
    }
  }
  else {
LAB_14094d1bc:
    bVar11 = local_40;
    if (bVar8 == local_40) {
LAB_14094d1c0:
      ppppuVar6 = (undefined8 ****)local_60[0];
      if (local_48 < 0x19) {
        ppppuVar6 = local_60;
      }
      plVar7 = plVar2;
      if (0x18 < *(ushort *)(param_1 + 0x110)) {
        plVar7 = (longlong *)*plVar2;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + (ulonglong)((uint)bVar11 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(plVar7,ppppuVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar11 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        plVar7 = plVar2;
        if (0x18 < *(ushort *)(param_1 + 0x110)) {
          plVar7 = (longlong *)*plVar2;
        }
        (*pcVar3)(plVar7);
      }
      if (0x18 < *(ushort *)(param_1 + 0x110)) {
        FUN_1400020a8(*plVar2);
      }
      uVar16 = (uint)local_40;
      *(ushort *)(param_1 + 0x110) = local_48;
      if (local_48 < 0x19) {
        ppppuVar6 = local_60;
        plVar7 = plVar2;
      }
      else {
        plVar7 = (longlong *)FUN_14001cc68(local_48,0);
        *plVar2 = (longlong)plVar7;
        ppppuVar6 = (undefined8 ****)local_60[0];
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar16 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(plVar7,ppppuVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar16 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(byte *)(param_1 + 0x118) = local_40;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_14094d595:
      uVar9 = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x18);
      uVar9 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x1c) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_14094d595;
        uVar9 = *puVar12;
      }
    }
    cVar4 = *(char *)(param_1 + 0xb8);
    if (cVar4 == '\x01') {
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        local_68[0] = 0;
        local_90[0] = '\x02';
        uVar16 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0xc);
        local_88 = (ulonglong)uVar16;
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar5 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar5 = *(int *)(lVar17 + 0x10);
          bVar18 = iVar5 == 0;
          if (bVar18) {
            *(int *)(lVar17 + 0x10) = iVar13;
            iVar5 = 0;
          }
          UNLOCK();
          uVar16 = (uint)local_88;
          if (bVar18) {
            iVar5 = iVar13;
          }
        }
        local_88._0_4_ = uVar16;
        local_88 = CONCAT44(iVar5,(uint)local_88);
        goto LAB_14094d3fa;
      }
LAB_14094d32f:
      local_90[0] = '\0';
      local_68[0] = 0;
      FUN_1456bb102(local_90,uVar9);
    }
    else {
      if (cVar4 == '\x02') {
        if (((((*(int *)(param_1 + 0xc4) != 0) &&
              (uVar16 = *(uint *)(param_1 + 0xc0), -1 < (int)uVar16)) &&
             ((int)uVar16 < DAT_14c9647dc)) &&
            ((lVar17 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar17 != 0
             && (*(int *)(lVar17 + 0x10) == *(int *)(param_1 + 0xc4))))) &&
           ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)) {
          local_68[0] = 0;
          local_90[0] = '\x02';
          local_88 = *(longlong *)(param_1 + 0xc0);
          goto LAB_14094d3fa;
        }
        goto LAB_14094d32f;
      }
      if (((cVar4 != '\x03') || (lVar17 = *(longlong *)(param_1 + 0xc0), lVar17 == 0)) ||
         ((plVar7 = *(longlong **)(param_1 + 200), plVar7 == (longlong *)0x0 || ((int)plVar7[1] < 1)
          ))) goto LAB_14094d32f;
      local_68[0] = 0;
      local_90[0] = '\x03';
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      local_78 = *(undefined8 *)(param_1 + 0xd0);
      local_70 = *(undefined1 *)(param_1 + 0xd8);
      local_88 = lVar17;
      local_80 = plVar7;
LAB_14094d3fa:
      FUN_14495544a(local_68,param_1 + 0xe0);
    }
    if (*(code **)(&DAT_14c9a8610 + (uint)*(byte *)(param_1 + 0xa8) * 0x120) != (code *)0x0) {
      (**(code **)(&DAT_14c9a8610 + (uint)*(byte *)(param_1 + 0xa8) * 0x120))
                (param_1 + 0x88,local_90,plVar2);
    }
    lVar17 = DAT_14c9a3da0;
    if ((longlong)local_68[0] != 0) {
      lVar14 = (longlong)local_68[0] + -1;
      lVar15 = lVar14 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
      if (*(longlong *)(lVar17 + lVar15) != 0) {
        FUN_1400020a8();
      }
      lVar17 = DAT_14c9a3da0;
      iVar5 = (int)lVar14;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
      }
      *(undefined4 *)(lVar17 + lVar15) = 0xffffffff;
      iVar13 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar13 = DAT_14c9a3dd0;
      }
      *(int *)(lVar17 + 4 + lVar15) = iVar13;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar13 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar13 = iVar5;
      }
      bVar8 = (byte)lVar14 & 0x1f;
      DAT_14c9a3dd0 = iVar5;
      *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      local_68[0] = 0;
    }
    bVar11 = local_40;
    if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
        bVar11 = local_40;
      }
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar11 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar6 = (undefined8 ****)local_60[0];
    if (local_48 < 0x19) {
      ppppuVar6 = local_60;
    }
    (*pcVar3)(ppppuVar6);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
LAB_14094d11e:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094d6d2 FUN_14094d6d2 body=162 status=ok
// SIG undefined FUN_14094d6d2(void)

void FUN_14094d6d2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14094d75f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14094d75f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14094d782 FUN_14094d782 body=40 status=ok
// SIG undefined FUN_14094d782(void)

undefined8 FUN_14094d782(undefined8 param_1,int param_2)

{
  FUN_14094d7aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14094d7aa FUN_14094d7aa body=137 status=ok
// SIG undefined FUN_14094d7aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14094d7aa(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3d9970;
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x00014094d825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14094d83e FUN_14094d83e body=262 status=ok
// SIG undefined FUN_14094d83e(void)

undefined8 * FUN_14094d83e(undefined8 *param_1)

{
  FUN_14094d944();
  *param_1 = &PTR_FUN_14a7f7c40;
  param_1[0x4a] = &PTR_FUN_14a7f8040;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x71));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x71),4000);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(byte *)((longlong)param_1 + 0x25c) = *(byte *)((longlong)param_1 + 0x25c) & 0xfc;
  return param_1;
}



// FUNCTION 14094d944 FUN_14094d944 body=668 status=ok
// SIG undefined FUN_14094d944(void)

undefined8 * FUN_14094d944(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_149e70a50;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  if (DAT_14c927740 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_146856450;
    local_70 = FUN_1427b121c;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000021;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  lVar1 = DAT_14c927740;
  param_1[0x1c] = DAT_14c927740;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2f));
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x3a));
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094dbe2 FUN_14094dbe2 body=132 status=ok
// SIG undefined FUN_14094dbe2(void)

void FUN_14094dbe2(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400e9bba();
  *(undefined8 *)(param_1 + 0x8f8) = *(undefined8 *)(param_2 + 0x438);
  FUN_14094dc68(param_2,&local_22);
  if ((local_21 & 1) == 0) {
    if (*(char *)(param_1 + 0x621) != '\x01') goto LAB_14094dc30;
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x620) = local_22;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x621) = uVar1;
LAB_14094dc30:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094dc68 FUN_14094dc68 body=364 status=ok
// SIG undefined FUN_14094dc68(void)

undefined1 * FUN_14094dc68(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar2 = *(int *)(DAT_14cad2858 + 0x38);
    if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) == DAT_14cad2858 + 0x30)) {
      FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),1);
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  cVar1 = *(char *)(lVar3 + 0x621);
  param_2[1] = cVar1;
  if (cVar1 == '\x01') {
    *param_2 = *(undefined1 *)(lVar3 + 0x620);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094ddd6 FUN_14094ddd6 body=755 status=ok
// SIG undefined FUN_14094ddd6(void)

void FUN_14094ddd6(int *param_1,char param_2,longlong *param_3,longlong *param_4,float param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_c8 [40];
  int *local_a0;
  undefined1 local_91;
  longlong local_90;
  longlong *local_88;
  undefined1 *local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_3[1] != 0) {
    plVar9 = (longlong *)*param_3;
    plVar7 = plVar9 + (longlong)(int)param_3[1] * 6;
    local_a0 = param_1 + 0x1c;
    do {
      if (((plVar9[4] != 0) && (local_90 = plVar9[2], local_90 != 0)) &&
         ((param_2 != '\0' || (*(char *)(local_90 + 0xa2) == '\x01')))) {
        fVar11 = *(float *)(local_90 + 0x38);
        if ((fVar11 <= param_5) &&
           ((*(char *)(local_90 + 0x98) != '\x01' || (*param_1 < *(int *)(local_90 + 0x9c))))) {
          if ((*(longlong *)(local_90 + 0x50) != 0) ||
             (uVar6 = param_1[2] * 0xbb38435 + 0x3619636b, param_1[2] = uVar6,
             (float)(uVar6 >> 9 | 0x3f800000) + -1.0 < *(float *)(local_90 + 0x94))) {
            if (((*(char *)(local_90 + 0xa0) == '\x01') &&
                (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
               (lVar10 = plVar2[1], (longlong)(int)lVar10 != 0)) {
              lVar3 = *plVar2;
              lVar8 = 0;
              do {
                plVar2 = *(longlong **)(lVar3 + lVar8);
                (**(code **)(*plVar2 + 8))(plVar2,&local_88);
                if (local_88 == DAT_14cacb91c) {
                  plVar2 = *(longlong **)(lVar3 + lVar8);
                  if ((plVar2 != (longlong *)0x0) &&
                     (cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,plVar9), cVar5 != '\0'))
                  goto LAB_14094dfd9;
                  break;
                }
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)lVar10 * 8 != lVar8);
            }
            if (*(longlong *)(local_90 + 0x50) == 0) {
              iVar1 = (int)param_4[1];
              *(uint *)(param_4 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
                FUN_140166dde(param_4,iVar1);
              }
              lVar10 = *param_4;
              lVar8 = (longlong)iVar1 * 0x30;
              *(longlong *)(lVar10 + lVar8) = *plVar9;
              lVar3 = plVar9[1];
              *(longlong *)(lVar10 + 8 + lVar8) = lVar3;
              if (lVar3 != 0) {
                LOCK();
                *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                UNLOCK();
              }
              lVar10 = lVar10 + lVar8;
              *(longlong *)(lVar10 + 0x10) = plVar9[2];
              lVar3 = plVar9[3];
              *(longlong *)(lVar10 + 0x18) = lVar3;
              if ((lVar3 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              bVar4 = DAT_14c950c29;
              lVar3 = plVar9[4];
              *(longlong *)(lVar10 + 0x20) = lVar3;
              if ((lVar3 != 0 & bVar4) == 1) {
                FUN_1456cec3c();
              }
              *(undefined1 *)(lVar10 + 0x2c) = *(undefined1 *)((longlong)plVar9 + 0x2c);
              *(int *)(lVar10 + 0x28) = (int)plVar9[5];
            }
            else {
              FUN_140210480(param_4,plVar9);
            }
            goto LAB_14094dfd9;
          }
          fVar11 = *(float *)(local_90 + 0x38);
        }
        if ((fVar11 <= param_5) || (*(longlong *)(local_90 + 0x50) == 0)) {
          if ((*(char *)(local_90 + 0x98) != '\x01') ||
             ((*param_1 < *(int *)(local_90 + 0x9c) || (*(longlong *)(local_90 + 0x50) == 0))))
          goto LAB_14094dfd9;
          local_91 = 3;
        }
        else {
          local_91 = 2;
        }
        local_88 = &local_90;
        local_80 = &local_91;
        FUN_1479344c0(local_a0,local_74,&local_88);
      }
LAB_14094dfd9:
      plVar9 = plVar9 + 6;
    } while (plVar9 != plVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14094e0ca FUN_14094e0ca body=311 status=ok
// SIG undefined FUN_14094e0ca(void)

void FUN_14094e0ca(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((*(byte *)(param_1 + 0x31) & 4) == 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) ||
     (lVar1 = **(longlong **)(param_1 + 0x1b0), lVar1 == 0)) {
    if (param_3 == '\0') {
      uVar3 = FUN_14094e201(param_1,param_2,param_4 & 0xffffffff);
      param_4 = (ulonglong)uVar3;
    }
  }
  else {
    lVar4 = lVar1 + 8;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x88);
    }
    if ((longlong)*(int *)(lVar1 + 0x90) != 0) {
      uVar8 = 0;
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar4 + uVar8) == param_2) {
          if ((int)(~uVar8 >> 5) != 0) {
            lVar7 = (lVar6 >> 0x20) * 0x20;
            lVar6 = *(longlong *)(lVar4 + 0x10 + lVar7);
            if (lVar6 == 0) goto LAB_14094e172;
            if ((*(int *)(lVar6 + 0x48) != 0) &&
               (plVar5 = *(longlong **)(lVar6 + 0x40), plVar5 != (longlong *)0x0)) {
              (**(code **)(*plVar5 + 0x60))(plVar5,param_1);
              lVar6 = *(longlong *)(lVar4 + lVar7 + 0x10);
            }
            if ((*(int *)(lVar6 + 0x38) != 0) && (*(longlong **)(lVar6 + 0x30) != (longlong *)0x0))
            {
              cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x30))();
              if (cVar2 != '\0') {
                if (*(int *)(lVar6 + 0x38) == 0) {
                  plVar5 = (longlong *)0x0;
                }
                else {
                  plVar5 = *(longlong **)(lVar6 + 0x30);
                }
                uVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
                goto LAB_14094e16f;
              }
            }
            param_4 = CONCAT71((int7)(param_4 >> 8),*(undefined1 *)(lVar6 + 0x28));
            goto LAB_14094e172;
          }
          break;
        }
        lVar6 = lVar6 + 0x100000000;
        uVar8 = uVar8 + 0x20;
      } while ((longlong)*(int *)(lVar1 + 0x90) * 0x20 != uVar8);
    }
    if (param_3 == '\0') {
      uVar3 = FUN_14094e201(param_1,param_2,param_4 & 0xffffffff);
LAB_14094e16f:
      param_4 = (ulonglong)uVar3;
    }
LAB_14094e172:
    param_4 = CONCAT71((int7)(param_4 >> 8),(byte)param_4 | *(byte *)(lVar1 + 0x98));
    *(undefined1 *)(lVar1 + 0x98) = 0;
  }
  FUN_140163244(param_1,param_4 & 0xffffffff);
  return;
}



// FUNCTION 14094e201 FUN_14094e201 body=178 status=ok
// SIG undefined FUN_14094e201(void)

ulonglong FUN_14094e201(longlong *param_1,int param_2,uint param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))();
  if ((longlong)(int)plVar2[1] != 0) {
    lVar5 = *plVar2;
    lVar3 = (longlong)(int)plVar2[1] * 0x58;
    do {
      if ((*(int *)(lVar5 + 8) == param_2 - (int)param_1) && (*(char *)(lVar5 + 0x50) == '\0')) {
        if (lVar5 == 0) {
          return (ulonglong)param_3;
        }
        if ((*(int *)(lVar5 + 0x48) != 0) &&
           (plVar2 = *(longlong **)(lVar5 + 0x40), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
        }
        if (((*(int *)(lVar5 + 0x38) != 0) && (*(longlong **)(lVar5 + 0x30) != (longlong *)0x0)) &&
           (cVar1 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x30))(), cVar1 != '\0')) {
          if (*(int *)(lVar5 + 0x38) == 0) {
            plVar2 = (longlong *)0x0;
          }
          else {
            plVar2 = *(longlong **)(lVar5 + 0x30);
          }
                    /* WARNING: Could not recover jumptable at 0x00014094e2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
          return uVar4;
        }
        return (ulonglong)CONCAT31((int3)(param_3 >> 8),*(undefined1 *)(lVar5 + 0x28));
      }
      lVar5 = lVar5 + 0x58;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  return (ulonglong)param_3;
}



// FUNCTION 14094e2ba FUN_14094e2ba body=186 status=ok
// SIG undefined FUN_14094e2ba(void)

undefined8 * FUN_14094e2ba(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98de70) {
    FUN_144b3d300(&DAT_14c98de70);
    if (DAT_14c98de70 == -1) {
      FUN_1446ddc76(local_18,"SOverlay",1);
      FUN_145c2843e(&DAT_14c98de38);
      atexit(FUN_142879f25);
      _Init_thread_footer(&DAT_14c98de70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c98de38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094e376 FUN_14094e376 body=758 status=ok
// SIG undefined FUN_14094e376(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14094e376(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  int local_34;
  ulonglong local_30;
  ulonglong uVar12;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar10 = *(int *)(param_1 + 0x20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa61c) {
    FUN_144b3d300(&DAT_14caaa61c);
    if (DAT_14caaa61c == -1) {
      _DAT_14caaa610 = 0;
      DAT_14caaa618 = -1;
      _Init_thread_footer(&DAT_14caaa61c);
    }
  }
  if (DAT_14caaa618 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa628) {
      FUN_144b3d300(&DAT_14caaa628);
      if (DAT_14caaa628 == -1) {
        FUN_1446ddc76(&DAT_14caaa620,"ActiveChildIndex",1);
        _Init_thread_footer(&DAT_14caaa628);
      }
    }
    if (DAT_14caaa120 == 0) {
      uVar7 = FUN_140c6b56d();
      DAT_14caaa120 = FUN_140002ddd(FUN_1463307df,uVar7,L"AnimNode_BlendListByInt");
    }
    FUN_14094e66e(&local_3c,DAT_14caaa620,param_1,DAT_14caaa120);
    DAT_14caaa618 = local_34;
    _DAT_14caaa610 = local_3c;
  }
  plVar9 = *(longlong **)(param_1 + 8);
  lVar8 = *plVar9;
  uVar1 = *(uint *)(plVar9[2] + (longlong)DAT_14caaa618 * 4);
  uVar11 = uVar1 & 0x7fffffff;
  uVar12 = (ulonglong)uVar11;
  if ((int)uVar1 < 0) {
    if (lVar8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)plVar9[1];
    }
    lVar5 = plVar9[4];
    if (*(code **)(*plVar6 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar6 = plVar6 + 0x12;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
      lVar8 = *plVar9;
    }
    if (lVar8 == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)plVar9[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar6 + (longlong)(int)lVar5 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar9 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar8 = *(longlong *)(plVar9[0x42] + uVar12 * 8);
      pcVar2 = *(code **)(*plVar9 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar9[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar9[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar9,param_1);
      }
      piVar4 = (int *)(*(int *)(lVar8 + 0x44) + param_1);
    }
    else {
      piVar4 = (int *)(*pcVar2)(plVar9,uVar12,param_1);
    }
  }
  else {
    if (lVar8 == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)plVar9[1];
    }
    pcVar2 = *(code **)(*plVar9 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar8 = *(longlong *)(plVar9[0x44] + (ulonglong)uVar11 * 8);
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar5 = plVar9[-0x53];
      }
      else {
        lVar5 = (*pcVar2)();
      }
      piVar4 = (int *)(*(int *)(lVar8 + 0x44) + lVar5);
    }
    else {
      piVar4 = (int *)(*pcVar2)(plVar9,uVar12);
    }
  }
  iVar10 = iVar10 + -1;
  if (*piVar4 < iVar10) {
    iVar10 = *piVar4;
  }
  iVar3 = 0;
  if (0 < iVar10) {
    iVar3 = iVar10;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094e66e FUN_14094e66e body=72 status=ok
// SIG undefined FUN_14094e66e(void)

undefined8 *
FUN_14094e66e(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = param_2;
  plVar2 = *(longlong **)(param_3 + 8);
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)plVar2[1];
    }
    uVar1 = (**(code **)(*plVar2 + 0x130))(plVar2,param_4,param_2);
    *(undefined4 *)(param_1 + 1) = uVar1;
  }
  return param_1;
}



// FUNCTION 14094e6b6 FUN_14094e6b6 body=40 status=ok
// SIG undefined FUN_14094e6b6(void)

undefined8 FUN_14094e6b6(undefined8 param_1,int param_2)

{
  FUN_14094e6de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14094e6de FUN_14094e6de body=420 status=ok
// SIG undefined FUN_14094e6de(void)

void FUN_14094e6de(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a4ce980;
  param_1[8] = &PTR_FUN_14a4cec60;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  puVar1 = param_1 + 9;
  lVar2 = FUN_1409ca440(param_1 + 0x37);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x28), lVar2 != 0)) {
    FUN_140457ffc(lVar2 + 0x658,puVar1);
    FUN_140457ffc(lVar2 + 0x670,puVar1);
    FUN_140457ffc(lVar2 + 0x688,puVar1);
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_14094e980(param_1 + 0x27);
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14094e8f2(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14094e882(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14094e8ba(puVar1);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14094e882 FUN_14094e882 body=55 status=ok
// SIG undefined FUN_14094e882(void)

void FUN_14094e882(longlong *param_1)

{
  FUN_14094e9d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14094e8ba FUN_14094e8ba body=55 status=ok
// SIG undefined FUN_14094e8ba(void)

void FUN_14094e8ba(longlong *param_1)

{
  FUN_14094ea52(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14094e8f2 FUN_14094e8f2 body=53 status=ok
// SIG undefined FUN_14094e8f2(void)

void FUN_14094e8f2(longlong *param_1)

{
  FUN_14094e928();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14094e928 FUN_14094e928 body=88 status=ok
// SIG undefined FUN_14094e928(void)

void FUN_14094e928(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14094e980 FUN_14094e980 body=88 status=ok
// SIG undefined FUN_14094e980(void)

void FUN_14094e980(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14094e9d8 FUN_14094e9d8 body=121 status=ok
// SIG undefined FUN_14094e9d8(void)

void FUN_14094e9d8(longlong param_1,int param_2)

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



// FUNCTION 14094ea52 FUN_14094ea52 body=121 status=ok
// SIG undefined FUN_14094ea52(void)

void FUN_14094ea52(longlong param_1,int param_2)

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



// FUNCTION 14094eacc FUN_14094eacc body=370 status=ok
// SIG undefined FUN_14094eacc(void)

undefined8 * FUN_14094eacc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14094ec72 FUN_14094ec72 body=393 status=ok
// SIG undefined FUN_14094ec72(void)

void FUN_14094ec72(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  FUN_1403dff72(param_1 + 800);
  *(undefined4 *)(param_1 + 800) = param_2;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34c) = param_2;
  *(undefined4 *)(param_1 + 0x354) = param_2;
  *(undefined1 *)(param_1 + 0x350) = 1;
  *(undefined1 *)(param_1 + 0x358) = 0;
  lVar3 = *(longlong *)(param_1 + 0x480);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x324) = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x40) < 1) {
      *(undefined4 *)(param_1 + 0x324) = 0xbf800000;
    }
    else {
      uVar4 = FUN_14055830e(*(undefined8 *)(lVar3 + 0x38));
      lVar3 = *(longlong *)(param_1 + 0x480);
      *(undefined4 *)(param_1 + 0x324) = uVar4;
      if (lVar3 == 0) {
        return;
      }
    }
    *(byte *)(param_1 + 0x39c) =
         *(byte *)(param_1 + 0x39c) & 0xfd | *(byte *)(lVar3 + 0x55) >> 1 & 2;
    if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x38);
      lVar3 = (longlong)*(int *)(lVar3 + 0x40) * 0x88;
      do {
        uVar4 = FUN_14055830e(lVar2);
        iVar1 = *(int *)(param_1 + 0x330);
        *(uint *)(param_1 + 0x330) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x334) < iVar1 + 1U) {
          FUN_14475e4ac(param_1 + 0x328,iVar1);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x328) + (longlong)iVar1 * 4) = uVar4;
        iVar1 = *(int *)(param_1 + 0x368);
        *(uint *)(param_1 + 0x368) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x36c) < iVar1 + 1U) {
          FUN_14475e4ac((longlong *)(param_1 + 0x360),iVar1);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x360) + (longlong)iVar1 * 4) = 0;
        lVar2 = lVar2 + 0x88;
        lVar3 = lVar3 + -0x88;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 14094edfc FUN_14094edfc body=210 status=ok
// SIG undefined FUN_14094edfc(void)

void FUN_14094edfc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  FUN_14094f6bc();
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x88);
    lVar7 = (longlong)*(int *)(param_1 + 0x90) * 0x18;
    do {
      lVar5 = plVar6[1];
      if (lVar5 == 0) {
        uVar3 = FUN_140c1c194();
        lVar5 = FUN_14477b664(uVar3);
        plVar6[1] = lVar5;
      }
      lVar4 = plVar6[2];
      if (lVar4 == 0) {
        if ((lVar5 != 0) && (*plVar6 != 0)) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar6[2] = 0;
          }
          else {
            uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar4 = FUN_144aff482(uVar3,plVar6);
            plVar6[2] = lVar4;
            if (lVar4 != 0) goto LAB_14094ee41;
          }
        }
      }
      else {
LAB_14094ee41:
        FUN_14094eece(param_2,lVar4);
      }
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14094eece FUN_14094eece body=1317 status=ok
// SIG undefined FUN_14094eece(void)

void FUN_14094eece(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  
  iVar5 = DAT_14cb71108;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) goto LAB_14094f149;
  lVar12 = (longlong)(int)DAT_14cb71108;
  if (0 < lVar12) {
    puVar7 = DAT_14cb71100;
    if (DAT_14cb71100 == (undefined8 *)0x0) {
      puVar7 = &DAT_14cb710e0;
    }
    lVar11 = 0;
    do {
      if (*(longlong **)((longlong)puVar7 + lVar11) == param_2) goto LAB_14094f149;
      lVar11 = lVar11 + 8;
    } while (lVar12 * 8 - lVar11 != 0);
  }
  DAT_14cb71108 = DAT_14cb71108 + 1;
  if (DAT_14cb7110c < DAT_14cb71108) {
    FUN_145759c6e(iVar5);
  }
  puVar7 = &DAT_14cb710e0;
  if (DAT_14cb71100 != (undefined8 *)0x0) {
    puVar7 = DAT_14cb71100;
  }
  puVar7[lVar12] = param_2;
  cVar6 = FUN_14094f774(param_1,param_2);
  if (cVar6 != '\0') {
    iVar5 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
      FUN_14094fc1e((longlong *)(param_1 + 0x30),iVar5);
    }
    lVar12 = *(longlong *)(param_1 + 0x30);
    plVar3 = (longlong *)(lVar12 + (longlong)iVar5 * 0x50);
    FUN_14094f3f4(plVar3);
    *(longlong **)(lVar12 + (longlong)iVar5 * 0x50) = param_2;
    puVar13 = &DAT_14caa8558;
    puVar7 = &DAT_14caa8558;
    if ((int)(uint)*(byte *)(param_2 + 8) < *(int *)(DAT_14cb71140 + 0x3b8)) {
      puVar7 = (undefined8 *)
               ((ulonglong)*(byte *)(param_2 + 8) * 0x20 + *(longlong *)(DAT_14cb71140 + 0x3b0));
    }
    local_70 = plVar3 + 2;
    FUN_1403de7ba(local_70,puVar7);
    if ((int)(uint)*(byte *)((longlong)param_2 + 0x41) < *(int *)(DAT_14cb71140 + 0x3b8)) {
      puVar13 = (undefined8 *)
                ((ulonglong)*(byte *)((longlong)param_2 + 0x41) * 0x20 +
                *(longlong *)(DAT_14cb71140 + 0x3b0));
    }
    plVar1 = plVar3 + 6;
    FUN_1403de7ba(plVar1,puVar13);
    iVar5 = *(int *)(param_1 + 0x88);
    if ((longlong)iVar5 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x80);
      lVar11 = 0;
      do {
        lVar10 = *(longlong *)(lVar12 + lVar11);
        bVar4 = *(byte *)(lVar10 + 0x40);
        puVar7 = &DAT_14caa8558;
        if ((int)(uint)bVar4 < *(int *)(DAT_14cb71140 + 0x3b8)) {
          puVar7 = (undefined8 *)((ulonglong)bVar4 * 0x20 + *(longlong *)(DAT_14cb71140 + 0x3b0));
        }
        FUN_14094f414(local_70,puVar7);
        bVar4 = *(byte *)(lVar10 + 0x41);
        puVar7 = &DAT_14caa8558;
        if ((int)(uint)bVar4 < *(int *)(DAT_14cb71140 + 0x3b8)) {
          puVar7 = (undefined8 *)((ulonglong)bVar4 * 0x20 + *(longlong *)(DAT_14cb71140 + 0x3b0));
        }
        FUN_14094f414(plVar1,puVar7);
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar5 * 8 != lVar11);
    }
    plVar2 = (longlong *)(param_1 + 0x80);
    lVar12 = (**(code **)(*param_2 + 8))(param_2);
    lVar11 = FUN_14094f534();
    if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
        lVar11 + 0x30)) {
      *(undefined1 *)(plVar3 + 1) = 1;
      FUN_14094f414(param_1 + 0x40,local_70);
      FUN_14094f414(param_1 + 0x60,plVar1);
      if ((*plVar3 != 0) && ((*(byte *)(param_1 + 0x90) & 0x10) != 0)) {
        plVar8 = (longlong *)FUN_1487bb8a4(param_1 + 200);
        plVar3 = (longlong *)*plVar3;
        if (plVar3 == (longlong *)0x0) {
LAB_14094f1dc:
          plVar14 = (longlong *)0x0;
        }
        else {
          lVar12 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar11 = FUN_14094f534();
          if ((lVar11 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar11 + 0x38)))
          goto LAB_14094f1dc;
          plVar14 = (longlong *)0x0;
          if (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30) {
            plVar14 = plVar3;
          }
        }
        if (plVar8[1] == 0) {
          uVar9 = FUN_14094f534();
          lVar12 = FUN_14477b664(uVar9);
          plVar8[1] = lVar12;
        }
        lVar12 = FUN_14094f534();
        uVar9 = FUN_14094f534();
        FUN_1402d1bfa(&local_68,uVar9,plVar14);
        if (*plVar8 != local_68) {
          plVar8[2] = 0;
        }
        *plVar8 = local_68;
        lVar11 = FUN_14094f534();
        if (lVar12 == 0) {
LAB_14094f258:
          lVar11 = lVar12;
        }
        else if (lVar11 == 0) {
          lVar11 = 0;
        }
        else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                 == lVar11 + 0x30)) goto LAB_14094f258;
        if (plVar8[1] != lVar11) {
          plVar8[2] = 0;
        }
        uVar9 = FUN_14477b664(lVar11);
        lVar12 = FUN_14477b664(uVar9);
        plVar8[1] = lVar12;
        if ((lVar12 != 0) && (*plVar8 != 0)) {
          plVar8[2] = (longlong)plVar14;
        }
        FUN_1403de7ba(plVar8 + 6,local_70);
        FUN_1403de7ba(plVar8 + 10,plVar1);
        if (0 < (longlong)*(int *)(param_1 + 0x88)) {
          local_70 = plVar8 + 3;
          uVar15 = (longlong)*(int *)(param_1 + 0x88) + 1;
          do {
            lVar12 = *plVar2;
            iVar5 = (int)plVar8[4];
            *(uint *)(plVar8 + 4) = iVar5 + 1U;
            if (*(uint *)((longlong)plVar8 + 0x24) < iVar5 + 1U) {
              FUN_1487c0204(local_70,iVar5);
            }
            plVar3 = (longlong *)(*local_70 + (longlong)iVar5 * 0x18);
            lVar12 = *(longlong *)(lVar12 + -0x10 + uVar15 * 8);
            *plVar3 = 0;
            plVar3[1] = 0;
            plVar3[2] = 0;
            uVar9 = FUN_140c1c194();
            lVar11 = FUN_14477b664(uVar9);
            plVar3[1] = lVar11;
            lVar11 = FUN_140c1c194();
            uVar9 = FUN_140c1c194();
            FUN_1402d1bfa(&local_68,uVar9,lVar12);
            if (*plVar3 != local_68) {
              plVar3[2] = 0;
            }
            *plVar3 = local_68;
            lVar10 = FUN_140c1c194();
            if (lVar11 == 0) {
LAB_14094f379:
              lVar10 = lVar11;
            }
            else if (lVar10 == 0) {
              lVar10 = 0;
            }
            else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                     lVar10 + 0x30)) goto LAB_14094f379;
            if (plVar3[1] != lVar10) {
              plVar3[2] = 0;
            }
            uVar9 = FUN_14477b664(lVar10);
            lVar11 = FUN_14477b664(uVar9);
            plVar3[1] = lVar11;
            if ((lVar11 != 0) && (*plVar3 != 0)) {
              plVar3[2] = lVar12;
            }
            uVar15 = uVar15 - 1;
          } while (1 < uVar15);
        }
      }
    }
    iVar5 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar5 + 1U) {
      FUN_14094fabc(plVar2,iVar5);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 8) = param_2;
    (**(code **)(*param_2 + 0x20))(param_2,param_1);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
    FUN_14094f56e(plVar2);
  }
  DAT_14cb71108 = DAT_14cb71108 - 1;
LAB_14094f149:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14094f3f4 FUN_14094f3f4 body=31 status=ok
// SIG undefined FUN_14094f3f4(void)

void FUN_14094f3f4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 14094f414 FUN_14094f414 body=287 status=ok
// SIG undefined FUN_14094f414(void)

void FUN_14094f414(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar5 = (longlong)(int)param_2[1];
  if (lVar5 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = uVar2 + (int)param_2[1];
  if (iVar6 < 0) goto LAB_14094f52c;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
    FUN_1403de8ba(param_1);
    lVar5 = (longlong)(int)param_2[1];
    if (lVar5 != 0) goto LAB_14094f459;
  }
  else {
LAB_14094f459:
    plVar8 = (longlong *)*param_2;
    plVar1 = plVar8 + lVar5;
    do {
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*param_1 + uVar7 * 8) == *plVar8) goto LAB_14094f49e;
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
      }
      lVar5 = param_1[1];
      uVar3 = (int)lVar5 + 1;
      *(uint *)(param_1 + 1) = uVar3;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
        FUN_1403de658(param_1);
      }
      *(longlong *)(*param_1 + (longlong)(int)lVar5 * 8) = *plVar8;
LAB_14094f49e:
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  uVar2 = *(uint *)(param_1 + 3);
  iVar4 = (int)param_2[3];
  iVar6 = iVar4 + uVar2;
  if (-1 < iVar6) {
    plVar1 = param_1 + 2;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar6) {
      FUN_1403de8ba(plVar1);
      iVar4 = (int)param_2[3];
    }
    if (iVar4 != 0) {
      plVar9 = (longlong *)param_2[2];
      plVar8 = plVar9 + iVar4;
      do {
        if (0 < (int)uVar2) {
          uVar7 = 0;
          do {
            if (*(longlong *)(*plVar1 + uVar7 * 8) == *plVar9) goto LAB_14094f515;
            uVar7 = uVar7 + 1;
          } while (uVar2 != uVar7);
        }
        lVar5 = param_1[3];
        uVar3 = (int)lVar5 + 1;
        *(uint *)(param_1 + 3) = uVar3;
        if (*(uint *)((longlong)param_1 + 0x1c) < uVar3) {
          FUN_1403de658(plVar1);
        }
        *(longlong *)(*plVar1 + (longlong)(int)lVar5 * 8) = *plVar9;
LAB_14094f515:
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar8);
    }
    return;
  }
LAB_14094f52c:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 14094f534 FUN_14094f534 body=57 status=ok
// SIG undefined FUN_14094f534(void)

void FUN_14094f534(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb584d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb584d8 = FUN_140002ddd(FUN_1464c1260,uVar1,L"GbxActorPartDef");
  }
  return;
}



// FUNCTION 14094f56e FUN_14094f56e body=143 status=ok
// SIG undefined FUN_14094f56e(void)

void FUN_14094f56e(longlong param_1)

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



// FUNCTION 14094f5fe FUN_14094f5fe body=190 status=ok
// SIG undefined FUN_14094f5fe(void)

void FUN_14094f5fe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  FUN_14094f6bc();
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x70) * 0x38;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x68) + 8);
    do {
      lVar4 = plVar6[1];
      if (lVar4 == 0) {
        uVar3 = FUN_140c1c194();
        lVar4 = FUN_14477b664(uVar3);
        plVar6[1] = lVar4;
      }
      lVar5 = plVar6[2];
      if (lVar5 == 0) {
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*plVar6 != 0) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              lVar5 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar5 = FUN_144aff482(uVar3,plVar6);
            }
            plVar6[2] = lVar5;
          }
        }
      }
      FUN_14094eece(param_2,lVar5);
      plVar6 = plVar6 + 7;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14094f6bc FUN_14094f6bc body=184 status=ok
// SIG undefined FUN_14094f6bc(void)

void FUN_14094f6bc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x48);
    lVar7 = (longlong)*(int *)(param_1 + 0x50) * 0x18;
    do {
      lVar4 = plVar6[1];
      if (lVar4 == 0) {
        uVar3 = FUN_140c1c194();
        lVar4 = FUN_14477b664(uVar3);
        plVar6[1] = lVar4;
      }
      lVar5 = plVar6[2];
      if (lVar5 == 0) {
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*plVar6 != 0) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              lVar5 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar5 = FUN_144aff482(uVar3,plVar6);
            }
            plVar6[2] = lVar5;
          }
        }
      }
      FUN_14094eece(param_2,lVar5);
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14094f774 FUN_14094f774 body=496 status=ok
// SIG undefined FUN_14094f774(void)

undefined8 * FUN_14094f774(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
LAB_14094f84d:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if ((*(byte *)(param_1 + 0x90) & 8) == 0) {
      lVar5 = FUN_1447262c2(param_1);
      if (lVar5 == 0) {
LAB_14094f838:
        lVar5 = 0;
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1478c0a72;
          local_60 = &LAB_1417b2375;
          local_68 = L"Engine";
          local_70 = 0x1000000000;
          local_78 = 0x10000004;
          local_80 = 8;
          local_88 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
        goto LAB_14094f838;
      }
      cVar2 = FUN_14094f966(param_2,lVar5);
      if (cVar2 == '\0') goto LAB_14094f84d;
    }
    if ((int)(uint)*(byte *)(param_2 + 0x42) < *(int *)(DAT_14cb71140 + 0x3b8)) {
      puVar3 = (undefined8 *)
               ((ulonglong)*(byte *)(param_2 + 0x42) * 0x20 + *(longlong *)(DAT_14cb71140 + 0x3b0));
    }
    else {
      puVar3 = &DAT_14caa8558;
    }
    if ((longlong)*(int *)(puVar3 + 1) != 0) {
      plVar4 = (longlong *)*puVar3;
      plVar1 = plVar4 + *(int *)(puVar3 + 1);
      do {
        if (*(int *)(param_1 + 0x48) != 0) {
          puVar3 = (undefined8 *)*plVar4;
          lVar5 = 0;
          do {
            if (*(undefined8 **)(*(longlong *)(param_1 + 0x40) + lVar5) == puVar3)
            goto LAB_14094f8ae;
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(param_1 + 0x48) << 3 != lVar5);
        }
        if ((longlong)*(int *)(param_1 + 0x58) == 0) goto LAB_14094f84d;
        lVar5 = 0;
        while (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar5) != *plVar4) {
          lVar5 = lVar5 + 8;
          puVar3 = (undefined8 *)0x0;
          if ((longlong)*(int *)(param_1 + 0x58) * 8 == lVar5) goto LAB_14094f7d6;
        }
LAB_14094f8ae:
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
    puVar3 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
LAB_14094f7d6:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 14094f966 FUN_14094f966 body=187 status=ok
// SIG undefined FUN_14094f966(void)

ulonglong FUN_14094f966(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  
  plVar3 = (longlong *)FUN_14094fa22();
  lVar7 = plVar3[1];
  if (lVar7 == 0) {
    uVar4 = FUN_1406ef318();
    lVar7 = FUN_14477b664(uVar4);
    plVar3[1] = lVar7;
  }
  lVar5 = plVar3[2];
  if (lVar5 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((lVar7 == 0) || (*plVar3 == 0)) goto LAB_14094f999;
    plVar1 = *(longlong **)(lVar7 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,plVar3);
        plVar3[2] = lVar5;
        if (lVar5 == 0) goto LAB_14094f999;
        goto LAB_14094f9e4;
      }
    }
    plVar3[2] = 0;
  }
  else {
LAB_14094f9e4:
    if (param_2 != 0) {
      uVar6 = FUN_1409500c0(lVar5,param_2);
      return uVar6;
    }
    uVar6 = 0;
  }
LAB_14094f999:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14094fa22 FUN_14094fa22 body=154 status=ok
// SIG undefined FUN_14094fa22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14094fa22(longlong param_1)

{
  short sVar1;
  undefined *puVar2;
  
  sVar1 = *(short *)(param_1 + 0x82);
  if ((sVar1 < 0) || (*(int *)(DAT_14cb71140 + 0x398) <= (int)sVar1)) {
    puVar2 = &DAT_14cb70f28;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb70f40) {
      FUN_144b3d300(&DAT_14cb70f40);
      if (DAT_14cb70f40 == -1) {
        _DAT_14cb70f28 = 0;
        uRam000000014cb70f30 = 0;
        _DAT_14cb70f38 = 0;
        _Init_thread_footer(&DAT_14cb70f40);
      }
    }
  }
  else {
    puVar2 = (undefined *)((longlong)(int)sVar1 * 0x18 + *(longlong *)(DAT_14cb71140 + 0x390));
  }
  return puVar2;
}



// FUNCTION 14094fabc FUN_14094fabc body=353 status=ok
// SIG undefined FUN_14094fabc(void)

void FUN_14094fabc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14094fb41;
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
LAB_14094fb41:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14094fc1e FUN_14094fc1e body=275 status=ok
// SIG undefined FUN_14094fc1e(void)

void FUN_14094fc1e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14094fd32 FUN_14094fd32 body=908 status=ok
// SIG undefined FUN_14094fd32(void)

void FUN_14094fd32(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_148 [32];
  code *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  code *local_e8;
  longlong local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined1 *local_c0;
  undefined1 local_90 [32];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14094f5fe();
  if (*(char *)(param_1 + 0xbc) != '\x01') goto LAB_14094fd73;
  if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
    local_e0 = 0;
    lStack_d8 = 0;
    uVar2 = FUN_140c1c194();
    lVar3 = FUN_14477b664(uVar2);
    lVar4 = FUN_140b38cc4();
    uVar2 = FUN_140b38cc4();
    FUN_1402d1bfa(&local_128,uVar2,param_1);
    pcVar1 = local_128;
    if (local_128 != (code *)0x0) {
      lStack_d8 = 0;
    }
    local_e8 = local_128;
    lVar5 = FUN_140c1c194();
    if (lVar4 == 0) {
LAB_14094fe32:
      lVar5 = lVar4;
    }
    else if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) goto LAB_14094fe32;
    if (lVar3 != lVar5) {
      lStack_d8 = 0;
    }
    uVar2 = FUN_14477b664(lVar5);
    local_e0 = FUN_14477b664(uVar2);
    if (local_e0 != 0 && pcVar1 != (code *)0x0) {
      lStack_d8 = param_1;
    }
    FUN_14095186a(param_2,&local_e8);
  }
  local_e0 = 0;
  lStack_d8 = 0;
  uVar2 = FUN_140c1c194();
  lVar3 = FUN_14477b664(uVar2);
  lVar4 = FUN_140b38cc4();
  uVar2 = FUN_140b38cc4();
  FUN_1402d1bfa(&local_128,uVar2,param_1);
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    lStack_d8 = 0;
  }
  local_e8 = local_128;
  lVar5 = FUN_140c1c194();
  if (lVar4 == 0) {
LAB_14094fef6:
    lVar5 = lVar4;
  }
  else if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) goto LAB_14094fef6;
  if (lVar3 != lVar5) {
    lStack_d8 = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  local_e0 = FUN_14477b664(uVar2);
  if (local_e0 != 0 && pcVar1 != (code *)0x0) {
    lStack_d8 = param_1;
  }
  lVar3 = FUN_140950860(param_2,&local_e8);
  if (lVar3 == 0) {
    uVar8 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x18);
    uVar8 = *(uint *)(lVar3 + 0x20);
  }
  if ((*(byte *)(param_2 + 0x90) & 2) != 0) {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x400000000;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = (code *)0x0;
    uStack_120 = 0;
    lStack_d8 = 0;
    local_c8 = &PTR_LAB_14b3e7150;
    local_e8 = FUN_143c99940;
    local_c0 = local_90;
    FUN_140b38cfe(param_1);
    if ((int)(uint)local_68 < (int)uVar8) {
      uVar8 = (uint)local_68;
    }
    if (0 < (int)uVar8) {
      lVar4 = lVar4 + 0x20;
      uVar7 = 0;
      do {
        if (*(char *)(lVar4 + -0x20) != '\x02') {
          puVar6 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar6 = local_90;
          }
          uStack_120 = *(undefined8 *)(*(longlong *)(puVar6 + uVar7 * 8) + 0x24);
          local_118 = *(undefined8 *)(*(longlong *)(puVar6 + uVar7 * 8) + 0x2c);
          local_128 = (code *)0x0;
          local_108 = 0x10;
          local_100 = 0x18;
          local_f8 = 0;
          if ((DAT_14c9aa014 & 0x20) == 0) {
            local_f8 = 0x18;
          }
          local_e8 = (code *)CONCAT71(local_e8._1_7_,2);
          local_d0 = 0;
          local_e0 = 0;
          lStack_d8 = 0;
          FUN_14034cca6(&local_c8,&local_128);
          *(undefined1 *)(lVar4 + -0x20) = local_e8._0_1_;
          FUN_145856b94(lVar4 + -0x18,&local_e0);
          FUN_1403719a4(lVar4,&local_c8);
          FUN_144a2da94(&local_c8);
          FUN_144a2da94(&local_128);
        }
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + 0x58;
      } while (uVar8 != uVar7);
    }
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14094fd73:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409500c0 FUN_1409500c0 body=318 status=ok
// SIG undefined FUN_1409500c0(void)

undefined8 FUN_1409500c0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  byte bVar9;
  longlong *plVar10;
  
  pcVar2 = *(code **)(*param_2 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar5 = param_2[0x76];
    if (lVar5 != 0) goto LAB_1409501a9;
    pcVar2 = *(code **)(*param_2 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      bVar9 = 0x84;
      if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
        plVar10 = (longlong *)&LAB_144904684;
        if (*(int *)((longlong)param_2 + 0x75b4) != 0) {
          uVar1 = *(uint *)(param_2 + 0xeb6);
          bVar3 = 0;
          uVar8 = 0;
          if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140950172;
          plVar4 = (longlong *)((ulonglong)((uVar1 & 0xffff) * 0x18) + DAT_14c9647c8[uVar1 >> 0x10])
          ;
          plVar10 = DAT_14c9647c8;
          if ((plVar4 != (longlong *)0x0) &&
             (((int)plVar4[2] == *(int *)((longlong)param_2 + 0x75b4) &&
              (plVar10 = (longlong *)(ulonglong)*(uint *)(plVar4 + 1),
              (*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
            plVar10 = (longlong *)(ulonglong)*(uint *)(plVar4 + 1);
            if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
              lVar5 = *plVar4;
            }
            else {
              lVar5 = 0;
            }
            lVar5 = lVar5 + 0x110;
            goto LAB_14095018f;
          }
        }
      }
      else {
        plVar10 = param_2 + 0x784;
        lVar5 = (**(code **)(param_2[0x784] + 0x18))(plVar10);
LAB_14095018f:
        if (lVar5 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x20);
          goto LAB_140950198;
        }
      }
    }
    else {
      lVar5 = (*pcVar2)(param_2);
      plVar10 = param_2;
LAB_140950198:
      if (lVar5 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x3b0);
        goto LAB_1409501a4;
      }
    }
  }
  else {
    lVar5 = (*pcVar2)(param_2);
    plVar10 = param_2;
LAB_1409501a4:
    if (lVar5 != 0) {
LAB_1409501a9:
      lVar6 = FUN_140082f10();
      plVar10 = *(longlong **)(lVar5 + 0x10);
      if ((*(int *)(lVar6 + 0x38) <= (int)plVar10[7]) &&
         (plVar10 = (longlong *)plVar10[6], plVar10[*(int *)(lVar6 + 0x38)] == lVar6 + 0x30)) {
        uVar7 = FUN_1409501fe(param_1,lVar5);
        bVar9 = (byte)uVar7;
        uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
        bVar3 = 1;
        goto LAB_140950172;
      }
    }
  }
  bVar9 = (byte)plVar10;
  bVar3 = 0;
  uVar8 = 0;
LAB_140950172:
  return CONCAT71(uVar8,bVar3 & bVar9);
}



// FUNCTION 1409501fe FUN_1409501fe body=108 status=ok
// SIG undefined FUN_1409501fe(void)

byte FUN_1409501fe(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    bVar1 = 1;
  }
  else if ((DAT_14cb8d3c0 == 0) || (lVar2 = FUN_1409503e6(DAT_14cb8d3c0,param_1), lVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x7e0))(param_2,lVar2 + 0x1c);
    bVar1 = (byte)param_2;
    if (lVar2 != 0) {
      bVar1 = FUN_14095026a(lVar2,param_1);
    }
    bVar1 = lVar2 != 0 & bVar1;
  }
  return bVar1;
}



// FUNCTION 14095026a FUN_14095026a body=379 status=ok
// SIG undefined FUN_14095026a(void)

ulonglong FUN_14095026a(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((((param_2 != 0) && (DAT_14cb8d3c0 != 0)) && (lVar3 = FUN_1409503e6(), lVar3 != 0)) &&
     ((*(char *)(lVar3 + 0x18) == '\x01' && (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c))))
     ) {
    puVar7 = &DAT_14c9485f0;
    if (*(uint **)(lVar3 + 8) != (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + 8);
    }
    lVar8 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x78);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & *puVar7) * 4);
    if (iVar6 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 0x38;
        if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 0x38) == *puVar7) {
          if (lVar8 == 0) {
            return 0;
          }
          if ((ulonglong *)(lVar8 + 0x28) == (ulonglong *)0x0) {
            return 0;
          }
          uVar4 = *(ulonglong *)(lVar8 + 0x28);
          if (uVar4 == 0) {
            return 0;
          }
          if ((*(char *)(lVar3 + 0x24) == '\x01') &&
             (uVar5 = *(uint *)(param_2 + 0x1c), -1 < (int)uVar5)) {
            if (*(int *)(uVar4 + 0x48) <= (int)uVar5) {
              return 0;
            }
            lVar3 = uVar4 + 0x30;
            if (*(longlong *)(uVar4 + 0x40) != 0) {
              lVar3 = *(longlong *)(uVar4 + 0x40);
            }
            uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar5 >> 5) * 4);
            return (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar5 & 0x1f) & 1) != 0);
          }
          if (*(int *)(uVar4 + 0x58) == *(int *)(uVar4 + 0x84)) {
            return 0;
          }
          uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          lVar3 = uVar4 + 0x88;
          if (*(longlong *)(uVar4 + 0x90) != 0) {
            lVar3 = *(longlong *)(uVar4 + 0x90);
          }
          iVar6 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(uVar4 + 0x98) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (iVar6 == -1) {
            return 0;
          }
          plVar1 = (longlong *)(uVar4 + 0x50);
          do {
            bVar9 = *(ulonglong *)(*plVar1 + (longlong)iVar6 * 0x10) == param_2;
            uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar9);
            if (bVar9) {
              return uVar4;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar1 + 8);
          } while (iVar6 != -1);
          return uVar4;
        }
        iVar6 = *(int *)(lVar8 + 0x30);
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1409503e6 FUN_1409503e6 body=132 status=ok
// SIG undefined FUN_1409503e6(void)

longlong FUN_1409503e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_2 + 8);
    if (*(char *)(param_2 + 0x10) != '\0') {
      if (*(char *)(param_2 + 0x10) != '\x02') goto LAB_140950455;
      plVar2 = (longlong *)(*plVar2 + 0x30);
    }
    if ((*plVar2 != 0) && (lVar1 = *(longlong *)(*plVar2 + 0x68), lVar1 != 0)) {
      local_18 = *(longlong *)(lVar1 + 0x30);
      lVar1 = local_18;
      if (local_18 == 0) {
        FUN_145747a3a(param_1,&local_18);
        lVar1 = local_18;
      }
      goto LAB_14095042a;
    }
  }
LAB_140950455:
  lVar1 = 0;
LAB_14095042a:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095046c FUN_14095046c body=953 status=ok
// SIG undefined FUN_14095046c(void)

void FUN_14095046c(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14094f6bc();
  if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    uVar3 = FUN_140c1c194();
    lStack_70 = FUN_14477b664(uVar3);
    lVar4 = FUN_140950826();
    uVar3 = FUN_140950826();
    FUN_1402d1bfa(&local_58,uVar3,param_1);
    if (local_78 != local_58) {
      local_68 = 0;
    }
    local_78 = local_58;
    lVar5 = FUN_140c1c194();
    if (lVar4 == 0) {
LAB_14095078e:
      lVar5 = lVar4;
    }
    else if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) goto LAB_14095078e;
    if (lStack_70 != lVar5) {
      local_68 = 0;
    }
    uVar3 = FUN_14477b664(lVar5);
    lStack_70 = FUN_14477b664(uVar3);
    if ((lStack_70 != 0) && (local_78 != 0)) {
      local_68 = param_1;
    }
    FUN_14095186a(param_2,&local_78);
  }
  local_68 = 0;
  uVar3 = FUN_140c1c194();
  lVar4 = FUN_14477b664(uVar3);
  lStack_70 = lVar4;
  lVar5 = FUN_140950826();
  uVar3 = FUN_140950826();
  FUN_1402d1bfa(&local_58,uVar3,param_1);
  if (local_58 != 0) {
    local_68 = 0;
  }
  local_78 = local_58;
  lVar6 = FUN_140c1c194();
  if (lVar5 == 0) {
LAB_140950529:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_140950529;
  if (lVar4 != lVar6) {
    local_68 = 0;
  }
  uVar3 = FUN_14477b664(lVar6);
  lStack_70 = FUN_14477b664(uVar3);
  if ((lStack_70 != 0) && (local_78 != 0)) {
    local_68 = param_1;
  }
  lVar4 = FUN_140950860(param_2,&local_78);
  if (lVar4 != 0) {
    pcVar9 = *(char **)(lVar4 + 0x18);
    iVar1 = *(int *)(lVar4 + 0x20);
    if ((iVar1 == 1 & *(byte *)(param_2 + 0x90) >> 1) == 1) {
      if (*pcVar9 == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(pcVar9 + 8) != lVar4) {
          pcVar9[0x18] = '\0';
          pcVar9[0x19] = '\0';
          pcVar9[0x1a] = '\0';
          pcVar9[0x1b] = '\0';
          pcVar9[0x1c] = '\0';
          pcVar9[0x1d] = '\0';
          pcVar9[0x1e] = '\0';
          pcVar9[0x1f] = '\0';
        }
        *(longlong *)(pcVar9 + 8) = lVar4;
        if (*(longlong *)(pcVar9 + 0x10) != *(longlong *)(param_1 + 0x90)) {
          pcVar9[0x18] = '\0';
          pcVar9[0x19] = '\0';
          pcVar9[0x1a] = '\0';
          pcVar9[0x1b] = '\0';
          pcVar9[0x1c] = '\0';
          pcVar9[0x1d] = '\0';
          pcVar9[0x1e] = '\0';
          pcVar9[0x1f] = '\0';
        }
        uVar3 = FUN_14477b664();
        uVar3 = FUN_14477b664(uVar3);
        *(undefined8 *)(pcVar9 + 0x10) = uVar3;
        *(undefined8 *)(pcVar9 + 0x18) = *(undefined8 *)(param_1 + 0x98);
      }
      pcVar8 = pcVar9 + 0x58;
    }
    else {
      if (iVar1 == 0) goto LAB_1409507ec;
      pcVar8 = pcVar9 + (longlong)iVar1 * 0x58;
    }
    do {
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      if (*pcVar9 == '\0') {
        local_78 = *(longlong *)(param_1 + 0x88);
        uVar3 = FUN_14477b664(*(undefined8 *)(param_1 + 0x90));
        lStack_70 = FUN_14477b664(uVar3);
        plVar7 = (longlong *)(param_1 + 0x98);
LAB_14095063c:
        local_68 = *plVar7;
        if (lStack_70 == 0) goto LAB_140950649;
      }
      else {
        if (*pcVar9 == '\x01') {
          local_78 = *(longlong *)(pcVar9 + 8);
          uVar3 = FUN_14477b664(*(undefined8 *)(pcVar9 + 0x10));
          lStack_70 = FUN_14477b664(uVar3);
          plVar7 = (longlong *)(pcVar9 + 0x18);
          goto LAB_14095063c;
        }
LAB_140950649:
        uVar3 = FUN_140c1c194();
        lStack_70 = FUN_14477b664(uVar3);
      }
      if (local_68 == 0) {
        local_68 = 0;
        if ((((lStack_70 != 0) && (local_78 != 0)) &&
            (plVar7 = *(longlong **)(lStack_70 + 0xb8), plVar7 != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 != '\0')) {
          uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
          local_68 = FUN_144aff482(uVar3,&local_78);
          if (local_68 != 0) goto LAB_1409506bb;
        }
      }
      else {
LAB_1409506bb:
        FUN_14094eece(param_2,local_68);
      }
      pcVar9 = pcVar9 + 0x58;
    } while (pcVar9 != pcVar8);
  }
LAB_1409507ec:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140950826 FUN_140950826 body=57 status=ok
// SIG undefined FUN_140950826(void)

void FUN_140950826(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb588b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb588b8 = FUN_140002ddd(FUN_1464c2b2c,uVar1,L"GbxActorPartDef_Picker");
  }
  return;
}



// FUNCTION 140950860 FUN_140950860 body=1248 status=ok
// SIG undefined FUN_140950860(void)

longlong * FUN_140950860(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x98);
    lVar9 = (longlong)*(int *)(param_1 + 0xa0) * 0x28;
    do {
      if (*plVar5 == *param_2) {
        if (plVar5 != (longlong *)0x0) {
          return plVar5;
        }
        break;
      }
      plVar5 = plVar5 + 5;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  plVar5 = (longlong *)(param_1 + 0x98);
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    plVar10 = *(longlong **)(param_1 + 0xb8);
    lVar9 = (longlong)*(int *)(param_1 + 0xc0) * 0x28;
    do {
      if (*plVar10 == *param_2) {
        if (plVar10 == (longlong *)0x0) break;
        lVar9 = param_2[1];
        if (lVar9 == 0) {
          uVar6 = FUN_140c1c194();
          lVar9 = FUN_14477b664(uVar6);
          param_2[1] = lVar9;
        }
        lVar8 = param_2[2];
        if (lVar8 == 0) {
          if ((lVar9 == 0) || (*param_2 == 0)) break;
          plVar11 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
            param_2[2] = 0;
            break;
          }
          uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
          lVar8 = FUN_144aff482(uVar6,param_2);
          param_2[2] = lVar8;
          if (lVar8 == 0) break;
        }
        iVar2 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
          FUN_140950f1e(plVar5,iVar2);
        }
        lVar9 = *plVar5;
        plVar11 = (longlong *)((longlong)iVar2 * 0x28 + lVar9);
        plVar11[2] = 0;
        *plVar11 = 0;
        plVar11[1] = 0;
        *plVar11 = *plVar10;
        uVar6 = FUN_14477b664(plVar10[1]);
        lVar7 = FUN_14477b664(uVar6);
        plVar11[1] = lVar7;
        plVar11[2] = plVar10[2];
        plVar11[3] = 0;
        iVar3 = (int)plVar10[4];
        lVar7 = plVar10[3];
        *(int *)(plVar11 + 4) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)plVar11 + 0x24) = 0;
        }
        else {
          puVar1 = (undefined8 *)(lVar9 + 0x18 + (longlong)iVar2 * 0x28);
          FUN_14099a5ec(puVar1,iVar3,0);
          FUN_14099a56b(*puVar1,lVar7,iVar3);
        }
        FUN_140950d92(param_1,lVar8,plVar11);
        if (plVar11 != (longlong *)0x0) {
          return plVar11;
        }
        break;
      }
      plVar10 = plVar10 + 5;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    plVar10 = *(longlong **)(param_1 + 0xa8);
    lVar9 = (longlong)*(int *)(param_1 + 0xb0) * 0x28;
    do {
      if (*plVar10 == *param_2) {
        if (plVar10 == (longlong *)0x0) break;
        lVar9 = param_2[1];
        if (lVar9 == 0) {
          uVar6 = FUN_140c1c194();
          lVar9 = FUN_14477b664(uVar6);
          param_2[1] = lVar9;
        }
        lVar8 = param_2[2];
        if (lVar8 == 0) {
          if ((lVar9 == 0) || (*param_2 == 0)) break;
          plVar11 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
            param_2[2] = 0;
            break;
          }
          uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
          lVar8 = FUN_144aff482(uVar6,param_2);
          param_2[2] = lVar8;
          if (lVar8 == 0) break;
        }
        iVar2 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
          FUN_140950f1e(plVar5,iVar2);
        }
        lVar9 = *plVar5;
        plVar11 = (longlong *)((longlong)iVar2 * 0x28 + lVar9);
        plVar11[2] = 0;
        *plVar11 = 0;
        plVar11[1] = 0;
        *plVar11 = *plVar10;
        uVar6 = FUN_14477b664(plVar10[1]);
        lVar7 = FUN_14477b664(uVar6);
        plVar11[1] = lVar7;
        plVar11[2] = plVar10[2];
        plVar11[3] = 0;
        iVar3 = (int)plVar10[4];
        lVar7 = plVar10[3];
        *(int *)(plVar11 + 4) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)plVar11 + 0x24) = 0;
        }
        else {
          puVar1 = (undefined8 *)(lVar9 + 0x18 + (longlong)iVar2 * 0x28);
          FUN_14099a5ec(puVar1,iVar3,0);
          FUN_14099a56b(*puVar1,lVar7,iVar3);
        }
        FUN_140950d92(param_1,lVar8,plVar11);
        if (plVar11 != (longlong *)0x0) {
          return plVar11;
        }
        break;
      }
      plVar10 = plVar10 + 5;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar6 = FUN_140c1c194();
    lVar9 = FUN_14477b664(uVar6);
    param_2[1] = lVar9;
  }
  lVar8 = param_2[2];
  if (lVar8 == 0) {
    if (lVar9 == 0) {
      return (longlong *)0x0;
    }
    if (*param_2 == 0) {
      return (longlong *)0x0;
    }
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar8 = FUN_144aff482(uVar6,param_2);
      param_2[2] = lVar8;
      if (lVar8 != 0) goto LAB_14095092c;
    }
    plVar5 = (longlong *)0x0;
  }
  else {
LAB_14095092c:
    plVar5 = (longlong *)FUN_140950d40(plVar5);
    lVar9 = *param_2;
    if (*plVar5 != lVar9) {
      plVar5[2] = 0;
    }
    *plVar5 = lVar9;
    if (plVar5[1] != param_2[1]) {
      plVar5[2] = 0;
    }
    uVar6 = FUN_14477b664();
    lVar9 = FUN_14477b664(uVar6);
    plVar5[1] = lVar9;
    plVar5[2] = param_2[2];
    FUN_140950d92(param_1,lVar8,plVar5);
  }
  return plVar5;
}



// FUNCTION 140950d40 FUN_140950d40 body=63 status=ok
// SIG undefined FUN_140950d40(void)

longlong FUN_140950d40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140950f1e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_140950d7f(lVar2);
  return lVar2;
}



// FUNCTION 140950d7f FUN_140950d7f body=19 status=ok
// SIG undefined FUN_140950d7f(void)

void FUN_140950d7f(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 140950d92 FUN_140950d92 body=395 status=ok
// SIG undefined FUN_140950d92(void)

void FUN_140950d92(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_3 + 0x20) != 0) {
    lVar7 = (longlong)*(int *)(param_3 + 0x20) * 0x58;
    lVar8 = *(longlong *)(param_3 + 0x18) + 0x20;
    do {
      if ((*(char *)(lVar8 + -0x20) == '\x01') && (*(longlong *)(lVar8 + -0x18) != 0)) {
        lVar5 = *(longlong *)(lVar8 + -0x10);
        if (lVar5 == 0) {
          uVar4 = FUN_140c1c194();
          lVar5 = FUN_14477b664(uVar4);
          *(longlong *)(lVar8 + -0x10) = lVar5;
        }
        plVar1 = (longlong *)(lVar8 + -0x18);
        lVar6 = *(longlong *)(lVar8 + -8);
        if (lVar6 == 0) {
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if (*plVar1 != 0) {
              plVar2 = *(longlong **)(lVar5 + 0xb8);
              if (plVar2 == (longlong *)0x0) {
LAB_140950ea5:
                lVar6 = 0;
              }
              else {
                cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
                if (cVar3 == '\0') goto LAB_140950ea5;
                uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar6 = FUN_144aff482(uVar4,plVar1);
              }
              *(longlong *)(lVar8 + -8) = lVar6;
            }
          }
        }
        cVar3 = FUN_14094f774(param_1,lVar6);
        if (cVar3 == '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_48 = 0;
          *(undefined1 *)(lVar8 + -0x20) = 0;
          FUN_145856b94(plVar1,&uStack_90);
          FUN_1403719a4(lVar8,&local_78);
          FUN_144a2da94(&local_78);
        }
      }
      lVar8 = lVar8 + 0x58;
      lVar7 = lVar7 + -0x58;
    } while (lVar7 != 0);
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140950f1e FUN_140950f1e body=373 status=ok
// SIG undefined FUN_140950f1e(void)

void FUN_140950f1e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140950fa7;
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
LAB_140950fa7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140951094 FUN_140951094 body=776 status=ok
// SIG undefined FUN_140951094(void)

void FUN_140951094(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 ****ppppuVar11;
  void *_Dst;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 ***local_80 [3];
  ushort local_68;
  byte local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2[1] == 0) {
    uVar7 = FUN_140c1c194();
    lVar6 = FUN_14477b664(uVar7);
    param_2[1] = lVar6;
  }
  lVar6 = FUN_140950826();
  uVar7 = FUN_140950826();
  FUN_1402d1bfa(&local_a8,uVar7,param_1);
  if (*param_2 != CONCAT71(uStack_a7,local_a8)) {
    param_2[2] = 0;
  }
  *param_2 = CONCAT71(uStack_a7,local_a8);
  lVar8 = FUN_140c1c194();
  if (lVar6 == 0) {
LAB_140951127:
    lVar8 = lVar6;
  }
  else if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) goto LAB_140951127;
  if (param_2[1] != lVar8) {
    param_2[2] = 0;
  }
  uVar7 = FUN_14477b664(lVar8);
  lVar6 = FUN_14477b664(uVar7);
  param_2[1] = lVar6;
  if ((lVar6 != 0) && (*param_2 != 0)) {
    param_2[2] = param_1;
  }
  plVar2 = param_2 + 3;
  iVar12 = (int)param_2[4];
  if (iVar12 == 0) {
    local_a8 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    *(undefined4 *)(param_2 + 4) = 1;
    if (*(int *)((longlong)param_2 + 0x24) == 0) {
      FUN_14095139e(plVar2,0);
    }
    puVar3 = (undefined1 *)*plVar2;
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    FUN_140382e86(puVar3 + 0x20,&uStack_88);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar11 = (undefined8 ****)local_80[0];
      if (local_68 < 0x19) {
        ppppuVar11 = local_80;
      }
      (*pcVar4)(ppppuVar11);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(local_80[0]);
    }
  }
  else {
    if (iVar12 < 2) goto LAB_140951172;
    uVar1 = iVar12 - 1;
    _Dst = (void *)(param_2[3] + 0x58);
    FUN_14028f43e(_Dst,uVar1);
    iVar5 = (int)param_2[4] - iVar12;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((ulonglong)uVar1 * 0x58 + (longlong)_Dst),(longlong)iVar5 * 0x58);
      iVar12 = (int)param_2[4];
    }
    *(uint *)(param_2 + 4) = iVar12 - uVar1;
    FUN_1487be82c(plVar2);
  }
  iVar12 = (int)param_2[4];
LAB_140951172:
  if (iVar12 != 0) {
    pcVar9 = (char *)*plVar2;
    pcVar10 = pcVar9 + (longlong)iVar12 * 0x58;
    do {
      if ((*pcVar9 != '\0') && (lVar6 = *(longlong *)(pcVar9 + 8), lVar6 != 0)) {
        if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
          bVar13 = false;
        }
        else {
          lVar8 = 0;
          do {
            bVar13 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar8) == lVar6;
            if (bVar13) break;
            bVar14 = (longlong)*(int *)(param_1 + 0xa8) * 0x18 + -0x18 != lVar8;
            lVar8 = lVar8 + 0x18;
          } while (bVar14);
        }
        if ((longlong)*(int *)(param_1 + 0x70) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + lVar8) == lVar6)
            goto LAB_140951190;
            lVar8 = lVar8 + 0x38;
          } while ((longlong)*(int *)(param_1 + 0x70) * 0x38 - lVar8 != 0);
        }
        if (lVar6 != *(longlong *)(param_1 + 0x88) && !bVar13) {
          pcVar9[8] = '\0';
          pcVar9[9] = '\0';
          pcVar9[10] = '\0';
          pcVar9[0xb] = '\0';
          pcVar9[0xc] = '\0';
          pcVar9[0xd] = '\0';
          pcVar9[0xe] = '\0';
          pcVar9[0xf] = '\0';
          pcVar9[0x10] = '\0';
          pcVar9[0x11] = '\0';
          pcVar9[0x12] = '\0';
          pcVar9[0x13] = '\0';
          pcVar9[0x14] = '\0';
          pcVar9[0x15] = '\0';
          pcVar9[0x16] = '\0';
          pcVar9[0x17] = '\0';
          pcVar9[0x18] = '\0';
          pcVar9[0x19] = '\0';
          pcVar9[0x1a] = '\0';
          pcVar9[0x1b] = '\0';
          pcVar9[0x1c] = '\0';
          pcVar9[0x1d] = '\0';
          pcVar9[0x1e] = '\0';
          pcVar9[0x1f] = '\0';
        }
      }
LAB_140951190:
      pcVar9 = pcVar9 + 0x58;
    } while (pcVar9 != pcVar10);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095139e FUN_14095139e body=369 status=ok
// SIG undefined FUN_14095139e(void)

void FUN_14095139e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140951423;
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
LAB_140951423:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 140951510 FUN_140951510 body=857 status=ok
// SIG undefined FUN_140951510(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140951510(ulonglong param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *******pppppppuVar10;
  longlong lVar11;
  char *pcVar12;
  void *_Dst;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  ulonglong local_a8 [5];
  undefined8 *******pppppppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2[1] == 0) {
    uVar8 = FUN_140c1c194();
    uVar7 = FUN_14477b664(uVar8);
    param_2[1] = uVar7;
  }
  uVar7 = FUN_140d099b2();
  uVar8 = FUN_140d099b2();
  FUN_1402d1bfa(local_a8,uVar8,param_1);
  if (*param_2 != local_a8[0]) {
    param_2[2] = 0;
  }
  *param_2 = local_a8[0];
  uVar9 = FUN_140c1c194();
  if (uVar7 == 0) {
LAB_1409515a3:
    uVar9 = uVar7;
  }
  else if (uVar9 == 0) {
    uVar9 = 0;
  }
  else if ((*(int *)(uVar9 + 0x38) <= *(int *)(uVar7 + 0x38)) &&
          (*(longlong *)(*(longlong *)(uVar7 + 0x30) + (longlong)*(int *)(uVar9 + 0x38) * 8) ==
           uVar9 + 0x30)) goto LAB_1409515a3;
  if (param_2[1] != uVar9) {
    param_2[2] = 0;
  }
  uVar8 = FUN_14477b664(uVar9);
  uVar7 = FUN_14477b664(uVar8);
  param_2[1] = uVar7;
  if ((uVar7 != 0) && (*param_2 != 0)) {
    param_2[2] = param_1;
  }
  puVar2 = param_2 + 3;
  iVar13 = (int)param_2[4];
  if (iVar13 == 0) {
    local_a8[0] = local_a8[0] & 0xffffffffffffff00;
    local_68 = local_68 & 0xffffffffffff0000;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    local_58 = local_58 & 0xffffffffffffff00;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    *(undefined4 *)(param_2 + 4) = 1;
    if (*(int *)((longlong)param_2 + 0x24) == 0) {
      FUN_14095139e(puVar2,0);
    }
    puVar4 = (undefined1 *)*puVar2;
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    FUN_140382e86(puVar4 + 0x20,local_a8 + 4);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_60 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppppppuVar10 = pppppppuStack_80;
      if ((ushort)local_68 < 0x19) {
        pppppppuVar10 = &pppppppuStack_80;
      }
      (*pcVar5)(pppppppuVar10);
    }
    if (0x18 < (ushort)local_68) {
      FUN_1400020a8(pppppppuStack_80);
    }
  }
  else {
    if (iVar13 < 2) goto LAB_1409515ee;
    uVar1 = iVar13 - 1;
    _Dst = (void *)(param_2[3] + 0x58);
    FUN_14028f43e(_Dst,uVar1);
    iVar6 = (int)param_2[4] - iVar13;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((ulonglong)uVar1 * 0x58 + (longlong)_Dst),(longlong)iVar6 * 0x58);
      iVar13 = (int)param_2[4];
    }
    *(uint *)(param_2 + 4) = iVar13 - uVar1;
    FUN_1487be82c(puVar2);
  }
  iVar13 = (int)param_2[4];
LAB_1409515ee:
  if (iVar13 != 0) {
    pcVar12 = (char *)*puVar2;
    pcVar14 = pcVar12 + (longlong)iVar13 * 0x58;
    do {
      if ((*pcVar12 != '\0') &&
         ((lVar3 = *(longlong *)(pcVar12 + 8), lVar3 != 0 || (*(char *)(param_1 + 0x88) == '\0'))))
      {
        if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
          bVar15 = false;
        }
        else {
          lVar11 = 0;
          do {
            bVar15 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar11) == lVar3;
            if (bVar15) break;
            bVar16 = (longlong)*(int *)(param_1 + 0xa8) * 0x30 + -0x30 != lVar11;
            lVar11 = lVar11 + 0x30;
          } while (bVar16);
        }
        if ((longlong)*(int *)(param_1 + 0x70) != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + lVar11) == lVar3)
            goto LAB_140951674;
            lVar11 = lVar11 + 0x38;
          } while ((longlong)*(int *)(param_1 + 0x70) * 0x38 - lVar11 != 0);
        }
        if (!bVar15) {
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_a8[4] = 0;
          pppppppuStack_80 = (undefined8 *******)0x0;
          local_a8[2] = 0;
          local_a8[3] = 0;
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_58 = 0;
          *pcVar12 = '\0';
          FUN_145856b94(pcVar12 + 8,local_a8 + 1);
          FUN_1403719a4(pcVar12 + 0x20,local_a8 + 4);
          FUN_144a2da94(local_a8 + 4);
        }
      }
LAB_140951674:
      pcVar12 = pcVar12 + 0x58;
    } while (pcVar12 != pcVar14);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095186a FUN_14095186a body=200 status=ok
// SIG undefined FUN_14095186a(void)

void FUN_14095186a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar4 = FUN_140c1c194();
    lVar3 = FUN_14477b664(uVar4);
    param_2[1] = lVar3;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    if ((lVar3 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_2);
        param_2[2] = lVar5;
        if (lVar5 == 0) {
          return;
        }
        goto LAB_140951889;
      }
      param_2[2] = 0;
    }
    return;
  }
LAB_140951889:
  lVar3 = FUN_140950860(param_1,param_2);
  if (lVar3 == 0) {
    lVar3 = FUN_140950d40(param_1 + 0x98);
  }
  FUN_140950d92(param_1,lVar5,lVar3);
  return;
}



// FUNCTION 140951932 FUN_140951932 body=1042 status=ok
// SIG undefined FUN_140951932(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140951932(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_138 [32];
  longlong local_118 [12];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2[1] == 0) {
    uVar6 = FUN_140c1c194();
    lVar5 = FUN_14477b664(uVar6);
    param_2[1] = lVar5;
  }
  lVar5 = FUN_1411b1c66();
  uVar6 = FUN_1411b1c66();
  FUN_1402d1bfa(local_118,uVar6,param_1);
  if (*param_2 != local_118[0]) {
    param_2[2] = 0;
  }
  *param_2 = local_118[0];
  lVar7 = FUN_140c1c194();
  if (lVar5 != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_1409519cf;
    }
    if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_1409519cf;
  }
  lVar7 = lVar5;
LAB_1409519cf:
  if (param_2[1] != lVar7) {
    param_2[2] = 0;
  }
  uVar6 = FUN_14477b664(lVar7);
  lVar5 = FUN_14477b664(uVar6);
  param_2[1] = lVar5;
  if ((lVar5 != 0) && (*param_2 != 0)) {
    param_2[2] = param_1;
  }
  plVar1 = param_2 + 3;
  iVar4 = (int)param_2[4];
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar4 < iVar2) {
    FUN_140951dba(plVar1,iVar2 - iVar4);
  }
  else if (iVar2 < iVar4) {
    FUN_1487be7d0(plVar1);
    FUN_1487be82c(plVar1);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((longlong)(int)param_2[4] != 0) {
    pcVar14 = (char *)param_2[3];
    pcVar11 = pcVar14 + (longlong)(int)param_2[4] * 0x58;
    do {
      if ((*pcVar14 != '\0') && (lVar5 = *(longlong *)(pcVar14 + 8), lVar5 != 0)) {
        if ((longlong)*(int *)(param_1 + 0x90) == 0) {
          bVar15 = false;
        }
        else {
          lVar7 = 0;
          do {
            bVar15 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar7) == lVar5;
            if (bVar15) break;
            bVar16 = (longlong)*(int *)(param_1 + 0x90) * 0x18 + -0x18 != lVar7;
            lVar7 = lVar7 + 0x18;
          } while (bVar16);
        }
        lVar7 = *(longlong *)(pcVar14 + 0x10);
        if ((longlong)*(int *)(param_1 + 0x70) != 0) {
          lVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + lVar13) == lVar5)
            goto LAB_140951b16;
            lVar13 = lVar13 + 0x38;
          } while ((longlong)*(int *)(param_1 + 0x70) * 0x38 - lVar13 != 0);
        }
        if (bVar15) {
LAB_140951b16:
          if (lVar7 == 0) {
            lVar7 = FUN_140c1c194();
            lVar5 = *(longlong *)(pcVar14 + 8);
          }
          uVar8 = FUN_14477b664(lVar7);
          uVar3 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
          uVar9 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          uVar9 = uVar9 >> 0x10 ^ uVar9;
          uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar10 = (uint)lVar5 & 0xffff;
          uVar3 = uVar9 >> 0xd ^
                  (((uint)lVar5 << 0x10 | uVar10) + (int)((ulonglong)lVar5 >> 0x20) +
                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) - uVar9;
          uVar10 = uVar3 << 8 ^ (-0x61c88647 - uVar9) - uVar3;
          uVar12 = uVar10 >> 0xd ^ (uVar9 - uVar3) - uVar10;
          uVar3 = uVar12 >> 0xc ^ (uVar3 - uVar10) - uVar12;
          uVar9 = uVar3 << 0x10 ^ (uVar10 - uVar12) - uVar3;
          uVar12 = uVar9 >> 5 ^ (uVar12 - uVar3) - uVar9;
          uVar10 = uVar12 >> 3 ^ (uVar3 - uVar9) - uVar12;
          uVar3 = uVar10 << 10 ^ (uVar9 - uVar12) - uVar10;
          iVar4 = FUN_140951e20(&local_b8,uVar3 >> 0xf ^ uVar12 - (uVar10 + uVar3));
          if (iVar4 == -1) {
            FUN_140951f54(&local_b8,local_118);
            goto LAB_140951aa4;
          }
        }
        local_118[8] = 0;
        local_118[9] = 0;
        local_118[6] = 0;
        local_118[7] = 0;
        local_118[4] = 0;
        local_118[5] = 0;
        local_118[2] = 0;
        local_118[3] = 0;
        local_118[0] = 0;
        local_118[1] = 0;
        local_118[10] = 0;
        *pcVar14 = '\0';
        FUN_145856b94(pcVar14 + 8,local_118 + 1);
        FUN_1403719a4(pcVar14 + 0x20,local_118 + 4);
        FUN_144a2da94(local_118 + 4);
      }
LAB_140951aa4:
      pcVar14 = pcVar14 + 0x58;
    } while (pcVar14 != pcVar11);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140951d46(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140951d46 FUN_140951d46 body=116 status=ok
// SIG undefined FUN_140951d46(void)

void FUN_140951d46(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 140951dba FUN_140951dba body=62 status=ok
// SIG undefined FUN_140951dba(void)

void FUN_140951dba(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14095139e(param_1,iVar1);
  }
  FUN_140951df8((longlong)iVar1 * 0x58 + *param_1,param_2);
  return;
}



// FUNCTION 140951df8 FUN_140951df8 body=40 status=ok
// SIG undefined FUN_140951df8(void)

void FUN_140951df8(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    param_1[0x48] = 0;
    param_1[0x50] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 140951e20 FUN_140951e20 body=306 status=ok
// SIG undefined FUN_140951e20(void)

int FUN_140951e20(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar8 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x20;
        puVar1 = (undefined8 *)(lVar8 + lVar10);
        if (*(longlong *)(lVar8 + 8 + lVar10) == 0) {
          uVar7 = FUN_140c1c194();
          uVar7 = FUN_14477b664(uVar7);
          puVar1[1] = uVar7;
        }
        lVar8 = param_3[1];
        if (lVar8 == 0) {
          lVar8 = FUN_140c1c194();
        }
        uVar7 = *param_3;
        uVar6 = FUN_14477b664(lVar8);
        local_50 = uVar7;
        uVar3 = FUN_144a7891a(uVar6);
        local_58 = *puVar1;
        uVar7 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar7);
        local_60 = &local_50;
        local_68 = uVar6;
        cVar2 = FUN_144a789b8(uVar4,uVar7,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_140951e4c;
        lVar8 = *param_1;
        iVar9 = *(int *)(lVar8 + 0x18 + lVar10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_140951e4c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 140951f54 FUN_140951f54 body=1922 status=ok
// SIG undefined FUN_140951f54(void)

int * FUN_140951f54(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_1447711aa(param_1,iVar25);
    }
    iVar9 = (int)param_1[5];
    if (iVar9 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar7 = iVar9 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar19 = param_1 + 2;
    iVar26 = iVar9 + 1;
    iVar16 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar16 = iVar9;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar26;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar9) {
        if (iVar9 + 0x20U < 0xa0) {
          iVar26 = 0x80;
          iVar7 = iVar9;
        }
        else {
          uVar23 = iVar9 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar23) {
              uVar8 = uVar23;
            }
          }
          else {
            uVar8 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar8 << 2,0);
          iVar7 = (int)(uVar12 >> 2);
          iVar26 = -0x20;
          if ((int)uVar23 <= iVar7) {
            iVar26 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar26;
        FUN_1446efbd8(plVar19,iVar7);
        iVar26 = (int)param_1[5] + 1;
      }
      iVar7 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar7 = iVar26;
      }
      *(int *)(param_1 + 5) = iVar26;
      if (iVar26 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar19;
        }
        bVar14 = -(char)(iVar26 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar27 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar9 & 0x1f;
    puVar1 = (uint *)((longlong)plVar19 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar27 = (longlong)iVar25;
    iVar9 = *(int *)(*param_1 + 4 + lVar27 * 0x20);
    *(int *)(param_1 + 6) = iVar9;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar23 = 1;
  puVar18 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar18 = puVar1;
  }
  iVar9 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar9 = iVar25;
  }
  puVar18[iVar9 >> 5] = puVar18[iVar9 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  lVar22 = *param_1;
  lVar27 = lVar27 * 0x20;
  puVar29 = (undefined8 *)(lVar22 + lVar27);
  *(undefined8 *)(lVar22 + lVar27) = 0;
  ((undefined8 *)(lVar22 + lVar27))[1] = 0;
  *(undefined8 *)(lVar22 + 0x10 + lVar27) = 0;
  *(undefined8 *)(lVar22 + lVar27) = *param_3;
  uVar10 = FUN_14477b664(param_3[1]);
  lVar11 = FUN_14477b664(uVar10);
  *(longlong *)(lVar22 + 8 + lVar27) = lVar11;
  *(undefined8 *)(lVar22 + 0x10 + lVar27) = param_3[2];
  *(undefined4 *)(lVar22 + 0x18 + lVar27) = 0xffffffff;
  if (lVar11 == 0) {
    lVar11 = FUN_140c1c194();
  }
  uVar10 = *puVar29;
  uVar12 = FUN_14477b664(lVar11);
  uVar8 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  uVar15 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar15 = uVar15 >> 0x10 ^ uVar15;
  uVar8 = (uint)((ulonglong)uVar10 >> 0x10);
  uVar20 = (uint)uVar10 & 0xffff;
  uVar8 = uVar15 >> 0xd ^
          (((uint)uVar10 << 0x10 | uVar20) + (int)((ulonglong)uVar10 >> 0x20) +
           (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar20 >> 4)) - uVar15;
  uVar20 = uVar8 << 8 ^ (-0x61c88647 - uVar15) - uVar8;
  uVar24 = uVar20 >> 0xd ^ (uVar15 - uVar8) - uVar20;
  uVar8 = uVar24 >> 0xc ^ (uVar8 - uVar20) - uVar24;
  uVar15 = uVar8 << 0x10 ^ (uVar20 - uVar24) - uVar8;
  uVar20 = uVar15 >> 5 ^ (uVar24 - uVar8) - uVar15;
  uVar8 = uVar20 >> 3 ^ (uVar8 - uVar15) - uVar20;
  uVar15 = uVar8 << 10 ^ (uVar15 - uVar20) - uVar8;
  uVar8 = uVar15 >> 0xf ^ uVar20 - (uVar8 + uVar15);
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar15 = 1;
  }
  else {
    iVar9 = FUN_140951e20(param_1,uVar8,puVar29);
    if (iVar9 != -1) {
      lVar27 = *param_1;
      uVar3 = *(undefined4 *)puVar29;
      uVar4 = *(undefined4 *)((longlong)puVar29 + 4);
      uVar5 = *(undefined4 *)(puVar29 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar29 + 0xc);
      *(undefined8 *)(lVar27 + 0x10 + (longlong)iVar9 * 0x20) = puVar29[2];
      puVar2 = (undefined4 *)(lVar27 + (longlong)iVar9 * 0x20);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_1487be8da(param_1,iVar25);
      iVar25 = iVar9;
      goto LAB_14095268f;
    }
    uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (3 < uVar15) {
      uVar12 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar27 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uVar23 = 1 << ((byte)lVar27 & 0x1f);
    }
  }
  if (((int)uVar15 < 1) || ((int)uVar23 <= (int)param_1[9])) {
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)puVar29 + 0x1c) = uVar8;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(undefined4 *)(puVar29 + 3) =
         *(undefined4 *)
          ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(int *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar25;
    goto LAB_14095268f;
  }
  *(uint *)(param_1 + 9) = uVar23;
  plVar19 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar19,0,0,4);
    uVar23 = *(uint *)(param_1 + 9);
  }
  plVar21 = param_1 + 7;
  if (uVar23 == 1) {
    if (*plVar19 != 0) {
      FUN_1446efa72(plVar19,0,0,4);
    }
LAB_1409521a9:
    uVar8 = 0;
    do {
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = plVar21;
      }
      *(undefined4 *)((longlong)plVar19 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
           0xffffffff;
      uVar8 = uVar8 + 1;
    } while (uVar23 != uVar8);
  }
  else {
    if (uVar23 == 0) goto LAB_14095268f;
    FUN_1446efa72(plVar19,0,uVar23,4);
    if (0 < (int)uVar23) goto LAB_1409521a9;
  }
  iVar9 = (int)param_1[5];
  if (iVar9 == 0) {
    uVar28 = 0;
    uVar12 = 1;
    iVar7 = 0;
    iVar26 = 0;
  }
  else {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar23 = *puVar18;
    if (uVar23 == 0) {
      iVar7 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar7 = iVar9 + -1;
      }
      uVar28 = 0;
      uVar12 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar12 = uVar28;
      }
      iVar26 = 0;
      do {
        if (uVar12 == uVar28) goto LAB_14095268f;
        iVar26 = iVar26 + 0x20;
        uVar23 = puVar18[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar28 = 0;
      iVar26 = 0;
    }
    uVar12 = (ulonglong)(-uVar23 & uVar23);
    uVar13 = uVar12 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar7 = (iVar26 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar7) {
      iVar7 = iVar9;
    }
  }
  if (iVar7 < iVar9) {
    uVar23 = 0xffffffff;
    do {
      lVar27 = *param_1;
      lVar22 = *(longlong *)(lVar27 + 8 + (longlong)iVar7 * 0x20);
      if (lVar22 == 0) {
        lVar22 = FUN_140c1c194();
      }
      puVar29 = (undefined8 *)(lVar27 + (longlong)iVar7 * 0x20);
      uVar10 = *puVar29;
      uVar13 = FUN_14477b664(lVar22);
      uVar8 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar15 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar15 = uVar15 >> 0x10 ^ uVar15;
      uVar8 = (uint)((ulonglong)uVar10 >> 0x10);
      uVar20 = (uint)uVar10 & 0xffff;
      uVar8 = uVar15 >> 0xd ^
              (((uint)uVar10 << 0x10 | uVar20) + (int)((ulonglong)uVar10 >> 0x20) +
               (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar20 >> 4)) - uVar15;
      uVar20 = uVar8 << 8 ^ (-0x61c88647 - uVar15) - uVar8;
      uVar24 = uVar20 >> 0xd ^ (uVar15 - uVar8) - uVar20;
      uVar8 = uVar24 >> 0xc ^ (uVar8 - uVar20) - uVar24;
      uVar15 = uVar8 << 0x10 ^ (uVar20 - uVar24) - uVar8;
      uVar20 = uVar15 >> 5 ^ (uVar24 - uVar8) - uVar15;
      uVar24 = uVar20 >> 3 ^ (uVar8 - uVar15) - uVar20;
      uVar8 = uVar24 << 10 ^ (uVar15 - uVar20) - uVar24;
      uVar13 = (longlong)(int)(uVar8 >> 0xf ^ uVar20 - (uVar24 + uVar8)) &
               (longlong)(int)param_1[9] - 1U;
      iVar9 = (int)uVar13;
      *(int *)((longlong)puVar29 + 0x1c) = iVar9;
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = plVar21;
      }
      *(undefined4 *)(puVar29 + 3) =
           *(undefined4 *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = plVar21;
      }
      *(int *)((longlong)plVar19 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar23 = uVar23 & ~(uint)uVar12;
      puVar18 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar18 = puVar1;
      }
      iVar9 = (int)param_1[5];
      iVar7 = (int)uVar28;
      lVar27 = (longlong)iVar7;
      uVar8 = puVar18[lVar27] & uVar23;
      if (uVar8 == 0) {
        iVar16 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar16 = iVar9 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar17 = iVar16;
        if (iVar16 < iVar7) {
          iVar17 = iVar7;
        }
        if (iVar16 <= iVar7) break;
        lVar22 = 0;
        while( true ) {
          iVar26 = iVar26 + 0x20;
          uVar8 = puVar18[lVar27 + lVar22 + 1];
          if (uVar8 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar17 - lVar27 == lVar22) goto LAB_14095268f;
        }
        uVar28 = (ulonglong)(iVar7 + (int)lVar22 + 1);
        uVar23 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar8 & uVar8);
      uVar13 = uVar12 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar7 = (iVar26 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar9);
  }
LAB_14095268f:
  *param_2 = iVar25;
  return param_2;
}



// FUNCTION 1409526ec FUN_1409526ec body=77 status=ok
// SIG undefined FUN_1409526ec(void)

void FUN_1409526ec(longlong *param_1)

{
  char cVar1;
  
  if (((*(int *)((longlong)param_1 + 0x94) != 0) && (0 < (int)param_1[0x21])) &&
     ((*(byte *)(param_1 + 5) & 1) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x3d8))(param_1);
    if (cVar1 != '\0') {
      FUN_14107507c(param_1,1);
    }
  }
  FUN_1447f69b6(param_1 + 8);
  return;
}



// FUNCTION 14095273a FUN_14095273a body=170 status=ok
// SIG undefined FUN_14095273a(void)

void FUN_14095273a(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = (longlong)param_2;
  lVar3 = lVar4 * 0x420;
  FUN_1409527e4(param_3,*(longlong *)(param_1 + 0x80) + lVar3);
  lVar2 = *(longlong *)(param_1 + 0x80);
  *(undefined4 *)(lVar2 + 0x410 + lVar3) = 0;
  if (*(int *)(lVar2 + 0x414 + lVar3) < 0) {
    FUN_1471e6f36(lVar2 + lVar3,0);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar4 * 8);
  if (iVar1 == -1) {
    return;
  }
  iVar5 = 0;
  do {
    FUN_14095273a(param_1,iVar1 + iVar5,param_3);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar4 * 8) = 0xffffffff;
  FUN_140952870(param_1,iVar1);
  return;
}



// FUNCTION 1409527e4 FUN_1409527e4 body=139 status=ok
// SIG undefined FUN_1409527e4(void)

void FUN_1409527e4(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x410);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x410);
    *(uint *)(param_1 + 0x410) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x414) - iVar2) < uVar1) {
      FUN_14573bb12(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x400);
    if (*(void **)((longlong)param_2 + 0x400) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)((longlong)iVar2 * 0x40 + lVar3),_Src,(longlong)(int)uVar1 << 6);
    *(undefined4 *)((longlong)param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 140952870 FUN_140952870 body=116 status=ok
// SIG undefined FUN_140952870(void)

void FUN_140952870(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)(param_2 + (int)lVar2) * 8) =
         0xffffffff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  uVar3 = param_2 - 1U >> 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar3 * 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x90),iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 4) = uVar3;
  return;
}



// FUNCTION 1409528e4 FUN_1409528e4 body=6860 status=ok
// SIG undefined FUN_1409528e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1409528e4(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  uint uVar18;
  bool bVar19;
  double *pdVar20;
  float fVar21;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  float fVar32;
  undefined1 auVar31 [16];
  float fVar36;
  double dVar33;
  double dVar34;
  float fVar37;
  undefined1 auVar35 [16];
  float fVar39;
  double dVar38;
  float fVar40;
  double dVar41;
  double dVar42;
  int iVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar48;
  undefined1 auVar45 [16];
  double dVar47;
  float fVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  longlong lVar55;
  undefined1 auVar54 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar59 [16];
  double dVar60;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 auStack_3a8 [36];
  byte local_384;
  byte local_383;
  byte local_382;
  byte local_381;
  longlong *local_380;
  float local_374;
  undefined4 local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  int local_354;
  int local_350;
  int local_34c;
  longlong local_348;
  longlong local_340;
  int *local_338;
  longlong *local_330;
  longlong local_328;
  longlong local_320;
  int local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  longlong local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  float local_294;
  float local_290;
  float local_28c;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [8];
  float fStack_260;
  float fStack_25c;
  longlong local_258;
  longlong local_250;
  float local_244 [3];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  float local_1d8 [4];
  undefined8 local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  float local_198 [6];
  char local_180;
  char local_17f;
  int local_17c;
  longlong alStack_178 [4];
  char local_158;
  char local_157;
  int local_154;
  longlong alStack_150 [3];
  undefined8 local_138;
  longlong alStack_130 [4];
  char local_110;
  byte local_10f;
  int local_10c;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined1 auStack_fc [12];
  ulonglong local_f0;
  
  dVar34 = (double)CONCAT44(unaff_XMM15_Dd,unaff_XMM15_Dc);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar7 = *(longlong *)(param_4 + 0x10);
  local_320 = *(longlong *)(lVar7 + 0x78);
  if (((local_320 == 0) || (lVar16 = *(longlong *)(param_4 + 8), lVar16 == 0)) ||
     (cVar3 = FUN_144a47c72(param_1,param_3), iVar25 = DAT_14c9647dc, lVar24 = DAT_14c9647c8,
     cVar3 == '\0')) {
    FUN_14111ebe2(param_1);
    goto LAB_140953767;
  }
  local_328 = *(longlong *)(lVar16 + 0x30);
  local_380 = param_1;
  if ((((*(int *)(lVar16 + 0x4c) == 0) || (uVar4 = *(uint *)(lVar16 + 0x48), (int)uVar4 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar4 ||
       ((plVar22 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(lVar16 + 0x4c))))))) ||
     ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) {
LAB_1409538ef:
    *(undefined4 *)(param_1 + 0x24) = 0;
    local_340 = 0;
    iVar25 = 0;
  }
  else {
    local_340 = *plVar22;
    if (local_340 == 0) goto LAB_1409538ef;
    uVar4 = *(uint *)(local_340 + 0xc);
    *(uint *)(param_1 + 0x24) = uVar4;
    if ((int)uVar4 < iVar25) {
      lVar24 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(lVar24 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar24 = 0;
    }
    iVar25 = *(int *)(lVar24 + 0x10);
    if (*(int *)(lVar24 + 0x10) == 0) {
      LOCK();
      iVar25 = DAT_14c964868 + 1;
      UNLOCK();
      iVar23 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar25;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar23);
      }
      LOCK();
      iVar25 = *(int *)(lVar24 + 0x10);
      bVar19 = iVar25 == 0;
      if (bVar19) {
        *(int *)(lVar24 + 0x10) = iVar23;
        iVar25 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar25 = iVar23;
      }
    }
  }
  plVar22 = local_380;
  *(int *)((longlong)param_1 + 0x124) = iVar25;
  if ((*(byte *)(local_380 + 0x1e) & 1) == 0) {
    if (*(char *)(param_2 + 0x388) == '\x01') {
      local_2c8 = *(double *)(lVar16 + 0x50);
      dStack_2c0 = *(double *)(lVar16 + 0x58);
      local_2d8 = *(double *)(lVar16 + 0x60);
      dStack_2d0 = *(double *)(lVar16 + 0x68);
      local_2e8 = *(double *)(lVar16 + 0x70);
      dStack_2e0 = *(double *)(lVar16 + 0x78);
      local_2f8 = *(double *)(lVar16 + 0x80);
      dStack_2f0 = *(double *)(lVar16 + 0x88);
      local_278 = *(double *)(lVar16 + 0x90);
      dStack_270 = *(double *)(lVar16 + 0x98);
      local_288 = *(double *)(lVar16 + 0xa0);
      dStack_280 = *(double *)(lVar16 + 0xa8);
    }
    else {
      local_2c8 = 0.0;
      dStack_2c0 = 0.0;
      local_2d8 = 0.0;
      dStack_2d0 = 1.0;
      local_278 = 1.0;
      dStack_270 = 1.0;
      local_288 = 1.0;
      dStack_280 = 0.0;
      local_2f8 = 0.0;
      dStack_2f0 = 0.0;
      local_2e8 = 0.0;
      dStack_2e0 = 0.0;
    }
    local_2e8 = (double)*(float *)(lVar16 + 0xc) * 65536.0 + local_2e8;
    dStack_2e0 = (double)*(float *)(lVar16 + 0x10) * 65536.0 + dStack_2e0;
    local_2f8 = (double)*(float *)(lVar16 + 0x14) * 65536.0 + local_2f8;
    dStack_2f0 = dStack_2f0 + 0.0;
    if (*(char *)(param_2 + 0x388) != '\0') goto LAB_140952afc;
    dVar57 = *(double *)(lVar16 + 0x80);
    pdVar20 = (double *)(lVar16 + 0x70);
  }
  else {
    local_2c8 = *(double *)(lVar16 + 0x50);
    dStack_2c0 = *(double *)(lVar16 + 0x58);
    local_2d8 = *(double *)(lVar16 + 0x60);
    dStack_2d0 = *(double *)(lVar16 + 0x68);
    local_278 = *(double *)(lVar16 + 0x90);
    dStack_270 = *(double *)(lVar16 + 0x98);
    local_288 = *(double *)(lVar16 + 0xa0);
    dStack_280 = *(double *)(lVar16 + 0xa8);
    local_2e8 = (double)*(float *)(lVar16 + 0xc) * 65536.0 + *(double *)(lVar16 + 0x70);
    dStack_2e0 = (double)*(float *)(lVar16 + 0x10) * 65536.0 + *(double *)(lVar16 + 0x78);
    local_2f8 = (double)*(float *)(lVar16 + 0x14) * 65536.0 + *(double *)(lVar16 + 0x80);
    dStack_2f0 = *(double *)(lVar16 + 0x88) + 0.0;
LAB_140952afc:
    pdVar20 = (double *)&DAT_14c8464e0;
    dVar57 = DAT_14c8464f0;
  }
  local_28c = (float)dVar57;
  local_290 = (float)pdVar20[1];
  local_294 = (float)*pdVar20;
  local_138 = 0xc2b40000;
  alStack_130[0] = CONCAT44(alStack_130[0]._4_4_,0x42b40000);
  pfVar11 = local_198;
  FUN_1409545ce(&local_138,pfVar11);
  local_244[0] = 50.0;
  local_244[1] = 50.0;
  local_244[2] = 50.0;
  if ((int)plVar22[0x21] == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(longlong *)plVar22[0x20];
  }
  if (*(int *)((longlong)plVar22 + 300) == 0) {
LAB_1409538ff:
    lVar24 = 0;
  }
  else {
    uVar4 = *(uint *)(plVar22 + 0x25);
    lVar24 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)((longlong)plVar22 + 300) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1409538ff;
      lVar24 = *plVar13;
    }
  }
  if (lVar16 != lVar24) {
    if (lVar16 == 0) {
      *(undefined4 *)(plVar22 + 0x25) = 0;
      iVar25 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar16 + 0xc);
      *(uint *)(plVar22 + 0x25) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar24 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar24 = 0;
      }
      iVar25 = *(int *)(lVar24 + 0x10);
      if (*(int *)(lVar24 + 0x10) == 0) {
        LOCK();
        iVar25 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar25;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
        }
        LOCK();
        iVar25 = *(int *)(lVar24 + 0x10);
        bVar19 = iVar25 == 0;
        if (bVar19) {
          *(int *)(lVar24 + 0x10) = iVar23;
          iVar25 = 0;
        }
        UNLOCK();
        plVar22 = local_380;
        if (bVar19) {
          iVar25 = iVar23;
        }
      }
    }
    *(int *)((longlong)plVar22 + 300) = iVar25;
    FUN_14111ebe2(plVar22);
  }
  if ((((0 < *(int *)(param_3 + 0x2a0)) || (0 < *(int *)(param_3 + 0x2b0))) ||
      (0 < *(int *)(param_3 + 0x2c0))) || (0 < *(int *)(param_3 + 0x2d0))) {
    local_1a8 = plVar22[0x20];
    local_1a0 = (undefined4)plVar22[0x21];
    (**(code **)(*plVar22 + 0x80))(plVar22,param_3 + 0x298,param_4);
  }
  local_1b8 = 0;
  uStack_1b0 = 0;
  iVar25 = *(int *)(local_320 + 0x120);
  if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar25);
  }
  if (iVar25 != 0) {
    FUN_1409544f6(&local_1b8);
  }
  plVar13 = (longlong *)(param_4 + 0x40);
  piVar5 = (int *)(**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))(plVar13,param_3 + 0x248,0);
  if (piVar5 == (int *)0x0) {
    local_308._0_4_ = 0xffffffff;
  }
  else {
    local_308._0_4_ = 0xffffffff;
    if ((longlong)*piVar5 != -1) {
      local_308._0_4_ = *(undefined4 *)(*(longlong *)(param_4 + 0x60) + (longlong)*piVar5);
    }
  }
  piVar5 = (int *)(param_3 + 0xd0);
  piVar6 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,param_3 + 0x280,0);
  piVar9 = piVar5;
  if ((piVar6 != (int *)0x0) && ((longlong)*piVar6 != -1)) {
    piVar9 = (int *)((longlong)*piVar6 + *(longlong *)(param_4 + 0x60));
  }
  local_34c = *piVar9;
  local_338 = piVar5;
  piVar5 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,param_3 + 0xf8,0);
  pfVar10 = &local_294;
  if ((piVar5 != (int *)0x0) && ((longlong)*piVar5 != -1)) {
    pfVar10 = (float *)((longlong)*piVar5 + *(longlong *)(param_4 + 0x60));
  }
  local_364 = *pfVar10;
  local_368 = pfVar10[1];
  local_36c = pfVar10[2];
  piVar5 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,param_3 + 0x130,0);
  if ((piVar5 != (int *)0x0) && ((longlong)*piVar5 != -1)) {
    pfVar11 = (float *)((longlong)*piVar5 + *(longlong *)(param_4 + 0x60));
  }
  fVar21 = *pfVar11;
  fVar40 = pfVar11[1];
  fVar49 = pfVar11[2];
  fVar28 = pfVar11[3];
  fVar27 = fVar21 * fVar21 + fVar40 * fVar40;
  fVar32 = fVar49 * fVar49 + fVar28 * fVar28;
  auVar43._0_4_ = fVar32 + fVar27;
  auVar43._4_4_ = fVar32 + fVar27;
  auVar43._8_4_ = fVar27 + fVar32;
  auVar43._12_4_ = fVar27 + fVar32;
  auVar59._4_4_ = -(uint)(1e-08 <= auVar43._4_4_);
  auVar59._0_4_ = -(uint)(1e-08 <= auVar43._0_4_);
  auVar59._8_4_ = -(uint)(1e-08 <= auVar43._8_4_);
  auVar59._12_4_ = -(uint)(1e-08 <= auVar43._12_4_);
  auVar43 = sqrtps(auVar43,auVar43);
  auVar52 = divps(_DAT_1499314a0,auVar43);
  auVar63._0_4_ = auVar52._0_4_ * fVar21;
  auVar63._4_4_ = auVar52._4_4_ * fVar40;
  auVar63._8_4_ = auVar52._8_4_ * fVar49;
  auVar63._12_4_ = auVar52._12_4_ * fVar28;
  auVar52 = blendvps(_DAT_149932320,auVar63,auVar59);
  piVar5 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,param_3 + 0x168,0);
  pfVar11 = local_244;
  if ((piVar5 != (int *)0x0) && ((longlong)*piVar5 != -1)) {
    pfVar11 = (float *)((longlong)*piVar5 + *(longlong *)(param_4 + 0x60));
  }
  local_358 = *pfVar11;
  local_35c = pfVar11[1];
  local_360 = pfVar11[2];
  piVar5 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,param_3 + 0x210,0);
  puVar14 = &DAT_149e1e2f8;
  if ((piVar5 != (int *)0x0) && ((longlong)*piVar5 != -1)) {
    puVar14 = (undefined8 *)((longlong)*piVar5 + *(longlong *)(param_4 + 0x60));
  }
  local_1c8 = *puVar14;
  lStack_1c0 = puVar14[1];
  local_370 = 0;
  piVar5 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,param_3 + 0x1a0,0);
  local_374 = 1.0;
  if ((piVar5 != (int *)0x0) && ((longlong)*piVar5 != -1)) {
    local_374 = *(float *)(*(longlong *)(param_4 + 0x60) + (longlong)*piVar5);
  }
  piVar5 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,param_3 + 0x1d8,0);
  plVar13 = local_380;
  if ((piVar5 != (int *)0x0) && ((longlong)*piVar5 != -1)) {
    local_370 = *(undefined4 *)(*(longlong *)(param_4 + 0x60) + (longlong)*piVar5);
  }
  _local_268 = auVar52;
  if (*(char *)(param_3 + 0xcc) == '\0') {
    iVar25 = *(int *)(param_3 + 0x2ec);
    local_10f = *(byte *)(param_3 + 0x2e8);
    lVar24 = *(longlong *)(lVar7 + 0x78);
    local_110 = '\0';
    local_10c = 0;
    lStack_108 = 0;
    uStack_100 = 0;
    auStack_fc = SUB1612((undefined1  [16])0x0,4);
    if ((iVar25 != -1) && (lVar24 != 0)) {
      local_110 = '\x01';
      uVar17 = *(undefined4 *)(lVar24 + 0x128 + (ulonglong)(local_10f ^ 1) * 8);
      lVar2 = *(longlong *)(lVar24 + 0x18 + (ulonglong)(local_10f ^ 1) * 0x20);
      auVar35._4_4_ = uVar17;
      auVar35._0_4_ = uVar17;
      auVar35._8_8_ = 0;
      auVar44 = pmovsxbd(auVar43,0x100);
      auVar53 = pmovsxbq(auVar63,0x100);
      lVar15 = 0;
      auVar59 = pmovsxbq(unaff_XMM6,0x202);
      auVar43 = pmovsxbd(unaff_XMM7,0x2020202);
      do {
        auVar62._0_4_ = iVar25 + auVar44._0_4_;
        iVar23 = auVar44._4_4_;
        auVar62._4_4_ = iVar25 + iVar23;
        iVar46 = auVar44._8_4_;
        auVar62._8_4_ = iVar46;
        iVar48 = auVar44._12_4_;
        auVar62._12_4_ = iVar48;
        auVar63 = pmulld(auVar62,auVar35);
        auVar63 = pmovzxdq(auVar63,auVar63);
        if (SUB168(auVar53 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
          (&lStack_108)[lVar15] = auVar63._0_8_ + lVar2;
        }
        if (SUB168(auVar53 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
          *(longlong *)(auStack_fc + lVar15 * 8 + -4) = auVar63._8_8_ + lVar2;
        }
        lVar15 = lVar15 + 2;
        lVar55 = auVar53._8_8_;
        auVar53._0_8_ = auVar53._0_8_ + auVar59._0_8_;
        auVar53._8_8_ = lVar55 + auVar59._8_8_;
        auVar44._0_4_ = auVar44._0_4_ + auVar43._0_4_;
        auVar44._4_4_ = iVar23 + auVar43._4_4_;
        auVar44._8_4_ = iVar46 + auVar43._8_4_;
        auVar44._12_4_ = iVar48 + auVar43._12_4_;
      } while (lVar15 != 4);
      local_10c = *(int *)(lVar24 + 0x120);
    }
    FUN_140954484(&local_138,lVar24,*(undefined1 *)(param_3 + 0x2f0),
                  *(undefined4 *)(param_3 + 0x2f4));
    FUN_14060d608(&local_158,*(undefined8 *)(lVar7 + 0x78),*(undefined1 *)(param_3 + 0x2f8),
                  *(undefined4 *)(param_3 + 0x2fc));
    FUN_144a47c00(&local_180,*(undefined8 *)(lVar7 + 0x78),*(undefined1 *)(param_3 + 0x30c),
                  *(undefined4 *)(param_3 + 0x310));
    local_384 = *(byte *)(param_3 + 0x300);
    lVar7 = *(longlong *)(lVar7 + 0x78);
    local_382 = *(int *)(param_3 + 0x304) != -1 && lVar7 != 0;
    iVar23 = 0;
    if ((bool)local_382) {
      local_2a8 = (ulonglong)
                  (uint)(*(int *)(param_3 + 0x304) *
                        *(int *)(lVar7 + 0x128 + (ulonglong)(local_384 ^ 1) * 8)) +
                  *(longlong *)(lVar7 + 0x18 + (ulonglong)(local_384 ^ 1) * 0x20);
      local_354 = *(int *)(lVar7 + 0x120);
    }
    else {
      local_354 = 0;
      local_2a8 = 0;
    }
    iVar25 = *(int *)(param_3 + 0x308);
    local_383 = iVar25 != -1 && lVar7 != 0;
    if (iVar25 != -1 && lVar7 != 0) {
      lVar24 = (ulonglong)(uint)(iVar25 * *(int *)(lVar7 + 300)) + *(longlong *)(lVar7 + 0x28);
      iVar23 = *(int *)(lVar7 + 0x120);
    }
    else {
      lVar24 = 0;
    }
    local_381 = *(int *)(param_3 + 0x314) != -1 && lVar7 != 0;
    local_2a0 = 0;
    if ((bool)local_381) {
      local_2b0 = (ulonglong)(uint)(*(int *)(param_3 + 0x314) * *(int *)(lVar7 + 300)) +
                  *(longlong *)(lVar7 + 0x28);
      local_350 = *(int *)(lVar7 + 0x120);
    }
    else {
      local_2b0 = 0;
      local_350 = 0;
    }
    bVar19 = *(int *)(param_3 + 0x318) != -1 && lVar7 != 0;
    if (bVar19) {
      local_258 = (ulonglong)(uint)(*(int *)(param_3 + 0x318) * *(int *)(lVar7 + 300)) +
                  *(longlong *)(lVar7 + 0x28);
      local_2a0 = (ulonglong)*(uint *)(lVar7 + 0x120);
    }
    else {
      local_258 = 0;
    }
    local_250 = lVar16;
    uVar4 = *(uint *)(local_320 + 0x120);
    iVar25 = 0;
    if (uVar4 != 0) {
      bVar26 = local_308._0_4_ != 0;
      local_308._0_4_ = -local_308._0_4_;
      local_318 = -(uint)bVar26;
      local_330 = plVar22 + 0x26;
      local_1f8 = dStack_2d0;
      dStack_1f0 = dStack_2d0;
      local_1e8 = local_2c8;
      dStack_1e0 = dStack_2d0;
      local_208 = dStack_2c0;
      dStack_200 = local_2d8;
      local_218._8_8_ = local_2c8;
      local_218._0_8_ = local_2c8;
      local_228 = dStack_2c0;
      dStack_220 = dStack_2c0;
      uVar18 = 0;
      local_238 = local_2d8;
      dStack_230 = local_2d8;
      dVar57 = local_2d8;
      dVar30 = local_2d8;
      do {
        iVar46 = local_318;
        if (((int)uVar18 < local_350 & local_381) == 1) {
          iVar46 = *(int *)(local_2b0 + (longlong)(int)uVar18 * 4);
        }
        iVar48 = local_34c;
        if ((int)uVar18 < (int)local_2a0 && bVar19) {
          iVar48 = *(int *)(local_258 + (longlong)(int)uVar18 * 4);
        }
        if ((iVar46 != 0) && (iVar48 == *local_338)) {
          lVar7 = (longlong)(int)uVar18;
          if ((local_110 == '\x01') && ((int)uVar18 < local_10c)) {
            if (local_10f == 0) {
              lVar16 = 0;
              do {
                uVar1 = *(ushort *)((&lStack_108)[lVar16] + lVar7 * 2);
                uVar4 = (uint)uVar1 << 0xd;
                if ((uVar4 & 0xf800000) == 0xf800000) {
                  fVar21 = (float)(uVar4 | 0x70000000);
                }
                else if ((uVar4 & 0xf800000) == 0) {
                  fVar21 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar21 = (float)((uVar4 & 0xfffe000) + 0x38000000);
                }
                local_1d8[lVar16] = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar21);
                lVar16 = lVar16 + 1;
                auVar52 = _local_268;
                dVar57 = local_238;
                dVar30 = dStack_230;
              } while (lVar16 != 3);
            }
            else {
              lVar16 = 0;
              do {
                local_1d8[lVar16] = *(float *)((&lStack_108)[lVar16] + lVar7 * 4);
                lVar16 = lVar16 + 1;
              } while (lVar16 != 3);
            }
          }
          else {
            local_1d8[0] = local_364;
            local_1d8[1] = local_368;
            local_1d8[2] = local_36c;
          }
          fVar49 = local_1d8[2];
          fVar40 = local_1d8[1];
          fVar21 = local_1d8[0];
          if (((char)local_138 == '\x01') && ((int)uVar18 < local_138._4_4_)) {
            lVar16 = 0;
            do {
              local_1d8[lVar16] = *(float *)(alStack_130[lVar16] + lVar7 * 4);
              lVar16 = lVar16 + 1;
            } while (lVar16 != 4);
            auVar52._4_4_ = local_1d8[1];
            auVar52._0_4_ = local_1d8[0];
            auVar52._8_4_ = local_1d8[2];
            auVar52._12_4_ = local_1d8[3];
          }
          fVar32 = auVar52._0_4_;
          fVar36 = auVar52._4_4_;
          fVar37 = auVar52._8_4_;
          fVar39 = auVar52._12_4_;
          fVar28 = fVar32 * fVar32 + fVar36 * fVar36;
          fVar27 = fVar37 * fVar37 + fVar39 * fVar39;
          auVar45._0_4_ = fVar27 + fVar28;
          auVar45._4_4_ = fVar27 + fVar28;
          auVar45._8_4_ = fVar28 + fVar27;
          auVar45._12_4_ = fVar28 + fVar27;
          auVar31._4_4_ = -(uint)(1e-08 <= auVar45._4_4_);
          auVar31._0_4_ = -(uint)(1e-08 <= auVar45._0_4_);
          auVar31._8_4_ = -(uint)(1e-08 <= auVar45._8_4_);
          auVar31._12_4_ = -(uint)(1e-08 <= auVar45._12_4_);
          auVar52 = sqrtps(auVar45,auVar45);
          auVar52 = divps(_DAT_1499314a0,auVar52);
          auVar54._0_4_ = auVar52._0_4_ * fVar32;
          auVar54._4_4_ = auVar52._4_4_ * fVar36;
          auVar54._8_4_ = auVar52._8_4_ * fVar37;
          auVar54._12_4_ = auVar52._12_4_ * fVar39;
          auVar52 = blendvps(_DAT_149932320,auVar54,auVar31);
          dVar56 = (double)auVar52._4_4_;
          dVar58 = (double)auVar52._0_4_;
          local_308._8_4_ = SUB84(dVar34,0);
          local_308._0_8_ = dVar56;
          local_308._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          if ((local_158 == '\x01') && ((int)uVar18 < local_154)) {
            if (local_157 == '\0') {
              lVar16 = 0;
              do {
                uVar1 = *(ushort *)(alStack_150[lVar16] + lVar7 * 2);
                uVar4 = (uint)uVar1 << 0xd;
                if ((uVar4 & 0xf800000) == 0xf800000) {
                  fVar28 = (float)(uVar4 | 0x70000000);
                }
                else if ((uVar4 & 0xf800000) == 0) {
                  fVar28 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar28 = (float)((uVar4 & 0xfffe000) + 0x38000000);
                }
                local_1d8[lVar16] = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar28);
                lVar16 = lVar16 + 1;
              } while (lVar16 != 3);
            }
            else {
              lVar16 = 0;
              do {
                local_1d8[lVar16] = *(float *)(alStack_150[lVar16] + lVar7 * 4);
                lVar16 = lVar16 + 1;
              } while (lVar16 != 3);
            }
          }
          else {
            local_1d8[0] = local_358;
            local_1d8[1] = local_35c;
            local_1d8[2] = local_360;
          }
          local_30c = local_1d8[2] * 0.5;
          local_310 = local_1d8[1] * 0.5;
          fVar28 = local_1d8[0] * 0.5;
          if ((local_180 == '\x01') && ((int)uVar18 < local_17c)) {
            if (local_17f == '\0') {
              lVar16 = 0;
              do {
                uVar1 = *(ushort *)(alStack_178[lVar16] + lVar7 * 2);
                uVar4 = (uint)uVar1 << 0xd;
                if ((uVar4 & 0xf800000) == 0xf800000) {
                  fVar27 = (float)(uVar4 | 0x70000000);
                }
                else if ((uVar4 & 0xf800000) == 0) {
                  fVar27 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar27 = (float)((uVar4 & 0xfffe000) + 0x38000000);
                }
                local_1d8[lVar16] = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar27);
                lVar16 = lVar16 + 1;
              } while (lVar16 != 4);
            }
            else {
              lVar16 = 0;
              do {
                local_1d8[lVar16] = *(float *)(alStack_178[lVar16] + lVar7 * 4);
                lVar16 = lVar16 + 1;
              } while (lVar16 != 4);
            }
          }
          else {
            local_1d8[0] = (float)local_1c8;
            local_1d8[1] = (float)((ulonglong)local_1c8 >> 0x20);
            local_1d8[2] = (float)lStack_1c0;
            local_1d8[3] = (float)((ulonglong)lStack_1c0 >> 0x20);
          }
          fVar27 = local_374;
          if (((int)uVar18 < local_354 & local_382) == 1) {
            if (local_384 == 0) {
              uVar1 = *(ushort *)(local_2a8 + lVar7 * 2);
              uVar4 = (uint)uVar1 << 0xd;
              if ((uVar4 & 0xf800000) == 0xf800000) {
                fVar27 = (float)(uVar4 | 0x70000000);
              }
              else if ((uVar4 & 0xf800000) == 0) {
                fVar27 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar27 = (float)((uVar4 & 0xfffe000) + 0x38000000);
              }
              fVar27 = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar27);
            }
            else {
              fVar27 = *(float *)(local_2a8 + lVar7 * 4);
            }
          }
          uVar17 = local_370;
          if (((int)uVar18 < iVar23 & local_383) == 1) {
            uVar17 = *(undefined4 *)(lVar24 + lVar7 * 4);
          }
          puVar8 = (undefined4 *)FUN_1409543b2(&local_1b8);
          local_314 = fVar27;
          if (iVar25 < (int)local_380[0x27]) {
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(*local_330 + (longlong)iVar25 * 8);
            *puVar8 = 1;
          }
          else {
            local_348 = FUN_14001cc68(0xe0,0x10);
            FUN_1409548bc(local_348,local_340,local_250);
            *(longlong *)(puVar8 + 2) = local_348;
            *puVar8 = 0;
            lVar7 = (longlong)(int)local_380[0x27];
            uVar4 = (int)local_380[0x27] + 1;
            *(uint *)(local_380 + 0x27) = uVar4;
            if (*(uint *)((longlong)local_380 + 0x13c) < uVar4) {
              local_348 = lVar7;
              FUN_140954a96(local_330,lVar7);
              lVar7 = local_348;
            }
            *(undefined8 *)(*local_330 + lVar7 * 8) = *(undefined8 *)(puVar8 + 2);
          }
          dVar33 = (double)fVar21 * local_278;
          dVar38 = (double)fVar40 * dStack_270;
          dVar50 = (double)fVar49 * local_288;
          dVar41 = dVar38 * local_2c8 - local_208 * dVar33;
          dVar47 = dVar50 * dStack_2c0 - dStack_200 * dVar38;
          dVar29 = dVar33 * local_2d8 - local_1e8 * dVar50;
          dVar47 = dVar47 + dVar47;
          dVar29 = dVar29 + dVar29;
          dVar41 = dVar41 + dVar41;
          dVar42 = (double)auVar52._12_4_;
          dVar51 = (double)auVar52._8_4_;
          auVar61._0_8_ =
               dVar57 * dVar56 * -1.0 +
               dVar51 * local_228 + (double)local_218._0_8_ * dVar42 * 1.0 + local_1f8 * dVar58;
          auVar61._8_8_ =
               dVar30 * dVar58 * 1.0 +
               dVar42 * dStack_220 +
               (double)local_218._8_8_ * dVar51 * -1.0 + dStack_1f0 * (double)local_308._0_8_;
          dVar34 = (dVar58 * (double)local_218._8_8_ * -1.0 + dStack_1f0 * dVar42) -
                   (double)local_308._0_8_ * dStack_220;
          *(undefined1 (*) [16])(puVar8 + 4) = auVar61;
          dVar33 = (dVar41 * dStack_2c0 - dVar29 * dStack_200) + local_1f8 * dVar47 + dVar33 +
                   local_2e8;
          dVar38 = (local_2d8 * dVar47 - dVar41 * local_1e8) + dStack_1f0 * dVar29 + dVar38 +
                   dStack_2e0;
          dVar30 = local_1f8 * dVar41 + dVar50 + (dVar29 * local_2c8 - dVar47 * local_208) +
                   local_2f8;
          *(double *)(puVar8 + 8) =
               dVar42 * local_238 * 1.0 +
               ((dVar56 * (double)local_218._0_8_ * 1.0 + local_1f8 * dVar51) - dVar58 * local_228);
          *(double *)(puVar8 + 10) = dVar51 * dStack_230 * -1.0 + dVar34;
          *(double *)(puVar8 + 0xc) = dVar33;
          *(double *)(puVar8 + 0xe) = dVar38;
          *(double *)(puVar8 + 0x10) = dVar30;
          *(undefined8 *)(puVar8 + 0x12) = 0;
          *(double *)(puVar8 + 0x14) = (double)fVar28;
          *(double *)(puVar8 + 0x16) = (double)local_310;
          *(double *)(puVar8 + 0x18) = (double)local_30c;
          *(undefined8 *)(puVar8 + 0x1a) = 0;
          dVar56 = ABS((double)local_310);
          dVar57 = ABS((double)fVar28);
          if (dVar57 <= dVar56) {
            dVar57 = dVar56;
          }
          dVar56 = ABS((double)local_30c);
          if (dVar57 <= dVar56) {
            dVar57 = dVar56;
          }
          *(double *)(puVar8 + 0x1c) = dVar33;
          *(double *)(puVar8 + 0x1e) = dVar38;
          *(double *)(puVar8 + 0x20) = dVar30;
          dVar57 = dVar57 + dVar57;
          *(double *)(puVar8 + 0x22) = dVar57;
          *(double *)(puVar8 + 0x24) = dVar57;
          *(double *)(puVar8 + 0x26) = dVar57;
          *(double *)(puVar8 + 0x28) = dVar57;
          fVar21 = 1.0 - local_314;
          if (1.0 <= 1.0 - local_314) {
            fVar21 = 1.0;
          }
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          puVar8[0x2a] = (float)(*(double *)(local_328 + 0x6d0) - (double)fVar21);
          *(undefined8 *)(puVar8 + 0x2b) = 0x3f800000;
          puVar8[0x2f] = *(undefined4 *)(param_3 + 0xd4);
          *(ulonglong *)(puVar8 + 0x31) = CONCAT44(local_1d8[1],local_1d8[0]);
          *(ulonglong *)(puVar8 + 0x33) = CONCAT44(local_1d8[3],local_1d8[2]);
          iVar25 = iVar25 + 1;
          puVar8[0x30] = uVar17;
          uVar4 = *(uint *)(local_320 + 0x120);
          plVar22 = local_380;
          auVar52 = _local_268;
          dVar57 = local_238;
          dVar30 = dStack_230;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar4);
    }
  }
  else {
    iVar25 = 0;
    plVar22 = local_380;
    if ((local_308._0_4_ != 0) && (local_34c == *local_338)) {
      dVar58 = local_278 * (double)local_364;
      dVar29 = dStack_270 * (double)local_368;
      dVar38 = local_288 * (double)local_36c;
      dVar41 = dStack_280 * 0.0;
      dVar34 = dVar29 * local_2c8 - dStack_2c0 * dVar58;
      dVar57 = dVar38 * dStack_2c0 - local_2d8 * dVar29;
      dVar30 = dVar58 * local_2d8 - local_2c8 * dVar38;
      dVar56 = dVar41 * dStack_2d0 - dStack_2d0 * dVar41;
      dVar57 = dVar57 + dVar57;
      dVar30 = dVar30 + dVar30;
      dVar34 = dVar34 + dVar34;
      local_268._0_4_ = auVar52._0_4_;
      local_268._4_4_ = auVar52._4_4_;
      fStack_260 = auVar52._8_4_;
      fStack_25c = auVar52._12_4_;
      dVar33 = dVar34 * dStack_2c0 - dVar30 * local_2d8;
      local_2e8 = local_2e8 + dVar33 + dStack_2d0 * dVar57 + dVar58;
      dStack_2e0 = dStack_2e0 +
                   (local_2d8 * dVar57 - dVar34 * local_2c8) + dStack_2d0 * dVar30 + dVar29;
      local_2f8 = local_2f8 +
                  dStack_2d0 * dVar34 + dVar38 + (dVar30 * local_2c8 - dVar57 * dStack_2c0);
      dStack_2f0 = dStack_2f0 + dStack_2d0 * (dVar56 + dVar56) + dVar41 + dVar33;
      dVar51 = (double)fStack_25c;
      dVar38 = (double)fStack_260;
      dVar60 = (double)(float)local_268._4_4_;
      dVar58 = (double)(float)local_268._0_4_;
      dVar42 = dStack_2d0 * dVar58;
      dVar50 = dStack_2d0 * dVar60;
      dVar41 = local_2c8 * dVar51;
      dVar47 = local_2c8 * dVar38;
      dVar34 = dStack_2d0 * dVar38;
      dVar57 = dStack_2d0 * dVar51;
      dVar29 = local_2c8 * dVar60;
      dVar33 = local_2c8 * dVar58;
      dVar30 = dVar38 * dStack_2c0;
      dVar56 = dVar51 * dStack_2c0;
      dVar64 = dStack_2c0 * dVar58;
      dVar65 = dStack_2c0 * dVar60;
      dVar60 = dVar60 * local_2d8;
      dVar58 = dVar58 * local_2d8;
      dVar51 = dVar51 * local_2d8;
      dVar38 = dVar38 * local_2d8;
      fVar49 = local_360 * 0.5;
      fVar40 = local_35c * 0.5;
      fVar21 = local_358 * 0.5;
      local_138 = local_1c8;
      alStack_130[0] = lStack_1c0;
      puVar8 = (undefined4 *)FUN_1409543b2(&local_1b8);
      plVar22 = plVar13 + 0x26;
      if ((int)plVar13[0x27] < 1) {
        uVar12 = FUN_14001cc68(0xe0,0x10);
        FUN_1409548bc(uVar12,local_340,lVar16);
        *(undefined8 *)(puVar8 + 2) = uVar12;
        *puVar8 = 0;
        iVar25 = (int)local_380[0x27];
        *(uint *)(local_380 + 0x27) = iVar25 + 1U;
        if (*(uint *)((longlong)local_380 + 0x13c) < iVar25 + 1U) {
          FUN_140954a96(plVar22,iVar25);
        }
        *(undefined8 *)(*plVar22 + (longlong)iVar25 * 8) = *(undefined8 *)(puVar8 + 2);
      }
      else {
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)*plVar22;
        *puVar8 = 1;
      }
      *(double *)(puVar8 + 4) = dVar60 * -1.0 + dVar30 + dVar41 * 1.0 + dVar42;
      *(double *)(puVar8 + 6) = dVar58 * 1.0 + dVar56 + dVar47 * -1.0 + dVar50;
      *(double *)(puVar8 + 8) = dVar51 * 1.0 + ((dVar29 * 1.0 + dVar34) - dVar64);
      *(double *)(puVar8 + 10) = dVar38 * -1.0 + ((dVar33 * -1.0 + dVar57) - dVar65);
      *(double *)(puVar8 + 0xc) = local_2e8;
      *(double *)(puVar8 + 0xe) = dStack_2e0;
      *(double *)(puVar8 + 0x10) = local_2f8;
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(double *)(puVar8 + 0x14) = (double)fVar21;
      *(double *)(puVar8 + 0x16) = (double)fVar40;
      *(double *)(puVar8 + 0x18) = (double)fVar49;
      *(undefined8 *)(puVar8 + 0x1a) = 0;
      dVar57 = ABS((double)fVar49);
      dVar30 = ABS((double)fVar40);
      dVar34 = ABS((double)fVar21);
      if (dVar34 <= dVar30) {
        dVar34 = dVar30;
      }
      if (dVar34 <= dVar57) {
        dVar34 = dVar57;
      }
      dVar34 = dVar34 + dVar34;
      *(double *)(puVar8 + 0x1c) = local_2e8;
      *(double *)(puVar8 + 0x1e) = dStack_2e0;
      *(double *)(puVar8 + 0x20) = local_2f8;
      *(double *)(puVar8 + 0x22) = dVar34;
      *(double *)(puVar8 + 0x24) = dVar34;
      *(double *)(puVar8 + 0x26) = dVar34;
      *(double *)(puVar8 + 0x28) = dVar34;
      fVar21 = 1.0 - local_374;
      if (1.0 <= 1.0 - local_374) {
        fVar21 = 1.0;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      puVar8[0x2a] = (float)(*(double *)(local_328 + 0x6d0) - (double)fVar21);
      *(undefined8 *)(puVar8 + 0x2b) = 0x3f800000;
      puVar8[0x2f] = *(undefined4 *)(param_3 + 0xd4);
      *(undefined8 *)(puVar8 + 0x31) = local_138;
      *(longlong *)(puVar8 + 0x33) = alStack_130[0];
      puVar8[0x30] = local_370;
      iVar25 = 1;
      plVar22 = local_380;
    }
  }
  if (iVar25 < (int)plVar22[0x27]) {
    do {
      puVar8 = (undefined4 *)FUN_1409543b2(&local_1b8);
      *puVar8 = 2;
      uVar12 = *(undefined8 *)(plVar22[0x26] + -8 + (longlong)(int)plVar22[0x27] * 8);
      *(int *)(plVar22 + 0x27) = (int)plVar22[0x27] + -1;
      FUN_140954718(plVar22 + 0x26);
      *(undefined8 *)(puVar8 + 2) = uVar12;
    } while (iVar25 < (int)plVar22[0x27]);
  }
  if (0 < (int)uStack_1b0) {
    (**(code **)(**(longlong **)(local_328 + 0x218) + 0x140))
              (*(longlong **)(local_328 + 0x218),&local_1b8);
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
LAB_140953767:
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1409543b2 FUN_1409543b2 body=69 status=ok
// SIG undefined FUN_1409543b2(void)

longlong FUN_1409543b2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1409547a8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xe0 + *param_1;
  FUN_1409543f7(lVar2,1);
  return lVar2;
}



// FUNCTION 1409543f7 FUN_1409543f7 body=141 status=ok
// SIG undefined FUN_1409543f7(void)

void FUN_1409543f7(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0x3ff00000;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x16) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x18) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x2e) = 0x3c23d70a00000000;
    param_1[0x30] = 0;
    *(undefined1 **)(param_1 + 0x31) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_1 + 0x33) = &DAT_3f8000003f800000;
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 140954484 FUN_140954484 body=114 status=ok
// SIG undefined FUN_140954484(void)

void FUN_140954484(undefined1 *param_1,longlong param_2,byte param_3,int param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((param_2 != 0) && (param_4 != -1)) {
    *param_1 = 1;
    lVar1 = 0;
    do {
      *(ulonglong *)(param_1 + lVar1 * 8 + 8) =
           (ulonglong)
           (uint)((param_4 + (int)lVar1) * *(int *)(param_2 + (ulonglong)(param_3 ^ 1) * 8 + 0x128))
           + *(longlong *)(param_2 + ((ulonglong)(param_3 ^ 1) << 5 | 0x18));
      lVar1 = lVar1 + 1;
    } while (lVar1 != 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x120);
  }
  return;
}



// FUNCTION 1409544f6 FUN_1409544f6 body=216 status=ok
// SIG undefined FUN_1409544f6(void)

undefined8 FUN_1409544f6(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar2 = (ulonglong)param_2 * 0xe0;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x93) {
        uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
      }
      else {
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar2 = -uVar5 & (uVar2 + uVar5) - 1;
      }
    }
    else {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 5;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar6 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar6 = iVar4;
  }
  if (iVar6 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar6;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar6,0xe0,0x10);
  }
  return uVar3;
}



// FUNCTION 1409545ce FUN_1409545ce body=329 status=ok
// SIG undefined FUN_1409545ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1409545ce(ulonglong *param_1,float *param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_1;
  auVar3 = insertps(auVar3,(int)param_1[1],0x28);
  auVar8 = divps(auVar3,_DAT_149e1ed80);
  auVar8 = roundps(auVar8,auVar8,3);
  fVar2 = (auVar3._0_4_ - auVar8._0_4_ * (float)DAT_149e1ed80) * 0.008726646;
  fVar4 = (auVar3._4_4_ - auVar8._4_4_ * DAT_149e1ed80._4_4_) * 0.008726646;
  fVar5 = (auVar3._8_4_ - auVar8._8_4_ * DAT_149e1ed80._8_4_) * 0.008726646;
  fVar6 = (auVar3._12_4_ - auVar8._12_4_ * DAT_149e1ed80._12_4_) * 0.008726646;
  auVar9._0_4_ = (float)(int)(fVar2 * 0.15915494) * -6.2831855 + fVar2;
  auVar9._4_4_ = (float)(int)(fVar4 * 0.15915494) * -6.2831855 + fVar4;
  auVar9._8_4_ = (float)(int)(fVar5 * 0.15915494) * -6.2831855 + fVar5;
  auVar9._12_4_ = (float)(int)(fVar6 * 0.15915494) * -6.2831855 + fVar6;
  auVar7._0_4_ = (float)((uint)auVar9._0_4_ & 0x80000000 | 0x40490fdb) - auVar9._0_4_;
  auVar7._4_4_ = (float)((uint)auVar9._4_4_ & 0x80000000 | 0x40490fdb) - auVar9._4_4_;
  auVar7._8_4_ = (float)((uint)auVar9._8_4_ & 0x80000000 | 0x40490fdb) - auVar9._8_4_;
  auVar7._12_4_ = (float)((uint)auVar9._12_4_ & 0x80000000 | 0x40490fdb) - auVar9._12_4_;
  auVar8._4_4_ = -(uint)(1.5707964 < ABS(auVar9._4_4_));
  auVar8._0_4_ = -(uint)(1.5707964 < ABS(auVar9._0_4_));
  auVar8._8_4_ = -(uint)(1.5707964 < ABS(auVar9._8_4_));
  auVar8._12_4_ = -(uint)(1.5707964 < ABS(auVar9._12_4_));
  auVar3 = blendvps(auVar9,auVar7,auVar8);
  fVar2 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar5 = auVar3._8_4_;
  fVar6 = fVar2 * fVar2;
  fVar12 = fVar4 * fVar4;
  fVar13 = fVar5 * fVar5;
  fVar14 = auVar3._12_4_ * auVar3._12_4_;
  fVar2 = (((((fVar6 * -2.3889859e-08 + 2.7525562e-06) * fVar6 + -0.00019840874) * fVar6 +
            0.008333331) * fVar6 + -0.16666667) * fVar6 + 1.0) * fVar2;
  fVar4 = (((((fVar12 * -2.3889859e-08 + 2.7525562e-06) * fVar12 + -0.00019840874) * fVar12 +
            0.008333331) * fVar12 + -0.16666667) * fVar12 + 1.0) * fVar4;
  fVar5 = (((((fVar13 * -2.3889859e-08 + 2.7525562e-06) * fVar13 + -0.00019840874) * fVar13 +
            0.008333331) * fVar13 + -0.16666667) * fVar13 + 1.0) * fVar5;
  auVar11._0_4_ =
       ((((fVar6 * -2.6051615e-07 + 2.4760495e-05) * fVar6 + -0.0013888378) * fVar6 + 0.041666638) *
        fVar6 + -0.5) * fVar6 + 1.0;
  auVar11._4_4_ =
       ((((fVar12 * -2.6051615e-07 + 2.4760495e-05) * fVar12 + -0.0013888378) * fVar12 + 0.041666638
        ) * fVar12 + -0.5) * fVar12 + 1.0;
  auVar11._8_4_ =
       ((((fVar13 * -2.6051615e-07 + 2.4760495e-05) * fVar13 + -0.0013888378) * fVar13 + 0.041666638
        ) * fVar13 + -0.5) * fVar13 + 1.0;
  auVar11._12_4_ =
       ((((fVar14 * -2.6051615e-07 + 2.4760495e-05) * fVar14 + -0.0013888378) * fVar14 + 0.041666638
        ) * fVar14 + -0.5) * fVar14 + 1.0;
  uVar1 = CONCAT44(auVar11._4_4_,auVar11._0_4_);
  auVar10._0_8_ = uVar1 ^ 0x8000000080000000;
  auVar10._8_4_ = -auVar11._8_4_;
  auVar10._12_4_ = -auVar11._12_4_;
  auVar3 = blendvps(auVar11,auVar10,auVar8);
  fVar6 = auVar3._0_4_;
  fVar12 = auVar3._4_4_;
  fVar13 = auVar3._8_4_;
  *param_2 = -(fVar12 * fVar6 * fVar5) + fVar4 * fVar2 * fVar13;
  param_2[1] = -(fVar4 * fVar6 * fVar5) + -(fVar12 * fVar2 * fVar13);
  param_2[2] = -(fVar12 * fVar2 * fVar5) + fVar4 * fVar6 * fVar13;
  param_2[3] = fVar4 * fVar2 * fVar5 + fVar12 * fVar6 * fVar13;
  return param_2;
}



// FUNCTION 140954718 FUN_140954718 body=143 status=ok
// SIG undefined FUN_140954718(void)

void FUN_140954718(longlong param_1)

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



// FUNCTION 1409547a8 FUN_1409547a8 body=274 status=ok
// SIG undefined FUN_1409547a8(void)

void FUN_1409547a8(longlong param_1,int param_2)

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



// FUNCTION 1409548bc FUN_1409548bc body=472 status=ok
// SIG undefined FUN_1409548bc(void)

undefined8 * FUN_1409548bc(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3ff00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  if ((*(byte *)(param_2 + 0x3f) & 0x20) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(byte *)((longlong)param_2 + 0x1f9) & 8) == 0;
  }
  *(bool *)(param_1 + 0xe) = bVar5;
  *(byte *)((longlong)param_1 + 0x71) = *(byte *)(param_2 + 0x3f) >> 5 & 1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0x3f800000bf800000;
  param_1[0x18] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_3 + 0x2b8))(param_3);
    if (*(char *)(lVar2 + 0x128) == '\x01') goto LAB_140954994;
  }
  FUN_14003fbd6();
  param_1[1] = DAT_14caea088;
LAB_140954994:
  (**(code **)(*param_2 + 0x528))(param_2,&local_68,param_2 + 0x48);
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x15] = local_38;
  *(undefined4 *)(param_1 + 0x13) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_44;
  *(undefined4 *)(param_1 + 0x14) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_3c;
  *(undefined4 *)(param_1 + 0x11) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_54;
  *(undefined4 *)(param_1 + 0x12) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x94) = uStack_4c;
  *(undefined4 *)(param_1 + 0xf) = local_68;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_64;
  *(undefined4 *)(param_1 + 0x10) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_5c;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  lVar2 = param_2[0x16];
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_2);
  }
  dVar1 = *(double *)(lVar2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(float *)(param_1 + 0x18) = (float)dVar1 + 1.0 + 1.0;
  if (param_2[0x15] != 0) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & -1 < *(char *)(param_2[0x15] + 0x60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140954a96 FUN_140954a96 body=353 status=ok
// SIG undefined FUN_140954a96(void)

void FUN_140954a96(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140954b1b;
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
LAB_140954b1b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140954bf8 FUN_140954bf8 body=111 status=ok
// SIG undefined FUN_140954bf8(void)

void FUN_140954bf8(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
                   *(undefined1 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000140954c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140954c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined1 *)(param_1 + 8));
  return;
}



// FUNCTION 140954c68 FUN_140954c68 body=981 status=ok
// SIG undefined FUN_140954c68(void)

void FUN_140954c68(longlong param_1,char param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_128 [39];
  undefined1 local_101;
  undefined8 *local_100;
  int local_f8;
  undefined8 local_f0;
  LARGE_INTEGER local_e8;
  undefined4 local_e0;
  byte local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0x668) = 0;
  if ((((*(int *)(param_1 + 0xc) == 0) || (uVar12 = *(uint *)(param_1 + 8), (int)uVar12 < 0)) ||
      (DAT_14c9647dc <= (int)uVar12)) ||
     (((plVar11 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0xc))) ||
      (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
       ((lVar3 = *plVar11, lVar3 == 0 || ((*(byte *)(lVar3 + 0x155) & 0x20) != 0)))))))) {
    *(undefined4 *)(param_1 + 0x678) = 0;
    if (*(int *)(param_1 + 0x67c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_128);
    }
  }
  else {
    QueryPerformanceCounter(&local_e8);
    dVar5 = (double)local_e8.QuadPart * DAT_14c83f420;
    lVar7 = FUN_14092c0b8();
    iVar10 = *(int *)(param_1 + 0x678);
    if (0 < iVar10) {
      fVar1 = *(float *)(lVar7 + 0x84);
      plVar11 = (longlong *)(param_1 + 0x670);
      uVar13 = 0;
      do {
        uVar12 = (uint)uVar13;
        if ((param_2 != '\0') &&
           (QueryPerformanceCounter(&local_e8),
           (double)fVar1 <=
           (((double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar5 + 16777216.0)) *
           1000.0)) {
          iVar10 = *(int *)(param_1 + 0x678);
          break;
        }
        lVar7 = *plVar11;
        lVar16 = uVar13 * 0x10;
        iVar10 = *(int *)(lVar7 + 4 + lVar16);
        plVar4 = *(longlong **)(lVar7 + 8 + lVar16);
        if (((((iVar10 == 0 || plVar4 == (longlong *)0x0) ||
              (uVar2 = *(uint *)(lVar7 + lVar16), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
            || ((lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar15 == 0
                || (*(int *)(lVar15 + 0x10) != iVar10)))) ||
           ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)) {
          iVar10 = *(int *)(param_1 + 0x678);
          iVar14 = ~uVar12 + iVar10;
          if (iVar14 != 0) {
LAB_140954e47:
            memmove((void *)(lVar7 + lVar16),(void *)(lVar7 + lVar16 + 0x10),(longlong)iVar14 << 4);
            iVar10 = *(int *)(param_1 + 0x678);
          }
LAB_140954e65:
          *(int *)(param_1 + 0x678) = iVar10 + -1;
          FUN_141801926(plVar11);
          uVar12 = uVar12 - 1;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x28))();
          cVar6 = FUN_1405f854c(uVar8);
          if (cVar6 == '\0') {
            iVar10 = *(int *)(param_1 + 0x678);
            iVar14 = ~uVar12 + iVar10;
            if (iVar14 != 0) {
              lVar7 = *plVar11;
              goto LAB_140954e47;
            }
            goto LAB_140954e65;
          }
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        iVar10 = *(int *)(param_1 + 0x678);
      } while ((int)(uVar12 + 1) < iVar10);
    }
    if (param_2 == '\x01' && iVar10 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar9 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar8 = *puVar9;
      local_101 = 1;
      local_e8.QuadPart = (LONGLONG)FUN_140954c68;
      local_e0 = 0;
      FUN_1405f8e3a(&local_100,param_1,&local_e8);
      local_e8.QuadPart = 0;
      local_e0 = 0;
      FUN_14487d8d8(&local_e8,&local_100);
      local_a8 = 1;
      FUN_14016fdb0(uVar8,&local_f0,&local_e8);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
      *(undefined8 *)(param_1 + 0x668) = local_f0;
      if (local_f8 != 0) {
        if (local_100 == (undefined8 *)0x0) goto LAB_140954ecb;
        (**(code **)*local_100)(local_100,0);
        FUN_1446efa72(&local_100,0,0,0x10);
        local_f8 = 0;
      }
      if (local_100 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140954ecb:
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095509a FUN_14095509a body=550 status=ok
// SIG undefined FUN_14095509a(void)

void FUN_14095509a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
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
  undefined4 *_Dst;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  if (*(longlong *)(param_1 + 0x178) == 0) {
    _Dst = (undefined4 *)FUN_14001cc68(0x158);
    memset(_Dst,0,0x118);
    _Dst[0x1d] = 4;
    *(undefined8 *)(_Dst + 0x1e) = 0;
    *(undefined8 *)(_Dst + 0x20) = 0;
    *(undefined8 *)(_Dst + 0x22) = 0;
    *(undefined8 *)(_Dst + 0x24) = 0;
    *(undefined8 *)(_Dst + 0x26) = 0;
    *(undefined8 *)(_Dst + 0x28) = 0;
    *(undefined8 *)(_Dst + 0x2a) = 0;
    *(undefined8 *)(_Dst + 0x2c) = 0;
    _Dst[0x2e] = 0xffffffff;
    *(undefined1 *)(_Dst + 0x2f) = 0xff;
    *(undefined8 *)(_Dst + 0x30) = 0;
    *(undefined8 *)(_Dst + 0x32) = 0;
    *(undefined8 *)(_Dst + 0x34) = 0;
    *(undefined8 *)(_Dst + 0x36) = 0;
    *(undefined8 *)(_Dst + 0x38) = 0;
    *(undefined8 *)(_Dst + 0x3a) = 0;
    *(undefined8 *)(_Dst + 0x3c) = 0;
    *(undefined8 *)(_Dst + 0x3e) = 0;
    *(undefined8 *)(_Dst + 0x40) = 0;
    *(undefined8 *)(_Dst + 0x42) = 0;
    *(undefined8 *)((longlong)_Dst + 0x10e) = 0;
    *(undefined8 *)(_Dst + 0x46) = 0;
    *(undefined8 *)(_Dst + 0x48) = 0;
    *(undefined8 *)(_Dst + 0x4a) = 0;
    *(undefined8 *)(_Dst + 0x4c) = 0;
    *(undefined8 *)(_Dst + 0x4e) = 0;
    *(undefined8 *)(_Dst + 0x50) = 0;
    *(undefined8 *)(_Dst + 0x52) = 0;
    *(undefined8 *)(_Dst + 0x54) = 0;
    *(undefined4 **)(param_1 + 0x1a0) = _Dst;
    *(undefined4 **)(param_1 + 0x178) = _Dst;
  }
  else {
    _Dst = *(undefined4 **)(param_1 + 0x1a0);
  }
  uVar4 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  uVar13 = param_3[9];
  uVar14 = param_3[10];
  uVar15 = param_3[0xb];
  _Dst[8] = param_3[8];
  _Dst[9] = uVar13;
  _Dst[10] = uVar14;
  _Dst[0xb] = uVar15;
  _Dst[4] = uVar9;
  _Dst[5] = uVar10;
  _Dst[6] = uVar11;
  _Dst[7] = uVar12;
  *_Dst = uVar4;
  _Dst[1] = uVar6;
  _Dst[2] = uVar7;
  _Dst[3] = uVar8;
  if (_Dst != param_3) {
    iVar3 = param_3[0x1c];
    _Dst[0x1c] = iVar3;
    if (iVar3 == 0 && _Dst[0x1d] == 0) {
      _Dst[0x1d] = 4;
    }
    else {
      FUN_144780848(_Dst + 0xc,iVar3);
      if (iVar3 != 0) {
        memcpy(_Dst + 0xc,param_3 + 0xc,(longlong)iVar3 << 4);
      }
    }
  }
  puVar17 = (undefined8 *)(param_3 + 0x1e);
  puVar18 = (undefined8 *)(_Dst + 0x1e);
  for (lVar16 = 8; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar4 = param_3[0x2e];
  *(undefined4 *)((longlong)_Dst + 0xbb) = *(undefined4 *)((longlong)param_3 + 0xbb);
  _Dst[0x2e] = uVar4;
  puVar17 = (undefined8 *)(param_3 + 0x30);
  puVar18 = (undefined8 *)(_Dst + 0x30);
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  lVar16 = *(longlong *)(param_3 + 0x50);
  lVar5 = *(longlong *)(_Dst + 0x50);
  if (lVar5 != lVar16) {
    *(longlong *)(_Dst + 0x50) = lVar16;
    if (lVar16 != 0) {
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  FUN_1409552c0(_Dst + 0x52,param_3 + 0x52);
  FUN_1447fd100(param_1,param_2);
  return;
}



// FUNCTION 1409552c0 FUN_1409552c0 body=89 status=ok
// SIG undefined FUN_1409552c0(void)

undefined8 * FUN_1409552c0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14095531a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14095531a FUN_14095531a body=334 status=ok
// SIG undefined FUN_14095531a(void)

void FUN_14095531a(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0xc;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14095538c;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14095538c:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140955468 FUN_140955468 body=400 status=ok
// SIG undefined FUN_140955468(void)

ulonglong FUN_140955468(longlong param_1,longlong *param_2,uint param_3,uint param_4,byte param_5,
                       byte param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined6 local_b0;
  undefined2 uStack_aa;
  undefined4 local_a8;
  undefined1 local_a4;
  byte bStack_a3;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined4 uStack_88;
  undefined1 local_84;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0xffffffffffff;
  uStack_aa = 0xffff;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  bStack_a3 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_83 = 1;
  uVar7 = 0;
  uStack_82 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  local_b8 = &PTR_FUN_14b8fbe20;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = uStack_68 & 0xff000000;
  local_60 = (undefined4)DAT_14c8464e0;
  uStack_5c = DAT_14c8464e0._4_4_;
  uStack_58 = (undefined4)DAT_14c8464e8;
  uStack_54 = DAT_14c8464e8._4_4_;
  local_50 = DAT_14c8464f0;
  if (param_3 <= param_4) {
    uVar7 = 0;
    do {
      uVar2 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar4 = -(int)uVar2;
      uVar5 = (ulonglong)uVar4;
      if ((int)uVar4 < 0) {
        uVar5 = uVar2 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar5 * 0x70)) {
        lVar3 = *(longlong *)(param_1 + 0x10) + uVar5 * 0x70;
        uVar1 = *(undefined8 *)(lVar3 + 0xe);
        local_a8 = (undefined4)((ulonglong)uVar1 >> 0x10);
        local_a4 = (undefined1)((ulonglong)uVar1 >> 0x30);
        bStack_a3 = (byte)((ulonglong)uVar1 >> 0x38);
        local_b0 = (undefined6)*(undefined8 *)(lVar3 + 8);
        uStack_aa = (undefined2)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x30);
        local_a0 = *(undefined8 *)(lVar3 + 0x18);
        uVar1 = *(undefined8 *)(lVar3 + 0x30);
        uStack_80 = *(undefined4 *)(lVar3 + 0x38);
        uStack_78 = *(undefined4 *)(lVar3 + 0x40);
        uStack_7c = (undefined2)*(undefined4 *)(lVar3 + 0x3c);
        uStack_7a = (undefined2)((uint)*(undefined4 *)(lVar3 + 0x3c) >> 0x10);
        uStack_90 = (undefined5)*(undefined8 *)(lVar3 + 0x28);
        uStack_8b = (undefined3)((ulonglong)*(undefined8 *)(lVar3 + 0x28) >> 0x28);
        uStack_88 = (undefined4)uVar1;
        local_84 = (undefined1)((ulonglong)uVar1 >> 0x20);
        uStack_83 = (undefined1)((ulonglong)uVar1 >> 0x28);
        uStack_82 = (undefined2)((ulonglong)uVar1 >> 0x30);
        uStack_98 = (undefined5)*(undefined8 *)(lVar3 + 0x20);
        uStack_93 = (undefined3)((ulonglong)*(undefined8 *)(lVar3 + 0x20) >> 0x28);
        local_50 = *(undefined8 *)(lVar3 + 0x68);
        local_70 = *(undefined4 *)(lVar3 + 0x48);
        uStack_6c = *(undefined4 *)(lVar3 + 0x4c);
        uStack_68 = *(uint *)(lVar3 + 0x50);
        uStack_64 = *(undefined4 *)(lVar3 + 0x54);
        local_60 = *(undefined4 *)(lVar3 + 0x58);
        uStack_5c = *(undefined4 *)(lVar3 + 0x5c);
        uStack_58 = *(undefined4 *)(lVar3 + 0x60);
        uStack_54 = *(undefined4 *)(lVar3 + 100);
        if (((byte)(param_5 ^ 1 | bStack_a3) != 1) || ((bStack_a3 & param_6) == 1)) {
          pppuVar6 = &local_b8;
          (**(code **)(*param_2 + 0x68))(param_2,param_3,&local_b8);
          uVar7 = CONCAT71((int7)((ulonglong)pppuVar6 >> 8),1);
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 <= param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffff01;
}



// FUNCTION 140955684 FUN_140955684 body=663 status=ok
// SIG undefined FUN_140955684(void)

float * FUN_140955684(undefined8 param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  undefined1 auVar9 [16];
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14095591c(param_4,&local_40);
  if (local_40 == 0) {
    lVar7 = FUN_1447262c2(param_4);
    bVar3 = true;
    if (lVar7 == 0) goto LAB_140955731;
    uVar5 = FUN_140840456();
    plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_140955731;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
    if (local_50 == 0) {
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      goto LAB_140955731;
    }
    if ((longlong)*(int *)(local_50 + 0x110) != 0) {
      plVar6 = *(longlong **)(local_50 + 0x108);
      lVar7 = (longlong)*(int *)(local_50 + 0x110) * 0x18;
      do {
        if (*plVar6 == param_3) {
          if (plVar6 != (longlong *)0x0) {
            fVar8 = *(float *)((longlong)plVar6 + 0xc);
            auVar9 = ZEXT416((uint)fVar8);
            cVar2 = *(char *)((longlong)plVar6 + 0x14);
            if (cVar2 == '\x03') {
              auVar9 = roundps(auVar9,ZEXT416((uint)fVar8),2);
              fVar8 = auVar9._0_4_;
            }
            else {
              if (cVar2 != '\x02') {
                if (cVar2 != '\x01') goto LAB_140955825;
                auVar9 = ZEXT416((uint)(fVar8 + 0.5));
              }
              auVar9 = roundps(auVar9,ZEXT416(auVar9._0_4_),1);
              fVar8 = auVar9._0_4_;
            }
LAB_140955825:
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = fVar8;
            uVar4 = 3;
            goto LAB_140955831;
          }
          break;
        }
        plVar6 = plVar6 + 3;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    *(undefined2 *)(param_2 + 6) = 0;
    uVar4 = 0;
LAB_140955831:
    *(undefined1 *)(param_2 + 8) = uVar4;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  else {
    if ((longlong)*(int *)(local_40 + 0x110) != 0) {
      plVar6 = *(longlong **)(local_40 + 0x108);
      lVar7 = (longlong)*(int *)(local_40 + 0x110) * 0x18;
      do {
        if (*plVar6 == param_3) {
          if (plVar6 != (longlong *)0x0) {
            fVar8 = *(float *)((longlong)plVar6 + 0xc);
            auVar9 = ZEXT416((uint)fVar8);
            cVar2 = *(char *)((longlong)plVar6 + 0x14);
            if (cVar2 == '\x03') {
              auVar9 = roundps(auVar9,ZEXT416((uint)fVar8),2);
              fVar8 = auVar9._0_4_;
            }
            else {
              if (cVar2 != '\x02') {
                if (cVar2 != '\x01') goto LAB_140955721;
                auVar9 = ZEXT416((uint)(fVar8 + 0.5));
              }
              auVar9 = roundps(auVar9,ZEXT416(auVar9._0_4_),1);
              fVar8 = auVar9._0_4_;
            }
LAB_140955721:
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = fVar8;
            *(undefined1 *)(param_2 + 8) = 3;
            goto LAB_14095572f;
          }
          break;
        }
        plVar6 = plVar6 + 3;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    *(undefined2 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
  }
LAB_14095572f:
  bVar3 = false;
LAB_140955731:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (bVar3) {
    *(undefined2 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095591c FUN_14095591c body=143 status=ok
// SIG undefined FUN_14095591c(void)

longlong * FUN_14095591c(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*param_1 == '\x03') && (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14095598a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 8);
    bVar9 = true;
    if (lVar4 != 0) {
      uVar8 = FUN_140232f74();
      cVar6 = FUN_1448093f4(lVar4,uVar8);
      if (cVar6 != '\0') {
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_14095598a:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1409559ac FUN_1409559ac body=40 status=ok
// SIG undefined FUN_1409559ac(void)

undefined8 FUN_1409559ac(undefined8 param_1,int param_2)

{
  FUN_1409559d4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409559d4 FUN_1409559d4 body=994 status=ok
// SIG undefined FUN_1409559d4(void)

void FUN_1409559d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a471d40;
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xde];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0xd7],*(undefined4 *)(param_1 + 0xd8));
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd4],*(undefined4 *)(param_1 + 0xd5));
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd1],*(undefined4 *)(param_1 + 0xd2));
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xce],*(undefined4 *)(param_1 + 0xcf));
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xcb],*(undefined4 *)(param_1 + 0xcc));
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[200],*(undefined4 *)(param_1 + 0xc9));
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc2) = 0;
  if (*(int *)((longlong)param_1 + 0x614) != 0) {
    FUN_140b584e0(param_1 + 0xc1,0);
  }
  param_1[199] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x634)) {
    *(undefined4 *)((longlong)param_1 + 0x634) = 0x80;
    FUN_1446efbd8(param_1 + 0xc3,0);
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbf] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xbc];
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
  *(undefined4 *)(param_1 + 0xba) = 0;
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb2) = 0;
  if (*(int *)((longlong)param_1 + 0x594) != 0) {
    FUN_144727cd0(param_1 + 0xb1,0);
  }
  param_1[0xb7] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x5b4)) {
    *(undefined4 *)((longlong)param_1 + 0x5b4) = 0x80;
    FUN_1446efbd8(param_1 + 0xb3,0);
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if (*(int *)((longlong)param_1 + 0x55c) != 0) {
    FUN_140b584e0(param_1 + 0xaa,0);
  }
  param_1[0xb0] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x57c)) {
    *(undefined4 *)((longlong)param_1 + 0x57c) = 0x80;
    FUN_1446efbd8(param_1 + 0xac,0);
  }
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0xa9];
  if (lVar4 != 0) {
    FUN_1409561e0(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_14095670c(param_1 + 0x86);
  FUN_140955db6(param_1 + 0x54);
  FUN_140956c04(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140955db6 FUN_140955db6 body=244 status=ok
// SIG undefined FUN_140955db6(void)

void FUN_140955db6(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_140955eaa(param_1 + 0xf0);
  FUN_140955ee2(param_1 + 0xb8);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    FUN_140b63254(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140955eaa FUN_140955eaa body=55 status=ok
// SIG undefined FUN_140955eaa(void)

void FUN_140955eaa(longlong *param_1)

{
  FUN_140955f1a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140955ee2 FUN_140955ee2 body=55 status=ok
// SIG undefined FUN_140955ee2(void)

void FUN_140955ee2(longlong *param_1)

{
  FUN_140955f96(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140955f1a FUN_140955f1a body=123 status=ok
// SIG undefined FUN_140955f1a(void)

void FUN_140955f1a(longlong param_1,int param_2)

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



// FUNCTION 140955f96 FUN_140955f96 body=378 status=ok
// SIG undefined FUN_140955f96(void)

void FUN_140955f96(longlong *param_1,int param_2)

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
      FUN_14754771c((longlong)iStack_54 * 0x28 + *local_70);
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



// FUNCTION 140956112 FUN_140956112 body=206 status=ok
// SIG undefined FUN_140956112(void)

void FUN_140956112(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14009d691(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_144959b6a(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14009d7a8(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_14009d691(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001409561dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1409561e0 FUN_1409561e0 body=912 status=ok
// SIG undefined FUN_1409561e0(void)

void FUN_1409561e0(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  plVar1 = (longlong *)(param_1 + 8);
  puVar2 = (uint *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x30);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_14095629f;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar7;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_14095629f:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 < iVar3) {
    do {
      if (*(int *)(*local_60 + 0x122 + (longlong)local_44 * 0x128) !=
          *(int *)(*local_60 + 0x11a + (longlong)local_44 * 0x128)) {
        FUN_147547ee2(&local_60);
      }
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_140956572((longlong *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  iVar3 = *(int *)(param_1 + 0x30);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_1409563a4;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar7;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_1409563a4:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 < iVar3) {
    do {
      FUN_1409578bc((longlong)local_44 * 0x128 + *local_60);
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1409565ca(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x80 < *(uint *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140956572 FUN_140956572 body=88 status=ok
// SIG undefined FUN_140956572(void)

void FUN_140956572(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1409565ca FUN_1409565ca body=322 status=ok
// SIG undefined FUN_1409565ca(void)

void FUN_1409565ca(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x128;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140956636;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140956636:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x128)) {
      uVar5 = uVar3 / 0x128 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x128,8);
  }
  return;
}



// FUNCTION 14095670c FUN_14095670c body=931 status=ok
// SIG undefined FUN_14095670c(void)

void FUN_14095670c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
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
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140956aff(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140956b39(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_1407f13e6((longlong *)(param_1 + 0x98),0);
  }
  *(undefined8 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (0x80 < *(uint *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xc4) = 0x80;
    FUN_1446efbd8(param_1 + 0xa8,0);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x70;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      FUN_14755e8dc((longlong)iStack_54 * 0x70 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_140875b54(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0x80 < *(uint *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x8c) = 0x80;
    FUN_1446efbd8(lVar2,0);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plVar1 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plVar1 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  FUN_140956ac7(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140956ac7 FUN_140956ac7 body=56 status=ok
// SIG undefined FUN_140956ac7(void)

void FUN_140956ac7(longlong param_1,int param_2)

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



// FUNCTION 140956aff FUN_140956aff body=58 status=ok
// SIG undefined FUN_140956aff(void)

void FUN_140956aff(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x10);
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
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140956b39 FUN_140956b39 body=73 status=ok
// SIG undefined FUN_140956b39(void)

void FUN_140956b39(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140956b82 FUN_140956b82 body=75 status=ok
// SIG undefined FUN_140956b82(void)

undefined8 * FUN_140956b82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47cdb0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140956bce(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140956bce FUN_140956bce body=53 status=ok
// SIG undefined FUN_140956bce(void)

void FUN_140956bce(longlong *param_1)

{
  FUN_14095755a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140956c04 FUN_140956c04 body=1623 status=ok
// SIG undefined FUN_140956c04(void)

void FUN_140956c04(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  uint *local_78;
  uint local_70;
  int iStack_6c;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14a471510;
  plVar1 = param_1 + 0xc;
  puVar2 = (uint *)(param_1 + 0xe);
  iVar5 = *(int *)(param_1 + 0x11);
  local_80._4_4_ = 1;
  if (iVar5 == 0) {
    local_68 = 0;
    local_80._0_4_ = 0;
    iStack_6c = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x10];
    if ((uint *)param_1[0x10] == (uint *)0x0) {
      puVar7 = puVar2;
    }
    uVar8 = *puVar7;
    if (uVar8 == 0) {
      iVar9 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar9 = iVar5 + -1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar11;
      }
      local_80._0_4_ = (int)uVar10 + 1;
      local_68 = (int)uVar10 * 0x20 + 0x20;
      iVar9 = 0;
      do {
        iStack_6c = iVar5;
        if (uVar10 == uVar11) goto LAB_140956cd6;
        iVar9 = iVar9 + 0x20;
        uVar8 = puVar7[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar8 == 0);
      local_80._0_4_ = (int)uVar11;
      local_68 = iVar9;
    }
    else {
      local_68 = 0;
      local_80._0_4_ = 0;
    }
    local_80._4_4_ = -uVar8 & uVar8;
    uVar10 = (ulonglong)local_80._4_4_ * 2 + 1;
    lVar6 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_6c = (local_68 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iStack_6c) {
      iStack_6c = iVar5;
    }
  }
LAB_140956cd6:
  local_70 = 0xffffffff;
  local_88 = plVar1;
  local_78 = puVar2;
  if (iStack_6c != iVar5) {
    do {
      do {
        FUN_14085836e(param_1,*(undefined8 *)(*local_88 + (longlong)iStack_6c * 8));
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar5);
    } while ((local_78 != puVar2) || (local_88 != plVar1));
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)((longlong)param_1 + 0x164) != 0) {
    FUN_14472eb64(param_1 + 0x2b,0);
  }
  param_1[0x31] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x184)) {
    *(undefined4 *)((longlong)param_1 + 0x184) = 0x80;
    FUN_1446efbd8(param_1 + 0x2d,0);
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 0x24;
  puVar4 = param_1 + 0x26;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = puVar4;
  if (*(int *)(param_1 + 0x29) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_80 = local_60;
  local_78 = (uint *)local_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_88 = plVar3;
  if (iStack_4c < *(int *)(local_58 + 3)) {
    do {
      FUN_140fa5276((longlong)iStack_6c * 0x48 + *local_88);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)((longlong)local_78 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) != 0) {
    FUN_1403af08a(plVar3,0);
  }
  param_1[0x2a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x14c)) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80;
    FUN_1446efbd8(puVar4,0);
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (*(int *)((longlong)param_1 + 0xdc) != 0) {
    FUN_1447a08a2(param_1 + 0x1a,0);
  }
  param_1[0x20] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xfc)) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80;
    FUN_1446efbd8(param_1 + 0x1c,0);
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_14095725c(param_1 + 0x13,0);
  }
  param_1[0x19] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xc4)) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
    FUN_1446efbd8(param_1 + 0x15,0);
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_140b584e0(plVar1,0);
  }
  param_1[0x12] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x8c)) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_140957390(param_1 + 1,0);
  }
  param_1[7] = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x34)) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
    FUN_1446efbd8(param_1 + 3,0);
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095725c FUN_14095725c body=307 status=ok
// SIG undefined FUN_14095725c(void)

void FUN_14095725c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1409572f0;
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
LAB_1409572f0:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 140957390 FUN_140957390 body=328 status=ok
// SIG undefined FUN_140957390(void)

void FUN_140957390(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140957428;
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
LAB_140957428:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x28)) {
      uVar5 = uVar3 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x28,4);
  }
  return;
}



// FUNCTION 1409574d8 FUN_1409574d8 body=75 status=ok
// SIG undefined FUN_1409574d8(void)

undefined8 * FUN_1409574d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47ce30;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140957524(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140957524 FUN_140957524 body=53 status=ok
// SIG undefined FUN_140957524(void)

void FUN_140957524(longlong *param_1)

{
  FUN_14095770c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14095755a FUN_14095755a body=433 status=ok
// SIG undefined FUN_14095755a(void)

void FUN_14095755a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  uint local_44;
  uint *local_40;
  uint local_38;
  int local_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_44 = 1;
  if (iVar2 == 0) {
    local_30 = 0;
    local_48 = 0;
    local_34 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar4 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar4;
      }
      local_48 = (int)uVar8 + 1;
      local_30 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_34 = iVar2;
        if (uVar8 == uVar4) goto LAB_14095760f;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar5 == 0);
      local_48 = (int)uVar4;
      local_30 = iVar7;
    }
    else {
      local_30 = 0;
      local_48 = 0;
    }
    local_44 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_44 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_34 = (local_30 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_34) {
      local_34 = iVar2;
    }
  }
LAB_14095760f:
  local_38 = 0xffffffff;
  local_50 = param_1;
  local_40 = puVar1;
  if (local_34 < iVar2) {
    do {
      if (*(longlong *)(*local_50 + 0x28 + (longlong)local_34 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_38 = local_38 & ~local_44;
      FUN_1449c0562(&local_48);
    } while (local_34 < (int)local_40[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095770c FUN_14095770c body=430 status=ok
// SIG undefined FUN_14095770c(void)

void FUN_14095770c(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  uint local_44;
  uint *local_40;
  uint local_38;
  int local_34;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_44 = 1;
  if (iVar2 == 0) {
    local_30 = 0;
    local_48 = 0;
    local_34 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar4 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar4;
      }
      local_48 = (int)uVar8 + 1;
      local_30 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_34 = iVar2;
        if (uVar8 == uVar4) goto LAB_1409577c1;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar5 == 0);
      local_48 = (int)uVar4;
      local_30 = iVar7;
    }
    else {
      local_30 = 0;
      local_48 = 0;
    }
    local_44 = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_44 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_34 = (local_30 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_34) {
      local_34 = iVar2;
    }
  }
LAB_1409577c1:
  local_38 = 0xffffffff;
  local_50 = param_1;
  local_40 = puVar1;
  if (local_34 < iVar2) {
    do {
      if (*(longlong *)(*local_50 + 0x20 + (longlong)local_34 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_38 = local_38 & ~local_44;
      FUN_1449c0562(&local_48);
    } while (local_34 < (int)local_40[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409578bc FUN_1409578bc body=252 status=ok
// SIG undefined FUN_1409578bc(void)

void FUN_1409578bc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)param_1[0x21];
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
  FUN_140a46d02(param_1 + 0x1f,param_1[0x1f]);
  puVar4 = (undefined8 *)param_1[0x1e];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x1d];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1409579b8(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409579b8 FUN_1409579b8 body=55 status=ok
// SIG undefined FUN_1409579b8(void)

void FUN_1409579b8(longlong *param_1)

{
  FUN_140957a3c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409579f0 FUN_1409579f0 body=38 status=ok
// SIG undefined FUN_1409579f0(void)

undefined8 FUN_1409579f0(undefined8 param_1,int param_2)

{
  FUN_140957ab8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140957a16 FUN_140957a16 body=38 status=ok
// SIG undefined FUN_140957a16(void)

undefined8 FUN_140957a16(undefined8 param_1,int param_2)

{
  FUN_140957c08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140957a3c FUN_140957a3c body=123 status=ok
// SIG undefined FUN_140957a3c(void)

void FUN_140957a3c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 140957ab8 FUN_140957ab8 body=157 status=ok
// SIG undefined FUN_140957ab8(void)

void FUN_140957ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a475ff0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140957b56(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14055a9b2(param_1 + 6);
  if (*(char *)((longlong)param_1 + 0x2d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2d) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = 0;
    param_1[4] = 0xffffffff00000000;
  }
  return;
}



// FUNCTION 140957b56 FUN_140957b56 body=55 status=ok
// SIG undefined FUN_140957b56(void)

void FUN_140957b56(longlong *param_1)

{
  FUN_140957b8e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140957b8e FUN_140957b8e body=121 status=ok
// SIG undefined FUN_140957b8e(void)

void FUN_140957b8e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 140957c08 FUN_140957c08 body=178 status=ok
// SIG undefined FUN_140957c08(void)

void FUN_140957c08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a478360;
  FUN_1409223c8(param_1 + 0x39);
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 140957cba FUN_140957cba body=874 status=ok
// SIG undefined FUN_140957cba(void)

void FUN_140957cba(longlong param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_e8 [40];
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  uint local_98 [4];
  longlong *local_88;
  undefined4 local_70 [2];
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    *(float *)(lVar2 + 0x30) = param_2 + *(float *)(lVar2 + 0x30);
    lVar5 = FUN_1403ca43f();
    local_98[0] = local_98[0] & 0xffffff00;
    local_70[0] = 0;
    FUN_14575a19a(local_98,0);
    pfVar7 = &local_c0;
    FUN_1448729ea(lVar5 + 0xe0,pfVar7,local_98);
    if (local_a0 == 3) {
      uVar4 = 3;
      fVar10 = local_c0;
    }
    else {
      pfVar6 = &local_68;
      FUN_1400b56fe(pfVar6,&local_c0,3);
      fVar10 = 0.0;
      if (local_48 != 0) {
        fVar10 = local_68;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_50) {
          pfVar6 = (float *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar3)(pfVar6);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
      uVar4 = (uint)local_a0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_a8) {
        pfVar7 = (float *)CONCAT44(uStack_bc,local_c0);
      }
      (*pcVar3)(pfVar7);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
    }
    FUN_1448173f8(local_70);
    if (((char)local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (fVar10 <= *(float *)(lVar2 + 0x30)) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        lVar5 = FUN_1403ca43f();
        local_98[0] = local_98[0] & 0xffffff00;
        local_70[0] = 0;
        FUN_14575a19a(local_98,0);
        pfVar7 = &local_68;
        FUN_1448729ea(lVar5 + 0x130,pfVar7,local_98);
        uVar4 = FUN_1405d5f74(pfVar7);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_50) {
            pfVar7 = (float *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar3)(pfVar7);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
        FUN_1448173f8(local_70);
        if (((char)local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_88 + 0x10))();
          }
        }
        local_98[0] = uVar4;
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar4);
        }
        lVar5 = lVar2 + 0x20;
        if (*(int *)(lVar2 + 0x2c) < (int)uVar4) {
          FUN_14575a300(lVar5,uVar4);
        }
        else {
          FUN_1409580a1(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x28));
          *(undefined4 *)(lVar2 + 0x28) = 0;
        }
        if ((longlong)*(int *)(lVar2 + 0x18) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x10);
          lVar9 = (longlong)*(int *)(lVar2 + 0x18) * 0x20;
          do {
            lVar9 = lVar9 + -0x20;
            FUN_1409580ee(lVar2,lVar8,lVar5,local_98);
            if ((int)local_98[0] < 1) break;
            lVar8 = lVar8 + 0x20;
          } while (lVar9 != 0);
        }
        FUN_140958026(lVar2,lVar5);
      }
      *(undefined4 *)(lVar2 + 0x30) = 0;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140958026 FUN_140958026 body=123 status=ok
// SIG undefined FUN_140958026(void)

void FUN_140958026(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x34) = 1;
  lVar3 = *param_2;
  uVar2 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = (longlong)(int)param_2[1] * 0x30;
    do {
      FUN_14575a200(lVar3);
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    uVar2 = (undefined4)param_2[1];
    lVar3 = *param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_1409580a1(lVar3,uVar2);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_14575a33a(param_2,0);
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



// FUNCTION 1409580a1 FUN_1409580a1 body=77 status=ok
// SIG undefined FUN_1409580a1(void)

void FUN_1409580a1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409580ee FUN_1409580ee body=882 status=ok
// SIG undefined FUN_1409580ee(void)

void FUN_1409580ee(longlong param_1,uint *param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  int *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((((param_2[1] != 0) && (uVar4 = *param_2, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc))
       && ((plVar15 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar15 != (longlong *)0x0 && (*(uint *)(plVar15 + 2) == param_2[1])))) &&
      (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
       ((lVar6 = *plVar15, lVar6 != 0 && ((*(byte *)(lVar6 + 0x65) & 2) == 0)))))) &&
     (((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0 && (*(char *)(param_1 + 0x34) == '\0')))) {
    lVar8 = FUN_1403ca43f();
    if ((longlong)(int)param_2[6] != 0) {
      local_b8 = (longlong *)(lVar8 + 0x50);
      lVar16 = *(longlong *)(param_2 + 4);
      lVar12 = (longlong)(int)param_2[6] << 5;
      uVar13 = 0;
      local_90 = lVar8 + 0xb8;
      local_88 = param_3;
      do {
        if ((param_4 != (int *)0x0) && (*param_4 < 1)) break;
        fVar3 = *(float *)(lVar16 + 0x18);
        if (0.0 < fVar3) {
          lVar9 = FUN_14479d2ce(lVar16);
          local_a8 = FUN_14479d2ce(lVar16 + 8);
          local_b0 = lVar9;
          if (lVar9 == 0) {
            local_b0 = local_a8;
          }
          if (local_b0 != 0) {
            FUN_1405fab15(&local_80);
            local_c0 = local_80;
            if (local_80 != 0) {
              local_a0 = uVar13;
              local_98 = param_4;
              FUN_140a6f4d0(local_80 + 0x18,local_90);
              *(undefined8 *)(local_80 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
              *(float *)(local_80 + 8) = fVar3;
              *(undefined1 *)(local_80 + 0xc) = 1;
              lVar9 = *(longlong *)(lVar8 + 0x58);
              if (lVar9 == 0) {
                uVar10 = FUN_145c6ef2e();
                lVar9 = FUN_14477b664(uVar10);
                *(longlong *)(lVar8 + 0x58) = lVar9;
              }
              lVar14 = *(longlong *)(lVar8 + 0x60);
              if (lVar14 == 0) {
                if (lVar9 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = 0;
                  if (*local_b8 != 0) {
                    plVar15 = *(longlong **)(lVar9 + 0xb8);
                    if ((plVar15 == (longlong *)0x0) ||
                       (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
                      lVar14 = 0;
                    }
                    else {
                      uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
                      lVar14 = FUN_144aff482(uVar10,local_b8);
                    }
                    *(longlong *)(lVar8 + 0x60) = lVar14;
                  }
                }
              }
              plVar15 = local_88;
              iVar5 = (int)local_88[1];
              *(uint *)(local_88 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)local_88 + 0xc) < iVar5 + 1U) {
                FUN_14575a26c(local_88,iVar5);
              }
              lVar9 = *plVar15;
              lVar11 = (longlong)iVar5 * 0x30;
              *(longlong *)(lVar9 + lVar11) = local_b0;
              *(longlong *)(lVar9 + 8 + lVar11) = lVar14;
              *(longlong *)(lVar9 + 0x10 + lVar11) = lVar6;
              *(longlong *)(lVar9 + 0x18 + lVar11) = local_80;
              *(longlong **)(lVar9 + 0x20 + lVar11) = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                UNLOCK();
              }
              *(longlong *)(lVar9 + lVar11 + 0x28) = local_a8;
              uVar13 = local_a0;
              param_4 = local_98;
            }
            plVar15 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_78 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            if ((local_c0 != 0) && (*(undefined4 *)(lVar16 + 0x18) = 0, param_4 != (int *)0x0)) {
              *param_4 = *param_4 + -1;
            }
          }
        }
        lVar16 = lVar16 + 0x20;
        uVar13 = (ulonglong)((int)uVar13 + 1);
        lVar12 = lVar12 + -0x20;
      } while (lVar12 != 0);
      if ((uint)uVar13 != param_2[6]) goto LAB_1409581ab;
    }
    param_2[6] = 0;
    if ((int)param_2[7] < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8);
    }
  }
LAB_1409581ab:
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409584a6 FUN_1409584a6 body=1 status=ok
// SIG undefined FUN_1409584a6(void)

void FUN_1409584a6(void)

{
  return;
}



// FUNCTION 1409584b0 FUN_1409584b0 body=201 status=ok
// SIG undefined FUN_1409584b0(void)

undefined8 * FUN_1409584b0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a43e160;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x39) = (*(byte *)((longlong)param_1 + 0x39) & 0xe0) + 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  FUN_1404163bc(param_1 + 0xc);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = &DAT_3f8000003f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  return param_1;
}



// FUNCTION 14095857a FUN_14095857a body=777 status=ok
// SIG undefined FUN_14095857a(void)

void FUN_14095857a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,float param_6,float param_7,byte param_8)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  ulonglong *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_80 = *(undefined4 *)(param_4 + 1);
  local_88 = *param_4;
  uStack_7c = 0x3f800000;
  if ((param_6 != 0.0) || (NAN(param_6))) {
    puVar4 = (undefined8 *)FUN_14797c614(param_1 + 10);
    puVar4[2] = param_2[2];
    uVar3 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar3;
    puVar4[5] = param_3[2];
    uVar3 = param_3[1];
    puVar4[3] = *param_3;
    puVar4[4] = uVar3;
    *(float *)(puVar4 + 6) = param_6;
    *(undefined4 *)((longlong)puVar4 + 0x34) = (undefined4)local_88;
    *(undefined4 *)(puVar4 + 7) = local_88._4_4_;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_80;
    *(undefined4 *)(puVar4 + 8) = uStack_7c;
    *(undefined4 *)((longlong)puVar4 + 0x44) = param_5;
    *(float *)(puVar4 + 9) = param_7;
    *(uint *)((longlong)puVar4 + 0x4c) = (uint)param_8;
  }
  else {
    if ((param_7 != 0.0) || (NAN(param_7))) {
      iVar1 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar1 + 1U) {
        FUN_14798a54a(param_1 + 4,iVar1);
      }
      *(float *)(param_1[4] + (longlong)iVar1 * 4) = param_7;
      local_90 = (ulonglong *)(param_1 + 7);
      iVar1 = (int)param_1[8];
      *(uint *)(param_1 + 8) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
        FUN_14798a5d0(local_90,iVar1);
      }
      uVar2 = param_1[7];
      uVar5 = ((longlong)uVar2 >> 0x18) + (longlong)local_90;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar2;
      }
      local_74 = param_5;
      FUN_140958884((longlong)iVar1 * 0x40 + uVar5,param_2,&local_88);
      iVar1 = (int)param_1[8];
      *(uint *)(param_1 + 8) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
        FUN_14798a5d0(local_90,iVar1);
      }
      uVar2 = param_1[7];
      uVar5 = ((longlong)uVar2 >> 0x18) + (longlong)local_90;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar2;
      }
      local_74 = param_5;
      FUN_140958884((longlong)iVar1 * 0x40 + uVar5,param_3,&local_88);
      iVar1 = (int)param_1[8];
      *(uint *)(param_1 + 8) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
        FUN_14798a5d0(local_90,iVar1);
      }
      uVar2 = *local_90;
      uVar5 = ((longlong)uVar2 >> 0x18) + (longlong)local_90;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar2;
      }
      lVar6 = (longlong)iVar1 * 0x40 + uVar5;
    }
    else {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_140958944(param_1,iVar1);
      }
      local_74 = param_5;
      FUN_140958884((longlong)iVar1 * 0x40 + *param_1,param_2,&local_88);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_140958944(param_1,iVar1);
      }
      lVar6 = (longlong)iVar1 * 0x40 + *param_1;
    }
    local_74 = param_5;
    FUN_140958884(lVar6,param_3,&local_88);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140958884 FUN_140958884 body=191 status=ok
// SIG undefined FUN_140958884(void)

void FUN_140958884(float *param_1,double *param_2,undefined8 *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 1.0;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  fVar5 = (float)dVar1;
  fVar6 = (float)dVar2;
  dVar3 = param_2[2];
  fVar7 = (float)dVar3;
  *param_1 = fVar5;
  param_1[1] = fVar6;
  param_1[2] = fVar7;
  param_1[3] = 1.0;
  param_1[4] = (float)(dVar1 - (double)fVar5);
  param_1[5] = (float)(dVar2 - (double)fVar6);
  param_1[6] = (float)(dVar3 - (double)fVar7);
  param_1[7] = 0.0;
  fVar5 = (float)DAT_14c8463f8;
  param_1[8] = (float)DAT_14c8463f0;
  param_1[9] = fVar5;
  uVar4 = param_3[1];
  *(undefined8 *)(param_1 + 10) = *param_3;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  param_1[0xe] = *param_4;
  return;
}



// FUNCTION 140958944 FUN_140958944 body=248 status=ok
// SIG undefined FUN_140958944(void)

void FUN_140958944(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140958a3e FUN_140958a3e body=139 status=ok
// SIG undefined FUN_140958a3e(void)

ulonglong FUN_140958a3e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined7 uVar6;
  
  FUN_140958aca();
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (((*(int *)(param_1 + 0xdc) != 0) && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xdc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_140343d7a(param_1);
      if ((*(longlong *)(lVar2 + 0x690) == lVar3) && (*(longlong *)(lVar2 + 0x690) != 0)) {
        uVar5 = CONCAT71(uVar6,*(char *)(lVar2 + 0x6b0) == '\0');
      }
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 140958aca FUN_140958aca body=93 status=ok
// SIG undefined FUN_140958aca(void)

undefined8 FUN_140958aca(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (((((*(int *)(param_1 + 0xdc) == 0) || (uVar1 = *(uint *)(param_1 + 0xd8), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0xdc))))) ||
     (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
      ((lVar2 = *plVar4, lVar2 == 0 || (*(char *)(lVar2 + 0x630) == '\x01')))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),2);
  }
  return uVar3;
}



// FUNCTION 140958b28 FUN_140958b28 body=48 status=ok
// SIG undefined FUN_140958b28(void)

void FUN_140958b28(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e67f0);
  FUN_140958b58(param_1,param_2);
  return;
}



// FUNCTION 140958b58 FUN_140958b58 body=230 status=ok
// SIG undefined FUN_140958b58(void)

void FUN_140958b58(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14095939c();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if ((0x38 < iVar1) && ((*(byte *)((longlong)param_2 + 0x2b) & 0x20) != 0)) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140958c40(param_2,&local_38);
    FUN_140958ed1(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (lVar2 = param_1, (*(byte *)((longlong)param_2 + 0x35) & 0x10) == 0)) {
LAB_140958be2:
    lVar3 = lVar2;
    lVar2 = lVar3;
    if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x000140958bf1;
    goto LAB_140958bfc;
  }
LAB_140958c07:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140958bf1:
  lVar2 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_140958be2;
  lVar2 = FUN_142840154(lVar3);
LAB_140958bfc:
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar3 + 0x20);
    goto LAB_140958be2;
  }
  if ((*(byte *)(lVar2 + 0x2c) & 0x20) != 0) {
    *(byte *)(param_1 + 0xd7) = *(byte *)(param_1 + 0xd7) | 2;
  }
  goto LAB_140958c07;
}



// FUNCTION 140958c40 FUN_140958c40 body=48 status=ok
// SIG undefined FUN_140958c40(void)

void FUN_140958c40(longlong param_1,undefined8 *param_2)

{
  FUN_140958c70();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_14095904c(*param_2,*(undefined4 *)(param_2 + 1));
    return;
  }
  return;
}



// FUNCTION 140958c70 FUN_140958c70 body=446 status=ok
// SIG undefined FUN_140958c70(void)

longlong * FUN_140958c70(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140958ed1(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_140958f00(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar4 = 8;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      (**(code **)(*param_1 + 0x160))(param_1,lVar3 + lVar4 + -8);
      FUN_14021219d(param_1,lVar3 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_140958e8c(param_2);
    if (0 < (int)local_3c) {
      iVar5 = 0;
      do {
        lVar4 = FUN_140958e30(param_2);
        (**(code **)(*param_1 + 0x160))(param_1,lVar4);
        FUN_14021219d(param_1,lVar4 + 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140958e30 FUN_140958e30 body=70 status=ok
// SIG undefined FUN_140958e30(void)

longlong FUN_140958e30(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140af6a9a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_140958e76(lVar2,1);
  return lVar2;
}



// FUNCTION 140958e76 FUN_140958e76 body=22 status=ok
// SIG undefined FUN_140958e76(void)

void FUN_140958e76(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 140958e8c FUN_140958e8c body=69 status=ok
// SIG undefined FUN_140958e8c(void)

void FUN_140958e8c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140958ed1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140958f00(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140958ed1 FUN_140958ed1 body=47 status=ok
// SIG undefined FUN_140958ed1(void)

void FUN_140958ed1(longlong param_1,int param_2)

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



// FUNCTION 140958f00 FUN_140958f00 body=332 status=ok
// SIG undefined FUN_140958f00(void)

void FUN_140958f00(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140958f6e;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140958f6e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 14095904c FUN_14095904c body=846 status=ok
// SIG undefined FUN_14095904c(void)

void FUN_14095904c(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  longlong *plVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  float fVar21;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar15 = &local_358;
    do {
      piVar7 = (int *)*plVar15;
      piVar16 = (int *)plVar15[1];
      iVar18 = (int)plVar15[2];
      iVar14 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar7) >> 3);
      piVar19 = piVar16;
      piVar10 = piVar7;
      if (iVar18 != 0) {
LAB_140959119:
        uVar9 = iVar14 * -0x55555555 + 1;
        if (8 < (int)uVar9) {
          uVar11 = (ulonglong)(uVar9 >> 1);
          uVar1 = *(undefined8 *)(piVar7 + uVar11 * 6 + 4);
          uVar2 = *(undefined8 *)(piVar7 + uVar11 * 6);
          uVar3 = *(undefined8 *)(piVar7 + uVar11 * 6 + 2);
          *(undefined8 *)(piVar7 + uVar11 * 6 + 4) = *(undefined8 *)(piVar7 + 4);
          uVar4 = *(undefined8 *)(piVar7 + 2);
          *(undefined8 *)(piVar7 + uVar11 * 6) = *(undefined8 *)piVar7;
          *(undefined8 *)(piVar7 + uVar11 * 6 + 2) = uVar4;
          *(undefined8 *)(piVar7 + 4) = uVar1;
          *(undefined8 *)piVar7 = uVar2;
          *(undefined8 *)(piVar7 + 2) = uVar3;
          piVar12 = piVar16 + 6;
          piVar8 = piVar7;
          do {
            piVar5 = piVar8 + 6;
            piVar17 = piVar8 + 6;
            do {
              piVar8 = piVar17;
              piVar13 = piVar5;
              if (piVar16 < piVar8) break;
              iVar14 = *piVar7 - *piVar8;
              if (*piVar7 - *piVar8 == 0) {
                iVar14 = piVar7[1] - piVar8[1];
              }
              piVar5 = piVar13 + 6;
              piVar17 = piVar8 + 6;
            } while (-1 < iVar14);
            piVar5 = piVar12 + -0xc;
            do {
              piVar17 = piVar12;
              piVar20 = piVar5;
              piVar12 = piVar17 + -6;
              if (piVar12 <= piVar7) break;
              iVar14 = *piVar12 - *piVar7;
              if (*piVar12 - *piVar7 == 0) {
                iVar14 = piVar17[-5] - piVar7[1];
              }
              piVar5 = piVar20 + -6;
            } while (-1 < iVar14);
            if (piVar12 < piVar8) goto LAB_1409592d1;
            uVar1 = *(undefined8 *)(piVar8 + 4);
            uVar2 = *(undefined8 *)piVar8;
            uVar3 = *(undefined8 *)(piVar8 + 2);
            *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar17 + -2);
            uVar4 = *(undefined8 *)(piVar17 + -4);
            *(undefined8 *)piVar8 = *(undefined8 *)piVar12;
            *(undefined8 *)(piVar8 + 2) = uVar4;
            *(undefined8 *)(piVar17 + -2) = uVar1;
            *(undefined8 *)piVar12 = uVar2;
            *(undefined8 *)(piVar17 + -4) = uVar3;
          } while( true );
        }
        if (piVar7 < piVar16) {
          do {
            piVar19 = piVar7;
            if (piVar7 + 6 <= piVar16) {
              iVar18 = *piVar7;
              piVar10 = piVar7 + 6;
              piVar12 = piVar7;
              do {
                iVar14 = iVar18 - *piVar10;
                if (iVar14 == 0) {
                  iVar14 = piVar12[1] - piVar10[1];
                }
                piVar19 = piVar10;
                iVar6 = *piVar10;
                if (-1 < iVar14) {
                  piVar19 = piVar12;
                  iVar6 = iVar18;
                }
                iVar18 = iVar6;
                piVar10 = piVar10 + 6;
                piVar12 = piVar19;
              } while (piVar10 <= piVar16);
            }
            local_48 = *(undefined8 *)(piVar19 + 4);
            local_58 = *(undefined8 *)piVar19;
            uStack_50 = *(undefined8 *)(piVar19 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar16 + 4);
            uVar1 = *(undefined8 *)(piVar16 + 2);
            *(undefined8 *)piVar19 = *(undefined8 *)piVar16;
            *(undefined8 *)(piVar19 + 2) = uVar1;
            *(undefined8 *)(piVar16 + 4) = local_48;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
            *piVar16 = (int)local_58;
            piVar16[1] = local_58._4_4_;
            piVar16[2] = (int)uStack_50;
            piVar16[3] = uStack_50._4_4_;
            piVar16 = piVar16 + -6;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (piVar7 < piVar16);
        }
        goto LAB_1409591bf;
      }
LAB_1409591d4:
      FUN_147021b5c(piVar7);
LAB_1409591bf:
      plVar15 = plVar15 + -3;
    } while (&local_358 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1409592d1:
  local_48 = *(undefined8 *)(piVar7 + 4);
  local_58 = *(undefined8 *)piVar7;
  uStack_50 = *(undefined8 *)(piVar7 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar17 + -2);
  uVar1 = *(undefined8 *)(piVar17 + -4);
  *(undefined8 *)piVar7 = *(undefined8 *)piVar12;
  *(undefined8 *)(piVar7 + 2) = uVar1;
  *(undefined8 *)(piVar17 + -2) = local_48;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar12 = (int)local_58;
  piVar17[-5] = local_58._4_4_;
  piVar17[-4] = (int)uStack_50;
  piVar17[-3] = uStack_50._4_4_;
  iVar18 = iVar18 + -1;
  piVar17 = piVar17 + -0xc;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)piVar20 - (longlong)piVar10 < (longlong)piVar19 - (longlong)piVar13) {
    if (piVar8 < piVar16) {
      *plVar15 = (longlong)piVar8;
      plVar15[1] = (longlong)piVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    piVar13 = piVar7;
    if (piVar12 <= piVar7 + 6) goto LAB_1409591bf;
  }
  else {
    if (piVar7 + 6 < piVar12) {
      *plVar15 = (longlong)piVar7;
      plVar15[1] = (longlong)piVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    piVar7 = piVar8;
    piVar17 = piVar16;
    piVar20 = piVar16;
    if (piVar16 <= piVar8) goto LAB_1409591bf;
  }
  iVar14 = (int)((ulonglong)((longlong)piVar20 - (longlong)piVar13) >> 3);
  piVar16 = piVar17;
  piVar19 = piVar20;
  piVar10 = piVar13;
  if (iVar18 == 0) goto LAB_1409591d4;
  goto LAB_140959119;
}



// FUNCTION 14095939c FUN_14095939c body=2975 status=ok
// SIG undefined FUN_14095939c(void)

void FUN_14095939c(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined **ppuVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_248 [44];
  int local_21c;
  ulonglong local_218;
  uint *local_210;
  ulonglong local_208;
  int local_1fc;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  undefined8 *local_1e8;
  undefined8 **local_1e0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((*(byte *)(param_2 + 5) & 4) == 0 && ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)))) {
    FUN_1400f9b98(param_1);
  }
  FUN_1403a52d8(param_1,param_2);
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((*(byte *)(param_2 + 5) & 4) == 0 && ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)))) {
    FUN_1400f8a51(param_1);
  }
  *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 0x40;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x2f));
  plVar8 = param_1 + 0x25;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[0x26] * 0x18,
             (longlong)*(int *)((longlong)param_1 + 0x134) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[0x2a] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0x154) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_1f8 = (undefined **)
                CONCAT44(local_1f8._4_4_,(int)param_1[0x26] - *(int *)((longlong)param_1 + 0x15c));
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
      }
      else {
        FUN_14572512c(param_2,&local_1f8);
      }
    }
    else {
      local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar1;
    }
    local_210 = (uint *)(param_1 + 0x27);
    iVar19 = (int)param_1[0x2a];
    if (iVar19 == 0) {
      uVar17 = 1;
      local_218 = 0;
      local_21c = 0;
      iVar15 = 0;
    }
    else {
      puVar18 = (uint *)param_1[0x29];
      if ((uint *)param_1[0x29] == (uint *)0x0) {
        puVar18 = local_210;
      }
      uVar11 = *puVar18;
      if (uVar11 == 0) {
        iVar15 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar15 = iVar19 + -1;
        }
        local_218 = 0;
        uVar17 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar17 = 0;
        }
        local_21c = 0;
        do {
          if (uVar17 == local_218) goto LAB_140959509;
          local_21c = local_21c + 0x20;
          uVar11 = puVar18[local_218 + 1];
          local_218 = local_218 + 1;
        } while (uVar11 == 0);
      }
      else {
        local_218 = 0;
        local_21c = 0;
      }
      uVar17 = (ulonglong)(-uVar11 & uVar11);
      uVar4 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar15 = (local_21c - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar15) {
        iVar15 = iVar19;
      }
    }
    if (iVar15 < iVar19) {
      uVar11 = 0xffffffff;
      do {
        lVar13 = param_1[0x25];
        (**(code **)(*param_2 + 0x160))(param_2,lVar13 + (longlong)iVar15 * 0x18);
        (**(code **)(*param_2 + 0x138))(param_2,lVar13 + (longlong)iVar15 * 0x18 + 8);
        uVar11 = ~(uint)uVar17 & uVar11;
        puVar18 = (uint *)param_1[0x29];
        if ((uint *)param_1[0x29] == (uint *)0x0) {
          puVar18 = local_210;
        }
        iVar19 = (int)param_1[0x2a];
        lVar13 = (longlong)(int)local_218;
        uVar16 = puVar18[lVar13] & uVar11;
        if (uVar16 == 0) {
          iVar15 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar15 = iVar19 + -1;
          }
          iVar20 = iVar15 >> 5;
          if (iVar15 >> 5 < (int)local_218) {
            iVar20 = (int)local_218;
          }
          lVar14 = 0;
          do {
            if (iVar20 - lVar13 == lVar14) goto LAB_140959509;
            local_21c = local_21c + 0x20;
            uVar16 = puVar18[lVar14 + lVar13 + 1];
            lVar14 = lVar14 + 1;
          } while (uVar16 == 0);
          local_218 = (ulonglong)(uint)((int)local_218 + (int)lVar14);
          uVar11 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar16 & uVar16);
        uVar4 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar15 = (local_21c - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar15 < iVar19);
    }
  }
  else {
    uVar17 = local_208 >> 0x20;
    local_208 = local_208 & 0xffffffff00000000;
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_208,4);
      }
      else {
        FUN_14572512c(param_2,&local_208);
      }
    }
    else {
      local_208 = CONCAT44((int)uVar17,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar1;
    }
    FUN_1403dd6aa(plVar8,local_208 & 0xffffffff);
    if (0 < (int)local_208) {
      iVar19 = 0;
      do {
        FUN_14073e4dc(plVar8,&local_1f8);
        plVar2 = plStack_1f0 + 1;
        *plStack_1f0 = 0;
        plStack_1f0[1] = 0;
        *(undefined4 *)(plStack_1f0 + 2) = 0xffffffff;
        (**(code **)(*param_2 + 0x160))(param_2);
        (**(code **)(*param_2 + 0x138))(param_2,plVar2);
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)local_208);
    }
  }
LAB_140959509:
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((*(byte *)(param_2 + 5) & 4) == 0 && ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)))) {
    if (param_1[0x2d] != 0) {
      FUN_1446efa72(param_1 + 0x2d,0,0,4);
    }
    *(undefined4 *)(param_1 + 0x2e) = 0;
    uVar11 = (int)param_1[0x26] - *(int *)((longlong)param_1 + 0x15c);
    iVar19 = 1;
    if (3 < uVar11) {
      uVar17 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((0 < (int)uVar11) && (0 < iVar19)) {
      *(int *)(param_1 + 0x2e) = iVar19;
      FUN_14073e928(plVar8);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x2f));
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    puVar18 = (uint *)((longlong)param_1 + 0xd4);
    puVar6 = *(uint **)param_2[1];
    puVar7 = (uint *)((undefined8 *)param_2[1])[1];
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (puVar7 < puVar6 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0) goto LAB_140959c58;
        lVar13 = *param_2;
LAB_1409595f2:
        (**(code **)(lVar13 + 0x170))(param_2,puVar18,4);
      }
      else {
        *puVar18 = *puVar6;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
    }
    else {
      if (puVar7 < puVar6 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar18,4);
        }
        else {
          FUN_14572512c(param_2,puVar18);
        }
      }
      else {
        *puVar18 = *puVar6;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      *puVar18 = *puVar18 & 0xefbfff6f;
    }
  }
  else {
    local_1f8 = (undefined **)
                (CONCAT44(local_1f8._4_4_,*(undefined4 *)((longlong)param_1 + 0xd4)) &
                0xffffffffefbfff6f);
    puVar5 = (ulonglong *)param_2[1];
    if (puVar5[1] < *puVar5 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        lVar13 = *param_2;
        puVar18 = (uint *)&local_1f8;
        goto LAB_1409595f2;
      }
      puVar18 = (uint *)&local_1f8;
LAB_140959c58:
      FUN_14572512c(param_2,puVar18);
    }
    else {
      *puVar5 = *puVar5 + 4;
    }
  }
  if ((int)param_2[8] < 0x13b) {
    uVar11 = *(uint *)((longlong)param_1 + 0xd4);
    *(uint *)((longlong)param_1 + 0xd4) = uVar11 ^ 0x200;
    if (((uVar11 >> 9 & 1) != 0) && ((*(byte *)(param_1[8] + 0xd5) & 2) != 0)) {
      *(uint *)((longlong)param_1 + 0xd4) = uVar11;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x1c);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x1d);
  local_1fc = 0;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)((longlong)param_1 + 0x1e4) != 0) {
      FUN_14073ebd8(param_1 + 0x3b,0);
    }
    if (((int)param_2[8] < 0x169) &&
       (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc88) == '\0')) {
      lVar13 = (**(code **)(*param_2 + 0x28))(param_2);
      puVar5 = (ulonglong *)param_2[1];
      piVar3 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar3) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_1fc,4);
        }
        else {
          FUN_14572512c(param_2,&local_1fc);
        }
      }
      else {
        local_1fc = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar3;
      }
      (**(code **)(*param_2 + 0x1a0))(param_2,lVar13 + (longlong)local_1fc * 0xc + 4);
      goto LAB_1409596fb;
    }
  }
  lVar13 = 0;
LAB_1409596fb:
  if ((*(byte *)((longlong)param_2 + 0x2a) & 0x40) == 0) {
    local_1f8 = (undefined **)0x0;
    (**(code **)(*param_2 + 0x150))(param_2);
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (*(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xd4) & 0xefbfff6f,
     (*(byte *)((longlong)param_2 + 0x35) & 0x10) == 0)) {
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,1);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    FUN_140edfcd2(param_2,param_1 + 0x3b);
  }
  else {
    uVar12 = (**(code **)(*param_2 + 0x28))(param_2);
    if (((int)param_2[8] < 0x169) &&
       (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc88) == '\0')) {
      (**(code **)(*param_2 + 0x1a0))(param_2,lVar13);
    }
    local_1f8 = (undefined **)0x0;
    plStack_1f0 = (longlong *)0x0;
    FUN_140edfcd2(param_2,&local_1f8);
    plVar8 = plStack_1f0;
    ppuVar9 = local_1f8;
    if ((0 < (int)plStack_1f0 && (int)param_1[0x3c] == 0) && (param_1 + 0x3b != &local_1f8)) {
      *(int *)(param_1 + 0x3c) = (int)plStack_1f0;
      FUN_14171486c(param_1 + 0x3b,(ulonglong)plStack_1f0 & 0xffffffff,
                    *(undefined4 *)((longlong)param_1 + 0x1e4));
      FUN_1427dedeb(param_1[0x3b],ppuVar9,(ulonglong)plVar8 & 0xffffffff);
    }
    if (((int)param_2[8] < 0x169) &&
       (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc88) == '\0')) {
      (**(code **)(*param_2 + 0x1a0))(param_2,uVar12);
    }
    if (local_1f8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  puVar5 = (ulonglong *)param_2[1];
  if (puVar5[1] < *puVar5 + 4) {
    local_1f8 = (undefined **)((ulonglong)local_1f8 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
    if (1 < (uint)local_1f8) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *puVar5 = *puVar5 + 4;
  }
  local_208 = 0;
  (**(code **)(*param_2 + 0x160))(param_2);
  bVar10 = *(byte *)(param_2 + 5);
  if (0xf0 < (int)param_2[8]) {
    if ((bVar10 & 4) != 0) {
      bVar21 = true;
      if ((char)param_1[0x1a] == '\0') {
        if (param_2[0xd] == 0) {
          bVar21 = false;
        }
        else {
          bVar21 = *(longlong *)(param_2[0xd] + 0x10) != 0;
        }
      }
      puVar5 = (ulonglong *)param_2[1];
      if (puVar5[1] < *puVar5 + 4) {
        local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,(uint)bVar21);
        (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
        if (1 < (uint)local_1f8) {
          FUN_14572541c(param_2);
        }
      }
      else {
        *puVar5 = *puVar5 + 4;
      }
    }
    bVar10 = *(byte *)(param_2 + 5);
    if ((bVar10 & 1) != 0) {
      puVar5 = (ulonglong *)param_2[1];
      puVar18 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar18) {
        local_1f8 = (undefined **)((ulonglong)local_1f8 & 0xffffffff00000000);
        (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
        uVar11 = (uint)local_1f8;
        if (1 < (uint)local_1f8) {
          FUN_14572541c(param_2);
          uVar11 = (uint)local_1f8;
        }
      }
      else {
        uVar11 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar18;
      }
      *(bool *)(param_1 + 0x1a) = uVar11 != 0;
      bVar10 = *(byte *)(param_2 + 5);
    }
  }
  *(int *)(param_2 + 6) = (int)param_2[6] + 1;
  if ((bVar10 & 1) == 0) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 4) == 0) {
      (**(code **)(*param_2 + 0x138))(param_2);
    }
    else {
      plVar8 = (longlong *)param_1[0x22];
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xd8))(plVar8,param_2);
      }
    }
  }
  else {
    lVar13 = param_1[0x22];
    local_1f8 = (undefined **)0x0;
    (**(code **)(*param_2 + 0x150))(param_2);
    ppuVar9 = local_1f8;
    if (param_1[0x22] == lVar13) {
      if ((local_1f8 != (undefined **)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_1f8);
      }
      param_1[0x22] = (longlong)ppuVar9;
    }
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  if ((((*(byte *)(param_2 + 5) & 5) == 0) &&
      ((**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x24), param_1[0x24] != 0)) &&
     (param_1[0x23] != 0)) {
    local_1e0 = &local_1e8;
    local_1f8 = &PTR_FUN_149e37810;
    local_1e8 = &local_1f8;
    plStack_1f0 = param_2;
    FUN_140380b20(param_1);
  }
  *(int *)(param_2 + 6) = (int)param_2[6] + -1;
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (param_1[0x22] == 0)) {
    if (((*(byte *)(param_2 + 5) & 2) == 0) && (DAT_14c872ba8 == '\0')) {
      if ((*(ushort *)((longlong)param_2 + 0x35) & 0x4010) == 0) {
        lVar14 = (**(code **)(*param_2 + 0x20))();
        lVar13 = 0;
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x98) == 1)) {
          lVar13 = lVar14;
        }
        if (((((*(byte *)((longlong)param_1 + 0xd6) & 4) == 0) || (lVar13 == 0)) ||
            ((*(uint *)(param_1[2] + 0xd4) & 0x20000) == 0)) ||
           ((*(int *)(lVar13 + 0x400) == -1 && (*(char *)(lVar13 + 0x3fc) == '\0')))) {
          lVar13 = param_1[0x22];
          if (lVar13 == 0) {
            (**(code **)(*param_1 + 1000))(param_1);
            lVar13 = param_1[0x22];
          }
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
          param_1[0x22] = lVar13;
          (**(code **)(*param_2 + 0x168))(param_2);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 1000))(param_1);
      lVar13 = param_1[0x22];
      if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar13);
      }
      param_1[0x22] = lVar13;
    }
  }
  if (0 < (int)param_2[9]) {
    FUN_140c191a2(param_2,param_1 + 0x40);
  }
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140959f3c FUN_140959f3c body=100 status=ok
// SIG undefined FUN_140959f3c(void)

void FUN_140959f3c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140959fa0();
    lVar2 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_140959fa0();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if ((lVar2 != lVar3) && (lVar3 != 0)) {
        FUN_14095a086(lVar3 + 8,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140959fa0 FUN_140959fa0 body=228 status=ok
// SIG undefined FUN_140959fa0(void)

longlong FUN_140959fa0(void)

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
  if (DAT_14cac1be8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1478776b7;
    local_40 = FUN_14637bb66;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"GbxActorChannelListener",&DAT_14cac1be8,&DAT_1478776b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1be8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095a086 FUN_14095a086 body=162 status=ok
// SIG undefined FUN_14095a086(void)

void FUN_14095a086(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14095a113;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14095a113:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14095a128 FUN_14095a128 body=410 status=ok
// SIG undefined FUN_14095a128(void)

void FUN_14095a128(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c8688d0 == '\x01') && (*(int *)(param_1 + 0x128) != 0)) {
    local_90 = *param_2;
    local_98 = param_2[1];
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 0xc) = *(int *)(local_98 + 0xc) + 1;
      UNLOCK();
    }
    local_a0 = (longlong *)(param_1 + 0xd0);
    iVar2 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar2 + 1U) {
      FUN_14692a134(local_a0,iVar2);
    }
    lVar3 = *local_a0;
    lVar4 = (longlong)iVar2 * 0x40;
    *(undefined8 *)(lVar3 + lVar4) = local_90;
    *(longlong *)(lVar3 + 8 + lVar4) = local_98;
    *(undefined8 *)(lVar3 + 0x10 + lVar4) = param_3;
    *(undefined4 *)(lVar3 + 0x18 + lVar4) = param_4;
    *(undefined8 *)(lVar3 + 0x20 + lVar4) = param_5;
    *(undefined8 *)(lVar3 + 0x28 + lVar4) = param_6;
    *(undefined4 *)(lVar3 + 0x30 + lVar4) = param_7;
    *(undefined4 *)(lVar3 + 0x34 + lVar4) = param_8;
    *(undefined4 *)(lVar3 + 0x38 + lVar4) = param_9;
  }
  else {
    local_88 = *param_2;
    local_80 = (longlong *)param_2[1];
    if (local_80 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
      UNLOCK();
      plVar5 = local_80;
    }
    local_68 = param_5;
    local_60 = param_6;
    local_58 = param_7;
    local_54 = param_8;
    local_50 = param_9;
    local_78 = param_3;
    local_70 = param_4;
    FUN_14095a2c4();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095a2c4 FUN_14095a2c4 body=6467 status=ok
// SIG undefined FUN_14095a2c4(void)

void FUN_14095a2c4(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  LONG *pLVar2;
  double dVar3;
  DWORD DVar4;
  tagPOINT tVar5;
  tagPOINT tVar6;
  tagPOINT tVar7;
  tagPOINT hTouchInput;
  double dVar8;
  size_t _Size;
  bool bVar9;
  void *pvVar10;
  tagPOINT tVar11;
  tagPOINT tVar12;
  bool bVar13;
  char cVar14;
  SHORT SVar15;
  int iVar16;
  int iVar17;
  BOOL BVar18;
  UINT UVar19;
  PTOUCHINPUT pInputs;
  char *pcVar20;
  longlong *plVar21;
  short sVar22;
  tagPOINT *in_RDX;
  uint uVar24;
  uint7 uVar27;
  longlong lVar25;
  ulonglong uVar26;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined1 auStackY_1e8 [32];
  uint local_1a8;
  longlong *local_1a0;
  tagPOINT local_178;
  tagPOINT local_170;
  void *local_168;
  int local_160;
  undefined4 local_15c;
  double local_158;
  double local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  double local_118;
  double local_110;
  tagPOINT local_108;
  tagPOINT tStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  tagPOINT local_98;
  tagPOINT tStack_90;
  ulonglong local_70;
  uint uVar23;
  
  uVar32 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_70 = DAT_14c707940 ^ (ulonglong)auStackY_1e8;
  if (((((int)param_1[0x21] == 0) || (*in_RDX == (tagPOINT)0x0)) ||
      (tVar5 = in_RDX[1], tVar5 == (tagPOINT)0x0)) || (*(int *)((longlong)tVar5 + 8) < 1))
  goto LAB_14095ba45;
  tVar6 = in_RDX[2];
  uVar24 = in_RDX[3].x;
  tVar7 = in_RDX[4];
  hTouchInput = in_RDX[5];
  iVar28 = *(int *)((longlong)tVar5 + 8);
  do {
    iVar16 = iVar28;
    if (iVar16 == 0) {
      plVar21 = (longlong *)param_1[3];
      local_98.x = 0;
      local_98.y = 0;
      tStack_90.x = 0;
      tStack_90.y = 0;
      goto LAB_14095a3a4;
    }
    LOCK();
    iVar28 = *(int *)((longlong)tVar5 + 8);
    bVar31 = iVar16 == iVar28;
    if (bVar31) {
      *(int *)((longlong)tVar5 + 8) = iVar16 + 1;
      iVar28 = iVar16;
    }
    UNLOCK();
  } while (!bVar31);
  local_98 = *in_RDX;
  plVar21 = (longlong *)param_1[3];
  LOCK();
  *(int *)((longlong)tVar5 + 8) = *(int *)((longlong)tVar5 + 8) + 1;
  UNLOCK();
  tStack_90 = tVar5;
LAB_14095a3a4:
  tVar11 = tStack_90;
  tVar5 = local_98;
  local_1a0 = param_1 + 3;
  cVar14 = (**(code **)(*plVar21 + 8))(plVar21,&local_98);
  tVar12 = tStack_90;
  if (cVar14 == '\0') {
    uVar29 = uVar24 - 0x100;
    if ((0x12 < uVar29) || (bVar31 = true, (0x40077U >> (uVar29 & 0x1f) & 1) == 0)) {
      cVar14 = FUN_14691a654(uVar24);
      bVar31 = true;
      if (cVar14 == '\0') {
        bVar31 = (uVar24 & 0xfffffffe) == 0xfe;
      }
    }
    tVar12 = tStack_90;
    if (tStack_90 != (tagPOINT)0x0) {
      LOCK();
      plVar21 = (longlong *)((longlong)tStack_90 + 8);
      *(int *)plVar21 = *(int *)plVar21 + -1;
      UNLOCK();
      if (*(int *)plVar21 == 0) {
        (*(code *)**(undefined8 **)tStack_90)(tStack_90);
        LOCK();
        piVar1 = (int *)((longlong)tVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)tVar12 + 0x10))(tVar12);
        }
      }
    }
    if (!bVar31) goto LAB_14095a494;
    if ((uVar29 < 0x13) && ((0x40077U >> (uVar29 & 0x1f) & 1) != 0)) {
      FUN_1428502a8(param_1);
    }
    goto switchD_14095a4d3_caseD_20e;
  }
  if (tStack_90 != (tagPOINT)0x0) {
    LOCK();
    plVar21 = (longlong *)((longlong)tStack_90 + 8);
    *(int *)plVar21 = *(int *)plVar21 + -1;
    UNLOCK();
    if (*(int *)plVar21 == 0) {
      (*(code *)**(undefined8 **)tStack_90)(tStack_90);
      LOCK();
      piVar1 = (int *)((longlong)tVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)tVar12 + 0x10))(tVar12);
      }
    }
  }
LAB_14095a494:
  pvVar10 = DAT_14c967228;
  local_1a8 = tVar7.x;
  uVar29 = local_1a8;
  sVar22 = (short)hTouchInput.x;
  uVar23 = hTouchInput.x;
  iVar28 = (int)uVar23 >> 0x10;
  if ((int)uVar24 < 0x200) {
    if ((int)uVar24 < 0x86) {
      if (0x17 < (int)uVar24) {
        switch(uVar24) {
        case 0x18:
          if (tVar5 != (tagPOINT)0x0) {
            if (hTouchInput == (tagPOINT)0x3) {
              SetWindowPlacement(*(HWND *)((longlong)tVar5 + 0x28),
                                 (WINDOWPLACEMENT *)((longlong)tVar5 + 0x6c));
              *(undefined1 *)(param_1 + 0x17) = 0;
            }
            else if (hTouchInput == (tagPOINT)0x1) {
              GetWindowPlacement(*(HWND *)((longlong)tVar5 + 0x28),
                                 (WINDOWPLACEMENT *)((longlong)tVar5 + 0x6c));
              *(undefined1 *)(param_1 + 0x17) = 1;
            }
          }
          break;
        case 0x19:
        case 0x1b:
        case 0x1d:
        case 0x1e:
        case 0x1f:
          break;
        case 0x1a:
          if ((hTouchInput != (tagPOINT)0x0) &&
             (iVar28 = wcscmp((wchar_t *)hTouchInput,L"ConvertibleSlateMode"), iVar28 == 0)) {
            (**(code **)(*(longlong *)*local_1a0 + 0x198))();
          }
          break;
        case 0x1c:
          FUN_1428502a8(param_1);
          (**(code **)(*(longlong *)param_1[3] + 400))
                    ((longlong *)param_1[3],tVar7 != (tagPOINT)0x0);
          break;
        case 0x20:
          lVar25 = (**(code **)(*(longlong *)tVar5 + 0xe0))(tVar5);
          if ((*(char *)(lVar25 + 0x18) != '\x01') ||
             ((uVar23 & 0xffff0000) != 0x2000000 || sVar22 == 1)) {
            (**(code **)(*(longlong *)*local_1a0 + 0x80))();
          }
          break;
        case 0x21:
          *(byte *)((longlong)param_1 + 0xc9) = ~(byte)hTouchInput.x & 1;
          break;
        default:
          if (uVar24 - 0x50 < 2) goto switchD_14095a5b8_caseD_10d;
          if (uVar24 == 0x85) goto LAB_14095a9fc;
        }
        goto switchD_14095a4d3_caseD_20e;
      }
      if (uVar24 == 5) {
        if (tVar5 != (tagPOINT)0x0) {
          lVar25 = (**(code **)(*(longlong *)tVar5 + 0xe0))(tVar5);
          if ((*(char *)(lVar25 + 0x25) == '\x01') && (*(char *)(lVar25 + 0x18) == '\0')) {
            FUN_14692af06(tVar5,(int)sVar22,iVar28);
          }
          iVar17 = (**(code **)(*(longlong *)tVar5 + 0x68))(tVar5);
          if (iVar17 != 0) {
            local_1a0 = (longlong *)*local_1a0;
            if (iVar16 != 0) {
              LOCK();
              *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
              UNLOCK();
              LOCK();
              *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
              UNLOCK();
            }
            local_98 = tVar5;
            tStack_90 = tVar11;
            (**(code **)(*local_1a0 + 0x140))(local_1a0,&local_98,(int)sVar22,iVar28);
            goto LAB_14095b9e1;
          }
        }
        goto switchD_14095a4d3_caseD_20e;
      }
      if (uVar24 == 6) {
        if (((ulonglong)tVar7 & 1) == 0) {
          uVar24 = (uint)(byte)((((ulonglong)tVar7 & 2) == 0) + 1);
        }
        else {
          uVar24 = (uint)CONCAT71((int7)((ulonglong)in_RDX >> 8),
                                  *(undefined1 *)((longlong)param_1 + 0xc9));
        }
        *(undefined1 *)((longlong)param_1 + 0xc9) = 0;
        *(bool *)((longlong)param_1 + 0xcb) = (char)uVar24 != '\x02';
        FUN_1428502a8(param_1);
        if (tVar5 != (tagPOINT)0x0) {
          local_1a0 = (longlong *)*local_1a0;
          if (iVar16 != 0) {
            LOCK();
            *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
            UNLOCK();
          }
          local_98 = tVar5;
          tStack_90 = tVar11;
          (**(code **)(*local_1a0 + 0x188))(local_1a0,&local_98,uVar24);
          goto LAB_14095ae9c;
        }
        goto switchD_14095a4d3_caseD_20e;
      }
      if ((uVar24 != 0x10) || (tVar5 == (tagPOINT)0x0)) goto switchD_14095a4d3_caseD_20e;
      local_1a0 = (longlong *)*local_1a0;
      if (iVar16 != 0) {
        LOCK();
        *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
        UNLOCK();
      }
      local_98 = tVar5;
      tStack_90 = tVar11;
      (**(code **)(*local_1a0 + 0x1a8))(local_1a0,&local_98);
LAB_14095ae9c:
      tVar5 = tStack_90;
      if (tStack_90 != (tagPOINT)0x0) {
        LOCK();
        plVar21 = (longlong *)((longlong)tStack_90 + 8);
        *(int *)plVar21 = *(int *)plVar21 + -1;
        UNLOCK();
        if (*(int *)plVar21 == 0) {
          (*(code *)**(undefined8 **)tStack_90)(tStack_90);
          LOCK();
          piVar1 = (int *)((longlong)tVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)tVar5 + 0x10))(tVar5);
          }
        }
      }
      if (iVar16 == 0) goto LAB_14095ba45;
      LOCK();
      plVar21 = (longlong *)((longlong)tVar11 + 8);
      *(int *)plVar21 = *(int *)plVar21 + -1;
      UNLOCK();
      if (*(int *)plVar21 == 0) {
        (*(code *)**(undefined8 **)tVar11)(tVar11);
        LOCK();
        piVar1 = (int *)((longlong)tVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)tVar11 + 0x10))(tVar11);
        }
      }
      goto LAB_14095ba28;
    }
    switch(uVar24) {
    case 0xff:
      local_128 = (void *)0x0;
      lVar25 = (longlong)DAT_14c967230;
      local_120 = DAT_14c967230;
      if (lVar25 == 0) {
        local_11c = 0;
      }
      else {
        FUN_1446dd670(&local_128,DAT_14c967230,0);
        memcpy(local_128,pvVar10,lVar25 * 2);
      }
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar21,1,1);
        DAT_14c9670a0 = plVar21;
      }
      (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_108);
      FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
      local_1a0 = (longlong *)*local_1a0;
      if (in_RDX[7].x == 0) {
        (**(code **)(*local_1a0 + 0x78))(local_1a0,in_RDX[6].x,in_RDX[6].y);
      }
      else {
        (**(code **)(*local_1a0 + 0x70))();
      }
      goto LAB_14095b13b;
    case 0x100:
    case 0x104:
      uVar24 = (uint)((ulonglong)hTouchInput >> 0x1e);
      if (local_1a8 - 0x10 < 5) {
        uVar27 = hTouchInput._1_7_ >> 0x1e;
        switch(local_1a8) {
        case 0x10:
          UVar19 = MapVirtualKeyW(hTouchInput._2_4_ & 0xff,3);
          if (UVar19 == 0xa0) {
            uVar24 = (uint)CONCAT71(uVar27,*(undefined1 *)((longlong)param_1 + 0x121));
            *(undefined1 *)((longlong)param_1 + 0x121) = 1;
            uVar26 = 0xa0;
          }
          else {
            uVar26 = (ulonglong)UVar19;
            uVar24 = (uint)CONCAT71(uVar27,*(undefined1 *)((longlong)param_1 + 0x122));
            *(undefined1 *)((longlong)param_1 + 0x122) = 1;
          }
          break;
        case 0x11:
          if ((uVar23 >> 0x18 & 1) == 0) {
            uVar24 = (uint)CONCAT71(uVar27,*(undefined1 *)((longlong)param_1 + 0x123));
            *(undefined1 *)((longlong)param_1 + 0x123) = 1;
            uVar26 = 0xa2;
          }
          else {
            uVar24 = (uint)CONCAT71(uVar27,*(undefined1 *)((longlong)param_1 + 0x124));
            *(undefined1 *)((longlong)param_1 + 0x124) = 1;
            uVar26 = 0xa3;
          }
          break;
        case 0x12:
          if ((uVar23 >> 0x18 & 1) == 0) {
            uVar24 = (uint)CONCAT71(uVar27,*(undefined1 *)((longlong)param_1 + 0x125));
            *(undefined1 *)((longlong)param_1 + 0x125) = 1;
            uVar26 = 0xa4;
          }
          else {
            uVar24 = (uint)CONCAT71(uVar27,*(undefined1 *)((longlong)param_1 + 0x126));
            *(undefined1 *)((longlong)param_1 + 0x126) = 1;
            uVar26 = 0xa5;
          }
          break;
        case 0x13:
          goto switchD_14095a5e8_caseD_13;
        case 0x14:
          uVar26 = 0x14;
          SVar15 = GetKeyState(0x14);
          *(byte *)((longlong)param_1 + 0x127) = (byte)SVar15 & 1;
        }
      }
      else {
switchD_14095a5e8_caseD_13:
        uVar26 = (ulonglong)tVar7 & 0xffffffff;
      }
      UVar19 = MapVirtualKeyW(local_1a8,2);
      pvVar10 = DAT_14c967228;
      local_b8 = (void *)0x0;
      lVar25 = (longlong)DAT_14c967230;
      local_b0 = DAT_14c967230;
      if (lVar25 == 0) {
        local_ac = 0;
      }
      else {
        FUN_1446dd670(&local_b8,DAT_14c967230,0);
        memcpy(local_b8,pvVar10,lVar25 * 2);
      }
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar21,1,1);
        DAT_14c9670a0 = plVar21;
      }
      (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_108);
      FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
      (**(code **)(*(longlong *)*local_1a0 + 0x18))
                ((longlong *)*local_1a0,uVar26,UVar19,uVar24 & 0xffffff01);
      goto LAB_14095b65f;
    case 0x101:
    case 0x105:
      uVar26 = (ulonglong)tVar7 & 0xffffffff;
      if (local_1a8 - 0x10 < 5) {
        uVar26 = (ulonglong)tVar7 & 0xffffffff;
        switch(local_1a8) {
        case 0x10:
          UVar19 = MapVirtualKeyW(hTouchInput._2_4_ & 0xff,3);
          if (UVar19 == 0xa0) {
            *(undefined1 *)((longlong)param_1 + 0x121) = 0;
            uVar26 = 0xa0;
          }
          else {
            uVar26 = (ulonglong)UVar19;
            *(undefined1 *)((longlong)param_1 + 0x122) = 0;
          }
          break;
        case 0x11:
          if ((uVar23 >> 0x18 & 1) == 0) {
            *(undefined1 *)((longlong)param_1 + 0x123) = 0;
            uVar26 = 0xa2;
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x124) = 0;
            uVar26 = 0xa3;
          }
          break;
        case 0x12:
          if ((uVar23 >> 0x18 & 1) == 0) {
            *(undefined1 *)((longlong)param_1 + 0x125) = 0;
            uVar26 = 0xa4;
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x126) = 0;
            uVar26 = 0xa5;
          }
          break;
        case 0x14:
          uVar26 = 0x14;
          SVar15 = GetKeyState(0x14);
          *(byte *)((longlong)param_1 + 0x127) = (byte)SVar15 & 1;
        }
      }
      UVar19 = MapVirtualKeyW(local_1a8,2);
      pvVar10 = DAT_14c967228;
      local_c8 = (void *)0x0;
      lVar25 = (longlong)DAT_14c967230;
      local_c0 = DAT_14c967230;
      if (lVar25 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,DAT_14c967230,0);
        memcpy(local_c8,pvVar10,lVar25 * 2);
      }
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar21,1,1);
        DAT_14c9670a0 = plVar21;
      }
      (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_108);
      FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
      (**(code **)(*(longlong *)*local_1a0 + 0x20))((longlong *)*local_1a0,uVar26,UVar19,0);
LAB_14095b65f:
      FUN_14011623c(&local_98);
      break;
    case 0x102:
      local_a8 = (void *)0x0;
      lVar25 = (longlong)DAT_14c967230;
      local_a0 = DAT_14c967230;
      if (lVar25 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,DAT_14c967230,0);
        memcpy(local_a8,pvVar10,lVar25 * 2);
      }
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar21,1,1);
        DAT_14c9670a0 = plVar21;
      }
      (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_108);
      FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
      (**(code **)(*(longlong *)*local_1a0 + 0x10))
                ((longlong *)*local_1a0,(ulonglong)tVar7 & 0xffffffff,
                 (uint)((ulonglong)hTouchInput >> 0x1e) & 1);
      goto LAB_14095b13b;
    case 0x103:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x109:
    case 0x10a:
    case 0x10b:
    case 0x10c:
      break;
    case 0x10d:
    case 0x10e:
    case 0x10f:
switchD_14095a5b8_caseD_10d:
      if (param_1[0x3a] != 0) {
        FUN_142856d28(param_1[0x3a],tVar6,uVar24,tVar7);
      }
      if (uVar24 == 0x51) {
        (**(code **)(*(longlong *)*local_1a0 + 0x28))();
      }
      break;
    default:
      if (uVar24 == 0x86) {
LAB_14095a9fc:
        if (tVar5 != (tagPOINT)0x0) {
          (**(code **)(*(longlong *)tVar5 + 0xe0))(tVar5);
        }
      }
      else if (uVar24 == 0xa0) goto switchD_14095a4d3_caseD_200;
    }
    goto switchD_14095a4d3_caseD_20e;
  }
  if (0x231 < (int)uVar24) {
    local_1a8._0_2_ = (ushort)tVar7.x;
    if ((int)uVar24 < 0x281) {
      if (uVar24 == 0x232) {
        if (tVar5 != (tagPOINT)0x0) {
          local_1a0 = (longlong *)*local_1a0;
          if (iVar16 != 0) {
            LOCK();
            *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
            UNLOCK();
          }
          local_98 = tVar5;
          tStack_90 = tVar11;
          (**(code **)(*local_1a0 + 0x168))(local_1a0,&local_98);
          goto LAB_14095b9e1;
        }
      }
      else if ((uVar24 == 0x240) && (((ulonglong)tVar7 & 0xffff) != 0)) {
        _Size = ((ulonglong)tVar7 & 0xffff) * 0x30;
        pInputs = (PTOUCHINPUT)FUN_14001cc68(_Size + (_Size == 0));
        memset(pInputs,0,_Size);
        BVar18 = GetTouchInputInfo((HTOUCHINPUT)hTouchInput,uVar29 & 0xffff,pInputs,0x30);
        pvVar10 = DAT_14c967238;
        if (BVar18 != 0) {
          local_168 = (void *)0x0;
          lVar25 = (longlong)DAT_14c967240;
          local_160 = DAT_14c967240;
          if (lVar25 == 0) {
            local_15c = 0;
          }
          else {
            FUN_1446dd670(&local_168,DAT_14c967240,0);
            memcpy(local_168,pvVar10,lVar25 * 2);
          }
          if (DAT_14c9670a0 == (longlong *)0x0) {
            plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
            FUN_14593912e(plVar21,1,1);
            DAT_14c9670a0 = plVar21;
          }
          (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0);
          uVar26 = 0;
          FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
          do {
            DVar4 = pInputs[uVar26].dwID;
            uVar24 = pInputs[uVar26].dwFlags;
            tStack_100 = (tagPOINT)(double)((float)pInputs[uVar26].y / 100.0);
            local_108 = (tagPOINT)(double)((float)pInputs[uVar26].x / 100.0);
            if ((uVar24 & 2) == 0) {
              if ((uVar24 & 1) == 0) {
                if (((uVar24 & 4) != 0) && (0 < (longlong)(int)param_1[0x45])) {
                  pcVar20 = (char *)(param_1[0x44] + 0x1c);
                  lVar25 = 0;
                  do {
                    if ((*pcVar20 == '\x01') && (*(DWORD *)(pcVar20 + -4) == DVar4)) {
                      if (*pcVar20 == '\x01') {
                        *pcVar20 = '\0';
                      }
                      (**(code **)(*(longlong *)*local_1a0 + 0xf8))
                                ((longlong *)*local_1a0,&local_108,lVar25,0);
                      break;
                    }
                    lVar25 = lVar25 + 1;
                    pcVar20 = pcVar20 + 0x20;
                  } while ((int)param_1[0x45] != lVar25);
                }
              }
              else if (0 < (longlong)(int)param_1[0x45]) {
                lVar25 = param_1[0x44];
                iVar28 = 0;
                lVar30 = 0;
                do {
                  if ((*(char *)(lVar25 + 0x1c + lVar30) == '\x01') &&
                     (*(DWORD *)(lVar25 + 0x18 + lVar30) == DVar4)) {
                    if ((DAT_14c967210 == '\x01') && (*(char *)(lVar25 + lVar30) == '\0')) {
                      dVar3 = *(double *)(lVar25 + 8 + lVar30);
                      if ((dVar3 == (double)local_108) && (!NAN(dVar3) && !NAN((double)local_108)))
                      {
                        dVar3 = *(double *)(lVar25 + 0x10 + lVar30);
                        if ((dVar3 == (double)tStack_100) &&
                           (!NAN(dVar3) && !NAN((double)tStack_100))) goto LAB_14095b925;
                      }
                      *(undefined1 *)(lVar25 + lVar30) = 1;
                      (**(code **)(*(longlong *)param_1[3] + 0x118))
                                ((longlong *)param_1[3],&local_108,0x3f800000,iVar28);
                      lVar25 = param_1[0x44];
                    }
LAB_14095b925:
                    pLVar2 = (LONG *)(lVar25 + 8 + lVar30);
                    *pLVar2 = local_108.x;
                    pLVar2[1] = local_108.y;
                    pLVar2[2] = tStack_100.x;
                    pLVar2[3] = tStack_100.y;
                    (**(code **)(*(longlong *)*local_1a0 + 0xe8))
                              ((longlong *)*local_1a0,&local_108,0x3f800000,iVar28);
                    break;
                  }
                  lVar30 = lVar30 + 0x20;
                  iVar28 = iVar28 + 1;
                } while ((longlong)(int)param_1[0x45] * 0x20 != lVar30);
              }
            }
            else {
              if (0 < (longlong)(int)param_1[0x45]) {
                lVar25 = 0;
                do {
                  if ((*(char *)(param_1[0x44] + 0x1c + lVar25) == '\x01') &&
                     (*(DWORD *)(param_1[0x44] + 0x18 + lVar25) == DVar4)) goto LAB_14095b986;
                  lVar25 = lVar25 + 0x20;
                } while ((longlong)(int)param_1[0x45] * 0x20 != lVar25);
              }
              iVar28 = FUN_146919f90(param_1);
              lVar30 = (longlong)iVar28 * 0x20;
              lVar25 = param_1[0x44];
              *(DWORD *)(lVar25 + 0x18 + lVar30) = DVar4;
              *(undefined1 *)(lVar25 + 0x1c + lVar30) = 1;
              *(undefined1 *)(param_1[0x44] + lVar30) = 0;
              pLVar2 = (LONG *)(param_1[0x44] + 8 + lVar30);
              *pLVar2 = local_108.x;
              pLVar2[1] = local_108.y;
              pLVar2[2] = tStack_100.x;
              pLVar2[3] = tStack_100.y;
              plVar21 = (longlong *)param_1[3];
              if (iVar16 != 0) {
                LOCK();
                *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
                UNLOCK();
              }
              local_178 = tVar5;
              local_170 = tVar11;
              (**(code **)(*plVar21 + 0xd8))(plVar21,&local_178,&local_108,0x3f800000);
              tVar6 = local_170;
              if (local_170 != (tagPOINT)0x0) {
                LOCK();
                plVar21 = (longlong *)((longlong)local_170 + 8);
                *(int *)plVar21 = *(int *)plVar21 + -1;
                UNLOCK();
                if (*(int *)plVar21 == 0) {
                  (*(code *)**(undefined8 **)local_170)(local_170);
                  LOCK();
                  piVar1 = (int *)((longlong)tVar6 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*(longlong *)tVar6 + 0x10))(tVar6);
                  }
                }
              }
            }
LAB_14095b986:
            uVar26 = uVar26 + 1;
          } while (uVar26 != ((ulonglong)tVar7 & 0xffff));
          CloseTouchInputHandle((HTOUCHINPUT)hTouchInput);
          FUN_14011623c(&local_98);
        }
        if (pInputs != (PTOUCHINPUT)0x0) {
          FUN_1400020a8(pInputs);
        }
      }
    }
    else {
      if ((uVar24 - 0x281 < 8) && ((0xa3U >> (uVar24 - 0x281 & 0x1f) & 1) != 0))
      goto switchD_14095a5b8_caseD_10d;
      if (uVar24 == 0x2e0) {
        if (tVar5 != (tagPOINT)0x0) {
          plVar21 = (longlong *)*local_1a0;
          if (iVar16 != 0) {
            LOCK();
            *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
            UNLOCK();
          }
          local_98 = tVar5;
          tStack_90 = tVar11;
          (**(code **)(*plVar21 + 0x178))(plVar21,&local_98);
          tVar7 = tStack_90;
          if (tStack_90 != (tagPOINT)0x0) {
            LOCK();
            plVar21 = (longlong *)((longlong)tStack_90 + 8);
            *(int *)plVar21 = *(int *)plVar21 + -1;
            UNLOCK();
            if (*(int *)plVar21 == 0) {
              (*(code *)**(undefined8 **)tStack_90)(tStack_90);
              LOCK();
              piVar1 = (int *)((longlong)tVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*(longlong *)tVar7 + 0x10))(tVar7);
              }
            }
          }
          if (iVar16 != 0) {
            LOCK();
            plVar21 = (longlong *)((longlong)tVar11 + 8);
            *(int *)plVar21 = *(int *)plVar21 + -1;
            UNLOCK();
            if (*(int *)plVar21 == 0) {
              (*(code *)**(undefined8 **)tVar11)(tVar11);
              LOCK();
              piVar1 = (int *)((longlong)tVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*(longlong *)tVar11 + 0x10))(tVar11);
              }
            }
          }
          cVar14 = (**(code **)(*(longlong *)tVar5 + 0x108))(tVar5);
          if (cVar14 == '\0') {
            (**(code **)(*(longlong *)tVar5 + 0x100))
                      (tVar5,CONCAT44(uVar32,(float)(ushort)local_1a8 / 96.0));
            iVar28 = ((HTOUCHINPUT)((longlong)hTouchInput + 4))->unused;
            SetWindowPos((HWND)tVar6,(HWND)0x0,*(int *)hTouchInput,iVar28,
                         ((HTOUCHINPUT)((longlong)hTouchInput + 8))->unused - *(int *)hTouchInput,
                         ((HTOUCHINPUT)((longlong)hTouchInput + 0xc))->unused - iVar28,0x14);
            local_1a0 = (longlong *)*local_1a0;
            if (iVar16 != 0) {
              LOCK();
              *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
              UNLOCK();
              LOCK();
              *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
              UNLOCK();
            }
            local_98 = tVar5;
            tStack_90 = tVar11;
            (**(code **)(*local_1a0 + 0x170))(local_1a0,&local_98);
            goto LAB_14095b9e1;
          }
        }
      }
      else if (uVar24 == 0x31e) {
        (**(code **)(*param_1 + 0xd0))(param_1);
      }
    }
    goto switchD_14095a4d3_caseD_20e;
  }
  switch(uVar24) {
  case 0x200:
switchD_14095a4d3_caseD_200:
    if (*(char *)((longlong)param_1 + 0xb9) == '\0') {
      local_138 = (void *)0x0;
      lVar25 = (longlong)DAT_14c967230;
      local_130 = DAT_14c967230;
      if (lVar25 == 0) {
        local_12c = 0;
      }
      else {
        FUN_1446dd670(&local_138,DAT_14c967230,0);
        memcpy(local_138,pvVar10,lVar25 * 2);
      }
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar21,1,1);
        DAT_14c9670a0 = plVar21;
      }
      (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_108);
      FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
      (**(code **)(*(longlong *)*local_1a0 + 0x70))();
      goto LAB_14095b13b;
    }
    break;
  case 0x201:
  case 0x202:
  case 0x203:
  case 0x204:
  case 0x205:
  case 0x206:
  case 0x207:
  case 0x208:
  case 0x209:
  case 0x20b:
  case 0x20c:
  case 0x20d:
    local_178.y = iVar28;
    local_178.x = (int)sVar22;
    ClientToScreen((HWND)tVar6,&local_178);
    pvVar10 = DAT_14c967228;
    iVar28 = 5;
    bVar31 = false;
    bVar9 = false;
    bVar13 = false;
    switch(uVar24) {
    case 0x201:
      bVar31 = false;
      bVar9 = false;
      break;
    case 0x202:
      bVar9 = false;
      bVar31 = true;
      break;
    case 0x203:
      bVar31 = false;
      bVar9 = true;
      break;
    case 0x204:
      iVar28 = 2;
      goto LAB_14095ac83;
    case 0x205:
      iVar28 = 2;
      goto LAB_14095ac70;
    case 0x206:
      iVar28 = 2;
      goto LAB_14095ac8f;
    case 0x207:
      iVar28 = 1;
      goto LAB_14095ac83;
    case 0x208:
      iVar28 = 1;
      goto LAB_14095ac70;
    case 0x209:
      iVar28 = 1;
      goto LAB_14095ac8f;
    case 0x20a:
      goto switchD_14095a523_caseD_20a;
    case 0x20b:
      iVar28 = 4 - (uint)((local_1a8 >> 0x10 & 1) != 0);
LAB_14095ac83:
      bVar13 = false;
switchD_14095a523_default:
      bVar31 = bVar13;
      bVar9 = false;
      goto switchD_14095a523_caseD_20a;
    case 0x20c:
      iVar28 = 4 - (uint)((local_1a8 >> 0x10 & 1) != 0);
LAB_14095ac70:
      bVar13 = true;
      goto switchD_14095a523_default;
    case 0x20d:
      iVar28 = 4 - (uint)((local_1a8 >> 0x10 & 1) != 0);
LAB_14095ac8f:
      bVar9 = true;
      bVar31 = false;
      goto switchD_14095a523_caseD_20a;
    default:
      goto switchD_14095a523_default;
    }
    iVar28 = 0;
switchD_14095a523_caseD_20a:
    dVar3 = (double)local_178.y;
    dVar8 = (double)local_178.x;
    local_d8 = (void *)0x0;
    lVar25 = (longlong)DAT_14c967230;
    local_d0 = DAT_14c967230;
    if (lVar25 == 0) {
      local_cc = 0;
    }
    else {
      FUN_1446dd670(&local_d8,DAT_14c967230,0);
      memcpy(local_d8,pvVar10,lVar25 * 2);
    }
    if (DAT_14c9670a0 == (longlong *)0x0) {
      plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
      FUN_14593912e(plVar21,1,1);
      DAT_14c9670a0 = plVar21;
    }
    (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_108);
    FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
    local_1a0 = (longlong *)*local_1a0;
    if (bVar31) {
      local_e8 = dVar8;
      local_e0 = dVar3;
      (**(code **)(*local_1a0 + 0x40))(local_1a0,iVar28);
    }
    else {
      local_108 = tVar5;
      tStack_100 = tVar11;
      if (bVar9) {
        if (iVar16 != 0) {
          LOCK();
          *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
          UNLOCK();
        }
        local_f8 = dVar8;
        local_f0 = dVar3;
        (**(code **)(*local_1a0 + 0x50))(local_1a0,&local_108,iVar28,&local_f8);
      }
      else {
        if (iVar16 != 0) {
          LOCK();
          *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
          UNLOCK();
        }
        local_118 = dVar8;
        local_110 = dVar3;
        (**(code **)(*local_1a0 + 0x30))(local_1a0,&local_108,iVar28,&local_118);
      }
      tVar5 = tStack_100;
      if (tStack_100 != (tagPOINT)0x0) {
        LOCK();
        plVar21 = (longlong *)((longlong)tStack_100 + 8);
        *(int *)plVar21 = *(int *)plVar21 + -1;
        UNLOCK();
        if (*(int *)plVar21 == 0) {
          (*(code *)**(undefined8 **)tStack_100)(tStack_100);
          LOCK();
          piVar1 = (int *)((longlong)tVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)tVar5 + 0x10))(tVar5);
          }
        }
      }
    }
LAB_14095b13b:
    FUN_14011623c(&local_98);
    break;
  case 0x20a:
    local_148 = (void *)0x0;
    lVar25 = (longlong)DAT_14c967230;
    local_140 = DAT_14c967230;
    if (lVar25 == 0) {
      local_13c = 0;
    }
    else {
      FUN_1446dd670(&local_148,DAT_14c967230,0);
      memcpy(local_148,pvVar10,lVar25 * 2);
    }
    if (DAT_14c9670a0 == (longlong *)0x0) {
      plVar21 = (longlong *)FUN_14001cc68(0x78,0x10);
      FUN_14593912e(plVar21,1,1);
      DAT_14c9670a0 = plVar21;
    }
    (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_108);
    FUN_1415e91ea(&local_98,0,DAT_14c967220,(ulonglong)local_108 & 0xffffffff);
    local_1a8._0_2_ = tVar7.x._2_2_;
    local_158 = (double)(int)sVar22;
    local_150 = (double)iVar28;
    (**(code **)(*(longlong *)*local_1a0 + 0x60))
              ((longlong *)*local_1a0,
               CONCAT44(uVar32,(float)(int)(short)(ushort)local_1a8 * 0.008333334));
    goto LAB_14095b13b;
  case 0x20e:
  case 0x20f:
  case 0x210:
  case 0x211:
  case 0x212:
  case 0x213:
    break;
  case 0x214:
    if (tVar5 != (tagPOINT)0x0) {
      local_1a0 = (longlong *)*local_1a0;
      if (iVar16 != 0) {
        LOCK();
        *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
        UNLOCK();
      }
      local_98 = tVar5;
      tStack_90 = tVar11;
      (**(code **)(*local_1a0 + 0x158))(local_1a0,&local_98);
LAB_14095b9e1:
      tVar5 = tStack_90;
      if (tStack_90 != (tagPOINT)0x0) {
        LOCK();
        plVar21 = (longlong *)((longlong)tStack_90 + 8);
        *(int *)plVar21 = *(int *)plVar21 + -1;
        UNLOCK();
        if (*(int *)plVar21 == 0) {
          (*(code *)**(undefined8 **)tStack_90)(tStack_90);
          LOCK();
          piVar1 = (int *)((longlong)tVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)tVar5 + 0x10))(tVar5);
          }
        }
      }
      if (iVar16 != 0) {
        LOCK();
        plVar21 = (longlong *)((longlong)tVar11 + 8);
        *(int *)plVar21 = *(int *)plVar21 + -1;
        UNLOCK();
        if (*(int *)plVar21 == 0) {
          (*(code *)**(undefined8 **)tVar11)(tVar11);
          LOCK();
          piVar1 = (int *)((longlong)tVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)tVar11 + 0x10))(tVar11);
          }
        }
      }
    }
    break;
  default:
    if ((uVar24 == 0x231) && (tVar5 != (tagPOINT)0x0)) {
      local_1a0 = (longlong *)*local_1a0;
      if (iVar16 != 0) {
        LOCK();
        *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)tVar11 + 8) = *(int *)((longlong)tVar11 + 8) + 1;
        UNLOCK();
      }
      local_98 = tVar5;
      tStack_90 = tVar11;
      (**(code **)(*local_1a0 + 0x160))(local_1a0,&local_98);
      goto LAB_14095b9e1;
    }
  }
switchD_14095a4d3_caseD_20e:
  if (iVar16 != 0) {
LAB_14095ba28:
    LOCK();
    plVar21 = (longlong *)((longlong)tVar11 + 8);
    *(int *)plVar21 = *(int *)plVar21 + -1;
    UNLOCK();
    if (*(int *)plVar21 == 0) {
      (*(code *)**(undefined8 **)tVar11)(tVar11);
      LOCK();
      piVar1 = (int *)((longlong)tVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)tVar11 + 0x10))(tVar11);
      }
    }
  }
LAB_14095ba45:
  if ((local_70 ^ (ulonglong)auStackY_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095bc08 FUN_14095bc08 body=549 status=ok
// SIG undefined FUN_14095bc08(void)

ulonglong FUN_14095bc08(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 extraout_AL;
  longlong *plVar2;
  longlong *plVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_14095be44(param_3);
  plVar3 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x7e0))(plVar2);
    plVar3 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cb6fd70 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9cc9;
        local_50 = FUN_1465433f8;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb6fd70);
      plVar3 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        if (DAT_14cb6fd70 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_1487a9cc9;
          local_50 = FUN_1465433f8;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
        }
        plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb6fd70);
        if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
          if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
          (**(code **)(*plVar3 + 0x50))(plVar3);
          uVar1 = extraout_AL;
          uVar4 = extraout_var;
          goto LAB_14095be14;
        }
      }
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  uVar4 = (undefined7)((ulonglong)plVar3 >> 8);
LAB_14095be14:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar4,uVar1) ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095be44 FUN_14095be44 body=271 status=ok
// SIG undefined FUN_14095be44(void)

longlong FUN_14095be44(void)

{
  longlong lVar1;
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
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cb939a8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140940982;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146522c26;
      local_38 = &LAB_148a0db91;
      local_40 = &LAB_146572ba7;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) goto LAB_14095be8f;
  }
  lVar1 = 0;
LAB_14095be8f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095bf54 FUN_14095bf54 body=109 status=ok
// SIG undefined FUN_14095bf54(void)

void FUN_14095bf54(undefined8 param_1,undefined8 *param_2)

{
  FUN_14095bfc2(param_2);
  *param_2 = &PTR_FUN_14b410820;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0xf00000d0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0;
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfc;
  return;
}



// FUNCTION 14095bfc2 FUN_14095bfc2 body=106 status=ok
// SIG undefined FUN_14095bfc2(void)

void FUN_14095bfc2(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b410840;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xf00000d0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
  *(byte *)((longlong)param_1 + 0x1a) = *(byte *)((longlong)param_1 + 0x1a) & 0xfe;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfe;
  return;
}



// FUNCTION 14095c03a FUN_14095c03a body=36 status=ok
// SIG undefined FUN_14095c03a(void)

undefined8 FUN_14095c03a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14095c05e FUN_14095c05e body=367 status=ok
// SIG undefined FUN_14095c05e(void)

void FUN_14095c05e(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  int iStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 8;
  iStack_44 = 0;
  if (param_2 == 0) {
    local_48 = 0;
    iVar2 = 0;
  }
  else {
    local_48 = *(uint *)(param_2 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_48 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
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
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_28 = 7;
  iStack_44 = iVar2;
  local_50 = FUN_14095c602();
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  puVar5 = &local_48;
  FUN_14095c1ce(param_1,&local_50,puVar5,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_30) {
      puVar5 = (uint *)CONCAT44(iStack_44,local_48);
    }
    (*pcVar1)(puVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(iStack_44,local_48));
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095c1ce FUN_14095c1ce body=325 status=ok
// SIG undefined FUN_14095c1ce(void)

undefined4
FUN_14095c1ce(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  undefined8 *_Src;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar5 = FUN_140528a88();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      local_60 = *param_2;
      goto LAB_14095c225;
    }
  }
  local_60 = 0;
LAB_14095c225:
  bVar1 = *(byte *)(param_3 + 4);
  local_40 = *(ushort *)(param_3 + 3);
  pppuVar6 = local_58;
  _Src = param_3;
  if (0x18 < local_40) {
    pppuVar6 = (undefined8 ***)FUN_14001cc68(local_40,0);
    _Src = (undefined8 *)*param_3;
    local_58[0] = pppuVar6;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(pppuVar6,_Src,
           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
  }
  else {
    (*pcVar3)();
  }
  local_38 = *(byte *)(param_3 + 4);
  uVar4 = FUN_14095c314(param_1,&local_60,param_4);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar6 = local_58;
    if (0x18 < local_40) {
      pppuVar6 = (undefined8 ***)local_58[0];
    }
    (*pcVar3)(pppuVar6);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095c314 FUN_14095c314 body=749 status=ok
// SIG undefined FUN_14095c314(void)

undefined8 FUN_14095c314(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *_Dst;
  undefined8 *_Dst_00;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = (longlong *)*param_2;
  if ((plVar10 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (plVar10 != (longlong *)0x0) goto LAB_14095c35a;
LAB_14095c41a:
    uVar9 = 0;
  }
  else {
    FUN_1456cec3c(plVar10);
LAB_14095c35a:
    lVar11 = plVar10[0x22];
    if (lVar11 == 0) {
      (**(code **)(*plVar10 + 1000))(plVar10);
      lVar11 = plVar10[0x22];
      if (lVar11 == 0) goto LAB_14095c41a;
    }
    local_50 = *param_2;
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar6 = FUN_140528a12(param_1,&local_50);
    if (param_3 == '\x01' && lVar6 != 0) {
      plVar10 = param_2 + 1;
      _Dst_00 = (undefined8 *)(lVar6 + 8);
      bVar2 = *(byte *)(lVar6 + 0x28);
      if (bVar2 == *(byte *)(param_2 + 5)) {
        if (0x18 < *(ushort *)(param_2 + 4)) {
          plVar10 = (longlong *)param_2[1];
        }
        if (0x18 < *(ushort *)(lVar6 + 0x20)) {
          _Dst_00 = (undefined8 *)*_Dst_00;
        }
        uVar7 = (ulonglong)((uint)bVar2 * 0x120);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
        if (pcVar5 == (code *)0x0) {
          memcpy(_Dst_00,plVar10,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (*pcVar5)(_Dst_00,plVar10);
        }
      }
      else {
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
        if (pcVar5 != (code *)0x0) {
          puVar8 = _Dst_00;
          if (0x18 < *(ushort *)(lVar6 + 0x20)) {
            puVar8 = (undefined8 *)*_Dst_00;
          }
          (*pcVar5)(puVar8);
        }
        if (0x18 < *(ushort *)(lVar6 + 0x20)) {
          FUN_1400020a8(*_Dst_00);
        }
        bVar2 = *(byte *)(param_2 + 5);
        uVar3 = *(ushort *)(param_2 + 4);
        *(ushort *)(lVar6 + 0x20) = uVar3;
        puVar8 = _Dst_00;
        if (0x18 < uVar3) {
          puVar8 = (undefined8 *)FUN_14001cc68(uVar3,0);
          *_Dst_00 = puVar8;
          plVar10 = (longlong *)*plVar10;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
        if (pcVar5 == (code *)0x0) {
          memcpy(puVar8,plVar10,
                 (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
        }
        else {
          (*pcVar5)(puVar8,plVar10);
        }
        *(char *)(lVar6 + 0x28) = (char)param_2[5];
      }
    }
    else {
      if (lVar6 != 0) goto LAB_14095c41a;
      iVar4 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
        FUN_1418af9f0(param_1,iVar4);
      }
      lVar6 = *param_1;
      plVar1 = (longlong *)(lVar6 + (longlong)iVar4 * 0x30);
      *plVar1 = *param_2;
      plVar10 = param_2 + 1;
      bVar2 = *(byte *)(param_2 + 5);
      uVar3 = *(ushort *)(param_2 + 4);
      *(ushort *)(plVar1 + 4) = uVar3;
      _Dst = plVar1 + 1;
      if (0x18 < uVar3) {
        _Dst = (longlong *)FUN_14001cc68(uVar3,0);
        plVar1[1] = (longlong)_Dst;
        plVar10 = (longlong *)*plVar10;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
      if (pcVar5 == (code *)0x0) {
        memcpy(_Dst,plVar10,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
      }
      else {
        (*pcVar5)(_Dst,plVar10);
      }
      *(char *)(lVar6 + (longlong)iVar4 * 0x30 + 0x28) = (char)param_2[5];
      if (*(char *)(lVar11 + 0x40) == '\0') {
        if ((ulonglong *)(lVar11 + 0x38) != (ulonglong *)&DAT_14c763a58) {
          *(longlong *)(lVar11 + 0x38) = DAT_14c763a58;
          *(undefined1 *)(lVar11 + 0x40) = 1;
        }
        DAT_14c763a58 = DAT_14c763a58 * 2;
      }
      param_1[2] = param_1[2] | *(ulonglong *)(lVar11 + 0x38);
    }
    uVar9 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095c602 FUN_14095c602 body=228 status=ok
// SIG undefined FUN_14095c602(void)

longlong FUN_14095c602(void)

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
  if (DAT_14cb67670 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14599715a;
    local_38 = &LAB_14873bdb3;
    local_40 = &LAB_145b0431f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_DmgSource",&DAT_14cb67670,
                  FUN_146516a5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67670;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095c6e8 FUN_14095c6e8 body=104 status=ok
// SIG undefined FUN_14095c6e8(void)

void FUN_14095c6e8(longlong param_1)

{
  FUN_14095cb81(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_14095c787(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14095c750(param_1 + 8);
  return;
}



// FUNCTION 14095c750 FUN_14095c750 body=55 status=ok
// SIG undefined FUN_14095c750(void)

void FUN_14095c750(longlong *param_1)

{
  FUN_14095c7ca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14095c787 FUN_14095c787 body=67 status=ok
// SIG undefined FUN_14095c787(void)

void FUN_14095c787(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_14095c9fc(puVar1 + -0x12);
      puVar1 = puVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14095c7ca FUN_14095c7ca body=463 status=ok
// SIG undefined FUN_14095c7ca(void)

void FUN_14095c7ca(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
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
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_4c = 1;
  if (iVar2 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
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
        if (uVar8 == uVar9) goto LAB_14095c804;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_50 = (int)uVar9;
      local_38 = iVar7;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar5 & uVar5;
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
LAB_14095c804:
  local_40 = 0xffffffff;
  local_58 = param_1;
  local_48 = puVar1;
  if (local_3c < iVar2) {
    do {
      FUN_14095cab0((longlong)local_3c * 0x80 + *local_58);
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
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
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095c99c FUN_14095c99c body=96 status=ok
// SIG undefined FUN_14095c99c(void)

void FUN_14095c99c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,8);
  }
  return;
}



// FUNCTION 14095c9fc FUN_14095c9fc body=55 status=ok
// SIG undefined FUN_14095c9fc(void)

void FUN_14095c9fc(longlong *param_1)

{
  FUN_14095ca34(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14095ca34 FUN_14095ca34 body=123 status=ok
// SIG undefined FUN_14095ca34(void)

void FUN_14095ca34(longlong param_1,int param_2)

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



// FUNCTION 14095cab0 FUN_14095cab0 body=209 status=ok
// SIG undefined FUN_14095cab0(void)

void FUN_14095cab0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14095cb81(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x28) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x28) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14095cb81 FUN_14095cb81 body=75 status=ok
// SIG undefined FUN_14095cb81(void)

void FUN_14095cb81(longlong param_1,int param_2)

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



// FUNCTION 14095cbcc FUN_14095cbcc body=87 status=ok
// SIG undefined FUN_14095cbcc(void)

void FUN_14095cbcc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(longlong *)(param_1 + 0x580) != 0) &&
      (plVar1 = *(longlong **)(param_1 + 0x588), plVar1 != (longlong *)0x0)) &&
     (0.0001 < *(float *)(param_2 + 0x550) - *(float *)(param_2 + 0x554))) {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  }
  FUN_14095cc24(param_1,param_2);
  return;
}



// FUNCTION 14095cc24 FUN_14095cc24 body=4159 status=ok
// SIG undefined FUN_14095cc24(void)

void FUN_14095cc24(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_2e8 [32];
  undefined4 *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  code *local_2a0;
  undefined1 *local_298;
  code **local_290;
  code *local_288;
  code *local_280;
  bool local_269;
  undefined4 local_268;
  undefined4 local_264;
  longlong local_260;
  code **local_258;
  longlong local_250;
  longlong local_248;
  longlong *local_240;
  undefined4 local_238;
  uint uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  code *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  code **local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong lStack_160;
  undefined8 local_158;
  longlong lStack_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong lStack_138;
  longlong local_130;
  undefined8 local_128;
  longlong lStack_120;
  longlong local_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  ulonglong uStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined *local_d0;
  ulonglong local_c8;
  undefined **ppuStack_c0;
  undefined *local_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  plVar13 = *(longlong **)(param_1 + 0x250);
  if (plVar13 == (longlong *)0x0) {
    local_269 = true;
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_14072d970();
    plVar9 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar8);
    if (plVar9 == (longlong *)0x0) {
LAB_14095d077:
      plVar10 = (longlong *)0x0;
    }
    else {
      uVar8 = FUN_14072d970();
      plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
      if (plVar9 == plVar10) goto LAB_14095d077;
    }
    iVar7 = FUN_14487fd02(plVar13);
    local_269 = iVar7 == 3;
  }
  bVar1 = *(byte *)(param_1 + 0x470);
  fVar18 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
  local_248 = param_2[10];
  local_240 = plVar10;
  if ((char)bVar1 < '\0') {
    local_264 = (undefined4)CONCAT71((int7)((ulonglong)local_248 >> 8),(char)param_2[0xa9] != '\0');
  }
  else {
    lVar11 = param_2[9];
    if (lVar11 != 0 && local_269 == false) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar11);
      }
      *(longlong *)(param_1 + 0x4a0) = lVar11;
      if (DAT_14caf9cd0 == 0) {
        local_290 = &local_1d8;
        local_1d8 = FUN_141030f22;
        local_280 = FUN_14081d0ea;
        local_288 = (code *)&LAB_1463c0cc2;
        local_298 = &LAB_147c9db5b;
        local_2a0 = (code *)&LAB_1463f9c44;
        local_2a8 = L"Game";
        local_2b0 = 0x2000000000;
        local_2b8 = 0x10000004;
        local_2c0 = 8;
        local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,0x958);
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar11);
        }
        *(longlong *)(param_1 + 0x300) = lVar11;
      }
      if (plVar13 != (longlong *)0x0) {
        if (DAT_14caf64b8 == 0) {
          local_290 = &local_1d8;
          local_1d8 = FUN_141030f22;
          local_280 = FUN_14081d0ea;
          local_288 = FUN_142b4754c;
          local_298 = &LAB_147c45ce0;
          local_2a0 = (code *)&LAB_1463f1ff4;
          local_2a8 = L"Game";
          local_2b0 = 0x4000000000;
          local_2b8 = 0x10000004;
          local_2c0 = 8;
          local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,0x428);
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
            DAT_14caf64b8 + 0x30)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar11);
          }
          plVar13[0x77] = lVar11;
        }
      }
    }
    local_1d8 = (code *)((ulonglong)local_1d8 & 0xffffff0000000000);
    uStack_1d0 = 0;
    local_1c8 = 0x3002;
    local_1c0 = 0;
    local_188 = 0;
    local_180 = 0x200000000;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    lStack_160 = 0;
    local_158 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    lStack_150 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_148 = DAT_14c8464f0;
    local_130 = DAT_14c8464f0;
    local_118 = DAT_14c8464f0;
    local_110 = 0;
    uStack_108 = CONCAT44(uStack_108._4_4_,0x3006);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = (undefined4)DAT_14c8464e0;
    uStack_dc = DAT_14c8464e0._4_4_;
    uStack_d8 = (undefined **)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_d0 = (undefined *)DAT_14c8464f0;
    local_c8 = local_c8 & 0xffffff0000000000;
    uStack_140 = local_158;
    lStack_138 = lStack_150;
    local_128 = local_158;
    lStack_120 = lStack_150;
    FUN_1405c5fa2();
    local_b8 = &DAT_14cb769e8;
    local_b0 = 0;
    uStack_a8 = 0;
    ppuStack_c0 = &PTR_FUN_14b0394b0;
    local_a0 = 0x3f800000;
    FUN_14095f42a(&local_1d8,fVar18,param_2);
    FUN_14095dc64(param_1 + 0xf8,param_2);
    FUN_14095e105(param_1 + 0x110,plVar13,&local_1d8);
    if ((((*(longlong *)(param_1 + 600) != 0) &&
         (*(longlong **)(param_1 + 0x260) != (longlong *)0x0)) &&
        (lVar11 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0xa8))(), lVar11 != 0)) &&
       (0 < *(int *)(lVar11 + 8))) {
      FUN_14095e105(lVar11,plVar13,&local_1d8);
    }
    ppuStack_c0 = (undefined **)&DAT_14a171d50;
    uVar4 = uStack_a8 >> 0x20;
    uStack_a8 = uStack_a8 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      FUN_140115c12(&local_b0,0);
    }
    local_b8 = (undefined *)0x0;
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    local_264 = 0;
  }
  if ((longlong)(int)param_2[0x7d] < 1) goto LAB_14095d1c6;
  if (((*(byte *)(param_1 + 0x7c) & 0x40) == 0) || (*(float *)((longlong)param_2 + 0x324) <= 0.0001)
     ) {
    lVar11 = param_2[0x7c];
    local_260 = lVar11 + (longlong)(int)param_2[0x7d] * 0x28;
    bVar15 = (bool)(bVar1 >> 7);
LAB_14095d09c:
    local_268 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 600) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x260);
    }
    lVar11 = (**(code **)(*plVar10 + 0x10))();
    if (lVar11 == 0) {
      fVar19 = 0.0;
    }
    else if (*(int *)(lVar11 + 0x40) < 1) {
      fVar19 = -1.0;
    }
    else {
      fVar19 = (float)FUN_14055830e();
    }
    if ((longlong)(int)param_2[0x7d] == 0) goto LAB_14095d1c6;
    lVar11 = param_2[0x7c];
    local_260 = lVar11 + (longlong)(int)param_2[0x7d] * 0x28;
    bVar15 = fVar19 <= 0.0001 || (char)bVar1 < '\0';
    if (0.0001 < fVar19) goto LAB_14095d09c;
    local_268 = (undefined4)CONCAT71((int7)((ulonglong)local_260 >> 8),2);
  }
  local_250 = param_1 + 0x2b0;
  do {
    if (((param_2[0x91] == 0) || (*(char *)(param_2[0x91] + 0x90) == '\0')) &&
       (*(int *)(param_1 + 0x280) != *(int *)(param_1 + 0x2ac))) {
      uVar2 = *(uint *)(lVar11 + 0x18);
      lVar17 = *(longlong *)(param_1 + 0x2b8);
      if (*(longlong *)(param_1 + 0x2b8) == 0) {
        lVar17 = local_250;
      }
      iVar7 = *(int *)(lVar17 + (ulonglong)
                                (*(int *)(param_1 + 0x2c0) - 1U &
                                (uVar2 << 0x10 | uVar2 & 0xffff) + ((uVar2 & 0xffff) >> 4) +
                                ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10)) * 4);
      if (iVar7 != -1) {
        do {
          lVar17 = *(longlong *)(param_1 + 0x278) + (longlong)iVar7 * 0x80;
          if (*(uint *)(*(longlong *)(param_1 + 0x278) + 0x18 + (longlong)iVar7 * 0x80) == uVar2) {
            if ((lVar17 != 0) && (lVar16 = FUN_1402179b4(), (*(byte *)(lVar16 + 0x19) & 0x10) != 0))
            {
              cVar6 = FUN_1403ae288();
              if (cVar6 == '\0') {
                puVar14 = (undefined4 *)(lVar17 + 0x24);
              }
              else {
                lVar16 = FUN_140280ec4();
                puVar14 = (undefined4 *)(lVar16 + 200);
              }
              uVar22 = *puVar14;
              if (*(char *)((longlong)param_2 + 0x53c) == '\0') {
                FUN_14095ee72();
              }
              if ((0 < *(int *)(lVar17 + 0x60)) && (fVar19 = (float)FUN_140960b90(), 0.0 < fVar19))
              {
                local_1f8 = CONCAT71(local_1f8._1_7_,(byte)local_268 | bVar15);
                lVar16 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x270));
                local_1f8 = CONCAT44((float)*(double *)(lVar16 + 0x6d0),(undefined4)local_1f8);
                uStack_1f0 = CONCAT44(uStack_1f0._4_4_,*(undefined4 *)(lVar11 + 0x20));
                local_1e8 = uVar22;
                uVar22 = FUN_14108d0d4(lVar17);
                uStack_1f0 = CONCAT44(uVar22,(int)uStack_1f0);
                local_1e4 = FUN_140960b90(lVar17);
                local_198 = (code **)0x0;
                local_190 = 0x400000000;
                FUN_14575a3de(&local_1d8,lVar17 + 0x58);
                local_258 = local_198;
                if (local_198 == (code **)0x0) {
                  local_258 = &local_1d8;
                }
                lVar17 = (longlong)(int)local_190;
                if (lVar17 != 0) {
                  lVar16 = 0;
                  do {
                    plVar10 = *(longlong **)((longlong)local_258 + lVar16);
                    if (plVar10 != (longlong *)0x0) {
                      (**(code **)(*plVar10 + 8))(plVar10,param_2,&local_1f8);
                    }
                    lVar16 = lVar16 + 0x10;
                  } while (lVar17 * 0x10 != lVar16);
                }
                FUN_14575a3aa();
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar17 + 0x78);
        } while (iVar7 != -1);
      }
    }
    lVar11 = lVar11 + 0x28;
  } while (lVar11 != local_260);
LAB_14095d1c6:
  plVar10 = local_240;
  if (((local_240 != (longlong *)0x0) &&
      (lVar11 = (**(code **)(*local_240 + 0x10))(), *(longlong *)(lVar11 + 0x20) != 0)) &&
     (*(longlong *)(lVar11 + 0x28) != 0)) {
    plVar9 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
    (**(code **)(*plVar9 + 0x10))(plVar9,param_2,0);
  }
  if ((-1 < (char)bVar1 | (byte)local_264) == 1) {
    if (*(longlong *)(param_1 + 600) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x260);
    }
    fVar19 = *(float *)((longlong)param_2 + 0x324);
    lVar11 = (**(code **)(*plVar9 + 0x10))();
    if (lVar11 == 0) {
      fVar20 = 0.0;
    }
    else if (*(int *)(lVar11 + 0x40) < 1) {
      fVar20 = -1.0;
    }
    else {
      fVar20 = (float)FUN_14055830e(*(undefined8 *)(lVar11 + 0x38));
    }
    if ((0.0001 < fVar19) && (fVar20 <= 0.0001)) {
      if (((plVar10 != (longlong *)0x0) &&
          (((*(byte *)(param_1 + 0x7c) & 0x40) != 0 &&
           (lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10), *(longlong *)(lVar11 + 0x20) != 0))))
         && (*(longlong *)(lVar11 + 0x28) != 0)) {
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 0x10))(plVar10,param_2,1);
      }
      if (local_269 == false) {
        FUN_140960bca(param_1,param_2);
      }
    }
    local_1f8 = 0;
    uStack_1f0 = 0;
    FUN_14095e510(param_2,&local_1f8);
    if (0 < (int)uStack_1f0) {
      local_1d8 = (code *)((ulonglong)local_1d8 & 0xffffff0000000000);
      uStack_1d0 = 0;
      local_1c8 = 0x3002;
      local_1c0 = 0;
      local_188 = 0;
      local_180 = 0x200000000;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      lStack_160 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_158 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      lStack_150 = DAT_14c8464f0;
      lStack_138 = DAT_14c8464f0;
      local_130 = 0;
      local_128 = CONCAT44(local_128._4_4_,0x3006);
      local_110 = 0;
      uStack_108 = 0;
      lStack_120 = 0;
      local_118 = 0;
      local_100 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_f8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_f0 = DAT_14c8464f0;
      uStack_e8 = uStack_e8 & 0xffff000000000000;
      local_e0 = 0;
      uStack_dc = uStack_dc & 0xffffff00;
      local_148 = lStack_160;
      uStack_140 = local_158;
      FUN_1405c5fa2();
      local_d0 = &DAT_14cb769e8;
      local_c8 = 0;
      ppuStack_c0 = (undefined **)0x0;
      uStack_d8 = &PTR_FUN_14b0394b0;
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x1000000);
      FUN_14095f044(&local_1d8,fVar18,*(byte *)(param_1 + 0x470) >> 7,param_2);
      lVar11 = local_1f8;
      lVar17 = (longlong)(int)uStack_1f0;
      if (lVar17 != 0) {
        lVar16 = 0;
        do {
          if ((*(longlong *)(lVar11 + lVar16) != 0) &&
             (plVar10 = *(longlong **)(lVar11 + 8 + lVar16), plVar10 != (longlong *)0x0)) {
            lVar12 = (**(code **)(*plVar10 + 0x10))();
            FUN_14095dc64(lVar12 + 8,param_2);
            if ((0.0 < fVar18) && (1 < (byte)((char)param_2[0xa9] - 1U))) {
              if (*(longlong *)(lVar11 + lVar16) == 0) {
                plVar10 = (longlong *)0x0;
              }
              else {
                plVar10 = *(longlong **)(lVar11 + 8 + lVar16);
              }
              lVar12 = (**(code **)(*plVar10 + 0x10))();
              FUN_14095ea89(lVar12 + 0x80,plVar13,&local_1d8);
            }
          }
          lVar16 = lVar16 + 0x10;
        } while (lVar17 * 0x10 != lVar16);
      }
      uStack_d8 = (undefined **)&DAT_14a171d50;
      uVar4 = (ulonglong)ppuStack_c0 >> 0x20;
      ppuStack_c0 = (undefined **)((ulonglong)ppuStack_c0 & 0xffffffff00000000);
      if ((int)uVar4 != 0) {
        FUN_140115c12(&local_c8,0);
      }
      local_d0 = (undefined *)0x0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (local_188 != 0) {
        FUN_1400020a8();
      }
    }
    local_1d8 = (code *)0x0;
    uStack_1d0 = 0;
    FUN_14095df6a(param_2,&local_1d8);
    pcVar5 = local_1d8;
    lVar11 = (longlong)(int)uStack_1d0;
    if (lVar11 != 0) {
      lVar17 = 0;
      do {
        lVar16 = *(longlong *)(pcVar5 + lVar17);
        if (lVar16 != 0) {
          if (DAT_14cb61cd0 == 0) {
            local_290 = &local_1e0;
            local_1e0 = FUN_141030f22;
            local_280 = FUN_14081d0ea;
            local_288 = (code *)&LAB_1463b31ae;
            local_298 = &LAB_1486dca4f;
            local_2a0 = (code *)&LAB_1464f50a6;
            local_2a8 = L"Game";
            local_2b0 = 0;
            local_2b8 = 0x10000004;
            local_2c0 = 8;
            local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,0xd70);
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
            FUN_14095dc64(lVar16 + 0xcf8,param_2);
          }
        }
        lVar17 = lVar17 + 8;
      } while (lVar11 * 8 != lVar17);
    }
    if (local_248 != 0) {
      lVar17 = local_248 + 0xd8;
      lVar11 = FUN_14095dd8e(lVar17);
      if (((lVar11 != 0) && (-1 < (char)bVar1)) && (*(char *)(param_1 + 0x90) == '\0')) {
        uVar8 = FUN_14095dd8e(lVar17);
        FUN_1409603a8(param_2,uVar8);
      }
    }
    if (plVar13 != (longlong *)0x0) {
      if (DAT_14cb22108 == 0) {
        local_290 = &local_1e0;
        local_1e0 = FUN_1449e2820;
        local_280 = FUN_14081d0ea;
        local_288 = FUN_1427b09ee;
        local_298 = &LAB_147f28909;
        local_2a0 = FUN_1464376d6;
        local_2a8 = L"Engine";
        local_2b0 = 0;
        local_2b8 = 0x10004001;
        local_2c0 = 8;
        local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
      }
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,DAT_14cb22108);
      if (plVar13 != (longlong *)0x0) {
        if (DAT_14cb22108 == 0) {
          local_290 = &local_1e0;
          local_1e0 = FUN_1449e2820;
          local_280 = FUN_14081d0ea;
          local_288 = FUN_1427b09ee;
          local_298 = &LAB_147f28909;
          local_2a0 = FUN_1464376d6;
          local_2a8 = L"Engine";
          local_2b0 = 0;
          local_2b8 = 0x10004001;
          local_2c0 = 8;
          local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
        }
        plVar10 = (longlong *)FUN_144718840(plVar13,DAT_14cb22108);
        if ((plVar13 != plVar10) &&
           (((char)local_264 == '\0' && 0.0 < fVar18) && plVar10 != (longlong *)0x0)) {
          lVar17 = param_2[5];
          lVar16 = param_2[0x3f];
          uVar2 = *(uint *)((longlong)param_2 + 0x1fc);
          lVar12 = param_2[0x40];
          uVar22 = *(undefined4 *)((longlong)param_2 + 0x204);
          lVar11 = param_2[0x41];
          uVar23 = (undefined4)lVar11;
          uVar24 = (undefined4)((ulonglong)lVar11 >> 0x20);
          uVar25 = (int)lVar16;
          uVar26 = uVar2;
          uVar27 = (int)lVar12;
          uVar28 = uVar22;
          if (lVar17 != 0) {
            lVar3 = *(longlong *)(lVar17 + 0x1c8);
            if (lVar3 == 0) {
              uVar23 = (undefined4)DAT_14c8464f0;
              uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              uVar25 = (undefined4)DAT_14c8464e0;
              uVar26 = DAT_14c8464e0._4_4_;
              uVar27 = (undefined4)DAT_14c8464e8;
              uVar28 = DAT_14c8464e8._4_4_;
            }
            else {
              uVar23 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
              uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
              uVar25 = *(undefined4 *)(lVar3 + 0x260);
              uVar26 = *(uint *)(lVar3 + 0x264);
              uVar27 = *(undefined4 *)(lVar3 + 0x268);
              uVar28 = *(undefined4 *)(lVar3 + 0x26c);
            }
          }
          uVar21 = (**(code **)(*param_2 + 0x148))(param_2);
          local_2c8 = &local_218;
          local_228 = CONCAT44(uVar24,uVar23);
          local_238 = uVar25;
          uStack_234 = uVar26;
          uStack_230 = uVar27;
          uStack_22c = uVar28;
          local_218 = (int)lVar16;
          uStack_214 = uVar2;
          uStack_210 = (int)lVar12;
          uStack_20c = uVar22;
          local_208 = lVar11;
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar17,uVar21);
        }
      }
    }
    if (local_1d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_1f8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14095fcf4(param_1,param_2);
  if ((local_90 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095dc64 FUN_14095dc64 body=298 status=ok
// SIG undefined FUN_14095dc64(void)

void FUN_14095dc64(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar4 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar4;
  }
  else {
    bVar7 = false;
    do {
      lVar9 = uVar5 * 0x10 + -8;
      uVar10 = uVar5;
      while (((*(int *)(*param_1 + lVar9) != 0 &&
              (plVar1 = *(longlong **)(*param_1 + -8 + lVar9), plVar1 != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2), cVar3 != '\0'))) {
        lVar9 = lVar9 + -0x10;
        bVar2 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar2) {
          iVar4 = *(int *)((longlong)param_1 + 0x14);
          *(int *)((longlong)param_1 + 0x14) = iVar4 + -1;
          if (!bVar7) {
            return;
          }
          goto LAB_14095dcfc;
        }
      }
      uVar5 = uVar10 - 1;
      bVar7 = true;
    } while (1 < uVar10);
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar4 + -1;
LAB_14095dcfc:
    if (iVar4 < 2) {
      iVar4 = (int)param_1[1];
      iVar6 = iVar4;
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10), plVar1 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar8);
            FUN_14005b248(param_1);
          }
          else {
            iVar8 = iVar8 + 1;
          }
          iVar6 = (int)param_1[1];
        } while (iVar8 < iVar6);
      }
      iVar8 = 2;
      if (2 < iVar6 * 2) {
        iVar8 = iVar6 * 2;
      }
      *(int *)(param_1 + 2) = iVar8;
      if ((iVar8 < iVar4) && (*(int *)((longlong)param_1 + 0xc) != iVar6)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14095dd8e FUN_14095dd8e body=246 status=ok
// SIG undefined FUN_14095dd8e(void)

longlong FUN_14095dd8e(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14095de84();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14095de84 FUN_14095de84 body=228 status=ok
// SIG undefined FUN_14095de84(void)

longlong FUN_14095de84(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb66698 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_14872866f;
    local_40 = FUN_141858ce1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectData",&DAT_14cb66698,&DAT_14872866e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66698;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095df6a FUN_14095df6a body=155 status=ok
// SIG undefined FUN_14095df6a(void)

void FUN_14095df6a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14095e928(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FUN_14095e006(param_2,param_1 + 0x418);
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FUN_14095e006(param_2,param_1 + 0x420);
  }
  if (*(longlong *)(param_1 + 0x430) == 0) {
    return;
  }
  FUN_14095e006(param_2,param_1 + 0x430);
  return;
}



// FUNCTION 14095e006 FUN_14095e006 body=105 status=ok
// SIG undefined FUN_14095e006(void)

void FUN_14095e006(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14095e928(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14095e070 FUN_14095e070 body=149 status=ok
// SIG undefined FUN_14095e070(void)

float FUN_14095e070(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = param_1[0x90];
  fVar4 = 0.0;
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x40) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x38);
    lVar1 = (longlong)*(int *)(lVar1 + 0x40) * 0x88;
    do {
      fVar3 = (float)FUN_1405583ce(lVar2);
      fVar4 = fVar4 + fVar3;
      lVar2 = lVar2 + 0x88;
      lVar1 = lVar1 + -0x88;
    } while (lVar1 != 0);
  }
  fVar3 = (float)(**(code **)(*param_1 + 0x140))(param_1,0);
  fVar4 = (float)((uint)(fVar3 / fVar4) & -(uint)(0.0 < fVar4));
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}



// FUNCTION 14095e105 FUN_14095e105 body=492 status=ok
// SIG undefined FUN_14095e105(void)

void FUN_14095e105(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined **local_68;
  undefined *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_170 = 0x3002;
  local_168 = 0;
  local_130 = 0;
  local_128 = 0x200000000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_f8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_f0 = DAT_14c8464f0;
  local_d8 = DAT_14c8464f0;
  local_c0 = DAT_14c8464f0;
  local_b8 = 0;
  local_b0 = 0x3006;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (undefined4)DAT_14c8464e0;
  uStack_84 = DAT_14c8464e0._4_4_;
  uStack_80 = (undefined4)DAT_14c8464e8;
  uStack_7c = DAT_14c8464e8._4_4_;
  local_78 = DAT_14c8464f0;
  local_70 = 0;
  local_6c = 0;
  local_e8 = local_100;
  uStack_e0 = uStack_f8;
  local_d0 = local_100;
  uStack_c8 = uStack_f8;
  FUN_1405c5fa2();
  local_60 = &DAT_14cb769e8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = &PTR_FUN_14b0394b0;
  local_48 = 0x3f800000;
  local_188 = param_2;
  FUN_14095e2f2(&local_180,param_3);
  FUN_1447cd2ec(param_1,&local_188);
  local_68 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_50 >> 0x20;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_58,0);
  }
  local_60 = (undefined *)0x0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095e2f2 FUN_14095e2f2 body=541 status=ok
// SIG undefined FUN_14095e2f2(void)

undefined4 * FUN_14095e2f2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 2)) || (param_1[4] != param_2[4])) {
    *(longlong *)(param_1 + 2) = *(longlong *)(param_2 + 2);
    param_1[4] = param_2[4];
    *(undefined8 *)(param_1 + 6) = 0;
  }
  if (param_1 != param_2) {
    puVar10 = param_2 + 8;
    if (*(undefined4 **)(param_2 + 0x14) != (undefined4 *)0x0) {
      puVar10 = *(undefined4 **)(param_2 + 0x14);
    }
    FUN_1400709d4(param_1 + 8,puVar10,param_2[0x16],param_1[0x17]);
  }
  lVar9 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x18);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x18) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0x1a);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x1a);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1a) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0x1c);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x1c);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1c) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0x1e);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x1e);
    }
  }
  *(longlong *)(param_1 + 0x1e) = lVar9;
  puVar11 = (undefined8 *)(param_2 + 0x20);
  puVar12 = (undefined8 *)(param_1 + 0x20);
  for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  if ((*(longlong *)(param_1 + 0x32) != *(longlong *)(param_2 + 0x32)) ||
     (param_1[0x34] != param_2[0x34])) {
    *(longlong *)(param_1 + 0x32) = *(longlong *)(param_2 + 0x32);
    param_1[0x34] = param_2[0x34];
    *(undefined8 *)(param_1 + 0x36) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_1403e062e(param_1 + 0x3a,param_2 + 0x3a);
  uVar1 = param_2[0x3f];
  uVar2 = param_2[0x40];
  uVar3 = param_2[0x41];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x105);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x109);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x10d);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x111);
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = uVar1;
  param_1[0x40] = uVar2;
  param_1[0x41] = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x105) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x109) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x10d) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x111) = uVar7;
  (**(code **)(*(longlong *)(param_1 + 0x46) + 0x20))(param_1 + 0x46,0);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_1406022fe(param_1 + 0x4a,param_2 + 0x4a);
  param_1[0x4e] = param_2[0x4e];
  return param_1;
}



// FUNCTION 14095e510 FUN_14095e510 body=595 status=ok
// SIG undefined FUN_14095e510(void)

void FUN_14095e510(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x438) != 0) && (*(longlong *)(param_1 + 0x440) != 0)) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14095e81a(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x438);
    *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = lVar4;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10 + 8) = *(undefined8 *)(param_1 + 0x440);
  }
  if ((*(longlong *)(param_1 + 0x448) != 0) && (*(longlong *)(param_1 + 0x450) != 0)) {
    FUN_14095e764(param_2,param_1 + 0x448);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_40 = lVar2;
  if ((lVar2 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar2 != 0) goto LAB_14095e5d4;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_14095e5d4:
    uVar3 = FUN_1403ec9c0();
    local_38 = FUN_144718840(lVar2,uVar3);
    if (local_38 != 0 && lVar2 != 0) {
      FUN_14095e764(param_2,&local_40);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((lVar2 == 0) || (DAT_14c950c29 == 0)) {
    local_40 = lVar2;
    if (lVar2 != 0) goto LAB_14095e705;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_14095e705:
    local_40 = lVar2;
    uVar3 = FUN_1403ec9c0();
    local_38 = FUN_144718840(lVar2,uVar3);
    if (local_38 != 0 && lVar2 != 0) {
      FUN_14095e764(param_2,&local_40);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x428);
  if (*(longlong *)(param_1 + 0x30) == lVar2) goto LAB_14095e639;
  if ((lVar2 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar2 == 0) goto LAB_14095e639;
  }
  else {
    FUN_1456cec3c(lVar2);
  }
  uVar3 = FUN_1403ec9c0();
  lVar4 = FUN_144718840(lVar2,uVar3);
  if ((lVar2 == 0) || (lVar4 == 0)) goto LAB_14095e639;
  lVar2 = *(longlong *)(param_1 + 0x428);
  if ((lVar2 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar2 != 0) goto LAB_14095e6b6;
    local_38 = 0;
    local_40 = lVar2;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_14095e6b6:
    local_40 = lVar2;
    uVar3 = FUN_1403ec9c0();
    local_38 = FUN_144718840(lVar2,uVar3);
  }
  FUN_148822952(param_2);
LAB_14095e639:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095e764 FUN_14095e764 body=182 status=ok
// SIG undefined FUN_14095e764(void)

void FUN_14095e764(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    if (*param_2 != 0) {
      lVar3 = param_2[1];
    }
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar5) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar2 + 8 + uVar5);
      }
      if ((*(longlong *)(lVar2 + uVar5) == *param_2) && (lVar6 == lVar3)) {
        if ((int)(~uVar5 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x10;
    } while (lVar4 << 4 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14095e81a(param_1,iVar1);
    lVar2 = *param_1;
  }
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar4 * 0x10) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar2 + lVar4 * 0x10 + 8) = param_2[1];
  return;
}



// FUNCTION 14095e81a FUN_14095e81a body=269 status=ok
// SIG undefined FUN_14095e81a(void)

void FUN_14095e81a(longlong param_1,int param_2)

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



// FUNCTION 14095e928 FUN_14095e928 body=353 status=ok
// SIG undefined FUN_14095e928(void)

void FUN_14095e928(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14095e9ad;
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
LAB_14095e9ad:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14095ea89 FUN_14095ea89 body=493 status=ok
// SIG undefined FUN_14095ea89(void)

void FUN_14095ea89(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined **local_68;
  undefined *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_158 = 0x3002;
  local_150 = 0;
  local_118 = 0;
  local_110 = 0x200000000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_e0 = DAT_14c8464f0;
  local_c8 = DAT_14c8464f0;
  local_c0 = 0;
  local_b8 = 0x3006;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_d8 = local_f0;
  uStack_d0 = uStack_e8;
  FUN_1405c5fa2();
  local_60 = &DAT_14cb769e8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = &PTR_FUN_14b0394b0;
  local_48 = 0x1000000;
  local_170 = param_2;
  FUN_14095ec78(&local_168,param_3);
  FUN_1447cd2ec(param_1,&local_170);
  local_68 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_50 >> 0x20;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_58,0);
  }
  local_60 = (undefined *)0x0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095ec78 FUN_14095ec78 body=506 status=ok
// SIG undefined FUN_14095ec78(void)

undefined4 * FUN_14095ec78(undefined4 *param_1,undefined4 *param_2)

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
  byte bVar12;
  longlong lVar13;
  undefined4 *puVar14;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 2)) || (param_1[4] != param_2[4])) {
    *(longlong *)(param_1 + 2) = *(longlong *)(param_2 + 2);
    param_1[4] = param_2[4];
    *(undefined8 *)(param_1 + 6) = 0;
  }
  if (param_1 != param_2) {
    puVar14 = param_2 + 8;
    if (*(undefined4 **)(param_2 + 0x14) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(param_2 + 0x14);
    }
    FUN_1400709d4(param_1 + 8,puVar14,param_2[0x16],param_1[0x17]);
  }
  lVar13 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x18);
    }
  }
  bVar12 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x18) = lVar13;
  lVar13 = *(longlong *)(param_2 + 0x1a);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x1a);
      bVar12 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1a) = lVar13;
  lVar13 = *(longlong *)(param_2 + 0x1c);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x1c);
    }
  }
  *(longlong *)(param_1 + 0x1c) = lVar13;
  uVar1 = param_2[0x1e];
  uVar2 = param_2[0x1f];
  uVar3 = param_2[0x20];
  uVar4 = param_2[0x21];
  uVar5 = param_2[0x22];
  uVar6 = param_2[0x23];
  uVar7 = param_2[0x24];
  uVar8 = param_2[0x25];
  uVar9 = param_2[0x27];
  uVar10 = param_2[0x28];
  uVar11 = param_2[0x29];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar9;
  param_1[0x28] = uVar10;
  param_1[0x29] = uVar11;
  param_1[0x22] = uVar5;
  param_1[0x23] = uVar6;
  param_1[0x24] = uVar7;
  param_1[0x25] = uVar8;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = uVar2;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar4;
  if ((*(longlong *)(param_1 + 0x2a) != *(longlong *)(param_2 + 0x2a)) ||
     (param_1[0x2c] != param_2[0x2c])) {
    *(longlong *)(param_1 + 0x2a) = *(longlong *)(param_2 + 0x2a);
    param_1[0x2c] = param_2[0x2c];
    *(undefined8 *)(param_1 + 0x2e) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  FUN_1403e062e(param_1 + 0x32,param_2 + 0x32);
  uVar1 = param_2[0x37];
  uVar2 = param_2[0x38];
  uVar3 = param_2[0x39];
  uVar4 = param_2[0x3a];
  uVar5 = param_2[0x3b];
  uVar6 = param_2[0x3c];
  uVar7 = param_2[0x3d];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar1;
  param_1[0x38] = uVar2;
  param_1[0x39] = uVar3;
  param_1[0x3a] = uVar4;
  param_1[0x3b] = uVar5;
  param_1[0x3c] = uVar6;
  param_1[0x3d] = uVar7;
  *(undefined8 *)((longlong)param_1 + 0xf5) = *(undefined8 *)((longlong)param_2 + 0xf5);
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x20))(param_1 + 0x40,0);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  FUN_1406022fe(param_1 + 0x44,param_2 + 0x44);
  param_1[0x48] = param_2[0x48];
  return param_1;
}



// FUNCTION 14095ee72 FUN_14095ee72 body=432 status=ok
// SIG undefined FUN_14095ee72(void)

void FUN_14095ee72(longlong param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  float local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_1403ae288(param_1 + 0x38);
  if (cVar4 != '\0') {
    FUN_14008e0ae(param_1 + 0x38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
  }
  local_5c = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    fVar7 = *(float *)(param_1 + 0x30);
  }
  else {
    FUN_1402a453c(&local_5c);
    iVar3 = local_5c;
    iVar2 = *(int *)(param_1 + 0x28);
    lVar5 = (longlong)local_5c;
    lVar1 = DAT_14c9a3d60 + lVar5 * 0x88;
    lVar6 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar1 + -0x88,lVar6 + -0x88);
    if (iVar2 != iVar3) {
      FUN_1402a4744(lVar1 + -0x18,lVar6 + -0x18);
    }
    fVar7 = *(float *)(param_1 + 0x30);
    if (iVar3 != 0) {
      fVar7 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar5 * 0x88 + -0x88,fVar7,0);
      lVar1 = DAT_14c9a3d60;
      if (fVar7 <= param_2) {
        param_2 = fVar7;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        lVar6 = (longlong)(iVar3 + -1) * 0x88;
        lVar5 = DAT_14c9a3d60 + lVar6;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar6),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar6));
        if (*(longlong *)(lVar1 + 0x70 + lVar6) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar5 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar3 + -1,1);
      }
      goto LAB_14095eed1;
    }
  }
  if (fVar7 <= param_2) {
    param_2 = fVar7;
  }
  local_58 = fVar7;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
LAB_14095eed1:
  *(float *)(param_1 + 0x24) = param_2;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14095f044 FUN_14095f044 body=996 status=ok
// SIG undefined FUN_14095f044(void)

void FUN_14095f044(undefined4 *param_1,undefined4 param_2,undefined1 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = (**(code **)(*param_4 + 8))(param_4);
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = *(byte *)(lVar5 + 0x7c) & 1;
  lVar6 = (**(code **)(*param_4 + 0xe0))(param_4);
  if (lVar6 == 0) {
    local_58 = 0;
  }
  else {
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_58,puVar7,1);
  }
  if (*(longlong *)(param_1 + 2) != local_58) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(longlong *)(param_1 + 2) = local_58;
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0xd8))(param_4);
  if (param_1 + 8 != puVar7) {
    puVar9 = *(undefined4 **)(puVar7 + 0xc);
    if (*(undefined4 **)(puVar7 + 0xc) == (undefined4 *)0x0) {
      puVar9 = puVar7;
    }
    FUN_1400709d4(param_1 + 8,puVar9,puVar7[0xe],param_1[0x17]);
  }
  lVar6 = (**(code **)(*param_4 + 0x108))(param_4);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *(longlong *)(param_1 + 0x18) = lVar6;
  lVar6 = (**(code **)(*param_4 + 0x100))(param_4);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *(longlong *)(param_1 + 0x1a) = lVar6;
  lVar6 = (**(code **)(*param_4 + 0xa8))(param_4);
  if (*(int *)(lVar6 + 0xdc) != 0) {
    uVar1 = *(uint *)(lVar6 + 0xd8);
    lVar11 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14095f1dd;
    plVar10 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar10 != (longlong *)0x0) &&
       (((int)plVar10[2] == *(int *)(lVar6 + 0xdc) && ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))
       ) {
      lVar11 = *plVar10;
      if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar11);
      }
      goto LAB_14095f1dd;
    }
  }
  lVar11 = 0;
LAB_14095f1dd:
  *(longlong *)(param_1 + 0x1c) = lVar11;
  (**(code **)(*param_4 + 0xb0))(param_4,&local_70);
  *(undefined8 *)(param_1 + 0x22) = local_60;
  param_1[0x1e] = local_70;
  param_1[0x1f] = uStack_6c;
  param_1[0x20] = uStack_68;
  param_1[0x21] = uStack_64;
  (**(code **)(*param_4 + 0xb8))(param_4,&local_70);
  *(undefined8 *)(param_1 + 0x28) = local_60;
  param_1[0x24] = local_70;
  param_1[0x25] = uStack_6c;
  param_1[0x26] = uStack_68;
  param_1[0x27] = uStack_64;
  plVar10 = (longlong *)(**(code **)(*param_4 + 0xd0))(param_4);
  if ((*(longlong *)(param_1 + 0x2a) != *plVar10) || (param_1[0x2c] != (int)plVar10[1])) {
    *(longlong *)(param_1 + 0x2a) = *plVar10;
    param_1[0x2c] = (int)plVar10[1];
    *(undefined8 *)(param_1 + 0x2e) = 0;
  }
  *(longlong *)(param_1 + 0x30) = plVar10[3];
  FUN_1403e062e(param_1 + 0x32,lVar5 + 0xe0);
  uVar3 = (**(code **)(*param_4 + 0x20))(param_4);
  *(undefined1 *)(param_1 + 0x3d) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0xf5) = param_3;
  lVar6 = (**(code **)(*param_4 + 0xe8))(param_4);
  bVar12 = false;
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x20))(param_1 + 0x40,0);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(lVar6 + 8);
  FUN_1406022fe(param_1 + 0x44,lVar6 + 0x10);
  param_1[0x3e] = *(undefined4 *)(lVar5 + 0x74);
  *(byte *)(param_1 + 0x3f) = *(byte *)(lVar5 + 0x7c) >> 4 & 1;
  uVar3 = (**(code **)(*param_4 + 0x38))(param_4);
  *(undefined1 *)(param_1 + 0x48) = uVar3;
  uVar3 = (**(code **)(*param_4 + 0xf0))(param_4);
  *(undefined1 *)((longlong)param_1 + 0x123) = uVar3;
  lVar6 = (**(code **)(*param_4 + 0x120))(param_4);
  if (lVar6 != 0) {
    bVar12 = *(longlong *)(param_1 + 0x18) != lVar6;
  }
  *(bool *)((longlong)param_1 + 0x121) = bVar12;
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)(lVar5 + 0x7c) >> 3 & 1;
  cVar4 = (**(code **)(*param_4 + 0x30))(param_4);
  if (cVar4 != '\0') {
    puVar8 = (undefined8 *)(**(code **)(*param_4 + 0x18))(param_4);
    uVar2 = puVar8[1];
    *(undefined8 *)(param_1 + 0x36) = *puVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x3a) = puVar8[2];
    param_1[0x3c] = *(undefined4 *)(puVar8 + 3);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095f42a FUN_14095f42a body=1387 status=ok
// SIG undefined FUN_14095f42a(void)

void FUN_14095f42a(undefined4 *param_1,undefined4 param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  undefined2 local_158;
  undefined4 uStack_156;
  undefined2 uStack_152;
  undefined2 local_150;
  undefined2 uStack_14e;
  undefined2 uStack_14c;
  longlong local_148;
  int local_140;
  undefined4 local_13c;
  undefined1 local_130 [8];
  longlong local_128;
  longlong local_f0;
  byte local_b4;
  char local_b0;
  undefined2 *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  int local_74;
  longlong local_70;
  longlong local_60;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar6 = (**(code **)(*param_3 + 8))(param_3);
  FUN_14095fa38(local_130,uVar6);
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = local_b4 & 1;
  lVar7 = (**(code **)(*param_3 + 0xe0))(param_3);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(lVar7 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar7 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar7);
      DAT_14c947fe0 = lVar7;
    }
    FUN_140045924(DAT_14c947fe0,&local_168,puVar8,1);
    lVar7 = CONCAT44(uStack_164,local_168);
  }
  if (*(longlong *)(param_1 + 2) != lVar7) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(longlong *)(param_1 + 2) = lVar7;
  puVar8 = (undefined4 *)(**(code **)(*param_3 + 0xd8))(param_3);
  if (param_1 + 8 != puVar8) {
    puVar10 = *(undefined4 **)(puVar8 + 0xc);
    if (*(undefined4 **)(puVar8 + 0xc) == (undefined4 *)0x0) {
      puVar10 = puVar8;
    }
    FUN_1400709d4(param_1 + 8,puVar10,puVar8[0xe],param_1[0x17]);
  }
  lVar7 = (**(code **)(*param_3 + 0x110))(param_3);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(param_1 + 0x18) = lVar7;
  lVar7 = (**(code **)(*param_3 + 0x120))(param_3);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(param_1 + 0x1a) = lVar7;
  lVar7 = (**(code **)(*param_3 + 0x100))(param_3);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(param_1 + 0x1c) = lVar7;
  lVar7 = (**(code **)(*param_3 + 0xa8))(param_3);
  if (*(int *)(lVar7 + 0xdc) != 0) {
    uVar1 = *(uint *)(lVar7 + 0xd8);
    lVar12 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14095f5f6;
    plVar11 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar11 != (longlong *)0x0) &&
       (((int)plVar11[2] == *(int *)(lVar7 + 0xdc) && ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))
       ) {
      lVar12 = *plVar11;
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      goto LAB_14095f5f6;
    }
  }
  lVar12 = 0;
LAB_14095f5f6:
  *(longlong *)(param_1 + 0x1e) = lVar12;
  (**(code **)(*param_3 + 0xb0))(param_3,&local_168);
  *(ulonglong *)(param_1 + 0x24) = CONCAT26(uStack_152,CONCAT42(uStack_156,local_158));
  param_1[0x20] = local_168;
  param_1[0x21] = uStack_164;
  param_1[0x22] = uStack_160;
  param_1[0x23] = CONCAT22(uStack_15a,uStack_15c);
  (**(code **)(*param_3 + 0xb8))(param_3,&local_168);
  *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_152,CONCAT42(uStack_156,local_158));
  param_1[0x26] = local_168;
  param_1[0x27] = uStack_164;
  param_1[0x28] = uStack_160;
  param_1[0x29] = CONCAT22(uStack_15a,uStack_15c);
  (**(code **)(*param_3 + 200))(param_3,&local_168);
  *(ulonglong *)(param_1 + 0x30) = CONCAT26(uStack_152,CONCAT42(uStack_156,local_158));
  param_1[0x2c] = local_168;
  param_1[0x2d] = uStack_164;
  param_1[0x2e] = uStack_160;
  param_1[0x2f] = CONCAT22(uStack_15a,uStack_15c);
  plVar11 = (longlong *)(**(code **)(*param_3 + 0xd0))(param_3);
  if ((*(longlong *)(param_1 + 0x32) != *plVar11) || (param_1[0x34] != (int)plVar11[1])) {
    *(longlong *)(param_1 + 0x32) = *plVar11;
    param_1[0x34] = (int)plVar11[1];
    *(undefined8 *)(param_1 + 0x36) = 0;
  }
  *(longlong *)(param_1 + 0x38) = plVar11[3];
  FUN_1403e062e(param_1 + 0x3a,local_50);
  *(bool *)(param_1 + 0x45) = local_b0 != '\0';
  lVar7 = (**(code **)(*param_3 + 0xe8))(param_3);
  (**(code **)(*(longlong *)(param_1 + 0x46) + 0x20))(param_1 + 0x46,0);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar7 + 8);
  FUN_1406022fe(param_1 + 0x4a,lVar7 + 0x10);
  uVar13 = (**(code **)(*param_3 + 0x150))(param_3);
  param_1[0x4e] = uVar13;
  cVar5 = (**(code **)(*param_3 + 0x30))(param_3);
  if (cVar5 != '\0') {
    puVar9 = (undefined8 *)(**(code **)(*param_3 + 0x18))(param_3);
    local_168 = *(undefined4 *)puVar9;
    uStack_164 = *(undefined4 *)((longlong)puVar9 + 4);
    uVar4 = *puVar9;
    uStack_160 = *(undefined4 *)(puVar9 + 1);
    uVar3 = puVar9[1];
    uStack_156 = *(undefined4 *)((longlong)puVar9 + 0x12);
    uStack_15c = (undefined2)*(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_15a = (undefined2)*(undefined4 *)((longlong)puVar9 + 0xe);
    local_158 = (undefined2)((uint)*(undefined4 *)((longlong)puVar9 + 0xe) >> 0x10);
    uStack_152 = (undefined2)*(undefined4 *)((longlong)puVar9 + 0x16);
    local_150 = (undefined2)((uint)*(undefined4 *)((longlong)puVar9 + 0x16) >> 0x10);
    uStack_14e = (undefined2)*(undefined4 *)((longlong)puVar9 + 0x1a);
    uStack_14c = (undefined2)((uint)*(undefined4 *)((longlong)puVar9 + 0x1a) >> 0x10);
    local_148 = 0;
    iVar2 = *(int *)(puVar9 + 5);
    uVar6 = puVar9[4];
    local_140 = iVar2;
    if (iVar2 == 0) {
      local_13c = 0;
      *(ulonglong *)(param_1 + 0x42) = CONCAT26(uStack_152,CONCAT42(uStack_156,local_158));
      *(undefined8 *)(param_1 + 0x3e) = uVar4;
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      param_1[0x44] = CONCAT22(uStack_14e,local_150);
    }
    else {
      FUN_144723f1e(&local_148,iVar2,0);
      FUN_144723ff3(local_148,uVar6,iVar2);
      *(ulonglong *)(param_1 + 0x42) = CONCAT26(uStack_152,CONCAT42(uStack_156,local_158));
      *(ulonglong *)(param_1 + 0x3e) = CONCAT44(uStack_164,local_168);
      *(ulonglong *)(param_1 + 0x40) = CONCAT26(uStack_15a,CONCAT24(uStack_15c,uStack_160));
      param_1[0x44] = CONCAT22(uStack_14e,local_150);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_90 = &DAT_14a171d50;
  local_78 = 0;
  if (local_74 != 0) {
    FUN_140115c12(&local_80,0);
  }
  local_88 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14095fa38 FUN_14095fa38 body=586 status=ok
// SIG undefined FUN_14095fa38(void)

undefined8 * FUN_14095fa38(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 << 2);
  }
  FUN_14095fc82(param_1 + 3,param_2 + 3);
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 2);
  }
  uVar3 = param_2[10];
  uVar8 = param_2[0xb];
  uVar9 = param_2[0xc];
  uVar10 = param_2[0xd];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x71);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x75);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x79);
  *(undefined4 *)((longlong)param_1 + 0x6d) = *(undefined4 *)((longlong)param_2 + 0x6d);
  *(undefined4 *)((longlong)param_1 + 0x71) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x75) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x79) = uVar6;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  param_1[10] = uVar3;
  param_1[0xb] = uVar8;
  uVar3 = param_2[0x11];
  uVar4 = *(undefined4 *)(param_2 + 0x12);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar6 = *(undefined4 *)(param_2 + 0x13);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar7;
  param_1[0x14] = &DAT_14a171d50;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = param_2[0x15];
  FUN_1406022fe(param_1 + 0x16,param_2 + 0x16);
  param_1[0x14] = &PTR_FUN_14b0394b0;
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  uVar3 = param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_1403e087a(param_1 + 0x18,iVar1,0);
    FUN_1403e0705(param_1[0x18],uVar3,iVar1);
  }
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  pvVar2 = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1403e09c6(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[0x1c] = 0;
  iVar1 = *(int *)(param_2 + 0x1d);
  uVar3 = param_2[0x1c];
  *(int *)(param_1 + 0x1d) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  else {
    FUN_1403e07a2(param_1 + 0x1c,iVar1,0);
    FUN_1403e067d(param_1[0x1c],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 14095fc82 FUN_14095fc82 body=113 status=ok
// SIG undefined FUN_14095fc82(void)

void FUN_14095fc82(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  *(undefined4 *)(param_1 + 1) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[3];
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[5];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_2[7];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 8);
  return;
}



// FUNCTION 14095fcf4 FUN_14095fcf4 body=1715 status=ok
// SIG undefined FUN_14095fcf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14095fcf4(longlong param_1,longlong *param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  longlong *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_1bc;
  uint local_1b0;
  int local_1ac;
  undefined4 local_190;
  longlong local_160;
  longlong local_158;
  longlong *plStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  longlong local_108;
  longlong *local_f8;
  longlong local_e8 [4];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if ((((char)param_2[0xa9] != '\0') || (*(longlong *)(param_1 + 0x250) == 0)) ||
     (lVar3 = FUN_1447210f0(), lVar3 == 0)) goto LAB_14095fd22;
  lVar3 = param_2[5];
  if ((lVar3 == 0) && (lVar3 = param_2[7], lVar3 == 0)) {
    lVar4 = *(longlong *)(param_1 + 0x250);
    lVar3 = lVar4;
    if (lVar4 == 0) goto LAB_14095fd22;
LAB_14095fd9f:
    lVar4 = FUN_1447210f0(lVar4);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x250);
    if (lVar4 != 0) goto LAB_14095fd9f;
    lVar4 = 0;
  }
  dVar1 = *(double *)(lVar4 + 0x6d0);
  if (_DAT_14c7638d4 < (float)dVar1 - *(float *)(param_1 + 0x508)) {
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(float *)(param_1 + 0x508) = (float)dVar1;
  }
  lVar4 = FUN_1402179b4(param_2 + 0x95);
  bVar16 = false;
  memset(&local_260,0,0x100);
  local_190 = 0xffffffff;
  local_260._4_4_ = 0x3f800000;
  local_1bc = 0xffffffff;
  if (lVar4 == 0) {
LAB_14095fee6:
    plVar15 = param_2 + 0x37;
    lVar5 = param_2[0x37];
  }
  else {
    if (((*(byte *)(lVar4 + 0x19) & 0x20) == 0) &&
       (fVar18 = (float)(**(code **)(*param_2 + 0x140))(param_2,1), fVar18 < 0.0001))
    goto LAB_14095fd22;
    bVar16 = *(longlong *)(lVar4 + 0x288) != 0;
    if (bVar16) {
      memcpy(&local_260,param_2 + 0x17,0x100);
      lVar5 = FUN_1401f2ad8();
      if (lVar5 == 0) {
        local_1b0 = 0;
        local_1ac = 0;
      }
      else {
        local_1b0 = *(uint *)(lVar5 + 0xc);
        if ((int)local_1b0 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((local_1b0 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_1b0 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        local_1ac = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          local_1ac = *(int *)(lVar5 + 0x10);
          bVar17 = local_1ac == 0;
          if (bVar17) {
            *(int *)(lVar5 + 0x10) = iVar14;
            local_1ac = 0;
          }
          UNLOCK();
          if (bVar17) {
            local_1ac = iVar14;
          }
        }
      }
    }
    lVar5 = *(longlong *)(lVar4 + 0x268);
    if ((lVar5 == 0) || (0xfffffffd < *(int *)(lVar4 + 0x270) - 1U)) goto LAB_14095fee6;
    plVar15 = (longlong *)(lVar4 + 0x268);
  }
  if ((lVar5 == 0) || (0xfffffffd < (int)plVar15[1] - 1U)) goto LAB_14095fd22;
  lVar4 = FUN_140ccfc10();
  if (*(int *)((longlong)param_2 + 0x16c) == 0) {
LAB_1409602f8:
    lVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x2d);
    lVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar15 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar15 == (longlong *)0x0) ||
         (((int)plVar15[2] != *(int *)((longlong)param_2 + 0x16c) ||
          ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_1409602f8;
      lVar10 = *plVar15;
    }
  }
  if (lVar10 == 0) {
    lVar10 = DAT_14c997c50;
  }
  if (*(int *)(lVar4 + 0x200) != *(int *)(lVar4 + 0x22c)) {
    lVar12 = lVar4 + 0x230;
    if (*(longlong *)(lVar4 + 0x238) != 0) {
      lVar12 = *(longlong *)(lVar4 + 0x238);
    }
    iVar11 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar4 + 0x240) - 1U & (uint)*(byte *)(lVar10 + 0x60)) * 4);
    if (iVar11 != -1) {
      do {
        lVar12 = *(longlong *)(lVar4 + 0x1f8) + (longlong)iVar11 * 0x10;
        if (*(uint *)(*(longlong *)(lVar4 + 0x1f8) + (longlong)iVar11 * 0x10) ==
            (uint)*(byte *)(lVar10 + 0x60)) {
          if ((lVar12 != 0) && ((char *)(lVar12 + 4) != (char *)0x0)) {
            bVar17 = *(char *)(lVar12 + 4) == '\x03';
            uVar6 = (ulonglong)bVar17;
            piVar13 = &DAT_14c7638cc;
            if (bVar17) {
              piVar13 = &DAT_14c7638d0;
            }
            iVar11 = *piVar13;
            goto LAB_14096000e;
          }
          break;
        }
        iVar11 = *(int *)(lVar12 + 8);
      } while (iVar11 != -1);
    }
  }
  uVar6 = 0;
  iVar11 = DAT_14c7638cc;
LAB_14096000e:
  iVar14 = *(int *)(param_1 + 0x500 + uVar6 * 4);
  if (iVar14 <= iVar11) {
    *(int *)(param_1 + 0x500 + uVar6 * 4) = iVar14 + 1;
    if (*(longlong *)(param_1 + 0x250) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_1447210f0();
    }
    FUN_1407f7f84(&local_158,uVar7);
    if (plStack_150 != (longlong *)0x0) {
      iVar11 = (int)plStack_150[1];
      do {
        if (iVar11 == 0) {
          plVar15 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar14 = (int)plStack_150[1];
        bVar17 = iVar11 == iVar14;
        if (bVar17) {
          *(int *)(plStack_150 + 1) = iVar11 + 1;
          iVar14 = iVar11;
        }
        iVar11 = iVar14;
        UNLOCK();
        plVar15 = plStack_150;
      } while (!bVar17);
      LOCK();
      piVar13 = (int *)((longlong)plStack_150 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plStack_150 + 0x10))();
      }
      lVar4 = local_158;
      if (plVar15 != (longlong *)0x0) {
        if (local_158 != 0) {
          local_160 = lVar5;
          FUN_1446dcdd4(&local_158);
          if (DAT_14cb78ff0 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_144837462(DAT_14cb78ff0,&local_158);
          }
          if (lStack_140 != 0) {
            FUN_1400020a8();
          }
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          lStack_140 = 0;
          local_158 = 0;
          plStack_150 = (longlong *)0x0;
          local_118 = 0xc0;
          local_108 = 0;
          local_f8 = (longlong *)0x0;
          local_c8 = 0;
          local_b8 = (longlong *)0x0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0x3ff0000000000000;
          local_68 = 0x3ff0000000000000;
          local_60 = 0x3ff0000000000000;
          local_58 = 0;
          local_50 = 0;
          if (*(char *)((longlong)param_2 + 0x30c) == '\0') {
            local_54 = 0x3f800000;
          }
          else {
            local_54 = (undefined4)param_2[0x61];
          }
          plVar8 = (longlong *)param_2[0x8f];
          if (plVar8 != (longlong *)0x0) {
            uVar7 = FUN_14072d970();
            plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
            if (plVar8 != (longlong *)0x0) {
              uVar7 = FUN_14072d970();
              plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
              if (plVar9 != (longlong *)0x0 && plVar8 != plVar9) {
                lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
                if (*(longlong *)(lVar10 + 0x28) == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = FUN_140a027b2();
                }
                FUN_1405bc06f(&local_158,uVar7,1,1);
              }
            }
          }
          if (lVar5 != 0) {
            plVar8 = param_2 + 0x17;
            if (bVar16) {
              plVar8 = &local_260;
            }
            local_270 = &local_158;
            local_268 = 0;
            local_278 = 1;
            FUN_1408f2522(lVar4,lVar5,lVar3,plVar8);
          }
          if (local_c8 != 0) {
            plVar8 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar8 = local_a8;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
          if (local_108 != 0) {
            plVar8 = local_f8;
            if (local_f8 == (longlong *)0x0) {
              plVar8 = local_e8;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_158 != 0) {
            FUN_1400020a8();
          }
        }
        LOCK();
        plVar8 = plVar15 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar13 = (int *)((longlong)plVar15 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
  }
LAB_14095fd22:
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409603a8 FUN_1409603a8 body=2022 status=ok
// SIG undefined FUN_1409603a8(void)

void FUN_1409603a8(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_168 [40];
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  longlong local_120;
  ulonglong uStack_118;
  undefined8 local_110;
  longlong lStack_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  ulonglong uStack_e8;
  longlong local_e0;
  ulonglong uStack_d8;
  longlong local_d0;
  ulonglong uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined **local_80;
  ulonglong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar4 = (**(code **)(*param_1 + 0x1c0))();
  if ((param_2 == 0) || (cVar4 == '\0')) goto LAB_14096047f;
  FUN_140cdcab8(param_2);
  FUN_140cdc9e6(param_2 + 0x150,&local_140);
  if (((local_140 & ~param_1[0xa4]) != 0) ||
     (plVar10 = (longlong *)param_1[0x8f], plVar10 == (longlong *)0x0)) goto LAB_14096047f;
  uVar6 = FUN_140eca14a();
  lVar7 = (**(code **)(*plVar10 + 0x288))(plVar10,uVar6);
  if (lVar7 == 0) goto LAB_14096047f;
  uVar6 = FUN_140eca14a();
  lVar8 = FUN_144718840(lVar7,uVar6);
  if ((lVar8 == 0 || lVar7 == lVar8) ||
     (((lVar7 = param_1[0x87], lVar7 == 0 && (lVar7 = param_1[0x89], lVar7 == 0)) &&
      (lVar7 = param_1[7], lVar7 == 0)))) goto LAB_14096047f;
  local_128 = 1;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  lStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_140 = param_2;
  local_138 = lVar8;
  local_130 = lVar7;
  (**(code **)(*param_1 + 0x1c8))(param_1,&local_140);
  uVar3 = uStack_b8;
  if (((*(int *)((longlong)param_1 + 0x2f4) != 0) &&
      (uVar5 = *(uint *)(param_1 + 0x5e), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x2f4))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      lVar7 = (longlong)(int)uStack_b8;
      uVar5 = (int)uStack_b8 + 1;
      uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar5);
      if (uStack_b8._4_4_ < uVar5) {
        FUN_1409d3082(&local_c0,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_c0 + lVar7 * 8) = param_1[0x5e];
    }
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,&local_140);
  FUN_1418adf56(&local_f0,param_1 + 0x5f,&DAT_14cb76880);
  lVar8 = FUN_140ccfc10();
  lVar7 = *(longlong *)(lVar8 + 0xeb8);
  if (lVar7 == 0) {
    uVar6 = FUN_140261af2();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar8 + 0xeb8) = lVar7;
  }
  plVar10 = (longlong *)(lVar8 + 0xeb0);
  lVar9 = *(longlong *)(lVar8 + 0xec0);
  if (lVar9 == 0) {
    if ((lVar7 != 0) && (*plVar10 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar4 != '\0') {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar9 = FUN_144aff482(uVar6,plVar10);
          *(longlong *)(lVar8 + 0xec0) = lVar9;
          if (lVar9 != 0) {
            lVar7 = *(longlong *)(lVar8 + 0xeb8);
            goto LAB_1409605ce;
          }
          goto LAB_1409606ab;
        }
      }
      *(undefined8 *)(lVar8 + 0xec0) = 0;
    }
  }
  else {
LAB_1409605ce:
    if (lVar7 == 0) {
      uVar6 = FUN_140261af2(lVar9);
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(lVar8 + 0xeb8) = lVar7;
      lVar9 = *(longlong *)(lVar8 + 0xec0);
      if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*plVar10 != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_140960b8b:
          lVar9 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x108))();
          if (cVar4 == '\0') goto LAB_140960b8b;
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar9 = FUN_144aff482(uVar6,plVar10);
        }
        *(longlong *)(lVar8 + 0xec0) = lVar9;
      }
    }
    plVar10 = (longlong *)
              FUN_143d08c8e(lVar9,*(undefined8 *)(param_2 + 0x110),
                            L"GetStatusEffectApplicationDefaults",1);
    if (plVar10 != (longlong *)0x0) {
      local_b0[0] = '\0';
      local_88[0] = 0;
      FUN_1418adffa(&local_80,&local_f0,&DAT_14cb76878,local_b0);
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_80);
      local_80 = &PTR_LAB_14b3f62b0;
      FUN_1448173f8(local_50);
      if ((char)local_78 != '\0') {
        if ((char)local_78 == '\x01') {
          local_70 = 0;
        }
        else if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        local_78 = (ulonglong *)((ulonglong)local_78 & 0xffffffffffffff00);
      }
      FUN_1448173f8(local_88);
      if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
    }
  }
LAB_1409606ab:
  lVar7 = param_1[10];
  if (lVar7 != 0) {
    local_b0[0] = '\0';
    local_88[0] = 0;
    FUN_1418adffa(&local_80,&local_f0,&DAT_14cb768b8,local_b0);
    FUN_140cd739a(lVar7 + 0x100,&local_80);
    local_80 = &PTR_LAB_14b3f62b0;
    FUN_1448173f8(local_50);
    if ((char)local_78 != '\0') {
      if ((char)local_78 == '\x01') {
        local_70 = 0;
      }
      else if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      local_78 = (ulonglong *)((ulonglong)local_78 & 0xffffffffffffff00);
    }
    FUN_1448173f8(local_88);
    if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
  }
  lVar7 = FUN_1402179b4(param_1 + 0x95);
  if (lVar7 != 0) {
    local_b0[0] = '\0';
    local_88[0] = 0;
    FUN_1418adffa(&local_80,&local_f0,&DAT_14cb768c0,local_b0);
    FUN_140cd739a(lVar7 + 0x20,&local_80);
    local_80 = &PTR_LAB_14b3f62b0;
    FUN_1448173f8(local_50);
    if ((char)local_78 != '\0') {
      if ((char)local_78 == '\x01') {
        local_70 = 0;
      }
      else if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      local_78 = (ulonglong *)((ulonglong)local_78 & 0xffffffffffffff00);
    }
    FUN_1448173f8(local_88);
    if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
  }
  FUN_1409d2be4(&local_140,param_1[3],1,&DAT_14cb76898);
  FUN_1409d2be4(&local_140,param_1[0x8b],2,&DAT_14cb768b0);
  if ((longlong *)param_1[0x94] != (longlong *)0x0) {
    uVar6 = (**(code **)(*(longlong *)param_1[0x94] + 8))();
    FUN_1409d2be4(&local_140,uVar6,2,&DAT_14cb768a8);
  }
  FUN_1409d2be4(&local_140,param_1[7],2,&DAT_14cb76890);
  lVar7 = param_1[0x87];
  if ((lVar7 != 0) && (param_1[0x88] != 0)) {
    lVar8 = param_1[0x8b];
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = param_1[0x8c];
    }
    if ((lVar7 != lVar8) || (param_1[0x88] != lVar9)) {
      FUN_1409d2be4(&local_140,lVar7,CONCAT71((int7)((ulonglong)lVar8 >> 8),2),&DAT_14cb76888);
    }
  }
  (**(code **)(*param_1 + 0x1d0))(param_1,&local_140);
  local_80 = &PTR_FUN_14b3f6e28;
  local_70 = ((ulonglong)CONCAT31((int3)((ulonglong)local_70 >> 0x28),(undefined1)local_128) &
             0xffffff01) << 0x20;
  local_78 = &local_140;
  FUN_143e46852();
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  FUN_143d097bf(local_d0,uStack_c8 & 0xffffffff);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_143d097f9(local_e0,uStack_d8 & 0xffffffff);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  FUN_143d09835(local_f0,uStack_e8 & 0xffffffff);
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1409ed859(lStack_108,local_100 & 0xffffffff);
  if (lStack_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1409ed859(local_120,uStack_118 & 0xffffffff);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
LAB_14096047f:
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140960b90 FUN_140960b90 body=57 status=ok
// SIG undefined FUN_140960b90(void)

undefined4 FUN_140960b90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_1403ae288(param_1 + 0x38);
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)(param_1 + 0x2c);
  }
  else {
    lVar1 = FUN_140280ec4(param_1 + 0x38);
    puVar3 = (undefined4 *)(lVar1 + 0x30);
  }
  return *puVar3;
}



// FUNCTION 140960bca FUN_140960bca body=1570 status=ok
// SIG undefined FUN_140960bca(void)

void FUN_140960bca(longlong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined7 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  code *local_88;
  ulonglong local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  bVar1 = *(byte *)(param_1 + 0x8e);
  if ((bVar1 & 2) != 0) goto LAB_140960f75;
  *(byte *)(param_1 + 0x8e) = bVar1 | 2;
  if ((*(byte *)((longlong)param_1 + 0x7c) & 0x40) == 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x7d);
    uVar10 = (undefined7)((ulonglong)param_3 >> 8);
    if (((bVar1 & 4) != 0) && ((*(byte *)((longlong)param_1 + 0x471) & 4) == 0)) {
      *(byte *)((longlong)param_1 + 0x471) = *(byte *)((longlong)param_1 + 0x471) | 4;
      local_e8 = param_1 + 0x42;
      local_f0 = param_1 + 0x3f;
      local_f8 = param_1 + 0x3d;
      uVar8 = CONCAT71(uVar10,bVar1) & 0xffffff20;
      uVar11 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 5);
      uVar8 = CONCAT71(uVar10,bVar1) & 0xffffffffffffff08;
      uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 3);
      lVar4 = *param_1;
      local_e0 = local_e0 & 0xffffffffffffff00;
LAB_140960d13:
      (**(code **)(lVar4 + 0xb8))(param_1,param_2,uVar8,uVar11);
    }
  }
  else if (((-1 < (char)bVar1) && (param_1[0x4a] != 0)) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) {
    if (param_1[0x4a] != 0) {
      FUN_1447210f0();
    }
    iVar3 = FUN_14490d72a();
    if (((iVar3 != 3) && (param_1[0x4a] != 0)) && ((*(byte *)(param_1[0x4a] + 0x65) & 0x18) == 0x10)
       ) {
      *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) | 0x80;
      if (param_1[0x4b] == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)param_1[0x4c];
      }
      lVar4 = (**(code **)(*plVar7 + 0x10))();
      if (lVar4 != 0) {
        FUN_140961230(lVar4,1);
      }
      *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
      if ((*(byte *)(param_1 + 0x8e) & 0x20) == 0) {
        FUN_140f719de(param_1);
      }
      local_e8 = param_1 + 0x35;
      local_f0 = param_1 + 0x32;
      local_f8 = param_1 + 0x30;
      uVar10 = (undefined7)((ulonglong)param_3 >> 8);
      uVar8 = CONCAT71(uVar10,*(undefined1 *)((longlong)param_1 + 0x7d)) & 0xffffff10;
      uVar11 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 4);
      uVar8 = CONCAT71(uVar10,*(undefined1 *)((longlong)param_1 + 0x7d)) & 0xffffffffffffff01;
      lVar4 = *param_1;
      local_e0 = CONCAT71(local_e0._1_7_,1);
      goto LAB_140960d13;
    }
  }
  if (param_2 == 0) {
LAB_14096103f:
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulonglong *)(param_2 + 0x438);
    if ((uVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar8);
    }
    else if (uVar8 == 0) goto LAB_14096103f;
    if (DAT_14cac9ca8 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1478c0a72;
      local_d0 = &LAB_1417b2375;
      local_d8 = L"Engine";
      local_e0 = 0x1000000000;
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,0x10000004);
      local_f0 = (longlong *)CONCAT44(local_f0._4_4_,8);
      local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14096103f;
  }
  local_88 = (code *)param_1[0x4a];
  local_80 = uVar8;
  FUN_1447cd2ec(param_1 + 0x29);
  FUN_14095dc64(param_1 + 0x2b,param_2);
  if (((param_1[0x9f] != 0) || (param_1[0x4a] == 0)) || (lVar4 = FUN_1447210f0(), lVar4 == 0))
  goto LAB_140960f75;
  lVar12 = param_1[0x4a];
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar12);
LAB_140960e00:
    uVar2 = *(uint *)(lVar12 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      if (*(int *)(lVar12 + 0x10) == 0) {
        *(int *)(lVar12 + 0x10) = iVar9;
      }
      UNLOCK();
    }
  }
  else if (lVar12 != 0) goto LAB_140960e00;
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  uVar11 = *puVar5;
  lVar4 = param_1[0x4a];
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  puVar5 = local_98;
  local_90 = 3;
  *local_98 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_98[2] = lVar6;
  *local_98 = &PTR_FUN_14b3f7120;
  local_98[3] = 0;
  iVar3 = 0;
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0xc);
    *(uint *)(local_98 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar13 = iVar3 == 0;
      if (bVar13) {
        *(int *)(lVar4 + 0x10) = iVar9;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar3 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar3;
  puVar5[4] = param_1;
  local_88 = (code *)0x0;
  local_80 = local_80 & 0xffffffff00000000;
  FUN_14487d8d8(&local_88,&local_98);
  local_48 = 1;
  FUN_14016fdb0(uVar11,local_a0,&local_88);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  if (local_90 != 0) {
    if (local_98 == (undefined8 *)0x0) goto LAB_140960f75;
    (**(code **)*local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140960f75:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409611ee FUN_1409611ee body=66 status=ok
// SIG undefined FUN_1409611ee(void)

void FUN_1409611ee(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x140))(param_2,0);
    FUN_14095f42a(param_1 + 0x308,uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140961230 FUN_140961230 body=79 status=ok
// SIG undefined FUN_140961230(void)

void FUN_140961230(longlong param_1,char param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x578))();
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfb | param_2 << 2;
  FUN_14036aa80(param_1);
  if ((*(byte *)(param_1 + 0x55) & 4) != 0) {
    while (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
      FUN_145cfd944(param_1,**(undefined4 **)(param_1 + 0x60));
    }
  }
  return;
}



// FUNCTION 140961280 FUN_140961280 body=110 status=ok
// SIG undefined FUN_140961280(void)

void FUN_140961280(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [12];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_20 = *(longlong *)(param_1 + 0x80);
    FUN_1401533ba(local_2c,&local_20,1);
    FUN_1409612f0(param_2,&local_20,local_2c,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409612f0 FUN_1409612f0 body=451 status=ok
// SIG undefined FUN_1409612f0(void)

undefined4 *
FUN_1409612f0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14096152a(param_1,local_50);
  local_48[2] = *(uint *)(param_3 + 1);
  *(undefined8 *)local_48 = *param_3;
  local_48[3] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  uVar4 = local_48[2];
  if (uVar4 != 0) {
    uVar3 = uVar4 >> 0xd ^ uVar3 - uVar4;
    uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
    uVar7 = uVar5 >> 0xd ^ (uVar4 - uVar3) - uVar5;
    uVar4 = uVar7 >> 0xc ^ (uVar3 - uVar5) - uVar7;
    uVar3 = uVar4 << 0x10 ^ (uVar5 - uVar7) - uVar4;
    uVar5 = uVar3 >> 5 ^ (uVar7 - uVar4) - uVar3;
    uVar4 = uVar5 >> 3 ^ (uVar4 - uVar3) - uVar5;
    uVar3 = uVar4 << 10 ^ (uVar3 - uVar5) - uVar4;
    uVar3 = uVar3 >> 0xf ^ uVar5 - (uVar4 + uVar3);
  }
  local_68 = param_4;
  cVar1 = FUN_1409614b4(param_1,uVar3,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[4] = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140961796(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409614b4 FUN_1409614b4 body=118 status=ok
// SIG undefined FUN_1409614b4(void)

void FUN_1409614b4(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar4 = FUN_1407a7398();
    if (iVar4 != -1) {
      lVar1 = *param_1;
      uVar2 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar4 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar4 * 0x14) = uVar2;
      FUN_14096170c(param_1,*param_4,1);
      *param_4 = iVar4;
      uVar3 = 1;
      goto LAB_1409614e3;
    }
  }
  uVar3 = 0;
LAB_1409614e3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 14096152a FUN_14096152a body=482 status=ok
// SIG undefined FUN_14096152a(void)

int * FUN_14096152a(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14096170c FUN_14096170c body=138 status=ok
// SIG undefined FUN_14096170c(void)

void FUN_14096170c(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140961796 FUN_140961796 body=805 status=ok
// SIG undefined FUN_140961796(void)

void FUN_140961796(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar12 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar12,4);
    if ((int)uVar12 < 1) goto LAB_1409617fc;
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
  } while (uVar12 != uVar2);
LAB_1409617fc:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar10;
    if (uVar12 == 0) {
      iVar15 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar15 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar12 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar7 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
  }
  if (iVar15 < iVar6) {
    uVar12 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar15;
      uVar2 = *(uint *)(lVar9 + lVar8 * 0x14);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8 * 0x14);
      if (uVar17 != 0) {
        uVar16 = uVar17 >> 0xd ^ uVar2 - uVar17;
        uVar2 = uVar16 << 8 ^ (-0x61c88647 - uVar17) - uVar16;
        uVar17 = uVar2 >> 0xd ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 0xc ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 0x10 ^ (uVar2 - uVar17) - uVar16;
        uVar17 = uVar2 >> 5 ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 3 ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 10 ^ (uVar2 - uVar17) - uVar16;
        uVar2 = uVar2 >> 0xf ^ uVar17 - (uVar16 + uVar2);
      }
      lVar9 = lVar9 + lVar8 * 0x14;
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + 0x10) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0xc) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar15 = (int)uVar3;
      lVar9 = (longlong)iVar15;
      uVar2 = puVar10[lVar9] & uVar12;
      if (uVar2 == 0) {
        iVar13 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar13 = iVar6 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar15) {
          iVar14 = iVar15;
        }
        if (iVar13 <= iVar15) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar9 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar14 - lVar9 == lVar8) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar15 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar6);
  }
  return;
}



// FUNCTION 140961abc FUN_140961abc body=1905 status=ok
// SIG undefined FUN_140961abc(void)

void FUN_140961abc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  ushort *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  PSRWLOCK pRVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  byte *local_e8;
  code **local_e0;
  undefined1 local_d8;
  longlong local_d0;
  PSRWLOCK local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  longlong lStack_a0;
  longlong local_98;
  byte local_89;
  code *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1448f8448();
  lVar14 = *(longlong *)(param_1 + 0x288);
  if (lVar14 == 0) goto LAB_140961c54;
  if (*(char *)(lVar14 + 0x368) == '\x01') {
    FUN_140962e5c(param_1);
    lVar14 = *(longlong *)(param_1 + 0x288);
    if (lVar14 == 0) goto LAB_140961c54;
  }
  if (*(int *)(param_1 + 0x208) == 0) goto LAB_140961c54;
  FUN_1448d5e3c(&local_88,param_1 + 0x208);
  lVar13 = *(longlong *)(local_88 + 0x100);
  pRVar15 = (PSRWLOCK)(lVar13 + 0x58);
  AcquireSRWLockShared(pRVar15);
  plVar4 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_80 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (*(int *)(lVar14 + 0x404) != *(int *)(lVar13 + 0xc)) {
    *(undefined1 *)(lVar14 + 0x400) = *(undefined1 *)(lVar13 + 8);
    *(undefined4 *)(lVar14 + 0x404) = *(undefined4 *)(lVar13 + 0xc);
    puVar5 = *(ushort **)(lVar14 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar14 + 0x78) & 0x3f));
    }
  }
  FUN_1448d5e3c(&local_88,param_1 + 0x208);
  plVar4 = *(longlong **)(local_88 + 0x50);
  local_b8 = (PSRWLOCK)(plVar4 + 0x40);
  AcquireSRWLockShared(local_b8);
  plVar12 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_c8 = pRVar15;
  if ((int)plVar4[2] == *(int *)(param_1 + 0x298)) {
LAB_140961bbc:
    bVar8 = false;
  }
  else {
    *(int *)(param_1 + 0x298) = (int)plVar4[2];
    if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_140961bbc;
    lVar13 = *(longlong *)(param_1 + 0x288) + 0xb0;
    bVar8 = true;
    FUN_14096222e(lVar13,1,plVar4);
    if ((longlong)(int)plVar4[1] != 0) {
      lVar16 = *plVar4;
      lVar11 = (longlong)(int)plVar4[1] * 0xb8;
      do {
        FUN_1409624b4(lVar13,lVar16);
        lVar16 = lVar16 + 0xb8;
        lVar11 = lVar11 + -0xb8;
      } while (lVar11 != 0);
    }
  }
  if ((int)plVar4[5] == *(int *)(param_1 + 0x29c)) {
LAB_140961bcf:
    bVar9 = false;
  }
  else {
    *(int *)(param_1 + 0x29c) = (int)plVar4[5];
    if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_140961bcf;
    lVar13 = *(longlong *)(param_1 + 0x288) + 0xb0;
    FUN_14096222e(lVar13,2,plVar4 + 3);
    bVar9 = true;
    if ((longlong)(int)plVar4[4] != 0) {
      lVar16 = plVar4[3];
      lVar11 = (longlong)(int)plVar4[4] * 0xb8;
      do {
        FUN_1409624b4(lVar13,lVar16);
        lVar16 = lVar16 + 0xb8;
        lVar11 = lVar11 + -0xb8;
      } while (lVar11 != 0);
    }
  }
  if ((int)plVar4[8] == *(int *)(param_1 + 0x2a0)) {
LAB_140961be1:
    bVar7 = false;
  }
  else {
    *(int *)(param_1 + 0x2a0) = (int)plVar4[8];
    if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_140961be1;
    lVar13 = *(longlong *)(param_1 + 0x288) + 0xb0;
    FUN_14096222e(lVar13,4,plVar4 + 6);
    bVar7 = true;
    if ((longlong)(int)plVar4[7] != 0) {
      lVar16 = plVar4[6];
      lVar11 = (longlong)(int)plVar4[7] * 0xb8;
      local_d0 = lVar14;
      do {
        FUN_1409624b4(lVar13,lVar16);
        lVar16 = lVar16 + 0xb8;
        lVar11 = lVar11 + -0xb8;
        lVar14 = local_d0;
      } while (lVar11 != 0);
    }
  }
  if ((int)plVar4[0xb] == *(int *)(param_1 + 0x2a4)) {
LAB_140961bf4:
    bVar6 = false;
  }
  else {
    *(int *)(param_1 + 0x2a4) = (int)plVar4[0xb];
    if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_140961bf4;
    local_c0 = *(longlong *)(param_1 + 0x288) + 0xc0;
    local_d0 = lVar14;
    FUN_140962ab2(local_c0,plVar4 + 9);
    bVar6 = true;
    lVar14 = local_d0;
    if ((longlong)(int)plVar4[10] != 0) {
      lVar13 = plVar4[9];
      lVar16 = (longlong)(int)plVar4[10] * 0xb8;
      do {
        FUN_1409624b4(local_c0,lVar13);
        lVar13 = lVar13 + 0xb8;
        lVar16 = lVar16 + -0xb8;
        lVar14 = local_d0;
      } while (lVar16 != 0);
    }
  }
  if ((int)plVar4[0xe] == *(int *)(param_1 + 0x2a8)) {
LAB_140961c07:
    pRVar15 = local_c8;
    if (((bVar8 || bVar9) || bVar7) || bVar6) goto LAB_140962022;
  }
  else {
    *(int *)(param_1 + 0x2a8) = (int)plVar4[0xe];
    if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_140961c07;
    lVar13 = *(longlong *)(param_1 + 0x288) + 0xc0;
    FUN_140962ab2(lVar13,plVar4 + 0xc);
    pRVar15 = local_c8;
    if ((longlong)(int)plVar4[0xd] != 0) {
      lVar16 = plVar4[0xc];
      lVar11 = (longlong)(int)plVar4[0xd] * 0xb8;
      do {
        FUN_1409624b4(lVar13,lVar16);
        lVar16 = lVar16 + 0xb8;
        lVar11 = lVar11 + -0xb8;
      } while (lVar11 != 0);
    }
LAB_140962022:
    lVar13 = *(longlong *)(param_1 + 0x288);
    if (((((lVar13 != 0) && (*(int *)(param_1 + 0x34) != 0)) &&
         (uVar3 = *(uint *)(param_1 + 0x30), -1 < (int)uVar3)) &&
        (((int)uVar3 < DAT_14c9647dc &&
         (plVar12 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar12 != (longlong *)0x0)))) &&
       (((int)plVar12[2] == *(int *)(param_1 + 0x34) &&
        (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar16 = *plVar12, lVar16 != 0)))))) {
      lVar11 = FUN_14020fb76();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
        local_b0 = 0;
        if (*(char *)(lVar16 + 0xcb) != '\0') {
          local_b0 = lVar16 + 0xd0;
        }
        if (local_b0 != 0) {
          lStack_a0 = lVar16 + 0x5e0;
          local_a8 = &local_b0;
          local_98 = param_1;
          if ((longlong)*(int *)(lVar13 + 0xb8) != 0) {
            lVar16 = *(longlong *)(lVar13 + 0xb0);
            lVar11 = (longlong)*(int *)(lVar13 + 0xb8) * 0x198;
            do {
              FUN_1409622da(&local_a8,lVar16,*(undefined1 *)(param_1 + 0x2c0));
              lVar16 = lVar16 + 0x198;
              lVar11 = lVar11 + -0x198;
            } while (lVar11 != 0);
          }
          if ((longlong)*(int *)(lVar13 + 200) != 0) {
            lVar16 = *(longlong *)(lVar13 + 0xc0);
            lVar13 = (longlong)*(int *)(lVar13 + 200) * 0x198;
            do {
              FUN_1409622da(&local_a8,lVar16,*(undefined1 *)(param_1 + 0x2c0));
              lVar16 = lVar16 + 0x198;
              lVar13 = lVar13 + -0x198;
            } while (lVar13 != 0);
          }
          local_78 = 0;
          local_68 = &PTR_LAB_14b9c55a0;
          local_88 = FUN_1442d917c;
          local_60 = param_1;
          FUN_1403911de(param_1);
        }
      }
    }
  }
  if ((int)plVar4[0x26] != *(int *)(param_1 + 0x2ac)) {
    *(int *)(param_1 + 0x2ac) = (int)plVar4[0x26];
    FUN_14096276c(lVar14 + 0xd0,plVar4 + 0xf);
    lVar13 = *(longlong *)(param_1 + 0x288);
    if (((((lVar13 != 0) && (*(int *)(param_1 + 0x34) != 0)) &&
         (uVar3 = *(uint *)(param_1 + 0x30), -1 < (int)uVar3)) &&
        ((((int)uVar3 < DAT_14c9647dc &&
          (plVar12 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar12 != (longlong *)0x0)) &&
         (((int)plVar12[2] == *(int *)(param_1 + 0x34) &&
          (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar16 = *plVar12, lVar16 != 0)))))))) &&
       (*(char *)(lVar16 + 0xcb) == '\x01')) {
      *(undefined1 *)(lVar13 + 0x1d0) = 0;
      if (((*(byte *)(lVar13 + 0x188) & 0xf7) != 0) && (*(char *)(param_1 + 0x2c0) == '\0')) {
        local_b0 = local_b0 & 0xffffffff00000000;
        local_e8 = &local_89;
        local_89 = 0;
        local_88 = (code *)0x0;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        uStack_70 = 0;
        local_a8 = *(ulonglong **)(lVar13 + 400);
        lStack_a0 = *(longlong *)(lVar13 + 0x198);
        local_98 = *(longlong *)(lVar13 + 0x1a0);
        local_d8 = 0;
        local_e0 = &local_88;
        bVar10 = FUN_140962b5a(lVar16 + 0xd0,&local_a8,lVar13 + 0x1a8);
        *(byte *)(lVar13 + 0x1d0) = bVar10 | local_89;
      }
      puVar5 = *(ushort **)(lVar13 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar13 + 0x78) & 0x3f));
      }
    }
  }
  if ((int)plVar4[0x3e] != *(int *)(param_1 + 0x2b0)) {
    *(int *)(param_1 + 0x2b0) = (int)plVar4[0x3e];
    FUN_14096276c(lVar14 + 0x268,plVar4 + 0x27);
    FUN_140962e5c(param_1);
  }
  ReleaseSRWLockShared(local_b8);
  ReleaseSRWLockShared(pRVar15);
LAB_140961c54:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14096222e FUN_14096222e body=172 status=ok
// SIG undefined FUN_14096222e(void)

void FUN_14096222e(longlong *param_1,char param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar5 = 0;
  bVar1 = false;
LAB_14096224b:
  uVar5 = (ulonglong)(int)uVar5;
  do {
    if (*(char *)(*param_1 + 0xb8 + uVar5 * 0x198) == param_2) {
      if ((longlong)*(int *)(param_3 + 1) == 0) break;
      plVar3 = (longlong *)*param_3;
      lVar4 = (longlong)*(int *)(param_3 + 1) * 0xb8;
      while (*(longlong *)(uVar5 * 0x198 + *param_1 + 0xb0) != *plVar3) {
        plVar3 = plVar3 + 0x17;
        lVar4 = lVar4 + -0xb8;
        if (lVar4 == 0) goto LAB_1409622b4;
      }
      if (plVar3 == (longlong *)0x0) break;
    }
    uVar5 = uVar5 + 1;
    if ((longlong)iVar2 <= (longlong)uVar5) {
      if (!bVar1) {
        return;
      }
      goto LAB_1409622c9;
    }
  } while( true );
LAB_1409622b4:
  FUN_140963126(param_1,uVar5 & 0xffffffff);
  iVar2 = (int)param_1[1];
  bVar1 = true;
  if (iVar2 <= (int)uVar5) {
LAB_1409622c9:
    FUN_14096308a(param_1);
    return;
  }
  goto LAB_14096224b;
}



// FUNCTION 1409622da FUN_1409622da body=472 status=ok
// SIG undefined FUN_1409622da(void)

void FUN_1409622da(undefined8 *param_1,longlong param_2,byte param_3)

{
  double dVar1;
  byte bVar2;
  undefined1 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  byte *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  byte local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 0xb8) & 0xf7) == 0) {
    *(undefined1 *)(param_2 + 0x100) = 0;
    *(undefined1 *)(param_2 + 0x103) = 0;
  }
  else {
    *(byte *)(param_2 + 0x100) = param_3 ^ 1;
    *(undefined1 *)(param_2 + 0x103) = 0;
    if (param_3 == 0) {
      local_68 = &local_1c;
      local_1c = 0;
      local_60 = &local_1d;
      local_1d = 0;
      *(double *)(param_2 + 0x140) = *(double *)(param_2 + 0x140) - *(double *)param_1[1];
      *(double *)(param_2 + 0x148) = *(double *)(param_2 + 0x148) - *(double *)(param_1[1] + 8);
      local_28 = *(undefined8 *)(param_2 + 0x150);
      local_38 = *(undefined8 *)(param_2 + 0x140);
      uStack_30 = *(undefined8 *)(param_2 + 0x148);
      local_58 = *(undefined4 *)(param_2 + 0xc0);
      uStack_54 = *(undefined4 *)(param_2 + 0xc4);
      uStack_50 = *(undefined4 *)(param_2 + 200);
      uStack_4c = *(undefined4 *)(param_2 + 0xcc);
      local_48 = *(undefined8 *)(param_2 + 0xd0);
      bVar2 = FUN_14020febe(*(undefined8 *)*param_1,&local_58,&local_38,param_2 + 0xd8);
      bVar2 = bVar2 ^ 1 | local_1d;
      *(byte *)(param_2 + 0x103) = bVar2;
      uVar3 = 1;
      if (bVar2 == 0) {
        uVar3 = *(undefined1 *)(param_2 + 0x105);
      }
      *(undefined1 *)(param_2 + 0x106) = uVar3;
      if (bVar2 != 0) {
        dVar5 = *(double *)(param_2 + 0xe0) + -50.0;
        dVar1 = *(double *)(param_2 + 0xd8) + -50.0;
        dVar6 = dVar1 * dVar1 + dVar5 * dVar5;
        if (9.99999993922529e-09 < dVar6) {
          dVar1 = dVar1 * (1.0 / SQRT(dVar6));
        }
        else {
          dVar1 = 0.0;
        }
        dVar5 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar6) & 0x8000000000000000 |
                        (ulonglong)((1.0 / SQRT(dVar6)) * -dVar5) &
                        -(ulonglong)(9.99999993922529e-09 < dVar6));
        if ((((dVar1 != 0.0) || (NAN(dVar1))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
          dVar1 = atan2(dVar1,dVar5);
          fVar4 = (float)(dVar1 * 57.29577951308232);
        }
        else {
          fVar4 = 0.0;
        }
        *(float *)(param_2 + 0xe8) = fVar4;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409624b4 FUN_1409624b4 body=673 status=ok
// SIG undefined FUN_1409624b4(void)

void FUN_1409624b4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_1d8 [32];
  undefined **local_1b8 [22];
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined5 uStack_94;
  undefined3 uStack_8f;
  undefined5 uStack_8c;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x198;
    do {
      if (((char)param_2[2] == *(char *)(lVar3 + 0xb8)) && (*param_2 == *(longlong *)(lVar3 + 0xb0))
         ) {
        if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
        }
        break;
      }
      lVar3 = lVar3 + 0x198;
      lVar2 = lVar2 + -0x198;
    } while (lVar2 != 0);
  }
  FUN_1408f3f9e(local_1b8);
  local_1b8[0] = &PTR_FUN_14b8d7670;
  local_108 = 0;
  local_100 = 0;
  local_f8 = DAT_14c8464e0;
  uStack_f0 = DAT_14c8464e8;
  local_e8 = DAT_14c8464f0;
  local_e0 = DAT_14c8463f0;
  uStack_d8 = DAT_14c8463f8;
  local_d0 = 0;
  local_c8 = DAT_14c846320;
  uStack_c0 = DAT_14c846328;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  uStack_8f = 0;
  uStack_8c = 0;
  local_84 = 0x3f800000;
  local_80 = 0;
  local_78 = 0x3fdcccccc0000000;
  local_70 = 0x3fd1eb8520000000;
  local_68 = 0x4010000000000000;
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
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  local_58 = DAT_14c844848;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_108 = *param_2;
  FUN_14096276c(local_1b8,param_2);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140963294(param_1,iVar1);
  }
  FUN_140963406((longlong)iVar1 * 0x198 + *param_1,local_1b8);
  FUN_140963198(local_1b8);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096276c FUN_14096276c body=836 status=ok
// SIG undefined FUN_14096276c(void)

void FUN_14096276c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = *(byte *)(param_2 + 0x10);
  *(byte *)(param_1 + 0xb8) = bVar4;
  lVar12 = (ulonglong)bVar4 * 0x10;
  iVar5 = *(int *)(DAT_14cbdc338 + 8 + lVar12);
  iVar13 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar13 = 0;
  }
  FUN_1402980a2(param_1 + 0x178,*(undefined8 *)(DAT_14cbdc338 + lVar12),iVar13);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 200) = uVar8;
  *(undefined4 *)(param_1 + 0xcc) = uVar9;
  puVar3 = (undefined8 *)(param_1 + 0x168);
  if (puVar3 != (undefined8 *)(param_2 + 0x70)) {
    iVar5 = *(int *)(param_2 + 0x78);
    pvVar6 = *(void **)(param_2 + 0x70);
    *(int *)(param_1 + 0x170) = iVar5;
    if (iVar5 == 0 && *(int *)(param_1 + 0x174) == 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*puVar3,pvVar6,(longlong)iVar5 * 2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x50);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x148) = uVar10;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_140407a00(&local_48,*(undefined4 *)(param_2 + 0x58),0);
  FUN_140008f88(param_1 + 0x158,&local_48);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  plVar11 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  *(undefined4 *)(param_1 + 0xf8) = uVar8;
  *(undefined4 *)(param_1 + 0xfc) = uVar9;
  puVar3 = (undefined8 *)(param_1 + 0x188);
  if (puVar3 != (undefined8 *)(param_2 + 0x60)) {
    iVar5 = *(int *)(param_2 + 0x68);
    pvVar6 = *(void **)(param_2 + 0x60);
    *(int *)(param_1 + 400) = iVar5;
    if (iVar5 == 0 && *(int *)(param_1 + 0x194) == 0) {
      *(undefined4 *)(param_1 + 0x194) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*puVar3,pvVar6,(longlong)iVar5 * 2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x82);
  *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(param_2 + 0x81);
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x107) = *(undefined1 *)(param_2 + 0x85);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x86);
  FUN_144a2b0a4(param_2 + 0x98,&local_48);
  if ((longlong **)(param_1 + 0x110) == &local_48) {
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_1 + 0x110) = local_48;
    local_48 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x118) = local_40;
    *(undefined4 *)(param_1 + 0x11c) = local_3c;
  }
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0xac);
  puVar3 = (undefined8 *)(param_1 + 0x120);
  if (puVar3 != (undefined8 *)(param_2 + 0x88)) {
    iVar5 = *(int *)(param_2 + 0x90);
    pvVar6 = *(void **)(param_2 + 0x88);
    *(int *)(param_1 + 0x128) = iVar5;
    if (iVar5 == 0 && *(int *)(param_1 + 300) == 0) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*puVar3,pvVar6,(longlong)iVar5 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0xb0);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140962ab2 FUN_140962ab2 body=168 status=ok
// SIG undefined FUN_140962ab2(void)

void FUN_140962ab2(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  uVar2 = 0;
  bVar1 = false;
  do {
    uVar2 = (ulonglong)(int)uVar2;
    while (*(int *)(param_2 + 1) != 0) {
      plVar4 = (longlong *)*param_2;
      lVar5 = (longlong)*(int *)(param_2 + 1) * 0xb8;
      while (*(longlong *)(*param_1 + 0xb0 + uVar2 * 0x198) != *plVar4) {
        plVar4 = plVar4 + 0x17;
        lVar5 = lVar5 + -0xb8;
        if (lVar5 == 0) goto LAB_140962b32;
      }
      if (plVar4 == (longlong *)0x0) break;
      uVar2 = uVar2 + 1;
      if ((longlong)iVar3 <= (longlong)uVar2) {
        if (!bVar1) {
          return;
        }
        goto LAB_140962b47;
      }
    }
LAB_140962b32:
    FUN_140963126(param_1,uVar2 & 0xffffffff);
    iVar3 = (int)param_1[1];
    bVar1 = true;
    if (iVar3 <= (int)uVar2) {
LAB_140962b47:
      FUN_14096308a(param_1);
      return;
    }
  } while( true );
}



// FUNCTION 140962b5a FUN_140962b5a body=768 status=ok
// SIG undefined FUN_140962b5a(void)

bool FUN_140962b5a(double *param_1,double *param_2,double *param_3,float *param_4,byte *param_5,
                  double *param_6,char param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1 == (double *)0x0) {
    bVar2 = false;
  }
  else {
    FUN_14012d55c(param_1,&local_f8);
    dVar3 = *param_2;
    dVar5 = param_2[1];
    dVar1 = param_2[2];
    local_80 = local_e0 * dVar3 + local_c0 * dVar5 + local_a0 * dVar1 + local_80;
    bVar2 = 0.0 < local_80;
    *param_4 = (float)SQRT((dVar1 - param_1[2]) * (dVar1 - param_1[2]) +
                           (dVar5 - param_1[1]) * (dVar5 - param_1[1]) +
                           (dVar3 - *param_1) * (dVar3 - *param_1));
    if (9.99999993922529e-09 < ABS(local_80)) {
      fVar6 = (float)((local_98 + dVar1 * local_b8 + dVar5 * local_d8 + dVar3 * local_f8) *
                      (double)(float)(1.0 / local_80) * 0.5 + 0.5);
      fVar4 = (float)((dStack_90 + dVar1 * dStack_b0 + dVar5 * dStack_d0 + dVar3 * dStack_f0) *
                      (double)(float)(1.0 / local_80) * -0.5 + 1.0 + -0.5);
      *param_5 = (-(fVar4 < 0.0) | -(1.0 < fVar4) | -(fVar6 < 0.0) | -(1.0 < fVar6)) & 1;
      if (param_7 == '\0') {
        *param_3 = (double)(fVar6 * 100.0);
        dVar3 = (double)(fVar4 * 100.0);
      }
      else {
        dVar3 = (double)fVar6;
        if (1.0 - param_6[1] <= (double)fVar6) {
          dVar3 = 1.0 - param_6[1];
        }
        if (dVar3 <= *param_6) {
          dVar3 = *param_6;
        }
        if (local_80 <= 0.0) {
          *param_3 = (double)(100.0 - (float)dVar3 * 100.0);
          dVar3 = (1.0 - param_6[3]) * 100.0;
        }
        else {
          dVar5 = (double)fVar4;
          if (1.0 - param_6[3] <= (double)fVar4) {
            dVar5 = 1.0 - param_6[3];
          }
          if (dVar5 <= param_6[2]) {
            dVar5 = param_6[2];
          }
          *param_3 = (double)((float)dVar3 * 100.0);
          dVar3 = (double)((float)dVar5 * 100.0);
        }
      }
      param_3[1] = dVar3;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140962e5c FUN_140962e5c body=557 status=ok
// SIG undefined FUN_140962e5c(void)

void FUN_140962e5c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  byte bVar4;
  longlong *plVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_6d;
  float local_6c;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((((((lVar1 != 0) && (*(int *)(param_1 + 0x34) != 0)) &&
        (uVar6 = *(uint *)(param_1 + 0x30), -1 < (int)uVar6)) &&
       (((int)uVar6 < DAT_14c9647dc &&
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0)))) &&
      (((int)plVar5[2] == *(int *)(param_1 + 0x34) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))))) &&
     (*(char *)(lVar2 + 0xcb) == '\x01')) {
    *(undefined1 *)(lVar1 + 0x368) = 0;
    if (((*(byte *)(lVar1 + 800) & 0xf7) != 0) && (*(char *)(param_1 + 0x2c0) == '\0')) {
      local_6c = 0.0;
      local_c8 = &local_6d;
      local_6d = '\0';
      local_a0 = (double)*(float *)(lVar1 + 0x374) + *(double *)(lVar1 + 0x338);
      local_b0 = *(undefined4 *)(lVar1 + 0x328);
      uStack_ac = *(undefined4 *)(lVar1 + 0x32c);
      uStack_a8 = *(undefined4 *)(lVar1 + 0x330);
      uStack_a4 = *(undefined4 *)(lVar1 + 0x334);
      local_c0 = &local_98;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_b8 = 1;
      bVar4 = FUN_140962b5a(lVar2 + 0xd0,&local_b0,lVar1 + 0x340,&local_6c);
      *(byte *)(lVar1 + 0x368) = bVar4;
      bVar4 = (local_6d == '\0' && local_6c <= *(float *)(param_1 + 0x2b4)) & bVar4;
      *(byte *)(lVar1 + 0x368) = bVar4;
      if (bVar4 != 0) {
        uVar6 = -(uint)(*(float *)(param_1 + 0x2b4) != 0.0);
        fVar8 = (1.0 - local_6c /
                       (float)(~uVar6 & 0x3f800000 | (uint)*(float *)(param_1 + 0x2b4) & uVar6)) *
                *(float *)(param_1 + 700);
        fVar7 = *(float *)(param_1 + 0x2b8);
        if (*(float *)(param_1 + 0x2b8) <= fVar8) {
          fVar7 = fVar8;
        }
        dVar3 = DAT_14c846328 * (double)fVar7;
        *(double *)(lVar1 + 0x358) =
             (double)fVar7 * DAT_14c846320 * (double)*(float *)(lVar1 + 0x39c);
        *(double *)(lVar1 + 0x360) = dVar3 * (double)*(float *)(lVar1 + 0x39c);
      }
    }
    local_58 = 0;
    local_48 = &PTR_LAB_14b9c55c0;
    local_68 = FUN_1442d9460;
    local_40 = param_1;
    FUN_1403911de(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096308a FUN_14096308a body=156 status=ok
// SIG undefined FUN_14096308a(void)

void FUN_14096308a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x198)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x198,8);
      uVar3 = uVar3 / 0x198;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x198,8);
    }
  }
  return;
}



// FUNCTION 140963126 FUN_140963126 body=114 status=ok
// SIG undefined FUN_140963126(void)

void FUN_140963126(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x198 + lVar1);
  FUN_140963198(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x198),(longlong)iVar3 * 0x198);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 140963198 FUN_140963198 body=252 status=ok
// SIG undefined FUN_140963198(void)

void FUN_140963198(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8d7670;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140963294 FUN_140963294 body=369 status=ok
// SIG undefined FUN_140963294(void)

void FUN_140963294(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x198;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14096331c;
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
LAB_14096331c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x198)) {
    uVar7 = uVar5 / 0x198 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x198,8);
  return;
}



// FUNCTION 140963406 FUN_140963406 body=602 status=ok
// SIG undefined FUN_140963406(void)

undefined8 * FUN_140963406(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  FUN_14042a9ce();
  *param_1 = &PTR_FUN_14b8d7670;
  puVar12 = (undefined8 *)(param_2 + 0xb0);
  puVar13 = param_1 + 0x16;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  param_1[0x22] = 0;
  iVar1 = *(int *)(param_2 + 0x118);
  pvVar2 = *(void **)(param_2 + 0x110);
  *(int *)(param_1 + 0x23) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x22,iVar1,0);
    memcpy((void *)param_1[0x22],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x24] = 0;
  iVar1 = *(int *)(param_2 + 0x128);
  pvVar2 = *(void **)(param_2 + 0x120);
  *(int *)(param_1 + 0x25) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x24,iVar1,0);
    memcpy((void *)param_1[0x24],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  uVar4 = *(undefined4 *)(param_2 + 0x130);
  uVar5 = *(undefined4 *)(param_2 + 0x134);
  uVar6 = *(undefined4 *)(param_2 + 0x138);
  uVar7 = *(undefined4 *)(param_2 + 0x13c);
  uVar8 = *(undefined4 *)(param_2 + 0x144);
  uVar9 = *(undefined4 *)(param_2 + 0x148);
  uVar10 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar8;
  *(undefined4 *)(param_1 + 0x29) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar10;
  *(undefined4 *)(param_1 + 0x26) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar5;
  *(undefined4 *)(param_1 + 0x27) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar7;
  plVar3 = *(longlong **)(param_2 + 0x158);
  param_1[0x2b] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x160);
  param_1[0x2d] = 0;
  iVar1 = *(int *)(param_2 + 0x170);
  pvVar2 = *(void **)(param_2 + 0x168);
  *(int *)(param_1 + 0x2e) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2d,iVar1,0);
    memcpy((void *)param_1[0x2d],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x2f] = 0;
  iVar1 = *(int *)(param_2 + 0x180);
  pvVar2 = *(void **)(param_2 + 0x178);
  *(int *)(param_1 + 0x30) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2f,iVar1,0);
    memcpy((void *)param_1[0x2f],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x31] = 0;
  iVar1 = *(int *)(param_2 + 400);
  pvVar2 = *(void **)(param_2 + 0x188);
  *(int *)(param_1 + 0x32) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x31,iVar1,0);
    memcpy((void *)param_1[0x31],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 140963660 FUN_140963660 body=420 status=ok
// SIG undefined FUN_140963660(void)

void FUN_140963660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  FUN_14066e964();
  lVar2 = FUN_140343d7a(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_1407ca880();
    lVar4 = FUN_144718840(lVar2,uVar3);
    if (lVar4 != 0) {
      uVar6 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar1 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar1 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar1 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar1 = iVar5;
        }
      }
      goto LAB_1409636de;
    }
  }
  uVar6 = 0;
  lVar4 = 0;
  iVar1 = 0;
LAB_1409636de:
  *(uint *)(param_1 + 0xe8) = uVar6;
  *(int *)(param_1 + 0xec) = iVar1;
  *(longlong *)(param_1 + 0xf0) = lVar4;
  if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x90) == 0) {
    lVar2 = FUN_140963804(*(longlong *)(param_1 + 0x48) + 0x80,lVar2);
    if (lVar2 == 0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      iVar1 = 0;
    }
    else {
      uVar6 = *(uint *)(lVar2 + 0xc);
      *(uint *)(param_1 + 0xe0) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar1 = *(int *)(lVar2 + 0x10);
        bVar8 = iVar1 == 0;
        if (bVar8) {
          *(int *)(lVar2 + 0x10) = iVar5;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar1 = iVar5;
        }
      }
    }
    *(int *)(param_1 + 0xe4) = iVar1;
  }
  return;
}



// FUNCTION 140963804 FUN_140963804 body=462 status=ok
// SIG undefined FUN_140963804(void)

undefined8 FUN_140963804(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  void *pvStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 2) == 1) {
    plVar4 = (longlong *)FUN_1409639d4(param_2);
    if (plVar4 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      if ((char)plVar4[0x36] == '\0') {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar4 + 0x2c);
        *(undefined1 *)(plVar4 + 0x36) = 1;
      }
      if ((int)plVar4[0x2d] != *(int *)((longlong)plVar4 + 0x194)) {
        lVar3 = param_1[1];
        uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar8 = (uint)lVar3 & 0xffff;
        plVar7 = plVar4 + 0x33;
        if ((longlong *)plVar4[0x34] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[0x34];
        }
        iVar6 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)plVar4[0x35] - 1U &
                        (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = plVar4[0x2c] + (longlong)iVar6 * 0x38;
            if (*(longlong *)(plVar4[0x2c] + (longlong)iVar6 * 0x38) == lVar3) {
              if (lVar1 != 0) {
                local_48 = *(undefined8 *)(lVar1 + 8);
                uStack_40 = *(undefined8 *)(lVar1 + 0x10);
                uStack_38 = *(undefined8 *)(lVar1 + 0x18);
                pvStack_30 = (void *)0x0;
                uVar2 = *(uint *)(lVar1 + 0x28);
                _Src = *(void **)(lVar1 + 0x20);
                local_28 = CONCAT44(local_28._4_4_,uVar2);
                if ((longlong)(int)uVar2 == 0) {
                  local_28 = (ulonglong)uVar2;
                }
                else {
                  FUN_1446dd670(&pvStack_30,uVar2,0);
                  memcpy(pvStack_30,_Src,(longlong)(int)uVar2 * 2);
                }
                goto LAB_140963916;
              }
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x30);
          } while (iVar6 != -1);
        }
      }
      uStack_38 = 0;
      pvStack_30 = (void *)0x0;
      local_48 = 0;
      uStack_40 = 0;
      local_28 = 0;
LAB_140963916:
      uVar5 = FUN_140963a30(&local_48);
      if (pvStack_30 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar5 = *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409639d4 FUN_1409639d4 body=91 status=ok
// SIG undefined FUN_1409639d4(void)

undefined8 FUN_1409639d4(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140963a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x60))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140963a30 FUN_140963a30 body=398 status=ok
// SIG undefined FUN_140963a30(void)

longlong FUN_140963a30(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_14053ad22();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140963bbe FUN_140963bbe body=140 status=ok
// SIG undefined FUN_140963bbe(void)

void FUN_140963bbe(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar2 = (longlong *)0x0;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  FUN_14020684a(param_1);
  lVar1 = (**(code **)(*param_1 + 0x638))(param_1);
  if (((lVar1 != 0) && ((longlong *)param_1[0x39] != (longlong *)0x0)) &&
     (*(char *)(lVar1 + 0x18c) == '\x01')) {
    (**(code **)(*(longlong *)param_1[0x39] + 0x540))();
                    /* WARNING: Could not recover jumptable at 0x000140963c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xb8))(lVar1 + 0x178,param_1);
    return;
  }
  return;
}



// FUNCTION 140963c50 FUN_140963c50 body=102 status=ok
// SIG undefined FUN_140963c50(void)

void FUN_140963c50(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140963cb8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140963cb8 FUN_140963cb8 body=228 status=ok
// SIG undefined FUN_140963cb8(void)

longlong FUN_140963cb8(void)

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
  if (DAT_14cad1b20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145959ece;
    local_38 = &LAB_1479e9a0b;
    local_40 = FUN_1463b9a00;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x1e0;
    FUN_14081cfa3(L"/Script/Engine",L"PawnMovementComponent",&DAT_14cad1b20,FUN_1463b99de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140963d9e FUN_140963d9e body=3422 status=ok
// SIG undefined FUN_140963d9e(void)

undefined8 * FUN_140963d9e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  byte bVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined ******ppppppuVar22;
  uint *puVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_178 [32];
  undefined8 **local_158;
  undefined8 *local_148;
  undefined8 *local_140;
  ulonglong *local_138;
  ulonglong uStack_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined2 local_11a;
  undefined *****local_118;
  undefined4 local_110;
  undefined1 local_10c;
  char local_10b;
  char local_10a;
  undefined1 local_109;
  undefined *****local_108;
  undefined8 local_100;
  undefined8 local_b8;
  undefined8 *local_b0;
  int7 iStack_a8;
  undefined1 uStack_a1;
  undefined8 *local_a0;
  int6 iStack_98;
  undefined2 uStack_92;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = (ulonglong *)0x0;
  cVar4 = *(char *)(param_1 + 0x67c);
  uStack_130 = 1;
  FUN_140964dfa(&local_138,0);
  puVar7 = local_138;
  FUN_140964afd(local_138);
  if (cVar4 == '\x01') {
    lVar30 = *(longlong *)(param_1 + 0x680);
    if ((lVar30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar30);
    }
    local_128 = (undefined8 *)0x0;
    FUN_14485c47a(&local_128,lVar30);
    *puVar7 = (ulonglong)local_128;
    puVar7[1] = (ulonglong)(double)(*(float *)(param_1 + 0x770) + *(float *)(param_1 + 0x770));
    puVar7[2] = (ulonglong)(double)(*(float *)(param_1 + 0x770) + *(float *)(param_1 + 0x770));
    *(float *)(puVar7 + 3) = *(float *)(param_1 + 0x674) + *(float *)(param_1 + 0x778);
    uVar9 = 0;
  }
  else {
    lVar30 = *(longlong *)(param_1 + 0x680);
    if ((lVar30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar30);
LAB_140963e20:
      uVar20 = *(uint *)(lVar30 + 0xc);
      if ((int)uVar20 < DAT_14c9647dc) {
        lVar30 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
      }
      else {
        lVar30 = 0;
      }
      uVar29 = (ulonglong)*(uint *)(lVar30 + 0x10);
      if (*(uint *)(lVar30 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        uVar24 = DAT_14c964868 + 1;
        bVar31 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar31) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar24);
        }
        LOCK();
        uVar10 = *(uint *)(lVar30 + 0x10);
        bVar31 = uVar10 == 0;
        if (bVar31) {
          *(uint *)(lVar30 + 0x10) = uVar24;
          uVar10 = 0;
        }
        UNLOCK();
        if (bVar31) {
          uVar10 = uVar24;
        }
        uVar29 = (ulonglong)uVar10;
      }
    }
    else {
      if (lVar30 != 0) goto LAB_140963e20;
      uVar20 = 0;
      uVar29 = 0;
    }
    *puVar7 = (ulonglong)uVar20 | uVar29 << 0x20;
    dVar3 = *(double *)(param_1 + 0x6e8);
    puVar7[1] = (ulonglong)(*(double *)(param_1 + 0x6e0) * 0.5);
    puVar7[2] = (ulonglong)(dVar3 * 0.5);
    *(float *)(puVar7 + 3) = *(float *)(param_1 + 0x674) + *(float *)(param_1 + 0x778);
    uVar9 = *(undefined1 *)(param_1 + 0x670);
  }
  *(undefined1 *)((longlong)puVar7 + 0x1c) = uVar9;
  puVar14 = (undefined8 *)FUN_14001cc68(0x5f0,0x10);
  iVar13 = 0;
  FUN_1406ff4f8(puVar14,param_1,0);
  puVar7 = local_138;
  *puVar14 = &PTR_FUN_14b97a3b0;
  *(undefined4 *)(puVar14 + 0x54) = 0xffffffff;
  *(undefined2 *)((longlong)puVar14 + 0x2a4) = 0x105;
  *(undefined1 *)((longlong)puVar14 + 0x2a6) = 0;
  puVar14[0x53] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(puVar14 + 0x56) = 0xffffffff;
  *(undefined2 *)((longlong)puVar14 + 0x2b4) = 0x105;
  *(undefined1 *)((longlong)puVar14 + 0x2b6) = 0;
  puVar14[0x57] = 0;
  puVar14[0x55] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(puVar14 + 0x59) = 0xffffffff;
  *(undefined2 *)((longlong)puVar14 + 0x2cc) = 0x105;
  *(undefined1 *)((longlong)puVar14 + 0x2ce) = 0;
  puVar14[0x5a] = 0;
  puVar14[0x58] = &DAT_14aa6dc00;
  puVar14[0x5b] = 0;
  puVar14[0x5c] = 0;
  puVar14[0x5d] = 0;
  puVar14[0x5e] = 0;
  puVar14[0x5f] = 0;
  puVar14[0x60] = 0;
  puVar14[0x62] = 0;
  *(undefined2 *)(puVar14 + 99) = 0;
  *(undefined1 *)((longlong)puVar14 + 0x31a) = 1;
  *(undefined4 *)(puVar14 + 0x65) = 0xffffffff;
  *(undefined2 *)((longlong)puVar14 + 0x32c) = 0x105;
  *(undefined1 *)((longlong)puVar14 + 0x32e) = 0;
  puVar14[0x66] = 0;
  puVar14[100] = &PTR_FUN_14aa50910;
  puVar14[0x67] = 0;
  puVar14[0x68] = 0;
  puVar14[0x69] = 0;
  puVar14[0x6a] = 0;
  *(undefined1 *)(puVar14 + 0x6b) = 1;
  *(undefined4 *)(puVar14 + 0x6d) = 0xffffffff;
  *(undefined2 *)((longlong)puVar14 + 0x36c) = 0x105;
  *(undefined1 *)((longlong)puVar14 + 0x36e) = 0;
  puVar14[0x6e] = 0;
  puVar14[0x6c] = &PTR_FUN_14aa61a50;
  puVar14[0x6f] = 0;
  puVar14[0x70] = 0;
  puVar14[0x71] = 0;
  puVar14[0x72] = 0;
  *(undefined1 *)(puVar14 + 0x73) = 1;
  puVar14[0x74] = 0;
  lVar30 = (longlong)(int)uStack_130;
  *(int *)(puVar14 + 0x75) = (int)uStack_130;
  if (lVar30 == 0) {
    *(undefined4 *)((longlong)puVar14 + 0x3ac) = 0;
  }
  else {
    FUN_140964efa(puVar14 + 0x74,uStack_130 & 0xffffffff);
    memcpy((void *)puVar14[0x74],puVar7,lVar30 << 5);
    iVar13 = *(int *)(puVar14 + 0x75);
  }
  puVar15 = puVar14 + 0x53;
  puVar26 = puVar14 + 100;
  local_148 = puVar14 + 0x6c;
  puVar14[0x76] = 0;
  *(undefined4 *)(puVar14 + 0x78) = 0xffffffff;
  uVar9 = *(undefined1 *)(puVar14[0x42] + 8);
  *(undefined4 *)(puVar14 + 0x7a) = 0xffffffff;
  *(undefined1 *)((longlong)puVar14 + 0x3d4) = uVar9;
  *(undefined2 *)((longlong)puVar14 + 0x3d5) = 1;
  puVar14[0x8b] = 0;
  puVar14[0x8c] = 0x800000000;
  puVar14[0x91] = 0;
  puVar14[0x92] = 0x200000000;
  puVar14[0x99] = 0;
  puVar14[0x9a] = 0x300000000;
  puVar14[0x9b] = 0;
  puVar14[0x9c] = 0;
  puVar14[0x9d] = 0;
  *(undefined4 *)(puVar14 + 0x9e) = 0x1ffffff;
  puVar14[0x79] = &PTR_FUN_14a1ca480;
  *(undefined4 *)(puVar14 + 0xad) = 0;
  puVar14[0x9f] = 0;
  puVar14[0xa0] = 0;
  puVar14[0xa1] = 0;
  puVar14[0xa2] = 0;
  puVar14[0xa3] = 0;
  puVar14[0xa4] = 0;
  *(undefined4 *)((longlong)puVar14 + 0x56c) = 4;
  puVar14[0xae] = 0;
  puVar14[0xaf] = 0;
  puVar14[0xb0] = 0;
  puVar14[0xb1] = 0;
  puVar14[0xb2] = 0;
  puVar14[0xb3] = 0;
  puVar14[0xb4] = 0;
  puVar14[0xb5] = 0;
  *(undefined4 *)(puVar14 + 0xb6) = 0xffffffff;
  *(undefined2 *)((longlong)puVar14 + 0x5b4) = 0xff;
  *(undefined1 *)((longlong)puVar14 + 0x5b6) = 0;
  puVar14[0xb7] = 0;
  puVar14[0xb8] = 0;
  puVar14[0xb9] = 0;
  puVar14[0xba] = 0;
  puVar14[0xbb] = 0;
  *(undefined4 *)(puVar14 + 0xbc) = 0xffffffff;
  *(undefined1 *)((longlong)puVar14 + 0x5e4) = 0;
  if (0 < iVar13) {
    lVar30 = 4;
    lVar25 = 0;
    do {
      lVar6 = puVar14[0x74];
      iVar5 = *(int *)(lVar6 + lVar30);
      if (((((iVar5 != 0) && (uVar20 = *(uint *)(lVar6 + -4 + lVar30), -1 < (int)uVar20)) &&
           ((int)uVar20 < DAT_14c9647dc)) &&
          ((puVar21 = (undefined8 *)
                      ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
           puVar21 != (undefined8 *)0x0 && (*(int *)(puVar21 + 2) == iVar5)))) &&
         ((*(uint *)(puVar21 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar21 + 1) & 0x10200000) == 0) {
          uVar18 = *puVar21;
        }
        else {
          uVar18 = 0;
        }
        FUN_14470a074(uVar18,&local_128,*(undefined4 *)(puVar14[0x42] + 8));
        puVar14[0x76] = puVar14[0x76] | (ulonglong)local_128;
        bVar19 = (byte)((ulonglong)local_128 >> 0x10);
        if (bVar19 <= *(byte *)((longlong)puVar14 + 0x3b2)) {
          bVar19 = *(byte *)((longlong)puVar14 + 0x3b2);
        }
        *(byte *)((longlong)puVar14 + 0x3b2) = bVar19;
        iVar13 = *(int *)(puVar14 + 0x75);
      }
      lVar25 = lVar25 + 1;
      lVar30 = lVar30 + 0x20;
    } while (lVar25 < iVar13);
  }
  puVar21 = puVar14 + 0x58;
  puVar2 = puVar14 + 0x79;
  FUN_1408e3634(puVar26,1,1);
  FUN_1408e36f6(puVar15,1,1,1);
  puVar28 = local_148;
  FUN_140964b22(local_148,1,1);
  lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar30 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar13 != 2) {
      local_140 = puVar21;
      if (iVar13 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        bVar31 = DVar11 == DVar12;
      }
      else {
        bVar31 = iVar13 == 0x10;
      }
      puVar21 = local_140;
      puVar28 = local_148;
      if (!bVar31) goto LAB_1409645ee;
    }
  }
  else if (iVar13 != 0x10) {
LAB_1409645ee:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar30 + 0xc60), iVar13 == 2))
      goto LAB_1409642bc;
      if (iVar13 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1409642bc;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar15 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar17 = (uint *)*puVar15;
      if (puVar17 != (uint *)0x0) goto LAB_140964758;
      while( true ) {
        uVar20 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar20 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar20 | 1;
          __tlregdtor(&LAB_14419c1e9);
        }
        lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar30 + 0x310);
        *(undefined8 *)(lVar30 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar15 = puVar16;
        FUN_140217a48(puVar15);
        puVar17 = (uint *)*puVar15;
LAB_140964758:
        puVar26 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar23 = (uint *)(puVar26 + 0x16);
        uVar20 = puVar17[0x12];
        if (puVar23 <= puVar17 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
          LOCK();
          uVar24 = *puVar17;
          *puVar17 = *puVar17 + uVar20 + 1;
          UNLOCK();
          if ((uVar24 ^ uVar20) != 0xffffffff) break;
          puVar17 = (uint *)*puVar15;
          *puVar17 = 0xffffffff;
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar15 = puVar17;
          puVar26 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
          puVar23 = (uint *)(puVar26 + 0x16);
          uVar20 = 0;
          if (puVar23 <= puVar17 + 0x4000) {
            uVar20 = 1;
            goto LAB_1409647d8;
          }
        }
      }
      uVar20 = uVar20 + 1;
LAB_1409647d8:
      *(uint **)(puVar17 + 0x10) = puVar23;
      puVar17[0x12] = uVar20;
      iVar13 = 0;
      FUN_1447247dc(puVar26,0);
      *puVar26 = &PTR_FUN_14b97a638;
      puVar26[0x15] = puVar14;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar20 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
          uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
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
      if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
      }
      puVar26[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar26[9] = puVar26;
      puVar26[10] = puVar26;
      lVar30 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar30 == 0) {
        uVar8 = 1;
        if ((char)uVar29 != '\x06') {
          uVar8 = uVar29;
        }
        uVar29 = uVar8;
        uVar18 = 0;
      }
      else {
        if ((char)uVar29 == '\x06') {
          uVar29 = *(ulonglong *)(lVar30 + 0x38) >> 0x3b;
        }
        uVar18 = *(undefined8 *)(lVar30 + 0x30);
      }
      puVar26[0xf] = uVar18;
      puVar26[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar26 + 0x1c) = iVar13;
      if (puVar26 == (undefined8 *)0x0) {
        local_128 = (undefined8 *)CONCAT71(local_128._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
        local_128 = (undefined8 *)CONCAT71(local_128._1_7_,1);
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
      local_158 = &local_128;
      local_118 = (undefined *****)0x0;
      local_108 = (undefined *****)&PTR_LAB_14b97a5f0;
      local_128 = (undefined8 *)&LAB_140cfff2a;
      local_100 = puVar14;
      FUN_14005a792(&DAT_14ca9a440,L"FNsSceneProxyInit",&DAT_14cbcd1a0);
      if (local_128 != (undefined8 *)0x0) {
        ppppppuVar22 = (undefined ******)local_118;
        if ((undefined ******)local_118 == (undefined ******)0x0) {
          ppppppuVar22 = &local_108;
        }
        (*(code *)(*ppppppuVar22)[2])();
      }
    }
    goto LAB_14096450c;
  }
LAB_1409642bc:
  FUN_14006bf18(puVar26,&DAT_14ca85100);
  FUN_140d00208(puVar15,&DAT_14ca85100);
  FUN_14006bf18(puVar28,&DAT_14ca85100);
  local_b8 = 0x400000000;
  local_b0 = (undefined8 *)0x0;
  _iStack_a8 = 0;
  local_a0 = (undefined8 *)0x0;
  _iStack_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0xff;
  uVar27 = 0;
  local_6a = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_11b = *(undefined1 *)(puVar14 + 0x6a);
  local_120 = 0;
  local_11c = 0;
  local_11a = 3;
  local_90 = puVar14[0x67];
  uStack_88 = puVar14[0x5c];
  cVar4 = *(char *)((longlong)puVar14 + 0x319);
  local_10b = cVar4 * '\b' + '\b';
  local_10a = (cVar4 != '\0') * '\t' + '\x05';
  local_110 = 0;
  local_10c = 0;
  local_109 = 4;
  local_100 = (undefined8 *)
              CONCAT17(4,(uint7)CONCAT12(local_10a,CONCAT11(local_10b,cVar4 * '\x04' + '\x04')) <<
                         0x20);
  local_128 = puVar26;
  local_118 = (undefined *****)(puVar14 + 0x55);
  local_108 = (undefined *****)(puVar14 + 0x55);
  FUN_14472d638(puVar15,puVar2,&local_128,0xffffffff);
  uVar24 = *(uint *)(puVar14 + 0x62);
  uVar20 = uVar24 - 1;
  if (0 < (int)uVar24) {
    uVar20 = 0;
  }
  local_6c = CONCAT11((char)uVar24,(char)uVar20);
  local_80 = puVar14[0x5e];
  if ((-1 < (int)uVar20) && (uVar20 < uVar24)) {
    bVar19 = *(char *)(puVar14 + 99) + 2;
    uVar9 = 0xc;
    if (*(char *)(puVar14 + 99) != '\0') {
      uVar9 = 2;
    }
    _iStack_a8 = CONCAT17(4,(uint7)CONCAT12(uVar9,CONCAT11((char)(uVar24 << (bVar19 & 0x1f)),
                                                           (char)(uVar20 << (bVar19 & 0x1f)))) <<
                            0x20);
    local_b0 = puVar21;
  }
  if (*(int *)((longlong)puVar14 + 0x394) == 0) {
    puVar15 = &DAT_14ca94db0;
    bVar19 = 0;
    local_a0 = &DAT_14ca94d98;
  }
  else {
    puVar15 = puVar14 + 0x70;
    bVar19 = *(byte *)(puVar14 + 0x72);
    uVar27 = 0xffffffff;
    local_a0 = local_148;
  }
  uStack_78 = *puVar15;
  _iStack_98 = CONCAT26(0x408,(uint6)bVar19 << 0x28);
  local_70 = uVar27;
  FUN_140ba0b60(puVar2,&DAT_14ca85100);
  FUN_14006bf18(puVar2,&DAT_14ca85100);
LAB_14096450c:
  if (local_138 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return puVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140964afd FUN_140964afd body=37 status=ok
// SIG undefined FUN_140964afd(void)

void FUN_140964afd(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3fc99999a0000000;
  param_1[2] = 0x3fc99999a0000000;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}



// FUNCTION 140964b22 FUN_140964b22 body=74 status=ok
// SIG undefined FUN_140964b22(void)

void FUN_140964b22(longlong param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x34) = param_2;
  *(char *)(param_1 + 0x38) = (char)param_3;
  FUN_140964b82(param_1,param_3);
  uVar1 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
            (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34),0);
  if (param_2 != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



// FUNCTION 140964b82 FUN_140964b82 body=94 status=ok
// SIG undefined FUN_140964b82(void)

void FUN_140964b82(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = &PTR_FUN_14aa5a670;
  *(undefined1 *)(puVar1 + 4) = param_2;
  *puVar1 = &PTR_FUN_14aa67b50;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  *(undefined4 *)(param_1 + 0x30) = 4;
  return;
}



// FUNCTION 140964be0 FUN_140964be0 body=66 status=ok
// SIG undefined FUN_140964be0(void)

undefined8 * FUN_140964be0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa67bb0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140964c22 FUN_140964c22 body=121 status=ok
// SIG undefined FUN_140964c22(void)

void FUN_140964c22(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_140964c9c(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147cc282c(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147cc3638(lVar1);
    return;
  }
  return;
}



// FUNCTION 140964c9c FUN_140964c9c body=350 status=ok
// SIG undefined FUN_140964c9c(void)

void FUN_140964c9c(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar5 = 0;
    param_2 = unaff_EDI;
    goto LAB_140964d14;
  }
  uVar3 = (longlong)param_2 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar5 = uVar6 & 0xfffffffffffffff0;
        if (uVar5 < 0x7ff1) goto LAB_140964d9b;
        goto LAB_140964d6a;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_140964d06:
  do {
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
LAB_140964d14:
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5 << 2,4);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar6 = 0;
    FUN_1467ac767();
LAB_140964d9b:
    bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140964d06;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_140964d6a:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 140964dfa FUN_140964dfa body=255 status=ok
// SIG undefined FUN_140964dfa(void)

void FUN_140964dfa(longlong param_1,int param_2)

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



// FUNCTION 140964efa FUN_140964efa body=201 status=ok
// SIG undefined FUN_140964efa(void)

void FUN_140964efa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x20;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[((longlong)param_2 & 0x7ffffffffffffffU) * 2]
                        ];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140964fc4 FUN_140964fc4 body=3628 status=ok
// SIG undefined FUN_140964fc4(void)

void FUN_140964fc4(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  double local_128;
  double local_120;
  double local_118;
  code *local_110;
  double local_108;
  double local_100;
  int local_f8;
  uint uStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_3 + 0x28) == 0) goto LAB_1409650e2;
  lVar10 = FUN_140344898();
  lVar15 = *(longlong *)(param_3 + 0x28);
  if ((((lVar15 == 0) || (lVar10 == 0)) || (lVar12 = *(longlong *)(lVar15 + 0x10), lVar12 == 0)) ||
     ((*(int *)(lVar12 + 0x38) < *(int *)(lVar10 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30)))) goto LAB_1409650e2;
  lVar10 = *(longlong *)(lVar15 + 0xe8);
  fVar20 = 0.0;
  if (lVar10 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_140 = (code **)&local_f8;
      local_f8 = 0x41030f22;
      uStack_f4 = 1;
      local_130 = FUN_14081d0ea;
      local_138 = (code *)&LAB_1459f2e4c;
      local_148 = &LAB_148c39de3;
      local_150 = (code *)&LAB_1457a9eb2;
      local_158 = L"Game";
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar10 = *(longlong *)(lVar15 + 0xe8);
      if (lVar10 == 0) goto LAB_140965201;
    }
    if (((DAT_14cbadd90 != 0) && (lVar12 = *(longlong *)(lVar10 + 0x10), lVar12 != 0)) &&
       ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar12 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         == DAT_14cbadd90 + 0x30)))) {
      cVar6 = FUN_140965df2(lVar10);
      if (cVar6 == '\0') goto LAB_1409650e2;
      plVar11 = (longlong *)FUN_14071752e(lVar10);
      if ((plVar11 == (longlong *)0x0) || (*(longlong *)(lVar15 + 0xa50) == 0)) goto LAB_140965201;
      plVar14 = *(longlong **)(lVar15 + 0xe0);
      if (plVar14 == (longlong *)0x0) goto LAB_1409650e2;
      if (DAT_14cb6fd70 == 0) {
        local_140 = (code **)&local_f8;
        local_f8 = 0x449e2820;
        uStack_f4 = 1;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_1427b09ee;
        local_148 = &LAB_1487a9cc9;
        local_150 = FUN_1465433f8;
        local_158 = L"Engine";
        local_160 = 0;
        local_168 = 0x10004001;
        local_170 = 8;
        local_178 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      lVar12 = (**(code **)(*plVar14 + 0x288))(plVar14,DAT_14cb6fd70);
      if (lVar12 == 0) goto LAB_1409650e2;
      if (DAT_14cb6fd70 == 0) {
        local_140 = (code **)&local_f8;
        local_f8 = 0x449e2820;
        uStack_f4 = 1;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_1427b09ee;
        local_148 = &LAB_1487a9cc9;
        local_150 = FUN_1465433f8;
        local_158 = L"Engine";
        local_160 = 0;
        local_168 = 0x10004001;
        local_170 = 8;
        local_178 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      lVar13 = FUN_144718840(lVar12,DAT_14cb6fd70);
      if ((lVar12 == lVar13) || (lVar13 == 0)) goto LAB_1409650e2;
      fVar20 = (float)FUN_14023bf44(lVar13);
      if ((fVar20 <= 1.0) &&
         (*(float *)(param_1 + 0x18) <= fVar20 && fVar20 != *(float *)(param_1 + 0x18))) {
        lVar12 = (**(code **)(*plVar11 + 0x30))(plVar11);
        if (((*(int *)(lVar12 + 0xc0) == 0) || (*(int *)(lVar12 + 0x80) < 1)) ||
           (piVar1 = *(int **)(lVar12 + 0x78), *piVar1 == 0x7fffffff)) {
          local_f8 = 0x7fffffff;
          uStack_f4 = 0;
          iStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          plStack_d0 = (longlong *)0x0;
        }
        else {
          local_f8 = *piVar1;
          uStack_f4 = piVar1[1];
          iStack_f0 = piVar1[2];
          iStack_ec = piVar1[3];
          local_e8 = *(undefined8 *)(piVar1 + 4);
          uStack_e0 = *(undefined8 *)(piVar1 + 6);
          local_d8 = *(undefined8 *)(piVar1 + 8);
          plStack_d0 = *(longlong **)(piVar1 + 10);
        }
        plVar11 = *(longlong **)(lVar15 + 0xe0);
        if (plVar11 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_140 = &local_110;
            local_110 = FUN_1449e2820;
            local_130 = FUN_14081d0ea;
            local_138 = FUN_1427b09ee;
            local_148 = &LAB_147f29feb;
            local_150 = FUN_1464384fe;
            local_158 = L"Engine";
            local_160 = 0;
            local_168 = 0x10004001;
            local_170 = 8;
            local_178 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar11 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,DAT_14cb223d8);
          if (plVar11 != (longlong *)0x0) {
            if (DAT_14cb223d8 == 0) {
              local_140 = &local_110;
              local_110 = FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_1427b09ee;
              local_148 = &LAB_147f29feb;
              local_150 = FUN_1464384fe;
              local_158 = L"Engine";
              local_160 = 0;
              local_168 = 0x10004001;
              local_170 = 8;
              local_178 = 0x28;
              FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
            }
            plVar14 = (longlong *)FUN_144718840(plVar11,DAT_14cb223d8);
            if (((plVar11 != plVar14) && (plVar14 != (longlong *)0x0)) &&
               (lVar15 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar15 != 0)) {
              if (iStack_f0 == 0) {
LAB_140965977:
                uVar16 = 0;
              }
              else {
                uVar16 = 0;
                if ((-1 < (int)uStack_f4) && ((int)uStack_f4 < DAT_14c9647dc)) {
                  puVar17 = (undefined8 *)
                            ((ulonglong)((uStack_f4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_f4 >> 0x10) * 8));
                  if ((puVar17 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar17 + 2) != iStack_f0 ||
                      ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_140965977;
                  uVar16 = *puVar17;
                }
              }
              iVar9 = FUN_14486116a(lVar15,uVar16);
              if (((((iStack_f0 == 0) || ((int)uStack_f4 < 0)) || (DAT_14c9647dc <= (int)uStack_f4))
                  || ((lVar15 = (ulonglong)((uStack_f4 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_f4 >> 0x10) * 8),
                      lVar15 == 0 || (*(int *)(lVar15 + 0x10) != iStack_f0)))) ||
                 ((iVar9 != 2 || ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)))) goto LAB_1409651fa;
              cVar6 = '\x01';
              if ((plStack_d0 == (longlong *)0x0) || (local_d8._4_4_ == 0)) {
                cVar18 = '\0';
              }
              else {
                cVar18 = '\0';
                if ((-1 < (int)(uint)local_d8) &&
                   (cVar18 = '\0', (int)(uint)local_d8 < DAT_14c9647dc)) {
                  lVar15 = (ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8);
                  if ((lVar15 == 0) ||
                     ((*(int *)(lVar15 + 0x10) != local_d8._4_4_ ||
                      ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)))) {
                    cVar18 = '\0';
                  }
                  else {
                    plVar11 = (longlong *)0x0;
                    if ((*(uint *)(lVar15 + 8) & 0x10200000) == 0) {
                      plVar11 = plStack_d0;
                    }
                    lVar15 = (**(code **)(*plVar11 + 0x10))();
                    cVar18 = *(char *)(lVar15 + 0x18b);
                    if ((plStack_d0 == (longlong *)0x0) || (local_d8._4_4_ == 0))
                    goto LAB_14096549d;
                  }
                }
                if (((-1 < (int)(uint)local_d8) &&
                    ((((int)(uint)local_d8 < DAT_14c9647dc &&
                      (lVar15 = (ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
                                *(longlong *)
                                 (DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8),
                      lVar15 != 0)) && (*(int *)(lVar15 + 0x10) == local_d8._4_4_)))) &&
                   ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)) {
                  plVar11 = (longlong *)0x0;
                  if ((*(uint *)(lVar15 + 8) & 0x10200000) == 0) {
                    plVar11 = plStack_d0;
                  }
                  lVar15 = (**(code **)(*plVar11 + 0x10))();
                  cVar6 = *(char *)(lVar15 + 0x18c);
                }
              }
LAB_14096549d:
              iVar9 = iStack_f0;
              if (iStack_f0 == 0) {
LAB_14096554d:
                bVar8 = 0;
              }
              else {
                bVar8 = 0;
                if ((-1 < (int)uStack_f4) && (bVar8 = 0, (int)uStack_f4 < DAT_14c9647dc)) {
                  plVar11 = (longlong *)
                            ((ulonglong)((uStack_f4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_f4 >> 0x10) * 8));
                  if (((plVar11 != (longlong *)0x0) &&
                      (((int)plVar11[2] == iStack_f0 && ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)
                       ))) && (lVar15 = *plVar11, lVar15 != 0)) {
                    if (DAT_14cba8288 == 0) {
                      local_140 = &local_110;
                      local_110 = FUN_141864c34;
                      local_130 = FUN_14081d0ea;
                      local_138 = (code *)&LAB_1464cee30;
                      local_148 = &LAB_148bfac22;
                      local_150 = (code *)&LAB_140f21842;
                      local_158 = L"Game";
                      local_160 = 0;
                      local_168 = 0x10000004;
                      local_170 = 0x10;
                      local_178 = 0x9cd0;
                      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c)
                      ;
                    }
                    if ((((*(int *)(DAT_14cba8288 + 0x38) <=
                           *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30))
                        && (plVar11 = *(longlong **)(lVar15 + 0x32b8), plVar11 != (longlong *)0x0))
                       && (cVar7 = (**(code **)(*plVar11 + 0x480))(plVar11,DAT_14c9abbf0),
                          cVar7 != '\0')) {
                      bVar8 = (**(code **)(*(longlong *)(lVar15 + 0x3c60) + 0x38))(lVar15 + 0x3c60);
                      bVar8 = bVar8 ^ 1;
                      goto LAB_14096554f;
                    }
                  }
                  goto LAB_14096554d;
                }
              }
LAB_14096554f:
              if (((cVar18 != '\x01') && (cVar6 == '\x01')) && (bVar8 == 0)) {
                lVar15 = *(longlong *)(lVar10 + 0x3258);
                fVar23 = 0.0;
                fVar22 = 0.0;
                if (lVar15 != 0) {
                  fVar22 = *(float *)(lVar15 + 0x7c);
                  fVar23 = *(float *)(lVar15 + 0x80);
                }
                fVar24 = fVar23;
                if (cVar18 == '\x02') {
                  fVar22 = 0.0;
                }
                else if ((cVar18 == '\x03') && (fVar24 = fVar22, fVar22 <= fVar23)) {
                  fVar22 = fVar23;
                  fVar24 = fVar23;
                }
                if ((((((iVar9 != 0) && (-1 < (int)uStack_f4)) && ((int)uStack_f4 < DAT_14c9647dc))
                     && ((plVar11 = (longlong *)
                                    ((ulonglong)((uStack_f4 & 0xffff) * 0x18) +
                                    *(longlong *)
                                     (DAT_14c9647c8 + (ulonglong)(uStack_f4 >> 0x10) * 8)),
                         plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar9)))) &&
                    ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) &&
                   (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0)) {
                  uVar16 = FUN_14069ce7c();
                  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,uVar16);
                  if (plVar11 != (longlong *)0x0) {
                    uVar16 = FUN_14069ce7c();
                    plVar14 = (longlong *)FUN_144718840(plVar11,uVar16);
                    if (((plVar11 != plVar14) && (plVar14 != (longlong *)0x0)) &&
                       (lVar15 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar15 != 0)) {
                      dVar5 = (double)FUN_144719204((int)*(undefined8 *)(param_3 + 0x48),0);
                      dVar4 = (double)FUN_144719204((int)*(undefined8 *)(param_3 + 0x50),0);
                      dVar2 = sin(dVar5 * 0.017453292519943295);
                      dVar5 = cos(dVar5 * 0.017453292519943295);
                      dVar3 = sin(dVar4 * 0.017453292519943295);
                      local_128 = cos(dVar4 * 0.017453292519943295);
                      local_120 = dVar3 * dVar5;
                      local_128 = local_128 * dVar5;
                      local_118 = dVar2;
                      FUN_14096607e(lVar15,&local_110,param_3 + 0x30);
                      local_100 = local_100 - *(double *)(param_3 + 0x40);
                      local_108 = local_108 - *(double *)(param_3 + 0x38);
                      dVar5 = (double)local_110 - *(double *)(param_3 + 0x30);
                      dVar2 = 0.0;
                      if ((((local_108 != 0.0) || (NAN(local_108))) || (dVar5 != 0.0)) ||
                         (NAN(dVar5))) {
                        dVar2 = atan2(local_108,dVar5);
                        dVar2 = dVar2 * 57.29577951308232;
                      }
                      dVar3 = SQRT(dVar5 * dVar5 + local_108 * local_108);
                      dVar5 = 0.0;
                      if (((local_100 != 0.0) || (NAN(local_100))) ||
                         ((dVar3 != 0.0 || (NAN(dVar3))))) {
                        dVar5 = atan2(local_100,dVar3);
                        dVar5 = dVar5 * 57.29577951308232;
                      }
                      if (180.0 < ABS(dVar2 - *(double *)(param_3 + 0x50))) {
                        dVar2 = dVar2 + (double)((-(ulonglong)(0.0 < dVar2) >> 0x20 & 0xbff00000) <<
                                                 0x20 | ~-(ulonglong)(0.0 < dVar2) &
                                                        *(ulonglong *)
                                                         (&DAT_149f4cb90 +
                                                         (ulonglong)(dVar2 < 0.0) * 8)) * 360.0;
                      }
                      fVar23 = (float)FUN_140965e38(*(undefined4 *)(param_1 + 0x18),1);
                      fVar19 = (float)FUN_140965e38(fVar20,1);
                      if (1.0 <= fVar23) {
                        dVar3 = 1.0;
                      }
                      else {
                        fVar23 = (fVar19 - fVar23) / (1.0 - fVar23);
                        if (1.0 <= fVar23) {
                          fVar23 = 1.0;
                        }
                        if (fVar23 <= 0.0) {
                          fVar23 = 0.0;
                        }
                        dVar3 = (double)fVar23;
                      }
                      if (0.0 < fVar22) {
                        dVar4 = *(double *)(param_3 + 0x48);
                        fVar23 = (float)dVar4;
                        fVar21 = (float)(dVar5 - (double)fVar23);
                        fVar19 = fVar22 - *(float *)(param_1 + 0x1c);
                        if (fVar19 < ABS(fVar21)) {
                          if (fVar21 <= 0.0) {
                            dVar5 = (double)(fVar23 - fVar19);
                          }
                          else {
                            dVar5 = (double)(fVar19 + fVar23);
                          }
                        }
                        dVar4 = (dVar5 - dVar4) * dVar3 + dVar4;
                        *(double *)(param_3 + 0x48) = dVar4;
                        *(float *)(param_1 + 0x1c) =
                             (float)((double)*(float *)(param_1 + 0x1c) +
                                    ABS(dVar4 - (double)fVar23));
                      }
                      if (0.0 < fVar24) {
                        dVar2 = dVar2 - *(double *)(param_3 + 0x50);
                        if (ABS((float)dVar2) < fVar24) {
                          *(double *)(param_3 + 0x50) = dVar3 * dVar2 + *(double *)(param_3 + 0x50);
                        }
                      }
                      if (*(longlong *)(lVar10 + 0x31f8) != 0) {
                        *(undefined1 *)(*(longlong *)(lVar10 + 0x31f8) + 0x171) = 1;
                      }
                      if (0.0 < fVar22) goto LAB_140965201;
                    }
                  }
                }
              }
              goto LAB_1409651fa;
            }
          }
        }
        FUN_144729dda(&uStack_f4);
      }
LAB_1409651fa:
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
LAB_140965201:
  *(float *)(param_1 + 0x18) = fVar20;
LAB_1409650e2:
  if ((local_c0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140965df2 FUN_140965df2 body=69 status=ok
// SIG undefined FUN_140965df2(void)

undefined1 FUN_140965df2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xa99) == '\x01') {
    cVar1 = *(char *)(param_1 + 0xa98);
    lVar2 = FUN_14030d330();
    if (lVar2 == 0) {
      return 0;
    }
    if (cVar1 == '\x01') {
      return *(undefined1 *)(lVar2 + 0x365);
    }
  }
  else {
    lVar2 = FUN_14030d330();
    if (lVar2 == 0) {
      return 0;
    }
  }
  return *(undefined1 *)(lVar2 + 0x366);
}



// FUNCTION 140965e38 FUN_140965e38 body=581 status=ok
// SIG undefined FUN_140965e38(void)

float FUN_140965e38(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == 1) {
    fVar2 = param_1 * param_1;
    fVar1 = fVar2 * param_1;
    fVar1 = (fVar2 * 3.0 - (fVar1 + fVar1)) +
            (fVar1 - fVar2) * 0.0 +
            (((fVar1 + fVar1) - fVar2 * 3.0) + 1.0) * 0.0 +
            ((fVar1 - (fVar2 + fVar2)) + param_1) * 0.0;
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (0.0 < fVar1) {
      return fVar1;
    }
    return 0.0;
  }
  switch(param_2) {
  case 2:
    fVar1 = sinf(param_1 * 3.1415927 + -1.5707964);
    param_1 = (fVar1 + 1.0) * 0.5;
    if (1.0 <= param_1) {
      param_1 = 1.0;
    }
    goto LAB_140965fba;
  case 3:
    if (param_1 < 0.5) {
      param_1 = (param_1 + param_1) * (param_1 + param_1);
      goto LAB_140965fa3;
    }
    fVar1 = 1.0 - (param_1 + param_1 + -1.0);
    param_1 = (1.0 - fVar1 * fVar1) * 0.5 + 0.5;
    goto LAB_140965fab;
  case 4:
    if (0.5 <= param_1) {
      fVar2 = 1.0 - (param_1 + param_1 + -1.0);
      fVar1 = 3.0;
LAB_140966060:
      fVar1 = powf(fVar2,fVar1);
      param_1 = (1.0 - fVar1) * 0.5 + 0.5;
      goto LAB_140965fab;
    }
    fVar1 = 3.0;
    break;
  case 5:
    if (0.5 <= param_1) {
      fVar2 = 1.0 - (param_1 + param_1 + -1.0);
      fVar1 = 4.0;
      goto LAB_140966060;
    }
    fVar1 = 4.0;
    break;
  case 6:
    if (0.5 <= param_1) {
      fVar2 = 1.0 - (param_1 + param_1 + -1.0);
      fVar1 = 5.0;
      goto LAB_140966060;
    }
    fVar1 = 5.0;
    break;
  default:
    goto switchD_140965ee5_default;
  }
  param_1 = powf(param_1 + param_1,fVar1);
  param_1 = param_1 + 0.0;
LAB_140965fa3:
  param_1 = param_1 * 0.5;
LAB_140965fab:
  param_1 = param_1 + 0.0;
  if (1.0 <= param_1) {
    param_1 = 1.0;
  }
LAB_140965fba:
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
switchD_140965ee5_default:
  return param_1;
}



// FUNCTION 14096607e FUN_14096607e body=369 status=ok
// SIG undefined FUN_14096607e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14096607e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_148 [40];
  undefined8 local_120 [24];
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_60 = (undefined8 *)0x0;
  local_58 = 0x800000000;
  FUN_140966358(param_1,local_120);
  uVar5 = local_58 & 0xffffffff;
  if ((int)local_58 < 1) {
    lVar3 = FUN_14479d2ce(param_1);
    if (lVar3 == 0) {
      param_2[2] = DAT_14cb24420;
      uVar1 = uRam000000014cb2441c;
      uVar8 = _DAT_14cb24418;
      uVar7 = uRam000000014cb24414;
      *(undefined4 *)param_2 = _DAT_14cb24410;
      *(undefined4 *)((longlong)param_2 + 4) = uVar7;
      *(undefined4 *)(param_2 + 1) = uVar8;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x1c8);
      if (lVar3 == 0) {
        puVar4 = &DAT_14c8464e0;
        uVar7 = (undefined4)DAT_14c8464f0;
        uVar8 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar7 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
        puVar4 = (undefined8 *)(lVar3 + 0x260);
      }
      uVar2 = puVar4[1];
      *param_2 = *puVar4;
      param_2[1] = uVar2;
      param_2[2] = CONCAT44(uVar8,uVar7);
    }
  }
  else {
    puVar4 = local_120;
    if (local_60 != (undefined8 *)0x0) {
      puVar4 = local_60;
    }
    param_2[2] = puVar4[2];
    uVar7 = *(undefined4 *)((longlong)puVar4 + 4);
    uVar8 = *(undefined4 *)(puVar4 + 1);
    uVar1 = *(undefined4 *)((longlong)puVar4 + 0xc);
    *(undefined4 *)param_2 = *(undefined4 *)puVar4;
    *(undefined4 *)((longlong)param_2 + 4) = uVar7;
    *(undefined4 *)(param_2 + 1) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
    if ((int)local_58 != 1) {
      fVar9 = 3.4028235e+38;
      do {
        fVar6 = (float)FUN_1409661f0(puVar4,param_4,param_3);
        if (fVar6 < fVar9) {
          param_2[2] = puVar4[2];
          uVar2 = puVar4[1];
          *param_2 = *puVar4;
          param_2[1] = uVar2;
          fVar9 = fVar6;
        }
        puVar4 = puVar4 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1409661f0 FUN_1409661f0 body=360 status=ok
// SIG undefined FUN_1409661f0(void)

undefined8 FUN_1409661f0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = *param_2;
  dVar4 = param_2[1];
  dVar7 = param_2[2];
  dVar6 = dVar7 * dVar7 + dVar2 * dVar2 + dVar4 * dVar4;
  if (((dVar6 != 1.0) || (dVar1 = dVar4, dVar3 = dVar7, dVar5 = dVar2, NAN(dVar6))) &&
     (dVar1 = DAT_14c8464e8, dVar3 = DAT_14c8464f0, dVar5 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar1 = dVar4 * dVar6;
    dVar3 = dVar7 * dVar6;
    dVar5 = dVar2 * dVar6;
  }
  dVar7 = (param_1[2] - param_3[2]) * dVar3 +
          (*param_1 - *param_3) * dVar5 + (param_1[1] - param_3[1]) * dVar1;
  dVar4 = (dVar3 * dVar7 + param_3[2]) - param_1[2];
  dVar2 = (dVar1 * dVar7 + param_3[1]) - param_1[1];
  dVar7 = (dVar7 * dVar5 + *param_3) - *param_1;
  dVar2 = SQRT(dVar4 * dVar4 + dVar7 * dVar7 + dVar2 * dVar2);
  return CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
}



// FUNCTION 140966358 FUN_140966358 body=850 status=ok
// SIG undefined FUN_140966358(void)

void FUN_140966358(uint *param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = (longlong)(int)param_1[0x44];
  if (0 < lVar9) {
    iVar3 = *(int *)(param_2 + 200);
    iVar10 = param_1[0x44] + iVar3;
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    puVar14 = param_1 + 0x2e;
    if (*(int *)(param_2 + 0xcc) < iVar10) {
      FUN_147f619b0(param_2);
      lVar9 = (longlong)(int)param_1[0x44];
      if (*(uint **)(param_1 + 0x42) != (uint *)0x0) {
        puVar14 = *(uint **)(param_1 + 0x42);
      }
      if (lVar9 != 0) goto LAB_1409663ca;
    }
    else {
      if (*(uint **)(param_1 + 0x42) != (uint *)0x0) {
        puVar14 = *(uint **)(param_1 + 0x42);
      }
LAB_1409663ca:
      puVar1 = puVar14 + lVar9 * 5;
      do {
        lVar9 = *(longlong *)(puVar14 + 2);
        if (((((lVar9 != 0) && (puVar14[1] != 0)) && (uVar4 = *puVar14, -1 < (int)uVar4)) &&
            (((int)uVar4 < DAT_14c9647dc &&
             (plVar13 = (longlong *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
             plVar13 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar13 + 2) == puVar14[1] &&
            (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
             (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))))) {
          uVar4 = puVar14[4];
          if ((-1 < (longlong)(int)uVar4) && ((int)uVar4 < (int)param_1[0x2c])) {
            if ((param_1[1] == 0) || (uVar5 = *param_1, (int)uVar5 < 0)) {
LAB_14096653a:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((int)uVar5 < DAT_14c9647dc) {
                puVar12 = (undefined8 *)
                          ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
                if (((puVar12 == (undefined8 *)0x0) || (*(uint *)(puVar12 + 2) != param_1[1])) ||
                   ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_14096653a;
                uVar11 = *puVar12;
              }
            }
            cVar8 = FUN_1447c3330((longlong)(int)uVar4 * 0x50 + *(longlong *)(param_1 + 0x2a),uVar11
                                 );
            if (cVar8 == '\0') goto LAB_14096651e;
            lVar9 = *(longlong *)(puVar14 + 2);
          }
          (**(code **)(*plVar13 + 0x4b0))(plVar13,&local_98,lVar9);
          iVar10 = *(int *)(param_2 + 200);
          *(uint *)(param_2 + 200) = iVar10 + 1U;
          if (*(uint *)(param_2 + 0xcc) < iVar10 + 1U) {
            FUN_146c5b08e(param_2,iVar10);
          }
          lVar9 = *(longlong *)(param_2 + 0xc0);
          if (*(longlong *)(param_2 + 0xc0) == 0) {
            lVar9 = param_2;
          }
          *(double *)(lVar9 + 0x10 + (longlong)iVar10 * 0x18) = local_88;
          puVar2 = (undefined4 *)(lVar9 + (longlong)iVar10 * 0x18);
          *puVar2 = local_98;
          puVar2[1] = uStack_94;
          puVar2[2] = uStack_90;
          puVar2[3] = uStack_8c;
        }
LAB_14096651e:
        puVar14 = puVar14 + 5;
      } while (puVar14 != puVar1);
    }
    if (iVar3 < *(int *)(param_2 + 200)) goto LAB_140966665;
  }
  if ((((param_1[1] != 0) && (uVar4 = *param_1, -1 < (int)uVar4)) &&
      (((int)uVar4 < DAT_14c9647dc &&
       ((plVar13 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == param_1[1])))))) &&
     (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
      (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))) {
    lVar9 = plVar13[0x39];
    if (lVar9 == 0) {
      puVar12 = &DAT_14c8464e0;
      uVar15 = (undefined4)DAT_14c8464f0;
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar15 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
      puVar12 = (undefined8 *)(lVar9 + 0x260);
    }
    dVar6 = (double)CONCAT44(uVar16,uVar15);
    uVar11 = *puVar12;
    uVar7 = puVar12[1];
    (**(code **)(*plVar13 + 0x520))(plVar13,&local_98,0,0);
    if (local_68 != '\0') {
      dVar6 = (local_88 + local_70) * 0.5;
    }
    iVar3 = *(int *)(param_2 + 200);
    *(uint *)(param_2 + 200) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0xcc) < iVar3 + 1U) {
      FUN_146c5b08e(param_2,iVar3);
    }
    lVar9 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar9 = param_2;
    }
    puVar12 = (undefined8 *)(lVar9 + (longlong)iVar3 * 0x18);
    *puVar12 = uVar11;
    puVar12[1] = uVar7;
    *(double *)(lVar9 + 0x10 + (longlong)iVar3 * 0x18) = dVar6;
  }
LAB_140966665:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409666ac FUN_1409666ac body=761 status=ok
// SIG undefined FUN_1409666ac(void)

void FUN_1409666ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = param_2[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar9) + 0x30) = 0;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  iVar5 = (int)param_2[0xd];
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      plVar8 = (longlong *)param_2[0xc];
      if ((longlong *)param_2[0xc] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      lVar2 = plVar8[lVar7 * 2 + 1];
      if ((longlong)(int)lVar2 != 0) {
        lVar9 = plVar8[lVar7 * 2];
        lVar13 = 0;
        do {
          *(undefined4 *)(*(longlong *)(lVar9 + lVar13) + 0x38) = 0;
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)lVar2 * 8 != lVar13);
        iVar5 = (int)param_2[0xd];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  if (1 < (int)param_2[0x10]) {
    local_58 = 0;
    uStack_50 = 0;
    iVar1 = (int)param_2[1];
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 != 0) {
      FUN_1409669a6(&local_58);
      iVar5 = (int)param_2[0xd];
    }
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        plVar8 = (longlong *)param_2[0xc];
        if ((longlong *)param_2[0xc] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        lVar2 = plVar8[lVar7 * 2 + 1];
        if ((longlong)(int)lVar2 != 0) {
          lVar9 = plVar8[lVar7 * 2];
          lVar13 = 0;
          do {
            lVar10 = *(longlong *)(lVar9 + lVar13);
            if (*(longlong *)(lVar10 + 0x10) == 0) {
              bVar4 = 0;
            }
            else {
              bVar4 = *(byte *)(*(longlong *)(lVar10 + 0x10) + 0x2c) & 1;
            }
            lVar12 = *(longlong *)(lVar10 + 0x18);
            if (lVar12 == 0) {
              bVar11 = 0;
            }
            else {
              bVar11 = *(byte *)(lVar12 + 0x2c) & 1;
            }
            if ((bVar4 == 0) && (*(int *)(lVar12 + 0x30) == 0)) {
              *(undefined4 *)(lVar10 + 0x38) = 1;
              *(undefined4 *)(lVar12 + 0x30) = 1;
              lVar12 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                local_60 = lVar12;
                FUN_140479b38(&local_58,lVar12);
                lVar12 = local_60;
              }
              *(undefined8 *)(local_58 + lVar12 * 8) = *(undefined8 *)(lVar10 + 0x18);
            }
            uVar3 = uStack_50;
            if ((bVar11 == 0) && (*(int *)(*(longlong *)(lVar10 + 0x10) + 0x30) == 0)) {
              *(undefined4 *)(lVar10 + 0x38) = 1;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0x30) = 1;
              lVar12 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_140479b38(&local_58,uVar3 & 0xffffffff);
              }
              *(undefined8 *)(local_58 + lVar12 * 8) = *(undefined8 *)(lVar10 + 0x10);
            }
            lVar13 = lVar13 + 8;
          } while ((longlong)(int)lVar2 * 8 != lVar13);
          iVar5 = (int)param_2[0xd];
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar5);
    }
    if (0 < (int)uStack_50) {
      lVar7 = 0;
      iVar5 = (int)uStack_50;
      do {
        lVar2 = *(longlong *)(local_58 + lVar7 * 8);
        iVar1 = *(int *)(lVar2 + 0x18);
        if ((longlong)iVar1 != 0) {
          lVar9 = *(longlong *)(lVar2 + 0x10);
          lVar13 = 0;
          do {
            uVar3 = uStack_50;
            lVar10 = *(longlong *)(lVar9 + lVar13);
            if (*(int *)(lVar10 + 0x38) == 0) {
              *(int *)(lVar10 + 0x38) = *(int *)(lVar2 + 0x30) + 1;
              lVar12 = *(longlong *)(lVar10 + 0x10);
              if (lVar2 == lVar12) {
                lVar12 = *(longlong *)(lVar10 + 0x18);
              }
              if (((lVar12 != 0) && ((*(byte *)(lVar12 + 0x2c) & 1) != 0)) &&
                 (*(int *)(lVar12 + 0x30) == 0)) {
                *(int *)(lVar12 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                lVar10 = (longlong)(int)uStack_50;
                uVar6 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
                if (uStack_50._4_4_ < uVar6) {
                  FUN_140479b38(&local_58,uVar3 & 0xffffffff);
                }
                *(longlong *)(local_58 + lVar10 * 8) = lVar12;
              }
            }
            lVar13 = lVar13 + 8;
          } while ((longlong)iVar1 * 8 != lVar13);
          iVar5 = (int)uStack_50;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409669a6 FUN_1409669a6 body=315 status=ok
// SIG undefined FUN_1409669a6(void)

void FUN_1409669a6(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140966a10;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140966a10:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140966ae2 FUN_140966ae2 body=128 status=ok
// SIG undefined FUN_140966ae2(void)

void FUN_140966ae2(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_140966bee(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_140966b64(param_1);
  return;
}



// FUNCTION 140966b64 FUN_140966b64 body=137 status=ok
// SIG undefined FUN_140966b64(void)

void FUN_140966b64(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 2,4);
      uVar3 = uVar3 >> 2;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,4,4);
    }
  }
  return;
}


