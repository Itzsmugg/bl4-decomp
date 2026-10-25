// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14347e842 FUN_14347e842 body=2218 status=ok
// SIG undefined FUN_14347e842(void)

void FUN_14347e842(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  longlong *local_328;
  longlong *local_320;
  longlong local_318;
  int local_30c;
  longlong local_308;
  int local_2fc;
  longlong local_2f8;
  int local_2ec;
  longlong *local_2e8;
  int *piStack_2e0;
  undefined1 local_2d8 [16];
  longlong local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 uStack_2b8;
  int local_2b4;
  undefined1 local_2b0 [8];
  undefined1 *local_2a8;
  int local_2a0;
  undefined1 local_290 [320];
  undefined1 *local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined1 local_120 [32];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [128];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_144a3ee64();
  local_328 = (longlong *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) < 0) {
    FUN_140ec0d20(local_328,0);
  }
  local_320 = (longlong *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) < 0) {
    FUN_140ec0d20(local_320,0);
  }
  local_70 = (undefined1 *)0x0;
  local_68 = 0x1000000000;
  iVar8 = 0;
  local_308 = param_1;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1479f8c92(*(longlong *)(param_1 + 0xa8),local_f0);
    iVar8 = (int)local_68;
  }
  local_150 = (undefined1 *)0x0;
  local_148 = 0x1000000000;
  local_138 = 0;
  local_130 = 0;
  uStack_12c = 0x20;
  uStack_128 = 0xffffffff;
  iStack_124 = 0;
  local_100 = (undefined1 *)0x0;
  local_f8 = 0;
  local_2fc = 0;
  if (0 < iVar8) {
    do {
      puVar10 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar10 = local_f0;
      }
      local_2f8 = *(longlong *)(*(longlong *)(puVar10 + (longlong)local_2fc * 8) + 0x18);
      local_2e8 = &local_2f8;
      piStack_2e0 = &local_2fc;
      FUN_1479f927c(local_290,&local_2ec,&local_2e8);
      local_2fc = local_2fc + 1;
    } while (local_2fc < iVar8);
  }
  lVar18 = local_308;
  local_30c = *(int *)(local_308 + 0x110);
  *(int *)(local_308 + 0x184) = local_30c;
  if ((longlong)*(int *)(local_308 + 0x128) != 0) {
    plVar17 = *(longlong **)(local_308 + 0x120);
    plVar20 = (longlong *)((longlong)plVar17 + (longlong)*(int *)(local_308 + 0x128) * 0xc);
    local_318 = local_308 + 0x40;
    do {
      if ((int)local_148 != iStack_124) {
        lVar19 = *plVar17;
        uVar21 = (uint)((ulonglong)lVar19 >> 0x10);
        uVar4 = (uint)lVar19 & 0xffff;
        puVar10 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar10 = local_120;
        }
        iVar8 = *(int *)(puVar10 +
                        (ulonglong)
                        (local_f8 - 1U &
                        (int)((ulonglong)lVar19 >> 0x20) + ((uint)lVar19 << 0x10 | uVar4) +
                        (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar4 >> 4)) * 4);
        if (iVar8 != -1) {
          puVar10 = local_150;
          if (local_150 == (undefined1 *)0x0) {
            puVar10 = local_290;
          }
          do {
            plVar3 = (longlong *)(puVar10 + (longlong)iVar8 * 0x14);
            if (*plVar3 == lVar19) {
              if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
                puVar10 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar10 = local_f0;
                }
                lVar19 = *(longlong *)(puVar10 + (longlong)(int)plVar3[1] * 8);
                if (lVar19 != 0) {
                  uVar2 = FUN_14078ee06();
                  plVar3 = (longlong *)FUN_144718840(lVar19,uVar2);
                  if ((plVar3 != (longlong *)0x0) && ((char)plVar17[1] != '\x02')) {
                    FUN_14082bc44(lVar19 + 0x40,lVar18,local_318);
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c();
                    }
                    iVar8 = *(int *)(lVar18 + 0x1a0);
                    *(uint *)(lVar18 + 0x1a0) = iVar8 + 1U;
                    if (*(uint *)(lVar18 + 0x1a4) < iVar8 + 1U) {
                      FUN_140e402be(local_320,iVar8);
                    }
                    *(longlong *)(*local_320 + (longlong)iVar8 * 8) = lVar19;
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c();
                    }
                    if ((char)plVar17[1] == '\0') {
                      if (DAT_14c950c29 == '\x01') {
                        FUN_1456cec3c(lVar19);
                      }
                      iVar8 = *(int *)(lVar18 + 400);
                      *(uint *)(lVar18 + 400) = iVar8 + 1U;
                      if (*(uint *)(lVar18 + 0x194) < iVar8 + 1U) {
                        FUN_140e402be(local_328,iVar8);
                      }
                      *(longlong *)(*local_328 + (longlong)iVar8 * 8) = lVar19;
                      if (DAT_14c950c29 == '\x01') {
                        FUN_1456cec3c(lVar19);
                      }
                      iVar8 = (**(code **)(*plVar3 + 0x20))();
                      if (local_30c == -1) {
                        iVar15 = *(int *)(lVar18 + 0x184);
                        if (*(int *)(lVar18 + 0x184) < iVar8) {
                          iVar15 = iVar8;
                        }
                        *(int *)(lVar18 + 0x184) = iVar15;
                      }
                    }
                  }
                }
              }
              break;
            }
            iVar8 = *(int *)((longlong)plVar3 + 0xc);
          } while (iVar8 != -1);
        }
      }
      plVar17 = (longlong *)((longlong)plVar17 + 0xc);
    } while (plVar17 != plVar20);
  }
  puVar1 = (uint *)(lVar18 + 0x140);
  iVar8 = *(int *)(lVar18 + 0x158);
  if (iVar8 == 0) {
    uVar14 = 1;
    plVar20 = (longlong *)0x0;
    iVar15 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar18 + 0x150);
    if (*(uint **)(lVar18 + 0x150) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar21 = *puVar9;
    if (uVar21 == 0) {
      iVar15 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar15 = iVar8 + -1;
      }
      plVar20 = (longlong *)0x0;
      plVar17 = (longlong *)(ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        plVar17 = plVar20;
      }
      iVar15 = 0;
      do {
        if (plVar17 == plVar20) goto LAB_14347f049;
        iVar15 = iVar15 + 0x20;
        uVar21 = puVar9[(longlong)plVar20 + 1];
        plVar20 = (longlong *)((longlong)plVar20 + 1);
      } while (uVar21 == 0);
    }
    else {
      plVar20 = (longlong *)0x0;
      iVar15 = 0;
    }
    uVar14 = (ulonglong)(-uVar21 & uVar21);
    uVar11 = uVar14 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar7 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar7) {
      iVar7 = iVar8;
    }
  }
  if (iVar7 < iVar8) {
    uVar21 = 0xffffffff;
    do {
      local_328 = (longlong *)CONCAT44(local_328._4_4_,uVar21);
      local_318 = CONCAT44(local_318._4_4_,iVar15);
      lVar18 = *(longlong *)(lVar18 + 0x130);
      lVar19 = lVar18 + (longlong)iVar7 * 0x30;
      *(undefined4 *)(lVar19 + 0x20) = 0;
      local_320 = plVar20;
      if (*(int *)(lVar19 + 0x24) < 0) {
        FUN_14481578e((longlong *)(lVar19 + 0x18),0);
      }
      lVar18 = (longlong)iVar7 * 0x30 + lVar18;
      local_2c8 = 0;
      uVar4 = 0;
      local_2c0 = 0;
      local_2e8 = (longlong *)0x0;
      piStack_2e0 = (int *)0x0;
      local_2bc = 0x80;
      uStack_2b8 = 0xffffffff;
      local_2b4 = 0;
      local_2a8 = (undefined1 *)0x0;
      local_2a0 = 0;
      if (0 < *(int *)(lVar18 + 0x10)) {
        lVar13 = *(longlong *)(lVar18 + 8);
        lVar16 = 0;
        uVar4 = 0;
        do {
          uVar21 = *(uint *)(lVar13 + lVar16 * 4);
          if ((int)piStack_2e0 != local_2b4) {
            puVar10 = local_2a8;
            if (local_2a8 == (undefined1 *)0x0) {
              puVar10 = local_2b0;
            }
            iVar8 = *(int *)(puVar10 + (ulonglong)(local_2a0 - 1U & uVar21) * 4);
            while (iVar8 != -1) {
              plVar20 = local_2e8 + (longlong)iVar8 * 2;
              if (*(uint *)(local_2e8 + (longlong)iVar8 * 2) == uVar21) {
                if (plVar20 != (longlong *)0x0) goto LAB_14347ee0d;
                break;
              }
              iVar8 = (int)plVar20[1];
            }
          }
          local_2f8 = lVar13 + lVar16 * 4;
          local_338 = 0;
          FUN_1407932ac(&local_2e8,&local_2ec,uVar21,&local_2f8);
          plVar20 = local_2e8 + (longlong)local_2ec * 2;
LAB_14347ee0d:
          *(int *)((longlong)plVar20 + 4) = (int)lVar16;
          lVar13 = *(longlong *)(lVar18 + 8);
          uVar21 = *(uint *)(lVar13 + lVar16 * 4);
          if ((int)uVar4 < (int)uVar21) {
            uVar4 = uVar21;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar18 + 0x10));
      }
      iVar8 = *(int *)(lVar18 + 0x20);
      *(uint *)(lVar18 + 0x20) = iVar8 + uVar4 + 1;
      if ((uint)(*(int *)(lVar18 + 0x24) - iVar8) <= uVar4) {
        FUN_1446f48e2();
      }
      lVar18 = local_308;
      uVar11 = 0;
      uVar12 = 0;
      uVar21 = (uint)local_328;
      do {
        if ((int)piStack_2e0 != local_2b4) {
          puVar10 = local_2a8;
          if (local_2a8 == (undefined1 *)0x0) {
            puVar10 = local_2b0;
          }
          iVar8 = *(int *)(puVar10 + (ulonglong)((uint)uVar11 & local_2a0 + 0x7fffffffU) * 4);
          while (iVar8 != -1) {
            plVar20 = local_2e8 + (longlong)iVar8 * 2;
            if (uVar11 == *(uint *)(local_2e8 + (longlong)iVar8 * 2)) {
              if ((undefined4 *)((longlong)plVar20 + 4) != (undefined4 *)0x0 &&
                  plVar20 != (longlong *)0x0) {
                uVar12 = *(undefined4 *)((longlong)plVar20 + 4);
              }
              break;
            }
            iVar8 = (int)plVar20[1];
          }
        }
        *(undefined4 *)(*(longlong *)(lVar19 + 0x18) + uVar11 * 4) = uVar12;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar4 + 1);
      local_2a0 = 0;
      if (local_2a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      plVar20 = local_320;
      uVar11 = (ulonglong)piStack_2e0 >> 0x20;
      piStack_2e0 = (int *)((ulonglong)piStack_2e0 & 0xffffffff00000000);
      iVar15 = (int)local_318;
      if ((int)uVar11 != 0) {
        FUN_14472eb64(&local_2e8,0);
      }
      uStack_2b8 = 0xffffffff;
      local_2b4 = 0;
      local_2c0 = 0;
      if (0x80 < local_2bc) {
        local_2bc = 0x80;
        FUN_1446efbd8(local_2d8,0);
      }
      if (local_2c8 != 0) {
        FUN_1400020a8();
      }
      if (local_2e8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar21 = uVar21 & ~(uint)uVar14;
      puVar9 = *(uint **)(lVar18 + 0x150);
      if (*(uint **)(lVar18 + 0x150) == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar8 = *(int *)(lVar18 + 0x158);
      iVar7 = (int)plVar20;
      lVar19 = (longlong)iVar7;
      uVar4 = puVar9[lVar19] & uVar21;
      if (uVar4 == 0) {
        iVar5 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar5 = iVar8 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar13 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar4 = puVar9[lVar19 + lVar13 + 1];
          if (uVar4 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar6 - lVar19 == lVar13) goto LAB_14347f049;
        }
        plVar20 = (longlong *)(ulonglong)(iVar7 + (int)lVar13 + 1);
        uVar21 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar11 = uVar14 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar7 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar8);
  }
LAB_14347f049:
  FUN_14347f146(lVar18);
  local_f8 = 0;
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1479f53a0(local_290);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = *(int *)(lVar18 + 0x184) + -1;
  if (*(int *)(lVar18 + 0x180) < iVar8) {
    iVar8 = *(int *)(lVar18 + 0x180);
  }
  iVar15 = 0;
  if (0 < iVar8) {
    iVar15 = iVar8;
  }
  *(int *)(lVar18 + 0x180) = iVar15;
  if ((local_60 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14347f0ee FUN_14347f0ee body=88 status=ok
// SIG undefined FUN_14347f0ee(void)

void FUN_14347f0ee(longlong param_1)

{
  longlong lVar1;
  
  FUN_1479e554e();
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfe;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (((*(byte *)(param_1 + 0xb8) & 6) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 != 0 ||
      (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)))) {
    FUN_1401b4182(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14347f146 FUN_14347f146 body=885 status=ok
// SIG undefined FUN_14347f146(void)

void FUN_14347f146(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [47];
  byte local_b9;
  undefined8 local_b8;
  undefined8 local_b0 [8];
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 400) < 1) goto LAB_14347f291;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad1888) && (FUN_144b3d300(&DAT_14cad1888), DAT_14cad1888 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cad1880 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ForceLOD",1);
    _Init_thread_footer(&DAT_14cad1888);
  }
  if ((DAT_14cad1880 == (longlong *)0x0) ||
     (iVar5 = (**(code **)(*DAT_14cad1880 + 0xb0))(), iVar5 < 0)) {
    iVar5 = *(int *)(param_1 + 0x114);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x184) <= iVar5)) {
      if ((longlong)*(int *)(param_1 + 400) < 1) goto LAB_14347f291;
      uVar12 = (longlong)*(int *)(param_1 + 400) + 1;
      bVar3 = false;
      bVar2 = false;
      iVar10 = 0xff;
      do {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x188) + -0x10 + uVar12 * 8);
        if (lVar11 != 0) {
          uVar7 = FUN_14078ee06();
          plVar8 = (longlong *)FUN_144718840(lVar11,uVar7);
          iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
          if ((-1 < iVar5) && (iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8), -1 < iVar6)) {
            local_b0[0] = *(undefined8 *)(lVar11 + 0x18);
            iVar5 = FUN_1479e5602(param_1,local_b0,iVar5);
            cVar4 = FUN_140760b84(lVar11,0x3e4ccccd);
            bVar2 = bVar3;
            if (!bVar3) {
              bVar2 = true;
              iVar10 = iVar5;
            }
            bVar3 = bVar2;
            if (cVar4 != '\0') goto LAB_14347f2d9;
          }
        }
        iVar5 = iVar10;
        uVar12 = uVar12 - 1;
        iVar10 = iVar5;
      } while (1 < uVar12);
      if (!bVar2) goto LAB_14347f291;
    }
  }
  else {
    iVar5 = (**(code **)(*DAT_14cad1880 + 0xb0))();
  }
LAB_14347f2d9:
  iVar10 = *(int *)(param_1 + 0x184) + -1;
  if (iVar5 < iVar10) {
    iVar10 = iVar5;
  }
  if (iVar10 < *(int *)(param_1 + 0x118)) {
    iVar10 = *(int *)(param_1 + 0x118);
  }
  local_70 = (undefined8 *)0x0;
  local_68 = 0x1000000000;
  FUN_1479e56cc(local_b0,*(undefined4 *)(param_1 + 0x1a0));
  if (iVar10 < *(int *)(param_1 + 0x184)) {
    bVar2 = true;
    do {
      iVar5 = *(int *)(param_1 + 0x1a0);
      if (iVar5 < 1) break;
      bVar3 = true;
      local_b9 = ~bVar2;
      lVar11 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + lVar11 * 8);
        if (lVar1 != 0) {
          uVar7 = FUN_14078ee06();
          plVar8 = (longlong *)FUN_144718840(lVar1,uVar7);
          local_b8 = *(undefined8 *)(lVar1 + 0x18);
          iVar5 = FUN_1479e5714(param_1,&local_b8,iVar10);
          if (bVar2) {
            (**(code **)(*plVar8 + 0x28))(plVar8,iVar5);
          }
          iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8);
          if ((local_b9 & iVar5 < iVar6) != 0) goto LAB_14347f3e0;
          bVar3 = (bool)(bVar3 & iVar6 <= iVar5);
          puVar9 = local_70;
          if (local_70 == (undefined8 *)0x0) {
            puVar9 = local_b0;
          }
          *(int *)((longlong)puVar9 + lVar11 * 4) = iVar5;
          iVar5 = *(int *)(param_1 + 0x1a0);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar5);
      if (bVar3) {
        if (0 < iVar5) {
          lVar11 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + lVar11 * 8);
            if (lVar1 != 0) {
              uVar7 = FUN_14078ee06();
              plVar8 = (longlong *)FUN_144718840(lVar1,uVar7);
              puVar9 = local_70;
              if (local_70 == (undefined8 *)0x0) {
                puVar9 = local_b0;
              }
              (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined4 *)((longlong)puVar9 + lVar11 * 4));
              iVar5 = *(int *)(param_1 + 0x1a0);
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < iVar5);
        }
        break;
      }
LAB_14347f3e0:
      iVar10 = iVar10 + 1;
      bVar2 = false;
    } while (iVar10 < *(int *)(param_1 + 0x184));
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14347f291:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14347f4bc FUN_14347f4bc body=240 status=ok
// SIG undefined FUN_14347f4bc(void)

void FUN_14347f4bc(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14cad18d0 = &PTR_FUN_14a8619d0;
  FUN_144725486(&DAT_14cad18d0);
  lVar4 = DAT_14cad18e0;
  DAT_14cad18d0 = &PTR_FUN_14a38cff0;
  if (DAT_14cad18e0 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14cad18e0 + 8);
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
  DAT_14cad18d0 = &PTR_FUN_14a38cd70;
  DAT_14cad18de = 2;
  if ((DAT_14cad18d8 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14347f5ac FUN_14347f5ac body=2143 status=ok
// SIG undefined FUN_14347f5ac(void)

undefined8 * FUN_14347f5ac(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar20 = 0;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14a860df0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x2a6) = 0;
  param_1[0x53] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2b4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x2b6) = 0;
  param_1[0x57] = 0;
  param_1[0x55] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x2ce) = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = &DAT_14aa6dc00;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  *(undefined2 *)(param_1 + 99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31a) = 1;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x32c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x32e) = 0;
  param_1[0x66] = 0;
  param_1[100] = &PTR_FUN_14aa50910;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  *(undefined4 *)(param_1 + 0x6d) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x36c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x36e) = 0;
  param_1[0x6e] = 0;
  param_1[0x6c] = &PTR_FUN_14aa61a50;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 1;
  param_1[0x74] = 0;
  iVar7 = *(int *)(param_2 + 0x628);
  uVar12 = *(undefined8 *)(param_2 + 0x620);
  *(int *)(param_1 + 0x75) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  }
  else {
    FUN_1479f57e8(param_1 + 0x74,iVar7,0);
    FUN_1479f585b(param_1[0x74],uVar12,iVar7);
    iVar20 = *(int *)(param_1 + 0x75);
  }
  local_98 = param_1 + 0x6c;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  uVar4 = *(undefined1 *)(param_1[0x42] + 8);
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3d4) = uVar4;
  *(undefined2 *)((longlong)param_1 + 0x3d5) = 1;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0x800000000;
  param_1[0x91] = 0;
  param_1[0x92] = 0x200000000;
  param_1[0x99] = 0;
  param_1[0x9a] = 0x300000000;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0x1ffffff;
  param_1[0x79] = &PTR_FUN_14a1ca480;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 4;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5b4) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x5b6) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x5e4) = 0;
  if (0 < iVar20) {
    lVar18 = 0;
    lVar17 = 0;
    do {
      lVar5 = *(longlong *)(param_1[0x74] + lVar18);
      if (lVar5 != 0) {
        FUN_14470a074(lVar5,local_88,*(undefined4 *)(param_1[0x42] + 8));
        param_1[0x76] = param_1[0x76] | (ulonglong)local_88[0];
        bVar13 = (byte)((ulonglong)local_88[0] >> 0x10);
        if (bVar13 <= *(byte *)((longlong)param_1 + 0x3b2)) {
          bVar13 = *(byte *)((longlong)param_1 + 0x3b2);
        }
        *(byte *)((longlong)param_1 + 0x3b2) = bVar13;
        iVar20 = *(int *)(param_1 + 0x75);
      }
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0x28;
    } while (lVar17 < iVar20);
  }
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) | 1;
  FUN_1408e3634(param_1 + 100,1,1);
  FUN_1408e36f6(param_1 + 0x53,1,1,1);
  FUN_140964b22(local_98,1,1);
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar17 + 0xc60);
  local_90 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14347f94a;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14347fd64;
      goto LAB_14347f953;
    }
  }
  else {
LAB_14347f94a:
    if (iVar7 != 0x10) {
LAB_14347f953:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar17 + 0xc60), iVar7 == 2))
        goto LAB_14347fd64;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14347fd64;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14347faee;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14348442c);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14347faee:
          puVar19 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar19 + 0x16);
          uVar14 = puVar11[0x12];
          if (puVar16 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar19 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar19 + 0x16);
            uVar14 = 0;
            if (puVar16 <= puVar11 + 0x4000) {
              uVar14 = 1;
              goto LAB_14347fb6e;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14347fb6e:
        *(uint **)(puVar11 + 0x10) = puVar16;
        puVar11[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a861090;
        puVar19[0x15] = local_90;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar7 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar17 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar17 == 0) {
          uVar6 = 1;
          if ((char)uVar21 != '\x06') {
            uVar6 = uVar21;
          }
          uVar21 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar17 + 0x30);
        }
        puVar19[0xf] = uVar12;
        puVar19[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
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
        local_a8 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a861030;
        local_88[0] = &LAB_1479f5bf0;
        local_60 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FMaterialSpriteSceneProxyInit",&DAT_14cad1de0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_14347f9f2;
    }
  }
LAB_14347fd64:
  FUN_1479f5918(&local_90,&DAT_14ca85100);
LAB_14347f9f2:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14347fe0c FUN_14347fe0c body=1123 status=ok
// SIG undefined FUN_14347fe0c(void)

void FUN_14347fe0c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_158 [32];
  code **local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  longlong local_e8;
  int local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(byte *)((longlong)param_1 + 0x63c) & 1) == 0) {
    (**(code **)(*param_1 + 0x9f8))(param_1,&local_e8);
    if (0 < local_e0) {
      uVar11 = 0;
      iVar5 = local_e0;
      do {
        lVar6 = *(longlong *)(local_e8 + uVar11 * 8);
        if (lVar6 != 0) {
          if (DAT_14caec470 == 0) {
            local_d8 = FUN_1417df956;
            local_f0 = FUN_14081d0ea;
            local_f8 = &LAB_1463eaa20;
            local_108 = &LAB_147bbd9ea;
            local_110 = FUN_1401cf6d7;
            local_118 = L"Engine";
            local_120 = 0;
            local_128 = 0x10000000;
            local_130 = 8;
            local_138 = (code **)CONCAT44(local_138._4_4_,0x330);
            local_100 = &local_d8;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
            lVar6 = (**(code **)(*param_1 + 0x668))(param_1,uVar11 & 0xffffffff);
          }
          local_78 = 2;
          local_74 = 0xffffffff;
          local_d8 = (code *)((ulonglong)local_d8 & 0xffffffffffffff00);
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_138 = &local_d8;
          local_80 = param_2;
          FUN_140042bb4(lVar6,&local_80,param_3,0);
          iVar5 = local_e0;
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < (longlong)iVar5);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x63c) & 2) != 0) {
      FUN_143480270(param_1);
    }
    uVar2 = *(uint *)(param_1 + 0xc9);
    lVar6 = param_1[200];
    uVar13 = 0;
    iVar5 = (int)((ulonglong)param_2 >> 0x20);
    uVar12 = uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar1 = (uVar12 >> 1) + uVar13;
        lVar9 = (ulonglong)uVar1 * 0x30;
        iVar10 = *(int *)(lVar6 + lVar9) - (int)param_2;
        if (iVar10 == 0) {
          iVar10 = *(int *)(lVar6 + 4 + lVar9) - iVar5;
        }
        if (iVar10 < 0) {
          uVar13 = uVar1 + (uVar12 & 1);
        }
        bVar4 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar4);
    }
    if ((int)uVar13 < (int)uVar2) {
      lVar9 = (ulonglong)uVar13 * 0x30;
      iVar10 = (int)param_2 - *(int *)(lVar6 + lVar9);
      if (iVar10 == 0) {
        iVar10 = iVar5 - *(int *)(lVar6 + 4 + lVar9);
      }
      if (-1 < iVar10) {
        plVar7 = (longlong *)(lVar6 + lVar9 + 8);
        if ((plVar7 != (longlong *)0x0) &&
           (lVar6 = (longlong)*(int *)(lVar6 + lVar9 + 0x10), lVar6 != 0)) {
          lVar9 = *plVar7;
          lVar14 = 0;
          do {
            uVar3 = *(undefined4 *)(lVar9 + lVar14);
            lVar8 = (**(code **)(*param_1 + 0x610))(param_1,uVar3);
            if (lVar8 != 0) {
              if (DAT_14caec470 == 0) {
                local_d8 = FUN_1417df956;
                local_f0 = FUN_14081d0ea;
                local_f8 = &LAB_1463eaa20;
                local_100 = &local_d8;
                local_108 = &LAB_147bbd9ea;
                local_110 = FUN_1401cf6d7;
                local_118 = L"Engine";
                local_120 = 0;
                local_128 = 0x10000000;
                local_130 = 8;
                local_138 = (code **)CONCAT44(local_138._4_4_,0x330);
                FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                              FUN_1463eb22e);
              }
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
                lVar8 = (**(code **)(*param_1 + 0x668))(param_1,uVar3);
              }
              local_78 = 2;
              local_74 = 0xffffffff;
              local_d8 = (code *)((ulonglong)local_d8 & 0xffffffffffffff00);
              local_90 = 0;
              uStack_88 = 0;
              local_a0 = 0;
              uStack_98 = 0;
              local_b0 = 0;
              uStack_a8 = 0;
              local_c0 = 0;
              uStack_b8 = 0;
              local_d0 = 0;
              uStack_c8 = 0;
              local_138 = &local_d8;
              local_80 = param_2;
              FUN_140042bb4(lVar8,&local_80,param_3,0);
            }
            lVar14 = lVar14 + 4;
          } while (lVar6 * 4 != lVar14);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143480270 FUN_143480270 body=1106 status=ok
// SIG undefined FUN_143480270(void)

void FUN_143480270(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  longlong *local_a0;
  int local_98;
  undefined4 local_90;
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)((longlong)param_1 + 0x63c) & 1) != 0) {
    local_f8 = param_1 + 200;
    iVar7 = *(int *)((longlong)param_1 + 0x64c);
    FUN_14006e3c1(param_1[200],(int)param_1[0xc9]);
    *(undefined4 *)(param_1 + 0xc9) = 0;
    if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0x64c) != 0)) {
      FUN_1479f9a82(local_f8);
    }
    lVar4 = param_1[0x16];
    if ((lVar4 == 0) && (lVar4 = FUN_1448abda6(param_1), lVar4 == 0)) {
      local_fc = 0;
    }
    else {
      local_fc = (undefined4)
                 CONCAT71((int7)((ulonglong)lVar4 >> 8),*(char *)(lVar4 + 0x152) != '\a');
    }
    (**(code **)(*param_1 + 0x9f8))(param_1,&local_a0);
    if ((longlong)local_98 != 0) {
      local_f0 = local_a0 + local_98;
      iVar7 = 0;
      plVar16 = local_a0;
      do {
        plVar1 = (longlong *)*plVar16;
        if (plVar1 != (longlong *)0x0) {
          local_b8 = (undefined8 *)0x0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_e8 = plVar16;
          (**(code **)(*plVar1 + 0x370))(plVar1,0,&local_b8);
          if ((longlong)(int)uStack_b0 != 0) {
            puVar13 = local_b8 + (longlong)(int)uStack_b0 * 2;
            puVar14 = local_b8;
            do {
              uVar5 = *(uint *)(param_1 + 0xc9);
              uVar9 = (ulonglong)uVar5;
              lVar4 = param_1[200];
              uVar10 = 0;
              iVar6 = (int)((ulonglong)*puVar14 >> 0x20);
              iVar3 = (int)*puVar14;
              if (0 < (int)uVar5) {
                do {
                  uVar15 = (int)(uVar9 >> 1) + (int)uVar10;
                  lVar12 = (ulonglong)uVar15 * 0x30;
                  iVar8 = *(int *)(lVar4 + lVar12) - iVar3;
                  if (iVar8 == 0) {
                    iVar8 = *(int *)(lVar4 + 4 + lVar12) - iVar6;
                  }
                  uVar11 = (uint)uVar9;
                  if (iVar8 < 0) {
                    uVar10 = (ulonglong)(uVar15 + (uVar11 & 1));
                  }
                  uVar9 = uVar9 >> 1;
                } while (1 < uVar11);
              }
              if ((int)uVar10 < (int)uVar5) {
                lVar12 = uVar10 * 0x30;
                iVar3 = iVar3 - *(int *)(lVar4 + lVar12);
                if (iVar3 == 0) {
                  iVar3 = iVar6 - *(int *)(lVar4 + 4 + lVar12);
                }
                if ((iVar3 < 0) ||
                   (plVar16 = (longlong *)(lVar4 + lVar12 + 8), plVar16 == (longlong *)0x0))
                goto LAB_14348042b;
              }
              else {
LAB_14348042b:
                plVar16 = (longlong *)FUN_140cc75a0(local_f8,puVar14);
              }
              iVar3 = (int)plVar16[1];
              *(uint *)(plVar16 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)plVar16 + 0xc) < iVar3 + 1U) {
                FUN_1446f48e2(plVar16,iVar3);
              }
              *(int *)(*plVar16 + (longlong)iVar3 * 4) = iVar7;
              if ((char)local_fc != '\0') {
                local_dc = (undefined4)*puVar14;
                local_d8 = 0;
                local_d4 = (undefined4)((ulonglong)*puVar14 >> 0x20);
                local_d0 = *(undefined4 *)((longlong)puVar14 + 0xc);
                local_cc = *(undefined1 *)(puVar14 + 1);
                local_70 = 0xff;
                local_68 = 0xffffffff;
                local_64 = 0;
                local_108 = 1;
                cVar2 = (**(code **)(*plVar1 + 0x3c0))(plVar1,0,&local_dc);
                if (cVar2 != '\0') {
                  *(undefined4 *)(plVar16 + 4) = local_90;
                }
              }
              puVar14 = puVar14 + 2;
            } while (puVar14 != puVar13);
          }
          bVar17 = (longlong)uStack_b0 < 0;
          uStack_b0 = uStack_b0 & 0xffffffff00000000;
          if (bVar17) {
            FUN_140504726(&local_b8,0);
          }
          bVar17 = (longlong)uStack_c0 < 0;
          uStack_c0 = uStack_c0 & 0xffffffff00000000;
          if (bVar17) {
            FUN_140504644(&local_c8,0);
          }
          (**(code **)(*plVar1 + 0x370))(plVar1,1,&local_b8);
          if ((longlong)(int)uStack_b0 != 0) {
            puVar13 = local_b8 + (longlong)(int)uStack_b0 * 2;
            puVar14 = local_b8;
            do {
              uVar5 = *(uint *)(param_1 + 0xc9);
              uVar9 = (ulonglong)uVar5;
              lVar4 = param_1[200];
              uVar10 = 0;
              iVar6 = (int)((ulonglong)*puVar14 >> 0x20);
              iVar3 = (int)*puVar14;
              if (0 < (int)uVar5) {
                do {
                  uVar15 = (int)(uVar9 >> 1) + (int)uVar10;
                  lVar12 = (ulonglong)uVar15 * 0x30;
                  iVar8 = *(int *)(lVar4 + lVar12) - iVar3;
                  if (iVar8 == 0) {
                    iVar8 = *(int *)(lVar4 + 4 + lVar12) - iVar6;
                  }
                  uVar11 = (uint)uVar9;
                  if (iVar8 < 0) {
                    uVar10 = (ulonglong)(uVar15 + (uVar11 & 1));
                  }
                  uVar9 = uVar9 >> 1;
                } while (1 < uVar11);
              }
              if ((int)uVar10 < (int)uVar5) {
                lVar12 = uVar10 * 0x30;
                iVar3 = iVar3 - *(int *)(lVar4 + lVar12);
                if (iVar3 == 0) {
                  iVar3 = iVar6 - *(int *)(lVar4 + 4 + lVar12);
                }
                if ((iVar3 < 0) || (lVar4 = lVar4 + lVar12 + 8, lVar4 == 0)) goto LAB_1434805e3;
              }
              else {
LAB_1434805e3:
                lVar4 = FUN_140cc75a0(local_f8);
              }
              iVar3 = *(int *)(lVar4 + 0x18);
              uVar5 = iVar3 + 1;
              *(uint *)(lVar4 + 0x18) = uVar5;
              if (*(uint *)(lVar4 + 0x1c) < uVar5) {
                FUN_1446f48e2((longlong *)(lVar4 + 0x10));
              }
              *(int *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar3 * 4) = iVar7;
              puVar14 = puVar14 + 2;
            } while (puVar14 != puVar13);
          }
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          plVar16 = local_e8;
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
            plVar16 = local_e8;
          }
        }
        iVar7 = iVar7 + 1;
        plVar16 = plVar16 + 1;
      } while (plVar16 != local_f0);
    }
    *(byte *)((longlong)param_1 + 0x63c) = *(byte *)((longlong)param_1 + 0x63c) & 0xfd;
    if (local_a0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434806c4 FUN_1434806c4 body=1528 status=ok
// SIG undefined FUN_1434806c4(void)

undefined8 FUN_1434806c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  code *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_e0 = param_2;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_100 = &local_b8;
    local_b8 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = &LAB_145a62952;
    local_108 = &LAB_147c8cd45;
    local_110 = &LAB_1461468ae;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 0x10000006;
    local_130 = 8;
    local_138 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar24 = DAT_14caf84d0;
  lVar16 = DAT_14caf84d0[0x22];
  if (lVar16 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar16 = plVar24[0x22];
  }
  fVar2 = *(float *)(lVar16 + 0x4c);
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_100 = &local_b8;
    local_b8 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = &LAB_145a62952;
    local_108 = &LAB_147c8cd45;
    local_110 = &LAB_1461468ae;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 0x10000006;
    local_130 = 8;
    local_138 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar24 = DAT_14caf84d0;
  lVar16 = DAT_14caf84d0[0x22];
  if (lVar16 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar16 = plVar24[0x22];
  }
  cVar5 = *(char *)(lVar16 + 0x14f);
  if (cVar5 == '\x01') {
    plVar24 = local_e0 + 6;
    iVar22 = (int)local_e0[7];
    *(int *)(local_e0 + 7) = iVar22 + 1;
    if (*(int *)((longlong)local_e0 + 0x3c) == iVar22) {
      FUN_141724806(plVar24,iVar22);
    }
    puVar1 = (undefined8 *)(*plVar24 + (longlong)iVar22 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  uVar15 = *(uint *)(*(longlong *)(param_1 + 8) + 0xe8);
  lVar16 = local_e0[1];
  *(uint *)(local_e0 + 1) = (int)lVar16 + uVar15;
  if ((uint)(*(int *)((longlong)local_e0 + 0xc) - (int)lVar16) < uVar15) {
    FUN_140c0b6f2();
  }
  if (cVar5 != '\0') {
    lVar16 = local_e0[6];
    iVar22 = *(int *)(lVar16 + 8);
    *(uint *)(lVar16 + 8) = iVar22 + uVar15;
    if ((uint)(*(int *)(lVar16 + 0xc) - iVar22) < uVar15) {
      FUN_14489624a();
    }
  }
  if (0 < (int)uVar15) {
    lVar16 = 0;
    lVar20 = 0;
    do {
      lVar23 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
      lVar25 = *local_e0;
      *(undefined4 *)(lVar25 + 8 + lVar20) = *(undefined4 *)(lVar23 + 8 + lVar16 * 4);
      *(undefined8 *)(lVar25 + lVar20) = *(undefined8 *)(lVar23 + lVar16 * 4);
      if (cVar5 != '\0') {
        lVar23 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
        fVar3 = *(float *)(lVar23 + 0x34 + lVar16 * 4);
        lVar25 = *(longlong *)local_e0[6];
        *(double *)(lVar25 + lVar16) = (double)*(float *)(lVar23 + 0x30 + lVar16 * 4);
        *(double *)(lVar25 + 8 + lVar16) = (double)fVar3;
      }
      lVar20 = lVar20 + 0xc;
      lVar16 = lVar16 + 0x10;
    } while ((ulonglong)uVar15 * 0xc != lVar20);
  }
  iVar22 = *(int *)(param_1 + 0x38);
  plVar24 = local_e0;
  if (0 < iVar22) {
    local_c0 = local_e0 + 2;
    local_c8 = local_e0 + 4;
    lVar16 = 0;
    local_d0 = param_1;
    do {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar16 * 8);
      uVar15 = *(uint *)(lVar20 + 0x4c);
      if ((((uVar15 != 0) && (lVar23 = *(longlong *)(lVar20 + 0x40), lVar23 != 0)) &&
          (*(int *)(lVar20 + 0x54) <= *(int *)(*(longlong *)(param_1 + 8) + 0xe8))) &&
         ((int)(*(int *)(lVar20 + 0x48) + uVar15 * 3 + -1) <= *(int *)(lVar23 + 0x20))) {
        uVar21 = 0;
        iVar22 = 2;
        local_d8 = lVar23;
        do {
          iVar6 = *(int *)(lVar20 + 0x48);
          lVar25 = *(longlong *)(lVar23 + 0x18);
          iVar7 = *(int *)(lVar25 + (longlong)(iVar22 + -2 + iVar6) * 4);
          iVar8 = *(int *)(lVar25 + (longlong)(iVar22 + -1 + iVar6) * 4);
          iVar6 = *(int *)(lVar25 + (longlong)(iVar22 + iVar6) * 4);
          if (fVar2 < 0.0) {
LAB_143480a56:
            iVar9 = (int)plVar24[3];
            lVar25 = (longlong)iVar9;
            *(uint *)(plVar24 + 3) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar24 + 0x1c) < iVar9 + 1U) {
              FUN_140e90710(local_c0,iVar9);
              lVar23 = local_d8;
              plVar24 = local_e0;
            }
            lVar17 = plVar24[2];
            *(int *)(lVar17 + lVar25 * 0xc) = iVar7;
            *(int *)(lVar17 + 4 + lVar25 * 0xc) = iVar8;
            *(int *)(lVar17 + 8 + lVar25 * 0xc) = iVar6;
            iVar6 = (int)plVar24[5];
            *(uint *)(plVar24 + 5) = iVar6 + 1U;
            if (*(uint *)((longlong)plVar24 + 0x2c) < iVar6 + 1U) {
              FUN_14488eebe(local_c8,iVar6);
              lVar23 = local_d8;
              plVar24 = local_e0;
            }
            *(short *)(*local_c8 + (longlong)iVar6 * 2) = (short)lVar16;
            uVar15 = *(uint *)(lVar20 + 0x4c);
          }
          else {
            lVar25 = *(longlong *)(*(longlong *)(local_d0 + 8) + 0xe0);
            lVar17 = (longlong)iVar7 * 0x40;
            fVar3 = *(float *)(lVar25 + 8 + lVar17);
            fVar4 = *(float *)(lVar25 + 4 + lVar17);
            lVar18 = (longlong)iVar8 * 0x40;
            lVar19 = (longlong)iVar6 * 0x40;
            fVar13 = *(float *)(lVar25 + 8 + lVar18) - fVar3;
            fVar12 = *(float *)(lVar25 + 4 + lVar18) - fVar4;
            fVar10 = *(float *)(lVar25 + lVar18) - *(float *)(lVar25 + lVar17);
            fVar3 = *(float *)(lVar25 + 8 + lVar19) - fVar3;
            fVar4 = *(float *)(lVar25 + 4 + lVar19) - fVar4;
            fVar14 = *(float *)(lVar25 + lVar19) - *(float *)(lVar25 + lVar17);
            fVar11 = fVar10 * fVar4 - fVar14 * fVar12;
            fVar10 = fVar13 * fVar14 - fVar3 * fVar10;
            fVar3 = fVar12 * fVar3 - fVar4 * fVar13;
            if (fVar2 < SQRT(fVar11 * fVar11 + fVar3 * fVar3 + fVar10 * fVar10) * 0.5)
            goto LAB_143480a56;
          }
          uVar21 = uVar21 + 1;
          iVar22 = iVar22 + 3;
        } while (uVar21 < uVar15);
        iVar22 = *(int *)(local_d0 + 0x38);
        param_1 = local_d0;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar22);
  }
  *(byte *)(plVar24 + 8) = *(byte *)(plVar24 + 8) | 1;
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143480cbd FUN_143480cbd body=55 status=ok
// SIG undefined FUN_143480cbd(void)

void FUN_143480cbd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad1970 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad1970 = FUN_14171c317(FUN_1463b91a4,uVar1,L"EPlaneConstraintAxisSetting");
  }
  return;
}



// FUNCTION 143480d1e FUN_143480d1e body=887 status=ok
// SIG undefined FUN_143480d1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_143480d1e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,longlong param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  char **local_100;
  undefined8 *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  char *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined2 local_a9;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1df8) {
    FUN_144b3d300();
    if (DAT_14cad1df8 == -1) {
      local_c0 = "MovementOverlapTest";
      local_b8 = CONCAT35(local_b8._5_3_,0x13);
      uVar10 = FUN_14001a6c0(&local_c0,1);
      DAT_14cad1df0 = (char *)(ulonglong)uVar10;
      _Init_thread_footer();
    }
  }
  local_9c = 0;
  local_b8 = 0;
  local_98 = 0x101;
  local_70 = 0;
  local_68 = 0x800000000;
  local_50 = 0;
  local_48 = 0x400000000;
  local_b0 = 0;
  local_a4 = 0;
  local_c0 = DAT_14cad1df0;
  local_af = 1;
  local_ad = 0;
  local_a0 = 0;
  local_ac = 0;
  local_aa = 0;
  if (param_6 != 0) {
    local_60 = *(undefined4 *)(param_6 + 0xc);
    local_48 = 0x400000001;
    local_b8 = *(undefined8 *)(param_6 + 0x18);
  }
  local_a9 = 0x101;
  local_d8 = _DAT_14cad0ee0;
  uStack_d0 = uRam000000014cad0ee8;
  local_e8 = _DAT_14cad0ed0;
  uStack_e0 = _DAT_14cad0ed8;
  lVar11 = 0;
  do {
    bVar1 = *(char *)((longlong)&local_e8 + lVar11) == DAT_149c360b0;
    bVar2 = *(char *)((longlong)&local_e8 + lVar11 + 1) == DAT_149c360b0._1_1_;
    bVar3 = *(char *)((longlong)&local_e8 + lVar11 + 2) == DAT_149c360b0._2_1_;
    bVar4 = *(char *)((longlong)&local_e8 + lVar11 + 3) == DAT_149c360b0._3_1_;
    bVar5 = *(char *)((longlong)&local_e8 + lVar11 + 4) == DAT_149c360b0._4_1_;
    bVar6 = *(char *)((longlong)&local_e8 + lVar11 + 5) == DAT_149c360b0._5_1_;
    bVar7 = *(char *)((longlong)&local_e8 + lVar11 + 6) == DAT_149c360b0._6_1_;
    bVar8 = *(char *)((longlong)&local_e8 + lVar11 + 7) == DAT_149c360b0._7_1_;
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_e8 + lVar11 + 7) = 2;
    }
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 1) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 2) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 3) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 4) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 5) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 6) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_e0 + lVar11 + 7) = 2;
    }
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x20);
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_c0,&local_e8);
  lVar11 = param_1[0x16];
  if (lVar11 == 0) {
    lVar11 = FUN_1448abda6(param_1);
  }
  local_f0 = &DAT_14cad0f08;
  local_108 = param_4;
  local_100 = &local_c0;
  local_f8 = &local_e8;
  uVar9 = FUN_140ad65d6(lVar11,param_5,param_2,param_3);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143481096 FUN_143481096 body=69 status=ok
// SIG undefined FUN_143481096(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143481096(void)

{
  _DAT_14cad1a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434810d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1a48,1);
  return;
}



// FUNCTION 1434810db FUN_1434810db body=69 status=ok
// SIG undefined FUN_1434810db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434810db(void)

{
  _DAT_14cad1a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348111d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1a58,1);
  return;
}



// FUNCTION 143481120 FUN_143481120 body=69 status=ok
// SIG undefined FUN_143481120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143481120(void)

{
  _DAT_14cad1a60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143481162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1a68,1);
  return;
}



// FUNCTION 143481165 FUN_143481165 body=55 status=ok
// SIG undefined FUN_143481165(void)

void FUN_143481165(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad1ac0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad1ac0 = FUN_14171c317(FUN_1463b9806,uVar1,L"EPhysicsStateAction");
  }
  return;
}



// FUNCTION 1434811c0 FUN_1434811c0 body=144 status=ok
// SIG undefined FUN_1434811c0(void)

void FUN_1434811c0(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1d8);
  if (plVar4 != (longlong *)0x0) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    if ((param_3 == '\0') && (cVar5 = (**(code **)(*plVar4 + 0x790))(plVar4), cVar5 != '\0')) {
      return;
    }
    plVar4[0x7b] = (longlong)(dVar1 + (double)plVar4[0x7b]);
    plVar4[0x7c] = (longlong)(dVar2 + (double)plVar4[0x7c]);
    plVar4[0x7d] = (longlong)(dVar3 + (double)plVar4[0x7d]);
  }
  return;
}



// FUNCTION 1434812b5 FUN_1434812b5 body=69 status=ok
// SIG undefined FUN_1434812b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434812b5(void)

{
  _DAT_14cad1be0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434812f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1be8,1);
  return;
}



// FUNCTION 1434812fa FUN_1434812fa body=664 status=ok
// SIG undefined FUN_1434812fa(void)

undefined8 FUN_1434812fa(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  longlong lVar10;
  int *piVar11;
  byte bVar12;
  
  piVar11 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    piVar11 = &DAT_14c760db4;
  }
  if ((longlong)*piVar11 < 3) {
    cVar9 = FUN_14006f626(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar11 * 2));
    if (cVar9 == '\0') {
      return 0;
    }
    if (DAT_14c761410 == 0) {
      return 0;
    }
  }
  else if (DAT_14c761410 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_3 + 0x15d0);
  *(uint *)(param_3 + 0x15d0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x15d4) < iVar4 + 1U) {
    FUN_1479fa3de(param_3,iVar4);
  }
  lVar10 = *(longlong *)(param_3 + 0x15c0);
  if (*(longlong *)(param_3 + 0x15c0) == 0) {
    lVar10 = param_3;
  }
  bVar12 = 0;
  puVar1 = (undefined4 *)(lVar10 + (longlong)iVar4 * 0x3a0);
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x3c) = 0;
  *(undefined8 *)(puVar1 + 0x3e) = 0;
  *(undefined8 *)(puVar1 + 0x42) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x48) = 0x5500000000000000;
  *(undefined8 *)(puVar1 + 0x4a) = 0;
  *(undefined8 *)(puVar1 + 0x4c) = 0x55000000;
  *(undefined8 *)(puVar1 + 0x80) = 0;
  *(undefined8 *)(puVar1 + 0x84) = 0x600000000;
  *(undefined8 *)(puVar1 + 200) = 0;
  *(undefined8 *)(puVar1 + 0xcc) = 0x800000000;
  *(undefined1 *)(puVar1 + 0xe0) = 0;
  puVar1[0xe1] = 0xffffffff;
  *(undefined8 *)(puVar1 + 0xe2) = 0xbf8000003f800000;
  *(undefined2 *)(puVar1 + 0xe4) = 0;
  uVar2 = *(ulonglong *)(param_1 + 0x140);
  uVar6 = *(uint *)(param_1 + 0x134);
  uVar7 = *(undefined4 *)(param_1 + 0x138);
  uVar8 = *(uint *)(param_1 + 0x13c);
  *puVar1 = *(undefined4 *)(param_1 + 0x130);
  puVar1[1] = uVar6 ^ 0x80000000;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8 ^ 0x80000000;
  *(ulonglong *)(puVar1 + 4) = uVar2 ^ 0x8000000000000000;
  uVar3 = *(undefined8 *)(param_1 + 200);
  memmove(puVar1 + 8,(void *)(param_1 + 0x50),0x60);
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x22) = 0;
  *(undefined8 *)(puVar1 + 0x24) = 0;
  *(undefined8 *)(puVar1 + 0x26) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x2a) = 0x3ff0000000000000;
  dVar5 = (double)*(float *)(param_1 + 0x298);
  *(undefined8 *)(puVar1 + 0x2c) = 0;
  *(undefined8 *)(puVar1 + 0x2e) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(double *)(puVar1 + 0x32) = dVar5;
  *(double *)(puVar1 + 0x34) = dVar5;
  *(double *)(puVar1 + 0x36) = dVar5;
  *(double *)(puVar1 + 0x38) = dVar5;
  *(undefined8 *)(puVar1 + 0x3c) = 0;
  *(undefined8 *)(puVar1 + 0x3e) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x42) = 0;
  puVar1[0x44] = 0x3dcccccd;
  puVar1[0x45] = *(undefined4 *)(param_1 + 0x298);
  *(undefined1 *)(puVar1 + 0xe4) = 1;
  if ((*(byte *)(param_1 + 0x1d3) & 0x10) != 0) {
    piVar11 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      piVar11 = &DAT_14c760db4;
    }
    bVar12 = (byte)((uint)(&DAT_14ca814c8)
                          [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar11 * 2) * 0xf] >>
                   9) & 1;
  }
  *(byte *)(lVar10 + (longlong)iVar4 * 0x3a0 + 0x391) = bVar12;
  return 1;
}



// FUNCTION 143481592 FUN_143481592 body=2631 status=ok
// SIG undefined FUN_143481592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143481592(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auStack_2e8 [40];
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(longlong *)(param_1 + 0x658) == 0) {
    if ((DAT_14c950c29 & *(longlong *)(param_1 + 0x660) != 0) != 0) goto LAB_143481fd0;
    if (*(longlong *)(param_1 + 0x660) == 0) goto LAB_143481f27;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143481fd0:
    FUN_1456cec3c();
  }
  puVar6 = *(undefined8 **)(param_1 + 0xad0);
  puVar7 = *(undefined8 **)(param_1 + 0x6d0 + (longlong)*(int *)(param_1 + 0x714) * 0x10);
  puVar26 = puVar6;
  puVar27 = puVar7;
  for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar27 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar27 = puVar27 + 1;
  }
  if (1 < *(int *)(param_1 + 0xad8)) {
    lVar23 = 1;
    lVar28 = 0;
    do {
      plVar25 = *(longlong **)(param_1 + 0x658);
      if (plVar25 == (longlong *)0x0) {
        plVar25 = *(longlong **)(param_1 + 0x660);
        if ((DAT_14c950c29 & plVar25 != (longlong *)0x0) != 0) goto LAB_143481f13;
      }
      else if (DAT_14c950c29 == 1) {
LAB_143481f13:
        FUN_1456cec3c(plVar25);
      }
      lVar20 = (**(code **)(*plVar25 + 0x310))(plVar25);
      iVar22 = -1;
      if (lVar23 < *(int *)(lVar20 + 0x28)) {
        iVar22 = *(int *)(*(longlong *)(lVar20 + 0x20) + 0x14 + lVar28);
      }
      lVar21 = (longlong)iVar22;
      pdVar1 = (double *)(puVar7 + lVar21 * 0xc);
      auVar34 = *(undefined1 (*) [16])(puVar7 + lVar21 * 0xc + 8);
      dVar33 = auVar34._0_8_;
      dVar9 = auVar34._8_8_;
      auVar39 = *(undefined1 (*) [16])(puVar7 + lVar21 * 0xc + 10);
      dVar37 = auVar39._0_8_;
      dVar30 = auVar39._8_8_;
      auVar38 = *(undefined1 (*) [16])(puVar6 + lVar28 + 0x14);
      dVar49 = auVar38._0_8_;
      dVar47 = auVar38._8_8_;
      auVar31 = *(undefined1 (*) [16])(puVar6 + lVar28 + 0x16);
      dVar8 = auVar31._0_8_;
      auVar34 = minpd(auVar38,auVar34);
      auVar38 = minpd(auVar31,auVar39);
      auVar39._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar39._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar22 = movmskpd(iVar22 * 0x60,auVar39);
      auVar34._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      uVar24 = movmskpd(*(int *)(lVar20 + 0x28),auVar34);
      if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
        dVar10 = (double)puVar6[lVar28 + 0xc];
        dVar11 = (double)(puVar6 + lVar28 + 0xc)[1];
        dVar12 = (double)puVar6[lVar28 + 0xe];
        dVar13 = (double)(puVar6 + lVar28 + 0xe)[1];
        dVar14 = *pdVar1;
        dVar15 = pdVar1[1];
        dVar16 = pdVar1[2];
        dVar17 = pdVar1[3];
        dVar32 = pdVar1[3];
        dVar2 = pdVar1[3];
        dVar41 = *pdVar1;
        dVar44 = *pdVar1;
        dVar36 = pdVar1[1];
        dVar42 = pdVar1[1];
        dVar43 = pdVar1[2];
        dVar45 = pdVar1[2];
        dVar55 = (double)puVar6[lVar28 + 0x10] * dVar33;
        dVar56 = (double)(puVar6 + lVar28 + 0x10)[1] * dVar9;
        dVar53 = (double)puVar6[lVar28 + 0x12] * dVar37;
        dVar54 = (double)(puVar6 + lVar28 + 0x12)[1] * dVar30;
        dVar50 = dVar56 * dVar14 - dVar15 * dVar55;
        dVar51 = dVar53 * dVar15 - dVar16 * dVar56;
        dVar52 = dVar55 * dVar16 - dVar14 * dVar53;
        dVar48 = dVar54 * dVar17 - dVar17 * dVar54;
        dVar51 = dVar51 + dVar51;
        dVar52 = dVar52 + dVar52;
        dVar50 = dVar50 + dVar50;
        dVar48 = dVar48 + dVar48;
        dVar46 = pdVar1[4];
        dVar4 = pdVar1[5];
        dVar3 = pdVar1[6];
        dVar5 = pdVar1[7];
        puVar7[lVar28 + 0xc] =
             dVar11 * dVar43 * -1.0 + dVar12 * dVar36 + dVar13 * dVar41 * 1.0 + dVar10 * dVar32;
        (puVar7 + lVar28 + 0xc)[1] =
             dVar10 * dVar45 * 1.0 + dVar13 * dVar42 + dVar12 * dVar44 * -1.0 + dVar11 * dVar2;
        puVar7[lVar28 + 0xe] =
             dVar13 * dVar43 * 1.0 + ((dVar41 * dVar11 * 1.0 + dVar12 * dVar32) - dVar10 * dVar36);
        (puVar7 + lVar28 + 0xe)[1] =
             dVar12 * dVar45 * -1.0 + ((dVar44 * dVar10 * -1.0 + dVar13 * dVar2) - dVar11 * dVar42);
        puVar7[lVar28 + 0x10] =
             (dVar50 * dVar15 - dVar16 * dVar52) + dVar32 * dVar51 + dVar55 + dVar46;
        (puVar7 + lVar28 + 0x10)[1] =
             (dVar51 * dVar16 - dVar50 * dVar14) + dVar2 * dVar52 + dVar56 + dVar4;
        puVar7[lVar28 + 0x12] =
             (dVar52 * dVar14 - dVar15 * dVar51) + dVar32 * dVar50 + dVar53 + dVar3;
        (puVar7 + lVar28 + 0x12)[1] =
             (dVar48 * dVar17 - dVar48 * dVar17) + dVar2 * dVar48 + dVar54 + dVar5;
        puVar7[lVar28 + 0x14] = dVar49 * dVar33;
        (puVar7 + lVar28 + 0x14)[1] = dVar47 * dVar9;
        puVar7[lVar28 + 0x16] = dVar8 * dVar37;
        (puVar7 + lVar28 + 0x16)[1] = auVar31._8_8_ * dVar30;
      }
      else {
        dVar2 = *pdVar1;
        dVar41 = pdVar1[1];
        dVar44 = pdVar1[2];
        dVar36 = dVar41 + dVar41;
        dVar42 = dVar44 + dVar44;
        dVar46 = dVar2 * (dVar2 + dVar2);
        local_1a8 = (1.0 - (dVar46 + dVar41 * dVar36)) * dVar37;
        dVar32 = pdVar1[3];
        dVar43 = dVar42 * dVar32;
        dVar45 = (dVar2 + dVar2) * pdVar1[3];
        dVar32 = dVar36 * dVar32;
        local_1b8 = (dVar32 + *pdVar1 * dVar42) * dVar37;
        dVar30 = dVar30 * auVar31._8_8_;
        local_2a8._8_4_ = SUB84(dVar30,0);
        local_2a8._0_8_ = dVar37 * dVar8;
        local_2a8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        dStack_1d0 = (1.0 - (dVar44 * dVar42 + dVar46)) * dVar9;
        dVar30 = (dVar36 * dVar2 + dVar43) * dVar33;
        local_1c8 = (dVar42 * dVar41 + dVar45) * dVar9;
        local_1d8 = (dVar36 * dVar2 - dVar43) * dVar9;
        dStack_1b0 = (dVar42 * dVar41 - dVar45) * dVar37;
        local_1e8 = (*pdVar1 * dVar42 - dVar32) * dVar33;
        local_1f8._8_4_ = SUB84(dVar30,0);
        local_1f8._0_8_ = (1.0 - (dVar44 * dVar42 + dVar41 * dVar36)) * dVar33;
        local_1f8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar1[4];
        dStack_190 = pdVar1[5];
        local_188 = pdVar1[6];
        uStack_180 = 0x3ff0000000000000;
        dVar30 = (double)puVar6[lVar28 + 0xc];
        dVar32 = (double)(puVar6 + lVar28 + 0xc)[1];
        dVar2 = (double)puVar6[lVar28 + 0xe];
        dVar41 = dVar32 + dVar32;
        dVar44 = dVar2 + dVar2;
        dVar43 = dVar30 * (dVar30 + dVar30);
        local_228 = (1.0 - (dVar43 + dVar32 * dVar41)) * dVar8;
        dVar37 = (double)puVar6[lVar28 + 0xf];
        dVar36 = dVar44 * dVar37;
        dVar42 = (dVar30 + dVar30) * (double)puVar6[lVar28 + 0xf];
        dVar37 = dVar41 * dVar37;
        local_238 = (dVar37 + (double)puVar6[lVar28 + 0xc] * dVar44) * dVar8;
        dStack_230 = (dVar44 * dVar32 - dVar42) * dVar8;
        local_2b8 = dVar33 * dVar49;
        dStack_2b0 = dVar9 * dVar47;
        local_278 = (1.0 - (dVar2 * dVar44 + dVar32 * dVar41)) * dVar49;
        dVar33 = (1.0 - (dVar2 * dVar44 + dVar43)) * dVar47;
        dStack_270 = (dVar41 * dVar30 + dVar36) * dVar49;
        local_248 = (dVar44 * dVar32 + dVar42) * dVar47;
        local_268 = ((double)puVar6[lVar28 + 0xc] * dVar44 - dVar37) * dVar49;
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar33,0);
        local_258._0_8_ = (dVar41 * dVar30 - dVar36) * dVar47;
        local_258._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = puVar6[lVar28 + 0x10];
        uStack_210 = (puVar6 + lVar28 + 0x10)[1];
        local_208 = puVar6[lVar28 + 0x12];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178,&local_278,local_1f8);
        dVar9 = dStack_2b0;
        dVar8 = local_2b8;
        local_2c0 = local_168;
        dVar49 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
        dVar37 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar33 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar29 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
        dVar49 = (double)(~uVar29 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar29);
        uVar29 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
        dVar37 = (double)(~uVar29 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar29);
        uVar29 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
        dVar33 = (double)(~uVar29 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar29);
        auVar38._8_8_ = -(ulonglong)(0.0 <= dStack_2b0);
        auVar38._0_8_ = -(ulonglong)(0.0 <= local_2b8);
        auVar34 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar38);
        uVar18 = local_2a8._0_8_;
        uVar19 = local_2a8._8_8_;
        dVar30 = (double)(~-(ulonglong)(0.0 <= (double)local_2a8._0_8_) & 0xbff0000000000000 |
                         (ulonglong)
                         ((uint)(-(ulonglong)(0.0 <= (double)local_2a8._0_8_) >> 0x20) & 0x3ff00000)
                         << 0x20);
        dVar47 = auVar34._0_8_;
        local_178 = local_178 * dVar49 * dVar47;
        local_170 = local_170 * dVar49 * dVar47;
        local_168 = dVar49 * local_168 * dVar47;
        dVar49 = auVar34._8_8_;
        local_148 = dVar37 * local_148 * dVar49;
        local_150 = local_150 * dVar37 * dVar49;
        local_158 = dVar49 * local_158 * dVar37;
        local_128 = dVar33 * local_128 * dVar30;
        local_130 = local_130 * dVar33 * dVar30;
        local_138 = dVar30 * local_138 * dVar33;
        FUN_14481fd10(&local_298,&local_178);
        dVar33 = local_288 * local_288 + local_298 * local_298;
        dVar37 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar35._0_8_ = dVar33 + dVar37;
        auVar35._8_8_ = dVar33 + dVar37;
        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar34 = sqrtpd(auVar35,auVar35);
        auVar39 = divpd(_DAT_149934d80,auVar34);
        auVar40._0_8_ = auVar39._0_8_ * local_288;
        auVar40._8_8_ = auVar39._8_8_ * dStack_280;
        auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar31);
        puVar7[lVar28 + 0x14] = dVar8;
        (puVar7 + lVar28 + 0x14)[1] = dVar9;
        puVar7[lVar28 + 0x16] = uVar18;
        (puVar7 + lVar28 + 0x16)[1] = uVar19;
        puVar7[lVar28 + 0xc] =
             (ulonglong)(local_298 * auVar39._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        (puVar7 + lVar28 + 0xc)[1] =
             (ulonglong)(dStack_290 * auVar39._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        *(undefined1 (*) [16])(puVar7 + lVar28 + 0xe) = auVar34;
        puVar7[lVar28 + 0x10] = local_118;
        (puVar7 + lVar28 + 0x10)[1] = uStack_110;
        puVar7[lVar28 + 0x12] = local_108;
        (puVar7 + lVar28 + 0x12)[1] = 0;
      }
      lVar23 = lVar23 + 1;
      lVar28 = lVar28 + 0xc;
    } while (lVar23 < *(int *)(param_1 + 0xad8));
  }
  *(byte *)(param_1 + 0x8a1) = *(byte *)(param_1 + 0x8a1) | 1;
LAB_143481f27:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143481fda FUN_143481fda body=162 status=ok
// SIG undefined FUN_143481fda(void)

void FUN_143481fda(longlong *param_1)

{
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) == 0) {
      if (param_1[0xcc] == 0) {
        return;
      }
      goto LAB_143481ff7;
    }
  }
  else if (DAT_14c950c29 != 1) goto LAB_143481ff7;
  FUN_1456cec3c();
LAB_143481ff7:
  if ((int)param_1[(longlong)(int)param_1[0xe3] * 2 + 0xdb] != 0) {
    FUN_143481592(param_1);
    (**(code **)(*param_1 + 0xb38))(param_1);
    FUN_140058d06(param_1,0,0);
    (**(code **)(*param_1 + 0x540))(param_1);
    FUN_1448c69c8(param_1);
    FUN_1448c6f34(param_1);
    *(undefined1 *)(param_1 + 0x189) = 0;
  }
  return;
}



// FUNCTION 143482090 FUN_143482090 body=69 status=ok
// SIG undefined FUN_143482090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143482090(void)

{
  _DAT_14cad1c90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434820d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1c98,1);
  return;
}



// FUNCTION 1434820d5 FUN_1434820d5 body=69 status=ok
// SIG undefined FUN_1434820d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434820d5(void)

{
  _DAT_14cad1ca8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143482117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1cb0,1);
  return;
}



// FUNCTION 14348211a FUN_14348211a body=69 status=ok
// SIG undefined FUN_14348211a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348211a(void)

{
  _DAT_14cad1cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348215c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1cc0,1);
  return;
}



// FUNCTION 14348215f FUN_14348215f body=69 status=ok
// SIG undefined FUN_14348215f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348215f(void)

{
  _DAT_14cad1cc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434821a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1cd0,1);
  return;
}



// FUNCTION 1434821a4 FUN_1434821a4 body=69 status=ok
// SIG undefined FUN_1434821a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434821a4(void)

{
  _DAT_14cad1cd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434821e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1ce0,1);
  return;
}



// FUNCTION 1434821e9 FUN_1434821e9 body=69 status=ok
// SIG undefined FUN_1434821e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434821e9(void)

{
  _DAT_14cad1ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348222b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1cf0,1);
  return;
}



// FUNCTION 14348222e FUN_14348222e body=248 status=ok
// SIG undefined FUN_14348222e(void)

void FUN_14348222e(longlong param_1)

{
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140156a6a(param_1 + -0x30);
  FUN_140156924(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + 0x288) + 0x20))(param_1 + 0x288,&local_50);
  local_60 = local_50;
  local_58 = local_48;
  FUN_14015671e(&local_40);
  local_70 = local_50;
  local_68 = local_48;
  FUN_140156810(local_28,&local_70,0);
  FUN_1448635f4(&local_40);
  FUN_143605a64(param_1 + 0x3e0,&local_40);
  if (&local_40 != (undefined4 *)(param_1 + 0x330)) {
    *(undefined8 *)(param_1 + 0x340) = local_30;
    *(undefined4 *)(param_1 + 0x330) = local_40;
    *(undefined4 *)(param_1 + 0x334) = uStack_3c;
    *(undefined4 *)(param_1 + 0x338) = uStack_38;
    *(undefined4 *)(param_1 + 0x33c) = uStack_34;
    *(undefined1 *)(param_1 + 0x348) = 1;
  }
  FUN_14342d416(param_1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143482328 FUN_143482328 body=51 status=ok
// SIG undefined FUN_143482328(void)

void FUN_143482328(longlong param_1)

{
  if (*(char *)(param_1 + 0x348) == '\x01') {
    FUN_143605bbe(param_1 + 0x330);
    if (*(char *)(param_1 + 0x348) == '\x01') {
      *(undefined1 *)(param_1 + 0x348) = 0;
    }
  }
  return;
}



// FUNCTION 14348236b FUN_14348236b body=69 status=ok
// SIG undefined FUN_14348236b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348236b(void)

{
  _DAT_14cad1d50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434823ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad1d58,1);
  return;
}



// FUNCTION 1434823b4 FUN_1434823b4 body=318 status=ok
// SIG undefined FUN_1434823b4(void)

longlong FUN_1434823b4(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x610))();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    if (DAT_14caec470 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417df956;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463eaa20;
      local_48 = &LAB_147bbd9ea;
      local_50 = FUN_1401cf6d7;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
      lVar1 = FUN_14090ceee(lVar1,param_1,0);
      (**(code **)(*param_1 + 0x638))(param_1,param_2,lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143482562 FUN_143482562 body=530 status=ok
// SIG undefined FUN_143482562(void)

void FUN_143482562(undefined8 param_1,undefined8 param_2,void *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 local_138 [184];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caddfd8) {
    FUN_144b3d300(&DAT_14caddfd8);
    if (DAT_14caddfd8 == -1) {
      FUN_1456bdea2(&DAT_14caddf88);
      atexit((_func_5014 *)&LAB_14350c396);
      _Init_thread_footer(&DAT_14caddfd8);
    }
  }
  cVar3 = FUN_14350c39c(&DAT_14caddf88,param_1,param_2,param_3);
  if ((cVar3 == '\0') && (*(int *)((longlong)param_3 + 0xdc) != 0)) {
    uVar1 = *(uint *)((longlong)param_3 + 0xd8);
    if (((-1 < (int)uVar1) &&
        ((((int)uVar1 < DAT_14c9647dc &&
          (plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 != (longlong *)0x0)) && ((int)plVar5[2] == *(int *)((longlong)param_3 + 0xdc)))))
       && (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))) {
      memcpy(local_138,param_3,0xb8);
      local_80 = *(undefined8 *)((longlong)param_3 + 0xb8);
      local_78 = *(undefined8 *)((longlong)param_3 + 0xc0);
      uStack_70 = *(undefined8 *)((longlong)param_3 + 200);
      local_68 = *(undefined4 *)((longlong)param_3 + 0xd0);
      local_64 = *(undefined1 *)((longlong)param_3 + 0xd4);
      local_40 = *(undefined8 *)((longlong)param_3 + 0xf8);
      local_60 = *(uint *)((longlong)param_3 + 0xd8);
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0xdc);
      uStack_58 = *(undefined4 *)((longlong)param_3 + 0xe0);
      uStack_54 = *(undefined4 *)((longlong)param_3 + 0xe4);
      local_50 = *(undefined4 *)((longlong)param_3 + 0xe8);
      uStack_4c = *(undefined4 *)((longlong)param_3 + 0xec);
      uStack_48 = *(undefined4 *)((longlong)param_3 + 0xf0);
      uStack_44 = *(undefined4 *)((longlong)param_3 + 0xf4);
      local_148 = local_138;
      FUN_14067d152(param_2,param_1,lVar2,1);
      if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
        lVar4 = FUN_140a023d6((longlong)param_3 + 0xb8);
        if (lVar4 != 0) {
          local_148 = param_3;
          FUN_14067cf3c(lVar4,lVar2,param_1,0);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143482778 FUN_143482778 body=207 status=ok
// SIG undefined FUN_143482778(void)

void FUN_143482778(longlong param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  bVar1 = (*(byte *)(param_1 + -0x20c) & 1) == 0;
  if (bVar1) {
    dVar3 = 0.0;
    dVar5 = 0.0;
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar6 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = *(double *)(param_1 + -0x138) + *(double *)(param_1 + -0x120);
    dVar6 = *(double *)(param_1 + -0x140) + *(double *)(param_1 + -0x128);
    dVar7 = *(double *)(param_1 + -0x148) + *(double *)(param_1 + -0x130);
    dVar2 = *(double *)(param_1 + -0x138) - *(double *)(param_1 + -0x120);
    dVar5 = *(double *)(param_1 + -0x140) - *(double *)(param_1 + -0x128);
    dVar3 = *(double *)(param_1 + -0x148) - *(double *)(param_1 + -0x130);
  }
  *param_2 = dVar3;
  param_2[1] = dVar5;
  param_2[2] = dVar2;
  param_2[3] = dVar7;
  param_2[4] = dVar6;
  param_2[5] = dVar4;
  *(bool *)(param_2 + 6) = !bVar1;
  return;
}



// FUNCTION 143482848 FUN_143482848 body=1600 status=ok
// SIG undefined FUN_143482848(void)

ulonglong FUN_143482848(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  ulonglong uStack_70;
  code *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cad2858 == 0) {
      local_d0 = &local_68;
      local_68 = FUN_144a7958c;
      local_c0 = FUN_14081d0ea;
      local_c8 = (code *)&LAB_146395584;
      local_d8 = &LAB_147a0ba80;
      local_e0 = &LAB_14575ccce;
      local_e8 = L"Engine";
      local_f0 = 0x40000000000;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = (undefined8 *)CONCAT44(local_108._4_4_,0x1180);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar5 = param_2[2];
    iVar8 = *(int *)(lVar5 + 0x38);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= iVar8) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      uVar13 = 0;
      goto LAB_143482cb6;
    }
    if (DAT_14cac1d70 == 0) {
      local_d0 = &local_68;
      local_68 = FUN_144b223ce;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_1432411d6;
      local_d8 = &LAB_147878f54;
      local_e0 = &LAB_1417ad3ba;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = (undefined8 *)CONCAT44(local_108._4_4_,0xb10);
      FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
      lVar5 = param_2[2];
      iVar8 = *(int *)(lVar5 + 0x38);
    }
    iVar1 = *(int *)(DAT_14cac1d70 + 0x38);
    if ((iVar1 <= iVar8) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) == DAT_14cac1d70 + 0x30)) {
      uVar13 = 0;
      lVar5 = (**(code **)(*param_1 + 0x7b8))
                        (param_1,0,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),0xffffffff);
      if (lVar5 != 0) {
        local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffffffffff00);
        FUN_147c48234(lVar5,param_3,param_4,param_2 + 0x107);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
      }
      goto LAB_143482cb6;
    }
  }
  lVar5 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
  pcVar6 = (code *)(**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (pcVar6 == (code *)0x0 || lVar5 == 0) {
    (**(code **)(param_2[0x57] + 0x20))(param_2 + 0x57,&local_78);
    (**(code **)(param_1[0x57] + 0x20))(param_1 + 0x57,&local_88);
    local_98 = local_78;
    local_90 = (int)uStack_70;
    FUN_144a56970(&local_68);
    puVar10 = local_78;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    if ((longlong)(int)uStack_70 != 0) {
      lVar5 = 0;
      do {
        uVar13 = uStack_a0;
        plVar7 = *(longlong **)((longlong)puVar10 + lVar5);
        if ((plVar7 == (longlong *)0x0) || (lVar11 = *plVar7, lVar11 == 0)) goto LAB_143482a4e;
        iVar8 = *(int *)(lVar11 + 0x1c);
        if (iVar8 == 0xb) {
          plVar7 = (longlong *)(lVar11 + 0x40);
LAB_1434829ff:
          lVar11 = *plVar7;
          if ((lVar11 != 0) &&
             ((*(byte *)(lVar11 + 0x90) < 2 || (*(char *)(lVar11 + 0x1b9) == '\0')))) {
            lVar11 = (longlong)(int)uStack_a0;
            uVar4 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
            if (uStack_a0._4_4_ < uVar4) {
              FUN_14075a758(&local_a8,uVar13 & 0xffffffff);
            }
            local_a8[lVar11] = *(undefined8 *)((longlong)puVar10 + lVar5);
          }
        }
        else if (iVar8 == 2) {
          iVar8 = (int)plVar7[1];
          if (((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar11 + 0x418))) &&
             (lVar12 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x410) + (longlong)iVar8 * 4),
             lVar12 != -1)) {
            plVar7 = (longlong *)(lVar12 * 8 + *(longlong *)(lVar11 + 0x440));
            goto LAB_1434829ff;
          }
        }
        else if (iVar8 == 0xc) {
          plVar7 = (longlong *)(lVar11 + 0x128);
          goto LAB_1434829ff;
        }
LAB_143482a4e:
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)uStack_70 * 8 != lVar5);
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8(local_78);
    }
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    lVar5 = CONCAT44(uStack_84,local_88);
    if ((longlong)iStack_80 != 0) {
      lVar11 = 0;
      do {
        uVar13 = uStack_a0;
        plVar7 = *(longlong **)(lVar5 + lVar11);
        if ((plVar7 == (longlong *)0x0) || (lVar12 = *plVar7, lVar12 == 0)) goto LAB_143482b67;
        iVar8 = *(int *)(lVar12 + 0x1c);
        if (iVar8 == 0xb) {
          plVar7 = (longlong *)(lVar12 + 0x40);
LAB_143482b18:
          lVar12 = *plVar7;
          if ((lVar12 != 0) &&
             ((*(byte *)(lVar12 + 0x90) < 2 || (*(char *)(lVar12 + 0x1b9) == '\0')))) {
            lVar12 = (longlong)(int)uStack_a0;
            uVar4 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
            if (uStack_a0._4_4_ < uVar4) {
              FUN_14075a758(&local_a8,uVar13 & 0xffffffff);
            }
            *(undefined8 *)((longlong)local_a8 + lVar12 * 8) = *(undefined8 *)(lVar5 + lVar11);
          }
        }
        else if (iVar8 == 2) {
          iVar8 = (int)plVar7[1];
          if (((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar12 + 0x418))) &&
             (lVar9 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x410) + (longlong)iVar8 * 4),
             lVar9 != -1)) {
            plVar7 = (longlong *)(lVar9 * 8 + *(longlong *)(lVar12 + 0x440));
            goto LAB_143482b18;
          }
        }
        else if (iVar8 == 0xc) {
          plVar7 = (longlong *)(lVar12 + 0x128);
          goto LAB_143482b18;
        }
LAB_143482b67:
        lVar11 = lVar11 + 8;
      } while ((longlong)iStack_80 * 8 != lVar11);
      lVar5 = CONCAT44(uStack_84,local_88);
    }
    if (lVar5 != 0) {
      FUN_1400020a8(lVar5);
    }
    local_88 = (undefined4)local_a8;
    uStack_84 = local_a8._4_4_;
    iStack_80 = (int)uStack_a0;
    uStack_7c = uStack_a0._4_4_;
    local_a8 = (undefined8 *)local_50;
    if ((longlong)(int)uStack_70 != 0) {
      local_b0 = local_78 + (int)uStack_70;
      puVar10 = local_78;
      do {
        lVar5 = (longlong)iStack_80;
        if (lVar5 != 0) {
          uVar2 = *puVar10;
          lVar11 = CONCAT44(uStack_84,local_88);
          lVar12 = 0;
          do {
            local_100 = CONCAT31(local_100._1_3_,*(undefined1 *)(param_5 + 0x10));
            local_108 = &DAT_14c846480;
            cVar3 = FUN_1429e0cc0(&local_a8,uVar2,&DAT_14c846480,*(undefined8 *)(lVar11 + lVar12));
            if (cVar3 != '\0') {
              uVar13 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
              goto LAB_143482c85;
            }
            lVar12 = lVar12 + 8;
          } while (lVar5 * 8 != lVar12);
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != local_b0);
    }
    uVar13 = 0;
LAB_143482c85:
    FUN_1448635f4(&local_68);
    puVar10 = local_78;
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
      puVar10 = local_78;
    }
  }
  else {
    local_60 = (undefined8 *)0x0;
    local_58 = &DAT_100000001;
    local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffffffffff00);
    local_68 = pcVar6;
    uVar4 = FUN_1447e1744(lVar5,param_3,param_4,&local_68);
    uVar13 = (ulonglong)uVar4;
    puVar10 = local_60;
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143482cb6:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 143482e8e FUN_143482e8e body=3649 status=ok
// SIG undefined FUN_143482e8e(void)

void FUN_143482e8e(longlong *param_1,char *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char cVar20;
  int iVar21;
  longlong lVar22;
  char *pcVar23;
  byte bVar24;
  longlong *plVar25;
  longlong lVar26;
  char *pcVar27;
  ulonglong uVar28;
  longlong *plVar29;
  bool bVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  char local_3f0;
  longlong **local_3e8;
  char local_3d5;
  undefined4 local_3d4;
  longlong **local_3d0;
  undefined4 local_3c4;
  undefined4 local_3c0;
  uint local_3bc;
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  char *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined4 local_380;
  longlong *local_378;
  longlong *plStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_320 [184];
  longlong local_268;
  longlong *local_260;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  undefined4 local_240;
  char local_23c;
  longlong *local_238;
  longlong *plStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15f;
  undefined4 uStack_15b;
  undefined4 uStack_157;
  undefined4 uStack_153;
  undefined4 uStack_14f;
  undefined4 uStack_14b;
  undefined4 uStack_147;
  undefined3 uStack_143;
  undefined8 uStack_140;
  undefined3 uStack_133;
  undefined1 local_130;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined4 uStack_127;
  undefined3 uStack_123;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined3 uStack_db;
  undefined1 local_d8;
  undefined4 uStack_d7;
  undefined4 uStack_d3;
  undefined4 uStack_cf;
  undefined4 uStack_cb;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 uStack_bf;
  undefined3 uStack_bb;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if ((param_1 == (longlong *)0x0) || ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0))
  goto LAB_143483bbb;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caddfd8) && (FUN_144b3d300(&DAT_14caddfd8), DAT_14caddfd8 == -1)) {
    FUN_1456bdea2(&DAT_14caddf88);
    atexit((_func_5014 *)&LAB_14350c396);
    _Init_thread_footer(&DAT_14caddfd8);
  }
  cVar20 = FUN_14350c4ae(&DAT_14caddf88,param_1,param_2,param_3);
  if (cVar20 != '\0') goto LAB_143483bbb;
  if ((longlong)(int)param_1[0x81] == 0) {
    iVar21 = *(int *)(param_2 + 0xe4);
  }
  else {
    lVar22 = param_1[0x80];
    iVar21 = *(int *)(param_2 + 0xe4);
    uVar28 = 0;
    do {
      if (((*(int *)(param_2 + 0xe0) == *(int *)(lVar22 + 0xe0 + uVar28)) &&
          (iVar21 == *(int *)(lVar22 + 0xe4 + uVar28))) &&
         (*(int *)(param_2 + 0xb0) == *(int *)(lVar22 + 0xb0 + uVar28))) {
        if ((int)(uVar28 >> 3) * 0x3e0f83e1 != -1) goto LAB_143483bbb;
        break;
      }
      uVar28 = uVar28 + 0x108;
    } while ((longlong)(int)param_1[0x81] * 0x108 != uVar28);
  }
  if (iVar21 == 0) goto LAB_143483bbb;
  puVar1 = (uint *)(param_2 + 0xe0);
  uVar31 = *puVar1;
  if ((((((int)uVar31 < 0) || (DAT_14c9647dc <= (int)uVar31)) ||
       ((plVar25 = (longlong *)
                   ((ulonglong)((uVar31 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8)),
        plVar25 == (longlong *)0x0 ||
        (((int)plVar25[2] != iVar21 || ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)))))) ||
      (plVar25 = (longlong *)*plVar25, plVar25 == (longlong *)0x0)) ||
     (((*(byte *)((longlong)plVar25 + 0x2d3) & 8) == 0 ||
      ((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0)))) goto LAB_143483bbb;
  if (*(code **)(*param_1 + 0x570) == (code *)&LAB_1448a814e) {
    if ((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x65) & 1) == 0)) goto LAB_143483bbb;
    uVar31 = (uint)*(byte *)((longlong)param_1 + 0x427);
  }
  else {
    uVar31 = (**(code **)(*param_1 + 0x570))(param_1);
  }
  if (uVar31 == 0) goto LAB_143483bbb;
  if (*(code **)(*plVar25 + 0x570) == (code *)&LAB_1448a814e) {
    if ((plVar25[0x15] != 0) && ((*(byte *)(plVar25[0x15] + 0x65) & 1) == 0)) goto LAB_143483bbb;
    uVar31 = (uint)*(byte *)((longlong)plVar25 + 0x427);
  }
  else {
    uVar31 = (**(code **)(*plVar25 + 0x570))(plVar25);
  }
  if (uVar31 == 0) goto LAB_143483bbb;
  if (*(code **)(*param_1 + 0x580) == (code *)&LAB_144a2af98) {
    uVar31 = (uint)*(byte *)((longlong)param_1 + 0x425);
  }
  else {
    uVar31 = (**(code **)(*param_1 + 0x580))(param_1);
  }
  if (*(code **)(*plVar25 + 0x580) == (code *)&LAB_144a2af98) {
    uVar32 = (uint)*(byte *)((longlong)plVar25 + 0x425);
  }
  else {
    uVar32 = (**(code **)(*plVar25 + 0x580))(plVar25);
  }
  if (*(code **)(*param_1 + 0x578) == (code *)&LAB_144b26b5e) {
    uVar32 = (uint)*(byte *)((longlong)param_1 + (longlong)(int)uVar32 + 0x478);
  }
  else {
    uVar32 = (**(code **)(*param_1 + 0x578))(param_1,uVar32);
  }
  if (*(code **)(*plVar25 + 0x578) == (code *)&LAB_144b26b5e) {
    uVar31 = (uint)*(byte *)((longlong)plVar25 + (longlong)(int)uVar31 + 0x478);
  }
  else {
    uVar31 = (**(code **)(*plVar25 + 0x578))(plVar25,uVar31);
  }
  if ((int)uVar32 < (int)uVar31) {
    uVar31 = uVar32;
  }
  if ((int)uVar31 < 1) goto LAB_143483bbb;
  DAT_14cad1f98 = DAT_14cad1f98 + 1;
  plVar29 = (longlong *)plVar25[0x15];
  plVar12 = (longlong *)param_1[0x15];
  if ((char)param_3 == '\x01' && plVar12 != plVar29) {
    local_3bc = FUN_14064aec2(plVar12,plVar29);
    local_3bc = local_3bc ^ 1;
  }
  else {
    local_3bc = 0;
  }
  local_3d0 = (longlong **)(param_2 + 8);
  iVar21 = (int)param_1[0x81];
  *(uint *)(param_1 + 0x81) = iVar21 + 1U;
  if (*(uint *)((longlong)param_1 + 0x40c) < iVar21 + 1U) {
    FUN_1417bb506(param_1 + 0x80,iVar21);
  }
  pcVar27 = (char *)(param_1[0x80] + (longlong)iVar21 * 0x108);
  *pcVar27 = *param_2;
  memcpy(pcVar27 + 8,local_3d0,0xb8);
  pcVar27[0xc0] = '\0';
  pcVar27[0xc1] = '\0';
  pcVar27[0xc2] = '\0';
  pcVar27[0xc3] = '\0';
  pcVar27[0xc4] = '\0';
  pcVar27[0xc5] = '\0';
  pcVar27[0xc6] = '\0';
  pcVar27[199] = '\0';
  pcVar27[200] = '\0';
  pcVar27[0xc9] = '\0';
  pcVar27[0xca] = '\0';
  pcVar27[0xcb] = '\0';
  pcVar27[0xcc] = '\0';
  pcVar27[0xcd] = '\0';
  pcVar27[0xce] = '\0';
  pcVar27[0xcf] = '\0';
  pcVar27[0xd0] = '\0';
  pcVar27[0xd1] = '\0';
  pcVar27[0xd2] = '\0';
  pcVar27[0xd3] = '\0';
  pcVar27[0xd4] = '\0';
  pcVar27[0xd5] = '\0';
  pcVar27[0xd6] = '\0';
  pcVar27[0xd7] = '\0';
  pcVar27[0xd8] = -1;
  pcVar27[0xd9] = -1;
  pcVar27[0xda] = -1;
  pcVar27[0xdb] = -1;
  pcVar27[0xdc] = '\0';
  *(undefined8 *)(pcVar27 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(pcVar27 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(pcVar27 + 0xd0) = uVar5;
  *(undefined4 *)(pcVar27 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  pcVar27[0xdc] = param_2[0xdc];
  *(undefined8 *)(pcVar27 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar31 = *puVar1;
  uVar11 = *(undefined4 *)(param_2 + 0xe4);
  uVar15 = *(undefined4 *)(param_2 + 0xe8);
  uVar16 = *(undefined4 *)(param_2 + 0xec);
  uVar17 = *(undefined4 *)(param_2 + 0xf4);
  uVar18 = *(undefined4 *)(param_2 + 0xf8);
  uVar19 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(pcVar27 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(pcVar27 + 0xf4) = uVar17;
  *(undefined4 *)(pcVar27 + 0xf8) = uVar18;
  *(undefined4 *)(pcVar27 + 0xfc) = uVar19;
  *(uint *)(pcVar27 + 0xe0) = uVar31;
  *(undefined4 *)(pcVar27 + 0xe4) = uVar11;
  *(undefined4 *)(pcVar27 + 0xe8) = uVar15;
  *(undefined4 *)(pcVar27 + 0xec) = uVar16;
  FUN_14017efda(&local_258,param_1,0xffffffff);
  lVar22 = plVar25[0x80];
  iVar21 = (int)plVar25[0x81];
  lVar26 = (longlong)iVar21;
  local_3b8 = plVar29;
  if (lVar26 != 0) {
    uVar28 = 0;
    do {
      if ((((int)uStack_178 == *(int *)(lVar22 + 0xe0 + uVar28)) &&
          (uStack_178._4_4_ == *(int *)(lVar22 + 0xe4 + uVar28))) &&
         (local_1a8 == *(int *)(lVar22 + 0xb0 + uVar28))) {
        if ((int)(uVar28 >> 3) * 0x3e0f83e1 != -1) goto LAB_1434833d3;
        break;
      }
      uVar28 = uVar28 + 0x108;
    } while (lVar26 * 0x108 != uVar28);
  }
  *(uint *)(plVar25 + 0x81) = iVar21 + 1U;
  if (*(uint *)((longlong)plVar25 + 0x40c) < iVar21 + 1U) {
    FUN_1417bb506(plVar25 + 0x80,iVar21);
    lVar22 = plVar25[0x80];
  }
  puVar2 = (undefined1 *)(lVar22 + lVar26 * 0x108);
  *puVar2 = local_258._0_1_;
  memcpy(puVar2 + 8,&local_250,0xb8);
  *(undefined8 *)(puVar2 + 0xc0) = 0;
  *(undefined8 *)(puVar2 + 200) = 0;
  *(undefined8 *)(puVar2 + 0xd0) = 0;
  *(undefined4 *)(puVar2 + 0xd8) = 0xffffffff;
  puVar2[0xdc] = 0;
  *(undefined8 *)(puVar2 + 0xc0) = local_198;
  *(ulonglong *)(puVar2 + 200) = CONCAT44(uStack_18c,uStack_190);
  *(ulonglong *)(puVar2 + 0xd0) = CONCAT44(uStack_184,uStack_188);
  *(undefined4 *)(puVar2 + 0xd8) = (undefined4)local_180;
  puVar2[0xdc] = local_180._4_1_;
  *(ulonglong *)(puVar2 + 0x100) =
       CONCAT35((undefined3)uStack_153,CONCAT41(uStack_157,uStack_15b._3_1_));
  *(ulonglong *)(puVar2 + 0xf0) = CONCAT44(uStack_164,uStack_168);
  *(ulonglong *)(puVar2 + 0xf8) = CONCAT35((undefined3)uStack_15b,CONCAT41(uStack_15f,uStack_160));
  *(int *)(puVar2 + 0xe0) = (int)uStack_178;
  *(int *)(puVar2 + 0xe4) = uStack_178._4_4_;
  *(undefined4 *)(puVar2 + 0xe8) = (undefined4)uStack_170;
  *(undefined4 *)(puVar2 + 0xec) = uStack_170._4_4_;
LAB_1434833d3:
  plVar29 = local_3b8;
  lVar22 = param_1[0x16];
  if (lVar22 == 0) {
    lVar22 = FUN_1448abda6();
  }
  if ((char)param_3 == '\0') goto LAB_143483bbb;
  if ((*(byte *)((longlong)plVar12 + 0x62) & 0x40) == 0) {
    if (lVar22 == 0) goto LAB_143483bbb;
    bVar24 = 0;
LAB_143483413:
    if (((*(byte *)(lVar22 + 0x155) & 1) == 0) || (*(longlong *)(lVar22 + 0x30) == 0)) {
      bVar30 = false;
    }
    else {
      bVar30 = *(int *)(*(longlong *)(lVar22 + 0x30) + 0xa8) != 0;
    }
    if (bVar24 == 0 && !bVar30) goto LAB_143483bbb;
  }
  else {
    if (lVar22 != 0) {
      bVar24 = (*(byte *)((longlong)plVar12 + 100) & 4) >> 2;
      goto LAB_143483413;
    }
    if ((*(byte *)((longlong)plVar12 + 100) & 4) == 0) goto LAB_143483bbb;
  }
  pcVar27 = param_2 + 200;
  local_3a0 = pcVar27;
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) {
    memcpy(local_320,local_3d0,0xb8);
    local_3a8 = *(undefined8 *)(param_2 + 0xc0);
    local_338 = *(undefined8 *)pcVar27;
    uStack_330 = *(undefined8 *)(param_2 + 0xd0);
    local_3b0 = CONCAT44(local_3b0._4_4_,*(undefined4 *)(param_2 + 0xd8));
    local_3d4 = CONCAT31(local_3d4._1_3_,param_2[0xdc]);
    local_b8 = *(undefined8 *)(param_2 + 0x100);
    uStack_c7._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xf4);
    uStack_c7 = CONCAT13(uStack_c7._3_1_,(int3)((uint)*(undefined4 *)(param_2 + 0xf0) >> 8));
    uStack_c3._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xf8);
    uStack_c3 = CONCAT13(uStack_c3._3_1_,(int3)((uint)*(undefined4 *)(param_2 + 0xf4) >> 8));
    uStack_bf._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xfc);
    uStack_bf = CONCAT13(uStack_bf._3_1_,(int3)((uint)*(undefined4 *)(param_2 + 0xf8) >> 8));
    uStack_bb = (undefined3)((uint)*(undefined4 *)(param_2 + 0xfc) >> 8);
    local_d8 = (undefined1)*puVar1;
    uStack_d7._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xe4);
    uStack_d7 = CONCAT13(uStack_d7._3_1_,(int3)(*puVar1 >> 8));
    uStack_d3._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xe8);
    uStack_d3 = CONCAT13(uStack_d3._3_1_,(int3)((uint)*(undefined4 *)(param_2 + 0xe4) >> 8));
    uStack_cf._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xec);
    uStack_cf = CONCAT13(uStack_cf._3_1_,(int3)((uint)*(undefined4 *)(param_2 + 0xe8) >> 8));
    uStack_cb._0_3_ = (undefined3)((uint)*(undefined4 *)(param_2 + 0xec) >> 8);
    uStack_cb = CONCAT13((char)*(undefined4 *)(param_2 + 0xf0),(undefined3)uStack_cb);
    local_3d5 = *param_2;
    uVar11 = *(undefined4 *)(param_2 + 0xb0);
    FUN_14083861c((longlong)param_1 + 0x599,&local_268);
    lVar22 = local_268;
    if (local_268 != 0) {
      local_250 = local_3b8;
      local_23c = local_3d5;
      local_258 = param_1;
      local_248 = plVar25;
      local_240 = uVar11;
      memcpy(&local_238,local_320,0xb8);
      local_180 = local_3a8;
      uStack_178 = local_338;
      uStack_170 = uStack_330;
      uStack_168 = (undefined4)local_3b0;
      uStack_164._1_3_ = (undefined3)_uStack_db;
      uStack_164 = CONCAT31(uStack_164._1_3_,(char)local_3d4);
      uStack_160 = (undefined1)((uint)_uStack_db >> 0x18);
      uStack_15f = uStack_d7;
      uStack_15b = uStack_d3;
      uStack_157 = uStack_cf;
      uStack_153 = uStack_cb;
      uStack_14f = uStack_c7;
      uStack_14b = uStack_c3;
      uStack_147 = uStack_bf;
      uStack_143 = uStack_bb;
      uStack_140 = local_b8;
      FUN_1447cd2ec(lVar22,&local_258);
    }
    plVar29 = local_260;
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_260 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar4 = (int *)((longlong)plVar29 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
        }
      }
    }
    plVar29 = local_3b8;
    local_3f0 = *param_2;
    local_3f8 = *(undefined4 *)(param_2 + 0xb0);
    local_3e8 = local_3d0;
    (**(code **)(*param_1 + 0x9e8))(param_1,param_1,local_3b8,plVar25);
  }
  if ((*(uint *)(plVar25 + 1) >> 0x1e & 1) == 0) {
    local_378 = *local_3d0;
    plStack_370 = local_3d0[1];
    local_368 = *(undefined4 *)(local_3d0 + 2);
    uStack_364 = *(undefined4 *)((longlong)local_3d0 + 0x14);
    uStack_360 = *(undefined4 *)(local_3d0 + 3);
    uStack_35c = *(undefined4 *)((longlong)local_3d0 + 0x1c);
    local_358 = *(undefined4 *)(local_3d0 + 4);
    uStack_354 = *(undefined4 *)((longlong)local_3d0 + 0x24);
    uStack_350 = *(undefined4 *)(local_3d0 + 5);
    uStack_34c = *(undefined4 *)((longlong)local_3d0 + 0x2c);
    local_348 = *(undefined4 *)(local_3d0 + 6);
    uStack_344 = *(undefined4 *)((longlong)local_3d0 + 0x34);
    uStack_340 = *(undefined4 *)(local_3d0 + 7);
    uStack_33c = *(uint *)((longlong)local_3d0 + 0x3c);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar36 = (uint)((ulonglong)uVar5 >> 0x20);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    uVar35 = (uint)((ulonglong)uVar6 >> 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    uVar34 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    uVar33 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar9 = *(undefined8 *)(param_2 + 0x68);
    uVar32 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar10 = *(undefined8 *)(param_2 + 0x70);
    uVar31 = (uint)((ulonglong)uVar10 >> 0x20);
    local_e8 = *(undefined4 *)(param_2 + 0xa8);
    local_f8 = *(undefined8 *)(param_2 + 0x98);
    uStack_f0 = *(undefined8 *)(param_2 + 0xa0);
    local_108 = *(undefined8 *)(param_2 + 0x88);
    uStack_100 = *(undefined8 *)(param_2 + 0x90);
    local_118 = *(undefined8 *)(param_2 + 0x78);
    uStack_110 = *(undefined8 *)(param_2 + 0x80);
    local_3c0 = *(undefined4 *)(param_2 + 0xac);
    local_380 = *(undefined4 *)(param_2 + 0xbc);
    local_388 = *(undefined8 *)(param_2 + 0xb4);
    local_3b0 = *(undefined8 *)(param_2 + 0xc0);
    local_398 = *(undefined8 *)local_3a0;
    uStack_390 = *(undefined8 *)(local_3a0 + 8);
    local_3d4 = *(undefined4 *)(param_2 + 0xd8);
    local_3d5 = param_2[0xdc];
    local_120 = *(undefined8 *)(param_2 + 0xf0);
    local_130 = (undefined1)*puVar1;
    uStack_12f._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xe4);
    uStack_12f = CONCAT13(uStack_12f._3_1_,(int3)(*puVar1 >> 8));
    uStack_12b._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xe8);
    uStack_12b = CONCAT13(uStack_12b._3_1_,(int3)((uint)*(undefined4 *)(param_2 + 0xe4) >> 8));
    uStack_127._3_1_ = (undefined1)*(undefined4 *)(param_2 + 0xec);
    uStack_127 = CONCAT13(uStack_127._3_1_,(int3)((uint)*(undefined4 *)(param_2 + 0xe8) >> 8));
    uStack_123 = (undefined3)((uint)*(undefined4 *)(param_2 + 0xec) >> 8);
    pcVar27 = param_2 + 0x100;
    local_3a8 = CONCAT71(local_3a8._1_7_,*param_2);
    pcVar23 = param_2 + 0xf8;
    local_3c4 = *(undefined4 *)(param_2 + 0xb0);
    if (*param_2 == '\x01') {
      uVar34 = uVar34 ^ 0x80000000;
      uVar35 = uVar35 ^ 0x80000000;
      uVar36 = uVar36 ^ 0x80000000;
      uVar31 = uVar31 ^ 0x80000000;
      uVar32 = uVar32 ^ 0x80000000;
      uVar33 = uVar33 ^ 0x80000000;
      pcVar23 = pcVar27;
      pcVar27 = param_2 + 0xf8;
      local_3c4 = local_3c0;
      local_3c0 = *(undefined4 *)(param_2 + 0xb0);
    }
    uVar13 = *(undefined8 *)pcVar23;
    uVar14 = *(undefined8 *)pcVar27;
    FUN_14083861c((longlong)plVar25 + 0x599,&local_268);
    if (local_268 != 0) {
      local_240 = 0xffffffff;
      local_23c = (char)local_3a8;
      local_228 = CONCAT44(uStack_364,local_368);
      uStack_220 = CONCAT44(uStack_35c,uStack_360);
      local_218 = CONCAT44(uStack_354,local_358);
      uStack_210 = CONCAT44(uStack_34c,uStack_350);
      local_238 = local_378;
      plStack_230 = plStack_370;
      local_208 = CONCAT44(uStack_344,local_348);
      uStack_200 = uStack_340;
      uStack_1fc = uStack_33c;
      local_1f8 = CONCAT44(uVar36,(int)uVar5);
      local_1f0 = CONCAT44(uVar35,(int)uVar6);
      local_1e8 = CONCAT44(uVar34,(int)uVar7);
      local_1e0 = CONCAT44(uVar33,(int)uVar8);
      local_1d8 = CONCAT44(uVar32,(int)uVar9);
      local_1d0 = CONCAT44(uVar31,(int)uVar10);
      local_1a8 = (int)local_f8;
      uStack_1a4 = local_f8._4_4_;
      uStack_1a0 = uStack_f0;
      local_1b8 = local_108;
      uStack_1b0 = uStack_100;
      local_1c8 = local_118;
      uStack_1c0 = uStack_110;
      local_198 = CONCAT44(local_3c0,local_e8);
      uStack_190 = local_3c4;
      uStack_18c = (undefined4)local_388;
      uStack_188 = (undefined4)((ulonglong)local_388 >> 0x20);
      uStack_184 = local_380;
      local_180 = local_3b0;
      uStack_178 = local_398;
      uStack_170 = uStack_390;
      uStack_168 = local_3d4;
      uStack_153._3_1_ = (undefined1)local_120;
      uStack_153 = CONCAT13(uStack_153._3_1_,uStack_123);
      uStack_14f = (undefined4)((ulonglong)local_120 >> 8);
      uStack_164._1_3_ = (undefined3)_uStack_133;
      uStack_164 = CONCAT31(uStack_164._1_3_,local_3d5);
      uStack_160 = (undefined1)((uint)_uStack_133 >> 0x18);
      uStack_15f = uStack_12f;
      uStack_15b = uStack_12b;
      uStack_157 = uStack_127;
      uStack_14b._3_1_ = (undefined1)uVar13;
      uStack_14b = CONCAT13(uStack_14b._3_1_,(int3)((ulonglong)local_120 >> 0x28));
      uStack_147 = (undefined4)((ulonglong)uVar13 >> 8);
      uStack_143 = (undefined3)((ulonglong)uVar13 >> 0x28);
      local_258 = plVar25;
      local_250 = plVar12;
      local_248 = param_1;
      uStack_140 = uVar14;
      FUN_1447cd2ec();
    }
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar29 = local_260 + 1;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)*plVar29 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar4 = (int *)((longlong)local_260 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_260 + 0x10))(local_260);
        }
      }
    }
    plVar29 = local_3b8;
    cVar20 = *param_2;
    if (cVar20 == '\x01') {
      memcpy(&local_258,local_3d0,0xb8);
      uStack_1a0 = *(undefined8 *)(param_2 + 0xc0);
      local_198 = *(undefined8 *)local_3a0;
      uStack_190 = (undefined4)*(undefined8 *)(local_3a0 + 8);
      uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(local_3a0 + 8) >> 0x20);
      uStack_188 = *(undefined4 *)(param_2 + 0xd8);
      uStack_184 = CONCAT31(uStack_184._1_3_,param_2[0xdc]);
      local_180 = *(undefined8 *)puVar1;
      uStack_178 = *(undefined8 *)(param_2 + 0xe8);
      uStack_170 = *(undefined8 *)(param_2 + 0xf0);
      uVar5 = *(undefined8 *)(param_2 + 0xf8);
      local_218 = local_218 ^ 0x8000000000000000;
      uStack_210 = uStack_210 ^ 0x8000000000000000;
      local_208 = local_208 ^ 0x8000000000000000;
      uStack_1fc = uStack_1fc ^ 0x80000000;
      local_1f8 = local_1f8 ^ 0x8000000000000000;
      local_1f0 = local_1f0 ^ 0x8000000000000000;
      uVar11 = (undefined4)uStack_1b0;
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,local_1b8._4_4_);
      local_1b8 = CONCAT44(uVar11,(undefined4)local_1b8);
      uStack_168 = (undefined4)*(undefined8 *)(param_2 + 0x100);
      uStack_164 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x100) >> 0x20);
      uStack_160 = (undefined1)uVar5;
      uStack_15f = (undefined4)((ulonglong)uVar5 >> 8);
      uStack_15b._0_3_ = (undefined3)((ulonglong)uVar5 >> 0x28);
    }
    else {
      memcpy(&local_258,local_3d0,0xb8);
      uStack_1a0 = *(undefined8 *)(param_2 + 0xc0);
      local_198 = *(undefined8 *)local_3a0;
      uStack_190 = (undefined4)*(undefined8 *)(local_3a0 + 8);
      uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(local_3a0 + 8) >> 0x20);
      uStack_188 = *(undefined4 *)(param_2 + 0xd8);
      uStack_184 = CONCAT31(uStack_184._1_3_,param_2[0xdc]);
      uVar5 = *(undefined8 *)(param_2 + 0x100);
      uStack_160 = (undefined1)uVar5;
      uStack_15f = (undefined4)((ulonglong)uVar5 >> 8);
      uStack_15b._0_3_ = (undefined3)((ulonglong)uVar5 >> 0x28);
      local_180 = *(undefined8 *)puVar1;
      uStack_178 = *(undefined8 *)(param_2 + 0xe8);
      uStack_170 = *(undefined8 *)(param_2 + 0xf0);
      uStack_168 = *(undefined4 *)(param_2 + 0xf8);
      uStack_164 = *(undefined4 *)(param_2 + 0xfc);
    }
    local_3e8 = &local_258;
    local_3f8 = 0xffffffff;
    local_3f0 = cVar20;
    (**(code **)(*plVar25 + 0x9e8))(plVar25,plVar25,plVar12,param_1);
  }
  if ((char)local_3bc != '\0') {
    if (((plVar12 != (longlong *)0x0) && ((*(uint *)(plVar12 + 1) >> 0x1e & 1) == 0)) &&
       ((-1 < *(int *)(plVar12[2] + 0xd4) && ((*(byte *)(plVar12 + 0x69) & 2) == 0)))) {
      (**(code **)(*plVar12 + 0x370))(plVar12,plVar29);
    }
    if ((((plVar29 != (longlong *)0x0) && ((*(uint *)(plVar29 + 1) >> 0x1e & 1) == 0)) &&
        (-1 < *(int *)(plVar29[2] + 0xd4))) && ((*(byte *)(plVar29 + 0x69) & 2) == 0)) {
      (**(code **)(*plVar29 + 0x370))(plVar29,plVar12);
    }
    if (((plVar12 != (longlong *)0x0) && ((*(uint *)(plVar12 + 1) >> 0x1e & 1) == 0)) &&
       ((-1 < *(int *)(plVar12[2] + 0xd4) && ((*(byte *)(plVar12 + 0x69) & 2) == 0)))) {
      FUN_140649da8((longlong)plVar12 + 0x203,plVar12,plVar29);
    }
    if (((plVar29 != (longlong *)0x0) && ((*(uint *)(plVar29 + 1) >> 0x1e & 1) == 0)) &&
       ((-1 < *(int *)(plVar29[2] + 0xd4) && ((*(byte *)(plVar29 + 0x69) & 2) == 0)))) {
      FUN_140649da8((longlong)plVar29 + 0x203,plVar29,plVar12);
    }
  }
LAB_143483bbb:
  if ((local_b0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143483cd0 FUN_143483cd0 body=701 status=ok
// SIG undefined FUN_143483cd0(void)

void FUN_143483cd0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
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
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((param_1 != (longlong *)0x0) && ((*(byte *)((longlong)param_1 + 0x1f9) & 4) != 0)) &&
      ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) &&
     ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) {
    if (*(int *)(lVar4 + 600) == 0) {
      if (*(longlong *)(lVar4 + 0x118) == 0) {
        FUN_14572cb46(lVar4);
      }
    }
    else {
      if ((((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0) ||
          (uVar3 = (**(code **)(*param_1 + 0x570))(param_1), 5 < uVar3)) ||
         ((0x2aU >> (uVar3 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
      lVar5 = *(longlong *)(lVar4 + 0x118);
      if (lVar5 == 0) {
        lVar5 = FUN_14572cb46(lVar4);
      }
      if (0 < (int)param_1[0x81]) {
        iVar8 = *(int *)(lVar5 + 0x3cc);
        iVar7 = 0;
        lVar4 = 0xe4;
        do {
          iVar1 = *(int *)(param_1[0x80] + lVar4);
          if ((((((iVar1 != 0) && (uVar3 = *(uint *)(param_1[0x80] + -4 + lVar4), -1 < (int)uVar3))
                && ((int)uVar3 < DAT_14c9647dc)) &&
               ((plVar6 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
              (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
               ((lVar5 = *plVar6, lVar5 != 0 && ((*(byte *)(lVar5 + 0x2d3) & 8) != 0)))))) &&
             (plVar6 = *(longlong **)(lVar5 + 0xa8), plVar6 != (longlong *)0x0)) {
            if (DAT_14caf8960 == 0) {
              local_50 = FUN_141030f22;
              local_60 = FUN_14081d0ea;
              local_68 = &LAB_140fe7df2;
              local_70 = &local_50;
              local_78 = &LAB_147c91239;
              local_80 = &LAB_1463f790d;
              local_88 = L"Engine";
              local_90 = 0;
              local_98 = 0x10000004;
              local_a0 = 8;
              local_a8 = 0x3d8;
              FUN_14081cfa3(L"/Script/Engine",L"PhysicsVolume",&DAT_14caf8960,&DAT_147c91238);
            }
            if ((((*(int *)(DAT_14caf8960 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14caf8960 + 0x38) * 8)
                  == DAT_14caf8960 + 0x30)) && (iVar8 < *(int *)((longlong)plVar6 + 0x3cc))) &&
               (cVar2 = (**(code **)(*plVar6 + 0x680))(plVar6,param_1), cVar2 != '\0')) {
              iVar8 = *(int *)((longlong)plVar6 + 0x3cc);
            }
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 0x108;
        } while (iVar7 < (int)param_1[0x81]);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143483ffa FUN_143483ffa body=74 status=ok
// SIG undefined FUN_143483ffa(void)

undefined8 FUN_143483ffa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x398);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143484054 FUN_143484054 body=55 status=ok
// SIG undefined FUN_143484054(void)

longlong FUN_143484054(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x2a8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1434840c8 FUN_1434840c8 body=48 status=ok
// SIG undefined FUN_1434840c8(void)

longlong FUN_1434840c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_1458c3da6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14348410a FUN_14348410a body=48 status=ok
// SIG undefined FUN_14348410a(void)

longlong FUN_14348410a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_145df0e1e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143484290 FUN_143484290 body=301 status=ok
// SIG undefined FUN_143484290(void)

float * FUN_143484290(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x1d3) & 8) == 0) {
    fVar4 = *(float *)((longlong)param_1 + 0x44);
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)((longlong)param_1 + 0x4c);
    *param_2 = *(float *)(param_1 + 8);
    param_2[1] = fVar4;
    param_2[2] = fVar1;
    param_2[3] = fVar2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((char)param_1[0x58] == '\x01') {
    (**(code **)(*param_1 + 0x120))(param_1,&local_38);
    *(ulonglong *)param_2 = CONCAT44(fStack_34,local_38);
    fVar4 = fStack_30;
  }
  else {
    lVar3 = *param_1;
    if (*(code **)(lVar3 + 0x120) == (code *)&LAB_144b21bec) {
      local_38 = *(float *)(param_1 + 8);
      fStack_34 = *(float *)((longlong)param_1 + 0x44);
      fStack_30 = *(float *)(param_1 + 9);
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x4c);
    }
    else {
      (**(code **)(lVar3 + 0x120))(param_1,&local_38);
      lVar3 = *param_1;
    }
    if (*(code **)(lVar3 + 0x128) == (code *)&LAB_144b21bf8) {
      local_48 = *(undefined8 *)((longlong)param_1 + 0x2d4);
      uStack_40 = *(undefined8 *)((longlong)param_1 + 0x2dc);
    }
    else {
      (**(code **)(lVar3 + 0x128))(param_1,&local_48);
    }
    *param_2 = local_38 * (float)local_48;
    param_2[1] = fStack_34 * local_48._4_4_;
    fVar4 = fStack_30 * (float)uStack_40;
  }
  param_2[2] = fVar4;
  param_2[3] = 1.0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143484454 FUN_143484454 body=282 status=ok
// SIG undefined FUN_143484454(void)

undefined8 * FUN_143484454(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 14348456e FUN_14348456e body=282 status=ok
// SIG undefined FUN_14348456e(void)

undefined8 * FUN_14348456e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 143484688 FUN_143484688 body=2913 status=ok
// SIG undefined FUN_143484688(void)

void FUN_143484688(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined1 auStack_208 [32];
  byte local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  longlong *local_1c0;
  uint local_1b4;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  float local_19c;
  double local_198 [4];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  fVar20 = *(float *)(param_1 + 0x2a0);
  fVar27 = fVar20 * 0.5 * 0.017453292;
  local_1c0 = param_2;
  local_1b4 = param_4;
  if (fVar20 <= 0.0) {
    fVar20 = (float)(~-(uint)(fVar20 == 0.0) & (uint)(fVar20 * -0.5) |
                    -(uint)(fVar20 == 0.0) & 0x43fa0000);
    fVar21 = fVar20 / *(float *)(param_1 + 0x2a4);
    bVar8 = false;
  }
  else {
    fVar21 = *(float *)(param_1 + 0x2a8);
    fVar20 = tanf(fVar27);
    fVar20 = fVar20 * fVar21;
    fVar21 = fVar20 / *(float *)(param_1 + 0x2a4);
    bVar8 = 0.0 < *(float *)(param_1 + 0x2a0);
  }
  dVar26 = (double)*(float *)(param_1 + 0x2a8);
  dVar25 = dVar26 * 0.0;
  dVar24 = (double)fVar21;
  dVar23 = dVar24 * 0.0;
  dVar22 = (double)fVar20;
  dVar5 = dVar22 * 0.0;
  local_198[0] = dVar5 + dVar23 + dVar26;
  local_198[1] = dVar23 + dVar25 + dVar22;
  local_198[2] = dVar5 + dVar25 + dVar24;
  local_198[3] = (dVar23 + dVar26) - dVar5;
  local_178 = (dVar23 + dVar25) - dVar22;
  local_170 = (dVar25 + dVar24) - dVar5;
  local_168 = (dVar26 - dVar23) - dVar5;
  local_160 = (dVar25 - dVar23) - dVar22;
  local_158 = (dVar25 - dVar24) - dVar5;
  local_150 = dVar5 + (dVar26 - dVar23);
  local_148 = (dVar25 - dVar23) + dVar22;
  local_140 = dVar5 + (dVar25 - dVar24);
  if (bVar8) {
    fVar20 = *(float *)(param_1 + 0x2ac);
    fVar27 = tanf(fVar27);
    fVar27 = fVar27 * fVar20;
    dVar22 = (double)fVar27;
    dVar24 = (double)(fVar27 / *(float *)(param_1 + 0x2a4));
    dVar23 = dVar24 * 0.0;
    dVar5 = dVar22 * 0.0;
  }
  dVar25 = (double)*(float *)(param_1 + 0x2ac);
  dVar26 = dVar25 * 0.0;
  local_138 = dVar5 + dVar23 + dVar25;
  local_130 = dVar22 + dVar23 + dVar26;
  local_128 = dVar5 + dVar24 + dVar26;
  local_120 = (dVar23 + dVar25) - dVar5;
  local_118 = (dVar23 + dVar26) - dVar22;
  local_110 = (dVar24 + dVar26) - dVar5;
  local_108 = (dVar25 - dVar23) - dVar5;
  local_100 = (dVar26 - dVar23) - dVar22;
  local_f8 = (dVar26 - dVar24) - dVar5;
  local_f0 = (dVar25 - dVar23) + dVar5;
  local_e8 = (dVar26 - dVar23) + dVar22;
  local_e0 = dVar5 + (dVar26 - dVar24);
  dVar13 = *(double *)(param_1 + 0x100);
  dVar14 = *(double *)(param_1 + 0x108);
  dVar25 = *(double *)(param_1 + 0x120);
  dVar26 = *(double *)(param_1 + 0x128);
  dVar9 = *(double *)(param_1 + 0x140);
  dVar10 = *(double *)(param_1 + 0x148);
  dVar11 = *(double *)(param_1 + 0x160);
  dVar12 = *(double *)(param_1 + 0x168);
  dVar5 = *(double *)(param_1 + 0x170);
  dVar22 = *(double *)(param_1 + 0x150);
  dVar23 = *(double *)(param_1 + 0x130);
  dVar24 = *(double *)(param_1 + 0x110);
  lVar16 = 0x10;
  do {
    dVar1 = *(double *)((longlong)local_198 + lVar16);
    dVar2 = *(double *)((longlong)&local_1a8 + lVar16);
    dVar3 = *(double *)((longlong)&local_1a0 + lVar16);
    dVar7 = dVar1 * dVar10 + dVar3 * dVar26 + dVar2 * dVar14 + dVar12;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = dVar1 * dVar9 + dVar3 * dVar25 + dVar2 * dVar13 + dVar11;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])((longlong)&local_1a8 + lVar16) = auVar6;
    *(double *)((longlong)local_198 + lVar16) =
         dVar2 * dVar24 + dVar3 * dVar23 + dVar1 * dVar22 + dVar5;
    lVar16 = lVar16 + 0x18;
  } while (lVar16 != 0xd0);
  iVar15 = (int)local_1c0[1];
  if (0 < iVar15) {
    local_1b0 = param_5 + 0x50;
    lVar16 = 0;
    do {
      if ((local_1b4 >> ((uint)lVar16 & 0x1f) & 1) != 0) {
        lVar17 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar17 = local_1b0;
        }
        if (((*(byte *)(param_1 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_1 + 0xf0) != 0))
        {
          uVar19 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar19) ==
                *(longlong *)(*(longlong *)(*local_1c0 + lVar16 * 8) + 0x4c0)) {
              if ((~uVar19 & 0x7fffffff8) != 0) {
                bVar18 = *(byte *)(param_1 + 0x6d) >> 3;
                goto LAB_143484b42;
              }
              break;
            }
            uVar19 = uVar19 + 8;
          } while ((longlong)*(int *)(param_1 + 0xf0) * 8 != uVar19);
        }
        bVar18 = *(byte *)(param_1 + 0x6d);
LAB_143484b42:
        plVar4 = *(longlong **)(lVar17 + lVar16 * 8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        bVar18 = bVar18 & 7;
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,local_198,local_198 + 3);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,local_198 + 3,&local_168,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_168,&local_150,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_150,local_198,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_138,&local_120,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_120,&local_108,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_108,&local_f0,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_f0,&local_138,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,local_198,&local_138,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,local_198 + 3,&local_120,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_168,&local_108,&local_1a8);
        local_1a8._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        local_1a8._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        local_1a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_19c = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = bVar18;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_150,&local_f0);
        iVar15 = (int)local_1c0[1];
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar15);
  }
  if ((local_d0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434851ea FUN_1434851ea body=77 status=ok
// SIG undefined FUN_1434851ea(void)

undefined8 * FUN_1434851ea(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  FUN_14480c900(0,param_3);
  bVar1 = FUN_144914152(param_1,param_3);
  *(uint *)(param_2 + 2) = (uint)bVar1 * 8 + 0x82;
  return param_2;
}



// FUNCTION 143485238 FUN_143485238 body=29 status=ok
// SIG undefined FUN_143485238(void)

undefined8 FUN_143485238(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143485256 FUN_143485256 body=78 status=ok
// SIG undefined FUN_143485256(void)

undefined8 FUN_143485256(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x238);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434852a6 FUN_1434852a6 body=33 status=ok
// SIG undefined FUN_1434852a6(void)

longlong FUN_1434852a6(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 143485338 FUN_143485338 body=5520 status=ok
// SIG undefined FUN_143485338(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143485338(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  undefined8 uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong *plVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined8 *puVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  undefined1 uVar35;
  undefined2 uVar36;
  int iVar37;
  int iVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  bool bVar41;
  float fVar42;
  double dVar43;
  float fVar45;
  double dVar46;
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  double dVar58;
  double dVar59;
  float fVar63;
  double dVar60;
  double dVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  undefined1 auStack_498 [36];
  float local_474;
  undefined8 *local_470;
  ulonglong local_468;
  uint local_460;
  float local_45c;
  undefined1 local_458 [16];
  double local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  longlong *local_428;
  ulonglong local_420;
  double local_418;
  double local_410;
  double local_408;
  longlong local_400;
  float local_3f8;
  undefined4 uStack_3f4;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  longlong local_3b0;
  longlong local_3a8;
  undefined8 *local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  ulonglong local_380;
  float local_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  float local_318;
  undefined4 uStack_314;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  ulonglong uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  float local_2a8;
  undefined4 uStack_2a4;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  longlong local_258;
  undefined4 local_250;
  undefined1 local_24c;
  undefined1 local_24b;
  undefined2 local_24a;
  longlong local_248;
  undefined4 local_240;
  undefined1 local_23c;
  char local_23b;
  char local_23a;
  undefined1 local_239;
  longlong local_238;
  undefined4 local_230;
  char local_22c;
  char local_22b;
  char local_22a;
  undefined1 local_229;
  undefined8 local_1e8;
  longlong local_1e0;
  int7 iStack_1d8;
  undefined1 uStack_1d1;
  undefined8 *local_1d0;
  int6 iStack_1c8;
  undefined2 uStack_1c2;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  uVar28 = *(int *)(param_1 + 0x3a8) * 4;
  iVar32 = (int)param_2[1] * uVar28;
  local_460 = param_4;
  if (0 < iVar32) {
    local_3b0 = param_1 + 800;
    local_428 = param_2;
    FUN_1408e3634(local_3b0,iVar32,1);
    local_3a8 = param_1 + 0x298;
    FUN_1408e36f6(param_1 + 0x298,iVar32,1,1);
    local_3a0 = (undefined8 *)(param_1 + 0x360);
    FUN_140964b22(local_3a0,iVar32,1);
    iVar32 = (int)local_428[1];
    if (0 < iVar32) {
      local_398 = param_1 + 0x100;
      local_390 = param_1 + 0x3c8;
      local_420 = (ulonglong)uVar28;
      local_468 = 0;
      uVar29 = 0;
      plVar27 = local_428;
      do {
        if ((local_460 >> ((uint)uVar29 & 0x1f) & 1) != 0) {
          lVar26 = *(longlong *)(*plVar27 + uVar29 * 8);
          local_408 = *(double *)(param_1 + 0x170);
          local_410 = *(double *)(param_1 + 0x160);
          local_418 = *(double *)(param_1 + 0x168);
          dVar2 = *(double *)(lVar26 + 0x1058);
          dVar3 = *(double *)(lVar26 + 0x1050);
          dVar4 = *(double *)(lVar26 + 0x1048);
          dVar43 = *(double *)(lVar26 + 0xb30);
          dVar59 = *(double *)(lVar26 + 0xb38);
          local_448 = *(double *)(lVar26 + 0xb40);
          uStack_440 = *(undefined8 *)(lVar26 + 0xb48);
          dVar18 = *(double *)(lVar26 + 0xb50);
          dVar19 = *(double *)(lVar26 + 0xb58);
          dVar20 = *(double *)(lVar26 + 0xb60);
          dVar14 = *(double *)(lVar26 + 0xb70);
          dVar15 = *(double *)(lVar26 + 0xb78);
          dVar13 = *(double *)(lVar26 + 0xb80);
          auVar61 = *(undefined1 (*) [16])(lVar26 + 0xb90);
          dVar60 = *(double *)(lVar26 + 0xba0);
          FUN_14007522e(&local_258,local_398);
          local_400 = lVar26;
          FUN_1447fea8d(&local_178,lVar26 + 0xa30,&local_258);
          if (0 < *(int *)(param_1 + 0x3a8)) {
            dVar2 = dVar2 - local_408;
            dVar3 = dVar3 - local_418;
            dVar4 = dVar4 - local_410;
            local_470 = (undefined8 *)(dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3);
            dVar2 = local_168._0_8_ * 0.0;
            dStack_3f0 = local_168._8_8_ * 0.0;
            dVar4 = local_118 * 0.0;
            dVar10 = dStack_110 * 0.0;
            local_458._0_8_ = local_178 + local_158 * 0.0 + local_138 * 0.0 + dVar4;
            dStack_310 = dStack_170 + dStack_150 * 0.0 + dStack_130 * 0.0 + dVar10;
            dVar46 = dStack_150 + dStack_170 * 0.0 + dStack_130 * 0.0 + dVar10;
            dVar12 = local_178 * 0.0 + local_158 * 0.0 + local_138 + dVar4;
            dVar10 = dStack_170 * 0.0 + dStack_150 * 0.0 + dStack_130 + dVar10;
            local_3c8._8_4_ = SUB84(dVar10,0);
            local_3c8._0_8_ = dVar12;
            local_3c8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            dVar3 = local_108 * 0.0;
            local_2d8 = local_168._0_8_ + local_148 * 0.0 + local_128 * 0.0 + dVar3;
            local_438._8_4_ = local_168._8_4_;
            local_438._0_8_ = local_2d8;
            local_438._12_4_ = local_168._12_4_;
            dVar16 = -(local_148 + dVar2 + local_128 * 0.0 + dVar3);
            dVar3 = dVar2 + local_148 * 0.0 + local_128 + dVar3;
            uStack_3f4 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar28 = (uint)((ulonglong)dVar46 >> 0x20);
            dVar14 = dVar14 * 0.0;
            dVar15 = dVar15 * 0.0;
            dVar58 = auVar61._0_8_ * 0.0;
            dVar64 = auVar61._8_8_ * 0.0;
            dVar2 = dVar43 * 0.0 + dVar18 + dVar14 + dVar58;
            dVar11 = dVar59 * 0.0 + dVar19 + dVar15 + dVar64;
            dVar58 = dVar18 * 0.0 + dVar43 + dVar14 + dVar58;
            dVar64 = dVar19 * 0.0 + dVar59 + dVar15 + dVar64;
            dVar13 = dVar13 * 0.0;
            dVar60 = dVar60 * 0.0;
            dVar14 = local_448 * 0.0 + dVar20 + dVar13 + dVar60;
            dVar60 = dVar20 * 0.0 + local_448 + dVar13 + dVar60;
            local_448 = SQRT(dVar14 * dVar14 + dVar2 * dVar2 + dVar11 * dVar11) /
                        SQRT(dVar60 * dVar60 + dVar58 * dVar58 + dVar64 * dVar64);
            fVar50 = (float)dVar3;
            fVar54 = (float)dVar10;
            local_268._8_4_ = (int)uStack_140;
            local_268._0_8_ = dVar16;
            local_268._12_4_ = (uint)((ulonglong)uStack_140 >> 0x20) ^ 0x80000000;
            local_278._8_4_ = SUB84(dVar46,0);
            local_278._0_8_ = -dVar46;
            local_278._12_4_ = uVar28 ^ 0x80000000;
            dVar60 = (double)-fVar50;
            dVar3 = (double)-fVar54;
            dVar14 = (double)(float)dVar16;
            dVar43 = (double)(float)-dVar46;
            local_3d8._0_8_ = dVar43;
            local_458._8_8_ = dStack_310;
            fVar51 = (float)dStack_310;
            dVar59 = (double)fVar51;
            dVar2 = dVar14 * 0.0 + dVar60 * -0.0;
            fVar49 = (float)(double)local_458._0_8_;
            fVar47 = (float)local_2d8;
            dVar15 = (double)fVar47;
            dVar13 = dVar60 * -0.0 + dVar15 * 0.0;
            local_3e8._0_8_ = -(local_158 + local_178 * 0.0 + local_138 * 0.0 + dVar4);
            local_3e8._8_4_ = SUB84(dVar46,0);
            local_3e8._12_4_ = uVar28 ^ 0x80000000;
            uStack_314 = (undefined4)((ulonglong)local_458._0_8_ >> 0x20);
            dVar4 = dVar14 * -0.0 + dVar15 * 0.0;
            fVar65 = (float)dVar12;
            uVar39 = local_468 >> 2;
            local_474 = (float)SQRT((double)local_470);
            local_2d8 = -local_2d8;
            uStack_2d0 = local_438._8_8_ ^ 0x8000000000000000;
            local_2e8._8_4_ = SUB84(dStack_310,0);
            local_2e8._0_8_ = -dStack_310;
            local_2e8._12_4_ = (uint)((ulonglong)dStack_310 >> 0x20) ^ 0x80000000;
            local_45c = (float)local_448;
            local_2c8 = -(double)local_458._0_8_;
            dStack_2c0 = -dStack_310;
            local_388 = uVar29 * local_420;
            fVar52 = fVar49 * 127.0 + fVar49 * 127.0 + 0.5;
            fVar55 = fVar51 * 127.0 + fVar51 * 127.0 + 0.5;
            local_318 = fVar47 * 127.0 + fVar47 * 127.0 + 0.5;
            local_358 = ZEXT416((uint)(fVar65 * -127.0 + fVar65 * -127.0 + 0.5));
            local_368 = ZEXT416((uint)(fVar54 * -127.0 + fVar54 * -127.0 + 0.5));
            local_378 = fVar50 * -127.0 + fVar50 * -127.0 + 0.5;
            lVar34 = (ulonglong)
                     (((dVar2 * dVar59 - dVar13 * dVar43) + dVar3 * dVar4) * -0.0 +
                      (((dVar2 * 0.0 + (dVar43 * dVar60 - dVar3 * dVar14)) * (double)fVar49 -
                       (dVar13 * 0.0 + (dVar59 * dVar60 - dVar3 * dVar15)) *
                       (double)(float)(double)local_3e8._0_8_) -
                      (dVar4 * 0.0 + (dVar59 * dVar14 - dVar43 * dVar15)) * (double)fVar65) < 0.0) *
                     4;
            local_348 = ZEXT416((uint)(fVar49 * 32767.0 + fVar49 * 32767.0 + 0.5));
            local_298 = ZEXT416((uint)(fVar51 * 32767.0 + fVar51 * 32767.0 + 0.5));
            local_2a8 = fVar47 * 32767.0 + fVar47 * 32767.0 + 0.5;
            fVar51 = fVar65 * -32767.0 + fVar65 * -32767.0 + 0.5;
            local_288 = ZEXT416((uint)(fVar54 * -32767.0 + fVar54 * -32767.0 + 0.5));
            local_3f8 = fVar50 * -32767.0 + fVar50 * -32767.0 + 0.5;
            lVar26 = 0;
            fVar47 = *(float *)(&DAT_14a329b50 + lVar34);
            fVar49 = *(float *)(&DAT_14a329b58 + lVar34);
            local_2b8 = ZEXT416((uint)fVar51);
            local_2f8 = ZEXT416((uint)fVar52);
            local_308 = ZEXT416((uint)fVar55);
            local_328 = ZEXT416((uint)fVar47);
            local_338 = ZEXT416((uint)fVar49);
            fVar50 = local_3f8;
            fVar54 = local_318;
            fVar65 = local_2a8;
            local_380 = uVar29;
            uStack_374 = uStack_3f4;
            uStack_2a4 = uStack_314;
            dStack_2a0 = dStack_310;
            uStack_370 = dStack_3f0;
            do {
              fVar56 = fVar50;
              fVar53 = fVar54;
              fVar42 = fVar65;
              if (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + lVar26 * 0x28) != 0) {
                local_438._0_8_ = lVar26;
                puVar40 = (undefined8 *)(*(longlong *)(param_1 + 0x3a0) + lVar26 * 0x28);
                fVar56 = *(float *)((longlong)puVar40 + 0x14);
                fVar53 = *(float *)(puVar40 + 3);
                if (puVar40[4] != 0) {
                  fVar42 = (float)FUN_1449e6cbc();
                  fVar56 = fVar56 * fVar42;
                  fVar53 = fVar53 * fVar42;
                }
                local_3c8._0_8_ = uVar39;
                uVar29 = (ulonglong)((uint)uVar39 * 4);
                fVar42 = (float)(*(double *)(local_400 + 0xb08) * local_408 +
                                 *(double *)(local_400 + 0xae8) * local_418 +
                                 *(double *)(local_400 + 0xac8) * local_410 +
                                *(double *)(local_400 + 0xb28));
                bVar41 = (*(byte *)(puVar40 + 2) & 1) != 0;
                if (bVar41) {
                  fVar56 = fVar56 * fVar42;
                }
                local_3d8 = ZEXT416((uint)fVar56);
                if (bVar41) {
                  fVar53 = fVar53 * local_45c * fVar42;
                }
                local_458 = ZEXT416((uint)fVar53);
                auVar61 = insertps(ZEXT416((uint)(&DAT_14c758c60)[*(byte *)(param_1 + 0x3c2)]),
                                   (&DAT_14c758c60)[*(byte *)(param_1 + 0x3c1)],0x10);
                auVar61 = insertps(auVar61,(&DAT_14c758c60)[*(byte *)(param_1 + 0x3c0)],0x20);
                fVar56 = (float)*(byte *)(param_1 + 0x3c3) * 0.003921569;
                auVar61 = insertps(auVar61,ZEXT416((uint)fVar56),0x30);
                local_470 = puVar40;
                if (puVar40[1] != 0) {
                  fVar53 = (float)FUN_1449e6cbc();
                  auVar61 = insertps(auVar61,ZEXT416((uint)(fVar56 * fVar53)),0x30);
                }
                fVar42 = local_2a8;
                fVar53 = local_318;
                fVar56 = local_3f8;
                local_448 = (double)(local_388 + local_438._0_8_ * 4);
                uVar28 = SUB84(local_448,0);
                auVar61 = maxps(auVar61,_DAT_149e1a200);
                auVar62 = minps(auVar61,_DAT_149e1a210);
                fVar57 = auVar62._0_4_;
                fVar63 = auVar62._4_4_;
                fVar45 = auVar62._8_4_;
                auVar48._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar63 + -0x39000000) >> 0x14) * 4);
                auVar48._0_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 + (ulonglong)((int)fVar57 + 0xc7000000U >> 0x14) * 4);
                auVar48._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar45 + -0x39000000) >> 0x14) * 4);
                auVar48._12_4_ = 0;
                auVar61._0_4_ = (uint)fVar57 >> 0xc;
                auVar61._4_4_ = (uint)fVar63 >> 0xc;
                auVar61._8_4_ = (uint)fVar45 >> 0xc;
                auVar61._12_4_ = (uint)auVar62._12_4_ >> 0xc;
                auVar61 = pmaddwd(auVar61 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar48);
                auVar44._4_4_ = (int)(fVar63 * 0.0 + 0.5) | auVar61._4_4_ >> 0x10;
                auVar44._0_4_ = (int)(fVar45 * 0.0 + 0.5) | auVar61._8_4_ >> 0x10;
                auVar44._8_4_ = (int)(fVar57 * 0.0 + 0.5) | auVar61._0_4_ >> 0x10;
                auVar44._12_4_ = (int)(auVar62._12_4_ * 255.0 + 0.5) | auVar61._12_4_ >> 0x10;
                auVar61 = packssdw(auVar44,auVar44);
                sVar6 = auVar61._0_2_;
                sVar7 = auVar61._2_2_;
                sVar8 = auVar61._4_2_;
                sVar9 = auVar61._6_2_;
                lVar26 = 0;
                do {
                  lVar34 = *(longlong *)(param_1 + 0x2f8);
                  if (*(char *)(param_1 + 0x319) == '\x01') {
                    lVar34 = lVar34 + ((ulonglong)((uint)uVar39 & 0x3fffffff) << 6 | 0xe);
                    iVar32 = (int)ROUND((float)local_348._0_4_) >> 1;
                    if (0x7ffe < iVar32) {
                      iVar32 = 0x7fff;
                    }
                    uVar36 = (undefined2)iVar32;
                    if (iVar32 < -0x7fff) {
                      uVar36 = 0x8000;
                    }
                    iVar32 = (int)ROUND((float)local_298._0_4_) >> 1;
                    if (0x7ffe < (int)ROUND((float)local_298._0_4_) >> 1) {
                      iVar32 = 0x7fff;
                    }
                    *(undefined2 *)(lVar34 + -0xe + lVar26 * 8) = uVar36;
                    uVar36 = (undefined2)iVar32;
                    if (iVar32 < -0x7fff) {
                      uVar36 = 0x8000;
                    }
                    *(undefined2 *)(lVar34 + -0xc + lVar26 * 8) = uVar36;
                    iVar32 = (int)ROUND(fVar65) >> 1;
                    if (0x7ffe < iVar32) {
                      iVar32 = 0x7fff;
                    }
                    iVar38 = -0x8000;
                    uVar36 = (undefined2)iVar32;
                    if (iVar32 < -0x7fff) {
                      uVar36 = 0x8000;
                    }
                    iVar32 = (int)ROUND(fVar51) >> 1;
                    if (0x7ffe < (int)ROUND(fVar51) >> 1) {
                      iVar32 = 0x7fff;
                    }
                    *(undefined2 *)(lVar34 + -10 + lVar26 * 8) = uVar36;
                    if (iVar32 < -0x7fff) {
                      iVar32 = iVar38;
                    }
                    *(undefined2 *)(lVar34 + -8 + lVar26 * 8) = 0x7fff;
                    iVar37 = (int)ROUND((float)local_288._0_4_) >> 1;
                    if (0x7ffe < iVar37) {
                      iVar37 = 0x7fff;
                    }
                    if (iVar37 < -0x7fff) {
                      iVar37 = iVar38;
                    }
                    iVar17 = (int)ROUND(fVar50) >> 1;
                    if (0x7ffe < (int)ROUND(fVar50) >> 1) {
                      iVar17 = 0x7fff;
                    }
                    *(short *)(lVar34 + -6 + lVar26 * 8) = (short)iVar32;
                    if (iVar17 < -0x7fff) {
                      iVar17 = iVar38;
                    }
                    *(short *)(lVar34 + -4 + lVar26 * 8) = (short)iVar37;
                    *(short *)(lVar34 + -2 + lVar26 * 8) = (short)iVar17;
                    iVar32 = (int)ROUND(fVar49) >> 1;
                    if (0x7ffe < iVar32) {
                      iVar32 = 0x7fff;
                    }
                    uVar36 = (undefined2)iVar32;
                    if (iVar32 < -0x7fff) {
                      uVar36 = 0x8000;
                    }
                    *(undefined2 *)(lVar34 + lVar26 * 8) = uVar36;
                  }
                  else {
                    iVar32 = (int)ROUND(fVar52) >> 1;
                    if (0x7e < iVar32) {
                      iVar32 = 0x7f;
                    }
                    uVar35 = (undefined1)iVar32;
                    if (iVar32 < -0x7f) {
                      uVar35 = 0x80;
                    }
                    iVar32 = (int)ROUND(fVar55) >> 1;
                    if (0x7e < (int)ROUND(fVar55) >> 1) {
                      iVar32 = 0x7f;
                    }
                    *(undefined1 *)(lVar34 + uVar29 * 8) = uVar35;
                    uVar35 = (undefined1)iVar32;
                    if (iVar32 < -0x7f) {
                      uVar35 = 0x80;
                    }
                    *(undefined1 *)(lVar34 + 1 + uVar29 * 8) = uVar35;
                    iVar32 = (int)ROUND(fVar54) >> 1;
                    if (0x7e < iVar32) {
                      iVar32 = 0x7f;
                    }
                    iVar38 = -0x80;
                    uVar35 = (undefined1)iVar32;
                    if (iVar32 < -0x7f) {
                      uVar35 = 0x80;
                    }
                    iVar32 = (int)ROUND((float)local_358._0_4_) >> 1;
                    if (0x7e < (int)ROUND((float)local_358._0_4_) >> 1) {
                      iVar32 = 0x7f;
                    }
                    *(undefined1 *)(lVar34 + 2 + uVar29 * 8) = uVar35;
                    if (iVar32 < -0x7f) {
                      iVar32 = iVar38;
                    }
                    *(undefined1 *)(lVar34 + 3 + uVar29 * 8) = 0x7f;
                    iVar37 = (int)ROUND((float)local_368._0_4_) >> 1;
                    if (0x7e < iVar37) {
                      iVar37 = 0x7f;
                    }
                    if (iVar37 < -0x7f) {
                      iVar37 = iVar38;
                    }
                    iVar17 = (int)ROUND(local_378) >> 1;
                    if (0x7e < (int)ROUND(local_378) >> 1) {
                      iVar17 = 0x7f;
                    }
                    *(char *)(lVar34 + 4 + uVar29 * 8) = (char)iVar32;
                    if (iVar17 < -0x7f) {
                      iVar17 = iVar38;
                    }
                    *(char *)(lVar34 + 5 + uVar29 * 8) = (char)iVar37;
                    *(char *)(lVar34 + 6 + uVar29 * 8) = (char)iVar17;
                    iVar32 = (int)ROUND(fVar47) >> 1;
                    if (0x7e < iVar32) {
                      iVar32 = 0x7f;
                    }
                    uVar35 = (undefined1)iVar32;
                    if (iVar32 < -0x7f) {
                      uVar35 = 0x80;
                    }
                    *(undefined1 *)(lVar34 + 7 + uVar29 * 8) = uVar35;
                  }
                  *(uint *)(*(longlong *)(param_1 + 0x388) +
                           (ulonglong)(uint)(*(int *)(param_1 + 0x390) * (int)uVar29)) =
                       CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar61[6] - (0xff < sVar9),
                                CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar61[4] - (0xff < sVar8)
                                         ,CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar61[2] -
                                                   (0xff < sVar7),
                                                   (0 < sVar6) * (sVar6 < 0x100) * auVar61[0] -
                                                   (0xff < sVar6))));
                  lVar26 = lVar26 + 2;
                  uVar29 = uVar29 + 1;
                } while (lVar26 != 8);
                dVar2 = (double)-local_3d8._0_4_;
                dVar60 = (double)(float)local_458._0_4_;
                lVar26 = *(longlong *)(param_1 + 0x348);
                uVar29 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar28);
                *(float *)(lVar26 + uVar29) =
                     (float)(dVar2 * (double)local_3e8._0_8_ + dVar60 * local_2c8);
                *(float *)(lVar26 + 4 + uVar29) =
                     (float)((double)local_278._0_8_ * dVar2 + (double)local_2e8._0_8_ * dVar60);
                *(float *)(lVar26 + 8 + uVar29) =
                     (float)((double)local_268._0_8_ * dVar2 + local_2d8 * dVar60);
                dVar3 = (double)local_3d8._0_4_;
                lVar26 = *(longlong *)(param_1 + 0x348);
                uVar24 = uVar28 | 1;
                uVar29 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar24);
                *(float *)(lVar26 + uVar29) =
                     (float)(dVar60 * local_2c8 + dVar3 * (double)local_3e8._0_8_);
                *(float *)(lVar26 + 4 + uVar29) =
                     (float)((double)local_2e8._0_8_ * dVar60 + (double)local_278._0_8_ * dVar3);
                dVar4 = (double)-(float)local_458._0_4_;
                *(float *)(lVar26 + 8 + uVar29) =
                     (float)(local_2d8 * dVar60 + (double)local_268._0_8_ * dVar3);
                lVar26 = *(longlong *)(param_1 + 0x348);
                uVar25 = uVar28 | 2;
                uVar29 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar25);
                *(float *)(lVar26 + uVar29) =
                     (float)(dVar2 * (double)local_3e8._0_8_ + dVar4 * local_2c8);
                *(float *)(lVar26 + 4 + uVar29) =
                     (float)((double)local_278._0_8_ * dVar2 + (double)local_2e8._0_8_ * dVar4);
                *(float *)(lVar26 + 8 + uVar29) =
                     (float)((double)local_268._0_8_ * dVar2 + local_2d8 * dVar4);
                lVar26 = *(longlong *)(param_1 + 0x348);
                uVar33 = uVar28 | 3;
                uVar29 = (ulonglong)(*(int *)(param_1 + 0x350) * uVar33);
                *(float *)(lVar26 + uVar29) =
                     (float)(dVar4 * local_2c8 + dVar3 * (double)local_3e8._0_8_);
                *(float *)(lVar26 + 4 + uVar29) =
                     (float)((double)local_2e8._0_8_ * dVar4 + (double)local_278._0_8_ * dVar3);
                *(float *)(lVar26 + 8 + uVar29) =
                     (float)(local_2d8 * dVar4 + (double)local_268._0_8_ * dVar3);
                if (*(char *)(param_1 + 0x318) == '\x01') {
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)(uVar28 & 0xfffffffc) * (ulonglong)*(uint *)(param_1 + 0x310) * 8) = 0
                  ;
                }
                else {
                  *(undefined4 *)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)(uVar28 & 0xfffffffc) * (ulonglong)*(uint *)(param_1 + 0x310) * 4) = 0
                  ;
                }
                fVar51 = (float)local_2b8._0_4_;
                fVar52 = (float)local_2f8._0_4_;
                fVar55 = (float)local_308._0_4_;
                fVar47 = (float)local_328._0_4_;
                fVar49 = (float)local_338._0_4_;
                if (*(char *)(param_1 + 0x318) == '\x01') {
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)uVar24 * (ulonglong)*(uint *)(param_1 + 0x310) * 8) =
                       0x3f80000000000000;
                }
                else {
                  *(undefined4 *)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)uVar24 * (ulonglong)*(uint *)(param_1 + 0x310) * 4) = 0x3c000000;
                }
                if (*(char *)(param_1 + 0x318) == '\x01') {
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)uVar25 * (ulonglong)*(uint *)(param_1 + 0x310) * 8) = 0x3f800000;
                }
                else {
                  *(undefined4 *)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)uVar25 * (ulonglong)*(uint *)(param_1 + 0x310) * 4) = 0x3c00;
                }
                if (*(char *)(param_1 + 0x318) == '\x01') {
                  *(undefined1 **)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)uVar33 * (ulonglong)*(uint *)(param_1 + 0x310) * 8) =
                       &DAT_3f8000003f800000;
                }
                else {
                  *(undefined4 *)
                   (*(longlong *)(param_1 + 0x300) +
                   (ulonglong)uVar33 * (ulonglong)*(uint *)(param_1 + 0x310) * 4) = 0x3c003c00;
                }
                iVar32 = (int)param_5[1];
                iVar38 = (int)param_5[2];
                iVar37 = (iVar38 + 0x44) / 0x44;
                *(int *)(param_5 + 2) = iVar38 + 1;
                if (iVar32 < iVar37) {
                  do {
                    local_458._0_4_ = iVar32;
                    lVar26 = FUN_14001cc68(0x3fc0,0x10);
                    lVar34 = 0;
                    do {
                      *(undefined8 *)(lVar26 + 0xa8 + lVar34) = 0;
                      puVar40 = (undefined8 *)(lVar26 + 0xb8 + lVar34);
                      *puVar40 = 0;
                      puVar40[1] = 0;
                      *(undefined8 *)(lVar26 + 200 + lVar34) = 0;
                      *(undefined8 *)(lVar26 + 0xd0 + lVar34) = 0xffffffff;
                      *(undefined8 *)(lVar26 + 0xd8 + lVar34) = 0xff0000ffffffff;
                      *(undefined1 *)(lVar26 + 0xe0 + lVar34) = 0;
                      *(undefined4 *)(lVar26 + 0xe4 + lVar34) = 0x40c00f07;
                      pbVar1 = (byte *)(lVar26 + 0xe8 + lVar34);
                      *pbVar1 = *pbVar1 & 0xfc;
                      *(undefined1 **)(lVar26 + 0xb0 + lVar34) = &DAT_100000001;
                      FUN_14470b9e0(lVar26 + lVar34,1);
                      lVar34 = lVar34 + 0xf0;
                    } while (lVar34 != 0x3fc0);
                    iVar32 = (int)param_5[1];
                    *(uint *)(param_5 + 1) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_5 + 0xc) < iVar32 + 1U) {
                      FUN_14002baf6(param_5,iVar32);
                    }
                    *(longlong *)(*param_5 + (longlong)iVar32 * 8) = lVar26;
                    iVar32 = local_458._0_4_ + 1;
                  } while (iVar32 != iVar37);
                }
                lVar26 = *(longlong *)(*param_5 + (longlong)(iVar38 / 0x44) * 8);
                lVar34 = (ulonglong)(uint)(iVar38 % 0x44) * 0xf0;
                *(longlong *)(lVar26 + 0xb8 + lVar34) = local_390;
                uVar22 = (**(code **)(*(longlong *)*local_470 + 0x2f0))();
                uVar29 = local_380;
                *(undefined8 *)(lVar26 + 0xc0 + lVar34) = uVar22;
                *(undefined8 *)(lVar26 + 200 + lVar34) = 0;
                uVar24 = (*(byte *)(param_1 + 0x6b) & 1) << 6;
                uVar28 = *(uint *)(lVar26 + 0xe4 + lVar34);
                *(uint *)(lVar26 + 0xe4 + lVar34) = uVar28 & 0xfffffebf | uVar24;
                if (((*(byte *)(param_1 + 0x6c) & 0x20) != 0) &&
                   ((longlong)*(int *)(param_1 + 0xf0) != 0)) {
                  uVar39 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar39) ==
                        *(longlong *)(local_400 + 0x4c0)) {
                      if ((~uVar39 & 0x7fffffff8) != 0) {
                        bVar23 = *(byte *)(param_1 + 0x6d) >> 3;
                        goto LAB_143486401;
                      }
                      break;
                    }
                    uVar39 = uVar39 + 8;
                  } while ((longlong)*(int *)(param_1 + 0xf0) * 8 != uVar39);
                }
                bVar23 = *(byte *)(param_1 + 0x6d);
LAB_143486401:
                lVar26 = lVar26 + lVar34;
                *(uint *)(lVar26 + 0xe4) =
                     (uVar28 & 0xfff03e3f | uVar24) + (bVar23 & 7) * 0x20000 + 0x4080;
                lVar34 = *(longlong *)(lVar26 + 0xa8);
                if (*(longlong *)(lVar26 + 0xa8) == 0) {
                  lVar34 = lVar26;
                }
                *(undefined8 *)(lVar34 + 0x18) = 0;
                *(undefined8 *)(lVar34 + 0x58) = 0x200000000;
                *(undefined8 *)(lVar34 + 0x68) = 0x300000000;
                *(int *)(lVar34 + 100) = SUB84(local_448,0);
                uVar28 = *(uint *)(lVar26 + 0xe4);
                *(uint *)(lVar26 + 0xe4) = uVar28 | 0x100000;
                *(uint *)(lVar26 + 0xe4) =
                     uVar28 & 0xffdfffff | 0x100000 |
                     (uint)((*(byte *)(param_1 + 0x6c) & 6) != 0) << 0x15;
                FUN_1436a14f8(param_5,local_380 & 0xffffffff,lVar26);
                lVar26 = local_438._0_8_;
                uVar39 = local_3c8._0_8_;
              }
              lVar26 = lVar26 + 1;
              uVar39 = (ulonglong)((int)uVar39 + 1);
              fVar50 = fVar56;
              fVar54 = fVar53;
              fVar65 = fVar42;
            } while (lVar26 < *(int *)(param_1 + 0x3a8));
          }
          iVar32 = (int)local_428[1];
          plVar27 = local_428;
        }
        uVar29 = uVar29 + 1;
        local_468 = local_468 + local_420;
      } while ((longlong)uVar29 < (longlong)iVar32);
    }
    lVar34 = local_3b0;
    lVar26 = param_5[0x22];
    FUN_1447fd100(local_3b0,lVar26);
    lVar21 = local_3a8;
    FUN_1447fd100(local_3a8,lVar26);
    puVar40 = local_3a0;
    FUN_1447fd100(local_3a0,lVar26);
    local_1e8 = 0x400000000;
    local_1e0 = 0;
    _iStack_1d8 = 0;
    local_1d0 = (undefined8 *)0x0;
    _iStack_1c8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0xffffffff;
    local_19c = 0xff;
    uVar30 = 0;
    local_19a = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    local_24b = *(undefined1 *)(param_1 + 0x350);
    local_258 = lVar34;
    local_250 = 0;
    local_24c = 0;
    local_24a = 3;
    local_1c0 = *(undefined8 *)(param_1 + 0x338);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x2e0);
    cVar5 = *(char *)(param_1 + 0x319);
    local_248 = param_1 + 0x2a8;
    local_23b = cVar5 * '\b' + '\b';
    local_23a = (cVar5 != '\0') * '\t' + '\x05';
    local_240 = 0;
    local_23c = 0;
    local_239 = 4;
    local_22c = cVar5 * '\x04' + '\x04';
    local_230 = 0;
    local_229 = 4;
    local_238 = local_248;
    local_22b = local_23b;
    local_22a = local_23a;
    FUN_14472d638(lVar21,param_1 + 0x3c8,&local_258,0xffffffff);
    uVar24 = *(uint *)(param_1 + 0x310);
    uVar28 = uVar24 - 1;
    if (0 < (int)uVar24) {
      uVar28 = 0;
    }
    local_19c = CONCAT11((char)uVar24,(char)uVar28);
    local_1b0 = *(undefined8 *)(param_1 + 0x2f0);
    if ((-1 < (int)uVar28) && (uVar28 < uVar24)) {
      bVar23 = *(char *)(param_1 + 0x318) + 2;
      local_1e0 = param_1 + 0x2c0;
      uVar35 = 0xc;
      if (*(char *)(param_1 + 0x318) != '\0') {
        uVar35 = 2;
      }
      _iStack_1d8 = CONCAT17(4,(uint7)CONCAT12(uVar35,CONCAT11((char)(uVar24 << (bVar23 & 0x1f)),
                                                               (char)(uVar28 << (bVar23 & 0x1f))))
                               << 0x20);
    }
    if (*(int *)(param_1 + 0x394) == 0) {
      puVar40 = &DAT_14ca94d98;
      puVar31 = &DAT_14ca94db0;
      bVar23 = 0;
    }
    else {
      bVar23 = *(byte *)(param_1 + 0x390);
      puVar31 = (undefined8 *)(param_1 + 0x380);
      uVar30 = 0xffffffff;
    }
    uStack_1a8 = *puVar31;
    _iStack_1c8 = CONCAT26(0x408,(uint6)bVar23 << 0x28);
    local_1d0 = puVar40;
    local_1a0 = uVar30;
    FUN_140ba0b60(param_1 + 0x3c8,lVar26);
  }
  if ((local_f0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434868ca FUN_1434868ca body=282 status=ok
// SIG undefined FUN_1434868ca(void)

undefined8 * FUN_1434868ca(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 1434869e8 FUN_1434869e8 body=31 status=ok
// SIG undefined FUN_1434869e8(void)

undefined8 FUN_1434869e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143486aea FUN_143486aea body=282 status=ok
// SIG undefined FUN_143486aea(void)

undefined8 * FUN_143486aea(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 143486c04 FUN_143486c04 body=261 status=ok
// SIG undefined FUN_143486c04(void)

void FUN_143486c04(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((((*(int *)((longlong)param_1 + 0xac) != 0) &&
        (uVar3 = *(uint *)(param_1 + 0x15), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0xac))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar4 = *plVar8, lVar4 != 0)))) {
    iVar6 = *(int *)(lVar4 + 0x2f8);
    do {
      if (*(int *)(param_1 + 0x16) <= iVar6) break;
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x2f8);
      bVar9 = iVar6 == iVar2;
      if (bVar9) {
        *(int *)(lVar4 + 0x2f8) = *(int *)(param_1 + 0x16);
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      UNLOCK();
    } while (!bVar9);
    if ((~*(byte *)(lVar4 + 0x9c) & 3) == 0) {
      bVar5 = *(byte *)(lVar4 + 0x9d);
      if ((bVar5 & 1) != 0) {
        if ((*(longlong *)(lVar4 + 0xb0) != 0) || (lVar7 = FUN_1448abda6(lVar4), lVar7 != 0))
        goto LAB_143486cdf;
        bVar5 = *(byte *)(lVar4 + 0x9d);
      }
      *(byte *)(lVar4 + 0x9d) = bVar5 | 1;
      FUN_1401057d4(lVar4);
      FUN_14010586c(&DAT_14cad0140,lVar4);
    }
  }
LAB_143486cdf:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143486cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143486d0a FUN_143486d0a body=726 status=ok
// SIG undefined FUN_143486d0a(void)

void FUN_143486d0a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined2 local_102;
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  char local_f3;
  char local_f2;
  undefined1 local_f1;
  longlong local_f0;
  undefined4 local_e8;
  char local_e4;
  char local_e3;
  char local_e2;
  undefined1 local_e1;
  undefined8 local_a0;
  longlong local_98;
  int7 iStack_90;
  undefined1 uStack_89;
  undefined8 *local_88;
  int6 iStack_80;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14006bf18(*param_1 + 0x540);
  FUN_140d00208(*param_1 + 0x4b8,param_2);
  FUN_14006bf18(*param_1 + 0x580,param_2);
  local_a0 = 0x400000000;
  local_98 = 0;
  _iStack_90 = 0;
  local_88 = (undefined8 *)0x0;
  _iStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0xff;
  uVar5 = 0;
  local_52 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lVar3 = *param_1;
  local_110 = lVar3 + 0x540;
  local_103 = *(undefined1 *)(lVar3 + 0x570);
  local_108 = 0;
  local_104 = 0;
  local_102 = 3;
  local_78 = *(undefined8 *)(lVar3 + 0x558);
  uStack_70 = *(undefined8 *)(lVar3 + 0x500);
  cVar1 = *(char *)(lVar3 + 0x539);
  local_100 = lVar3 + 0x4c8;
  local_f3 = cVar1 * '\b' + '\b';
  local_f2 = (cVar1 != '\0') * '\t' + '\x05';
  local_f8 = 0;
  local_f4 = 0;
  local_f1 = 4;
  local_e4 = cVar1 * '\x04' + '\x04';
  local_e8 = 0;
  local_e1 = 4;
  local_f0 = local_100;
  local_e3 = local_f3;
  local_e2 = local_f2;
  FUN_14472d638(lVar3 + 0x4b8,lVar3 + 0x298,&local_110,0xffffffff);
  lVar3 = *param_1;
  uVar2 = *(uint *)(lVar3 + 0x530);
  uVar6 = uVar2 - 1;
  if (0 < (int)uVar2) {
    uVar6 = 0;
  }
  local_54 = CONCAT11((char)uVar2,(char)uVar6);
  local_68 = *(undefined8 *)(lVar3 + 0x510);
  if ((-1 < (int)uVar6) && (uVar6 < uVar2)) {
    bVar4 = *(char *)(lVar3 + 0x538) + 2;
    local_98 = lVar3 + 0x4e0;
    uVar8 = 0xc;
    if (*(char *)(lVar3 + 0x538) != '\0') {
      uVar8 = 2;
    }
    _iStack_90 = CONCAT17(4,(uint7)CONCAT12(uVar8,CONCAT11((char)(uVar2 << (bVar4 & 0x1f)),
                                                           (char)(uVar6 << (bVar4 & 0x1f)))) << 0x20
                         );
  }
  if (*(int *)(lVar3 + 0x5b4) == 0) {
    local_88 = &DAT_14ca94d98;
    puVar7 = &DAT_14ca94db0;
    bVar4 = 0;
  }
  else {
    local_88 = (undefined8 *)(lVar3 + 0x580);
    puVar7 = (undefined8 *)(lVar3 + 0x5a0);
    bVar4 = *(byte *)(lVar3 + 0x5b0);
    uVar5 = 0xffffffff;
  }
  uStack_60 = *puVar7;
  _iStack_80 = CONCAT26(0x408,(uint6)bVar4 << 0x28);
  local_58 = uVar5;
  FUN_140ba0b60(lVar3 + 0x298,param_2);
  FUN_14006bf18(*param_1 + 0x298,param_2);
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143486ff2 FUN_143486ff2 body=12 status=ok
// SIG undefined FUN_143486ff2(void)

void FUN_143486ff2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143486ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143486ffe FUN_143486ffe body=29 status=ok
// SIG undefined FUN_143486ffe(void)

undefined8 FUN_143486ffe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14348701c FUN_14348701c body=282 status=ok
// SIG undefined FUN_14348701c(void)

undefined8 * FUN_14348701c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 143487136 FUN_143487136 body=105 status=ok
// SIG undefined FUN_143487136(void)

void FUN_143487136(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143486d0a(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143486d0a(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143487179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14348719f FUN_14348719f body=51 status=ok
// SIG undefined FUN_14348719f(void)

void FUN_14348719f(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 1434871e8 FUN_1434871e8 body=12 status=ok
// SIG undefined FUN_1434871e8(void)

void FUN_1434871e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434871f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434871f4 FUN_1434871f4 body=29 status=ok
// SIG undefined FUN_1434871f4(void)

undefined8 FUN_1434871f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143487212 FUN_143487212 body=282 status=ok
// SIG undefined FUN_143487212(void)

undefined8 * FUN_143487212(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 14348739c FUN_14348739c body=12 status=ok
// SIG undefined FUN_14348739c(void)

void FUN_14348739c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434873a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434873a8 FUN_1434873a8 body=29 status=ok
// SIG undefined FUN_1434873a8(void)

undefined8 FUN_1434873a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434873c6 FUN_1434873c6 body=282 status=ok
// SIG undefined FUN_1434873c6(void)

undefined8 * FUN_1434873c6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 14348755e FUN_14348755e body=29 status=ok
// SIG undefined FUN_14348755e(void)

void FUN_14348755e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14348757c FUN_14348757c body=29 status=ok
// SIG undefined FUN_14348757c(void)

undefined8 FUN_14348757c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14348759a FUN_14348759a body=282 status=ok
// SIG undefined FUN_14348759a(void)

undefined8 * FUN_14348759a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 1434876b4 FUN_1434876b4 body=106 status=ok
// SIG undefined FUN_1434876b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434876b4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147ba1928(_DAT_000000b0,0xc0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147ba1928(param_1[0x16],param_1 + 0x18);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143487714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143487736 FUN_143487736 body=12 status=ok
// SIG undefined FUN_143487736(void)

void FUN_143487736(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014348773f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143487742 FUN_143487742 body=29 status=ok
// SIG undefined FUN_143487742(void)

undefined8 FUN_143487742(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143487760 FUN_143487760 body=282 status=ok
// SIG undefined FUN_143487760(void)

undefined8 * FUN_143487760(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 14348787a FUN_14348787a body=80 status=ok
// SIG undefined FUN_14348787a(void)

ulonglong FUN_14348787a(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434878c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1434878ca FUN_1434878ca body=42 status=ok
// SIG undefined FUN_1434878ca(void)

void FUN_1434878ca(undefined8 *param_1)

{
  FUN_143563226(*param_1,param_1 + 2,param_1 + 6,param_1 + 9,param_1 + 0xc);
  return;
}



// FUNCTION 1434878fe FUN_1434878fe body=29 status=ok
// SIG undefined FUN_1434878fe(void)

void FUN_1434878fe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14348791c FUN_14348791c body=29 status=ok
// SIG undefined FUN_14348791c(void)

undefined8 FUN_14348791c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14348793a FUN_14348793a body=282 status=ok
// SIG undefined FUN_14348793a(void)

undefined8 * FUN_14348793a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 143487a54 FUN_143487a54 body=148 status=ok
// SIG undefined FUN_143487a54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143487a54(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143563226(_DAT_000000b0,0xc0,0xe0,0xf8,0x110);
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    FUN_143563226(param_1[0x16],param_1 + 0x18,param_1 + 0x1c,param_1 + 0x1f,param_1 + 0x22);
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143487ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143487b44 FUN_143487b44 body=12 status=ok
// SIG undefined FUN_143487b44(void)

void FUN_143487b44(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143487b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143487b50 FUN_143487b50 body=29 status=ok
// SIG undefined FUN_143487b50(void)

undefined8 FUN_143487b50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143487b6e FUN_143487b6e body=282 status=ok
// SIG undefined FUN_143487b6e(void)

undefined8 * FUN_143487b6e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 143487d5c FUN_143487d5c body=31 status=ok
// SIG undefined FUN_143487d5c(void)

undefined8 FUN_143487d5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143487e16 FUN_143487e16 body=31 status=ok
// SIG undefined FUN_143487e16(void)

undefined8 FUN_143487e16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143487ebe FUN_143487ebe body=12 status=ok
// SIG undefined FUN_143487ebe(void)

void FUN_143487ebe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143487ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143487eca FUN_143487eca body=29 status=ok
// SIG undefined FUN_143487eca(void)

undefined8 FUN_143487eca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143487ee8 FUN_143487ee8 body=282 status=ok
// SIG undefined FUN_143487ee8(void)

undefined8 * FUN_143487ee8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 14348809c FUN_14348809c body=282 status=ok
// SIG undefined FUN_14348809c(void)

undefined8 * FUN_14348809c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14348442c);
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



// FUNCTION 1434881b6 FUN_1434881b6 body=261 status=ok
// SIG undefined FUN_1434881b6(void)

void FUN_1434881b6(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((((*(int *)((longlong)param_1 + 0xac) != 0) &&
        (uVar3 = *(uint *)(param_1 + 0x15), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0xac))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar4 = *plVar8, lVar4 != 0)))) {
    iVar6 = *(int *)(lVar4 + 0x328);
    do {
      if (*(int *)(param_1 + 0x16) <= iVar6) break;
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x328);
      bVar9 = iVar6 == iVar2;
      if (bVar9) {
        *(int *)(lVar4 + 0x328) = *(int *)(param_1 + 0x16);
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      UNLOCK();
    } while (!bVar9);
    if ((~*(byte *)(lVar4 + 0x9c) & 3) == 0) {
      bVar5 = *(byte *)(lVar4 + 0x9d);
      if ((bVar5 & 1) != 0) {
        if ((*(longlong *)(lVar4 + 0xb0) != 0) || (lVar7 = FUN_1448abda6(lVar4), lVar7 != 0))
        goto LAB_143488291;
        bVar5 = *(byte *)(lVar4 + 0x9d);
      }
      *(byte *)(lVar4 + 0x9d) = bVar5 | 1;
      FUN_1401057d4(lVar4);
      FUN_14010586c(&DAT_14cad0140,lVar4);
    }
  }
LAB_143488291:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434882b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1434882bb FUN_1434882bb body=3231 status=ok
// SIG undefined FUN_1434882bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434882bb(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  wchar_t *local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a83e230,1,&PTR_FUN_14a83e1e0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad1058,L"cac.ExperimentalAllowPerInstanceChildActorProperties",
                &DAT_14cad1f88,
                L"[EXPERIMENTAL] If true, allows properties to be modified on a per-instance basis for child actors."
               );
  atexit(FUN_143475a7c);
  DAT_14cad1068 = 0;
  _DAT_14cad1070 = 0;
  atexit(FUN_1434775a6);
  DAT_14cad1078 = 0;
  _DAT_14cad1080 = 0;
  atexit(FUN_1434775d7);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cad1088);
  if (cVar2 == '\0') {
    _DAT_14cad1088 = 0;
    uRam000000014cad1090 = 0;
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a83fb10,1,0);
  local_60._0_4_ = 0x3f800000;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad1128,L"r.Decal.FadeDurationScale",&local_60,
                L"Scales the per decal fade durations. Lower values shortens lifetime and fade duration. Default is 1.0f."
               );
  atexit(FUN_143477610);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a842110,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad11f0,L"r.MaxCSMRadiusToAllowPerObjectShadows",&DAT_14c7613fc,
                L"Only stationary lights with a CSM radius smaller than this will create per object shadows for dynamic objects."
               );
  atexit(FUN_143477cea);
  local_60._0_4_ = 0x48435000;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad1200,L"r.Shadow.UnbuiltWholeSceneDynamicShadowRadius",&local_60,
                L"WholeSceneDynamicShadowRadius to use when using CSM to preview unbuilt lighting from a directional light"
               );
  atexit(FUN_143477d2f);
  local_60._0_4_ = 4;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad1218,L"r.Shadow.UnbuiltNumWholeSceneDynamicShadowCascades",&local_60,
                L"DynamicShadowCascades to use when using CSM to preview unbuilt lighting from a directional light"
               );
  atexit(FUN_143477d74);
  local_60._0_4_ = 0x3f800000;
  local_88._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cad1230,L"r.Shadow.CSMShadowDistanceFadeoutMultiplier",&local_60,
                L"Multiplier for the CSM distance fade");
  atexit(FUN_143477db9);
  local_60._0_4_ = 0x41000000;
  local_88._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad1248,L"r.Shadow.PerObjectCastDistanceRadiusScale",&local_60,
                L"PerObjectCastDistanceRadiusScale The scale factor multiplied with the radius of the object to calculate the maximum distance a per-object directional shadow can reach. This will only take effect after a certain (large) radius. Default is 8 times the object radius."
               );
  atexit(FUN_143477dfe);
  local_60._0_4_ = 0x47000000;
  local_88._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad1260,L"r.Shadow.PerObjectCastDistanceMin",&local_60,
                L"Minimum cast distance for Per-Object shadows, i.e., CastDistDance = Max(r.Shadow.PerObjectCastDistanceRadiusScale * object-radius, r.Shadow.PerObjectCastDistanceMin).\n  Default: UE_FLOAT_HUGE_DISTANCE / 32.0f"
               );
  atexit(FUN_143477e43);
  local_60._0_4_ = 10;
  local_88._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cad1278,L"r.Shadow.MaxNumFarShadowCascades",&local_60,
                L"Max number of far shadow cascades that can be cast from a directional light");
  atexit(FUN_143477e88);
  local_88._0_4_ = 0x60;
  FUN_141471170(&DAT_14cad1290,L"r.Shadow.FarShadowStaticMeshLODBias",&DAT_14cad1fd8,
                L"Notice: only selected geometry types (static meshes and landscapes) respect this value."
               );
  atexit(FUN_143477ecd);
  local_60._0_4_ = 0;
  local_88._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cad12a0,L"r.Shadow.FarShadowDistanceOverride",&local_60,
                L"Overriding far shadow distance for all directional lighst");
  atexit(FUN_143477f12);
  local_60._0_4_ = 0x3f800000;
  local_88._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad12b8,L"r.DFFarTransitionScale",&local_60,
                L"Use to modify the length of the far transition (fade out) of the distance field shadows.\n1.0: (default) Calculate in the same way as other cascades.0.0: Disable fade out."
               );
  atexit(FUN_143477f57);
  local_60._0_4_ = 0x3f800000;
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_140a6b41e(&DAT_14cad12d0,L"r.DFDistanceScale",&local_60,
                L"Factor to scale directional light property \'DistanceField Shadows Distance\', clamped to [0.0001, 10000].\nI.e.: DistanceFieldShadowsDistance *= r.DFDistanceScale.\n[0.0001,1): shorter distance\n 1: normal (default)\n(1,10000]: larger distance.)"
               );
  atexit(FUN_143477f9c);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a843ea0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a844ab0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8459e0,1,0);
  DAT_14cad1368 = 0;
  _DAT_14cad1370 = 0;
  atexit((_func_5014 *)&LAB_143478b5f);
  DAT_14cad1378 = 0;
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8478e0,2,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a849290;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8492e0,1,&PTR_FUN_14a8492b0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a84aa50;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a84aaa0,1,&PTR_FUN_14a84aa70);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a84d7a0,1,&PTR_FUN_14a84d770);
  local_60._0_4_ = 0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad1fa8,L"r.StaticLightsOnRenderThread",&local_60,
                L"True to allow static lights create scene proxies for the render thread. Default is 0."
               );
  atexit(FUN_14347ba3a);
  DAT_14cad1680 = 0;
  _DAT_14cad1688 = 0;
  _DAT_14cad1690 = 2;
  atexit(FUN_14347bf78);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,0x41700000);
  local_88._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad1698,L"r.Lights.GbxAutoSetMaxDrawDistance",&local_60,
                L"Cooked builds only: If set to >0, then Max Draw Distance for lights will be computed using AttenuationRadius * CVarValue, but only if the Max Draw Distance is unset (0)"
               );
  atexit(FUN_14347bfa9);
  local_60 = (wchar_t *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_60 + 8) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_149e00260;
  *(code **)(local_60 + 0xc) = FUN_14347c504;
  local_88 = CONCAT44(local_88._4_4_,1);
  FUN_1415c7246(&DAT_14cad16b0,L"ToggleLight",
                L"Toggles all lights whose name contains the specified string",&local_60);
  if (local_58 != 0) {
    if (local_60 == (wchar_t *)0x0) goto LAB_143488923;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143488923:
  atexit(FUN_14347c6aa);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a84ebd0,1,&PTR_FUN_14a84eb80);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a84fcf0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a850f50,1,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a851d50;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a851dc0,1,&PTR_FUN_14a851d70);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a853090,1,&PTR_FUN_14a853060);
  DAT_14cad18d8 = 0xffffffff;
  _DAT_14cad18dc = 0x105;
  DAT_14cad18de = 0;
  DAT_14cad18e0 = 0;
  DAT_14cad18d0 = &PTR_FUN_14a8619d0;
  FUN_1463ba5e0();
  atexit(FUN_14347f4bc);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a854780,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a855420,1,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a857350;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a857370,1,0);
  FUN_1446f470e(&DAT_14cad1a38,L"MovementOverlapTest",1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad1a40,L"p.MoveIgnoreFirstBlockingOverlap",&DAT_14cad1f8c,
                L"Whether to ignore the first blocking overlap in SafeMoveUpdatedComponent (if moving out from object and starting in penetration).\nThe \'p.InitialOverlapTolerance\' setting determines the \'move out\' rules, but by default we always try to depenetrate first (not ignore the hit).\n0: Disable (do not ignore), 1: Enable (ignore)"
               );
  atexit(FUN_143481096);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad1a50,L"p.PenetrationPullbackDistance",&DAT_14c761408,
                L"Pull out from penetration of an object by this extra distance.\nDistance added to penetration fix-ups."
               );
  atexit(FUN_1434810db);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad1a60,L"p.PenetrationOverlapCheckInflation",&DAT_14c76140c,
                L"Inflation added to object when checking if a location is free of blocking collision.\nDistance added to inflation in penetration overlap check."
               );
  atexit(FUN_143481120);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a858760,1,0);
  FUN_1446f470e(&DAT_14cad1b00,L"MulticastAsyncPhysicsStateAction",1);
  FUN_1446f470e(&DAT_14cad1b10,L"ServerAsyncPhysicsStateAction",1);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14a859b60;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a859b80,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a85a510,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a85ae70,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a85bbc0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad1be0,L"r.AllowPointLightCubemapShadows",&DAT_14c761410,
                L"When 0, will prevent point light cube map shadows from being used and the light will be unshadowed."
               );
  atexit(FUN_1434812b5);
  local_60 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a85d7d0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a85e340,1,0);
  local_60 = L"SMInstance";
  local_58 = 10;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cad1c78 = (ulonglong)uVar3;
  local_60 = L"InvalidMove";
  local_58 = 0xb;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"PrimitiveComponent";
  local_58 = 0x12;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"move";
  local_58 = 4;
  FUN_140208c1e(&DAT_14cad1c80,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_14348207c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad1c90,L"p.AlwaysCreatePhysicsStateConversionHack",&DAT_14cad1ca0,
                L"Hack to convert actors with query and ignore all to always create physics.");
  atexit(FUN_143482090);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad1ca8,L"p.AllowCachedOverlaps",&DAT_14c761414,
                L"Primitive Component physics\n0: disable cached overlaps, 1: enable (default)");
  atexit(FUN_1434820d5);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad1cb8,L"p.InitialOverlapTolerance",&DAT_14cad1f94,
                L"Tolerance for initial overlapping test in PrimitiveComponent movement.\nNormals within this tolerance are ignored if moving out of the object.\nDot product of movement direction and surface normal."
               );
  atexit(FUN_14348211a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad1cc8,L"p.HitDistanceTolerance",&DAT_14cad1f90,
                L"Tolerance for hit distance for overlap test in PrimitiveComponent movement.\nHits that are less than this distance are ignored."
               );
  atexit(FUN_14348215f);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad1cd8,L"p.EnableFastOverlapCheck",&DAT_14c761418,
                L"Enable fast overlap check against sweep hits, avoiding UpdateOverlaps (for the swept component)."
               );
  atexit(FUN_1434821a4);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad1ce8,L"np2.PredictiveInterpolation.FakeTargetOnClientWakeUp",
                &DAT_14cad1cf8,
                L"When true, predictive interpolation will fake a replication target at the current transform marked as asleep, this target only apply if the client doesn\'t receive targets from the server. This stops the client from desyncing from the server if being woken up by mistake"
               );
  atexit(FUN_1434821e9);
  FUN_1446f470e(&DAT_14cad1cfc,&DAT_14a85eb9c,1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad1d50,L"r.Streaming.EnableAutoDetectNoStreamableTextures",&DAT_14c761404,
                L"Enables auto-detection at cook time of primitive components with no streamable textures. Can also be turned-off at runtime to skip optimisation."
               );
  atexit(FUN_14348236b);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143488f5c FUN_143488f5c body=776 status=ok
// SIG undefined FUN_143488f5c(void)

ulonglong FUN_143488f5c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_1[0x22] != 0) &&
     ((lVar2 = param_1[0x16], lVar2 != 0 || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)))) {
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0);
      if ((0 < *(int *)(lVar2 + 0x90)) &&
         (unaff_RBX = **(longlong **)(lVar2 + 0x88), unaff_RBX != 0)) {
        lVar3 = FUN_1402cf98a();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(unaff_RBX + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RBX + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
            (lVar2 = *(longlong *)(**(longlong **)(lVar2 + 0x88) + 0x178), lVar2 != 0)))) {
          lVar6 = *(longlong *)(lVar2 + 0x2b0);
        }
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((*(byte *)(lVar6 + 0x39d) & 4) == 0) goto LAB_1434890c6;
    lVar2 = param_1[0x22];
    plVar1 = *(longlong **)(lVar2 + 0xa8);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
      dVar7 = DAT_14c8464f0;
      if (plVar1[0x39] != 0) {
        dVar7 = *(double *)(plVar1[0x39] + 0x270);
      }
      if ((double)*(float *)(lVar6 + 0x40c) <= dVar7) {
        if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x9c) & 1) != 0)) {
          if ((-4398046511104.0 <= *(double *)(lVar2 + 0x160) - *(double *)(lVar2 + 0x178)) &&
             (*(double *)(lVar2 + 0x160) + *(double *)(lVar2 + 0x178) <= 4398046511104.0)) {
            if ((-4398046511104.0 <= *(double *)(lVar2 + 0x168) - *(double *)(lVar2 + 0x180)) &&
               (*(double *)(lVar2 + 0x168) + *(double *)(lVar2 + 0x180) <= 4398046511104.0)) {
              if ((-4398046511104.0 <= *(double *)(lVar2 + 0x170) - *(double *)(lVar2 + 0x188)) &&
                 (*(double *)(lVar2 + 0x170) + *(double *)(lVar2 + 0x188) <= 4398046511104.0))
              goto LAB_1434890c6;
            }
          }
          (**(code **)(*plVar1 + 0x518))(plVar1);
          uVar5 = 0;
          FUN_1405e47c6(plVar1);
          memset(local_128,0,0x100);
          local_58 = 0xffffffff;
          local_84 = 0xffffffff;
          local_124 = 0x3f800000;
          (**(code **)(*param_1 + 0x590))(param_1,local_128);
        }
        goto LAB_1434890c6;
      }
      lVar2 = *(longlong *)(lVar6 + 0x410);
      if ((((lVar2 == 0) || (lVar3 = FUN_1411311bc(), lVar3 == 0)) ||
          (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30 || (lVar2 = *(longlong *)(lVar6 + 0x410), lVar2 == 0)))) {
        plVar4 = (longlong *)FUN_1411311bc();
        lVar2 = plVar4[0x22];
      }
      else {
        lVar3 = FUN_1411311bc();
        if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar6 + 0x410);
        }
        lVar2 = plVar4[0x22];
      }
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 1000))(plVar4);
        lVar2 = plVar4[0x22];
      }
      (**(code **)(*plVar1 + 0x510))(plVar1,lVar2);
    }
  }
  uVar5 = 0;
LAB_1434890c6:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143489266 FUN_143489266 body=2483 status=ok
// SIG undefined FUN_143489266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143489266(longlong *param_1,float param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double *pdVar10;
  uint uVar11;
  longlong in_RDX;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar29;
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar42;
  undefined1 auVar38 [16];
  double dVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  double local_128;
  double local_118 [3];
  double local_100 [3];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  lVar12 = DAT_14c8464f0;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar1 = *(byte *)((longlong)param_1 + 0x181);
  if ((bVar1 & 0x20) != 0) goto LAB_1434896ca;
  if ((bVar1 & 4) == 0) {
    (**(code **)(*param_1 + 0x5b0))(param_1);
    *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 0x20;
  }
  else {
    if ((((((double)param_1[0x25] != 0.0) || (NAN((double)param_1[0x25]))) ||
         ((double)param_1[0x26] != 0.0)) ||
        ((NAN((double)param_1[0x26]) || ((double)param_1[0x27] != 0.0)))) ||
       (NAN((double)param_1[0x27]))) {
      fVar17 = *(float *)(param_1 + 0x3f);
    }
    else {
      fVar17 = *(float *)(param_1 + 0x3f) * 0.5;
    }
    pdVar10 = (double *)(param_1 + 0x46);
    if (fVar17 <= param_2) {
      param_1[0x48] = DAT_14c8464f0;
      lVar2 = DAT_14c8464e8;
      *pdVar10 = DAT_14c8464e0;
      param_1[0x47] = lVar2;
    }
    else {
      dVar18 = (double)(1.0 - param_2 / fVar17);
      param_1[0x46] = (longlong)(dVar18 * (double)param_1[0x46]);
      param_1[0x47] = (longlong)((double)param_1[0x47] * dVar18);
      param_1[0x48] = (longlong)((double)param_1[0x48] * dVar18);
      lVar12 = in_RDX;
    }
    dVar18 = DAT_14c8463e8;
    if (((bVar1 & 8) == 0) || (*(float *)((longlong)param_1 + 0x1fc) <= param_2)) {
      param_1[0x50] = (longlong)DAT_14c8463e0;
      param_1[0x51] = (longlong)dVar18;
      dVar18 = DAT_14c8463d8;
      param_1[0x4e] = (longlong)DAT_14c8463d0;
      param_1[0x4f] = (longlong)dVar18;
    }
    else {
      dVar18 = (double)(param_2 / *(float *)((longlong)param_1 + 0x1fc));
      uVar16 = -(ulonglong)
                (0.0 <= (double)param_1[0x51] * DAT_14c8463e8 +
                        (double)param_1[0x50] * DAT_14c8463e0 +
                        (double)param_1[0x4e] * DAT_14c8463d0 +
                        (double)param_1[0x4f] * DAT_14c8463d8);
      dVar50 = (double)(~uVar16 & (ulonglong)-(1.0 - dVar18) | (ulonglong)(1.0 - dVar18) & uVar16);
      dVar44 = (double)param_1[0x4e] * dVar50 + DAT_14c8463d0 * dVar18;
      dVar45 = (double)param_1[0x4f] * dVar50 + DAT_14c8463d8 * dVar18;
      dVar36 = dVar50 * (double)param_1[0x50] + dVar18 * DAT_14c8463e0;
      dVar42 = dVar50 * (double)param_1[0x51] + dVar18 * DAT_14c8463e8;
      dVar18 = dVar36 * dVar36 + dVar44 * dVar44;
      dVar50 = dVar42 * dVar42 + dVar45 * dVar45;
      auVar28._0_8_ = dVar18 + dVar50;
      auVar28._8_8_ = dVar18 + dVar50;
      auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
      auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
      auVar30 = sqrtpd(auVar28,auVar28);
      auVar30 = divpd(_DAT_149934d80,auVar30);
      auVar32._0_8_ = auVar30._0_8_ * dVar36;
      auVar32._8_8_ = auVar30._8_8_ * dVar42;
      auVar47 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar47);
      param_1[0x4e] =
           (ulonglong)(dVar44 * auVar30._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_)
      ;
      param_1[0x4f] =
           (ulonglong)(dVar45 * auVar30._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_)
      ;
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar47;
    }
    if (((ABS(*pdVar10) <= 0.009999999776482582) &&
        (ABS((double)param_1[0x47]) <= 0.009999999776482582)) &&
       (ABS((double)param_1[0x48]) <= 0.009999999776482582)) {
      auVar56._8_8_ =
           -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x4f] - DAT_14c8463d8));
      auVar56._0_8_ =
           -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x4e] - DAT_14c8463d0));
      uVar11 = movmskpd((int)lVar12,auVar56);
      auVar30._8_8_ =
           -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x51] - DAT_14c8463e8));
      auVar30._0_8_ =
           -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x50] - DAT_14c8463e0));
      iVar14 = movmskpd(param_3,auVar30);
      uVar15 = iVar14 << 2 | uVar11;
      if (uVar15 != 0) {
        auVar33._8_8_ =
             -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x4f] + DAT_14c8463d8));
        auVar33._0_8_ =
             -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x4e] + DAT_14c8463d0));
        iVar14 = movmskpd(uVar11,auVar33);
        auVar38._8_8_ =
             -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x51] + DAT_14c8463e8));
        auVar38._0_8_ =
             -(ulonglong)(9.999999747378752e-06 < ABS((double)param_1[0x50] + DAT_14c8463e0));
        uVar11 = movmskpd(uVar15,auVar38);
        if ((uVar11 & 0x3fffffff) != 0 || iVar14 != 0) goto LAB_14348965d;
      }
      param_1[0x48] = DAT_14c8464f0;
      lVar12 = DAT_14c8464e8;
      *pdVar10 = DAT_14c8464e0;
      param_1[0x47] = lVar12;
      dVar18 = DAT_14c8463e8;
      param_1[0x50] = (longlong)DAT_14c8463e0;
      param_1[0x51] = (longlong)dVar18;
      dVar18 = DAT_14c8463d8;
      param_1[0x4e] = (longlong)DAT_14c8463d0;
      param_1[0x4f] = (longlong)dVar18;
      *(byte *)((longlong)param_1 + 0x181) = bVar1 | 0x20;
    }
LAB_14348965d:
    if (((((*(int *)((longlong)param_1 + 0x264) != 0) &&
          (uVar11 = *(uint *)(param_1 + 0x4c), -1 < (int)uVar11)) &&
         (((int)uVar11 < DAT_14c9647dc &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)((longlong)param_1 + 0x264)))))
         )) && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) && (lVar12 = *plVar13, lVar12 != 0)) {
      cVar9 = FUN_1479ff3a2(param_1,plVar13,lVar12);
      if (cVar9 == '\0') {
        *(undefined4 *)((longlong)param_1 + 0x184) = 0;
        lVar2 = param_1[0x22];
        if (lVar2 != 0) {
          dVar44 = (double)param_1[0x46];
          dVar45 = (double)param_1[0x47];
          dVar4 = *(double *)(lVar2 + 0x240);
          dVar31 = -dVar4;
          dVar35 = -*(double *)(lVar2 + 0x248);
          dVar27 = *(double *)(lVar2 + 0x250) * -1.0;
          dVar29 = *(double *)(lVar2 + 600) * 1.0;
          dVar37 = dVar45 * dVar31 - dVar44 * dVar35;
          dVar43 = (double)param_1[0x48] * dVar35 - dVar45 * dVar27;
          dVar51 = dVar44 * dVar27 - dVar31 * (double)param_1[0x48];
          dVar43 = dVar43 + dVar43;
          dVar51 = dVar51 + dVar51;
          dVar37 = dVar37 + dVar37;
          dVar18 = (double)param_1[0x48];
          dVar50 = (double)param_1[0x4b];
          dVar36 = (double)param_1[0x4a];
          dVar42 = (double)param_1[0x49];
          if ((*(byte *)((longlong)param_1 + 0x181) & 8) == 0) {
            auVar47 = *(undefined1 (*) [16])(lVar12 + 0x1b0);
            dVar20 = auVar47._0_8_;
            dVar46 = auVar47._8_8_;
            dVar19 = *(double *)(lVar12 + 0x1c0);
            pdVar10 = *(double **)(lVar12 + 0x230);
            if (pdVar10 == (double *)0x0) {
              pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
              dVar21 = DAT_14c8463d8;
              *pdVar10 = DAT_14c8463d0;
              pdVar10[1] = dVar21;
              dVar21 = DAT_14c8463e8;
              pdVar10[2] = DAT_14c8463e0;
              pdVar10[3] = dVar21;
              dVar21 = DAT_14c846500;
              pdVar10[4] = DAT_14c8464f8;
              pdVar10[5] = dVar21;
              pdVar10[6] = DAT_14c846508;
              *(double **)(lVar12 + 0x230) = pdVar10;
            }
            auVar28 = _DAT_1499387d0;
            if ((((pdVar10[4] != dVar20) || (NAN(pdVar10[4]) || NAN(dVar20))) ||
                (pdVar10[5] != dVar46)) || (NAN(pdVar10[5]) || NAN(dVar46))) {
LAB_143489967:
              auVar39._8_8_ = 0;
              auVar39._0_8_ = dVar19;
              dVar21 = (double)DAT_1499387d0;
              dVar22 = DAT_1499387d0._8_8_;
              auVar47 = divpd(auVar47,_DAT_1499387d0);
              auVar30 = divpd(auVar39,_DAT_1499387d0);
              auVar47 = roundpd(auVar47,auVar47,3);
              auVar30 = roundpd(auVar30,auVar30,3);
              auVar53._0_8_ = dVar20 - auVar47._0_8_ * dVar21;
              auVar53._8_8_ = dVar46 - auVar47._8_8_ * dVar22;
              auVar40._0_8_ = dVar19 - auVar30._0_8_ * dVar21;
              auVar40._8_8_ = 0.0 - auVar30._8_8_ * dVar22;
              auVar48._0_8_ = auVar53._0_8_ + dVar21;
              auVar48._8_8_ = auVar53._8_8_ + dVar22;
              auVar34._0_8_ = auVar40._0_8_ + dVar21;
              auVar34._8_8_ = auVar40._8_8_ + dVar22;
              auVar23._8_8_ = -(ulonglong)(0.0 <= auVar53._8_8_);
              auVar23._0_8_ = -(ulonglong)(0.0 <= auVar53._0_8_);
              auVar30 = blendvpd(auVar48,auVar53,auVar23);
              auVar24._8_8_ = -(ulonglong)(0.0 <= auVar40._8_8_);
              auVar24._0_8_ = -(ulonglong)(0.0 <= auVar40._0_8_);
              auVar47 = blendvpd(auVar34,auVar40,auVar24);
              auVar41._0_8_ = auVar30._0_8_ + -360.0;
              auVar41._8_8_ = auVar30._8_8_ + -360.0;
              auVar25._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
              auVar25._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
              auVar30 = blendvpd(auVar30,auVar41,auVar25);
              auVar26._8_8_ = -(ulonglong)(180.0 < auVar47._8_8_);
              auVar26._0_8_ = -(ulonglong)(180.0 < auVar47._0_8_);
              auVar3._8_8_ = auVar47._8_8_ + 0.0;
              auVar3._0_8_ = auVar47._0_8_ + -360.0;
              auVar47 = blendvpd(auVar47,auVar3,auVar26);
              *(undefined1 (*) [16])(pdVar10 + 4) = auVar30;
              dVar19 = auVar47._0_8_;
              pdVar10[6] = dVar19;
              auVar54._8_8_ = 0;
              auVar54._0_8_ = dVar19;
              auVar47 = divpd(auVar30,auVar28);
              auVar28 = divpd(auVar54,auVar28);
              auVar47 = roundpd(auVar47,auVar47,3);
              auVar28 = roundpd(auVar28,auVar28,3);
              dVar46 = (auVar30._0_8_ - auVar47._0_8_ * dVar21) * 0.008726646259971648;
              dVar49 = (auVar30._8_8_ - auVar47._8_8_ * dVar22) * 0.008726646259971648;
              dVar52 = (dVar19 - auVar28._0_8_ * dVar21) * 0.008726646259971648;
              dVar55 = (0.0 - auVar28._8_8_ * dVar22) * 0.008726646259971648;
              local_128 = sin(dVar46);
              dVar19 = sin(dVar49);
              dVar20 = sin(dVar52);
              sin(dVar55);
              dVar46 = cos(dVar46);
              dVar21 = cos(dVar49);
              dVar22 = cos(dVar52);
              cos(dVar55);
              *pdVar10 = local_128 * dVar19 * dVar22 - dVar46 * dVar21 * dVar20;
              pdVar10[1] = -(local_128 * dVar21 * dVar22) - dVar46 * dVar19 * dVar20;
              pdVar10[2] = -(dVar21 * local_128 * dVar20) + dVar19 * dVar46 * dVar22;
              pdVar10[3] = dVar19 * local_128 * dVar20 + dVar21 * dVar46 * dVar22;
            }
            else if ((pdVar10[6] != dVar19) || (NAN(pdVar10[6]) || NAN(dVar19))) goto LAB_143489967;
            local_e8 = *pdVar10;
            dStack_e0 = pdVar10[1];
            local_d8 = pdVar10[2];
            dStack_d0 = pdVar10[3];
            pdVar10 = local_100;
          }
          else {
            dVar5 = (double)param_1[0x52];
            dVar6 = (double)param_1[0x53];
            dVar7 = (double)param_1[0x54];
            dVar8 = (double)param_1[0x55];
            dVar20 = (double)param_1[0x51];
            dVar19 = (double)param_1[0x51];
            dVar46 = (double)param_1[0x4f];
            dVar21 = (double)param_1[0x4f];
            dVar49 = (double)param_1[0x4e];
            dVar22 = (double)param_1[0x4e];
            dVar55 = (double)param_1[0x50];
            dVar52 = (double)param_1[0x50];
            local_e8 = dVar6 * dVar55 * -1.0 +
                       dVar7 * dVar46 + dVar49 * dVar8 * 1.0 + dVar20 * dVar5;
            dStack_e0 = dVar5 * dVar52 * 1.0 +
                        dVar8 * dVar21 + dVar22 * dVar7 * -1.0 + dVar19 * dVar6;
            local_d8 = dVar8 * dVar55 * 1.0 +
                       ((dVar49 * dVar6 * 1.0 + dVar20 * dVar7) - dVar46 * dVar5);
            dStack_d0 = dVar7 * dVar52 * -1.0 +
                        ((dVar22 * dVar5 * -1.0 + dVar19 * dVar8) - dVar21 * dVar6);
            pdVar10 = local_118;
          }
          *pdVar10 = (dVar37 * dVar35 - dVar51 * dVar27) + dVar29 * dVar43 + dVar44 + dVar42;
          pdVar10[1] = dVar4 * dVar37 + dVar27 * dVar43 + dVar29 * dVar51 + dVar45 + dVar36;
          pdVar10[2] = dVar29 * dVar37 + dVar18 + (dVar51 * dVar31 - dVar43 * dVar35) + dVar50;
          local_130 = 0;
          local_138 = 0;
          FUN_144927ad4(lVar12,pdVar10,&local_e8,0);
        }
      }
      else {
        *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) & 0xdf;
      }
    }
  }
  if ((((*(byte *)((longlong)param_1 + 0x181) & 0x20) != 0) &&
      ((*(byte *)(param_1 + 0x2e) & 2) != 0)) && (param_1[0x22] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_158);
  }
LAB_1434896ca:
  if ((local_c0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143489c89 FUN_143489c89 body=620 status=ok
// SIG undefined FUN_143489c89(void)

void FUN_143489c89(float param_1,float param_2,float param_3,float param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = param_1 * 0.5;
  fVar1 = cosf(param_3 + 1.5707964);
  fVar1 = param_1 * -2.0 * param_2 * fVar1 + param_1 * param_1 + param_2 * param_2;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  fVar2 = sinf(param_3 + 1.5707964);
  fVar3 = (fVar2 * param_2) / fVar1;
  fVar2 = fVar3;
  if (1.0 <= fVar3) {
    fVar2 = 1.0;
  }
  fVar4 = -1.0;
  fVar2 = asinf((float)(-(uint)(fVar3 < -1.0) & 0xbf800000 | ~-(uint)(fVar3 < -1.0) & (uint)fVar2));
  fVar2 = tanf(fVar2);
  fVar7 = fVar6 * fVar2;
  fVar5 = (fVar2 + fVar2) * fVar7;
  fVar8 = fVar2 * fVar2 + 1.0;
  fVar3 = fVar5 * fVar5 + (fVar7 * fVar7 - param_4 * param_4) * -4.0 * fVar8;
  if (0.0001 < fVar3) {
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    fVar4 = (fVar3 - fVar5) * (1.0 / (fVar8 + fVar8));
  }
  fVar7 = fVar2 * fVar4 + fVar7;
  if (SQRT((fVar6 + fVar4) * (fVar6 + fVar4) + fVar7 * fVar7) < fVar1) {
    fVar1 = sinf(param_3);
    *param_5 = fVar1 * param_2;
    fVar7 = cosf(param_3);
    fVar7 = fVar7 * param_2;
  }
  else {
    *param_5 = fVar4 - fVar6;
  }
  *param_6 = fVar7;
  return;
}



// FUNCTION 143489efc FUN_143489efc body=1230 status=ok
// SIG undefined FUN_143489efc(void)

void FUN_143489efc(longlong param_1)

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
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143489f4c;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143489f51;
      goto LAB_143489f8a;
    }
  }
  else {
LAB_143489f4c:
    if (iVar7 != 0x10) {
LAB_143489f8a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143489f51;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143489f51;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14348a0ea;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14349623b);
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
LAB_14348a0ea:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x16);
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
            puVar15 = (uint *)(puVar16 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14348a16a;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14348a16a:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a879008;
        puVar16[0x15] = lVar4;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar7;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_48 = &PTR_LAB_14a878fb0;
        local_68[0] = FUN_1434961de;
        local_40 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"DeleteBuildRectLightMipTree",&DAT_14cad2b8c);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14348a021;
    }
  }
LAB_143489f51:
  if (lVar4 != 0) {
    FUN_14476820c(lVar4);
    FUN_1400020a8(lVar4);
  }
LAB_14348a021:
  FUN_1417bd7f0(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348a3cc FUN_14348a3cc body=621 status=ok
// SIG undefined FUN_14348a3cc(void)

ulonglong FUN_14348a3cc(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 uVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 unaff_RBX;
  bool bVar13;
  
  piVar12 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    piVar12 = &DAT_14c760db4;
  }
  iVar4 = *piVar12;
  bVar13 = DAT_14c761410 != 0;
  if (bVar13 && 2 < iVar4) {
    iVar5 = *(int *)(param_3 + 0x15d0);
    *(uint *)(param_3 + 0x15d0) = iVar5 + 1U;
    if (*(uint *)(param_3 + 0x15d4) < iVar5 + 1U) {
      FUN_1479fa3de(param_3,iVar5);
    }
    lVar11 = *(longlong *)(param_3 + 0x15c0);
    if (*(longlong *)(param_3 + 0x15c0) == 0) {
      lVar11 = param_3;
    }
    uVar10 = 0;
    puVar1 = (undefined4 *)(lVar11 + (longlong)iVar5 * 0x3a0);
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(undefined8 *)(puVar1 + 0x3c) = 0;
    *(undefined8 *)(puVar1 + 0x3e) = 0;
    *(undefined8 *)(puVar1 + 0x42) = 0x3ff0000000000000;
    *(undefined8 *)(puVar1 + 0x48) = 0x5500000000000000;
    *(undefined8 *)(puVar1 + 0x4a) = 0;
    *(undefined8 *)(puVar1 + 0x4c) = 0x55000000;
    *(undefined8 *)(puVar1 + 0x80) = 0;
    *(undefined8 *)(puVar1 + 0x84) = 0x600000000;
    *(undefined8 *)(puVar1 + 200) = 0;
    *(undefined8 *)(puVar1 + 0xcc) = 0x800000000;
    *(undefined1 *)(puVar1 + 0xe0) = 0;
    puVar1[0xe1] = 0xffffffff;
    *(undefined8 *)(puVar1 + 0xe2) = 0xbf8000003f800000;
    *(undefined2 *)(puVar1 + 0xe4) = 0;
    uVar2 = *(ulonglong *)(param_1 + 0x140);
    uVar7 = *(uint *)(param_1 + 0x134);
    uVar8 = *(undefined4 *)(param_1 + 0x138);
    uVar9 = *(uint *)(param_1 + 0x13c);
    *puVar1 = *(undefined4 *)(param_1 + 0x130);
    puVar1[1] = uVar7 ^ 0x80000000;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9 ^ 0x80000000;
    *(ulonglong *)(puVar1 + 4) = uVar2 ^ 0x8000000000000000;
    uVar3 = *(undefined8 *)(param_1 + 200);
    memmove(puVar1 + 8,(void *)(param_1 + 0x50),0x60);
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x22) = 0;
    *(undefined8 *)(puVar1 + 0x24) = 0;
    *(undefined8 *)(puVar1 + 0x26) = uVar3;
    *(undefined8 *)(puVar1 + 0x28) = 0x3ff0000000000000;
    *(undefined8 *)(puVar1 + 0x2a) = 0x3ff0000000000000;
    dVar6 = (double)*(float *)(param_1 + 0x298);
    *(undefined8 *)(puVar1 + 0x2c) = 0;
    *(undefined8 *)(puVar1 + 0x2e) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(double *)(puVar1 + 0x32) = dVar6;
    *(double *)(puVar1 + 0x34) = dVar6;
    *(double *)(puVar1 + 0x36) = dVar6;
    *(double *)(puVar1 + 0x38) = dVar6;
    *(undefined8 *)(puVar1 + 0x3c) = 0;
    *(undefined8 *)(puVar1 + 0x3e) = 0;
    *(undefined8 *)(puVar1 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(puVar1 + 0x42) = 0;
    puVar1[0x44] = 0x3dcccccd;
    puVar1[0x45] = *(undefined4 *)(param_1 + 0x298);
    *(undefined1 *)(puVar1 + 0xe4) = 1;
    if ((*(byte *)(param_1 + 0x1d3) & 0x10) != 0) {
      piVar12 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        piVar12 = &DAT_14c760db4;
      }
      uVar10 = FUN_1411a18f5(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar12 * 2));
    }
    *(undefined1 *)(lVar11 + (longlong)iVar5 * 0x3a0 + 0x391) = uVar10;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar13 && 2 < iVar4) & 0xffffffff;
}



// FUNCTION 14348a639 FUN_14348a639 body=55 status=ok
// SIG undefined FUN_14348a639(void)

void FUN_14348a639(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad20a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad20a0 = FUN_14171c317(FUN_1463bab5e,uVar1,L"EReflectionSourceType");
  }
  return;
}



// FUNCTION 14348a670 FUN_14348a670 body=34 status=ok
// SIG undefined FUN_14348a670(void)

void FUN_14348a670(undefined8 param_1,undefined8 param_2)

{
  FUN_14010df0a();
  FUN_1479ffb7a(param_1,param_2);
  return;
}



// FUNCTION 14348a692 FUN_14348a692 body=69 status=ok
// SIG undefined FUN_14348a692(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a692(void)

{
  _DAT_14cad20c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad20d0,1);
  return;
}



// FUNCTION 14348a6d7 FUN_14348a6d7 body=69 status=ok
// SIG undefined FUN_14348a6d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a6d7(void)

{
  _DAT_14cad20e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad20e8,1);
  return;
}



// FUNCTION 14348a74c FUN_14348a74c body=55 status=ok
// SIG undefined FUN_14348a74c(void)

void FUN_14348a74c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2160 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2160 = FUN_14171c317(FUN_1463bad09,uVar1,L"ERuntimeVirtualTextureMaterialQuality");
  }
  return;
}



// FUNCTION 14348a783 FUN_14348a783 body=69 status=ok
// SIG undefined FUN_14348a783(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a783(void)

{
  _DAT_14cad2190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a7c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2198,1);
  return;
}



// FUNCTION 14348a7c8 FUN_14348a7c8 body=69 status=ok
// SIG undefined FUN_14348a7c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a7c8(void)

{
  _DAT_14cad21a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a80a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad21b0,1);
  return;
}



// FUNCTION 14348a80d FUN_14348a80d body=69 status=ok
// SIG undefined FUN_14348a80d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a80d(void)

{
  _DAT_14cad21c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a84f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad21c8,1);
  return;
}



// FUNCTION 14348a852 FUN_14348a852 body=55 status=ok
// SIG undefined FUN_14348a852(void)

void FUN_14348a852(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad21f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad21f8 = FUN_14171c317(FUN_1463bb034,uVar1,L"ESceneCapturePrimitiveRenderMode");
  }
  return;
}



// FUNCTION 14348a889 FUN_14348a889 body=41 status=ok
// SIG undefined FUN_14348a889(void)

void FUN_14348a889(void)

{
  DAT_14cad22c0 = 0;
  if (DAT_14cad22b8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6322a();
  return;
}



// FUNCTION 14348a8c0 FUN_14348a8c0 body=69 status=ok
// SIG undefined FUN_14348a8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a8c0(void)

{
  _DAT_14cad22f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad22f8,1);
  return;
}



// FUNCTION 14348a905 FUN_14348a905 body=69 status=ok
// SIG undefined FUN_14348a905(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a905(void)

{
  _DAT_14cad2308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2310,1);
  return;
}



// FUNCTION 14348a94a FUN_14348a94a body=69 status=ok
// SIG undefined FUN_14348a94a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a94a(void)

{
  _DAT_14cad2320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2328,1);
  return;
}



// FUNCTION 14348a98f FUN_14348a98f body=69 status=ok
// SIG undefined FUN_14348a98f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a98f(void)

{
  _DAT_14cad2338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348a9d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2340,1);
  return;
}



// FUNCTION 14348a9d4 FUN_14348a9d4 body=69 status=ok
// SIG undefined FUN_14348a9d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348a9d4(void)

{
  _DAT_14cad2350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348aa16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2358,1);
  return;
}



// FUNCTION 14348aa1a FUN_14348aa1a body=43 status=ok
// SIG undefined FUN_14348aa1a(void)

void FUN_14348aa1a(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x2aa) & 3) == 2) {
    FUN_140c70b2a(param_1);
  }
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 14348aa46 FUN_14348aa46 body=1274 status=ok
// SIG undefined FUN_14348aa46(void)

void FUN_14348aa46(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if (*(longlong *)(param_1 + 0x3c8) == 0) goto LAB_14348aba6;
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if (lVar9 == 0) {
    lVar9 = FUN_1448abda6(param_1);
  }
  (**(code **)(**(longlong **)(lVar9 + 0x218) + 0x1b0))(*(longlong **)(lVar9 + 0x218),param_1);
  lVar9 = *(longlong *)(param_1 + 0x3c8);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14348aace;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14348aad3;
      goto LAB_14348ab04;
    }
LAB_14348aad3:
    if (lVar9 != 0) {
      FUN_1400020a8(lVar9);
    }
  }
  else {
LAB_14348aace:
    if (iVar6 == 0x10) goto LAB_14348aad3;
LAB_14348ab04:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_14348aad3;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_14348aad3;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_14348ac67;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14349623b);
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
LAB_14348ac67:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
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
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_14348ace7;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14348ace7:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a879240;
      puVar17[0x15] = lVar9;
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
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
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
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a8791e0;
      local_68[0] = &LAB_143496aec;
      local_40 = lVar9;
      FUN_14005a792(&DAT_14ca9a440,L"FDestroyPlanarReflectionCommand",&DAT_14cad2b94);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
LAB_14348aba6:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348af55 FUN_14348af55 body=69 status=ok
// SIG undefined FUN_14348af55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348af55(void)

{
  _DAT_14cad2398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348af97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad23a0,1);
  return;
}



// FUNCTION 14348af9a FUN_14348af9a body=26 status=ok
// SIG undefined FUN_14348af9a(void)

void FUN_14348af9a(undefined8 param_1)

{
  FUN_144a016ac();
  FUN_14342cc3a(param_1);
  return;
}



// FUNCTION 14348affe FUN_14348affe body=234 status=ok
// SIG undefined FUN_14348affe(void)

undefined1 (*) [16] FUN_14348affe(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar7 = dVar4 * 1.0 - dVar5 * 0.0;
  dVar8 = dVar5 * 0.0 - dVar6 * 1.0;
  dVar9 = dVar6 * 0.0 - dVar4 * 0.0;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  dVar3 = (dVar6 * dVar8 - dVar4 * dVar7) + *(double *)(param_1 + 600) * dVar9 + 1.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar7 * dVar5 - dVar9 * dVar6) + dVar1 * dVar8 + 0.0;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar7 * dVar1 + 0.0 + (dVar9 * dVar4 - dVar8 * dVar5);
  return param_2;
}



// FUNCTION 14348b0e8 FUN_14348b0e8 body=7 status=ok
// SIG undefined FUN_14348b0e8(void)

undefined4 FUN_14348b0e8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x140);
}



// FUNCTION 14348b0f0 FUN_14348b0f0 body=29 status=ok
// SIG undefined FUN_14348b0f0(void)

undefined8 FUN_14348b0f0(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x140))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 14348b10e FUN_14348b10e body=30 status=ok
// SIG undefined FUN_14348b10e(void)

undefined8 FUN_14348b10e(longlong param_1)

{
  longlong lVar1;
  
  do {
    lVar1 = param_1;
    if (lVar1 == 0) {
      return 0;
    }
    param_1 = *(longlong *)(lVar1 + 0x120);
  } while (*(longlong *)(lVar1 + 0x120) != 0);
  return *(undefined8 *)(lVar1 + 0xa8);
}



// FUNCTION 14348b12c FUN_14348b12c body=23 status=ok
// SIG undefined FUN_14348b12c(void)

undefined8 FUN_14348b12c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0xa8);
  }
  return 0;
}



// FUNCTION 14348b166 FUN_14348b166 body=143 status=ok
// SIG undefined FUN_14348b166(void)

longlong FUN_14348b166(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((((*(int *)(param_1 + 0x11c) != 0) && (uVar1 = *(uint *)(param_1 + 0x118), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x11c))))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
    return *plVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 == 0) && (lVar2 = FUN_1448abda6(), lVar2 == 0)) {
    return 0;
  }
  if (*(longlong *)(lVar2 + 0x118) != 0) {
    return *(longlong *)(lVar2 + 0x118);
  }
  lVar2 = FUN_14572cb46(lVar2);
  return lVar2;
}



// FUNCTION 14348bb88 FUN_14348bb88 body=240 status=ok
// SIG undefined FUN_14348bb88(void)

bool FUN_14348bb88(longlong param_1)

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
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (DAT_14cac7648 == 0) {
    local_30 = &local_18;
    local_18 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_14789ef1f;
    local_40 = &LAB_1417b008f;
    local_48 = L"Engine";
    local_50 = 0x8000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1 == DAT_14cac7648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348bcaa FUN_14348bcaa body=270 status=ok
// SIG undefined FUN_14348bcaa(void)

void FUN_14348bcaa(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((((*(byte *)(param_1 + 0x1f8) & 0x40) != 0) && (*(longlong *)(param_1 + 0x120) == 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8), lVar2 != param_1)) {
    *(byte *)(param_1 + 0x1fa) = *(byte *)(param_1 + 0x1fa) | 0x20;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    *(longlong *)(param_1 + 0x120) = lVar2;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014348bdb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,2);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 4;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 14348bdb8 FUN_14348bdb8 body=69 status=ok
// SIG undefined FUN_14348bdb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348bdb8(void)

{
  _DAT_14cad23d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348bdfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad23e0,1);
  return;
}



// FUNCTION 14348bdfd FUN_14348bdfd body=69 status=ok
// SIG undefined FUN_14348bdfd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348bdfd(void)

{
  _DAT_14cad23e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348be3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad23f0,1);
  return;
}



// FUNCTION 14348be42 FUN_14348be42 body=84 status=ok
// SIG undefined FUN_14348be42(void)

void FUN_14348be42(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((*(byte *)(param_1 + 0x9c) & 1) != 0) &&
     ((*(longlong *)(param_1 + 0xb0) != 0 || (lVar1 = FUN_1448abda6(), lVar1 != 0)))) {
    plVar2 = DAT_14caca218;
    if (DAT_14caca220 == 0) {
      plVar2 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014348be93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 14348bea2 FUN_14348bea2 body=55 status=ok
// SIG undefined FUN_14348bea2(void)

void FUN_14348bea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2458 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2458 = FUN_14171c317(FUN_1463bb870,uVar1,L"ECustomBoneAttributeLookup");
  }
  return;
}



// FUNCTION 14348bed9 FUN_14348bed9 body=55 status=ok
// SIG undefined FUN_14348bed9(void)

void FUN_14348bed9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2470 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2470 = FUN_14171c317(FUN_1463bb8a1,uVar1,L"EKinematicBonesUpdateToPhysics");
  }
  return;
}



// FUNCTION 14348bf10 FUN_14348bf10 body=55 status=ok
// SIG undefined FUN_14348bf10(void)

void FUN_14348bf10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2488 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2488 = FUN_14171c317(FUN_1463bb8d0,uVar1,L"EAnimationMode");
  }
  return;
}



// FUNCTION 14348bf47 FUN_14348bf47 body=55 status=ok
// SIG undefined FUN_14348bf47(void)

void FUN_14348bf47(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad24a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad24a0 = FUN_14171c317(FUN_1463bb901,uVar1,L"EPhysicsTransformUpdateMode");
  }
  return;
}



// FUNCTION 14348bf7e FUN_14348bf7e body=234 status=ok
// SIG undefined FUN_14348bf7e(void)

longlong FUN_14348bf7e(void)

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
  if (DAT_14cad2858 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
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
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2858;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348c06a FUN_14348c06a body=92 status=ok
// SIG undefined FUN_14348c06a(void)

undefined8 FUN_14348c06a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    lVar2 = FUN_141483378();
    if ((((*(longlong *)(param_1 + 0xae8) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      uVar3 = FUN_140edf788();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14348c0c6 FUN_14348c0c6 body=92 status=ok
// SIG undefined FUN_14348c0c6(void)

undefined8 FUN_14348c0c6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    lVar2 = FUN_141483378();
    if ((((*(longlong *)(param_1 + 0xae8) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      uVar3 = FUN_140edf8dc();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14348c122 FUN_14348c122 body=91 status=ok
// SIG undefined FUN_14348c122(void)

undefined8 FUN_14348c122(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    lVar2 = FUN_141483378();
    if ((((*(longlong *)(param_1 + 0xae8) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      uVar3 = FUN_14099141a();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14348c17e FUN_14348c17e body=219 status=ok
// SIG undefined FUN_14348c17e(void)

void FUN_14348c17e(longlong *param_1,longlong param_2,uint param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6)

{
  if ((*(byte *)(param_1 + 0x18e) & 0x20) == 0) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x160] = param_2;
  *(uint *)(param_1 + 0x161) =
       (param_3 & 0xff) + (param_4 & 0xff) * 2 | *(uint *)(param_1 + 0x161) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0xb0c) = param_5;
  *(undefined4 *)(param_1 + 0x162) = param_6;
  FUN_14073397e(param_1,1,1);
  FUN_1407396de(param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014348c24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xaf8))(param_1,0);
  return;
}



// FUNCTION 14348c25a FUN_14348c25a body=74 status=ok
// SIG undefined FUN_14348c25a(void)

void FUN_14348c25a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 0xc70) & 0x20) == 0) {
    return;
  }
  FUN_14073397e(param_1,1,1);
  FUN_14164d696(param_1,param_2);
  FUN_14164d71c(param_1,param_3);
  return;
}



// FUNCTION 14348c2a4 FUN_14348c2a4 body=119 status=ok
// SIG undefined FUN_14348c2a4(void)

void FUN_14348c2a4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0xc70) & 0x20) != 0) && (*(longlong *)(param_1 + 0xae8) != 0)) {
    lVar3 = FUN_141483378();
    lVar1 = *(longlong *)(param_1 + 0xae8);
    if (((lVar1 != 0) &&
        (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_140cbf6c6(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14348c31c FUN_14348c31c body=1 status=ok
// SIG undefined FUN_14348c31c(void)

void FUN_14348c31c(void)

{
  return;
}



// FUNCTION 14348c31e FUN_14348c31e body=1 status=ok
// SIG undefined FUN_14348c31e(void)

void FUN_14348c31e(void)

{
  return;
}



// FUNCTION 14348c320 FUN_14348c320 body=100 status=ok
// SIG undefined FUN_14348c320(void)

void FUN_14348c320(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0xc70) & 0x20) != 0) && (*(longlong *)(param_1 + 0xae8) != 0)) {
    lVar3 = FUN_141483378();
    lVar1 = *(longlong *)(param_1 + 0xae8);
    if (((lVar1 != 0) &&
        (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_140cbfb16(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14348c384 FUN_14348c384 body=69 status=ok
// SIG undefined FUN_14348c384(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c384(void)

{
  _DAT_14cad2bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2bd8,1);
  return;
}



// FUNCTION 14348c3c9 FUN_14348c3c9 body=69 status=ok
// SIG undefined FUN_14348c3c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c3c9(void)

{
  _DAT_14cad2bb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c40b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2bc0,1);
  return;
}



// FUNCTION 14348c40e FUN_14348c40e body=69 status=ok
// SIG undefined FUN_14348c40e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c40e(void)

{
  _DAT_14cad2ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2ba8,1);
  return;
}



// FUNCTION 14348c453 FUN_14348c453 body=69 status=ok
// SIG undefined FUN_14348c453(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c453(void)

{
  _DAT_14cad2870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2878,1);
  return;
}



// FUNCTION 14348c498 FUN_14348c498 body=69 status=ok
// SIG undefined FUN_14348c498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c498(void)

{
  _DAT_14cad2888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c4da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2890,1);
  return;
}



// FUNCTION 14348c4dd FUN_14348c4dd body=69 status=ok
// SIG undefined FUN_14348c4dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c4dd(void)

{
  _DAT_14cad28a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad28a8,1);
  return;
}



// FUNCTION 14348c522 FUN_14348c522 body=69 status=ok
// SIG undefined FUN_14348c522(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c522(void)

{
  _DAT_14cad28b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad28c0,1);
  return;
}



// FUNCTION 14348c567 FUN_14348c567 body=69 status=ok
// SIG undefined FUN_14348c567(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c567(void)

{
  _DAT_14cad28d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c5a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad28d8,1);
  return;
}



// FUNCTION 14348c5ac FUN_14348c5ac body=106 status=ok
// SIG undefined FUN_14348c5ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348c5ac(void)

{
  _DAT_14cad2900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2908,1);
  if (DAT_14cad28f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad28e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14348c616 FUN_14348c616 body=59 status=ok
// SIG undefined FUN_14348c616(void)

void FUN_14348c616(void)

{
  FUN_144760e21(DAT_14cad2948,DAT_14cad2950);
  if (DAT_14cad2948 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348c643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2920);
  return;
}



// FUNCTION 14348c652 FUN_14348c652 body=488 status=ok
// SIG undefined FUN_14348c652(void)

longlong * FUN_14348c652(longlong param_1,longlong *param_2)

{
  longlong lVar1;
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
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0xaf0);
  if (lVar2 != 0) {
    lVar1 = FUN_1402e44f4();
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (*(longlong *)(param_1 + 0xaf0) != 0)) {
      *param_2 = *(longlong *)(param_1 + 0xaf0);
      if (DAT_14c950c29 == 1) goto LAB_14348c81c;
      goto LAB_14348c6e1;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x658);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar2 != 0) != 0) goto LAB_14348c833;
    if (lVar2 != 0) goto LAB_14348c69a;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14348c833:
      FUN_1456cec3c(lVar2);
    }
LAB_14348c69a:
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464003b0;
      local_48 = &LAB_147d17bdf;
      local_50 = &LAB_1417edf22;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
      lVar2 = *(longlong *)(lVar2 + 0x480);
      *param_2 = lVar2;
      if ((DAT_14c950c29 == 1) && (lVar2 != 0)) {
LAB_14348c81c:
        FUN_1456cec3c();
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
      goto LAB_14348c6e1;
    }
  }
  *param_2 = 0;
LAB_14348c6e1:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348c840 FUN_14348c840 body=1744 status=ok
// SIG undefined FUN_14348c840(void)

void FUN_14348c840(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  longlong local_60;
  longlong local_48;
  ulonglong local_38;
  
  iVar13 = DAT_14cad2ad0;
  iVar19 = DAT_14cad2aa8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) {
    lVar20 = 0;
  }
  else {
    plVar23 = (longlong *)param_1[0x15];
    if ((longlong *)param_1[0x15] == (longlong *)0x0) {
      plVar23 = param_1;
    }
    if (DAT_14cad2aa8 != DAT_14cad2ad4) {
      uVar9 = ((uint)((ulonglong)plVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar23 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      puVar14 = &DAT_14cad2ad8;
      if (DAT_14cad2ae0 != (undefined *)0x0) {
        puVar14 = DAT_14cad2ae0;
      }
      iVar6 = *(int *)(puVar14 + (ulonglong)(DAT_14cad2ae8 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
      while (iVar6 != -1) {
        plVar1 = (longlong *)(DAT_14cad2aa0 + (longlong)iVar6 * 0x18);
        if ((longlong *)*plVar1 == plVar23) {
          if (plVar1 != (longlong *)0x0) {
            lVar20 = plVar1[1];
            goto LAB_14348cae7;
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      }
    }
    if (DAT_14cad2ad4 == 0) {
      iVar13 = DAT_14cad2aa8 + 1;
      bVar24 = DAT_14cad2aac == DAT_14cad2aa8;
      DAT_14cad2aa8 = iVar13;
      if (bVar24) {
        FUN_14482b872(&DAT_14cad2aa0,iVar19);
      }
      iVar13 = DAT_14cad2ac8;
      if (DAT_14cad2ac8 == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = DAT_14cad2ac8 + 0x1e;
        if (-1 < DAT_14cad2ac8 + -1) {
          iVar6 = DAT_14cad2ac8 + -1;
        }
        iVar6 = iVar6 >> 5;
      }
      iVar10 = DAT_14cad2ac8 + 1;
      iVar18 = DAT_14cad2ac8 + 0x1f;
      if (-1 < DAT_14cad2ac8) {
        iVar18 = DAT_14cad2ac8;
      }
      if (iVar18 >> 5 != iVar6) {
        if (DAT_14cad2acc <= DAT_14cad2ac8) {
          if (DAT_14cad2ac8 + 0x20U < 0xa0) {
            DAT_14cad2acc = 0x80;
          }
          else {
            uVar9 = DAT_14cad2ac8 + 0x20U >> 5;
            if (DAT_14cad2acc + 0x1fU < 0xa0) {
              uVar22 = 4;
              if (4 < uVar9) {
                uVar22 = uVar9;
              }
            }
            else {
              uVar22 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
            }
            uVar11 = (ulonglong)(uVar22 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar7 = (uint)(uVar11 + 0xf);
                if (uVar22 < 0x1ffd) {
                  uVar11 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
                }
                else {
                  uVar12 = (ulonglong)(uVar7 & 0xfffffff0);
                  if (uVar12 < 0x7ff1) {
                    bVar8 = (&DAT_14c841e00)[uVar7 >> 4];
                    uVar17 = 0x32;
                    if (0x32 < bVar8) {
                      uVar17 = (ulonglong)bVar8;
                    }
                    uVar21 = 0x32 - (ulonglong)bVar8;
                    do {
                      uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_14348cde9;
                      lVar20 = uVar17 + 1 + uVar21;
                      uVar21 = uVar21 - 1;
                    } while (lVar20 != 0x33);
                  }
                  uVar11 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar11 = (ulonglong)DAT_14c841df8;
                  }
                  uVar11 = -uVar11 & (uVar12 + uVar11) - 1;
                }
              }
              else {
                uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              }
            }
LAB_14348cde9:
            iVar6 = (int)(uVar11 >> 2);
            DAT_14cad2acc = -0x20;
            if ((int)uVar9 <= iVar6) {
              DAT_14cad2acc = iVar6 << 5;
            }
          }
          FUN_1446efbd8(&DAT_14cad2ab0,DAT_14cad2ac8);
          iVar10 = DAT_14cad2ac8 + 1;
        }
        iVar6 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar10 % 0x20 != 0) {
          puVar14 = &DAT_14cad2ab0;
          if (DAT_14cad2ac0 != (undefined *)0x0) {
            puVar14 = DAT_14cad2ac0;
          }
          bVar8 = -(char)(iVar10 % 0x20);
          DAT_14cad2ac8 = iVar10;
          *(uint *)(puVar14 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(puVar14 + (longlong)(iVar6 >> 5) * 4) << (bVar8 & 0x1f)) >>
               (bVar8 & 0x1f);
          iVar10 = DAT_14cad2ac8;
        }
      }
      DAT_14cad2ac8 = iVar10;
      lVar20 = (longlong)iVar19;
      puVar14 = &DAT_14cad2ab0;
      if (DAT_14cad2ac0 != (undefined *)0x0) {
        puVar14 = DAT_14cad2ac0;
      }
      bVar8 = (byte)iVar13 & 0x1f;
      *(uint *)(puVar14 + (longlong)(iVar18 >> 5) * 4) =
           *(uint *)(puVar14 + (longlong)(iVar18 >> 5) * 4) &
           (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    }
    else {
      lVar20 = (longlong)DAT_14cad2ad0;
      DAT_14cad2ad0 = *(int *)(DAT_14cad2aa0 + 4 + lVar20 * 0x18);
      DAT_14cad2ad4 = DAT_14cad2ad4 + -1;
      iVar19 = iVar13;
      if (DAT_14cad2ad4 != 0) {
        *(undefined4 *)(DAT_14cad2aa0 + (longlong)DAT_14cad2ad0 * 0x18) = 0xffffffff;
      }
    }
    puVar14 = &DAT_14cad2ab0;
    if (DAT_14cad2ac0 != (undefined *)0x0) {
      puVar14 = DAT_14cad2ac0;
    }
    iVar13 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar13 = iVar19;
    }
    *(uint *)(puVar14 + (longlong)(iVar13 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar13 >> 5) * 4) | 1 << ((byte)iVar19 & 0x1f);
    iVar13 = 1;
    puVar15 = (undefined8 *)(DAT_14cad2aa0 + lVar20 * 0x18);
    *puVar15 = plVar23;
    puVar15[1] = 0;
    *(undefined4 *)(puVar15 + 2) = 0xffffffff;
    uVar9 = ((uint)((ulonglong)plVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar23 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    uVar22 = DAT_14cad2aa8 - DAT_14cad2ad4;
    if ((uVar22 != 0) && (uVar22 != 1)) {
      puVar14 = &DAT_14cad2ad8;
      if (DAT_14cad2ae0 != (undefined *)0x0) {
        puVar14 = DAT_14cad2ae0;
      }
      iVar6 = *(int *)(puVar14 + (ulonglong)(DAT_14cad2ae8 - 1U & uVar9) * 4);
      while (iVar6 != -1) {
        plVar1 = (longlong *)(DAT_14cad2aa0 + (longlong)iVar6 * 0x18);
        if ((longlong *)*plVar1 == plVar23) {
          uVar5 = *(undefined4 *)((longlong)puVar15 + 4);
          uVar2 = *(undefined4 *)(puVar15 + 1);
          uVar3 = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)plVar1 = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar5;
          *(undefined4 *)(plVar1 + 1) = uVar2;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_140107cf4(iVar19);
          goto LAB_14348ca9f;
        }
        iVar6 = (int)plVar1[2];
      }
    }
    if (3 < uVar22) {
      uVar11 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
      lVar20 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar20 & 0x1f);
    }
    iVar6 = iVar19;
    if (((int)uVar22 < 1) || (iVar13 <= DAT_14cad2ae8)) {
      uVar9 = DAT_14cad2ae8 - 1U & uVar9;
      *(uint *)((longlong)puVar15 + 0x14) = uVar9;
      puVar14 = DAT_14cad2ae0;
      if (DAT_14cad2ae0 == (undefined *)0x0) {
        puVar14 = &DAT_14cad2ad8;
      }
      *(undefined4 *)(puVar15 + 2) =
           *(undefined4 *)(puVar14 + ((longlong)DAT_14cad2ae8 - 1U & (longlong)(int)uVar9) * 4);
      puVar14 = DAT_14cad2ae0;
      if (DAT_14cad2ae0 == (undefined *)0x0) {
        puVar14 = &DAT_14cad2ad8;
      }
      *(int *)(puVar14 + ((longlong)DAT_14cad2ae8 - 1U & (longlong)(int)uVar9) * 4) = iVar19;
    }
    else {
      DAT_14cad2ae8 = iVar13;
      FUN_1417c18b0();
    }
LAB_14348ca9f:
    lVar4 = DAT_14cad2aa0;
    lVar20 = FUN_14001cc68(0xa0,0x10);
    FUN_1417acebc(lVar20);
    *(undefined4 *)(lVar20 + 0x88) = 0;
    *(undefined1 *)(lVar20 + 0x8c) = 0;
    *(undefined8 *)(lVar20 + 0x90) = 0;
    *(undefined8 *)(lVar20 + 0x98) = 0;
    *(longlong *)(lVar4 + 8 + (longlong)iVar6 * 0x18) = lVar20;
LAB_14348cae7:
    iVar19 = *(int *)(lVar20 + 0x98);
    *(uint *)(lVar20 + 0x98) = iVar19 + 1U;
    if (*(uint *)(lVar20 + 0x9c) < iVar19 + 1U) {
      FUN_1417b8400((longlong *)(lVar20 + 0x90),iVar19);
    }
    *(longlong **)(*(longlong *)(lVar20 + 0x90) + (longlong)iVar19 * 8) = param_1;
    if (((int)param_1[0x137] != 0) &&
       (plVar23 = (longlong *)param_1[0x136], plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x60))(plVar23,lVar20);
    }
  }
  param_1[0x138] = lVar20;
  if (((((*(int *)((longlong)param_1 + 0x66c) == 0) ||
        (uVar9 = *(uint *)(param_1 + 0xcd), (int)uVar9 < 0)) || (DAT_14c9647dc <= (int)uVar9)) ||
      ((puVar15 = (undefined8 *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       puVar15 == (undefined8 *)0x0 ||
       (*(int *)(puVar15 + 2) != *(int *)((longlong)param_1 + 0x66c))))) ||
     ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) {
    (**(code **)(*param_1 + 0xb50))(param_1);
  }
  else {
    if ((*(uint *)(puVar15 + 1) & 0x10200000) == 0) {
      uVar16 = *puVar15;
    }
    else {
      uVar16 = 0;
    }
    FUN_14349212a(param_1,uVar16,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0);
  }
  FUN_1448aa298(param_1);
  uVar5 = 5;
  if ((param_1[0x16] != 0) && (lVar20 = *(longlong *)(param_1[0x16] + 0x218), lVar20 != 0)) {
    uVar5 = *(undefined4 *)(lVar20 + 8);
  }
  *(undefined4 *)(param_1 + 0x113) = uVar5;
  *(int *)((longlong)param_1 + 0x84c) = (int)param_1[0x109];
  (**(code **)(*param_1 + 0xb20))(param_1);
  FUN_1447ec8c2(param_1);
  FUN_140788cb8(param_1,local_70);
  FUN_140107d74(param_1,local_70);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_140971bbc(param_1,1);
  (**(code **)(*param_1 + 0x310))(param_1);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348cf12 FUN_14348cf12 body=3535 status=ok
// SIG undefined FUN_14348cf12(void)

undefined8 FUN_14348cf12(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  code **ppcVar9;
  longlong lVar10;
  code *pcVar11;
  byte bVar12;
  undefined7 uVar13;
  byte bVar14;
  code *pcVar15;
  code *pcVar16;
  undefined7 uVar18;
  ulonglong uVar17;
  bool bVar19;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  uint local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined1 local_d9;
  code *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar2 = (**(code **)(*param_1 + 0xcf8))();
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) {
    uVar6 = 0;
    goto LAB_14348d5a0;
  }
  bVar2 = ~bVar2 & (byte)(param_2 & 0xffffffff);
  plVar7 = (longlong *)param_1[0xcb];
  uVar13 = (undefined7)((param_2 & 0xffffffff) >> 8);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_14348dac4;
    if (plVar7 != (longlong *)0x0) goto LAB_14348cf7c;
LAB_14348d365:
    cVar3 = FUN_14072189a(param_1);
    if (cVar3 == '\0') {
LAB_14348d375:
      bVar12 = 0;
      uVar13 = 0;
    }
    else {
LAB_14348cfbf:
      lVar5 = param_1[0x15c];
      if ((((lVar5 == 0) || (lVar4 = FUN_1402e44f4(), lVar4 == 0)) ||
          (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1[0x15c];
      }
      local_128 = 0;
      uStack_120 = 0;
      local_130 = local_130 & 0xffffff00;
      local_138 = 0;
      lVar5 = FUN_1417b484e(param_1,lVar5,0,0);
      if ((lVar5 == 0) || (DAT_14c950c29 == 0)) {
        param_1[0x15d] = lVar5;
        if (lVar5 == 0) goto LAB_14348d375;
      }
      else {
        FUN_1456cec3c(lVar5);
        param_1[0x15d] = lVar5;
      }
      FUN_1406c4074(param_1);
      FUN_140737aec(param_1[0x15d],param_3);
      bVar12 = 1;
      if ((*(byte *)((longlong)param_1 + 0x9f) & 0x20) != 0) {
        (**(code **)(*(longlong *)param_1[0x15d] + 0x330))();
        plVar7 = (longlong *)param_1[0x15d];
        uVar6 = FUN_14477b072(plVar7,DAT_14cacb518);
        (**(code **)(*plVar7 + 0x248))(plVar7,uVar6,0);
      }
    }
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14348dac4:
      FUN_1456cec3c(plVar7);
    }
LAB_14348cf7c:
    if (DAT_14cb06da8 == 0) {
      local_100 = &local_d8;
      local_d8 = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1464003b0;
      local_108 = &LAB_147d17bdf;
      local_110 = &LAB_1417edf22;
      local_118 = L"Engine";
      uStack_120 = 0;
      local_128 = CONCAT44(local_128._4_4_,0x10000000);
      local_130 = 8;
      local_138 = CONCAT44(local_138._4_4_,0x588);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_14348d365;
    cVar3 = FUN_14072189a(param_1);
    if (cVar3 != '\0') goto LAB_14348cfbf;
    lVar5 = (**(code **)(*plVar7 + 0x3f8))(plVar7);
    if ((lVar5 == 0) || (*(char *)((longlong)param_1 + 0xc5f) != '\x01')) goto LAB_14348d375;
    if ((bVar2 == 0) && (param_1[0x15d] != 0)) {
      lVar4 = FUN_141483378();
      lVar5 = param_1[0x15d];
      if (lVar5 == 0) goto LAB_14348d111;
      lVar10 = 0;
      if ((lVar4 != 0) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_14348d111;
        lVar10 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar10 = lVar5;
        }
      }
    }
    else {
LAB_14348d111:
      lVar10 = 0;
    }
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    local_d8 = (code *)FUN_141483378();
    local_88 = (longlong *)0x0;
    local_58 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_d0 = param_1;
    lVar5 = FUN_1402710dd(&local_d8);
    if (lStack_98 != 0) {
      plVar7 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar7 = local_78;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((lVar5 == 0) || (DAT_14c950c29 == 0)) {
      param_1[0x15d] = lVar5;
      if (lVar5 != 0) goto LAB_14348d199;
      lVar5 = 0;
      bVar12 = 0;
      uVar13 = 0;
    }
    else {
      FUN_1456cec3c(lVar5);
      param_1[0x15d] = lVar5;
LAB_14348d199:
      FUN_1406c4074(param_1);
      FUN_140737aec(param_1[0x15d],param_3);
      if ((*(byte *)((longlong)param_1 + 0x9f) & 0x20) != 0) {
        (**(code **)(*(longlong *)param_1[0x15d] + 0x330))();
        plVar7 = (longlong *)param_1[0x15d];
        uVar6 = FUN_14477b072(plVar7,DAT_14cacb518);
        (**(code **)(*plVar7 + 0x248))(plVar7,uVar6,0);
      }
      lVar5 = param_1[0x15d];
      bVar12 = 1;
    }
    if (lVar10 == 0) {
      if (lVar5 == 0) {
LAB_14348d2dc:
        lVar10 = 0;
      }
      else {
        lVar4 = FUN_141483378();
        lVar5 = param_1[0x15d];
        if (lVar5 == 0) goto LAB_14348d2dc;
        lVar10 = 0;
        if ((lVar4 != 0) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) {
          if (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_14348d2dc;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30) {
            lVar10 = lVar5;
          }
        }
      }
      ppcVar9 = (code **)(param_1 + 0x160);
    }
    else {
      if (lVar5 == 0) goto LAB_14348d2dc;
      local_d8 = (code *)0x0;
      local_c8 = CONCAT44(local_c8._4_4_,0x3f800000);
      local_d0 = (longlong *)&DAT_ffffffff;
      FUN_140edf5b8(&local_d8,lVar10);
      if (param_1[0x15d] == 0) {
LAB_14348d307:
        lVar10 = 0;
      }
      else {
        lVar4 = FUN_141483378();
        lVar5 = param_1[0x15d];
        if (lVar5 == 0) goto LAB_14348d307;
        lVar10 = 0;
        if ((lVar4 != 0) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) {
          if (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_14348d307;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30) {
            lVar10 = lVar5;
          }
        }
      }
      ppcVar9 = &local_d8;
    }
    FUN_140cbf4da(ppcVar9,lVar10);
    if (param_1[0x15d] != 0) {
      FUN_1406555d4(param_1[0x15d],param_1,0);
    }
  }
  FUN_14348c652(param_1,&local_d8);
  pcVar15 = local_d8;
  if (((((local_d8 == (code *)0x0) || (lVar5 = FUN_1402e44f4(), lVar5 == 0)) ||
       (*(int *)(pcVar15 + 0x38) < *(int *)(lVar5 + 0x38))) ||
      (*(longlong *)(*(longlong *)(pcVar15 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30)) ||
     (((lVar5 = param_1[0x15c], lVar5 != 0 && (lVar4 = FUN_1402e44f4(), lVar4 != 0)) &&
      ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
       ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30 && (pcVar15 == (code *)param_1[0x15c])))))))) {
LAB_14348d3b7:
    param_1[0x15f] = 0;
  }
  else {
    lVar5 = param_1[0x15f];
    if (lVar5 != 0) {
      plVar7 = (longlong *)param_1[0xcb];
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xcc];
        if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_14348dcb4;
        if (plVar7 != (longlong *)0x0) goto LAB_14348d654;
LAB_14348d779:
        plVar7 = (longlong *)0x0;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_14348dcb4:
          FUN_1456cec3c(plVar7);
        }
LAB_14348d654:
        if (DAT_14cb06da8 == 0) {
          local_d8 = FUN_1449e2820;
          local_f0 = FUN_14081d0ea;
          local_f8 = &LAB_1464003b0;
          local_108 = &LAB_147d17bdf;
          local_110 = &LAB_1417edf22;
          local_118 = L"Engine";
          uStack_120 = 0;
          local_128 = CONCAT44(local_128._4_4_,0x10000000);
          local_130 = 8;
          local_138 = CONCAT44(local_138._4_4_,0x588);
          local_100 = &local_d8;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
            DAT_14cb06da8 + 0x30)) goto LAB_14348d779;
      }
      lVar4 = (**(code **)(*plVar7 + 0x3f8))(plVar7);
      if (*(longlong *)(lVar5 + 0x28) != lVar4) goto LAB_14348d3b7;
    }
    plVar7 = (longlong *)param_1[0xcb];
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0xcc];
      if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_14348dcc1;
      if (plVar7 != (longlong *)0x0) goto LAB_14348d6ba;
LAB_14348d7a3:
      plVar7 = (longlong *)0x0;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_14348dcc1:
        FUN_1456cec3c(plVar7);
      }
LAB_14348d6ba:
      if (DAT_14cb06da8 == 0) {
        local_d8 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_1464003b0;
        local_108 = &LAB_147d17bdf;
        local_110 = &LAB_1417edf22;
        local_118 = L"Engine";
        uStack_120 = 0;
        local_128 = CONCAT44(local_128._4_4_,0x10000000);
        local_130 = 8;
        local_138 = CONCAT44(local_138._4_4_,0x588);
        local_100 = &local_d8;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_14348d7a3;
    }
    lVar5 = (**(code **)(*plVar7 + 0x3f8))(plVar7);
    if (lVar5 == 0) goto LAB_14348d3b7;
  }
  lVar5 = param_1[0xcb];
  local_d9 = (undefined1)param_3;
  if (lVar5 == 0) {
    lVar5 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar5 != 0) != 0) goto LAB_14348dad1;
    if (lVar5 != 0) goto LAB_14348d3e4;
LAB_14348d502:
    FUN_14348c652(param_1,&local_d8);
    pcVar15 = local_d8;
    uVar18 = (undefined7)((ulonglong)&local_d8 >> 8);
    if (((local_d8 == (code *)0x0) || (lVar5 = FUN_1402e44f4(), lVar5 == 0)) ||
       (*(int *)(pcVar15 + 0x38) < *(int *)(lVar5 + 0x38))) {
      uVar17 = CONCAT71(uVar18,local_d9);
LAB_14348d539:
      param_1[0x15f] = 0;
    }
    else {
      uVar17 = CONCAT71(uVar18,local_d9);
      if (*(longlong *)(*(longlong *)(pcVar15 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30) goto LAB_14348d539;
    }
    bVar14 = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14348dad1:
      FUN_1456cec3c(lVar5);
    }
LAB_14348d3e4:
    if (DAT_14cb06da8 == 0) {
      local_d8 = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1464003b0;
      local_108 = &LAB_147d17bdf;
      local_110 = &LAB_1417edf22;
      local_118 = L"Engine";
      uStack_120 = 0;
      local_128 = CONCAT44(local_128._4_4_,0x10000000);
      local_130 = 8;
      local_138 = CONCAT44(local_138._4_4_,0x588);
      local_100 = &local_d8;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_14348d502;
    lVar5 = param_1[0x15c];
    if ((lVar5 == 0) ||
       (((lVar4 = FUN_1402e44f4(), lVar4 == 0 || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38)))
        || (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)))) {
      pcVar15 = (code *)0x0;
    }
    else {
      pcVar15 = (code *)param_1[0x15c];
    }
    FUN_14348c652(param_1,&local_d8);
    pcVar11 = local_d8;
    if (((local_d8 == (code *)0x0) || (lVar5 = FUN_1402e44f4(), lVar5 == 0)) ||
       (*(int *)(pcVar11 + 0x38) < *(int *)(lVar5 + 0x38))) {
      pcVar16 = (code *)0x0;
    }
    else {
      pcVar16 = (code *)0x0;
      if (*(longlong *)(*(longlong *)(pcVar11 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        pcVar16 = pcVar11;
      }
    }
    if (param_1[0x15f] == 0) {
      pcVar11 = (code *)0x0;
    }
    else {
      pcVar11 = *(code **)(param_1[0x15f] + 0x10);
    }
    plVar7 = (longlong *)FUN_140569d68();
    if (plVar7 == (longlong *)0x0) {
LAB_14348d495:
      plVar7 = (longlong *)param_1[0xcb];
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xcc];
        if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_14348dc66;
        if (plVar7 != (longlong *)0x0) goto LAB_14348d4b2;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_14348dc66:
          FUN_1456cec3c(plVar7);
        }
LAB_14348d4b2:
        if (DAT_14cb06da8 == 0) {
          local_d8 = FUN_1449e2820;
          local_f0 = FUN_14081d0ea;
          local_f8 = &LAB_1464003b0;
          local_108 = &LAB_147d17bdf;
          local_110 = &LAB_1417edf22;
          local_118 = L"Engine";
          uStack_120 = 0;
          local_128 = CONCAT44(local_128._4_4_,0x10000000);
          local_130 = 8;
          local_138 = CONCAT44(local_138._4_4_,0x588);
          local_100 = &local_d8;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
            DAT_14cb06da8 + 0x30)) {
          lVar5 = (**(code **)(*plVar7 + 0x3f0))(plVar7);
          bVar19 = lVar5 != 0;
          goto LAB_14348d4f9;
        }
      }
      bVar19 = false;
    }
    else {
      lVar5 = (**(code **)(*plVar7 + 0x98))(plVar7);
      bVar19 = true;
      if (lVar5 == 0) goto LAB_14348d495;
    }
LAB_14348d4f9:
    if (((pcVar16 == (code *)0x0) || ((~bVar2 & pcVar16 == pcVar11) != 0)) ||
       (!(bool)(pcVar15 != pcVar16 & bVar19))) goto LAB_14348d502;
    FUN_14348c652(param_1,&local_d8);
    pcVar15 = local_d8;
    if (((local_d8 == (code *)0x0) || (lVar5 = FUN_1402e44f4(), lVar5 == 0)) ||
       (*(int *)(pcVar15 + 0x38) < *(int *)(lVar5 + 0x38))) {
      pcVar11 = (code *)0x0;
    }
    else {
      pcVar11 = (code *)0x0;
      if (*(longlong *)(*(longlong *)(pcVar15 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        pcVar11 = pcVar15;
      }
    }
    local_128 = 0;
    uStack_120 = 0;
    local_130 = local_130 & 0xffffff00;
    local_138 = 0;
    plVar7 = (longlong *)FUN_1417b484e(param_1,pcVar11,0,0);
    if ((plVar7 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
      param_1[0x15f] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) goto LAB_14348dbd6;
      bVar14 = 0;
    }
    else {
      FUN_1456cec3c(plVar7);
      param_1[0x15f] = (longlong)plVar7;
LAB_14348dbd6:
      FUN_140737aec(plVar7,0);
      if ((*(byte *)((longlong)param_1 + 0x9f) & 0x20) != 0) {
        (**(code **)(*(longlong *)param_1[0x15f] + 0x330))();
        plVar7 = (longlong *)param_1[0x15f];
        uVar6 = FUN_14477b072(plVar7,DAT_14cacb518);
        (**(code **)(*plVar7 + 0x248))(plVar7,uVar6,0);
      }
      plVar8 = (longlong *)FUN_1478f7af0(param_1[0x15f],0,0);
      bVar14 = 1;
      if (plVar8 != (longlong *)0x0) {
        uVar6 = FUN_1478f84a6(param_1[0x15f]);
        FUN_1478ff6b8(plVar8 + 7,uVar6);
        *(byte *)(plVar8 + 0x16) = *(byte *)(plVar8 + 0x16) & 0xfe;
        plVar7 = plVar8;
      }
    }
    uVar17 = CONCAT71((int7)((ulonglong)plVar7 >> 8),local_d9);
  }
  if (((param_1[0x15d] != 0) && ((bVar2 ^ 1) == 0)) && (bVar12 == 0)) {
    FUN_1406c4074(param_1);
    FUN_140737aec(param_1[0x15d],uVar17 & 0xffffffff);
    bVar12 = 1;
  }
  if ((param_1[0x15f] != 0) && ((bVar2 ^ 1) == 0 && bVar14 == 0)) {
    FUN_140737aec(param_1[0x15f],0);
    bVar14 = 1;
  }
  uVar6 = CONCAT71(uVar13,bVar12 | bVar14);
  (**(code **)(*param_1 + 0xba0))(param_1);
LAB_14348d5a0:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14348dce2 FUN_14348dce2 body=79 status=ok
// SIG undefined FUN_14348dce2(void)

ulonglong FUN_14348dce2(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6();
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      goto LAB_14348dcf3;
    }
  }
  else {
LAB_14348dcf3:
    if (*(byte *)(lVar2 + 0x152) < 7) {
      uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),0x6a >> (*(byte *)(lVar2 + 0x152) & 0x1f));
      goto LAB_14348dd13;
    }
  }
  uVar1 = 0;
LAB_14348dd13:
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 14348dd60 FUN_14348dd60 body=28 status=ok
// SIG undefined FUN_14348dd60(void)

undefined8 FUN_14348dd60(longlong *param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c872be0 != *(uint *)(param_1 + 0x22e)) {
                    /* WARNING: Could not recover jumptable at 0x00014348dd72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xcf8))();
    return uVar1;
  }
  return CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x22e) >> 8),1);
}



// FUNCTION 14348dd7c FUN_14348dd7c body=69 status=ok
// SIG undefined FUN_14348dd7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348dd7c(void)

{
  _DAT_14cad2968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348ddbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2970,1);
  return;
}



// FUNCTION 14348ddc2 FUN_14348ddc2 body=509 status=ok
// SIG undefined FUN_14348ddc2(void)

int * FUN_14348ddc2(longlong param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  DWORD DVar5;
  DWORD DVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  FUN_14348dfc0();
  piVar7 = (int *)FUN_144b220e8(param_1);
  if ((char)piVar7 == '\0') {
    if ((*(byte *)(param_1 + 0x8a1) & 0x20) == 0) {
      if (*(longlong **)(param_1 + 0xae8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x2e8))();
      }
      iVar1 = *(int *)(param_1 + 0xb80);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0xb78);
        lVar9 = 0;
        do {
          (**(code **)(**(longlong **)(lVar3 + lVar9) + 0x2e8))();
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar1 * 8 != lVar9);
      }
      if (*(longlong **)(param_1 + 0xaf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xaf8) + 0x2e8))();
      }
      piVar7 = DAT_14cad2978;
      if (*DAT_14cad2978 != 0) {
        LOCK();
        DAT_14cad2964 = DAT_14cad2964 + 1;
        UNLOCK();
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1170) = (undefined4)DAT_14c872be0;
    lVar3 = DAT_14cad29d8;
    if ((*(byte *)(param_1 + 0x8a1) & 0x20) == 0) {
      if ((*(byte *)(param_1 + 0x8a0) & 8) != 0) {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
          uVar8 = 0;
        }
        else if (iVar1 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          uVar8 = (ulonglong)(DVar5 != DVar6);
        }
        else {
          uVar8 = 1;
        }
        if (0 < *(int *)(lVar3 + uVar8 * 4)) {
          param_2 = param_2 + *(float *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
        }
      }
    }
    else {
      param_2 = *(float *)(param_1 + 0x864);
    }
    FUN_1407396de(param_1,param_2,param_3);
    piVar4 = DAT_14cad2978;
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    piVar7 = (int *)(ulonglong)uVar2;
    if (((uVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar2 == 2)) {
      uVar8 = 0;
    }
    else if (uVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      piVar7 = (int *)(ulonglong)DVar6;
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    uVar2 = DAT_14cad2964;
    if (0 < piVar4[uVar8]) {
      LOCK();
      UNLOCK();
      bVar10 = DAT_14cad2960 == 499;
      piVar7 = (int *)(ulonglong)DAT_14cad2960;
      DAT_14cad2960 = DAT_14cad2960 + 1;
      if (bVar10) {
        LOCK();
        DAT_14cad2960 = 0;
        UNLOCK();
        LOCK();
        DAT_14cad2964 = 0;
        UNLOCK();
        piVar7 = (int *)(ulonglong)uVar2;
      }
    }
  }
  return piVar7;
}



// FUNCTION 14348dfc0 FUN_14348dfc0 body=537 status=ok
// SIG undefined FUN_14348dfc0(void)

void FUN_14348dfc0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  iVar5 = *(int *)(param_1 + 0x8ec);
  *(int *)(param_1 + 0x8ec) = iVar5 + 1;
  uVar8 = (ulonglong)*(int *)(param_1 + 0x8e0);
  if ((longlong)uVar8 < 1) {
    *(int *)(param_1 + 0x8ec) = iVar5;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x8d8);
    bVar10 = false;
    do {
      lVar12 = uVar8 * 0x10 + -8;
      uVar13 = uVar8;
      while (((*(int *)(*plVar1 + lVar12) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar12), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2,param_3), cVar4 != '\0'))
            ) {
        lVar12 = lVar12 + -0x10;
        bVar3 = uVar13 < 2;
        uVar13 = uVar13 - 1;
        if (bVar3) {
          iVar5 = *(int *)(param_1 + 0x8ec) + -1;
          *(int *)(param_1 + 0x8ec) = iVar5;
          if (bVar10) goto LAB_14348e08a;
          goto LAB_14348dffb;
        }
      }
      uVar8 = uVar13 - 1;
      bVar10 = true;
    } while (1 < uVar13);
    iVar5 = *(int *)(param_1 + 0x8ec) + -1;
    *(int *)(param_1 + 0x8ec) = iVar5;
LAB_14348e08a:
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x8e0);
      iVar9 = iVar5;
      if (0 < iVar5) {
        iVar11 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar11 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar11);
            FUN_14005b248(plVar1);
          }
          else {
            iVar11 = iVar11 + 1;
          }
          iVar9 = *(int *)(param_1 + 0x8e0);
        } while (iVar11 < iVar9);
      }
      iVar11 = 2;
      if (2 < iVar9 * 2) {
        iVar11 = iVar9 * 2;
      }
      *(int *)(param_1 + 0x8e8) = iVar11;
      if ((iVar11 < iVar5) && (*(int *)(param_1 + 0x8e4) != iVar9)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_14348dffb:
  lVar12 = DAT_14cad29d8;
  if ((*(byte *)(param_1 + 0x8a0) & 8) != 0) {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar8 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar8 = 1;
    }
    if ((0 < *(int *)(lVar12 + uVar8 * 4)) && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_147a0deac(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14348e1d9 FUN_14348e1d9 body=69 status=ok
// SIG undefined FUN_14348e1d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348e1d9(void)

{
  _DAT_14cad2980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014348e21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2988,1);
  return;
}



// FUNCTION 14348e21e FUN_14348e21e body=704 status=ok
// SIG undefined FUN_14348e21e(void)

void FUN_14348e21e(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)((longlong)param_1 + 0x4a) & 0x40) != 0) goto LAB_14348e359;
  plVar2 = (longlong *)param_1[0x1ca];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xd8))(plVar2,param_1);
  }
  FUN_14048cbac(param_1);
  (**(code **)(*param_1 + 0xce8))(param_1);
  if (((*DAT_14cb07778 != 0) && ((*(byte *)((longlong)param_1 + 0xc72) & 8) == 0)) ||
     (plVar2 = (longlong *)param_1[0x1ca], plVar2 == (longlong *)0x0)) goto LAB_14348e359;
  local_98 = local_98 & 0xffffff00;
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2,param_1[0x1cb]);
  plVar2 = (longlong *)param_1[0x1ca];
  if (((((*(int *)((longlong)param_1 + 0x66c) == 0) ||
        (uVar1 = *(uint *)(param_1 + 0xcd), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        ((plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)((longlong)param_1 + 0x66c)))))))
      || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) || (lVar6 = *plVar5, lVar6 == 0)) {
LAB_14348e340:
    lVar6 = 0;
  }
  else {
    if (DAT_14cad2858 == 0) {
      local_60 = &local_48;
      local_48 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146395584;
      local_68 = &LAB_147a0ba80;
      local_70 = &LAB_14575ccce;
      local_78 = L"Engine";
      local_80 = 0x40000000000;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_14348e340;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1 + 0x1d0,param_1,lVar6);
LAB_14348e359:
  FUN_14348e4fc(param_1,param_2);
  if ((*(byte *)((longlong)param_1 + 0x4a) & 0x40) == 0) {
    if (*(int *)((longlong)param_1 + 0xcdc) < 0) {
      *(undefined4 *)(param_1 + 0x19b) = 0;
      FUN_147a14da0(param_1 + 0x19a);
    }
    else {
      *(undefined4 *)(param_1 + 0x19b) = 0;
    }
    *(byte *)((longlong)param_1 + 0xc71) =
         *(byte *)((longlong)param_1 + 0xc71) & 0xf7 |
         *(byte *)((longlong)param_1 + 0xc71) * '\b' & 8;
    if ((byte *)param_1[0x1ea] == (byte *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)param_1[0x1ea];
    }
    if (param_4 != 0) {
      cVar4 = (~bVar3 & 1) << 2;
      if (*DAT_14cad2990 < 1) {
        cVar4 = '\0';
      }
      *(char *)(param_4 + 9) = cVar4;
    }
    if ((bVar3 & 1) == 0 && param_1[0x1ec] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348e4fc FUN_14348e4fc body=669 status=ok
// SIG undefined FUN_14348e4fc(void)

void FUN_14348e4fc(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)((longlong)param_1 + 0x4a) & 0x40) == 0) &&
     ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80)) {
    local_44 = param_2;
    uVar5 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_44);
    if ((DAT_14c761388 != 0) &&
       ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) {
      uVar5 = FUN_14119d0a4(lVar4);
      FUN_140e65914(uVar5,param_1,*(undefined4 *)(lVar4 + 0x6f4));
    }
  }
  if ((*(byte *)(param_1 + 0x114) & 4) == 0) {
    if ((*(int *)((longlong)param_1 + 0x3d4) < 0) &&
       ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) {
LAB_14348e57f:
      fVar6 = (float)*(double *)(lVar4 + 0x6d0);
    }
    else {
      fVar6 = *(float *)((longlong)param_1 + 0x3c4);
    }
  }
  else {
    if ((*(int *)((longlong)param_1 + 0x3d4) < 0) &&
       ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0))))
    goto LAB_14348e57f;
    fVar6 = *(float *)(param_1 + 0x79);
  }
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  *(byte *)((longlong)param_1 + 0x89f) =
       *(byte *)((longlong)param_1 + 0x89f) & 0xbf |
       (*(double *)(lVar4 + 0x6d0) + -1.0 < (double)fVar6) << 6;
  FUN_147a0e212(param_1);
  uVar3 = (**(code **)(*param_1 + 0xb20))(param_1);
  if ((*(byte *)((longlong)param_1 + 0x4a) & 0x40) == 0) {
    cVar2 = (**(code **)(*param_1 + 0xb48))(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0xb08))(param_1,param_2,0);
    }
    cVar2 = (**(code **)(*param_1 + 0xb40))(param_1,uVar3);
    if (cVar2 == '\0') {
      if (*(char *)((longlong)param_1 + 0x89c) != '\x01') goto LAB_14348e6bc;
    }
    else if ((((*(int *)((longlong)param_1 + 0x66c) != 0) &&
              (uVar1 = *(uint *)(param_1 + 0xcd), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
            && (((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0
                 && (*(int *)(lVar4 + 0x10) == *(int *)((longlong)param_1 + 0x66c))) &&
                ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
LAB_14348e6bc:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14348e7d6 FUN_14348e7d6 body=8 status=ok
// SIG undefined FUN_14348e7d6(void)

undefined8 FUN_14348e7d6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe50);
}



// FUNCTION 14348e7de FUN_14348e7de body=8 status=ok
// SIG undefined FUN_14348e7de(void)

undefined8 FUN_14348e7de(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe58);
}



// FUNCTION 14348e9c4 FUN_14348e9c4 body=1915 status=ok
// SIG undefined FUN_14348e9c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14348e9c4(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  longlong *plVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_b8 [36];
  uint local_94;
  longlong local_90;
  undefined8 *local_88;
  undefined1 local_79;
  longlong local_78 [4];
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14348f942();
  puVar14 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
  ;
  puVar7 = (uint *)*puVar14;
  if (puVar7 != (uint *)0x0) goto LAB_14348ea8e;
  do {
    uVar11 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar11 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar11 | 1;
      __tlregdtor(&LAB_14349623b);
    }
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar5 = *(undefined4 **)(lVar12 + 0x310);
    *(undefined8 *)(lVar12 + 0x310) = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar5 = 0xffffffff;
    *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
    puVar5[0x12] = 0;
    *puVar14 = puVar5;
    FUN_140217a48(puVar14);
    puVar7 = (uint *)*puVar14;
LAB_14348ea8e:
    uVar15 = *(longlong *)(puVar7 + 0x10) + 7;
    while( true ) {
      puVar16 = (undefined8 *)(uVar15 & 0xfffffffffffffff8);
      if (puVar16 + 0x16 <= puVar7 + 0x4000) {
        *(undefined8 **)(puVar7 + 0x10) = puVar16 + 0x16;
        puVar7[0x12] = puVar7[0x12] + 1;
        uVar11 = 0;
        local_90 = param_2;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a879270;
        uVar15 = 0;
        if (param_1 != 0) {
          uVar11 = *(uint *)(param_1 + 0xc);
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          uVar15 = (ulonglong)*(uint *)(lVar12 + 0x10);
          if (*(uint *)(lVar12 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
            }
            LOCK();
            uVar4 = *(uint *)(lVar12 + 0x10);
            bVar17 = uVar4 == 0;
            if (bVar17) {
              *(uint *)(lVar12 + 0x10) = uVar8;
              uVar4 = 0;
            }
            UNLOCK();
            if (bVar17) {
              uVar4 = uVar8;
            }
            uVar15 = (ulonglong)uVar4;
          }
        }
        puVar16[0x15] = (ulonglong)uVar11 | uVar15 << 0x20;
        uVar11 = DAT_14cad2918;
        if (((DAT_14cad2910 != 0x400) || (DAT_14c7585d8 != 0)) &&
           ((DAT_14cad2910 != 0x800 || (DAT_14c7585dc != 0)))) {
          uVar11 = DAT_14cad2910 | _DAT_14cad2914;
        }
        uVar8 = uVar11 >> 10 & 3;
        if ((uVar11 >> 9 & 1) == 0 || uVar8 < 2) {
          bVar10 = (&DAT_149e38edc)[uVar8];
        }
        else {
          bVar10 = 2;
        }
        uVar15 = (ulonglong)bVar10;
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        lVar13 = *(longlong *)(lVar12 + 0x2b8);
        if (lVar13 == 0) {
          uVar15 = 1;
          if (bVar10 != 6) {
            uVar15 = (ulonglong)bVar10;
          }
          uVar6 = 0;
        }
        else {
          if (bVar10 == 6) {
            uVar15 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
          }
          uVar6 = *(undefined8 *)(lVar13 + 0x30);
        }
        puVar16[0xf] = uVar6;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
        if (puVar16 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
        }
        local_78[0] = CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar16);
        puVar2 = *(undefined8 **)(param_1 + 0xf60);
        *(undefined8 **)(param_1 + 0xf60) = puVar16;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
        local_58 = (longlong *)0x0;
        local_50 = 0x400000001;
        local_78[0] = *(longlong *)(param_1 + 0xf60);
        if (local_78[0] != 0) {
          LOCK();
          *(int *)(local_78[0] + 8) = *(int *)(local_78[0] + 8) + 1;
          UNLOCK();
        }
        puVar7 = (uint *)*puVar14;
        if (puVar7 != (uint *)0x0) goto LAB_14348eda2;
        goto LAB_14348ed24;
      }
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar11 = *puVar7;
      *puVar7 = *puVar7 + puVar7[0x12] + 1;
      UNLOCK();
      if ((uVar11 ^ puVar7[0x12]) != 0xffffffff) break;
      puVar7 = (uint *)*puVar14;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar14 = puVar7;
      uVar15 = (longlong)puVar7 + 0x5f;
    }
  } while( true );
LAB_14348ed24:
  uVar11 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar11 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar11 | 1;
    __tlregdtor(&LAB_14349623b);
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar5 = *(undefined4 **)(lVar13 + 0x310);
  *(undefined8 *)(lVar13 + 0x310) = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar5 = 0xffffffff;
  *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
  puVar5[0x12] = 0;
  *puVar14 = puVar5;
  FUN_140217a48(puVar14);
  puVar7 = (uint *)*puVar14;
LAB_14348eda2:
  uVar15 = *(longlong *)(puVar7 + 0x10) + 7;
  do {
    puVar16 = (undefined8 *)(uVar15 & 0xfffffffffffffff8);
    if (puVar16 + 0x16 <= puVar7 + 0x4000) {
      *(undefined8 **)(puVar7 + 0x10) = puVar16 + 0x16;
      puVar7[0x12] = puVar7[0x12] + 1;
      FUN_1447247dc(puVar16,local_78);
      *puVar16 = &PTR_FUN_14a879280;
      if (param_1 == 0) {
        uVar11 = 0;
        uVar15 = 0;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0xc);
        if ((int)uVar11 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        uVar15 = (ulonglong)*(uint *)(lVar13 + 0x10);
        if (*(uint *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar8 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar17) {
            local_94 = uVar8;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar8);
            uVar8 = local_94;
          }
          LOCK();
          uVar4 = *(uint *)(lVar13 + 0x10);
          bVar17 = uVar4 == 0;
          if (bVar17) {
            *(uint *)(lVar13 + 0x10) = uVar8;
            uVar4 = 0;
          }
          UNLOCK();
          if (bVar17) {
            uVar4 = uVar8;
          }
          uVar15 = (ulonglong)uVar4;
        }
      }
      puVar16[0x15] = (ulonglong)uVar11 | uVar15 << 0x20;
      uVar11 = (uint)DAT_14c761430;
      if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
      }
      lVar13 = local_90;
      puVar16[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar16[9] = puVar16;
      puVar16[10] = puVar16;
      lVar12 = *(longlong *)(lVar12 + 0x2b8);
      if (lVar12 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar12 + 0x30);
      }
      puVar16[0xf] = uVar6;
      puVar16[0x10] = 0xe80000527800b400;
      *(uint *)((longlong)puVar16 + 0x1c) = uVar11 + 3;
      if (puVar16 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
      }
      local_79 = 1;
      FUN_1447439e4(puVar16);
      if (lVar13 == 0) goto LAB_14348ef7c;
      lVar12 = *(longlong *)(lVar13 + 0x20);
      if (*(char *)(lVar12 + 1) == '\x03') {
        puVar14 = (undefined8 *)**(undefined8 **)(lVar12 + 0x10);
LAB_14348ef3b:
        if (puVar14 == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
      }
      else {
        puVar14 = (undefined8 *)0x0;
        if ((lVar12 != 0) && (*(char *)(lVar12 + 1) == '\x02')) {
          puVar14 = *(undefined8 **)(lVar12 + 0x10);
          goto LAB_14348ef3b;
        }
      }
      if (puVar16 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
      }
      local_88 = puVar16;
      FUN_14002c244(puVar14,&local_88);
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
LAB_14348ef7c:
      if (puVar16 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar16)(puVar16,1);
        }
      }
      plVar9 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar9 = local_58;
      }
      FUN_144717c65(plVar9,local_50 & 0xffffffff);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
    LOCK();
    uVar11 = *puVar7;
    *puVar7 = *puVar7 + puVar7[0x12] + 1;
    UNLOCK();
    if ((uVar11 ^ puVar7[0x12]) != 0xffffffff) goto LAB_14348ed24;
    puVar7 = (uint *)*puVar14;
    *puVar7 = 0xffffffff;
    *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *puVar14 = puVar7;
    uVar15 = (longlong)puVar7 + 0x5f;
  } while( true );
}



// FUNCTION 14348f140 FUN_14348f140 body=2049 status=ok
// SIG undefined FUN_14348f140(void)

void FUN_14348f140(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
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
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 != 0) {
    FUN_1401fe94c();
  }
  cVar3 = FUN_1405080a6(param_1);
  if (cVar3 != '\0') {
    FUN_1401fe94c(param_1[0x15f]);
  }
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) {
    if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*DAT_14cad2880 == 0) {
    if (*(char *)((longlong)param_2 + 0x73) == '\x01') {
      iVar1 = (int)param_1[0x16c];
      _Src = (void *)param_1[0x16b];
      *(int *)(param_1 + 0x178) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xbc4) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xbc4) = 0;
      }
      else {
        FUN_1447563a6(param_1 + 0x177,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)param_1[0x177],_Src,(longlong)iVar1 << 4);
        }
      }
      *(char *)(param_1 + 0x179) = (char)param_1[0x16d];
    }
    if (*(char *)((longlong)param_2 + 0x74) == '\x01') {
      FUN_14571e99c(param_1 + 0x17b,param_1 + 0x183);
    }
    if (*(char *)((longlong)param_2 + 0x72) == '\x01') {
      *(undefined4 *)(param_1 + 0x176) = 0;
      if (*(int *)((longlong)param_1 + 0xbb4) < 0) {
        FUN_1401a2688(param_1 + 0x175,0);
      }
      FUN_1406f47cc(param_1 + 0x175,
                    param_1 + (longlong)*(int *)((longlong)param_1 + 0x714) * 2 + 0xda);
      *(undefined4 *)(param_1 + 0x174) = 0;
      if (*(int *)((longlong)param_1 + 0xba4) < 0) {
        FUN_1401a2688(param_1 + 0x173,0);
      }
      FUN_1406f47cc(param_1 + 0x173,param_1 + 0x163);
    }
    if ((char)param_2[0xe] == '\x01') {
      if (((*(byte *)(param_1 + 0x114) & 8) == 0) || (param_1[0x138] == 0)) {
        uVar7 = (undefined4)param_1[0x10c];
      }
      else {
        if ((longlong *)param_1[0x15d] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x15d] + 0x2f0))();
        }
        lVar5 = param_1[0x170];
        if ((longlong)(int)lVar5 != 0) {
          lVar2 = param_1[0x16f];
          lVar6 = 0;
          do {
            (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x2f0))();
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)lVar5 * 8 != lVar6);
        }
        if ((longlong *)param_1[0x15f] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x15f] + 0x2f0))();
        }
        uVar7 = FUN_14571e93a(param_1[0x138]);
      }
      FUN_140507b88(param_1 + 0x163,param_1 + 0x173,uVar7,param_1 + 0x1aa);
      lVar5 = param_1[0xcb];
      if (lVar5 == 0) {
        lVar5 = param_1[0xcc];
        if ((DAT_14c950c29 & lVar5 != 0) != 0) goto LAB_14348f85c;
        if (lVar5 != 0) goto LAB_14348f318;
LAB_14348f67b:
        lVar5 = 0;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_14348f85c:
          FUN_1456cec3c(lVar5);
        }
LAB_14348f318:
        if (DAT_14cb06da8 == 0) {
          local_70 = &local_58;
          local_58 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1464003b0;
          local_78 = &LAB_147d17bdf;
          local_80 = &LAB_1417edf22;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
        goto LAB_14348f67b;
      }
      FUN_1407ecbee(lVar5,param_1 + 0x163,param_1 + 0x1ac,
                    param_1 + (longlong)*(int *)((longlong)param_1 + 0x714) * 2 + 0xda);
      FUN_140507e50(param_1 + 0x16b,param_1 + 0x177,uVar7);
      FUN_140508b0e(param_1 + 0x183,param_1 + 0x17b,uVar7);
    }
  }
  if ((*(char *)((longlong)param_2 + 0x71) == '\0') && ((char)param_2[0xe] != '\x01')) {
    FUN_144a5d7ea(param_1);
    goto LAB_14348f567;
  }
  FUN_1448ed74c(param_1);
  if (param_1[0x15d] != 0) {
    FUN_140061c82(param_1 + (longlong)*(int *)((longlong)param_1 + 0x714) * 8 + 0x215,
                  param_1 + 0x183);
    FUN_1448c74a0(param_1[0x15d]);
    lVar5 = param_1[0x170];
    if ((longlong)(int)lVar5 != 0) {
      lVar2 = param_1[0x16f];
      lVar6 = 0;
      do {
        FUN_1478f6ce8(*(undefined8 *)(lVar2 + lVar6),param_1[0x15d]);
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar6);
    }
  }
  lVar5 = param_1[0xcb];
  if (lVar5 == 0) {
    lVar5 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar5 != 0) != 0) goto LAB_14348f7bf;
    if (lVar5 != 0) goto LAB_14348f43f;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14348f7bf:
      FUN_1456cec3c(lVar5);
    }
LAB_14348f43f:
    if (DAT_14cb06da8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464003b0;
      local_78 = &LAB_147d17bdf;
      local_80 = &LAB_1417edf22;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
       (*(int *)((longlong)param_1 + 0xf04) < (int)param_1[0x1db])) {
      lVar5 = param_1[0xcb];
      if (lVar5 == 0) {
        lVar5 = param_1[0xcc];
        if ((DAT_14c950c29 & lVar5 != 0) != 0) goto LAB_14348f88c;
        if (lVar5 != 0) goto LAB_14348f7fa;
LAB_14348f887:
        lVar5 = 0;
      }
      else {
        if (DAT_14c950c29 != 0) {
LAB_14348f88c:
          FUN_1456cec3c(lVar5);
          if (DAT_14cb06da8 == 0) {
            local_70 = &local_58;
            local_58 = FUN_1449e2820;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1464003b0;
            local_78 = &LAB_147d17bdf;
            local_80 = &LAB_1417edf22;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000000;
            local_a0 = 8;
            local_a8 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
        }
LAB_14348f7fa:
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
        goto LAB_14348f887;
      }
      FUN_1478d3b40(lVar5,param_1 + 0x1da,param_1 + 0xf8,param_1 + 0x102);
    }
  }
  if (param_1[0x15f] != 0) {
    if (param_1[0x15d] == 0) {
      FUN_1448c74a0();
    }
    else {
      FUN_1478f6ce8();
    }
  }
  if (*(char *)((longlong)param_2 + 0x71) == '\x01') {
    if (param_1[0x15d] != 0) {
      FUN_1401fec3a();
      lVar5 = param_1[0x170];
      if ((longlong)(int)lVar5 != 0) {
        lVar2 = param_1[0x16f];
        lVar6 = 0;
        do {
          FUN_1401fec3a(*(undefined8 *)(lVar2 + lVar6));
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar5 * 8 != lVar6);
      }
    }
    if (param_1[0x15f] != 0) {
      FUN_1401fec3a();
    }
  }
  *(byte *)((longlong)param_1 + 0x8a1) = *(byte *)((longlong)param_1 + 0x8a1) | 1;
  if ((0 < (int)param_1[0x1af]) || ((char)param_1[0x18e] < '\0')) {
    if ((*(byte *)((longlong)param_1 + 0xc72) & 2) == 0) {
LAB_14348f4ed:
      plVar4 = param_1 + (longlong)*(int *)((longlong)param_1 + 0x714) * 2 + 0xda;
    }
    else {
      if (*(char *)((longlong)param_2 + 0x71) != '\x01') goto LAB_14348f545;
      if ((char)param_2[0xe] != '\x01') goto LAB_14348f4ed;
      plVar4 = param_1 + 0x175;
    }
    local_a8 = 0;
    (**(code **)(*param_1 + 0xc98))(param_1,plVar4,0,1);
    FUN_143633016(param_1);
  }
LAB_14348f545:
  cVar3 = (**(code **)(*param_1 + 0xcb8))(param_1);
  if (cVar3 == '\0') {
    FUN_143631c58(param_1);
  }
LAB_14348f567:
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14348f942 FUN_14348f942 body=743 status=ok
// SIG undefined FUN_14348f942(void)

void FUN_14348f942(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = (longlong)*(int *)(param_1 + 0x714) * 0x10;
  uVar2 = *(undefined8 *)(param_1 + 0xf88);
  uVar3 = *(undefined8 *)(param_1 + 0xf90);
  puVar1 = (undefined8 *)(param_1 + 0x6d0 + lVar10);
  uVar4 = puVar1[1];
  *(undefined8 *)(param_1 + 0xf88) = *puVar1;
  *(undefined8 *)(param_1 + 0xf90) = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x6d0 + lVar10);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xfa8);
  uVar3 = *(undefined8 *)(param_1 + 0xfb0);
  *(undefined8 *)(param_1 + 0xfa8) = *(undefined8 *)(param_1 + 0xba8);
  *(undefined8 *)(param_1 + 0xfb0) = *(undefined8 *)(param_1 + 0xbb0);
  *(undefined8 *)(param_1 + 0xba8) = uVar2;
  *(undefined8 *)(param_1 + 0xbb0) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xf98);
  uVar3 = *(undefined8 *)(param_1 + 4000);
  *(undefined8 *)(param_1 + 0xf98) = *(undefined8 *)(param_1 + 0xb18);
  *(undefined8 *)(param_1 + 4000) = *(undefined8 *)(param_1 + 0xb20);
  *(undefined8 *)(param_1 + 0xb18) = uVar2;
  *(undefined8 *)(param_1 + 0xb20) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xfb8);
  uVar3 = *(undefined8 *)(param_1 + 0xfc0);
  *(undefined8 *)(param_1 + 0xfb8) = *(undefined8 *)(param_1 + 0xb98);
  *(undefined8 *)(param_1 + 0xfc0) = *(undefined8 *)(param_1 + 0xba0);
  *(undefined8 *)(param_1 + 0xb98) = uVar2;
  *(undefined8 *)(param_1 + 0xba0) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xfe8);
  uVar3 = *(undefined8 *)(param_1 + 0xff0);
  uVar4 = *(undefined8 *)(param_1 + 0xff8);
  uVar5 = *(undefined8 *)(param_1 + 0x1000);
  *(undefined8 *)(param_1 + 0xfe8) = *(undefined8 *)(param_1 + 0xb58);
  *(undefined8 *)(param_1 + 0xff0) = *(undefined8 *)(param_1 + 0xb60);
  *(undefined8 *)(param_1 + 0xff8) = *(undefined8 *)(param_1 + 0xb68);
  *(undefined8 *)(param_1 + 0x1000) = *(undefined8 *)(param_1 + 0xb70);
  *(undefined8 *)(param_1 + 0xb58) = uVar2;
  *(undefined8 *)(param_1 + 0xb60) = uVar3;
  *(undefined8 *)(param_1 + 0xb68) = uVar4;
  *(undefined8 *)(param_1 + 0xb70) = uVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x1008);
  uVar3 = *(undefined8 *)(param_1 + 0x1010);
  uVar4 = *(undefined8 *)(param_1 + 0x1018);
  uVar5 = *(undefined8 *)(param_1 + 0x1020);
  *(undefined8 *)(param_1 + 0x1008) = *(undefined8 *)(param_1 + 3000);
  *(undefined8 *)(param_1 + 0x1010) = *(undefined8 *)(param_1 + 0xbc0);
  *(undefined8 *)(param_1 + 0x1018) = *(undefined8 *)(param_1 + 0xbc8);
  *(undefined8 *)(param_1 + 0x1020) = *(undefined8 *)(param_1 + 0xbd0);
  *(undefined8 *)(param_1 + 3000) = uVar2;
  *(undefined8 *)(param_1 + 0xbc0) = uVar3;
  *(undefined8 *)(param_1 + 0xbc8) = uVar4;
  *(undefined8 *)(param_1 + 0xbd0) = uVar5;
  uVar2 = *(undefined8 *)(param_1 + 0xfd8);
  uVar3 = *(undefined8 *)(param_1 + 0xfc8);
  uVar4 = *(undefined8 *)(param_1 + 0xfd0);
  *(undefined8 *)(param_1 + 0xfc8) = *(undefined8 *)(param_1 + 0xb28);
  *(undefined8 *)(param_1 + 0xfd0) = *(undefined8 *)(param_1 + 0xb30);
  *(undefined8 *)(param_1 + 0xfd8) = *(undefined8 *)(param_1 + 0xb38);
  *(undefined8 *)(param_1 + 0xb28) = uVar3;
  *(undefined8 *)(param_1 + 0xb30) = uVar4;
  *(undefined8 *)(param_1 + 0xb38) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1028);
  uVar3 = *(undefined8 *)(param_1 + 0x1030);
  uVar4 = *(undefined8 *)(param_1 + 0x1038);
  uVar5 = *(undefined8 *)(param_1 + 0x1040);
  uVar6 = *(undefined8 *)(param_1 + 0x1048);
  uVar7 = *(undefined8 *)(param_1 + 0x1050);
  uVar8 = *(undefined8 *)(param_1 + 0x1058);
  uVar9 = *(undefined8 *)(param_1 + 0x1060);
  *(undefined8 *)(param_1 + 0x1028) = *(undefined8 *)(param_1 + 0xc18);
  *(undefined8 *)(param_1 + 0x1030) = *(undefined8 *)(param_1 + 0xc20);
  *(undefined8 *)(param_1 + 0x1038) = *(undefined8 *)(param_1 + 0xc28);
  *(undefined8 *)(param_1 + 0x1040) = *(undefined8 *)(param_1 + 0xc30);
  *(undefined8 *)(param_1 + 0x1048) = *(undefined8 *)(param_1 + 0xc38);
  *(undefined8 *)(param_1 + 0x1050) = *(undefined8 *)(param_1 + 0xc40);
  *(undefined8 *)(param_1 + 0x1058) = *(undefined8 *)(param_1 + 0xc48);
  *(undefined8 *)(param_1 + 0x1060) = *(undefined8 *)(param_1 + 0xc50);
  *(undefined8 *)(param_1 + 0xc18) = uVar2;
  *(undefined8 *)(param_1 + 0xc20) = uVar3;
  *(undefined8 *)(param_1 + 0xc28) = uVar4;
  *(undefined8 *)(param_1 + 0xc30) = uVar5;
  *(undefined8 *)(param_1 + 0xc38) = uVar6;
  *(undefined8 *)(param_1 + 0xc40) = uVar7;
  *(undefined8 *)(param_1 + 0xc48) = uVar8;
  *(undefined8 *)(param_1 + 0xc50) = uVar9;
  uVar2 = *(undefined8 *)(param_1 + 0x1068);
  uVar3 = *(undefined8 *)(param_1 + 0x1070);
  uVar4 = *(undefined8 *)(param_1 + 0x1078);
  uVar5 = *(undefined8 *)(param_1 + 0x1080);
  uVar6 = *(undefined8 *)(param_1 + 0x1088);
  uVar7 = *(undefined8 *)(param_1 + 0x1090);
  uVar8 = *(undefined8 *)(param_1 + 0x1098);
  uVar9 = *(undefined8 *)(param_1 + 0x10a0);
  *(undefined8 *)(param_1 + 0x1068) = *(undefined8 *)(param_1 + 0xbd8);
  *(undefined8 *)(param_1 + 0x1070) = *(undefined8 *)(param_1 + 0xbe0);
  *(undefined8 *)(param_1 + 0x1078) = *(undefined8 *)(param_1 + 0xbe8);
  *(undefined8 *)(param_1 + 0x1080) = *(undefined8 *)(param_1 + 0xbf0);
  *(undefined8 *)(param_1 + 0x1088) = *(undefined8 *)(param_1 + 0xbf8);
  *(undefined8 *)(param_1 + 0x1090) = *(undefined8 *)(param_1 + 0xc00);
  *(undefined8 *)(param_1 + 0x1098) = *(undefined8 *)(param_1 + 0xc08);
  *(undefined8 *)(param_1 + 0x10a0) = *(undefined8 *)(param_1 + 0xc10);
  local_48._0_4_ = (undefined4)uVar2;
  local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar3;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_38._0_4_ = (undefined4)uVar4;
  local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar5;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_28._0_4_ = (undefined4)uVar6;
  local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar7;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_18._0_4_ = (undefined4)uVar8;
  local_18._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar9;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 0xbd8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xbdc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0xbe0) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0xbe4) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 0xbe8) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0xbec) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0xbf0) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 0xbf4) = uStack_30._4_4_;
  *(undefined4 *)(param_1 + 0xbf8) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 0xbfc) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0xc00) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 0xc04) = uStack_20._4_4_;
  *(undefined4 *)(param_1 + 0xc08) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0xc0c) = local_18._4_4_;
  *(undefined4 *)(param_1 + 0xc10) = (undefined4)uStack_10;
  *(undefined4 *)(param_1 + 0xc14) = uStack_10._4_4_;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
  local_48 = uVar2;
  uStack_40 = uVar3;
  local_38 = uVar4;
  uStack_30 = uVar5;
  local_28 = uVar6;
  uStack_20 = uVar7;
  local_18 = uVar8;
  uStack_10 = uVar9;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14348fc2a FUN_14348fc2a body=950 status=ok
// SIG undefined FUN_14348fc2a(void)

void FUN_14348fc2a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
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
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x658);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar2 != 0) != 0) goto LAB_14348fff3;
    if (lVar2 == 0) goto LAB_14348fd13;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14348fff3:
    FUN_1456cec3c(lVar2);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) ||
      (((*(longlong *)(param_1 + 0xae8) == 0 ||
        ((*(byte *)(*(longlong *)(param_1 + 0xae8) + 0x31) & 4) == 0)) &&
       ((*(longlong *)(param_1 + 0xaf8) == 0 ||
        ((*(byte *)(*(longlong *)(param_1 + 0xaf8) + 0x31) & 4) == 0)))))) ||
     (cVar1 = FUN_144b220e8(param_1), cVar1 == '\0')) {
LAB_14348fd13:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((*DAT_14cad2be0 == 0) ||
     (((cVar1 = FUN_1447e0190(), cVar1 == '\0' && (cVar1 = FUN_146811c5e(), cVar1 == '\0')) ||
      (*(longlong *)(param_2 + 0x20) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),
                     (*(byte *)(*(longlong *)(param_2 + 0x20) + 1) & 0xfe) == 2);
  }
  cVar1 = FUN_14036294a(param_1,uVar3 & 0xffffffff ^ 1,1);
  if (cVar1 != '\0') goto LAB_14348fd13;
  lVar2 = *(longlong *)(param_1 + 0x658);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar2 != 0) != 0) goto LAB_143490000;
    if (lVar2 != 0) goto LAB_14348fd56;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_143490000:
      FUN_1456cec3c(lVar2);
    }
LAB_14348fd56:
    if (DAT_14cb06da8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464003b0;
      local_58 = &LAB_147d17bdf;
      local_60 = &LAB_1417edf22;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) goto LAB_14348fd89;
  }
  lVar2 = 0;
LAB_14348fd89:
  *(longlong *)(param_1 + 0xf80) = lVar2;
  *(undefined8 *)(param_1 + 0xf70) = *(undefined8 *)(param_1 + 0xae8);
  if (*(int *)(param_1 + 0xb64) < 0) {
    *(undefined4 *)(param_1 + 0xb60) = 0;
    FUN_140507fc4(param_1 + 0xb58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb60) = 0;
  }
  *(undefined1 *)(param_1 + 0xb68) = 0;
  FUN_14072969c(param_1 + 0xc18);
  *(undefined1 *)(param_1 + 0xfe4) = 0;
  *(undefined4 *)(param_1 + 0xfe0) = 0;
  FUN_140284a70(param_1);
  if ((char)uVar3 == '\0') {
    FUN_14348f942(param_1);
    FUN_140506a30(param_1);
    FUN_14348f942(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14349000e FUN_14349000e body=1497 status=ok
// SIG undefined FUN_14349000e(void)

void FUN_14349000e(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
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
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar3 = true;
  bVar4 = true;
  if ((param_2 != (longlong *)0x0) &&
     (bVar4 = true, *(int *)((longlong)param_2 + 0x34) < (int)param_2[1])) {
    iVar2 = (int)param_2[5];
    if (iVar2 == 0) {
      uVar15 = 1;
      uVar16 = 0;
      iVar13 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_2 + 2);
      }
      uVar14 = *puVar9;
      if (uVar14 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar16;
        }
        iVar13 = 0;
        do {
          if (uVar15 == uVar16) goto LAB_1434901be;
          iVar13 = iVar13 + 0x20;
          uVar14 = puVar9[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar16 = 0;
        iVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 < iVar2) {
      uVar14 = 0xffffffff;
      local_58 = param_3;
      do {
        FUN_14347fe0c(param_1,*(undefined8 *)(*param_2 + (longlong)iVar5 * 0x14),
                      *(undefined4 *)(*param_2 + 8 + (longlong)iVar5 * 0x14));
        uVar14 = ~(uint)uVar15 & uVar14;
        puVar9 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar9 = (uint *)(param_2 + 2);
        }
        iVar2 = (int)param_2[5];
        iVar5 = (int)uVar16;
        lVar12 = (longlong)iVar5;
        uVar6 = puVar9[lVar12] & uVar14;
        if (uVar6 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar10 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar6 = puVar9[lVar12 + lVar10 + 1];
            if (uVar6 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar8 - lVar12 == lVar10) goto LAB_1434901b4;
          }
          uVar16 = (ulonglong)(iVar5 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar2);
LAB_1434901b4:
      bVar4 = false;
      param_3 = local_58;
    }
    else {
LAB_1434901be:
      bVar4 = false;
    }
  }
  if (param_3 != 0) {
    bVar3 = *(int *)(param_3 + 8) <= *(int *)(param_3 + 0x34);
  }
  lVar12 = *(longlong *)(param_1 + 0x658);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar12 != 0) != 0) goto LAB_143490525;
    if (lVar12 == 0) goto LAB_143490281;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143490525:
    FUN_1456cec3c(lVar12);
  }
  if (DAT_14cb06da8 == 0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1464003b0;
    local_78 = &LAB_147d17bdf;
    local_80 = &LAB_1417edf22;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30 || bVar3))
  goto LAB_143490281;
  lVar12 = *(longlong *)(param_1 + 0x658);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar12 != 0) != 0) goto LAB_143490532;
    if (lVar12 != 0) goto LAB_14349024c;
LAB_14349047f:
    lVar12 = 0;
  }
  else {
    if (DAT_14c950c29 != 0) {
LAB_143490532:
      FUN_1456cec3c(lVar12);
      if (DAT_14cb06da8 == 0) {
        local_70 = &local_50;
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1464003b0;
        local_78 = &LAB_147d17bdf;
        local_80 = &LAB_1417edf22;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
    }
LAB_14349024c:
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_14349047f;
  }
  FUN_1478d3b40(lVar12,param_3,param_1 + 0x7c0,param_1 + 0x810);
LAB_143490281:
  if (((!bVar3 && !bVar4) && (*(byte *)(param_1 + 0xc72) & 1) != 0) &&
     (iVar2 = *(int *)(param_1 + 0x738), 0 < (longlong)iVar2)) {
    lVar12 = *(longlong *)(param_1 + 0x730);
    lVar10 = 0;
    do {
      uVar15 = *(ulonglong *)(lVar12 + lVar10);
      if (((((uVar15 >> 0x20 != 0) && (uVar14 = (uint)uVar15, -1 < (int)uVar14)) &&
           ((int)uVar14 < DAT_14c9647dc)) &&
          ((plVar11 = (longlong *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
           plVar11 != (longlong *)0x0 && ((int)plVar11[2] == (int)(uVar15 >> 0x20))))) &&
         (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
          (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0)))) {
        if (DAT_14cad2858 == 0) {
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_146395584;
          local_70 = &local_50;
          local_78 = &LAB_147a0ba80;
          local_80 = &LAB_14575ccce;
          local_88 = L"Engine";
          local_90 = 0x40000000000;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
            DAT_14cad2858 + 0x30)) {
          (**(code **)(*plVar11 + 0xcd8))(plVar11,param_2,param_3);
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434905e8 FUN_1434905e8 body=668 status=ok
// SIG undefined FUN_1434905e8(void)

void FUN_1434905e8(longlong *param_1,longlong param_2)

{
  void *_Dst;
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_1[0xcb];
  if (lVar6 == 0) {
    lVar6 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar6 != 0) == 0) goto LAB_143490623;
  }
  else if (DAT_14c950c29 != 1) goto LAB_143490623;
  FUN_1456cec3c(lVar6);
LAB_143490623:
  if (lVar6 != param_2) {
    bVar1 = *(byte *)((longlong)param_1 + 0x9c);
    if ((bVar1 & 2) != 0) {
      (**(code **)(*param_1 + 0x340))(param_1);
    }
    FUN_140c989ce(param_1,param_2);
    uVar10 = 0;
    (**(code **)(*param_1 + 0xb28))(param_1,0);
    iVar4 = (int)param_1[0xe7];
    if (0 < iVar4) {
      do {
        lVar6 = param_1[0xe6];
        uVar9 = (uint)uVar10;
        uVar3 = *(ulonglong *)(lVar6 + uVar10 * 8);
        if (((((uVar3 >> 0x20 == 0) || (uVar7 = (uint)uVar3, (int)uVar7 < 0)) ||
             (DAT_14c9647dc <= (int)uVar7)) ||
            ((puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
             puVar8 == (undefined8 *)0x0 || (*(int *)(puVar8 + 2) != (int)(uVar3 >> 0x20))))) ||
           ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) {
          if (~uVar9 + iVar4 != 0) {
            _Dst = (void *)(lVar6 + uVar10 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar9 + iVar4) << 3);
            iVar4 = (int)param_1[0xe7];
          }
          *(int *)(param_1 + 0xe7) = iVar4 + -1;
          FUN_147a15b40(param_1 + 0xe6);
          uVar9 = uVar9 - 1;
        }
        else {
          if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar8;
          }
          else {
            uVar5 = 0;
          }
          FUN_143493938(uVar5);
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        iVar4 = (int)param_1[0xe7];
      } while ((int)(uVar9 + 1) < iVar4);
    }
    if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
      (**(code **)(*param_1 + 0xb50))(param_1);
      FUN_143493938(param_1);
      FUN_1447ec8c2(param_1);
      FUN_140f81080(param_1 + 0xf8,0);
      *(undefined4 *)(param_1 + 0x103) = 0;
      if (*(int *)((longlong)param_1 + 0x81c) != 0) {
        FUN_14482f6fa(param_1 + 0x102,0);
      }
      FUN_1403c61a8(param_1[0x104],(int)param_1[0x105]);
      *(undefined4 *)(param_1 + 0x105) = 0;
      if (*(int *)((longlong)param_1 + 0x82c) != 0) {
        FUN_1417c1b1a(param_1 + 0x104);
      }
    }
    (**(code **)(*param_1 + 0x310))(param_1);
    FUN_140788cb8(param_1,local_60);
    FUN_140107d74(param_1,local_60);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    bVar2 = *(byte *)((longlong)param_1 + 0x9c);
    FUN_140932b6e();
    if (((bVar1 & 2) != 0) && ((bVar2 & 1) != 0)) {
      (**(code **)(*param_1 + 800))(param_1,0);
    }
    FUN_140971bbc(param_1,1);
    if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
      (**(code **)(*param_1 + 0xb20))(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143490886 FUN_143490886 body=849 status=ok
// SIG undefined FUN_143490886(void)

undefined4 FUN_143490886(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_143490bd8();
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(param_1 + 0xb20) = 0;
    if (*(int *)(param_1 + 0xb24) != 0) {
      FUN_1401a2688(param_1 + 0xb18,0);
    }
    goto LAB_1434909f7;
  }
  iVar2 = *(int *)(param_1 + 0xb20);
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_143490bbe;
    if (plVar5 != (longlong *)0x0) goto LAB_1434908dc;
LAB_143490a51:
    plVar5 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_143490bbe:
      FUN_1456cec3c(plVar5);
    }
LAB_1434908dc:
    if (DAT_14cb06da8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464003b0;
      local_68 = &LAB_147d17bdf;
      local_70 = &LAB_1417edf22;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_143490a51;
  }
  lVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
  if (iVar2 == *(int *)(lVar4 + 0x28)) goto LAB_1434909f7;
  puVar1 = (undefined8 *)(param_1 + 0xb18);
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_143490bcb;
    if (plVar5 != (longlong *)0x0) goto LAB_143490948;
LAB_143490a7a:
    plVar5 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_143490bcb:
      FUN_1456cec3c(plVar5);
    }
LAB_143490948:
    if (DAT_14cb06da8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464003b0;
      local_68 = &LAB_147d17bdf;
      local_70 = &LAB_1417edf22;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_143490a7a;
  }
  lVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
  if (puVar1 != (undefined8 *)(lVar4 + 0x30)) {
    iVar2 = *(int *)(lVar4 + 0x38);
    _Src = *(void **)(lVar4 + 0x30);
    *(int *)(param_1 + 0xb20) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0xb24) == 0) {
      *(undefined4 *)(param_1 + 0xb24) = 0;
    }
    else {
      FUN_144756262(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 0x60);
      }
    }
  }
LAB_1434909f7:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143490bd8 FUN_143490bd8 body=920 status=ok
// SIG undefined FUN_143490bd8(void)

ulonglong FUN_143490bd8(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 unaff_RBX;
  bool bVar14;
  ulonglong uVar15;
  longlong *plVar16;
  
  if (*(longlong *)(param_1 + 0x658) == 0) {
    if ((DAT_14c950c29 & *(longlong *)(param_1 + 0x660) != 0) != 0) goto LAB_143490f66;
    if (*(longlong *)(param_1 + 0x660) != 0) goto LAB_143490c1e;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_143490f66:
      FUN_1456cec3c();
    }
LAB_143490c1e:
    cVar8 = FUN_143493d78(param_1 + 0x668);
    if (cVar8 != '\0') {
      plVar16 = *(longlong **)(param_1 + 0x658);
      if (plVar16 == (longlong *)0x0) {
        plVar16 = *(longlong **)(param_1 + 0x660);
        if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) goto LAB_143490f51;
      }
      else if (DAT_14c950c29 == 1) {
LAB_143490f51:
        FUN_1456cec3c(plVar16);
      }
      lVar10 = (**(code **)(*plVar16 + 0x310))(plVar16);
      uVar3 = *(uint *)(lVar10 + 0x28);
      uVar15 = (ulonglong)uVar3;
      uVar12 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if (*(uint *)(param_1 + 0x6d8 + (longlong)*(int *)(param_1 + 0x718) * 0x10) != uVar3) {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar15);
        }
        lVar10 = 0;
        bVar7 = true;
        do {
          bVar14 = bVar7;
          lVar10 = lVar10 * 0x10;
          plVar16 = (longlong *)(param_1 + 0x6d0 + lVar10);
          *(undefined4 *)(param_1 + 0x6d8 + lVar10) = 0;
          iVar13 = 0;
          uVar9 = uVar3;
          if (*(uint *)(param_1 + 0x6dc + lVar10) != uVar3) {
            FUN_1401a2688(plVar16,uVar3);
            iVar13 = (int)plVar16[1];
            uVar9 = *(uint *)((longlong)plVar16 + 0xc);
          }
          *(uint *)(plVar16 + 1) = iVar13 + uVar3;
          if (uVar9 - iVar13 < uVar3) {
            FUN_144a2c682(plVar16);
          }
          if (0 < (int)uVar3) {
            lVar11 = 0;
            do {
              lVar4 = *plVar16;
              *(undefined8 *)(lVar4 + lVar11) = 0;
              ((undefined8 *)(lVar4 + lVar11))[1] = 0;
              puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar11);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0x3ff00000;
              puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar11);
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar11);
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar11);
              *puVar2 = 0x3ff0000000000000;
              puVar2[1] = 0x3ff0000000000000;
              puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar11);
              *puVar2 = 0x3ff0000000000000;
              puVar2[1] = 0;
              lVar11 = lVar11 + 0x60;
            } while (uVar15 * 0x60 != lVar11);
          }
          plVar16 = (longlong *)(param_1 + 0x878 + lVar10);
          *(undefined4 *)(param_1 + 0x880 + lVar10) = 0;
          if (*(uint *)(param_1 + 0x884 + lVar10) != uVar3) {
            FUN_144893a1c(plVar16,uVar3);
          }
          if (uVar3 != 0) {
            lVar10 = plVar16[1];
            *(uint *)(plVar16 + 1) = (int)lVar10 + uVar3;
            if ((uint)(*(int *)((longlong)plVar16 + 0xc) - (int)lVar10) < uVar3) {
              FUN_1447403be(plVar16);
            }
            if (0 < (int)uVar3) {
              uVar12 = 0;
              do {
                *(undefined1 *)(*plVar16 + uVar12) = 1;
                uVar12 = uVar12 + 1;
              } while (uVar15 != uVar12);
            }
          }
          lVar10 = 1;
          bVar7 = false;
        } while (bVar14);
        if ((*(int *)(param_1 + 0xa98) != 0) &&
           (plVar5 = *(longlong **)(param_1 + 0xa90), plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x60))(plVar5,1);
        }
        *(byte *)(param_1 + 0x89e) = *(byte *)(param_1 + 0x89e) & 0xfe;
        uVar12 = CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
        if (-1 < *(char *)(param_1 + 0x8a0)) {
          iVar13 = *(int *)(param_1 + 0x6d8);
          pvVar6 = *(void **)(param_1 + 0x6d0);
          *(int *)(param_1 + 0x708) = iVar13;
          if (iVar13 == 0 && *(int *)(param_1 + 0x70c) == 0) {
            *(undefined4 *)(param_1 + 0x70c) = 0;
          }
          else {
            FUN_144756262((undefined8 *)(param_1 + 0x700),iVar13);
            if (iVar13 != 0) {
              memcpy(*(void **)(param_1 + 0x700),pvVar6,(longlong)iVar13 * 0x60);
            }
          }
          iVar13 = *(int *)(param_1 + 0x880);
          pvVar6 = *(void **)(param_1 + 0x878);
          *(int *)(param_1 + 0x6f8) = iVar13;
          if (iVar13 == 0 && *(int *)(param_1 + 0x6fc) == 0) {
            *(undefined4 *)(param_1 + 0x6fc) = 0;
          }
          else {
            FUN_1447a127e((undefined8 *)(param_1 + 0x6f0),iVar13);
            if (iVar13 != 0) {
              memcpy(*(void **)(param_1 + 0x6f0),pvVar6,(longlong)iVar13);
            }
          }
        }
      }
      goto LAB_143490f0f;
    }
  }
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  if (*(int *)(param_1 + 0x6dc) != 0) {
    FUN_1401a2688(param_1 + 0x6d0,0);
  }
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  if (*(int *)(param_1 + 0x6ec) != 0) {
    FUN_1401a2688(param_1 + 0x6e0,0);
  }
  *(undefined4 *)(param_1 + 0x708) = 0;
  if (*(int *)(param_1 + 0x70c) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    FUN_1401a2688(param_1 + 0x700,0);
  }
LAB_143490f0f:
  return uVar12 & 0xffffffff;
}



// FUNCTION 143490f70 FUN_143490f70 body=250 status=ok
// SIG undefined FUN_143490f70(void)

undefined8 FUN_143490f70(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0xd78)) {
    lVar6 = 0;
    do {
      puVar3 = *(uint **)(*(longlong *)(param_1 + 0xd70) + lVar6 * 8);
      if ((((((puVar3[2] & 1) != 0) && (puVar3[1] != 0)) && (uVar2 = *puVar3, -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           (plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0)))) &&
         ((*(uint *)(plVar5 + 2) == puVar3[1] && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar7 = *plVar5;
        }
        else {
          lVar7 = 0;
        }
        lVar4 = DAT_14c997cc0;
        if (DAT_14c997cc0 == 0) {
          plVar5 = (longlong *)FUN_145a62958();
          lVar4 = plVar5[0x22];
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 1000))(plVar5);
            lVar4 = plVar5[0x22];
          }
        }
        cVar1 = *(char *)(lVar4 + 0x75);
        if (*(char *)(lVar7 + 0x31) != '\0') {
          cVar1 = *(char *)(lVar7 + 0x31);
        }
        if ((cVar1 != '\x03') && (*(longlong *)(puVar3 + 0x4e) != 0)) {
          return 1;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xd78));
  }
  return 0;
}



// FUNCTION 14349106a FUN_14349106a body=507 status=ok
// SIG undefined FUN_14349106a(void)

void FUN_14349106a(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
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
  puVar2 = *(undefined8 **)(param_1 + 0xf60);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xf60) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((param_2 == '\0') || (*(longlong *)(param_1 + 0xae8) != *(longlong *)(param_1 + 0xf70)))
  goto LAB_14349115b;
  lVar3 = *(longlong *)(param_1 + 0xf80);
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_143491259;
    if (lVar4 != 0) goto LAB_1434910ef;
LAB_1434911b4:
    lVar4 = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_143491259:
      FUN_1456cec3c(lVar4);
    }
LAB_1434910ef:
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464003b0;
      local_48 = &LAB_147d17bdf;
      local_50 = &LAB_1417edf22;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_1434911b4;
  }
  if ((lVar3 == lVar4) &&
     (*(int *)(param_1 + 0xf90) ==
      *(int *)(param_1 + 0x6d8 + (longlong)*(int *)(param_1 + 0x718) * 0x10))) {
    FUN_14348f942(param_1);
    FUN_14348f140(param_1,param_1 + 0xf70);
  }
LAB_14349115b:
  *(undefined8 *)(param_1 + 0xf70) = 0;
  *(undefined8 *)(param_1 + 0xf78) = 0;
  *(undefined8 *)(param_1 + 0xf80) = 0;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143491266 FUN_143491266 body=2368 status=ok
// SIG undefined FUN_143491266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491266(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  int iVar11;
  void *_Src;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  longlong lVar53;
  longlong *plVar54;
  longlong lVar55;
  int iVar56;
  longlong lVar57;
  longlong *plVar58;
  longlong lVar59;
  ulonglong uVar60;
  float fVar61;
  double dVar62;
  double dVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  undefined1 auStack_168 [32];
  float *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar54 = *(longlong **)(param_1 + 0x658);
  if (plVar54 == (longlong *)0x0) {
    plVar54 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar54 != (longlong *)0x0) != 0) goto LAB_143491b6c;
    if (plVar54 == (longlong *)0x0) goto LAB_143491a56;
LAB_143491b05:
    if ((DAT_14c950c29 & plVar54 != (longlong *)0x0) != 0) {
LAB_143491b9a:
      FUN_1456cec3c(plVar54);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_143491b6c:
    FUN_1456cec3c(plVar54);
    plVar54 = *(longlong **)(param_1 + 0x658);
    if (plVar54 == (longlong *)0x0) {
      plVar54 = *(longlong **)(param_1 + 0x660);
      goto LAB_143491b05;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_143491305;
    goto LAB_143491b9a;
  }
LAB_143491305:
  lVar53 = (**(code **)(*plVar54 + 0x310))(plVar54);
  uVar10 = *(uint *)(lVar53 + 8);
  if (uVar10 != *(uint *)(param_2 + 1)) goto LAB_143491a56;
  plVar54 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar54[1] = (longlong)&DAT_100000001;
  *plVar54 = (longlong)&PTR_FUN_14a879450;
  plVar54[2] = 0;
  plVar54[3] = 0;
  plVar54[4] = 0;
  plVar54[5] = 0;
  if (plVar54 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x7b0) = 0x10;
    plVar58 = *(longlong **)(param_1 + 0x7b8);
    if (plVar58 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x7b8) = 0;
LAB_1434913b1:
      LOCK();
      plVar1 = plVar58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar58)(plVar58);
        LOCK();
        piVar2 = (int *)((longlong)plVar58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar58 + 0x10))(plVar58);
        }
      }
      if (plVar54 != (longlong *)0x0) goto LAB_1434913f4;
    }
  }
  else {
    LOCK();
    *(int *)(plVar54 + 1) = (int)plVar54[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x7b0) = plVar54 + 2;
    plVar58 = *(longlong **)(param_1 + 0x7b8);
    if (plVar54 == plVar58) {
      LOCK();
      plVar58 = plVar54 + 1;
      *(int *)plVar58 = (int)*plVar58 + -1;
      UNLOCK();
      if ((int)*plVar58 == 0) {
        (**(code **)*plVar54)(plVar54);
        LOCK();
        piVar2 = (int *)((longlong)plVar54 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar54 + 0x10))(plVar54);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x7b8) = plVar54;
      if (plVar58 != (longlong *)0x0) goto LAB_1434913b1;
    }
LAB_1434913f4:
    LOCK();
    plVar58 = plVar54 + 1;
    *(int *)plVar58 = (int)*plVar58 + -1;
    UNLOCK();
    if ((int)*plVar58 == 0) {
      (**(code **)*plVar54)(plVar54);
      LOCK();
      piVar2 = (int *)((longlong)plVar54 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar54 + 0x10))(plVar54);
      }
    }
  }
  plVar58 = (longlong *)(param_1 + 0x7b0);
  plVar54 = *(longlong **)(param_1 + 0x658);
  if (plVar54 == (longlong *)0x0) {
    plVar54 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar54 != (longlong *)0x0) != 0) goto LAB_143491b31;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143491b31:
    FUN_1456cec3c(plVar54);
  }
  lVar53 = (**(code **)(*plVar54 + 0x310))(plVar54);
  iVar56 = *(int *)(lVar53 + 0x28);
  if (iVar56 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar56);
  }
  lVar53 = *plVar58;
  if (*(int *)(lVar53 + 0x1c) < iVar56) {
    FUN_1401a2688(lVar53 + 0x10,iVar56);
    lVar53 = *plVar58;
  }
  puVar3 = (undefined8 *)(lVar53 + 0x10);
  if (puVar3 != param_2) {
    iVar11 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar53 + 0x18) = iVar11;
    if (iVar11 == 0 && *(int *)(lVar53 + 0x1c) == 0) {
      *(undefined4 *)(lVar53 + 0x1c) = 0;
    }
    else {
      FUN_144756262(puVar3,iVar11);
      if (iVar11 != 0) {
        memcpy((void *)*puVar3,_Src,(longlong)iVar11 * 0x60);
      }
    }
  }
  lVar53 = *plVar58;
  if ((int)uVar10 < iVar56) {
    FUN_1407a57f6(lVar53 + 0x10,iVar56,1);
    plVar54 = *(longlong **)(param_1 + 0x658);
    if (plVar54 == (longlong *)0x0) {
      plVar54 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar54 != (longlong *)0x0) != 0) goto LAB_143491b57;
    }
    else if (DAT_14c950c29 == 1) {
LAB_143491b57:
      FUN_1456cec3c(plVar54);
    }
    lVar53 = (**(code **)(*plVar54 + 0x310))(plVar54);
    memcpy((void *)((longlong)(int)uVar10 * 0x60 + *(longlong *)(*plVar58 + 0x10)),
           (void *)(*(longlong *)(lVar53 + 0x30) + (longlong)(int)uVar10 * 0x60),
           (longlong)(int)(iVar56 - uVar10) * 0x60);
    lVar53 = *plVar58;
  }
  iVar56 = *(int *)(lVar53 + 8);
  *(uint *)(lVar53 + 8) = iVar56 + uVar10;
  if ((uint)(*(int *)(lVar53 + 0xc) - iVar56) < uVar10) {
    FUN_140491d2e();
  }
  else {
    local_148 = (float *)0x0;
    uStack_140 = (ulonglong)uVar10;
    if (uVar10 == 0) goto LAB_143491a56;
  }
  uStack_140 = (ulonglong)uVar10;
  local_148 = (float *)0x0;
  FUN_140491d2e(&local_148,0);
  auVar52 = _DAT_149934d80;
  if (0 < (int)uVar10) {
    lVar59 = 8;
    dVar12 = (double)DAT_149934d80;
    dVar13 = DAT_149934d80._8_8_;
    lVar53 = 0;
    lVar57 = 0;
    do {
      lVar55 = *(longlong *)(*plVar58 + 0x10);
      pdVar6 = (double *)(lVar55 + -0x40 + lVar59 * 8);
      dVar7 = *pdVar6;
      dVar8 = pdVar6[1];
      pdVar6 = (double *)(lVar55 + -0x30 + lVar59 * 8);
      dVar9 = *pdVar6;
      dVar14 = pdVar6[1];
      pdVar6 = (double *)(lVar55 + lVar59 * 8);
      dVar17 = *pdVar6;
      dVar18 = pdVar6[1];
      dVar62 = dVar9 * dVar9 + dVar7 * dVar7;
      dVar65 = dVar14 * dVar14 + dVar8 * dVar8;
      auVar63._0_8_ = dVar62 + dVar65;
      auVar63._8_8_ = dVar62 + dVar65;
      dVar19 = *(double *)(lVar55 + 0x10 + lVar59 * 8);
      uVar60 = -(ulonglong)(1e-08 <= auVar63._8_8_);
      auVar64 = sqrtpd(auVar63,auVar63);
      auVar68 = divpd(auVar52,auVar64);
      auVar69._0_8_ = auVar68._0_8_ * dVar9;
      auVar69._8_8_ = auVar68._8_8_ * dVar14;
      auVar64._8_4_ = (int)uVar60;
      auVar64._0_8_ = -(ulonglong)(1e-08 <= auVar63._0_8_);
      auVar64._12_4_ = (int)(uVar60 >> 0x20);
      auVar64 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar64);
      dVar65 = (double)((ulonglong)(dVar7 * auVar68._0_8_) & -(ulonglong)(1e-08 <= auVar63._0_8_));
      dVar16 = (double)((ulonglong)(dVar8 * auVar68._8_8_) & uVar60);
      dVar14 = dVar16 + dVar16;
      dVar66 = auVar64._0_8_;
      dVar67 = auVar64._8_8_;
      dVar62 = dVar66 + dVar66;
      dVar15 = dVar65 * (dVar65 + dVar65);
      dVar70 = (dVar65 + dVar65) * dVar67;
      dVar7 = *(double *)(lVar55 + -0x20 + lVar59 * 8);
      dVar8 = *(double *)(lVar55 + -0x18 + lVar59 * 8);
      dVar9 = *(double *)(lVar55 + -0x10 + lVar59 * 8);
      *(float *)((longlong)local_148 + lVar53) =
           (float)((dVar12 - (dVar66 * dVar62 + dVar16 * dVar14)) * dVar17);
      *(float *)((longlong)local_148 + lVar53 + 4) =
           (float)((dVar14 * dVar65 + dVar62 * dVar67) * dVar17);
      *(float *)((longlong)local_148 + lVar53 + 8) =
           (float)((dVar62 * dVar65 - dVar14 * dVar67) * dVar17);
      *(undefined4 *)((longlong)local_148 + lVar53 + 0xc) = 0;
      *(float *)((longlong)local_148 + lVar53 + 0x10) =
           (float)((dVar14 * dVar65 - dVar62 * dVar67) * dVar18);
      *(float *)((longlong)local_148 + lVar53 + 0x14) =
           (float)((dVar13 - (dVar66 * dVar62 + dVar15)) * dVar18);
      *(float *)((longlong)local_148 + lVar53 + 0x18) = (float)((dVar62 * dVar16 + dVar70) * dVar18)
      ;
      *(undefined4 *)((longlong)local_148 + lVar53 + 0x1c) = 0;
      *(float *)((longlong)local_148 + lVar53 + 0x20) =
           (float)((dVar14 * dVar67 + dVar62 * dVar65) * dVar19);
      *(float *)((longlong)local_148 + lVar53 + 0x24) = (float)((dVar62 * dVar16 - dVar70) * dVar19)
      ;
      *(float *)((longlong)local_148 + lVar53 + 0x28) =
           (float)((1.0 - (dVar15 + dVar16 * dVar14)) * dVar19);
      *(undefined4 *)((longlong)local_148 + lVar53 + 0x2c) = 0;
      *(float *)((longlong)local_148 + lVar53 + 0x30) = (float)dVar7;
      *(float *)((longlong)local_148 + lVar53 + 0x34) = (float)dVar8;
      *(float *)((longlong)local_148 + lVar53 + 0x38) = (float)dVar9;
      *(undefined4 *)((longlong)local_148 + lVar53 + 0x3c) = 0x3f800000;
      if (lVar53 == 0) {
        fVar61 = *local_148;
      }
      else {
        plVar54 = *(longlong **)(param_1 + 0x658);
        if (plVar54 == (longlong *)0x0) {
          plVar54 = *(longlong **)(param_1 + 0x660);
          if ((DAT_14c950c29 & plVar54 != (longlong *)0x0) != 0) goto LAB_143491a3a;
        }
        else if (DAT_14c950c29 == 1) {
LAB_143491a3a:
          FUN_1456cec3c(plVar54);
        }
        plVar54 = (longlong *)(**(code **)(*plVar54 + 0x310))(plVar54);
        iVar56 = -1;
        if (lVar57 < (int)plVar54[1]) {
          iVar56 = *(int *)(*plVar54 + lVar59);
        }
        lVar55 = (longlong)iVar56;
        pfVar4 = (float *)((longlong)local_148 + lVar53);
        fVar20 = *pfVar4;
        fVar21 = pfVar4[1];
        fVar22 = pfVar4[2];
        fVar23 = pfVar4[3];
        pfVar4 = (float *)((longlong)local_148 + lVar53 + 0x10);
        fVar24 = *pfVar4;
        fVar25 = pfVar4[1];
        fVar26 = pfVar4[2];
        fVar27 = pfVar4[3];
        pfVar4 = (float *)((longlong)local_148 + lVar53 + 0x20);
        fVar28 = *pfVar4;
        fVar29 = pfVar4[1];
        fVar30 = pfVar4[2];
        fVar31 = pfVar4[3];
        pfVar4 = (float *)((longlong)local_148 + lVar53 + 0x30);
        fVar32 = *pfVar4;
        fVar33 = pfVar4[1];
        fVar34 = pfVar4[2];
        fVar35 = pfVar4[3];
        pfVar4 = local_148 + lVar55 * 0x10;
        fVar36 = *pfVar4;
        fVar37 = pfVar4[1];
        fVar38 = pfVar4[2];
        fVar39 = pfVar4[3];
        pfVar4 = local_148 + lVar55 * 0x10 + 4;
        fVar40 = *pfVar4;
        fVar41 = pfVar4[1];
        fVar42 = pfVar4[2];
        fVar43 = pfVar4[3];
        pfVar4 = local_148 + lVar55 * 0x10 + 8;
        fVar44 = *pfVar4;
        fVar45 = pfVar4[1];
        fVar46 = pfVar4[2];
        fVar47 = pfVar4[3];
        pfVar4 = local_148 + lVar55 * 0x10 + 0xc;
        fVar48 = *pfVar4;
        fVar49 = pfVar4[1];
        fVar50 = pfVar4[2];
        fVar51 = pfVar4[3];
        fVar61 = fVar23 * fVar48 + fVar22 * fVar44 + fVar21 * fVar40 + fVar20 * fVar36;
        pfVar4 = (float *)((longlong)local_148 + lVar53);
        *pfVar4 = fVar61;
        pfVar4[1] = fVar23 * fVar49 + fVar22 * fVar45 + fVar21 * fVar41 + fVar20 * fVar37;
        pfVar4[2] = fVar23 * fVar50 + fVar22 * fVar46 + fVar21 * fVar42 + fVar20 * fVar38;
        pfVar4[3] = fVar23 * fVar51 + fVar22 * fVar47 + fVar21 * fVar43 + fVar20 * fVar39;
        pfVar4 = (float *)((longlong)local_148 + lVar53 + 0x10);
        *pfVar4 = fVar27 * fVar48 + fVar26 * fVar44 + fVar25 * fVar40 + fVar24 * fVar36;
        pfVar4[1] = fVar27 * fVar49 + fVar26 * fVar45 + fVar25 * fVar41 + fVar24 * fVar37;
        pfVar4[2] = fVar27 * fVar50 + fVar26 * fVar46 + fVar25 * fVar42 + fVar24 * fVar38;
        pfVar4[3] = fVar27 * fVar51 + fVar26 * fVar47 + fVar25 * fVar43 + fVar24 * fVar39;
        pfVar4 = (float *)((longlong)local_148 + lVar53 + 0x20);
        *pfVar4 = fVar31 * fVar48 + fVar30 * fVar44 + fVar29 * fVar40 + fVar28 * fVar36;
        pfVar4[1] = fVar31 * fVar49 + fVar30 * fVar45 + fVar29 * fVar41 + fVar28 * fVar37;
        pfVar4[2] = fVar31 * fVar50 + fVar30 * fVar46 + fVar29 * fVar42 + fVar28 * fVar38;
        pfVar4[3] = fVar31 * fVar51 + fVar30 * fVar47 + fVar29 * fVar43 + fVar28 * fVar39;
        pfVar4 = (float *)((longlong)local_148 + lVar53 + 0x30);
        *pfVar4 = fVar35 * fVar48 + fVar34 * fVar44 + fVar33 * fVar40 + fVar32 * fVar36;
        pfVar4[1] = fVar35 * fVar49 + fVar34 * fVar45 + fVar33 * fVar41 + fVar32 * fVar37;
        pfVar4[2] = fVar35 * fVar50 + fVar34 * fVar46 + fVar33 * fVar42 + fVar32 * fVar38;
        pfVar4[3] = fVar35 * fVar51 + fVar34 * fVar47 + fVar33 * fVar43 + fVar32 * fVar39;
      }
      if ((((((1e-08 < ABS(fVar61)) || (1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 4))))
            || (1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 8)))) ||
           ((1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 0x10)) ||
            (1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 0x14)))))) ||
          ((1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 0x18)) ||
           ((1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 0x20)) ||
            (1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 0x24)))))))) ||
         (1e-08 < ABS(*(float *)((longlong)local_148 + lVar53 + 0x28)))) {
        FUN_144906c86(&local_138,(longlong)local_148 + lVar53);
      }
      else {
        local_108 = _DAT_14c846280;
        uStack_100 = _DAT_14c846288;
        local_118 = _DAT_14c846270;
        uStack_110 = _DAT_14c846278;
        local_128 = _DAT_14c846260;
        uStack_120 = _DAT_14c846268;
        local_138 = _DAT_14c846250;
        uStack_130 = DAT_14c846258;
      }
      lVar55 = *(longlong *)*plVar58;
      puVar3 = (undefined8 *)(lVar55 + 0x30 + lVar53);
      *puVar3 = local_108;
      puVar3[1] = uStack_100;
      puVar3 = (undefined8 *)(lVar55 + 0x20 + lVar53);
      *puVar3 = local_118;
      puVar3[1] = uStack_110;
      puVar3 = (undefined8 *)(lVar55 + 0x10 + lVar53);
      *puVar3 = local_128;
      puVar3[1] = uStack_120;
      puVar5 = (undefined4 *)(lVar55 + lVar53);
      *puVar5 = (undefined4)local_138;
      puVar5[1] = local_138._4_4_;
      puVar5[2] = (undefined4)uStack_130;
      puVar5[3] = uStack_130._4_4_;
      lVar57 = lVar57 + 1;
      lVar59 = lVar59 + 0xc;
      lVar53 = lVar53 + 0x40;
    } while ((ulonglong)uVar10 << 6 != lVar53);
  }
  if (local_148 != (float *)0x0) {
    FUN_1400020a8();
  }
LAB_143491a56:
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143491ba8 FUN_143491ba8 body=8 status=ok
// SIG undefined FUN_143491ba8(void)

longlong FUN_143491ba8(longlong param_1)

{
  return param_1 + 0xba8;
}



// FUNCTION 143491bbc FUN_143491bbc body=69 status=ok
// SIG undefined FUN_143491bbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491bbc(void)

{
  _DAT_14cad29b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad29c0,1);
  return;
}



// FUNCTION 143491c01 FUN_143491c01 body=69 status=ok
// SIG undefined FUN_143491c01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491c01(void)

{
  _DAT_14cad29c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad29d0,1);
  return;
}



// FUNCTION 143491c46 FUN_143491c46 body=69 status=ok
// SIG undefined FUN_143491c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491c46(void)

{
  _DAT_14cad29e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad29e8,1);
  return;
}



// FUNCTION 143491c8b FUN_143491c8b body=69 status=ok
// SIG undefined FUN_143491c8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491c8b(void)

{
  _DAT_14cad29f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a00,1);
  return;
}



// FUNCTION 143491cd0 FUN_143491cd0 body=69 status=ok
// SIG undefined FUN_143491cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491cd0(void)

{
  _DAT_14cad2a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491d12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a18,1);
  return;
}



// FUNCTION 143491d15 FUN_143491d15 body=69 status=ok
// SIG undefined FUN_143491d15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491d15(void)

{
  _DAT_14cad2a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a30,1);
  return;
}



// FUNCTION 143491d5a FUN_143491d5a body=69 status=ok
// SIG undefined FUN_143491d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491d5a(void)

{
  _DAT_14cad2a38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a40,1);
  return;
}



// FUNCTION 143491d9f FUN_143491d9f body=69 status=ok
// SIG undefined FUN_143491d9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491d9f(void)

{
  _DAT_14cad2a48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a50,1);
  return;
}



// FUNCTION 143491de4 FUN_143491de4 body=69 status=ok
// SIG undefined FUN_143491de4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491de4(void)

{
  _DAT_14cad2a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a60,1);
  return;
}



// FUNCTION 143491e29 FUN_143491e29 body=69 status=ok
// SIG undefined FUN_143491e29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491e29(void)

{
  _DAT_14cad2a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a70,1);
  return;
}



// FUNCTION 143491e6e FUN_143491e6e body=69 status=ok
// SIG undefined FUN_143491e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491e6e(void)

{
  _DAT_14cad2a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a80,1);
  return;
}



// FUNCTION 143491eb3 FUN_143491eb3 body=69 status=ok
// SIG undefined FUN_143491eb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491eb3(void)

{
  _DAT_14cad2a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2a90,1);
  return;
}



// FUNCTION 143491ef8 FUN_143491ef8 body=41 status=ok
// SIG undefined FUN_143491ef8(void)

void FUN_143491ef8(void)

{
  DAT_14cad2ae8 = 0;
  if (DAT_14cad2ae0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6be66();
  return;
}



// FUNCTION 143491f21 FUN_143491f21 body=69 status=ok
// SIG undefined FUN_143491f21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491f21(void)

{
  _DAT_14cad2af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2af8,1);
  return;
}



// FUNCTION 143491f66 FUN_143491f66 body=69 status=ok
// SIG undefined FUN_143491f66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491f66(void)

{
  _DAT_14cad2b08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2b10,1);
  return;
}



// FUNCTION 143491fab FUN_143491fab body=69 status=ok
// SIG undefined FUN_143491fab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143491fab(void)

{
  _DAT_14cad2b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143491fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2b28,1);
  return;
}



// FUNCTION 143491ff0 FUN_143491ff0 body=314 status=ok
// SIG undefined FUN_143491ff0(void)

longlong FUN_143491ff0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1[0x16] == 0) {
    FUN_1448abda6(param_1);
  }
  lVar6 = (**(code **)(*param_1 + 0xa90))(param_1);
  cVar2 = (**(code **)(*param_1 + 0xc30))(param_1);
  if (((((lVar6 != 0) && (cVar2 == '\0')) && (-1 < *(int *)((longlong)param_1 + 0x854))) &&
      ((*(int *)((longlong)param_1 + 0x854) < *(int *)(lVar6 + 8) &&
       ((*(byte *)((longlong)param_1 + 0x89f) & 1) == 0)))) && (param_1[0x115] != 0)) {
    uVar3 = FUN_1448d11dc(param_1);
    iVar4 = FUN_1401b1882(lVar6,uVar3);
    cVar2 = (**(code **)(*(longlong *)param_1[0x115] + 0x40))();
    if ((cVar2 == '\0') && (iVar5 = FUN_1401a8bec(0), iVar5 < iVar4)) {
      return 0;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[0x115] + 0x50))();
    if (cVar2 == '\0') {
      lVar7 = FUN_14001cc68(0x3a0,0x10);
      FUN_1436b1c00(lVar7,param_1,lVar6,0);
    }
    else {
      lVar1 = param_1[0x115];
      lVar7 = FUN_14001cc68(0x330,0x10);
      FUN_14366b43e(lVar7,lVar1 + 0x220,param_1,lVar6,1);
    }
    if (lVar7 != 0) {
      *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 1;
      return lVar7;
    }
  }
  return 0;
}



// FUNCTION 14349212a FUN_14349212a body=1016 status=ok
// SIG undefined FUN_14349212a(void)

void FUN_14349212a(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  void *_Dst;
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if ((param_3 == '\0') && (cVar2 = FUN_147a0f73a(param_1 + 0xcd,param_2), cVar2 != '\0')) {
    return;
  }
  *(byte *)((longlong)param_1 + 0x8a2) = *(byte *)((longlong)param_1 + 0x8a2) & 0xfb | param_4 << 2;
  iVar3 = DAT_14c9647dc;
  lVar6 = DAT_14c9647c8;
  if (*(int *)((longlong)param_1 + 0x66c) != 0) {
    uVar11 = *(uint *)(param_1 + 0xcd);
    plVar7 = (longlong *)0x0;
    if (((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) goto LAB_1434921b5;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar11 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)((longlong)param_1 + 0x66c) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      plVar7 = (longlong *)*puVar5;
      goto LAB_1434921b5;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1434921b5:
  if (param_2 != (longlong *)0x0) {
    do {
      if (((((*(int *)((longlong)param_2 + 0x66c) == 0) ||
            (uVar11 = *(uint *)(param_2 + 0xcd), (int)uVar11 < 0)) || (DAT_14c9647dc <= (int)uVar11)
           ) || ((puVar5 = (undefined8 *)
                           ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                 puVar5 == (undefined8 *)0x0 ||
                 (*(int *)(puVar5 + 2) != *(int *)((longlong)param_2 + 0x66c))))) ||
         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) {
        if (param_2 != (longlong *)0x0) {
          uVar11 = *(uint *)((longlong)param_2 + 0xc);
          *(uint *)(param_1 + 0xcd) = uVar11;
          if ((int)uVar11 < iVar3) {
            lVar6 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(lVar6 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar3 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar3 = *(int *)(lVar6 + 0x10);
            bVar12 = iVar3 == 0;
            if (bVar12) {
              *(int *)(lVar6 + 0x10) = iVar9;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar3 = iVar9;
            }
          }
          *(int *)((longlong)param_1 + 0x66c) = iVar3;
          iVar3 = (int)param_2[0xe7];
          if (iVar3 < 1) goto LAB_14349235e;
          uVar8 = 0;
          bVar12 = true;
          do {
            lVar6 = param_2[0xe6];
            uVar11 = (uint)uVar8;
            uVar1 = *(ulonglong *)(lVar6 + uVar8 * 8);
            if (((uVar1 >> 0x20 == 0) || (uVar10 = (uint)uVar1, (int)uVar10 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar10 ||
                (((puVar5 = (undefined8 *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0xd & 0x3fff8))),
                  puVar5 == (undefined8 *)0x0 || (*(int *)(puVar5 + 2) != (int)(uVar1 >> 0x20))) ||
                 ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))))) {
              if (~uVar11 + iVar3 != 0) {
                _Dst = (void *)(lVar6 + uVar8 * 8);
                memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar11 + iVar3) << 3);
                iVar3 = (int)param_2[0xe7];
              }
              *(int *)(param_2 + 0xe7) = iVar3 + -1;
              FUN_147a15b40(param_2 + 0xe6);
              uVar11 = uVar11 - 1;
              iVar3 = (int)param_2[0xe7];
            }
            else {
              if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
                plVar4 = (longlong *)*puVar5;
              }
              else {
                plVar4 = (longlong *)0x0;
              }
              bVar12 = (bool)(bVar12 & plVar4 != param_1);
            }
            uVar8 = (ulonglong)(uVar11 + 1);
          } while ((int)(uVar11 + 1) < iVar3);
          if (bVar12) {
LAB_14349235e:
            (**(code **)(*param_2 + 0xb60))(param_2,param_1);
          }
          FUN_14082bc44(param_1 + 8,param_2,param_2 + 8);
          bVar12 = false;
          goto LAB_14349237f;
        }
        break;
      }
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        param_2 = (longlong *)*puVar5;
      }
      else {
        param_2 = (longlong *)0x0;
      }
    } while (param_2 != param_1);
  }
  param_1[0xcd] = 0;
  bVar12 = true;
  param_2 = (longlong *)0x0;
LAB_14349237f:
  if (((plVar7 != (longlong *)0x0) && (plVar7 != param_2)) &&
     ((**(code **)(*plVar7 + 0xb70))(plVar7,param_1), (longlong *)param_1[0x24] != plVar7)) {
    FUN_1401c4d5c(param_1 + 8,plVar7,plVar7 + 8);
  }
  (**(code **)(*param_1 + 0xb50))(param_1);
  FUN_1406cc378(param_1);
  FUN_143493938(param_1);
  if ((((!bVar12) && (*(int *)((longlong)param_1 + 0x66c) != 0)) &&
      ((uVar11 = *(uint *)(param_1 + 0xcd), -1 < (int)uVar11 &&
       ((((int)uVar11 < DAT_14c9647dc &&
         (lVar6 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8), lVar6 != 0)) &&
        (*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x66c))))))) &&
     ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
    if (0 < (longlong)(int)param_1[0xe7]) {
      uVar8 = (longlong)(int)param_1[0xe7] + 1;
      do {
        iVar3 = *(int *)(param_1[0xe6] + -0xc + uVar8 * 8);
        if (((iVar3 != 0) &&
            (uVar11 = *(uint *)(param_1[0xe6] + -0x10 + uVar8 * 8), -1 < (int)uVar11)) &&
           (((((int)uVar11 < DAT_14c9647dc &&
              ((plVar7 = (longlong *)
                         ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar3)))) &&
             ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
          FUN_14349212a(*plVar7,param_2,0,0);
        }
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001434924ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb10))(param_1);
    return;
  }
  return;
}



// FUNCTION 143492522 FUN_143492522 body=3003 status=ok
// SIG undefined FUN_143492522(void)

void FUN_143492522(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 *puStack_70;
  longlong local_68;
  undefined8 *puStack_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_14349302c;
    if (param_1[0xcc] != 0) goto LAB_14349256a;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14349302c:
      FUN_1456cec3c();
    }
LAB_14349256a:
    cVar4 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar4 == '\0') {
      lVar13 = param_1[0xcb];
      if (lVar13 == 0) {
        lVar13 = param_1[0xcc];
        if ((DAT_14c950c29 & lVar13 != 0) != 0) goto LAB_143492ee1;
      }
      else if (DAT_14c950c29 == 1) {
LAB_143492ee1:
        FUN_1456cec3c(lVar13);
      }
      if ((*(uint *)(lVar13 + 8) & 0x8003400) != 0) {
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar11 = *(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60), iVar11 != 2)) {
          if (iVar11 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_143493055;
          }
        }
        else {
LAB_143493055:
          FUN_1400337aa(lVar13);
          FUN_14472e7dc(lVar13,0);
        }
      }
      FUN_1409b47b8(param_1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
      }
      bVar2 = DAT_14c8442b8;
      if (DAT_14c872bf0 == '\x01') {
        if (DAT_14c872bf1 != '\x01') goto LAB_1434927b0;
        bVar2 = DAT_14c8442b8 & 1;
      }
      if (bVar2 == 0) {
        if ((((DAT_14c76152c == '\x01') && (*(char *)((longlong)param_1 + 0x1fc) != '\0')) &&
            ((lVar13 = param_1[0x16], lVar13 != 0 || (lVar13 = FUN_1448abda6(param_1), lVar13 != 0))
            )) && ((((*(byte *)(lVar13 + 0x152) == 1 || (*(byte *)(lVar13 + 0x152) - 5 < 2)) &&
                    (*(longlong *)(lVar13 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
          bVar2 = *(byte *)((longlong)param_1 + 0x1fc);
          iVar11 = *(int *)(*(longlong *)(lVar13 + 0x178) + 0x3e4);
          if (iVar11 < 0) {
            iVar11 = FUN_141348de4();
          }
          if (iVar11 < (int)(uint)bVar2) goto LAB_1434927b0;
        }
        if (((int)(uint)*(byte *)((longlong)param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
           (((cVar4 = FUN_140041326(param_1), cVar4 != '\0' ||
             ((*(byte *)((longlong)param_1 + 0x2dc) & 0x40) != 0)) ||
            (((*(byte *)((longlong)param_1 + 0x2d6) & 0x10) != 0 ||
             ((*(byte *)((longlong)param_1 + 0x2df) & 2) != 0)))))) {
          lVar13 = param_1[0x16];
          if (lVar13 == 0) {
            lVar13 = FUN_1448abda6(param_1);
          }
          uVar1 = *(undefined1 *)(lVar13 + 0x150);
          plVar12 = (longlong *)param_1[0xcb];
          if (plVar12 == (longlong *)0x0) {
            plVar12 = (longlong *)param_1[0xcc];
            if ((DAT_14c950c29 & plVar12 != (longlong *)0x0) != 0) goto LAB_143492f53;
          }
          else if (DAT_14c950c29 == 1) {
LAB_143492f53:
            FUN_1456cec3c(plVar12);
          }
          lVar13 = (**(code **)(*plVar12 + 0x388))(plVar12);
          if (lVar13 != 0) {
            uVar5 = FUN_1448d11dc(param_1);
            if ((code *)param_1[0x116] == (code *)0x0) {
              plVar12 = (longlong *)param_1[0x115];
            }
            else {
              plVar12 = (longlong *)(*(code *)param_1[0x116])(param_1[0x117],param_1,lVar13,uVar1);
              param_1[0x115] = (longlong)plVar12;
            }
            if (plVar12 == (longlong *)0x0) {
              cVar4 = (**(code **)(*param_1 + 0xac0))(param_1);
              if ((cVar4 == '\0') ||
                 (cVar4 = (**(code **)(*param_1 + 0xac8))(param_1), cVar4 != '\0')) {
LAB_14349272c:
                plVar12 = (longlong *)param_1[0x115];
              }
              else {
                plVar12 = (longlong *)FUN_14001cc68(0x330,0x10);
                FUN_1436e5260(plVar12,param_1,lVar13,uVar1);
                if ((char)plVar12[100] != '\x01') {
                  (**(code **)(*plVar12 + 0x10))();
                  uVar6 = FUN_14493c560();
                  uVar17 = (ulonglong)uVar6;
                  if (uVar6 == 0) {
                    uVar7 = 0;
                    uVar19 = 0;
                    lVar15 = 0;
                  }
                  else {
                    uVar19 = (ulonglong)(uVar6 >> 0xe);
                    uVar7 = uVar6 & 0x3fff;
                    lVar15 = (ulonglong)(uVar7 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar19 * 8);
                  }
                  *(longlong **)(lVar15 + 8) = plVar12;
                  do {
                    local_78 = DAT_14ca96680;
                    local_88 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
                    if (local_88 >> 0x1a < DAT_14ca96680 >> 0x1a) {
                      local_80 = uVar17;
                      FUN_14274643a();
                      uVar17 = local_80;
                    }
                    local_88 = local_88 & 0xfffffffffc000000 | uVar17;
                    if (uVar6 == 0) {
                      lVar15 = 0;
                    }
                    else {
                      lVar15 = *(longlong *)(&DAT_14c833b00 + uVar19 * 8) +
                               (ulonglong)(uVar7 * 0x18);
                    }
                    *(uint *)(lVar15 + 0x10) = (uint)local_78 & 0x3ffffff;
                    LOCK();
                    bVar21 = local_78 != DAT_14ca96680;
                    uVar3 = local_88;
                    if (bVar21) {
                      uVar3 = DAT_14ca96680;
                    }
                    DAT_14ca96680 = uVar3;
                    UNLOCK();
                  } while (bVar21);
                  goto LAB_14349272c;
                }
                param_1[0x115] = (longlong)plVar12;
              }
              if (plVar12 == (longlong *)0x0) {
                if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
                  cVar4 = (**(code **)(*param_1 + 0xac8))(param_1);
                  if (cVar4 == '\0') {
                    cVar4 = FUN_1417f016c(lVar13,uVar1,uVar5);
                    if (cVar4 != '\0') {
                      FUN_1401a8bec(0);
                      local_78 = 0;
                      puStack_70 = (undefined1 *)0x0;
                      FUN_14631b754(uVar1,&local_78);
                      if (local_78 != 0) {
                        FUN_1400020a8();
                      }
                      plVar12 = (longlong *)param_1[0x115];
                      goto LAB_1434927a1;
                    }
                    plVar12 = (longlong *)FUN_14001cc68(0x250,0x10);
                    local_b8 = (longlong *)0x0;
                    FUN_1409e77c4(plVar12,param_1,lVar13,uVar1);
                  }
                  else {
                    plVar12 = (longlong *)FUN_14001cc68(0x1a0,0x10);
                    local_b8 = (longlong *)0x0;
                    FUN_147d219c2(plVar12,param_1,lVar13,uVar1);
                  }
                }
                else {
                  plVar12 = (longlong *)FUN_14001cc68(0x158,0x10);
                  local_b8 = (longlong *)0x0;
                  FUN_147d24c38(plVar12,param_1,lVar13,uVar1);
                }
                param_1[0x115] = (longlong)plVar12;
              }
            }
LAB_1434927a1:
            (**(code **)(*param_1 + 0xad0))(param_1,plVar12);
          }
        }
      }
    }
  }
LAB_1434927b0:
  if ((longlong *)param_1[0x118] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x118] + 0x10))();
    lVar13 = param_1[0x118];
    uVar6 = FUN_14493c560();
    if (uVar6 == 0) {
      uVar7 = 0;
      uVar17 = 0;
      lVar15 = 0;
    }
    else {
      uVar17 = (ulonglong)(uVar6 >> 0xe);
      uVar7 = uVar6 & 0x3fff;
      lVar15 = (ulonglong)(uVar7 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar17 * 8);
    }
    *(longlong *)(lVar15 + 8) = lVar13;
    do {
      local_78 = DAT_14ca96680;
      local_88 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
      if (local_88 >> 0x1a < DAT_14ca96680 >> 0x1a) {
        FUN_14274643a();
      }
      local_88 = local_88 & 0xfffffffffc000000 | (ulonglong)uVar6;
      if (uVar6 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(&DAT_14c833b00 + uVar17 * 8) + (ulonglong)(uVar7 * 0x18);
      }
      *(uint *)(lVar13 + 0x10) = (uint)local_78 & 0x3ffffff;
      LOCK();
      bVar21 = local_78 != DAT_14ca96680;
      uVar19 = local_88;
      if (bVar21) {
        uVar19 = DAT_14ca96680;
      }
      DAT_14ca96680 = uVar19;
      UNLOCK();
    } while (bVar21);
    param_1[0x118] = 0;
  }
  FUN_1448f1f76(param_1,param_2);
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_143493036;
    if (param_1[0xcc] != 0) goto LAB_1434928f9;
LAB_143492909:
    uVar6 = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_143493036:
      FUN_1456cec3c();
    }
LAB_1434928f9:
    cVar4 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar4 != '\0') goto LAB_143492909;
    if (*(int *)((longlong)param_1 + 0x6cc) < 0) {
      *(undefined4 *)(param_1 + 0xd9) = 0;
      FUN_147a15946(param_1 + 0xd8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xd9) = 0;
    }
    if (param_1[0x115] == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = *(uint *)((longlong)param_1 + 0x854);
      uVar8 = FUN_1448d11dc(param_1);
      uVar6 = *(int *)(*(longlong *)(param_1[0x115] + 0x40) + 8) - 1;
      if ((int)uVar7 < (int)uVar6) {
        uVar6 = uVar7;
      }
      if ((int)uVar6 < (int)uVar8) {
        uVar6 = uVar8;
      }
      lVar13 = param_1[0xcb];
      if (lVar13 == 0) {
        lVar13 = param_1[0xcc];
        if ((DAT_14c950c29 & lVar13 != 0) != 0) goto LAB_143492f07;
      }
      else if (DAT_14c950c29 == 1) {
LAB_143492f07:
        FUN_1456cec3c(lVar13);
      }
      if (*(int *)(lVar13 + 0xb8) == -1) {
        uVar14 = FUN_140083894();
        cVar4 = FUN_1406bafe2(uVar14,3);
        if (cVar4 == '\0') goto LAB_143492996;
      }
      else {
LAB_143492996:
        if ((param_1[0x115] != 0) &&
           (uVar7 = (uint)*(byte *)(*(longlong *)(param_1[0x115] + 0x40) + 0x1c),
           (int)uVar6 < (int)uVar7)) {
          uVar6 = uVar7;
        }
      }
      plVar12 = (longlong *)param_1[0xcb];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)param_1[0xcc];
        if ((DAT_14c950c29 & plVar12 != (longlong *)0x0) != 0) goto LAB_143492f2d;
      }
      else if (DAT_14c950c29 == 1) {
LAB_143492f2d:
        FUN_1456cec3c(plVar12);
      }
      cVar4 = (**(code **)(*plVar12 + 0x420))(plVar12,uVar6);
      if (cVar4 != '\0') {
        if ((*DAT_14cad2a08 == 0) || (*(char *)((longlong)param_1 + 0x89e) < '\0')) {
          FUN_140f81080(param_1 + 0xf8,0);
        }
        FUN_140971bbc(param_1,0);
        lVar13 = (**(code **)(*param_1 + 0xa90))(param_1);
        if ((lVar13 != 0) && (0 < *(int *)(lVar13 + 8))) {
          local_a8 = (longlong)(int)uVar6 * 0x58 + param_1[0x104];
          local_b8 = param_1 + 0x102;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 1;
          (**(code **)(*(longlong *)param_1[0x115] + 0x18))
                    ((longlong *)param_1[0x115],uVar6,param_1,param_1 + 0xf8);
        }
      }
    }
    FUN_14480e57e(param_1,0);
  }
  lVar13 = param_1[0xd5];
  if ((longlong)(int)lVar13 != 0) {
    lVar15 = param_1[0xd4];
    lVar20 = 0;
    do {
      if (*(longlong **)(lVar15 + lVar20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar15 + lVar20) + 0x2a0))();
      }
      lVar20 = lVar20 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar20);
  }
  if (((((int)uVar6 < 0) || ((int)param_1[0xd7] <= (int)uVar6)) ||
      ((longlong)*(char *)(param_1[0xd6] + (ulonglong)uVar6) == -1)) ||
     (plVar12 = *(longlong **)
                 (param_1[0xd4] + (longlong)*(char *)(param_1[0xd6] + (ulonglong)uVar6) * 8),
     plVar12 == (longlong *)0x0)) goto LAB_143492bae;
  local_68 = 0;
  puStack_60 = (undefined8 *)0x0;
  local_58 = 0;
  if (param_1[0x16] == 0) {
    local_78 = 0;
  }
  else {
    local_78 = *(ulonglong *)(param_1[0x16] + 0x218);
  }
  puStack_70 = &DAT_100000002;
  plVar16 = (longlong *)param_1[0xcb];
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) goto LAB_143493086;
    plVar18 = param_1;
    if (plVar16 == (longlong *)0x0) goto LAB_143492b4e;
LAB_143492f87:
    plVar18 = plVar16;
    if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) {
LAB_1434930d1:
      FUN_1456cec3c(plVar16);
      plVar18 = plVar16;
    }
  }
  else {
    plVar18 = plVar16;
    if (DAT_14c950c29 != 0) {
LAB_143493086:
      FUN_1456cec3c(plVar16);
      plVar16 = (longlong *)param_1[0xcb];
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)param_1[0xcc];
        goto LAB_143492f87;
      }
      plVar18 = plVar16;
      if ((DAT_14c950c29 & 1) == 0) goto LAB_143492b4e;
      goto LAB_1434930d1;
    }
  }
LAB_143492b4e:
  local_68 = plVar18[3];
  (**(code **)(*plVar12 + 0x2b0))(plVar12,&local_78);
  if (local_58 != 0) {
    if (puStack_60 == (undefined8 *)0x0) goto LAB_143492bae;
    (**(code **)*puStack_60)(puStack_60,0);
    FUN_1446efa72(&puStack_60,0,0,0x10);
    local_58 = 0;
  }
  if (puStack_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143492bae:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143493152 FUN_143493152 body=767 status=ok
// SIG undefined FUN_143493152(void)

void FUN_143493152(longlong param_1,byte param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  
  if ((*(byte *)(param_1 + 0x8a0) & 2) >> 1 == param_2) {
    return;
  }
  if (param_2 == 0) {
    bVar5 = 0;
    goto LAB_14349328d;
  }
  uVar3 = FUN_140083894();
  cVar2 = FUN_1406bafe2(uVar3,3);
  bVar5 = 2;
  if (cVar2 == '\0') goto LAB_14349328d;
  lVar4 = FUN_140083894();
  plVar1 = *(longlong **)(lVar4 + 0x30);
  (**(code **)(*plVar1 + 0x20))(plVar1,0,0);
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    lVar6 = lVar4;
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_1434933c6;
    bVar7 = *(byte *)(lVar4 + 0xbc) & 8;
LAB_14349331b:
    if ((DAT_14c950c29 & lVar4 != 0) != 0) {
LAB_143493444:
      FUN_1456cec3c(lVar4);
    }
  }
  else {
    lVar6 = lVar4;
    if (DAT_14c950c29 != 0) {
LAB_1434933c6:
      FUN_1456cec3c(lVar6);
      lVar4 = *(longlong *)(param_1 + 0x658);
      bVar7 = *(byte *)(lVar6 + 0xbc) & 8;
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x660);
        goto LAB_14349331b;
      }
      if ((DAT_14c950c29 & 1) == 0) goto LAB_1434931d8;
      goto LAB_143493444;
    }
    bVar7 = *(byte *)(lVar4 + 0xbc) & 8;
  }
LAB_1434931d8:
  *(byte *)(lVar4 + 0xbc) = *(byte *)(lVar4 + 0xbc) | 8;
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_143493347;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143493347:
    FUN_1456cec3c(lVar4);
  }
  (**(code **)(*plVar1 + 0x98))(plVar1,lVar4);
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_14349336d;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14349336d:
    FUN_1456cec3c(lVar4);
  }
  FUN_14371c050(lVar4,0,0);
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_143493393;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143493393:
    FUN_1456cec3c(lVar4);
  }
  FUN_1402bfe62(lVar4);
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_1434933b9;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1434933b9:
    FUN_1456cec3c(lVar4);
  }
  *(byte *)(lVar4 + 0xbc) = *(byte *)(lVar4 + 0xbc) & 0xf7 | bVar7;
LAB_14349328d:
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0xfd | bVar5;
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    if (param_3 != '\0') {
      FUN_1400ed49e(param_1);
      FUN_14080c2b4();
      return;
    }
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar5 = *(byte *)(param_1 + 0x9d);
      if ((bVar5 & 1) != 0) {
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          return;
        }
        lVar4 = FUN_1448abda6(param_1);
        if (lVar4 != 0) {
          return;
        }
        bVar5 = *(byte *)(param_1 + 0x9d);
      }
      *(byte *)(param_1 + 0x9d) = bVar5 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143493452 FUN_143493452 body=839 status=ok
// SIG undefined FUN_143493452(void)

double * FUN_143493452(longlong param_1,double *param_2,undefined8 param_3)

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
  undefined1 auStack_128 [32];
  undefined8 local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = param_3;
  if ((*(byte *)(param_1 + 0x89e) & 0x20) != 0) {
    FUN_14087b246(param_1,&local_f8,&DAT_14c846330,0);
    dVar7 = *(double *)(param_1 + 0x270);
    dVar2 = local_f8 + local_e0;
    dVar3 = local_f0 + local_d8;
    dVar4 = local_e8 + local_d0;
    local_e0 = local_f8 - local_e0;
    local_d8 = local_f0 - local_d8;
    local_d0 = local_e8 - local_d0;
    dVar8 = local_e0;
    if (dVar2 <= local_e0) {
      dVar8 = dVar2;
    }
    dVar9 = local_d8;
    if (dVar3 <= local_d8) {
      dVar9 = dVar3;
    }
    dVar1 = local_d0;
    if (dVar4 <= local_d0) {
      dVar1 = dVar4;
    }
    if (local_e0 <= dVar2) {
      local_e0 = dVar2;
    }
    if (local_d8 <= dVar3) {
      local_d8 = dVar3;
    }
    if (local_d0 <= dVar4) {
      local_d0 = dVar4;
    }
    dVar5 = dVar7 + -1.0;
    dVar2 = *(double *)(param_1 + 0x260);
    dVar3 = *(double *)(param_1 + 0x268);
    dVar6 = dVar3 + -1.0;
    dVar4 = dVar2 + -1.0;
    if (dVar4 <= dVar8) {
      dVar8 = dVar4;
    }
    if (dVar6 <= dVar9) {
      dVar9 = dVar6;
    }
    if (dVar5 <= dVar1) {
      dVar1 = dVar5;
    }
    if (local_e0 <= dVar4) {
      local_e0 = dVar4;
    }
    if (local_d8 <= dVar6) {
      local_d8 = dVar6;
    }
    if (local_d0 <= dVar5) {
      local_d0 = dVar5;
    }
    dVar4 = dVar7 + 1.0;
    dVar5 = dVar3 + 1.0;
    dVar6 = dVar2 + 1.0;
    if (dVar6 <= dVar8) {
      dVar8 = dVar6;
    }
    if (dVar5 <= dVar9) {
      dVar9 = dVar5;
    }
    if (dVar4 <= dVar1) {
      dVar1 = dVar4;
    }
    if (local_e0 <= dVar6) {
      local_e0 = dVar6;
    }
    if (local_d8 <= dVar5) {
      local_d8 = dVar5;
    }
    if (local_d0 <= dVar4) {
      local_d0 = dVar4;
    }
    dVar5 = (local_d0 - dVar1) * 0.5;
    dVar6 = (local_d8 - dVar9) * 0.5;
    dVar4 = (local_e0 - dVar8) * 0.5;
    dVar1 = dVar1 + dVar5;
    dVar9 = dVar9 + dVar6;
    dVar8 = dVar8 + dVar4;
    *param_2 = dVar8;
    param_2[1] = dVar9;
    param_2[2] = dVar1;
    param_2[3] = dVar4;
    param_2[4] = dVar6;
    param_2[5] = dVar5;
    dVar4 = SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6);
    dVar7 = SQRT((dVar7 - dVar1) * (dVar7 - dVar1) +
                 (dVar2 - dVar8) * (dVar2 - dVar8) + (dVar3 - dVar9) * (dVar3 - dVar9)) + 1.0;
    local_c8 = SQRT((local_e8 - dVar1) * (local_e8 - dVar1) +
                    (local_f8 - dVar8) * (local_f8 - dVar8) +
                    (local_f0 - dVar9) * (local_f0 - dVar9)) + local_c8;
    if (local_c8 <= dVar7) {
      local_c8 = dVar7;
    }
    if (local_c8 <= dVar4) {
      dVar4 = local_c8;
    }
    param_2[6] = dVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_128);
  }
  FUN_14087b246(param_1,param_2,&DAT_14c846330,0);
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14349379a FUN_14349379a body=407 status=ok
// SIG undefined FUN_14349379a(void)

void FUN_14349379a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x66c) == 0) {
LAB_143493873:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x668);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)(param_1 + 0x66c) ||
          ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_143493873;
      lVar4 = *plVar3;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_1434938a3;
    if (plVar3 == (longlong *)0x0) {
      if ((lVar4 == 0) || (lVar2 = FUN_144a7954a(lVar4), lVar2 == 0)) {
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[6] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
      }
      plVar3 = (longlong *)FUN_144a7954a(lVar4);
      (**(code **)(*plVar3 + 0x3d0))(plVar3,&local_60);
      goto LAB_143493834;
    }
LAB_143493894:
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) {
LAB_14349392a:
      FUN_1456cec3c(plVar3);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_1434938a3:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_143493894;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_143493820;
    goto LAB_14349392a;
  }
LAB_143493820:
  (**(code **)(*plVar3 + 0x3d0))(plVar3,&local_60);
LAB_143493834:
  param_2[6] = local_30;
  *(undefined4 *)(param_2 + 4) = local_40;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
  *(undefined4 *)(param_2 + 5) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_34;
  *(undefined4 *)(param_2 + 2) = local_50;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
  *(undefined4 *)(param_2 + 3) = uStack_48;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
  *(undefined4 *)param_2 = local_60;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_5c;
  *(undefined4 *)(param_2 + 1) = uStack_58;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143493938 FUN_143493938 body=854 status=ok
// SIG undefined FUN_143493938(void)

void FUN_143493938(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_118 [40];
  longlong local_f0;
  int local_e4;
  longlong local_e0;
  int local_d8;
  int *local_d0;
  undefined8 *local_c8;
  undefined1 local_bc [4];
  undefined8 local_b8 [12];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 0x748) = 0;
  if (*(int *)(param_1 + 0x74c) < 0) {
    FUN_14481578e(param_1 + 0x740,0);
  }
  lVar8 = param_1 + 0x750;
  if (*(int *)(param_1 + 0x758) != *(int *)(param_1 + 0x784)) {
    FUN_147a16058(lVar8);
    *(undefined4 *)(param_1 + 0x758) = 0;
    if (*(int *)(param_1 + 0x75c) < 0) {
      FUN_14074f60a(lVar8,0);
    }
    *(undefined8 *)(param_1 + 0x780) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x778) = 0;
  }
  if (*(longlong *)(param_1 + 0x658) == 0) {
    if ((DAT_14c950c29 & *(longlong *)(param_1 + 0x660) != 0) != 0) goto LAB_143493aa8;
    if (*(longlong *)(param_1 + 0x660) == 0) goto LAB_143493a05;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143493aa8:
    FUN_1456cec3c();
  }
  if (((((*(int *)(param_1 + 0x66c) != 0) && (uVar1 = *(uint *)(param_1 + 0x668), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x66c))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
      ((*plVar9 != 0 && (plVar9 = (longlong *)FUN_144a7954a(), plVar9 != (longlong *)0x0)))))) {
    plVar5 = (longlong *)FUN_144a7954a(param_1);
    lVar6 = (**(code **)(*plVar5 + 0x310))(plVar5);
    uVar7 = (**(code **)(*plVar9 + 0x310))(plVar9);
    uVar1 = *(uint *)(lVar6 + 0x28);
    iVar4 = *(int *)(param_1 + 0x748);
    *(uint *)(param_1 + 0x748) = iVar4 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x74c) - iVar4) < uVar1) {
      FUN_1446f48e2(param_1 + 0x740);
    }
    plVar5 = (longlong *)FUN_144a7954a(param_1);
    if (plVar5 == plVar9) {
      if (0 < *(int *)(param_1 + 0x748)) {
        lVar8 = 0;
        do {
          *(int *)(*(longlong *)(param_1 + 0x740) + lVar8 * 4) = (int)lVar8;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(param_1 + 0x748));
      }
    }
    else {
      if (0 < *(int *)(param_1 + 0x748)) {
        lVar11 = 0;
        lVar13 = 0;
        do {
          local_b8[0] = *(undefined8 *)(*(longlong *)(lVar6 + 0x20) + lVar11);
          uVar3 = FUN_144a750a0(uVar7,local_b8);
          *(undefined4 *)(*(longlong *)(param_1 + 0x740) + lVar13 * 4) = uVar3;
          lVar13 = lVar13 + 1;
          lVar11 = lVar11 + 0xc;
        } while (lVar13 < *(int *)(param_1 + 0x748));
      }
      plVar9 = (longlong *)FUN_144a7954a(param_1);
      (**(code **)(*plVar9 + 0x3d8))(plVar9,&local_e0);
      local_f0 = local_e0;
      if ((longlong)local_d8 != 0) {
        lVar11 = 0;
        do {
          lVar13 = *(longlong *)(local_f0 + lVar11) + 0x30;
          local_e4 = FUN_144a750a0(lVar6,lVar13);
          iVar4 = FUN_144a750a0(uVar7,lVar13);
          if (iVar4 == -1 && local_e4 != -1) {
            puVar10 = &DAT_14c846480;
            puVar12 = local_b8;
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            local_58 = 0xffffffff;
            cVar2 = FUN_147a0e686(param_1);
            if (cVar2 != '\0') {
              local_d0 = &local_e4;
              local_c8 = local_b8;
              FUN_147a161a2(lVar8,local_bc,&local_d0);
            }
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)local_d8 * 8 != lVar11);
        local_f0 = local_e0;
      }
      if (local_f0 != 0) {
        FUN_1400020a8(local_f0);
      }
    }
  }
LAB_143493a05:
  *(int *)(param_1 + 0x728) = *(int *)(param_1 + 0x728) + 1;
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143493c8f FUN_143493c8f body=69 status=ok
// SIG undefined FUN_143493c8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143493c8f(void)

{
  _DAT_14cad2b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143493cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2b60,1);
  return;
}



// FUNCTION 143493cd4 FUN_143493cd4 body=163 status=ok
// SIG undefined FUN_143493cd4(void)

undefined8 FUN_143493cd4(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x40);
  }
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_143493d3c;
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
LAB_143493d5d:
    bVar1 = DAT_14c950c29 & plVar3 != (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_143493d09;
LAB_143493d3c:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_143493d5d;
    }
    bVar1 = DAT_14c950c29 & 1;
  }
  if (bVar1 != 0) {
    FUN_1456cec3c(plVar3);
  }
LAB_143493d09:
                    /* WARNING: Could not recover jumptable at 0x000143493d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x388))(plVar3);
  return uVar2;
}



// FUNCTION 143493d78 FUN_143493d78 body=70 status=ok
// SIG undefined FUN_143493d78(void)

bool FUN_143493d78(uint *param_1)

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



// FUNCTION 143493dbe FUN_143493dbe body=50 status=ok
// SIG undefined FUN_143493dbe(void)

void FUN_143493dbe(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x840) = param_2;
  return;
}



// FUNCTION 143493df0 FUN_143493df0 body=535 status=ok
// SIG undefined FUN_143493df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_143493df0(longlong param_1,ulonglong *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  longlong *plVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_a8 [32];
  double local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = FUN_144909502(param_1,param_3);
  uVar12 = DAT_14c8463e8;
  if (iVar5 == -1) {
    param_2[2] = DAT_14c8463e0;
    param_2[3] = uVar12;
    uVar4 = DAT_14c8463d8._4_4_;
    uVar3 = (undefined4)DAT_14c8463d8;
    uVar2 = DAT_14c8463d0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8463d0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  if (param_4 != 1) {
    if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
      pdVar9 = &DAT_14c846480;
      pdVar10 = local_88;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar10 = *pdVar9;
        pdVar9 = pdVar9 + 1;
        pdVar10 = pdVar10 + 1;
      }
    }
    else {
      FUN_140084aae(param_1,local_88,iVar5,param_1 + 0x240);
    }
    goto LAB_143493f8a;
  }
  if (((((*(int *)(param_1 + 0x66c) == 0) || (uVar1 = *(uint *)(param_1 + 0x668), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x66c))))) ||
     (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar7 = *plVar11, lVar7 == 0)))) {
    lVar7 = *(longlong *)(param_1 + 0x6d0 + (longlong)*(int *)(param_1 + 0x718) * 0x10);
    lVar6 = (longlong)iVar5;
  }
  else {
    local_88[2] = DAT_14c846490;
    local_88[3] = DAT_14c846498;
    local_88[0] = DAT_14c846480;
    local_88[1] = DAT_14c846488;
    if (*(int *)(param_1 + 0x748) <= iVar5) goto LAB_143493f8a;
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x740) + (longlong)iVar5 * 4);
    lVar6 = (longlong)iVar5;
    if ((lVar6 == -1) ||
       (lVar8 = (longlong)*(int *)(lVar7 + 0x718) * 0x10, *(int *)(lVar7 + 0x6d8 + lVar8) <= iVar5))
    goto LAB_143493f8a;
    lVar7 = *(longlong *)(lVar7 + 0x6d0 + lVar8);
  }
  pdVar9 = (double *)(lVar7 + lVar6 * 0x60);
  local_88[0] = *pdVar9;
  local_88[1] = pdVar9[1];
  pdVar9 = (double *)(lVar7 + 0x10 + lVar6 * 0x60);
  local_88[2] = *pdVar9;
  local_88[3] = pdVar9[1];
LAB_143493f8a:
  dVar13 = local_88[2] * local_88[2] + local_88[0] * local_88[0];
  dVar16 = local_88[3] * local_88[3] + local_88[1] * local_88[1];
  auVar14._0_8_ = dVar13 + dVar16;
  auVar14._8_8_ = dVar13 + dVar16;
  uVar12 = -(ulonglong)(1e-08 <= auVar14._8_8_);
  auVar15 = sqrtpd(auVar14,auVar14);
  auVar15 = divpd(_DAT_149934d80,auVar15);
  auVar17._0_8_ = auVar15._0_8_ * local_88[2];
  auVar17._8_8_ = auVar15._8_8_ * local_88[3];
  *param_2 = (ulonglong)(local_88[0] * auVar15._0_8_) & -(ulonglong)(1e-08 <= auVar14._0_8_);
  param_2[1] = (ulonglong)(local_88[1] * auVar15._8_8_) & uVar12;
  auVar15._8_4_ = (int)uVar12;
  auVar15._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
  auVar15._12_4_ = (int)(uVar12 >> 0x20);
  auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar15);
  *(undefined1 (*) [16])(param_2 + 2) = auVar15;
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14349400e FUN_14349400e body=2263 status=ok
// SIG undefined FUN_14349400e(void)

void FUN_14349400e(longlong param_1,uint param_2,uint param_3,byte param_4,uint param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *_Src;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  byte local_b1;
  longlong local_b0;
  longlong local_a8;
  void *local_a0;
  undefined8 local_98;
  uint local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x658) == 0) {
    if ((DAT_14c950c29 & *(longlong *)(param_1 + 0x660) != 0) != 0) goto LAB_143494898;
    if (*(longlong *)(param_1 + 0x660) == 0) goto LAB_1434944e1;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143494898:
    FUN_1456cec3c();
  }
  FUN_1409b47b8(param_1);
  if (((int)param_5 < 0) || (*(int *)(param_1 + 0x870) <= (int)param_5)) goto LAB_1434944e1;
  plVar15 = *(longlong **)(param_1 + 0x658);
  local_b1 = param_4;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) goto LAB_1434942ea;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1434942ea:
    FUN_1456cec3c(plVar15);
  }
  local_b0 = (**(code **)(*plVar15 + 800))(plVar15,param_5);
  lVar10 = *(longlong *)(param_1 + 0x868);
  iVar7 = *(int *)(lVar10 + 8 + (ulonglong)param_5 * 0x28);
  plVar15 = *(longlong **)(param_1 + 0x658);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) goto LAB_143494310;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143494310:
    FUN_1456cec3c(plVar15);
  }
  plVar3 = (longlong *)(lVar10 + (ulonglong)param_5 * 0x28);
  lVar10 = (**(code **)(*plVar15 + 0x3b8))(plVar15);
  if (iVar7 != *(int *)(lVar10 + 8)) {
    plVar15 = *(longlong **)(param_1 + 0x658);
    if (plVar15 == (longlong *)0x0) {
      plVar15 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) goto LAB_143494336;
    }
    else if (DAT_14c950c29 == 1) {
LAB_143494336:
      FUN_1456cec3c(plVar15);
    }
    lVar10 = (**(code **)(*plVar15 + 0x3b8))(plVar15);
    iVar7 = *(int *)(lVar10 + 8);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    *(undefined4 *)(plVar3 + 1) = 0;
    if (*(int *)((longlong)plVar3 + 0xc) != iVar7) {
      FUN_14475e67c(plVar3);
    }
    plVar15 = *(longlong **)(param_1 + 0x658);
    if (plVar15 == (longlong *)0x0) {
      plVar15 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) goto LAB_14349435c;
    }
    else if (DAT_14c950c29 == 1) {
LAB_14349435c:
      FUN_1456cec3c(plVar15);
    }
    lVar10 = (**(code **)(*plVar15 + 0x3b8))(plVar15);
    uVar14 = *(uint *)(lVar10 + 8);
    iVar7 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar7 + uVar14;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar7) < uVar14) {
      FUN_1401c3474(plVar3);
    }
    memset((void *)((longlong)iVar7 + *plVar3),0,(longlong)(int)uVar14);
  }
  if ((((int)param_3 < 0) || (*(int *)(local_b0 + 0x10) <= (int)param_3)) ||
     (uVar14 = *(uint *)(*(longlong *)(local_b0 + 8) + (ulonglong)param_3 * 4), uVar14 == 0xffffffff
     )) {
    if (-1 < (int)param_2) {
      uVar6 = *(uint *)(plVar3 + 1);
      goto LAB_1434941e6;
    }
  }
  else {
    uVar6 = *(uint *)(plVar3 + 1);
    if ((int)uVar6 <= (int)uVar14) {
      uVar14 = uVar6;
    }
    param_2 = 0;
    if (0 < (int)uVar14) {
      param_2 = uVar14;
    }
LAB_1434941e6:
    if ((int)param_2 < (int)uVar6) {
      *(byte *)(*plVar3 + (ulonglong)param_2) = local_b1 ^ 1;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x8a8);
  if (lVar10 != 0) {
    local_a0 = (void *)0x0;
    uVar14 = *(uint *)(plVar3 + 1);
    _Src = (void *)*plVar3;
    local_98 = CONCAT44(local_98._4_4_,uVar14);
    local_a8 = lVar10;
    if ((longlong)(int)uVar14 == 0) {
      local_98 = (ulonglong)uVar14;
    }
    else {
      FUN_1447cd5fa(&local_a0,uVar14,0);
      memcpy(local_a0,_Src,(longlong)(int)uVar14);
    }
    local_90 = param_5;
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar10 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar7 != 2) {
        if (iVar7 != 1) goto LAB_14349427c;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143494285;
        goto LAB_143494395;
      }
LAB_143494285:
      *(undefined1 *)(local_a8 + 0x3a) = 1;
LAB_143494291:
      FUN_1447cd5a6((longlong)(int)local_90 * 0x18 + *(longlong *)(local_a8 + 8),&local_a0);
    }
    else {
LAB_14349427c:
      if (iVar7 == 0x10) goto LAB_143494285;
LAB_143494395:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (iVar7 = *(int *)(lVar10 + 0xc60), iVar7 != 2)) {
          if (iVar7 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1434948b7;
          }
          goto LAB_1434943c6;
        }
LAB_1434948b7:
        *(undefined1 *)(local_a8 + 0x3a) = 1;
        goto LAB_143494291;
      }
LAB_1434943c6:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1434945af;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14349623b);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_1434945af:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x19);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar6 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x19);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14349462f;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14349462f:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a879408;
        puVar17[0x15] = local_a8;
        puVar17[0x16] = local_a0;
        local_a0 = (void *)0x0;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_98._4_4_;
        local_98 = 0;
        *(uint *)(puVar17 + 0x18) = local_90;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
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
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar4 = 1;
          if ((char)uVar18 != '\x06') {
            uVar4 = uVar18;
          }
          uVar18 = uVar4;
          uVar13 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
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
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14a8793b0;
        local_78[1] = local_a8;
        local_78[2] = (longlong)local_a0;
        local_a0 = (void *)0x0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_98._4_4_;
        local_98 = 0;
        *(uint *)(local_78 + 4) = local_90;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_14349772c;
        }
        local_c8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateHiddenSectionCommand",&DAT_14cad2b98);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar15 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar15 = local_68;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar5 = *(byte *)(param_1 + 0x9d);
    if ((bVar5 & 1) != 0) {
      if ((*(longlong *)(param_1 + 0xb0) != 0) || (lVar10 = FUN_1448abda6(param_1), lVar10 != 0))
      goto LAB_1434944e1;
      bVar5 = *(byte *)(param_1 + 0x9d);
    }
    *(byte *)(param_1 + 0x9d) = bVar5 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_1434944e1:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434948e6 FUN_1434948e6 body=1647 status=ok
// SIG undefined FUN_1434948e6(void)

void FUN_1434948e6(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  longlong local_98;
  void *local_90;
  undefined8 local_88;
  uint local_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1409b47b8();
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x870) <= (int)param_2)) goto LAB_143494b68;
  if (*(int *)(*(longlong *)(param_1 + 0x868) + 8 + (ulonglong)param_2 * 0x28) < 1)
  goto LAB_143494b68;
  plVar14 = (longlong *)(*(longlong *)(param_1 + 0x868) + (ulonglong)param_2 * 0x28);
  lVar13 = 0;
  do {
    *(undefined1 *)(*plVar14 + lVar13) = 0;
    lVar13 = lVar13 + 1;
  } while (lVar13 < (int)plVar14[1]);
  lVar13 = *(longlong *)(param_1 + 0x8a8);
  if (lVar13 != 0) {
    local_90 = (void *)0x0;
    uVar12 = *(uint *)(plVar14 + 1);
    _Src = (void *)*plVar14;
    local_88 = CONCAT44(local_88._4_4_,uVar12);
    local_98 = lVar13;
    if ((longlong)(int)uVar12 == 0) {
      local_88 = (ulonglong)uVar12;
    }
    else {
      FUN_1447cd5fa(&local_90,uVar12,0);
      memcpy(local_90,_Src,(longlong)(int)uVar12);
    }
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar6 = *(int *)(lVar13 + 0xc60);
    local_80 = param_2;
    if (DAT_14c86a9fc == 0) {
      if (iVar6 != 2) {
        if (iVar6 != 1) goto LAB_1434949d4;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1434949d9;
        goto LAB_143494a1f;
      }
LAB_1434949d9:
      *(undefined1 *)(local_98 + 0x3a) = 1;
LAB_1434949e5:
      FUN_1447cd5a6((longlong)(int)local_80 * 0x18 + *(longlong *)(local_98 + 8),&local_90);
    }
    else {
LAB_1434949d4:
      if (iVar6 == 0x10) goto LAB_1434949d9;
LAB_143494a1f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (iVar6 = *(int *)(lVar13 + 0xc60), iVar6 != 2)) {
          if (iVar6 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            if (DVar7 == DVar8) goto LAB_143494f27;
          }
          goto LAB_143494a50;
        }
LAB_143494f27:
        *(undefined1 *)(local_98 + 0x3a) = 1;
        goto LAB_1434949e5;
      }
LAB_143494a50:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143494c31;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14349623b);
          }
          lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar13 + 0x310);
          *(undefined8 *)(lVar13 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143494c31:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x19);
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
            puVar15 = (uint *)(puVar16 + 0x19);
            uVar12 = 0;
            if (puVar15 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143494cb1;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143494cb1:
        *(uint **)(puVar10 + 0x10) = puVar15;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a879440;
        puVar16[0x15] = local_98;
        puVar16[0x16] = local_90;
        local_90 = (void *)0x0;
        *(undefined4 *)(puVar16 + 0x17) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = local_88._4_4_;
        local_88 = 0;
        *(uint *)(puVar16 + 0x18) = local_80;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
        lVar13 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar13 == 0) {
          uVar4 = 1;
          if ((char)uVar17 != '\x06') {
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar11 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar13 + 0x30);
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
        local_78[0] = (undefined1 *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x28,8);
        *local_68 = (longlong)&PTR_LAB_14a879420;
        local_68[1] = local_98;
        local_68[2] = (longlong)local_90;
        local_90 = (void *)0x0;
        *(undefined4 *)(local_68 + 3) = (undefined4)local_88;
        *(undefined4 *)((longlong)local_68 + 0x1c) = local_88._4_4_;
        local_88 = 0;
        *(uint *)(local_68 + 4) = local_80;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78[0] = &LAB_143497942;
        }
        local_a8 = local_78;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateHiddenSectionCommand",&DAT_14cad2b9c);
        if (local_78[0] != (undefined1 *)0x0) {
          plVar14 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar14 = local_58;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar5 = *(byte *)(param_1 + 0x9d);
    if ((bVar5 & 1) != 0) {
      if ((*(longlong *)(param_1 + 0xb0) != 0) || (lVar13 = FUN_1448abda6(param_1), lVar13 != 0))
      goto LAB_143494b68;
      bVar5 = *(byte *)(param_1 + 0x9d);
    }
    *(byte *)(param_1 + 0x9d) = bVar5 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_143494b68:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143494f56 FUN_143494f56 body=487 status=ok
// SIG undefined FUN_143494f56(void)

void FUN_143494f56(longlong *param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409b47b8();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xa90))(param_1);
  if ((((plVar3 == (longlong *)0x0) || ((int)param_2 < 0)) || ((int)param_1[0x10e] <= (int)param_2))
     || ((int)plVar3[1] <= (int)param_2)) goto LAB_143494fa7;
  lVar6 = param_1[0x10d] + (ulonglong)param_2 * 0x28;
  if (*(longlong *)(lVar6 + 0x10) != 0) {
    FUN_147a11a04(lVar6);
  }
  local_58 = 0;
  uStack_50 = 0;
  uVar1 = *(uint *)(*(longlong *)(*plVar3 + (ulonglong)param_2 * 8) + 0xec);
  plVar3 = param_3;
  if (*(uint *)(param_3 + 1) != uVar1) {
    uStack_50 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      plVar3 = &local_58;
    }
    else {
      plVar3 = &local_58;
      FUN_14602b1fc(plVar3);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        uVar7 = 0;
        do {
          puVar8 = (undefined4 *)(*param_3 + lVar4);
          if ((longlong)(int)param_3[1] <= (longlong)uVar7) {
            puVar8 = &DAT_149e1e2cc;
          }
          *(undefined4 *)(local_58 + uVar7 * 4) = *puVar8;
          uVar7 = uVar7 + 1;
          lVar4 = lVar4 + 4;
        } while (uVar1 != uVar7);
      }
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *(undefined4 *)(puVar5 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar5 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar5 + 0xe) = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_14aa61a50;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  *(undefined8 **)(lVar6 + 0x10) = puVar5;
  local_68 = 1;
  FUN_147cc774a(puVar5,*plVar3,(int)plVar3[1],4);
  FUN_140308182(*(undefined8 *)(lVar6 + 0x10),&DAT_14cb00c08);
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar2 & 1) != 0) {
      if ((param_1[0x16] != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) goto LAB_143495126;
      bVar2 = *(byte *)((longlong)param_1 + 0x9d);
    }
    *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_143495126:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_143494fa7:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14349513e FUN_14349513e body=1511 status=ok
// SIG undefined FUN_14349513e(void)

void FUN_14349513e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_158 [44];
  uint local_12c;
  ulonglong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  uint local_e0;
  int local_dc;
  uint *local_d8;
  int *piStack_d0;
  uint local_bc;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_120 = param_3;
  FUN_1409b47b8();
  plVar7 = (longlong *)(**(code **)(*param_1 + 0xa90))(param_1);
  if ((((plVar7 == (longlong *)0x0) || ((int)param_2 < 0)) || ((int)param_1[0x10e] <= (int)param_2))
     || ((int)plVar7[1] <= (int)param_2)) goto LAB_1434956bd;
  lVar12 = param_1[0x10d] + (ulonglong)param_2 * 0x28;
  if (*(longlong *)(lVar12 + 0x18) != 0) {
    FUN_147a11a48(lVar12);
  }
  lVar15 = *(longlong *)(*plVar7 + (ulonglong)param_2 * 8);
  if ((int)local_120[1] < *(int *)(lVar15 + 0xec)) goto LAB_1434956bd;
  uVar9 = *(uint *)(lVar15 + 0x15c);
  uVar2 = *(undefined1 *)(lVar15 + 0x160);
  lVar8 = FUN_14001cc68(0x88,0x10);
  FUN_14367981e(lVar8);
  *(longlong *)(lVar12 + 0x18) = lVar8;
  bVar5 = true;
  *(undefined1 *)(lVar8 + 0x20) = 1;
  *(undefined1 *)(lVar8 + 0x68) = 1;
  if (uVar9 < 5) {
    *(undefined4 *)(lVar8 + 0x24) = 4;
    uVar9 = 4;
  }
  else if (uVar9 < 9) {
    *(undefined4 *)(lVar8 + 0x24) = 8;
    uVar9 = 8;
    bVar5 = true;
  }
  else {
    *(undefined4 *)(lVar8 + 0x24) = 0xc;
    uVar9 = 0xc;
    bVar5 = false;
  }
  bVar17 = DAT_14cae0e28 != 0;
  bVar16 = DAT_14c76155c < uVar9;
  *(bool *)(lVar8 + 0x21) = bVar16 && bVar17;
  if ((!bVar16 || !bVar17) && !bVar5) {
    *(undefined4 *)(lVar8 + 0x24) = 8;
  }
  *(undefined1 *)(*(longlong *)(lVar12 + 0x18) + 0x28) = uVar2;
  plVar7 = (longlong *)param_1[0xcb];
  local_118 = lVar12;
  local_110 = param_1;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_143495719;
  }
  else if (DAT_14c950c29 == 1) {
LAB_143495719:
    FUN_1456cec3c(plVar7);
  }
  (**(code **)(*plVar7 + 0x308))();
  local_f8 = 0;
  uStack_f0 = 0;
  if (0 < *(int *)(lVar15 + 0x18)) {
    lVar12 = 0;
    uVar10 = 0;
    local_108 = lVar15;
    do {
      lVar15 = *(longlong *)(lVar15 + 0x10);
      lVar8 = lVar12 * 0xf8;
      uVar9 = *(uint *)(lVar15 + 0x48 + lVar8);
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      local_dc = 0;
      local_128 = uVar10;
      local_100 = lVar12;
      if (0 < *(int *)(lVar15 + 0x40 + lVar8)) {
        do {
          local_e0 = (uint)*(ushort *)
                            (*(longlong *)(lVar15 + lVar8 + 0x38) + (longlong)local_dc * 2);
          local_d8 = &local_e0;
          piStack_d0 = &local_dc;
          FUN_14172ee82(&local_b8,&local_bc,&local_d8,0);
          local_dc = local_dc + 1;
        } while (local_dc < *(int *)(lVar15 + lVar8 + 0x40));
      }
      local_d8 = (uint *)0x0;
      piStack_d0 = (int *)0x0;
      iVar3 = (int)uStack_f0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + uVar9);
      if ((uint)(uStack_f0._4_4_ - iVar3) < uVar9) {
        FUN_147a16750(&local_f8);
      }
      local_12c = (int)local_128 + uVar9;
      if (0 < (int)uVar9) {
        lVar12 = (longlong)(int)local_128;
        local_128 = (ulonglong)(int)local_12c;
        lVar15 = lVar12 * 0x30 + 0x1a;
        do {
          puVar14 = (undefined2 *)(lVar12 * 0x30 + local_f8);
          if (lVar12 < (int)local_120[1]) {
            lVar13 = lVar12 * 0x3c + *local_120;
            lVar8 = 0;
            do {
              puVar14[lVar8] = 0;
              puVar14[lVar8 + 0xc] = 0;
              uVar2 = *(undefined1 *)(lVar13 + 0x30 + lVar8);
              sVar4 = CONCAT11(uVar2,uVar2);
              if (sVar4 != 0) {
                local_bc = *(uint *)(lVar13 + lVar8 * 4);
                if ((int)uStack_b0 != local_84) {
                  puVar11 = local_78;
                  if (local_78 == (undefined1 *)0x0) {
                    puVar11 = local_80;
                  }
                  iVar3 = *(int *)(puVar11 + (ulonglong)(local_70 - 1U & local_bc) * 4);
                  while (iVar3 != -1) {
                    lVar1 = local_b8 + (longlong)iVar3 * 0x10;
                    if (*(uint *)(local_b8 + (longlong)iVar3 * 0x10) == local_bc) {
                      if ((undefined2 *)(lVar1 + 4) != (undefined2 *)0x0 && lVar1 != 0) {
                        puVar14[lVar8] = *(undefined2 *)(lVar1 + 4);
                        puVar14[lVar8 + 0xc] = sVar4;
                        goto LAB_1434954cc;
                      }
                      break;
                    }
                    iVar3 = *(int *)(lVar1 + 8);
                  }
                }
                FUN_1449e3bb0(&local_d8,&local_bc);
              }
LAB_1434954cc:
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0xc);
          }
          else {
            *puVar14 = 0;
            puVar14[0xc] = 0xffff;
            lVar8 = -0x16;
            do {
              *(undefined2 *)(local_f8 + lVar15 + -2 + lVar8) = 0;
              *(undefined2 *)(local_f8 + lVar15 + 0x16 + lVar8) = 0;
              lVar8 = lVar8 + 2;
            } while (lVar8 != 0);
          }
          lVar12 = lVar12 + 1;
          lVar15 = lVar15 + 0x30;
        } while (lVar12 < (longlong)local_128);
      }
      if (local_d8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      local_70 = 0;
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = local_108;
      uVar10 = uStack_b0 >> 0x20;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      if ((int)uVar10 != 0) {
        FUN_14472eb64(&local_b8,0);
      }
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        FUN_1446efbd8(local_a8,0);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar12 = local_100 + 1;
      uVar10 = (ulonglong)local_12c;
    } while (lVar12 < *(int *)(lVar15 + 0x18));
  }
  lVar12 = local_118;
  FUN_147cced1a(*(undefined8 *)(local_118 + 0x18),&local_f8);
  lVar12 = *(longlong *)(lVar12 + 0x18);
  FUN_140308182(lVar12 + 0x48,&DAT_14cb00c08);
  FUN_140308182(lVar12,&DAT_14cb00c08);
  plVar7 = local_110;
  if ((~*(byte *)((longlong)local_110 + 0x9c) & 3) == 0) {
    bVar6 = *(byte *)((longlong)local_110 + 0x9d);
    if ((bVar6 & 1) != 0) {
      if ((local_110[0x16] != 0) || (lVar12 = FUN_1448abda6(local_110), lVar12 != 0))
      goto LAB_1434956ae;
      bVar6 = *(byte *)((longlong)plVar7 + 0x9d);
    }
    *(byte *)((longlong)plVar7 + 0x9d) = bVar6 | 1;
    FUN_1401057d4(plVar7);
    FUN_14010586c(&DAT_14cad0140,plVar7);
  }
LAB_1434956ae:
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
LAB_1434956bd:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143495726 FUN_143495726 body=143 status=ok
// SIG undefined FUN_143495726(void)

void FUN_143495726(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x870))) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x868) + 0x18 + (ulonglong)param_2 * 0x28) != 0) {
      FUN_147a11a48(*(longlong *)(param_1 + 0x868) + (ulonglong)param_2 * 0x28);
      if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
        bVar1 = *(byte *)(param_1 + 0x9d);
        if ((bVar1 & 1) == 0) {
LAB_143495791:
          *(byte *)(param_1 + 0x9d) = bVar1 | 1;
          FUN_1401057d4(param_1);
          FUN_14010586c(&DAT_14cad0140,param_1);
          return;
        }
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar2 = FUN_1448abda6(param_1);
          if (lVar2 == 0) {
            bVar1 = *(byte *)(param_1 + 0x9d);
            goto LAB_143495791;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143495802 FUN_143495802 body=606 status=ok
// SIG undefined FUN_143495802(void)

byte FUN_143495802(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  byte bVar10;
  double dVar11;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (DAT_14c761440 < 0) {
    cVar4 = '\0';
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*param_1 + 0xc20))(param_1);
    if (DAT_14c761440 < 0) {
      cVar4 = '\0';
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0xc28))(param_1);
      cVar4 = (char)uVar5;
      uVar9 = (ulonglong)CONCAT31((int3)((uint)uVar5 >> 8),cVar4 + '\x01');
    }
  }
  cVar3 = FUN_14490dacc(param_1,uVar9 & 0xffffffff);
  iVar6 = DAT_14c761440;
  if (((cVar3 == '\0') || (DAT_14c761950 != 1)) || (DAT_14cafb288 == 1)) {
    bVar10 = 0;
    if (DAT_14c761440 != -1) goto LAB_1434958bc;
  }
  else {
    switch(DAT_14c761440) {
    case 0:
      bVar10 = 1;
      break;
    default:
      bVar10 = 0;
      break;
    case 2:
      bVar10 = *(byte *)(param_1 + 0x154) ^ 1;
      iVar6 = 2;
      break;
    case -1:
      goto switchD_1434958a3_caseD_ffffffff;
    }
LAB_1434958bc:
    bVar8 = 0;
    if ((~bVar2 & -1 < iVar6) != 0) goto LAB_143495a23;
    pfVar7 = (float *)&DAT_14c761444;
    if (cVar4 != '\0') {
      pfVar7 = (float *)&DAT_14c761448;
    }
    fVar1 = *pfVar7;
    cVar4 = (**(code **)(*param_1 + 0xc18))(param_1);
    if (cVar4 != '\0') {
      bVar8 = bVar10;
    }
    if ((bVar10 & 1) == 0) {
      bVar8 = bVar10;
    }
    bVar2 = bVar8;
    if ((bVar8 & 1) == 0) {
      QueryPerformanceCounter(&local_48);
    }
    else {
      if (param_1[0x157] == 0) {
        QueryPerformanceCounter(&local_48);
        param_1[0x156] = (longlong)((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0);
        uVar9 = DAT_14c872be0;
        param_1[0x157] = DAT_14c872be0;
        param_1[0x158] = uVar9;
        param_1[0x159] = 1;
        dVar11 = 0.0;
      }
      else {
        QueryPerformanceCounter(&local_48);
        dVar11 = ((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0) - (double)param_1[0x156];
        if ((ulonglong)param_1[0x158] < DAT_14c872be0) {
          param_1[0x158] = DAT_14c872be0;
          *(int *)(param_1 + 0x159) = (int)param_1[0x159] + 1;
        }
      }
      *(int *)((longlong)param_1 + 0xacc) = *(int *)((longlong)param_1 + 0xacc) + 1;
      if (0.0 < fVar1) {
        bVar2 = 0;
        if (DAT_14c761440 < 1) {
          bVar2 = bVar8;
        }
        if (dVar11 <= (double)fVar1) {
          bVar2 = bVar8;
        }
      }
    }
    bVar8 = 1;
    if ((bVar2 & 1) != 0) goto LAB_143495a23;
    param_1[0x156] = -0x4010000000000000;
    param_1[0x157] = 0;
    param_1[0x158] = 0;
    param_1[0x159] = 0;
  }
switchD_1434958a3_caseD_ffffffff:
  bVar8 = 0;
LAB_143495a23:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143495a64 FUN_143495a64 body=48 status=ok
// SIG undefined FUN_143495a64(void)

longlong FUN_143495a64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143495a9c FUN_143495a9c body=48 status=ok
// SIG undefined FUN_143495a9c(void)

longlong FUN_143495a9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_1403c5b3e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143495acc FUN_143495acc body=1619 status=ok
// SIG undefined FUN_143495acc(void)

void FUN_143495acc(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong *puVar13;
  void *_Src;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  uint local_170;
  uint local_168;
  ulonglong *local_160;
  undefined1 local_158;
  int local_14c;
  int local_148;
  int local_144;
  longlong *local_140;
  longlong local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  size_t local_118;
  longlong local_110 [3];
  undefined8 uStack_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 local_da;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_145c221da(&local_a8,L"ReflectionTextureCube",*(undefined4 *)(param_1 + 0x48),
                *(undefined1 *)(param_1 + 0x50));
  local_d8 = *(undefined1 *)(param_1 + 0x4c);
  local_d6 = local_76;
  local_110[1] = 8;
  local_d5 = local_75;
  local_d4 = local_74;
  local_e4 = local_84;
  local_dc = local_7c;
  local_da = local_7a;
  local_d7 = local_77;
  local_110[2] = uStack_a0;
  uStack_f8 = uStack_98;
  local_f0 = local_90;
  local_e8 = local_88;
  local_d3 = local_73;
  local_ec = local_8c;
  local_c0 = local_60;
  uStack_bc = uStack_5c;
  uStack_b8 = uStack_58;
  uStack_b4 = uStack_54;
  local_b0 = local_50;
  if (local_70 == 0) {
    puVar13 = &local_a8;
    local_70 = 0x70;
    lVar3 = *DAT_14ca83900;
  }
  else {
    lVar3 = *DAT_14ca83900;
    puVar13 = (ulonglong *)(local_110 + 1);
  }
  local_a8 = 8;
  local_78 = local_d8;
  (**(code **)(lVar3 + 0x1a0))(DAT_14ca83900,local_110,&DAT_14ca85100,puVar13);
  lVar3 = local_110[0];
  plVar7 = (longlong *)(param_1 + 0x58);
  if (plVar7 != local_110) {
    lVar4 = *plVar7;
    *plVar7 = local_110[0];
    local_110[0] = 0;
    if (lVar4 == 0) goto LAB_143495db7;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar10 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar8 = *(byte *)(lVar4 + 0xd);
        plVar2 = (longlong *)FUN_14001cc68(0x10,8);
        plVar2[1] = lVar4;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar8 & 2) == 0) {
          do {
            *plVar2 = (longlong)plVar6;
            LOCK();
            bVar16 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar2;
            if (bVar16) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar2 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar2;
            if (bVar16) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  lVar3 = local_110[0];
  if (local_110[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_110[0] + 8);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_110[0] + 8);
      LOCK();
      uVar10 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar8 = *(byte *)(local_110[0] + 0xd);
        plVar2 = (longlong *)FUN_14001cc68(0x10,8);
        plVar2[1] = lVar3;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar8 & 2) == 0) {
          do {
            *plVar2 = (longlong)plVar6;
            LOCK();
            bVar16 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar2;
            if (bVar16) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar2 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar2;
            if (bVar16) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  lVar3 = *plVar7;
LAB_143495db7:
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar10 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar8 = *(byte *)(lVar4 + 0xd);
          plVar2 = (longlong *)FUN_14001cc68(0x10,8);
          plVar2[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar8 & 2) == 0) {
            do {
              *plVar2 = (longlong)plVar6;
              LOCK();
              bVar16 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar2;
              if (bVar16) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar2 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar2;
              if (bVar16) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    local_140 = (longlong *)(param_1 + 0x60);
    iVar14 = *(int *)(param_1 + 0x4c);
    if (0 < iVar14) {
      local_14c = *(int *)((longlong)&DAT_14c873428 +
                          (ulonglong)((uint)*(byte *)(param_1 + 0x50) * 0x30));
      uVar9 = 0;
      uVar10 = 0;
      local_138 = param_1;
      do {
        local_144 = ~uVar10 + iVar14;
        bVar8 = (byte)local_144;
        local_148 = 1 << (bVar8 & 0x1f);
        uVar15 = local_14c << (bVar8 & 0x1f);
        uVar12 = (local_148 << (bVar8 & 0x1f)) * local_14c;
        local_130 = (ulonglong)uVar12;
        local_118 = (size_t)(int)uVar12;
        if (local_148 < 2) {
          local_148 = 1;
        }
        local_120 = (longlong)(int)uVar9;
        uVar11 = 0;
        local_128 = uVar9;
        do {
          local_a8 = local_a8 & 0xffffffff00000000;
          local_160 = &local_a8;
          local_178 = 0;
          local_158 = 0;
          local_168 = 1;
          local_170 = uVar10;
          _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x470))
                                   (DAT_14ca83900,&DAT_14ca85100,*plVar7,uVar11 & 0xffffffff);
          _Src = (void *)(uVar11 * local_118 + *local_140 + local_120);
          if (uVar15 == (uint)local_a8) {
            memcpy(_Dst,_Src,local_118);
          }
          else {
            iVar14 = local_148;
            if (local_144 != 0x1f) {
              do {
                memcpy(_Dst,_Src,(ulonglong)uVar15);
                _Src = (void *)((longlong)_Src + (ulonglong)uVar15);
                _Dst = (void *)((longlong)_Dst + (local_a8 & 0xffffffff));
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
          }
          local_168 = local_168 & 0xffffff00;
          local_178 = 0;
          local_170 = uVar10;
          (**(code **)(*DAT_14ca83900 + 0x478))(DAT_14ca83900,&DAT_14ca85100,*plVar7);
          uVar11 = uVar11 + 1;
        } while (uVar11 != 6);
        uVar9 = (ulonglong)(uint)((int)local_128 + (int)local_130 * 6);
        uVar10 = uVar10 + 1;
        iVar14 = *(int *)(local_138 + 0x4c);
        param_1 = local_138;
      } while ((int)uVar10 < iVar14);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_144893a1c(local_140,0);
    }
  }
  local_a8 = 0x1010102;
  uStack_a0 = 0x7f7fffff00000000;
  uStack_98 = 0;
  local_90 = local_90 & 0xffffff00;
  lVar4 = FUN_1405d51a2();
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x18) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar10 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar8 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar8 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar16 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar16) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar16 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar16) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143496120 FUN_143496120 body=147 status=ok
// SIG undefined FUN_143496120(void)

void FUN_143496120(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
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
  FUN_14047a8f2(param_1);
  return;
}



// FUNCTION 1434961de FUN_1434961de body=41 status=ok
// SIG undefined FUN_1434961de(void)

void FUN_1434961de(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14476820c(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 143496212 FUN_143496212 body=12 status=ok
// SIG undefined FUN_143496212(void)

void FUN_143496212(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014349621b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14349621e FUN_14349621e body=29 status=ok
// SIG undefined FUN_14349621e(void)

undefined8 FUN_14349621e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143496262 FUN_143496262 body=282 status=ok
// SIG undefined FUN_143496262(void)

undefined8 * FUN_143496262(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14349623b);
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



// FUNCTION 14349637c FUN_14349637c body=94 status=ok
// SIG undefined FUN_14349637c(void)

ulonglong FUN_14349637c(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_14476820c(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434963cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1434963fc FUN_1434963fc body=12 status=ok
// SIG undefined FUN_1434963fc(void)

void FUN_1434963fc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143496405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143496408 FUN_143496408 body=29 status=ok
// SIG undefined FUN_143496408(void)

undefined8 FUN_143496408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143496426 FUN_143496426 body=282 status=ok
// SIG undefined FUN_143496426(void)

undefined8 * FUN_143496426(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14349623b);
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



// FUNCTION 143496540 FUN_143496540 body=85 status=ok
// SIG undefined FUN_143496540(void)

ulonglong FUN_143496540(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014349658b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143496596 FUN_143496596 body=29 status=ok
// SIG undefined FUN_143496596(void)

undefined8 FUN_143496596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434965c8 FUN_1434965c8 body=85 status=ok
// SIG undefined FUN_1434965c8(void)

void FUN_1434965c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a879090;
  return;
}



// FUNCTION 14349661e FUN_14349661e body=85 status=ok
// SIG undefined FUN_14349661e(void)

void FUN_14349661e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a879090;
  return;
}



// FUNCTION 143496674 FUN_143496674 body=118 status=ok
// SIG undefined FUN_143496674(void)

void FUN_143496674(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a879090;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434966db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434966ea FUN_1434966ea body=81 status=ok
// SIG undefined FUN_1434966ea(void)

void FUN_1434966ea(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349673c FUN_14349673c body=83 status=ok
// SIG undefined FUN_14349673c(void)

undefined8 FUN_14349673c(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143496790 FUN_143496790 body=29 status=ok
// SIG undefined FUN_143496790(void)

undefined8 FUN_143496790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434967c2 FUN_1434967c2 body=85 status=ok
// SIG undefined FUN_1434967c2(void)

void FUN_1434967c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a879100;
  return;
}



// FUNCTION 143496818 FUN_143496818 body=85 status=ok
// SIG undefined FUN_143496818(void)

void FUN_143496818(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a879100;
  return;
}



// FUNCTION 14349686e FUN_14349686e body=118 status=ok
// SIG undefined FUN_14349686e(void)

void FUN_14349686e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a879100;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434968d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434968e4 FUN_1434968e4 body=81 status=ok
// SIG undefined FUN_1434968e4(void)

void FUN_1434968e4(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143496936 FUN_143496936 body=83 status=ok
// SIG undefined FUN_143496936(void)

undefined8 FUN_143496936(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143496a2a FUN_143496a2a body=193 status=ok
// SIG undefined FUN_143496a2a(void)

ulonglong FUN_143496a2a(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      uVar2 = CONCAT71((uint7)(uint3)(*(uint *)(plVar4 + 1) >> 8),1);
      if (param_2[1] == 0) {
        return uVar2;
      }
      uVar1 = *param_2;
      if ((int)uVar1 < 0) {
        return uVar2;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return uVar2;
      }
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (plVar6 == (longlong *)0x0) {
        return uVar2;
      }
      if (*(uint *)(plVar6 + 2) != param_2[1]) {
        return uVar2;
      }
      if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
        return uVar2;
      }
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar6;
      }
      else {
        lVar5 = 0;
      }
      return (ulonglong)
             CONCAT31((int3)((uint)*(int *)(lVar3 + 0x2f8) >> 8),
                      *(int *)(lVar5 + 0x2f8) < *(int *)(lVar3 + 0x2f8));
    }
  }
  return 0;
}



// FUNCTION 143496b04 FUN_143496b04 body=12 status=ok
// SIG undefined FUN_143496b04(void)

void FUN_143496b04(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143496b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143496b10 FUN_143496b10 body=29 status=ok
// SIG undefined FUN_143496b10(void)

undefined8 FUN_143496b10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143496b2e FUN_143496b2e body=282 status=ok
// SIG undefined FUN_143496b2e(void)

undefined8 * FUN_143496b2e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14349623b);
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



// FUNCTION 143496c48 FUN_143496c48 body=80 status=ok
// SIG undefined FUN_143496c48(void)

ulonglong FUN_143496c48(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143496c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143496c98 FUN_143496c98 body=514 status=ok
// SIG undefined FUN_143496c98(void)

void FUN_143496c98(uint *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lVar15;
  
  if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((puVar12 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          puVar12 != (undefined8 *)0x0 && (*(uint *)(puVar12 + 2) == param_1[1])))) &&
     ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
      plVar11 = (longlong *)*puVar12;
    }
    else {
      plVar11 = (longlong *)0x0;
    }
    if ((*(byte *)((longlong)plVar11 + 0x9c) & 1) != 0) {
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)param_1[3]);
      uVar2 = param_1[2];
      if (((*(byte *)((longlong)plVar11 + 0x1fa) & 8) != 0) &&
         (*(code **)(*plVar11 + 0x500) != FUN_144a8c35e)) {
        (**(code **)(*plVar11 + 0x500))(plVar11,uVar2,uVar10 & 0xffffffff);
      }
      iVar6 = *(int *)((longlong)plVar11 + 0x214);
      *(int *)((longlong)plVar11 + 0x214) = iVar6 + 1;
      uVar7 = (ulonglong)(int)plVar11[0x41];
      if ((longlong)uVar7 < 1) {
        *(int *)((longlong)plVar11 + 0x214) = iVar6;
      }
      else {
        plVar1 = plVar11 + 0x40;
        bVar14 = false;
        do {
          lVar15 = uVar7 * 0x10 + -8;
          uVar13 = uVar7;
          while (((*(int *)(*plVar1 + lVar15) != 0 &&
                  (plVar3 = *(longlong **)(*plVar1 + -8 + lVar15), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,plVar11,uVar2,uVar10 & 0xffffffff),
                 cVar5 != '\0'))) {
            lVar15 = lVar15 + -0x10;
            bVar4 = uVar13 < 2;
            uVar13 = uVar13 - 1;
            if (bVar4) {
              iVar6 = *(int *)((longlong)plVar11 + 0x214) + -1;
              *(int *)((longlong)plVar11 + 0x214) = iVar6;
              if (!bVar14) {
                return;
              }
              goto LAB_143496ddd;
            }
          }
          uVar7 = uVar13 - 1;
          bVar14 = true;
        } while (1 < uVar13);
        iVar6 = *(int *)((longlong)plVar11 + 0x214) + -1;
        *(int *)((longlong)plVar11 + 0x214) = iVar6;
LAB_143496ddd:
        if (iVar6 < 1) {
          iVar6 = (int)plVar11[0x41];
          iVar8 = iVar6;
          if (0 < iVar6) {
            iVar9 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar1,iVar9);
                FUN_14005b248(plVar1);
              }
              else {
                iVar9 = iVar9 + 1;
              }
              iVar8 = (int)plVar11[0x41];
            } while (iVar9 < iVar8);
          }
          iVar9 = 2;
          if (2 < iVar8 * 2) {
            iVar9 = iVar8 * 2;
          }
          *(int *)(plVar11 + 0x42) = iVar9;
          if ((iVar9 < iVar6) && (*(int *)((longlong)plVar11 + 0x20c) != iVar8)) {
            FUN_14045812c(plVar1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143496ec4 FUN_143496ec4 body=29 status=ok
// SIG undefined FUN_143496ec4(void)

undefined8 FUN_143496ec4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143496ee2 FUN_143496ee2 body=62 status=ok
// SIG undefined FUN_143496ee2(void)

void FUN_143496ee2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_2;
  (**(code **)(*plVar1 + 0x330))(plVar1);
  uVar2 = FUN_14477b072(plVar1,DAT_14cacb518);
                    /* WARNING: Could not recover jumptable at 0x000143496f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
  return;
}



// FUNCTION 143496f20 FUN_143496f20 body=282 status=ok
// SIG undefined FUN_143496f20(void)

undefined8 * FUN_143496f20(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14349623b);
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



// FUNCTION 14349703a FUN_14349703a body=157 status=ok
// SIG undefined FUN_14349703a(void)

void FUN_14349703a(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  uint local_18;
  uint local_14;
  ulonglong local_10;
  
  uVar2 = MXCSR;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      local_14 = MXCSR;
      MXCSR = MXCSR | 0x8000;
      local_18 = MXCSR;
      FUN_140506a30();
      local_14 = uVar2;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    MXCSR = uVar2;
    return;
  }
  MXCSR = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434970d8 FUN_1434970d8 body=282 status=ok
// SIG undefined FUN_1434970d8(void)

undefined8 * FUN_1434970d8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14349623b);
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



// FUNCTION 1434971f2 FUN_1434971f2 body=430 status=ok
// SIG undefined FUN_1434971f2(void)

void FUN_1434971f2(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
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
  uint local_24;
  code *local_20;
  ulonglong local_18;
  
  uVar2 = MXCSR;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar3 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar3 == (longlong *)0x0 || (*(uint *)(plVar3 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 ||
      (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)))) goto LAB_1434972bc;
  local_20 = (code *)CONCAT44(local_20._4_4_,MXCSR);
  MXCSR = MXCSR | 0x8000;
  local_24 = MXCSR;
  if (plVar3[0xcb] == 0) {
    if ((DAT_14c950c29 == '\x01') && (plVar3[0xcc] != 0)) goto LAB_143497397;
    if (plVar3[0xcc] != 0) goto LAB_143497291;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
LAB_143497397:
      FUN_1456cec3c();
    }
LAB_143497291:
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464003b0;
      local_48 = &LAB_147d17bdf;
      local_50 = &LAB_1417edf22;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
  }
  if (plVar3[0x1ec] != 0) {
    (**(code **)(*plVar3 + 0xcd0))(plVar3,1);
  }
  local_20 = (code *)CONCAT44(local_20._4_4_,uVar2);
LAB_1434972bc:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
    MXCSR = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  MXCSR = uVar2;
  return;
}



// FUNCTION 1434973a2 FUN_1434973a2 body=29 status=ok
// SIG undefined FUN_1434973a2(void)

undefined8 FUN_1434973a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434973d4 FUN_1434973d4 body=85 status=ok
// SIG undefined FUN_1434973d4(void)

void FUN_1434973d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a879290;
  return;
}



// FUNCTION 14349742a FUN_14349742a body=85 status=ok
// SIG undefined FUN_14349742a(void)

void FUN_14349742a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a879290;
  return;
}



// FUNCTION 143497480 FUN_143497480 body=118 status=ok
// SIG undefined FUN_143497480(void)

void FUN_143497480(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a879290;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434974e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434974f6 FUN_1434974f6 body=81 status=ok
// SIG undefined FUN_1434974f6(void)

void FUN_1434974f6(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143497548 FUN_143497548 body=83 status=ok
// SIG undefined FUN_143497548(void)

undefined8 FUN_143497548(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349759c FUN_14349759c body=29 status=ok
// SIG undefined FUN_14349759c(void)

undefined8 FUN_14349759c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434975ce FUN_1434975ce body=93 status=ok
// SIG undefined FUN_1434975ce(void)

void FUN_1434975ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a879340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


