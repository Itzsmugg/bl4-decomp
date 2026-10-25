// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441683a2 FUN_1441683a2 body=1616 status=ok
// SIG undefined FUN_1441683a2(void)

bool FUN_1441683a2(longlong param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined7 uStack_a7;
  int local_a0;
  longlong *local_98;
  undefined4 local_80 [2];
  char local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    local_a8 = '\0';
    local_80[0] = 0;
    FUN_1456bb102(&local_a8,param_2);
    local_78[0] = '\0';
    local_50[0] = 0;
    FUN_14031eb60(param_1 + 0x18,&local_a8);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x40) + -1,1);
    }
    *(undefined4 *)(param_1 + 0x40) = local_80[0];
    local_80[0] = 0;
    FUN_14031eb60(param_1 + 0x48,local_78);
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x70) + -1,1);
    }
    *(undefined4 *)(param_1 + 0x70) = local_50[0];
    local_50[0] = 0;
    FUN_1448173f8(local_50);
    if (local_78[0] != '\0') {
      if (local_78[0] == '\x01') {
        local_70 = 0;
      }
      else if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      local_78[0] = '\0';
    }
    FUN_1448173f8(local_80);
    if ((local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
    *(bool *)(param_1 + 0x78) = *(char *)(param_2 + 0x178) == '\x03';
    if ((DAT_14cbcb628 == DAT_14cbcb654) && (local_b8 = FUN_148bd035d(), local_b8 != 0)) {
      uVar17 = 1;
      do {
        FUN_1401cfb1c(local_b8,&local_a8,uVar17);
        iVar18 = local_a0 + -1;
        if (local_a0 == 0) {
          iVar18 = 0;
        }
        FUN_1446f82e2(&local_b0,iVar18,CONCAT71(uStack_a7,local_a8),1);
        uVar4 = local_b0;
        iVar20 = DAT_14cbcb650;
        iVar18 = DAT_14cbcb628;
        if (DAT_14cbcb654 == 0) {
          iVar20 = DAT_14cbcb628 + 1;
          bVar21 = DAT_14cbcb62c == DAT_14cbcb628;
          DAT_14cbcb628 = iVar20;
          if (bVar21) {
            FUN_140171ad2(&DAT_14cbcb620,iVar18);
          }
          iVar20 = DAT_14cbcb648;
          if (DAT_14cbcb648 == 0) {
            iVar5 = -1;
          }
          else {
            iVar5 = DAT_14cbcb648 + 0x1e;
            if (-1 < DAT_14cbcb648 + -1) {
              iVar5 = DAT_14cbcb648 + -1;
            }
            iVar5 = iVar5 >> 5;
          }
          iVar8 = DAT_14cbcb648 + 1;
          iVar16 = DAT_14cbcb648 + 0x1f;
          if (-1 < DAT_14cbcb648) {
            iVar16 = DAT_14cbcb648;
          }
          if (iVar16 >> 5 != iVar5) {
            if (DAT_14cbcb64c <= DAT_14cbcb648) {
              if (DAT_14cbcb648 + 0x20U < 0xa0) {
                DAT_14cbcb64c = 0x80;
              }
              else {
                uVar12 = DAT_14cbcb648 + 0x20U >> 5;
                local_c0 = (ulonglong)uVar12;
                if (DAT_14cbcb64c + 0x1fU < 0xa0) {
                  uVar13 = 4;
                  if (4 < uVar12) {
                    uVar13 = uVar12;
                  }
                }
                else {
                  uVar13 = uVar12 + (uVar12 * 3 >> 3) + 0x10;
                }
                uVar10 = (ulonglong)(uVar13 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar12 = (uint)(uVar10 + 0xf);
                    if (uVar13 < 0x1ffd) {
                      uVar10 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
                    }
                    else {
                      uVar11 = (ulonglong)(uVar12 & 0xfffffff0);
                      if (uVar11 < 0x7ff1) {
                        bVar7 = (&DAT_14c841e00)[uVar12 >> 4];
                        uVar15 = 0x32;
                        if (0x32 < bVar7) {
                          uVar15 = (ulonglong)bVar7;
                        }
                        uVar19 = 0x32 - (ulonglong)bVar7;
                        do {
                          uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0)
                          goto LAB_144168872;
                          lVar6 = uVar15 + 1 + uVar19;
                          uVar19 = uVar19 - 1;
                        } while (lVar6 != 0x33);
                      }
                      uVar10 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar10 = 0x10;
                      }
                      uVar10 = -uVar10 & (uVar11 + uVar10) - 1;
                    }
                  }
                  else {
                    uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
                  }
                }
LAB_144168872:
                iVar5 = (int)(uVar10 >> 2);
                DAT_14cbcb64c = iVar5 << 5;
                if (iVar5 < (int)local_c0) {
                  DAT_14cbcb64c = -0x20;
                }
              }
              FUN_1446efbd8(&DAT_14cbcb630,DAT_14cbcb648);
              iVar8 = DAT_14cbcb648 + 1;
            }
            iVar5 = iVar8 + 0x1f;
            if (-1 < iVar8) {
              iVar5 = iVar8;
            }
            if (iVar8 % 0x20 != 0) {
              puVar14 = DAT_14cbcb640;
              if (DAT_14cbcb640 == (undefined4 *)0x0) {
                puVar14 = &DAT_14cbcb630;
              }
              bVar7 = -(char)(iVar8 % 0x20);
              DAT_14cbcb648 = iVar8;
              puVar14[iVar5 >> 5] = (uint)(puVar14[iVar5 >> 5] << (bVar7 & 0x1f)) >> (bVar7 & 0x1f);
              iVar8 = DAT_14cbcb648;
            }
          }
          DAT_14cbcb648 = iVar8;
          lVar6 = (longlong)iVar18;
          puVar14 = DAT_14cbcb640;
          if (DAT_14cbcb640 == (undefined4 *)0x0) {
            puVar14 = &DAT_14cbcb630;
          }
          bVar7 = (byte)iVar20 & 0x1f;
          puVar14[iVar16 >> 5] = puVar14[iVar16 >> 5] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          iVar20 = iVar18;
        }
        else {
          lVar6 = (longlong)DAT_14cbcb650;
          DAT_14cbcb650 = *(int *)(DAT_14cbcb620 + 4 + lVar6 * 0x14);
          DAT_14cbcb654 = DAT_14cbcb654 + -1;
          if (DAT_14cbcb654 != 0) {
            *(undefined4 *)(DAT_14cbcb620 + (longlong)DAT_14cbcb650 * 0x14) = 0xffffffff;
          }
        }
        puVar14 = DAT_14cbcb640;
        if (DAT_14cbcb640 == (undefined4 *)0x0) {
          puVar14 = &DAT_14cbcb630;
        }
        iVar18 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar18 = iVar20;
        }
        puVar14[iVar18 >> 5] = puVar14[iVar18 >> 5] | 1 << ((byte)iVar20 & 0x1f);
        pcVar2 = (char *)(DAT_14cbcb620 + lVar6 * 0x14);
        *pcVar2 = (char)uVar17;
        *(undefined8 *)(pcVar2 + 4) = uVar4;
        pcVar2[0xc] = -1;
        pcVar2[0xd] = -1;
        pcVar2[0xe] = -1;
        pcVar2[0xf] = -1;
        uVar12 = DAT_14cbcb628 - DAT_14cbcb654;
        if ((uVar12 != 0) && (uVar12 != 1)) {
          puVar9 = DAT_14cbcb660;
          if (DAT_14cbcb660 == (undefined *)0x0) {
            puVar9 = &DAT_14cbcb658;
          }
          iVar18 = *(int *)(puVar9 + (ulonglong)(DAT_14cbcb668 + 0xffU & uVar17) * 4);
          while (iVar18 != -1) {
            pcVar3 = (char *)(DAT_14cbcb620 + (longlong)iVar18 * 0x14);
            if (*pcVar3 == (char)uVar17) {
              uVar4 = *(undefined8 *)pcVar2;
              *(undefined4 *)(pcVar3 + 8) = *(undefined4 *)(pcVar2 + 8);
              *(undefined8 *)pcVar3 = uVar4;
              FUN_148d54c54(iVar20);
              goto LAB_14416872d;
            }
            iVar18 = *(int *)(pcVar3 + 0xc);
          }
        }
        if (uVar12 < 4) {
          iVar18 = 1;
        }
        else {
          uVar10 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
          lVar6 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar18 = 1 << ((byte)lVar6 & 0x1f);
        }
        if (((int)uVar12 < 1) || (iVar18 <= DAT_14cbcb668)) {
          uVar12 = DAT_14cbcb668 + 0xffU & uVar17;
          *(uint *)(pcVar2 + 0x10) = uVar12;
          puVar9 = DAT_14cbcb660;
          if (DAT_14cbcb660 == (undefined *)0x0) {
            puVar9 = &DAT_14cbcb658;
          }
          *(undefined4 *)(pcVar2 + 0xc) =
               *(undefined4 *)(puVar9 + (ulonglong)(DAT_14cbcb668 + 0xffU & uVar12) * 4);
          puVar9 = DAT_14cbcb660;
          if (DAT_14cbcb660 == (undefined *)0x0) {
            puVar9 = &DAT_14cbcb658;
          }
          *(int *)(puVar9 + (ulonglong)(DAT_14cbcb668 + 0xffU & uVar12) * 4) = iVar20;
        }
        else {
          DAT_14cbcb668 = iVar18;
          FUN_1418e8d36();
        }
LAB_14416872d:
        if (CONCAT71(uStack_a7,local_a8) != 0) {
          FUN_1400020a8();
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x4c);
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441689f4 FUN_1441689f4 body=384 status=ok
// SIG undefined FUN_1441689f4(void)

undefined8 FUN_1441689f4(longlong *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  
  if (DAT_14cbcb648 == 0) {
    uVar9 = 1;
    uVar3 = 0;
    iVar6 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = &DAT_14cbcb630;
    if (DAT_14cbcb640 != (uint *)0x0) {
      puVar11 = DAT_14cbcb640;
    }
    uVar4 = *puVar11;
    if (uVar4 == 0) {
      iVar6 = DAT_14cbcb648 + 0x1e;
      if (-1 < DAT_14cbcb648 + -1) {
        iVar6 = DAT_14cbcb648 + -1;
      }
      uVar3 = 0;
      uVar9 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar9 = uVar3;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar3) {
          return 0;
        }
        iVar10 = iVar10 + 0x20;
        uVar4 = puVar11[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar3 = 0;
      iVar10 = 0;
    }
    uVar9 = (ulonglong)(-uVar4 & uVar4);
    uVar2 = uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (DAT_14cbcb648 <= iVar6) {
      iVar6 = DAT_14cbcb648;
    }
  }
  if (iVar6 != DAT_14cbcb648) {
    puVar11 = &DAT_14cbcb630;
    if (DAT_14cbcb640 != (uint *)0x0) {
      puVar11 = DAT_14cbcb640;
    }
    iVar12 = DAT_14cbcb648 + 0x1e;
    if (-1 < DAT_14cbcb648 + -1) {
      iVar12 = DAT_14cbcb648 + -1;
    }
    iVar12 = iVar12 >> 5;
    uVar4 = 0xffffffff;
    do {
      if (*(longlong *)(DAT_14cbcb620 + 4 + (longlong)iVar6 * 0x14) == *param_1) {
        puVar1 = (undefined1 *)(DAT_14cbcb620 + (longlong)iVar6 * 0x14);
        return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1);
      }
      uVar4 = uVar4 & ~(uint)uVar9;
      iVar6 = (int)uVar3;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar11[lVar13] & uVar4;
      if (uVar7 == 0) {
        iVar8 = iVar12;
        if (iVar12 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar12 <= iVar6) {
          return 0;
        }
        lVar5 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar7 = puVar11[lVar13 + lVar5 + 1];
          if (uVar7 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar8 - lVar13 == lVar5) {
            return 0;
          }
        }
        uVar3 = (ulonglong)(iVar6 + (int)lVar5 + 1);
        uVar4 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar9 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < DAT_14cbcb648);
  }
  return 0;
}



// FUNCTION 144168b74 FUN_144168b74 body=299 status=ok
// SIG undefined FUN_144168b74(void)

longlong * FUN_144168b74(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b9761a0;
  puVar2[3] = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = *param_3;
  return param_1;
}



// FUNCTION 144168ca0 FUN_144168ca0 body=461 status=ok
// SIG undefined FUN_144168ca0(void)

undefined8 FUN_144168ca0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14b976410;
  local_50[3] = 0;
  iVar4 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = *param_4;
  FUN_1403524de(param_1,param_2,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_144168dd9;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144168dd9:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144168e6e FUN_144168e6e body=461 status=ok
// SIG undefined FUN_144168e6e(void)

undefined8 FUN_144168e6e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14b9764a0;
  local_50[3] = 0;
  iVar4 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = *param_4;
  FUN_1403524de(param_1,param_2,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_144168fa7;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144168fa7:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14416903c FUN_14416903c body=880 status=ok
// SIG undefined FUN_14416903c(void)

void FUN_14416903c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) goto LAB_144169275;
  puVar8 = *(undefined **)(lVar2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
    FUN_1446f4b16();
    local_70 = FUN_1403a5f94;
    local_78 = &DAT_14c951c78;
    local_80 = 0;
    local_88 = 0x4018001;
    FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
    atexit(FUN_1428170e8);
    _Init_thread_footer(&DAT_14c952478);
  }
  if (DAT_14c952430 == 0) {
    bVar9 = puVar8 != (undefined *)0x0;
    if (puVar8 != &DAT_14c952428 && bVar9) {
      do {
        puVar8 = *(undefined **)(puVar8 + 0x30);
        bVar9 = puVar8 != (undefined *)0x0;
        if (puVar8 == &DAT_14c952428) break;
      } while (puVar8 != (undefined *)0x0);
    }
    if (!bVar9) goto LAB_144169161;
  }
  else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952430) == 0) {
LAB_144169161:
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != 0) {
      lVar6 = *(longlong *)(lVar2 + 8);
      lVar4 = FUN_140be4ae0();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar9 = lVar6 != 0;
        if (lVar6 != lVar4 && bVar9) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar9 = lVar6 != 0;
            if (lVar6 == lVar4) break;
          } while (lVar6 != 0);
        }
        if (!bVar9) goto LAB_144169275;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_144169275;
      lVar6 = *(longlong *)(lVar2 + 0x70);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xd5) & 0x40) != 0)) {
        lVar4 = *(longlong *)(param_2 + 0x10);
        if (DAT_14c950d78 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1468b50ee;
          local_60 = FUN_1427f23a3;
          local_68 = L"Engine";
          local_70 = (code *)0x0;
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0x10004001);
          local_80 = CONCAT44(local_80._4_4_,8);
          local_88 = CONCAT44(local_88._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
        }
        if ((lVar4 != 0) && (DAT_14c950d78 != lVar6)) {
          do {
            if (0 < (longlong)*(int *)(lVar4 + 0x1e0)) {
              lVar7 = 0;
              do {
                lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x1d8) + lVar7);
                if (((lVar3 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                    lVar6 + 0x30)) {
                  uVar5 = FUN_144718840(param_2,*(undefined8 *)(lVar2 + 0x70));
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c(param_2);
                  }
                  lVar6 = *(longlong *)(param_1 + 0x20);
                  iVar1 = *(int *)(lVar2 + 0x44);
                  if ((DAT_14c950c29 & 1) != 0) {
                    FUN_1456cec3c(param_2);
                  }
                  *(longlong *)(lVar6 + iVar1) = param_2;
                  *(undefined8 *)(lVar6 + 8 + (longlong)iVar1) = uVar5;
                  goto LAB_144169275;
                }
                lVar7 = lVar7 + 0x10;
              } while ((longlong)*(int *)(lVar4 + 0x1e0) * 0x10 != lVar7);
            }
            lVar4 = *(longlong *)(lVar4 + 0x40);
          } while (lVar4 != 0);
        }
      }
    }
    goto LAB_144169275;
  }
  lVar6 = *(longlong *)(lVar2 + 0x70);
  if (lVar6 != 0) {
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
       ((param_2 != 0 || ((*(byte *)(lVar2 + 0x39) & 0x10) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_144169275:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441693d2 FUN_1441693d2 body=85 status=ok
// SIG undefined FUN_1441693d2(void)

void FUN_1441693d2(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) == 0) {
    lVar1 = FUN_1402566a4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145df3dda(param_2,param_1 + 0x30);
      return;
    }
  }
  return;
}



// FUNCTION 144169428 FUN_144169428 body=489 status=ok
// SIG undefined FUN_144169428(void)

void FUN_144169428(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + -0x8c0;
  FUN_140eeb8c0(lVar1);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  if (*(char *)(param_1 + -0x748) == '\x03') {
    if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_1441694a9;
    FUN_140bac450(param_2,&local_50);
    if (local_50 != *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30)) goto LAB_1441694a9;
    FUN_145ac6756(lVar1,1);
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (((lVar6 != 0) &&
        (lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x3a40) + 0x10))(lVar6 + 0x3a40), lVar6 != 0))
       && ((longlong)*(int *)(param_1 + 0x68) != 0)) {
      lVar7 = *(longlong *)(param_1 + 0x60);
      lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x90;
      do {
        FUN_1442233a6(lVar7,lVar6);
        lVar7 = lVar7 + 0x90;
        lVar8 = lVar8 + -0x90;
      } while (lVar8 != 0);
    }
    FUN_1457b8372(lVar1);
    FUN_148d4affa(lVar1,param_1 + 0x28,param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14615c894(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar1 + lVar6);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(param_1 + 0x80));
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar2 * 8 != lVar6);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + -0x3c8);
    if ((longlong)iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + -0x3d0);
      lVar6 = 0;
      do {
        lVar7 = *(longlong *)(lVar1 + lVar6);
        if (lVar7 != 0) {
          uVar5 = FUN_140e5bf68();
          cVar4 = FUN_1448093f4(lVar7,uVar5);
          if (cVar4 != '\0') {
            FUN_143d9ee00(*(undefined8 *)(lVar1 + lVar6),param_1 + -0x90);
          }
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar6);
    }
  }
  FUN_14615c82e(param_1,*(undefined8 *)(param_1 + 0x80),param_3,param_4);
  *(undefined4 *)(param_1 + 0x98) = param_3;
LAB_1441694a9:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144169656 FUN_144169656 body=2626 status=ok
// SIG undefined FUN_144169656(void)

ulonglong FUN_144169656(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_428 [32];
  ulonglong *local_408;
  uint local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined2 *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  code **local_3d0;
  undefined1 *local_3c8;
  code *local_3c0;
  longlong local_3b8;
  undefined4 local_3b0;
  int local_3ac;
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  undefined8 *local_370;
  ulonglong local_368;
  ulonglong local_360;
  int local_358;
  int local_354;
  code *local_350;
  undefined8 **local_348;
  undefined1 local_33c [4];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_30c;
  undefined4 local_304;
  longlong local_2f8;
  undefined4 local_2f0;
  longlong local_2e8 [2];
  longlong *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined2 local_228;
  undefined8 local_224;
  undefined8 uStack_21c;
  longlong local_210 [2];
  longlong local_200;
  int local_1f8;
  code *local_138 [2];
  longlong local_128;
  int local_120;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_358 = param_3;
  local_354 = param_2;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_3d0 = local_138;
      local_138[0] = FUN_141030f22;
      local_3c0 = FUN_14081d0ea;
      local_3c8 = &LAB_1459f2e4c;
      local_3d8 = &LAB_148c39de3;
      local_3e0 = &LAB_1457a9eb2;
      local_3e8 = &DAT_149e063b2;
      local_3f0 = 0;
      local_3f8 = 0x10000004;
      local_400 = 0x10;
      local_408 = (ulonglong *)CONCAT44(local_408._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
         DAT_14cbadd90 + 0x30)) &&
       ((param_3 != -1 && param_2 != -1) && (char)param_1[0x2f] == '\x03')) {
      plVar11 = (longlong *)0x0;
      local_360 = 0;
      local_408 = &local_368;
      local_368 = 0;
      cVar4 = FUN_14416a09a(param_1,param_2,param_3);
      if (cVar4 == '\0') goto LAB_1441697aa;
      plVar1 = param_1 + 0x136;
      uVar5 = (**(code **)(param_1[0x136] + 0x18))(plVar1,&DAT_14cbcb778);
      uVar3 = local_360;
      if (((local_360 <= uVar5) &&
          (uVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14cbcb784), uVar5 = local_368,
          local_368 <= uVar6)) && (lVar7 = param_1[0x7a], lVar7 != 0)) {
        if (DAT_14cba8288 == 0) {
          local_3d0 = local_138;
          local_138[0] = FUN_141864c34;
          local_3c0 = FUN_14081d0ea;
          local_3c8 = &LAB_1464cee30;
          local_3d8 = &LAB_148bfac22;
          local_3e0 = &LAB_140f21842;
          local_3e8 = &DAT_149e063b2;
          local_3f0 = 0;
          local_3f8 = 0x10000004;
          local_400 = 0x10;
          local_408 = (ulonglong *)CONCAT44(local_408._4_4_,0x9cd0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          local_3a8 = lVar7;
          lVar7 = FUN_14011c349();
          local_138[0] = *(code **)(lVar7 + 0x48);
          lVar7 = FUN_140254f32(param_1);
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar7 + 0xa0) + 0x120);
          if (lVar8 != 0) {
            lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x118);
            lVar12 = 0;
            do {
              if (*(int *)(lVar7 + 0x108 + lVar12) == param_2) {
                lVar8 = lVar7 + lVar12 + 0x10;
                if (lVar8 == 0) goto LAB_1441697a7;
                local_3a0 = lVar7;
                local_378 = lVar8;
                lVar7 = FUN_14011c349();
                local_138[0] = *(code **)(lVar7 + 0x48);
                lVar7 = FUN_140254f32(param_1);
                lVar8 = (longlong)*(int *)(*(longlong *)(lVar7 + 0xa0) + 0x120);
                if (lVar8 == 0) goto LAB_1441697a7;
                lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x118);
                lVar10 = 0;
                goto LAB_1441698b3;
              }
              lVar12 = lVar12 + 0x150;
              plVar11 = (longlong *)0x0;
            } while (lVar8 * 0x150 - lVar12 != 0);
            goto LAB_1441697aa;
          }
        }
      }
    }
  }
LAB_1441697a7:
  plVar11 = (longlong *)0x0;
  goto LAB_1441697aa;
  while( true ) {
    lVar10 = lVar10 + 0x150;
    plVar11 = (longlong *)0x0;
    if (lVar8 * 0x150 - lVar10 == 0) break;
LAB_1441698b3:
    if (*(int *)(lVar7 + 0x108 + lVar10) == param_3) {
      lVar8 = lVar7 + lVar10 + 0x10;
      if (lVar8 == 0) goto LAB_1441697a7;
      local_3b8 = lVar7;
      FUN_1406fd608(local_138);
      if (local_138[0] == (code *)0x0) goto LAB_144169954;
      if ((longlong)local_120 == 0) goto LAB_14416992e;
      lVar7 = 0;
      goto LAB_14416991e;
    }
  }
  goto LAB_1441697aa;
  while (lVar7 = lVar7 + 8, (longlong)local_120 * 8 != lVar7) {
LAB_14416991e:
    if (*(longlong *)(local_128 + lVar7) == 0) goto LAB_144169954;
  }
LAB_14416992e:
  lVar7 = FUN_140b47a16(local_138,&DAT_14cbcb7b0);
  if (((lVar7 == 0) || (*(char *)(lVar7 + 8) != '\0')) || (*(longlong *)(lVar7 + 0x28) != 1)) {
    FUN_1406fd608(local_210);
    if (local_210[0] == 0) {
LAB_144169a70:
      plVar11 = (longlong *)0x0;
    }
    else {
      if ((longlong)local_1f8 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(local_200 + lVar7) == 0) goto LAB_144169a70;
          lVar7 = lVar7 + 8;
        } while ((longlong)local_1f8 * 8 != lVar7);
      }
      lVar7 = *(longlong *)(local_3a0 + 0x100 + lVar12);
      plVar11 = (longlong *)0x0;
      if ((lVar7 != 0) && (lVar2 = *(longlong *)(local_3b8 + 0x100 + lVar10), lVar2 != 0)) {
        local_388 = lVar7;
        local_380 = lVar2;
        if (*(char *)(local_3a0 + 0x10d + lVar12) == -1) {
          local_390 = 0;
        }
        else {
          local_390 = (**(code **)(*(longlong *)(local_3a8 + 0x3be8) + 0x10))(local_3a8 + 0x3be8);
          if (local_390 == 0) goto LAB_144169a70;
        }
        if (*(char *)(local_3b8 + 0x10d + lVar10) == -1) {
          local_398 = 0;
        }
        else {
          local_398 = (**(code **)(*(longlong *)(local_3a8 + 0x3be8) + 0x10))(local_3a8 + 0x3be8);
          if (local_398 == 0) goto LAB_144169a70;
        }
        plVar11 = (longlong *)0x0;
        local_288 = 0;
        local_280 = 0x8000000000;
        uStack_278 = 0xffffffff;
        local_2e8[0] = 0;
        local_2e8[1] = 0;
        local_2d8 = (longlong *)0x0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_238 = 0;
        local_230 = 0xf;
        local_228 = 1;
        local_224 = 0;
        uStack_21c = 0;
        plVar9 = param_1;
        cVar4 = FUN_14416af0c(param_1,local_354,local_358);
        if ((cVar4 != '\0') && (local_2e8[0] != 0)) {
          if ((longlong)(int)uStack_2d0 != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)((longlong)local_2d8 + lVar7) == 0) {
                plVar11 = (longlong *)0x0;
                goto LAB_144169e85;
              }
              lVar7 = lVar7 + 8;
              plVar9 = local_2d8;
            } while ((longlong)(int)uStack_2d0 * 8 != lVar7);
          }
          local_3ac = (int)*(char *)(local_3b8 + 0x10d + lVar10);
          local_3b0 = (undefined4)CONCAT71((int7)((ulonglong)plVar9 >> 8),0xff);
          if (local_3ac != -1) {
            plVar11 = (longlong *)param_1[0x1e9];
            if ((plVar11 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
              if (plVar11 == (longlong *)0x0) goto LAB_144169bbc;
            }
            else {
              FUN_1456cec3c(plVar11);
            }
            plVar11 = plVar11 + 0x77d;
            if (plVar11 != (longlong *)0x0) {
              local_3b0 = (**(code **)(*plVar11 + 0x80))(plVar11,local_3ac);
            }
          }
LAB_144169bbc:
          cVar4 = *(char *)(local_3a0 + 0x10d + lVar12);
          if (cVar4 != -1) {
            if (local_390 != 0) {
              *(undefined4 *)(local_390 + 0xc) = 0xffffffff;
              cVar4 = *(char *)(local_3a0 + 0x10d + lVar12);
            }
            FUN_141069b66(local_388,&local_354,0xffffffff);
            (**(code **)(*(longlong *)(local_3a8 + 0x3be8) + 0x50))
                      (local_3a8 + 0x3be8,(int)cVar4,local_378,1);
          }
          cVar4 = *(char *)(local_3b8 + 0x10d + lVar10);
          if (cVar4 != -1) {
            if (local_398 != 0) {
              *(undefined4 *)(local_398 + 0xc) = 0xffffffff;
              cVar4 = *(char *)(local_3b8 + 0x10d + lVar10);
            }
            FUN_141069b66(local_380,&local_358,0xffffffff);
            (**(code **)(*(longlong *)(local_3a8 + 0x3be8) + 0x50))
                      (local_3a8 + 0x3be8,(int)cVar4,lVar8,1);
          }
          (**(code **)(param_1[0x136] + 0x30))(plVar1,&DAT_14cbcb778,uVar3 & 0xffffffff);
          (**(code **)(param_1[0x136] + 0x30))(plVar1,&DAT_14cbcb784,uVar5 & 0xffffffff);
          plVar1 = param_1 + 0x1c3;
          FUN_14119e7cc(local_388,&local_354,plVar1,0);
          FUN_14119e7cc(local_380,&local_358,plVar1,0);
          local_318 = 0;
          local_310 = 0;
          local_338 = 0;
          uStack_330 = 0;
          local_30c = 0xffffffff00000080;
          local_304 = 0;
          local_2f8 = 0;
          local_2f0 = 0;
          local_370 = (undefined8 *)FUN_14001cc68(0x48,0x10);
          local_370[3] = 0;
          local_370[4] = 0;
          local_370[1] = 0;
          local_370[2] = 0;
          local_370[5] = 0;
          local_370[6] = 0;
          *(undefined4 *)(local_370 + 4) = 0x3f800000;
          *(undefined1 *)((longlong)local_370 + 0x25) = 8;
          *(undefined2 *)((longlong)local_370 + 0x26) = 0xffff;
          local_370[7] = 0;
          local_370[8] = 0;
          local_348 = &local_370;
          *local_370 = DAT_14cbcb7b0;
          local_370[5] = 1;
          *(undefined1 *)((longlong)local_370 + 0x34) = 1;
          local_350 = (code *)&DAT_14cbcb7b0;
          FUN_1406fdf00(&local_338,local_33c,&local_350,0);
          FUN_1488cba92(local_2e8,&local_338,1);
          local_400 = local_400 & 0xffffff00;
          local_408 = (ulonglong *)CONCAT44(local_408._4_4_,1);
          FUN_1488c68b6(plVar1,local_2e8,local_3ac,local_3b0);
          lVar7 = (**(code **)(*param_1 + 0x5e0))(param_1);
          if (lVar7 != 0) {
            if (DAT_14cba8288 == 0) {
              local_350 = FUN_141864c34;
              local_3c0 = FUN_14081d0ea;
              local_3c8 = &LAB_1464cee30;
              local_3d8 = &LAB_148bfac22;
              local_3e0 = &LAB_140f21842;
              local_3e8 = &DAT_149e063b2;
              local_3f0 = 0;
              local_3f8 = 0x10000004;
              local_400 = 0x10;
              local_408 = (ulonglong *)CONCAT44(local_408._4_4_,0x9cd0);
              local_3d0 = &local_350;
              FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
            }
            if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
              FUN_1447f69b6(lVar7 + 0x5a20);
            }
          }
          local_2f0 = 0;
          if (local_2f8 != 0) {
            FUN_1400020a8();
          }
          FUN_140368c0e(&local_338);
          plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        }
LAB_144169e85:
        FUN_140368b56(local_2e8);
      }
    }
    FUN_140368b56(local_210);
  }
  else {
LAB_144169954:
    plVar11 = (longlong *)0x0;
  }
  FUN_140368b56(local_138);
LAB_1441697aa:
  if ((local_60 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar11 & 0xffffffff;
}



// FUNCTION 14416a09a FUN_14416a09a body=3697 status=ok
// SIG undefined FUN_14416a09a(void)

ulonglong FUN_14416a09a(longlong param_1,int param_2,int param_3,longlong *param_4,longlong *param_5
                       )

{
  ushort uVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int *piVar15;
  int iVar16;
  longlong *plVar17;
  float *pfVar18;
  float *pfVar19;
  longlong *plVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined2 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  code **local_230;
  undefined1 *local_228;
  code *local_220;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  int local_1f4;
  longlong local_1f0;
  longlong local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  float local_1b8;
  undefined4 uStack_1b4;
  ushort local_1a0;
  byte local_198;
  code *local_190 [2];
  longlong local_180;
  int local_178;
  float local_b8;
  undefined4 uStack_b4;
  int local_b0;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_230 = local_190;
      local_190[0] = FUN_141030f22;
      local_220 = FUN_14081d0ea;
      local_228 = &LAB_1459f2e4c;
      local_238 = &LAB_148c39de3;
      local_240 = &LAB_1457a9eb2;
      local_248 = &DAT_149e063b2;
      local_250 = 0;
      local_258 = 0x10000004;
      local_260 = 0x10;
      local_268 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar7 = FUN_14011c349();
      local_190[0] = *(code **)(lVar7 + 0x48);
      lVar7 = FUN_140254f32(param_1);
      lVar12 = (longlong)*(int *)(*(longlong *)(lVar7 + 0xa0) + 0x120);
      if (lVar12 != 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x118);
        piVar15 = (int *)(lVar7 + 0x108);
        lVar8 = 0;
        uVar13 = 0;
        do {
          if (*piVar15 == param_2) {
            lVar7 = lVar7 - lVar8;
            if (lVar7 == -0x10) goto LAB_14416a11c;
            lVar12 = FUN_14011c349();
            local_190[0] = *(code **)(lVar12 + 0x48);
            lVar12 = FUN_140254f32(param_1,local_190);
            lVar8 = (longlong)*(int *)(*(longlong *)(lVar12 + 0xa0) + 0x120);
            if (lVar8 == 0) goto LAB_14416a11c;
            lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xa0) + 0x118);
            piVar15 = (int *)(lVar12 + 0x108);
            lVar9 = 0;
            uVar13 = 0;
            goto LAB_14416a240;
          }
          lVar8 = lVar8 + -0x150;
          piVar15 = piVar15 + 0x54;
        } while (lVar12 * -0x150 - lVar8 != 0);
        goto LAB_14416a11f;
      }
    }
  }
LAB_14416a11c:
  uVar13 = 0;
  goto LAB_14416a11f;
  while( true ) {
    lVar9 = lVar9 + -0x150;
    piVar15 = piVar15 + 0x54;
    if (lVar8 * -0x150 - lVar9 == 0) break;
LAB_14416a240:
    if (*piVar15 == param_3) {
      lVar12 = lVar12 - lVar9;
      if ((lVar12 == -0x10) || (lVar8 = *(longlong *)(param_1 + 0x3d0), lVar8 == 0))
      goto LAB_14416a11c;
      if (DAT_14cba8288 == 0) {
        local_190[0] = FUN_141864c34;
        local_220 = FUN_14081d0ea;
        local_228 = &LAB_1464cee30;
        local_238 = &LAB_148bfac22;
        local_240 = &LAB_140f21842;
        local_248 = &DAT_149e063b2;
        local_250 = 0;
        local_258 = 0x10000004;
        local_260 = 0x10;
        local_268 = 0x9cd0;
        local_230 = local_190;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) ||
         (lVar7 = FUN_14087dee0(lVar7 + 0x18), lVar7 == 0)) goto LAB_14416a11c;
      FUN_1406fd608(local_190);
      if (local_190[0] == (code *)0x0) goto LAB_14416a4e6;
      if ((longlong)local_178 == 0) goto LAB_14416a316;
      lVar9 = 0;
      goto LAB_14416a302;
    }
  }
  goto LAB_14416a11f;
  while (lVar9 = lVar9 + 8, (longlong)local_178 * 8 != lVar9) {
LAB_14416a302:
    if (*(longlong *)(local_180 + lVar9) == 0) goto LAB_14416a4e6;
  }
LAB_14416a316:
  lVar9 = FUN_14087dee0(local_190);
  if (lVar9 == 0) {
LAB_14416a4e6:
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if (local_190[0] != (code *)0x0) {
      local_1f0 = lVar9;
      FUN_1400021e4(local_190[0] + 0x3c,&local_b8);
      uVar5 = local_b0 - 1;
      if (local_b0 == 0) {
        uVar5 = 0;
      }
      if (0 < (int)uVar5) {
        uVar13 = 0;
        do {
          uVar1 = *(ushort *)(CONCAT44(uStack_b4,local_b8) + uVar13 * 2);
          *(ushort *)(CONCAT44(uStack_b4,local_b8) + uVar13 * 2) =
               (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar13 = uVar13 + 1;
        } while (uVar5 != uVar13);
      }
      lVar9 = CONCAT44(uStack_b4,local_b8);
      if (local_b0 < 2) {
LAB_14416a4d4:
        uVar13 = 0;
      }
      else {
        local_1f4 = local_b0;
        local_210 = (longlong *)FUN_14011c349();
        lVar11 = local_210[0xca];
        if (lVar11 == 0) {
          uVar10 = FUN_140261af2();
          lVar11 = FUN_14477b664(uVar10);
          local_210[0xca] = lVar11;
        }
        plVar17 = local_210 + 0xc9;
        plVar14 = local_210;
        if (local_210[0xcb] == 0) {
          uVar13 = 0;
          if ((lVar11 != 0) && (uVar13 = 0, *plVar17 != 0)) {
            plVar14 = *(longlong **)(lVar11 + 0xb8);
            local_200 = local_210;
            if ((plVar14 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar3 == '\0')) {
              local_210[0xcb] = 0;
            }
            else {
              uVar10 = (**(code **)(*plVar14 + 0x110))(plVar14);
              lVar11 = FUN_144aff482(uVar10,plVar17);
              local_210[0xcb] = lVar11;
              plVar14 = local_200;
              if (lVar11 != 0) goto LAB_14416a40c;
            }
            goto LAB_14416a4d4;
          }
        }
        else {
LAB_14416a40c:
          plVar20 = local_210;
          lVar11 = local_210[0xcd];
          if (lVar11 == 0) {
            local_208 = plVar17;
            uVar10 = FUN_140261af2();
            lVar11 = FUN_14477b664(uVar10);
            plVar20[0xcd] = lVar11;
            plVar17 = local_208;
          }
          plVar14 = plVar14 + 0xcc;
          if (plVar20[0xce] == 0) {
            uVar13 = 0;
            if ((lVar11 != 0) && (*plVar14 != 0)) {
              plVar20 = *(longlong **)(lVar11 + 0xb8);
              local_200 = plVar14;
              if ((plVar20 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar3 == '\0')) {
                local_210[0xce] = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar20 + 0x110))(plVar20);
                plVar14 = local_200;
                lVar11 = FUN_144aff482(uVar10,local_200);
                local_210[0xce] = lVar11;
                plVar20 = local_210;
                if (lVar11 != 0) goto LAB_14416a572;
              }
              goto LAB_14416a4d4;
            }
          }
          else {
LAB_14416a572:
            local_1c4 = 0xffffffff;
            local_1bc = 0;
            local_208 = plVar17;
            local_200 = plVar14;
            local_1e8 = lVar7;
            FUN_1470e1166(&local_1c4,&DAT_149e3cc88);
            lVar7 = plVar20[0xca];
            if (lVar7 == 0) {
              uVar10 = FUN_140261af2();
              lVar7 = FUN_14477b664(uVar10);
              plVar20[0xca] = lVar7;
            }
            lVar11 = plVar20[0xcb];
            if (((lVar11 == 0) && (lVar11 = 0, lVar7 != 0)) && (*local_208 != 0)) {
              plVar17 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar17 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar3 == '\0')) {
                lVar11 = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar17 + 0x110))(plVar17);
                lVar11 = FUN_144aff482(uVar10,local_208);
              }
              local_210[0xcb] = lVar11;
            }
            local_1d0 = 0xffffffff;
            uStack_1cc = 0;
            local_1c8 = 0;
            FUN_1470e1166(&local_1d0,"DefaultMultiplier");
            pfVar18 = &local_1b8;
            FUN_14092c00a(lVar11,pfVar18,&local_1d0,&local_1c4);
            if (local_198 == 3) {
              fVar22 = local_1b8;
              bVar4 = 3;
            }
            else {
              pfVar19 = &local_b8;
              FUN_1400b56fe(pfVar19,&local_1b8,3);
              fVar22 = local_b8;
              if (local_98 == 0) {
                fVar22 = 1.0;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_a0) {
                  pfVar19 = (float *)CONCAT44(uStack_b4,local_b8);
                }
                (*pcVar2)(pfVar19);
              }
              bVar4 = local_198;
              if (0x18 < local_a0) {
                FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
                bVar4 = local_198;
              }
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_1a0) {
                pfVar18 = (float *)CONCAT44(uStack_1b4,local_1b8);
              }
              (*pcVar2)(pfVar18);
            }
            if (0x18 < local_1a0) {
              FUN_1400020a8(CONCAT44(uStack_1b4,local_1b8));
            }
            lVar7 = local_210[0xca];
            if (lVar7 == 0) {
              uVar10 = FUN_140261af2();
              lVar7 = FUN_14477b664(uVar10);
              local_210[0xca] = lVar7;
            }
            lVar11 = local_210[0xcb];
            if (((lVar11 == 0) && (lVar11 = 0, lVar7 != 0)) && (*local_208 != 0)) {
              plVar17 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar17 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar3 == '\0')) {
                lVar11 = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar17 + 0x110))(plVar17);
                lVar11 = FUN_144aff482(uVar10,local_208);
              }
              local_210[0xcb] = lVar11;
            }
            FUN_1446f82e2(&uStack_1cc,local_1f4 + -1,lVar9,1);
            local_1d0 = 0xffffffff;
            pfVar18 = &local_1b8;
            FUN_14092c00a(lVar11,pfVar18,&local_1d0,&local_1c4);
            if (local_198 == 3) {
              fVar23 = local_1b8;
              bVar4 = 3;
            }
            else {
              pfVar19 = &local_b8;
              FUN_1400b56fe(pfVar19,&local_1b8,3);
              fVar23 = 0.0;
              if (local_98 != 0) {
                fVar23 = local_b8;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_a0) {
                  pfVar19 = (float *)CONCAT44(uStack_b4,local_b8);
                }
                (*pcVar2)(pfVar19);
              }
              bVar4 = local_198;
              if (0x18 < local_a0) {
                FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
                bVar4 = local_198;
              }
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_1a0) {
                pfVar18 = (float *)CONCAT44(uStack_1b4,local_1b8);
              }
              (*pcVar2)(pfVar18);
            }
            if (0x18 < local_1a0) {
              FUN_1400020a8(CONCAT44(uStack_1b4,local_1b8));
            }
            lVar7 = FUN_140b47a16(lVar12 + 0x18,&DAT_14cb843e8);
            iVar16 = 0;
            if ((lVar7 != 0) && (iVar16 = 0, *(char *)(lVar7 + 8) == '\0')) {
              iVar16 = *(int *)(lVar7 + 0x28);
            }
            lVar7 = local_210[0xca];
            if (lVar7 == 0) {
              uVar10 = FUN_140261af2();
              lVar7 = FUN_14477b664(uVar10);
              local_210[0xca] = lVar7;
            }
            lVar12 = local_210[0xcb];
            if (((lVar12 == 0) && (lVar12 = 0, lVar7 != 0)) && (*local_208 != 0)) {
              plVar17 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar17 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar17 + 0x108))(), cVar3 == '\0')) {
                lVar12 = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar17 + 0x110))(plVar17);
                lVar12 = FUN_144aff482(uVar10,local_208);
              }
              local_210[0xcb] = lVar12;
            }
            local_1d0 = 0xffffffff;
            uStack_1cc = (undefined4)*(undefined8 *)(local_1f0 + 0x1c);
            local_1c8 = (undefined4)((ulonglong)*(undefined8 *)(local_1f0 + 0x1c) >> 0x20);
            pfVar18 = &local_1b8;
            FUN_14092c00a(lVar12,pfVar18,&local_1d0,&local_1c4);
            if (local_198 == 3) {
              uVar5 = 3;
              fVar24 = local_1b8;
            }
            else {
              pfVar19 = &local_b8;
              FUN_1400b56fe(pfVar19,&local_1b8,3);
              fVar24 = 0.0;
              if (local_98 != 0) {
                fVar24 = local_b8;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_a0) {
                  pfVar19 = (float *)CONCAT44(uStack_b4,local_b8);
                }
                (*pcVar2)(pfVar19);
              }
              if (0x18 < local_a0) {
                FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
              }
              uVar5 = (uint)local_198;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_1a0) {
                pfVar18 = (float *)CONCAT44(uStack_1b4,local_1b8);
              }
              (*pcVar2)(pfVar18);
            }
            if (0x18 < local_1a0) {
              FUN_1400020a8(CONCAT44(uStack_1b4,local_1b8));
            }
            iVar6 = (**(code **)(*(longlong *)(lVar8 + 0x10c0) + 0x28))(lVar8 + 0x10c0);
            *param_4 = (longlong)(fVar22 * (fVar23 + (float)iVar16) * (fVar24 + (float)iVar6));
            lVar7 = local_210[0xcd];
            if (lVar7 == 0) {
              uVar10 = FUN_140261af2();
              lVar7 = FUN_14477b664(uVar10);
              local_210[0xcd] = lVar7;
            }
            lVar12 = local_210[0xce];
            if (((lVar12 == 0) && (lVar12 = 0, lVar7 != 0)) && (*local_200 != 0)) {
              plVar17 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar17 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar17 + 0x108))(), cVar3 == '\0')) {
                lVar12 = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar17 + 0x110))(plVar17);
                lVar12 = FUN_144aff482(uVar10,local_200);
              }
              local_210[0xce] = lVar12;
            }
            local_1d0 = 0xffffffff;
            uStack_1cc = (undefined4)*(undefined8 *)(local_1f0 + 0x1c);
            local_1c8 = (undefined4)((ulonglong)*(undefined8 *)(local_1f0 + 0x1c) >> 0x20);
            local_1d8 = *(undefined8 *)(local_1e8 + 0x1c);
            local_1dc = 0xffffffff;
            pfVar19 = &local_1b8;
            FUN_14092c00a(lVar12,pfVar19);
            if (local_198 == 3) {
              uVar5 = 3;
              fVar22 = local_1b8;
            }
            else {
              pfVar21 = &local_b8;
              FUN_1400b56fe(pfVar21,&local_1b8,3);
              fVar22 = 0.0;
              if (local_98 != 0) {
                fVar22 = local_b8;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_a0) {
                  pfVar21 = (float *)CONCAT44(uStack_b4,local_b8);
                }
                (*pcVar2)(pfVar21);
              }
              if (0x18 < local_a0) {
                FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
              }
              uVar5 = (uint)local_198;
            }
            *param_5 = (longlong)fVar22;
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_1a0) {
                pfVar19 = (float *)CONCAT44(uStack_1b4,local_1b8);
              }
              (*pcVar2)(pfVar19);
            }
            if (0x18 < local_1a0) {
              FUN_1400020a8(CONCAT44(uStack_1b4,local_1b8));
            }
            uVar13 = CONCAT71((int7)((ulonglong)pfVar18 >> 8),1);
          }
        }
      }
      if (lVar9 != 0) {
        FUN_1400020a8(lVar9);
      }
    }
  }
  FUN_140368b56(local_190);
LAB_14416a11f:
  if ((local_90 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14416af0c FUN_14416af0c body=1439 status=ok
// SIG undefined FUN_14416af0c(void)

undefined8 FUN_14416af0c(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined2 *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  code **local_2f0;
  undefined1 *local_2e8;
  code *local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  longlong local_2c8 [2];
  longlong *local_2b8;
  int local_2b0;
  longlong local_1f0 [2];
  longlong local_1e0;
  int local_1d8;
  undefined1 local_1b0 [152];
  code *local_118 [2];
  longlong *local_108;
  int local_100;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (param_1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_2f0 = local_118;
      local_118[0] = FUN_141030f22;
      local_2e0 = FUN_14081d0ea;
      local_2e8 = &LAB_1459f2e4c;
      local_2f8 = &LAB_148c39de3;
      local_300 = &LAB_1457a9eb2;
      local_308 = &DAT_149e063b2;
      local_310 = 0;
      local_318 = 0x10000004;
      local_320 = 0x10;
      local_328 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (param_3 != -1 && param_2 != -1)) {
      lVar2 = FUN_14011c349();
      local_118[0] = *(code **)(lVar2 + 0x48);
      lVar2 = FUN_140254f32(param_1);
      lVar5 = (longlong)*(int *)(*(longlong *)(lVar2 + 0xa0) + 0x120);
      if (lVar5 == 0) {
        lVar2 = 0;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x118);
        lVar2 = 0;
        lVar8 = 0;
        do {
          if (*(int *)(lVar6 + 0x108 + lVar8) == param_2) {
            lVar2 = lVar6 + lVar8 + 0x10;
            break;
          }
          lVar8 = lVar8 + 0x150;
        } while (lVar5 * 0x150 - lVar8 != 0);
      }
      lVar5 = FUN_14011c349();
      local_118[0] = *(code **)(lVar5 + 0x48);
      lVar5 = FUN_140254f32(param_1);
      lVar6 = (longlong)*(int *)(*(longlong *)(lVar5 + 0xa0) + 0x120);
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + 0x118);
        piVar9 = (int *)(lVar5 + 0x108);
        lVar8 = 0;
        uVar10 = 0;
        do {
          if (*piVar9 == param_3) {
            uVar10 = 0;
            if ((lVar2 != 0) && (lVar5 - lVar8 != -0x10)) {
              FUN_1406fd608(local_118,lVar2 + 8);
              FUN_1406fd608(local_1f0);
              if (local_118[0] == (code *)0x0) goto LAB_14416b295;
              if ((longlong)local_100 == 0) goto LAB_14416b0f9;
              lVar2 = 0;
              goto LAB_14416b0e5;
            }
            break;
          }
          lVar8 = lVar8 + -0x150;
          piVar9 = piVar9 + 0x54;
        } while (lVar6 * -0x150 - lVar8 != 0);
        goto LAB_14416b054;
      }
    }
  }
  uVar10 = 0;
  goto LAB_14416b054;
  while (lVar2 = lVar2 + 8, (longlong)local_100 * 8 != lVar2) {
LAB_14416b0e5:
    if (*(longlong *)((longlong)local_108 + lVar2) == 0) goto LAB_14416b295;
  }
LAB_14416b0f9:
  if (local_1f0[0] != 0) {
    if ((longlong)local_1d8 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(local_1e0 + lVar2) == 0) goto LAB_14416b295;
        lVar2 = lVar2 + 8;
      } while ((longlong)local_1d8 * 8 != lVar2);
    }
    FUN_1406fd608(local_2c8,local_1f0);
    if ((longlong)local_100 != 0) {
      lVar2 = (longlong)local_100 << 3;
      plVar11 = local_108;
      do {
        lVar5 = *plVar11;
        if (lVar5 != 0) {
          uVar4 = DAT_14cbcb764;
          if ((DAT_14cbcb764 == DAT_14c948034) &&
             (uVar4 = DAT_14c948034, DAT_14cbcb760 != DAT_14c948030)) {
            FUN_14011791e(&local_2d0,DAT_14cbcb760,DAT_14cbcb764 >> 0x20);
            DAT_14cbcb764 = local_2d0;
            uVar4 = local_2d0;
          }
          if (*(ulonglong *)(lVar5 + 0x40) == uVar4) {
            if (plVar11 != (longlong *)0x0) {
              piVar9 = &DAT_14c9485f0;
              if (*(int **)(*plVar11 + 8) != (int *)0x0) {
                piVar9 = *(int **)(*plVar11 + 8);
              }
              puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
              piVar3 = (int *)&DAT_14c948618;
              if (((*piVar9 != 0) && (iVar1 = piVar9[1], iVar1 != 0)) && (*piVar9 != DAT_14c948000))
              {
                if ((iVar1 < 2) && (piVar9[9] < 1)) {
                  piVar9 = piVar9 + 2;
                }
                else {
                  piVar9 = *(int **)(piVar9 + 6);
                }
                if (iVar1 == 1) {
                  puVar7 = (ulonglong *)(piVar9 + 1);
                  piVar3 = piVar9;
                }
                else if (1 < iVar1) {
                  puVar7 = (ulonglong *)(piVar9 + 4);
                  piVar3 = piVar9 + 3;
                }
              }
              local_2d8 = *puVar7;
              if ((local_2d8 == DAT_14c948034) && (*piVar3 != DAT_14c948030)) {
                FUN_14011791e(&local_2d0,*piVar3,local_2d8 >> 0x20);
                local_2d8 = local_2d0;
              }
              if ((local_2d8 != 0) && (lVar2 = FUN_14005fc76(local_118[0],&local_2d8), lVar2 != 0))
              {
                if ((longlong)local_2b0 == 0) goto LAB_14416b2b3;
                lVar5 = (longlong)local_2b0 << 3;
                plVar11 = local_2b8;
                goto LAB_14416b356;
              }
            }
            break;
          }
        }
        plVar11 = plVar11 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
LAB_14416b267:
    uVar10 = 0;
    goto LAB_14416b269;
  }
LAB_14416b295:
  uVar10 = 0;
  goto LAB_14416b276;
LAB_14416b356:
  do {
    lVar6 = *plVar11;
    if (lVar6 != 0) {
      uVar4 = DAT_14cbcb764;
      if ((DAT_14cbcb764 == DAT_14c948034) &&
         (uVar4 = DAT_14c948034, DAT_14cbcb760 != DAT_14c948030)) {
        FUN_14011791e(&local_2d0,DAT_14cbcb760,DAT_14cbcb764 >> 0x20);
        DAT_14cbcb764 = local_2d0;
        uVar4 = local_2d0;
      }
      if (*(ulonglong *)(lVar6 + 0x40) == uVar4) {
        if (plVar11 != (longlong *)0x0) {
          FUN_1488cb9aa(local_2c8,*plVar11);
        }
        break;
      }
    }
    plVar11 = plVar11 + 1;
    lVar5 = lVar5 + -8;
  } while (lVar5 != 0);
LAB_14416b2b3:
  FUN_1488cb91a(local_2c8,lVar2,1);
  FUN_14087e154(local_1f0,1);
  uVar10 = 0;
  FUN_1488cba92(local_2c8,local_1b0,0);
  FUN_140cd1b28(local_2c8);
  if (local_2c8[0] != 0) {
    if ((longlong)local_2b0 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)((longlong)local_2b8 + lVar2) == 0) goto LAB_14416b267;
        lVar2 = lVar2 + 8;
      } while ((longlong)local_2b0 * 8 != lVar2);
    }
    FUN_1407b25f0(param_4,local_2c8);
    uVar10 = 1;
  }
LAB_14416b269:
  FUN_140368b56(local_2c8);
LAB_14416b276:
  FUN_140368b56(local_1f0);
  FUN_140368b56(local_118);
LAB_14416b054:
  if ((local_40 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14416b4ac FUN_14416b4ac body=74 status=ok
// SIG undefined FUN_14416b4ac(void)

void FUN_14416b4ac(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    local_10 = param_2;
    FUN_1447cd2ec(param_1 + 0x25f8,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14416b565 FUN_14416b565 body=672 status=ok
// SIG undefined FUN_14416b565(void)

longlong * FUN_14416b565(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
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
  longlong local_60;
  code *local_58;
  undefined1 local_50 [8];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)FUN_1401fe4bc(*param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14c948fa0 == 0) {
      local_58 = (code *)&DAT_1427db2a2;
      lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar3;
      FUN_1446f470e(local_50,L"ScriptStruct",1);
      local_88 = &LAB_1468915ce;
      local_90 = FUN_1427dc742;
      local_a0 = L"Engine";
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
      local_a8 = 0x10;
      local_b0 = 0x10000020;
      local_b8._0_4_ = 8;
      local_80 = &local_58;
      FUN_14574b4b2(lVar3);
      DAT_14c948fa0 = lVar3;
      if (DAT_14c927740 == 0) {
        local_80 = &local_48;
        local_48 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_146856450;
        local_90 = FUN_1427b121c;
        local_98 = L"Engine";
        local_a0 = (wchar_t *)0x0;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
        local_b0 = 8;
        local_b8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar1 = DAT_14c948fa0;
      lVar3 = DAT_14c927740;
      uVar5 = FUN_1449e2fb2();
      local_b8 = L"ScriptStruct";
      FUN_14574b446(uVar5,lVar1,lVar3,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
        DAT_14c948fa0 + 0x30)) {
      lVar3 = FUN_1418c5540();
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x38) <= (int)plVar2[7] &&
          (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)))) {
        plVar4 = (longlong *)
                 FUN_14001cc68((longlong)
                               (int)(-*(int *)((longlong)plVar2 + 0x5c) &
                                    ((int)plVar2[0xb] + *(int *)((longlong)plVar2 + 0x5c)) - 1U));
        (**(code **)(*plVar2 + 0x2e8))(plVar2,plVar4,1);
        local_68 = *param_1;
        local_60 = param_1[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2,&local_68);
        goto LAB_14416b5d1;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14416b5d1:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14416b806 FUN_14416b806 body=687 status=ok
// SIG undefined FUN_14416b806(void)

longlong * FUN_14416b806(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_70;
  longlong local_68;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar2 = (longlong *)FUN_1401fe4bc(*param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14c948fa0 == 0) {
      local_60 = (code *)&DAT_1427db2a2;
      lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar3;
      FUN_1446f470e(local_58,L"ScriptStruct",1);
      local_98 = &LAB_1468915ce;
      local_a0 = FUN_1427dc742;
      local_b0 = L"Engine";
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
      local_b8 = 0x10;
      local_c0 = 0x10000020;
      local_c8._0_4_ = 8;
      local_90 = &local_60;
      FUN_14574b4b2(lVar3);
      DAT_14c948fa0 = lVar3;
      if (DAT_14c927740 == 0) {
        local_90 = &local_50;
        local_50 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_146856450;
        local_a0 = FUN_1427b121c;
        local_a8 = L"Engine";
        local_b0 = (wchar_t *)0x0;
        local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
        local_c0 = 8;
        local_c8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar1 = DAT_14c948fa0;
      lVar3 = DAT_14c927740;
      uVar5 = FUN_1449e2fb2();
      local_c8 = L"ScriptStruct";
      FUN_14574b446(uVar5,lVar1,lVar3,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
        DAT_14c948fa0 + 0x30)) {
      lVar3 = FUN_1465bdb72();
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x38) <= (int)plVar2[7] &&
          (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)))) {
        plVar4 = (longlong *)
                 FUN_14001cc68((longlong)
                               (int)(-*(int *)((longlong)plVar2 + 0x5c) &
                                    ((int)plVar2[0xb] + *(int *)((longlong)plVar2 + 0x5c)) - 1U));
        (**(code **)(*plVar2 + 0x2e8))(plVar2,plVar4,1);
        *(undefined1 *)(plVar4 + 4) = param_3;
        local_70 = *param_1;
        local_68 = param_1[1];
        if (local_68 != 0) {
          LOCK();
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2,&local_70);
        goto LAB_14416b876;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14416b876:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14416bab6 FUN_14416bab6 body=208 status=ok
// SIG undefined FUN_14416bab6(void)

void FUN_14416bab6(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x1c))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
        ((lVar2 = *plVar7, lVar2 != 0 && (*(char *)(lVar2 + 0x178) == '\x03')))))) {
      uVar5 = FUN_14485cccc(param_2 + 0xb8);
      uVar3 = *(undefined8 *)(lVar2 + 0x168);
      iVar4 = FUN_148d4c26c(param_1,uVar5);
      if ((iVar4 == 2) && (*(longlong *)(param_1 + 0x38) != 0)) {
        lVar6 = FUN_14095dd8e(*(longlong *)(param_1 + 0x38) + 0x60);
        if (lVar6 != 0) {
          FUN_141090600(uVar5,uVar3,lVar6,*(undefined4 *)(param_1 + 0x50));
        }
      }
      FUN_148d55fc0(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 14416bb86 FUN_14416bb86 body=1957 status=ok
// SIG undefined FUN_14416bb86(void)

void FUN_14416bb86(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float *pfVar11;
  undefined8 ****ppppuVar12;
  float fVar13;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  undefined6 uStack_5e;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar7 = *(uint *)(param_1 + 0x18), (int)uVar7 < 0)) ||
       (DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x1c))))) ||
     (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar3 = *plVar10, lVar3 == 0))))
  goto LAB_14416bbf9;
  lVar8 = FUN_145b98922();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_14416bbf9;
  cVar2 = *(char *)(lVar3 + 0x178);
  if (cVar2 == '\x03') {
    if (*(int *)(lVar3 + 0x1d70) == 0x34002) {
      local_a0[0] = *(undefined8 ****)(lVar3 + 0x1d68);
      FUN_1446dcdd4(&local_78);
      if (DAT_14cb85168 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_144837462(DAT_14cb85168,&local_78);
      }
      *(undefined8 *)(param_1 + 0x50) = uVar9;
LAB_14416bce1:
      lVar8 = CONCAT62(uStack_5e,local_60);
    }
    else {
      if (*(int *)(lVar3 + 0x1d70) == 0x34001) {
        local_a0[0] = *(undefined8 ****)(lVar3 + 0x1d68);
        FUN_1446dcdd4(&local_78);
        if (DAT_14cb853e8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_144837462(DAT_14cb853e8,&local_78);
        }
        *(undefined8 *)(param_1 + 0x40) = uVar9;
        goto LAB_14416bce1;
      }
      local_a0[0] = *(undefined8 ****)(lVar3 + 0x1d68);
      FUN_1446dcdd4(&local_78);
      uVar9 = FUN_140a4bd48(&local_78);
      *(undefined8 *)(param_1 + 0x48) = uVar9;
      lVar8 = CONCAT62(uStack_5e,local_60);
    }
    if (lVar8 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*(longlong *)(lVar3 + 0x1878) + 0x20))(lVar3 + 0x1878,&local_b0);
  lVar8 = local_b0;
  if (local_b0 != 0) {
    uVar9 = FUN_14126e108();
    lVar4 = *(longlong *)(lVar8 + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar4,uVar9,4);
    }
    FUN_140d4c8ba(lVar8,local_a0,uVar9);
    if (local_80 == 3) {
      fVar13 = local_a0[0]._0_4_;
      bVar6 = 3;
    }
    else {
      pfVar11 = &local_78;
      FUN_1400b56fe(pfVar11,local_a0,3);
      fVar13 = 0.0;
      if (local_58 != 0) {
        fVar13 = local_78;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar11 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar5)(pfVar11);
      }
      bVar6 = local_80;
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
        bVar6 = local_80;
      }
    }
    *(float *)(param_1 + 0x78) = fVar13;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar12 = local_a0;
      if (0x18 < local_88) {
        ppppuVar12 = (undefined8 ****)local_a0[0];
      }
      (*pcVar5)(ppppuVar12);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(local_a0[0]);
    }
    lVar4 = local_b0;
    uVar9 = FUN_14126e108();
    lVar8 = *(longlong *)(lVar4 + 0x200);
    if (lVar8 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar8,uVar9,2);
    }
    FUN_140d4c8ba(lVar4,local_a0,uVar9);
    if (local_80 == 3) {
      fVar13 = local_a0[0]._0_4_;
      bVar6 = 3;
    }
    else {
      pfVar11 = &local_78;
      FUN_1400b56fe(pfVar11,local_a0,3);
      fVar13 = 0.0;
      if (local_58 != 0) {
        fVar13 = local_78;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar11 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar5)(pfVar11);
      }
      bVar6 = local_80;
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
        bVar6 = local_80;
      }
    }
    *(float *)(param_1 + 0x38) = fVar13;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar12 = local_a0;
      if (0x18 < local_88) {
        ppppuVar12 = (undefined8 ****)local_a0[0];
      }
      (*pcVar5)(ppppuVar12);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(local_a0[0]);
    }
    lVar8 = local_b0;
    if (cVar2 == '\x03') {
      uVar9 = FUN_14126e108();
      lVar4 = *(longlong *)(lVar8 + 0x200);
      if (lVar4 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1403f69f4(lVar4,uVar9,0);
      }
      FUN_140d4c8ba(lVar8,local_a0,uVar9);
      if (local_80 == 3) {
        fVar13 = local_a0[0]._0_4_;
        bVar6 = 3;
      }
      else {
        pfVar11 = &local_78;
        FUN_1400b56fe(pfVar11,local_a0,3);
        fVar13 = local_78;
        if (local_58 == 0) {
          fVar13 = 1.0;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_60) {
            pfVar11 = (float *)CONCAT44(uStack_74,local_78);
          }
          (*pcVar5)(pfVar11);
        }
        bVar6 = local_80;
        if (0x18 < local_60) {
          FUN_1400020a8(CONCAT44(uStack_74,local_78));
          bVar6 = local_80;
        }
      }
      *(float *)(lVar3 + 0x1d58) = fVar13 * *(float *)(lVar3 + 0x1d58);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar12 = local_a0;
        if (0x18 < local_88) {
          ppppuVar12 = (undefined8 ****)local_a0[0];
        }
        (*pcVar5)(ppppuVar12);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(local_a0[0]);
      }
      lVar4 = local_b0;
      uVar9 = FUN_14126e108();
      lVar8 = *(longlong *)(lVar4 + 0x200);
      if (lVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1403f69f4(lVar8,uVar9,1);
      }
      FUN_140d4c8ba(lVar4,local_a0,uVar9);
      if (local_80 == 3) {
        uVar7 = 3;
        fVar13 = local_a0[0]._0_4_;
      }
      else {
        pfVar11 = &local_78;
        FUN_1400b56fe(pfVar11,local_a0,3);
        fVar13 = local_78;
        if (local_58 == 0) {
          fVar13 = 1.0;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_60) {
            pfVar11 = (float *)CONCAT44(uStack_74,local_78);
          }
          (*pcVar5)(pfVar11);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(CONCAT44(uStack_74,local_78));
        }
        uVar7 = (uint)local_80;
      }
      *(int *)(lVar3 + 0x1d1c) = (int)((float)*(int *)(lVar3 + 0x1d1c) * fVar13);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar12 = local_a0;
        if (0x18 < local_88) {
          ppppuVar12 = (undefined8 ****)local_a0[0];
        }
        (*pcVar5)(ppppuVar12);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(local_a0[0]);
      }
      uVar9 = FUN_14126e108();
      if (*(longlong *)(local_b0 + 0x200) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1403f69f4(*(longlong *)(local_b0 + 0x200),uVar9,3);
      }
      FUN_140d4c8ba(local_b0,local_a0,uVar9);
      if (local_80 == 3) {
        uVar7 = 3;
        fVar13 = local_a0[0]._0_4_;
      }
      else {
        pfVar11 = &local_78;
        FUN_1400b56fe(pfVar11,local_a0,3);
        fVar13 = local_78;
        if (local_58 == 0) {
          fVar13 = 1.0;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_60) {
            pfVar11 = (float *)CONCAT44(uStack_74,local_78);
          }
          (*pcVar5)(pfVar11);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(CONCAT44(uStack_74,local_78));
        }
        uVar7 = (uint)local_80;
      }
      *(float *)(lVar3 + 0x1d54) = fVar13 * *(float *)(lVar3 + 0x1d54);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar12 = local_a0;
        if (0x18 < local_88) {
          ppppuVar12 = (undefined8 ****)local_a0[0];
        }
        (*pcVar5)(ppppuVar12);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(local_a0[0]);
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
LAB_14416bbf9:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14416c32c FUN_14416c32c body=3502 status=ok
// SIG undefined FUN_14416c32c(void)

void FUN_14416c32c(longlong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  longlong lVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStack_3b8 [32];
  undefined2 *local_398;
  undefined1 local_390;
  longlong local_388;
  undefined1 local_380 [8];
  uint local_378;
  int local_374;
  longlong local_370;
  undefined8 *local_368;
  int local_360;
  longlong local_358;
  longlong *local_348;
  longlong local_338 [4];
  int local_318;
  undefined2 local_308;
  undefined2 uStack_306;
  undefined4 uStack_304;
  longlong local_2f8;
  longlong *local_2e8;
  longlong local_2d8 [4];
  undefined **local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined **ppuStack_298;
  undefined **local_290;
  undefined *puStack_288;
  undefined8 local_280;
  ulonglong uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_250;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined8 uStack_1f7;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined4 local_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  longlong lStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [48];
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_14c;
  longlong local_140;
  int local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  undefined4 local_e4;
  undefined **local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar16 = *(uint *)(param_1 + 0x18), (int)uVar16 < 0))
       || (DAT_14c9647dc <= (int)uVar16)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x1c))))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
      (ppuVar12 = (undefined **)*plVar8, ppuVar12 == (undefined **)0x0)))) {
LAB_14416c3c1:
    ppuVar12 = (undefined **)0x0;
  }
  else {
    lVar3 = FUN_145b98922();
    if ((*(int *)(ppuVar12[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(ppuVar12[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_14416c3c1;
  }
  lVar3 = FUN_1447210f0(ppuVar12);
  if (lVar3 == 0) goto LAB_14416cd1d;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - *(int *)(ppuVar12 + 0x3a4);
  if (ppuVar12[0x3a7] != (undefined *)0x0) {
    local_390 = 0;
    local_398 = (undefined2 *)((ulonglong)local_398 & 0xffffffffffffff00);
    FUN_1409804ea(ppuVar12[0x3a7],DAT_14cbcb398,0,0);
  }
  fVar18 = *(float *)(ppuVar12 + 0x3a3) * *(float *)((longlong)ppuVar12 + 0x74);
  uVar16 = -(uint)(0.0001 < fVar18);
  uVar16 = ~uVar16 & 0x42c80000 | (uint)(1.0 / fVar18) & uVar16;
  plVar8 = (longlong *)ppuVar12[0x3a8];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x70))(plVar8,0,uVar16,0);
  }
  if (*(char *)(ppuVar12 + 0x2f) == '\x03') {
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((*(longlong *)(param_1 + 0x40) != 0) || (*(longlong *)(param_1 + 0x48) != 0)) {
        FUN_148d53eac(param_1,ppuVar12);
      }
    }
    else {
      uVar4 = FUN_1447210f0(ppuVar12);
      lVar5 = FUN_1412af310(uVar4);
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
        fVar18 = *(float *)(ppuVar12 + 0x3a3) * *(float *)((longlong)ppuVar12 + 0x74);
        uVar17 = -(uint)(0.0001 < fVar18);
        fVar18 = (float)(~uVar17 & 0x42c80000 | (uint)(1.0 / fVar18) & uVar17);
        if (*(char *)(param_1 + 0x98) == '\0') {
          puVar1 = ppuVar12[0x36];
          local_2b8 = &PTR_FUN_14b322ee0;
          local_2b0 = 0;
          local_2a8 = CONCAT44(local_2a8._4_4_,0x34002);
          local_1d8 = 0;
          local_2a0 = 0;
          ppuStack_298 = (undefined **)0x0;
          local_290 = (undefined **)0x0;
          puStack_288 = (undefined *)0x0;
          local_280 = 0;
          uStack_278 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_260 = 0;
          uStack_258 = 0;
          local_250 = 0;
          local_24c = 0;
          uStack_244 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          uStack_1ff = 0;
          uStack_1f8 = 0;
          uStack_1f7 = 0;
          local_1ec = 0;
          uStack_1e4 = 0;
          local_1d0 = (undefined *)0x0;
          puStack_1c8 = (undefined *)0x0;
          local_1c0 = 0;
          lStack_1b8 = 0;
          local_1b0 = 0x3002;
          local_1a8 = 0;
          local_170 = 0;
          local_168 = 0x200000000;
          local_160 = 0;
          local_158 = 0x3f800000;
          local_150 = 0;
          local_14c = 0;
          local_140 = 0;
          local_138 = -0xfffff30;
          local_130 = 0;
          local_128 = 0;
          local_124 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0.0;
          local_120 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0;
          local_e4 = 0xbf800000;
          local_388 = lVar5;
          FUN_1405c5fa2();
          local_d8 = &DAT_14cb769e8;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = &PTR_FUN_14b0394b0;
          local_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x50) + 8);
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar5 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar5);
            DAT_14c947fe0 = lVar5;
          }
          FUN_140045924(DAT_14c947fe0,&local_308,puVar13,1);
          lVar5 = CONCAT44(uStack_304,CONCAT22(uStack_306,local_308));
          if (local_2b0 != lVar5) {
            local_2a0 = 0;
          }
          local_2b0 = lVar5;
          if (puVar1 != (undefined *)0x0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(puVar1);
          }
          local_1d0 = puVar1;
          if ((~DAT_14c950c29 & 1) == 0 && puVar1 != (undefined *)0x0) {
            FUN_1456cec3c(puVar1);
          }
          puStack_1c8 = puVar1;
          if ((ppuVar12 != (undefined **)0x0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(ppuVar12);
          }
          puStack_288 = *(undefined **)(param_1 + 0x88);
          local_1c0 = CONCAT44(fVar18 * *(float *)(*(longlong *)(param_1 + 0x68) + 0x308),
                               *(undefined4 *)(ppuVar12 + 0x3ab));
          ppuStack_298 = ppuVar12;
          lVar5 = FUN_1447e736e(*(longlong *)(param_1 + 0x68) + 0x310);
          if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar5);
          }
          local_158 = CONCAT44(local_158._4_4_,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x338));
          local_160 = lVar5;
          lVar5 = (**(code **)(ppuVar12[0x79] + 0x18))(ppuVar12 + 0x79);
          if (lVar5 == 0) {
            local_370 = 0;
          }
          else {
            puVar13 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
              puVar13 = *(undefined4 **)(lVar5 + 8);
            }
            if (DAT_14c947fe0 == 0) {
              lVar5 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar5);
              DAT_14c947fe0 = lVar5;
            }
            FUN_140045924(DAT_14c947fe0,&local_370,puVar13,1);
          }
          if (lStack_1b8 != local_370) {
            local_1a8 = 0;
          }
          lVar5 = *(longlong *)(param_1 + 0x68);
          lStack_1b8 = local_370;
          if (local_1a0 != (undefined1 *)(lVar5 + 0x100)) {
            puVar9 = (undefined1 *)(lVar5 + 0x100);
            if (*(undefined1 **)(lVar5 + 0x130) != (undefined1 *)0x0) {
              puVar9 = *(undefined1 **)(lVar5 + 0x130);
            }
            FUN_1400709d4(local_1a0,puVar9,*(undefined4 *)(lVar5 + 0x138),local_168._4_4_);
          }
          (*(code *)local_e0[4])(&local_e0,0);
          local_d8 = ppuVar12[0x1d8];
          FUN_1406022fe(&local_d0,ppuVar12 + 0x1d9);
          local_158 = CONCAT44(*(undefined4 *)((longlong)ppuVar12 + 0xe44),(undefined4)local_158);
          local_e8 = *(float *)(ppuVar12 + 0x3ac) * 0.5;
          local_128 = *(undefined4 *)(ppuVar12 + 0x3b3);
          local_150 = 0;
          local_14c = 0;
          if ((local_140 != 0) || (local_138 != -0xfffff30)) {
            local_140 = 0;
            local_138 = -0xfffff30;
            local_130 = 0;
          }
          local_124 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          local_110 = 0;
          local_120 = local_128;
          uStack_114 = local_128;
          FUN_1412af85e(local_388,&local_378);
          if ((((local_374 != 0) && (-1 < (int)local_378)) && ((int)local_378 < DAT_14c9647dc)) &&
             (((plVar8 = (longlong *)
                         ((ulonglong)((local_378 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_378 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == local_374)) &&
              (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar5 = *plVar8, lVar5 != 0)))))) {
            fVar18 = *(float *)(lVar5 + 0x1b4);
            if (0.0 <= fVar18) {
LAB_14416c9e9:
              *(bool *)(param_1 + 0x98) = fVar18 <= 0.0;
              if (fVar18 <= 0.0) {
                local_368 = (undefined8 *)0x0;
                local_360 = 0;
                FUN_1446efa72(&local_368,0,3,0x10);
                puVar2 = local_368;
                local_360 = 3;
                *local_368 = &PTR_LAB_149e020b0;
                LOCK();
                UNLOCK();
                lVar6 = DAT_14c758608 + 1;
                lVar14 = DAT_14c758608 + 1;
                if (lVar6 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar6 = DAT_14c758608 + 2;
                  lVar14 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar14;
                local_368[2] = lVar6;
                *local_368 = &PTR_FUN_14b976ba0;
                local_368[3] = 0;
                iVar10 = 0;
                if (ppuVar12 != (undefined **)0x0) {
                  uVar17 = *(uint *)((longlong)ppuVar12 + 0xc);
                  *(uint *)(local_368 + 3) = uVar17;
                  if ((int)uVar17 < DAT_14c9647dc) {
                    lVar14 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                  }
                  else {
                    lVar14 = 0;
                  }
                  iVar10 = *(int *)(lVar14 + 0x10);
                  if (*(int *)(lVar14 + 0x10) == 0) {
                    LOCK();
                    iVar10 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar11 = DAT_14c964868 + 1;
                    bVar15 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar10;
                    if (bVar15) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                   );
                    }
                    LOCK();
                    iVar10 = *(int *)(lVar14 + 0x10);
                    bVar15 = iVar10 == 0;
                    if (bVar15) {
                      *(int *)(lVar14 + 0x10) = iVar11;
                      iVar10 = 0;
                    }
                    UNLOCK();
                    if (bVar15) {
                      iVar10 = iVar11;
                    }
                  }
                }
                *(int *)((longlong)puVar2 + 0x1c) = iVar10;
                puVar2[4] = param_1;
                FUN_1448b6402(lVar5 + 0x48,local_380,&local_368);
                if (local_360 != 0) {
                  if (local_368 == (undefined8 *)0x0) goto LAB_14416cb13;
                  (**(code **)*local_368)(local_368,0);
                  FUN_1446efa72(&local_368,0,0,0x10);
                  local_360 = 0;
                }
                if (local_368 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            else {
              if (*(longlong *)(lVar5 + 0x78) != 0) {
                fVar18 = *(float *)(*(longlong *)(lVar5 + 0x78) + 0x50);
                goto LAB_14416c9e9;
              }
              *(undefined1 *)(param_1 + 0x98) = 0;
            }
LAB_14416cb13:
            *(undefined4 *)(lVar5 + 0x98) = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x2fc);
            *(undefined4 *)(lVar5 + 0x9c) = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x300);
            *(undefined4 *)(lVar5 + 0xa0) = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x304);
          }
          FUN_140df0e32(&local_2b8);
        }
        else {
          local_2a8 = 0;
          ppuStack_298 = &PTR_DAT_14b414cb0;
          local_2b8 = (undefined **)&LAB_143dcca28;
          local_290 = ppuVar12;
          FUN_1458e8594(lVar5,&local_308);
          FUN_1458e842a(&local_308,&local_2b8);
          FUN_1458e84aa(&local_308,&local_368);
          if ((int)uStack_268 != local_318) {
            do {
              if ((int)uStack_268 < 0) {
                if ((local_318 < 0) || (*(int *)(local_368 + 0x73) <= local_318)) break;
              }
              else if (local_318 < 0) {
                if (*(int *)(local_2b8 + 0x73) <= (int)uStack_268) break;
              }
              else if (local_318 < *(int *)(local_368 + 0x73) ==
                       (int)uStack_268 < *(int *)(local_2b8 + 0x73)) break;
              FUN_1488df968(local_260,*(float *)(*(longlong *)(param_1 + 0x68) + 0x308) * fVar18);
              uStack_268 = CONCAT44(uStack_268._4_4_,(int)uStack_268 + 1);
              FUN_14131935c(&local_2b8);
            } while ((int)uStack_268 != local_318);
          }
          if (local_358 != 0) {
            if (local_348 == (longlong *)0x0) {
              local_348 = local_338;
            }
            (**(code **)(*local_348 + 0x10))();
          }
          if (local_2a8 != 0) {
            ppuVar7 = ppuStack_298;
            if (ppuStack_298 == (undefined **)0x0) {
              ppuVar7 = &puStack_288;
            }
            (**(code **)(*ppuVar7 + 0x10))();
          }
          if (local_2f8 != 0) {
            if (local_2e8 == (longlong *)0x0) {
              local_2e8 = local_2d8;
            }
            (**(code **)(*local_2e8 + 0x10))();
          }
        }
      }
    }
  }
  if ((0 < *(int *)(param_1 + 0x7c)) ||
     (*(double *)(lVar3 + 0x6d0) - (double)*(float *)(param_1 + 0x80) <
      (double)*(float *)(param_1 + 0x38))) {
    uVar4 = FUN_1401b4c98(ppuVar12);
    local_368 = (undefined8 *)0x0;
    local_360 = 0;
    FUN_1446efa72(&local_368,0,3,0x10);
    puVar2 = local_368;
    local_360 = 3;
    *local_368 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_368[2] = lVar5;
    *local_368 = &PTR_FUN_14b976b30;
    local_368[3] = 0;
    iVar10 = 0;
    if (ppuVar12 != (undefined **)0x0) {
      uVar17 = *(uint *)((longlong)ppuVar12 + 0xc);
      *(uint *)(local_368 + 3) = uVar17;
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar10 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar10 = *(int *)(lVar3 + 0x10);
        bVar15 = iVar10 == 0;
        if (bVar15) {
          *(int *)(lVar3 + 0x10) = iVar11;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar10 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar10;
    puVar2[4] = param_1;
    local_2b8 = (undefined **)0x0;
    local_2b0 = (ulonglong)local_2b0._4_4_ << 0x20;
    FUN_14487d8d8(&local_2b8,&local_368);
    uStack_278 = CONCAT71(uStack_278._1_7_,1);
    local_398 = &local_308;
    local_308 = 0;
    uStack_304 = 0xbf800000;
    FUN_1406f4044(uVar4,param_1 + 0x90,&local_2b8,uVar16);
    (*(code *)(&PTR_LAB_14a1c87a0)[uStack_278 & 0xff])(&local_2b8);
    if (local_360 != 0) {
      if (local_368 == (undefined8 *)0x0) goto LAB_14416cd1d;
      (**(code **)*local_368)(local_368,0);
      FUN_1446efa72(&local_368,0,0,0x10);
      local_360 = 0;
    }
    if (local_368 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (ppuVar12[0x3a8] != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_3b8);
  }
LAB_14416cd1d:
  if ((local_90 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14416d11a FUN_14416d11a body=8180 status=ok
// SIG undefined FUN_14416d11a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14416d11a(wchar_t *param_1,longlong *param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  double *pdVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined ***pppuVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined **ppuVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  bool bVar25;
  uint uVar26;
  float fVar27;
  undefined8 uVar28;
  uint uVar40;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 extraout_XMM0_Qb;
  uint uVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_888 [32];
  wchar_t *local_868;
  double *local_860;
  code **local_858;
  wchar_t *local_850;
  wchar_t *local_848;
  code *local_840;
  undefined1 *local_838;
  code **local_830;
  code *local_828;
  code *local_820;
  longlong local_810;
  float local_808;
  int local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  double local_7f8;
  undefined8 uStack_7f0;
  wchar_t *local_7e8;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined1 local_7d8 [16];
  longlong *local_7c0;
  longlong *local_7b8;
  longlong local_7b0;
  undefined8 local_7a8;
  longlong local_7a0;
  longlong *local_798;
  uint *local_790;
  undefined8 *local_788;
  undefined8 *local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  uint local_758;
  uint uStack_754;
  uint uStack_750;
  uint uStack_74c;
  undefined8 local_748;
  undefined8 uStack_740;
  double local_738;
  code *pcStack_730;
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  double local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  undefined1 local_691;
  longlong local_690 [3];
  code *local_678;
  undefined1 local_670 [8];
  undefined1 local_668 [48];
  undefined1 *local_638;
  undefined4 local_630;
  undefined **local_628;
  undefined **ppuStack_620;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined8 local_610;
  double local_608 [4];
  double local_5e8;
  double local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  longlong local_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined1 local_588 [48];
  undefined8 local_558;
  undefined4 local_548;
  undefined8 local_540;
  undefined4 local_538;
  longlong local_530;
  int local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  longlong local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 auStack_4e0 [7];
  undefined1 local_4a4;
  undefined **local_498;
  longlong local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  int local_470;
  undefined4 local_46c;
  undefined8 local_468;
  undefined **local_460;
  undefined **local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined **local_440 [2];
  longlong *local_430;
  undefined **local_428;
  undefined **ppuStack_420;
  longlong *local_418;
  undefined **local_410;
  undefined **ppuStack_408;
  longlong *local_400;
  undefined8 local_3f8;
  int iStack_3f0;
  uint uStack_3ec;
  int iStack_3e8;
  float fStack_3e4;
  undefined8 uStack_3e0;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  longlong local_3c0 [6];
  longlong *local_390;
  undefined8 local_388;
  undefined4 local_380;
  uint local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  longlong local_368;
  int local_360;
  undefined8 local_358;
  undefined4 local_350;
  uint uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  longlong lStack_330;
  int local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  longlong lStack_308;
  undefined **local_300;
  undefined **ppuStack_2f8;
  longlong *local_2f0;
  undefined2 local_2e8;
  undefined8 local_2e4;
  undefined1 local_2dc;
  undefined8 local_2d8;
  undefined **local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  int iStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  code *local_298;
  undefined8 uStack_290;
  double local_288;
  longlong lStack_280;
  undefined1 local_278 [48];
  undefined1 *local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220 [4];
  undefined8 uStack_200;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  ulonglong uStack_1c0;
  code *local_1b8 [2];
  undefined8 *local_1a8;
  code *local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_7e8 = param_1;
  if ((((*(int *)(param_1 + 0xe) == 0) || (uVar26 = *(uint *)(param_1 + 0xc), (int)uVar26 < 0)) ||
      (DAT_14c9647dc <= (int)uVar26)) ||
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0xe))) ||
      (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar16 = *plVar12, lVar16 == 0)))))) {
LAB_14416d1ff:
    lVar16 = 0;
  }
  else {
    lVar9 = FUN_145b98922();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_14416d1ff;
  }
  lVar9 = *(longlong *)(lVar16 + 0x1b0);
  local_790 = (uint *)(param_2 + 0x1d);
  if (*(int *)((longlong)param_2 + 0xec) == 0) {
LAB_14416d7fe:
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar26 = *local_790;
    plVar12 = (longlong *)0x0;
    if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)((longlong)param_2 + 0xec) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_14416d7fe;
      plVar12 = (longlong *)*puVar13;
    }
  }
  local_460 = &PTR_FUN_14b32b680;
  local_458 = (undefined **)0x0;
  local_450 = 0x34001;
  local_448 = 0;
  local_440[0] = DAT_14c8464e0;
  local_440[1] = DAT_14c8464e8;
  local_430 = DAT_14c8464f0;
  local_428 = DAT_14c8464e0;
  ppuStack_420 = DAT_14c8464e8;
  local_418 = DAT_14c8464f0;
  local_410 = DAT_14c8464e0;
  ppuStack_408 = DAT_14c8464e8;
  local_400 = DAT_14c8464f0;
  local_3f8 = 0;
  iStack_3f0 = 0;
  uStack_3ec = 0;
  iStack_3e8 = 0;
  fStack_3e4 = 0.0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0x3002;
  local_3c8 = 0;
  local_390 = (longlong *)0x0;
  local_388 = 0x200000000;
  local_380 = 0;
  local_378 = local_378 & 0xffffff00;
  uStack_374 = 0;
  uStack_370 = 0;
  local_368 = 0;
  local_360 = -0xfffff30;
  local_358 = 0;
  local_350 = 0;
  uStack_34c = uStack_34c & 0xffffff00;
  local_310 = 0;
  lStack_308 = 0;
  local_320 = 0;
  uStack_318 = 0;
  uStack_348 = 0;
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  lStack_330 = 0;
  local_328 = 0;
  local_300 = DAT_14c8464e0;
  ppuStack_2f8 = DAT_14c8464e8;
  local_2f0 = DAT_14c8464f0;
  local_2e8 = 0;
  local_2e4 = 0xbf80000000000000;
  local_2dc = 0;
  local_2d8 = 0;
  local_810 = lVar16;
  FUN_1405c5fa2();
  local_2c8 = &DAT_14cb769e8;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = &PTR_FUN_14b0394b0;
  uStack_29c = 0;
  local_2b0 = 0;
  iStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = (uint)uStack_2a0._3_1_ << 0x18;
  ppuVar21 = (undefined **)0x0;
  local_804 = param_3;
  if (*param_2 != 0) {
    puVar22 = *(undefined4 **)(*param_2 + 8);
    puVar20 = &DAT_14c9485f0;
    if (puVar22 != (undefined4 *)0x0) {
      puVar20 = puVar22;
    }
    if (DAT_14c947fe0 == 0) {
      lVar16 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar16);
      DAT_14c947fe0 = lVar16;
    }
    FUN_140045924(DAT_14c947fe0,&local_628,puVar20,1);
    ppuVar21 = local_628;
    if (local_458 != local_628) {
      local_448 = 0;
    }
  }
  local_430 = (longlong *)param_2[0x27];
  local_440[0] = (undefined **)param_2[0x25];
  local_440[1] = (undefined **)param_2[0x26];
  local_458 = ppuVar21;
  if (lVar9 == 0) {
    local_3f8 = local_3f8 & 0xffffffff;
    iVar4 = 0;
  }
  else {
    uVar26 = *(uint *)(lVar9 + 0xc);
    local_3f8 = CONCAT44(uVar26,(undefined4)local_3f8);
    if ((int)uVar26 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar4 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar24);
      }
      LOCK();
      iVar4 = *(int *)(lVar16 + 0x10);
      bVar25 = iVar4 == 0;
      if (bVar25) {
        *(int *)(lVar16 + 0x10) = iVar24;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar25) {
        iVar4 = iVar24;
      }
    }
  }
  iStack_3f0 = iVar4;
  if (local_810 == 0) {
    uStack_3ec = 0;
    iStack_3e8 = 0;
    uStack_3e0 = 0;
    iVar4 = 0;
  }
  else {
    uStack_3ec = *(uint *)(local_810 + 0xc);
    if ((int)uStack_3ec < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uStack_3ec & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_3ec >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar24 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar24 = *(int *)(lVar16 + 0x10);
      bVar25 = iVar24 == 0;
      if (bVar25) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar24 = 0;
      }
      UNLOCK();
      if (bVar25) {
        iVar24 = iVar15;
      }
    }
    uVar26 = *(uint *)(local_810 + 0xc);
    uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar26);
    if ((int)uVar26 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar4 = *(int *)(lVar16 + 0x10);
    iStack_3e8 = iVar24;
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar24);
      }
      LOCK();
      iVar4 = *(int *)(lVar16 + 0x10);
      bVar25 = iVar4 == 0;
      if (bVar25) {
        *(int *)(lVar16 + 0x10) = iVar24;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar25) {
        iVar4 = iVar24;
      }
    }
  }
  uStack_3e0 = CONCAT44(iVar4,(undefined4)uStack_3e0);
  if (param_2[10] == 0) {
    puVar22 = &DAT_14c9485f0;
  }
  else {
    puVar20 = *(undefined4 **)(param_2[10] + 8);
    puVar22 = &DAT_14c9485f0;
    if (puVar20 != (undefined4 *)0x0) {
      puVar22 = puVar20;
    }
  }
  if (DAT_14c947fe0 == 0) {
    lVar16 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar16);
    DAT_14c947fe0 = lVar16;
  }
  FUN_140045924(DAT_14c947fe0,local_690,puVar22,1);
  lVar16 = local_810;
  if (local_3d8 != local_690[0]) {
    local_3c8 = 0;
  }
  local_3d8 = local_690[0];
  plVar10 = param_2 + 0xb;
  if (local_3c0 != plVar10) {
    plVar5 = (longlong *)param_2[0x11];
    if ((longlong *)param_2[0x11] == (longlong *)0x0) {
      plVar5 = plVar10;
    }
    FUN_1400709d4(local_3c0,plVar5,(int)param_2[0x12],local_388._4_4_);
  }
  local_798 = plVar10;
  (*(code *)local_2d0[4])(&local_2d0,0);
  local_2c8 = (undefined *)param_2[0x19];
  local_7c0 = param_2 + 0x1a;
  FUN_1406022fe(&local_2c0);
  iVar4 = local_804;
  if (*(int *)(lVar16 + 0x1da8) != 0) {
    local_3f8 = local_3f8 | 0x1000;
  }
  if (*(char *)((longlong)param_2 + 0x34) == '\x01') {
    local_808 = ((*(float *)((longlong)param_2 + 0x14) + 1.0) / (1.0 - *(float *)(param_2 + 3))) *
                *(float *)((longlong)param_2 + 0x24) *
                (*(float *)(param_2 + 5) + *(float *)((longlong)param_2 + 0x1c)) +
                *(float *)(param_2 + 4);
    *(float *)(param_2 + 6) = local_808;
    *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  }
  else {
    local_808 = *(float *)(param_2 + 6);
  }
  local_7fc = (undefined4)param_2[7];
  local_7e0 = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_7d8 = ZEXT416(*(uint *)(param_2 + 0x31));
  plVar10 = *(longlong **)(lVar16 + 0x1dc8);
  if ((plVar10 != (longlong *)0x0) && ((*(byte *)(param_2 + 0x1c) & 2) != 0)) {
    local_3f8 = local_3f8 | 0x2000;
    plVar10 = plVar10 + 0x20;
    plVar5 = (longlong *)FUN_1447e736e(plVar10);
    if (plVar5 != (longlong *)0x0) {
      lVar9 = *param_2;
      if (lVar9 == 0) {
        plVar10 = (longlong *)0x0;
        if (param_2[1] == 0) goto LAB_14416d849;
        fVar27 = (float)FUN_140b53448();
        plVar10 = (longlong *)param_2[1];
        if (ABS(fVar27) <= 1e-08) {
          fVar27 = (float)FUN_140b536be(plVar10);
        }
        else {
          fVar27 = (float)FUN_140b531d2();
        }
      }
      else if (ABS(*(float *)(lVar9 + 0x2f8)) <= 1e-08) {
        fVar27 = *(float *)(lVar9 + 0x2d4);
      }
      else {
        fVar27 = *(float *)(lVar9 + 0x2d4);
        if (*(float *)(lVar9 + 0x2d4) <= *(float *)(lVar9 + 0x2dc)) {
          fVar27 = *(float *)(lVar9 + 0x2dc);
        }
      }
      if (0.0 < fVar27) {
        uVar28 = FUN_1449e6cbc(plVar5);
        uVar40 = (uint)((ulonglong)uVar28 >> 0x20);
        uVar41 = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
        uVar26 = -(uint)((float)uVar28 < fVar27);
        local_7d8._4_4_ = ~uVar40 & local_7d8._4_4_ | uVar40;
        local_7d8._0_4_ =
             ~uVar26 & local_7d8._0_4_ |
             (uint)(((float)uVar28 / fVar27) * (float)local_7d8._0_4_) & uVar26;
        local_7d8._8_4_ = ~(uint)extraout_XMM0_Qb & local_7d8._8_4_ | (uint)extraout_XMM0_Qb;
        local_7d8._12_4_ = ~uVar41 & local_7d8._12_4_ | uVar41;
        plVar10 = plVar5;
      }
    }
  }
LAB_14416d849:
  fStack_3e4 = local_808;
  local_380 = local_7fc;
  if (local_328 != 0x4fc71eb4) {
    local_320 = 0;
  }
  local_328 = 0x4fc71eb4;
  if (lStack_330 != *(longlong *)(lVar16 + 0x1d80)) {
    local_320 = 0;
  }
  lStack_330 = *(longlong *)(lVar16 + 0x1d80);
  local_350 = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_378 = local_378 & 0xffffff00;
  uStack_374 = 0;
  uStack_370 = 0;
  if ((local_368 != 0) || (local_360 != -0xfffff30)) {
    local_368 = 0;
    local_360 = -0xfffff30;
    local_358 = 0;
  }
  uStack_34c = uStack_34c & 0xffffff00;
  uStack_348 = local_350;
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_33c = local_350;
  uStack_338 = 0;
  if (1e-08 < ABS((float)local_7d8._0_4_ + -1.0)) {
    local_2e8 = CONCAT11(1,(undefined1)local_2e8);
    local_2e4 = CONCAT44(local_2e4._4_4_,local_7d8._0_4_);
  }
  if ((*(byte *)(param_2 + 0x1c) & 2) != 0) {
    local_3f8 = local_3f8 | 1;
    if (plVar12 == (longlong *)0x0) {
      if (((((double)param_2[0x25] != 0.0) || (NAN((double)param_2[0x25]))) ||
          ((double)param_2[0x26] != 0.0)) ||
         (((NAN((double)param_2[0x26]) || ((double)param_2[0x27] != 0.0)) ||
          (NAN((double)param_2[0x27]))))) {
        plVar10 = (longlong *)param_2[0x27];
        local_400 = plVar10;
        local_410 = (undefined **)param_2[0x25];
        ppuStack_408 = (undefined **)param_2[0x26];
      }
    }
    else {
      uVar26 = *(uint *)((longlong)plVar12 + 0xc);
      uStack_318 = CONCAT44(uStack_318._4_4_,uVar26);
      if ((int)uVar26 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar4 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar24 = DAT_14c964868 + 1;
        bVar25 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar25) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar24);
        }
        LOCK();
        iVar4 = *(int *)(lVar16 + 0x10);
        bVar25 = iVar4 == 0;
        if (bVar25) {
          *(int *)(lVar16 + 0x10) = iVar24;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar25) {
          iVar4 = iVar24;
        }
      }
      uStack_318 = CONCAT44(iVar4,(undefined4)uStack_318);
      lStack_308 = param_2[0x21];
      local_2f0 = (longlong *)param_2[0x20];
      local_300 = (undefined **)param_2[0x1e];
      ppuStack_2f8 = (undefined **)param_2[0x1f];
      (**(code **)(*plVar12 + 0x590))(plVar12,&local_628,0);
      local_400 = (longlong *)CONCAT44(uStack_614,local_618);
      local_410 = local_628;
      ppuStack_408 = ppuStack_620;
      plVar10 = plVar12;
      iVar4 = local_804;
    }
  }
  lVar9 = local_810;
  local_691 = 0;
  local_6a8 = (double)param_2[0x2d];
  local_6b8 = (double)param_2[0x2b];
  dStack_6b0 = (double)param_2[0x2c];
  lVar16 = param_2[0x32];
  local_800 = (undefined4)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
  if (lVar16 != 0) {
    if (*(char *)(lVar16 + 0x2e) == '\x01') {
      local_3f8 = local_3f8 | 0x100;
    }
    if (*(char *)(lVar16 + 0x2c) == '\0') {
      if (*(char *)(lVar16 + 0x2d) != '\x01') goto LAB_14416dc72;
      dVar29 = (double)FUN_144719204(local_6b8);
      dVar30 = (double)FUN_144719204(dStack_6b0);
      dVar31 = sin(dVar29 * 0.017453292519943295);
      dVar29 = cos(dVar29 * 0.017453292519943295);
      dVar32 = sin(dVar30 * 0.017453292519943295);
      dVar30 = cos(dVar30 * 0.017453292519943295);
      uStack_290 = dVar32 * dVar29;
      local_298 = (code *)(dVar30 * dVar29);
      local_288 = dVar31;
      FUN_140c84580(&local_628);
      dVar29 = 0.0;
      if ((((double)local_628 != 0.0) || (NAN((double)local_628))) ||
         (((double)ppuStack_620 != 0.0 || (NAN((double)ppuStack_620))))) {
        dVar29 = atan2((double)ppuStack_620,(double)local_628);
        dVar29 = dVar29 * 57.29577951308232;
      }
      dVar32 = SQRT((double)local_628 * (double)local_628 +
                    (double)ppuStack_620 * (double)ppuStack_620);
      dVar30 = (double)CONCAT44(uStack_614,local_618);
      dVar31 = 0.0;
      if ((((dVar30 != 0.0) || (NAN(dVar30))) || (dVar32 != 0.0)) || (NAN(dVar32))) {
        dVar31 = atan2(dVar30,dVar32);
        dVar31 = dVar31 * 57.29577951308232;
      }
      local_6a8 = 0.0;
      local_6b8 = dVar31;
      dStack_6b0 = dVar29;
    }
    local_800 = 0;
  }
LAB_14416dc72:
  if (-1 < iVar4 + -1) {
    local_7b8 = param_2 + 0x2b;
    local_7a0 = *param_2;
    local_788 = auStack_4e0;
    local_780 = &uStack_318;
    local_7e8 = (wchar_t *)((longlong)local_7e8 + 0x99);
    iVar24 = 0;
    do {
      local_628 = &PTR_FUN_14b32b680;
      ppuStack_620 = local_458;
      local_618 = local_450;
      local_610 = 0;
      pppuVar18 = local_440;
      pdVar11 = local_608;
      for (lVar16 = 0xd; lVar16 != 0; lVar16 = lVar16 + -1) {
        *pdVar11 = (double)*pppuVar18;
        pppuVar18 = pppuVar18 + 1;
        pdVar11 = pdVar11 + 1;
      }
      local_5a0 = local_3d8;
      local_598 = local_3d0;
      local_590 = 0;
      local_558 = 0;
      plVar12 = local_390;
      if (local_390 == (longlong *)0x0) {
        plVar12 = local_3c0;
      }
      FUN_1400709d4(local_588,plVar12,local_388 & 0xffffffff,0);
      local_548 = local_380;
      local_538 = uStack_370;
      local_540 = CONCAT44(uStack_374,local_378);
      local_530 = local_368;
      local_528 = local_360;
      local_520 = 0;
      local_518 = CONCAT44(uStack_34c,local_350);
      uStack_510 = CONCAT44(uStack_344,uStack_348);
      local_508 = CONCAT44(uStack_33c,uStack_340);
      uStack_500 = uStack_338;
      local_4f8 = lStack_330;
      local_4f0 = local_328;
      local_4e8 = 0;
      puVar13 = local_780;
      puVar19 = local_788;
      for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar19 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar19 = puVar19 + 1;
      }
      local_498 = (undefined **)&DAT_14a171d50;
      local_488 = 0;
      uStack_480 = 0;
      local_490 = (longlong)local_2c8;
      FUN_1406022fe(&local_488,&local_2c0);
      iVar15 = iStack_2a8;
      uVar28 = local_2b0;
      local_498 = &PTR_FUN_14b0394b0;
      local_478 = 0;
      local_470 = iStack_2a8;
      if (iStack_2a8 == 0) {
        local_46c = 0;
      }
      else {
        FUN_1403e11c4(&local_478,iStack_2a8,0);
        FUN_1403e103e(local_478,uVar28,iVar15);
      }
      local_468 = CONCAT44(uStack_29c,uStack_2a0);
      dVar29 = (double)param_2[0x25];
      dVar30 = (double)param_2[0x26];
      dVar31 = (double)param_2[0x27];
      local_6c8 = local_6a8;
      local_6d8 = local_6b8;
      dStack_6d0 = dStack_6b0;
      if (param_2[0x32] != 0) {
        local_848 = local_7e8;
        local_850 = (wchar_t *)&local_691;
        local_858 = &local_298;
        local_860 = &local_6d8;
        local_868 = (wchar_t *)CONCAT44(local_868._4_4_,(int)param_2[9]);
        FUN_141884f4a(param_2[0x32],&local_6b8,*(float *)(lVar9 + 0x1d60) * 0.5);
        if ((((double)local_298 != 0.0) || (NAN((double)local_298))) ||
           (((uStack_290 != 0.0 || ((NAN(uStack_290) || (local_288 != 0.0)))) || (NAN(local_288)))))
        {
          local_738 = local_288;
          pcStack_730 = local_298;
          local_728._0_8_ = uStack_290;
          FUN_1401c9a0e(local_7b8,&local_178,&local_738);
          local_288 = local_168;
          local_298 = local_178;
          uStack_290 = dStack_170;
          dVar29 = dVar29 + (double)local_178;
          dVar30 = dVar30 + dStack_170;
          dVar31 = dVar31 + local_168;
        }
      }
      uStack_7f0 = 0;
      local_7f8 = dVar31;
      if ((char)local_800 != '\0') {
        fVar27 = *(float *)(lVar9 + 0x1d60);
        dVar31 = (double)FUN_144719204(local_6b8);
        dVar32 = (double)FUN_144719204(dStack_6b0);
        dVar33 = sin(dVar31 * 0.017453292519943295);
        dVar31 = cos(dVar31 * 0.017453292519943295);
        dVar34 = sin(dVar32 * 0.017453292519943295);
        dVar32 = cos(dVar32 * 0.017453292519943295);
        dStack_170 = dVar34 * dVar31;
        local_178 = (code *)(dVar32 * dVar31);
        local_168 = dVar33;
        FUN_140c84580(&local_298,&local_178,fVar27 * 0.5 * 0.017453292);
        dVar31 = 0.0;
        if (((((double)local_298 != 0.0) || (NAN((double)local_298))) || (uStack_290 != 0.0)) ||
           (NAN(uStack_290))) {
          dVar31 = atan2(uStack_290,(double)local_298);
          dVar31 = dVar31 * 57.29577951308232;
        }
        dVar33 = SQRT((double)local_298 * (double)local_298 + uStack_290 * uStack_290);
        dVar32 = 0.0;
        if (((local_288 != 0.0) || (NAN(local_288))) || ((dVar33 != 0.0 || (NAN(dVar33))))) {
          dVar32 = atan2(local_288,dVar33);
          dVar32 = dVar32 * 57.29577951308232;
        }
        local_6c8 = 0.0;
        local_6d8 = dVar32;
        dStack_6d0 = dVar31;
      }
      dVar31 = (double)FUN_144719204();
      dVar32 = (double)FUN_144719204(dStack_6d0);
      dVar33 = sin(dVar31 * 0.017453292519943295);
      dVar34 = cos(dVar31 * 0.017453292519943295);
      dVar31 = sin(dVar32 * 0.017453292519943295);
      dVar32 = cos(dVar32 * 0.017453292519943295);
      dVar31 = dVar31 * dVar34;
      dVar32 = dVar32 * dVar34;
      local_608[3] = dVar32;
      local_5e8 = dVar31;
      local_5e0 = dVar33;
      if (*param_2 == 0) {
        auVar39._8_8_ = dStack_6d0;
        auVar39._0_8_ = local_6d8;
        auVar39 = divpd(auVar39,_DAT_1499387d0);
        auVar42._8_8_ = 0;
        auVar42._0_8_ = local_6c8;
        auVar42 = divpd(auVar42,_DAT_1499387d0);
        auVar39 = roundpd(auVar39,auVar39,3);
        auVar42 = roundpd(auVar42,auVar42,3);
        dVar33 = (local_6d8 - auVar39._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar34 = (dStack_6d0 - auVar39._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar31 = (local_6c8 - auVar42._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar32 = (0.0 - auVar42._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar35 = sin(dVar33);
        dVar36 = sin(dVar34);
        dVar37 = sin(dVar31);
        sin(dVar32);
        dVar33 = cos(dVar33);
        dVar34 = cos(dVar34);
        dVar38 = cos(dVar31);
        cos(dVar32);
        dVar31 = dVar36 * dVar35 * dVar37 + dVar34 * dVar33 * dVar38;
        local_738 = dVar35 * dVar36 * dVar38 - dVar33 * dVar34 * dVar37;
        pcStack_730 = (code *)(-(dVar35 * dVar34 * dVar38) - dVar33 * dVar36 * dVar37);
        local_728._8_4_ = SUB84(dVar31,0);
        local_728._0_8_ = -(dVar34 * dVar35 * dVar37) + dVar36 * dVar33 * dVar38;
        local_728._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        local_718._8_4_ = SUB84(dVar30,0);
        local_718._0_8_ = dVar29;
        local_718._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        local_708 = local_7f8;
        uStack_700 = 0;
        local_6f8 = 0x3ff0000000000000;
        uStack_6f0 = 0x3ff0000000000000;
        local_6e8 = 0x3ff0000000000000;
        uStack_6e0 = 0;
        local_778 = *(undefined8 *)local_790;
        uStack_770 = *(undefined8 *)(local_790 + 2);
        local_768 = *(undefined8 *)(local_790 + 4);
        uStack_760 = *(undefined8 *)(local_790 + 6);
        local_758 = local_790[8];
        uStack_754 = local_790[9];
        uStack_750 = local_790[10];
        uStack_74c = local_790[0xb];
        local_748 = *(undefined8 *)(local_790 + 0xc);
        uStack_740 = *(undefined8 *)(local_790 + 0xe);
        uVar28 = *(undefined8 *)(lVar9 + 0x1d80);
        uVar1 = *(undefined4 *)(lVar9 + 0x1d88);
        local_638 = (undefined1 *)0x0;
        plVar12 = (longlong *)param_2[0x11];
        if ((longlong *)param_2[0x11] == (longlong *)0x0) {
          plVar12 = local_798;
        }
        FUN_1400709d4(local_668,plVar12,(int)param_2[0x12],0);
        if (lVar9 != 0) {
          uVar26 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar26 < DAT_14c9647dc) {
            lVar16 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
          }
          else {
            lVar16 = 0;
          }
          local_7f8 = (double)param_2[1];
          local_7b0 = param_2[10];
          iVar15 = *(int *)(lVar16 + 0x10);
          local_7dc = uVar1;
          local_7a8 = uVar28;
          if (iVar15 == 0) {
            LOCK();
            iVar15 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar15;
            if (bVar25) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            iVar15 = *(int *)(lVar16 + 0x10);
            bVar25 = iVar15 == 0;
            if (bVar25) {
              *(int *)(lVar16 + 0x10) = iVar17;
              iVar15 = 0;
            }
            UNLOCK();
            if (bVar25) {
              iVar15 = iVar17;
            }
            lVar9 = local_810;
            if (iVar15 == 0) goto LAB_14416ebe1;
          }
          lVar9 = local_810;
          if ((((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c9647dc)) &&
              ((pdVar11 = (double *)
                          ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
               pdVar11 != (double *)0x0 &&
               (((*(int *)(pdVar11 + 2) == iVar15 && (((ulonglong)pdVar11[1] & 0x10200000) == 0)) &&
                (dVar29 = *pdVar11, dVar29 != 0.0)))))) &&
             (lVar16 = FUN_1447210f0(dVar29), dVar30 = local_7f8, lVar16 != 0)) {
            local_158 = 0;
            uStack_150 = 0;
            local_178 = (code *)0x0;
            dStack_170 = 0.0;
            local_148 = 0x800060100;
            local_138 = 0;
            local_128 = (longlong *)0x0;
            uStack_160 = *(undefined8 *)((longlong)dVar29 + 0x1b0);
            puVar22 = *(undefined4 **)((longlong)local_7f8 + 8);
            if (puVar22 == (undefined4 *)0x0) {
              puVar22 = &DAT_14c9485f0;
            }
            local_168 = dVar29;
            if (DAT_14c947fe0 == 0) {
              lVar9 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar9);
              DAT_14c947fe0 = lVar9;
            }
            FUN_140045924(DAT_14c947fe0,&local_178,puVar22,1);
            local_148._0_4_ = CONCAT13(3,(undefined3)local_148);
            local_148 = CONCAT71(local_148._1_7_,1);
            if (((((*(int *)((longlong)dVar30 + 0x94) == 0) ||
                  (uVar26 = *(uint *)((longlong)dVar30 + 0x90), (int)uVar26 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar26 ||
                  ((plVar12 = (longlong *)
                              ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
                   plVar12 == (longlong *)0x0 ||
                   ((int)plVar12[2] != *(int *)((longlong)dVar30 + 0x94))))))) ||
                ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar6 = *plVar12, lVar6 == 0)) {
              if (*(longlong *)((longlong)dVar30 + 0x98) != 0) {
                lVar6 = FUN_140007850((longlong)dVar30 + 0x98);
                cVar3 = (*(code *)PTR_FUN_14c758760)();
                lVar9 = DAT_14c9647c8;
                if ((lVar6 == 0) || (cVar3 == '\0')) {
                  if (lVar6 != 0) {
                    uVar26 = *(uint *)(lVar6 + 0xc);
                    *(uint *)((longlong)dVar30 + 0x90) = uVar26;
                    if (DAT_14c9647dc <= (int)uVar26) goto LAB_14416ec1f;
                    lVar9 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
                    goto LAB_14416e872;
                  }
                  *(undefined8 *)((longlong)dVar30 + 0x90) = 0;
                  lVar9 = local_810;
                  goto LAB_14416e746;
                }
                uVar26 = *(uint *)(lVar6 + 0xc);
                if ((int)uVar26 < DAT_14c9647dc) {
                  if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8) + 8
                                + (ulonglong)(uVar26 & 0xffff) * 0x18) & 0x8400000) == 0) {
                    *(uint *)((longlong)local_7f8 + 0x90) = uVar26;
                    lVar9 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                            *(longlong *)(lVar9 + (ulonglong)(uVar26 >> 0x10) * 8);
LAB_14416e872:
                    iVar4 = *(int *)(lVar9 + 0x10);
                    if (*(int *)(lVar9 + 0x10) == 0) {
                      LOCK();
                      iVar4 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar15 = DAT_14c964868 + 1;
                      bVar25 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar4;
                      if (bVar25) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar15);
                      }
                      LOCK();
                      iVar4 = *(int *)(lVar9 + 0x10);
                      bVar25 = iVar4 == 0;
                      if (bVar25) {
                        *(int *)(lVar9 + 0x10) = iVar15;
                        iVar4 = 0;
                      }
                      UNLOCK();
                      if (bVar25) {
                        iVar4 = iVar15;
                      }
                    }
                    *(int *)((longlong)local_7f8 + 0x94) = iVar4;
                  }
                }
                else if ((_DAT_00000008 & 0x8400000) == 0) {
                  *(uint *)((longlong)local_7f8 + 0x90) = uVar26;
LAB_14416ec1f:
                  lVar9 = 0;
                  goto LAB_14416e872;
                }
                if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_14416e712;
              }
              lVar9 = local_810;
              lVar6 = 0;
            }
            else {
LAB_14416e712:
              if (DAT_14c949118 == 0) {
                local_678 = FUN_140631fbe;
                lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c949118 = lVar9;
                FUN_1446f470e(local_670,L"Class",1);
                local_830 = &local_678;
                local_838 = &LAB_146891e90;
                local_840 = (code *)&LAB_146273097;
                local_850 = L"Engine";
                local_848 = (wchar_t *)CONCAT44(local_848._4_4_,199);
                local_858 = (code **)&DAT_00000020;
                local_860 = (double *)CONCAT44(local_860._4_4_,0x10000000);
                local_868._0_4_ = 8;
                FUN_14574b4b2(lVar9);
                DAT_14c949118 = lVar9;
                if (DAT_14c951858 == 0) {
                  local_298 = FUN_1449e2820;
                  local_820 = FUN_14081d0ea;
                  local_828 = FUN_14081d0ea;
                  local_830 = &local_298;
                  local_838 = &LAB_1468c5283;
                  local_840 = FUN_142809da0;
                  local_848 = L"Engine";
                  local_850 = (wchar_t *)0x400000000;
                  local_858 = (code **)CONCAT44(local_858._4_4_,0x10000000);
                  local_860 = (double *)CONCAT44(local_860._4_4_,8);
                  local_868._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                lVar7 = DAT_14c951858;
                lVar9 = DAT_14c949118;
                uVar28 = FUN_1449e2fb2();
                local_868 = L"Class";
                FUN_14574b446(uVar28,lVar9,lVar7,L"/Script/CoreUObject");
              }
              lVar9 = local_810;
              if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
                  (lVar7 = FUN_140d12354(), lVar7 == 0)) ||
                 (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) {
LAB_14416e746:
                lVar6 = 0;
              }
              else if (*(longlong *)
                        (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                       lVar7 + 0x30) {
                lVar6 = 0;
              }
            }
            pcVar8 = (code *)FUN_141037e38(lVar16,lVar6,&local_738);
            if (pcVar8 != (code *)0x0) {
              local_690[1] = 0;
              local_690[2] = 0;
              uStack_290 = (double)CONCAT44(local_7fc,local_808);
              local_288 = (double)CONCAT44(local_288._4_4_,local_7e0);
              lStack_280 = local_7b0;
              local_248 = (undefined1 *)0x0;
              puVar14 = local_638;
              if (local_638 == (undefined1 *)0x0) {
                puVar14 = local_668;
              }
              local_298 = pcVar8;
              FUN_1400709d4(local_278,puVar14,local_630,0);
              local_238 = local_7a8;
              local_230 = local_7dc;
              local_228 = 0;
              local_220[0]._0_4_ = local_7d8._0_4_;
              local_1e8 = local_748;
              uStack_1e0 = uStack_740;
              local_1f8 = local_758;
              uStack_1f4 = uStack_754;
              uStack_1f0 = uStack_750;
              uStack_1ec = uStack_74c;
              local_220[3] = local_768;
              uStack_200 = uStack_760;
              local_220[1] = local_778;
              local_220[2] = uStack_770;
              local_1d8 = (undefined **)&DAT_14a171d50;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1d0 = param_2[0x19];
              FUN_1406022fe(&local_1c8,local_7c0);
              local_1d8 = &PTR_FUN_14b0394b0;
              local_1b8[0] = (code *)0x0;
              puVar13 = (undefined8 *)FUN_14001cc68(0xe8,8);
              *puVar13 = &PTR_FUN_14b975b50;
              puVar13[3] = local_288;
              puVar13[4] = lStack_280;
              puVar13[1] = local_298;
              puVar13[2] = uStack_290;
              puVar13[0xb] = 0;
              puVar14 = local_248;
              if (local_248 == (undefined1 *)0x0) {
                puVar14 = local_278;
              }
              local_1a8 = puVar13;
              FUN_1400709d4(puVar13 + 5,puVar14,local_240,0);
              puVar13[0xd] = local_238;
              *(undefined4 *)(puVar13 + 0xe) = local_230;
              puVar13[0xf] = 0;
              puVar19 = local_220;
              puVar23 = puVar13 + 0x10;
              for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
                *puVar23 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar23 = puVar23 + 1;
              }
              puVar13[0x19] = &DAT_14a171d50;
              puVar13[0x1b] = 0;
              puVar13[0x1c] = 0;
              puVar13[0x1a] = local_1d0;
              FUN_1406022fe(puVar13 + 0x1b,&local_1c8);
              puVar13[0x19] = &PTR_FUN_14b0394b0;
              if (puVar13 != (undefined8 *)&DAT_fffffffffffffff8) {
                local_1b8[0] = FUN_14416f110;
              }
              FUN_1410672ce(pcVar8,local_7f8,local_1b8);
              local_1d8 = (undefined **)&DAT_14a171d50;
              uVar2 = uStack_1c0 >> 0x20;
              uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
              if ((int)uVar2 != 0) {
                FUN_140115c12(&local_1c8,0);
              }
              lVar9 = local_810;
              local_1d0 = 0;
              if (local_1c8 != 0) {
                FUN_1400020a8();
              }
              if (local_248 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
            }
            iVar4 = local_804;
            if (local_138 != 0) {
              plVar12 = local_128;
              if (local_128 == (longlong *)0x0) {
                plVar12 = local_118;
              }
              (**(code **)(*plVar12 + 0x10))();
              iVar4 = local_804;
            }
          }
        }
LAB_14416ebe1:
        if (local_638 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar28 = FUN_1447210f0(lVar9);
        lVar16 = FUN_140877338(uVar28);
        if (lVar16 != 0) {
          local_5c8 = local_7f8 + dVar33 * 16000.0;
          local_5d0 = dVar30 + dVar31 * 16000.0;
          local_5d8 = dVar29 + dVar32 * 16000.0;
          local_4a4 = local_691;
          if (local_7a0 == 0) {
            FUN_140842d26(lVar16,&local_298,&local_628);
          }
          else {
            FUN_1414621da(lVar16,&local_628,0x3e19999a);
          }
        }
      }
      FUN_140bba396(&local_628);
      iVar24 = iVar24 + 1;
    } while (iVar4 != iVar24);
  }
  FUN_140bba396(&local_460);
  if ((local_f0 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14416f110 FUN_14416f110 body=1203 status=ok
// SIG undefined FUN_14416f110(void)

void FUN_14416f110(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined1 auStack_c8 [32];
  ulonglong *local_a8;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(int *)(*param_1 + 0xe40) = (int)param_1[1];
  *(undefined4 *)(*param_1 + 0xe44) = *(undefined4 *)((longlong)param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 2);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    *(float *)(*param_1 + 0xe48) = fVar2;
  }
  if (param_1[3] != 0) {
    lVar10 = *param_1;
    lVar8 = *(longlong *)(lVar10 + 0xe10);
    if ((lVar8 != 0) &&
       ((*(longlong *)(lVar8 + 0x290) == 0 || (0xfffffffd < *(int *)(lVar8 + 0x298) - 1U)))) {
      (**(code **)(*(longlong *)(lVar10 + 0x3c8) + 0x28))(lVar10 + 0x3c8);
    }
  }
  if (0 < (int)param_1[0xb]) {
    plVar11 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar11 = param_1 + 4;
    }
    if ((*plVar11 != 0) && ((int)plVar11[1] - 1U < 0xfffffffe)) {
      plVar1 = (longlong *)(*param_1 + 0xe78);
      if (plVar1 != param_1 + 4) {
        FUN_1400709d4(plVar1,plVar11,(int)param_1[0xb],*(undefined4 *)(*param_1 + 0xeb4));
      }
    }
  }
  if ((param_1[0xc] != 0) && ((int)param_1[0xd] - 1U < 0xfffffffe)) {
    uStack_80 = 0x4fc71eb4;
    local_78 = 0;
    local_88 = param_1[0xc];
    FUN_14893eb4e(*param_1);
  }
  FUN_1411a6e9c(*param_1,(int)param_1[0xf]);
  if ((param_1[0x19] != 0) && ((longlong)(int)param_1[0x1b] != 0)) {
    lVar10 = 0;
    do {
      if (*(longlong *)(param_1[0x1a] + lVar10) != 0) {
        lVar10 = *param_1;
        (**(code **)(*(longlong *)(lVar10 + 0xeb8) + 0x20))(lVar10 + 0xeb8,0);
        *(longlong *)(lVar10 + 0xec0) = param_1[0x19];
        FUN_1406022fe(lVar10 + 0xec8,param_1 + 0x1a);
        break;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)param_1[0x1b] * 8 != lVar10);
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar8 = FUN_14141a2e4();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
          ) == lVar8 + 0x30)) && (lVar8 = *(longlong *)(*param_1 + 0x168), lVar8 != 0)) {
      lVar9 = FUN_145b98922();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        if (*(longlong *)(lVar8 + 0x1da0) != 0) {
          uVar3 = *(undefined4 *)(lVar8 + 0x1db4);
          uVar4 = *(undefined4 *)(lVar8 + 0x1dac);
          uVar5 = *(undefined4 *)(lVar8 + 0x1db0);
          puVar7 = *(undefined4 **)(*(longlong *)(lVar8 + 0x1da0) + 8);
          puVar12 = &DAT_14c9485f0;
          if (puVar7 != (undefined4 *)0x0) {
            puVar12 = puVar7;
          }
          if (DAT_14c947fe0 == 0) {
            lVar9 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar9);
            DAT_14c947fe0 = lVar9;
          }
          FUN_140045924(DAT_14c947fe0,&local_90,puVar12,1);
          local_88 = local_90;
          uStack_80 = 0x1ea5d050;
          local_78 = 0;
          local_a8 = (ulonglong *)CONCAT44(local_a8._4_4_,uVar3);
          FUN_148f1883e(lVar10,&local_88,uVar4,uVar5);
        }
        if (*(longlong *)(lVar8 + 0x1dc8) != 0) {
          puVar7 = *(undefined4 **)(*(longlong *)(lVar8 + 0x1dc8) + 8);
          puVar12 = &DAT_14c9485f0;
          if (puVar7 != (undefined4 *)0x0) {
            puVar12 = puVar7;
          }
          if (DAT_14c947fe0 == 0) {
            lVar8 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar8);
            DAT_14c947fe0 = lVar8;
          }
          FUN_140045924(DAT_14c947fe0,&local_98,puVar12,1);
          local_88 = local_98;
          uStack_80 = 0x1ea5d050;
          local_78 = 0;
          FUN_148f18c34(lVar10);
        }
      }
    }
  }
  if (((*(int *)((longlong)param_1 + 0x84) == 0) ||
      (uVar6 = *(uint *)(param_1 + 0x10), (int)uVar6 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar6 ||
      ((((plVar11 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)((longlong)param_1 + 0x84))) ||
        ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (*plVar11 == 0)))))) {
    if ((((double)param_1[0x11] != 0.0) || (NAN((double)param_1[0x11]))) ||
       ((((double)param_1[0x12] != 0.0 ||
         ((NAN((double)param_1[0x12]) || ((double)param_1[0x13] != 0.0)))) ||
        (NAN((double)param_1[0x13]))))) {
      local_78 = param_1[0x13];
      local_88 = param_1[0x11];
      uStack_80 = (undefined4)param_1[0x12];
      uStack_7c = *(undefined4 *)((longlong)param_1 + 0x94);
      (**(code **)(*(longlong *)(*param_1 + 0x3d0) + 0x88))(*param_1 + 0x3d0);
    }
  }
  else {
    local_78 = param_1[0x13];
    local_a8 = &local_88;
    local_88 = param_1[0x11];
    uStack_80 = (undefined4)param_1[0x12];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0x94);
    (**(code **)(*(longlong *)(*param_1 + 0x3d0) + 0x80))(*param_1 + 0x3d0,*plVar11,0,param_1[0x14])
    ;
  }
  local_a8 = (ulonglong *)((ulonglong)local_a8 & 0xffffffffffffff00);
  FUN_14113775c(*param_1,&DAT_14c846480,1,0);
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14416f5c4 FUN_14416f5c4 body=234 status=ok
// SIG undefined FUN_14416f5c4(void)

undefined8 * FUN_14416f5c4(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0xe8,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14b975b50;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar5;
  *(undefined4 *)(puVar8 + 4) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x24) = uVar7;
  *(undefined4 *)(puVar8 + 1) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0xc) = uVar2;
  *(undefined4 *)(puVar8 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar4;
  puVar8[0xb] = 0;
  lVar9 = param_1 + 0x28;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x58);
  }
  FUN_1400709d4(puVar8 + 5,lVar9,*(undefined4 *)(param_1 + 0x60),0);
  puVar8[0xd] = *(undefined8 *)(param_1 + 0x68);
  *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(param_1 + 0x70);
  puVar8[0xf] = 0;
  puVar10 = (undefined8 *)(param_1 + 0x80);
  puVar11 = puVar8 + 0x10;
  for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8[0x19] = &DAT_14a171d50;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  FUN_1406022fe(puVar8 + 0x1b,param_1 + 0xd8);
  puVar8[0x19] = &PTR_FUN_14b0394b0;
  return puVar8 + 1;
}



// FUNCTION 14416f6b4 FUN_14416f6b4 body=29 status=ok
// SIG undefined FUN_14416f6b4(void)

void FUN_14416f6b4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14416f6d2 FUN_14416f6d2 body=132 status=ok
// SIG undefined FUN_14416f6d2(void)

undefined8 * FUN_14416f6d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b975b50;
  param_1[0x19] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    FUN_140115c12(param_1 + 0x1b,0);
  }
  param_1[0x1a] = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f756 FUN_14416f756 body=31 status=ok
// SIG undefined FUN_14416f756(void)

undefined8 FUN_14416f756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f782 FUN_14416f782 body=31 status=ok
// SIG undefined FUN_14416f782(void)

undefined8 FUN_14416f782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f7aa FUN_14416f7aa body=31 status=ok
// SIG undefined FUN_14416f7aa(void)

undefined8 FUN_14416f7aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f7d8 FUN_14416f7d8 body=31 status=ok
// SIG undefined FUN_14416f7d8(void)

undefined8 FUN_14416f7d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f802 FUN_14416f802 body=71 status=ok
// SIG undefined FUN_14416f802(void)

void FUN_14416f802(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b975da0;
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



// FUNCTION 14416f850 FUN_14416f850 body=29 status=ok
// SIG undefined FUN_14416f850(void)

void FUN_14416f850(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14416f86e FUN_14416f86e body=29 status=ok
// SIG undefined FUN_14416f86e(void)

undefined8 FUN_14416f86e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f88c FUN_14416f88c body=133 status=ok
// SIG undefined FUN_14416f88c(void)

undefined8 FUN_14416f88c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1403ca35b();
  lVar1 = *(longlong *)(lVar1 + 0x250);
  if (lVar1 != 0) {
    if ((longlong)*(int *)(param_2 + 0xc0) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0xb8) + lVar2) == lVar1) goto LAB_14416f8ff;
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_2 + 0xc0) * 8 != lVar2);
    }
    if ((longlong)*(int *)(param_2 + 0xd0) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 200) + lVar2) == lVar1) {
LAB_14416f8ff:
          *(undefined4 *)*param_1 = 1;
          return 0;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_2 + 0xd0) * 8 != lVar2);
    }
  }
  return 1;
}



// FUNCTION 14416f930 FUN_14416f930 body=12 status=ok
// SIG undefined FUN_14416f930(void)

void FUN_14416f930(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014416f939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14416f93c FUN_14416f93c body=29 status=ok
// SIG undefined FUN_14416f93c(void)

undefined8 FUN_14416f93c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f95a FUN_14416f95a body=75 status=ok
// SIG undefined FUN_14416f95a(void)

bool FUN_14416f95a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1403ca35b();
  lVar3 = FUN_1418e783e(uVar1,param_2);
  if (lVar3 != 0) {
    uVar1 = *param_1;
    lVar2 = FUN_140316ff8();
    FUN_140428482(uVar1,lVar2 + 600,lVar3);
  }
  return lVar3 == 0;
}



// FUNCTION 14416f9c4 FUN_14416f9c4 body=12 status=ok
// SIG undefined FUN_14416f9c4(void)

void FUN_14416f9c4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014416f9cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14416f9d0 FUN_14416f9d0 body=29 status=ok
// SIG undefined FUN_14416f9d0(void)

undefined8 FUN_14416f9d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416f9ee FUN_14416f9ee body=339 status=ok
// SIG undefined FUN_14416f9ee(void)

void FUN_14416f9ee(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  if (((*(int *)((longlong)param_1 + 0x294) == 0) ||
      (uVar1 = *(uint *)(param_1 + 0x52), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 0x294)) {
    return;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x28c) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x51);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 0x28c)) {
    return;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  if ((*(char *)(param_1[1] + 0x30) == '\0') && ((char)param_1[0x5c] != '\0')) {
    return;
  }
  (**(code **)(*param_1 + 0x50))(param_1,*param_2);
  if (*(char *)((longlong)param_1 + 0x2e2) != '\x01') {
    return;
  }
  if (*(char *)(param_1[1] + 0x30) != '\x01') {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x294) != 0) {
    uVar1 = *(uint *)(param_1 + 0x52);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14416fb1d;
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) &&
       (((int)plVar2[2] == *(int *)((longlong)param_1 + 0x294) &&
        ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar2;
      goto LAB_14416fb1d;
    }
  }
  lVar3 = 0;
LAB_14416fb1d:
                    /* WARNING: Could not recover jumptable at 0x00014416fb3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar3 + 0x3ad8) + 0x20))
            (lVar3 + 0x3ad8,*(undefined4 *)((longlong)param_1 + 0x2c4));
  return;
}



// FUNCTION 14416fb60 FUN_14416fb60 body=12 status=ok
// SIG undefined FUN_14416fb60(void)

void FUN_14416fb60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014416fb69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14416fb6c FUN_14416fb6c body=29 status=ok
// SIG undefined FUN_14416fb6c(void)

undefined8 FUN_14416fb6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416fb8a FUN_14416fb8a body=324 status=ok
// SIG undefined FUN_14416fb8a(void)

void FUN_14416fb8a(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  if (((*(int *)((longlong)param_1 + 0x294) == 0) ||
      (uVar1 = *(uint *)(param_1 + 0x52), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 0x294)) {
    return;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x28c) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x51);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 0x28c)) {
    return;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  if ((*(char *)(param_1[1] + 0x30) == '\0') && ((char)param_1[0x5c] != '\x01')) {
    return;
  }
  (**(code **)(*param_1 + 0x58))();
  if (*(char *)((longlong)param_1 + 0x2e2) != '\x01') {
    return;
  }
  if (*(char *)(param_1[1] + 0x30) != '\0') {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x294) != 0) {
    uVar1 = *(uint *)(param_1 + 0x52);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14416fcaa;
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) &&
       (((int)plVar2[2] == *(int *)((longlong)param_1 + 0x294) &&
        ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar2;
      goto LAB_14416fcaa;
    }
  }
  lVar3 = 0;
LAB_14416fcaa:
                    /* WARNING: Could not recover jumptable at 0x00014416fcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar3 + 0x3ad8) + 0x20))
            (lVar3 + 0x3ad8,*(undefined4 *)((longlong)param_1 + 0x2c4));
  return;
}



// FUNCTION 14416fcce FUN_14416fcce body=24 status=ok
// SIG undefined FUN_14416fcce(void)

longlong FUN_14416fcce(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b975f10;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14416fcec FUN_14416fcec body=12 status=ok
// SIG undefined FUN_14416fcec(void)

void FUN_14416fcec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014416fcf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14416fcf8 FUN_14416fcf8 body=29 status=ok
// SIG undefined FUN_14416fcf8(void)

undefined8 FUN_14416fcf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416fdca FUN_14416fdca body=24 status=ok
// SIG undefined FUN_14416fdca(void)

longlong FUN_14416fdca(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b975f30;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14416fde8 FUN_14416fde8 body=12 status=ok
// SIG undefined FUN_14416fde8(void)

void FUN_14416fde8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014416fdf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14416fdf4 FUN_14416fdf4 body=29 status=ok
// SIG undefined FUN_14416fdf4(void)

undefined8 FUN_14416fdf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416ff06 FUN_14416ff06 body=12 status=ok
// SIG undefined FUN_14416ff06(void)

void FUN_14416ff06(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014416ff0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14416ff12 FUN_14416ff12 body=29 status=ok
// SIG undefined FUN_14416ff12(void)

undefined8 FUN_14416ff12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14416ff30 FUN_14416ff30 body=92 status=ok
// SIG undefined FUN_14416ff30(void)

undefined8 FUN_14416ff30(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_19 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14416ff8e FUN_14416ff8e body=471 status=ok
// SIG undefined FUN_14416ff8e(void)

void FUN_14416ff8e(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x10);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 4;
LAB_14416ffb1:
    if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 8),(longlong)param_2 * 2);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 0x14)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 2;
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
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_144170054;
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
LAB_144170054:
    uVar8 = uVar8 >> 1;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
      uVar8 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar6;
      if (uVar6 < 5) goto LAB_14416ffb1;
    }
    if (*(longlong *)((longlong)param_1 + 8) == 0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar8,2);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 * 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,uVar8,2);
  return;
}



// FUNCTION 144170166 FUN_144170166 body=31 status=ok
// SIG undefined FUN_144170166(void)

undefined8 FUN_144170166(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14417018a FUN_14417018a body=67 status=ok
// SIG undefined FUN_14417018a(void)

void FUN_14417018a(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441701ce FUN_1441701ce body=50 status=ok
// SIG undefined FUN_1441701ce(void)

void FUN_1441701ce(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_2;
  uVar2 = FUN_14477b072(plVar1,DAT_14cb5fbf8);
                    /* WARNING: Could not recover jumptable at 0x0001441701fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
  return;
}



// FUNCTION 144170200 FUN_144170200 body=50 status=ok
// SIG undefined FUN_144170200(void)

void FUN_144170200(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_2;
  uVar2 = FUN_14477b072(plVar1,DAT_14cb5fc28);
                    /* WARNING: Could not recover jumptable at 0x00014417022f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
  return;
}



// FUNCTION 1441702ae FUN_1441702ae body=98 status=ok
// SIG undefined FUN_1441702ae(void)

void FUN_1441702ae(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_2;
  local_20 = *param_1;
  uVar2 = FUN_14477b072(plVar1,DAT_14cb5fbe8);
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144170312 FUN_144170312 body=50 status=ok
// SIG undefined FUN_144170312(void)

void FUN_144170312(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_2;
  uVar2 = FUN_14477b072(plVar1,DAT_14cb5fc18);
                    /* WARNING: Could not recover jumptable at 0x000144170341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
  return;
}



// FUNCTION 144170344 FUN_144170344 body=29 status=ok
// SIG undefined FUN_144170344(void)

undefined8 FUN_144170344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441704e0 FUN_1441704e0 body=93 status=ok
// SIG undefined FUN_1441704e0(void)

void FUN_1441704e0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417053e FUN_14417053e body=93 status=ok
// SIG undefined FUN_14417053e(void)

void FUN_14417053e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417059c FUN_14417059c body=126 status=ok
// SIG undefined FUN_14417059c(void)

void FUN_14417059c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976130;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014417060b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144170626 FUN_144170626 body=267 status=ok
// SIG undefined FUN_144170626(void)

undefined8 FUN_144170626(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14417072b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14417072b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14417072b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441706df;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x68))();
      uVar6 = 1;
      goto LAB_1441706df;
    }
  }
  uVar6 = 0;
LAB_1441706df:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144170732 FUN_144170732 body=29 status=ok
// SIG undefined FUN_144170732(void)

undefined8 FUN_144170732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441708ce FUN_1441708ce body=93 status=ok
// SIG undefined FUN_1441708ce(void)

void FUN_1441708ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9761a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417092c FUN_14417092c body=93 status=ok
// SIG undefined FUN_14417092c(void)

void FUN_14417092c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9761a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417098a FUN_14417098a body=126 status=ok
// SIG undefined FUN_14417098a(void)

void FUN_14417098a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9761a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441709f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144170a30 FUN_144170a30 body=297 status=ok
// SIG undefined FUN_144170a30(void)

undefined8 FUN_144170a30(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144170b53;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144170b53;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144170b53:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144170adb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      *(float *)(lVar5 + 800) =
           *(float *)(*(longlong *)(lVar5 + 0x2e8) + 0x694) + *(float *)(lVar5 + 800);
      FUN_1460dc37e();
      uVar6 = 1;
      goto LAB_144170adb;
    }
  }
  uVar6 = 0;
LAB_144170adb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144170b5a FUN_144170b5a body=29 status=ok
// SIG undefined FUN_144170b5a(void)

undefined8 FUN_144170b5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144170cf6 FUN_144170cf6 body=93 status=ok
// SIG undefined FUN_144170cf6(void)

void FUN_144170cf6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144170d54 FUN_144170d54 body=93 status=ok
// SIG undefined FUN_144170d54(void)

void FUN_144170d54(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144170db2 FUN_144170db2 body=126 status=ok
// SIG undefined FUN_144170db2(void)

void FUN_144170db2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976210;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144170e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144170e3a FUN_144170e3a body=266 status=ok
// SIG undefined FUN_144170e3a(void)

undefined8 FUN_144170e3a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144170f3e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144170f3e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144170f3e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144170ee5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1460dc37e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144170ee5;
    }
  }
  uVar6 = 0;
LAB_144170ee5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144170f46 FUN_144170f46 body=29 status=ok
// SIG undefined FUN_144170f46(void)

undefined8 FUN_144170f46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441710e2 FUN_1441710e2 body=93 status=ok
// SIG undefined FUN_1441710e2(void)

void FUN_1441710e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144171140 FUN_144171140 body=93 status=ok
// SIG undefined FUN_144171140(void)

void FUN_144171140(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417119e FUN_14417119e body=126 status=ok
// SIG undefined FUN_14417119e(void)

void FUN_14417119e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976280;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014417120d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144171226 FUN_144171226 body=269 status=ok
// SIG undefined FUN_144171226(void)

undefined8 FUN_144171226(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14417132d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14417132d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14417132d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441712e1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144171334(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1441712e1;
    }
  }
  uVar6 = 0;
LAB_1441712e1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144171334 FUN_144171334 body=179 status=ok
// SIG undefined FUN_144171334(void)

void FUN_144171334(longlong *param_1)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  undefined8 *****pppppuVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_118 [32];
  undefined2 *puStack_f8;
  undefined2 auStack_e8 [2];
  undefined4 uStack_e4;
  undefined8 ****ppppuStack_e0;
  undefined4 uStack_d8;
  ushort uStack_c8;
  byte bStack_c0;
  ulonglong uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_90;
  byte bStack_78;
  ulonglong uStack_60;
  
  ppppuVar2 = (undefined8 ****)*param_1;
  if (((*(int *)((longlong)ppppuVar2 + 0x294) != 0) &&
      (uVar1 = *(uint *)(ppppuVar2 + 0x52), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)((longlong)ppppuVar2 + 0x294))) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      if (((*(int *)((longlong)ppppuVar2 + 0x28c) != 0) &&
          (uVar1 = *(uint *)(ppppuVar2 + 0x51), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)((longlong)ppppuVar2 + 0x28c))) &&
            ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) && (ppppuVar2[0x5d] != (undefined8 ***)0x0))
        {
          uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
          uVar6 = FUN_14479d2ce(ppppuVar2 + 0x51);
          pppuVar3 = ppppuVar2[0x5d];
          uStack_b8 = uStack_b8 & 0xffffffffffffff00;
          uStack_90 = 0;
          FUN_1456bb102(&uStack_b8,uVar6);
          FUN_1448729ea(pppuVar3 + 0xa4,&ppppuStack_e0,&uStack_b8);
          fVar11 = (float)FUN_144a7b41a(&ppppuStack_e0,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_c0 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar10 = &ppppuStack_e0;
            if (0x18 < uStack_c8) {
              pppppuVar10 = (undefined8 *****)ppppuStack_e0;
            }
            (*pcVar4)(pppppuVar10);
          }
          if (0x18 < uStack_c8) {
            FUN_1400020a8(ppppuStack_e0);
          }
          FUN_144a5ac3a(&uStack_b8);
          pppuVar3 = ppppuVar2[0x5d];
          uStack_b8 = uStack_b8 & 0xffffffffffffff00;
          uStack_90 = 0;
          FUN_1456bb102(&uStack_b8,uVar6);
          FUN_1448729ea(pppuVar3 + 0xae,&ppppuStack_e0,&uStack_b8);
          fVar12 = (float)FUN_144a7b41a(&ppppuStack_e0,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_c0 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar10 = &ppppuStack_e0;
            if (0x18 < uStack_c8) {
              pppppuVar10 = (undefined8 *****)ppppuStack_e0;
            }
            (*pcVar4)(pppppuVar10);
          }
          if (0x18 < uStack_c8) {
            FUN_1400020a8(ppppuStack_e0);
          }
          FUN_144a5ac3a(&uStack_b8);
          if (*(char *)(ppppuVar2[0x5d] + 0xb8) == '\0') {
            fVar12 = -fVar12;
          }
          *(float *)(ppppuVar2 + 0x60) = *(float *)(ppppuVar2 + 0x60) + fVar11;
          FUN_148d49086(ppppuVar2,fVar12 + *(float *)((longlong)ppppuVar2 + 0x2d4));
          ppppuVar2[0x5f] = (undefined8 ***)0x0;
          pppuVar3 = ppppuVar2[0x5d];
          fVar12 = *(float *)(ppppuVar2 + 0x60);
          uStack_b8 = uStack_b8 & 0xffffffffffffff00;
          uStack_90 = 0;
          FUN_1456bb102(&uStack_b8,uVar6);
          FUN_1448729ea(pppuVar3 + 0x9a,&ppppuStack_e0,&uStack_b8);
          fVar13 = (float)FUN_144a7b41a(&ppppuStack_e0,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_c0 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar10 = &ppppuStack_e0;
            if (0x18 < uStack_c8) {
              pppppuVar10 = (undefined8 *****)ppppuStack_e0;
            }
            (*pcVar4)(pppppuVar10);
          }
          if (0x18 < uStack_c8) {
            FUN_1400020a8(ppppuStack_e0);
          }
          FUN_144a5ac3a(&uStack_b8);
          if (0.0001 < ABS(fVar12 - fVar13)) {
            uVar6 = FUN_1401b4c98(uVar6);
            uVar7 = FUN_14479d2ce(ppppuVar2 + 0x51);
            ppppuStack_e0 = (undefined8 *****)0x0;
            uStack_d8 = 0;
            FUN_1446efa72(&ppppuStack_e0,0,3,0x10);
            ppppuVar5 = ppppuStack_e0;
            uStack_d8 = 3;
            *ppppuStack_e0 = (undefined8 ***)&PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 1);
            lVar9 = DAT_14c758608 + 1;
            if (ppppuVar8 == (undefined8 ****)0x0) {
              LOCK();
              UNLOCK();
              ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 2);
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            ppppuStack_e0[2] = ppppuVar8;
            *ppppuStack_e0 = (undefined8 ***)&PTR_FUN_14b9762f0;
            ppppuStack_e0[3] = (undefined8 ****)0x0;
            FUN_14485c47a(ppppuStack_e0 + 3,uVar7);
            ppppuVar5[4] = ppppuVar2;
            uStack_b8 = 0;
            uStack_b0 = 0;
            FUN_14487d8d8(&uStack_b8,&ppppuStack_e0);
            bStack_78 = 1;
            puStack_f8 = auStack_e8;
            auStack_e8[0] = 0;
            uStack_e4 = 0xbf800000;
            FUN_1406f4044(uVar6,ppppuVar2 + 0x5f,&uStack_b8,fVar11);
            (*(code *)(&PTR_LAB_14a1c87a0)[bStack_78])(&uStack_b8);
            FUN_1449db362(&ppppuStack_e0);
          }
          if ((uStack_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
      }
    }
  }
  return;
}



// FUNCTION 1441713e8 FUN_1441713e8 body=29 status=ok
// SIG undefined FUN_1441713e8(void)

undefined8 FUN_1441713e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144171584 FUN_144171584 body=93 status=ok
// SIG undefined FUN_144171584(void)

void FUN_144171584(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9762f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441715e2 FUN_1441715e2 body=93 status=ok
// SIG undefined FUN_1441715e2(void)

void FUN_1441715e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9762f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144171640 FUN_144171640 body=126 status=ok
// SIG undefined FUN_144171640(void)

void FUN_144171640(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9762f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441716af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441716c8 FUN_1441716c8 body=269 status=ok
// SIG undefined FUN_1441716c8(void)

undefined8 FUN_1441716c8(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441717cf;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441717cf;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441717cf:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144171783;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441717d6(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144171783;
    }
  }
  uVar6 = 0;
LAB_144171783:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441717d6 FUN_1441717d6 body=179 status=ok
// SIG undefined FUN_1441717d6(void)

void FUN_1441717d6(longlong *param_1)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  undefined8 *****pppppuVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_118 [32];
  undefined2 *puStack_f8;
  undefined2 auStack_e8 [2];
  undefined4 uStack_e4;
  undefined8 ****ppppuStack_e0;
  undefined4 uStack_d8;
  ushort uStack_c8;
  byte bStack_c0;
  ulonglong uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_90;
  byte bStack_78;
  ulonglong uStack_60;
  
  ppppuVar2 = (undefined8 ****)*param_1;
  if (((*(int *)((longlong)ppppuVar2 + 0x294) != 0) &&
      (uVar1 = *(uint *)(ppppuVar2 + 0x52), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)((longlong)ppppuVar2 + 0x294))) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      if (((*(int *)((longlong)ppppuVar2 + 0x28c) != 0) &&
          (uVar1 = *(uint *)(ppppuVar2 + 0x51), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)((longlong)ppppuVar2 + 0x28c))) &&
            ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) && (ppppuVar2[0x5d] != (undefined8 ***)0x0))
        {
          uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
          uVar6 = FUN_14479d2ce(ppppuVar2 + 0x51);
          pppuVar3 = ppppuVar2[0x5d];
          uStack_b8 = uStack_b8 & 0xffffffffffffff00;
          uStack_90 = 0;
          FUN_1456bb102(&uStack_b8,uVar6);
          FUN_1448729ea(pppuVar3 + 0xa4,&ppppuStack_e0,&uStack_b8);
          fVar11 = (float)FUN_144a7b41a(&ppppuStack_e0,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_c0 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar10 = &ppppuStack_e0;
            if (0x18 < uStack_c8) {
              pppppuVar10 = (undefined8 *****)ppppuStack_e0;
            }
            (*pcVar4)(pppppuVar10);
          }
          if (0x18 < uStack_c8) {
            FUN_1400020a8(ppppuStack_e0);
          }
          FUN_144a5ac3a(&uStack_b8);
          pppuVar3 = ppppuVar2[0x5d];
          uStack_b8 = uStack_b8 & 0xffffffffffffff00;
          uStack_90 = 0;
          FUN_1456bb102(&uStack_b8,uVar6);
          FUN_1448729ea(pppuVar3 + 0xae,&ppppuStack_e0,&uStack_b8);
          fVar12 = (float)FUN_144a7b41a(&ppppuStack_e0,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_c0 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar10 = &ppppuStack_e0;
            if (0x18 < uStack_c8) {
              pppppuVar10 = (undefined8 *****)ppppuStack_e0;
            }
            (*pcVar4)(pppppuVar10);
          }
          if (0x18 < uStack_c8) {
            FUN_1400020a8(ppppuStack_e0);
          }
          FUN_144a5ac3a(&uStack_b8);
          if (*(char *)(ppppuVar2[0x5d] + 0xb8) == '\0') {
            fVar12 = -fVar12;
          }
          *(float *)(ppppuVar2 + 0x60) = *(float *)(ppppuVar2 + 0x60) + fVar11;
          FUN_148d49086(ppppuVar2,fVar12 + *(float *)((longlong)ppppuVar2 + 0x2d4));
          ppppuVar2[0x5f] = (undefined8 ***)0x0;
          pppuVar3 = ppppuVar2[0x5d];
          fVar12 = *(float *)(ppppuVar2 + 0x60);
          uStack_b8 = uStack_b8 & 0xffffffffffffff00;
          uStack_90 = 0;
          FUN_1456bb102(&uStack_b8,uVar6);
          FUN_1448729ea(pppuVar3 + 0x9a,&ppppuStack_e0,&uStack_b8);
          fVar13 = (float)FUN_144a7b41a(&ppppuStack_e0,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_c0 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar10 = &ppppuStack_e0;
            if (0x18 < uStack_c8) {
              pppppuVar10 = (undefined8 *****)ppppuStack_e0;
            }
            (*pcVar4)(pppppuVar10);
          }
          if (0x18 < uStack_c8) {
            FUN_1400020a8(ppppuStack_e0);
          }
          FUN_144a5ac3a(&uStack_b8);
          if (0.0001 < ABS(fVar12 - fVar13)) {
            uVar6 = FUN_1401b4c98(uVar6);
            uVar7 = FUN_14479d2ce(ppppuVar2 + 0x51);
            ppppuStack_e0 = (undefined8 *****)0x0;
            uStack_d8 = 0;
            FUN_1446efa72(&ppppuStack_e0,0,3,0x10);
            ppppuVar5 = ppppuStack_e0;
            uStack_d8 = 3;
            *ppppuStack_e0 = (undefined8 ***)&PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 1);
            lVar9 = DAT_14c758608 + 1;
            if (ppppuVar8 == (undefined8 ****)0x0) {
              LOCK();
              UNLOCK();
              ppppuVar8 = (undefined8 ****)(DAT_14c758608 + 2);
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            ppppuStack_e0[2] = ppppuVar8;
            *ppppuStack_e0 = (undefined8 ***)&PTR_FUN_14b9762f0;
            ppppuStack_e0[3] = (undefined8 ****)0x0;
            FUN_14485c47a(ppppuStack_e0 + 3,uVar7);
            ppppuVar5[4] = ppppuVar2;
            uStack_b8 = 0;
            uStack_b0 = 0;
            FUN_14487d8d8(&uStack_b8,&ppppuStack_e0);
            bStack_78 = 1;
            puStack_f8 = auStack_e8;
            auStack_e8[0] = 0;
            uStack_e4 = 0xbf800000;
            FUN_1406f4044(uVar6,ppppuVar2 + 0x5f,&uStack_b8,fVar11);
            (*(code *)(&PTR_LAB_14a1c87a0)[bStack_78])(&uStack_b8);
            FUN_1449db362(&ppppuStack_e0);
          }
          if ((uStack_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
      }
    }
  }
  return;
}



// FUNCTION 14417188a FUN_14417188a body=262 status=ok
// SIG undefined FUN_14417188a(void)

undefined8 FUN_14417188a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x294) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x290);
    uVar5 = 0;
    if ((int)uVar1 < 0) goto LAB_14417193d;
    if (DAT_14c9647dc <= (int)uVar1) goto LAB_14417193d;
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x294))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      if (*(int *)(lVar2 + 0x28c) != 0) {
        uVar1 = *(uint *)(lVar2 + 0x288);
        uVar5 = 0;
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14417193d;
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (((lVar4 != 0) &&
            ((*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x28c) &&
             ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) && (*(longlong *)(lVar2 + 0x350) != 0)) {
          cVar3 = FUN_14149528c(lVar2);
          if (cVar3 != '\0') {
            local_28 = 0;
            local_20 = 0;
            local_18 = 0;
            FUN_140e0bd1c(lVar2);
            uVar5 = 1;
            goto LAB_14417193d;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_14417193d:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441719bc FUN_1441719bc body=29 status=ok
// SIG undefined FUN_1441719bc(void)

undefined8 FUN_1441719bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441719da FUN_1441719da body=29 status=ok
// SIG undefined FUN_1441719da(void)

undefined8 FUN_1441719da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144171b76 FUN_144171b76 body=93 status=ok
// SIG undefined FUN_144171b76(void)

void FUN_144171b76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9763a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144171bd4 FUN_144171bd4 body=93 status=ok
// SIG undefined FUN_144171bd4(void)

void FUN_144171bd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9763a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144171c32 FUN_144171c32 body=126 status=ok
// SIG undefined FUN_144171c32(void)

void FUN_144171c32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9763a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144171ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144171cb0 FUN_144171cb0 body=66 status=ok
// SIG undefined FUN_144171cb0(void)

void FUN_144171cb0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144171e0c(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144171cf4 FUN_144171cf4 body=279 status=ok
// SIG undefined FUN_144171cf4(void)

undefined8 FUN_144171cf4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144171e05;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144171e05;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144171e05:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144171db9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144171e0c(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144171db9;
    }
  }
  uVar6 = 0;
LAB_144171db9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144171e0c FUN_144171e0c body=1065 status=ok
// SIG undefined FUN_144171e0c(void)

void FUN_144171e0c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_a8 [2];
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) goto LAB_144171f0b;
  lVar2 = *param_1;
  if ((((((*(int *)(lVar2 + 0x294) == 0) || (uVar5 = *(uint *)(lVar2 + 0x290), (int)uVar5 < 0)) ||
        (DAT_14c9647dc <= (int)uVar5)) ||
       ((lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar10 == 0 ||
        (*(int *)(lVar10 + 0x10) != *(int *)(lVar2 + 0x294))))) ||
      (((*(uint *)(lVar10 + 8) & 0x10200000) != 0 ||
       ((*(int *)(lVar2 + 0x28c) == 0 || (uVar5 = *(uint *)(lVar2 + 0x288), (int)uVar5 < 0)))))) ||
     ((DAT_14c9647dc <= (int)uVar5 ||
      ((((lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar10 == 0 ||
         (*(int *)(lVar10 + 0x10) != *(int *)(lVar2 + 0x28c))) ||
        ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) || (*(longlong *)(lVar2 + 0x350) == 0))))))
  goto LAB_144171f0b;
  uVar6 = (**(code **)(*param_2 + 0xd8))(param_2);
  cVar4 = FUN_14149528c(lVar2,uVar6);
  if (cVar4 == '\0') goto LAB_144171f0b;
  uVar6 = 0;
  uVar12 = (**(code **)(*param_2 + 0x140))(param_2,0);
  fVar13 = (float)(**(code **)(*param_2 + 0x168))(param_2,uVar12);
  lVar10 = *(longlong *)(lVar2 + 0x350);
  if (*(int *)(lVar2 + 0x28c) != 0) {
    uVar5 = *(uint *)(lVar2 + 0x288);
    uVar6 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(lVar2 + 0x28c) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar7;
      }
    }
  }
  local_d0 = local_d0 & 0xffffffffffffff00;
  local_a8[0] = 0;
  FUN_1456bb102(&local_d0,uVar6);
  pfVar9 = &local_a0;
  FUN_1448729ea(lVar10 + 0x530,pfVar9,&local_d0);
  if (local_80 == 3) {
    uVar5 = 3;
    fVar14 = local_a0;
  }
  else {
    pfVar11 = &local_78;
    FUN_1400b56fe(pfVar11,&local_a0,3);
    fVar14 = local_78;
    if (local_58 == 0) {
      fVar14 = 1.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_60) {
        pfVar11 = (float *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar3)(pfVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar5 = (uint)local_80;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      pfVar9 = (float *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if (*(int *)(lVar2 + 0x294) == 0) {
LAB_144172193:
    lVar10 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar2 + 0x290);
    lVar10 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(lVar2 + 0x294) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))
         )) goto LAB_144172193;
      lVar10 = *plVar8;
    }
  }
  uVar6 = (**(code **)(*param_2 + 0xd8))(param_2);
  FUN_140cf321e(lVar10 + 0x4128,fVar13 * fVar14,uVar6);
  lVar10 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = (longlong *)0x0;
  FUN_140e0bd1c(lVar2);
  if (*(int *)(lVar2 + 0x294) != 0) {
    uVar5 = *(uint *)(lVar2 + 0x290);
    lVar10 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(lVar2 + 0x294) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))
         )) {
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar8;
      }
    }
  }
  FUN_148d4974e(lVar10 + 0x70d0,*(undefined4 *)(lVar2 + 0x2c4));
LAB_144171f0b:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144172236 FUN_144172236 body=29 status=ok
// SIG undefined FUN_144172236(void)

undefined8 FUN_144172236(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441723d2 FUN_1441723d2 body=93 status=ok
// SIG undefined FUN_1441723d2(void)

void FUN_1441723d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b976410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144172430 FUN_144172430 body=93 status=ok
// SIG undefined FUN_144172430(void)

void FUN_144172430(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b976410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417248e FUN_14417248e body=126 status=ok
// SIG undefined FUN_14417248e(void)

void FUN_14417248e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b976410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441724fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14417250c FUN_14417250c body=66 status=ok
// SIG undefined FUN_14417250c(void)

void FUN_14417250c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144172668(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144172550 FUN_144172550 body=279 status=ok
// SIG undefined FUN_144172550(void)

undefined8 FUN_144172550(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144172661;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144172661;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144172661:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144172615;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144172668(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144172615;
    }
  }
  uVar6 = 0;
LAB_144172615:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144172668 FUN_144172668 body=1445 status=ok
// SIG undefined FUN_144172668(void)

void FUN_144172668(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  undefined8 ****ppppuVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_3f8 [32];
  undefined8 ***local_3d8;
  undefined8 ***local_3d0;
  undefined8 ***local_3c8;
  undefined **local_3c0;
  undefined *local_3b8;
  longlong local_3b0;
  ulonglong uStack_3a8;
  char local_388 [16];
  longlong *local_378;
  ulonglong local_360 [3];
  longlong local_348;
  undefined1 local_340 [60];
  undefined4 local_304;
  byte local_1c8;
  undefined1 local_138 [192];
  undefined8 ***local_78;
  undefined4 local_70;
  undefined8 local_68;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) goto LAB_144172767;
  lVar3 = *param_1;
  if ((((((*(int *)(lVar3 + 0x294) == 0) || (uVar2 = *(uint *)(lVar3 + 0x290), (int)uVar2 < 0)) ||
        (DAT_14c9647dc <= (int)uVar2)) ||
       ((lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar14 == 0 ||
        (*(int *)(lVar14 + 0x10) != *(int *)(lVar3 + 0x294))))) ||
      ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)) ||
     ((((*(int *)(lVar3 + 0x28c) == 0 || (uVar2 = *(uint *)(lVar3 + 0x288), (int)uVar2 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar2 ||
        (((lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar14 == 0 ||
          (*(int *)(lVar14 + 0x10) != *(int *)(lVar3 + 0x28c))) ||
         ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))))) || (*(longlong *)(lVar3 + 0x350) == 0))))
  goto LAB_144172767;
  uVar6 = (**(code **)(*param_2 + 0xd8))(param_2);
  cVar5 = FUN_14149528c(lVar3,uVar6);
  if (cVar5 == '\0') goto LAB_144172767;
  uVar6 = 0;
  fVar16 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
  lVar14 = *(longlong *)(lVar3 + 0x350);
  if (*(int *)(lVar3 + 0x28c) != 0) {
    uVar2 = *(uint *)(lVar3 + 0x288);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(lVar3 + 0x28c) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar9;
      }
    }
  }
  local_388[0] = '\0';
  local_360[0] = local_360[0] & 0xffffffff00000000;
  FUN_1456bb102(local_388,uVar6);
  FUN_1448729ea(lVar14 + 0x530,&local_78,local_388);
  if (local_58 == 3) {
    local_58 = 3;
    fVar17 = local_78._0_4_;
  }
  else {
    FUN_1400b56fe(&local_3c8,&local_78,3);
    if ((byte)uStack_3a8 == 0) {
      fVar17 = 1.0;
    }
    else {
      fVar17 = local_3c8._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_3a8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar12 = &local_3c8;
      if (0x18 < (ushort)local_3b0) {
        ppppuVar12 = (undefined8 ****)local_3c8;
      }
      (*pcVar4)(ppppuVar12);
    }
    if (0x18 < (ushort)local_3b0) {
      FUN_1400020a8(local_3c8);
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar12 = &local_78;
    if (0x18 < local_60) {
      ppppuVar12 = (undefined8 ****)local_78;
    }
    (*pcVar4)(ppppuVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78);
  }
  FUN_1448173f8(local_360);
  if ((local_388[0] == '\x03') && (local_378 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_378 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_378 + 0x10))();
    }
  }
  lVar14 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_14082cf0e(local_388,*(undefined8 *)(lVar14 + 0x18),0,0);
  if ((((*(int *)(lVar3 + 0x294) == 0) || (uVar2 = *(uint *)(lVar3 + 0x290), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((puVar10 = (ulonglong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar10 == (ulonglong *)0x0 || ((int)puVar10[2] != *(int *)(lVar3 + 0x294))) ||
      ((puVar10[1] & 0x10200000) != 0)))) {
    uVar15 = 0;
  }
  else {
    uVar15 = *puVar10;
    if ((uVar15 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(uVar15);
    }
  }
  local_360[0] = uVar15;
  local_348 = (**(code **)(*param_2 + 0xe0))(param_2);
  puVar7 = (undefined1 *)(**(code **)(*param_2 + 0xd8))(param_2);
  if (local_340 != puVar7) {
    puVar11 = *(undefined1 **)(puVar7 + 0x30);
    if (*(undefined1 **)(puVar7 + 0x30) == (undefined1 *)0x0) {
      puVar11 = puVar7;
    }
    FUN_1400709d4(local_340,puVar11,*(undefined4 *)(puVar7 + 0x38),local_304);
  }
  local_3c8 = (undefined8 ***)CONCAT44(local_3c8._4_4_,7);
  FUN_1405c5fa2();
  local_3b8 = &DAT_14cb769e8;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3c0 = &PTR_FUN_14b0394b0;
  FUN_14572d130(local_138,&local_3c8);
  local_3c0 = (undefined **)&DAT_14a171d50;
  uVar15 = uStack_3a8 >> 0x20;
  uStack_3a8 = uStack_3a8 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    FUN_140115c12(&local_3b0,0);
  }
  local_3b8 = (undefined *)0x0;
  if (local_3b0 != 0) {
    FUN_1400020a8();
  }
  local_1c8 = local_1c8 | 8;
  local_3c8 = (undefined8 ****)0x0;
  local_3b8 = (undefined *)0x0;
  local_3d8 = &local_3c8;
  FUN_14082d216(local_388,fVar16 * fVar17,0,1);
  if (local_348 == 0) {
    puVar13 = &DAT_14c9485f0;
  }
  else {
    puVar13 = &DAT_14c9485f0;
    if (*(undefined4 **)(local_348 + 8) != (undefined4 *)0x0) {
      puVar13 = *(undefined4 **)(local_348 + 8);
    }
  }
  if (DAT_14c947fe0 == 0) {
    lVar14 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar14);
    DAT_14c947fe0 = lVar14;
  }
  FUN_140045924(DAT_14c947fe0,&local_3d0,puVar13,1);
  local_78 = local_3d0;
  local_70 = 0x3002;
  local_68 = 0;
  FUN_140e0bd1c(lVar3);
  if (*(int *)(lVar3 + 0x294) == 0) {
LAB_144172b5c:
    lVar14 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x290);
    lVar14 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(lVar3 + 0x294) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))
         )) goto LAB_144172b5c;
      lVar14 = *plVar8;
    }
  }
  FUN_148d4974e(lVar14 + 0x70d0,*(undefined4 *)(lVar3 + 0x2c4));
  FUN_1403dfdc4(local_388);
LAB_144172767:
  if ((local_50 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144172c0e FUN_144172c0e body=1263 status=ok
// SIG undefined FUN_144172c0e(void)

undefined8 FUN_144172c0e(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x294) != 0) {
    uVar5 = *(uint *)(lVar2 + 0x290);
    uVar7 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_144172cf8;
    lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       (((*(int *)(lVar6 + 0x10) == *(int *)(lVar2 + 0x294) &&
         ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) && (*(int *)(lVar2 + 0x28c) != 0)))) {
      uVar5 = *(uint *)(lVar2 + 0x288);
      uVar7 = 0;
      if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_144172cf8;
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      if ((lVar6 != 0) &&
         (((*(int *)(lVar6 + 0x10) == *(int *)(lVar2 + 0x28c) &&
           ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) &&
          ((*(longlong *)(lVar2 + 0x350) != 0 && (cVar4 = FUN_14149528c(lVar2), cVar4 != '\0'))))))
      {
        lVar6 = *(longlong *)(lVar2 + 0x350);
        if (*(int *)(lVar2 + 0x28c) == 0) {
LAB_144172fdb:
          uVar7 = 0;
        }
        else {
          uVar5 = *(uint *)(lVar2 + 0x288);
          uVar7 = 0;
          if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
            puVar8 = (undefined8 *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if ((puVar8 == (undefined8 *)0x0) ||
               ((*(int *)(puVar8 + 2) != *(int *)(lVar2 + 0x28c) ||
                ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144172fdb;
            uVar7 = *puVar8;
          }
        }
        local_d0 = local_d0 & 0xffffffffffffff00;
        local_a8[0] = 0;
        FUN_1456bb102(&local_d0,uVar7);
        puVar9 = &local_a0;
        FUN_1448729ea(lVar6 + 0x530,puVar9,&local_d0);
        if (local_80 == 3) {
          uVar5 = 3;
          uVar11 = local_a0;
        }
        else {
          puVar10 = &local_78;
          FUN_1400b56fe(puVar10,&local_a0,3);
          uVar11 = local_78;
          if (local_58 == 0) {
            uVar11 = 0x3f800000;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_60) {
              puVar10 = (undefined4 *)CONCAT44(uStack_74,local_78);
            }
            (*pcVar3)(puVar10);
          }
          if (0x18 < local_60) {
            FUN_1400020a8(CONCAT44(uStack_74,local_78));
          }
          uVar5 = (uint)local_80;
        }
        *param_3 = uVar11;
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_88) {
            puVar9 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
          }
          (*pcVar3)(puVar9);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
        }
        FUN_1448173f8(local_a8);
        if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
        }
        lVar6 = *(longlong *)(lVar2 + 0x350);
        if (*(int *)(lVar2 + 0x28c) == 0) {
LAB_144172fe2:
          uVar7 = 0;
        }
        else {
          uVar5 = *(uint *)(lVar2 + 0x288);
          uVar7 = 0;
          if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
            puVar8 = (undefined8 *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if ((puVar8 == (undefined8 *)0x0) ||
               ((*(int *)(puVar8 + 2) != *(int *)(lVar2 + 0x28c) ||
                ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144172fe2;
            uVar7 = *puVar8;
          }
        }
        local_d0 = local_d0 & 0xffffffffffffff00;
        local_a8[0] = 0;
        FUN_1456bb102(&local_d0,uVar7);
        puVar9 = &local_a0;
        FUN_1448729ea(lVar6 + 0x580,puVar9,&local_d0);
        if (local_80 == 3) {
          uVar5 = 3;
          uVar11 = local_a0;
        }
        else {
          puVar10 = &local_78;
          FUN_1400b56fe(puVar10,&local_a0,3);
          uVar11 = local_78;
          if (local_58 == 0) {
            uVar11 = 0x3f800000;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_60) {
              puVar10 = (undefined4 *)CONCAT44(uStack_74,local_78);
            }
            (*pcVar3)(puVar10);
          }
          if (0x18 < local_60) {
            FUN_1400020a8(CONCAT44(uStack_74,local_78));
          }
          uVar5 = (uint)local_80;
        }
        param_3[1] = uVar11;
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_88) {
            puVar9 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
          }
          (*pcVar3)(puVar9);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
        }
        FUN_1448173f8(local_a8);
        if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
        }
        *(undefined1 *)(param_3 + 2) = *(undefined1 *)(*(longlong *)(lVar2 + 0x350) + 0x5d0);
        lVar6 = *(longlong *)(lVar2 + 0x350);
        (**(code **)(*(longlong *)(param_3 + 6) + 0x20))(param_3 + 6,0);
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(lVar6 + 0x5e0);
        FUN_1406022fe(param_3 + 10,lVar6 + 0x5e8);
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = (longlong *)0x0;
        FUN_140e0bd1c(lVar2);
        uVar7 = 1;
        goto LAB_144172cf8;
      }
    }
  }
  uVar7 = 0;
LAB_144172cf8:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 144173128 FUN_144173128 body=29 status=ok
// SIG undefined FUN_144173128(void)

undefined8 FUN_144173128(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144173146 FUN_144173146 body=29 status=ok
// SIG undefined FUN_144173146(void)

undefined8 FUN_144173146(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441732e2 FUN_1441732e2 body=93 status=ok
// SIG undefined FUN_1441732e2(void)

void FUN_1441732e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9764a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144173340 FUN_144173340 body=93 status=ok
// SIG undefined FUN_144173340(void)

void FUN_144173340(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9764a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417339e FUN_14417339e body=126 status=ok
// SIG undefined FUN_14417339e(void)

void FUN_14417339e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9764a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014417340d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14417341c FUN_14417341c body=66 status=ok
// SIG undefined FUN_14417341c(void)

void FUN_14417341c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144173578(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144173460 FUN_144173460 body=279 status=ok
// SIG undefined FUN_144173460(void)

undefined8 FUN_144173460(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144173571;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144173571;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144173571:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144173525;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144173578(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144173525;
    }
  }
  uVar6 = 0;
LAB_144173525:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144173578 FUN_144173578 body=237 status=ok
// SIG undefined FUN_144173578(void)

void FUN_144173578(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar2 = *param_1;
    if (((*(int *)(lVar2 + 0x294) != 0) && (uVar1 = *(uint *)(lVar2 + 0x290), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(lVar2 + 0x294))) &&
         ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
        if (((*(int *)(lVar2 + 0x28c) != 0) && (uVar1 = *(uint *)(lVar2 + 0x288), -1 < (int)uVar1))
           && ((int)uVar1 < DAT_14c9647dc)) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(lVar2 + 0x28c))) &&
              ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) && (*(longlong *)(lVar2 + 0x350) != 0)) {
            uVar4 = (**(code **)(*param_2 + 0xd8))(param_2);
            cVar3 = FUN_14149528c(lVar2,uVar4);
            if (cVar3 != '\0') {
              FUN_148d4a656(lVar2,param_2);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14417367a FUN_14417367a body=66 status=ok
// SIG undefined FUN_14417367a(void)

undefined8 FUN_14417367a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
    lVar2 = FUN_1413202de();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1441736d0 FUN_1441736d0 body=53 status=ok
// SIG undefined FUN_1441736d0(void)

void FUN_1441736d0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1418e8f6e(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 144173706 FUN_144173706 body=531 status=ok
// SIG undefined FUN_144173706(void)

void FUN_144173706(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  uint local_78;
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
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 2);
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14417377a;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       (((int)plVar5[2] == *(int *)((longlong)param_1 + 0x14) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      lVar4 = *plVar5;
      goto LAB_14417377a;
    }
  }
  lVar4 = 0;
LAB_14417377a:
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0xc))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((lVar4 != 0 && (lVar3 = *plVar5, lVar3 != 0)))))) {
      local_78 = local_78 & 0xffffff00;
      FUN_14113775c(lVar3,&DAT_14c846480,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0);
      FUN_144181da8(lVar3,lVar4,*(undefined1 *)(lVar2 + 0x68),0);
      if (DAT_14cb939a8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_140940982;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146522c26;
        local_48 = &LAB_148a0db91;
        local_50 = &LAB_146572ba7;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0xdd8;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
      }
      if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
        local_70 = 0xffffffff;
        local_78 = CONCAT31(local_78._1_3_,1);
        FUN_148ccdb16(lVar4,lVar3,*(undefined1 *)(lVar2 + 0x68),1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14417394e FUN_14417394e body=29 status=ok
// SIG undefined FUN_14417394e(void)

undefined8 FUN_14417394e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14417396c FUN_14417396c body=29 status=ok
// SIG undefined FUN_14417396c(void)

undefined8 FUN_14417396c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144173b08 FUN_144173b08 body=93 status=ok
// SIG undefined FUN_144173b08(void)

void FUN_144173b08(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144173b66 FUN_144173b66 body=93 status=ok
// SIG undefined FUN_144173b66(void)

void FUN_144173b66(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144173bc4 FUN_144173bc4 body=126 status=ok
// SIG undefined FUN_144173bc4(void)

void FUN_144173bc4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144173c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144173c4c FUN_144173c4c body=266 status=ok
// SIG undefined FUN_144173c4c(void)

undefined8 FUN_144173c4c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144173d50;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144173d50;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144173d50:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144173cf7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d4c230(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144173cf7;
    }
  }
  uVar6 = 0;
LAB_144173cf7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144173d58 FUN_144173d58 body=29 status=ok
// SIG undefined FUN_144173d58(void)

undefined8 FUN_144173d58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144173ef4 FUN_144173ef4 body=93 status=ok
// SIG undefined FUN_144173ef4(void)

void FUN_144173ef4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9765a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144173f52 FUN_144173f52 body=93 status=ok
// SIG undefined FUN_144173f52(void)

void FUN_144173f52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9765a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144173fb0 FUN_144173fb0 body=126 status=ok
// SIG undefined FUN_144173fb0(void)

void FUN_144173fb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9765a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014417401f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144174038 FUN_144174038 body=275 status=ok
// SIG undefined FUN_144174038(void)

undefined8 FUN_144174038(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144174145;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144174145;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144174145:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441740e7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d4f0a8(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_1441740e7;
    }
  }
  uVar6 = 0;
LAB_1441740e7:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14417414c FUN_14417414c body=29 status=ok
// SIG undefined FUN_14417414c(void)

undefined8 FUN_14417414c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441742e8 FUN_1441742e8 body=93 status=ok
// SIG undefined FUN_1441742e8(void)

void FUN_1441742e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144174346 FUN_144174346 body=93 status=ok
// SIG undefined FUN_144174346(void)

void FUN_144174346(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441743a4 FUN_1441743a4 body=126 status=ok
// SIG undefined FUN_1441743a4(void)

void FUN_1441743a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144174413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14417442e FUN_14417442e body=268 status=ok
// SIG undefined FUN_14417442e(void)

undefined8 FUN_14417442e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144174534;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144174534;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144174534:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441744d9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      FUN_148d4e2c0(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_1441744d9;
    }
  }
  uVar6 = 0;
LAB_1441744d9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14417453c FUN_14417453c body=29 status=ok
// SIG undefined FUN_14417453c(void)

undefined8 FUN_14417453c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441746d8 FUN_1441746d8 body=93 status=ok
// SIG undefined FUN_1441746d8(void)

void FUN_1441746d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144174736 FUN_144174736 body=93 status=ok
// SIG undefined FUN_144174736(void)

void FUN_144174736(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144174794 FUN_144174794 body=126 status=ok
// SIG undefined FUN_144174794(void)

void FUN_144174794(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976680;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144174803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144174812 FUN_144174812 body=52 status=ok
// SIG undefined FUN_144174812(void)

void FUN_144174812(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_148d4c4bc(lVar1,*(longlong *)(lVar1 + 0x28) + 0x178,*(undefined4 *)(lVar1 + 0x50));
  FUN_148d4d2b8(lVar1);
  FUN_148d4d6a4(lVar1);
  return;
}



// FUNCTION 144174846 FUN_144174846 body=299 status=ok
// SIG undefined FUN_144174846(void)

undefined8 FUN_144174846(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14417496b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14417496b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14417496b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441748f1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      FUN_148d4c4bc(lVar5,*(longlong *)(lVar5 + 0x28) + 0x178,*(undefined4 *)(lVar5 + 0x50));
      FUN_148d4d2b8(lVar5);
      FUN_148d4d6a4(lVar5);
      uVar6 = 1;
      goto LAB_1441748f1;
    }
  }
  uVar6 = 0;
LAB_1441748f1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144174972 FUN_144174972 body=29 status=ok
// SIG undefined FUN_144174972(void)

undefined8 FUN_144174972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144174b0e FUN_144174b0e body=93 status=ok
// SIG undefined FUN_144174b0e(void)

void FUN_144174b0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9766f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144174b6c FUN_144174b6c body=93 status=ok
// SIG undefined FUN_144174b6c(void)

void FUN_144174b6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9766f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144174bca FUN_144174bca body=126 status=ok
// SIG undefined FUN_144174bca(void)

void FUN_144174bca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9766f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144174c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144174c5e FUN_144174c5e body=286 status=ok
// SIG undefined FUN_144174c5e(void)

undefined8 FUN_144174c5e(longlong param_1,longlong *param_2)

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
    if (iVar1 == 2) goto LAB_144174d76;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144174d76;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144174d76:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144174d22;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 200) == *param_2) {
        FUN_148d4ed64();
      }
      goto LAB_144174d22;
    }
  }
  uVar6 = 0;
LAB_144174d22:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144174d7e FUN_144174d7e body=29 status=ok
// SIG undefined FUN_144174d7e(void)

undefined8 FUN_144174d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144174f1a FUN_144174f1a body=93 status=ok
// SIG undefined FUN_144174f1a(void)

void FUN_144174f1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144174f78 FUN_144174f78 body=93 status=ok
// SIG undefined FUN_144174f78(void)

void FUN_144174f78(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144174fd6 FUN_144174fd6 body=126 status=ok
// SIG undefined FUN_144174fd6(void)

void FUN_144174fd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144175045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14417505e FUN_14417505e body=266 status=ok
// SIG undefined FUN_14417505e(void)

undefined8 FUN_14417505e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144175162;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144175162;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144175162:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144175109;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d4dd1c(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144175109;
    }
  }
  uVar6 = 0;
LAB_144175109:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14417516a FUN_14417516a body=29 status=ok
// SIG undefined FUN_14417516a(void)

undefined8 FUN_14417516a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144175306 FUN_144175306 body=93 status=ok
// SIG undefined FUN_144175306(void)

void FUN_144175306(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9767d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144175364 FUN_144175364 body=93 status=ok
// SIG undefined FUN_144175364(void)

void FUN_144175364(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9767d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441753c2 FUN_1441753c2 body=126 status=ok
// SIG undefined FUN_1441753c2(void)

void FUN_1441753c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9767d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144175431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14417544c FUN_14417544c body=268 status=ok
// SIG undefined FUN_14417544c(void)

undefined8 FUN_14417544c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144175552;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144175552;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144175552:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441754f7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d4e2c0(*(undefined8 *)(param_1 + 0x20),0);
      uVar6 = 1;
      goto LAB_1441754f7;
    }
  }
  uVar6 = 0;
LAB_1441754f7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14417555a FUN_14417555a body=29 status=ok
// SIG undefined FUN_14417555a(void)

undefined8 FUN_14417555a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441756f6 FUN_1441756f6 body=93 status=ok
// SIG undefined FUN_1441756f6(void)

void FUN_1441756f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b976840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144175754 FUN_144175754 body=93 status=ok
// SIG undefined FUN_144175754(void)

void FUN_144175754(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b976840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441757b2 FUN_1441757b2 body=126 status=ok
// SIG undefined FUN_1441757b2(void)

void FUN_1441757b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b976840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144175821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14417583a FUN_14417583a body=275 status=ok
// SIG undefined FUN_14417583a(void)

undefined8 FUN_14417583a(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144175947;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144175947;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144175947:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441758e9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d52bea(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_1441758e9;
    }
  }
  uVar6 = 0;
LAB_1441758e9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14417594e FUN_14417594e body=29 status=ok
// SIG undefined FUN_14417594e(void)

undefined8 FUN_14417594e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144175aea FUN_144175aea body=93 status=ok
// SIG undefined FUN_144175aea(void)

void FUN_144175aea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9768b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144175b48 FUN_144175b48 body=93 status=ok
// SIG undefined FUN_144175b48(void)

void FUN_144175b48(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9768b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144175ba6 FUN_144175ba6 body=126 status=ok
// SIG undefined FUN_144175ba6(void)

void FUN_144175ba6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9768b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144175c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144175c24 FUN_144175c24 body=128 status=ok
// SIG undefined FUN_144175c24(void)

void FUN_144175c24(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined4 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  memset(local_118,0,0x100);
  local_48 = 0xffffffff;
  local_114 = 0x3f800000;
  local_74 = 0xffffffff;
  FUN_148d512aa(uVar1,local_118,1,0);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144175ca6 FUN_144175ca6 body=345 status=ok
// SIG undefined FUN_144175ca6(void)

undefined8 FUN_144175ca6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144175df9;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_144175df9;
    }
    FUN_140192332(param_1 + 0x18,&local_128,0);
    lVar8 = CONCAT44(uStack_124,local_128);
  }
  else {
LAB_144175df9:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144175d59;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      memset(&local_128,0,0x100);
      local_58 = 0xffffffff;
      uStack_124 = 0x3f800000;
      local_84 = 0xffffffff;
      uVar7 = 1;
      FUN_148d512aa(uVar3,&local_128,1,0);
      goto LAB_144175d59;
    }
  }
  uVar7 = 0;
LAB_144175d59:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144175e00 FUN_144175e00 body=29 status=ok
// SIG undefined FUN_144175e00(void)

undefined8 FUN_144175e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144175f9c FUN_144175f9c body=93 status=ok
// SIG undefined FUN_144175f9c(void)

void FUN_144175f9c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144175ffa FUN_144175ffa body=93 status=ok
// SIG undefined FUN_144175ffa(void)

void FUN_144175ffa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144176058 FUN_144176058 body=126 status=ok
// SIG undefined FUN_144176058(void)

void FUN_144176058(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976970;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441760c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441760d6 FUN_1441760d6 body=139 status=ok
// SIG undefined FUN_1441760d6(void)

void FUN_1441760d6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined4 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 400) = 0;
  memset(local_118,0,0x100);
  local_48 = 0xffffffff;
  local_114 = 0x3f800000;
  local_74 = 0xffffffff;
  FUN_148d512aa(lVar1,local_118,1,0);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144176162 FUN_144176162 body=356 status=ok
// SIG undefined FUN_144176162(void)

undefined8 FUN_144176162(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441762c0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441762c0;
    }
    FUN_140192332(param_1 + 0x18,&local_128,0);
    lVar7 = CONCAT44(uStack_124,local_128);
  }
  else {
LAB_1441762c0:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144176215;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar5 + 400) = 0;
      memset(&local_128,0,0x100);
      local_58 = 0xffffffff;
      uStack_124 = 0x3f800000;
      local_84 = 0xffffffff;
      uVar6 = 1;
      FUN_148d512aa(lVar5,&local_128,1,0);
      goto LAB_144176215;
    }
  }
  uVar6 = 0;
LAB_144176215:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441762c8 FUN_1441762c8 body=29 status=ok
// SIG undefined FUN_1441762c8(void)

undefined8 FUN_1441762c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144176464 FUN_144176464 body=93 status=ok
// SIG undefined FUN_144176464(void)

void FUN_144176464(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9769e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441764c2 FUN_1441764c2 body=93 status=ok
// SIG undefined FUN_1441764c2(void)

void FUN_1441764c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9769e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144176520 FUN_144176520 body=126 status=ok
// SIG undefined FUN_144176520(void)

void FUN_144176520(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9769e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014417658f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441765b4 FUN_1441765b4 body=286 status=ok
// SIG undefined FUN_1441765b4(void)

undefined8 FUN_1441765b4(longlong param_1,longlong *param_2)

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
    if (iVar1 == 2) goto LAB_1441766cc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441766cc;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441766cc:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144176678;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x170) == *param_2) {
        FUN_148d533be();
      }
      goto LAB_144176678;
    }
  }
  uVar6 = 0;
LAB_144176678:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441766d4 FUN_1441766d4 body=29 status=ok
// SIG undefined FUN_1441766d4(void)

undefined8 FUN_1441766d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144176870 FUN_144176870 body=93 status=ok
// SIG undefined FUN_144176870(void)

void FUN_144176870(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441768ce FUN_1441768ce body=93 status=ok
// SIG undefined FUN_1441768ce(void)

void FUN_1441768ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14417692c FUN_14417692c body=126 status=ok
// SIG undefined FUN_14417692c(void)

void FUN_14417692c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976a50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014417699b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441769b4 FUN_1441769b4 body=266 status=ok
// SIG undefined FUN_1441769b4(void)

undefined8 FUN_1441769b4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144176ab8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144176ab8;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144176ab8:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144176a5f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d50b3c(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144176a5f;
    }
  }
  uVar6 = 0;
LAB_144176a5f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144176ac0 FUN_144176ac0 body=29 status=ok
// SIG undefined FUN_144176ac0(void)

undefined8 FUN_144176ac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144176c5c FUN_144176c5c body=93 status=ok
// SIG undefined FUN_144176c5c(void)

void FUN_144176c5c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144176cba FUN_144176cba body=93 status=ok
// SIG undefined FUN_144176cba(void)

void FUN_144176cba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144176d18 FUN_144176d18 body=126 status=ok
// SIG undefined FUN_144176d18(void)

void FUN_144176d18(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976ac0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144176d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144176daa FUN_144176daa body=277 status=ok
// SIG undefined FUN_144176daa(void)

undefined8 FUN_144176daa(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144176eb9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144176eb9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144176eb9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144176e6d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x90) = 0;
      FUN_14416c32c();
      uVar6 = 1;
      goto LAB_144176e6d;
    }
  }
  uVar6 = 0;
LAB_144176e6d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144176ec0 FUN_144176ec0 body=29 status=ok
// SIG undefined FUN_144176ec0(void)

undefined8 FUN_144176ec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14417705c FUN_14417705c body=93 status=ok
// SIG undefined FUN_14417705c(void)

void FUN_14417705c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441770ba FUN_1441770ba body=93 status=ok
// SIG undefined FUN_1441770ba(void)

void FUN_1441770ba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144177118 FUN_144177118 body=126 status=ok
// SIG undefined FUN_144177118(void)

void FUN_144177118(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b976b30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144177187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441771aa FUN_1441771aa body=277 status=ok
// SIG undefined FUN_1441771aa(void)

undefined8 FUN_1441771aa(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441772b9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441772b9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441772b9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14417726d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x90) = 0;
      FUN_14416c32c();
      uVar6 = 1;
      goto LAB_14417726d;
    }
  }
  uVar6 = 0;
LAB_14417726d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441772c0 FUN_1441772c0 body=29 status=ok
// SIG undefined FUN_1441772c0(void)

undefined8 FUN_1441772c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14417745c FUN_14417745c body=93 status=ok
// SIG undefined FUN_14417745c(void)

void FUN_14417745c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441774ba FUN_1441774ba body=93 status=ok
// SIG undefined FUN_1441774ba(void)

void FUN_1441774ba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b976ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144177518 FUN_144177518 body=126 status=ok
// SIG undefined FUN_144177518(void)

void FUN_144177518(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b976ba0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144177587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441775a2 FUN_1441775a2 body=268 status=ok
// SIG undefined FUN_1441775a2(void)

undefined8 FUN_1441775a2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441776a8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441776a8;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1441776a8:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144177660;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x98) = 0;
      uVar5 = 1;
      goto LAB_144177660;
    }
  }
  uVar5 = 0;
LAB_144177660:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441776af FUN_1441776af body=3345 status=ok
// SIG undefined FUN_1441776af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441776af(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [40];
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb340 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbcb348);
  if (cVar1 == '\0') {
    _DAT_14cbcb348 = 0;
    uRam000000014cbcb350 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbcb358 = 0x47efffffe0000000;
  _DAT_14cbcb360 = 0x47efffffe0000000;
  _DAT_14cbcb368 = 0x47efffffe0000000;
  _DAT_14cbcb370 = 0x47efffffe0000000;
  _DAT_14cbcb378 = 0x47efffffe0000000;
  _DAT_14cbcb380 = 0x47efffffe0000000;
  _DAT_14cbcb388 = 0x47efffffe0000000;
  _DAT_14cbcb390 = 0x47efffffe0000000;
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbcb398 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3a0 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3a8 = (ulonglong)uVar2;
  _DAT_14cbcb3b4 = 0;
  FUN_14052b5e0(&DAT_14cbcb3b0,"PlayerAwareness",0);
  _DAT_14cbcb3c0 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3c8 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3d0 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3d8 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3e0 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3e8 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3f0 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb3f8 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb400 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb408 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb410 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb418 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb420 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb428 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb430 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb438 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb440 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb448 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb450 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb458 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcb460,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144167960);
  FUN_140056680(&DAT_14cbcb470,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144167971);
  FUN_140056680(&DAT_14cbcb480,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144167982);
  FUN_140056680(&DAT_14cbcb490,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144167993);
  FUN_1446f470e(&DAT_14cbcb4a0,L"LIMB_GORED",1);
  _DAT_14cbcb4a8 = 0x4072c00000000000;
  _DAT_14cbcb4b0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbcb4b8,L"body",1);
  FUN_1446f470e(&DAT_14cbcb4c0,L"title_card",1);
  _DAT_14cbcb4f8 = &LAB_144167ffb;
  _DAT_14cbcb500 = 0x443410a4;
  DAT_14cbcb504 = 1;
  DAT_14cbcb4f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcb4f0;
  atexit((_func_5014 *)&LAB_144168000);
  DAT_14cbcb518 = 0;
  atexit(FUN_144168034);
  FUN_1446f470e(&DAT_14cbcb520,L"DmgSrc_PersonalVehicleCollision",1);
  FUN_1446f470e(&DAT_14cbcb528,L"HitReaction",1);
  FUN_1446f470e(&DAT_14cbcb530,L"Direction",1);
  FUN_1446f470e(&DAT_14cbcb538,L"Force",1);
  FUN_1446f470e(&DAT_14cbcb540,L"BoneName",1);
  FUN_1446f470e(&DAT_14cbcb548,L"UserEdge",1);
  DAT_14cbcb4c8 = 0;
  DAT_14cbcb4d0 = 0;
  DAT_14cbcb4d8 = 0;
  DAT_14cbcb4e0 = 0;
  DAT_14cbcb4e8 = 0;
  FUN_1446f470e(&DAT_14cbcb550,L"UNSET",1);
  _DAT_14cbcb55c = 0;
  FUN_14052b5e0(&DAT_14cbcb558,"inputprefs",0);
  _DAT_14cbcb568 = "inputprefs";
  _DAT_14cbcb570 = 0;
  uRam000000014cbcb578 = 0;
  _DAT_14cbcb580 = 0;
  DAT_14cbcb588 = 0;
  uRam000000014cbcb590 = 0;
  FUN_1446ddda2(&DAT_14cbcb570,"oak.inputprefs",0);
  atexit((_func_5014 *)&LAB_1441682c7);
  DAT_14cbcb5a0 = 0;
  DAT_14cbcb5a8 = 0;
  atexit(FUN_1441682d8);
  local_70 = "at";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb5b0 = (ulonglong)uVar2;
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb5b8 = (ulonglong)uVar2;
  local_70 = "StopUse";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb5c0 = (ulonglong)uVar2;
  local_70 = "SecondaryUse";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb5c8 = (ulonglong)uVar2;
  local_70 = "StopSecondaryUse";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb5d0 = (ulonglong)uVar2;
  _DAT_14cbcb5d8 = L"OakGame.EInventoryAugmentEffectType";
  _DAT_14cbcb5e0 = &DAT_14c872af8;
  _DAT_14cbcb5e8 = L"InventoryAugmentEffectType";
  _DAT_14cbcb5f0 = 0;
  uRam000000014cbcb5f8 = 0;
  _DAT_14cbcb600 = 0;
  uRam000000014cbcb608 = 0;
  _DAT_14cbcb609 = 0;
  uRam000000014cbcb610 = 0;
  uRam000000014cbcb611 = 0;
  atexit((_func_5014 *)&LAB_14416832d);
  DAT_14cbcb640 = 0;
  DAT_14cbcb648 = 0;
  DAT_14cbcb620 = 0;
  _DAT_14cbcb628 = 0;
  _DAT_14cbcb64c = 0xffffffff00000080;
  DAT_14cbcb654 = 0;
  DAT_14cbcb660 = 0;
  DAT_14cbcb668 = 0;
  atexit(FUN_144168339);
  local_70 = "core_plus";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb680 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbcb688,L"Single");
  DAT_14cbcb694 = 0;
  FUN_14052b5e0(&DAT_14cbcb690,"core_augment",0);
  _DAT_14cbcb6a0 = "core_augment";
  DAT_14cbcb6ac = 0;
  FUN_14052b5e0(&DAT_14cbcb6a8,"stat_group1",0);
  _DAT_14cbcb6b8 = "stat_group1";
  DAT_14cbcb6c4 = 0;
  FUN_14052b5e0(&DAT_14cbcb6c0,"stat_group2",0);
  _DAT_14cbcb6d0 = "stat_group2";
  DAT_14cbcb6dc = 0;
  FUN_14052b5e0(&DAT_14cbcb6d8,"stat_group3",0);
  _DAT_14cbcb6e8 = "stat_group3";
  local_70 = "shield_primary_augment";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb6f0 = (ulonglong)uVar2;
  local_70 = "shield_secondary_augment";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb6f8 = (ulonglong)uVar2;
  local_70 = "shield_both_augments";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb700 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcb708,L"Firmware");
  atexit((_func_5014 *)&LAB_144169612);
  FUN_140056680(&DAT_14cbcb718,L"_second_piece_bonus");
  atexit((_func_5014 *)&LAB_144169623);
  FUN_140056680(&DAT_14cbcb728,L"_third_piece_bonus");
  atexit((_func_5014 *)&LAB_144169634);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcb738 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcb740,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144169645);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbcb750,L"Party",1);
  FUN_1446f470e(&DAT_14cbcb758,&DAT_149e063b2,1);
  DAT_14cbcb764._0_4_ = 0;
  DAT_14cbcb764._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcb760,"firmware",0);
  _DAT_14cbcb770 = "firmware";
  _DAT_14cbcb77c = 0;
  _DAT_14cbcb780 = 0;
  FUN_14052b5e0(&DAT_14cbcb778,&DAT_14b6bcef8,0);
  _DAT_14cbcb788 = 0;
  _DAT_14cbcb78c = 0;
  FUN_14052b5e0(&DAT_14cbcb784,"eridium",0);
  local_70 = "ft";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbcb7b0 = (ulonglong)uVar2;
  _DAT_14cbcb798 = &LAB_14416b4f7;
  _DAT_14cbcb7a0 = 0x461ee800;
  DAT_14cbcb7a4 = 1;
  DAT_14cbcb790 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcb790;
  atexit((_func_5014 *)&LAB_14416b4fc);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144178408 FUN_144178408 body=2971 status=ok
// SIG undefined FUN_144178408(void)

void FUN_144178408(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  code *****pppppcVar15;
  undefined8 *****pppppuVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined1 auStack_328 [32];
  undefined8 ****local_308;
  longlong *local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined2 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  code ****local_2d0;
  code *local_2c8;
  code *local_2c0;
  undefined8 *local_2b0;
  int local_2a8;
  undefined8 ****local_2a0;
  longlong local_298 [4];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined2 local_228 [2];
  undefined4 local_224;
  undefined8 ****local_220;
  int local_218;
  undefined8 local_210;
  ushort local_208;
  byte local_200;
  code *local_1f8 [2];
  undefined8 local_1e8;
  undefined **local_1d8;
  ulonglong local_1d0;
  code ****local_1b8;
  undefined4 local_1b0;
  ushort local_1a0;
  byte local_198;
  byte local_178;
  longlong local_160;
  undefined2 *local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  int local_134;
  char local_128 [16];
  longlong *local_118;
  undefined4 local_100 [2];
  longlong *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar4 = *(uint *)(param_1 + 0x18), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x1c))))) ||
     ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_144178497;
  plVar12 = (longlong *)*plVar12;
  if (((plVar12 == (longlong *)0x0 || *(longlong *)(param_1 + 0x28) == 0) ||
      ((char)plVar12[0x2f] != '\x03')) ||
     (lVar5 = FUN_1457244ec(*(longlong *)(param_1 + 0x28) + 0x60), lVar5 == 0)) goto LAB_144178497;
  lVar11 = plVar12[0x2d];
  lStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0x800060100;
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_d8 = lVar11;
  if (lVar11 == 0) {
LAB_14417855f:
    lStack_d0 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_2d0 = (code ****)&local_1b8;
      local_1b8 = (code ****)FUN_141030f22;
      local_2c0 = FUN_14081d0ea;
      local_2c8 = FUN_142b4754c;
      local_2d8 = &LAB_147c45ce0;
      local_2e0 = &LAB_1463f1ff4;
      local_2e8 = &DAT_149e063b2;
      local_2f0 = 0x4000000000;
      local_2f8 = 0x10000004;
      local_300 = (longlong *)CONCAT44(local_300._4_4_,8);
      local_308 = (undefined8 ****)CONCAT44(local_308._4_4_,0x428);
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (lStack_d0 = lVar11,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) goto LAB_14417855f;
  }
  local_b8 = CONCAT71(local_b8._1_7_,1);
  lVar9 = plVar12[0x39];
  if (lVar9 == 0) {
    puVar6 = &DAT_14c8464e0;
    local_258 = DAT_14c8464f0;
  }
  else {
    local_258 = *(undefined8 *)(lVar9 + 0x270);
    puVar6 = (undefined8 *)(lVar9 + 0x260);
  }
  local_268 = *(undefined4 *)puVar6;
  uStack_264 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_260 = *(undefined4 *)(puVar6 + 1);
  uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
  local_298[2] = 0;
  local_298[3] = 0;
  local_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_26c = 0x3ff00000;
  uStack_250 = 0;
  local_248 = 0x3ff0000000000000;
  uStack_240 = 0x3ff0000000000000;
  local_238 = 0x3ff0000000000000;
  uStack_230 = 0;
  local_298[0] = 0;
  local_298[1] = 0;
  uVar7 = FUN_1447210f0(plVar12);
  uVar8 = FUN_14135d6cc();
  lVar9 = FUN_141037e38(uVar7,uVar8,local_298 + 2,&local_e8);
  if (lVar9 == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar4 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if (iVar3 == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar3 = *(int *)(lVar9 + 0x10);
      bVar18 = iVar3 == 0;
      if (bVar18) {
        *(int *)(lVar9 + 0x10) = iVar14;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar3 = iVar14;
      }
      *(int *)(param_1 + 0x3c) = iVar3;
      if (iVar3 == 0) goto LAB_144178ac2;
    }
    else {
      *(int *)(param_1 + 0x3c) = iVar3;
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    if ((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
        (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 != 0)) &&
       ((*(int *)(lVar9 + 0x10) == iVar3 && ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
      pppppuVar16 = *(undefined8 ******)(*(longlong *)(param_1 + 0x28) + 0x168);
      local_218 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x170);
      local_210 = 0;
      local_220 = pppppuVar16;
      if (pppppuVar16 == (undefined8 *****)0x0 || 0xfffffffd < local_218 - 1U) {
        plVar13 = plVar12 + 0x79;
        lVar9 = (**(code **)(plVar12[0x79] + 0x18))(plVar13);
        if ((lVar9 != 0) &&
           ((*(longlong *)(lVar5 + 0x490) == 0 || (0xfffffffd < *(int *)(lVar5 + 0x498) - 1U)))) {
          lVar9 = (**(code **)(*plVar13 + 0x18))(plVar13);
          puVar17 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
            puVar17 = *(undefined4 **)(lVar9 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar9 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar9);
            DAT_14c947fe0 = lVar9;
          }
          FUN_140045924(DAT_14c947fe0,&local_2a0,puVar17,1);
          if (pppppuVar16 != (undefined8 *****)local_2a0) {
            local_210 = 0;
          }
          local_220 = local_2a0;
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x28);
      local_f8 = (longlong *)0x0;
      lVar10 = lVar9 + 0x180;
      if (*(longlong *)(lVar9 + 0x1b0) != 0) {
        lVar10 = *(longlong *)(lVar9 + 0x1b0);
      }
      FUN_1400709d4(local_128,lVar10,*(undefined4 *)(lVar9 + 0x1b8),0);
      if (local_f0 < 1) {
LAB_1441787e0:
        if (0 < *(int *)(lVar5 + 0x4e0)) {
          plVar13 = (longlong *)(lVar5 + 0x4a8);
          if (*(longlong **)(lVar5 + 0x4d8) != (longlong *)0x0) {
            plVar13 = *(longlong **)(lVar5 + 0x4d8);
          }
          if ((*plVar13 != 0) && ((int)plVar13[1] - 1U < 0xfffffffe)) goto LAB_144178840;
        }
        if ((longlong *)local_128 != plVar12 + 0x1cf) {
          plVar13 = plVar12 + 0x1cf;
          if ((longlong *)plVar12[0x1d5] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar12[0x1d5];
          }
          FUN_1400709d4(local_128,plVar13,(int)plVar12[0x1d6],local_ec);
        }
      }
      else {
        plVar13 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar13 = (longlong *)local_128;
        }
        if (*plVar13 == 0) goto LAB_1441787e0;
        plVar13 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar13 = (longlong *)local_128;
        }
        if (0xfffffffd < (int)plVar13[1] - 1U) goto LAB_1441787e0;
      }
LAB_144178840:
      local_308 = &local_220;
      local_300 = (longlong *)local_128;
      FUN_148cd6b2c(&local_1b8,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                    *(undefined4 *)(param_1 + 0x48));
      lVar9 = 0;
      (**(code **)(local_150 + 0x10))(&local_150,0);
      local_148 = plVar12[0x1d8];
      FUN_1406022fe(&local_140,plVar12 + 0x1d9);
      FUN_1405dc634(&local_150,lVar5 + 0x4e8);
      if (*(int *)(param_1 + 0x3c) != 0) {
        uVar4 = *(uint *)(param_1 + 0x38);
        lVar9 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          plVar13 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((plVar13 == (longlong *)0x0) ||
             (((int)plVar13[2] != *(int *)(param_1 + 0x3c) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) {
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar13;
          }
        }
      }
      lVar10 = (**(code **)(*plVar12 + 0x6e0))(plVar12);
      *(undefined1 *)(lVar9 + 0x4c0) = *(undefined1 *)(lVar10 + 8);
      *(undefined4 *)(lVar9 + 0x4d0) = *(undefined4 *)(lVar10 + 0x14);
      FUN_14020a6cc(lVar9 + 0x4c8,1);
      *(undefined4 *)(lVar9 + 0x4dc) = *(undefined4 *)(lVar10 + 0x20);
      FUN_14020a6cc(lVar9 + 0x4d4,1);
      *(undefined4 *)(lVar9 + 0x4e8) = *(undefined4 *)(lVar10 + 0x2c);
      FUN_14020a6cc(lVar9 + 0x4e0,1);
      *(undefined4 *)(lVar9 + 0x4f4) = *(undefined4 *)(lVar10 + 0x38);
      FUN_14020a6cc(lVar9 + 0x4ec,1);
      local_1d0 = *(ulonglong *)(param_1 + 0x38);
      if (local_1d0 >> 0x20 == 0) {
LAB_144178d80:
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        uVar4 = (uint)local_1d0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(local_1d0 >> 0xd) & 0x3fff8)));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(int *)(puVar6 + 2) != (int)(local_1d0 >> 0x20) ||
              ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_144178d80;
          uVar7 = *puVar6;
        }
      }
      local_308 = (undefined8 ****)local_1f8;
      local_1e8 = 0;
      local_1d8 = &PTR_LAB_14b977870;
      local_1f8[0] = FUN_144184a06;
      FUN_145724584(uVar7,lVar5,local_298,&local_1b8);
      local_150 = &DAT_14a171d50;
      local_138 = 0;
      if (local_134 != 0) {
        FUN_140115c12(&local_140,0);
      }
      local_148 = 0;
      if (local_140 != 0) {
        FUN_1400020a8();
      }
      if (local_160 != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_144178ac2:
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar7 = FUN_1401b4c98(plVar12);
  local_128[0] = '\0';
  local_100[0] = 0;
  FUN_1456bb102(local_128,lVar11);
  FUN_1448729ea(lVar5 + 0xb8,&local_220,local_128);
  if (local_200 == 3) {
    uVar19 = local_220._0_4_;
  }
  else {
    FUN_1400b56fe(&local_1b8,&local_220,3);
    if (local_198 == 0) {
      uVar19 = 0x3f800000;
    }
    else {
      uVar19 = local_1b8._0_4_;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppppcVar15 = &local_1b8;
      if (0x18 < local_1a0) {
        pppppcVar15 = (code *****)local_1b8;
      }
      (*pcVar2)(pppppcVar15);
    }
    if (0x18 < local_1a0) {
      FUN_1400020a8(local_1b8);
    }
  }
  local_2b0 = (undefined8 *)0x0;
  local_2a8 = 0;
  FUN_1446efa72(&local_2b0,0,3,0x10);
  puVar6 = local_2b0;
  local_2a8 = 3;
  *local_2b0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_2b0[2] = lVar11;
  *local_2b0 = &PTR_FUN_14b977890;
  local_2b0[3] = 0;
  uVar4 = *(uint *)((longlong)plVar12 + 0xc);
  *(uint *)(local_2b0 + 3) = uVar4;
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar3 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar14 = DAT_14c964868 + 1;
    bVar18 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar18) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar14);
    }
    LOCK();
    iVar3 = *(int *)(lVar5 + 0x10);
    bVar18 = iVar3 == 0;
    if (bVar18) {
      *(int *)(lVar5 + 0x10) = iVar14;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar18) {
      iVar3 = iVar14;
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar3;
  puVar6[4] = param_1;
  local_1b8 = (code ****)0x0;
  local_1b0 = 0;
  FUN_14487d8d8(&local_1b8,&local_2b0);
  local_178 = 1;
  local_308 = (undefined8 ****)local_228;
  local_228[0] = 0;
  local_224 = 0xbf800000;
  FUN_1406f4044(uVar7,param_1 + 0x58,&local_1b8,uVar19);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_178])(&local_1b8);
  if (local_2a8 == 0) {
LAB_144178c7c:
    if (local_2b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_2b0 != (undefined8 *)0x0) {
    (**(code **)*local_2b0)(local_2b0,0);
    FUN_1446efa72(&local_2b0,0,0,0x10);
    local_2a8 = 0;
    goto LAB_144178c7c;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_200 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = &local_220;
    if (0x18 < local_208) {
      pppppuVar16 = (undefined8 *****)local_220;
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_208) {
    FUN_1400020a8(local_220);
  }
  FUN_1448173f8(local_100);
  if ((local_128[0] == '\x03') && (local_118 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    plVar12 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar12 = local_88;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_144178497:
  if ((local_60 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144178fa4 FUN_144178fa4 body=3006 status=ok
// SIG undefined FUN_144178fa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144178fa4(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  double *pdVar15;
  int iVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  uint local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined8 *local_268;
  int local_260;
  double local_258 [2];
  undefined1 local_248 [16];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  code *local_1f8 [2];
  undefined8 local_1e8 [6];
  code *local_1b8 [2];
  undefined ***local_1a8;
  undefined **local_198;
  ulonglong local_190;
  ulonglong local_188;
  double local_178 [2];
  longlong *local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  undefined8 *local_130;
  int local_128;
  undefined4 uStack_124;
  longlong local_120;
  ulonglong local_118;
  undefined2 local_110;
  undefined8 local_10c;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (((*(char *)(param_1 + 0x38) != '\0') ||
      (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x60) == 0)) ||
     (0xfffffffd < *(int *)(*(longlong *)(param_1 + 0x28) + 0x68) - 1U)) goto LAB_14417904d;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_144179a68:
    plVar14 = (longlong *)0x0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x18);
    plVar14 = (longlong *)0x0;
    if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_144179a68;
      plVar14 = (longlong *)*puVar11;
    }
  }
  local_2d0 = FUN_1447210f0(plVar14);
  if ((*(byte *)(param_2 + 0xad) & 1) == 0) {
    lVar21 = plVar14[0x39];
    if (lVar21 == 0) {
      puVar11 = &DAT_14c8464e0;
      local_228 = DAT_14c8464f0;
    }
    else {
      local_228 = *(undefined8 *)(lVar21 + 0x270);
      puVar11 = (undefined8 *)(lVar21 + 0x260);
    }
  }
  else {
    puVar11 = (undefined8 *)(param_2 + 0x28);
    local_228 = *(undefined8 *)(param_2 + 0x38);
  }
  local_238 = *(undefined4 *)puVar11;
  uStack_234 = *(undefined4 *)((longlong)puVar11 + 4);
  uStack_230 = *(undefined4 *)(puVar11 + 1);
  uStack_22c = *(undefined4 *)((longlong)puVar11 + 0xc);
  local_258[0] = 0.0;
  local_258[1] = 0.0;
  local_248 = ZEXT816(0x3ff0000000000000) << 0x40;
  local_218 = 0;
  uStack_214 = 0x3ff00000;
  uStack_210 = 0;
  uStack_20c = 0x3ff00000;
  local_208 = 0x3ff0000000000000;
  uStack_200 = 0;
  uStack_220 = 0;
  (**(code **)(*plVar14 + 0x328))(plVar14,local_1b8);
  puVar11 = &DAT_14c8462c0;
  if ((*(byte *)(param_2 + 0xad) & 1) != 0) {
    puVar11 = (undefined8 *)(param_2 + 0x58);
  }
  FUN_147b4850a(local_178,puVar11,local_1b8);
  plVar3 = local_168;
  dVar29 = local_178[1];
  dVar31 = (double)CONCAT44(uStack_124,local_128);
  local_2d8 = local_130;
  dVar24 = 0.0;
  if ((((local_178[1] != 0.0) || (NAN(local_178[1]))) || (local_178[0] != 0.0)) ||
     (NAN(local_178[0]))) {
    dVar24 = atan2(local_178[1],local_178[0]);
    dVar24 = dVar24 * 57.29577951308232;
  }
  dVar29 = SQRT(dVar29 * dVar29 + local_178[0] * local_178[0]);
  dVar25 = 0.0;
  if ((((double)plVar3 != 0.0) || (NAN((double)plVar3))) || ((dVar29 != 0.0 || (NAN(dVar29))))) {
    dVar25 = atan2((double)plVar3,dVar29);
    dVar25 = dVar25 * 57.29577951308232;
  }
  dVar26 = sin(dVar25 * 0.01745329238474369);
  dVar27 = sin(dVar24 * 0.01745329238474369);
  dVar28 = cos(dVar25 * 0.01745329238474369);
  dVar29 = cos(dVar24 * 0.01745329238474369);
  dVar30 = 0.0;
  dVar33 = dVar26 * 0.0 * dVar29 - dVar27;
  dVar29 = dVar26 * 0.0 * dVar27 + dVar29;
  dVar26 = local_148 * dVar28 * -0.0 + local_158 * dVar33 + local_150 * dVar29;
  dVar31 = dVar31 * dVar28 * -0.0 + local_138 * dVar33 + (double)local_2d8 * dVar29;
  if (((dVar31 != 0.0) || (NAN(dVar31))) || ((dVar26 != 0.0 || (NAN(dVar26))))) {
    dVar30 = atan2(dVar31,dVar26);
    dVar30 = dVar30 * 57.29577951308232;
  }
  auVar34._8_8_ = dVar24;
  auVar34._0_8_ = dVar25;
  auVar34 = divpd(auVar34,_DAT_1499387d0);
  auVar32._0_8_ = dVar30 / 360.0;
  auVar32._8_8_ = 0;
  auVar34 = roundpd(auVar34,auVar34,3);
  auVar32 = roundpd(auVar32,auVar32,3);
  dVar31 = (dVar25 - auVar34._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar24 = (dVar24 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar28 = (dVar30 - auVar32._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar30 = (0.0 - auVar32._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar29 = sin(dVar31);
  dVar25 = sin(dVar24);
  dVar26 = sin(dVar28);
  sin(dVar30);
  dVar31 = cos(dVar31);
  dVar27 = cos(dVar24);
  dVar28 = cos(dVar28);
  cos(dVar30);
  dVar24 = dVar25 * dVar29 * dVar26 + dVar27 * dVar31 * dVar28;
  local_258[0] = dVar29 * dVar25 * dVar28 - dVar31 * dVar27 * dVar26;
  local_258[1] = -(dVar29 * dVar27 * dVar28) - dVar31 * dVar25 * dVar26;
  local_248._8_4_ = SUB84(dVar24,0);
  local_248._0_8_ = -(dVar27 * dVar29 * dVar26) + dVar25 * dVar31 * dVar28;
  local_248._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  if (plVar14 == (longlong *)0x0) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar12 = *(uint *)((longlong)plVar14 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    uVar13 = (ulonglong)*(uint *)(lVar21 + 0x10);
    if (*(uint *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar16 = DAT_14c964868 + 1;
      UNLOCK();
      uVar19 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar16;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar19);
      }
      uVar13 = 0;
      LOCK();
      uVar2 = *(uint *)(lVar21 + 0x10);
      if (uVar2 == 0) {
        *(uint *)(lVar21 + 0x10) = uVar19;
      }
      else {
        uVar13 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        uVar13 = (ulonglong)uVar19;
      }
    }
  }
  lVar21 = *(longlong *)(param_1 + 0x28);
  if ((*(byte *)(lVar21 + 0x78) & 4) == 0) {
LAB_14417957a:
    uVar20 = 0;
    local_2d8 = (undefined8 *)0x0;
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_14485cccc(param_2 + 0xb8);
    cVar4 = FUN_148d56059(plVar14,uVar5,lVar21 + 0x98);
    if (cVar4 == '\0') goto LAB_14417957a;
    local_2d8 = *(undefined8 **)(param_2 + 0xf0);
    uVar6 = *(ulonglong *)(param_2 + 0xd8) & 0xffffffff00000000;
    uVar20 = *(ulonglong *)(param_2 + 0xd8) & 0xffffffff;
  }
  uVar13 = (ulonglong)uVar12 | uVar13 << 0x20;
  local_1a8 = (undefined ***)0x0;
  local_198 = &PTR_FUN_14b977900;
  local_1b8[0] = FUN_144184f08;
  local_2c8 = *(undefined8 *)(param_1 + 0x28);
  lVar21 = *(longlong *)(param_1 + 0x30);
  if (lVar21 != 0) {
    LOCK();
    *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
    UNLOCK();
  }
  local_268 = (undefined8 *)0x0;
  local_260 = 0;
  local_190 = uVar13;
  local_188 = uVar20 | uVar6;
  FUN_1446efa72(&local_268,0,5,0x10);
  puVar11 = local_268;
  local_260 = 5;
  *local_268 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar22 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar22 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar22;
  local_268[2] = lVar9;
  *local_268 = &PTR_FUN_14b977920;
  local_268[3] = 0;
  iVar16 = 0;
  if (plVar14 != (longlong *)0x0) {
    uVar12 = *(uint *)((longlong)plVar14 + 0xc);
    *(uint *)(local_268 + 3) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    iVar16 = *(int *)(lVar22 + 0x10);
    if (*(int *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar16 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar16;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar16 = *(int *)(lVar22 + 0x10);
      bVar23 = iVar16 == 0;
      if (bVar23) {
        *(int *)(lVar22 + 0x10) = iVar18;
        iVar16 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar16 = iVar18;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar16;
  puVar11[4] = uVar13;
  puVar11[5] = local_2c8;
  puVar11[6] = lVar21;
  puVar11[7] = uVar20 | uVar6;
  puVar11[8] = local_2d8;
  lVar21 = *(longlong *)(param_1 + 0x28);
  if ((*(byte *)(lVar21 + 0x78) & 0x20) != 0) {
    (**(code **)(*plVar14 + 0x330))(plVar14,1);
    FUN_140b3d268(plVar14,&DAT_14c8464e0);
    lVar21 = *(longlong *)(param_1 + 0x28);
  }
  local_2c0 = (uint)*(undefined8 *)(lVar21 + 0x60);
  uStack_2bc = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x60) >> 0x20);
  FUN_1411374ca(local_178,plVar14[0x2d],&local_2c0,local_258);
  FUN_140faf1c8(local_178,plVar14[0x2d]);
  FUN_140faf27a(local_178,plVar14[0x36]);
  local_1f8[0] = local_1b8[0];
  local_1e8[0] = 0;
  if (local_1b8[0] != (code *)0x0) {
    pppuVar10 = local_1a8;
    if (local_1a8 == (undefined ***)0x0) {
      pppuVar10 = &local_198;
    }
    (*(code *)**pppuVar10)(pppuVar10,local_1e8);
  }
  FUN_140faf186(local_178,local_1f8);
  FUN_140244c74((longlong)local_178[1] + 0x120,&local_268);
  FUN_140faf12e(local_178,local_278);
  FUN_140861e20(local_120,local_118 & 0xffffffff);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  if (local_128 == 0) {
LAB_144179806:
    if (local_130 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_130 != (undefined8 *)0x0) {
    (**(code **)*local_130)(local_130,0);
    FUN_1446efa72(&local_130,0,0,0x10);
    local_128 = 0;
    goto LAB_144179806;
  }
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_168 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_168 + 0x10))(local_168);
      }
    }
  }
  lVar21 = *(longlong *)(param_1 + 0x28);
  lVar22 = *(longlong *)(lVar21 + 0x88);
  if (lVar22 == 0) {
    uVar5 = FUN_140067708();
    lVar22 = FUN_14477b664(uVar5);
    *(longlong *)(lVar21 + 0x88) = lVar22;
  }
  if (*(longlong *)(lVar21 + 0x90) == 0) {
    if ((lVar22 != 0) && (*(longlong *)(lVar21 + 0x80) != 0)) {
      plVar3 = *(longlong **)(lVar22 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(lVar21 + 0x90) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar22 = FUN_144aff482(uVar5,(longlong *)(lVar21 + 0x80));
        *(longlong *)(lVar21 + 0x90) = lVar22;
        if (lVar22 != 0) goto LAB_1441798d6;
      }
    }
  }
  else {
LAB_1441798d6:
    local_2e8 = plVar14[0x36];
    pdVar15 = local_258;
    pdVar17 = local_178;
    for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
      *pdVar17 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pdVar17 = pdVar17 + 1;
    }
    local_118 = 0x3f800000;
    local_110 = 0;
    local_10c = 0;
    lVar21 = *(longlong *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(lVar21 + 0x80);
    uVar7 = FUN_14477b664(*(undefined8 *)(lVar21 + 0x88));
    uVar8 = FUN_14477b664(uVar7);
    uVar7 = *(undefined8 *)(lVar21 + 0x90);
    local_2c0 = local_2c0 & 0xffffff00;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    local_2b0 = uVar5;
    uVar5 = FUN_14477b664(uVar8);
    local_2a8 = FUN_14477b664(uVar5);
    local_298 = 0;
    local_2e0 = 0;
    local_2a0 = uVar7;
    FUN_140cb5d65(&local_290,local_2d0,&local_2c0,local_178);
    local_290 = 0;
    local_288 = 0xffffffffffffffff;
    if ((local_298 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_298 + 0x50));
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  FUN_148d562be(param_1);
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_270 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)local_270 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_270 + 0x10))(local_270);
      }
    }
  }
  if (local_260 == 0) {
LAB_144179a21:
    if (local_268 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_268 != (undefined8 *)0x0) {
    (**(code **)*local_268)(local_268,0);
    FUN_1446efa72(&local_268,0,0,0x10);
    local_260 = 0;
    goto LAB_144179a21;
  }
  if (local_1b8[0] != (code *)0x0) {
    pppuVar10 = &local_198;
    if (local_1a8 != (undefined ***)0x0) {
      pppuVar10 = local_1a8;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
LAB_14417904d:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144179b86 FUN_144179b86 body=2378 status=ok
// SIG undefined FUN_144179b86(void)

void FUN_144179b86(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 ***pppuVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  uint uVar20;
  float fVar21;
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined2 *local_358;
  undefined1 *local_350;
  undefined1 *local_348;
  undefined8 *local_340;
  undefined1 *local_338;
  code *local_330;
  GUID local_328;
  undefined1 *local_318;
  GUID *local_310;
  longlong local_308;
  uint local_300;
  undefined1 local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  longlong local_2e8;
  longlong *local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  longlong local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_298;
  undefined1 **local_290 [4];
  undefined1 local_270 [32];
  byte local_250 [8];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_228;
  undefined1 **local_220;
  undefined1 ***local_218;
  undefined1 local_200 [40];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1b8;
  undefined *local_1b0;
  code **local_1a8;
  longlong local_1a0;
  undefined1 local_190 [32];
  byte local_170;
  code *local_168;
  undefined **local_160;
  longlong local_158;
  undefined1 local_148 [32];
  byte local_128;
  undefined1 local_120 [32];
  longlong local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong lStack_68;
  uint local_60;
  undefined2 local_5c;
  undefined1 uStack_5a;
  undefined4 uStack_59;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if ((char)param_1[0x78] != '\0') goto LAB_144179d2d;
  ppuVar15 = (undefined **)(param_1 + -0x119);
  if (param_1[0x76] != 0) {
    lVar9 = FUN_1401b4c98(ppuVar15);
    lVar11 = param_1[0x76];
    if (lVar11 != 0) {
      uVar20 = (uint)lVar11;
      if ((int)(uVar20 & 0xffffff) < *(int *)(lVar9 + 0x10)) {
        lVar17 = lVar9 + 0x18;
        if (*(longlong *)(lVar9 + 0x28) != 0) {
          lVar17 = *(longlong *)(lVar9 + 0x28);
        }
        if ((*(uint *)(lVar17 + (ulonglong)((uVar20 & 0xffffff) >> 5) * 4) >> (uVar20 & 0x1f) & 1)
            != 0) {
          lVar17 = *(longlong *)(lVar9 + 8);
          lVar18 = (ulonglong)(uVar20 & 0xffffff) * 0x70;
          if (((lVar17 + lVar18 != 0) && (*(longlong *)(lVar17 + 0x60 + lVar18) == lVar11)) &&
             (*(char *)(lVar17 + 1 + lVar18) != '\x04')) {
            FUN_1405a424c(lVar9);
          }
        }
      }
    }
    param_1[0x76] = 0;
    FUN_140f83a9a(ppuVar15);
  }
  if ((*(byte *)(param_1 + 0x1b) & 2) != 0) {
    if ((char)param_1[-0xea] == '\x03') {
      fVar21 = *(float *)((longlong)param_1 + 0x37c) - *(float *)((longlong)param_1 + 0x3ac);
      if (fVar21 <= 0.1) {
        fVar21 = 0.1;
      }
      uVar20 = -(uint)(0.0 < *(float *)((longlong)param_1 + 0x3ac));
      local_300 = ~uVar20 & (uint)*(float *)((longlong)param_1 + 0x37c) | (uint)fVar21 & uVar20;
      param_1[0x75] = -0x407fffff40800000;
      plVar4 = (longlong *)param_1[0x55];
      local_2fc = 0;
      local_2f8 = (undefined4)DAT_14c8464e0;
      uStack_2f4 = DAT_14c8464e0._4_4_;
      uStack_2f0 = (undefined4)DAT_14c8464e8;
      uStack_2ec = DAT_14c8464e8._4_4_;
      local_2e8 = DAT_14c8464f0;
      local_2e0 = (longlong *)0x0;
      uStack_2d8 = 0;
      local_2d0 = (undefined4)DAT_14c8464e0;
      uStack_2cc = DAT_14c8464e0._4_4_;
      uStack_2c8 = (undefined4)DAT_14c8464e8;
      uStack_2c4 = DAT_14c8464e8._4_4_;
      local_2c0 = DAT_14c8464f0;
      local_308 = param_1[0xc];
      if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
        if (plVar4 != (longlong *)0x0) goto LAB_144179e37;
        local_2e0 = plVar4;
        FUN_14417a4d2(ppuVar15,&local_308);
      }
      else {
        FUN_1456cec3c(plVar4);
LAB_144179e37:
        local_2c0 = plVar4[0x138e];
        local_2d0 = (undefined4)plVar4[0x138c];
        uStack_2cc = *(undefined4 *)((longlong)plVar4 + 0x9c64);
        uStack_2c8 = (undefined4)plVar4[0x138d];
        uStack_2c4 = *(undefined4 *)((longlong)plVar4 + 0x9c6c);
        local_2e0 = plVar4;
        FUN_14417a4d2(ppuVar15,&local_308);
        FUN_1447f69b6(plVar4 + 0xa62);
        uVar10 = 0;
        local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
        uStack_d0 = (longlong *)0x0;
        local_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        lStack_68 = 0;
        local_60 = 0xffffffff;
        local_5c = 0;
        uStack_5a = 1;
        uStack_59 = 0;
        lVar11 = FUN_140316ff8();
        lVar9 = FUN_1447210f0(ppuVar15);
        if (lVar9 != 0) {
          uVar10 = FUN_140115352(lVar9);
        }
        local_378 = &local_d8;
        FUN_140d5168f(uVar10,lVar11 + 0x138,plVar4,0);
      }
      cVar7 = FUN_1403ae288(param_1 + 0x51);
      if (cVar7 != '\0') {
        lVar11 = FUN_14008e0ae(param_1 + 0x51);
        if ((ABS(*(float *)(lVar11 + 200) - *(float *)(lVar11 + 0x24)) < 0.0001) &&
           (*(float *)(lVar11 + 200) < *(float *)(lVar11 + 0x30))) {
          (**(code **)(*param_1 + 0x70))(param_1);
        }
      }
      if (((1 < *(int *)((longlong)param_1 + 0x274)) && (0 < *(int *)((longlong)param_1 + 0x27c)))
         && ((char)param_1[-0xea] == '\x03')) {
        *(int *)((longlong)param_1 + 0x27c) = *(int *)((longlong)param_1 + 0x27c) + -1;
        FUN_140ef1516(ppuVar15);
      }
      lVar11 = (**(code **)(*plVar4 + 0x5d8))(plVar4);
      if (lVar11 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_340 = &local_d8;
          local_d8 = FUN_141030f22;
          local_330 = FUN_14081d0ea;
          local_338 = &LAB_1459f2e4c;
          local_348 = &LAB_148c39de3;
          local_350 = &LAB_1457a9eb2;
          local_358 = &DAT_149e063b2;
          local_360 = 0;
          local_368 = 0x10000004;
          local_370 = 0x10;
          local_378 = (undefined8 *)CONCAT44(local_378._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          local_310 = &local_328;
          local_290[0] = &local_318;
          local_318 = &LAB_144186644;
          local_218 = local_290;
          local_220 = (undefined1 **)FUN_1411f620e;
          FUN_140d8b592(&local_d8,lVar11);
          local_160 = &local_1b0;
          local_1b0 = &DAT_14cb89450;
          local_168 = FUN_140c4fac4;
          local_1a8 = (code **)&local_220;
          FUN_140d8b39e(&DAT_14cb89450,&local_d8,lVar11);
        }
      }
      FUN_140056680(&local_d8,&DAT_149dfb77a);
      local_378 = (undefined8 *)&local_1d8;
      local_1d8 = (undefined4)local_d8;
      uStack_1d4 = local_d8._4_4_;
      uStack_1d0 = (undefined4)uStack_d0;
      uStack_1cc = uStack_d0._4_4_;
      local_1b8 = 4;
      FUN_140d767d6(&local_1b0,&DAT_14cbcb9b0,3,L"throw_grenade");
      if ((*(longlong *)(local_1b0 + 0x3c) == 0) || ((char)local_1b0[0x38] < (char)local_1a8)) {
        FUN_140056680(&local_d8,&DAT_149dfb77a);
        local_378 = (undefined8 *)&local_2b8;
        local_2b8 = (undefined4)local_d8;
        uStack_2b4 = local_d8._4_4_;
        uStack_2b0 = (undefined4)uStack_d0;
        uStack_2ac = uStack_d0._4_4_;
        local_298 = 4;
        pppuVar14 = local_290;
        FUN_140d767d6(pppuVar14,&DAT_14cbcb9b0,3,L"throw_grenade");
        bVar6 = false;
      }
      else {
        FUN_140056680(&local_d8,&DAT_149dfb77a);
        local_378 = (undefined8 *)&local_248;
        local_248 = (undefined4)local_d8;
        uStack_244 = local_d8._4_4_;
        uStack_240 = (undefined4)uStack_d0;
        uStack_23c = uStack_d0._4_4_;
        local_228 = 4;
        pppuVar14 = &local_220;
        FUN_140d767d6(pppuVar14,&DAT_14cbcb9b0,3,L"throw_grenade");
        bVar6 = true;
      }
      FUN_140d76846(&local_168,pppuVar14);
      FUN_14027c224(&local_d8,&local_168);
      if (plVar4 == (longlong *)0x0) {
        uVar20 = 0;
        uVar12 = 0;
      }
      else {
        uVar20 = *(uint *)((longlong)plVar4 + 0xc);
        if ((int)uVar20 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        uVar12 = (ulonglong)*(uint *)(lVar11 + 0x10);
        if (*(uint *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          uVar13 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar13);
          }
          LOCK();
          uVar8 = *(uint *)(lVar11 + 0x10);
          bVar19 = uVar8 == 0;
          if (bVar19) {
            *(uint *)(lVar11 + 0x10) = uVar13;
            uVar8 = 0;
          }
          UNLOCK();
          if (bVar19) {
            uVar8 = uVar13;
          }
          uVar12 = (ulonglong)uVar8;
        }
      }
      uVar13 = local_60;
      uVar10 = DAT_14c9a3c28;
      if ((((char)local_d8 == '\x01') && (*(longlong *)((longlong)uStack_d0 + 0x3c) != 0)) &&
         ((char)local_c8 <= (char)uStack_d0[7])) {
        lVar11 = (longlong)(int)local_60;
        local_60 = local_60 + 1;
        if (CONCAT13((undefined1)uStack_59,CONCAT12(uStack_5a,local_5c)) < local_60) {
          FUN_141225836(&lStack_68,uVar13);
        }
        lVar11 = lVar11 * 0x40;
        *(undefined8 *)(lStack_68 + lVar11) = uVar10;
        *(ulonglong *)(lStack_68 + 8 + lVar11) = (ulonglong)uVar20 | uVar12 << 0x20;
        puVar3 = (undefined8 *)(lStack_68 + 0x10 + lVar11);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lStack_68 + 0x20 + lVar11);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lStack_68 + 0x30 + lVar11);
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_1404eec70(0,0);
      }
      local_328.Data1 = 0;
      local_328.Data2 = 0;
      local_328.Data3 = 0;
      local_328.Data4[0] = '\0';
      local_328.Data4[1] = '\0';
      local_328.Data4[2] = '\0';
      local_328.Data4[3] = '\0';
      local_328.Data4[4] = '\0';
      local_328.Data4[5] = '\0';
      local_328.Data4[6] = '\0';
      local_328.Data4[7] = '\0';
      CoCreateGuid(&local_328);
      if ((plVar4 != (longlong *)0x0) && ((char)local_d8 != '\0')) {
        FUN_14111b8d6(uStack_d0,plVar4,&local_328);
      }
      FUN_14027c198(&local_d8);
      FUN_1404eec70(local_f0,local_e8);
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      FUN_1404eecb3(local_100,local_f8);
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      FUN_1404eec06(local_120);
      ppuVar15 = &PTR_FUN_14a1842f0;
      (*(code *)(&PTR_FUN_14a1842f0)[local_128])(local_148);
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      if (bVar6) {
        puVar16 = local_200;
      }
      else {
        puVar16 = local_270;
      }
      (*(code *)(&PTR_FUN_14a1842f0)[(byte)puVar16[0x20]])(puVar16);
      if (*(longlong *)(puVar16 + -0x10) != 0) {
        FUN_1400020a8();
      }
      (*(code *)(&PTR_FUN_14a1842f0)[local_170])(local_190);
      if (local_1a0 != 0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  lVar11 = param_1[0x55];
  if (lVar11 == 0) goto LAB_144179d2d;
  FUN_1447cd2ec(lVar11 + 0x6028,0);
  FUN_1447f69b6(lVar11 + 0x6048);
  if ((char)param_1[-0xea] != '\x03') goto LAB_144179d2d;
  lVar9 = param_1[0x55];
  if (lVar9 == 0) {
    local_d8 = (code *)0x0;
    uStack_d0 = (longlong *)0x0;
LAB_14417a482:
    cVar7 = '\0';
  }
  else {
    lVar17 = param_1[0x73];
    uVar10 = (**(code **)(*(longlong *)(lVar9 + 0x10e0) + 0x50))(lVar9 + 0x10e0);
    FUN_140dc01da(uVar10,&local_d8,
                  CONCAT71((int7)((ulonglong)ppuVar15 >> 8),(char)lVar17) & 0xffffffff);
    if (local_d8 == (code *)0x0) goto LAB_14417a482;
    cVar7 = FUN_1408814c2(local_d8,&DAT_14cbcbb88,0);
  }
  plVar4 = uStack_d0;
  if (uStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_d0)(uStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (cVar7 != '\0') {
    FUN_1447f69b6(lVar11 + 0x6ea0);
  }
LAB_144179d2d:
  if ((local_38 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14417a4d2 FUN_14417a4d2 body=10890 status=ok
// SIG undefined FUN_14417a4d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14417a4d2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  double *pdVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double *pdVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_5f8 [32];
  wchar_t *local_5d8;
  uint local_5d0;
  undefined8 local_5c8;
  wchar_t *local_5c0;
  wchar_t *local_5b8;
  code *local_5b0;
  undefined1 *local_5a8;
  code **local_5a0;
  code *local_598;
  code *local_590;
  longlong local_580;
  longlong local_578;
  longlong local_570;
  undefined4 *local_568;
  longlong local_560;
  longlong local_558;
  longlong *local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  ushort local_538 [4];
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  double local_508 [4];
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined1 local_4a8 [24];
  code *local_490;
  longlong *local_488;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  float local_460;
  uint local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  ulonglong local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  double dStack_418;
  double local_410;
  undefined8 uStack_408;
  double local_400;
  double local_3f8;
  undefined4 local_3f0;
  uint uStack_3ec;
  int iStack_3e8;
  uint uStack_3e4;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  longlong local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined2 local_390;
  undefined4 local_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined **local_378;
  undefined1 local_370;
  undefined8 local_36c;
  undefined4 local_364;
  undefined8 local_360;
  int local_358;
  undefined4 local_354;
  undefined8 local_350;
  undefined4 local_348;
  uint local_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined8 uStack_328;
  ulonglong local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  double dStack_2e8;
  undefined1 local_2e0;
  undefined1 uStack_2df;
  undefined2 uStack_2de;
  float fStack_2dc;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  undefined8 local_2d0;
  undefined **ppuStack_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined2 local_298;
  byte local_296;
  undefined4 local_294;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  int iStack_268;
  uint uStack_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238 [12];
  uint local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  ulonglong local_198;
  code *local_188 [2];
  undefined8 *local_178;
  code *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong lStack_108;
  longlong *local_f8;
  longlong local_e8 [5];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  uStack_420 = (double)CONCAT44(uStack_420._4_4_,(undefined4)uStack_420);
  if (((*(char *)(param_1 + 0x178) != '\x03') ||
      (uStack_420 = (double)CONCAT44(uStack_420._4_4_,(undefined4)uStack_420), param_2[5] == 0)) ||
     ((*(longlong *)(param_1 + 0xbe8) == 0 &&
      (uStack_420 = (double)CONCAT44(uStack_420._4_4_,(undefined4)uStack_420),
      *(longlong *)(param_1 + 0xbf0) == 0)))) goto LAB_14417bd92;
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 == 0) goto LAB_14417bd92;
  uVar7 = FUN_1447210f0(param_1);
  uVar37 = DAT_14c8464e8._4_4_;
  uVar36 = (undefined4)DAT_14c8464e8;
  uVar35 = DAT_14c8464e0._4_4_;
  uVar29 = (undefined4)DAT_14c8464e0;
  lVar6 = param_2[6];
  if (lVar6 == 0) {
    lVar6 = param_2[5];
  }
  uVar38 = SUB84(DAT_14c8464f0,0);
  uVar39 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  local_458 = CONCAT31(local_458._1_3_,1);
  uStack_454 = (undefined4)*param_2;
  uStack_450 = (undefined4)((ulonglong)*param_2 >> 0x20);
  local_448 = local_448 & 0xffffffffffff0000;
  local_440 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_438 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_430 = (double)DAT_14c846508;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_420._0_4_ = 0;
  dStack_418 = (double)((ulonglong)dStack_418 & 0xffffffff00000000);
  local_410 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_408 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_400 = DAT_14c8464f0;
  local_278 = param_2[9];
  local_288 = (code *)param_2[7];
  uStack_280 = (longlong *)param_2[8];
  FUN_1412140b0(local_4a8,lVar6,&local_458);
  local_458 = 0;
  uStack_454 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  local_5d0 = local_5d0 & 0xffffff00;
  local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,0xf);
  FUN_143e0f36e(local_508,lVar6,local_4a8,&local_458);
  if (CONCAT44(uStack_454,local_458) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xbe8) == 0) {
    lVar8 = *(longlong *)(param_1 + 0xbf0);
    if (lVar8 != 0) {
      uVar28 = *(undefined4 *)(lVar8 + 0x2d4);
      fVar30 = *(float *)(lVar8 + 0x2fc);
      goto LAB_14417a6b9;
    }
    uVar18 = 0x3f800000;
    fVar30 = 0.0;
    bVar27 = false;
  }
  else {
    fVar30 = *(float *)(*(longlong *)(param_1 + 0xbe8) + 0xe0);
    uVar28 = FUN_140b536be();
LAB_14417a6b9:
    bVar27 = fVar30 != 0.0;
    uVar18 = 0x3f800000;
    if ((*(char *)((longlong)param_2 + 0xc) == '\x01') && ((fVar30 != 0.0 || (NAN(fVar30))))) {
      local_458 = local_458 & 0xffffff00;
      uStack_454 = 0;
      uStack_450 = 0;
      local_448 = local_448 & 0xffffffffffff0000;
      local_440 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      uStack_438 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      local_430 = (double)DAT_14c846508;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_420._0_4_ = 0;
      dStack_418 = (double)((ulonglong)dStack_418 & 0xffffffff00000000);
      local_410 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_408 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_400 = DAT_14c8464f0;
      local_538[0] = 0;
      local_530 = (undefined4)DAT_14c8464f8;
      uStack_52c = DAT_14c8464f8._4_4_;
      uStack_528 = (undefined4)DAT_14c846500;
      uStack_524 = DAT_14c846500._4_4_;
      local_520 = DAT_14c846508;
      local_518 = 0;
      local_514 = 0;
      FUN_14030a482(&local_458,&local_288,lVar6,0);
      local_248 = 0;
      uStack_240 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_270 = *(undefined4 *)(param_2 + 2);
      uStack_26c = *(undefined4 *)((longlong)param_2 + 0x14);
      iStack_268 = *(int *)(param_2 + 3);
      uStack_264 = *(uint *)((longlong)param_2 + 0x1c);
      local_260 = param_2[4];
      lVar8 = FUN_1447210f0(param_1);
      fVar34 = 0.0;
      if ((*(longlong *)(lVar8 + 0x30) != 0) &&
         (plVar13 = *(longlong **)(*(longlong *)(lVar8 + 0x30) + 0x2b0), plVar13 != (longlong *)0x0)
         ) {
        if (*(code **)(*plVar13 + 0x660) == FUN_1449fb17e) {
          if ((*(byte *)((longlong)plVar13 + 0x39e) & 1) == 0) {
            if ((*(byte *)((longlong)plVar13 + 0x39e) & 2) == 0) {
              if (DAT_14caf84d0 == 0) {
                local_5a0 = &local_148;
                local_148 = FUN_1449e2820;
                local_590 = FUN_14081d0ea;
                local_598 = (code *)&LAB_145a62952;
                local_5a8 = &LAB_147c8cd45;
                local_5b0 = (code *)&LAB_1461468ae;
                local_5b8 = L"Engine";
                local_5c0 = (wchar_t *)0x0;
                local_5c8 = CONCAT44(local_5c8._4_4_,0x10000006);
                local_5d0 = 8;
                local_5d8 = (wchar_t *)CONCAT44(local_5d8._4_4_,0x218);
                FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
              }
              lVar10 = DAT_14caf84d0;
              lVar8 = *(longlong *)(DAT_14caf84d0 + 0x110);
              if (lVar8 == 0) {
                FUN_140aa6c08(DAT_14caf84d0);
                lVar8 = *(longlong *)(lVar10 + 0x110);
              }
              pfVar9 = (float *)(lVar8 + 0x38);
            }
            else {
              pfVar9 = (float *)((longlong)plVar13 + 0x41c);
            }
            fVar34 = *pfVar9;
            *(float *)(plVar13 + 0x83) = fVar34;
          }
          else {
            fVar34 = *(float *)(plVar13 + 0x83);
          }
        }
        else {
          fVar34 = (float)(**(code **)(*plVar13 + 0x660))(plVar13);
        }
      }
      uStack_240 = CONCAT44(uStack_240._4_4_,fVar34 * fVar30);
      local_148 = (code *)((ulonglong)local_148 & 0xffffff0000000000);
      uStack_13c = 0xbf800000;
      fStack_138 = -980.0;
      uStack_134 = uStack_134 & 0xffffff00;
      uStack_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      lStack_108 = 0;
      uStack_140 = uVar28;
      FUN_14125d732(&local_148);
      fVar34 = fVar34 * fVar30;
      if ((char)uStack_134 != '\0') {
        fVar34 = fStack_138;
      }
      uVar29 = (undefined4)local_478;
      uVar35 = (undefined4)((ulonglong)local_478 >> 0x20);
      uVar36 = (undefined4)local_470;
      uVar37 = (undefined4)((ulonglong)local_470 >> 0x20);
      uVar38 = (undefined4)local_468;
      uVar39 = (undefined4)((ulonglong)local_468 >> 0x20);
      uVar18 = ~-(uint)(fVar34 != 0.0) & 0x3f800000 |
               (uint)(local_460 / fVar34) & -(uint)(fVar34 != 0.0);
      if ((local_538[0] & 0xfd) != 0) {
        FUN_140d0fb16(local_538,&local_490,lVar6,0);
      }
      bVar27 = true;
    }
  }
  dVar31 = (double)CONCAT44(uVar35,uVar29);
  dVar32 = (double)CONCAT44(uVar37,uVar36);
  if (*(longlong *)(param_1 + 0xbe8) == 0) {
    if (*(longlong *)(param_1 + 0xbf0) == 0) goto LAB_14417bd92;
    local_458 = 0x4b32b680;
    uStack_454 = 1;
    uStack_450 = 0;
    uStack_44c = 0;
    local_448 = CONCAT44(local_448._4_4_,0x34001);
    local_440 = 0;
    uStack_438 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    local_430 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    uStack_428 = SUB84(DAT_14c8464f0,0);
    uStack_424 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    uStack_420._0_4_ = (undefined4)DAT_14c8464e0;
    uStack_420._4_4_ = DAT_14c8464e0._4_4_;
    local_410 = DAT_14c8464f0;
    local_3f8 = DAT_14c8464f0;
    local_3f0 = 0;
    uStack_3ec = 0;
    iStack_3e8 = 0;
    uStack_3e4 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    local_3d0 = 0;
    local_3c8 = 0x3002;
    local_3c0 = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    uStack_380 = 0;
    uStack_37c = 2;
    local_378 = (undefined **)((ulonglong)local_378 & 0xffffffff00000000);
    local_370 = 0;
    local_36c = 0;
    local_360 = 0;
    local_358 = -0xfffff30;
    local_350 = 0;
    local_348 = 0;
    local_344 = local_344 & 0xffffff00;
    uStack_308 = 0;
    local_300 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_340 = 0;
    uStack_33c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    local_330 = 0;
    uStack_328 = 0;
    local_320 = local_320 & 0xffffffff00000000;
    uStack_2f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    local_2f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    dStack_2e8 = DAT_14c8464f0;
    local_2e0 = 0;
    uStack_2df = 0;
    fStack_2dc = 0.0;
    uStack_2d8 = 0xbf800000;
    uStack_2d4 = uStack_2d4 & 0xffffff00;
    local_2d0 = 0;
    dStack_418 = local_430;
    uStack_408 = uStack_438;
    local_400 = local_430;
    FUN_1405c5fa2();
    local_2c0 = &DAT_14cb769e8;
    local_2b8 = 0;
    uStack_2b0 = 0;
    ppuStack_2c8 = &PTR_FUN_14b0394b0;
    local_294 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    local_296 = local_296 & 0xfe;
    puVar25 = *(undefined4 **)(*(longlong *)(param_1 + 0xbf0) + 8);
    if (puVar25 == (undefined4 *)0x0) {
      puVar25 = &DAT_14c9485f0;
    }
    if (DAT_14c947fe0 == 0) {
      lVar8 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar8);
      DAT_14c947fe0 = lVar8;
    }
    FUN_140045924(DAT_14c947fe0,&local_558,puVar25,1);
    if (CONCAT44(uStack_44c,uStack_450) != local_558) {
      local_440 = 0;
    }
    uStack_450 = (undefined4)local_558;
    uStack_44c = (undefined4)((ulonglong)local_558 >> 0x20);
    if ((bVar27 & *(byte *)((longlong)param_2 + 0xc)) == 1) {
      dVar33 = (double)CONCAT44(uVar39,uVar38) * (double)CONCAT44(uVar39,uVar38) +
               (double)CONCAT44(uVar35,uVar29) * (double)CONCAT44(uVar35,uVar29) +
               (double)CONCAT44(uVar37,uVar36) * (double)CONCAT44(uVar37,uVar36);
      if ((dVar33 != 1.0) || (local_410 = (double)CONCAT44(uVar39,uVar38), NAN(dVar33))) {
        if (9.99999993922529e-09 <= dVar33) {
          dVar31 = 1.0 / SQRT(dVar33);
          local_410 = (double)CONCAT44(uVar39,uVar38) * dVar31;
          dVar32 = (double)CONCAT44(uVar37,uVar36) * dVar31;
          dVar31 = (double)CONCAT44(uVar35,uVar29) * dVar31;
        }
        else {
          dVar31 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar32 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_410 = DAT_14c8464f0;
        }
      }
      uStack_2df = 2;
      fStack_2dc = (float)SQRT(dVar33);
      dStack_418 = dVar32;
      uStack_420 = dVar31;
    }
    else if (((*(byte *)((longlong)param_2 + 0xc) == 0) || (fVar30 != 0.0)) || (NAN(fVar30))) {
      dVar32 = local_508[2] - local_508[0] * 0.0;
      dVar33 = local_508[0] * 0.0 - local_508[1];
      dVar31 = local_508[1] * 0.0 + local_508[2] * -0.0;
      dVar33 = dVar33 + dVar33;
      dVar32 = dVar32 + dVar32;
      dVar31 = dVar31 + dVar31;
      local_410 = (local_508[0] * dVar32 - dVar31 * local_508[1]) + local_508[3] * dVar33 + 0.0;
      dStack_418 = (local_508[2] * dVar31 - dVar33 * local_508[0]) + local_508[3] * dVar32 + 0.0;
      uStack_420 = (local_508[1] * dVar33 - dVar32 * local_508[2]) + local_508[3] * dVar31 + 1.0;
    }
    else {
      local_3f8 = (double)param_2[4];
      uStack_408 = param_2[2];
      local_400 = (double)param_2[3];
    }
    uStack_438 = CONCAT44(uStack_4e4,local_4e8);
    local_430 = (double)CONCAT44(uStack_4dc,uStack_4e0);
    uStack_428 = (undefined4)local_4d8;
    uStack_424 = (undefined4)((ulonglong)local_4d8 >> 0x20);
    lVar8 = param_2[5];
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
LAB_14417bbbb:
      uVar18 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar16 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar16 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar16;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar16 = *(int *)(lVar8 + 0x10);
        bVar27 = iVar16 == 0;
        if (bVar27) {
          *(int *)(lVar8 + 0x10) = iVar19;
          iVar16 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar16 = iVar19;
        }
      }
    }
    else {
      if (lVar8 != 0) goto LAB_14417bbbb;
      uVar18 = 0;
      iVar16 = 0;
    }
    iStack_3e8 = iVar16;
    uStack_3ec = uVar18;
    if (lVar6 == 0) {
      uStack_3e4 = 0;
      iVar16 = 0;
    }
    else {
      uStack_3e4 = *(uint *)(lVar6 + 0xc);
      if ((int)uStack_3e4 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uStack_3e4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_3e4 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar16 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar16 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar16;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar16 = *(int *)(lVar6 + 0x10);
        bVar27 = iVar16 == 0;
        if (bVar27) {
          *(int *)(lVar6 + 0x10) = iVar19;
          iVar16 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar16 = iVar19;
        }
      }
    }
    uStack_3e0 = CONCAT44(*(undefined4 *)(param_1 + 0xc2c),iVar16);
    plVar13 = (longlong *)(param_1 + 0xbe0);
    lVar6 = (**(code **)(*(longlong *)(param_1 + 0xbe0) + 0x18))(plVar13);
    if (lVar6 != 0) {
      lVar6 = (**(code **)(*plVar13 + 0x18))(plVar13);
      puVar25 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
        puVar25 = *(undefined4 **)(lVar6 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,&local_560,puVar25,1);
      if (local_3d0 != local_560) {
        local_3c0 = 0;
      }
      local_3d0 = local_560;
    }
    local_378 = (undefined **)CONCAT44(local_378._4_4_,*(undefined4 *)(param_1 + 0xc38));
    local_348 = *(undefined4 *)(param_1 + 0xc50);
    local_370 = 0;
    local_36c = 0;
    if ((local_360 != 0) || (local_358 != -0xfffff30)) {
      local_360 = 0;
      local_358 = -0xfffff30;
      local_350 = 0;
    }
    local_344 = local_344 & 0xffffff00;
    uStack_33c = 0;
    uStack_338 = 0;
    local_330 = 0;
    local_2d0 = DAT_14cbcbb68;
    local_340 = local_348;
    uStack_334 = local_348;
    FUN_14130e0a2(&local_458);
    FUN_140bba396(&local_458);
    goto LAB_14417bd92;
  }
  uStack_128 = 0;
  local_120 = 0;
  local_148 = (code *)0x0;
  uStack_140 = 0;
  uStack_13c = 0;
  lStack_108 = 0;
  local_f8 = (longlong *)0x0;
  uStack_118 = CONCAT53(0x800,CONCAT12(uStack_118._2_1_,0x100)) & 0xffffffffffe0ffff | 0x60000;
  uStack_130 = param_2[5];
  fStack_138 = (float)uStack_130;
  uStack_134 = (uint)((ulonglong)uStack_130 >> 0x20);
  puVar25 = *(undefined4 **)(*(longlong *)(param_1 + 0xbe8) + 8);
  puVar24 = &DAT_14c9485f0;
  if (puVar25 != (undefined4 *)0x0) {
    puVar24 = puVar25;
  }
  if (DAT_14c947fe0 == 0) {
    lVar8 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar8);
    DAT_14c947fe0 = lVar8;
  }
  FUN_140045924(DAT_14c947fe0,&local_458,puVar24,1);
  local_148 = (code *)CONCAT44(uStack_454,local_458);
  uStack_118._0_4_ = CONCAT13(3,(undefined3)uStack_118);
  uStack_118 = CONCAT71(uStack_118._1_7_,1);
  lVar8 = *(longlong *)(param_1 + 0xbe8);
  if (((((*(int *)(lVar8 + 0x94) == 0) || (uVar23 = *(uint *)(lVar8 + 0x90), (int)uVar23 < 0)) ||
       (DAT_14c9647dc <= (int)uVar23)) ||
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
       plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar8 + 0x94))))) ||
     (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar10 = *plVar13, lVar10 == 0)))) {
    if (*(longlong *)(lVar8 + 0x98) != 0) {
      lVar10 = FUN_140007850(lVar8 + 0x98);
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      lVar20 = DAT_14c9647c8;
      if ((lVar10 == 0) || (cVar3 == '\0')) {
        if (lVar10 != 0) {
          uVar23 = *(uint *)(lVar10 + 0xc);
          *(uint *)(lVar8 + 0x90) = uVar23;
          if (DAT_14c9647dc <= (int)uVar23) goto LAB_14417be1f;
          lVar20 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
          goto LAB_14417ae50;
        }
        *(undefined8 *)(lVar8 + 0x90) = 0;
      }
      else {
        uVar23 = *(uint *)(lVar10 + 0xc);
        if ((int)uVar23 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar23 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar8 + 0x90) = uVar23;
            lVar20 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                     *(longlong *)(lVar20 + (ulonglong)(uVar23 >> 0x10) * 8);
LAB_14417ae50:
            iVar16 = *(int *)(lVar20 + 0x10);
            if (*(int *)(lVar20 + 0x10) == 0) {
              LOCK();
              iVar16 = DAT_14c964868 + 1;
              UNLOCK();
              iVar19 = DAT_14c964868 + 1;
              bVar27 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar16;
              local_580 = lVar6;
              if (bVar27) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar19);
              }
              LOCK();
              iVar16 = *(int *)(lVar20 + 0x10);
              bVar27 = iVar16 == 0;
              if (bVar27) {
                *(int *)(lVar20 + 0x10) = iVar19;
                iVar16 = 0;
              }
              UNLOCK();
              lVar6 = local_580;
              if (bVar27) {
                iVar16 = iVar19;
              }
            }
            *(int *)(lVar8 + 0x94) = iVar16;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar8 + 0x90) = uVar23;
LAB_14417be1f:
          lVar20 = 0;
          goto LAB_14417ae50;
        }
        if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0) goto LAB_14417aa71;
      }
    }
LAB_14417af67:
    lVar20 = 0;
  }
  else {
LAB_14417aa71:
    if (DAT_14c949118 == 0) {
      local_490 = FUN_140631fbe;
      local_580 = lVar6;
      lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar6;
      FUN_1446f470e(&local_288,L"Class",1);
      local_5a8 = &LAB_146891e90;
      local_5b0 = (code *)&LAB_146273097;
      local_5c0 = L"Engine";
      local_5b8 = (wchar_t *)CONCAT44(local_5b8._4_4_,199);
      local_5c8 = 0x20;
      local_5d0 = 0x10000000;
      local_5d8._0_4_ = 8;
      local_5a0 = &local_490;
      FUN_14574b4b2(lVar6);
      DAT_14c949118 = lVar6;
      if (DAT_14c951858 == 0) {
        local_458 = 0x449e2820;
        uStack_454 = 1;
        local_590 = FUN_14081d0ea;
        local_598 = FUN_14081d0ea;
        local_5a8 = &LAB_1468c5283;
        local_5b0 = FUN_142809da0;
        local_5b8 = L"Engine";
        local_5c0 = (wchar_t *)0x400000000;
        local_5c8 = CONCAT44(local_5c8._4_4_,0x10000000);
        local_5d0 = 8;
        local_5d8._0_4_ = 0x50;
        local_5a0 = (code **)&local_458;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar8 = DAT_14c951858;
      lVar6 = DAT_14c949118;
      uVar12 = FUN_1449e2fb2();
      local_5d8 = L"Class";
      FUN_14574b446(uVar12,lVar6,lVar8,L"/Script/CoreUObject");
      lVar6 = local_580;
    }
    if ((((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
        (lVar8 = FUN_140d12354(), lVar8 == 0)) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar8 + 0x38))
       ) goto LAB_14417af67;
    lVar20 = 0;
    if (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30) {
      lVar20 = lVar10;
    }
  }
  lVar8 = FUN_141037e38(uVar7,lVar20,local_508,&local_148);
  if (lVar8 != 0) {
    lVar10 = FUN_140f1f93e();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (lVar20 = lVar8,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
       != lVar10 + 0x30)) {
      lVar20 = 0;
    }
    lVar10 = FUN_140e85284();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (lVar21 = lVar8,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
       != lVar10 + 0x30)) {
      lVar21 = 0;
    }
    if (((lVar20 != 0) && (fVar30 = *(float *)(param_2 + 1), 0.0 < fVar30)) &&
       (fVar34 = *(float *)(param_1 + 0xc44), 0.0 < fVar34)) {
      *(float *)(lVar20 + 0x1b3c) = fVar30;
      *(float *)(lVar20 + 0x1b40) = fVar34;
      fVar30 = fVar30 / fVar34;
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if (fVar30 <= 0.0) {
        fVar30 = 0.0;
      }
      *(float *)(lVar20 + 0xeec) = fVar30;
      if ((*(byte *)(lVar20 + 0x65) & 0x18) == 0x10) {
        FUN_14578b382(lVar20);
      }
    }
    local_580 = lVar20;
    local_578 = lVar8;
    lVar8 = (**(code **)(*(longlong *)(lVar8 + 0x418) + 0x10))(lVar8 + 0x418);
    if (*(char *)(lVar8 + 0x39) == '\0') {
      *(undefined1 *)(lVar8 + 0x39) = 1;
    }
    local_458 = 0;
    local_3f0 = 0;
    uStack_3ec = 0;
    iStack_3e8 = 0;
    uStack_3e4 = 0x80;
    uStack_3e0 = 0xffffffff;
    uStack_450 = 0;
    uStack_44c = 0;
    local_448 = 0;
    local_440 = 0;
    uStack_438 = 0;
    local_430 = 0.0;
    uStack_428 = 0;
    uStack_424 = 0;
    uStack_420._0_4_ = 0;
    uStack_420._4_4_ = 0;
    dStack_418 = 0.0;
    local_410 = 0.0;
    uStack_408 = 0;
    local_3d0 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    uStack_3b8 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3a0 = 0;
    local_398 = 0xf;
    local_390 = 1;
    local_38c = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    uStack_380 = 0;
    FUN_140c4ac3c();
    uStack_338 = 0x4b039460;
    uStack_334 = 1;
    local_330 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    dStack_2e8 = 0.0;
    local_2e0 = 0;
    uStack_2df = 0;
    uStack_2de = 0;
    fStack_2dc = 0.0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    local_2d0 = 0;
    ppuStack_2c8 = (undefined **)0x0;
    uStack_328 = (ulonglong)uStack_328._4_4_ << 0x20;
    FUN_14020a6cc(&local_330,1);
    local_570 = param_1 + 0x3f0;
    FUN_1407b25f0(&uStack_450);
    local_370 = *(undefined1 *)(param_1 + 0xa88);
    local_360 = CONCAT44(local_360._4_4_,*(undefined4 *)(param_1 + 0xa94));
    FUN_14020a6cc((longlong)&local_36c + 4,1);
    local_354 = *(undefined4 *)(param_1 + 0xaa0);
    FUN_14020a6cc((longlong)&local_360 + 4,1);
    local_348 = *(undefined4 *)(param_1 + 0xaac);
    FUN_14020a6cc(&local_350,1);
    uStack_33c = *(undefined4 *)(param_1 + 0xab8);
    FUN_14020a6cc(&local_344,1);
    local_568 = (undefined4 *)(param_1 + 0xac0);
    FUN_14187c1e4(&uStack_338);
    if (0.0001 < *(float *)(param_1 + 0xcc4)) {
      uStack_328 = uStack_328 & 0xffffffff00000000;
      FUN_14020a6cc(&local_330,1);
      FUN_140c67048(&uStack_338);
      FUN_140c67490();
      plVar13 = uStack_280;
      local_288[0x22a] = (code)0x1;
      local_288[0x1c0] = (code)0x0;
      *(undefined4 *)(local_288 + 0x230) = *(undefined4 *)(param_1 + 0xacc);
      *(undefined8 *)(local_288 + 0x238) = 0;
      *(undefined8 *)(local_288 + 0x240) = 0;
      *(undefined8 *)(local_288 + 0x248) = 0;
      *(undefined8 *)(local_288 + 0x250) = 0;
      *(undefined8 *)(local_288 + 600) = 0;
      if ((*(longlong *)(local_288 + 0x260) != 0) || (*(int *)(local_288 + 0x268) != -0xfffff30)) {
        *(undefined8 *)(local_288 + 0x260) = 0;
        *(undefined4 *)(local_288 + 0x268) = 0xf00000d0;
        *(undefined8 *)(local_288 + 0x270) = 0;
      }
      *(undefined4 *)(local_288 + 0x278) = 0x3f800000;
      local_288[0x1c8] = (code)0x1;
      *(undefined4 *)(local_288 + 0x1d0) = *(undefined4 *)(param_1 + 0xcc4);
      if (uStack_280 == (longlong *)0x0) {
        local_488 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
        UNLOCK();
        local_488 = uStack_280;
        LOCK();
        *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
        UNLOCK();
      }
      local_490 = local_288;
      FUN_140c679ea(&local_310,&local_490,0,0);
      plVar14 = local_488;
      if (local_488 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_488 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_488)(local_488);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar13 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      plVar13 = uStack_280;
      if (uStack_280 != (longlong *)0x0) {
        LOCK();
        plVar14 = uStack_280 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*uStack_280)(uStack_280);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    lVar8 = local_580;
    if (local_580 == 0) {
      if (lVar21 != 0) {
        FUN_1407b25f0(lVar21 + 0x2d90,local_570);
        *(undefined1 *)(lVar21 + 0x2e70) = *(undefined1 *)(param_1 + 0xa88);
        *(undefined4 *)(lVar21 + 0x2e80) = *(undefined4 *)(param_1 + 0xa94);
        FUN_14020a6cc(lVar21 + 0x2e78,1);
        *(undefined4 *)(lVar21 + 0x2e8c) = *(undefined4 *)(param_1 + 0xaa0);
        FUN_14020a6cc(lVar21 + 0x2e84,1);
        *(undefined4 *)(lVar21 + 0x2e98) = *(undefined4 *)(param_1 + 0xaac);
        FUN_14020a6cc(lVar21 + 0x2e90,1);
        *(undefined4 *)(lVar21 + 0x2ea4) = *(undefined4 *)(param_1 + 0xab8);
        FUN_14020a6cc(lVar21 + 0x2e9c,1);
        lVar8 = (**(code **)(*(longlong *)(lVar21 + 0x2c68) + 0x10))(lVar21 + 0x2c68);
        puVar25 = local_568;
        goto LAB_14417b51c;
      }
    }
    else {
      *(uint *)(local_580 + 0x1b38) = local_458;
      FUN_1407b25f0(local_580 + 0x1bd0,&uStack_450);
      *(undefined1 *)(lVar8 + 0x1838) = local_370;
      *(undefined4 *)(lVar8 + 0x1848) = local_364;
      FUN_14020a6cc(lVar8 + 0x1840,1);
      *(int *)(lVar8 + 0x1854) = local_358;
      FUN_14020a6cc(lVar8 + 0x184c,1);
      *(undefined4 *)(&DAT_00001860 + lVar8) = local_350._4_4_;
      FUN_14020a6cc(lVar8 + 0x1858,1);
      *(undefined4 *)(lVar8 + 0x186c) = local_340;
      FUN_14020a6cc(lVar8 + 0x1864,1);
      lVar8 = lVar8 + 0x1b50;
      puVar25 = &uStack_338;
LAB_14417b51c:
      FUN_14187c1e4(lVar8,puVar25);
    }
    lVar8 = local_578;
    uVar23 = 0;
    if (lVar6 == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      uVar23 = 0;
      if (param_2[5] != lVar6) {
        uVar23 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar23 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        uVar26 = (ulonglong)*(uint *)(lVar6 + 0x10);
        if (*(uint *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar16 = DAT_14c964868 + 1;
          UNLOCK();
          uVar15 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar16;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar15);
          }
          LOCK();
          uVar5 = *(uint *)(lVar6 + 0x10);
          bVar27 = uVar5 == 0;
          if (bVar27) {
            *(uint *)(lVar6 + 0x10) = uVar15;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar27) {
            uVar5 = uVar15;
          }
          uVar26 = (ulonglong)uVar5;
        }
      }
    }
    local_548 = 0;
    uStack_540 = 0;
    local_288 = (code *)lVar8;
    uStack_280 = (longlong *)((ulonglong)uStack_280 & 0xffffffff00000000);
    if (*(int *)(param_1 + 0xc28) == 0) {
      uVar15 = *(uint *)(param_1 + 0xc30);
      local_278._0_4_ = uVar15;
    }
    else {
      FUN_1402a453c(&uStack_280);
      iVar16 = *(int *)(param_1 + 0xc28);
      iVar19 = (int)uStack_280;
      lVar6 = (longlong)(int)uStack_280 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar16 != iVar19) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      lVar6 = (longlong)(int)uStack_280;
      uStack_280 = (longlong *)((ulonglong)uStack_280 & 0xffffffff);
      uVar15 = *(uint *)(param_1 + 0xc30);
      local_278 = CONCAT44(local_278._4_4_,uVar15);
      if (lVar6 != 0) {
        uVar15 = FUN_14020a770(DAT_14c9a3d60 + lVar6 * 0x88 + -0x88,uVar15,0);
      }
    }
    uStack_280 = (longlong *)CONCAT44(uVar15,(int)uStack_280);
    local_278 = (ulonglong)(uint)local_278;
    if (*(int *)(param_1 + 0xc34) == 0) {
      uVar28 = *(undefined4 *)(param_1 + 0xc3c);
      uStack_26c = uVar28;
    }
    else {
      FUN_1402a453c((longlong)&local_278 + 4);
      iVar16 = *(int *)(param_1 + 0xc34);
      iVar19 = local_278._4_4_;
      lVar6 = (longlong)local_278._4_4_ * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar16 != iVar19) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      local_270 = 0;
      uVar28 = *(undefined4 *)(param_1 + 0xc3c);
      uStack_26c = uVar28;
      if ((longlong)local_278._4_4_ != 0) {
        uVar28 = FUN_14020a770(DAT_14c9a3d60 + (longlong)local_278._4_4_ * 0x88 + -0x88,uVar28,0);
      }
    }
    local_270 = uVar28;
    iStack_268 = 0;
    if (*(int *)(param_1 + 0xc4c) == 0) {
      uVar15 = *(uint *)(param_1 + 0xc54);
      local_260._0_4_ = uVar15;
    }
    else {
      FUN_1402a453c(&iStack_268);
      iVar19 = iStack_268;
      iVar16 = *(int *)(param_1 + 0xc4c);
      lVar6 = (longlong)iStack_268 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar16 != iVar19) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      uStack_264 = 0;
      uVar15 = *(uint *)(param_1 + 0xc54);
      local_260 = CONCAT44(local_260._4_4_,uVar15);
      if ((longlong)iStack_268 != 0) {
        uVar15 = FUN_14020a770(DAT_14c9a3d60 + (longlong)iStack_268 * 0x88 + -0x88,uVar15,0);
      }
    }
    uStack_264 = uVar15;
    local_260 = (ulonglong)(uint)local_260;
    if (*(int *)(param_1 + 0xca8) == 0) {
      uVar28 = *(undefined4 *)(param_1 + 0xcb0);
      local_258._4_4_ = uVar28;
    }
    else {
      FUN_1402a453c((longlong)&local_260 + 4);
      iVar16 = *(int *)(param_1 + 0xca8);
      iVar19 = local_260._4_4_;
      lVar6 = (longlong)local_260._4_4_ * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar16 != iVar19) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      uVar28 = *(undefined4 *)(param_1 + 0xcb0);
      local_258._0_4_ = 0;
      local_258._4_4_ = uVar28;
      if ((longlong)local_260._4_4_ != 0) {
        uVar28 = FUN_14020a770(DAT_14c9a3d60 + (longlong)local_260._4_4_ * 0x88 + -0x88,uVar28,0);
      }
    }
    local_258 = CONCAT44(local_258._4_4_,uVar28);
    uStack_250 = uStack_250 & 0xffffffff00000000;
    if (*(int *)(param_1 + 0xcb4) == 0) {
      uVar28 = *(undefined4 *)(param_1 + 0xcbc);
      local_248 = CONCAT44(local_248._4_4_,uVar28);
    }
    else {
      FUN_1402a453c(&uStack_250);
      iVar16 = *(int *)(param_1 + 0xcb4);
      iVar19 = (int)uStack_250;
      lVar6 = (longlong)(int)uStack_250 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar16 != iVar19) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      lVar6 = (longlong)(int)uStack_250;
      uStack_250 = uStack_250 & 0xffffffff;
      uVar28 = *(undefined4 *)(param_1 + 0xcbc);
      local_248 = CONCAT44(local_248._4_4_,uVar28);
      if (lVar6 != 0) {
        uVar28 = FUN_14020a770(DAT_14c9a3d60 + lVar6 * 0x88 + -0x88,uVar28,0);
      }
    }
    uStack_250 = CONCAT44(uVar28,(int)uStack_250);
    pdVar17 = local_508;
    pdVar22 = local_238;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar22 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar22 = pdVar22 + 1;
    }
    local_1d0 = CONCAT44(uVar35,uVar29);
    local_1c8 = CONCAT44(uVar37,uVar36);
    local_1c0 = CONCAT44(uVar39,uVar38);
    local_1b8 = *(undefined1 *)((longlong)param_2 + 0xc);
    local_1b0 = *(undefined4 *)(param_2 + 2);
    uStack_1ac = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_1a8 = *(undefined4 *)(param_2 + 3);
    uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_1a0 = param_2[4];
    local_198 = (ulonglong)uVar23 | uVar26 << 0x20;
    local_188[0] = (code *)0x0;
    local_1d8 = uVar18;
    puVar11 = (undefined8 *)FUN_14001cc68(0x110,0x10);
    *puVar11 = &PTR_FUN_14b977b70;
    puVar11[2] = local_288;
    *(undefined4 *)(puVar11 + 3) = 0;
    local_178 = puVar11;
    if ((int)uStack_280 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
      *(uint *)(puVar11 + 4) = (uint)local_278;
      uVar29 = (uint)local_278;
    }
    else {
      FUN_1402a453c(puVar11 + 3);
      iVar19 = (int)uStack_280;
      iVar16 = *(int *)(puVar11 + 3);
      lVar6 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)(int)uStack_280 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar19 != iVar16) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
      *(uint *)(puVar11 + 4) = (uint)local_278;
      uVar29 = (uint)local_278;
      if ((longlong)*(int *)(puVar11 + 3) != 0) {
        uVar29 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)(puVar11 + 3) * 0x88 + -0x88,
                               (uint)local_278,0);
      }
    }
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar29;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0;
    if (local_278._4_4_ == 0) {
      *(undefined4 *)(puVar11 + 5) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_26c;
      uVar29 = uStack_26c;
    }
    else {
      FUN_1402a453c((int *)((longlong)puVar11 + 0x24));
      iVar19 = local_278._4_4_;
      iVar16 = *(int *)((longlong)puVar11 + 0x24);
      lVar6 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)local_278._4_4_ * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar19 != iVar16) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      *(undefined4 *)(puVar11 + 5) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_26c;
      uVar29 = uStack_26c;
      if ((longlong)*(int *)((longlong)puVar11 + 0x24) != 0) {
        uVar29 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)((longlong)puVar11 + 0x24) * 0x88 +
                               -0x88,uStack_26c,0);
      }
    }
    *(undefined4 *)(puVar11 + 5) = uVar29;
    *(undefined4 *)(puVar11 + 6) = 0;
    if (iStack_268 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0x34) = 0;
      *(uint *)(puVar11 + 7) = (uint)local_260;
      uVar29 = (uint)local_260;
    }
    else {
      FUN_1402a453c(puVar11 + 6);
      iVar19 = iStack_268;
      iVar16 = *(int *)(puVar11 + 6);
      lVar6 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)iStack_268 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar19 != iVar16) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      *(undefined4 *)((longlong)puVar11 + 0x34) = 0;
      *(uint *)(puVar11 + 7) = (uint)local_260;
      uVar29 = (uint)local_260;
      if ((longlong)*(int *)(puVar11 + 6) != 0) {
        uVar29 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)(puVar11 + 6) * 0x88 + -0x88,
                               (uint)local_260,0);
      }
    }
    *(undefined4 *)((longlong)puVar11 + 0x34) = uVar29;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = 0;
    if (local_260._4_4_ == 0) {
      *(undefined4 *)(puVar11 + 8) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x44) = local_258._4_4_;
      uVar29 = local_258._4_4_;
    }
    else {
      FUN_1402a453c((int *)((longlong)puVar11 + 0x3c));
      iVar19 = local_260._4_4_;
      iVar16 = *(int *)((longlong)puVar11 + 0x3c);
      lVar6 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)local_260._4_4_ * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar19 != iVar16) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      *(undefined4 *)(puVar11 + 8) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x44) = local_258._4_4_;
      uVar29 = local_258._4_4_;
      if ((longlong)*(int *)((longlong)puVar11 + 0x3c) != 0) {
        uVar29 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)((longlong)puVar11 + 0x3c) * 0x88 +
                               -0x88,local_258._4_4_,0);
      }
    }
    *(undefined4 *)(puVar11 + 8) = uVar29;
    *(undefined4 *)(puVar11 + 9) = 0;
    if ((int)uStack_250 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0x4c) = 0;
      *(undefined4 *)(puVar11 + 10) = (undefined4)local_248;
      uVar29 = (undefined4)local_248;
    }
    else {
      FUN_1402a453c(puVar11 + 9);
      iVar19 = (int)uStack_250;
      iVar16 = *(int *)(puVar11 + 9);
      lVar6 = (longlong)iVar16 * 0x88 + DAT_14c9a3d60;
      lVar8 = (longlong)(int)uStack_250 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar6 + -0x88,lVar8 + -0x88);
      if (iVar19 != iVar16) {
        FUN_1402a4744(lVar6 + -0x18,lVar8 + -0x18);
      }
      *(undefined4 *)((longlong)puVar11 + 0x4c) = 0;
      *(undefined4 *)(puVar11 + 10) = (undefined4)local_248;
      uVar29 = (undefined4)local_248;
      if ((longlong)*(int *)(puVar11 + 9) != 0) {
        uVar29 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*(int *)(puVar11 + 9) * 0x88 + -0x88,
                               (undefined4)local_248,0);
      }
    }
    lVar6 = local_580;
    *(undefined4 *)((longlong)puVar11 + 0x4c) = uVar29;
    memcpy(puVar11 + 0xc,local_238,0xa8);
    lVar8 = local_578;
    if (puVar11 != (undefined8 *)&DAT_fffffffffffffff0) {
      local_188[0] = FUN_144186648;
    }
    FUN_1410672ce(local_578,*(undefined8 *)(param_1 + 0xbe8),local_188,&local_548);
    lVar10 = DAT_14c9a3d60;
    if ((int)uStack_250 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar16 = (int)uStack_250 + -1;
        lVar21 = (longlong)iVar16 * 0x88;
        lVar20 = DAT_14c9a3d60 + lVar21;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar21),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar21));
        if (*(longlong *)(lVar10 + 0x70 + lVar21) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar20 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
      }
      uStack_250 = uStack_250 & 0xffffffff00000000;
    }
    lVar10 = DAT_14c9a3d60;
    if (local_260._4_4_ != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar16 = local_260._4_4_ + -1;
        lVar21 = (longlong)iVar16 * 0x88;
        lVar20 = DAT_14c9a3d60 + lVar21;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar21),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar21));
        if (*(longlong *)(lVar10 + 0x70 + lVar21) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar20 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
      }
      local_260 = local_260 & 0xffffffff;
    }
    lVar10 = DAT_14c9a3d60;
    if (iStack_268 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar16 = iStack_268 + -1;
        lVar21 = (longlong)iVar16 * 0x88;
        lVar20 = DAT_14c9a3d60 + lVar21;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar21),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar21));
        if (*(longlong *)(lVar10 + 0x70 + lVar21) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar20 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
      }
      iStack_268 = 0;
    }
    lVar10 = DAT_14c9a3d60;
    if (local_278._4_4_ != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar16 = local_278._4_4_ + -1;
        lVar21 = (longlong)iVar16 * 0x88;
        lVar20 = DAT_14c9a3d60 + lVar21;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar21),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar21));
        if (*(longlong *)(lVar10 + 0x70 + lVar21) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar20 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
      }
      local_278 = local_278 & 0xffffffff;
    }
    lVar10 = DAT_14c9a3d60;
    if (((int)uStack_280 != 0) && (DAT_14c9a3d68 != DAT_14c9a3d94)) {
      iVar16 = (int)uStack_280 + -1;
      lVar21 = (longlong)iVar16 * 0x88;
      lVar20 = DAT_14c9a3d60 + lVar21;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar21),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar21));
      if (*(longlong *)(lVar10 + 0x70 + lVar21) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar20 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
    }
    FUN_1418e9472(&local_550);
    local_288 = (code *)0x0;
    uStack_280 = (longlong *)0x0;
    plVar13 = local_550;
    if (param_1 != 0) {
      uVar18 = *(uint *)(param_1 + 0xc);
      local_288 = (code *)(ulonglong)uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar16 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar16 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar16;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar16 = *(int *)(lVar10 + 0x10);
        bVar27 = iVar16 == 0;
        if (bVar27) {
          *(int *)(lVar10 + 0x10) = iVar19;
          iVar16 = 0;
        }
        UNLOCK();
        uVar18 = (uint)local_288;
        if (bVar27) {
          iVar16 = iVar19;
        }
      }
      local_288._0_4_ = uVar18;
      local_288 = (code *)CONCAT44(iVar16,(uint)local_288);
      uStack_280 = local_550;
      plVar13 = uStack_280;
      if (((((local_550 != (longlong *)0x0) && (iVar16 != 0)) && (-1 < (int)(uint)local_288)) &&
          (((int)(uint)local_288 < DAT_14c9647dc &&
           (plVar14 = (longlong *)
                      ((ulonglong)(((uint)local_288 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_288 >> 0x10) * 8)),
           plVar14 != (longlong *)0x0)))) &&
         (((int)plVar14[2] == iVar16 &&
          (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (*plVar14 != 0)))))) {
        FUN_1400796d0(*(undefined8 *)(*plVar14 + 0x10),local_550,1);
        plVar13 = uStack_280;
      }
    }
    uStack_280 = plVar13;
    FUN_14053c012(lVar8 + 0xd78,&local_288);
    if (lVar6 != 0) {
      uVar18 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar16 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar16 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar16;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar16 = *(int *)(lVar8 + 0x10);
        bVar27 = iVar16 == 0;
        if (bVar27) {
          *(int *)(lVar8 + 0x10) = iVar19;
          iVar16 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar16 = iVar19;
        }
      }
      iVar19 = *(int *)(param_1 + 0xcd8);
      *(uint *)(param_1 + 0xcd8) = iVar19 + 1U;
      if (*(uint *)(param_1 + 0xcdc) < iVar19 + 1U) {
        FUN_1418ea52a(param_1 + 0xcd0,iVar19);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0xcd0) + (longlong)iVar19 * 8) =
           CONCAT44(iVar16,uVar18);
      if (*(longlong *)(param_1 + 0xbf8) == 0) {
        *(byte *)(param_1 + 0xc61) = *(byte *)(param_1 + 0xc61) & 0xfe;
      }
      else {
        bVar4 = *(byte *)(*(longlong *)(param_1 + 0xbf8) + 0xd8) & 2;
        *(byte *)(param_1 + 0xc61) = *(byte *)(param_1 + 0xc61) & 0xfe | bVar4 >> 1;
        if (bVar4 != 0) {
          *(undefined1 *)(lVar6 + 0x1b4a) = 1;
        }
      }
    }
    FUN_140a3299c(&uStack_338);
    lVar6 = DAT_14c9a3d60;
    local_378 = &PTR_FUN_14b695510;
    if (local_344 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        lVar10 = (longlong)(int)(local_344 - 1) * 0x88;
        lVar8 = DAT_14c9a3d60 + lVar10;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar10),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar10));
        if (*(longlong *)(lVar6 + 0x70 + lVar10) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar8 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,local_344 - 1,1);
      }
      local_344 = 0;
    }
    lVar6 = DAT_14c9a3d60;
    if ((int)local_350 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar16 = (int)local_350 + -1;
        lVar10 = (longlong)iVar16 * 0x88;
        lVar8 = DAT_14c9a3d60 + lVar10;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar10),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar10));
        if (*(longlong *)(lVar6 + 0x70 + lVar10) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar8 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
      }
      local_350 = local_350 & 0xffffffff00000000;
    }
    lVar6 = DAT_14c9a3d60;
    if (local_360._4_4_ != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar16 = local_360._4_4_ + -1;
        lVar10 = (longlong)iVar16 * 0x88;
        lVar8 = DAT_14c9a3d60 + lVar10;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar10),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar10));
        if (*(longlong *)(lVar6 + 0x70 + lVar10) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar8 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
      }
      local_360 = local_360 & 0xffffffff;
    }
    lVar6 = DAT_14c9a3d60;
    if (local_36c._4_4_ != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar16 = local_36c._4_4_ + -1;
        lVar10 = (longlong)iVar16 * 0x88;
        lVar8 = DAT_14c9a3d60 + lVar10;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar10),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar10));
        if (*(longlong *)(lVar6 + 0x70 + lVar10) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar8 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar16,1);
      }
      local_36c = local_36c & 0xffffffff;
    }
    FUN_140368b56(&uStack_450);
  }
  if (lStack_108 != 0) {
    plVar13 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar13 = local_e8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
LAB_14417bd92:
  if ((local_c0 ^ (ulonglong)auStack_5f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14417cf5e FUN_14417cf5e body=481 status=ok
// SIG undefined FUN_14417cf5e(void)

void FUN_14417cf5e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar7 [16];
  
  plVar4 = *(longlong **)(param_1 + 0x290);
  if ((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0x28c) != 0)) {
    puVar1 = (uint *)(param_1 + 0x288);
    uVar2 = *puVar1;
    if ((-1 < (int)uVar2) &&
       (((((int)uVar2 < DAT_14c9647dc &&
          (lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0)) &&
         (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x28c))) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      if (*(code **)(*plVar4 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar4 = plVar4 + 0xd9;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      }
      cVar3 = FUN_14486eb0e(plVar4,puVar1);
      if (cVar3 != '\0') {
        lVar5 = FUN_140280ec4(puVar1);
        if ((*(longlong *)(lVar5 + 0x18) == 0) ||
           (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) != '\x01')) {
          fVar6 = *(float *)(lVar5 + 0x30);
        }
        else {
          auVar7 = roundps(unaff_XMM7,ZEXT416(*(uint *)(lVar5 + 0x30)),3);
          fVar6 = auVar7._0_4_;
        }
        fVar6 = fVar6 * *(float *)(param_1 + 0x164);
        if ((fVar6 != 0.0) || (NAN(fVar6))) {
          lVar5 = FUN_140280ec4(puVar1);
          if ((*(longlong *)(lVar5 + 0x18) != 0) &&
             (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) == '\x01')) {
            roundps(ZEXT816(0),ZEXT416(*(uint *)(lVar5 + 0x30)),3);
          }
          FUN_140280ec4(puVar1);
          if (*(int *)(param_1 + 0x27c) < *(int *)(param_1 + 0x274) + -1) {
            lVar5 = FUN_140280ec4(puVar1);
            if ((*(longlong *)(lVar5 + 0x18) != 0) &&
               (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) == '\x01')) {
              roundps(ZEXT416(*(uint *)(lVar5 + 0x30)),ZEXT416(*(uint *)(lVar5 + 0x30)),3);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14417d140 FUN_14417d140 body=460 status=ok
// SIG undefined FUN_14417d140(void)

void FUN_14417d140(longlong param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  
  plVar5 = *(longlong **)(param_1 + 0x290);
  if ((plVar5 != (longlong *)0x0) && (*(int *)(param_1 + 0x28c) != 0)) {
    puVar1 = (uint *)(param_1 + 0x288);
    uVar2 = *puVar1;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x28c))) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
        if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar5 = plVar5 + 0xd9;
        }
        else {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
        }
        cVar3 = FUN_14486eb0e(plVar5,puVar1);
        if ((cVar3 != '\0') && (*(char *)(param_1 + -0x750) == '\x03')) {
          fVar11 = *(float *)(param_1 + 0x164);
          if ((fVar11 != 0.0) || (NAN(fVar11))) {
            lVar7 = FUN_14008e0ae(puVar1);
            if ((*(longlong *)(lVar7 + 0x18) == 0) ||
               (*(char *)(*(longlong *)(lVar7 + 0x18) + 0x18) != '\x01')) {
              fVar8 = *(float *)(lVar7 + 0x30);
            }
            else {
              auVar9 = roundps(ZEXT416(*(uint *)(lVar7 + 0x30)),ZEXT416(*(uint *)(lVar7 + 0x30)),3);
              fVar8 = auVar9._0_4_;
            }
            iVar6 = 0;
            do {
              fVar10 = param_2 - fVar8 * *(float *)(param_1 + 0x164);
              iVar6 = (uint)(0.0 <= fVar10) + iVar6;
              if (fVar10 < 0.0) break;
              param_2 = fVar10;
            } while (iVar6 < *(int *)(param_1 + 0x274));
            if (*(char *)(param_1 + -0x750) == '\x03') {
              *(int *)(param_1 + 0x27c) = iVar6;
              FUN_140ef1516(param_1 + -0x8c8);
            }
            lVar7 = FUN_14008e0ae(puVar1);
            *(float *)(lVar7 + 0x58) = 1.0 / fVar11;
            FUN_14020a6cc(lVar7 + 0x50,1);
            if (iVar6 < *(int *)(param_1 + 0x274)) {
              fVar11 = 1.0 - param_2 / fVar11;
            }
            else {
              fVar11 = 0.0;
            }
            uVar4 = FUN_14008e0ae(puVar1);
            FUN_1409d461e(uVar4,fVar11,1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14417d310 FUN_14417d310 body=141 status=ok
// SIG undefined FUN_14417d310(void)

ulonglong FUN_14417d310(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  
  bVar2 = *(byte *)(param_1 + 0xbd8);
  uVar3 = (ulonglong)bVar2;
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(char *)(param_1 + 0x10a8) == '\0') {
    if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
      uVar3 = (ulonglong)bVar2 * 0x80 + uVar3 * 8;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10 + uVar3);
      if (plVar1 != (longlong *)0x0) {
        bVar4 = 0;
        uVar5 = 0;
        bVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,0);
        goto LAB_14417d359;
      }
    }
  }
  else if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
    uVar3 = (ulonglong)bVar2 * 0x80 + uVar3 * 8;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10 + uVar3);
    if (plVar1 != (longlong *)0x0) {
      bVar2 = (**(code **)(*plVar1 + 0x338))(plVar1,1);
      bVar4 = 0;
      uVar5 = 0;
      goto LAB_14417d359;
    }
  }
  bVar4 = 1;
  bVar2 = (byte)uVar3;
LAB_14417d359:
  return CONCAT71(uVar5,bVar4 | bVar2) & 0xffffff01;
}



// FUNCTION 14417d39e FUN_14417d39e body=195 status=ok
// SIG undefined FUN_14417d39e(void)

float FUN_14417d39e(longlong param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x18);
  if ((plVar5 != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
    puVar1 = (uint *)(param_1 + 0x10);
    uVar3 = *puVar1;
    if (((-1 < (int)uVar3) &&
        ((((int)uVar3 < DAT_14c9647dc &&
          (lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 != 0)) &&
         (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x14))))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar5 = plVar5 + 0xd9;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
      }
      cVar4 = FUN_14486eb0e(plVar5,puVar1);
      if (cVar4 != '\0') {
        fVar2 = *(float *)(param_1 + 0x38);
        lVar6 = FUN_14008e0ae(puVar1);
        return fVar2 - *(float *)(lVar6 + 200) * fVar2;
      }
    }
  }
  return 0.0;
}



// FUNCTION 14417d462 FUN_14417d462 body=278 status=ok
// SIG undefined FUN_14417d462(void)

void FUN_14417d462(longlong param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x18);
  if ((plVar5 != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
    puVar1 = (uint *)(param_1 + 0x10);
    uVar2 = *puVar1;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x14))) &&
         ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
        if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar5 = plVar5 + 0xd9;
        }
        else {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
        }
        cVar3 = FUN_14486eb0e(plVar5,puVar1);
        if (cVar3 != '\0') {
          lVar6 = FUN_14008e0ae(puVar1);
          *(float *)(lVar6 + 0x58) = 1.0 / *(float *)(param_1 + 0x38);
          FUN_14020a6cc(lVar6 + 0x50,1);
          uVar4 = FUN_14008e0ae(puVar1);
          FUN_1409d461e(uVar4,1.0 - param_2 / *(float *)(param_1 + 0x38),1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14417d5d8 FUN_14417d5d8 body=53 status=ok
// SIG undefined FUN_14417d5d8(void)

undefined8 FUN_14417d5d8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x800) != '\x01')) {
    uVar2 = 0;
  }
  else {
    FUN_14400a028(param_2,lVar1 + 0xae0);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14417d60e FUN_14417d60e body=132 status=ok
// SIG undefined FUN_14417d60e(void)

void FUN_14417d60e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *param_2;
    }
  }
  bVar5 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x178) = lVar6;
  lVar6 = param_2[1];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[1];
    }
  }
  *(longlong *)(param_1 + 0x180) = lVar6;
  lVar6 = param_2[3];
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[6];
  lVar4 = param_2[7];
  *(longlong *)(param_1 + 0x188) = param_2[2];
  *(longlong *)(param_1 + 400) = lVar6;
  *(longlong *)(param_1 + 0x198) = lVar1;
  *(longlong *)(param_1 + 0x1a0) = lVar2;
  *(longlong *)(param_1 + 0x1a8) = lVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
  return;
}



// FUNCTION 14417d692 FUN_14417d692 body=129 status=ok
// SIG undefined FUN_14417d692(void)

void FUN_14417d692(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)param_1 + 0xb44) < *(int *)((longlong)param_1 + 0xb3c)) {
    plVar1 = param_1 + 0x16a;
    cVar2 = FUN_1403ae288(plVar1);
    if (cVar2 != '\0') {
      lVar3 = FUN_14008e0ae(plVar1);
      if ((ABS(*(float *)(lVar3 + 200) - *(float *)(lVar3 + 0x24)) < 0.0001) &&
         (*(float *)(lVar3 + 200) < *(float *)(lVar3 + 0x30))) {
                    /* WARNING: Could not recover jumptable at 0x00014417d708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x6f0))(param_1,plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14417d743 FUN_14417d743 body=4680 status=ok
// SIG undefined FUN_14417d743(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14417d743(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4,
             undefined8 param_5,longlong param_6,longlong param_7,undefined4 *param_8,
             double *param_9,undefined4 *param_10,float *param_11,char param_12,undefined4 param_13,
             undefined1 param_14)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_3b8 [32];
  wchar_t *local_398;
  undefined4 local_390;
  undefined8 local_388;
  wchar_t *local_380;
  wchar_t *local_378;
  code *local_370;
  undefined1 *local_368;
  code **local_360;
  code *local_358;
  code *local_350;
  ulonglong local_340;
  ulonglong local_338;
  code *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  code *local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  code *local_2b0;
  undefined1 local_2a8 [8];
  code *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined1 local_278 [48];
  undefined1 *local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined **local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  uint5 uStack_1b0;
  undefined3 uStack_1ab;
  uint5 local_1a8;
  undefined3 uStack_1a3;
  undefined4 local_1a0;
  undefined1 local_19c;
  code *local_198 [2];
  undefined8 *local_188;
  code *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  byte local_126;
  undefined1 local_125;
  uint local_124;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [5];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_158 = (code *)*param_2;
  FUN_1446dcdd4(&local_2a0);
  lVar10 = FUN_140a4bd48(&local_2a0);
  if (CONCAT44(uStack_284,local_288) != 0) {
    FUN_1400020a8();
  }
  if (lVar10 != 0) {
    if (((((*(int *)(lVar10 + 0x94) == 0) || (uVar23 = *(uint *)(lVar10 + 0x90), (int)uVar23 < 0))
         || (DAT_14c9647dc <= (int)uVar23)) ||
        ((plVar17 = (longlong *)
                    ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
         plVar17 == (longlong *)0x0 || ((int)plVar17[2] != *(int *)(lVar10 + 0x94))))) ||
       (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 || (lVar13 = *plVar17, lVar13 == 0)))) {
      if (*(longlong *)(lVar10 + 0x98) != 0) {
        lVar13 = FUN_140007850(lVar10 + 0x98);
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        lVar11 = DAT_14c9647c8;
        if ((lVar13 == 0) || (cVar7 == '\0')) {
          if (lVar13 != 0) {
            uVar23 = *(uint *)(lVar13 + 0xc);
            *(uint *)(lVar10 + 0x90) = uVar23;
            if (DAT_14c9647dc <= (int)uVar23) goto LAB_14417db23;
            lVar11 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
            goto LAB_14417da67;
          }
          *(undefined8 *)(lVar10 + 0x90) = 0;
        }
        else {
          uVar23 = *(uint *)(lVar13 + 0xc);
          if ((int)uVar23 < DAT_14c9647dc) {
            if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8) + 8 +
                          (ulonglong)(uVar23 & 0xffff) * 0x18) & 0x8400000) == 0) {
              *(uint *)(lVar10 + 0x90) = uVar23;
              lVar11 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                       *(longlong *)(lVar11 + (ulonglong)(uVar23 >> 0x10) * 8);
LAB_14417da67:
              iVar8 = *(int *)(lVar11 + 0x10);
              if (*(int *)(lVar11 + 0x10) == 0) {
                LOCK();
                iVar8 = DAT_14c964868 + 1;
                UNLOCK();
                iVar21 = DAT_14c964868 + 1;
                bVar25 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar8;
                if (bVar25) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar21);
                }
                LOCK();
                iVar8 = *(int *)(lVar11 + 0x10);
                bVar25 = iVar8 == 0;
                if (bVar25) {
                  *(int *)(lVar11 + 0x10) = iVar21;
                  iVar8 = 0;
                }
                UNLOCK();
                if (bVar25) {
                  iVar8 = iVar21;
                }
              }
              *(int *)(lVar10 + 0x94) = iVar8;
            }
          }
          else if ((_DAT_00000008 & 0x8400000) == 0) {
            *(uint *)(lVar10 + 0x90) = uVar23;
LAB_14417db23:
            lVar11 = 0;
            goto LAB_14417da67;
          }
          if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_14417d867;
        }
      }
    }
    else {
LAB_14417d867:
      if (DAT_14c949118 == 0) {
        local_318 = FUN_140631fbe;
        lVar11 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar11;
        FUN_1446f470e(&local_158,L"Class",1);
        local_368 = &LAB_146891e90;
        local_370 = (code *)&LAB_146273097;
        local_380 = L"Engine";
        local_378 = (wchar_t *)CONCAT44(local_378._4_4_,199);
        local_388 = 0x20;
        local_390 = 0x10000000;
        local_398._0_4_ = 8;
        local_360 = &local_318;
        FUN_14574b4b2(lVar11);
        DAT_14c949118 = lVar11;
        if (DAT_14c951858 == 0) {
          local_2a0 = FUN_1449e2820;
          local_350 = FUN_14081d0ea;
          local_358 = FUN_14081d0ea;
          local_368 = &LAB_1468c5283;
          local_370 = FUN_142809da0;
          local_378 = L"Engine";
          local_380 = (wchar_t *)0x400000000;
          local_388 = CONCAT44(local_388._4_4_,0x10000000);
          local_390 = 8;
          local_398._0_4_ = 0x50;
          local_360 = &local_2a0;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar18 = DAT_14c951858;
        lVar11 = DAT_14c949118;
        uVar16 = FUN_1449e2fb2();
        local_398 = L"Class";
        FUN_14574b446(uVar16,lVar11,lVar18,L"/Script/CoreUObject");
      }
      if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
          (lVar11 = FUN_140d12354(), lVar11 != 0)) &&
         ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar13 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
           lVar11 + 0x30)))) {
        local_138 = 0;
        uStack_130 = 0;
        local_158 = (code *)0x0;
        uStack_150 = 0;
        local_128 = 0x100;
        local_125 = 0;
        local_124 = 8;
        local_118 = 0;
        local_108 = (longlong *)0x0;
        local_126 = local_126 & 0xe0 | 6;
        uStack_140 = param_5;
        puVar19 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
          puVar19 = *(undefined4 **)(lVar10 + 8);
        }
        local_148 = param_4;
        if (DAT_14c947fe0 == 0) {
          lVar13 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar13);
          DAT_14c947fe0 = lVar13;
        }
        FUN_140045924(DAT_14c947fe0,&local_2a0,puVar19,1);
        local_158 = local_2a0;
        local_125 = 3;
        local_128 = CONCAT11(local_128._1_1_,1);
        if (local_148 == 0) {
          local_124 = 0x40;
        }
        else {
          local_124 = *(uint *)(local_148 + 8) & 0x69;
        }
        dVar1 = *param_9;
        dVar2 = param_9[1];
        uVar26 = SUB84(dVar2,0);
        uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = 0.0;
        if ((dVar1 != 0.0) || (NAN(dVar1))) {
LAB_14417db6b:
          dVar3 = atan2(dVar2,dVar1);
          dVar3 = dVar3 * 57.29577951308232;
          dVar1 = *param_9;
          uVar26 = SUB84(param_9[1],0);
          uVar27 = (undefined4)((ulonglong)param_9[1] >> 0x20);
        }
        else {
          in_XMM2 = ZEXT816(0);
          if ((dVar2 != 0.0) || (NAN(dVar2))) goto LAB_14417db6b;
        }
        dVar28 = SQRT(dVar1 * dVar1 +
                      (double)CONCAT44(uVar27,uVar26) * (double)CONCAT44(uVar27,uVar26));
        dVar2 = param_9[2];
        dVar1 = 0.0;
        if ((dVar2 != 0.0) || (NAN(dVar2))) {
LAB_14417dbbe:
          dVar1 = atan2(dVar2,dVar28);
          dVar1 = dVar1 * 57.29577951308232;
        }
        else {
          in_XMM2 = ZEXT816(0);
          if ((dVar28 != 0.0) || (NAN(dVar28))) goto LAB_14417dbbe;
        }
        auVar29._8_8_ = dVar3;
        auVar29._0_8_ = dVar1;
        auVar29 = divpd(auVar29,_DAT_1499387d0);
        auVar29 = roundpd(auVar29,auVar29,3);
        auVar30 = roundpd(in_XMM2,ZEXT816(0),3);
        dVar28 = (dVar1 - auVar29._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar4 = (dVar3 - auVar29._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar5 = (0.0 - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar6 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar2 = sin(dVar28);
        dVar1 = sin(dVar4);
        dVar3 = sin(dVar5);
        sin(dVar6);
        dVar28 = cos(dVar28);
        dVar4 = cos(dVar4);
        dVar5 = cos(dVar5);
        cos(dVar6);
        dVar6 = dVar1 * dVar2 * dVar3 + dVar4 * dVar28 * dVar5;
        local_318 = (code *)(dVar2 * dVar1 * dVar5 - dVar28 * dVar4 * dVar3);
        dStack_310 = -(dVar2 * dVar4 * dVar5) - dVar28 * dVar1 * dVar3;
        local_308._8_4_ = SUB84(dVar6,0);
        local_308._0_8_ = -(dVar4 * dVar2 * dVar3) + dVar1 * dVar28 * dVar5;
        local_308._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_2f8 = *param_8;
        uStack_2f4 = param_8[1];
        uStack_2f0 = (undefined4)*(undefined8 *)(param_8 + 2);
        uStack_2ec = (undefined4)((ulonglong)*(undefined8 *)(param_8 + 2) >> 0x20);
        local_2e8 = *(undefined8 *)(param_8 + 4);
        uStack_2e0 = 0;
        local_2d8 = 0x3ff0000000000000;
        uStack_2d0 = 0x3ff0000000000000;
        local_2c8 = 0x3ff0000000000000;
        uStack_2c0 = 0;
        if ((((*(int *)(lVar10 + 0x94) == 0) || (uVar23 = *(uint *)(lVar10 + 0x90), (int)uVar23 < 0)
             ) || (DAT_14c9647dc <= (int)uVar23)) ||
           (((plVar17 = (longlong *)
                        ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
             plVar17 == (longlong *)0x0 || ((int)plVar17[2] != *(int *)(lVar10 + 0x94))) ||
            (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 || (lVar13 = *plVar17, lVar13 == 0)))))) {
          if (*(longlong *)(lVar10 + 0x98) != 0) {
            lVar13 = FUN_140007850(lVar10 + 0x98);
            cVar7 = (*(code *)PTR_FUN_14c758760)();
            lVar11 = DAT_14c9647c8;
            if ((lVar13 == 0) || (cVar7 == '\0')) {
              if (lVar13 != 0) {
                uVar23 = *(uint *)(lVar13 + 0xc);
                *(uint *)(lVar10 + 0x90) = uVar23;
                if (DAT_14c9647dc <= (int)uVar23) goto LAB_14417e4d8;
                lVar11 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                goto LAB_14417dea8;
              }
              *(undefined8 *)(lVar10 + 0x90) = 0;
            }
            else {
              uVar23 = *(uint *)(lVar13 + 0xc);
              if ((int)uVar23 < DAT_14c9647dc) {
                if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8) + 8 +
                              (ulonglong)(uVar23 & 0xffff) * 0x18) & 0x8400000) == 0) {
                  *(uint *)(lVar10 + 0x90) = uVar23;
                  lVar11 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                           *(longlong *)(lVar11 + (ulonglong)(uVar23 >> 0x10) * 8);
LAB_14417dea8:
                  iVar8 = *(int *)(lVar11 + 0x10);
                  if (*(int *)(lVar11 + 0x10) == 0) {
                    LOCK();
                    iVar8 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar21 = DAT_14c964868 + 1;
                    bVar25 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar8;
                    if (bVar25) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar21);
                    }
                    LOCK();
                    iVar8 = *(int *)(lVar11 + 0x10);
                    bVar25 = iVar8 == 0;
                    if (bVar25) {
                      *(int *)(lVar11 + 0x10) = iVar21;
                      iVar8 = 0;
                    }
                    UNLOCK();
                    if (bVar25) {
                      iVar8 = iVar21;
                    }
                  }
                  *(int *)(lVar10 + 0x94) = iVar8;
                }
              }
              else if ((_DAT_00000008 & 0x8400000) == 0) {
                *(uint *)(lVar10 + 0x90) = uVar23;
LAB_14417e4d8:
                lVar11 = 0;
                goto LAB_14417dea8;
              }
              if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_14417dd95;
            }
          }
LAB_14417dede:
          lVar18 = 0;
        }
        else {
LAB_14417dd95:
          if (DAT_14c949118 == 0) {
            local_2b0 = FUN_140631fbe;
            lVar11 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar11;
            FUN_1446f470e(local_2a8,L"Class",1);
            local_368 = &LAB_146891e90;
            local_370 = (code *)&LAB_146273097;
            local_380 = L"Engine";
            local_378 = (wchar_t *)CONCAT44(local_378._4_4_,199);
            local_388 = 0x20;
            local_390 = 0x10000000;
            local_398._0_4_ = 8;
            local_360 = &local_2b0;
            FUN_14574b4b2(lVar11);
            DAT_14c949118 = lVar11;
            if (DAT_14c951858 == 0) {
              local_2a0 = FUN_1449e2820;
              local_350 = FUN_14081d0ea;
              local_358 = FUN_14081d0ea;
              local_368 = &LAB_1468c5283;
              local_370 = FUN_142809da0;
              local_378 = L"Engine";
              local_380 = (wchar_t *)0x400000000;
              local_388 = CONCAT44(local_388._4_4_,0x10000000);
              local_390 = 8;
              local_398._0_4_ = 0x50;
              local_360 = &local_2a0;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar18 = DAT_14c951858;
            lVar11 = DAT_14c949118;
            uVar16 = FUN_1449e2fb2();
            local_398 = L"Class";
            FUN_14574b446(uVar16,lVar11,lVar18,L"/Script/CoreUObject");
          }
          if ((((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
              (lVar11 = FUN_140d12354(), lVar11 == 0)) ||
             (*(int *)(lVar13 + 0x38) < *(int *)(lVar11 + 0x38))) goto LAB_14417dede;
          lVar18 = 0;
          if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30) {
            lVar18 = lVar13;
          }
        }
        pcVar12 = (code *)FUN_141037e38(param_1,lVar18,&local_318,&local_158);
        if (pcVar12 != (code *)0x0) {
          dVar2 = DAT_14c8464f0;
          dVar1 = DAT_14c8464e8;
          dVar3 = DAT_14c8464e0;
          if (*(char *)(param_11 + 1) == '\x01') {
            dVar3 = (double)*param_11;
            dVar2 = param_9[2] * dVar3;
            dVar1 = param_9[1] * dVar3;
            dVar3 = dVar3 * *param_9;
          }
          lVar13 = FUN_140f1f93e();
          if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(pcVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pcVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
            if (param_12 != '\0') {
              pcVar12[0x1b49] = (code)0x1;
            }
            *(undefined4 *)(pcVar12 + 0x1b38) = *param_3;
            FUN_1407b25f0(pcVar12 + 0x1bd0,param_3 + 2);
            pcVar12[0x1838] = *(code *)(param_3 + 0x3a);
            *(undefined4 *)(pcVar12 + 0x1848) = param_3[0x3d];
            FUN_14020a6cc(pcVar12 + 0x1840,1);
            *(undefined4 *)(pcVar12 + 0x1854) = param_3[0x40];
            FUN_14020a6cc(pcVar12 + 0x184c,1);
            *(undefined4 *)(pcVar12 + 0x1860) = param_3[0x43];
            FUN_14020a6cc(pcVar12 + 0x1858,1);
            *(undefined4 *)(pcVar12 + 0x186c) = param_3[0x46];
            FUN_14020a6cc(pcVar12 + 0x1864,1);
            FUN_14187c1e4(pcVar12 + 0x1b50,param_3 + 0x48);
          }
          local_340 = 0;
          uVar22 = 0;
          if (param_6 != 0) {
            uVar23 = *(uint *)(param_6 + 0xc);
            local_340 = (ulonglong)uVar23;
            if ((int)uVar23 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            uVar22 = (ulonglong)*(uint *)(lVar13 + 0x10);
            if (*(uint *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              uVar23 = DAT_14c964868 + 1;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar25) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar23);
              }
              LOCK();
              uVar9 = *(uint *)(lVar13 + 0x10);
              bVar25 = uVar9 == 0;
              if (bVar25) {
                *(uint *)(lVar13 + 0x10) = uVar23;
                uVar9 = 0;
              }
              UNLOCK();
              if (bVar25) {
                uVar9 = uVar23;
              }
              uVar22 = (ulonglong)uVar9;
            }
          }
          local_338 = 0;
          uVar24 = 0;
          if (param_7 != 0) {
            uVar23 = *(uint *)(param_7 + 0xc);
            local_338 = (ulonglong)uVar23;
            if ((int)uVar23 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            uVar24 = (ulonglong)*(uint *)(lVar13 + 0x10);
            if (*(uint *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              uVar23 = DAT_14c964868 + 1;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar25) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar23);
              }
              LOCK();
              uVar9 = *(uint *)(lVar13 + 0x10);
              bVar25 = uVar9 == 0;
              if (bVar25) {
                *(uint *)(lVar13 + 0x10) = uVar23;
                uVar9 = 0;
              }
              UNLOCK();
              if (bVar25) {
                uVar9 = uVar23;
              }
              uVar24 = (ulonglong)uVar9;
            }
          }
          if (param_12 == '\x01' && param_6 != 0) {
            lVar13 = FUN_140f1f93e();
            if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(pcVar12 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pcVar12 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
              FUN_140840456();
              plVar17 = (longlong *)FUN_144718840(param_6);
              if ((plVar17 != (longlong *)0x0) &&
                 (plVar14 = (longlong *)(**(code **)(*plVar17 + 0x10))(plVar17), *plVar14 != 0)) {
                if ((longlong)(int)plVar14[3] != 0) {
                  lVar13 = 0;
                  do {
                    if (*(longlong *)(plVar14[2] + lVar13) == 0) goto LAB_14417e188;
                    lVar13 = lVar13 + 8;
                  } while ((longlong)(int)plVar14[3] * 8 != lVar13);
                }
                (**(code **)(*(longlong *)pcVar12 + 0x6e8))(pcVar12,plVar17);
              }
            }
          }
LAB_14417e188:
          local_328 = 0;
          uStack_320 = 0;
          local_298 = *param_10;
          local_290 = *(undefined8 *)(param_10 + 2);
          local_288 = param_10[4];
          local_280 = 0;
          local_248 = (undefined1 *)0x0;
          puVar19 = param_10 + 8;
          if (*(undefined4 **)(param_10 + 0x14) != (undefined4 *)0x0) {
            puVar19 = *(undefined4 **)(param_10 + 0x14);
          }
          local_330 = pcVar12;
          local_2a0 = pcVar12;
          FUN_1400709d4(local_278,puVar19,param_10[0x16],0);
          local_238 = param_10[0x18];
          local_230 = *(undefined8 *)(param_10 + 0x1a);
          local_228 = param_10[0x1c];
          local_220 = *(undefined8 *)(param_10 + 0x1e);
          local_218 = param_10[0x20];
          local_210 = 0;
          local_208 = param_10[0x24];
          uStack_204 = param_10[0x25];
          uStack_200 = param_10[0x26];
          uStack_1fc = param_10[0x27];
          local_1f8 = *(undefined8 *)(param_10 + 0x28);
          uStack_1f0 = *(undefined8 *)(param_10 + 0x2a);
          local_1e8 = (undefined **)&DAT_14a171d50;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_1e0 = *(undefined8 *)(param_10 + 0x2e);
          FUN_1406022fe(&local_1d8,param_10 + 0x30);
          local_1e8 = &PTR_FUN_14b0394b0;
          uStack_1b0 = (uint5)local_340 & 0xffffffff | (uint5)(uVar22 << 0x20);
          uStack_1ab = (undefined3)(uVar22 >> 8);
          local_1a8 = (uint5)local_338 & 0xffffffff | (uint5)(uVar24 << 0x20);
          uStack_1a3 = (undefined3)(uVar24 >> 8);
          local_1a0 = param_13;
          local_19c = param_14;
          local_198[0] = (code *)0x0;
          local_1c8 = dVar3;
          uStack_1c0 = dVar1;
          local_1b8 = dVar2;
          puVar15 = (undefined8 *)FUN_14001cc68(0x110,8);
          *puVar15 = &PTR_FUN_14b977d00;
          puVar15[1] = local_2a0;
          *(undefined4 *)(puVar15 + 2) = local_298;
          puVar15[3] = local_290;
          *(undefined4 *)(puVar15 + 4) = local_288;
          puVar15[5] = 0;
          puVar15[0xc] = 0;
          puVar20 = local_248;
          if (local_248 == (undefined1 *)0x0) {
            puVar20 = local_278;
          }
          local_188 = puVar15;
          FUN_1400709d4(puVar15 + 6,puVar20,local_240,0);
          *(undefined4 *)(puVar15 + 0xe) = local_238;
          puVar15[0xf] = local_230;
          *(undefined4 *)(puVar15 + 0x10) = local_228;
          puVar15[0x11] = local_220;
          *(undefined4 *)(puVar15 + 0x12) = local_218;
          puVar15[0x13] = 0;
          *(undefined4 *)(puVar15 + 0x14) = local_208;
          *(undefined4 *)((longlong)puVar15 + 0xa4) = uStack_204;
          *(undefined4 *)(puVar15 + 0x15) = uStack_200;
          *(undefined4 *)((longlong)puVar15 + 0xac) = uStack_1fc;
          puVar15[0x16] = local_1f8;
          puVar15[0x17] = uStack_1f0;
          puVar15[0x18] = &DAT_14a171d50;
          puVar15[0x1a] = 0;
          puVar15[0x1b] = 0;
          puVar15[0x19] = local_1e0;
          FUN_1406022fe(puVar15 + 0x1a,&local_1d8);
          puVar15[0x18] = &PTR_FUN_14b0394b0;
          *(undefined4 *)(puVar15 + 0x1c) = (undefined4)local_1c8;
          *(undefined4 *)((longlong)puVar15 + 0xe4) = local_1c8._4_4_;
          *(undefined4 *)(puVar15 + 0x1d) = (undefined4)uStack_1c0;
          *(undefined4 *)((longlong)puVar15 + 0xec) = uStack_1c0._4_4_;
          puVar15[0x1e] = local_1b8;
          puVar15[0x1f] = CONCAT35(uStack_1ab,uStack_1b0);
          *(ulonglong *)((longlong)puVar15 + 0xfd) = CONCAT53(local_1a8,uStack_1ab);
          *(ulonglong *)((longlong)puVar15 + 0x105) =
               CONCAT17(local_19c,CONCAT43(local_1a0,uStack_1a3));
          if (puVar15 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_198[0] = FUN_144187752;
          }
          FUN_1410672ce(local_330,lVar10,local_198,&local_328);
          local_1e8 = (undefined **)&DAT_14a171d50;
          uVar22 = uStack_1d0 >> 0x20;
          uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
          if ((int)uVar22 != 0) {
            FUN_140115c12(&local_1d8,0);
          }
          local_1e0 = 0;
          if (local_1d8 != 0) {
            FUN_1400020a8();
          }
          if (local_248 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_118 != 0) {
          plVar17 = local_108;
          if (local_108 == (longlong *)0x0) {
            plVar17 = local_f8;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        uVar16 = 1;
        goto LAB_14417daa9;
      }
    }
  }
  uVar16 = 0;
LAB_14417daa9:
  if ((local_d0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 14417e98c FUN_14417e98c body=734 status=ok
// SIG undefined FUN_14417e98c(void)

void FUN_14417e98c(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(param_1[0x30f] + 0x20))(param_1 + 0x30f,&local_40);
  if ((local_40 != (longlong *)0x0) && (lVar3 = (**(code **)(*local_40 + 0x58))(), lVar3 != 0)) {
    uVar4 = (**(code **)(*local_40 + 0x58))();
    (**(code **)(param_1[0x79] + 0x28))(param_1 + 0x79,uVar4);
  }
  FUN_140da36fe(param_1);
  FUN_140da334e(param_1);
  if ((char)param_1[0x396] != '\x01') goto LAB_14417eaeb;
  if (((*(byte *)(param_1[0x379] + 0x720) & 2) != 0) &&
     (plVar5 = (longlong *)FUN_140849bbe(param_1), plVar5 != (longlong *)0x0)) {
    lVar3 = FUN_1401fe4bc(param_1[0x37a] + 0x1a0);
    if (lVar3 == 0) {
LAB_14417ea81:
      (**(code **)(*plVar5 + 0x728))(plVar5,DAT_14cbcbc30,1);
    }
    else {
      lVar6 = FUN_14045ceca();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_14417ea81;
      plVar10 = (longlong *)(lVar3 + 0x50);
      lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x50) + 0x10))(plVar10);
      if (lVar3 == 0) goto LAB_14417ea81;
      plVar7 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
      lVar3 = (**(code **)(*plVar7 + 0x80))(plVar7);
      if (lVar3 != 0) {
        (**(code **)(*plVar5 + 0xaa8))(plVar5,lVar3,1);
      }
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x88))(plVar10,&local_58);
      lVar3 = local_58;
      if ((((local_58 != 0) && (lVar8 = FUN_1402e44f4(), lVar6 = local_58, lVar8 != 0)) &&
          (*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (local_58 != 0 &&
          *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        lVar3 = FUN_1402e44f4();
        if (((lVar3 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) {
          local_58 = 0;
        }
        (**(code **)(*plVar5 + 0xc48))(plVar5,local_58);
      }
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_140d0ec1d(param_1 + 0x37a,&local_58);
    if (0 < (int)uStack_50) {
      FUN_140d0e9ce(plVar5,&local_58);
    }
    FUN_14132daf6(param_1 + 0x37a,plVar5,0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 0x700))(param_1);
LAB_14417eaeb:
  if ((longlong *)param_1[0x399] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x399] + 0x18))();
  }
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar9 = bVar2;
    if ((longlong *)param_1[lVar3 + 0x39a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[lVar3 + 0x39a] + 0x18))();
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar9);
  FUN_1447cd2ec(param_1 + 0x361,0);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14417ec74 FUN_14417ec74 body=136 status=ok
// SIG undefined FUN_14417ec74(void)

void FUN_14417ec74(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((longlong)*(int *)(param_1 + 0x1cc0) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x1cb8);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x1cc0) * 2;
    do {
      plVar2 = (longlong *)*puVar5;
      plVar3 = (longlong *)puVar5[1];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,3);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,3);
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  return;
}



// FUNCTION 14417ed16 FUN_14417ed16 body=1721 status=ok
// SIG undefined FUN_14417ed16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14417ed16(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double *pdVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar30;
  undefined1 auVar29 [16];
  undefined8 uVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined8 uVar37;
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1c8;
  double local_1b8;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_ec;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_148d5b3f6();
  lVar20 = *(longlong *)(param_1 + 0x2c50);
  if (lVar20 == 0) goto LAB_14417f2d8;
  if (*(longlong *)(param_1 + 0x2c28) == 0) {
LAB_14417eee4:
    puVar19 = (undefined1 *)(param_1 + 0x2b50);
    local_228 = *(undefined8 *)(param_1 + 0x2b38);
    local_220 = 0;
    FUN_140cb5d65(local_158,*(undefined8 *)(param_1 + 0x2b40),lVar20 + 0x6b8,puVar19);
    *(undefined8 *)(param_1 + 0x2bd0) = local_158._0_8_;
    *(undefined8 *)(param_1 + 0x2bd8) = local_158._8_8_;
    *(undefined8 *)(param_1 + 0x2be0) = local_148._0_8_;
    lVar20 = *(longlong *)(param_1 + 0x2c50);
    local_228 = *(undefined8 *)(param_1 + 0x2b38);
    uVar17 = *(undefined8 *)(param_1 + 0x2b40);
    puVar18 = (undefined8 *)local_158;
  }
  else {
    if (*(char *)(param_1 + 0x2c95) == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x2c60);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x2c68);
    }
    if (lVar2 == 0) goto LAB_14417eee4;
    pdVar16 = (double *)&DAT_14c846480;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      pdVar16 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
    }
    dVar10 = *pdVar16;
    dVar11 = pdVar16[1];
    dVar6 = pdVar16[2];
    dVar7 = pdVar16[3];
    dVar8 = pdVar16[4];
    dVar9 = pdVar16[5];
    dVar4 = pdVar16[6];
    dVar5 = pdVar16[7];
    dVar14 = pdVar16[8];
    dVar15 = pdVar16[9];
    dVar12 = pdVar16[10];
    dVar13 = pdVar16[0xb];
    if ((*(char *)(param_1 + 0x2c95) == '\0') &&
       (lVar2 = *(longlong *)(param_1 + 0x2c60), lVar2 != 0)) {
      uVar17 = *(undefined8 *)(lVar2 + 0x1c8);
      uVar48 = (undefined4)uVar17;
      uVar49 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar1 = *(undefined8 *)(lVar2 + 0x198);
      uVar46 = (undefined4)uVar1;
      uVar47 = (undefined4)((ulonglong)uVar1 >> 0x20);
      auVar22 = *(undefined1 (*) [16])(lVar2 + 0x1b0);
      dVar38 = auVar22._0_8_;
      dVar41 = auVar22._8_8_;
      dVar42 = *(double *)(lVar2 + 0x1c0);
      pdVar16 = *(double **)(lVar2 + 0x230);
      dVar26 = *(double *)(lVar2 + 0x1d0);
      uVar27 = 0;
      dVar28 = *(double *)(lVar2 + 0x1d8);
      uVar30 = 0;
      dVar21 = *(double *)(lVar2 + 0x1a0);
      uVar34 = 0;
      dVar35 = *(double *)(lVar2 + 0x1a8);
      uVar37 = 0;
      if (pdVar16 == (double *)0x0) {
        uStack_1e0 = 0;
        uStack_1f0 = 0;
        uStack_200 = 0;
        uStack_210 = 0;
        local_218 = *(double *)(lVar2 + 0x1a8);
        local_208 = *(double *)(lVar2 + 0x1a0);
        local_1f8 = *(double *)(lVar2 + 0x1d8);
        local_1e8 = *(double *)(lVar2 + 0x1d0);
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar21 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar21;
        dVar21 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar21;
        dVar21 = DAT_14c846500;
        pdVar16[4] = DAT_14c8464f8;
        pdVar16[5] = dVar21;
        pdVar16[6] = DAT_14c846508;
        *(double **)(lVar2 + 0x230) = pdVar16;
        dVar26 = local_1e8;
        uVar27 = uStack_1e0;
        dVar28 = local_1f8;
        uVar30 = uStack_1f0;
        dVar21 = local_208;
        uVar34 = uStack_200;
        dVar35 = local_218;
        uVar37 = uStack_210;
      }
      auVar25 = _DAT_1499387d0;
      if ((((pdVar16[4] != dVar38) || (NAN(pdVar16[4]) || NAN(dVar38))) || (pdVar16[5] != dVar41))
         || (((NAN(pdVar16[5]) || NAN(dVar41) || (pdVar16[6] != dVar42)) ||
             (NAN(pdVar16[6]) || NAN(dVar42))))) {
        auVar31._8_8_ = 0;
        auVar31._0_8_ = dVar42;
        dVar45 = (double)DAT_1499387d0;
        dVar3 = DAT_1499387d0._8_8_;
        auVar22 = divpd(auVar22,_DAT_1499387d0);
        auVar24 = divpd(auVar31,_DAT_1499387d0);
        auVar22 = roundpd(auVar22,auVar22,3);
        auVar24 = roundpd(auVar24,auVar24,3);
        auVar43._0_8_ = dVar38 - auVar22._0_8_ * dVar45;
        auVar43._8_8_ = dVar41 - auVar22._8_8_ * dVar3;
        auVar32._0_8_ = dVar42 - auVar24._0_8_ * dVar45;
        auVar32._8_8_ = 0.0 - auVar24._8_8_ * dVar3;
        auVar39._0_8_ = auVar43._0_8_ + dVar45;
        auVar39._8_8_ = auVar43._8_8_ + dVar3;
        auVar29._0_8_ = auVar32._0_8_ + dVar45;
        auVar29._8_8_ = auVar32._8_8_ + dVar3;
        auVar22._8_8_ = -(ulonglong)(0.0 <= auVar43._8_8_);
        auVar22._0_8_ = -(ulonglong)(0.0 <= auVar43._0_8_);
        auVar40 = blendvpd(auVar39,auVar43,auVar22);
        auVar24._8_8_ = -(ulonglong)(0.0 <= auVar32._8_8_);
        auVar24._0_8_ = -(ulonglong)(0.0 <= auVar32._0_8_);
        auVar22 = blendvpd(auVar29,auVar32,auVar24);
        auVar33._0_8_ = auVar40._0_8_ + -360.0;
        auVar33._8_8_ = auVar40._8_8_ + -360.0;
        auVar36._0_8_ = auVar22._0_8_ + -360.0;
        auVar36._8_8_ = auVar22._8_8_ + 0.0;
        auVar23._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
        auVar23._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
        auVar24 = blendvpd(auVar40,auVar33,auVar23);
        auVar40._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
        auVar40._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
        auVar22 = blendvpd(auVar22,auVar36,auVar40);
        *(undefined1 (*) [16])(pdVar16 + 4) = auVar24;
        dVar42 = auVar22._0_8_;
        pdVar16[6] = dVar42;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = dVar42;
        auVar22 = divpd(auVar24,auVar25);
        auVar25 = divpd(auVar44,auVar25);
        auVar22 = roundpd(auVar22,auVar22,3);
        auVar25 = roundpd(auVar25,auVar25,3);
        dVar38 = (auVar24._0_8_ - auVar22._0_8_ * dVar45) * 0.008726646259971648;
        dVar41 = (auVar24._8_8_ - auVar22._8_8_ * dVar3) * 0.008726646259971648;
        dVar42 = (dVar42 - auVar25._0_8_ * dVar45) * 0.008726646259971648;
        dVar45 = (0.0 - auVar25._8_8_ * dVar3) * 0.008726646259971648;
        local_218 = dVar35;
        uStack_210 = uVar37;
        local_208 = dVar21;
        uStack_200 = uVar34;
        local_1f8 = dVar28;
        uStack_1f0 = uVar30;
        local_1e8 = dVar26;
        uStack_1e0 = uVar27;
        local_1a8 = sin(dVar38);
        uStack_180 = 0;
        local_188 = uVar1;
        local_1b8 = sin(dVar41);
        local_1c8 = sin(dVar42);
        uStack_190 = 0;
        local_198 = uVar17;
        sin(dVar45);
        local_1d8 = cos(dVar38);
        uVar46 = (undefined4)local_188;
        uVar47 = local_188._4_4_;
        dVar38 = cos(dVar41);
        dVar21 = cos(dVar42);
        uVar48 = (undefined4)local_198;
        uVar49 = local_198._4_4_;
        cos(dVar45);
        dVar41 = -(dVar38 * local_1a8 * local_1c8) + local_1b8 * local_1d8 * dVar21;
        dVar45 = local_1b8 * local_1a8 * local_1c8 + dVar38 * local_1d8 * dVar21;
        dVar42 = local_1a8 * local_1b8 * dVar21 - local_1d8 * dVar38 * local_1c8;
        dVar38 = -(local_1a8 * dVar38 * dVar21) - local_1d8 * local_1b8 * local_1c8;
        *pdVar16 = dVar42;
        pdVar16[1] = dVar38;
        pdVar16[2] = dVar41;
        pdVar16[3] = dVar45;
        dVar21 = local_208;
        dVar35 = local_218;
        dVar26 = local_1e8;
        dVar28 = local_1f8;
      }
      else {
        dVar42 = *pdVar16;
        dVar38 = pdVar16[1];
        dVar41 = pdVar16[2];
        dVar45 = pdVar16[3];
      }
      dVar14 = dVar14 + (double)CONCAT44(uVar49,uVar48);
      dVar15 = dVar15 + dVar26;
      dVar12 = dVar12 + dVar28;
      dVar13 = dVar13 + 0.0;
      dVar8 = dVar8 + (double)CONCAT44(uVar47,uVar46);
      dVar9 = dVar9 + dVar21;
      dVar4 = dVar4 + dVar35;
      dVar5 = dVar5 + 0.0;
      dVar10 = dVar10 + dVar42;
      dVar11 = dVar11 + dVar38;
      dVar6 = dVar6 + dVar41;
      dVar7 = dVar7 + dVar45;
      lVar20 = *(longlong *)(param_1 + 0x2c50);
    }
    puVar19 = local_158;
    local_158._8_4_ = SUB84(dVar11,0);
    local_158._0_8_ = dVar10;
    local_158._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_148._8_4_ = SUB84(dVar7,0);
    local_148._0_8_ = dVar6;
    local_148._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_138._8_4_ = SUB84(dVar9,0);
    local_138._0_8_ = dVar8;
    local_138._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_128._8_4_ = SUB84(dVar5,0);
    local_128._0_8_ = dVar4;
    local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_118._8_4_ = SUB84(dVar15,0);
    local_118._0_8_ = dVar14;
    local_118._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    local_108._8_4_ = SUB84(dVar13,0);
    local_108._0_8_ = dVar12;
    local_108._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_f8 = 0x3f800000;
    local_f0 = 0;
    local_ec = 0;
    local_228 = *(undefined8 *)(param_1 + 0x2b38);
    local_220 = 0;
    FUN_140cb5d65(&local_170,*(undefined8 *)(param_1 + 0x2b40),lVar20 + 0x6b8,puVar19);
    *(undefined8 *)(param_1 + 0x2bd0) = local_170;
    *(undefined8 *)(param_1 + 0x2bd8) = local_168;
    *(undefined8 *)(param_1 + 0x2be0) = local_160;
    lVar20 = *(longlong *)(param_1 + 0x2c50);
    local_228 = *(undefined8 *)(param_1 + 0x2b38);
    uVar17 = *(undefined8 *)(param_1 + 0x2b40);
    puVar18 = &local_170;
  }
  local_220 = 0;
  FUN_140cb5d65(puVar18,uVar17,lVar20 + 0x6e8,puVar19);
  *(undefined8 *)(param_1 + 0x2be8) = *puVar18;
  *(undefined8 *)(param_1 + 0x2bf0) = puVar18[1];
  *(undefined8 *)(param_1 + 0x2bf8) = puVar18[2];
LAB_14417f2d8:
  if ((local_d0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14417f3d0 FUN_14417f3d0 body=1782 status=ok
// SIG undefined FUN_14417f3d0(void)

void FUN_14417f3d0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != (longlong *)0x0) {
    uVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1407b25f0(param_1 + 0x1bd0,uVar5);
    plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    if (plVar6 != (longlong *)0x0) {
      if (DAT_14cbbd498 == 0) {
        local_80 = &local_60;
        local_60 = FUN_140940982;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_146572ba2;
        local_88 = &LAB_148ca13ba;
        local_90 = &LAB_140e51436;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10000004;
        local_b0 = 8;
        local_b8 = 0x1068;
        FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
      }
      if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) ==
          DAT_14cbbd498 + 0x30)) {
        bVar1 = *(byte *)(plVar6 + 0x17b);
        uVar11 = (ulonglong)bVar1;
        if ((bVar1 == 0) ||
           ((((int)plVar6[0x17e] <= (int)(uint)bVar1 ||
             (plVar9 = *(longlong **)(plVar6[0x17d] + 0x10 + (ulonglong)bVar1 * 0x80 + uVar11 * 8),
             plVar9 == (longlong *)0x0)) ||
            (cVar3 = (**(code **)(*plVar9 + 0x390))(), cVar3 != '\0')))) {
          uVar11 = 0;
        }
        iVar10 = (int)uVar11;
        if ((iVar10 < (int)plVar6[0x17e]) &&
           (plVar9 = *(longlong **)(plVar6[0x17d] + 8 + (ulonglong)(uint)(iVar10 << 7) + uVar11 * 8)
           , plVar9 != (longlong *)0x0)) {
          lVar7 = FUN_140086c3a();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              == lVar7 + 0x30)) {
            (**(code **)(*plVar9 + 1000))(plVar9,&local_60);
            if ((*(code **)(param_1 + 0x1d68) != local_60) ||
               (*(int *)(param_1 + 0x1d70) != local_58)) {
              *(code **)(param_1 + 0x1d68) = local_60;
              *(int *)(param_1 + 0x1d70) = local_58;
              *(undefined8 *)(param_1 + 0x1d78) = 0;
            }
            cVar3 = FUN_143ec3e64(plVar9);
            fVar12 = *(float *)((longlong)plVar9 + 0x18c);
            if (cVar3 == '\0') {
              fVar12 = fVar12 * *(float *)(plVar9 + 0x33);
            }
            *(float *)(param_1 + 0x1d18) = fVar12;
            uVar13 = FUN_140a9e5d4(plVar9);
            *(undefined4 *)(param_1 + 0x1d58) = uVar13;
            *(undefined4 *)(param_1 + 0x1d5c) = *(undefined4 *)((longlong)plVar9 + 500);
            *(int *)(param_1 + 0x1d60) = (int)plVar9[0x40];
            if ((*(longlong *)(param_1 + 0x1d80) != plVar9[0x53]) ||
               (*(int *)(param_1 + 0x1d88) != (int)plVar9[0x54])) {
              *(longlong *)(param_1 + 0x1d80) = plVar9[0x53];
              *(int *)(param_1 + 0x1d88) = (int)plVar9[0x54];
              *(undefined8 *)(param_1 + 0x1d90) = 0;
            }
            cVar3 = FUN_143ec3e64(plVar9);
            fVar12 = *(float *)((longlong)plVar9 + 0x224);
            if (cVar3 == '\0') {
              fVar12 = fVar12 * *(float *)(plVar9 + 0x46);
            }
            *(float *)(param_1 + 0x1d98) = fVar12;
            if ((iVar10 < (int)plVar6[0x17e]) &&
               (plVar2 = *(longlong **)
                          (plVar6[0x17d] + 0x10 + (ulonglong)(uint)(iVar10 << 7) + uVar11 * 8),
               plVar2 != (longlong *)0x0)) {
              uVar13 = (**(code **)(*plVar2 + 0x2b8))();
              *(undefined4 *)(param_1 + 0x1d1c) = uVar13;
            }
            lVar7 = FUN_1414590e8();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              *(undefined4 *)(param_1 + 0x1d50) = *(undefined4 *)((longlong)plVar9 + 0x37c);
              cVar3 = FUN_143ec3e64(plVar9);
              fVar12 = *(float *)(plVar9 + 0x71);
              if (cVar3 == '\0') {
                fVar12 = fVar12 * *(float *)((longlong)plVar9 + 0x15c);
              }
              *(float *)(param_1 + 0x1d54) = fVar12;
              uVar5 = FUN_14120b5f2(plVar9);
              *(undefined8 *)(param_1 + 0x1dd0) = uVar5;
            }
            if ((((char)plVar9[0x4a] == '\x01') && (plVar6[0x165] != 0)) &&
               (plVar9 = (longlong *)plVar6[0x166], plVar9 != (longlong *)0x0)) {
              uVar4 = (**(code **)(*plVar9 + 0x10))
                                (plVar9,*(undefined1 *)((longlong)plVar6 + 0xbe3));
            }
            else {
              uVar4 = 0;
            }
            *(undefined1 *)(param_1 + 0x1d9c) = uVar4;
            *(undefined1 *)(param_1 + 0x1d9d) = *(undefined1 *)((longlong)plVar6 + 0xbe3);
            plVar9 = plVar6 + 0x1be;
            uVar13 = (**(code **)(plVar6[0x1be] + 0x10))(plVar9);
            *(undefined4 *)(param_1 + 0x1da8) = uVar13;
            lVar7 = (**(code **)(plVar6[0x1be] + 0x18))(plVar9);
            *(longlong *)(param_1 + 0x1da0) = lVar7;
            if (lVar7 != 0) {
              uVar13 = (**(code **)(*plVar9 + 0x20))(plVar9);
              *(undefined4 *)(param_1 + 0x1dac) = uVar13;
              uVar13 = (**(code **)(*plVar9 + 0x28))(plVar9);
              *(undefined4 *)(param_1 + 0x1db0) = uVar13;
              uVar13 = (**(code **)(*plVar9 + 0x30))(plVar9);
              *(undefined4 *)(param_1 + 0x1db4) = uVar13;
            }
            uVar5 = (**(code **)(plVar6[0x1be] + 0x48))(plVar9);
            *(undefined8 *)(param_1 + 0x1dc0) = uVar5;
            uVar5 = (**(code **)(plVar6[0x1be] + 0x50))(plVar9);
            *(undefined8 *)(param_1 + 0x1dc8) = uVar5;
            FUN_148f1773c(plVar6,uVar11,param_1 + 0x1830);
            uVar5 = (**(code **)(*plVar6 + 0x7e8))(plVar6,uVar11);
            FUN_14187c1e4(param_1 + 0x1b50,uVar5);
          }
        }
        goto LAB_14417f469;
      }
    }
    lVar7 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar7 != 0) {
      lVar8 = FUN_145b98922();
      iVar10 = *(int *)(lVar8 + 0x38);
      if ((iVar10 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar10 * 8) ==
          lVar8 + 0x30)) {
        if ((*(longlong *)(param_1 + 0x1d68) != *(longlong *)(lVar7 + 0x1d68)) ||
           (*(int *)(param_1 + 0x1d70) != *(int *)(lVar7 + 0x1d70))) {
          *(longlong *)(param_1 + 0x1d68) = *(longlong *)(lVar7 + 0x1d68);
          *(undefined4 *)(param_1 + 0x1d70) = *(undefined4 *)(lVar7 + 0x1d70);
          *(undefined8 *)(param_1 + 0x1d78) = 0;
        }
        *(undefined4 *)(param_1 + 0x1d18) = *(undefined4 *)(lVar7 + 0x1d18);
        *(undefined4 *)(param_1 + 0x1d58) = *(undefined4 *)(lVar7 + 0x1d58);
        *(undefined4 *)(param_1 + 0x1d5c) = *(undefined4 *)(lVar7 + 0x1d5c);
        *(undefined4 *)(param_1 + 0x1d60) = *(undefined4 *)(lVar7 + 0x1d60);
        if ((*(longlong *)(param_1 + 0x1d80) != *(longlong *)(lVar7 + 0x1d80)) ||
           (*(int *)(param_1 + 0x1d88) != *(int *)(lVar7 + 0x1d88))) {
          *(longlong *)(param_1 + 0x1d80) = *(longlong *)(lVar7 + 0x1d80);
          *(undefined4 *)(param_1 + 0x1d88) = *(undefined4 *)(lVar7 + 0x1d88);
          *(undefined8 *)(param_1 + 0x1d90) = 0;
        }
        *(undefined4 *)(param_1 + 0x1d98) = *(undefined4 *)(lVar7 + 0x1d98);
        *(undefined4 *)(param_1 + 0x1d1c) = *(undefined4 *)(lVar7 + 0x1d1c);
        *(undefined4 *)(param_1 + 0x1d50) = *(undefined4 *)(lVar7 + 0x1d50);
        *(undefined4 *)(param_1 + 0x1d54) = *(undefined4 *)(lVar7 + 0x1d54);
        *(undefined1 *)(param_1 + 0x1d9c) = *(undefined1 *)(lVar7 + 0x1d9c);
        *(undefined1 *)(param_1 + 0x1d9d) = *(undefined1 *)(lVar7 + 0x1d9d);
        *(undefined4 *)(param_1 + 0x1da8) = *(undefined4 *)(lVar7 + 0x1da8);
        lVar8 = *(longlong *)(lVar7 + 0x1da0);
        *(longlong *)(param_1 + 0x1da0) = lVar8;
        if (lVar8 != 0) {
          *(undefined4 *)(param_1 + 0x1dac) = *(undefined4 *)(lVar7 + 0x1dac);
          *(undefined4 *)(param_1 + 0x1db0) = *(undefined4 *)(lVar7 + 0x1db0);
          *(undefined4 *)(param_1 + 0x1db4) = *(undefined4 *)(lVar7 + 0x1db4);
        }
        *(undefined8 *)(param_1 + 0x1dc0) = *(undefined8 *)(lVar7 + 0x1dc0);
        *(undefined8 *)(param_1 + 0x1dc8) = *(undefined8 *)(lVar7 + 0x1dc8);
        *(undefined1 *)(param_1 + 0x1838) = *(undefined1 *)(lVar7 + 0x1838);
        *(undefined4 *)(param_1 + 0x1848) = *(undefined4 *)(lVar7 + 0x1844);
        FUN_14020a6cc(param_1 + 0x1840,CONCAT71((int7)(int3)((uint)iVar10 >> 8),1));
        *(undefined4 *)(param_1 + 0x1854) = *(undefined4 *)(lVar7 + 0x1850);
        FUN_14020a6cc(param_1 + 0x184c,1);
        *(undefined4 *)(&DAT_00001860 + param_1) = *(undefined4 *)(lVar7 + 0x185c);
        FUN_14020a6cc(param_1 + 0x1858,1);
        *(undefined4 *)(param_1 + 0x186c) = *(undefined4 *)(&DAT_00001868 + lVar7);
        FUN_14020a6cc(param_1 + 0x1864,1);
        FUN_14187c1e4(param_1 + 0x1b50,lVar7 + 0x1b50);
        *(undefined8 *)(param_1 + 0x1dd0) = *(undefined8 *)(lVar7 + 0x1dd0);
      }
    }
  }
LAB_14417f469:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14417fac8 FUN_14417fac8 body=93 status=ok
// SIG undefined FUN_14417fac8(void)

void FUN_14417fac8(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + -0x750) == '\x03') {
    *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) | 1;
  }
  FUN_1447f69b6(param_1 + 0x2b8);
  if ((*(char *)(param_1 + -0x750) == '\x03') && (*(char *)(param_1 + 0x328) == '\0')) {
    uVar1 = FUN_1410c9d9c(param_1 + -0x8c8,DAT_14cbcb940,param_3,param_4,param_2);
    *(undefined1 *)(param_1 + 0x328) = uVar1;
  }
  return;
}



// FUNCTION 14417fb26 FUN_14417fb26 body=331 status=ok
// SIG undefined FUN_14417fb26(void)

void FUN_14417fb26(longlong param_1,char param_2)

{
  longlong lVar1;
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
  undefined4 uVar12;
  byte bVar13;
  longlong lVar14;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if ((lVar1 != 0) && (*(char *)(param_1 + -0x750) == '\x03')) {
    lVar14 = *(longlong *)(lVar1 + 0xae0);
    if (DAT_14c950c29 == 1) {
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar14 = *(longlong *)(lVar1 + 0xae0);
      }
    }
    bVar13 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x178) = lVar14;
    lVar14 = *(longlong *)(lVar1 + 0xae8);
    if ((bVar13 & 1) != 0) {
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar14 = *(longlong *)(lVar1 + 0xae8);
      }
    }
    *(longlong *)(param_1 + 0x180) = lVar14;
    uVar2 = *(undefined4 *)(lVar1 + 0xaf4);
    uVar3 = *(undefined4 *)(lVar1 + 0xaf8);
    uVar4 = *(undefined4 *)(lVar1 + 0xafc);
    uVar5 = *(undefined4 *)(lVar1 + 0xb00);
    uVar6 = *(undefined4 *)(lVar1 + 0xb04);
    uVar7 = *(undefined4 *)(lVar1 + 0xb08);
    uVar8 = *(undefined4 *)(lVar1 + 0xb0c);
    uVar9 = *(undefined4 *)(lVar1 + 0xb10);
    uVar10 = *(undefined4 *)(lVar1 + 0xb14);
    uVar11 = *(undefined4 *)(lVar1 + 0xb18);
    uVar12 = *(undefined4 *)(lVar1 + 0xb1c);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(lVar1 + 0xaf0);
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    *(undefined4 *)(param_1 + 400) = uVar3;
    *(undefined4 *)(param_1 + 0x194) = uVar4;
    *(undefined4 *)(param_1 + 0x198) = uVar5;
    *(undefined4 *)(param_1 + 0x19c) = uVar6;
    *(undefined4 *)(param_1 + 0x1a0) = uVar7;
    *(undefined4 *)(param_1 + 0x1a4) = uVar8;
    *(undefined4 *)(param_1 + 0x1a8) = uVar9;
    *(undefined4 *)(param_1 + 0x1ac) = uVar10;
    *(undefined4 *)(param_1 + 0x1b0) = uVar11;
    *(undefined4 *)(param_1 + 0x1b4) = uVar12;
  }
  if (*(char *)(param_1 + -0x750) == '\x03') {
    *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) & 0xfe;
  }
  FUN_1447f69b6(param_1 + 0x2d0);
  if ((*(char *)(param_1 + -0x750) == '\x03') && (*(char *)(param_1 + 0x328) != '\0')) {
    if (param_2 == '\0') {
      FUN_1410c98c6(param_1 + -0x8c8);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x2a8);
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + 0x10e0) + 0x30))(lVar1 + 0x10e0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x330) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x170),0,1);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  return;
}



// FUNCTION 14417fc72 FUN_14417fc72 body=290 status=ok
// SIG undefined FUN_14417fc72(void)

void FUN_14417fc72(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = param_1 + -0x8c8;
  *(char *)(param_1 + 0x330) = param_2;
  bVar4 = *(byte *)(param_1 + 0x16c) & 0xfd | param_2 * '\x02';
  *(byte *)(param_1 + 0x16c) = bVar4;
  if (*(char *)(param_1 + -0x750) != '\x03') {
    FUN_148bd454c(lVar1);
    bVar4 = *(byte *)(param_1 + 0x16c);
  }
  if ((((bVar4 & 1) != 0) && (cVar5 = FUN_148d57dfc(lVar1), cVar5 == '\0')) &&
     (lVar2 = *(longlong *)(param_1 + 800), lVar2 != 0)) {
    lVar7 = *(longlong *)(lVar2 + 0xb8);
    if (lVar7 == 0) {
      uVar6 = FUN_1458b6df2();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(lVar2 + 0xb8) = lVar7;
    }
    if (*(longlong *)(lVar2 + 0xc0) != 0) {
LAB_14417fd4c:
      FUN_148d57e88(lVar1,*(longlong *)(param_1 + 800) + 0xb0);
      return;
    }
    if ((lVar7 != 0) && (*(longlong *)(lVar2 + 0xb0) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 != '\0')) {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0xb0));
        *(longlong *)(lVar2 + 0xc0) = lVar7;
        if (lVar7 == 0) {
          return;
        }
        goto LAB_14417fd4c;
      }
      *(undefined8 *)(lVar2 + 0xc0) = 0;
    }
  }
  return;
}



// FUNCTION 14417fd94 FUN_14417fd94 body=117 status=ok
// SIG undefined FUN_14417fd94(void)

undefined8 FUN_14417fd94(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x38))();
  if (((cVar3 != '\0') && (lVar2 = param_1[0x65], (char)lVar2 != '\0')) &&
     (lVar4 = param_1[0x55], lVar4 != 0)) {
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x10e0) + 0x50))(lVar4 + 0x10e0);
    if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
      lVar5 = 0;
      while ((lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5), lVar1 == 0 ||
             (*(char *)(lVar1 + 0x40) != (char)lVar2))) {
        lVar5 = lVar5 + 0x10;
        if ((longlong)*(int *)(lVar4 + 0x48) * 0x10 == lVar5) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14417fe0a FUN_14417fe0a body=2326 status=ok
// SIG undefined FUN_14417fe0a(void)

void FUN_14417fe0a(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  undefined4 uVar18;
  float fVar19;
  double dVar20;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  uint unaff_XMM10_Da;
  double dVar21;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 *local_310;
  undefined4 local_308;
  undefined8 local_300;
  wchar_t *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  code **local_2e0;
  undefined1 *local_2d8;
  code *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined8 uStack_250;
  float local_248;
  char local_244;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  code *local_1a0 [3];
  double local_188;
  double local_180;
  double local_178;
  float local_170;
  code *local_168 [2];
  undefined8 *local_158;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong local_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  longlong *plStack_100;
  undefined1 uStack_f8;
  undefined2 uStack_f7;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *plStack_d8;
  undefined8 local_d0;
  longlong local_c8 [5];
  ulonglong local_a0;
  
  dVar7 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
  dVar5 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  dVar4 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if ((*(char *)(param_1 + 0x178) != '\x03') || (*(longlong *)(param_1 + 0xb70) == 0))
  goto LAB_14417fea7;
  lVar9 = FUN_1447210f0(param_1);
  if ((lVar9 == 0) ||
     (((lVar9 = *(longlong *)(param_1 + 0xbe8), lVar9 == 0 || (*(longlong *)(lVar9 + 0x30) == 0)) ||
      (0xfffffffd < *(int *)(lVar9 + 0x38) - 1U)))) goto LAB_14417fea7;
  local_310 = &local_2a8;
  local_2a8 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_128 = CONCAT31(local_128._1_3_,1);
  uStack_124 = (undefined4)*(undefined8 *)(param_1 + 0x928);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x928) >> 0x20);
  local_118 = local_118 & 0xffffffffffff0000;
  plStack_110 = DAT_14c8464f8;
  uStack_108 = DAT_14c846500;
  plStack_100 = DAT_14c846508;
  uStack_f8 = 0;
  uStack_f7 = 0;
  uStack_f5 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_e0 = DAT_14c8464e0;
  plStack_d8 = DAT_14c8464e8;
  local_d0 = DAT_14c8464f0;
  local_318 = CONCAT44(local_318._4_4_,0xf);
  FUN_14894017a(&local_208,*(undefined8 *)(param_1 + 0xb70),&local_128,&local_258);
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  lVar9 = *(longlong *)(param_1 + 0xbe8);
  dVar20 = *(double *)(lVar9 + 0x48);
  dVar1 = *(double *)(lVar9 + 0x50);
  dVar21 = *(double *)(lVar9 + 0x58);
  if ((((dVar20 != 0.0) || (NAN(dVar20))) || ((dVar1 != 0.0 || ((NAN(dVar1) || (dVar21 != 0.0))))))
     || (NAN(dVar21))) {
    dVar2 = local_208 * dVar1 - dVar20 * local_200;
    dVar3 = local_1f8 * dVar20 - dVar21 * local_208;
    dVar6 = local_200 * dVar21 - dVar1 * local_1f8;
    dVar2 = dVar2 + dVar2;
    dVar3 = dVar3 + dVar3;
    dVar6 = dVar6 + dVar6;
    dVar21 = local_1f0 * dVar2 + dVar21;
    unaff_XMM10_Da = SUB84(dVar21,0);
    dVar5 = local_1f0 * dVar6 + dVar20;
    dVar7 = dVar6 * local_200;
    dVar4 = dVar3 * local_1f8;
    local_1d8 = (local_208 * dVar3 - dVar7) + dVar21 + local_1d8;
    dVar20 = (local_1f8 * dVar6 - dVar2 * local_208) + local_1f0 * dVar3 + dVar1 +
             (double)local_1e8._8_8_;
    local_1e8._8_4_ = SUB84(dVar20,0);
    local_1e8._0_8_ = (local_200 * dVar2 - dVar4) + dVar5 + (double)local_1e8._0_8_;
    local_1e8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    uStack_1d0 = 0;
  }
  if (*(int *)(lVar9 + 0x38) != 0x4000) goto LAB_14417fea7;
  lVar9 = FUN_1447210f0(param_1);
  local_2a8 = *(undefined8 *)(*(longlong *)(param_1 + 0xbe8) + 0x30);
  FUN_1446dcdd4(&local_128);
  lVar10 = FUN_140a4bd48(&local_128);
  if (plStack_110 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (lVar10 != 0) {
    uStack_108 = 0;
    plStack_100 = (longlong *)0x0;
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_f8 = 0;
    uStack_f7 = 0x601;
    uStack_f5 = 0;
    uStack_f4 = 8;
    local_e8 = 0;
    plStack_d8 = (longlong *)0x0;
    local_118 = *(undefined8 *)(param_1 + 0xb70);
    puVar16 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(lVar10 + 8);
    }
    plStack_110 = (longlong *)local_118;
    if (DAT_14c947fe0 == 0) {
      lVar14 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar14);
      DAT_14c947fe0 = lVar14;
    }
    FUN_140045924(DAT_14c947fe0,&local_128,puVar16,1);
    uStack_f5 = 3;
    uStack_f8 = 1;
    if (*(longlong *)(param_1 + 0xa40) == 0) {
      if ((((*(double *)(param_1 + 0xa50) != 0.0) || (NAN(*(double *)(param_1 + 0xa50)))) ||
          (*(double *)(param_1 + 0xa58) != 0.0)) || (NAN(*(double *)(param_1 + 0xa58))))
      goto LAB_144180236;
      if ((*(double *)(param_1 + 0xa60) != 0.0) || (NAN(*(double *)(param_1 + 0xa60))))
      goto LAB_144180236;
      bVar15 = 0;
    }
    else {
LAB_144180236:
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0xbe8) + 0x68);
      plVar17 = &local_258;
      for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
        *plVar17 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar17 = plVar17 + 1;
      }
      fVar19 = 0.0;
      if ((float)uStack_250 <= 0.0) {
        uVar18 = FUN_140b536be(lVar10);
        uStack_250 = CONCAT44(uStack_250._4_4_,uVar18);
      }
      local_268 = 0;
      uStack_260 = 0;
      local_278 = 0;
      uStack_270 = 0;
      if (((0.0 < *(float *)(lVar10 + 0xe0)) && (*(longlong *)(lVar9 + 0x30) != 0)) &&
         (plVar13 = *(longlong **)(*(longlong *)(lVar9 + 0x30) + 0x2b0), plVar13 != (longlong *)0x0)
         ) {
        if (*(code **)(*plVar13 + 0x660) == FUN_1449fb17e) {
          if ((*(byte *)((longlong)plVar13 + 0x39e) & 1) == 0) {
            if ((*(byte *)((longlong)plVar13 + 0x39e) & 2) == 0) {
              if (DAT_14caf84d0 == 0) {
                local_2e0 = local_1a0;
                local_1a0[0] = FUN_1449e2820;
                local_2d0 = FUN_14081d0ea;
                local_2d8 = &LAB_145a62952;
                local_2e8 = &LAB_147c8cd45;
                local_2f0 = &LAB_1461468ae;
                local_2f8 = L"Engine";
                local_300 = 0;
                local_308 = 0x10000006;
                local_310 = (undefined8 *)CONCAT44(local_310._4_4_,8);
                local_318 = CONCAT44(local_318._4_4_,0x218);
                FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
              }
              lVar8 = DAT_14caf84d0;
              lVar14 = *(longlong *)(DAT_14caf84d0 + 0x110);
              if (lVar14 == 0) {
                FUN_140aa6c08(DAT_14caf84d0);
                lVar14 = *(longlong *)(lVar8 + 0x110);
              }
              pfVar11 = (float *)(lVar14 + 0x38);
            }
            else {
              pfVar11 = (float *)((longlong)plVar13 + 0x41c);
            }
            fVar19 = *pfVar11;
            *(float *)(plVar13 + 0x83) = fVar19;
          }
          else {
            fVar19 = *(float *)(plVar13 + 0x83);
          }
        }
        else {
          fVar19 = (float)(**(code **)(*plVar13 + 0x660))(plVar13);
        }
      }
      uStack_260 = CONCAT44(uStack_260._4_4_,fVar19);
      local_2a8 = local_1e8._0_8_;
      uStack_2a0 = local_1e8._8_8_;
      local_298 = local_1d8;
      local_280 = *(double *)(param_1 + 0xa60);
      local_290 = *(double *)(param_1 + 0xa50);
      dStack_288 = *(double *)(param_1 + 0xa58);
      lVar14 = *(longlong *)(param_1 + 0xa48);
      if (lVar14 != 0) {
        local_290 = *(double *)(lVar14 + 0x260) + local_290;
        dStack_288 = *(double *)(lVar14 + 0x268) + dStack_288;
        local_280 = *(double *)(lVar14 + 0x270) + local_280;
      }
      FUN_14125d732(&local_258,local_1a0,&local_2a8);
      if (local_244 != '\0') {
        fVar19 = local_248;
      }
      unaff_XMM10_Da =
           ~-(uint)(fVar19 != 0.0) & 0x3f800000 |
           (uint)(local_170 / fVar19) & -(uint)(fVar19 != 0.0);
      bVar15 = 9.999999747378752e-05 < ABS(local_178) |
               (-(9.999999747378752e-05 < ABS(local_180)) |
               -(9.999999747378752e-05 < ABS(local_188))) & 1U;
      dVar4 = local_188;
      dVar5 = local_180;
      dVar7 = local_178;
    }
    uVar12 = FUN_140f1f93e();
    plVar13 = (longlong *)FUN_141037e38(lVar9,uVar12,&local_208,&local_128);
    if (plVar13 != (longlong *)0x0) {
      FUN_148d60274(&local_2b0);
      FUN_148d6020e(plVar13 + 0x365,param_1,local_2b0);
      (**(code **)(*plVar13 + 0x6e8))(plVar13,param_1 + 0x3b0);
      local_2c8 = 0;
      uStack_2c0 = 0;
      local_168[0] = (code *)0x0;
      local_158 = (undefined8 *)FUN_14001cc68(0x38,8);
      *local_158 = &PTR_FUN_14b978330;
      local_158[1] = plVar13;
      *(byte *)(local_158 + 5) = bVar15;
      if (bVar15 != 0) {
        local_158[2] = dVar4;
        local_158[3] = dVar5;
        local_158[4] = dVar7;
        *(uint *)(local_158 + 6) = unaff_XMM10_Da;
      }
      *(byte *)((longlong)local_158 + 0x34) = bVar15;
      if (local_158 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_168[0] = FUN_144188cee;
      }
      FUN_1410672ce(plVar13,lVar10,local_168,&local_2c8);
      local_318 = 0;
      FUN_140b32deb(&local_2a8,*(undefined8 *)(param_1 + 0xb70),*(longlong *)(param_1 + 0xbe8) + 200
                    ,0);
    }
    if (local_e8 != 0) {
      plVar13 = plStack_d8;
      if (plStack_d8 == (longlong *)0x0) {
        plVar13 = local_c8;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  local_118 = DAT_14c8464e0;
  plStack_110 = DAT_14c8464e8;
  uStack_108 = DAT_14c8464f0;
  plStack_100 = DAT_14c8464f8;
  uStack_f8 = (undefined1)DAT_14c846500;
  uStack_f7 = (undefined2)((ulonglong)DAT_14c846500 >> 8);
  uStack_f5 = (undefined1)((ulonglong)DAT_14c846500 >> 0x18);
  uStack_f4 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  uStack_f0 = SUB84(DAT_14c846508,0);
  uStack_ec = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
  FUN_148bab1be(param_1 + 0xa40);
  *(undefined1 *)(param_1 + 0xbf0) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x8c8) + 0x70))(param_1 + 0x8c8);
LAB_14417fea7:
  if ((local_a0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144180722 FUN_144180722 body=4525 status=ok
// SIG undefined FUN_144180722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144180722(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint *puVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  longlong *local_178;
  undefined4 local_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined2 local_f7;
  undefined1 local_f5;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  byte local_c8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar4 = *(longlong *)(param_1 + 0x318);
  if ((((lVar4 == 0) || (*(char *)(param_1 + -0x750) != '\x03')) ||
      ((*(byte *)(lVar4 + 0x2c94) & 8) == 0)) || (*(char *)(lVar4 + 0x2c8c) != '\0'))
  goto LAB_144180788;
  *(undefined1 *)(lVar4 + 0x2c8c) = 1;
  if (*(char *)(lVar4 + 0x2c8d) == '\x01') {
    lVar15 = *(longlong *)(lVar4 + 0x168);
    if (lVar15 == 0) goto LAB_144180788;
    lVar16 = *(longlong *)(lVar15 + 0x1c8);
    if (lVar16 == 0) {
      local_118 = DAT_14c8464f0;
      local_128 = DAT_14c8464e0;
      uStack_120 = DAT_14c8464e8;
      uVar31 = (undefined4)DAT_14c8464f0;
      uVar32 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      uVar29 = (undefined4)DAT_14c8464e0;
      uVar30 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uVar33 = (undefined4)DAT_14c8464e8;
      uVar34 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    }
    else {
      uVar29 = *(undefined4 *)(lVar16 + 0x260);
      uVar30 = *(undefined4 *)(lVar16 + 0x264);
      uStack_120 = *(undefined8 *)(lVar16 + 0x268);
      uVar33 = (undefined4)*(undefined8 *)(lVar16 + 0x268);
      uVar34 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x268) >> 0x20);
      local_128 = *(undefined8 *)(lVar16 + 0x260);
      local_118 = *(undefined8 *)(lVar16 + 0x270);
      uVar31 = (undefined4)local_118;
      uVar32 = (undefined4)((ulonglong)local_118 >> 0x20);
    }
    plVar2 = (longlong *)(lVar4 + 0x2c00);
    if (*(int *)(lVar4 + 0x2c08) != 2) {
      FUN_1446efa72(plVar2,0,2,0x10);
      *(undefined4 *)(lVar4 + 0x2c08) = 2;
    }
    puVar20 = (undefined8 *)*plVar2;
    *puVar20 = &PTR_LAB_14a78e0f0;
    LOCK();
    UNLOCK();
    lVar22 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar22 == 0) {
      LOCK();
      UNLOCK();
      lVar22 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    puVar20[2] = lVar22;
    *puVar20 = &PTR_FUN_14b978290;
    puVar20[3] = lVar4;
    lVar16 = 0;
    local_e4 = 0;
    local_e0 = 0x101;
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0x800000000;
    local_98 = 0;
    local_8c = 4;
    local_f8 = 0;
    local_ec = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f7 = 1;
    local_f5 = 0;
    local_e8 = 0;
    local_f4 = 0x1000000;
    local_f0 = 1;
    local_a8 = *(undefined4 *)(lVar4 + 0xc);
    local_a4 = *(undefined4 *)(lVar15 + 0xc);
    local_90 = 2;
    local_138 = _DAT_14cad0ee0;
    uStack_130 = uRam000000014cad0ee8;
    local_148 = _DAT_14cad0ed0;
    uStack_140 = _DAT_14cad0ed8;
    do {
      bVar28 = *(char *)((longlong)&local_148 + lVar16) == DAT_149c360b0;
      bVar5 = *(char *)((longlong)&local_148 + lVar16 + 1) == DAT_149c360b0._1_1_;
      bVar6 = *(char *)((longlong)&local_148 + lVar16 + 2) == DAT_149c360b0._2_1_;
      bVar7 = *(char *)((longlong)&local_148 + lVar16 + 3) == DAT_149c360b0._3_1_;
      bVar8 = *(char *)((longlong)&local_148 + lVar16 + 4) == DAT_149c360b0._4_1_;
      bVar9 = *(char *)((longlong)&local_148 + lVar16 + 5) == DAT_149c360b0._5_1_;
      bVar10 = *(char *)((longlong)&local_148 + lVar16 + 6) == DAT_149c360b0._6_1_;
      bVar11 = *(char *)((longlong)&local_148 + lVar16 + 7) == DAT_149c360b0._7_1_;
      if ((bool)(~bVar28 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16 + 1) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16 + 2) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16 + 3) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16 + 4) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16 + 5) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16 + 6) = 2;
      }
      if ((bool)(~bVar11 & 1)) {
        *(undefined1 *)((longlong)&local_148 + lVar16 + 7) = 2;
      }
      if ((bool)(~bVar28 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16 + 1) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16 + 2) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16 + 3) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16 + 4) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16 + 5) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16 + 6) = 2;
      }
      if ((bool)(~bVar11 & 1)) {
        *(undefined1 *)((longlong)&uStack_140 + lVar16 + 7) = 2;
      }
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0x20);
    uVar17 = FUN_1447210f0(lVar4);
    local_150 = (double)CONCAT44(uVar32,uVar31) + -1000.0;
    local_198 = &local_160;
    local_160 = CONCAT44(uVar30,uVar29);
    local_158 = CONCAT44(uVar34,uVar33);
    local_170 = 0;
    local_180 = &local_148;
    local_188 = &local_108;
    local_190 = 0;
    local_178 = plVar2;
    FUN_1447de878(uVar17,local_168,CONCAT71((int7)((ulonglong)local_180 >> 8),1),&local_128);
    puVar20 = local_b8;
    if (local_98 != 0) {
      FUN_1400020a8();
      puVar20 = local_b8;
    }
  }
  else {
    if (*(longlong *)(lVar4 + 0x2c28) != 0) {
      plVar2 = (longlong *)(lVar4 + 0x448);
      lVar15 = (**(code **)(*(longlong *)(lVar4 + 0x448) + 0x10))(plVar2);
      if (lVar15 != 0) {
        if (*(char *)(lVar4 + 0x2c8e) == '\x01') {
          if (0 < *(int *)(lVar15 + 0x40)) {
            FUN_14055830e(*(undefined8 *)(lVar15 + 0x38));
          }
          FUN_14654a9e8(lVar15);
          if (*(longlong *)(lVar4 + 0x2b38) != 0) {
            FUN_1461bfc26();
          }
        }
        else if (*(char *)(lVar4 + 0x2c8f) == '\x01') {
          if (0 < *(int *)(lVar15 + 0x40)) {
            FUN_1405583ce(*(undefined8 *)(lVar15 + 0x38));
          }
          FUN_14654a9cc(lVar15);
        }
      }
      lVar15 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((lVar15 != 0) && (0.0001 < *(float *)(lVar4 + 0x2c84))) {
        FUN_1400bc96c(lVar15 + 0x90,&DAT_14cbcbc58);
        *(undefined8 *)(lVar4 + 0x2c48) = 0;
        lVar15 = FUN_1447210f0(lVar4);
        if (*(longlong *)(lVar15 + 0x1f0) == 0) {
          puVar20 = (undefined8 *)(lVar15 + 0x458);
        }
        else {
          puVar20 = (undefined8 *)(*(longlong *)(lVar15 + 0x1f0) + 0xf0);
        }
        uVar17 = *puVar20;
        uVar29 = *(undefined4 *)(lVar4 + 0x2c84);
        local_148 = (undefined8 *)0x0;
        uStack_140._0_4_ = 0;
        FUN_1446efa72(&local_148,0,3,0x10);
        puVar20 = local_148;
        uStack_140 = CONCAT44(uStack_140._4_4_,3);
        *local_148 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar15 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar15 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar15;
        local_148[2] = lVar16;
        *local_148 = &PTR_FUN_14b9780e0;
        local_148[3] = 0;
        uVar26 = *(uint *)(lVar4 + 0xc);
        *(uint *)(local_148 + 3) = uVar26;
        if ((int)uVar26 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar13 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar23 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar23);
          }
          LOCK();
          iVar13 = *(int *)(lVar15 + 0x10);
          bVar28 = iVar13 == 0;
          if (bVar28) {
            *(int *)(lVar15 + 0x10) = iVar23;
            iVar13 = 0;
          }
          UNLOCK();
          if (bVar28) {
            iVar13 = iVar23;
          }
        }
        *(int *)((longlong)puVar20 + 0x1c) = iVar13;
        puVar20[4] = FUN_148d5d760;
        *(undefined4 *)(puVar20 + 5) = 0;
        local_108 = 0;
        uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
        FUN_14487d8d8(&local_108,&local_148);
        local_c8 = 1;
        local_198 = &local_128;
        local_128._0_4_ = (uint)local_128 & 0xffff0000;
        local_128 = CONCAT44(0xbf800000,(uint)local_128);
        FUN_1406f4044(uVar17,lVar4 + 0x2c48,&local_108,uVar29);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_c8])(&local_108);
        if ((int)uStack_140 != 0) {
          if (local_148 == (undefined8 *)0x0) goto LAB_144180a49;
          (**(code **)*local_148)();
          FUN_1446efa72(&local_148,0,0,0x10);
          uStack_140 = uStack_140 & 0xffffffff00000000;
        }
        if (local_148 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_144180a49:
    if ((*(float *)(lVar4 + 0x2c78) <= 0.0001) || (*(float *)(lVar4 + 0x2c7c) <= 0.0001)) {
      if ((longlong)*(int *)(lVar4 + 0x2a08) != 0) {
        lVar15 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar4 + 0x2a00) + lVar15) == '\x03') {
            FUN_1447f69b6(*(longlong *)(lVar4 + 0x2b38) + 0x5738);
            goto LAB_144180788;
          }
          lVar15 = lVar15 + 1;
        } while (*(int *)(lVar4 + 0x2a08) != lVar15);
      }
      iVar13 = *(int *)(lVar4 + 0x2848);
      if ((longlong)iVar13 != 0) {
        lVar15 = *(longlong *)(lVar4 + 0x2840);
        lVar22 = 0;
        lVar16 = DAT_14cbcbc50;
        do {
          plVar2 = *(longlong **)(lVar15 + lVar22);
          if (plVar2[0x59] == lVar16) {
            (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(lVar4 + 0x2b38));
            lVar16 = DAT_14cbcbc50;
          }
          lVar22 = lVar22 + 8;
        } while ((longlong)iVar13 * 8 != lVar22);
      }
      if (*(longlong *)(lVar4 + 0x2c50) != 0) {
        FUN_148be0594(lVar4,*(longlong *)(lVar4 + 0x2c50) + 0x5c8);
      }
      goto LAB_144180788;
    }
    puVar1 = (uint *)(lVar4 + 0x2970);
    iVar13 = *(int *)(lVar4 + 0x2988);
    iVar23 = iVar13;
    if (iVar13 == 0) {
      uVar25 = 1;
      iVar24 = 0;
      uVar27 = 0;
      iVar12 = 0;
    }
    else {
      puVar18 = *(uint **)(lVar4 + 0x2980);
      if (*(uint **)(lVar4 + 0x2980) == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar26 = *puVar18;
      if (uVar26 == 0) {
        iVar12 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar12 = iVar13 + -1;
        }
        uVar27 = 0;
        uVar25 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar25 = uVar27;
        }
        iVar24 = 0;
        do {
          if (uVar25 == uVar27) goto LAB_144180edd;
          iVar24 = iVar24 + 0x20;
          uVar26 = puVar18[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar26 == 0);
      }
      else {
        iVar24 = 0;
        uVar27 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar3 = uVar25 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar12) {
        iVar12 = iVar13;
      }
    }
    if (iVar12 != iVar13) {
      uVar26 = 0xffffffff;
      do {
        if (0 < *(int *)(*(longlong *)(lVar4 + 0x2960) + 0x10 + (longlong)iVar12 * 0x20)) {
          FUN_14053d8da(*(longlong *)(lVar4 + 0x2960) + (longlong)iVar12 * 0x20 + 8,1);
          iVar23 = *(int *)(lVar4 + 0x2988);
        }
        uVar26 = uVar26 & ~(uint)uVar25;
        puVar18 = *(uint **)(lVar4 + 0x2980);
        if (*(uint **)(lVar4 + 0x2980) == (uint *)0x0) {
          puVar18 = puVar1;
        }
        iVar12 = (int)uVar27;
        lVar15 = (longlong)iVar12;
        uVar21 = puVar18[lVar15] & uVar26;
        if (uVar21 == 0) {
          iVar19 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar19 = iVar23 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar24 = iVar24 + 0x20;
          iVar14 = iVar19;
          if (iVar19 < iVar12) {
            iVar14 = iVar12;
          }
          if (iVar12 < iVar19) {
            lVar16 = 0;
            do {
              uVar21 = puVar18[lVar15 + lVar16 + 1];
              if (uVar21 != 0) {
                uVar27 = (ulonglong)(iVar12 + (int)lVar16 + 1);
                uVar26 = 0xffffffff;
                goto LAB_144181044;
              }
              iVar24 = iVar24 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar14 - lVar15 != lVar16);
            uVar26 = 0xffffffff;
            iVar12 = iVar14;
          }
          uVar27 = (ulonglong)(iVar12 + 1);
          iVar12 = iVar23;
        }
        else {
LAB_144181044:
          uVar25 = (ulonglong)(-uVar21 & uVar21);
          uVar3 = uVar25 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar12 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar23 <= iVar12) {
            iVar12 = iVar23;
          }
        }
      } while (iVar12 != iVar13);
    }
LAB_144180edd:
    iVar13 = *(int *)(lVar4 + 0x2858);
    if ((longlong)iVar13 != 0) {
      lVar15 = *(longlong *)(lVar4 + 0x2850);
      lVar16 = 0;
      do {
        *(float *)(lVar15 + 0x68 + lVar16) =
             *(float *)(lVar4 + 0x2c78) * *(float *)(lVar15 + 0x68 + lVar16);
        lVar16 = lVar16 + 0x70;
      } while ((longlong)iVar13 * 0x70 - lVar16 != 0);
      iVar23 = *(int *)(lVar4 + 0x2988);
    }
    if (iVar23 == 0) {
      uVar25 = 1;
      uVar27 = 0;
      iVar12 = 0;
      iVar13 = 0;
    }
    else {
      puVar18 = *(uint **)(lVar4 + 0x2980);
      if (*(uint **)(lVar4 + 0x2980) == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar26 = *puVar18;
      if (uVar26 == 0) {
        iVar13 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar13 = iVar23 + -1;
        }
        uVar27 = 0;
        uVar25 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar25 = uVar27;
        }
        iVar12 = 0;
        do {
          if (uVar25 == uVar27) goto LAB_14418109b;
          iVar12 = iVar12 + 0x20;
          uVar26 = puVar18[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar27 = 0;
        iVar12 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar3 = uVar25 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar13) {
        iVar13 = iVar23;
      }
    }
    if (iVar13 != iVar23) {
      uVar26 = 0xffffffff;
      do {
        puVar18 = (uint *)(*(longlong *)(lVar4 + 0x2960) + (longlong)iVar13 * 0x20);
        iVar13 = *(int *)(*(longlong *)(lVar4 + 0x2960) + 4 + (longlong)iVar13 * 0x20);
        if ((iVar13 == 0) || (uVar21 = *puVar18, (int)uVar21 < 0)) {
LAB_14418125e:
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          if ((int)uVar21 < DAT_14c9647dc) {
            puVar20 = (undefined8 *)
                      ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
            if (((puVar20 == (undefined8 *)0x0) || (*(int *)(puVar20 + 2) != iVar13)) ||
               ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)) goto LAB_14418125e;
            uVar17 = *puVar20;
          }
        }
        FUN_148d5cb12(lVar4,lVar4 + 0x2850,puVar18 + 2,uVar17);
        uVar26 = uVar26 & ~(uint)uVar25;
        puVar18 = *(uint **)(lVar4 + 0x2980);
        if (*(uint **)(lVar4 + 0x2980) == (uint *)0x0) {
          puVar18 = puVar1;
        }
        iVar24 = *(int *)(lVar4 + 0x2988);
        iVar13 = (int)uVar27;
        lVar15 = (longlong)iVar13;
        uVar21 = puVar18[lVar15] & uVar26;
        if (uVar21 == 0) {
          iVar19 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar19 = iVar24 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar14 = iVar19;
          if (iVar19 < iVar13) {
            iVar14 = iVar13;
          }
          if (iVar13 < iVar19) {
            lVar16 = 0;
            do {
              uVar21 = puVar18[lVar15 + lVar16 + 1];
              if (uVar21 != 0) {
                uVar27 = (ulonglong)(iVar13 + (int)lVar16 + 1);
                uVar26 = 0xffffffff;
                goto LAB_14418122a;
              }
              iVar12 = iVar12 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar14 - lVar15 != lVar16);
            uVar26 = 0xffffffff;
            iVar13 = iVar14;
          }
          uVar27 = (ulonglong)(iVar13 + 1);
          iVar13 = iVar24;
        }
        else {
LAB_14418122a:
          uVar25 = (ulonglong)(-uVar21 & uVar21);
          uVar3 = uVar25 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar13 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar24 <= iVar13) {
            iVar13 = iVar24;
          }
        }
      } while (iVar13 != iVar23);
    }
LAB_14418109b:
    puVar1 = (uint *)(lVar4 + 0x29c0);
    iVar13 = *(int *)(lVar4 + 0x29d8);
    iVar23 = iVar13;
    if (iVar13 == 0) {
      uVar25 = 1;
      uVar27 = 0;
      iVar24 = 0;
      iVar12 = 0;
    }
    else {
      puVar18 = *(uint **)(lVar4 + 0x29d0);
      if (*(uint **)(lVar4 + 0x29d0) == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar26 = *puVar18;
      if (uVar26 == 0) {
        iVar12 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar12 = iVar13 + -1;
        }
        uVar27 = 0;
        uVar25 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar25 = uVar27;
        }
        iVar24 = 0;
        do {
          if (uVar25 == uVar27) goto LAB_144181289;
          iVar24 = iVar24 + 0x20;
          uVar26 = puVar18[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar27 = 0;
        iVar24 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar3 = uVar25 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar12) {
        iVar12 = iVar13;
      }
    }
    if (iVar12 != iVar13) {
      uVar26 = 0xffffffff;
      do {
        if (0 < *(int *)(*(longlong *)(lVar4 + 0x29b0) + 0x10 + (longlong)iVar12 * 0x20)) {
          FUN_14053d8da(*(longlong *)(lVar4 + 0x29b0) + (longlong)iVar12 * 0x20 + 8,1);
          iVar23 = *(int *)(lVar4 + 0x29d8);
        }
        uVar26 = uVar26 & ~(uint)uVar25;
        puVar18 = *(uint **)(lVar4 + 0x29d0);
        if (*(uint **)(lVar4 + 0x29d0) == (uint *)0x0) {
          puVar18 = puVar1;
        }
        iVar12 = (int)uVar27;
        lVar15 = (longlong)iVar12;
        uVar21 = puVar18[lVar15] & uVar26;
        if (uVar21 == 0) {
          iVar19 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar19 = iVar23 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar24 = iVar24 + 0x20;
          iVar14 = iVar19;
          if (iVar19 < iVar12) {
            iVar14 = iVar12;
          }
          if (iVar12 < iVar19) {
            lVar16 = 0;
            do {
              uVar21 = puVar18[lVar15 + lVar16 + 1];
              if (uVar21 != 0) {
                uVar27 = (ulonglong)(iVar12 + (int)lVar16 + 1);
                uVar26 = 0xffffffff;
                goto LAB_1441813f0;
              }
              iVar24 = iVar24 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar14 - lVar15 != lVar16);
            uVar26 = 0xffffffff;
            iVar12 = iVar14;
          }
          uVar27 = (ulonglong)(iVar12 + 1);
          iVar12 = iVar23;
        }
        else {
LAB_1441813f0:
          uVar25 = (ulonglong)(-uVar21 & uVar21);
          uVar3 = uVar25 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar12 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar23 <= iVar12) {
            iVar12 = iVar23;
          }
        }
      } while (iVar12 != iVar13);
    }
LAB_144181289:
    iVar13 = *(int *)(lVar4 + 0x2868);
    if ((longlong)iVar13 != 0) {
      lVar15 = *(longlong *)(lVar4 + 0x2860);
      lVar16 = 0;
      do {
        *(float *)(lVar15 + 0x68 + lVar16) =
             *(float *)(lVar4 + 0x2c78) * *(float *)(lVar15 + 0x68 + lVar16);
        lVar16 = lVar16 + 0x70;
      } while ((longlong)iVar13 * 0x70 - lVar16 != 0);
      iVar23 = *(int *)(lVar4 + 0x29d8);
    }
    if (iVar23 == 0) {
      uVar25 = 1;
      uVar27 = 0;
      iVar12 = 0;
      iVar13 = 0;
    }
    else {
      puVar18 = *(uint **)(lVar4 + 0x29d0);
      if (*(uint **)(lVar4 + 0x29d0) == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar26 = *puVar18;
      if (uVar26 == 0) {
        iVar13 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar13 = iVar23 + -1;
        }
        uVar27 = 0;
        uVar25 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar25 = uVar27;
        }
        iVar12 = 0;
        do {
          if (uVar25 == uVar27) goto LAB_144181447;
          iVar12 = iVar12 + 0x20;
          uVar26 = puVar18[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar27 = 0;
        iVar12 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar3 = uVar25 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar13) {
        iVar13 = iVar23;
      }
    }
    if (iVar13 != iVar23) {
      uVar26 = 0xffffffff;
      do {
        puVar18 = (uint *)(*(longlong *)(lVar4 + 0x29b0) + (longlong)iVar13 * 0x20);
        iVar13 = *(int *)(*(longlong *)(lVar4 + 0x29b0) + 4 + (longlong)iVar13 * 0x20);
        if ((iVar13 == 0) || (uVar21 = *puVar18, (int)uVar21 < 0)) {
LAB_144181723:
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          if ((int)uVar21 < DAT_14c9647dc) {
            puVar20 = (undefined8 *)
                      ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
            if (((puVar20 == (undefined8 *)0x0) || (*(int *)(puVar20 + 2) != iVar13)) ||
               ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)) goto LAB_144181723;
            uVar17 = *puVar20;
          }
        }
        FUN_148d5cb12(lVar4,lVar4 + 0x2860,puVar18 + 2,uVar17);
        uVar26 = uVar26 & ~(uint)uVar25;
        puVar18 = *(uint **)(lVar4 + 0x29d0);
        if (*(uint **)(lVar4 + 0x29d0) == (uint *)0x0) {
          puVar18 = puVar1;
        }
        iVar24 = *(int *)(lVar4 + 0x29d8);
        iVar13 = (int)uVar27;
        lVar15 = (longlong)iVar13;
        uVar21 = puVar18[lVar15] & uVar26;
        if (uVar21 == 0) {
          iVar19 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar19 = iVar24 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar14 = iVar19;
          if (iVar19 < iVar13) {
            iVar14 = iVar13;
          }
          if (iVar13 < iVar19) {
            lVar16 = 0;
            do {
              uVar21 = puVar18[lVar15 + lVar16 + 1];
              if (uVar21 != 0) {
                uVar27 = (ulonglong)(iVar13 + (int)lVar16 + 1);
                uVar26 = 0xffffffff;
                goto LAB_1441816ef;
              }
              iVar12 = iVar12 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar14 - lVar15 != lVar16);
            uVar26 = 0xffffffff;
            iVar13 = iVar14;
          }
          uVar27 = (ulonglong)(iVar13 + 1);
          iVar13 = iVar24;
        }
        else {
LAB_1441816ef:
          uVar25 = (ulonglong)(-uVar21 & uVar21);
          uVar3 = uVar25 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar13 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar24 <= iVar13) {
            iVar13 = iVar24;
          }
        }
      } while (iVar13 != iVar23);
    }
LAB_144181447:
    lVar15 = FUN_1447210f0(lVar4);
    if (*(longlong *)(lVar15 + 0x1f0) == 0) {
      puVar20 = (undefined8 *)(lVar15 + 0x458);
    }
    else {
      puVar20 = (undefined8 *)(*(longlong *)(lVar15 + 0x1f0) + 0xf0);
    }
    uVar17 = *puVar20;
    uVar29 = *(undefined4 *)(lVar4 + 0x2c7c);
    local_148 = (undefined8 *)0x0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    FUN_1446efa72(&local_148,0,3,0x10);
    puVar20 = local_148;
    uStack_140 = CONCAT44(uStack_140._4_4_,3);
    *local_148 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar16 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar16 == 0) {
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_148[2] = lVar16;
    *local_148 = &PTR_FUN_14b9780e0;
    local_148[3] = 0;
    uVar26 = *(uint *)(lVar4 + 0xc);
    *(uint *)(local_148 + 3) = uVar26;
    if ((int)uVar26 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar13 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar23 = DAT_14c964868 + 1;
      bVar28 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar28) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar23);
      }
      LOCK();
      iVar13 = *(int *)(lVar15 + 0x10);
      bVar28 = iVar13 == 0;
      if (bVar28) {
        *(int *)(lVar15 + 0x10) = iVar23;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar28) {
        iVar13 = iVar23;
      }
    }
    *(int *)((longlong)puVar20 + 0x1c) = iVar13;
    puVar20[4] = FUN_148d5d7a4;
    *(undefined4 *)(puVar20 + 5) = 0;
    local_108 = 0;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    FUN_14487d8d8(&local_108,&local_148);
    local_c8 = 1;
    local_198 = &local_128;
    local_128._0_4_ = (uint)local_128 & 0xffff0000;
    local_128 = CONCAT44(0xbf800000,(uint)local_128);
    FUN_1406f4044(uVar17,lVar4 + 0x2c40,&local_108,uVar29);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_c8])(&local_108);
    puVar20 = local_148;
    if ((int)uStack_140 != 0) {
      if (local_148 == (undefined8 *)0x0) goto LAB_144180788;
      (**(code **)*local_148)(local_148,0);
      FUN_1446efa72(&local_148,0,0,0x10);
      uStack_140 = uStack_140 & 0xffffffff00000000;
      puVar20 = local_148;
    }
  }
  if (puVar20 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144180788:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441818d0 FUN_1441818d0 body=79 status=ok
// SIG undefined FUN_1441818d0(void)

void FUN_1441818d0(longlong param_1,int param_2)

{
  if ((param_2 == 0 && *(int *)(param_1 + 0xb78) != -1) && (*(longlong *)(param_1 + 0xb70) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x8c0) + 0x18))(param_1 + 0x8c0);
  }
  FUN_140f0695c(param_1,param_2);
  return;
}



// FUNCTION 144181920 FUN_144181920 body=122 status=ok
// SIG undefined FUN_144181920(void)

void FUN_144181920(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + -0x750) == '\x03') {
    *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) | 1;
  }
  FUN_1447f69b6(param_1 + 0x2b8);
  if ((*(char *)(param_1 + -0x750) == '\x03') && (*(char *)(param_1 + 0x348) == '\0')) {
    if (0 < *(int *)(param_1 + 0x34c)) {
      FUN_148d60540(param_1 + -0x8c8);
      return;
    }
    if (*(int *)(param_1 + 0x350) == 0) {
      uVar1 = FUN_1410c9d9c(param_1 + -0x8c8,DAT_14cbcb940,param_3,param_4,param_2);
      *(undefined1 *)(param_1 + 0x348) = uVar1;
    }
  }
  return;
}



// FUNCTION 14418199a FUN_14418199a body=338 status=ok
// SIG undefined FUN_14418199a(void)

void FUN_14418199a(longlong param_1,char param_2)

{
  longlong lVar1;
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
  undefined4 uVar12;
  byte bVar13;
  longlong lVar14;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if ((lVar1 != 0) && (*(char *)(param_1 + -0x750) == '\x03')) {
    lVar14 = *(longlong *)(lVar1 + 0xae0);
    if (DAT_14c950c29 == 1) {
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar14 = *(longlong *)(lVar1 + 0xae0);
      }
    }
    bVar13 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x178) = lVar14;
    lVar14 = *(longlong *)(lVar1 + 0xae8);
    if ((bVar13 & 1) != 0) {
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar14 = *(longlong *)(lVar1 + 0xae8);
      }
    }
    *(longlong *)(param_1 + 0x180) = lVar14;
    uVar2 = *(undefined4 *)(lVar1 + 0xaf4);
    uVar3 = *(undefined4 *)(lVar1 + 0xaf8);
    uVar4 = *(undefined4 *)(lVar1 + 0xafc);
    uVar5 = *(undefined4 *)(lVar1 + 0xb00);
    uVar6 = *(undefined4 *)(lVar1 + 0xb04);
    uVar7 = *(undefined4 *)(lVar1 + 0xb08);
    uVar8 = *(undefined4 *)(lVar1 + 0xb0c);
    uVar9 = *(undefined4 *)(lVar1 + 0xb10);
    uVar10 = *(undefined4 *)(lVar1 + 0xb14);
    uVar11 = *(undefined4 *)(lVar1 + 0xb18);
    uVar12 = *(undefined4 *)(lVar1 + 0xb1c);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(lVar1 + 0xaf0);
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    *(undefined4 *)(param_1 + 400) = uVar3;
    *(undefined4 *)(param_1 + 0x194) = uVar4;
    *(undefined4 *)(param_1 + 0x198) = uVar5;
    *(undefined4 *)(param_1 + 0x19c) = uVar6;
    *(undefined4 *)(param_1 + 0x1a0) = uVar7;
    *(undefined4 *)(param_1 + 0x1a4) = uVar8;
    *(undefined4 *)(param_1 + 0x1a8) = uVar9;
    *(undefined4 *)(param_1 + 0x1ac) = uVar10;
    *(undefined4 *)(param_1 + 0x1b0) = uVar11;
    *(undefined4 *)(param_1 + 0x1b4) = uVar12;
  }
  if (*(char *)(param_1 + -0x750) == '\x03') {
    *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) & 0xfe;
  }
  FUN_1447f69b6(param_1 + 0x2d0);
  if (*(char *)(param_1 + -0x750) == '\x03') {
    if (param_2 == '\0') {
      FUN_1410c98c6(param_1 + -0x8c8);
    }
    else if ((*(char *)(param_1 + 0x348) != '\0') &&
            (lVar1 = *(longlong *)(param_1 + 0x2a8), lVar1 != 0)) {
      (**(code **)(*(longlong *)(lVar1 + 0x10e0) + 0x30))(lVar1 + 0x10e0);
    }
    *(undefined1 *)(param_1 + 0x348) = 0;
  }
  *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) & 0xfe;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x170),0,1);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  return;
}



// FUNCTION 144181aec FUN_144181aec body=430 status=ok
// SIG undefined FUN_144181aec(void)

void FUN_144181aec(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_1[0x68] == 0) {
    return;
  }
  plVar1 = param_1 + -0x119;
  *(byte *)((longlong)param_1 + 0x354) = *(byte *)((longlong)param_1 + 0x354) & 0xfe | param_2;
  *(byte *)((longlong)param_1 + 0x16c) =
       *(byte *)((longlong)param_1 + 0x16c) & 0xfd | param_2 * '\x02';
  if ((char)param_1[-0xea] != '\x03') {
    FUN_148bd454c(plVar1);
  }
  if (0 < *(int *)((longlong)param_1 + 0x34c)) {
    if ((*(byte *)((longlong)param_1 + 0x354) & 1) != 0) {
      return;
    }
    if ((char)param_1[-0xea] != '\x03') {
      return;
    }
    FUN_148d60618(plVar1);
    return;
  }
  if (((*(byte *)((longlong)param_1 + 0x16c) & 1) == 0) ||
     (lVar2 = param_1[0x68], *(char *)(lVar2 + 0x30) == '\x01')) goto LAB_144181c07;
  lVar6 = *(longlong *)(lVar2 + 0xc0);
  if (lVar6 == 0) {
    uVar5 = FUN_1458b6df2();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0xc0) = lVar6;
  }
  if (*(longlong *)(lVar2 + 200) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(lVar2 + 0xb8) == 0)) goto LAB_144181c07;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      *(undefined8 *)(lVar2 + 200) = 0;
      goto LAB_144181c07;
    }
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar2 + 0xb8));
    *(longlong *)(lVar2 + 200) = lVar6;
    if (lVar6 == 0) goto LAB_144181c07;
  }
  FUN_148d57e88(plVar1,param_1[0x68] + 0xb8);
LAB_144181c07:
  if (((*(byte *)((longlong)param_1 + 0x354) & 1) == 0) && ((char)param_1[-0xea] == '\x03')) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000144181c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,0,0);
    return;
  }
  return;
}



// FUNCTION 144181c9a FUN_144181c9a body=117 status=ok
// SIG undefined FUN_144181c9a(void)

undefined8 FUN_144181c9a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x38))();
  if (((cVar3 != '\0') && (lVar2 = param_1[0x69], (char)lVar2 != '\0')) &&
     (lVar4 = param_1[0x55], lVar4 != 0)) {
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x10e0) + 0x50))(lVar4 + 0x10e0);
    if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
      lVar5 = 0;
      while ((lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5), lVar1 == 0 ||
             (*(char *)(lVar1 + 0x40) != (char)lVar2))) {
        lVar5 = lVar5 + 0x10;
        if ((longlong)*(int *)(lVar4 + 0x48) * 0x10 == lVar5) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144181d10 FUN_144181d10 body=26 status=ok
// SIG undefined FUN_144181d10(void)

void FUN_144181d10(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc18)) {
    iVar1 = *(int *)(param_1 + 0xc18) + -1;
  }
  *(int *)(param_1 + 0xc18) = iVar1;
  return;
}



// FUNCTION 144181da8 FUN_144181da8 body=89 status=ok
// SIG undefined FUN_144181da8(void)

void FUN_144181da8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_14101ff5c();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144181df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 144181e2e FUN_144181e2e body=1107 status=ok
// SIG undefined FUN_144181e2e(void)

void FUN_144181e2e(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  byte local_51;
  undefined8 local_50;
  longlong local_48 [2];
  ulonglong local_38 [2];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_51 = 0xff;
  puVar5 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar5 + 1;
  if ((byte *)puVar5[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_51,1);
  }
  else {
    local_51 = *(byte *)*puVar5;
    *puVar5 = (ulonglong)pbVar1;
  }
  if (local_51 == 0) {
    local_38[0] = 0;
    (**(code **)(*param_2 + 0x150))(param_2,local_38);
    FUN_1457d6ad6(param_1,local_38[0]);
    goto switchD_144181f1f_caseD_4;
  }
  if (((((*(int *)(param_1 + 0x6c) == 0) || (uVar4 = *(uint *)(param_1 + 0x68), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x6c))))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
      (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar6 = *plVar7, lVar6 == 0))))))
  goto switchD_144181f1f_caseD_4;
  switch(local_51) {
  case 2:
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (undefined1 *)*puVar5 + 1;
    if ((undefined1 *)puVar5[1] < puVar2) {
      (**(code **)(*param_2 + 0x170))(param_2,local_38,1);
    }
    else {
      local_38[0] = CONCAT71(local_38[0]._1_7_,*(undefined1 *)*puVar5);
      *puVar5 = (ulonglong)puVar2;
    }
    if ((*(char *)(lVar6 + 0x178) != '\x03') && (*(longlong *)(lVar6 + 0xf48) != 0)) {
      FUN_1411951a8(*(longlong *)(lVar6 + 0xf48),local_38[0] & 0xff);
    }
    break;
  case 3:
    local_21 = 0;
    local_48[0] = 0;
    lVar8 = DAT_14c9647c8;
    FUN_1400b22c2(local_38,&DAT_149e02088);
    local_50 = 0;
    puVar5 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar5 + 1;
    if ((byte *)puVar5[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    }
    else {
      local_21 = *(byte *)*puVar5;
      *puVar5 = (ulonglong)pbVar1;
    }
    FUN_14021219d(param_2,local_38);
    if ((local_21 & 1) != 0) {
      (**(code **)(*param_2 + 0x160))(param_2,local_48);
    }
    if ((local_21 & 4) != 0) {
      (**(code **)(*param_2 + 0x160))(param_2,&local_50);
    }
    if ((*(char *)(lVar6 + 0x178) != '\x03') && (*(longlong *)(lVar6 + 0xf48) != 0)) {
      uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),local_21) & 0xffffffffffffff02;
      local_68 = &local_50;
      FUN_14661cf9a(*(longlong *)(lVar6 + 0xf48),local_38,local_48,
                    CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 1));
    }
    goto LAB_1441821d6;
  case 5:
    local_21 = 0;
    FUN_1400b22c2(local_38,&DAT_149e02088);
    FUN_1400b22c2(local_48,&DAT_149e02088);
    local_50 = 0;
    puVar5 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar5 + 1;
    if ((byte *)puVar5[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    }
    else {
      local_21 = *(byte *)*puVar5;
      *puVar5 = (ulonglong)pbVar1;
    }
    FUN_14021219d(param_2,local_38);
    FUN_14021219d(param_2,local_48);
    if ((local_21 & 1) != 0) {
      (**(code **)(*param_2 + 0x160))(param_2,&local_50);
    }
    if ((*(char *)(lVar6 + 0x178) != '\x03') && (*(longlong *)(lVar6 + 0xf48) != 0)) {
      FUN_145f8999e(*(longlong *)(lVar6 + 0xf48),local_38,local_48,&local_50);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
LAB_1441821d6:
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    break;
  case 6:
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (undefined1 *)*puVar5 + 1;
    if ((undefined1 *)puVar5[1] < puVar2) {
      (**(code **)(*param_2 + 0x170))(param_2,local_38,1);
    }
    else {
      local_38[0] = CONCAT71(local_38[0]._1_7_,*(undefined1 *)*puVar5);
      *puVar5 = (ulonglong)puVar2;
    }
    if (((*(char *)(lVar6 + 0x178) != '\x03') && (lVar6 = *(longlong *)(lVar6 + 0xf48), lVar6 != 0))
       && (*(char *)(lVar6 + 0x178) != '\x03')) {
      FUN_14621e66a(lVar6 + 0x4978,local_38[0] & 0xff);
    }
    break;
  case 7:
    uVar9 = local_38[0] >> 0x20;
    local_38[0] = local_38[0] & 0xffffffff00000000;
    puVar5 = (ulonglong *)param_2[1];
    puVar3 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_38,4);
      }
      else {
        FUN_14572512c(param_2,local_38);
      }
    }
    else {
      local_38[0] = CONCAT44((int)uVar9,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar3;
    }
    if ((*(char *)(lVar6 + 0x178) != '\x03') && (*(longlong *)(lVar6 + 0xf48) != 0)) {
      FUN_146623d10(*(longlong *)(lVar6 + 0xf48) + 0x4978,(undefined4)local_38[0]);
    }
  }
switchD_144181f1f_caseD_4:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441822a7 FUN_1441822a7 body=51 status=ok
// SIG undefined FUN_1441822a7(void)

void FUN_1441822a7(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else if (((param_3 == '\0') || (lVar1 = *(longlong *)(param_2 + 0xa0), lVar1 == 0)) &&
          (lVar1 = *(longlong *)(param_2 + 0x98), lVar1 == 0)) {
    lVar1 = *(longlong *)(param_2 + 0x3c);
  }
  *param_1 = lVar1;
  return;
}



// FUNCTION 1441822da FUN_1441822da body=54 status=ok
// SIG undefined FUN_1441822da(void)

void FUN_1441822da(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else if (((param_3 == '\0') || (lVar2 = *(longlong *)(lVar1 + 0xa0), lVar2 == 0)) &&
          (lVar2 = *(longlong *)(lVar1 + 0x98), lVar2 == 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x3c);
  }
  *param_1 = lVar2;
  return;
}



// FUNCTION 144182310 FUN_144182310 body=49 status=ok
// SIG undefined FUN_144182310(void)

void FUN_144182310(void)

{
  FUN_14594088b(DAT_14cbcc650,DAT_14cbcc658);
  if (DAT_14cbcc650 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441823ce FUN_1441823ce body=5797 status=ok
// SIG undefined FUN_1441823ce(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1441823ce(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *******pppppppuVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  uint uVar21;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  char local_1b9;
  uint local_1b8;
  undefined4 local_1b4;
  undefined4 *local_1b0;
  longlong local_1a8;
  uint local_1a0;
  undefined4 uStack_19c;
  ushort local_188;
  byte local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined8 *******local_158;
  undefined4 local_150 [2];
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 *******local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar10 = param_1 + -0x8c0;
  FUN_140eeb8c0(lVar10);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x208) = param_2;
  if (*(longlong *)(param_1 + 0xa0) == 0) goto LAB_144182437;
  cVar5 = *(char *)(param_1 + -0x748);
  local_88[0] = *(undefined8 ********)(*(longlong *)(param_1 + 0xa0) + 0x38);
  FUN_1446dcdd4(&local_178);
  if (DAT_14cb7d760 == 0) {
    local_1a8 = 0;
  }
  else {
    local_1a8 = FUN_144837462(DAT_14cb7d760,&local_178);
  }
  if (CONCAT44(uStack_15c,uStack_160) != 0) {
    FUN_1400020a8();
  }
  puVar19 = (undefined4 *)(param_1 + 0xe8);
  if (cVar5 == '\x03') {
    uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x3a20) + 0x10))
                      (*(longlong *)(param_1 + 0x208) + 0x3a20);
    FUN_14036c7e6(uVar6,&local_178,local_1a8,1);
    *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_168;
    *(undefined4 *)(param_1 + 0xfc) = local_168._4_4_;
    *(uint *)(param_1 + 0x100) = uStack_160;
    *(undefined4 *)(param_1 + 0x104) = uStack_15c;
    *puVar19 = (undefined4)local_178;
    *(undefined4 *)(param_1 + 0xec) = local_178._4_4_;
    *(int *)(param_1 + 0xf0) = (int)uStack_170;
    *(uint *)(param_1 + 0xf4) = uStack_170._4_4_;
    cVar4 = FUN_1403ae288(puVar19);
    if (cVar4 != '\0') {
      lVar7 = FUN_14008e0ae(puVar19);
      *(undefined4 *)(lVar7 + 0x11c) = 0;
      *(undefined4 *)(lVar7 + 0x118) = *(undefined4 *)(lVar7 + 200);
    }
    lVar7 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x10a0) + 0x10))
                      (*(longlong *)(param_1 + 0x208) + 0x10a0);
    if (*(int *)(lVar7 + 0x40) == 1) {
      local_178 = (code *)0x0;
      uStack_170 = CONCAT44(uStack_170._4_4_,0x3001);
      local_168 = (longlong *)0x0;
      uStack_160 = uStack_160 & 0xffffff00;
      local_158 = (undefined8 *******)0x0;
      local_150[0] = 10;
      local_148 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0xf00000d0;
      local_f0 = 0;
      local_e8 = 0x3f800000;
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0xf00000d0;
      local_a0 = 0;
      local_98 = 0x3f800000;
      local_90 = 0;
      pppppppuVar8 = (undefined8 *******)0x0;
      local_1b9 = cVar5;
      local_1b4 = param_3;
      if (local_1a8 != 0) {
        puVar16 = &DAT_14c9485f0;
        if (*(undefined4 **)(local_1a8 + 8) != (undefined4 *)0x0) {
          puVar16 = *(undefined4 **)(local_1a8 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar7 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar7);
          DAT_14c947fe0 = lVar7;
        }
        FUN_140045924(DAT_14c947fe0,local_88,puVar16,1);
        pppppppuVar8 = local_88[0];
        if (local_158 != local_88[0]) {
          local_148 = 0;
        }
      }
      param_3 = local_1b4;
      cVar5 = local_1b9;
      lVar7 = *(longlong *)(param_1 + 0xa0);
      if (local_178 == *(code **)(lVar7 + 0x50)) {
        iVar12 = *(int *)(lVar7 + 0x58);
        if ((int)uStack_170 != iVar12) goto LAB_144182729;
      }
      else {
        iVar12 = *(int *)(lVar7 + 0x58);
LAB_144182729:
        uStack_170 = CONCAT44(uStack_170._4_4_,iVar12);
        local_168 = (longlong *)0x0;
        local_178 = *(code **)(lVar7 + 0x50);
      }
      local_158 = pppppppuVar8;
      uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x10a0) + 0x10))
                        (*(longlong *)(param_1 + 0x208) + 0x10a0);
      FUN_1414daaac(uVar6,&local_178,0);
      if (CONCAT44(uStack_13c,uStack_140) != 0) {
        FUN_1400020a8();
      }
    }
    FUN_145db0126(lVar10);
    FUN_145c9686e(lVar10);
  }
  else {
    uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x3a20) + 0x10))
                      (*(longlong *)(param_1 + 0x208) + 0x3a20);
    local_178 = (code *)0x0;
    uStack_170 = 0;
    uStack_15c = CONCAT31(uStack_15c._1_3_,0xff);
    uStack_160 = 0;
    local_168 = (longlong *)0x0;
    FUN_14493679e(uVar6,&local_178,local_1a8,1);
    *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_168;
    *(undefined4 *)(param_1 + 0xfc) = local_168._4_4_;
    *(uint *)(param_1 + 0x100) = uStack_160;
    *(undefined4 *)(param_1 + 0x104) = uStack_15c;
    *puVar19 = (undefined4)local_178;
    *(undefined4 *)(param_1 + 0xec) = local_178._4_4_;
    *(int *)(param_1 + 0xf0) = (int)uStack_170;
    *(uint *)(param_1 + 0xf4) = uStack_170._4_4_;
  }
  cVar4 = FUN_1403ae288(puVar19);
  if (cVar4 != '\0') {
    local_1b0 = puVar19;
    lVar7 = FUN_1409d448e(*(longlong *)(param_1 + 0xa0) + 0x50);
    puVar19 = local_1b0;
    if (lVar7 != 0) {
      local_1b9 = cVar5;
      local_1b8 = param_4;
      local_1b4 = param_3;
      lVar9 = FUN_14008e0ae(local_1b0);
      local_178 = FUN_140f68d08;
      uStack_170 = uStack_170 & 0xffffffff00000000;
      FUN_14662b880(lVar9 + 0x198,local_88,lVar10,&local_178);
      *(undefined8 ********)(param_1 + 0x218) = local_88[0];
      lVar9 = FUN_14008e0ae(puVar19);
      local_178 = FUN_140f68c5c;
      uStack_170 = uStack_170 & 0xffffffff00000000;
      FUN_14662b880(lVar9 + 0x1b0,local_88,lVar10,&local_178);
      *(undefined8 ********)(param_1 + 0x220) = local_88[0];
      lVar9 = FUN_14008e0ae(puVar19);
      local_178 = FUN_1413343ea;
      uStack_170 = uStack_170 & 0xffffffff00000000;
      FUN_14662b880(lVar9 + 0x168,local_88,lVar10,&local_178);
      *(undefined8 ********)(param_1 + 0x228) = local_88[0];
      lVar9 = FUN_14008e0ae(puVar19);
      local_178 = FUN_140f68cb2;
      uStack_170 = uStack_170 & 0xffffffff00000000;
      FUN_14662b880(lVar9 + 0x180,local_88,lVar10,&local_178);
      *(undefined8 ********)(param_1 + 0x230) = local_88[0];
      uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x10a0) + 0x10))
                        (*(longlong *)(param_1 + 0x208) + 0x10a0);
      local_1c8 = 0;
      FUN_1461c10bc(uVar6,1,lVar7,local_1a8);
      local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
      local_150[0] = 0;
      FUN_1456bb102(&local_178,*(undefined8 *)(param_1 + 0x208));
      puVar18 = &local_1a0;
      FUN_1448729ea(lVar7 + 0x168,puVar18,&local_178);
      uVar21 = local_1a0;
      param_3 = local_1b4;
      cVar5 = local_1b9;
      if (local_180 != 3) {
        FUN_1400b56fe(local_88,&local_1a0,3);
        uVar21 = 0;
        if (local_68 != 0) {
          uVar21 = (uint)local_88[0];
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppppppuVar8 = local_88;
          if (0x18 < local_70) {
            pppppppuVar8 = local_88[0];
          }
          (*pcVar2)(pppppppuVar8);
        }
        param_3 = local_1b4;
        cVar5 = local_1b9;
        if (0x18 < local_70) {
          FUN_1400020a8(local_88[0]);
        }
      }
      *(uint *)(param_1 + 0x1c4) = uVar21;
      FUN_14020a6cc(param_1 + 0x1bc,1);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_180 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_188) {
          puVar18 = (uint *)CONCAT44(uStack_19c,local_1a0);
        }
        (*pcVar2)(puVar18);
      }
      if (0x18 < local_188) {
        FUN_1400020a8(CONCAT44(uStack_19c,local_1a0));
      }
      FUN_1448173f8(local_150);
      param_4 = local_1b8;
      if (((char)local_178 == '\x03') && (local_168 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_168 + 0x10))();
        }
      }
    }
    puVar19 = local_1b0;
    if (cVar5 == '\x03') {
      cVar4 = *(char *)(param_1 + 0x201);
      if (cVar4 == '\0') {
        local_1b9 = cVar5;
        local_1b8 = param_4;
        lVar9 = FUN_14008e0ae(local_1b0);
        local_178 = (code *)0x0;
        uStack_170 = uStack_170 & 0xffffffff00000000;
        FUN_1446efa72(&local_178,0,3,0x10);
        puVar3 = (undefined8 *)local_178;
        uStack_170._0_4_ = 3;
        *(undefined ***)local_178 = &PTR_LAB_14b3f7890;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)((longlong)local_178 + 0x10) = lVar13;
        *(undefined ***)local_178 = &PTR_FUN_14b9786b0;
        *(undefined8 *)((longlong)local_178 + 0x18) = 0;
        iVar12 = 0;
        if (lVar10 != 0) {
          uVar21 = *(uint *)(param_1 + -0x8b4);
          *(uint *)((longlong)local_178 + 0x18) = uVar21;
          if ((int)uVar21 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar12 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar12 = *(int *)(lVar7 + 0x10);
            bVar20 = iVar12 == 0;
            if (bVar20) {
              *(int *)(lVar7 + 0x10) = iVar17;
              iVar12 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar12 = iVar17;
            }
          }
        }
        *(int *)((longlong)puVar3 + 0x1c) = iVar12;
        puVar3[4] = param_2;
        puVar3[5] = lVar10;
        FUN_14036a282(lVar9 + 0x240,local_88,&local_178);
        puVar19 = local_1b0;
        if ((int)uStack_170 == 0) {
LAB_144182b23:
          if (local_178 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_178 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_178)(local_178,0);
          FUN_1446efa72(&local_178,0,0,0x10);
          uStack_170._0_4_ = 0;
          goto LAB_144182b23;
        }
        *(undefined8 ********)(param_1 + 600) = local_88[0];
        lVar9 = FUN_14008e0ae(puVar19);
        local_178 = (code *)0x0;
        uStack_170._0_4_ = 0;
        FUN_1446efa72(&local_178,0,3,0x10);
        pcVar2 = local_178;
        uStack_170 = CONCAT44(uStack_170._4_4_,3);
        *(undefined ***)local_178 = &PTR_LAB_14b3f7890;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)(local_178 + 0x10) = lVar13;
        *(undefined ***)local_178 = &PTR_FUN_14b978720;
        *(undefined8 *)(local_178 + 0x18) = 0;
        iVar12 = 0;
        if (lVar10 != 0) {
          uVar21 = *(uint *)(param_1 + -0x8b4);
          *(uint *)(local_178 + 0x18) = uVar21;
          if ((int)uVar21 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar12 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar12 = *(int *)(lVar7 + 0x10);
            bVar20 = iVar12 == 0;
            if (bVar20) {
              *(int *)(lVar7 + 0x10) = iVar17;
              iVar12 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar12 = iVar17;
            }
          }
        }
        *(int *)(pcVar2 + 0x1c) = iVar12;
        *(longlong *)(pcVar2 + 0x20) = param_2;
        *(longlong *)(pcVar2 + 0x28) = lVar10;
        FUN_14036a282(lVar9 + 600,local_88,&local_178);
        puVar19 = local_1b0;
        param_4 = local_1b8;
        if ((int)uStack_170 == 0) {
LAB_144182c6c:
          cVar5 = local_1b9;
          if (local_178 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          cVar5 = local_1b9;
          if (local_178 != (code *)0x0) {
            (*(code *)**(undefined8 **)local_178)(local_178,0);
            FUN_1446efa72(&local_178,0,0,0x10);
            uStack_170 = uStack_170 & 0xffffffff00000000;
            goto LAB_144182c6c;
          }
        }
        *(undefined8 ********)(param_1 + 0x260) = local_88[0];
        cVar4 = *(char *)(param_1 + 0x201);
      }
      if ((((cVar4 == '\x01') && (0 < *(int *)(param_1 + 400))) &&
          ((*(float *)(param_1 + 0x1c0) <= 0.0 ||
           ((FUN_148d6464a(lVar10), *(char *)(param_1 + 0x201) == '\x01' &&
            (0 < *(int *)(param_1 + 400))))))) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
        local_1b9 = cVar5;
        local_1b8 = param_4;
        lVar9 = FUN_14008e0ae(puVar19);
        local_178 = (code *)0x0;
        uStack_170 = uStack_170 & 0xffffffff00000000;
        FUN_1446efa72(&local_178,0,3,0x10);
        puVar3 = (undefined8 *)local_178;
        uStack_170._0_4_ = 3;
        *(undefined ***)local_178 = &PTR_LAB_14b404040;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)((longlong)local_178 + 0x10) = lVar13;
        *(undefined ***)local_178 = &PTR_FUN_14b978790;
        *(undefined8 *)((longlong)local_178 + 0x18) = 0;
        iVar12 = 0;
        if (lVar10 != 0) {
          uVar21 = *(uint *)(param_1 + -0x8b4);
          *(uint *)((longlong)local_178 + 0x18) = uVar21;
          if ((int)uVar21 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar12 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar12 = *(int *)(lVar7 + 0x10);
            bVar20 = iVar12 == 0;
            if (bVar20) {
              *(int *)(lVar7 + 0x10) = iVar17;
              iVar12 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar12 = iVar17;
            }
          }
        }
        *(int *)((longlong)puVar3 + 0x1c) = iVar12;
        puVar3[4] = param_2;
        puVar3[5] = lVar10;
        FUN_145882066(lVar9 + 0x1c8,local_88,&local_178);
        puVar19 = local_1b0;
        if ((int)uStack_170 == 0) {
LAB_144182e13:
          if (local_178 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_178 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_178)(local_178,0);
          FUN_1446efa72(&local_178,0,0,0x10);
          uStack_170._0_4_ = 0;
          goto LAB_144182e13;
        }
        *(undefined8 ********)(param_1 + 0x268) = local_88[0];
        lVar9 = FUN_14008e0ae(puVar19);
        local_178 = (code *)0x0;
        uStack_170._0_4_ = 0;
        FUN_1446efa72(&local_178,0,3,0x10);
        puVar3 = (undefined8 *)local_178;
        uStack_170._0_4_ = 3;
        iVar12 = (int)uStack_170;
        uStack_170._0_4_ = 3;
        *(undefined ***)local_178 = &PTR_LAB_14b404040;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)((longlong)local_178 + 0x10) = lVar13;
        *(undefined ***)local_178 = &PTR_FUN_14b978800;
        *(undefined8 *)((longlong)local_178 + 0x18) = 0;
        iVar17 = 0;
        if (lVar10 != 0) {
          uVar21 = *(uint *)(param_1 + -0x8b4);
          *(uint *)((longlong)local_178 + 0x18) = uVar21;
          if ((int)uVar21 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar17 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar17 = DAT_14c964868 + 1;
            UNLOCK();
            iVar15 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar17;
            uStack_170._0_4_ = iVar12;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar15);
            }
            LOCK();
            iVar17 = *(int *)(lVar7 + 0x10);
            bVar20 = iVar17 == 0;
            if (bVar20) {
              *(int *)(lVar7 + 0x10) = iVar15;
              iVar17 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar17 = iVar15;
            }
          }
        }
        *(int *)((longlong)puVar3 + 0x1c) = iVar17;
        puVar3[4] = param_2;
        puVar3[5] = lVar10;
        FUN_145882066(lVar9 + 0x1f8,local_88,&local_178);
        puVar19 = local_1b0;
        param_4 = local_1b8;
        if ((int)uStack_170 == 0) {
LAB_144182f55:
          if (local_178 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_178 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_178)(local_178,0);
          FUN_1446efa72(&local_178,0,0,0x10);
          uStack_170._0_4_ = 0;
          goto LAB_144182f55;
        }
        *(undefined8 ********)(param_1 + 0x270) = local_88[0];
        lVar9 = FUN_14008e0ae(puVar19);
        local_178 = (code *)0x0;
        uStack_170._0_4_ = 0;
        FUN_1446efa72(&local_178,0,3,0x10);
        pcVar2 = local_178;
        uStack_170 = CONCAT44(uStack_170._4_4_,3);
        *(undefined ***)local_178 = &PTR_LAB_14b3f7890;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)(local_178 + 0x10) = lVar13;
        *(undefined ***)local_178 = &PTR_FUN_14b978870;
        *(undefined8 *)(local_178 + 0x18) = 0;
        iVar12 = 0;
        if (lVar10 != 0) {
          uVar21 = *(uint *)(param_1 + -0x8b4);
          *(uint *)(local_178 + 0x18) = uVar21;
          if ((int)uVar21 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar12 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar12 = *(int *)(lVar7 + 0x10);
            bVar20 = iVar12 == 0;
            if (bVar20) {
              *(int *)(lVar7 + 0x10) = iVar17;
              iVar12 = 0;
            }
            UNLOCK();
            param_4 = local_1b8;
            if (bVar20) {
              iVar12 = iVar17;
            }
          }
        }
        *(int *)(pcVar2 + 0x1c) = iVar12;
        *(longlong *)(pcVar2 + 0x20) = lVar10;
        FUN_14036a282(lVar9 + 0x1b0,local_88,&local_178);
        puVar19 = local_1b0;
        if ((int)uStack_170 == 0) {
LAB_144183093:
          cVar5 = local_1b9;
          if (local_178 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          cVar5 = local_1b9;
          if (local_178 != (code *)0x0) {
            (*(code *)**(undefined8 **)local_178)(local_178,0);
            FUN_1446efa72(&local_178,0,0,0x10);
            uStack_170 = uStack_170 & 0xffffffff00000000;
            goto LAB_144183093;
          }
        }
        *(undefined8 ********)(param_1 + 0x240) = local_88[0];
      }
    }
    cVar4 = *(char *)(param_1 + 0x201);
    if (cVar4 == '\x01') {
      if ((0 < *(int *)(param_1 + 400)) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
        local_88[0] = *(undefined8 ********)(*(longlong *)(param_1 + 0x1d8) + 0x30);
        FUN_1446dcdd4(&local_178);
        if (DAT_14cb7d760 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_144837462(DAT_14cb7d760,&local_178);
        }
        if (CONCAT44(uStack_15c,uStack_160) != 0) {
          FUN_1400020a8();
        }
        if (lVar7 == 0) {
          if (cVar5 == '\x03') {
LAB_144183422:
            puVar18 = (uint *)(param_1 + 0x128);
            cVar4 = FUN_1403ae288(puVar18);
            if (((((cVar4 != '\0') &&
                  (plVar11 = *(longlong **)(param_1 + 0x130), plVar11 != (longlong *)0x0)) &&
                 (*(int *)(param_1 + 300) != 0)) &&
                ((uVar21 = *puVar18, -1 < (int)uVar21 && ((int)uVar21 < DAT_14c9647dc)))) &&
               ((lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8), lVar7 != 0
                && ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 300) &&
                    ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
              if (*(code **)(*plVar11 + 0x10) == (code *)&LAB_1447a1f2e) {
                plVar11 = plVar11 + 0xd9;
              }
              else {
                plVar11 = (longlong *)(**(code **)(*plVar11 + 0x10))();
              }
              cVar4 = FUN_14486eb0e(plVar11,puVar18);
              if (cVar4 != '\0') {
                local_1b9 = cVar5;
                lVar9 = FUN_14008e0ae(puVar18);
                local_178 = (code *)0x0;
                uStack_170 = uStack_170 & 0xffffffff00000000;
                FUN_1446efa72(&local_178,0,3,0x10);
                pcVar2 = local_178;
                uStack_170 = CONCAT44(uStack_170._4_4_,3);
                *(undefined ***)local_178 = &PTR_LAB_14b3f7890;
                LOCK();
                UNLOCK();
                lVar13 = DAT_14c758608 + 1;
                lVar7 = DAT_14c758608 + 1;
                if (lVar13 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar13 = DAT_14c758608 + 2;
                  lVar7 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar7;
                *(longlong *)(local_178 + 0x10) = lVar13;
                *(undefined ***)local_178 = &PTR_FUN_14b978950;
                *(undefined8 *)(local_178 + 0x18) = 0;
                iVar12 = 0;
                if (lVar10 != 0) {
                  uVar21 = *(uint *)(param_1 + -0x8b4);
                  *(uint *)(local_178 + 0x18) = uVar21;
                  if ((int)uVar21 < DAT_14c9647dc) {
                    lVar7 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                  }
                  else {
                    lVar7 = 0;
                  }
                  iVar12 = *(int *)(lVar7 + 0x10);
                  if (*(int *)(lVar7 + 0x10) == 0) {
                    LOCK();
                    iVar12 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar17 = DAT_14c964868 + 1;
                    bVar20 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar12;
                    local_1b8 = param_4;
                    if (bVar20) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar17);
                    }
                    LOCK();
                    iVar12 = *(int *)(lVar7 + 0x10);
                    bVar20 = iVar12 == 0;
                    if (bVar20) {
                      *(int *)(lVar7 + 0x10) = iVar17;
                      iVar12 = 0;
                    }
                    UNLOCK();
                    param_4 = local_1b8;
                    if (bVar20) {
                      iVar12 = iVar17;
                    }
                  }
                }
                *(int *)(pcVar2 + 0x1c) = iVar12;
                *(longlong *)(pcVar2 + 0x20) = lVar10;
                FUN_14036a282(lVar9 + 0x198,local_88,&local_178);
                puVar19 = local_1b0;
                if ((int)uStack_170 != 0) {
                  cVar5 = local_1b9;
                  if (local_178 == (code *)0x0) goto LAB_1441830d8;
                  (*(code *)**(undefined8 **)local_178)(local_178,0);
                  FUN_1446efa72(&local_178,0,0,0x10);
                  uStack_170 = uStack_170 & 0xffffffff00000000;
                }
                cVar5 = local_1b9;
                if (local_178 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
          }
        }
        else {
          local_1b9 = cVar5;
          if (cVar5 == '\x03') {
            uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x3a20) + 0x10))
                              (*(longlong *)(param_1 + 0x208) + 0x3a20);
            FUN_14036c7e6(uVar6,&local_178,lVar7,1);
            *(undefined4 *)(param_1 + 0x138) = (undefined4)local_168;
            *(undefined4 *)(param_1 + 0x13c) = local_168._4_4_;
            *(uint *)(param_1 + 0x140) = uStack_160;
            *(undefined4 *)(param_1 + 0x144) = uStack_15c;
            *(undefined4 *)(param_1 + 0x128) = (undefined4)local_178;
            *(undefined4 *)(param_1 + 300) = local_178._4_4_;
            *(int *)(param_1 + 0x130) = (int)uStack_170;
            *(uint *)(param_1 + 0x134) = uStack_170._4_4_;
            cVar5 = local_1b9;
            if (*(longlong *)(param_1 + 0x288) == 0) {
              local_178 = FUN_140e7ee64;
              uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
              FUN_14662b980(*(longlong *)(param_1 + 0x208) + 0x4ad8,local_88,lVar10);
              *(undefined8 ********)(param_1 + 0x288) = local_88[0];
              cVar5 = local_1b9;
            }
            goto LAB_144183422;
          }
          uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x3a20) + 0x10))
                            (*(longlong *)(param_1 + 0x208) + 0x3a20);
          local_178 = (code *)0x0;
          uStack_170 = 0;
          uStack_15c = CONCAT31(uStack_15c._1_3_,0xff);
          uStack_160 = 0;
          local_168 = (longlong *)0x0;
          FUN_14493679e(uVar6,&local_178,lVar7,1);
          *(undefined4 *)(param_1 + 0x138) = (undefined4)local_168;
          *(undefined4 *)(param_1 + 0x13c) = local_168._4_4_;
          *(uint *)(param_1 + 0x140) = uStack_160;
          *(undefined4 *)(param_1 + 0x144) = uStack_15c;
          *(undefined4 *)(param_1 + 0x128) = (undefined4)local_178;
          *(undefined4 *)(param_1 + 300) = local_178._4_4_;
          *(int *)(param_1 + 0x130) = (int)uStack_170;
          *(uint *)(param_1 + 0x134) = uStack_170._4_4_;
          cVar5 = local_1b9;
        }
      }
LAB_1441830d8:
      cVar4 = *(char *)(param_1 + 0x201);
    }
    if (((cVar4 == '\x03') && (0.0 < *(float *)(param_1 + 0x1a8))) &&
       (*(longlong *)(param_1 + 0x1d0) != 0)) {
      FUN_148d647be(lVar10,cVar5 == '\x03');
    }
  }
  if (cVar5 == '\x03') {
    FUN_14662b7fa(lVar10);
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      FUN_14615c894(param_1 + 0x18);
    }
    iVar12 = *(int *)(param_1 + 0xb0);
    if ((longlong)iVar12 != 0) {
      lVar10 = *(longlong *)(param_1 + 0xa8);
      lVar7 = 0;
      do {
        plVar11 = *(longlong **)(lVar10 + lVar7);
        if (plVar11 != (longlong *)0x0) {
          if (plVar11[0x59] == DAT_14cbcc6d8) {
            FUN_148d49086(plVar11,0);
            plVar11 = *(longlong **)(lVar10 + lVar7);
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,*(undefined8 *)(param_1 + 0x208));
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar12 * 8 != lVar7);
    }
  }
  FUN_14615c82e(param_1,*(undefined8 *)(param_1 + 0x208),param_3);
  *(undefined4 *)(param_1 + 0x210) = param_3;
  plVar11 = *(longlong **)(param_1 + 0x208);
  pcVar2 = *(code **)(*plVar11 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar10 = plVar11[0x76];
    if (lVar10 != 0) goto LAB_1441832e2;
    pcVar2 = *(code **)(*plVar11 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      if (*(code **)(plVar11[0x784] + 0x18) == (code *)&LAB_144904684) {
        if ((((*(int *)((longlong)plVar11 + 0x75b4) != 0) &&
             (uVar21 = *(uint *)(plVar11 + 0xeb6), -1 < (int)uVar21)) &&
            (((int)uVar21 < DAT_14c9647dc &&
             ((plVar14 = (longlong *)
                         ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
              plVar14 != (longlong *)0x0 &&
              ((int)plVar14[2] == *(int *)((longlong)plVar11 + 0x75b4))))))) &&
           ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
            lVar10 = *plVar14;
          }
          else {
            lVar10 = 0;
          }
          lVar10 = lVar10 + 0x110;
          goto LAB_1441832c5;
        }
      }
      else {
        lVar10 = (**(code **)(plVar11[0x784] + 0x18))(plVar11 + 0x784);
LAB_1441832c5:
        if (lVar10 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x20);
          goto LAB_1441832d2;
        }
      }
    }
    else {
      lVar10 = (*pcVar2)();
LAB_1441832d2:
      if (lVar10 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x3b0);
        goto LAB_1441832e2;
      }
    }
LAB_144183200:
    cVar5 = FUN_1403ae288(puVar19);
    if (cVar5 != '\0') {
      uVar6 = FUN_14008e0ae(puVar19);
      FUN_1414daa56(uVar6,0x3f800000,0x3f800000);
    }
    cVar5 = FUN_1403ae288(param_1 + 0x128);
    if (cVar5 != '\0') {
      uVar6 = FUN_14008e0ae(param_1 + 0x128);
      FUN_1414daa56(uVar6,0x3f800000,0x3f800000);
    }
  }
  else {
    lVar10 = (*pcVar2)();
LAB_1441832e2:
    if (((param_4 & 1) != 0) || (lVar10 == 0)) goto LAB_144183200;
  }
  local_178 = *(code **)(param_1 + 0x208);
  FUN_1447cd2ec(param_1 + 0x20);
LAB_144182437:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144183aa0 FUN_144183aa0 body=329 status=ok
// SIG undefined FUN_144183aa0(void)

undefined8 FUN_144183aa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
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
  lVar3 = *(longlong *)(param_1 + 200);
  if (lVar3 != 0) {
    if (DAT_14cb939a8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140940982;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146522c26;
      local_48 = &LAB_148a0db91;
      local_50 = &LAB_146572ba7;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
      lVar3 = *(longlong *)(param_1 + 200);
      if (lVar3 == 0) goto LAB_144183b06;
    }
    uVar2 = 0;
    if ((DAT_14cb939a8 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_144183b08;
    if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) ==
        DAT_14cb939a8 + 0x30)) {
      FUN_143ecad96(lVar3,param_2,param_3);
      uVar2 = 1;
      goto LAB_144183b08;
    }
  }
LAB_144183b06:
  uVar2 = 0;
LAB_144183b08:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 144183bea FUN_144183bea body=480 status=ok
// SIG undefined FUN_144183bea(void)

void FUN_144183bea(longlong param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_1c8 [36];
  undefined1 *local_1a4;
  undefined2 local_19c;
  undefined1 local_198;
  undefined8 local_190;
  undefined2 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170 [256];
  undefined8 local_70;
  undefined1 local_68 [48];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14079f836();
  if (0.0 < *(float *)(param_1 + 0x1b8)) {
    plVar2 = (longlong *)FUN_14485cccc((longlong)param_2 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1403a4836();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_1403a4836();
        plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
        if (plVar4 != (longlong *)0x0 && plVar2 != plVar4) {
          cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
          if (cVar1 != '\0') {
            local_190 = 0;
            local_188 = 0xffff;
            local_180 = 0;
            local_70 = 0;
            local_38 = 0;
            local_30 = 0x200000000;
            local_198 = 1;
            local_178 = *(undefined8 *)(param_1 + 0x188);
            memcpy(local_170,param_2,0x100);
            if (local_68 != (undefined1 *)(param_1 + 0x288)) {
              puVar5 = (undefined1 *)(param_1 + 0x288);
              if (*(undefined1 **)(param_1 + 0x2b8) != (undefined1 *)0x0) {
                puVar5 = *(undefined1 **)(param_1 + 0x2b8);
              }
              FUN_1400709d4(local_68,puVar5,*(undefined4 *)(param_1 + 0x2c0),2);
            }
            local_70 = *(undefined8 *)(param_1 + 0x280);
            local_190 = *(undefined8 *)(param_1 + 0x348);
            local_188 = *(undefined2 *)(param_1 + 0x350);
            local_180 = *(undefined8 *)(param_1 + 0x358);
            local_1a4 = &DAT_3f8000003f800000;
            local_19c = *(undefined2 *)(param_1 + 0x968);
            cVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
            if (cVar1 != '\0') {
              *(float *)(param_1 + 900) = local_1a4._0_4_ * *(float *)(param_1 + 900);
            }
            if (local_38 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144183e86 FUN_144183e86 body=2346 status=ok
// SIG undefined FUN_144183e86(void)

void FUN_144183e86(longlong *param_1,longlong *param_2,undefined1 param_3,char *param_4,
                  char *param_5)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined *puVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_258 [32];
  undefined4 **local_238;
  undefined4 *local_230;
  longlong *local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  longlong local_210;
  longlong *local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (param_1[0x22] == 0) {
    lVar8 = FUN_1400b465c(param_1);
    if (lVar8 == 0) {
LAB_144183efa:
      local_1fc = 0;
    }
    else {
      lVar9 = FUN_1403ca142();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (local_1fc = 4,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         != lVar9 + 0x30)) goto LAB_144183efa;
    }
    thunk_FUN_140a5071c(&local_1f8);
    local_230 = &local_1fc;
    FUN_1461a0246(&local_228,0x10c);
    FUN_145ff6f4a(&local_228,&local_210,&local_1f8);
    plVar14 = local_208;
    if (local_208 == (longlong *)0x0) {
      param_1[0x22] = local_210;
      plVar12 = (longlong *)param_1[0x23];
      if (plVar12 != (longlong *)0x0) {
        param_1[0x23] = 0;
LAB_144183fab:
        LOCK();
        plVar14 = plVar12 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
joined_r0x000144183f9b:
          if (iVar7 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_208 + 1) = (int)local_208[1] + 1;
      UNLOCK();
      param_1[0x22] = local_210;
      plVar12 = (longlong *)param_1[0x23];
      if (local_208 == plVar12) {
        LOCK();
        plVar12 = local_208 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_208)(local_208);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
          plVar12 = plVar14;
          goto joined_r0x000144183f9b;
        }
      }
      else {
        param_1[0x23] = (longlong)local_208;
        if (plVar12 != (longlong *)0x0) goto LAB_144183fab;
      }
    }
    plVar14 = local_208;
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_208 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar14 = (longlong *)CONCAT44(uStack_21c,local_220);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    FUN_140a4ff8c(&local_1f8);
  }
  if ((DAT_14c9a1ab0 != 0) && (*(char *)(DAT_14c9a1ab0 + 0x61) == '\x01')) {
    DAT_14cabd130 = 0;
  }
  plVar14 = param_1 + 0x15;
  if (plVar14 != param_2) {
    iVar7 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x16) = iVar7;
    if (iVar7 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(plVar14,iVar7);
      if (iVar7 != 0) {
        memcpy((void *)*plVar14,_Src,(longlong)iVar7 * 2);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xa7) = param_3;
  *param_4 = '\0';
  *param_5 = '\0';
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x14) = 0;
  lVar8 = FUN_1400b465c(param_1);
  if (lVar8 == 0) {
LAB_144184104:
    bVar15 = false;
    lVar8 = 0;
LAB_144184107:
    if ((int)param_2[1] < 2) {
LAB_144184137:
      cVar4 = '\0';
    }
    else {
      FUN_1446f470e(&local_1f8,*param_2,1);
      lVar9 = FUN_14090279a(DAT_14cb84f20,&local_1f8);
      if (lVar9 == 0) goto LAB_144184137;
      cVar4 = FUN_1465552fa(lVar9,param_1 + 0x17);
    }
    *param_4 = cVar4;
    bVar2 = false;
  }
  else {
    lVar9 = FUN_1403ca142();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_144184104;
    bVar15 = true;
    if (*(char *)(lVar8 + 0x4d9) == '\0') goto LAB_144184107;
    cVar4 = *param_4;
    bVar15 = true;
    bVar2 = true;
  }
  *param_5 = cVar4;
  uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar9 = FUN_145bd989c(uVar10);
  if ((((bVar15) && (lVar9 != 0)) && (*param_5 != '\0')) &&
     ((cVar4 = FUN_14413f3cc(lVar8,param_2), cVar4 != '\0' ||
      ((bVar5 = *(char *)(lVar9 + 0xb0) - 1, bVar5 < 8 &&
       ((1 < bVar5 || (*(char *)(lVar9 + 0xc0) != '\0')))))))) {
    *param_5 = '\0';
    *(undefined1 *)((longlong)param_1 + 0xa7) = 0;
    FUN_14020fad6(param_1 + 0x17,&DAT_149dfb77a);
  }
  if (*param_5 == '\x01') {
    lVar8 = param_1[0x24];
    if (lVar8 == 0) {
      FUN_148d2f1b2(&local_1f8);
      uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar11 = FUN_145866520(uVar10);
      uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      local_50 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      local_50 = local_50 >> 0x10 ^ local_50;
      local_238 = &local_230;
      FUN_148d352ca(&local_228,"SOakCutsceneWidget",
                    ".\\../../OakGame/Source/OakGame/LoadingScreen/OakLoadingScreenSubsystem.cpp",
                    0x13b);
      FUN_148d2f1d2(&local_228,&local_210,&local_1f8);
      plVar14 = local_208;
      if (local_208 == (longlong *)0x0) {
        param_1[0x24] = local_210;
        plVar12 = (longlong *)param_1[0x25];
        if (plVar12 != (longlong *)0x0) {
          param_1[0x25] = 0;
LAB_1441844de:
          LOCK();
          plVar14 = plVar12 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
joined_r0x00014418434d:
            if (iVar7 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_208 + 1) = (int)local_208[1] + 1;
        UNLOCK();
        param_1[0x24] = local_210;
        plVar12 = (longlong *)param_1[0x25];
        if (local_208 == plVar12) {
          LOCK();
          plVar12 = local_208 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*local_208)(local_208);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            plVar12 = plVar14;
            goto joined_r0x00014418434d;
          }
        }
        else {
          param_1[0x25] = (longlong)local_208;
          if (plVar12 != (longlong *)0x0) goto LAB_1441844de;
        }
      }
      if (local_208 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_208 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_208)(local_208);
          LOCK();
          piVar1 = (int *)((longlong)local_208 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_208 + 0x10))(local_208);
          }
        }
      }
      plVar14 = (longlong *)CONCAT44(uStack_21c,local_220);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar14 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      FUN_140a4ff8c(&local_1f8);
      lVar8 = param_1[0x24];
    }
    if (*(longlong **)(lVar8 + 0x288) != (longlong *)0x0) {
      local_1f8._0_2_ = CONCAT11(1,DAT_14c96b23b);
      local_1f0 = (longlong *)0x0;
      uStack_1e8 = 0;
      (**(code **)(**(longlong **)(lVar8 + 0x288) + 0x1c0))();
      lVar8 = param_1[0x24];
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_1f8 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_1f0 = (longlong *)((ulonglong)local_1f0 & 0xffffffff00000000);
    FUN_140ac6c96(&DAT_14cbcc9f8,&local_1f8);
    FUN_148e810e8(lVar8);
    if (local_1f8 != (longlong *)0x0) {
      (**(code **)(*local_1f8 + 0x10))();
    }
    memset(&local_1f8,0,0x118);
    lVar8 = FUN_1402735c8();
    FUN_148c212b2(&local_1f8,lVar8 + 0x200);
    FUN_148e8115c(param_1[0x24],&local_1f8);
    FUN_145ab9500(&local_1f8);
    goto LAB_144184653;
  }
  if (bVar2) {
    lVar8 = FUN_1402735c8();
    FUN_14605e648(&local_1f8,lVar8 + 0x1d0);
    if (param_1[0x22] != 0) {
      FUN_14605e41a(param_1[0x22],&local_1f8);
    }
    puVar13 = &DAT_14cbcca48;
LAB_14418443e:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_228 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_220 = 0;
    FUN_140ac6c96(puVar13);
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_1410d53f0(&local_1f8,uVar10);
    if (local_1f0 == (longlong *)0x0) {
LAB_14418440b:
      lVar8 = FUN_1402735c8();
      FUN_14605e648(&local_1f8,lVar8 + 0x1d0);
      if (param_1[0x22] != 0) {
        FUN_14605e41a(param_1[0x22],&local_1f8);
      }
      puVar13 = &DAT_14cbcca20;
      goto LAB_14418443e;
    }
    iVar7 = (int)local_1f0[1];
    do {
      if (iVar7 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_1f0[1];
      bVar15 = iVar7 == iVar3;
      if (bVar15) {
        *(int *)(local_1f0 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
      plVar14 = local_1f0;
    } while (!bVar15);
    LOCK();
    piVar1 = (int *)((longlong)local_1f0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_1f0 + 0x10))();
    }
    plVar12 = local_1f8;
    if (plVar14 == (longlong *)0x0) goto LAB_14418440b;
    bVar15 = true;
    if (local_1f8 != (longlong *)0x0) {
      lVar8 = local_1f8[0x18];
      if (lVar8 == 0) {
        local_1f8 = (longlong *)local_1f8[0x16];
        lVar8 = FUN_14050aea0();
        plVar12[0x18] = lVar8;
        if (lVar8 == 0) goto LAB_1441843e5;
      }
      plVar12 = (longlong *)FUN_145a2c21b(lVar8);
      if (plVar12 != (longlong *)0x0) {
        if (param_1[0x22] != 0) {
          FUN_14605e41a(param_1[0x22],plVar12 + 3);
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_228);
        bVar15 = false;
      }
    }
LAB_1441843e5:
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (bVar15) goto LAB_14418440b;
  }
  if (param_1[0x22] != 0) {
    FUN_14664e232(param_1[0x22],&local_228);
  }
  if (local_228 != (longlong *)0x0) {
    (**(code **)(*local_228 + 0x10))();
  }
LAB_144184653:
  FUN_145c700ec(param_1);
  (**(code **)(*param_1 + 0x3b8))(param_1,0);
  FUN_145bd36b0(param_1);
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441847b2 FUN_1441847b2 body=371 status=ok
// SIG undefined FUN_1441847b2(void)

void FUN_1441847b2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_145d4f736();
  lVar7 = *(longlong *)(lVar5 + 0x88);
  if (lVar7 == 0) {
    uVar6 = FUN_145cd7928();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0x88) = lVar7;
  }
  lVar8 = *(longlong *)(lVar5 + 0x90);
  if (lVar8 == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar5 + 0x80) == 0)) goto LAB_1441848e6;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x80));
        *(longlong *)(lVar5 + 0x90) = lVar8;
        if (lVar8 == 0) goto LAB_1441848e6;
        goto LAB_144184867;
      }
    }
    *(undefined8 *)(lVar5 + 0x90) = 0;
  }
  else {
LAB_144184867:
    uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar7 = FUN_1406f625c(uVar6);
    if (lVar7 != 0) {
      lVar5 = *(longlong *)(lVar7 + 0x158);
      plVar3 = *(longlong **)(lVar7 + 0x160);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        FUN_1446f470e(local_38,L"UOakLoadingScreenSubsystem",1);
        FUN_145d4f580(lVar5,lVar8,local_38);
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
    }
  }
LAB_1441848e6:
  FUN_1461a42ce(param_1);
  FUN_14611118a(param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144184926 FUN_144184926 body=186 status=ok
// SIG undefined FUN_144184926(void)

void FUN_144184926(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ad0a78();
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar6 = FUN_1406f625c(uVar5);
  if (lVar6 != 0) {
    lVar3 = *(longlong *)(lVar6 + 0x158);
    plVar4 = *(longlong **)(lVar6 + 0x160);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      FUN_1446f470e(local_28,L"UOakLoadingScreenSubsystem",1);
      FUN_14621c628(lVar3,local_28);
    }
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
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441849e6 FUN_1441849e6 body=31 status=ok
// SIG undefined FUN_1441849e6(void)

undefined8 FUN_1441849e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144184a06 FUN_144184a06 body=205 status=ok
// SIG undefined FUN_144184a06(void)

void FUN_144184a06(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      uVar4 = 0;
      FUN_14113775c(uVar2,&DAT_14c846480,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0,0);
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_140e2509e(uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 144184afe FUN_144184afe body=29 status=ok
// SIG undefined FUN_144184afe(void)

undefined8 FUN_144184afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144184b1c FUN_144184b1c body=29 status=ok
// SIG undefined FUN_144184b1c(void)

undefined8 FUN_144184b1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144184cb8 FUN_144184cb8 body=93 status=ok
// SIG undefined FUN_144184cb8(void)

void FUN_144184cb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144184d16 FUN_144184d16 body=93 status=ok
// SIG undefined FUN_144184d16(void)

void FUN_144184d16(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b977890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144184d74 FUN_144184d74 body=126 status=ok
// SIG undefined FUN_144184d74(void)

void FUN_144184d74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b977890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144184de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144184dfc FUN_144184dfc body=266 status=ok
// SIG undefined FUN_144184dfc(void)

undefined8 FUN_144184dfc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144184f00;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144184f00;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144184f00:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144184ea7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d55f44(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144184ea7;
    }
  }
  uVar6 = 0;
LAB_144184ea7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144184f08 FUN_144184f08 body=378 status=ok
// SIG undefined FUN_144184f08(void)

longlong * FUN_144184f08(uint *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  param_2 = (longlong *)*param_2;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar6 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) + DAT_14c9647c8[uVar1 >> 0x10]),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0)))))) {
    if (param_2 == (longlong *)0x0) {
      if (param_1[3] == 0) {
        return DAT_14c9647c8;
      }
      uVar1 = param_1[2];
      if ((int)uVar1 < 0) {
        return DAT_14c9647c8;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return DAT_14c9647c8;
      }
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) + DAT_14c9647c8[uVar1 >> 0x10];
      if (lVar5 == 0) {
        return DAT_14c9647c8;
      }
      if (*(uint *)(lVar5 + 0x10) != param_1[3]) {
        return DAT_14c9647c8;
      }
      return (longlong *)(ulonglong)*(uint *)(lVar5 + 8);
    }
    uVar3 = FUN_140840456();
    plVar6 = (longlong *)FUN_144718840(param_2,uVar3);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5 + 0x1bd0);
    }
  }
  uVar1 = param_1[3];
  plVar6 = (longlong *)(ulonglong)uVar1;
  if (((uVar1 != 0) && (uVar2 = param_1[2], -1 < (int)uVar2)) &&
     (((int)uVar2 < DAT_14c9647dc &&
      (((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) + DAT_14c9647c8[uVar2 >> 0x10], lVar5 != 0 &&
        (*(uint *)(lVar5 + 0x10) == uVar1)) &&
       (bVar7 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0,
       plVar6 = (longlong *)(ulonglong)CONCAT31((int3)(*(uint *)(lVar5 + 8) >> 8),bVar7),
       bVar7 && param_2 != (longlong *)0x0)))))) {
    uVar3 = FUN_140e1fe36();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
    plVar6 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140e1fe36();
      plVar6 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar6 != (longlong *)0x0 && plVar4 != plVar6) {
                    /* WARNING: Could not recover jumptable at 0x000144185044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6);
        return plVar6;
      }
    }
  }
  return plVar6;
}



// FUNCTION 144185082 FUN_144185082 body=24 status=ok
// SIG undefined FUN_144185082(void)

longlong FUN_144185082(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b977900;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return param_2 + 0x18;
}



// FUNCTION 1441850a0 FUN_1441850a0 body=12 status=ok
// SIG undefined FUN_1441850a0(void)

void FUN_1441850a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441850a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441850ac FUN_1441850ac body=29 status=ok
// SIG undefined FUN_1441850ac(void)

undefined8 FUN_1441850ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441850ca FUN_1441850ca body=83 status=ok
// SIG undefined FUN_1441850ca(void)

undefined8 * FUN_1441850ca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b977920;
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 14418529c FUN_14418529c body=134 status=ok
// SIG undefined FUN_14418529c(void)

void FUN_14418529c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 144185322 FUN_144185322 body=134 status=ok
// SIG undefined FUN_144185322(void)

void FUN_144185322(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 1441853a8 FUN_1441853a8 body=172 status=ok
// SIG undefined FUN_1441853a8(void)

void FUN_1441853a8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b977920;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144185444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144185454 FUN_144185454 body=66 status=ok
// SIG undefined FUN_144185454(void)

void FUN_144185454(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441855b0(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144185498 FUN_144185498 body=279 status=ok
// SIG undefined FUN_144185498(void)

undefined8 FUN_144185498(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441855a9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441855a9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441855a9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14418555d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441855b0(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_14418555d;
    }
  }
  uVar6 = 0;
LAB_14418555d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441855b0 FUN_1441855b0 body=575 status=ok
// SIG undefined FUN_1441855b0(void)

void FUN_1441855b0(uint *param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  uint local_68;
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
  pcVar2 = (code *)*param_2;
  if ((((pcVar2 != (code *)0x0) && (param_1[1] != 0)) && (uVar1 = *param_1, -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_1[1])) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      if (param_1[7] != 0) {
        uVar1 = param_1[6];
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar3 != (longlong *)0x0) &&
             (((*(uint *)(plVar3 + 2) == param_1[7] && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0))
              && (*plVar3 != 0)))) {
            local_70 = CONCAT31(local_70._1_3_,1);
            local_78 = CONCAT31(local_78._1_3_,1);
            local_68 = local_68 & 0xffffff00;
            FUN_140e1fd56(pcVar2,*plVar3,*(undefined8 *)(param_1 + 8),
                          CONCAT71((int7)((ulonglong)plVar5 >> 8),1));
          }
        }
      }
      if ((*(byte *)(*(longlong *)(param_1 + 2) + 0x78) & 8) != 0) {
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
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(pcVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pcVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          FUN_148cce140(pcVar2,lVar4 + 0x1bd0,1);
        }
      }
      local_28 = pcVar2;
      FUN_1447cd2ec(lVar4 + 0x1b28);
      if ((*(byte *)(*(longlong *)(param_1 + 2) + 0x78) & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144185806 FUN_144185806 body=29 status=ok
// SIG undefined FUN_144185806(void)

undefined8 FUN_144185806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


