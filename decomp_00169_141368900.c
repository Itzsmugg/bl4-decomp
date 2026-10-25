// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141368900 FUN_141368900 body=883 status=ok
// SIG undefined FUN_141368900(void)

void FUN_141368900(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_98 [40];
  int local_70;
  uint local_6c;
  ulonglong local_68;
  uint *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141368656(param_1[1] + 0x10,param_1 + 2);
  *(undefined4 *)(param_1[1] + 0x20) = *(undefined4 *)((longlong)param_1 + 0x74);
  iVar14 = (int)param_1[5] - *(int *)((longlong)param_1 + 0x54);
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (*(int *)(param_1[1] + 0xc) < iVar14) {
    FUN_14898d9b2();
  }
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = *(longlong **)(*param_1 + 0x28);
  }
  lVar9 = (**(code **)(*plVar13 + 8))();
  lVar18 = param_1[1];
  if (lVar9 == 0) {
    *(undefined4 *)(lVar18 + 0x34) = 0;
    iVar14 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(lVar18 + 0x34) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar14 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar14 = *(int *)(lVar9 + 0x10);
      bVar21 = iVar14 == 0;
      if (bVar21) {
        *(int *)(lVar9 + 0x10) = iVar15;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar14 = iVar15;
      }
    }
  }
  *(int *)(lVar18 + 0x38) = iVar14;
  uVar3 = *(uint *)(param_1 + 9);
  if (uVar3 == 0) {
    uVar16 = 1;
    uVar19 = 0;
    iVar14 = 0;
    uVar8 = 0;
  }
  else {
    puVar10 = (uint *)param_1[8];
    if ((uint *)param_1[8] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 6);
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar14 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar14 = uVar3 - 1;
      }
      uVar19 = 0;
      uVar16 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar16 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar19) goto LAB_141368a3c;
        iVar14 = iVar14 + 0x20;
        uVar8 = puVar10[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar19 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar16 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar8 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar8) {
      uVar8 = uVar3;
    }
  }
  if (uVar8 != uVar3) {
    uVar17 = 0xffffffff;
    local_68 = (ulonglong)uVar3;
    local_60 = (uint *)(param_1 + 6);
    do {
      plVar13 = (longlong *)param_1[1];
      lVar18 = param_1[4];
      local_70 = iVar14;
      local_6c = uVar17;
      FUN_148987720(*(undefined8 *)(lVar18 + 0x30 + (longlong)(int)uVar8 * 0x58),&local_58,*param_1)
      ;
      lVar9 = param_1[1];
      iVar14 = (int)plVar13[1];
      *(uint *)(plVar13 + 1) = iVar14 + 1U;
      if (*(uint *)((longlong)plVar13 + 0xc) < iVar14 + 1U) {
        FUN_14898da12(plVar13,iVar14);
      }
      plVar7 = local_50;
      lVar18 = lVar18 + (longlong)(int)uVar8 * 0x58;
      lVar6 = *plVar13;
      lVar20 = (longlong)iVar14 * 0x20;
      uVar4 = *(undefined4 *)(lVar18 + 0x28);
      uVar5 = *(undefined4 *)(lVar18 + 0x48);
      *(longlong *)(lVar6 + lVar20) = lVar9;
      *(undefined4 *)(lVar6 + 8 + lVar20) = uVar4;
      *(undefined4 *)(lVar6 + 0xc + lVar20) = uVar5;
      *(undefined8 *)(lVar6 + 0x10 + lVar20) = local_58;
      *(longlong **)(lVar6 + 0x18 + lVar20) = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_50 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_50)(local_50);
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
      uVar17 = local_6c & ~(uint)uVar16;
      puVar10 = (uint *)param_1[8];
      if ((uint *)param_1[8] == (uint *)0x0) {
        puVar10 = local_60;
      }
      uVar3 = *(uint *)(param_1 + 9);
      iVar15 = (int)uVar19;
      lVar18 = (longlong)iVar15;
      uVar8 = puVar10[lVar18] & uVar17;
      iVar14 = local_70;
      if (uVar8 == 0) {
        iVar11 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar11 = uVar3 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = local_70 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar15 < iVar11) {
          lVar9 = 0;
          do {
            uVar8 = puVar10[lVar18 + lVar9 + 1];
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar15 + (int)lVar9 + 1);
              uVar17 = 0xffffffff;
              goto LAB_141368ba8;
            }
            iVar14 = iVar14 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar12 - lVar18 != lVar9);
          uVar17 = 0xffffffff;
          iVar15 = iVar12;
        }
        uVar19 = (ulonglong)(iVar15 + 1);
        uVar8 = uVar3;
      }
      else {
LAB_141368ba8:
        uVar16 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar16 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar8 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar8) {
          uVar8 = uVar3;
        }
      }
    } while (uVar8 != (uint)local_68);
  }
LAB_141368a3c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141368c74 FUN_141368c74 body=40 status=ok
// SIG undefined FUN_141368c74(void)

undefined8 FUN_141368c74(undefined8 param_1,int param_2)

{
  FUN_141368c9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141368c9c FUN_141368c9c body=1231 status=ok
// SIG undefined FUN_141368c9c(void)

void FUN_141368c9c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b746cc0;
  param_1[0x72] = &PTR_FUN_14b747400;
  param_1[0x73] = &PTR_FUN_14b747470;
  param_1[0x74] = &PTR_FUN_14b7474e0;
  param_1[0x75] = &PTR_FUN_14b747510;
  param_1[0x76] = &PTR_FUN_14b747540;
  param_1[0x77] = &PTR_FUN_14b747570;
  param_1[0x78] = &PTR_FUN_14b7475b0;
  param_1[0x79] = &PTR_FUN_14b7475d0;
  param_1[0x7a] = &PTR_FUN_14b747600;
  param_1[0x7b] = &PTR_FUN_14b7476d0;
  param_1[0x7c] = &PTR_FUN_14b747720;
  param_1[0x7d] = &PTR_FUN_14b7477e0;
  param_1[0x7e] = &PTR_FUN_14b747800;
  param_1[0x7f] = &PTR_FUN_14b747880;
  param_1[0x80] = &PTR_FUN_14b7478a0;
  param_1[0x81] = &PTR_FUN_14b7478b0;
  param_1[0x82] = &PTR_FUN_14b7478f0;
  param_1[0x83] = &PTR_FUN_14b747960;
  param_1[0x84] = &PTR_FUN_14b747990;
  param_1[0x85] = &PTR_FUN_14b747a30;
  param_1[0x86] = &PTR_FUN_14b747a50;
  param_1[0x87] = &PTR_FUN_14b747a70;
  param_1[0x2a7] = &PTR_FUN_14b747a90;
  param_1[0x2a8] = &PTR_FUN_14b747ad0;
  param_1[0x2a9] = &PTR_FUN_14b747b00;
  param_1[0x2aa] = &PTR_FUN_14b747b20;
  param_1[0x2ab] = &PTR_FUN_14b747b60;
  param_1[0x2ac] = &PTR_FUN_14b747bb0;
  param_1[0x588] = &PTR_FUN_14b747bd0;
  param_1[0x589] = &PTR_FUN_14b747c10;
  param_1[0x58a] = &PTR_FUN_14b747c30;
  param_1[0x58b] = &PTR_FUN_14b747c80;
  param_1[0x58c] = &PTR_FUN_14b747cb0;
  param_1[0x58d] = &PTR_FUN_14b747cd0;
  FUN_140a3299c(param_1 + 0x5d5);
  param_1[0x5cd] = &PTR_FUN_14b695510;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x2e9c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x2e9c) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x2e9c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x5d2) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x5d2) + -1;
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
    *(undefined4 *)(param_1 + 0x5d2) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x2e84) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x2e84) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x2e84) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x5cf) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x5cf) + -1;
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
    *(undefined4 *)(param_1 + 0x5cf) = 0;
  }
  FUN_140368b56(param_1 + 0x5b2);
  param_1[0x5af] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x2d81) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0x5af);
    *(undefined1 *)((longlong)param_1 + 0x2d81) = 0;
  }
  FUN_14079057a(param_1 + 0x597);
  FUN_1406398aa(param_1 + 0x593,1);
  FUN_14136916c(param_1);
  return;
}



// FUNCTION 14136916c FUN_14136916c body=1231 status=ok
// SIG undefined FUN_14136916c(void)

void FUN_14136916c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b136e40;
  param_1[0x72] = &PTR_FUN_14b137570;
  param_1[0x73] = &PTR_FUN_14b1375e0;
  param_1[0x74] = &PTR_FUN_14b137650;
  param_1[0x75] = &PTR_FUN_14b137680;
  param_1[0x76] = &PTR_FUN_14b1376b0;
  param_1[0x77] = &PTR_FUN_14b1376e0;
  param_1[0x78] = &PTR_FUN_14b137720;
  param_1[0x79] = &PTR_FUN_14b137740;
  param_1[0x7a] = &PTR_FUN_14b137770;
  param_1[0x7b] = &PTR_FUN_14b137840;
  param_1[0x7c] = &PTR_FUN_14b137890;
  param_1[0x7d] = &PTR_FUN_14b137950;
  param_1[0x7e] = &PTR_FUN_14b137970;
  param_1[0x7f] = &PTR_FUN_14b1379f0;
  param_1[0x80] = &PTR_FUN_14b137a10;
  param_1[0x81] = &PTR_FUN_14b137a20;
  param_1[0x82] = &PTR_FUN_14b137a60;
  param_1[0x83] = &PTR_FUN_14b137ad0;
  param_1[0x84] = &PTR_FUN_14b137b00;
  param_1[0x85] = &PTR_FUN_14b137ba0;
  param_1[0x86] = &PTR_FUN_14b137bc0;
  param_1[0x87] = &PTR_FUN_14b137be0;
  param_1[0x2a7] = &PTR_FUN_14b137c00;
  param_1[0x2a8] = &PTR_FUN_14b137c40;
  param_1[0x2a9] = &PTR_FUN_14b137c70;
  param_1[0x2aa] = &PTR_FUN_14b137c90;
  param_1[0x2ab] = &PTR_FUN_14b137cd0;
  param_1[0x2ac] = &PTR_FUN_14b137d20;
  FUN_14063adfa(param_1 + 0x56b);
  FUN_14136963c(param_1 + 0x532);
  FUN_1409deebc(param_1[0x530],*(undefined4 *)(param_1 + 0x531));
  if (param_1[0x530] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x50e);
  FUN_140754d76(param_1[0x50c],*(undefined4 *)(param_1 + 0x50d));
  if (param_1[0x50c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x509],*(undefined4 *)(param_1 + 0x50a));
  if (param_1[0x509] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x507] != 0) {
    FUN_1400020a8();
  }
  FUN_140754d9e(param_1 + 0x3e4);
  FUN_140cbae8c(param_1 + 0x3c1);
  FUN_140cbb40e(param_1 + 0x39a);
  FUN_140cbb262(param_1 + 0x324);
  plVar3 = (longlong *)param_1[0x312];
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
  plVar3 = (longlong *)param_1[0x30c];
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
  if (param_1[0x2ea] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2c5],*(undefined4 *)(param_1 + 0x2c6));
  if (param_1[0x2c5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2c0],*(undefined4 *)(param_1 + 0x2c1));
  if (param_1[0x2c0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2be] != 0) {
    FUN_1400020a8();
  }
  if (param_1[700] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b9],*(undefined4 *)(param_1 + 0x2ba));
  if (param_1[0x2b9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b4],*(undefined4 *)(param_1 + 0x2b5));
  if (param_1[0x2b4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b2] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2af],*(undefined4 *)(param_1 + 0x2b0));
  if (param_1[0x2af] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2ad] != 0) {
    FUN_1400020a8();
  }
  FUN_140ce4cf6(param_1);
  return;
}



// FUNCTION 14136963c FUN_14136963c body=533 status=ok
// SIG undefined FUN_14136963c(void)

void FUN_14136963c(longlong param_1)

{
  FUN_143ccc516(param_1,1);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_143c34d56((longlong *)(param_1 + 0x168),0);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x158));
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_140e74610(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x78),0);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (0x80 < *(uint *)(param_1 + 0xa4)) {
    *(undefined4 *)(param_1 + 0xa4) = 0x80;
    FUN_1446efbd8(param_1 + 0x88,0);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x28),0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0x80 < *(uint *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = 0x80;
    FUN_1446efbd8(param_1 + 0x38,0);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 141369852 FUN_141369852 body=546 status=ok
// SIG undefined FUN_141369852(void)

undefined4 *
FUN_141369852(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141369b58(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  lVar14 = *plVar1;
  local_38[1] = lVar14;
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar9 = DAT_14c950c29;
  lVar14 = plVar1[1];
  local_38[2] = lVar14;
  if ((lVar14 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
    bVar9 = DAT_14c950c29;
  }
  lVar14 = plVar1[2];
  *(undefined4 *)((longlong)local_38 + 0x1b) = *(undefined4 *)((longlong)plVar1 + 0x13);
  *(int *)(local_38 + 3) = (int)lVar14;
  lVar14 = plVar1[3];
  local_38[4] = lVar14;
  if ((lVar14 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
  }
  lVar14 = plVar1[5];
  local_38[5] = plVar1[4];
  local_38[6] = lVar14;
  local_38[7] = plVar1[6];
  lVar14 = plVar1[7];
  local_38[8] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  lVar14 = plVar1[8];
  uVar3 = *(undefined4 *)((longlong)plVar1 + 0x44);
  lVar6 = plVar1[9];
  uVar4 = *(undefined4 *)((longlong)plVar1 + 0x4c);
  lVar7 = plVar1[10];
  uVar5 = *(undefined4 *)((longlong)plVar1 + 0x54);
  lVar8 = plVar1[0xb];
  *(undefined4 *)((longlong)local_38 + 0x54) = *(undefined4 *)((longlong)plVar1 + 0x4c);
  *(int *)(local_38 + 0xb) = (int)lVar7;
  *(undefined4 *)((longlong)local_38 + 0x5c) = uVar5;
  *(int *)(local_38 + 0xc) = (int)lVar8;
  *(int *)(local_38 + 9) = (int)lVar14;
  *(undefined4 *)((longlong)local_38 + 0x4c) = uVar3;
  *(int *)(local_38 + 10) = (int)lVar6;
  *(undefined4 *)((longlong)local_38 + 0x54) = uVar4;
  *(undefined4 *)(local_38 + 0xd) = 0xffffffff;
  local_44 = local_40[0];
  uVar2 = *local_38;
  uVar15 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar12 = (uint)uVar2 & 0xffff;
  uVar15 = ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar12 >> 4);
  local_58 = param_4;
  cVar10 = FUN_141369a76(param_1,uVar15,local_38);
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar12 < 4) {
      iVar13 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_38 + 0x6c) = uVar15;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0xd) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_141369d3a(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141369a76 FUN_141369a76 body=226 status=ok
// SIG undefined FUN_141369a76(void)

void FUN_141369a76(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar5 * 0x70);
        if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x70) == *param_3) {
          plVar4 = *(longlong **)((longlong)_Dst + 0x40);
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
          memmove(_Dst,param_3,0x68);
          FUN_146968b8c(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          break;
        }
        iVar5 = *(int *)((longlong)_Dst + 0x68);
        uVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_141369aeb;
    }
  }
  uVar3 = 0;
LAB_141369aeb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 141369b58 FUN_141369b58 body=481 status=ok
// SIG undefined FUN_141369b58(void)

int * FUN_141369b58(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x70);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 141369d3a FUN_141369d3a body=607 status=ok
// SIG undefined FUN_141369d3a(void)

void FUN_141369d3a(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x70;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x6c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x68 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_141369f33;
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
LAB_141369f33:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141369f9a FUN_141369f9a body=116 status=ok
// SIG undefined FUN_141369f9a(void)

undefined4 FUN_141369f9a(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined8 local_220;
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_220 = 0;
  local_228 = 1;
  uVar1 = FUN_140751ea8(param_1,param_2,local_218,0x100);
  if ((char)uVar1 != '\0') {
    iVar2 = _wtoi(local_218);
    *param_3 = iVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136a010 FUN_14136a010 body=170 status=ok
// SIG undefined FUN_14136a010(void)

void FUN_14136a010(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x450) == '\x01') {
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_14480f766(&DAT_14c86a9a8);
    }
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + 0x80 + lVar1) != 0) {
        FUN_145932896();
      }
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != 0x20);
    (*(code *)(&PTR_FUN_14a5b3c40)[*(byte *)(param_1 + 0x60)])(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x60) = 0;
    FUN_145a1b892(param_1 + 0x2e8);
    FUN_145a1b892(param_1 + 0x388);
    FUN_145a1b892(param_1 + 0x338);
    FUN_145a1b892(param_1 + 0x3d8);
    *(undefined1 *)(param_1 + 0x450) = 0;
  }
  return;
}



// FUNCTION 14136a0ba FUN_14136a0ba body=54 status=ok
// SIG undefined FUN_14136a0ba(void)

void FUN_14136a0ba(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14136a0f0 FUN_14136a0f0 body=384 status=ok
// SIG undefined FUN_14136a0f0(void)

void FUN_14136a0f0(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 14136a272 FUN_14136a272 body=171 status=ok
// SIG undefined FUN_14136a272(void)

void FUN_14136a272(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_14136a31e();
  if (lVar1 != 0) {
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,param_3);
    local_58 = 1;
    FUN_14136a6f6(lVar1,param_2,&local_98,param_4);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136a31e FUN_14136a31e body=119 status=ok
// SIG undefined FUN_14136a31e(void)

void * FUN_14136a31e(longlong param_1)

{
  longlong lVar1;
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x41e0);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x110);
    memset(_Dst,0,0x110);
    FUN_14593398e(_Dst);
    lVar1 = *(longlong *)(param_1 + 0x41e0);
    *(void **)(param_1 + 0x41e0) = _Dst;
    if (lVar1 != 0) {
      FUN_145e088e8(lVar1);
      FUN_1400020a8(lVar1);
      _Dst = *(void **)(param_1 + 0x41e0);
    }
  }
  return _Dst;
}



// FUNCTION 14136a3ac FUN_14136a3ac body=357 status=ok
// SIG undefined FUN_14136a3ac(void)

ulonglong FUN_14136a3ac(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  if (((((char)param_1[3] == '\0') && (*param_1 != 0)) &&
      (uVar5 = *(ulonglong *)(&DAT_00006850 + *param_1), uVar5 != 0)) &&
     ((*(char *)(uVar5 + 0x11f0) == '\0' && (*(char *)(uVar5 + 0x1b70) == '\0')))) {
    uVar6 = FUN_14075fe08(uVar5,0x40000);
    cVar2 = FUN_14075fa88(uVar5 + 0x42b8,uVar6);
    if (cVar2 != '\0') {
      lVar4 = (**(code **)(*(longlong *)(*param_1 + 0x3b48) + 0x28))(*param_1 + 0x3b48);
      if ((lVar4 == 0) ||
         (lVar4 = (**(code **)(*(longlong *)(*param_1 + 0x3b48) + 0x28))(*param_1 + 0x3b48),
         *(char *)(lVar4 + 0x21) != '\x01')) {
        cVar2 = '\0';
      }
      else {
        cVar2 = (**(code **)(*(longlong *)(*param_1 + 0x3b48) + 0x60))(*param_1 + 0x3b48);
      }
      if (((*param_1 != 0) &&
          (plVar1 = *(longlong **)(&DAT_00006850 + *param_1), plVar1 != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*plVar1 + 0xe78))(plVar1,0x40000), cVar3 != '\0')) {
        if ((*(longlong *)(&DAT_00001ce8 + uVar5) == 0) ||
           (*(byte *)(*(longlong *)(&DAT_00001ce8 + uVar5) + 0x178) < 2)) {
          if (*(char *)(uVar5 + 0x1ee9) != '\0') goto LAB_14136a4f7;
        }
        else {
          plVar1 = *(longlong **)(uVar5 + 0x1eb8);
          if (plVar1 != (longlong *)0x0) {
            uVar5 = 0;
            cVar3 = (**(code **)(*plVar1 + 0x70))(plVar1,0);
            if (cVar3 != '\0') goto LAB_14136a4f9;
          }
        }
        lVar4 = *param_1;
        if (*(longlong *)(&DAT_00006850 + lVar4) != 0) {
          cVar3 = FUN_140ed89ca();
          if (cVar3 != '\0') goto LAB_14136a4f7;
          lVar4 = *param_1;
        }
        if (cVar2 == '\0' && *(char *)(lVar4 + 0x73eb) != '\x01') {
          uVar5 = CONCAT71((int7)(uVar5 >> 8),param_1[0x59] == 0);
          goto LAB_14136a4f9;
        }
      }
    }
  }
LAB_14136a4f7:
  uVar5 = 0;
LAB_14136a4f9:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14136a512 FUN_14136a512 body=229 status=ok
// SIG undefined FUN_14136a512(void)

void FUN_14136a512(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)param_2[1], plVar2 != (longlong *)0x0)) {
    if (*(code **)(*plVar2 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar2 = plVar2 + 0x143;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if ((int)plVar2[6] != *(int *)((longlong)plVar2 + 0x5c)) {
      plVar4 = plVar2 + 0xc;
      if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar2[0xd];
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      (ulonglong)((int)plVar2[0xe] - 1U & *(uint *)(param_2 + 2)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(plVar2[5] + (longlong)iVar3 * 0xe0) == *(uint *)(param_2 + 2)) {
            cVar1 = FUN_1412c32aa(param_2);
            if (cVar1 == '\0') {
              return;
            }
            if (*param_1 == 0) {
              return;
            }
            if (*(longlong *)(&DAT_00006850 + *param_1) == 0) {
              return;
            }
            if (*(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x110) == 0) {
              return;
            }
            FUN_1441614f6(param_1,param_2,param_2 + 3);
            return;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0xe0 + plVar2[5] + 0xd0);
        } while (iVar3 != -1);
      }
    }
  }
  return;
}



// FUNCTION 14136a5f7 FUN_14136a5f7 body=253 status=ok
// SIG undefined FUN_14136a5f7(void)

void FUN_14136a5f7(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [168];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = *param_3;
  local_f8 = param_2;
  if (DAT_14c950c29 == 1) {
    if (local_e8 == 0) {
      local_e8 = 0;
    }
    else {
      FUN_1456cec3c();
      local_e8 = *param_3;
    }
  }
  local_e0 = param_3[1];
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_e0 == 0) {
      local_e0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_e0 = param_3[1];
    }
  }
  bVar1 = DAT_14c950c29;
  memcpy(local_d8,param_3 + 2,0xa4);
  local_30 = param_3[0x17];
  if ((bVar1 & 1) != 0) {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
      local_30 = param_3[0x17];
    }
  }
  FUN_1447cd2ec(param_1);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136a6f6 FUN_14136a6f6 body=1184 status=ok
// SIG undefined FUN_14136a6f6(void)

void FUN_14136a6f6(longlong *param_1,longlong *param_2,longlong *param_3,float param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  int local_178;
  float fStack_174;
  longlong local_168 [8];
  byte local_128;
  undefined8 local_118;
  longlong local_108 [8];
  byte local_c8;
  longlong local_b8 [11];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(int *)(param_1 + 0x17) = (int)param_1[0x17] + 1;
  lVar7 = FUN_1412c2f92();
  if (lVar7 != 0) {
    FUN_1412c3038(param_1,*param_2);
  }
  if (param_4 <= 0.0) {
    *param_2 = 0;
    goto LAB_14136aa42;
  }
  local_178._0_1_ = 1;
  fStack_174 = 0.0;
  local_168[0] = 0;
  local_128 = 0;
  local_118 = 0;
  if (local_168 != param_3) {
    local_c8 = *(byte *)(param_3 + 8);
    (*(code *)(&PTR_LAB_14aadfe40)[local_c8])(local_108,param_3);
    plVar10 = local_108;
    plVar11 = local_b8;
    for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *plVar11 = *plVar10;
      plVar10 = plVar10 + 1;
      plVar11 = plVar11 + 1;
    }
    plVar10 = local_168;
    plVar11 = local_108;
    for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *plVar11 = *plVar10;
      plVar10 = plVar10 + 1;
      plVar11 = plVar11 + 1;
    }
    plVar10 = local_b8;
    plVar11 = local_168;
    for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *plVar11 = *plVar10;
      plVar10 = plVar10 + 1;
      plVar11 = plVar11 + 1;
    }
    (*(code *)(&PTR_LAB_14a1c87a0)[local_c8])(local_108);
  }
  local_178 = (uint)local_178._1_3_ << 8;
  LOCK();
  UNLOCK();
  lVar15 = DAT_14c75f6d8 + 1;
  lVar7 = DAT_14c75f6d8 + 1;
  if (lVar15 == 0) {
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c75f6d8 + 2;
    lVar7 = DAT_14c75f6d8 + 2;
  }
  DAT_14c75f6d8 = lVar7;
  fStack_174 = param_4;
  local_b8[0] = lVar15;
  puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar8 = CONCAT44(fStack_174,local_178);
  *(byte *)(puVar8 + 10) = local_128;
  (*(code *)(&PTR_LAB_14aadfe40)[local_128])(puVar8 + 2,local_168);
  puVar8[0xc] = local_118;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_14482b872(param_1,iVar14);
    }
    lVar7 = (longlong)iVar14;
    iVar6 = FUN_144a54ea4(param_1 + 2,1);
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    iVar5 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    bVar2 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar7 = (longlong)iVar14;
    iVar6 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar6 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar6 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  iVar6 = 1;
  plVar10 = (longlong *)(*param_1 + lVar7 * 0x18);
  *plVar10 = lVar15;
  plVar10[1] = (longlong)puVar8;
  *(undefined4 *)(plVar10 + 2) = 0xffffffff;
  uVar13 = (int)((ulonglong)lVar15 >> 0x20) * 0x17 + (int)lVar15;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar12) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4);
    if (iVar5 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar11 == lVar15) {
          lVar7 = plVar11[1];
          if (lVar7 != 0) {
            local_180 = lVar7;
            (*(code *)(&PTR_LAB_14a1c87a0)[*(byte *)(lVar7 + 0x50)])(lVar7 + 0x10);
            FUN_1400020a8(local_180);
          }
          uVar3 = *(undefined4 *)((longlong)plVar10 + 4);
          lVar7 = plVar10[1];
          uVar4 = *(undefined4 *)((longlong)plVar10 + 0xc);
          *(int *)plVar11 = (int)*plVar10;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar3;
          *(int *)(plVar11 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar4;
          FUN_1412c3220(param_1,iVar14,1);
          goto LAB_14136a9b5;
        }
        iVar5 = (int)plVar11[2];
      } while (iVar5 != -1);
    }
  }
  if (3 < uVar12) {
    uVar9 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar12 < 1) || (iVar6 <= (int)param_1[9])) {
    uVar12 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)plVar10 + 0x14) = uVar12;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar10 + 2) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_14136afa8(param_1);
  }
LAB_14136a9b5:
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
LAB_14136ab03:
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4);
    if (iVar14 == -1) goto LAB_14136ab03;
    do {
      plVar10 = (longlong *)(*param_1 + (longlong)iVar14 * 0x18);
      if (*plVar10 == lVar15) break;
      iVar14 = (int)plVar10[2];
      plVar10 = (longlong *)0x0;
    } while (iVar14 != -1);
  }
  *(longlong *)(plVar10[1] + 0x60) = lVar15;
  FUN_1411f09e0(param_1 + 0xc,local_108,local_b8,0);
  *param_2 = local_b8[0];
  (*(code *)(&PTR_LAB_14a1c87a0)[local_128])(local_168);
LAB_14136aa42:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14136ab98 FUN_14136ab98 body=54 status=ok
// SIG undefined FUN_14136ab98(void)

float FUN_14136ab98(longlong param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x19) == '\x02') {
    fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
  }
  else if (*(char *)(param_1 + 0x19) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x24);
  }
  return fVar1 + *(float *)(param_1 + 0x30);
}



// FUNCTION 14136abce FUN_14136abce body=754 status=ok
// SIG undefined FUN_14136abce(void)

longlong * FUN_14136abce(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined6 local_64;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar6 = FUN_14063d1f6();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = FUN_1405b04b6();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && ((longlong)(int)param_2[0x23] != 0)))) {
        plVar11 = (longlong *)param_2[0x22];
        plVar2 = plVar11 + (longlong)(int)param_2[0x23] * 5;
        do {
          lVar6 = *plVar11;
          if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x90) != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x88);
            lVar6 = (longlong)*(int *)(lVar6 + 0x90) * 0xb8;
            do {
              lVar10 = *(longlong *)(lVar9 + 0x48);
              if (lVar10 != 0) {
                lVar8 = FUN_14136aec2();
                lVar10 = *(longlong *)(lVar10 + 0x10);
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  iVar3 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                    FUN_140ed4548(param_1,iVar3);
                  }
                  FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar9);
                }
              }
              lVar9 = lVar9 + 0xb8;
              lVar6 = lVar6 + -0xb8;
            } while (lVar6 != 0);
          }
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar2);
      }
    }
    else {
      local_f0 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_b8 = 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_64 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f4 = 0x7f7fffff;
      local_f8 = 0;
      (**(code **)(*param_2 + 0x2c8))(param_2,&local_f8,&local_f4,&local_f0);
      uVar5 = uStack_e0;
      lVar6 = local_e8;
      lVar9 = (longlong)(int)uStack_e0;
      local_e8 = 0;
      uStack_e0 = 0;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          if (((*(longlong *)(lVar6 + 0x20 + lVar10) != 0) &&
              (lVar8 = *(longlong *)(lVar6 + 0x10 + lVar10), lVar8 != 0)) &&
             (lVar4 = *(longlong *)(lVar8 + 0x48), lVar4 != 0)) {
            lVar7 = FUN_14136aec2();
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              iVar3 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                FUN_140ed4548(param_1,iVar3);
              }
              FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar8);
            }
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar9 * 0x30 != lVar10);
      }
      FUN_1448262fc(lVar6,uVar5 & 0xffffffff);
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
      }
      FUN_1448262fc(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14136aec2 FUN_14136aec2 body=228 status=ok
// SIG undefined FUN_14136aec2(void)

longlong FUN_14136aec2(void)

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
  if (DAT_14cb9f1c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_148b7d2bd;
    local_40 = FUN_1418c2acc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"AnimNotify_GrappleLineExtend",&DAT_14cb9f1c0,&DAT_148b7d2bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f1c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136afa8 FUN_14136afa8 body=456 status=ok
// SIG undefined FUN_14136afa8(void)

void FUN_14136afa8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14136b172 FUN_14136b172 body=228 status=ok
// SIG undefined FUN_14136b172(void)

longlong FUN_14136b172(void)

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
  if (DAT_14cb61370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1486d8e7b;
    local_40 = &LAB_1464f277d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x4e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMovingPlatformControllerActor",&DAT_14cb61370,
                  FUN_1464f2756);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136b258 FUN_14136b258 body=324 status=ok
// SIG undefined FUN_14136b258(void)

longlong * FUN_14136b258(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400b22c2(&local_28,"production");
  if ((longlong *)&local_28 == param_1) {
    if (CONCAT44(uStack_24,local_28) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_28;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 1) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_38 = 0;
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"sparkenv=",param_1,1);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)FUN_140a68038(0);
    if (plVar3 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 400))(plVar3);
      if (iVar2 == 0) {
        pcVar4 = "stable";
      }
      else if (iVar2 == 1) {
        pcVar4 = "cert";
      }
      else {
        if (iVar2 != 2) goto LAB_14136b35f;
        pcVar4 = "production";
      }
      FUN_1400b22c2(&local_28,pcVar4);
      if ((longlong *)&local_28 == param_1) {
        if (CONCAT44(uStack_24,local_28) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = CONCAT44(uStack_24,local_28);
        *(undefined4 *)(param_1 + 1) = uStack_20;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
      }
    }
  }
LAB_14136b35f:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136b39e FUN_14136b39e body=181 status=ok
// SIG undefined FUN_14136b39e(void)

void FUN_14136b39e(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3dcccccd;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x10101;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd5) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0xfb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x103) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x10b) = 1;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return;
}



// FUNCTION 14136b474 FUN_14136b474 body=451 status=ok
// SIG undefined FUN_14136b474(void)

undefined8 * FUN_14136b474(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14ad88970;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = param_1 + 4;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 7) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_140fd29e4(*local_78 + (longlong)iStack_5c * 0x1d0 + 0x10);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14136b638(plVar1);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14136b638 FUN_14136b638 body=48 status=ok
// SIG undefined FUN_14136b638(void)

void FUN_14136b638(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1d0,0x10);
  }
  return;
}



// FUNCTION 14136b668 FUN_14136b668 body=38 status=ok
// SIG undefined FUN_14136b668(void)

void FUN_14136b668(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b76ada0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14136b68e FUN_14136b68e body=1163 status=ok
// SIG undefined FUN_14136b68e(void)

void FUN_14136b68e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14136bb1a(local_20,CONCAT44(uStack_24,uStack_28),local_2c);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136bb1a FUN_14136bb1a body=128 status=ok
// SIG undefined FUN_14136bb1a(void)

undefined8 FUN_14136bb1a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14136bb9a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14136bb9a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar1 = FUN_14136bc80(uVar1,param_2,param_3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14136bb9a FUN_14136bb9a body=228 status=ok
// SIG undefined FUN_14136bb9a(void)

longlong FUN_14136bb9a(void)

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
  if (DAT_14cb9f0a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148b7d299;
    local_40 = FUN_1465a2b94;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"AITargetLockUser",&DAT_14cb9f0a0,&DAT_148b7d298);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f0a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136bc80 FUN_14136bc80 body=1766 status=ok
// SIG undefined FUN_14136bc80(void)

undefined8 FUN_14136bc80(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined7 uVar7;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  code *local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar7 = (undefined7)(local_60 >> 8);
  bVar10 = *(byte *)(param_1 + 0x58) & 3;
  if (bVar10 != 1) goto LAB_14136c099;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 6;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  lVar4 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x48));
  *(float *)(param_1 + 0x5c) = (float)*(double *)(lVar4 + 0x6d0);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    if (DAT_14cb56270 == 0) {
      local_f0 = &local_b8;
      local_b8 = FUN_1449e2820;
      local_e0 = FUN_14081d0ea;
      local_e8 = FUN_1427b09ee;
      local_f8 = &LAB_148630fef;
      local_100 = FUN_1464b6a91;
      local_108 = L"Engine";
      local_110 = 0;
      local_118 = 0x10004001;
      local_120 = 8;
      local_128 = (undefined2 *)CONCAT44(local_128._4_4_,0x28);
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar5 = (longlong *)FUN_144718840(lVar4,DAT_14cb56270);
    if ((plVar5 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar5 + 0x20))(plVar5), lVar4 != 0))
    {
      FUN_146620238(lVar4 + 400,&local_b8,param_1);
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (lVar4 != 0) {
      if (DAT_14cba8288 == 0) {
        local_f0 = &local_b8;
        local_b8 = FUN_141864c34;
        local_e0 = FUN_14081d0ea;
        local_e8 = (code *)&LAB_1464cee30;
        local_f8 = &LAB_148bfac22;
        local_100 = (code *)&LAB_140f21842;
        local_108 = L"Game";
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = (undefined2 *)CONCAT44(local_128._4_4_,0x9cd0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        FUN_14579832e(lVar4 + 0x7d90,&local_b8,param_1);
      }
    }
  }
  uVar6 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x48));
  lVar4 = *(longlong *)(param_1 + 0x48);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar2 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_d0[2] = lVar8;
  *local_d0 = &PTR_FUN_14b961740;
  local_d0[3] = 0;
  iVar9 = 0;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(local_d0 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar9 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar9 = *(int *)(lVar4 + 0x10);
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(lVar4 + 0x10) = iVar11;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar9 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar9;
  puVar2[4] = param_1;
  local_b8 = (code *)0x0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d0);
  local_78 = 1;
  local_c0[0] = 1;
  local_bc = 0xbf800000;
  local_128 = local_c0;
  FUN_1406f4044(uVar6,param_1 + 0x70,&local_b8,0x3f800000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_c8 == 0) {
LAB_14136beeb:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_14136beeb;
  }
  uVar6 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x48));
  lVar4 = *(longlong *)(param_1 + 0x48);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar2 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_d0[2] = lVar8;
  *local_d0 = &PTR_FUN_14b9617b0;
  local_d0[3] = 0;
  iVar9 = 0;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(local_d0 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar9 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar9 = *(int *)(lVar4 + 0x10);
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(lVar4 + 0x10) = iVar11;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar9 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar9;
  puVar2[4] = param_1;
  local_b8 = (code *)0x0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d0);
  local_78 = 1;
  local_c0[0] = 0;
  local_bc = 0xbf800000;
  local_128 = local_c0;
  FUN_1406f4044(uVar6,param_1 + 0x68,&local_b8,param_3);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_c8 == 0) {
LAB_14136c063:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_14136c063;
  }
  lVar4 = *(longlong *)(param_1 + 0x78);
  if (lVar4 != 0) {
    uVar6 = FUN_1412dd104();
    plVar5 = (longlong *)FUN_144718840(lVar4,uVar6);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_1458b8f3c(uVar6,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
    }
  }
  FUN_14136f2c8(param_1,1);
  uVar7 = extraout_var;
LAB_14136c099:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar7,bVar10 == 1);
}



// FUNCTION 14136c368 FUN_14136c368 body=529 status=ok
// SIG undefined FUN_14136c368(void)

void FUN_14136c368(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
      ((lVar5 = *(longlong *)(param_1 + 0xb0), lVar5 != 0 ||
       (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)))) &&
     ((((*(byte *)(lVar5 + 0x152) == 1 || (*(byte *)(lVar5 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar5 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar5 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    if (iVar3 < (int)(uint)bVar1) {
      return;
    }
  }
  if (((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
     ((*(byte *)(param_1 + 0x1f8) & 0x20) != 0)) {
    if ((((*(byte *)(param_1 + 0x1fc) != 0) && (DAT_14c76152c != '\0')) &&
        (((lVar5 = *(longlong *)(param_1 + 0xb0), lVar5 != 0 ||
          (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) &&
         ((*(byte *)(lVar5 + 0x152) == 1 || (*(byte *)(lVar5 + 0x152) - 5 < 2)))))) &&
       ((*(longlong *)(lVar5 + 0x178) != 0 && (DAT_14c76152c == '\x01')))) {
      bVar1 = *(byte *)(param_1 + 0x1fc);
      iVar3 = *(int *)(*(longlong *)(lVar5 + 0x178) + 0x3e4);
      if (iVar3 < 0) {
        iVar3 = FUN_141348de4();
      }
      if (iVar3 < (int)(uint)bVar1) {
        return;
      }
    }
    if (((((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
         (cVar2 = FUN_140041326(param_1), cVar2 != '\0')) && ((*(byte *)(param_1 + 0x9c) & 1) != 0))
       && ((*(longlong *)(param_1 + 0x20) == 0 ||
           ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) == 0)))) {
      uVar4 = FUN_14001cc68(0xa0,0x10);
      FUN_14136c57a(uVar4,param_1);
      *(undefined8 *)(param_1 + 0x2e0) = uVar4;
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x2e0);
      }
                    /* WARNING: Could not recover jumptable at 0x00014136c45a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar5 + 0x218) + 0x298))(*(longlong **)(lVar5 + 0x218),uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14136c57a FUN_14136c57a body=272 status=ok
// SIG undefined FUN_14136c57a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14136c57a(undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [32];
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)(param_2 + 0x2dc) ^ 0x7f;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x2b8);
  uVar2 = *(undefined8 *)(param_2 + 0x2c4);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)(param_2 + 700);
  *(undefined8 *)((longlong)param_1 + 0x84) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x2d4);
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x2cc);
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar2;
  puVar4 = (undefined8 *)(param_2 + 0x240);
  puVar5 = param_1;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar8 = *(undefined1 (*) [16])(param_1 + 8) & _DAT_149931180;
  auVar1._16_16_ = _DAT_149931180 & *(undefined1 (*) [16])(param_1 + 10);
  auVar1._0_16_ = auVar8;
  auVar9._0_8_ = SUB168(_DAT_149931180 & *(undefined1 (*) [16])(param_1 + 10),0);
  auVar9._8_8_ = auVar8._0_8_;
  auVar8 = maxpd(auVar8,auVar1._8_16_);
  auVar9 = maxpd(auVar8,auVar9);
  fVar6 = (float)auVar9._0_8_ * 500.0;
  dVar7 = (double)fVar6;
  param_1[8] = dVar7;
  param_1[9] = dVar7;
  param_1[10] = dVar7;
  param_1[0xb] = 0;
  *(float *)(param_1 + 0xe) = fVar6;
  return;
}



// FUNCTION 14136c68a FUN_14136c68a body=366 status=ok
// SIG undefined FUN_14136c68a(void)

void FUN_14136c68a(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar2 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
    }
    local_30 = CONCAT44(uVar2,uVar3);
  }
  uVar3 = uVar2 >> 0xd ^ uVar3 - uVar2;
  uVar4 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  uVar5 = uVar4 >> 0xd ^ (uVar2 - uVar3) - uVar4;
  uVar2 = uVar5 >> 0xc ^ (uVar3 - uVar4) - uVar5;
  uVar3 = uVar2 << 0x10 ^ (uVar4 - uVar5) - uVar2;
  uVar5 = uVar3 >> 5 ^ (uVar5 - uVar2) - uVar3;
  uVar4 = uVar5 >> 3 ^ (uVar2 - uVar3) - uVar5;
  uVar2 = uVar4 << 10 ^ (uVar3 - uVar5) - uVar4;
  FUN_14136c7fa(param_1 + 0x50,uVar2 >> 0xf ^ uVar5 - (uVar4 + uVar2),&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14136c7fa FUN_14136c7fa body=133 status=ok
// SIG undefined FUN_14136c7fa(void)

longlong FUN_14136c7fa(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14136c880();
  if (lVar1 == 0) {
    local_38 = 0;
    local_30 = param_3;
    FUN_14136c8e6(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x60 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 14136c880 FUN_14136c880 body=102 status=ok
// SIG undefined FUN_14136c880(void)

longlong FUN_14136c880(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      while( true ) {
        lVar4 = (longlong)iVar3 * 0x60;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1]))
        break;
        iVar3 = *(int *)(lVar1 + lVar4 + 0x58);
        if (iVar3 == -1) {
          return 0;
        }
      }
      return lVar1 + lVar4;
    }
  }
  return 0;
}



// FUNCTION 14136c8e6 FUN_14136c8e6 body=823 status=ok
// SIG undefined FUN_14136c8e6(void)

int * FUN_14136c8e6(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  int *_Src;
  void *_Dst;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar9) {
      FUN_14488f93c(param_1,iVar9);
    }
    lVar11 = (longlong)iVar9;
    iVar8 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar2 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar9 = (int)param_1[6];
    lVar11 = (longlong)iVar9;
    iVar8 = *(int *)(*param_1 + 4 + lVar11 * 0x60);
    *(int *)(param_1 + 6) = iVar8;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x60) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar8 = iVar9;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (int *)(*param_1 + lVar11 * 0x60);
  local_78 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 0x8000000000;
  puVar4 = (undefined8 *)(*param_1 + lVar11 * 0x60);
  *puVar4 = *(undefined8 *)*param_4;
  puVar4[5] = 0;
  cVar12 = '\0';
  *(undefined4 *)(puVar4 + 6) = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
  if (puVar4 + 1 != &local_98) {
    _Src[5] = 0;
    _Src[6] = 0;
    _Src[7] = 0;
    _Src[8] = 0;
    _Src[9] = 0;
    _Src[0xd] = 0x80;
    uStack_70 = 0;
  }
  local_68 = 0xffffffff;
  _Src[0x10] = 0;
  _Src[0x12] = 0;
  _Src[0x13] = 0;
  local_58 = 0;
  _Src[0x14] = 0;
  uStack_50 = 0;
  FUN_1403cc58e();
  _Src[0x16] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar5 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[8];
      }
      iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar8 != -1) {
        lVar11 = *param_1;
        do {
          lVar10 = (longlong)iVar8 * 0x60;
          _Dst = (void *)(lVar11 + lVar10);
          if ((*(int *)(lVar11 + lVar10) == *_Src) && (*(int *)(lVar11 + 4 + lVar10) == _Src[1])) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_1403cc58e((longlong)_Dst + 8);
            memmove(_Dst,_Src,0x58);
            FUN_1403cc642(param_1,iVar9);
            cVar12 = '\x01';
            break;
          }
          iVar8 = *(int *)((longlong)_Dst + 0x58);
          cVar12 = '\0';
        } while (iVar8 != -1);
        goto LAB_14136ca3d;
      }
    }
    cVar12 = '\0';
  }
LAB_14136ca3d:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar12;
  }
  if (cVar12 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar3) {
      uVar7 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar8 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      _Src[0x17] = param_3;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      _Src[0x16] = *(int *)((longlong)plVar5 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar9;
    }
    else {
      *(int *)(param_1 + 9) = iVar8;
      FUN_1459348f2(param_1);
    }
  }
  *param_2 = iVar9;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14136cc1e FUN_14136cc1e body=86 status=ok
// SIG undefined FUN_14136cc1e(void)

longlong * FUN_14136cc1e(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x11) = param_4;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_1 = lVar1;
    param_1[1] = (longlong)param_2;
  }
  return param_1;
}



// FUNCTION 14136cc74 FUN_14136cc74 body=109 status=ok
// SIG undefined FUN_14136cc74(void)

uint FUN_14136cc74(longlong param_1,longlong param_2)

{
  char cVar1;
  uint *puVar2;
  
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x488) == '\0') {
      return 0;
    }
LAB_14136cc85:
    param_1 = param_1 + 0x10;
  }
  else {
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 0x908) == '\0') {
        return 0;
      }
    }
    else {
      if (cVar1 != '\x02') {
        return 0;
      }
      if (*(char *)(param_1 + 0x488) != '\0') goto LAB_14136cc85;
      if (*(char *)(param_1 + 0x908) != '\x01') {
        return 0;
      }
    }
    param_1 = param_1 + 0x490;
  }
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + 0x458);
    if (*(char *)(param_2 + 0x11) == '\0') {
      puVar2 = (uint *)(param_1 + 0x228);
    }
    if ((*puVar2 & 2) == 0) {
      return *puVar2 & 0xffffff01;
    }
  }
  return 0;
}



// FUNCTION 14136cce2 FUN_14136cce2 body=343 status=ok
// SIG undefined FUN_14136cce2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14136cce2(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = DAT_14cb83578;
  if (*param_1 == 0) {
    return;
  }
  DAT_14cb8355c = DAT_14cb8355c + -1;
  if (DAT_14cb8355c != 0) {
    return;
  }
  if (DAT_14cb8356c == 0) {
    return;
  }
  if ((int)DAT_14cb83568 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)DAT_14cb83568) {
    return;
  }
  lVar5 = (ulonglong)((DAT_14cb83568 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb83568 >> 0x10) * 8);
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0x10) != DAT_14cb8356c) {
    return;
  }
  if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
    return;
  }
  if (DAT_14cb83570 == 0) {
    return;
  }
  if (DAT_14cb83578 == (longlong *)0x0) {
    return;
  }
  if ((int)DAT_14cb83578[1] < 1) {
    return;
  }
  iVar4 = (int)DAT_14cb83578[1];
  do {
    if (iVar4 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)plVar8[1];
    bVar9 = iVar4 == iVar3;
    if (bVar9) {
      *(int *)(plVar8 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
  } while (!bVar9);
  lVar5 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar5 = DAT_14cb83570;
  }
  if (DAT_14cb8356c != 0) {
    uVar6 = 0;
    if (((int)DAT_14cb83568 < 0) || (DAT_14c9647dc <= (int)DAT_14cb83568)) goto LAB_14136cdf4;
    puVar7 = (undefined8 *)
             ((ulonglong)((DAT_14cb83568 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb83568 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == DAT_14cb8356c && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_14136cdf4;
    }
  }
  uVar6 = 0;
LAB_14136cdf4:
  FUN_14136ce3a(lVar5,uVar6);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  _DAT_14cb83568 = 0;
  return;
}



// FUNCTION 14136ce3a FUN_14136ce3a body=196 status=ok
// SIG undefined FUN_14136ce3a(void)

void FUN_14136ce3a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 **local_80;
  code *local_78;
  undefined8 **local_70;
  longlong local_68;
  code **local_60;
  code *local_58;
  longlong *local_50;
  undefined1 local_44 [28];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    local_88 = &local_91;
    local_80 = &local_90;
    local_90 = &LAB_140f9f298;
    local_70 = &local_80;
    local_78 = FUN_140f9f270;
    FUN_140d8b592(local_44);
    local_50 = &local_68;
    local_58 = FUN_140c4fac4;
    local_68 = param_1 + 0x50;
    local_60 = &local_78;
    FUN_140d8b39e(param_1 + 0x50,local_44,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136cf00 FUN_14136cf00 body=703 status=ok
// SIG undefined FUN_14136cf00(void)

int * FUN_14136cf00(int *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((DAT_14cb8355c == 0) && (DAT_14cb83560 < DAT_14c872be0)) && (DAT_14cb83570 != 0)) &&
      ((DAT_14cb83578 != (longlong *)0x0 && (0 < (int)DAT_14cb83578[1])))) &&
     (DAT_14cb83560 = DAT_14c872be0, param_2 != 0)) {
    if (DAT_14cb61cd0 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1463b31ae;
      local_78 = &LAB_1486dca4f;
      local_80 = &LAB_1464f50a6;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      DAT_14cb83568 = *(uint *)(param_2 + 0xc);
      if ((int)DAT_14cb83568 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((DAT_14cb83568 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb83568 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar3 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar3 = iVar4;
        }
      }
      plVar6 = DAT_14cb83578;
      DAT_14cb8356c = iVar3;
      if (DAT_14cb83578 == (longlong *)0x0) {
LAB_14136d16f:
        plVar6 = (longlong *)0x0;
      }
      else {
        iVar3 = (int)DAT_14cb83578[1];
        do {
          if (iVar3 == 0) goto LAB_14136d16f;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar7 = iVar3 == iVar4;
          if (bVar7) {
            *(int *)(plVar6 + 1) = iVar3 + 1;
            iVar4 = iVar3;
          }
          iVar3 = iVar4;
          UNLOCK();
        } while (!bVar7);
      }
      lVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = DAT_14cb83570;
      }
      FUN_140d8b18e(&local_58,param_3);
      FUN_14136d1c0(lVar5,param_2,local_58,param_4);
      if (plVar6 != (longlong *)0x0) {
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
  }
  DAT_14cb8355c = DAT_14cb8355c + 1;
  *param_1 = DAT_14cb8355c;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14136d1c0 FUN_14136d1c0 body=233 status=ok
// SIG undefined FUN_14136d1c0(void)

void FUN_14136d1c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined4 *local_a8;
  code *local_a0;
  undefined8 **local_98;
  undefined4 local_8c;
  undefined8 local_88;
  code **local_80;
  code *local_78;
  undefined8 **local_70;
  longlong local_68;
  code **local_60;
  code *local_58;
  longlong *local_50;
  undefined1 local_44 [28];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_8c = param_4;
  local_88 = param_3;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    local_b0 = &local_88;
    local_98 = &local_b0;
    local_a8 = &local_8c;
    local_80 = &local_a0;
    local_a0 = FUN_143dae904;
    local_70 = &local_80;
    local_78 = FUN_140f9f270;
    FUN_140d8b592(local_44);
    local_50 = &local_68;
    local_58 = FUN_140c4fac4;
    local_68 = param_1 + 0x50;
    local_60 = &local_78;
    FUN_140d8b39e(param_1 + 0x50,local_44,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136d2aa FUN_14136d2aa body=211 status=ok
// SIG undefined FUN_14136d2aa(void)

void FUN_14136d2aa(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 600) != param_2) {
    *(longlong *)(param_1 + 600) = param_2;
    if (param_2 == 0) {
      local_20 = 0;
    }
    else {
      puVar1 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar1 = *(undefined4 **)(param_2 + 8);
      }
      FUN_1447325ac(puVar1,&local_20,1);
    }
    if (*(longlong *)(param_1 + 0x198) != local_20) {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
    *(longlong *)(param_1 + 0x198) = local_20;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    if ((*(uint *)(param_1 + -0x20) & 0x10) == 0) {
      plVar2 = *(longlong **)(param_1 + -8);
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    *(int *)((longlong)plVar2 + 0x3fc) = *(int *)((longlong)plVar2 + 0x3fc) + 1;
    (**(code **)(*plVar2 + 0x578))();
    *(byte *)(param_1 + 0x2e9) = *(byte *)(param_1 + 0x2e9) & 0xf7;
    FUN_14136d37e(param_1 + -0x28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136d37e FUN_14136d37e body=258 status=ok
// SIG undefined FUN_14136d37e(void)

void FUN_14136d37e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1412af7d2(param_1 + 0xb0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined1 *)(param_1 + 0x1b0) = 0xff;
    plVar2 = (longlong *)FUN_140b51ce6(lVar1 + 0x88);
    if (plVar2 != (longlong *)0x0) {
      local_40[1] = 0;
      local_30 = 0;
      local_28 = 0;
      local_40[0] = param_1;
      (**(code **)(*plVar2 + 0x20))(plVar2,local_40,0,param_1 + 0x1b0);
    }
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined1 *)(param_1 + 0x1b1) = 0xff;
    plVar3 = (longlong *)FUN_140b51ce6(lVar1 + 0xd8);
    if (plVar3 != plVar2 && plVar3 != (longlong *)0x0) {
      local_40[1] = 0;
      local_30 = 0;
      local_28 = 0;
      local_40[0] = param_1;
      (**(code **)(*plVar3 + 0x20))(plVar3,local_40,0,param_1 + 0x1b1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136d482 FUN_14136d482 body=187 status=ok
// SIG undefined FUN_14136d482(void)

longlong FUN_14136d482(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  FUN_14136d53e();
  if (DAT_14cb8a738 != DAT_14cb8a764) {
    lVar2 = *param_1;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    puVar5 = &DAT_14cb8a768;
    if (DAT_14cb8a770 != (undefined *)0x0) {
      puVar5 = DAT_14cb8a770;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14cb8a778 - 1U &
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar1 = (longlong *)(DAT_14cb8a730 + (longlong)iVar6 * 0x18), *plVar1 != lVar2) {
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 14136d53e FUN_14136d53e body=1233 status=ok
// SIG undefined FUN_14136d53e(void)

void FUN_14136d53e(void)

{
  longlong *plVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((DAT_14c763a30 == '\x01') && (DAT_14cb8a710 != 0)) {
    DAT_14c763a30 = '\0';
    DAT_14cb8a728 = 0;
    if (DAT_14cb8a72c != 0) {
      FUN_148966da6();
    }
    FUN_1461cae4e();
    if (DAT_14cb8a710 != 0) {
      lVar18 = DAT_14cb8a710;
      iVar4 = DAT_14cb8a738;
      iVar16 = DAT_14cb8a764;
      do {
        lVar19 = *(longlong *)(lVar18 + 0x28);
        lVar20 = *(longlong *)(lVar18 + 0x68);
        *(undefined1 *)(lVar18 + 0x58) = 0;
        local_60 = lVar18;
        if (iVar4 != iVar16) {
          uVar9 = (uint)((ulonglong)lVar19 >> 0x10);
          uVar11 = (uint)lVar19 & 0xffff;
          puVar17 = DAT_14cb8a770;
          if (DAT_14cb8a770 == (undefined *)0x0) {
            puVar17 = &DAT_14cb8a768;
          }
          iVar5 = *(int *)(puVar17 +
                          (ulonglong)
                          (DAT_14cb8a778 - 1U &
                          (int)((ulonglong)lVar19 >> 0x20) + ((uint)lVar19 << 0x10 | uVar11) +
                          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar11 >> 4)) * 4);
          while (iVar5 != -1) {
            plVar1 = (longlong *)(DAT_14cb8a730 + (longlong)iVar5 * 0x18);
            if (*plVar1 == lVar19) {
              if ((((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
                  (lVar19 = plVar1[1], lVar19 != 0)) &&
                 (*(short *)(lVar18 + 0x30) < *(short *)(lVar19 + 0x30))) goto LAB_14136d6c2;
              break;
            }
            iVar5 = (int)plVar1[2];
          }
        }
        local_58 = lVar18 + 0x28;
        local_50 = &local_60;
        FUN_145d0df42(local_44,&local_58);
        iVar4 = DAT_14cb8a738;
        iVar16 = DAT_14cb8a764;
LAB_14136d6c2:
        lVar18 = lVar20;
      } while (lVar20 != 0);
    }
    iVar4 = DAT_14cb8a758;
    lVar18 = DAT_14cb8a730;
    if (DAT_14cb8a758 == 0) {
      uVar10 = 1;
      uVar6 = 0;
      iVar16 = 0;
      iVar5 = 0;
    }
    else {
      puVar21 = &DAT_14cb8a740;
      if (DAT_14cb8a750 != (uint *)0x0) {
        puVar21 = DAT_14cb8a750;
      }
      uVar9 = *puVar21;
      if (uVar9 == 0) {
        iVar16 = DAT_14cb8a758 + 0x1e;
        if (-1 < DAT_14cb8a758 + -1) {
          iVar16 = DAT_14cb8a758 + -1;
        }
        uVar6 = 0;
        uVar14 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar14 = uVar6;
        }
        iVar16 = 0;
        do {
          if (uVar14 == uVar6) goto LAB_14136d760;
          iVar16 = iVar16 + 0x20;
          uVar9 = puVar21[uVar6 + 1];
          uVar6 = uVar6 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar6 = 0;
        iVar16 = 0;
      }
      uVar10 = (ulonglong)(-uVar9 & uVar9);
      uVar14 = uVar10 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (DAT_14cb8a758 <= iVar5) {
        iVar5 = DAT_14cb8a758;
      }
    }
    if (iVar5 == DAT_14cb8a758) {
LAB_14136d760:
      DAT_14cb8a718 = 0x7fff;
    }
    else {
      puVar21 = &DAT_14cb8a740;
      if (DAT_14cb8a750 != (uint *)0x0) {
        puVar21 = DAT_14cb8a750;
      }
      iVar12 = DAT_14cb8a758 + 0x1e;
      if (-1 < DAT_14cb8a758 + -1) {
        iVar12 = DAT_14cb8a758 + -1;
      }
      iVar12 = iVar12 >> 5;
      uVar9 = 0xffffffff;
      uVar13 = 0x7fff;
      uVar15 = 0xffff;
      do {
        puVar2 = *(undefined4 **)(lVar18 + 8 + (longlong)iVar5 * 0x18);
        *(undefined1 *)(puVar2 + 0x16) = 1;
        uVar7 = *puVar2;
        if ((short)uVar7 < (short)uVar13) {
          uVar13 = uVar7;
        }
        DAT_14cb8a718 = (short)uVar13;
        if ((short)uVar7 <= (short)uVar15) {
          uVar7 = uVar15;
        }
        uVar9 = ~(uint)uVar10 & uVar9;
        iVar5 = (int)uVar6;
        lVar19 = (longlong)iVar5;
        uVar11 = puVar21[lVar19] & uVar9;
        if (uVar11 == 0) {
          iVar8 = iVar12;
          if (iVar12 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar12 <= iVar5) break;
          lVar20 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar11 = puVar21[lVar19 + lVar20 + 1];
            if (uVar11 != 0) break;
            lVar20 = lVar20 + 1;
            if (iVar8 - lVar19 == lVar20) goto LAB_14136d84c;
          }
          uVar6 = (ulonglong)(iVar5 + (int)lVar20 + 1);
          uVar9 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar11 & uVar11);
        uVar14 = uVar10 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar5 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        uVar15 = uVar7;
      } while (iVar5 < iVar4);
    }
LAB_14136d84c:
    FUN_146123834();
    iVar4 = DAT_14cb8a758;
    if (DAT_14cb8a758 == 0) {
      uVar14 = 1;
      uVar6 = 0;
      iVar5 = 0;
      iVar16 = 0;
    }
    else {
      puVar21 = &DAT_14cb8a740;
      if (DAT_14cb8a750 != (uint *)0x0) {
        puVar21 = DAT_14cb8a750;
      }
      uVar9 = *puVar21;
      if (uVar9 == 0) {
        iVar16 = DAT_14cb8a758 + 0x1e;
        if (-1 < DAT_14cb8a758 + -1) {
          iVar16 = DAT_14cb8a758 + -1;
        }
        uVar6 = 0;
        uVar14 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar14 = uVar6;
        }
        iVar5 = 0;
        do {
          if (uVar14 == uVar6) goto LAB_14136d56e;
          iVar5 = iVar5 + 0x20;
          uVar9 = puVar21[uVar6 + 1];
          uVar6 = uVar6 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar6 = 0;
        iVar5 = 0;
      }
      uVar14 = (ulonglong)(-uVar9 & uVar9);
      uVar10 = uVar14 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (DAT_14cb8a758 <= iVar16) {
        iVar16 = DAT_14cb8a758;
      }
    }
    if (iVar16 != DAT_14cb8a758) {
      lVar18 = (longlong)DAT_14cb8a718;
      uVar9 = 0xffffffff;
      do {
        psVar3 = *(short **)(DAT_14cb8a730 + 8 + (longlong)iVar16 * 0x18);
        *(short **)(DAT_14cb8a720 + (*psVar3 - lVar18) * 8) = psVar3;
        uVar9 = ~(uint)uVar14 & uVar9;
        puVar21 = DAT_14cb8a750;
        if (DAT_14cb8a750 == (uint *)0x0) {
          puVar21 = &DAT_14cb8a740;
        }
        iVar16 = (int)uVar6;
        lVar19 = (longlong)iVar16;
        uVar11 = puVar21[lVar19] & uVar9;
        if (uVar11 == 0) {
          iVar12 = DAT_14cb8a758 + 0x1e;
          if (-1 < DAT_14cb8a758 + -1) {
            iVar12 = DAT_14cb8a758 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar5 = iVar5 + 0x20;
          iVar8 = iVar12;
          if (iVar12 < iVar16) {
            iVar8 = iVar16;
          }
          if (iVar16 < iVar12) {
            lVar20 = 0;
            do {
              uVar11 = puVar21[lVar19 + lVar20 + 1];
              if (uVar11 != 0) {
                uVar6 = (ulonglong)(iVar16 + (int)lVar20 + 1);
                uVar9 = 0xffffffff;
                goto LAB_14136d9b9;
              }
              iVar5 = iVar5 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar8 - lVar19 != lVar20);
            uVar9 = 0xffffffff;
            lVar19 = (longlong)iVar8;
          }
          uVar6 = lVar19 + 1U & 0xffffffff;
          iVar16 = DAT_14cb8a758;
        }
        else {
LAB_14136d9b9:
          uVar14 = (ulonglong)(-uVar11 & uVar11);
          uVar10 = uVar14 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar16 = (iVar5 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (DAT_14cb8a758 <= iVar16) {
            iVar16 = DAT_14cb8a758;
          }
        }
      } while (iVar16 != iVar4);
    }
  }
LAB_14136d56e:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14136da10 FUN_14136da10 body=1485 status=ok
// SIG undefined FUN_14136da10(void)

void FUN_14136da10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  char cVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_158 [40];
  undefined8 *local_130;
  undefined4 local_128;
  longlong local_120 [5];
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 *local_f0;
  int local_e8;
  longlong local_e0;
  ulonglong uStack_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar19 = param_2[3];
  if (((lVar19 == 0) || (param_2[4] == 0)) || (*(int *)(lVar19 + 0x30) == 0)) goto LAB_14136da56;
  lVar19 = *(longlong *)(lVar19 + 0x28);
  lVar17 = *(longlong *)(lVar19 + 0x80);
  if (lVar17 == 0) {
    uVar16 = FUN_1458f96d4();
    lVar17 = FUN_14477b664(uVar16);
    *(longlong *)(lVar19 + 0x80) = lVar17;
  }
  lVar18 = *(longlong *)(lVar19 + 0x88);
  if (((lVar18 == 0) && (lVar18 = 0, lVar17 != 0)) && (*(longlong *)(lVar19 + 0x78) != 0)) {
    plVar4 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar15 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar15 == '\0')) {
      lVar18 = 0;
    }
    else {
      uVar16 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar18 = FUN_144aff482(uVar16,(longlong *)(lVar19 + 0x78));
    }
    *(longlong *)(lVar19 + 0x88) = lVar18;
  }
  iVar21 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0xfc) < iVar21 + 1U) {
    FUN_14665ab08((longlong *)(param_1 + 0xf0),iVar21);
  }
  lVar19 = *(longlong *)(param_1 + 0xf0);
  plVar4 = (longlong *)(lVar19 + (longlong)iVar21 * 0x50);
  puVar2 = (undefined8 *)(lVar19 + (longlong)iVar21 * 0x50);
  puVar22 = puVar2 + 3;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  if (puVar22 != param_2) {
    iVar21 = *(int *)(param_2 + 1);
    pvVar5 = (void *)*param_2;
    *(int *)(plVar4 + 4) = iVar21;
    if ((longlong)iVar21 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(puVar22,iVar21,0);
      memcpy((void *)*puVar22,pvVar5,(longlong)iVar21 * 2);
    }
  }
  *(undefined4 *)(plVar4 + 9) = *(undefined4 *)(param_2 + 6);
  uVar7 = *(undefined4 *)(param_2 + 2);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar9 = *(undefined4 *)(param_2 + 3);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar12 = *(undefined4 *)(param_2 + 5);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(plVar4 + 7) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)plVar4 + 0x3c) = uVar11;
  *(undefined4 *)(plVar4 + 8) = uVar12;
  *(undefined4 *)((longlong)plVar4 + 0x44) = uVar13;
  *(undefined4 *)(plVar4 + 5) = uVar7;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = uVar8;
  *(undefined4 *)(plVar4 + 6) = uVar9;
  *(undefined4 *)((longlong)plVar4 + 0x34) = uVar10;
  lVar19 = FUN_14665a6ea(DAT_14c951640);
  if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar19);
  }
  *plVar4 = lVar19;
  if ((undefined8 *)(lVar19 + 0x30) != param_2) {
    FUN_14034a368((undefined8 *)(lVar19 + 0x30),param_2);
    lVar19 = *plVar4;
  }
  uVar16 = param_2[4];
  *(undefined8 *)(lVar19 + 0x40) = uVar16;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar19 = (longlong)local_90;
  pvVar5 = (void *)*param_2;
  local_a0 = param_1;
  if (lVar19 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar5,lVar19 * 2);
    uVar16 = param_2[4];
  }
  local_68 = *(undefined4 *)(param_2 + 6);
  local_88 = *(undefined4 *)(param_2 + 2);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_80 = *(undefined4 *)(param_2 + 3);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_78 = *(undefined4 *)(param_2 + 4);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = *(undefined4 *)(param_2 + 5);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1414dd1fe(&local_b8,uVar16);
  local_120[1] = 0;
  local_120[2] = 0;
  local_120[3] = 0;
  local_120[4] = 0;
  local_f8 = 0x10000;
  local_f4 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_120[0] = lVar18;
  FUN_140fb04f0(local_120,*plVar4);
  local_f4 = 1;
  FUN_14069798a(&local_e0,&local_b8);
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,6,0x10);
  puVar2 = local_130;
  local_128 = 6;
  *local_130 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar19 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar19 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar19;
  local_130[2] = lVar17;
  *local_130 = &PTR_FUN_14b9d8c70;
  local_130[3] = 0;
  iVar21 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_130 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar21 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar21 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar21;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
      }
      LOCK();
      iVar21 = *(int *)(lVar19 + 0x10);
      bVar23 = iVar21 == 0;
      if (bVar23) {
        *(int *)(lVar19 + 0x10) = iVar20;
        iVar21 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar21 = iVar20;
      }
    }
  }
  pvVar5 = local_98;
  *(int *)((longlong)puVar2 + 0x1c) = iVar21;
  puVar2[4] = local_a0;
  puVar2[5] = 0;
  lVar19 = (longlong)local_90;
  *(int *)(puVar2 + 6) = local_90;
  if (lVar19 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,local_90,0);
    memcpy((void *)puVar2[5],pvVar5,lVar19 * 2);
  }
  *(undefined4 *)(puVar2 + 0xb) = local_68;
  *(undefined4 *)(puVar2 + 9) = local_78;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_74;
  *(undefined4 *)(puVar2 + 10) = uStack_70;
  *(undefined4 *)((longlong)puVar2 + 0x54) = uStack_6c;
  *(undefined4 *)(puVar2 + 7) = local_88;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_84;
  *(undefined4 *)(puVar2 + 8) = uStack_80;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_7c;
  FUN_140861d4c(local_120,&local_130);
  FUN_140fb05f2(local_120,&local_c8);
  plVar14 = local_c0;
  plVar4[1] = local_c8;
  local_c8 = 0;
  plVar6 = (longlong *)plVar4[2];
  if (local_c0 == plVar6) {
LAB_14136de8f:
    plVar4 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_c0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_c0)(local_c0);
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
  else {
    local_c0 = (longlong *)0x0;
    plVar4[2] = (longlong)plVar14;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_14136de8f;
    }
  }
  FUN_140861e20(local_e0,uStack_d8 & 0xffffffff);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 == 0) {
LAB_14136df07:
    if (local_f0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)(local_f0,0);
    FUN_1446efa72(&local_f0,0,0,0x10);
    local_e8 = 0;
    goto LAB_14136df07;
  }
  FUN_140861e20(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14136da56:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14136dfde FUN_14136dfde body=64 status=ok
// SIG undefined FUN_14136dfde(void)

longlong FUN_14136dfde(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar4 = 0;
    do {
      bVar5 = *(longlong *)(lVar3 + lVar4) == *param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar5);
      if (bVar5) {
        return lVar2;
      }
      bVar5 = lVar1 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return lVar2;
}



// FUNCTION 14136e024 FUN_14136e024 body=2602 status=ok
// SIG undefined FUN_14136e024(void)

void FUN_14136e024(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  uint *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_2 == (uint *)0x0) || (*param_2 == 0)) || (param_2[1] == 0)) ||
     (*param_2 == DAT_14c948000)) goto LAB_14136e98f;
  local_80 = DAT_14cb7c9f8;
  local_78 = DAT_14cb7ca00;
  FUN_1448075d0(&local_70);
  uVar13 = local_70;
  uVar5 = *param_2;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (uVar5 == uVar13) goto LAB_14136e98f;
  FUN_144837e54(param_2,0);
  if ((*(byte **)(param_2 + 0x12) == (byte *)0x0) || ((~**(byte **)(param_2 + 0x12) & 3) != 0))
  goto LAB_14136e98f;
  iVar6 = *(int *)(param_1 + 0x350);
  local_70 = *param_2;
  if ((longlong)iVar6 == -1) {
    if (((local_70 != 0) && (param_2[1] != 0)) && (local_70 != DAT_14c948000)) {
      puVar7 = &DAT_14c948028;
      goto LAB_14136e172;
    }
LAB_14136e9ec:
    puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    local_70 = (uint)DAT_14c948618;
  }
  else {
    if (((local_70 == 0) || (uVar5 = param_2[1], uVar5 == 0)) || (local_70 == DAT_14c948000))
    goto LAB_14136e9ec;
    puVar10 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar10 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar5) {
      puVar10 = *(uint **)(param_2 + 6);
    }
    if (uVar5 == 1 && 0 < iVar6) {
      puVar14 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x354) == 1) {
        puVar14 = puVar10;
      }
      local_70 = *puVar14;
      puVar7 = (ulonglong *)(puVar14 + 1);
    }
    else {
      if ((int)uVar5 <= iVar6) goto LAB_14136e9ec;
      puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
      local_70 = puVar10[(longlong)iVar6 * 3];
    }
  }
LAB_14136e172:
  plVar11 = (longlong *)(param_1 + 0x300);
  uVar1 = *puVar7;
  uStack_6c = (undefined4)uVar1;
  uStack_68 = (uint)(uVar1 >> 0x20);
  uVar5 = local_70;
  if (uVar1 >> 0x20 != 0) {
    uVar5 = uStack_68 >> 0xd ^ local_70 - uStack_68;
    uVar15 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - uStack_68;
    uVar18 = uVar15 >> 0xd ^ (uStack_68 - uVar5) - uVar15;
    uVar13 = uVar18 >> 0xc ^ (uVar5 - uVar15) - uVar18;
    uVar5 = uVar13 << 0x10 ^ (uVar15 - uVar18) - uVar13;
    uVar15 = uVar5 >> 5 ^ (uVar18 - uVar13) - uVar5;
    uVar13 = uVar15 >> 3 ^ (uVar13 - uVar5) - uVar15;
    uVar5 = uVar13 << 10 ^ (uVar5 - uVar15) - uVar13;
    uVar5 = uVar5 >> 0xf ^ uVar15 - (uVar13 + uVar5);
  }
  iVar6 = FUN_140e01bfc(plVar11,uVar5,&local_70);
  if ((iVar6 == -1) ||
     (lVar8 = (longlong)iVar6 * 0x20 + *plVar11, plVar9 = (longlong *)(lVar8 + 0x10),
     plVar9 == (longlong *)0x0 || lVar8 == 0)) {
    lVar8 = FUN_140e01592(param_1,param_2,param_2);
  }
  else {
    lVar8 = *plVar9;
  }
  *(longlong *)(param_2 + 0xe) = lVar8;
  local_78 = DAT_14cb7ca00;
  local_80 = DAT_14cb7c9f8;
  FUN_1448075d0(&local_70);
  pbVar2 = *(byte **)(param_2 + 0x12);
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar20 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar20 = (longlong *)plVar9[9];
      }
      iVar6 = *(int *)((longlong)plVar20 + (ulonglong)((int)plVar9[10] - 1U & local_70) * 4);
      if (iVar6 != -1) {
        do {
          lVar16 = *plVar9 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar6 * 0x40) == local_70) {
            if (((lVar16 != 0) &&
                (puVar21 = (undefined8 *)(lVar16 + 0x28), puVar21 != (undefined8 *)0x0)) &&
               (((byte *)*puVar21 != (byte *)0x0 && ((*(byte *)*puVar21 & 0x40) == 0))))
            goto LAB_14136e2fa;
            break;
          }
          iVar6 = *(int *)(lVar16 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar21 = &DAT_14c9a1308;
LAB_14136e2fa:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar21;
  if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) != 0)) &&
     (cVar4 = FUN_14000584e(pbVar2,0), cVar4 != '\0')) {
    FUN_1457e25d4(param_1,lVar8);
  }
  local_78 = DAT_14cb7ca18;
  local_80 = DAT_14cb7ca10;
  FUN_1448075d0(&local_70);
  pbVar2 = *(byte **)(param_2 + 0x12);
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar20 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar20 = (longlong *)plVar9[9];
      }
      iVar6 = *(int *)((longlong)plVar20 + (ulonglong)((int)plVar9[10] - 1U & local_70) * 4);
      if (iVar6 != -1) {
        do {
          lVar16 = *plVar9 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar6 * 0x40) == local_70) {
            if (((lVar16 != 0) &&
                (puVar21 = (undefined8 *)(lVar16 + 0x28), puVar21 != (undefined8 *)0x0)) &&
               (((byte *)*puVar21 != (byte *)0x0 && ((*(byte *)*puVar21 & 0x40) == 0))))
            goto LAB_14136e3d1;
            break;
          }
          iVar6 = *(int *)(lVar16 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar21 = &DAT_14c9a1308;
LAB_14136e3d1:
  local_98 = plVar11;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar21;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 2)) {
    lVar16 = (longlong)*(int *)(*(undefined8 **)(pbVar2 + 8) + 2);
    if (lVar16 != 0) {
      puVar21 = (undefined8 *)**(undefined8 **)(pbVar2 + 8);
      puVar17 = puVar21 + lVar16 * 2;
      local_88 = lVar8 + 0x10;
      do {
        pbVar2 = (byte *)*puVar21;
        if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) != 0)) &&
           (puVar10 = (uint *)FUN_140625092(pbVar2,&DAT_14c9a12e0), lVar8 != 0)) {
          local_80 = DAT_14cb7c9f8;
          local_78 = DAT_14cb7ca00;
          local_90 = puVar10;
          FUN_1448075d0(&local_70,&local_80);
          uVar13 = local_70;
          uVar5 = *local_90;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          plVar11 = local_98;
          if (uVar5 != uVar13) {
            iVar6 = *(int *)(param_1 + 0x350);
            local_70 = *local_90;
            if ((longlong)iVar6 == -1) {
              if (((local_70 == 0) || (local_90[1] == 0)) ||
                 (puVar7 = &DAT_14c948028, local_70 == DAT_14c948000)) {
LAB_14136e693:
                puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
                local_70 = (uint)DAT_14c948618;
              }
            }
            else if (((local_70 == 0) || (uVar5 = local_90[1], uVar5 == 0)) ||
                    (local_70 == DAT_14c948000)) {
              puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
              local_70 = (uint)DAT_14c948618;
            }
            else {
              puVar10 = local_90 + 2;
              if (0 < (int)local_90[9]) {
                puVar10 = *(uint **)(local_90 + 6);
              }
              if (1 < (int)uVar5) {
                puVar10 = *(uint **)(local_90 + 6);
              }
              if ((iVar6 < 1) || (uVar5 != 1)) {
                if ((int)uVar5 <= iVar6) goto LAB_14136e693;
                puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
                local_70 = puVar10[(longlong)iVar6 * 3];
              }
              else {
                if (*(int *)(param_1 + 0x354) != 1) {
                  puVar10 = (uint *)&DAT_14c948618;
                }
                local_70 = *puVar10;
                puVar7 = (ulonglong *)(puVar10 + 1);
              }
            }
            uVar1 = *puVar7;
            uStack_6c = (undefined4)uVar1;
            uStack_68 = (uint)(uVar1 >> 0x20);
            uVar5 = local_70;
            if (uVar1 >> 0x20 != 0) {
              uVar5 = uStack_68 >> 0xd ^ local_70 - uStack_68;
              uVar15 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - uStack_68;
              uVar18 = uVar15 >> 0xd ^ (uStack_68 - uVar5) - uVar15;
              uVar13 = uVar18 >> 0xc ^ (uVar5 - uVar15) - uVar18;
              uVar5 = uVar13 << 0x10 ^ (uVar15 - uVar18) - uVar13;
              uVar15 = uVar5 >> 5 ^ (uVar18 - uVar13) - uVar5;
              uVar13 = uVar15 >> 3 ^ (uVar13 - uVar5) - uVar15;
              uVar5 = uVar13 << 10 ^ (uVar5 - uVar15) - uVar13;
              uVar5 = uVar5 >> 0xf ^ uVar15 - (uVar13 + uVar5);
            }
            iVar6 = FUN_140e01bfc(local_98,uVar5);
            if ((iVar6 == -1) ||
               (lVar16 = (longlong)iVar6 * 0x20 + *plVar11, plVar11 = (longlong *)(lVar16 + 0x10),
               plVar11 == (longlong *)0x0 || lVar16 == 0)) {
              lVar16 = FUN_140e01592(param_1,local_90,0);
            }
            else {
              lVar3 = *(longlong *)(param_1 + 0x2e8);
              lVar16 = *plVar11;
              if (lVar3 == lVar16) goto LAB_14136e675;
              if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x18) != 0)) {
                lVar19 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar19) == lVar16)
                  goto LAB_14136e675;
                  lVar19 = lVar19 + 8;
                } while ((longlong)*(int *)(lVar3 + 0x18) * 8 != lVar19);
              }
            }
            local_70 = (uint)lVar16;
            uStack_6c = (undefined4)((ulonglong)lVar16 >> 0x20);
            *(undefined1 *)(lVar16 + 0x20) = 1;
            FUN_14102a034(local_88,&local_70);
          }
        }
LAB_14136e675:
        puVar21 = puVar21 + 2;
      } while (puVar21 != puVar17);
    }
  }
  local_78 = DAT_14cb7ca60;
  local_80 = DAT_14cb7ca58;
  FUN_1448075d0(&local_70);
  plVar11 = local_98;
  pbVar2 = *(byte **)(param_2 + 0x12);
  puVar21 = &DAT_14c9a1308;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar20 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar20 = (longlong *)plVar9[9];
      }
      iVar6 = *(int *)((longlong)plVar20 + (ulonglong)((int)plVar9[10] - 1U & local_70) * 4);
      if (iVar6 != -1) {
        do {
          lVar16 = *plVar9 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar6 * 0x40) == local_70) {
            if ((((lVar16 != 0) &&
                 (puVar21 = (undefined8 *)(lVar16 + 0x28), puVar21 != (undefined8 *)0x0)) &&
                ((byte *)*puVar21 != (byte *)0x0)) && ((*(byte *)*puVar21 & 0x40) == 0))
            goto LAB_14136e78c;
            break;
          }
          iVar6 = *(int *)(lVar16 + 0x38);
        } while (iVar6 != -1);
      }
    }
    puVar21 = &DAT_14c9a1308;
  }
LAB_14136e78c:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar21;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 2)) {
    lVar16 = (longlong)(int)(*(longlong **)(pbVar2 + 8))[2];
    if (lVar16 != 0) {
      lVar3 = **(longlong **)(pbVar2 + 8);
      lVar19 = 0;
      do {
        lVar12 = *(longlong *)(lVar3 + lVar19);
        puVar10 = &DAT_14c9a12e0;
        if (lVar12 != 0) {
          puVar10 = (uint *)FUN_140625092(lVar12,&DAT_14c9a12e0);
        }
        if (lVar8 != 0) {
          iVar6 = *(int *)(param_1 + 0x350);
          local_70 = *puVar10;
          if ((longlong)iVar6 == -1) {
            if (((local_70 != 0) && (puVar10[1] != 0)) &&
               (puVar7 = &DAT_14c948028, local_70 != DAT_14c948000)) goto LAB_14136e88d;
LAB_14136e960:
            puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
            local_70 = (uint)DAT_14c948618;
          }
          else {
            if (((local_70 == 0) || (uVar5 = puVar10[1], uVar5 == 0)) || (local_70 == DAT_14c948000)
               ) goto LAB_14136e960;
            puVar14 = puVar10 + 2;
            if (0 < (int)puVar10[9]) {
              puVar14 = *(uint **)(puVar10 + 6);
            }
            if (1 < (int)uVar5) {
              puVar14 = *(uint **)(puVar10 + 6);
            }
            if ((iVar6 < 1) || (uVar5 != 1)) {
              if ((int)uVar5 <= iVar6) goto LAB_14136e960;
              puVar7 = (ulonglong *)(puVar14 + (longlong)iVar6 * 3 + 1);
              local_70 = puVar14[(longlong)iVar6 * 3];
            }
            else {
              if (*(int *)(param_1 + 0x354) != 1) {
                puVar14 = (uint *)&DAT_14c948618;
              }
              local_70 = *puVar14;
              puVar7 = (ulonglong *)(puVar14 + 1);
            }
          }
LAB_14136e88d:
          uVar1 = *puVar7;
          uStack_6c = (undefined4)uVar1;
          uStack_68 = (uint)(uVar1 >> 0x20);
          uVar5 = local_70;
          if (uVar1 >> 0x20 != 0) {
            uVar5 = uStack_68 >> 0xd ^ local_70 - uStack_68;
            uVar15 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - uStack_68;
            uVar18 = uVar15 >> 0xd ^ (uStack_68 - uVar5) - uVar15;
            uVar13 = uVar18 >> 0xc ^ (uVar5 - uVar15) - uVar18;
            uVar5 = uVar13 << 0x10 ^ (uVar15 - uVar18) - uVar13;
            uVar15 = uVar5 >> 5 ^ (uVar18 - uVar13) - uVar5;
            uVar13 = uVar15 >> 3 ^ (uVar13 - uVar5) - uVar15;
            uVar5 = uVar13 << 10 ^ (uVar5 - uVar15) - uVar13;
            uVar5 = uVar5 >> 0xf ^ uVar15 - (uVar13 + uVar5);
          }
          iVar6 = FUN_140e01bfc(plVar11,uVar5,&local_70);
          if (((iVar6 != -1) &&
              (lVar12 = (longlong)iVar6 * 0x20 + *plVar11, plVar9 = (longlong *)(lVar12 + 0x10),
              plVar9 != (longlong *)0x0 && lVar12 != 0)) && (lVar12 = *plVar9, lVar12 != 0)) {
            *(undefined1 *)(lVar12 + 0x21) = 1;
          }
        }
        lVar19 = lVar19 + 0x10;
      } while (lVar16 * 0x10 != lVar19);
    }
  }
LAB_14136e98f:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14136ea50 FUN_14136ea50 body=706 status=ok
// SIG undefined FUN_14136ea50(void)

undefined8 FUN_14136ea50(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  local_30 = param_2;
  cVar2 = FUN_14136ed14();
  lVar5 = lStack_40;
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_14136ec37;
  }
  lVar3 = *(longlong *)(param_1 + 0x70);
  if ((lVar3 != 0) &&
     (((uVar4 = local_30, lStack_40 == 0 || (*(int *)(lStack_40 + 0x38) < *(int *)(lVar3 + 0x38)))
      || (*(longlong *)(*(longlong *)(lStack_40 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)))) goto LAB_14136ec37;
  if (param_4 == 1) {
    param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)(param_1 + 0x44));
  }
  if (*param_3 != local_48) {
    param_3[2] = 0;
  }
  *param_3 = local_48;
  if (param_3[1] != lStack_40) {
    param_3[2] = 0;
  }
  if ((lStack_40 == 0) || ((*(uint *)(lStack_40 + 8) & 0x809f600) != 0)) {
LAB_14136ec56:
    lVar5 = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      FUN_1446f470e(&local_28,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_28);
      _Init_thread_footer(&DAT_14c949388);
    }
    if ((((DAT_14c949380 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
        ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
          != DAT_14c949380 + 0x30 ||
         (((plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 == (longlong *)0x0 ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) ||
          (lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1), lVar3 == 0)))))) ||
       ((*(uint *)(lVar5 + 8) & 0x809f600) != 0)) goto LAB_14136ec56;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      FUN_1446f470e(&local_28,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_28);
      _Init_thread_footer(&DAT_14c949388);
    }
    if (((DAT_14c949380 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
         != DAT_14c949380 + 0x30 ||
        (((plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 == (longlong *)0x0 ||
          (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) ||
         (lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1), lVar3 == 0)))))) goto LAB_14136ec56;
  }
  param_3[1] = lVar5;
  param_3[2] = local_38;
  uVar4 = local_30;
LAB_14136ec37:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14136ed14 FUN_14136ed14 body=1459 status=ok
// SIG undefined FUN_14136ed14(void)

ulonglong FUN_14136ed14(longlong *param_1,longlong *param_2)

{
  wint_t _C;
  short *psVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  wint_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  code *local_90;
  undefined1 *local_88;
  undefined2 **local_80;
  longlong local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  _C = *(wint_t *)*param_1;
  pwVar5 = (wint_t *)*param_1;
  while (_C != 0) {
    iVar4 = iswspace(_C);
    pwVar5 = (wint_t *)*param_1;
    if (iVar4 == 0) break;
    *param_1 = (longlong)(pwVar5 + 1);
    _C = pwVar5[1];
    pwVar5 = pwVar5 + 1;
  }
  *param_1 = (longlong)(pwVar5 + 1);
  if (*pwVar5 != 0x28) {
    uVar11 = 0;
    goto LAB_14136f063;
  }
  uVar11 = 0;
  lVar6 = FUN_1401e9420(pwVar5 + 1,&local_58,0);
  *param_1 = lVar6;
  FUN_140db34f4(&local_58,0x22,0);
  psVar1 = (short *)*param_1;
  psVar2 = psVar1 + 1;
  *param_1 = (longlong)psVar2;
  if (*psVar1 != 0x2c) goto LAB_14136f063;
  uVar11 = 0;
  lVar6 = FUN_1401e9420(psVar2,&local_68,0);
  *param_1 = lVar6;
  FUN_140db34f4(&local_68,0x22,0);
  psVar2 = (short *)*param_1;
  *param_1 = (longlong)(psVar2 + 1);
  if (*psVar2 != 0x29) goto LAB_14136f063;
  puVar10 = local_68;
  if ((int)uStack_60 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  if (DAT_14c948fa0 == 0) {
    local_40 = &DAT_1427db2a2;
    lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948fa0 = lVar6;
    FUN_1446f470e(&local_38,L"ScriptStruct",1);
    local_88 = &LAB_1468915ce;
    local_90 = FUN_1427dc742;
    local_a0 = L"Engine";
    local_98 = 199;
    local_a8 = 0x10;
    local_b0 = 0x10000020;
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,8);
    local_80 = &local_40;
    FUN_14574b4b2(lVar6);
    DAT_14c948fa0 = lVar6;
    uVar8 = FUN_1446f8646();
    lVar6 = DAT_14c948fa0;
    uVar9 = FUN_1449e2fb2();
    local_b8 = L"ScriptStruct";
    FUN_14574b446(uVar9,lVar6,uVar8,L"/Script/CoreUObject");
  }
  local_b8 = (wchar_t *)0x0;
  lVar6 = FUN_140277cc4(DAT_14c948fa0,puVar10,0,0);
  puVar10 = local_58;
  if ((int)uStack_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  plVar12 = &local_70;
  FUN_1446f470e(plVar12,puVar10,1);
  if ((lVar6 == 0) || ((*(uint *)(lVar6 + 8) & 0x809f600) != 0)) {
LAB_14136f0b3:
    lVar6 = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      plVar12 = &local_38;
      FUN_1446f470e(plVar12,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_38);
      _Init_thread_footer(&DAT_14c949388);
    }
    if ((((DAT_14c949380 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
         != DAT_14c949380 + 0x30)) ||
       (((plVar12 = *(longlong **)(lVar6 + 0xb8), plVar12 == (longlong *)0x0 ||
         (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) ||
        (lVar7 = (**(code **)(*plVar12 + 0x110))(plVar12), lVar7 == 0)))) goto LAB_14136f0b3;
  }
  if (*param_2 != local_70) {
    param_2[2] = 0;
  }
  *param_2 = local_70;
  if (param_2[1] != lVar6) {
    param_2[2] = 0;
  }
  if ((lVar6 == 0) || ((*(uint *)(lVar6 + 8) & 0x809f600) != 0)) {
LAB_14136f0af:
    lVar6 = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      plVar12 = &local_38;
      FUN_1446f470e(plVar12,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_38);
      _Init_thread_footer(&DAT_14c949388);
    }
    if (((((DAT_14c949380 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
          != DAT_14c949380 + 0x30)) ||
        ((plVar12 = *(longlong **)(lVar6 + 0xb8), plVar12 == (longlong *)0x0 ||
         (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')))) ||
       ((lVar7 = (**(code **)(*plVar12 + 0x110))(plVar12), lVar7 == 0 ||
        ((*(uint *)(lVar6 + 8) & 0x809f600) != 0)))) goto LAB_14136f0af;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      plVar12 = &local_38;
      FUN_1446f470e(plVar12,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_38);
      _Init_thread_footer(&DAT_14c949388);
    }
    if ((((DAT_14c949380 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
         != DAT_14c949380 + 0x30)) ||
       (((plVar12 = *(longlong **)(lVar6 + 0xb8), plVar12 == (longlong *)0x0 ||
         (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) ||
        (lVar7 = (**(code **)(*plVar12 + 0x110))(plVar12), lVar7 == 0)))) goto LAB_14136f0af;
  }
  param_2[1] = lVar6;
  param_2[2] = 0;
  uVar11 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
LAB_14136f063:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136f2c8 FUN_14136f2c8 body=623 status=ok
// SIG undefined FUN_14136f2c8(void)

void FUN_14136f2c8(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(param_1 + 0x58);
  plVar7 = *(longlong **)(param_1 + 0x48);
  if (plVar7 != (longlong *)0x0) {
    if (DAT_14cb22108 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f28909;
      local_60 = FUN_1464376d6;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
    }
    lVar4 = (**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb22108);
    if (lVar4 != 0) {
      if (DAT_14cb22108 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147f28909;
        local_60 = FUN_1464376d6;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
      }
      lVar5 = FUN_144718840(lVar4,DAT_14cb22108);
      if ((lVar4 != lVar5) && (lVar5 != 0)) {
        cVar2 = FUN_14136f54e(lVar5,0,*(undefined8 *)(param_1 + 0x78),0x3f800000);
        *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfb | cVar2 << 2;
      }
    }
  }
  if ((param_2 != '\0') &&
     (bVar3 = *(byte *)(param_1 + 0x58) >> 2, (bool)(bVar3 & 1) != ((bVar1 >> 2 & 1) != 0))) {
    FUN_145936c53((ulonglong)((bVar3 & 1) == 0) * 0x10 + param_1 + 0x28);
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (lVar4 != 0) {
      uVar6 = FUN_1412dd104();
      plVar7 = (longlong *)FUN_144718840(lVar4,uVar6);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136f54e FUN_14136f54e body=433 status=ok
// SIG undefined FUN_14136f54e(void)

undefined4 FUN_14136f54e(longlong *param_1,uint param_2,longlong param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(*param_1 + 0x28))();
  if (param_3 == 0) {
    uVar8 = 0;
    uVar2 = 0;
  }
  else {
    uVar8 = *(uint *)(param_3 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar2 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar2 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar2 = uVar6;
      }
    }
  }
  if (*(int *)(lVar4 + 0x58) != *(int *)(lVar4 + 0x84)) {
    lVar9 = lVar4 + 0x88;
    if (*(longlong *)(lVar4 + 0x90) != 0) {
      lVar9 = *(longlong *)(lVar4 + 0x90);
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar4 + 0x98) - 1U & (uVar2 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar9 = *(longlong *)(lVar4 + 0x50);
      do {
        lVar7 = (longlong)iVar5 * 0x2b0;
        local_58 = *(undefined8 *)(lVar9 + lVar7);
        local_60 = CONCAT44(uVar2,uVar8);
        cVar1 = FUN_14472d054(&local_58,&local_60);
        lVar9 = *(longlong *)(lVar4 + 0x50);
        if (cVar1 != '\0') {
          uVar3 = 0;
          if ((lVar9 + lVar7 != 0) && (lVar4 = lVar9 + lVar7 + 8, lVar4 != 0)) {
            uVar2 = (param_2 & 0xff) * 0x60;
            uVar3 = CONCAT31((int3)(uVar2 >> 8),*(float *)(lVar4 + (ulonglong)uVar2) <= param_4);
          }
          goto LAB_14136f680;
        }
        iVar5 = *(int *)(lVar9 + 0x2a8 + lVar7);
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_14136f680:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14136f700 FUN_14136f700 body=214 status=ok
// SIG undefined FUN_14136f700(void)

int FUN_14136f700(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (DAT_14c866c58 != DAT_14c866c84) {
    puVar8 = &DAT_14c866c88;
    if (DAT_14c866c90 != (undefined *)0x0) {
      puVar8 = DAT_14c866c90;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)(DAT_14c866c98 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_14136f752:
      lVar9 = (longlong)iVar1 * 0x68;
      iVar3 = *(int *)(DAT_14c866c50 + 8 + lVar9);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar4 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(DAT_14c866c50 + lVar9) + lVar4);
          uVar7 = (ulonglong)uVar6;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar6 == uVar5) {
            if (uVar6 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar5 | uVar6)) goto LAB_14136f7ae;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_14136f7ae;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14136f76c;
    }
  }
  return -1;
LAB_14136f7ae:
  if (uVar6 == uVar5) {
    return iVar1;
  }
LAB_14136f76c:
  iVar1 = *(int *)(DAT_14c866c50 + 0x60 + lVar9);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14136f752;
}



// FUNCTION 14136f7d6 FUN_14136f7d6 body=524 status=ok
// SIG undefined FUN_14136f7d6(void)

void FUN_14136f7d6(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c866c90 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c866c90,0,0,4);
  }
  uVar2 = DAT_14c866c98;
  uVar3 = local_70;
  if (DAT_14c866c98 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14c866c88,0,DAT_14c866c98,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14c866c90;
        if (DAT_14c866c90 == (undefined *)0x0) {
          puVar7 = &DAT_14c866c88;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c866c98 + 0x7fffffff & uVar9) * 4) = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14c866c60;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14c866c78 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14c866c50;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar11 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar1 = *local_88;
        lVar10 = (longlong)iVar11 * 0x68;
        iVar4 = *(int *)(lVar1 + 8 + lVar10);
        puVar8 = &DAT_149dfb77a;
        iVar6 = 0;
        if (iVar4 != 0) {
          puVar8 = *(undefined2 **)(lVar1 + lVar10);
          iVar6 = iVar4 + -1;
        }
        iVar4 = FUN_144a49b4a(iVar6,puVar8);
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14c866c98 - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar1 + 100 + lVar10) = iVar4;
        puVar7 = DAT_14c866c90;
        if (DAT_14c866c90 == (undefined *)0x0) {
          puVar7 = &DAT_14c866c88;
        }
        *(undefined4 *)(lVar1 + 0x60 + lVar10) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c866c98 - 1U & uVar5) * 4);
        puVar7 = DAT_14c866c90;
        if (DAT_14c866c90 == (undefined *)0x0) {
          puVar7 = &DAT_14c866c88;
        }
        *(int *)(puVar7 + ((longlong)iVar4 & (longlong)(int)DAT_14c866c98 - 1U) * 4) = iVar11;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14136f9e4 FUN_14136f9e4 body=33 status=ok
// SIG undefined FUN_14136f9e4(void)

void FUN_14136f9e4(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14038fb82();
  FUN_14136fa06(param_1,*(undefined2 *)(lVar1 + 0xde));
  return;
}



// FUNCTION 14136fa06 FUN_14136fa06 body=2379 status=ok
// SIG undefined FUN_14136fa06(void)

void FUN_14136fa06(longlong param_1,ushort param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  longlong lVar6;
  ushort uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined4 *puVar23;
  undefined1 auStack_1f8 [45];
  char local_1cb;
  undefined2 local_1ca;
  longlong local_1c8;
  longlong *local_1c0;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  uint *local_148;
  longlong local_140;
  int local_138;
  uint local_12c;
  undefined8 local_128;
  longlong *local_120;
  int local_114;
  ushort local_10e;
  ushort local_10c;
  undefined1 local_107;
  undefined4 local_104;
  undefined1 local_100;
  uint local_f8 [8];
  undefined8 local_d8;
  uint local_d0 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1c8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_198 = param_1;
  if (*(int *)(local_1c8 + 0x50) == *(int *)(local_1c8 + 0x7c)) goto LAB_141370087;
  local_1a0 = FUN_14009d2a0();
  local_178 = 0;
  uStack_170 = 0;
  uVar3 = *(ushort *)(local_1a0 + 0x4e);
  iVar17 = uVar3 + 1;
  uVar4 = *(ushort *)(local_1a0 + 0x122);
  local_107 = 0;
  local_104 = 0x6ff;
  local_100 = 0;
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_50 = 0x10000000000;
  iVar15 = iVar17;
  local_10e = uVar3;
  local_10c = param_2;
  if (0xff < uVar3) {
    FUN_14497ddce(local_f8,0);
    iVar15 = (int)local_d8 + iVar17;
  }
  iVar10 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar10 = iVar15;
  }
  local_d8 = CONCAT44(local_d8._4_4_,iVar15);
  if (iVar15 % 0x20 != 0) {
    bVar14 = -(char)(iVar15 % 0x20);
    local_f8[iVar10 >> 5] = (local_f8[iVar10 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
  }
  FUN_1447c45ca(local_f8,0,iVar17,0);
  uVar7 = local_10c;
  local_f8[uVar3 >> 5] = local_f8[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  uVar16 = local_d8;
  iVar15 = local_10c + 1;
  iVar17 = iVar15 - (int)local_d8;
  if (iVar17 != 0 && (int)local_d8 <= iVar15) {
    if ((int)local_d8 == 0) {
LAB_14136fb69:
      if (local_d8._4_4_ <= (int)(uint)local_10c) {
        local_d8 = CONCAT44(0x100,(int)local_d8);
        FUN_14497ddce(local_f8,uVar16 & 0xffffffff);
        iVar15 = (int)local_d8 + iVar17;
      }
      iVar10 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar10 = iVar15;
      }
      local_d8 = CONCAT44(local_d8._4_4_,iVar15);
      if (iVar15 % 0x20 != 0) {
        bVar14 = -(char)(iVar15 % 0x20);
        local_f8[iVar10 >> 5] = (local_f8[iVar10 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      }
    }
    else {
      iVar10 = (int)local_d8 + 0x1e;
      if (-1 < (int)local_d8 + -1) {
        iVar10 = (int)local_d8 + -1;
      }
      if (iVar10 >> 5 != (uint)(local_10c >> 5)) goto LAB_14136fb69;
      local_d8 = CONCAT44(local_d8._4_4_,iVar15);
    }
    FUN_1447c45ca(local_f8,uVar16 & 0xffffffff,iVar17,0);
  }
  local_f8[uVar7 >> 5] = local_f8[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  uVar16 = local_d8;
  iVar15 = uVar4 + 1;
  iVar17 = iVar15 - (int)local_d8;
  if (iVar17 != 0 && (int)local_d8 <= iVar15) {
    if ((int)local_d8 == 0) {
LAB_14136fc02:
      if (local_d8._4_4_ <= (int)(uint)uVar4) {
        local_d8 = CONCAT44(0x100,(int)local_d8);
        FUN_14497ddce(local_f8,uVar16 & 0xffffffff);
        iVar15 = (int)local_d8 + iVar17;
      }
      iVar10 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar10 = iVar15;
      }
      local_d8 = CONCAT44(local_d8._4_4_,iVar15);
      if (iVar15 % 0x20 != 0) {
        bVar14 = -(char)(iVar15 % 0x20);
        local_f8[iVar10 >> 5] = (local_f8[iVar10 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      }
    }
    else {
      iVar10 = (int)local_d8 + 0x1e;
      if (-1 < (int)local_d8 + -1) {
        iVar10 = (int)local_d8 + -1;
      }
      if (iVar10 >> 5 != (uint)(uVar4 >> 5)) goto LAB_14136fc02;
      local_d8 = CONCAT44(local_d8._4_4_,iVar15);
    }
    FUN_1447c45ca(local_f8,uVar16 & 0xffffffff,iVar17,0);
  }
  local_f8[uVar4 >> 5] = local_f8[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  uVar16 = local_b0;
  uVar3 = *(ushort *)(local_1a0 + 0x11c);
  iVar15 = uVar3 + 1;
  iVar17 = iVar15 - (int)local_b0;
  if (iVar17 != 0 && (int)local_b0 <= iVar15) {
    if ((int)local_b0 == 0) {
LAB_14136fcba:
      if (local_b0._4_4_ <= (int)(uint)uVar3) {
        local_b0 = CONCAT44(0x100,(int)local_b0);
        FUN_14497ddce(local_d0,uVar16 & 0xffffffff);
        iVar15 = (int)local_b0 + iVar17;
      }
      iVar10 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar10 = iVar15;
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar15);
      if (iVar15 % 0x20 != 0) {
        bVar14 = -(char)(iVar15 % 0x20);
        local_d0[iVar10 >> 5] = (local_d0[iVar10 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      }
    }
    else {
      iVar10 = (int)local_b0 + 0x1e;
      if (-1 < (int)local_b0 + -1) {
        iVar10 = (int)local_b0 + -1;
      }
      if (iVar10 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14136fcba;
      local_b0 = CONCAT44(local_b0._4_4_,iVar15);
    }
    FUN_1447c45ca(local_d0,uVar16 & 0xffffffff,iVar17,0);
  }
  local_d0[uVar3 >> 5] = local_d0[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  if ((local_10e != 0xffff) && (local_10c != 0xffff)) {
    lVar20 = *(longlong *)(local_198 + 0x28);
    local_140 = lVar20 + 0x28;
    cVar9 = *(char *)(lVar20 + 0x298);
    if (cVar9 == '\0') {
      *(int *)(lVar20 + 0x28c) = *(int *)(lVar20 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar20 + 0x28c) = *(int *)(lVar20 + 0x28c) + 1;
      UNLOCK();
    }
    local_148 = local_f8;
    local_138 = FUN_1403b8464(&local_148,0);
    cVar8 = cVar9;
    iVar15 = *(int *)(lVar20 + 0x38);
    if (local_138 != *(int *)(lVar20 + 0x38)) {
      do {
        local_1ac = iVar15;
        local_1cb = cVar8;
        lVar20 = *(longlong *)(*(longlong *)(local_140 + 0x60) + (longlong)local_138 * 8);
        if (cVar9 == '\0') {
          *(undefined4 *)(lVar20 + 0x14) = 0;
          local_1a8 = lVar20;
        }
        else {
          local_1a8 = 0;
        }
        if (*(ushort *)(lVar20 + 0xc) != 0) {
          puVar18 = *(undefined8 **)(lVar20 + 0x28);
          lVar12 = (ulonglong)*(ushort *)(lVar20 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)puVar18 + 0x1e) == local_10c) goto LAB_14136fde9;
            puVar18 = puVar18 + 4;
            lVar12 = lVar12 + -0x20;
          } while (lVar12 != 0);
        }
        puVar18 = (undefined8 *)0x0;
LAB_14136fde9:
        local_1b0 = *(int *)(lVar20 + 0x14);
        if (local_1b0 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar18 + 1));
        }
        LOCK();
        *(int *)(puVar18 + 3) = *(int *)(puVar18 + 3) + 1;
        UNLOCK();
        puVar23 = (undefined4 *)*puVar18;
        if (*(ushort *)(lVar20 + 0xc) != 0) {
          plVar22 = *(longlong **)(lVar20 + 0x28);
          lVar12 = (ulonglong)*(ushort *)(lVar20 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar22 + 0x1e) == local_10e) goto LAB_14136fe28;
            plVar22 = plVar22 + 4;
            lVar12 = lVar12 + -0x20;
          } while (lVar12 != 0);
        }
        plVar22 = (longlong *)0x0;
LAB_14136fe28:
        local_1b4 = *(int *)(lVar20 + 0x14);
        if (local_1b4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar22 + 1));
        }
        LOCK();
        *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
        UNLOCK();
        local_180 = (ulonglong)*(ushort *)(lVar20 + 0xe);
        if (local_180 != 0) {
          local_188 = *plVar22;
          local_190 = *(longlong *)(lVar20 + 0x18);
          uVar16 = 0;
          local_1c0 = plVar22;
          do {
            local_158 = *(undefined8 *)(puVar23 + 4);
            local_168 = *puVar23;
            uStack_164 = puVar23[1];
            uStack_160 = puVar23[2];
            uStack_15c = puVar23[3];
            uVar11 = *(uint *)(local_188 + uVar16 * 4);
            local_1ca = *(undefined2 *)(local_190 + uVar16 * 2);
            lVar20 = *(longlong *)(local_1c8 + 8);
            lVar12 = (ulonglong)(uVar11 & 0xffff) * 0x128;
            iVar15 = *(int *)(lVar20 + 0x110 + lVar12);
            local_128 = *(undefined8 *)(lVar20 + 0x100 + lVar12);
            plVar22 = *(longlong **)(lVar20 + 0x108 + lVar12);
            if (plVar22 == (longlong *)0x0) {
              local_120 = (longlong *)0x0;
              FUN_1410cbdea(&local_168,&local_114,iVar15,&local_128);
            }
            else {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
              local_120 = plVar22;
              FUN_1410cbdea(&local_168,&local_114,iVar15,&local_128);
              LOCK();
              plVar1 = plVar22 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar2 = (int *)((longlong)plVar22 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
            }
            if (local_114 == iVar15) {
              cVar9 = FUN_1405e05f2(local_1c8,&local_168,uVar11);
              plVar22 = local_1c0;
              if (cVar9 != '\0') goto LAB_14136ff50;
            }
            else {
              lVar20 = lVar20 + lVar12;
              if (*(uint *)(lVar20 + 0x122) != *(uint *)(lVar20 + 0x11a)) {
                lVar20 = (ulonglong)(*(uint *)(lVar20 + 0x122) & 0xffff) * 0x128 +
                         *(longlong *)(local_1c8 + 8);
              }
              plVar22 = *(longlong **)(lVar20 + 0xf0);
              if (plVar22 == (longlong *)0x0) {
                local_12c = 0xffff;
              }
              else {
                (**(code **)(*plVar22 + 0x58))(plVar22,&local_12c);
              }
              plVar22 = local_1c0;
              uVar13 = (ulonglong)local_12c & 0xffff;
              if ((int)uVar13 < *(int *)(local_1c8 + 0x30)) {
                lVar20 = local_1c8 + 0x18;
                if (*(longlong *)(local_1c8 + 0x28) != 0) {
                  lVar20 = *(longlong *)(local_1c8 + 0x28);
                }
                if ((((*(uint *)(lVar20 + (uVar13 >> 5) * 4) >> (local_12c & 0x1f) & 1) != 0) &&
                    (local_12c >> 0x10 ==
                     (uint)*(ushort *)(*(longlong *)(local_1c8 + 8) + 0x11c + uVar13 * 0x128))) &&
                   (cVar9 = FUN_1405e05f2(local_1c8,&local_168), cVar9 == '\0')) goto LAB_14136ff3c;
              }
LAB_14136ff50:
              uVar13 = uStack_170;
              lVar20 = (longlong)(int)uStack_170;
              uVar11 = (int)uStack_170 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,uVar11);
              if (uStack_170._4_4_ < uVar11) {
                FUN_1405e07ae(&local_178,uVar13 & 0xffffffff);
              }
              *(undefined2 *)(local_178 + lVar20 * 2) = local_1ca;
            }
LAB_14136ff3c:
            uVar16 = uVar16 + 1;
            puVar23 = puVar23 + 6;
          } while (local_180 != uVar16);
        }
        if (puVar18 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar18 + 3) = *(int *)(puVar18 + 3) + -1;
          UNLOCK();
          if (local_1b0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(puVar18 + 1));
          }
        }
        lVar20 = local_1a8;
        cVar9 = local_1cb;
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar22 + 3) = (int)plVar22[3] + -1;
          UNLOCK();
          if (local_1b4 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar22 + 1));
          }
        }
        if (lVar20 != 0) {
          *(undefined4 *)(lVar20 + 0x14) = 1;
        }
        local_138 = FUN_1403b8464(&local_148,local_138 + 1);
        cVar8 = local_1cb;
        iVar15 = local_1ac;
      } while (local_138 != local_1ac);
    }
    if (local_148 != (uint *)0x0) {
      if (*(char *)(local_140 + 0x270) == '\0') {
        *(int *)(local_140 + 0x264) = *(int *)(local_140 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_140 + 0x264) = *(int *)(local_140 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  lVar6 = local_178;
  lVar12 = local_198;
  lVar20 = local_1a0;
  lVar19 = (longlong)(int)uStack_170;
  if (lVar19 != 0) {
    lVar21 = 0;
    do {
      uVar5 = *(undefined2 *)(lVar6 + lVar21);
      FUN_1405e0ab4(*(longlong *)(lVar12 + 0x28) + 0x28,uVar5,*(undefined2 *)(lVar20 + 0x11a));
      FUN_1405e0992(*(longlong *)(lVar12 + 0x28) + 0x28,uVar5,*(undefined2 *)(lVar20 + 0x11c),2);
      lVar21 = lVar21 + 2;
    } while (lVar19 * 2 != lVar21);
  }
  if (local_178 != 0) {
    FUN_1400020a8(local_178);
  }
LAB_141370087:
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141370352 FUN_141370352 body=331 status=ok
// SIG undefined FUN_141370352(void)

ulonglong FUN_141370352(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[5] == '\0') {
    lVar2 = param_1[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar3 = *param_1;
      lVar4 = 0;
      do {
        if ((*(longlong **)(lVar3 + lVar4) != (longlong *)0x0) &&
           (cVar1 = (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x10))(), cVar1 != '\0'))
        goto LAB_1413703b1;
        lVar4 = lVar4 + 0x18;
      } while ((longlong)(int)lVar2 * 0x18 != lVar4);
      if ((int)param_1[1] != 0) goto LAB_1413703b1;
    }
  }
  else {
LAB_1413703b1:
    if ((char)param_1[5] == '\0') {
      lVar2 = param_1[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar3 = *param_1;
        lVar4 = 0;
        do {
          if ((*(longlong **)(lVar3 + lVar4) != (longlong *)0x0) &&
             (cVar1 = (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x10))(), cVar1 != '\0'))
          goto LAB_1413703b7;
          lVar4 = lVar4 + 0x18;
        } while ((longlong)(int)lVar2 * 0x18 != lVar4);
      }
    }
    else {
LAB_1413703b7:
      if (*(longlong *)((longlong)param_1 + 0x2c) == 0) goto LAB_141370489;
    }
    if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
       (lVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))(), lVar2 != 0)) {
      if ((char)param_1[5] == '\0') {
        lVar3 = param_1[1];
        param_2 = CONCAT71((int7)(param_2 >> 8),1);
        if ((longlong)(int)lVar3 != 0) {
          lVar4 = *param_1;
          lVar5 = 0;
          do {
            if ((*(longlong **)(lVar4 + lVar5) != (longlong *)0x0) &&
               (cVar1 = (**(code **)(**(longlong **)(lVar4 + lVar5) + 0x10))(), cVar1 != '\0'))
            goto LAB_141370417;
            lVar5 = lVar5 + 0x18;
          } while ((longlong)(int)lVar3 * 0x18 != lVar5);
        }
      }
      else {
LAB_141370417:
        param_2 = CONCAT71((int7)(param_2 >> 8),1);
        if ((*(longlong *)((longlong)param_1 + 0x2c) != 0) &&
           ((longlong)*(int *)(lVar2 + 0x80) != 0)) {
          lVar3 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x78) + lVar3) ==
                *(longlong *)((longlong)param_1 + 0x2c)) {
              if (param_3 != (undefined1 *)0x0) {
                *param_3 = 1;
              }
              goto LAB_141370489;
            }
            lVar3 = lVar3 + 8;
          } while ((longlong)*(int *)(lVar2 + 0x80) * 8 != lVar3);
        }
      }
      goto LAB_14137048b;
    }
  }
LAB_141370489:
  param_2 = 0;
LAB_14137048b:
  return param_2 & 0xffffffff;
}



// FUNCTION 14137049e FUN_14137049e body=397 status=ok
// SIG undefined FUN_14137049e(void)

char FUN_14137049e(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  cVar7 = '\0';
  if ((*param_2 != 0) && (*(char *)(*param_2 + 0x178) == '\x03')) {
    if ((char)param_1[5] == '\0') {
      lVar6 = param_1[1];
      if ((longlong)(int)lVar6 != 0) {
        lVar3 = *param_1;
        lVar11 = 0;
        do {
          if ((*(longlong **)(lVar3 + lVar11) != (longlong *)0x0) &&
             (cVar7 = (**(code **)(**(longlong **)(lVar3 + lVar11) + 0x10))(), cVar7 != '\0'))
          goto LAB_1413704df;
          lVar11 = lVar11 + 0x18;
        } while ((longlong)(int)lVar6 * 0x18 != lVar11);
      }
    }
    else {
LAB_1413704df:
      cVar7 = FUN_14655bfc8(param_3,(longlong)param_1 + 0x2c);
      if (cVar7 == '\0') {
        return '\x01';
      }
    }
    lVar6 = param_1[1];
    if ((longlong)(int)lVar6 == 0) {
      cVar7 = '\x04';
    }
    else {
      lVar3 = *param_1;
      lVar11 = 0;
      iVar12 = 0;
      iVar10 = 0;
      iVar9 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar11);
        if (lVar4 != 0) {
          plVar5 = *(longlong **)(lVar3 + 8 + lVar11);
          if (plVar5 == (longlong *)0x0) {
            uVar8 = FUN_143e111b4(param_2,lVar4,iVar9,param_4);
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
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
            uVar8 = FUN_143e111b4(param_2,lVar4,iVar9,param_4);
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
          iVar12 = iVar12 + 1;
          iVar10 = iVar10 + (uVar8 & 0xff);
        }
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 0x18;
      } while ((longlong)(int)lVar6 * 0x18 != lVar11);
      cVar7 = '\x03';
      if (iVar10 != 0) {
        cVar7 = (iVar12 <= iVar10) * '\x02' + '\x02';
      }
    }
  }
  return cVar7;
}



// FUNCTION 14137062c FUN_14137062c body=523 status=ok
// SIG undefined FUN_14137062c(void)

void FUN_14137062c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c96b498 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c96b498,0,0,4);
  }
  uVar3 = DAT_14c96b4a0;
  uVar2 = local_50;
  if (DAT_14c96b4a0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c96b490,0,DAT_14c96b4a0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c96b498;
        if (DAT_14c96b498 == (undefined *)0x0) {
          puVar6 = &DAT_14c96b490;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c96b4a0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c96b468;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c96b480 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c96b458;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c96b4a0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c96b498;
        if (DAT_14c96b498 == (undefined *)0x0) {
          puVar6 = &DAT_14c96b490;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c96b4a0 - 1U & uVar9) * 4);
        puVar6 = DAT_14c96b498;
        if (DAT_14c96b498 == (undefined *)0x0) {
          puVar6 = &DAT_14c96b490;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c96b4a0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141370838 FUN_141370838 body=103 status=ok
// SIG undefined FUN_141370838(void)

undefined4 * FUN_141370838(undefined8 param_1,undefined4 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9670b4) {
    FUN_144b3d300(&DAT_14c9670b4);
    if (DAT_14c9670b4 == -1) {
      DAT_14c9670b0 = 0;
      _Init_thread_footer(&DAT_14c9670b4);
    }
  }
  *param_2 = DAT_14c9670b0;
  return param_2;
}



// FUNCTION 1413708a0 FUN_1413708a0 body=178 status=ok
// SIG undefined FUN_1413708a0(void)

bool FUN_1413708a0(longlong *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  if (-1 < param_2) {
    if (*(int *)((longlong)param_1 + 0x5c) < param_2) {
      *(int *)((longlong)param_1 + 0x5c) = param_2;
    }
    if ((int)param_1[0xb] < param_3) {
      *(int *)(param_1 + 0xb) = param_3;
    }
    piVar2 = (int *)FUN_1460d43c8(param_1 + 1,param_2,&local_34);
    *piVar2 = param_3;
    *(char *)(piVar2 + 1) = (char)param_4;
    FUN_14692840c(param_4,param_3,local_34);
    cVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (cVar1 != '\0') {
      FUN_1469284d4((char)param_4 == '\x03',param_3,local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return -1 < param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141370954 FUN_141370954 body=767 status=ok
// SIG undefined FUN_141370954(void)

longlong * FUN_141370954(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_3 == 0) && (DAT_14c968088 != 0)) &&
     (plVar11 = *(longlong **)(DAT_14c968088 + 8), plVar11 != (longlong *)0x0)) {
    plVar8 = *(longlong **)(DAT_14c968088 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_141370a59;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
LAB_141370a46:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar5 = false;
    local_50 = plVar11;
    local_48 = plVar8;
  }
  else {
    if (param_4 == '\0') {
      plVar8 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_149efd9a0;
      plVar11 = plVar8 + 2;
      plVar8[2] = (longlong)&PTR_FUN_149efd9c0;
      *(undefined1 *)(plVar8 + 3) = 0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      plVar8[4] = -0x3e20000000000000;
      plVar8[5] = -0x3e20000000000000;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        goto LAB_141370a46;
      }
    }
    else {
      plVar11 = (longlong *)0x0;
    }
LAB_141370a59:
    local_48 = (longlong *)0x0;
    bVar5 = true;
    local_50 = plVar11;
  }
  plVar8 = local_48;
  FUN_14623b6ca(param_2,param_3,&local_50);
  plVar11 = (longlong *)(param_1 + 0x310);
  if (*(int *)(param_1 + 0x318) <= param_3) {
    FUN_146020fb2(plVar11,param_3 + 1);
  }
  lVar9 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar4 = *plVar11;
    lVar10 = (longlong)param_3 * 0x10;
    *(longlong *)(lVar4 + lVar10) = lVar9;
    plVar11 = *(longlong **)(lVar4 + 8 + lVar10);
    if (plVar11 == (longlong *)0x0) goto LAB_141370b27;
    *(undefined8 *)(lVar4 + lVar10 + 8) = 0;
LAB_141370aea:
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_141370b27;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
    plVar3 = plVar11;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = *plVar11;
    lVar10 = (longlong)param_3 * 0x10;
    *(longlong *)(lVar4 + lVar10) = lVar9;
    plVar11 = *(longlong **)(lVar4 + 8 + lVar10);
    if (plVar3 != plVar11) {
      *(longlong **)(lVar4 + lVar10 + 8) = plVar3;
      if (plVar11 == (longlong *)0x0) goto LAB_141370b27;
      goto LAB_141370aea;
    }
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_141370b27;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
  }
  if (iVar7 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_141370b27:
  if (((*(int *)(*param_2 + 0x78) < 1) && (*(longlong *)(param_1 + 0x330) != 0)) &&
     ((plVar11 = *(longlong **)(param_1 + 0x338), plVar11 != (longlong *)0x0 &&
      (0 < (int)plVar11[1])))) {
    uVar2 = *(undefined1 *)(param_1 + 0x340);
    local_60 = 0;
    iVar7 = (int)plVar11[1];
    do {
      if (iVar7 == 0) {
        local_58 = (longlong *)0x0;
        lVar9 = *param_2;
        goto LAB_141370c3f;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar12 = iVar7 == iVar6;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *param_2;
    local_58 = plVar11;
    if (plVar11 == (longlong *)0x0) {
LAB_141370c3f:
      FUN_1410a3d58(param_1,*(undefined4 *)(lVar9 + 0x18),&local_60,uVar2);
    }
    else {
      local_60 = *(undefined8 *)(param_1 + 0x330);
      FUN_1410a3d58(param_1,*(undefined4 *)(lVar9 + 0x18),&local_60,uVar2);
      LOCK();
      plVar3 = plVar11 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  FUN_1401861f4(param_1 + 0x598,param_3);
  if (!bVar5) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141370c54 FUN_141370c54 body=482 status=ok
// SIG undefined FUN_141370c54(void)

void FUN_141370c54(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 141370e38 FUN_141370e38 body=482 status=ok
// SIG undefined FUN_141370e38(void)

void FUN_141370e38(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14137101c FUN_14137101c body=25 status=ok
// SIG undefined FUN_14137101c(void)

bool FUN_14137101c(void)

{
  int iVar1;
  
  iVar1 = GetSystemMetrics(0x1000);
  return iVar1 != 0;
}



// FUNCTION 141371036 FUN_141371036 body=991 status=ok
// SIG undefined FUN_141371036(void)

void FUN_141371036(longlong param_1)

{
  int iVar1;
  char *_Str;
  size_t sVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  PRAWINPUTDEVICELIST ptVar14;
  PRAWINPUTDEVICELIST ptVar15;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined2 *local_190;
  int local_188;
  uint local_180;
  uint local_17c;
  PRAWINPUTDEVICELIST local_178;
  undefined8 uStack_170;
  undefined1 local_160 [256];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_178 = (PRAWINPUTDEVICELIST)0x0;
  uStack_170 = 0;
  local_17c = 0;
  GetRawInputDeviceList((PRAWINPUTDEVICELIST)0x0,&local_17c,0x10);
  if (local_17c == 0) {
    *(undefined1 *)(param_1 + 200) = 0;
    goto LAB_1413712df;
  }
  iVar1 = (int)uStack_170;
  uStack_170 = CONCAT44(uStack_170._4_4_,(int)uStack_170 + local_17c);
  if ((uint)(uStack_170._4_4_ - iVar1) < local_17c) {
    FUN_141371416(&local_178);
  }
  GetRawInputDeviceList(local_178,&local_17c,0x10);
  if ((longlong)(int)uStack_170 != 0) {
    ptVar15 = local_178 + (int)uStack_170;
    uVar9 = 0;
    pcVar8 = GetRawInputDeviceInfoA_exref;
    ptVar14 = local_178;
LAB_1413710f2:
    local_180 = 0;
    if ((ptVar14->dwType == 0) &&
       (iVar1 = (*pcVar8)(ptVar14->hDevice,0x20000007,0,&local_180), iVar1 != -1)) {
      uVar4 = (ulonglong)(local_180 + 1);
      local_198 = param_1;
      _Str = (char *)FUN_14001cc68(uVar4 + (uVar4 == 0));
      memset(_Str,0,uVar4);
      iVar1 = (*pcVar8)(ptVar14->hDevice,0x20000007,_Str,&local_180);
      if (iVar1 != -1) {
        _Str[local_180] = '\0';
        local_60 = (undefined1 *)0x0;
        if (_Str == (char *)0x0) {
          local_58 = (undefined1 *)0x0;
          local_50 = 0;
        }
        else {
          sVar2 = strlen(_Str);
          iVar1 = (int)sVar2;
          uVar7 = iVar1 + 1;
          local_50 = iVar1;
          if (uVar7 < 0x81) {
            puVar5 = (undefined1 *)0x0;
          }
          else {
            FUN_1446efa72(&local_60,0,uVar7,2);
            puVar5 = local_60;
          }
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = local_160;
          }
          local_58 = puVar5;
          if (-1 < iVar1) {
            uVar4 = 0;
            do {
              *(short *)(puVar5 + uVar4 * 2) = (short)_Str[uVar4];
              uVar4 = uVar4 + 1;
            } while (uVar7 != uVar4);
          }
        }
        pcVar8 = GetRawInputDeviceInfoA_exref;
        FUN_140056680(&local_190,local_58);
        if (local_60 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1448097c4(&local_190,&DAT_149eca134,&DAT_149e01f64,0);
        puVar3 = local_190;
        if (local_188 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        lVar6 = 0x11;
        lVar10 = 0;
        while( true ) {
          uVar11 = *(ushort *)((longlong)puVar3 + lVar10);
          uVar4 = (ulonglong)uVar11;
          uVar12 = *(ushort *)((longlong)&DAT_149ec7782 + lVar10);
          if (uVar11 != uVar12) break;
          if (uVar11 == 0) goto LAB_14137129d;
LAB_14137126e:
          lVar6 = lVar6 + -1;
          if (lVar6 == 0) goto LAB_14137129d;
          lVar10 = lVar10 + 2;
        }
        if ((uVar12 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar13]) goto LAB_14137126e;
        }
        if (uVar11 != uVar12) {
          lVar6 = 0x11;
          lVar10 = 0;
          goto LAB_141371330;
        }
        goto LAB_14137129d;
      }
      goto LAB_1413712a7;
    }
    goto LAB_141371102;
  }
LAB_1413712c2:
  iVar1 = GetSystemMetrics(0x1000);
  uVar9 = (uint)(iVar1 != 0);
  goto LAB_1413712d5;
LAB_141371330:
  uVar11 = *(ushort *)((longlong)puVar3 + lVar10);
  uVar12 = *(ushort *)((longlong)L"\\\\?\\ROOT\\RDP_MOU\\" + lVar10);
  if (uVar11 == uVar12) {
    iVar1 = 0;
    if ((uVar11 == 0) || (lVar6 == 1)) goto LAB_141371384;
  }
  else {
    if (0x7f < (uVar12 | uVar11)) {
      iVar1 = (uint)uVar11 - (uint)uVar12;
LAB_141371384:
      uVar9 = (uVar9 + 1) - (uint)(iVar1 == 0);
LAB_14137129d:
      if (local_190 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
LAB_1413712a7:
      param_1 = local_198;
      if (_Str != (char *)0x0) {
        FUN_1400020a8(_Str);
        param_1 = local_198;
      }
LAB_141371102:
      ptVar14 = ptVar14 + 1;
      if (ptVar14 == ptVar15) goto LAB_1413712be;
      goto LAB_1413710f2;
    }
    if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[(uint)uVar12]) {
      iVar1 = (uint)(byte)(&DAT_149e05da0)[uVar11] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar12];
      goto LAB_141371384;
    }
    if (lVar6 == 1) {
      iVar1 = 0;
      goto LAB_141371384;
    }
  }
  lVar6 = lVar6 + -1;
  lVar10 = lVar10 + 2;
  goto LAB_141371330;
LAB_1413712be:
  if (uVar9 == 0) goto LAB_1413712c2;
LAB_1413712d5:
  *(bool *)(param_1 + 200) = 0 < (int)uVar9;
LAB_1413712df:
  if (local_178 != (PRAWINPUTDEVICELIST)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141371416 FUN_141371416 body=269 status=ok
// SIG undefined FUN_141371416(void)

void FUN_141371416(longlong param_1,int param_2)

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



// FUNCTION 141371524 FUN_141371524 body=2177 status=ok
// SIG undefined FUN_141371524(void)

/* WARNING: Removing unreachable block (ram,0x000141371ac4) */
/* WARNING: Removing unreachable block (ram,0x000141371ce5) */

ulonglong FUN_141371524(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  DWORD DVar4;
  HRESULT HVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  UINT UVar9;
  HIMC pHVar10;
  HKL pHVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  HKL *ppHVar15;
  longlong lVar16;
  HKL *ppHVar17;
  ulonglong uVar18;
  undefined1 local_bf8 [32];
  longlong local_bc8;
  undefined8 local_bc0;
  uint local_bb4;
  HKL local_bb0;
  longlong *local_ba8;
  undefined8 uStack_ba0;
  HKL local_b98 [4];
  HKL *local_b78;
  uint local_b70;
  undefined4 local_b6c;
  undefined1 auStack_b50 [8];
  byte local_b48 [2736];
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_bf8;
  *(undefined4 *)(param_1 + 8) = 0;
  pHVar10 = ImmCreateContext();
  *(HIMC *)(param_1 + 0x40) = pHVar10;
  uVar18 = 0;
  pHVar11 = GetKeyboardLayout(0);
  DVar4 = ImmGetProperty(pHVar11,4);
  *(DWORD *)(param_1 + 0x48) = DVar4;
  if (*(longlong *)(param_1 + 0x40) == 0) goto LAB_14137157d;
  HVar5 = CoCreateInstance((IID *)&DAT_1499d76e0,(LPUNKNOWN)0x0,1,(IID *)&DAT_1499d7770,&local_98);
  plVar2 = local_98;
  if (HVar5 < 0) {
    FUN_14682f6b8(local_b98,0x400,HVar5);
  }
  else {
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    }
    *(longlong **)(param_1 + 0x10) = plVar2;
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      *plVar1 = 0;
    }
    iVar6 = (**(code **)*plVar2)(plVar2,&DAT_1499d7790,plVar1);
    if (iVar6 < 0) {
      FUN_14682f6b8(local_b98,0x400,iVar6);
      if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      HVar5 = CoCreateInstance((IID *)&DAT_1499d76d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_1499d7730,
                               &local_98);
      plVar2 = local_98;
      if (HVar5 < 0) {
        FUN_14682f6b8(local_b98,0x400,HVar5);
        if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 0x10))();
          *plVar1 = 0;
        }
      }
      else {
        if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        }
        *(longlong **)(param_1 + 0x20) = plVar2;
        iVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x28);
        if (iVar6 < 0) {
          FUN_14682f6b8(local_b98,0x400,iVar6);
          if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
            *(undefined8 *)(param_1 + 0x10) = 0;
          }
          if ((longlong *)*plVar1 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar1 + 0x10))();
            *plVar1 = 0;
          }
          if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
            *(undefined8 *)(param_1 + 0x20) = 0;
          }
        }
        else {
          local_ba8 = (longlong *)0x0;
          iVar6 = (**(code **)**(undefined8 **)(param_1 + 0x20))
                            (*(undefined8 **)(param_1 + 0x20),&DAT_1499d77b0);
          if (iVar6 < 0) {
            FUN_14682f6b8(local_b98,0x400,iVar6);
            if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
              *(undefined8 *)(param_1 + 0x10) = 0;
            }
            if ((longlong *)*plVar1 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar1 + 0x10))();
              *plVar1 = 0;
            }
            if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
              *(undefined8 *)(param_1 + 0x20) = 0;
            }
          }
          else {
            plVar12 = (longlong *)FUN_14001cc68(0x28,0x10);
            *plVar12 = (longlong)&PTR_FUN_149ecad90;
            plVar12[1] = (longlong)&PTR_LAB_149ecadc0;
            plVar12[2] = -1;
            plVar12[3] = param_1;
            *(undefined4 *)(plVar12 + 4) = 1;
            plVar2 = *(longlong **)(param_1 + 0x38);
            if (plVar2 != plVar12) {
              if (plVar12 != (longlong *)0x0) {
                *(undefined4 *)(plVar12 + 4) = 2;
              }
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x10))();
              }
              *(longlong **)(param_1 + 0x38) = plVar12;
            }
            GetVersion();
            iVar6 = (**(code **)(*local_ba8 + 0x18))
                              (local_ba8,&DAT_1499d77a0,*(longlong *)(param_1 + 0x38),
                               *(longlong *)(param_1 + 0x38) + 0x10);
            if (-1 < iVar6) {
              if (local_ba8 != (longlong *)0x0) {
                (**(code **)(*local_ba8 + 0x10))();
              }
              iVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                                (*(longlong **)(param_1 + 0x20),param_1 + 0x30);
              if ((iVar6 < 0) ||
                 (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))(), iVar6 < 0)) {
                FUN_14682f6b8(local_b98,0x400,iVar6);
                if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
                  *(undefined8 *)(param_1 + 0x10) = 0;
                }
                if ((longlong *)*plVar1 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar1 + 0x10))();
                  *plVar1 = 0;
                }
                if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
                  *(undefined8 *)(param_1 + 0x20) = 0;
                }
                if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
                  *(undefined8 *)(param_1 + 0x38) = 0;
                }
                goto LAB_14137198e;
              }
              local_ba8 = (longlong *)0x0;
              uStack_ba0 = 0;
              local_78 = 0;
              local_70 = 0;
              local_98 = (longlong *)0x0;
              uStack_90 = 0;
              local_6c = 0xffffffff00000080;
              local_64 = 0;
              local_58 = (undefined1 *)0x0;
              local_50 = 0;
              local_bb0 = (HKL)0x0;
              iVar6 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
              if (-1 < iVar6) {
                local_bb4 = 0;
                iVar6 = (**(code **)(*(longlong *)local_bb0 + 0x20))(local_bb0,0x20,local_b98);
                if ((-1 < iVar6) && (local_bb4 != 0)) {
                  uVar18 = 0;
                  do {
                    if (*(int *)(local_b98 + uVar18 * 0xb) == 2) {
                      FUN_1460168aa(&local_98,&local_bc8,auStack_b50 + uVar18 * 0x58);
                    }
                    if ((local_b48[uVar18 * 0x58] & 2) != 0) {
                      FUN_142855d41(&local_bc8,local_b98 + uVar18 * 0xb,
                                    *(undefined8 *)(param_1 + 0x10));
                      uVar3 = uStack_ba0;
                      lVar16 = (longlong)(int)uStack_ba0;
                      uVar7 = (int)uStack_ba0 + 1;
                      uStack_ba0 = CONCAT44(uStack_ba0._4_4_,uVar7);
                      if (uStack_ba0._4_4_ < uVar7) {
                        FUN_1447a1bd6(&local_ba8,uVar3 & 0xffffffff);
                      }
                      local_ba8[lVar16 * 2] = 0;
                      local_ba8[lVar16 * 2] = local_bc8;
                      local_bc8 = 0;
                      *(undefined4 *)(local_ba8 + lVar16 * 2 + 1) = (undefined4)local_bc0;
                      *(undefined4 *)((longlong)local_ba8 + lVar16 * 0x10 + 0xc) = local_bc0._4_4_;
                      local_bc0 = 0;
                    }
                    uVar18 = uVar18 + 1;
                  } while ((uVar18 < local_bb4) ||
                          ((iVar6 = (**(code **)(*(longlong *)local_bb0 + 0x20))
                                              (local_bb0,0x20,local_b98,&local_bb4), -1 < iVar6 &&
                           (uVar18 = 0, local_bb4 != 0))));
                }
              }
              if (local_bb0 != (HKL)0x0) {
                (**(code **)(*(longlong *)local_bb0 + 0x10))();
              }
              uVar7 = GetKeyboardLayoutList(0,(HKL *)0x0);
              local_b78 = (HKL *)0x0;
              local_b6c = 4;
              local_b70 = uVar7;
              if (4 < uVar7) {
                FUN_14692be7c(local_b98);
              }
              ppHVar15 = local_b78;
              if (local_b78 == (HKL *)0x0) {
                ppHVar15 = local_b98;
              }
              memset(ppHVar15,0,(longlong)(int)uVar7 << 3);
              ppHVar15 = local_b78;
              if (local_b78 == (HKL *)0x0) {
                ppHVar15 = local_b98;
              }
              uVar8 = GetKeyboardLayoutList(local_b70,ppHVar15);
              if (uVar8 == uVar7) {
                ppHVar15 = local_b98;
                if (local_b78 != (HKL *)0x0) {
                  ppHVar15 = local_b78;
                }
                if ((longlong)(int)local_b70 != 0) {
                  ppHVar17 = ppHVar15 + (int)local_b70;
                  do {
                    pHVar11 = *ppHVar15;
                    local_bb0 = pHVar11;
                    if ((int)uStack_90 != local_64) {
                      uVar7 = ((uint)((ulonglong)pHVar11 >> 0x14) & 0xffff ^
                              (uint)((ulonglong)pHVar11 >> 4)) * -0x7a143595;
                      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                      puVar13 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar13 = local_60;
                      }
                      for (iVar6 = *(int *)(puVar13 +
                                           (ulonglong)(local_50 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4)
                          ; iVar6 != -1; iVar6 = (int)local_98[(longlong)iVar6 * 2 + 1]) {
                        if ((HKL)local_98[(longlong)iVar6 * 2] == pHVar11) goto LAB_141371cea;
                      }
                    }
                    FUN_1460168aa(&local_98,&local_bc8,&local_bb0);
                    FUN_142855e4f(&local_bc8,pHVar11);
                    uVar18 = uStack_ba0;
                    lVar16 = (longlong)(int)uStack_ba0;
                    uVar7 = (int)uStack_ba0 + 1;
                    uStack_ba0 = CONCAT44(uStack_ba0._4_4_,uVar7);
                    if (uStack_ba0._4_4_ < uVar7) {
                      FUN_1447a1bd6(&local_ba8,uVar18 & 0xffffffff);
                    }
                    local_ba8[lVar16 * 2] = 0;
                    local_ba8[lVar16 * 2] = local_bc8;
                    local_bc8 = 0;
                    *(undefined4 *)(local_ba8 + lVar16 * 2 + 1) = (undefined4)local_bc0;
                    *(undefined4 *)((longlong)local_ba8 + lVar16 * 0x10 + 0xc) = local_bc0._4_4_;
                    local_bc0 = 0;
LAB_141371cea:
                    ppHVar15 = ppHVar15 + 1;
                  } while (ppHVar15 != ppHVar17);
                }
              }
              if (local_b78 != (HKL *)0x0) {
                FUN_1400020a8();
              }
              local_50 = 0;
              if (local_58 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              FUN_145d0cc98(&local_98);
              FUN_1447a1747(local_ba8,uStack_ba0 & 0xffffffff);
              if (local_ba8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              iVar6 = (**(code **)(*(longlong *)*plVar1 + 0x50))();
              if ((iVar6 < 0) || (uVar14 = 2, (int)local_b98[0] != 1)) {
                pHVar11 = GetKeyboardLayout(0);
                UVar9 = ImmGetIMEFileNameW(pHVar11,(LPWSTR)0x0,0);
                uVar14 = 1;
                if (UVar9 != 0) goto LAB_141371d93;
              }
              else {
LAB_141371d93:
                *(undefined4 *)(param_1 + 8) = uVar14;
              }
              FUN_142855fae(param_1);
              uVar18 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
              goto LAB_14137157d;
            }
            FUN_14682f6b8(local_b98,0x400,iVar6);
            if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
              *(undefined8 *)(param_1 + 0x10) = 0;
            }
            if ((longlong *)*plVar1 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar1 + 0x10))();
              *plVar1 = 0;
            }
            if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
              *(undefined8 *)(param_1 + 0x20) = 0;
            }
            if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
              *(undefined8 *)(param_1 + 0x38) = 0;
            }
          }
          if (local_ba8 != (longlong *)0x0) {
            (**(code **)(*local_ba8 + 0x10))();
          }
        }
      }
    }
  }
LAB_14137198e:
  uVar18 = 0;
LAB_14137157d:
  if ((local_48 ^ (ulonglong)local_bf8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 141371da6 FUN_141371da6 body=2656 status=ok
// SIG undefined FUN_141371da6(void)

undefined8 * FUN_141371da6(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined1 local_78 [4];
  wchar_t local_74 [2];
  longlong *local_70 [2];
  undefined4 local_5c;
  wchar_t *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_145aeadf4(param_1);
  if (DAT_14c967100 == DAT_14c96712c) {
    local_5c = 50000;
    local_74[0]._0_1_ = 1;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc352;
    local_74[0]._0_1_ = 2;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc353;
    local_74[0]._0_1_ = 3;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc355;
    local_74[0]._0_1_ = 4;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc356;
    local_74[0]._0_1_ = 5;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc371;
    local_74[0]._0_1_ = 6;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc35e;
    local_74[0]._0_1_ = 7;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc35f;
    local_74[0]._0_1_ = 8;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc364;
    local_74[0]._0_1_ = 9;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc354;
    local_74[0]._0_1_ = 10;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc370;
    local_74[0]._0_1_ = 0xb;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc358;
    local_74[0]._0_1_ = 0xc;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_5c = 0xc357;
    local_74[0]._0_1_ = 0xd;
    local_58 = local_74;
    local_50 = (longlong **)&local_5c;
    FUN_1459bd0ba(local_70,&local_58);
    local_58 = L"ControlTypeButton";
    local_50._0_4_ = 0x11;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"button";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,6);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 1;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeCheckBox";
    local_50._0_4_ = 0x13;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"check box";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,9);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 2;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeComboBox";
    local_50._0_4_ = 0x13;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"combobox";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,8);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 3;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeHyperlink";
    local_50._0_4_ = 0x14;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"hyperlink";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,9);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 4;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeImage";
    local_50._0_4_ = 0x10;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"image";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,5);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 5;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeLayout";
    local_50._0_4_ = 0x11;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"pane";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,4);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 6;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeScrollBar";
    local_50._0_4_ = 0x14;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"scroll bar";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,10);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 7;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeSlider";
    local_50._0_4_ = 0x11;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"slider";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,6);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 8;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeText";
    local_50._0_4_ = 0xf;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"text";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,4);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 9;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeTextEdit";
    local_50._0_4_ = 0x13;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"edit";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,4);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 10;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeWindow";
    local_50._0_4_ = 0x11;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"window";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,6);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 0xb;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeList";
    local_50._0_4_ = 0xf;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"List";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,4);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 0xc;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    local_58 = L"ControlTypeListItem";
    local_50._0_4_ = 0x13;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateAccessibility";
    local_50._0_4_ = 0x12;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"ListItem";
    local_50 = (longlong **)CONCAT44(local_50._4_4_,8);
    FUN_140208c1e(local_70,local_78,local_74,&local_58);
    local_79 = 0xd;
    local_58 = (wchar_t *)&local_79;
    local_50 = local_70;
    FUN_1459ca7b2(&local_5c,&local_58);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141372808 FUN_141372808 body=67 status=ok
// SIG undefined FUN_141372808(void)

undefined8 *
FUN_141372808(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_4 == 0) {
    FUN_141160160(param_1 + 2,param_3,".Small");
  }
  else {
    param_1[2] = param_4;
  }
  param_1[3] = param_5;
  return param_1;
}



// FUNCTION 14137284c FUN_14137284c body=4881 status=ok
// SIG undefined FUN_14137284c(void)

void FUN_14137284c(longlong *param_1,longlong *param_2,ulonglong param_3,longlong *param_4,
                  longlong *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  bool bVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong *plVar38;
  longlong lVar39;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  uint local_90;
  longlong *local_88;
  undefined1 local_7c [4];
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined1 local_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar18 = (longlong *)*param_4;
  local_c8 = param_3;
  if (*(code **)(*plVar18 + 0x50) != FUN_144828418) {
    plVar18 = (longlong *)(**(code **)(*plVar18 + 0x50))();
  }
  FUN_1447a1fc0(plVar18);
  pcVar4 = *(code **)(*(longlong *)*param_4 + 0x28);
  if (pcVar4 != (code *)&LAB_14010c34c && pcVar4 != FUN_14482841c) {
    (*pcVar4)();
  }
  plVar18 = (longlong *)FUN_14001cc68(0x88,0x10);
  lVar37 = *(longlong *)(*param_1 + 0x10);
  *plVar18 = 0;
  plVar18[1] = 0;
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
  plVar20 = DAT_14c844840;
  plVar18[2] = (longlong)DAT_14c844840;
  if (plVar20 != (longlong *)0x0) {
    if (*(code **)(*plVar20 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar20 + 8))();
    }
  }
  *(undefined4 *)(plVar18 + 3) = 0;
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
  plVar20 = DAT_14c844840;
  plVar18[4] = (longlong)DAT_14c844840;
  if (plVar20 != (longlong *)0x0) {
    if (*(code **)(*plVar20 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar20 + 8))();
    }
  }
  uVar35 = 0;
  *(undefined4 *)(plVar18 + 5) = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  plVar18[0xd] = 0;
  plVar18[0xe] = lVar37;
  plVar18[0xf] = 0;
  *(undefined2 *)(plVar18 + 0x10) = 0x101;
  FUN_1410ad4c5(*plVar18,(int)plVar18[1]);
  *(undefined4 *)(plVar18 + 1) = 0;
  if (*(int *)((longlong)plVar18 + 0xc) != 2) {
    FUN_14627fabc(plVar18);
  }
  puVar19 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar19 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  puVar19[1] = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  plVar20 = DAT_14c966e90;
  puVar19[2] = DAT_14c966e90;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar20 + 1;
    *(int *)plVar20 = (int)*plVar20 + 1;
    UNLOCK();
    uVar35 = *(uint *)(puVar19 + 3) & 0xfffffff0;
  }
  *(uint *)(puVar19 + 3) = uVar35;
  plVar20 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar20[1] = (longlong)&DAT_100000001;
  *plVar20 = (longlong)&PTR_FUN_149f021b0;
  plVar20[2] = (longlong)puVar19;
  iVar16 = (int)plVar18[1];
  *(uint *)(plVar18 + 1) = iVar16 + 1U;
  if (*(uint *)((longlong)plVar18 + 0xc) < iVar16 + 1U) {
    FUN_1469eb4ae(plVar18,iVar16);
  }
  lVar37 = *plVar18;
  *(undefined8 **)(lVar37 + (longlong)iVar16 * 0x10) = puVar19;
  *(longlong **)(lVar37 + 8 + (longlong)iVar16 * 0x10) = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar20 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  puVar19 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar19 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  puVar19[1] = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  plVar20 = DAT_14c966e90;
  puVar19[2] = DAT_14c966e90;
  uVar35 = 0;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar20 + 1;
    *(int *)plVar20 = (int)*plVar20 + 1;
    UNLOCK();
    uVar35 = *(uint *)(puVar19 + 3) & 0xfffffff0;
  }
  *(uint *)(puVar19 + 3) = uVar35;
  plVar20 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar20[1] = (longlong)&DAT_100000001;
  *plVar20 = (longlong)&PTR_FUN_149f021b0;
  plVar20[2] = (longlong)puVar19;
  iVar16 = (int)plVar18[1];
  *(uint *)(plVar18 + 1) = iVar16 + 1U;
  if (*(uint *)((longlong)plVar18 + 0xc) < iVar16 + 1U) {
    FUN_1469eb4ae(plVar18,iVar16);
  }
  lVar37 = *plVar18;
  *(undefined8 **)(lVar37 + (longlong)iVar16 * 0x10) = puVar19;
  *(longlong **)(lVar37 + 8 + (longlong)iVar16 * 0x10) = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar20 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  plVar20 = DAT_14c966e90;
  local_a8 = (longlong *)CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_a0 = (longlong **)CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xfffffff0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_98 = plVar20;
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    local_90 = local_90 & 0xfffffff0;
    LOCK();
    plVar21 = plVar20 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  FUN_141238b68(plVar18 + 6,&local_a8);
  plVar20 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_98 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  plVar20 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar20[1] = (longlong)&DAT_100000001;
  *plVar20 = (longlong)&PTR_FUN_149f02320;
  plVar20[2] = (longlong)plVar18;
  *param_2 = (longlong)plVar18;
  plVar18 = (longlong *)param_2[1];
  if (plVar20 == plVar18) {
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar16 = *piVar1;
        UNLOCK();
joined_r0x000141372cb6:
        if (iVar16 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
  }
  else {
    param_2[1] = (longlong)plVar20;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar18 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar16 = *piVar1;
        UNLOCK();
        plVar20 = plVar18;
        goto joined_r0x000141372cb6;
      }
    }
  }
  *(ulonglong *)(*param_2 + 0x68) = local_c8;
  lVar37 = *param_2;
  plVar18 = (longlong *)*param_4;
  plVar20 = *(longlong **)(lVar37 + 0x10);
  if (plVar20 != plVar18) {
    *(longlong **)(lVar37 + 0x10) = plVar18;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  *(int *)(lVar37 + 0x18) = (int)param_4[1];
  lVar37 = *param_2;
  plVar18 = (longlong *)*param_5;
  plVar20 = *(longlong **)(lVar37 + 0x20);
  if (plVar20 != plVar18) {
    *(longlong **)(lVar37 + 0x20) = plVar18;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  *(int *)(lVar37 + 0x28) = (int)param_5[1];
  lVar37 = *param_2;
  uVar7 = *param_6;
  uVar8 = param_6[1];
  uVar9 = param_6[2];
  uVar10 = param_6[3];
  uVar11 = param_6[5];
  uVar12 = param_6[6];
  uVar13 = param_6[7];
  *(undefined4 *)(lVar37 + 0x50) = param_6[4];
  *(undefined4 *)(lVar37 + 0x54) = uVar11;
  *(undefined4 *)(lVar37 + 0x58) = uVar12;
  *(undefined4 *)(lVar37 + 0x5c) = uVar13;
  *(undefined4 *)(lVar37 + 0x40) = uVar7;
  *(undefined4 *)(lVar37 + 0x44) = uVar8;
  *(undefined4 *)(lVar37 + 0x48) = uVar9;
  *(undefined4 *)(lVar37 + 0x4c) = uVar10;
  *(undefined1 *)(*param_2 + 0x80) = 1;
  puVar19 = *(undefined8 **)(*param_2 + 0x30);
  *puVar19 = *param_7;
  uVar22 = param_7[1];
  lVar37 = param_7[2];
  if (lVar37 != 0) {
    LOCK();
    *(int *)(lVar37 + 8) = *(int *)(lVar37 + 8) + 1;
    UNLOCK();
  }
  plVar18 = (longlong *)puVar19[2];
  puVar19[1] = uVar22;
  puVar19[2] = lVar37;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  *(undefined1 *)(puVar19 + 3) = *(undefined1 *)(param_7 + 3);
  lVar37 = *(longlong *)(*param_2 + 0x30);
  *(undefined8 *)(lVar37 + 0x20) = *param_8;
  uVar22 = param_8[1];
  lVar39 = param_8[2];
  if (lVar39 != 0) {
    LOCK();
    *(int *)(lVar39 + 8) = *(int *)(lVar39 + 8) + 1;
    UNLOCK();
  }
  plVar18 = *(longlong **)(lVar37 + 0x30);
  *(undefined8 *)(lVar37 + 0x28) = uVar22;
  *(longlong *)(lVar37 + 0x30) = lVar39;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar18 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  *(undefined1 *)(lVar37 + 0x38) = *(undefined1 *)(param_8 + 3);
  *(undefined8 *)(*param_2 + 0x78) = 0;
  FUN_145939d0e();
  plVar18 = (longlong *)*param_2;
  plVar20 = (longlong *)param_2[1];
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  local_88 = *(longlong **)(*param_1 + 0x10);
  uVar35 = (uint)((ulonglong)local_88 >> 0x10);
  uVar17 = (uint)local_88 & 0xffff;
  plVar21 = (longlong *)
            FUN_145cfda58(((uint)local_88 << 0x10 | uVar17) + (int)((ulonglong)local_88 >> 0x20) +
                          (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar17 >> 4));
  local_d0 = plVar21;
  if (plVar21[0xc] == 0) {
    lVar37 = *param_1;
    plVar30 = (longlong *)param_1[1];
    if (plVar30 == (longlong *)0x0) {
      plVar21[0xc] = lVar37;
      plVar38 = (longlong *)plVar21[0xd];
      if (plVar38 != (longlong *)0x0) {
        plVar21[0xd] = 0;
LAB_141372ec0:
        LOCK();
        plVar30 = plVar38 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar38)(plVar38);
          LOCK();
          piVar1 = (int *)((longlong)plVar38 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar16 = *piVar1;
          UNLOCK();
joined_r0x000141372eb3:
          if (iVar16 == 0) {
            (**(code **)(*plVar38 + 0x10))(plVar38);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
      UNLOCK();
      plVar21[0xc] = lVar37;
      plVar38 = (longlong *)plVar21[0xd];
      if (plVar30 == plVar38) {
        LOCK();
        plVar38 = plVar30 + 1;
        *(int *)plVar38 = (int)*plVar38 + -1;
        UNLOCK();
        if ((int)*plVar38 == 0) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar16 = *piVar1;
          UNLOCK();
          plVar38 = plVar30;
          goto joined_r0x000141372eb3;
        }
      }
      else {
        plVar21[0xd] = (longlong)plVar30;
        if (plVar38 != (longlong *)0x0) goto LAB_141372ec0;
      }
    }
  }
  plVar30 = *(longlong **)(*param_1 + 0x18);
  if (plVar30 != (longlong *)0x0) {
    local_a8 = *(longlong **)(*param_1 + 0x10);
    local_78 = plVar30;
    FUN_1469ea702();
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  lVar37 = *param_1;
  lVar39 = 0;
  bVar14 = true;
  local_e0 = plVar21;
  do {
    bVar34 = bVar14;
    lVar36 = plVar18[6] + lVar39 * 0x20;
    cVar15 = FUN_1403e7f2a(lVar36);
    if (((cVar15 != '\0') && (cVar15 = FUN_14171cb38(lVar36), cVar15 == '\0')) &&
       (FUN_14582bfba(&local_a8,*(undefined8 *)(lVar37 + 0x10),lVar39 * 0x20 + plVar18[6]),
       plVar21 = (longlong *)uStack_a0, uStack_a0 != (longlong **)0x0)) {
      LOCK();
      plVar30 = (longlong *)(uStack_a0 + 1);
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (*(code *)**uStack_a0)(uStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    lVar39 = 1;
    bVar14 = false;
  } while (bVar34);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar20 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  plVar21 = local_e0;
  if ((int)local_e0[1] != *(int *)((longlong)local_e0 + 0x34)) {
    lVar37 = plVar18[0xd];
    uVar35 = (uint)((ulonglong)lVar37 >> 0x10);
    uVar17 = (uint)lVar37 & 0xffff;
    plVar30 = local_d0 + 7;
    if ((longlong *)local_e0[8] != (longlong *)0x0) {
      plVar30 = (longlong *)local_e0[8];
    }
    iVar16 = *(int *)((longlong)plVar30 +
                     (ulonglong)
                     ((int)local_e0[9] - 1U &
                     (int)((ulonglong)lVar37 >> 0x20) + ((uint)lVar37 << 0x10 | uVar17) +
                     (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar17 >> 4)) * 4);
    if (iVar16 != -1) {
      local_d8 = (longlong *)0x0;
      do {
        lVar39 = *local_e0 + (longlong)iVar16 * 0x20;
        if (*(longlong *)(*local_e0 + (longlong)iVar16 * 0x20) == lVar37) {
          if ((lVar39 == 0) ||
             (local_d8 = *(longlong **)(lVar39 + 0x10), local_d8 == (longlong *)0x0))
          goto LAB_141373056;
          LOCK();
          *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
          UNLOCK();
          break;
        }
        iVar16 = *(int *)(lVar39 + 0x18);
      } while (iVar16 != -1);
      goto LAB_14137305f;
    }
  }
LAB_141373056:
  local_d8 = (longlong *)0x0;
LAB_14137305f:
  local_c0 = plVar18 + 0xd;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  uStack_a0 = &local_78;
  local_b8 = plVar20;
  local_a8 = local_c0;
  local_78 = plVar18;
  local_70 = plVar20;
  uVar22 = FUN_1459e1fa2(local_e0,&local_b0);
  plVar20 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar30 = local_70 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      uVar22 = (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar22 = (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  local_d0 = local_d0 + 7;
  uVar22 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
  lVar37 = 0;
  do {
    plVar20 = local_88;
    local_c8 = CONCAT44(local_c8._4_4_,(int)uVar22);
    local_a8 = (longlong *)CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
    uStack_a0 = (longlong **)CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
    local_98 = DAT_14c966e90;
    if (DAT_14c966e90 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
      UNLOCK();
    }
    local_90 = local_90 & 0xfffffff0;
    plVar30 = (longlong *)*local_c0;
    if (DAT_14c98e810 == (longlong *)0x0) {
      plVar26 = (longlong *)FUN_14001cc68(0x10,0x10);
      *plVar26 = 0;
      plVar26[1] = 0;
      plVar27 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar27[1] = (longlong)&DAT_100000001;
      *plVar27 = (longlong)&PTR_FUN_149f02190;
      plVar27[2] = (longlong)plVar26;
      plVar38 = DAT_14c98e818;
      DAT_14c98e810 = plVar26;
      if (plVar27 == DAT_14c98e818) {
        plVar26 = DAT_14c98e818;
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          plVar38 = plVar27 + 1;
          *(int *)plVar38 = (int)*plVar38 + -1;
          UNLOCK();
          plVar26 = DAT_14c98e818;
          if ((int)*plVar38 == 0) {
            (**(code **)*plVar27)(plVar27);
            LOCK();
            piVar1 = (int *)((longlong)plVar27 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar16 = *piVar1;
            UNLOCK();
            plVar38 = plVar27;
            goto joined_r0x00014137376e;
          }
        }
      }
      else {
        plVar26 = plVar27;
        if (DAT_14c98e818 != (longlong *)0x0) {
          LOCK();
          plVar2 = DAT_14c98e818 + 1;
          DAT_14c98e818 = plVar27;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          plVar26 = DAT_14c98e818;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar38)(plVar38);
            LOCK();
            piVar1 = (int *)((longlong)plVar38 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar16 = *piVar1;
            UNLOCK();
joined_r0x00014137376e:
            plVar26 = DAT_14c98e818;
            if (iVar16 == 0) {
              (**(code **)(*plVar38 + 0x10))(plVar38);
              plVar26 = DAT_14c98e818;
            }
          }
        }
      }
      DAT_14c98e818 = plVar26;
      FUN_1457e47a4(DAT_14c98e810);
    }
    plVar38 = (longlong *)*DAT_14c98e810;
    if (plVar38 == (longlong *)0x0) {
LAB_1413731d7:
      lVar36 = lVar37 * 0x20;
      lVar39 = plVar18[6];
      cVar15 = FUN_1403e7f2a(lVar39 + lVar36);
      if ((cVar15 != '\0') && (cVar15 = FUN_14171cb38(lVar39 + lVar36), cVar15 == '\0')) {
        lVar39 = plVar21[10];
        lVar5 = plVar18[6];
        uVar22 = *(undefined8 *)(lVar5 + lVar36);
        uVar17 = (uint)((ulonglong)uVar22 >> 0x10);
        uVar31 = (uint)uVar22 & 0xffff;
        uVar35 = *(uint *)(lVar5 + 0x18 + lVar36);
        bVar3 = 1;
        lVar23 = 0;
        do {
          plVar20 = (longlong *)(lVar23 * 0x50 + lVar39);
          iVar16 = FUN_14141fe50(plVar20,uVar35 & 0xf ^
                                         ((uint)uVar22 << 0x10 | uVar31) +
                                         (int)((ulonglong)uVar22 >> 0x20) +
                                         (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar31 >> 4),
                                 lVar5 + lVar36);
          plVar21 = local_e0;
          if ((iVar16 == -1) || (lVar23 = (longlong)iVar16 * 0x30 + *plVar20, lVar23 == 0)) {
            uVar24 = 0;
            uVar29 = 0;
          }
          else {
            uVar29 = *(ulonglong *)(lVar23 + 0x20);
            uVar24 = uVar29 & 0xffffffff00000000;
          }
          lVar23 = 1;
          bVar14 = (bool)(bVar3 & ((uVar29 & 0xffffffff) == 0 && uVar24 == 0));
          bVar3 = 0;
        } while (bVar14);
        if ((uVar29 & 0xffffffff) == 0 && uVar24 == 0) {
          puVar19 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          lVar39 = plVar18[6];
          *puVar19 = *(undefined8 *)(lVar39 + lVar36);
          puVar19[1] = *(undefined8 *)(lVar39 + 8 + lVar36);
          lVar5 = *(longlong *)(lVar39 + 0x10 + lVar36);
          puVar19[2] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          *(undefined1 *)(puVar19 + 3) = *(undefined1 *)(lVar39 + lVar36 + 0x18);
          plVar20 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar20[1] = (longlong)&DAT_100000001;
          *plVar20 = (longlong)&PTR_FUN_149f021b0;
          plVar20[2] = (longlong)puVar19;
          puVar25 = (undefined8 *)(lVar37 * 0x10 + *plVar18);
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
          }
          plVar30 = (longlong *)puVar25[1];
          *puVar25 = puVar19;
          puVar25[1] = plVar20;
          if (plVar30 != (longlong *)0x0) {
            LOCK();
            plVar38 = plVar30 + 1;
            *(int *)plVar38 = (int)*plVar38 + -1;
            UNLOCK();
            if ((int)*plVar38 == 0) {
              (**(code **)*plVar30)(plVar30);
              LOCK();
              piVar1 = (int *)((longlong)plVar30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
            }
          }
          goto joined_r0x0001413733e4;
        }
      }
    }
    else {
      local_78 = plVar20;
      local_68 = (undefined1)lVar37;
      local_67 = 0;
      uVar35 = (uint)((ulonglong)plVar20 >> 0x10);
      uVar31 = (uint)plVar20 & 0xffff;
      uVar17 = (uint)((ulonglong)plVar30 >> 0x10);
      uVar32 = (uint)plVar30 & 0xffff;
      local_70 = plVar30;
      iVar16 = FUN_1428fbbac(plVar38,((uint)plVar30 << 0x10 | uVar32) +
                                     (int)((ulonglong)plVar30 >> 0x20) +
                                     (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar32 >> 4) ^
                                     ((uint)plVar20 << 0x10 | uVar31) +
                                     (int)((ulonglong)plVar20 >> 0x20) +
                                     (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar31 >> 4),&local_78);
      plVar20 = local_98;
      if ((iVar16 == -1) || (lVar39 = (longlong)iVar16 * 0x40 + *plVar38, lVar39 == 0))
      goto LAB_1413731d7;
      local_a8 = *(longlong **)(lVar39 + 0x18);
      uStack_a0 = *(longlong ***)(lVar39 + 0x20);
      plVar21 = *(longlong **)(lVar39 + 0x28);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar30 = local_98 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          puVar19 = (undefined8 *)*local_98;
          local_98 = plVar21;
          (*(code *)*puVar19)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar21 = local_98;
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            plVar21 = local_98;
          }
        }
      }
      local_98 = plVar21;
      bVar3 = *(byte *)(lVar39 + 0x30);
      local_90 = CONCAT31(local_90._1_3_,bVar3);
      lVar39 = local_e0[10];
      uVar17 = (uint)local_a8;
      uVar35 = (uint)((ulonglong)local_a8 >> 0x10);
      uVar31 = uVar17 & 0xffff;
      uVar29 = (ulonglong)local_a8 >> 0x20;
      bVar6 = 1;
      lVar36 = 0;
      do {
        plVar20 = (longlong *)(lVar36 * 0x50 + lVar39);
        iVar16 = FUN_14141fe50(plVar20,bVar3 & 0xf ^
                                       (uVar17 << 0x10 | uVar31) + (int)uVar29 +
                                       (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar31 >> 4),&local_a8)
        ;
        uVar24 = 0;
        if (iVar16 == -1) {
          uVar33 = 0;
        }
        else {
          uVar33 = 0;
          lVar36 = (longlong)iVar16 * 0x30 + *plVar20;
          if (lVar36 != 0) {
            uVar24 = *(ulonglong *)(lVar36 + 0x20);
            uVar33 = uVar24 >> 0x20;
          }
        }
        uVar28 = uVar24 & 0xffffffff | uVar33 << 0x20;
        lVar36 = 1;
        bVar14 = (bool)(bVar6 & uVar28 == 0);
        bVar6 = 0;
      } while (bVar14);
      if (uVar28 != 0) {
        if ((int)local_e0[1] != *(int *)((longlong)local_e0 + 0x34)) {
          uVar35 = (uint)(uVar24 >> 0x10);
          uVar17 = (uint)uVar24 & 0xffff;
          plVar20 = (longlong *)local_e0[8];
          if ((longlong *)local_e0[8] == (longlong *)0x0) {
            plVar20 = local_d0;
          }
          iVar16 = *(int *)((longlong)plVar20 +
                           (ulonglong)
                           ((int)local_e0[9] - 1U &
                           ((uint)uVar24 << 0x10 | uVar17) + (int)uVar33 +
                           (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar17 >> 4)) * 4);
          if (iVar16 != -1) {
            do {
              lVar36 = *local_e0 + (longlong)iVar16 * 0x20;
              if (*(ulonglong *)(*local_e0 + (longlong)iVar16 * 0x20) == uVar28) {
                if (lVar36 != 0) {
                  plVar20 = *(longlong **)(lVar36 + 8);
                  plVar21 = *(longlong **)(lVar36 + 0x10);
                  if (plVar21 == (longlong *)0x0) goto LAB_14137382b;
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                  lVar39 = local_e0[10];
                  goto LAB_14137382d;
                }
                break;
              }
              iVar16 = *(int *)(lVar36 + 0x18);
            } while (iVar16 != -1);
          }
        }
        plVar20 = (longlong *)0x0;
LAB_14137382b:
        plVar21 = (longlong *)0x0;
LAB_14137382d:
        lVar36 = lVar37 * 0x10;
        FUN_1469ea9da(lVar37 * 0x50 + lVar39,*(undefined8 *)(*plVar20 + lVar36));
        puVar19 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *puVar19 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
        uVar29 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
        puVar19[1] = uVar29;
        plVar30 = DAT_14c966e90;
        puVar19[2] = DAT_14c966e90;
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          plVar30 = plVar30 + 1;
          *(int *)plVar30 = (int)*plVar30 + 1;
          UNLOCK();
          uVar29 = (ulonglong)*(uint *)(puVar19 + 3);
        }
        *(uint *)(puVar19 + 3) = (uint)uVar29 & 0xfffffff0;
        lVar39 = *plVar20;
        puVar25 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        puVar25[1] = &DAT_100000001;
        *puVar25 = &PTR_FUN_149f021b0;
        puVar25[2] = puVar19;
        plVar20 = *(longlong **)(lVar39 + 8 + lVar36);
        *(undefined8 **)(lVar39 + lVar36) = puVar19;
        *(undefined8 **)(lVar39 + 8 + lVar36) = puVar25;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar30 = plVar20 + 1;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)*plVar30 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
      }
      puVar19 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar19 = local_a8;
      puVar19[1] = uStack_a0;
      puVar19[2] = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      *(undefined1 *)(puVar19 + 3) = (undefined1)local_90;
      plVar20 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar20[1] = (longlong)&DAT_100000001;
      *plVar20 = (longlong)&PTR_FUN_149f021b0;
      plVar20[2] = (longlong)puVar19;
      plVar21 = (longlong *)(lVar37 * 0x10 + *plVar18);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      plVar30 = (longlong *)plVar21[1];
      *plVar21 = (longlong)puVar19;
      plVar21[1] = (longlong)plVar20;
      plVar21 = local_e0;
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        plVar38 = plVar30 + 1;
        *(int *)plVar38 = (int)*plVar38 + -1;
        UNLOCK();
        if ((int)*plVar38 == 0) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar21 = local_e0;
          if (*piVar1 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            plVar21 = local_e0;
          }
        }
      }
joined_r0x0001413733e4:
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar30 = plVar20 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
    }
    lVar39 = lVar37 * 0x10;
    uVar22 = *(undefined8 *)(*plVar18 + lVar39);
    cVar15 = FUN_1403e7f2a(uVar22);
    if ((cVar15 != '\0') && (cVar15 = FUN_14171cb38(uVar22), cVar15 == '\0')) {
      lVar37 = lVar37 * 0x50 + plVar21[10];
      local_b0 = plVar18[0xd];
      local_78 = *(longlong **)(*plVar18 + lVar39);
      plVar20 = *(longlong **)(*plVar18 + 8 + lVar39);
      if (plVar20 == (longlong *)0x0) {
        local_70 = &local_b0;
        FUN_1459a4fb6(lVar37,local_7c,&local_78);
      }
      else {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        local_70 = &local_b0;
        FUN_1459a4fb6(lVar37,local_7c,&local_78);
        LOCK();
        plVar30 = plVar20 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
    }
    plVar20 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar30 = local_98 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    plVar20 = local_d8;
    lVar37 = 1;
    uVar22 = 0;
    if ((local_c8 & 1) == 0) {
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar18 = local_d8 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      plVar18 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_b8 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 141373b5e FUN_141373b5e body=93906 status=FAIL
// SIG undefined FUN_141373b5e(void)
/* DECOMPILE FAILED */

// FUNCTION 14138aa40 FUN_14138aa40 body=103673 status=FAIL
// SIG undefined FUN_14138aa40(void)
/* DECOMPILE FAILED */

// FUNCTION 1413a3f3a FUN_1413a3f3a body=16 status=ok
// SIG undefined FUN_1413a3f3a(void)

void FUN_1413a3f3a(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001413a3f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1413a3f4a FUN_1413a3f4a body=33 status=ok
// SIG undefined FUN_1413a3f4a(void)

longlong FUN_1413a3f4a(longlong param_1)

{
  FUN_14023423e();
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1413a3f6c FUN_1413a3f6c body=37 status=ok
// SIG undefined FUN_1413a3f6c(void)

void FUN_1413a3f6c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1413a3f92 FUN_1413a3f92 body=105 status=ok
// SIG undefined FUN_1413a3f92(void)

void FUN_1413a3f92(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1 + 3;
  if ((int)param_1[4] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1413a3fad;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1413a3fad:
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001413a3fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1413a3ffc FUN_1413a3ffc body=13 status=ok
// SIG undefined FUN_1413a3ffc(void)

void FUN_1413a3ffc(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1413a400a FUN_1413a400a body=239 status=ok
// SIG undefined FUN_1413a400a(void)

undefined4 * FUN_1413a400a(undefined4 *param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    *param_1 = 0xffffffff;
    if ((int)sVar1 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c845168) {
        FUN_144b3d300(&DAT_14c845168);
        if (DAT_14c845168 == -1) {
          FUN_1456aef72(&DAT_14c8450d0);
          DAT_14c845160 = &DAT_14c8450d0;
          atexit(FUN_142767c9e);
          _Init_thread_footer(&DAT_14c845168);
        }
      }
      local_38 = param_2;
      local_30 = (int)sVar1;
      FUN_14003e488(DAT_14c845160,&local_38,param_1);
      goto LAB_1413a4086;
    }
  }
  *param_1 = 0xffffffff;
LAB_1413a4086:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413a40fa FUN_1413a40fa body=243 status=ok
// SIG undefined FUN_1413a40fa(void)

undefined8 * FUN_1413a40fa(undefined8 *param_1)

{
  longlong *plVar1;
  
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
  *param_1 = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1413a41ee FUN_1413a41ee body=309 status=ok
// SIG undefined FUN_1413a41ee(void)

undefined8 *
FUN_1413a41ee(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_5;
  plVar4 = (longlong *)*param_3;
  param_1[9] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 10) = (int)param_3[1];
  *(char *)(param_1 + 0xb) = (char)param_3[2];
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1413a4324(param_1 + 0xc,param_3 + 3);
  plVar4 = (longlong *)*param_6;
  param_1[0xe] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 0xf) = (int)param_6[1];
  *(char *)(param_1 + 0x10) = (char)param_6[2];
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_1413a4324(param_1 + 0x11,param_6 + 3);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_1413a4460(param_1,param_4);
  plVar4 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 1413a4324 FUN_1413a4324 body=314 status=ok
// SIG undefined FUN_1413a4324(void)

void FUN_1413a4324(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1413a43b1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1413a438a:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1413a438a;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1413a43b1;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1413a43b1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413a4460 FUN_1413a4460 body=213 status=ok
// SIG undefined FUN_1413a4460(void)

void FUN_1413a4460(longlong param_1,uint param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  bVar1 = (byte)param_2;
  *(byte *)(param_1 + 0x40) =
       (byte)(param_2 >> 2) & 0x80 | ((param_2 & 0x300) == 0) << 6 | bVar1 >> 2 & 0x20 |
       ((param_2 & 0x210) == 0) << 4 | bVar1 * '\x02' & 0xe | bVar1 >> 3 & 1;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xfe | (byte)(param_2 >> 0xc) & 1;
  if ((param_2 >> 10 & 1) == 0) {
    if ((param_2 & 0x20) == 0) {
      if ((param_2 >> 0xb & 1) == 0) {
        if ((param_2 & 0x40) == 0) {
          *(undefined1 *)(param_1 + 0x42) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x42) = 4;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x42) = 3;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x42) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    puVar3 = &DAT_14c966d58;
    if ((param_2 & 4) == 0) {
      puVar3 = &DAT_14c966d60;
    }
    puVar2 = &DAT_14c966d50;
    if ((param_2 & 1) == 0) {
      puVar2 = puVar3;
    }
    *(undefined8 *)(param_1 + 0x38) = *puVar2;
  }
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfe;
  return;
}



// FUNCTION 1413a4536 FUN_1413a4536 body=22 status=ok
// SIG undefined FUN_1413a4536(void)

undefined8 FUN_1413a4536(undefined8 param_1)

{
  FUN_1413a454c();
  return param_1;
}



// FUNCTION 1413a454c FUN_1413a454c body=500 status=ok
// SIG undefined FUN_1413a454c(void)

longlong * FUN_1413a454c(longlong *param_1,uint param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong lStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  puVar7 = (undefined8 *)*param_4;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(DAT_14c844be0 + 0x38);
    plVar3 = *(longlong **)(DAT_14c844be0 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  lVar4 = (**(code **)(*(longlong *)*puVar7 + 0x80))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_48 = *(undefined8 *)(puVar5 + 4);
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  lStack_50 = *(longlong *)(puVar5 + 2);
  uVar6 = -param_2;
  if ((int)-param_2 < 0) {
    uVar6 = param_2;
  }
  FUN_14010d0dd(param_2 >> 0x1f,uVar6,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_78[2] = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  lStack_50 = (longlong)(int)param_2;
  local_88 = local_78 + 2;
  FUN_1402349c6(lVar4,local_78,&local_58,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413a4742 FUN_1413a4742 body=107 status=ok
// SIG undefined FUN_1413a4742(void)

undefined8 * FUN_1413a4742(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
      if (plVar3 != (longlong *)0x0) {
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
    }
  }
  return param_1;
}



// FUNCTION 1413a47ae FUN_1413a47ae body=1736 status=ok
// SIG undefined FUN_1413a47ae(void)

void FUN_1413a47ae(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined *puVar18;
  byte bVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  bool bVar29;
  
  puVar15 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  *puVar15 = *param_1;
  puVar15[1] = param_1[1];
  lVar17 = param_1[2];
  puVar15[2] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar15 + 3) = *(undefined1 *)(param_1 + 3);
  puVar15[4] = param_1[4];
  puVar15[5] = param_1[5];
  lVar17 = param_1[6];
  puVar15[6] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)((longlong)puVar15 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x3f);
  puVar15[7] = param_1[7];
  plVar3 = (longlong *)param_1[9];
  puVar15[9] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(param_1 + 10);
  *(undefined1 *)(puVar15 + 0xb) = *(undefined1 *)(param_1 + 0xb);
  puVar15[0xc] = 0;
  *(undefined4 *)(puVar15 + 0xd) = 0;
  FUN_1413a4324(puVar15 + 0xc,param_1 + 0xc);
  plVar3 = (longlong *)param_1[0xe];
  puVar15[0xe] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(puVar15 + 0xf) = *(undefined4 *)(param_1 + 0xf);
  *(undefined1 *)(puVar15 + 0x10) = *(undefined1 *)(param_1 + 0x10);
  puVar15[0x11] = 0;
  *(undefined4 *)(puVar15 + 0x12) = 0;
  FUN_1413a4324(puVar15 + 0x11,param_1 + 0x11);
  *(byte *)(puVar15 + 0x13) = *(byte *)(puVar15 + 0x13) & 0xfe | *(byte *)(param_1 + 0x13) & 1;
  puVar15[0x14] = 0;
  iVar27 = *(int *)(param_1 + 0x15);
  uVar4 = param_1[0x14];
  *(int *)(puVar15 + 0x15) = iVar27;
  if (iVar27 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0xac) = 0;
  }
  else {
    FUN_145732088(puVar15 + 0x14,iVar27,0);
    FUN_14573204f(puVar15[0x14],uVar4,iVar27);
  }
  plVar16 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_149ec5340;
  plVar16[2] = (longlong)puVar15;
  param_1[1] = puVar15;
  plVar3 = (longlong *)param_1[2];
  if (plVar16 == plVar3) {
    if (plVar16 == (longlong *)0x0) goto LAB_1413a496b;
    LOCK();
    plVar3 = plVar16 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1413a496b;
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar27 = *piVar1;
    UNLOCK();
    plVar3 = plVar16;
  }
  else {
    param_1[2] = plVar16;
    if (plVar3 == (longlong *)0x0) goto LAB_1413a496b;
    LOCK();
    plVar16 = plVar3 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 != 0) goto LAB_1413a496b;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar27 = *piVar1;
    UNLOCK();
  }
  if (iVar27 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1413a496b:
  iVar26 = DAT_14c966dd0;
  iVar27 = DAT_14c966da8;
  if (DAT_14c966dd4 == 0) {
    iVar26 = DAT_14c966da8 + 1;
    bVar29 = DAT_14c966dac == DAT_14c966da8;
    DAT_14c966da8 = iVar26;
    if (bVar29) {
      FUN_140044672(&DAT_14c966da0,iVar27);
    }
    iVar26 = DAT_14c966dc8;
    if (DAT_14c966dc8 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = DAT_14c966dc8 + 0x1e;
      if (-1 < DAT_14c966dc8 + -1) {
        iVar12 = DAT_14c966dc8 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    iVar20 = DAT_14c966dc8 + 1;
    iVar25 = DAT_14c966dc8 + 0x1f;
    if (-1 < DAT_14c966dc8) {
      iVar25 = DAT_14c966dc8;
    }
    if (iVar25 >> 5 != iVar12) {
      if (DAT_14c966dcc <= DAT_14c966dc8) {
        if (DAT_14c966dc8 + 0x20U < 0xa0) {
          DAT_14c966dcc = 0x80;
        }
        else {
          uVar13 = DAT_14c966dc8 + 0x20U >> 5;
          if (DAT_14c966dcc + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar13) {
              uVar23 = uVar13;
            }
          }
          else {
            uVar23 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar21 = (ulonglong)(uVar23 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar14 = (uint)(uVar21 + 0xf);
              if (uVar23 < 0x1ffd) {
                uVar21 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar21 + 0xf >> 4]];
              }
              else {
                uVar22 = (ulonglong)(uVar14 & 0xfffffff0);
                if (uVar22 < 0x7ff1) {
                  bVar19 = (&DAT_14c841e00)[uVar14 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar19) {
                    uVar24 = (ulonglong)bVar19;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar19;
                  do {
                    uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_1413a4cc7;
                    lVar17 = uVar24 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar17 != 0x33);
                }
                uVar21 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar21 = (ulonglong)DAT_14c841df8;
                }
                uVar21 = -uVar21 & (uVar22 + uVar21) - 1;
              }
            }
            else {
              uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
            }
          }
LAB_1413a4cc7:
          iVar12 = (int)(uVar21 >> 2);
          DAT_14c966dcc = -0x20;
          if ((int)uVar13 <= iVar12) {
            DAT_14c966dcc = iVar12 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14c966db0,DAT_14c966dc8);
        iVar20 = DAT_14c966dc8 + 1;
      }
      iVar12 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar12 = iVar20;
      }
      if (iVar20 % 0x20 != 0) {
        puVar18 = &DAT_14c966db0;
        if (DAT_14c966dc0 != (undefined *)0x0) {
          puVar18 = DAT_14c966dc0;
        }
        bVar19 = -(char)(iVar20 % 0x20);
        DAT_14c966dc8 = iVar20;
        *(uint *)(puVar18 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)(puVar18 + (longlong)(iVar12 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
        iVar20 = DAT_14c966dc8;
      }
    }
    DAT_14c966dc8 = iVar20;
    lVar17 = (longlong)iVar27;
    puVar18 = &DAT_14c966db0;
    if (DAT_14c966dc0 != (undefined *)0x0) {
      puVar18 = DAT_14c966dc0;
    }
    bVar19 = (byte)iVar26 & 0x1f;
    *(uint *)(puVar18 + (longlong)(iVar25 >> 5) * 4) =
         *(uint *)(puVar18 + (longlong)(iVar25 >> 5) * 4) &
         (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
    iVar26 = iVar27;
  }
  else {
    lVar17 = (longlong)DAT_14c966dd0;
    DAT_14c966dd0 = *(int *)(DAT_14c966da0 + 4 + lVar17 * 0x30);
    DAT_14c966dd4 = DAT_14c966dd4 + -1;
    if (DAT_14c966dd4 != 0) {
      *(undefined4 *)(DAT_14c966da0 + (longlong)DAT_14c966dd0 * 0x30) = 0xffffffff;
    }
  }
  puVar18 = &DAT_14c966db0;
  if (DAT_14c966dc0 != (undefined *)0x0) {
    puVar18 = DAT_14c966dc0;
  }
  iVar27 = iVar26 + 0x1f;
  if (-1 < iVar26) {
    iVar27 = iVar26;
  }
  *(uint *)(puVar18 + (longlong)(iVar27 >> 5) * 4) =
       *(uint *)(puVar18 + (longlong)(iVar27 >> 5) * 4) | 1 << ((byte)iVar26 & 0x1f);
  lVar11 = DAT_14c966da0;
  lVar17 = lVar17 * 0x30;
  plVar3 = (longlong *)(DAT_14c966da0 + lVar17);
  *(undefined8 *)(DAT_14c966da0 + lVar17) = *param_1;
  lVar5 = param_1[1];
  *(longlong *)(lVar11 + 8 + lVar17) = lVar5;
  lVar6 = param_1[2];
  *(longlong *)(lVar11 + 0x10 + lVar17) = lVar6;
  if (lVar6 == 0) {
    plVar3[3] = lVar5;
    plVar3[4] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    lVar17 = param_1[2];
    plVar3[3] = param_1[1];
    plVar3[4] = lVar17;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
  }
  *(undefined4 *)(plVar3 + 5) = 0xffffffff;
  lVar17 = *plVar3;
  uVar13 = (uint)((ulonglong)lVar17 >> 0x10);
  uVar23 = (uint)lVar17 & 0xffff;
  uVar13 = ((uint)lVar17 << 0x10 | uVar23) + (int)((ulonglong)lVar17 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar23 >> 4);
  uVar23 = DAT_14c966da8 - DAT_14c966dd4;
  if ((uVar23 != 0) && (uVar23 != 1)) {
    puVar18 = &DAT_14c966dd8;
    if (DAT_14c966de0 != (undefined *)0x0) {
      puVar18 = DAT_14c966de0;
    }
    iVar27 = *(int *)(puVar18 + (ulonglong)(DAT_14c966de8 - 1U & uVar13) * 4);
    while (iVar27 != -1) {
      puVar2 = (undefined4 *)(DAT_14c966da0 + (longlong)iVar27 * 0x30);
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar27 * 0x30) == lVar17) {
        FUN_146912a40(puVar2);
        lVar17 = *plVar3;
        uVar7 = *(undefined4 *)((longlong)plVar3 + 4);
        lVar5 = plVar3[1];
        uVar8 = *(undefined4 *)((longlong)plVar3 + 0xc);
        lVar6 = plVar3[2];
        uVar9 = *(undefined4 *)((longlong)plVar3 + 0x14);
        lVar11 = plVar3[3];
        uVar10 = *(undefined4 *)((longlong)plVar3 + 0x1c);
        *(longlong *)(puVar2 + 8) = plVar3[4];
        puVar2[4] = (int)lVar6;
        puVar2[5] = uVar9;
        puVar2[6] = (int)lVar11;
        puVar2[7] = uVar10;
        *puVar2 = (int)lVar17;
        puVar2[1] = uVar7;
        puVar2[2] = (int)lVar5;
        puVar2[3] = uVar8;
        FUN_146912df8(iVar26);
        return;
      }
      iVar27 = puVar2[10];
    }
  }
  if (uVar23 < 4) {
    iVar27 = 1;
  }
  else {
    uVar21 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar27 = 1 << ((byte)lVar17 & 0x1f);
  }
  if ((0 < (int)uVar23) && (DAT_14c966de8 < iVar27)) {
    DAT_14c966de8 = iVar27;
    FUN_14171d030();
    return;
  }
  uVar13 = DAT_14c966de8 - 1U & uVar13;
  *(uint *)((longlong)plVar3 + 0x2c) = uVar13;
  puVar18 = DAT_14c966de0;
  if (DAT_14c966de0 == (undefined *)0x0) {
    puVar18 = &DAT_14c966dd8;
  }
  *(undefined4 *)(plVar3 + 5) =
       *(undefined4 *)(puVar18 + ((longlong)DAT_14c966de8 - 1U & (longlong)(int)uVar13) * 4);
  puVar18 = DAT_14c966de0;
  if (DAT_14c966de0 == (undefined *)0x0) {
    puVar18 = &DAT_14c966dd8;
  }
  *(int *)(puVar18 + ((longlong)DAT_14c966de8 - 1U & (longlong)(int)uVar13) * 4) = iVar26;
  return;
}



// FUNCTION 1413a4e76 FUN_1413a4e76 body=304 status=ok
// SIG undefined FUN_1413a4e76(void)

undefined8 *
FUN_1413a4e76(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_6;
  plVar4 = (longlong *)*param_3;
  param_1[9] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 10) = (int)param_3[1];
  *(char *)(param_1 + 0xb) = (char)param_3[2];
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1413a4324(param_1 + 0xc,param_3 + 3);
  plVar4 = (longlong *)*param_4;
  param_1[0xe] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 0xf) = (int)param_4[1];
  *(char *)(param_1 + 0x10) = (char)param_4[2];
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_1413a4324(param_1 + 0x11,param_4 + 3);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_1413a4460(param_1,param_5);
  plVar4 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 1413a4fa6 FUN_1413a4fa6 body=466 status=ok
// SIG undefined FUN_1413a4fa6(void)

void FUN_1413a4fa6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
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
  plVar2 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
    }
  }
  plVar1 = (longlong *)*param_2;
  plVar7 = plVar2;
  if (plVar2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    plVar7 = plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  lVar4 = param_2[1];
  uVar3 = (uint)((ulonglong)param_1 >> 0x10);
  uVar6 = (uint)param_1 & 0xffff;
  puVar5 = (undefined8 *)
           FUN_1458deba6(((uint)param_1 << 0x10 | uVar6) + (int)((ulonglong)param_1 >> 0x20) +
                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4),&local_40);
  plVar2 = (longlong *)*puVar5;
  if (plVar2 != plVar7) {
    *puVar5 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(puVar5 + 1) = (int)lVar4;
  puVar5[2] = param_3;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413a517a FUN_1413a517a body=90 status=ok
// SIG undefined FUN_1413a517a(void)

undefined8 * FUN_1413a517a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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
  return param_1;
}



// FUNCTION 1413a51d4 FUN_1413a51d4 body=258 status=ok
// SIG undefined FUN_1413a51d4(void)

void FUN_1413a51d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[1] == 0) {
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
    if (local_28 != plVar3) {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
      if (plVar3 == (longlong *)0x0) goto LAB_1413a51f1;
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
LAB_1413a51f1:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413a52d8 FUN_1413a52d8 body=177891 status=FAIL
// SIG undefined FUN_1413a52d8(void)
/* DECOMPILE FAILED */

// FUNCTION 1413d09bc FUN_1413d09bc body=139 status=ok
// SIG undefined FUN_1413d09bc(void)

void FUN_1413d09bc(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148a1c084(param_2,0);
  }
  local_28 = FUN_1413d0a48();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1413d0b2e(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d0a48 FUN_1413d0a48 body=228 status=ok
// SIG undefined FUN_1413d0a48(void)

longlong FUN_1413d0a48(void)

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
  if (DAT_14cb93328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146431868;
    local_38 = &LAB_148a095c0;
    local_40 = &LAB_146570b1d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x470;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"GbxAIHeldWeaponComponent",&DAT_14cb93328,FUN_146570af6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb93328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d0b2e FUN_1413d0b2e body=1605 status=ok
// SIG undefined FUN_1413d0b2e(void)

void FUN_1413d0b2e(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  bool local_79;
  longlong *local_78;
  uint *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar13 = *param_2;
  if (lVar13 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_1413d0fdc:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
    }
LAB_1413d0b9d:
    lVar9 = *param_2;
    local_79 = lVar9 != 0;
    if (lVar13 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar9 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
      local_58 = lVar9;
      if ((lVar9 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar9);
      }
      FUN_148a1c0e4(param_1,&local_58,param_4);
      goto LAB_1413d10f3;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1413d0fdc;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar13 = *param_2;
      goto LAB_1413d0b9d;
    }
    lVar9 = *param_2;
    local_79 = lVar9 != 0;
  }
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & local_79) == 1) {
      FUN_1456cec3c(lVar9);
    }
    puVar14 = (uint *)(param_1 + 0x250);
    iVar2 = *(int *)(param_1 + 0x268);
    if (iVar2 == 0) {
      uVar16 = 1;
      uVar11 = 0;
      iVar4 = 0;
      iVar10 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar14;
      }
      uVar15 = *puVar5;
      if (uVar15 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar16 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar16 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar16 == uVar11) goto LAB_1413d10f3;
          iVar10 = iVar10 + 0x20;
          uVar15 = puVar5[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar11 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar15 = 0xffffffff;
      local_70 = puVar14;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
        if (lVar13 != 0) {
          if ((DAT_14c950c29 & local_79) == 1) {
            local_78 = param_4;
            FUN_1456cec3c(lVar9);
            puVar14 = local_70;
            param_4 = local_78;
LAB_1413d0c9c:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              local_78 = param_4;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              puVar14 = local_70;
              param_4 = local_78;
              if (DAT_14cad00c8 == 0) goto LAB_1413d0eb6;
            }
            if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1413d0eb6;
            lVar12 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar12 = lVar9;
            }
          }
          else {
            if (lVar9 != 0) goto LAB_1413d0c9c;
LAB_1413d0eb6:
            lVar12 = 0;
          }
          if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
            iVar4 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar4 + 1U;
            local_68 = param_1;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
              local_78 = param_4;
              FUN_14593e454(param_4,iVar4);
              param_4 = local_78;
            }
            *(longlong *)(*param_4 + (longlong)iVar4 * 8) = lVar13;
            puVar14 = local_70;
            param_1 = local_68;
          }
        }
        uVar15 = uVar15 & ~(uint)uVar16;
        puVar5 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar5 = puVar14;
        }
        iVar3 = *(int *)(param_1 + 0x268);
        iVar4 = (int)uVar11;
        lVar13 = (longlong)iVar4;
        uVar8 = puVar5[lVar13] & uVar15;
        if (uVar8 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          puVar14 = local_70;
          if (iVar4 < iVar6) {
            lVar12 = 0;
            do {
              uVar8 = puVar5[lVar13 + lVar12 + 1];
              if (uVar8 != 0) {
                uVar11 = (ulonglong)(iVar4 + (int)lVar12 + 1);
                uVar15 = 0xffffffff;
                goto LAB_1413d0d6d;
              }
              iVar10 = iVar10 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar7 - lVar13 != lVar12);
            uVar15 = 0xffffffff;
            iVar4 = iVar7;
          }
          uVar11 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_1413d0d6d:
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar16 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
  }
  else {
    local_60 = lVar9;
    if ((local_79 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar9);
    }
    FUN_148a1c48e(param_1,&local_60,param_4);
  }
LAB_1413d10f3:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d1192 FUN_1413d1192 body=327 status=ok
// SIG undefined FUN_1413d1192(void)

undefined8 * FUN_1413d1192(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14aebb840;
  *(undefined4 *)(param_1 + 5) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x35) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = &DAT_3f8000003f800000;
  param_1[0xc] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 **)((longlong)param_1 + 0x6c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x74) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = &DAT_3f8000003f800000;
  param_1[0x11] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 6;
  param_1[0x13] = 0;
  param_1[0x16] = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  param_1[0x14] = DAT_14c8462c0;
  param_1[0x15] = uVar1;
  param_1[0x17] = 0x3f7f7cee3d54fdf4;
  param_1[0x18] = 0x3d54fdf4;
  param_1[0x1b] = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  param_1[0x19] = DAT_14c8462c0;
  param_1[0x1a] = uVar1;
  uVar3 = DAT_14c8462e8;
  uVar2 = (undefined4)DAT_14c8462e0;
  uVar4 = DAT_14c8462d8._4_4_ ^ 0x80000000;
  uVar5 = DAT_14c8462e0._4_4_ ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8462d8;
  *(uint *)((longlong)param_1 + 0xe4) = uVar4;
  *(undefined4 *)(param_1 + 0x1d) = uVar2;
  *(uint *)((longlong)param_1 + 0xec) = uVar5;
  param_1[0x1e] = uVar3 ^ 0x8000000000000000;
  param_1[0x1f] = 0x3f7f7cee3d54fdf4;
  *(undefined4 *)(param_1 + 0x20) = 0x40e00000;
  return param_1;
}



// FUNCTION 1413d12da FUN_1413d12da body=40 status=ok
// SIG undefined FUN_1413d12da(void)

undefined8 FUN_1413d12da(undefined8 param_1,int param_2)

{
  FUN_1413d1302();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1413d1302 FUN_1413d1302 body=497 status=ok
// SIG undefined FUN_1413d1302(void)

void FUN_1413d1302(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac47ab0;
  plVar1 = param_1 + 0x2a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x22;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x26) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x25)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x25)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x19;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
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



// FUNCTION 1413d14f4 FUN_1413d14f4 body=2136 status=ok
// SIG undefined FUN_1413d14f4(void)

undefined8 * FUN_1413d14f4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  undefined1 auStack_328 [40];
  undefined8 *local_300;
  ulonglong local_2f8;
  undefined8 local_2f0;
  ulonglong local_2e8 [2];
  longlong *local_2d8;
  int local_2c0;
  float local_2b8;
  undefined4 uStack_2b4;
  ushort local_2a0;
  byte local_298;
  float local_290;
  char local_28c;
  undefined1 local_288 [384];
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  undefined1 *local_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 local_d8 [32];
  undefined1 *local_b8;
  int local_b0;
  float local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_290 = 0.0;
  local_28c = '\0';
  local_108 = (undefined1 *)0x0;
  local_100 = 0x1000000000;
  local_f0 = (undefined1 *)0x0;
  local_e8 = 0;
  iStack_e4 = 0x20;
  iStack_e0 = -1;
  iStack_dc = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  local_300 = param_2;
  local_2f0 = param_3;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    uVar23 = *(ulonglong *)(param_1 + 0x18);
    uVar22 = (longlong)*(int *)(param_1 + 0x20) * 0x50 + uVar23;
    do {
      local_2e8[0] = local_2e8[0] & 0xffffffffffffff00;
      local_2c0 = 0;
      FUN_1456bb102(local_2e8,local_2f0);
      FUN_1447c3578(uVar23 + 0x18,&local_2b8,local_2e8);
      if (local_298 == 3) {
        fVar26 = local_2b8;
        bVar13 = 3;
      }
      else {
        FUN_1400b56fe(&local_a8,&local_2b8,3);
        fVar26 = 0.0;
        if (local_88 != 0) {
          fVar26 = local_a8;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pfVar16 = &local_a8;
          if (0x18 < local_90) {
            pfVar16 = (float *)CONCAT44(uStack_a4,local_a8);
          }
          (*pcVar4)(pfVar16);
        }
        bVar13 = local_298;
        if (0x18 < local_90) {
          FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
          bVar13 = local_298;
        }
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar13 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pfVar16 = &local_2b8;
        if (0x18 < local_2a0) {
          pfVar16 = (float *)CONCAT44(uStack_2b4,local_2b8);
        }
        (*pcVar4)(pfVar16);
      }
      if (0x18 < local_2a0) {
        FUN_1400020a8(CONCAT44(uStack_2b4,local_2b8));
      }
      lVar17 = DAT_14c9a3da0;
      if ((longlong)local_2c0 != 0) {
        lVar19 = (longlong)local_2c0 + -1;
        lVar25 = lVar19 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
        if (*(longlong *)(lVar17 + lVar25) != 0) {
          FUN_1400020a8();
        }
        lVar17 = DAT_14c9a3da0;
        iVar18 = (int)lVar19;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
        }
        *(undefined4 *)(lVar17 + lVar25) = 0xffffffff;
        iVar20 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar20 = DAT_14c9a3dd0;
        }
        *(int *)(lVar17 + 4 + lVar25) = iVar20;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = DAT_14c9a3dc0;
        if (DAT_14c9a3dc0 == (undefined *)0x0) {
          puVar11 = &DAT_14c9a3db0;
        }
        iVar20 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar20 = iVar18;
        }
        bVar13 = (byte)lVar19 & 0x1f;
        DAT_14c9a3dd0 = iVar18;
        *(uint *)(puVar11 + (longlong)(iVar20 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar20 >> 5) * 4) &
             (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
        local_2c0 = 0;
      }
      if (((char)local_2e8[0] == '\x03') && (local_2d8 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_2d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2d8 + 0x10))();
        }
      }
      iVar18 = iStack_e0;
      uVar12 = local_100;
      if ((0.0 < fVar26) && ((1e-08 < fVar26 || (local_28c == '\x01')))) {
        iVar20 = (int)local_100;
        if ((int)local_100 != iStack_dc) {
          uVar14 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          puVar10 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar10 = local_d8;
          }
          iVar9 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
          if (iVar9 != -1) {
            puVar10 = local_108;
            if (local_108 == (undefined1 *)0x0) {
              puVar10 = local_288;
            }
            do {
              puVar2 = (ulonglong *)(puVar10 + (longlong)iVar9 * 0x18);
              if (*puVar2 == uVar23) {
                if ((float *)(puVar2 + 1) != (float *)0x0 && puVar2 != (ulonglong *)0x0) {
                  local_290 = local_290 - *(float *)(puVar2 + 1);
                }
                break;
              }
              iVar9 = (int)puVar2[2];
            } while (iVar9 != -1);
          }
        }
        local_290 = local_290 + fVar26;
        if (iStack_dc == 0) {
          local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 1);
          if (local_100._4_4_ == iVar20) {
            FUN_14593ecc2(local_288,uVar12 & 0xffffffff);
          }
          iVar18 = local_e8;
          if (local_e8 == 0) {
            iVar9 = -1;
          }
          else {
            iVar9 = local_e8 + 0x1e;
            if (-1 < local_e8 + -1) {
              iVar9 = local_e8 + -1;
            }
            iVar9 = iVar9 >> 5;
          }
          iVar15 = local_e8 + 1;
          iVar24 = local_e8 + 0x1f;
          if (-1 < local_e8) {
            iVar24 = local_e8;
          }
          if (iVar24 >> 5 == iVar9) {
            local_e8 = iVar15;
          }
          else {
            if (iStack_e4 <= local_e8) {
              if (local_e8 + 0x20U < 0x40) {
                iStack_e4 = 0x20;
              }
              else {
                uVar14 = local_e8 + 0x20U >> 5;
                local_2f8 = (ulonglong)uVar14;
                if (iStack_e4 + 0x1fU < 0x40) {
                  uVar21 = 4;
                  if (4 < uVar14) {
                    uVar21 = uVar14;
                  }
                }
                else {
                  uVar21 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
                }
                uVar12 = FUN_144a3809e(uVar21 << 2,0);
                iVar9 = (int)(uVar12 >> 2);
                iStack_e4 = -0x20;
                if ((int)local_2f8 <= iVar9) {
                  iStack_e4 = iVar9 << 5;
                }
              }
              FUN_14008f53c(local_f8,local_e8);
              iVar15 = local_e8 + 1;
            }
            iVar9 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar9 = iVar15;
            }
            local_e8 = iVar15;
            if (iVar15 % 0x20 != 0) {
              puVar10 = local_f0;
              if (local_f0 == (undefined1 *)0x0) {
                puVar10 = local_f8;
              }
              bVar13 = -(char)(iVar15 % 0x20);
              *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
                   (uint)(*(int *)(puVar10 + (longlong)(iVar9 >> 5) * 4) << (bVar13 & 0x1f)) >>
                   (bVar13 & 0x1f);
            }
          }
          lVar17 = (longlong)iVar20;
          puVar10 = local_f0;
          if (local_f0 == (undefined1 *)0x0) {
            puVar10 = local_f8;
          }
          bVar13 = (byte)iVar18 & 0x1f;
          *(uint *)(puVar10 + (longlong)(iVar24 >> 5) * 4) =
               *(uint *)(puVar10 + (longlong)(iVar24 >> 5) * 4) &
               (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
          iVar18 = iVar20;
        }
        else {
          puVar10 = local_108;
          if (local_108 == (undefined1 *)0x0) {
            puVar10 = local_288;
          }
          lVar17 = (longlong)iStack_e0;
          iStack_e0 = *(int *)(puVar10 + lVar17 * 0x18 + 4);
          iStack_dc = iStack_dc + -1;
          if (iStack_dc != 0) {
            *(undefined4 *)(puVar10 + (longlong)*(int *)(puVar10 + lVar17 * 0x18 + 4) * 0x18) =
                 0xffffffff;
          }
        }
        puVar10 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar10 = local_f8;
        }
        iVar20 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar20 = iVar18;
        }
        *(uint *)(puVar10 + (longlong)(iVar20 >> 5) * 4) =
             *(uint *)(puVar10 + (longlong)(iVar20 >> 5) * 4) | 1 << ((byte)iVar18 & 0x1f);
        puVar10 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar10 = local_288;
        }
        puVar2 = (ulonglong *)(puVar10 + lVar17 * 0x18);
        *puVar2 = uVar23;
        *(float *)(puVar2 + 1) = fVar26;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        uVar14 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        uVar21 = (int)local_100 - iStack_dc;
        if ((uVar21 != 0) && (uVar21 != 1)) {
          puVar10 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar10 = local_d8;
          }
          iVar20 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & uVar14) * 4);
          if (iVar20 != -1) {
            puVar10 = local_108;
            if (local_108 == (undefined1 *)0x0) {
              puVar10 = local_288;
            }
            do {
              puVar3 = (ulonglong *)(puVar10 + (longlong)iVar20 * 0x18);
              if (*puVar3 == uVar23) {
                uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
                uVar12 = puVar2[1];
                uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
                *(int *)puVar3 = (int)*puVar2;
                *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
                *(int *)(puVar3 + 1) = (int)uVar12;
                *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
                FUN_148ef9a9a(local_288,iVar18);
                goto LAB_1413d191a;
              }
              iVar20 = (int)puVar3[2];
            } while (iVar20 != -1);
          }
        }
        uVar12 = (ulonglong)(((uVar21 >> 1) - 1) + (uint)(uVar21 >> 1 == 0)) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar20 = 1 << ((byte)lVar17 & 0x1f);
        if ((uint)lVar17 < 3) {
          iVar20 = 8;
        }
        if (uVar21 < 4) {
          iVar20 = 8;
        }
        if (((int)uVar21 < 1) || (iVar20 <= local_b0)) {
          uVar14 = local_b0 - 1U & uVar14;
          *(uint *)((longlong)puVar2 + 0x14) = uVar14;
          puVar10 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar10 = local_d8;
          }
          *(undefined4 *)(puVar2 + 2) =
               *(undefined4 *)(puVar10 + ((longlong)local_b0 - 1U & (longlong)(int)uVar14) * 4);
          puVar10 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar10 = local_d8;
          }
          *(int *)(puVar10 + ((longlong)local_b0 - 1U & (longlong)(int)uVar14) * 4) = iVar18;
        }
        else {
          local_b0 = iVar20;
          FUN_1413d1d4e(local_288);
        }
      }
LAB_1413d191a:
      uVar23 = uVar23 + 0x50;
    } while (uVar23 != uVar22);
  }
  local_2e8[0] = 0;
  cVar8 = FUN_14593edbc(&local_290);
  puVar7 = local_300;
  if (cVar8 == '\0') {
    *local_300 = 0;
    local_300[1] = 0;
    local_300[2] = 0;
  }
  else {
    FUN_14593ec7a(local_300,local_2e8[0]);
  }
  local_b0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14593ec3e(local_288);
  if ((local_80 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 1413d1d4e FUN_1413d1d4e body=533 status=ok
// SIG undefined FUN_1413d1d4e(void)

void FUN_1413d1d4e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1446efa72(param_1 + 0x1d0,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x1d8);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0x1b0;
    uVar6 = 0;
    FUN_140a8e97c(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1d8) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 400;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x1a0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar5 = *(longlong *)(local_70 + 0x180);
        if (*(longlong *)(local_70 + 0x180) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x1d8) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d1f64 FUN_1413d1f64 body=277 status=ok
// SIG undefined FUN_1413d1f64(void)

undefined8 FUN_1413d1f64(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1413d2073;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1413d2073;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1413d2073:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1413d2021;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1413d2021;
    }
  }
  uVar6 = 0;
LAB_1413d2021:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d207a FUN_1413d207a body=127 status=ok
// SIG undefined FUN_1413d207a(void)

void FUN_1413d207a(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1413d20fa();
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x18,param_1);
    local_30 = FUN_14142bb98;
    local_28 = 0;
    FUN_1413d2234(lVar1 + 0x18,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1413d2588(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d20fa FUN_1413d20fa body=312 status=ok
// SIG undefined FUN_1413d20fa(void)

undefined8 FUN_1413d20fa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar2 = FUN_14011c349();
      local_18 = *(code **)(lVar2 + 0x48);
      uVar3 = FUN_140254f32(lVar1);
      goto LAB_1413d216e;
    }
  }
  uVar3 = 0;
LAB_1413d216e:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d2234 FUN_1413d2234 body=772 status=ok
// SIG undefined FUN_1413d2234(void)

undefined8 * FUN_1413d2234(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

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
  *local_60 = (longlong)&PTR_LAB_14b9955b0;
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
  *local_60 = (longlong)&PTR_FUN_14b9b95d0;
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
      if (local_60 == (longlong *)0x0) goto LAB_1413d23e8;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1413d23d2;
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
LAB_1413d23d2:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1413d23e8:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413d2588 FUN_1413d2588 body=2768 status=ok
// SIG undefined FUN_1413d2588(void)

void FUN_1413d2588(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  PSRWLOCK SRWLock;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  PSRWLOCK local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined8 *local_a8;
  int local_a0;
  code *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  longlong local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar7 = (longlong *)FUN_14140fc00();
  plVar7 = (longlong *)*plVar7;
  SRWLock = (PSRWLOCK)(plVar7 + 0x26);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(plVar7 + 0x25) = (int)plVar7[0x25] + 1;
  lVar8 = FUN_1400d7050(param_1 + 0x30);
  if (lVar8 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_130 = &local_98;
      local_98 = FUN_141030f22;
      local_120 = FUN_14081d0ea;
      local_128 = &LAB_1459f2e4c;
      local_138 = &LAB_148c39de3;
      local_140 = &LAB_1457a9eb2;
      local_148 = L"Game";
      local_150 = 0;
      local_158 = 0x10000004;
      local_160 = 0x10;
      local_168 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar8 = *(longlong *)(lVar8 + 0x3db8), lVar8 != 0)) {
      iVar6 = (int)plVar7[1];
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      FUN_141045c07(*plVar7,iVar6);
      *(undefined4 *)(plVar7 + 1) = 0;
      if (*(int *)((longlong)plVar7 + 0xc) != iVar6) {
        FUN_14664aace(plVar7,iVar6);
      }
      *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
      if ((longlong)*(int *)(lVar8 + 0x80) != 0) {
        lVar17 = *(longlong *)(lVar8 + 0x78);
        lVar8 = (longlong)*(int *)(lVar8 + 0x80) * 0xe8 + lVar17;
        local_100 = (longlong *)(param_1 + 0xd0);
        local_108 = lVar8;
        local_d0 = param_1 + 0x30;
        do {
          lVar9 = FUN_140e44844(lVar17);
          if (lVar9 != 0) {
            *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
            iVar6 = (int)plVar7[1];
            *(uint *)(plVar7 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)plVar7 + 0xc) < iVar6 + 1U) {
              FUN_14664ab2e(plVar7,iVar6);
            }
            lVar16 = *plVar7;
            lVar8 = lVar16 + (longlong)iVar6 * 0x100;
            FUN_1418fa145(lVar8);
            local_c8 = lVar8;
            FUN_14584355a(param_1,lVar8,lVar9);
            local_e8 = CONCAT71(local_e8._1_7_,
                                *(undefined1 *)(lVar16 + 0x31 + (longlong)iVar6 * 0x100));
            local_110 = FUN_1400d7050(local_d0);
            lVar8 = local_108;
            if (local_110 != 0) {
              if (DAT_14cbadd90 == 0) {
                local_98 = FUN_141030f22;
                local_120 = FUN_14081d0ea;
                local_128 = &LAB_1459f2e4c;
                local_130 = &local_98;
                local_138 = &LAB_148c39de3;
                local_140 = &LAB_1457a9eb2;
                local_148 = L"Game";
                local_150 = 0;
                local_158 = 0x10000004;
                local_160 = 0x10;
                local_168 = 0x3de0;
                FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8
                             );
              }
              if (((*(int *)(DAT_14cbadd90 + 0x38) <=
                    *(int *)(*(longlong *)(local_110 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(local_110 + 0x10) + 0x30) +
                    (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
                 (*(char *)(local_110 + 0x32b8) == '\x01')) {
                *(undefined4 *)(param_1 + 0xd8) = 0;
                local_f8 = plVar7;
                local_f0 = SRWLock;
                if (*(int *)(param_1 + 0xdc) < 0) {
                  FUN_14583f7d4(local_100,0);
                }
                local_e0 = lVar9;
                if ((longlong)*(int *)(lVar9 + 0xd0) != 0) {
                  lVar8 = *(longlong *)(lVar9 + 200);
                  local_d8 = (longlong)*(int *)(lVar9 + 0xd0) * 0x20 + lVar8;
                  do {
                    local_c0 = lVar8;
                    lVar8 = FUN_140de867c();
                    if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x20) != 0)) {
                      lVar16 = *(longlong *)(lVar8 + 0x18);
                      lVar8 = lVar16 + (longlong)*(int *)(lVar8 + 0x20) * 0x18;
                      local_b8 = lVar8;
                      do {
                        FUN_1409e3aae(lVar16,&local_98);
                        pcVar4 = local_98;
                        plVar7 = (longlong *)CONCAT44(uStack_8c,local_90);
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
                        if ((pcVar4 != (code *)0x0) && (lVar10 = FUN_140aa5740(pcVar4), lVar10 != 0)
                           ) {
                          if ((char)local_e8 == '\0') {
                            plVar7 = *(longlong **)(local_110 + 0x398);
                            if (plVar7 != (longlong *)0x0) {
                              if (DAT_14cbae3d8 == 0) {
                                local_98 = FUN_141030f22;
                                local_120 = FUN_14081d0ea;
                                local_128 = &LAB_1464f5fc4;
                                local_130 = &local_98;
                                local_138 = &LAB_148c3dd26;
                                local_140 = &LAB_1459673ba;
                                local_148 = L"Engine";
                                local_150 = 0;
                                local_158 = 0x10000004;
                                local_160 = 0x10;
                                local_168 = 0x1360;
                                FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,
                                              FUN_1465eb604);
                                plVar7 = *(longlong **)(local_110 + 0x398);
                                if (plVar7 == (longlong *)0x0) goto LAB_1413d2a4c;
                              }
                              if ((((DAT_14cbae3d8 != 0) && (lVar11 = plVar7[2], lVar11 != 0)) &&
                                  (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
                                 (*(longlong *)
                                   (*(longlong *)(lVar11 + 0x30) +
                                   (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
                                  DAT_14cbae3d8 + 0x30)) {
                                if (DAT_14cb8d3c0 == 0) {
                                  lVar11 = 0;
                                }
                                else {
                                  lVar11 = FUN_1409503e6(DAT_14cb8d3c0,lVar10);
                                }
                                lVar11 = (**(code **)(*plVar7 + 0x7e0))(plVar7,lVar11 + 0x1c);
                                if ((lVar11 != 0) &&
                                   (cVar5 = FUN_1411b2196(lVar11,lVar10), cVar5 == '\0')) {
                                  iVar6 = *(int *)(param_1 + 0xd8);
                                  *(uint *)(param_1 + 0xd8) = iVar6 + 1U;
                                  if (*(uint *)(param_1 + 0xdc) < iVar6 + 1U) {
                                    FUN_1415027c0(local_100,iVar6);
                                  }
                                  *(longlong *)(*local_100 + (longlong)iVar6 * 8) = lVar10;
                                }
                              }
                            }
                          }
                          else {
                            puVar14 = *(undefined4 **)(lVar10 + 8);
                            if (puVar14 == (undefined4 *)0x0) {
                              puVar14 = &DAT_14c9485f0;
                            }
                            FUN_1447a97f4(&local_98,puVar14);
                            iVar6 = *(int *)(param_1 + 200);
                            if ((longlong)iVar6 != 0) {
                              lVar8 = *(longlong *)(param_1 + 0xc0);
                              lVar9 = 0;
                              do {
                                if (DAT_14c947fe0 == 0) {
                                  lVar11 = FUN_14001cc68(0x140,0x10);
                                  FUN_1456b2032(lVar11);
                                  DAT_14c947fe0 = lVar11;
                                }
                                FUN_140045924(DAT_14c947fe0,&local_a8,&local_98,1);
                                if (*(undefined8 **)(lVar8 + lVar9) == local_a8) {
                                  FUN_1410c689e(lVar10,local_110);
                                  break;
                                }
                                lVar9 = lVar9 + 8;
                              } while ((longlong)iVar6 * 8 != lVar9);
                            }
                            lVar8 = local_b8;
                            lVar9 = local_e0;
                            if (local_80 != 0) {
                              FUN_1400020a8();
                            }
                          }
                        }
LAB_1413d2a4c:
                        lVar16 = lVar16 + 0x18;
                      } while (lVar16 != lVar8);
                    }
                    lVar8 = local_c0 + 0x20;
                  } while (lVar8 != local_d8);
                }
                if (*(int *)(param_1 + 0xd8) == 0) {
                  FUN_1411b24f2(local_100,local_110);
                  SRWLock = local_f0;
                  lVar8 = local_108;
                  plVar7 = local_f8;
                }
                else {
                  lVar16 = FUN_1447210f0(local_110);
                  SRWLock = local_f0;
                  plVar7 = local_f8;
                  lVar8 = local_108;
                  if (lVar16 != 0) {
                    *(undefined1 *)(param_1 + 0xe9) = 0;
                    if (*(longlong *)(lVar16 + 0x1f0) == 0) {
                      puVar13 = (undefined8 *)(lVar16 + 0x458);
                    }
                    else {
                      puVar13 = (undefined8 *)(*(longlong *)(lVar16 + 0x1f0) + 0xf0);
                    }
                    uVar12 = *puVar13;
                    local_a8 = (undefined8 *)0x0;
                    local_a0 = 0;
                    FUN_1446efa72(&local_a8,0,3,0x10);
                    puVar13 = local_a8;
                    local_a0 = 3;
                    *local_a8 = &PTR_LAB_14a1c8830;
                    LOCK();
                    UNLOCK();
                    lVar9 = DAT_14c758608 + 1;
                    lVar8 = DAT_14c758608 + 1;
                    if (lVar9 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar9 = DAT_14c758608 + 2;
                      lVar8 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar8;
                    local_a8[2] = lVar9;
                    *local_a8 = &PTR_FUN_14b9b9800;
                    local_a8[3] = 0;
                    local_e8 = uVar12;
                    if (param_1 == 0) {
                      iVar6 = 0;
                    }
                    else {
                      uVar3 = *(uint *)(param_1 + 0xc);
                      *(uint *)(local_a8 + 3) = uVar3;
                      if ((int)uVar3 < DAT_14c9647dc) {
                        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                      }
                      else {
                        lVar8 = 0;
                      }
                      iVar6 = *(int *)(lVar8 + 0x10);
                      if (*(int *)(lVar8 + 0x10) == 0) {
                        LOCK();
                        iVar6 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar15 = DAT_14c964868 + 1;
                        bVar18 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar6;
                        if (bVar18) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar15);
                        }
                        LOCK();
                        iVar6 = *(int *)(lVar8 + 0x10);
                        bVar18 = iVar6 == 0;
                        if (bVar18) {
                          *(int *)(lVar8 + 0x10) = iVar15;
                          iVar6 = 0;
                        }
                        UNLOCK();
                        SRWLock = local_f0;
                        plVar7 = local_f8;
                        if (bVar18) {
                          iVar6 = iVar15;
                        }
                      }
                    }
                    *(int *)((longlong)puVar13 + 0x1c) = iVar6;
                    puVar13[4] = FUN_1411b1e44;
                    *(undefined4 *)(puVar13 + 5) = 0;
                    local_98 = (code *)0x0;
                    local_90 = 0;
                    FUN_14487d8d8(&local_98,&local_a8);
                    local_58 = 1;
                    FUN_14016fdb0(local_e8,local_b0,&local_98);
                    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
                    lVar9 = local_e0;
                    lVar8 = local_108;
                    if (local_a0 != 0) {
                      if (local_a8 == (undefined8 *)0x0) goto LAB_1413d2d67;
                      (**(code **)*local_a8)(local_a8,0);
                      FUN_1446efa72(&local_a8,0,0,0x10);
                      local_a0 = 0;
                    }
                    if (local_a8 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
            }
LAB_1413d2d67:
            if (*(char *)(local_c8 + 0x30) == '\x01') {
              if (plVar7[4] == 0) {
                uVar12 = FUN_141218768();
                lVar8 = FUN_14477b664(uVar12);
                plVar7[4] = lVar8;
              }
              lVar8 = FUN_141218768();
              uVar12 = FUN_141218768();
              FUN_1402d1bfa(&local_98,uVar12,lVar9);
              if ((code *)plVar7[3] != local_98) {
                plVar7[5] = 0;
              }
              plVar7[3] = (longlong)local_98;
              lVar16 = FUN_141218768();
              if (lVar8 == 0) {
LAB_1413d2df9:
                lVar16 = lVar8;
              }
              else if (lVar16 == 0) {
                lVar16 = 0;
              }
              else if ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                       lVar16 + 0x30)) goto LAB_1413d2df9;
              if (plVar7[4] != lVar16) {
                plVar7[5] = 0;
              }
              uVar12 = FUN_14477b664(lVar16);
              lVar16 = FUN_14477b664(uVar12);
              plVar7[4] = lVar16;
              lVar8 = local_108;
              if ((lVar16 != 0) && (plVar7[3] != 0)) {
                plVar7[5] = lVar9;
              }
            }
          }
          lVar17 = lVar17 + 0xe8;
        } while (lVar17 != lVar8);
      }
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d305a FUN_1413d305a body=324 status=ok
// SIG undefined FUN_1413d305a(void)

undefined8 FUN_1413d305a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar2 = FUN_1403c7982();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar4 = FUN_14011c2be(*(longlong *)(param_1 + 0xa8) + 8);
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      local_2c = 0xff;
      local_30 = 0;
      local_38 = 0;
      uVar5 = 0;
      FUN_14493679e(uVar2,&local_48,uVar4,0);
      if (plStack_40 == (longlong *)0x0) goto LAB_1413d3172;
      if (local_48._4_4_ != 0) {
        uVar5 = 0;
        if (((int)(uint)local_48 < 0) || (DAT_14c9647dc <= (int)(uint)local_48)) goto LAB_1413d3172;
        lVar6 = (ulonglong)(((uint)local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_48 >> 0x10) * 8);
        if ((lVar6 != 0) &&
           ((*(int *)(lVar6 + 0x10) == local_48._4_4_ && ((*(uint *)(lVar6 + 8) & 0x10200000) == 0))
           )) {
          if (*(code **)(*plStack_40 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar3 = plStack_40 + 0xd9;
          }
          else {
            plVar3 = (longlong *)(**(code **)(*plStack_40 + 0x10))();
          }
          cVar1 = FUN_14486eb0e(plVar3,&local_48);
          if (cVar1 != '\0') {
            uVar5 = FUN_14008e0ae(&local_48);
            goto LAB_1413d3172;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_1413d3172:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d31a0 FUN_1413d31a0 body=1377 status=ok
// SIG undefined FUN_1413d31a0(void)

undefined4 FUN_1413d31a0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    lVar10 = FUN_1413d37cc();
    if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= (int)param_2[7])) &&
       (*(longlong *)(param_2[6] + (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
      plVar15 = (longlong *)param_2[0x22];
      if (plVar15 == (longlong *)0x0) {
        (**(code **)(*param_2 + 1000))(param_2);
        plVar15 = (longlong *)param_2[0x22];
      }
      uVar11 = (**(code **)(*plVar15 + 0x2a0))();
      if (uVar11 != 0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar11);
        }
        local_50 = uVar11;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar11);
        }
        plVar15 = (longlong *)(param_1 + 0x260);
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar11);
        }
        uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar16 = plVar15;
        iVar7 = FUN_1413d3702(plVar15,uVar6 >> 0x10 ^ uVar6,&local_50);
        local_5c = (undefined4)CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
        if (iVar7 == -1) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_2);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(uVar11);
          }
          if (*(int *)(param_1 + 0x294) == 0) {
            iVar7 = *(int *)(param_1 + 0x268);
            *(int *)(param_1 + 0x268) = iVar7 + 1;
            if (*(int *)(param_1 + 0x26c) == iVar7) {
              FUN_14482b872(plVar15,iVar7);
            }
            iVar19 = *(int *)(param_1 + 0x288);
            if (iVar19 == 0) {
              iVar8 = -1;
            }
            else {
              iVar8 = iVar19 + 0x1e;
              if (-1 < iVar19 + -1) {
                iVar8 = iVar19 + -1;
              }
              iVar8 = iVar8 >> 5;
            }
            lVar17 = param_1 + 0x270;
            iVar14 = iVar19 + 1;
            iVar18 = iVar19 + 0x1f;
            if (-1 < iVar19) {
              iVar18 = iVar19;
            }
            if (iVar18 >> 5 == iVar8) {
              *(int *)(param_1 + 0x288) = iVar14;
            }
            else {
              if (*(int *)(param_1 + 0x28c) <= iVar19) {
                if (iVar19 + 0x20U < 0xa0) {
                  iVar14 = 0x80;
                  iVar8 = iVar19;
                }
                else {
                  uVar6 = iVar19 + 0x20U >> 5;
                  local_58 = (ulonglong)uVar6;
                  if (*(int *)(param_1 + 0x28c) + 0x1fU < 0xa0) {
                    uVar9 = 4;
                    if (4 < uVar6) {
                      uVar9 = uVar6;
                    }
                  }
                  else {
                    uVar9 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
                  }
                  uVar12 = FUN_144a3809e(uVar9 << 2,0);
                  iVar8 = (int)(uVar12 >> 2);
                  iVar14 = -0x20;
                  if ((int)local_58 <= iVar8) {
                    iVar14 = iVar8 << 5;
                  }
                  iVar8 = *(int *)(param_1 + 0x288);
                }
                *(int *)(param_1 + 0x28c) = iVar14;
                FUN_1446efbd8(lVar17,iVar8);
                iVar14 = *(int *)(param_1 + 0x288) + 1;
              }
              iVar8 = iVar14 + 0x1f;
              if (-1 < iVar14) {
                iVar8 = iVar14;
              }
              *(int *)(param_1 + 0x288) = iVar14;
              if (iVar14 % 0x20 != 0) {
                lVar10 = *(longlong *)(param_1 + 0x280);
                if (*(longlong *)(param_1 + 0x280) == 0) {
                  lVar10 = lVar17;
                }
                bVar13 = -(char)(iVar14 % 0x20);
                *(uint *)(lVar10 + (longlong)(iVar8 >> 5) * 4) =
                     (uint)(*(int *)(lVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar13 & 0x1f)) >>
                     (bVar13 & 0x1f);
              }
            }
            lVar10 = (longlong)iVar7;
            if (*(longlong *)(param_1 + 0x280) != 0) {
              lVar17 = *(longlong *)(param_1 + 0x280);
            }
            bVar13 = (byte)iVar19 & 0x1f;
            puVar3 = (uint *)(lVar17 + (longlong)(iVar18 >> 5) * 4);
            *puVar3 = *puVar3 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
          }
          else {
            iVar7 = *(int *)(param_1 + 0x290);
            lVar10 = (longlong)iVar7;
            iVar19 = *(int *)(*(longlong *)(param_1 + 0x260) + 4 + lVar10 * 0x18);
            *(int *)(param_1 + 0x290) = iVar19;
            iVar8 = *(int *)(param_1 + 0x294) + -1;
            *(int *)(param_1 + 0x294) = iVar8;
            if (iVar8 != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar19 * 0x18) = 0xffffffff
              ;
            }
          }
          lVar17 = param_1 + 0x270;
          if (*(longlong *)(param_1 + 0x280) != 0) {
            lVar17 = *(longlong *)(param_1 + 0x280);
          }
          iVar19 = iVar7 + 0x1f;
          if (-1 < iVar7) {
            iVar19 = iVar7;
          }
          puVar3 = (uint *)(lVar17 + (longlong)(iVar19 >> 5) * 4);
          *puVar3 = *puVar3 | 1 << ((byte)iVar7 & 0x1f);
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x260) + lVar10 * 0x18);
          *puVar1 = uVar11;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar11);
          }
          bVar13 = DAT_14c950c29;
          puVar1[1] = (ulonglong)param_2;
          if ((bVar13 & 1) != 0) {
            FUN_1456cec3c(param_2);
            bVar13 = DAT_14c950c29;
          }
          *(undefined4 *)(puVar1 + 2) = 0xffffffff;
          uVar11 = *puVar1;
          if (((bVar13 & 1) != 0) && (uVar11 != 0)) {
            FUN_1456cec3c(uVar11);
          }
          uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          uVar6 = uVar6 >> 0x10 ^ uVar6;
          iVar19 = 1;
          if (*(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x294) == 1) {
            uVar9 = 1;
          }
          else {
            local_50 = *puVar1;
            if ((DAT_14c950c29 == 1) && (local_50 != 0)) {
              FUN_1456cec3c();
            }
            iVar8 = FUN_1413d3702(plVar15,uVar6,&local_50);
            if (iVar8 != -1) {
              uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
              uVar11 = puVar1[1];
              uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
              puVar2 = (undefined4 *)(*plVar15 + (longlong)iVar8 * 0x18);
              *puVar2 = (int)*puVar1;
              puVar2[1] = uVar4;
              puVar2[2] = (int)uVar11;
              puVar2[3] = uVar5;
              FUN_1493676de(plVar15,iVar7);
              goto LAB_1413d34b7;
            }
            uVar9 = *(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x294);
            if (3 < uVar9) {
              uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
              lVar10 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              iVar19 = 1 << ((byte)lVar10 & 0x1f);
            }
          }
          if (((int)uVar9 < 1) || (iVar19 <= *(int *)(param_1 + 0x2a8))) {
            uVar6 = *(int *)(param_1 + 0x2a8) - 1U & uVar6;
            *(uint *)((longlong)puVar1 + 0x14) = uVar6;
            lVar10 = *(longlong *)(param_1 + 0x2a0);
            if (*(longlong *)(param_1 + 0x2a0) == 0) {
              lVar10 = param_1 + 0x298;
            }
            *(undefined4 *)(puVar1 + 2) =
                 *(undefined4 *)
                  (lVar10 + ((longlong)*(int *)(param_1 + 0x2a8) - 1U & (longlong)(int)uVar6) * 4);
            lVar10 = *(longlong *)(param_1 + 0x2a0);
            if (*(longlong *)(param_1 + 0x2a0) == 0) {
              lVar10 = param_1 + 0x298;
            }
            *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x2a8) - 1U & (longlong)(int)uVar6) * 4)
                 = iVar7;
          }
          else {
            *(int *)(param_1 + 0x2a8) = iVar19;
            FUN_1413d38aa(plVar15);
          }
        }
        goto LAB_1413d34b7;
      }
    }
  }
  local_5c = 0;
LAB_1413d34b7:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d3702 FUN_1413d3702 body=202 status=ok
// SIG undefined FUN_1413d3702(void)

int FUN_1413d3702(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1413d37cc FUN_1413d37cc body=221 status=ok
// SIG undefined FUN_1413d37cc(void)

longlong FUN_1413d37cc(void)

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
  if (DAT_14cc0bb20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492ea4f4;
    local_40 = FUN_14671c33b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeFactoryBase",&DAT_14cc0bb20,FUN_14671c314)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bb20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d38aa FUN_1413d38aa body=673 status=ok
// SIG undefined FUN_1413d38aa(void)

void FUN_1413d38aa(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar13 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar14 = local_68 >> 0x20;
    }
    uVar13 = (uint)local_58;
    iVar9 = local_58._4_4_;
    iVar15 = local_50;
    bVar4 = DAT_14c950c29;
    plVar6 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar6;
        lVar12 = *param_1;
        uVar3 = *(ulonglong *)(lVar12 + (longlong)iVar9 * 0x18);
        local_7c = iVar15;
        local_70 = uVar10;
        if (((bVar4 & 1) != 0) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
          bVar4 = DAT_14c950c29;
        }
        lVar12 = lVar12 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar15 = (int)uVar10;
        *(int *)(lVar12 + 0x14) = iVar15;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x10) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        uVar13 = uVar13 & ~(uint)uVar14;
        plVar6 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar6 = local_78;
        }
        iVar2 = (int)local_78[3];
        iVar9 = (int)local_70;
        lVar12 = (longlong)iVar9;
        uVar5 = *(uint *)((longlong)plVar6 + lVar12 * 4) & uVar13;
        uVar10 = local_70;
        iVar15 = local_7c;
        if (uVar5 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar9) {
            iVar8 = iVar9;
          }
          if (iVar7 <= iVar9) break;
          lVar11 = 0;
          while( true ) {
            iVar15 = iVar15 + 0x20;
            uVar5 = *(uint *)((longlong)plVar6 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar8 - lVar12 == lVar11) goto LAB_1413d3afc;
          }
          uVar13 = 0xffffffff;
          uVar10 = (ulonglong)(iVar9 + (int)lVar11 + 1);
        }
        uVar14 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        plVar6 = local_78;
      } while (iVar9 < iVar2);
    }
  }
LAB_1413d3afc:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d3b4c FUN_1413d3b4c body=4290 status=ok
// SIG undefined FUN_1413d3b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413d3b4c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar41;
  double dVar42;
  double dVar45;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar47;
  double dVar48;
  double dVar51;
  undefined1 auVar49 [16];
  double dVar52;
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  double dVar61;
  float fVar62;
  undefined1 auStack_398 [32];
  ulonglong local_378;
  undefined1 local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [96];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  longlong local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  ulonglong local_e0;
  double dVar7;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (((((*(int *)(param_1 + 0xe0) == 0) || (uVar25 = *(uint *)(param_1 + 0xdc), (int)uVar25 < 0))
       || (DAT_14c9647dc <= (int)uVar25)) ||
      ((lVar26 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar26 == 0 ||
       (*(int *)(lVar26 + 0x10) != *(int *)(param_1 + 0xe0))))) ||
     ((*(uint *)(lVar26 + 8) & 0x10200000) != 0)) goto LAB_1413d3fd1;
  FUN_1413d4d42(param_1,local_318,param_2);
  pauVar19 = (undefined1 (*) [16])&DAT_14c8464e0;
  if (*(char *)(param_1 + 0x148) != '\0') {
    pauVar19 = (undefined1 (*) [16])(param_1 + 0x120);
  }
  dVar3 = *(double *)*pauVar19;
  dVar4 = *(double *)((longlong)*pauVar19 + 8);
  auVar14 = *pauVar19;
  dVar5 = *(double *)pauVar19[1];
  fVar62 = 0.0;
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar25 = *(uint *)(param_1 + 8), -1 < (int)uVar25)) &&
     ((int)uVar25 < DAT_14c9647dc)) {
    uVar30 = (ulonglong)(uVar25 >> 0x10);
    plVar18 = (longlong *)
              ((ulonglong)((uVar25 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar30 * 8));
    if (((plVar18 != (longlong *)0x0) && ((int)plVar18[2] == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
        lVar26 = *plVar18;
      }
      else {
        lVar26 = 0;
      }
      if ((*(char *)(lVar26 + 0x60) == '\x01') && (*(longlong *)(lVar26 + 0x50) != 0)) {
        if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
          lVar26 = *plVar18;
        }
        else {
          lVar26 = 0;
        }
        if (*(char *)(lVar26 + 0x60) == '\x01') {
          lVar26 = *(longlong *)(lVar26 + 0x50);
        }
        else {
          lVar26 = 0;
        }
        if (*(int *)(lVar26 + 0xe0) - 1U < 2) {
          dVar31 = *(double *)(param_1 + 0x20);
          dVar40 = *(double *)(param_1 + 0x28);
          dVar42 = *(double *)(param_1 + 0x30);
          dVar46 = *(double *)(param_1 + 0x38);
          if (((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) &&
             (plVar18 = *(longlong **)(param_1 + 0x98), plVar18 != (longlong *)0x0)) {
            auVar33 = *(undefined1 (*) [16])(param_1 + 0x60);
            dVar7 = auVar33._0_8_;
            dVar8 = auVar33._8_8_;
            auVar43 = *(undefined1 (*) [16])(param_1 + 0x70);
            dVar6 = auVar43._0_8_;
            dVar41 = (double)*(float *)(*(longlong *)(param_1 + 0x88) + 0x140);
            auVar32._0_8_ = *(double *)(param_1 + 0x50) * dVar41;
            auVar32._8_8_ = 0;
            dVar12 = *(double *)(param_1 + 0x48);
            dVar13 = *(double *)(param_1 + 0x40);
            if (0 < (int)plVar18[1]) {
              lVar26 = 0;
              uVar25 = *(uint *)(plVar18 + 1);
              do {
                uVar16 = uVar25;
                uVar24 = (uint)uVar30;
                if (uVar16 == 0) {
                  plVar18 = (longlong *)0x0;
                  uVar25 = uVar16;
                  goto LAB_1413d40eb;
                }
                uVar24 = uVar16 + 1;
                uVar30 = (ulonglong)uVar24;
                LOCK();
                uVar25 = *(uint *)(plVar18 + 1);
                bVar29 = uVar16 == uVar25;
                if (bVar29) {
                  *(uint *)(plVar18 + 1) = uVar24;
                  uVar25 = uVar16;
                }
                UNLOCK();
              } while (!bVar29);
              lVar26 = *(longlong *)(param_1 + 0x90);
LAB_1413d40eb:
              auVar60 = *(undefined1 (*) [16])(lVar26 + 0x110);
              dVar45 = auVar60._0_8_;
              dVar10 = auVar60._8_8_;
              dVar9 = SUB168(*(undefined1 (*) [16])(lVar26 + 0x120),0);
              auVar33 = minpd(auVar33,auVar60);
              auVar60 = minpd(auVar43,*(undefined1 (*) [16])(lVar26 + 0x120));
              auVar43._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
              auVar43._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
              iVar17 = movmskpd(uVar25,auVar43);
              auVar33._8_8_ = -(ulonglong)(auVar60._8_8_ < 0.0);
              auVar33._0_8_ = -(ulonglong)(auVar60._0_8_ < 0.0);
              uVar25 = movmskpd(uVar24,auVar33);
              if ((uVar25 & 0x3fffffff) == 0 && iVar17 == 0) {
                dVar13 = *(double *)(lVar26 + 0xe8);
                dVar12 = *(double *)(lVar26 + 0xe8);
                dVar6 = *(double *)(lVar26 + 0xd0);
                dVar7 = *(double *)(lVar26 + 0xd0);
                dVar47 = dVar6 * dVar40;
                dVar51 = dVar7 * dVar31;
                dVar41 = *(double *)(lVar26 + 0xd8);
                dVar8 = *(double *)(lVar26 + 0xd8);
                dVar10 = dVar31 * dVar41;
                dVar48 = dVar40 * dVar8;
                dVar9 = *(double *)(lVar26 + 0xe0);
                dVar45 = *(double *)(lVar26 + 0xe0);
                dVar39 = dVar31 * dVar45;
                dVar45 = dVar42 * dVar45;
                dVar31 = dVar40 * dVar9 * -1.0 +
                         dVar42 * dVar41 + dVar46 * dVar6 * 1.0 + dVar31 * dVar13;
                dVar40 = dVar39 * 1.0 + dVar46 * dVar8 + dVar42 * dVar7 * -1.0 + dVar40 * dVar12;
                dVar42 = dVar46 * dVar9 * 1.0 + ((dVar47 * 1.0 + dVar13 * dVar42) - dVar10);
                dVar46 = dVar45 * -1.0 + ((dVar51 * -1.0 + dVar12 * dVar46) - dVar48);
              }
              else {
                dVar47 = *(double *)(lVar26 + 0xd0);
                dVar51 = *(double *)(lVar26 + 0xd8);
                dVar48 = *(double *)(lVar26 + 0xe0);
                dVar52 = dVar51 + dVar51;
                dVar55 = dVar48 + dVar48;
                dVar39 = dVar47 * (dVar47 + dVar47);
                dVar58 = dVar51 * dVar52;
                local_338 = 1.0 - (dVar48 * dVar55 + dVar58);
                dStack_330 = 1.0 - (dVar48 * dVar55 + dVar39);
                local_328 = 1.0 - (dVar39 + dVar58);
                dStack_320 = 0.0 - (dVar39 + dVar58);
                dVar58 = *(double *)(lVar26 + 0xd0) * dVar55;
                dVar48 = *(double *)(lVar26 + 0xe8);
                dVar59 = dVar55 * dVar48;
                dVar61 = (dVar47 + dVar47) * *(double *)(lVar26 + 0xe8);
                dVar48 = dVar52 * dVar48;
                local_1c8 = (dVar52 * dVar47 - dVar59) * dVar10;
                dVar39 = (dVar55 * dVar51 - dVar61) * dVar9;
                local_348 = dVar7 * dVar45;
                dStack_340 = dVar8 * dVar10;
                local_1e8 = local_338 * dVar45;
                dStack_1c0 = dStack_330 * dVar10;
                local_358 = (dVar52 * dVar47 + dVar59) * dVar45;
                dStack_350 = (dVar55 * dVar51 + dVar61) * dVar10;
                local_1d8 = (dVar58 - dVar48) * dVar45;
                local_198 = local_328 * dVar9;
                uStack_1d0 = 0;
                uStack_1b0 = 0;
                local_1a8._8_4_ = SUB84(dVar39,0);
                local_1a8._0_8_ = (dVar48 + dVar58) * dVar9;
                local_1a8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
                uStack_190 = 0;
                local_188 = *(undefined8 *)(lVar26 + 0xf0);
                uStack_180 = *(undefined8 *)(lVar26 + 0xf8);
                local_178 = *(undefined8 *)(lVar26 + 0x100);
                uStack_170 = 0x3ff0000000000000;
                dVar51 = dVar40 + dVar40;
                dVar39 = dVar42 + dVar42;
                dVar45 = dVar31 * (dVar31 + dVar31);
                dVar10 = dVar40 * dVar51;
                auVar60._8_4_ = SUB84(dVar10,0);
                auVar60._0_8_ = dVar45;
                auVar60._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                local_368 = 1.0 - (dVar45 + dVar10);
                dStack_360 = 0.0 - (dVar45 + auVar60._8_8_);
                dVar47 = (dVar31 + dVar31) * dVar46;
                local_248 = (dVar51 * dVar31 - dVar39 * dVar46) * dVar8;
                dVar48 = (dVar39 * dVar40 - dVar47) * dVar6;
                local_268 = (1.0 - (dVar42 * dVar39 + dVar10)) * dVar7;
                dStack_240 = (1.0 - (dVar42 * dVar39 + dVar45)) * dVar8;
                dStack_260 = (dVar51 * dVar31 + dVar39 * dVar46) * dVar7;
                local_238 = (dVar39 * dVar40 + dVar47) * dVar8;
                local_258 = (dVar31 * dVar39 - dVar51 * dVar46) * dVar7;
                uStack_250 = 0;
                uStack_230 = 0;
                local_228._8_4_ = SUB84(dVar48,0);
                local_228._0_8_ = (dVar51 * dVar46 + dVar31 * dVar39) * dVar6;
                local_228._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                local_218 = local_368 * dVar6;
                uStack_210 = 0;
                local_1f8 = blendpd(auVar32,_DAT_149935300,2);
                local_208 = dVar41 * dVar13;
                dStack_200 = dVar12 * dVar41;
                dStack_1e0 = local_358;
                local_1b8 = dStack_350;
                FUN_1447fea8d(local_168);
                FUN_144a1c686(local_168,0x3e45798ee0000000);
                auVar33 = _DAT_149934d80;
                auVar37._8_8_ = -(ulonglong)(0.0 <= dStack_340);
                auVar37._0_8_ = -(ulonglong)(0.0 <= local_348);
                auVar43 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar37);
                uVar30 = -(ulonglong)(0.0 <= dVar6 * dVar9);
                dVar31 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
                dVar40 = auVar43._0_8_;
                local_168._8_8_ = (double)local_168._8_8_ * dVar40;
                local_168._0_8_ = (double)local_168._0_8_ * dVar40;
                local_158._0_8_ = (double)local_158._0_8_ * dVar40;
                dVar40 = auVar43._8_8_;
                local_138 = local_138 * dVar40;
                local_140 = local_140 * dVar40;
                local_148 = dVar40 * local_148;
                local_118 = local_118 * dVar31;
                local_120 = local_120 * dVar31;
                local_128 = dVar31 * local_128;
                FUN_14481fd10(&local_2b8,local_168);
                dVar31 = local_2a8 * local_2a8 + local_2b8 * local_2b8;
                dVar40 = dStack_2a0 * dStack_2a0 + dStack_2b0 * dStack_2b0;
                auVar50._0_8_ = dVar31 + dVar40;
                auVar50._8_8_ = dVar31 + dVar40;
                auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
                auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
                auVar43 = sqrtpd(auVar50,auVar50);
                auVar33 = divpd(auVar33,auVar43);
                auVar54._0_8_ = auVar33._0_8_ * local_2a8;
                auVar54._8_8_ = auVar33._8_8_ * dStack_2a0;
                dVar31 = (double)((ulonglong)(local_2b8 * auVar33._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
                dVar40 = (double)((ulonglong)(dStack_2b0 * auVar33._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
                auVar33 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar38);
                dVar42 = auVar33._0_8_;
                dVar46 = auVar33._8_8_;
              }
              if (uVar16 != 0) {
                LOCK();
                plVar1 = plVar18 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
            }
          }
          local_168._8_4_ = SUB84(dVar40,0);
          local_168._0_8_ = dVar31;
          local_168._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          local_158._8_4_ = SUB84(dVar46,0);
          local_158._0_8_ = dVar42;
          local_158._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          FUN_1448052ee(local_168,&local_1e8);
          fVar62 = (float)dStack_1e0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
LAB_1413d4265:
    lVar26 = 0;
  }
  else {
    uVar25 = *(uint *)(param_1 + 0xdc);
    lVar26 = 0;
    if ((-1 < (int)uVar25) && ((int)uVar25 < DAT_14c9647dc)) {
      plVar18 = (longlong *)
                ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8));
      if ((plVar18 == (longlong *)0x0) ||
         (((int)plVar18[2] != *(int *)(param_1 + 0xe0) ||
          ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_1413d4265;
      lVar26 = *plVar18;
    }
  }
  local_378 = local_378 & 0xffffffffffffff00;
  FUN_1413d4c10(lVar26,local_318,0,0);
  if ((((*(int *)(lVar26 + 0x3bc) != 0) && (uVar25 = *(uint *)(lVar26 + 0x3b8), -1 < (int)uVar25))
      && ((int)uVar25 < DAT_14c9647dc)) &&
     (((plVar18 = (longlong *)
                  ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
       plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)(lVar26 + 0x3bc))) &&
      ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
      lVar28 = *plVar18;
    }
    else {
      lVar28 = 0;
    }
    dVar31 = *(double *)(lVar26 + 0x3d0);
    dVar40 = *(double *)(lVar26 + 0x3c8);
    dVar42 = *(double *)(lVar26 + 0x3c0);
    auVar33 = *(undefined1 (*) [16])(lVar28 + 0x1b0);
    dVar12 = auVar33._0_8_;
    dVar13 = auVar33._8_8_;
    dVar46 = *(double *)(lVar28 + 0x1c0);
    pauVar19 = *(undefined1 (**) [16])(lVar28 + 0x230);
    if (pauVar19 == (undefined1 (*) [16])0x0) {
      pauVar19 = (undefined1 (*) [16])FUN_14001cc68(0x40,0x10);
      uVar20 = DAT_14c8463d8;
      *(undefined8 *)*pauVar19 = DAT_14c8463d0;
      *(undefined8 *)(*pauVar19 + 8) = uVar20;
      uVar20 = DAT_14c8463e8;
      *(undefined8 *)pauVar19[1] = DAT_14c8463e0;
      *(undefined8 *)(pauVar19[1] + 8) = uVar20;
      uVar20 = DAT_14c846500;
      *(undefined8 *)pauVar19[2] = DAT_14c8464f8;
      *(undefined8 *)(pauVar19[2] + 8) = uVar20;
      *(undefined8 *)pauVar19[3] = DAT_14c846508;
      *(undefined1 (**) [16])(lVar28 + 0x230) = pauVar19;
    }
    if (((*(double *)pauVar19[2] != dVar12) || (NAN(*(double *)pauVar19[2]) || NAN(dVar12))) ||
       ((*(double *)(pauVar19[2] + 8) != dVar13 ||
        (((NAN(*(double *)(pauVar19[2] + 8)) || NAN(dVar13) || (*(double *)pauVar19[3] != dVar46))
         || (NAN(*(double *)pauVar19[3]) || NAN(dVar46))))))) {
      auVar56._8_8_ = 0;
      auVar56._0_8_ = dVar46;
      dVar7 = (double)DAT_1499387d0;
      dVar6 = DAT_1499387d0._8_8_;
      auVar33 = divpd(auVar33,_DAT_1499387d0);
      auVar43 = divpd(auVar56,_DAT_1499387d0);
      auVar33 = roundpd(auVar33,auVar33,3);
      auVar43 = roundpd(auVar43,auVar43,3);
      dVar12 = dVar12 - auVar33._0_8_ * dVar7;
      dVar13 = dVar13 - auVar33._8_8_ * dVar6;
      auVar57._0_8_ = dVar46 - auVar43._0_8_ * dVar7;
      auVar57._8_8_ = 0.0 - auVar43._8_8_ * dVar6;
      auVar53._0_8_ = dVar12 + dVar7;
      auVar53._8_8_ = dVar13 + dVar6;
      auVar49._0_8_ = dVar7 + auVar57._0_8_;
      auVar49._8_8_ = dVar6 + auVar57._8_8_;
      auVar34._8_8_ = -(ulonglong)(0.0 <= dVar13);
      auVar34._0_8_ = -(ulonglong)(0.0 <= dVar12);
      auVar11._8_4_ = SUB84(dVar13,0);
      auVar11._0_8_ = dVar12;
      auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar43 = blendvpd(auVar53,auVar11,auVar34);
      auVar35._8_8_ = -(ulonglong)(0.0 <= auVar57._8_8_);
      auVar35._0_8_ = -(ulonglong)(0.0 <= auVar57._0_8_);
      auVar33 = blendvpd(auVar49,auVar57,auVar35);
      auVar44._0_8_ = auVar43._0_8_ + -360.0;
      auVar44._8_8_ = auVar43._8_8_ + -360.0;
      auVar36._8_8_ = -(ulonglong)(180.0 < auVar43._8_8_);
      auVar36._0_8_ = -(ulonglong)(180.0 < auVar43._0_8_);
      auVar43 = blendvpd(auVar43,auVar44,auVar36);
      dVar46 = auVar33._0_8_;
      pauVar19[2] = auVar43;
      *(ulonglong *)pauVar19[3] =
           ~-(ulonglong)(180.0 < dVar46) & (ulonglong)dVar46 |
           (ulonglong)(dVar46 + -360.0) & -(ulonglong)(180.0 < dVar46);
      FUN_144a7484c(pauVar19 + 2,local_168);
      *(undefined8 *)pauVar19[1] = local_158._0_8_;
      *(undefined8 *)(pauVar19[1] + 8) = local_158._8_8_;
      *(undefined8 *)*pauVar19 = local_168._0_8_;
      *(undefined8 *)(*pauVar19 + 8) = local_168._8_8_;
    }
    local_168 = *pauVar19;
    local_158 = pauVar19[1];
    local_370 = 0;
    local_378 = 0;
    lVar21 = 0;
    local_1e8 = dVar42 + dVar3;
    dStack_1e0 = dVar40 + dVar4;
    local_1d8 = dVar31 + dVar5;
    FUN_144927ad4(lVar28,&local_1e8,local_168,0);
    if (*(int *)(lVar26 + 0x3bc) != 0) {
      uVar25 = *(uint *)(lVar26 + 0x3b8);
      lVar21 = 0;
      if ((-1 < (int)uVar25) && ((int)uVar25 < DAT_14c9647dc)) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8));
        if ((plVar18 == (longlong *)0x0) ||
           (((int)plVar18[2] != *(int *)(lVar26 + 0x3bc) ||
            ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) {
          lVar21 = 0;
        }
        else {
          lVar21 = *plVar18;
        }
      }
    }
    if ((*(float *)(lVar21 + 0x778) != fVar62) || (NAN(*(float *)(lVar21 + 0x778)) || NAN(fVar62)))
    {
      *(float *)(lVar21 + 0x778) = fVar62;
      FUN_1448215fa(lVar21);
    }
  }
  if (((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar4))) ||
     (9.999999747378752e-05 < ABS(dVar5))) {
    lVar28 = lVar26 + 0x390;
    cVar15 = FUN_144729dda(lVar28);
    if (cVar15 != '\0') {
      uVar20 = FUN_14479d2ce(lVar28);
      lVar21 = FUN_1410ac07e(uVar20);
      if (lVar21 != 0) {
        lVar22 = FUN_1401ca522(lVar21 + 0x3a8);
        if (lVar22 != 0) {
          fVar62 = *(float *)(lVar21 + 0x3fc);
          cVar15 = FUN_144729dda(lVar28);
          if (cVar15 != '\0') {
            lVar28 = FUN_14479d2ce(lVar28);
            fVar62 = fVar62 * *(float *)(lVar28 + 0x820);
          }
          lVar28 = lVar26 + 0x3e0;
          cVar15 = FUN_144729dda(lVar28);
          if (cVar15 == '\0') {
            local_270 = FUN_141235872();
            if ((local_270 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_270);
            }
            local_378 = CONCAT71(local_378._1_7_,1);
            lVar22 = FUN_140fae5dc(lVar26,&local_270,0,&DAT_14c846480);
            if (lVar22 != 0) {
              lVar23 = FUN_141235872();
              if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(lVar23 + 0x38)) ||
                 (lVar27 = lVar22,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar23 + 0x38) * 8) != lVar23 + 0x30)) {
                lVar27 = 0;
              }
              FUN_14485c47a(lVar28,lVar27);
              cVar15 = FUN_144729dda(lVar28);
              if (cVar15 != '\0') {
                dVar31 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
                if (((dVar31 != 1.0) ||
                    (dVar46 = dVar5, dVar40 = dVar4, dVar42 = dVar3, NAN(dVar31))) &&
                   (dVar46 = DAT_14c8464f0, dVar40 = DAT_14c8464e8, dVar42 = DAT_14c8464e0,
                   9.99999993922529e-09 <= dVar31)) {
                  dVar31 = 1.0 / SQRT(dVar31);
                  dVar46 = dVar5 * dVar31;
                  dVar40 = dVar4 * dVar31;
                  dVar42 = dVar31 * dVar3;
                }
                plVar18 = (longlong *)FUN_14479d2ce(lVar28);
                (**(code **)(*plVar18 + 0x588))(plVar18,2);
                plVar18 = (longlong *)FUN_14479d2ce(lVar28);
                uVar20 = FUN_1401ca522(lVar21 + 0x3a8);
                (**(code **)(*plVar18 + 0xa78))(plVar18,uVar20);
                lVar23 = FUN_1402d20ea(lVar21 + 0x3d0);
                if (lVar23 != 0) {
                  plVar18 = (longlong *)FUN_14479d2ce(lVar28);
                  uVar20 = FUN_1402d20ea(lVar21 + 0x3d0);
                  (**(code **)(*plVar18 + 0x638))(plVar18,0,uVar20);
                }
                uVar20 = FUN_14479d2ce(lVar28);
                dVar31 = (double)fVar62;
                local_280 = dVar31;
                local_278 = dVar31;
                FUN_147a282d0(uVar20,&local_280,0);
                uVar20 = FUN_14479d2ce(lVar28);
                local_290 = dVar31;
                local_288 = dVar31;
                FUN_147a28314(uVar20,&local_290,0);
                uVar20 = FUN_14479d2ce(lVar28);
                local_168._8_8_ = dVar40;
                local_168._0_8_ = dVar42;
                local_158._0_8_ = dVar46;
                FUN_147a28066(uVar20,local_168,0);
                uVar20 = FUN_14479d2ce(lVar28);
                local_1e8 = dVar42;
                dStack_1e0 = dVar40;
                local_1d8 = dVar46;
                FUN_147a280ba(uVar20,&local_1e8,0);
                uVar20 = FUN_14479d2ce(lVar28);
                FUN_147a28358(uVar20,*(undefined1 *)(lVar21 + 0x3f8),0);
                uVar20 = FUN_14479d2ce(lVar28);
                local_268 = DAT_14c8464e0;
                dStack_260 = DAT_14c8464e8;
                local_258 = DAT_14c8464f0;
                FUN_147a2803c(uVar20,&local_268,0);
                uVar20 = FUN_14479d2ce(lVar28);
                local_2b8 = dVar3;
                dStack_2b0 = dVar4;
                local_2a8 = dVar5;
                FUN_147a28090(uVar20,&local_2b8,0);
                uVar20 = FUN_14479d2ce(lVar28);
                iVar17 = FUN_1457c5e5a(8);
                FUN_1412ff0e6(uVar20,-iVar17);
                uVar20 = FUN_14479d2ce(lVar28);
                FUN_147a2842a(uVar20);
              }
              FUN_141450f18(lVar26,lVar22,0,&DAT_14c846480);
            }
          }
          else {
            uVar20 = FUN_14479d2ce(lVar28);
            local_158._0_8_ = dVar5;
            local_168 = auVar14;
            FUN_147a28090(uVar20,local_168,1);
          }
        }
      }
    }
  }
  else if ((((*(int *)(lVar26 + 0x3e4) != 0) &&
            (uVar25 = *(uint *)(lVar26 + 0x3e0), -1 < (int)uVar25)) &&
           (((int)uVar25 < DAT_14c9647dc &&
            ((lVar28 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar28 != 0
             && (*(int *)(lVar28 + 0x10) == *(int *)(lVar26 + 0x3e4))))))) &&
          ((*(uint *)(lVar28 + 8) & 0x10200000) == 0)) {
    plVar18 = (longlong *)FUN_14479d2ce();
    (**(code **)(*plVar18 + 0x420))(plVar18,0);
    *(undefined8 *)(lVar26 + 0x3e0) = 0;
  }
LAB_1413d3fd1:
  if ((local_e0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d4c10 FUN_1413d4c10 body=306 status=ok
// SIG undefined FUN_1413d4c10(void)

bool FUN_1413d4c10(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 in_EAX;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    auVar3._8_8_ = -(ulonglong)((double)(param_2[1] & 0x7ff0000000000000) == INFINITY);
    auVar3._0_8_ = -(ulonglong)((double)(*param_2 & 0x7ff0000000000000) == INFINITY);
    iVar8 = movmskpd(in_EAX,auVar3);
    auVar6._8_8_ = -(ulonglong)((double)(param_2[3] & 0x7ff0000000000000) == INFINITY);
    auVar6._0_8_ = -(ulonglong)((double)(param_2[2] & 0x7ff0000000000000) == INFINITY);
    uVar9 = movmskpd((int)param_1,auVar6);
    if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
      auVar4._8_8_ = -(ulonglong)((double)(param_2[5] & 0x7ff0000000000000) == INFINITY);
      auVar4._0_8_ = -(ulonglong)((double)(param_2[4] & 0x7ff0000000000000) == INFINITY);
      iVar8 = movmskpd(iVar8,auVar4);
      auVar7._8_8_ = -(ulonglong)((double)(param_2[7] & 0x7ff0000000000000) == INFINITY);
      auVar7._0_8_ = -(ulonglong)((double)(param_2[6] & 0x7ff0000000000000) == INFINITY);
      uVar9 = movmskpd(0,auVar7);
      if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
        lVar10 = -(ulonglong)((double)(param_2[8] & 0x7ff0000000000000) == INFINITY);
        auVar5._8_8_ = -(ulonglong)((double)(param_2[9] & 0x7ff0000000000000) == INFINITY);
        auVar5._0_8_ = lVar10;
        iVar8 = movmskpd(iVar8,auVar5);
        auVar2._8_8_ = -(ulonglong)((double)(param_2[0xb] & 0x7ff0000000000000) == INFINITY);
        auVar2._0_8_ = -(ulonglong)((double)(param_2[10] & 0x7ff0000000000000) == INFINITY);
        uVar9 = movmskpd(0,auVar2);
        if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
          FUN_140613f88(lVar1,0x7ff0000000000000,lVar10,param_4,param_5);
          goto LAB_1413d4cc8;
        }
      }
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0x3f80000000000000;
    memset(param_4 + 1,0,0x9c);
    *(undefined4 *)((longlong)param_4 + 0xa4) = 0xffffffff;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    param_4[0x18] = 0;
    param_4[0x19] = 0;
    *(undefined4 *)(param_4 + 0x1a) = 0xffffffff;
    *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
    *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
    *(undefined8 *)((longlong)param_4 + 0xec) = 0;
    param_4[0x1e] = 0;
    param_4[0x1f] = 0;
  }
LAB_1413d4cc8:
  return lVar1 != 0;
}



// FUNCTION 1413d4d42 FUN_1413d4d42 body=3308 status=ok
// SIG undefined FUN_1413d4d42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1413d4d42(longlong *param_1,double *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  uint *puVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  double *pdVar27;
  double *pdVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  char cVar35;
  undefined8 unaff_R12;
  ulonglong uVar36;
  bool bVar37;
  ulonglong uVar38;
  double dVar39;
  double dVar40;
  double dVar42;
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auStack_2d8 [40];
  int local_2b0;
  undefined4 local_2ac;
  ulonglong local_2a8;
  longlong *local_2a0;
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  pdVar27 = (double *)(param_1 + 4);
  pdVar28 = param_2;
  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
    *pdVar28 = *pdVar27;
    pdVar27 = pdVar27 + 1;
    pdVar28 = pdVar28 + 1;
  }
  lVar24 = param_1[0x11];
  if (lVar24 != 0) {
    dVar40 = (double)param_1[4];
    dVar42 = (double)param_1[5];
    dVar39 = (double)param_1[7];
    param_2[2] = (double)param_1[6];
    param_2[3] = dVar39;
    *param_2 = dVar40;
    param_2[1] = dVar42;
    dVar40 = (double)param_1[0xd];
    dVar42 = (double)param_1[0xe];
    dVar39 = (double)param_1[0xf];
    param_2[8] = (double)param_1[0xc];
    param_2[9] = dVar40;
    param_2[10] = dVar42;
    param_2[0xb] = dVar39;
    dVar39 = (double)*(float *)(lVar24 + 0x140);
    dVar40 = (double)param_1[10];
    dVar42 = (double)param_1[9];
    param_2[4] = dVar39 * (double)param_1[8];
    param_2[5] = dVar42 * dVar39;
    param_2[6] = dVar40 * dVar39;
    param_2[7] = 0.0;
  }
  if (((((*(int *)((longlong)param_1 + 0xc) != 0) &&
        (uVar23 = *(uint *)(param_1 + 1), -1 < (int)uVar23)) && ((int)uVar23 < DAT_14c9647dc)) &&
      ((plVar21 = (longlong *)
                  ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
       plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)((longlong)param_1 + 0xc))))) &&
     ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
      lVar24 = *plVar21;
    }
    else {
      lVar24 = 0;
    }
    if ((*(char *)(lVar24 + 0x60) == '\x01') && (*(longlong *)(lVar24 + 0x50) != 0)) {
      if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
        lVar24 = *plVar21;
      }
      else {
        lVar24 = 0;
      }
      if (*(char *)(lVar24 + 0x60) == '\x01') {
        lVar24 = *(longlong *)(lVar24 + 0x50);
      }
      else {
        lVar24 = 0;
      }
      dVar40 = DAT_14c8463d0;
      dVar42 = DAT_14c8463d8;
      dVar39 = DAT_14c8463e0;
      dVar43 = DAT_14c8463e8;
      if (*(int *)(lVar24 + 0xe0) != 0) {
        if (*(int *)(lVar24 + 0xe0) != 1) goto LAB_1413d4efb;
        local_178 = *param_2;
        dStack_170 = param_2[1];
        local_168 = param_2[2];
        dStack_160 = param_2[3];
        FUN_1448052ee(&local_178,local_1f8);
        auVar58._8_8_ = 0;
        auVar58._0_8_ = local_1f8._8_8_;
        local_1f8 = auVar58 << 0x40;
        local_1e8 = 0.0;
        FUN_144a7484c(local_1f8,&local_178);
        dVar40 = local_178;
        dVar42 = dStack_170;
        dVar39 = local_168;
        dVar43 = dStack_160;
      }
      *param_2 = dVar40;
      param_2[1] = dVar42;
      param_2[2] = dVar39;
      param_2[3] = dVar43;
    }
  }
LAB_1413d4efb:
  plVar21 = (longlong *)param_1[0x13];
  bVar18 = true;
  if (plVar21 == (longlong *)0x0) {
LAB_1413d55a2:
    lVar24 = 0;
    plVar21 = (longlong *)0x0;
    uVar38 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  }
  else {
    iVar19 = (int)plVar21[1];
    do {
      if (iVar19 == 0) goto LAB_1413d55a2;
      iVar32 = iVar19 + 1;
      LOCK();
      iVar26 = (int)plVar21[1];
      bVar37 = iVar19 == iVar26;
      if (bVar37) {
        *(int *)(plVar21 + 1) = iVar32;
        iVar26 = iVar19;
      }
      iVar19 = iVar26;
      auVar58 = _DAT_149934d80;
      UNLOCK();
    } while (!bVar37);
    lVar24 = param_1[0x12];
    if (lVar24 == 0) {
      lVar24 = 0;
    }
    else {
      auVar46 = *(undefined1 (*) [16])(lVar24 + 0x110);
      dVar40 = auVar46._0_8_;
      dVar8 = auVar46._8_8_;
      auVar6 = *(undefined1 (*) [16])(lVar24 + 0x120);
      dVar42 = auVar6._0_8_;
      auVar47 = *(undefined1 (*) [16])(param_2 + 8);
      dVar39 = auVar47._0_8_;
      dVar9 = auVar47._8_8_;
      auVar7 = *(undefined1 (*) [16])(param_2 + 10);
      dVar43 = auVar7._0_8_;
      auVar46 = minpd(auVar47,auVar46);
      auVar50 = minpd(auVar7,auVar6);
      auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
      iVar19 = movmskpd(iVar19,auVar47);
      auVar46._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar46._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar23 = movmskpd(iVar32,auVar46);
      if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
        dVar56 = *param_2;
        dVar11 = param_2[1];
        dVar12 = param_2[2];
        dVar13 = param_2[3];
        dVar14 = *(double *)(lVar24 + 0xd0);
        dVar15 = *(double *)(lVar24 + 0xd8);
        dVar16 = *(double *)(lVar24 + 0xe0);
        dVar17 = *(double *)(lVar24 + 0xe8);
        dVar55 = *(double *)(lVar24 + 0xe8);
        dVar4 = *(double *)(lVar24 + 0xe8);
        dVar5 = *(double *)(lVar24 + 0xd0);
        dVar51 = *(double *)(lVar24 + 0xd0);
        dVar49 = *(double *)(lVar24 + 0xd8);
        dVar54 = *(double *)(lVar24 + 0xd8);
        dVar53 = *(double *)(lVar24 + 0xe0);
        dVar52 = *(double *)(lVar24 + 0xe0);
        dVar45 = dVar11 * dVar53 * -1.0 + dVar12 * dVar49 + dVar13 * dVar5 * 1.0 + dVar56 * dVar55;
        dVar48 = dVar56 * dVar52 * 1.0 + dVar13 * dVar54 + dVar12 * dVar51 * -1.0 + dVar11 * dVar4;
        auVar57._0_8_ =
             dVar13 * dVar53 * 1.0 + ((dVar5 * dVar11 * 1.0 + dVar12 * dVar55) - dVar56 * dVar49);
        auVar57._8_8_ =
             dVar12 * dVar52 * -1.0 + ((dVar51 * dVar56 * -1.0 + dVar13 * dVar4) - dVar11 * dVar54);
        dVar49 = param_2[4] * dVar40;
        dVar52 = param_2[5] * dVar8;
        dVar53 = param_2[6] * dVar42;
        dVar56 = param_2[7] * auVar6._8_8_;
        dVar5 = dVar52 * dVar14 - dVar15 * dVar49;
        dVar51 = dVar53 * dVar15 - dVar16 * dVar52;
        dVar54 = dVar49 * dVar16 - dVar14 * dVar53;
        dVar11 = dVar56 * dVar17 - dVar17 * dVar56;
        dVar51 = dVar51 + dVar51;
        dVar54 = dVar54 + dVar54;
        dVar5 = dVar5 + dVar5;
        dVar11 = dVar11 + dVar11;
        local_118 = (dVar5 * dVar15 - dVar16 * dVar54) + dVar55 * dVar51 + dVar49 +
                    *(double *)(lVar24 + 0xf0);
        dStack_110 = (dVar51 * dVar16 - dVar5 * dVar14) + dVar4 * dVar54 + dVar52 +
                     *(double *)(lVar24 + 0xf8);
        local_108 = (dVar54 * dVar14 - dVar15 * dVar51) + dVar55 * dVar5 + dVar53 +
                    *(double *)(lVar24 + 0x100);
        dVar55 = (dVar11 * dVar17 - dVar11 * dVar17) + dVar4 * dVar11 + dVar56 +
                 *(double *)(lVar24 + 0x108);
      }
      else {
        dVar5 = *(double *)(lVar24 + 0xd0);
        dVar51 = *(double *)(lVar24 + 0xd8);
        dVar54 = *(double *)(lVar24 + 0xe0);
        dVar49 = dVar51 + dVar51;
        dVar52 = dVar54 + dVar54;
        dVar48 = dVar5 * (dVar5 + dVar5);
        local_1a8 = (1.0 - (dVar48 + dVar51 * dVar49)) * dVar42;
        dVar4 = *(double *)(lVar24 + 0xd0) * dVar52;
        dVar45 = *(double *)(lVar24 + 0xe8);
        dVar53 = dVar52 * dVar45;
        dVar56 = (dVar5 + dVar5) * *(double *)(lVar24 + 0xe8);
        dVar45 = dVar49 * dVar45;
        local_1b8 = (dVar45 + dVar4) * dVar42;
        dVar48 = (DAT_149934d80._8_8_ - (dVar54 * dVar52 + dVar48)) * dVar8;
        dVar55 = (dVar49 * dVar5 + dVar53) * dVar40;
        local_1c8 = (dVar52 * dVar51 + dVar56) * dVar8;
        dStack_1b0 = (dVar52 * dVar51 - dVar56) * dVar42;
        local_1e8 = (dVar4 - dVar45) * dVar40;
        local_1f8._8_4_ = SUB84(dVar55,0);
        local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar54 * dVar52 + dVar51 * dVar49)) * dVar40;
        local_1f8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar48,0);
        local_1d8._0_8_ = (dVar49 * dVar5 - dVar53) * dVar8;
        local_1d8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = *(undefined8 *)(lVar24 + 0xf0);
        uStack_190 = *(undefined8 *)(lVar24 + 0xf8);
        local_188 = *(undefined8 *)(lVar24 + 0x100);
        uStack_180 = 0x3ff0000000000000;
        dVar55 = *param_2;
        dVar4 = param_2[1];
        dVar5 = param_2[2];
        dVar51 = dVar4 + dVar4;
        dVar54 = dVar5 + dVar5;
        dVar48 = dVar55 * (dVar55 + dVar55);
        local_228 = (1.0 - (dVar48 + dVar4 * dVar51)) * dVar43;
        dVar45 = param_2[3];
        dVar49 = dVar54 * dVar45;
        dVar52 = (dVar55 + dVar55) * param_2[3];
        dVar45 = dVar51 * dVar45;
        local_238 = (dVar45 + *param_2 * dVar54) * dVar43;
        dStack_230 = (dVar54 * dVar4 - dVar52) * dVar43;
        local_278 = ((double)DAT_149934d80 - (dVar5 * dVar54 + dVar4 * dVar51)) * dVar39;
        dVar48 = (DAT_149934d80._8_8_ - (dVar5 * dVar54 + dVar48)) * dVar9;
        dStack_270 = (dVar51 * dVar55 + dVar49) * dVar39;
        local_248 = (dVar54 * dVar4 + dVar52) * dVar9;
        local_268 = (*param_2 * dVar54 - dVar45) * dVar39;
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar48,0);
        local_258._0_8_ = (dVar51 * dVar55 - dVar49) * dVar9;
        local_258._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = param_2[4];
        dStack_210 = param_2[5];
        local_208 = param_2[6];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar50._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
        auVar50._0_8_ = -(ulonglong)(0.0 <= dVar40 * dVar39);
        auVar46 = blendvpd(_DAT_149936790,auVar58,auVar50);
        uVar38 = -(ulonglong)(0.0 <= dVar42 * dVar43);
        dVar45 = (double)(~uVar38 & 0xbff0000000000000 | uVar38 & 0x3ff0000000000000);
        dVar48 = auVar46._0_8_;
        local_168 = local_168 * dVar48;
        dStack_170 = dStack_170 * dVar48;
        local_178 = local_178 * dVar48;
        dVar48 = auVar46._8_8_;
        local_148 = local_148 * dVar48;
        local_150 = local_150 * dVar48;
        local_158 = dVar48 * local_158;
        local_128 = local_128 * dVar45;
        local_130 = local_130 * dVar45;
        local_138 = dVar45 * local_138;
        FUN_14481fd10(&local_298);
        dVar45 = local_288 * local_288 + local_298 * local_298;
        dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar44._0_8_ = dVar45 + dVar48;
        auVar44._8_8_ = dVar45 + dVar48;
        auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
        auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
        auVar46 = sqrtpd(auVar44,auVar44);
        auVar58 = divpd(auVar58,auVar46);
        auVar59._0_8_ = auVar58._0_8_ * local_288;
        auVar59._8_8_ = auVar58._8_8_ * dStack_280;
        dVar45 = (double)((ulonglong)(local_298 * auVar58._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
        dVar48 = (double)((ulonglong)(dStack_290 * auVar58._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
        auVar57 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar41);
        dVar55 = 0.0;
      }
      dVar4 = auVar7._8_8_ * auVar6._8_8_;
      *param_2 = dVar45;
      param_2[1] = dVar48;
      *(undefined1 (*) [16])(param_2 + 2) = auVar57;
      auVar6._8_4_ = SUB84(dStack_110,0);
      auVar6._0_8_ = local_118;
      auVar6._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar6;
      param_2[6] = local_108;
      param_2[7] = dVar55;
      auVar10._8_4_ = SUB84(dVar9 * dVar8,0);
      auVar10._0_8_ = dVar39 * dVar40;
      auVar10._12_4_ = (int)((ulonglong)(dVar9 * dVar8) >> 0x20);
      *(undefined1 (*) [16])(param_2 + 8) = auVar10;
      auVar7._8_4_ = SUB84(dVar4,0);
      auVar7._0_8_ = dVar43 * dVar42;
      auVar7._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 10) = auVar7;
      bVar18 = false;
    }
    uVar38 = 0;
  }
  if (*(char *)(param_3 + 0x6b8) == '\0') {
    dVar40 = param_2[6];
    dVar42 = param_2[7];
  }
  else {
    dVar40 = (double)*(float *)(param_3 + 0x6bc);
    dVar42 = 0.0;
    param_2[6] = dVar40;
    param_2[7] = 0.0;
  }
  dVar39 = param_2[4];
  dVar43 = param_2[5];
  if ((char)param_1[0x19] == '\0') {
    param_1[0x16] = (longlong)dVar39;
    param_1[0x17] = (longlong)dVar43;
    param_1[0x18] = (longlong)dVar40;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  else if (((9.999999747378752e-05 < ABS((double)param_1[0x16] - dVar39)) ||
           (9.999999747378752e-05 < ABS((double)param_1[0x17] - dVar43))) ||
          (9.999999747378752e-05 < ABS((double)param_1[0x18] - dVar40))) {
    param_1[0x16] = (longlong)dVar39;
    param_1[0x17] = (longlong)dVar43;
    param_1[0x18] = (longlong)dVar40;
    *(undefined1 *)(param_1 + 0x19) = 1;
    if (*(char *)((longlong)param_1 + 0xd4) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
    }
  }
  local_2ac = (undefined4)uVar38;
  uVar36 = uVar38;
  if (bVar18 || *(char *)((longlong)param_1 + 0xd4) != '\0') {
LAB_1413d5446:
    cVar35 = (char)uVar36;
    if (*(char *)((longlong)param_1 + 0xd4) == '\0') goto LAB_1413d544e;
    iVar19 = (int)param_1[0x1a];
  }
  else {
    iVar19 = *(int *)(lVar24 + 0xa0);
    if (iVar19 == 0) {
      uVar30 = 1;
      uVar31 = 0;
      iVar32 = 0;
      iVar26 = 0;
    }
    else {
      puVar22 = *(uint **)(lVar24 + 0x98);
      if (*(uint **)(lVar24 + 0x98) == (uint *)0x0) {
        puVar22 = (uint *)(lVar24 + 0x88);
      }
      uVar23 = *puVar22;
      if (uVar23 == 0) {
        iVar32 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar32 = iVar19 + -1;
        }
        uVar31 = 0;
        uVar30 = (ulonglong)(uint)(iVar32 >> 5);
        if (iVar32 >> 5 < 1) {
          uVar30 = uVar31;
        }
        iVar26 = 0;
        do {
          if (uVar30 == uVar31) goto LAB_1413d5446;
          iVar26 = iVar26 + 0x20;
          uVar23 = puVar22[uVar31 + 1];
          uVar31 = uVar31 + 1;
        } while (uVar23 == 0);
      }
      else {
        uVar31 = 0;
        iVar26 = 0;
      }
      uVar30 = (ulonglong)(-uVar23 & uVar23);
      uVar3 = uVar30 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      iVar32 = (iVar26 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar32) {
        iVar32 = iVar19;
      }
    }
    if (iVar32 == iVar19) goto LAB_1413d5446;
    puVar22 = (uint *)(lVar24 + 0x88);
    if (*(uint **)(lVar24 + 0x98) != (uint *)0x0) {
      puVar22 = *(uint **)(lVar24 + 0x98);
    }
    iVar25 = iVar19 + 0x1e;
    if (-1 < iVar19 + -1) {
      iVar25 = iVar19 + -1;
    }
    iVar25 = iVar25 >> 5;
    uVar23 = 0xffffffff;
    local_2a8 = 0;
    local_2b0 = 0;
    do {
      if (((*(char *)(*(longlong *)(lVar24 + 0x78) + 0xd8 + (longlong)iVar32 * 0x180) == '\x01') &&
          (lVar34 = (longlong)iVar32 * 0x180 + *(longlong *)(lVar24 + 0x78),
          *(longlong *)(lVar34 + 0x10) != *param_1)) &&
         ((ABS(*(double *)(lVar34 + 0xc0) - dVar39) <= 9.999999747378752e-05 &&
          ((ABS(*(double *)(lVar34 + 200) - dVar43) <= 9.999999747378752e-05 &&
           (ABS(*(double *)(lVar34 + 0xd0) - dVar40) <= 9.999999747378752e-05)))))) {
        if ((*(char *)(lVar34 + 0xe4) == '\x01') && (local_2b0 < *(int *)(lVar34 + 0xe0))) {
          local_2b0 = *(int *)(lVar34 + 0xe0);
        }
        local_2a8 = (ulonglong)((int)local_2a8 + 1);
      }
      uVar23 = uVar23 & ~(uint)uVar30;
      iVar32 = (int)uVar31;
      lVar34 = (longlong)iVar32;
      uVar33 = puVar22[lVar34] & uVar23;
      if (uVar33 == 0) {
        iVar20 = iVar25;
        if (iVar25 < iVar32) {
          iVar20 = iVar32;
        }
        if (iVar25 <= iVar32) break;
        lVar29 = 0;
        while( true ) {
          iVar26 = iVar26 + 0x20;
          uVar33 = puVar22[lVar34 + lVar29 + 1];
          if (uVar33 != 0) break;
          lVar29 = lVar29 + 1;
          if (iVar20 - lVar34 == lVar29) goto LAB_1413d5431;
        }
        uVar31 = (ulonglong)(iVar32 + (int)lVar29 + 1);
        uVar23 = 0xffffffff;
      }
      uVar30 = (ulonglong)(-uVar33 & uVar33);
      uVar36 = uVar30 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      iVar32 = (iVar26 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    } while (iVar32 < iVar19);
LAB_1413d5431:
    uVar36 = uVar38 & 0xffffffff;
    if ((int)local_2a8 < 1) goto LAB_1413d5446;
    iVar19 = local_2b0 + 1;
    *(int *)(param_1 + 0x1a) = iVar19;
    *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  }
  param_2[4] = dVar39 + 0.0;
  param_2[5] = dVar43 + 0.0;
  param_2[6] = dVar40 + (double)iVar19 * 0.0001;
  param_2[7] = dVar42 + 0.0;
  cVar35 = (char)uVar38;
LAB_1413d544e:
  local_2a0 = plVar21;
  if (cVar35 == '\0') {
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d5a30 FUN_1413d5a30 body=70 status=ok
// SIG undefined FUN_1413d5a30(void)

void FUN_1413d5a30(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413d5a76 FUN_1413d5a76 body=187 status=ok
// SIG undefined FUN_1413d5a76(void)

void FUN_1413d5a76(longlong param_1)

{
  FUN_14017eb66(param_1,0);
  FUN_1413d5b31(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) == 0) goto LAB_1413d5aa8;
  while( true ) {
    FUN_1400020a8();
LAB_1413d5aa8:
    if (*(undefined8 **)(param_1 + 0x98) == (undefined8 *)0x0) break;
    *(undefined8 *)(param_1 + 0x98) = **(undefined8 **)(param_1 + 0x98);
  }
  while (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = **(undefined8 **)(param_1 + 0x88);
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1413d5dd5(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) goto LAB_1413d5b09;
  while (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(param_1 + 0x48);
LAB_1413d5b09:
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413d5b31 FUN_1413d5b31 body=675 status=ok
// SIG undefined FUN_1413d5b31(void)

void FUN_1413d5b31(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    do {
      plVar5 = (longlong *)*param_1;
      if (plVar5 != (longlong *)0x0) {
        FUN_140146bed(plVar5[0x12],(int)plVar5[0x13]);
        if (plVar5[0x12] != 0) {
          FUN_1400020a8();
        }
        FUN_14484f169(plVar5[0x10],(int)plVar5[0x11]);
        if (plVar5[0x10] != 0) {
          FUN_1400020a8();
        }
        FUN_140146c3d(plVar5[0xe],(int)plVar5[0xf]);
        if (plVar5[0xe] != 0) {
          FUN_1400020a8();
        }
        FUN_140146c68(plVar5[0xc],(int)plVar5[0xd]);
        if (plVar5[0xc] != 0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(plVar5 + 0xb) = 0;
        if (plVar5[10] != 0) {
          FUN_1400020a8();
        }
        plVar1 = plVar5 + 4;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = plVar1;
        if ((int)plVar5[7] != 0) {
          FUN_1449c0562(&local_68);
        }
        plVar2 = plVar5 + 2;
        local_78 = local_58;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = local_60;
        local_90 = plVar2;
        while (local_78._4_4_ < (int)local_80[3]) {
          local_98 = *(longlong **)(*local_90 + 0x20 + (longlong)local_78._4_4_ * 0x70);
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_98 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_98)();
              LOCK();
              piVar4 = (int *)((longlong)local_98 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*local_98 + 0x10))();
              }
            }
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
        }
        *(undefined4 *)(plVar5 + 3) = 0;
        if (*(int *)((longlong)plVar5 + 0x1c) != 0) {
          FUN_141154a24(plVar2,0);
        }
        plVar5[8] = 0xffffffff;
        *(undefined4 *)(plVar5 + 7) = 0;
        if (0x80 < *(uint *)((longlong)plVar5 + 0x3c)) {
          *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
          FUN_1446efbd8(plVar1,0);
        }
        if (plVar5[6] != 0) {
          FUN_1400020a8();
        }
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_14484f1b4(*plVar5,(int)plVar5[1]);
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar5);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d5dd5 FUN_1413d5dd5 body=734 status=ok
// SIG undefined FUN_1413d5dd5(void)

void FUN_1413d5dd5(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      if (plVar1[0x5a] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x58] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x56] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x54] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x4d] != 0) {
        FUN_1400020a8();
      }
      lVar2 = 600;
      do {
        FUN_144885bd4(*(undefined8 *)((longlong)plVar1 + lVar2),
                      *(undefined4 *)((longlong)plVar1 + lVar2 + 8));
        if (*(longlong *)((longlong)plVar1 + lVar2) != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0x188);
      FUN_1413d60b3(plVar1[0x2a],(int)plVar1[0x2b]);
      if (plVar1[0x2a] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x28] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x26] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x24] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x22] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x20] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x1e] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x1c] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x1a] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x18] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x16] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x14] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x12] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0x10] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0xe] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0xc] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[10] != 0) {
        FUN_1400020a8();
      }
      FUN_140332567(plVar1[8],(int)plVar1[9]);
      if (plVar1[8] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[6] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 1413d60b3 FUN_1413d60b3 body=99 status=ok
// SIG undefined FUN_1413d60b3(void)

void FUN_1413d60b3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1413d6116 FUN_1413d6116 body=265 status=ok
// SIG undefined FUN_1413d6116(void)

undefined * FUN_1413d6116(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1190) {
    FUN_144b3d300(&DAT_14c9c1190);
    if (DAT_14c9c1190 == -1) {
      FUN_145940d56(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FInstanceCullingDrawParams";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x20;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c1110,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f67a);
      _Init_thread_footer(&DAT_14c9c1190);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c1110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d6220 FUN_1413d6220 body=299 status=ok
// SIG undefined FUN_1413d6220(void)

void FUN_1413d6220(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1413d62b5;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    iVar4 = 0;
    puVar3 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1413d628e:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1413d628e;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1413d62b5;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1413d62b5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d634c FUN_1413d634c body=226 status=ok
// SIG undefined FUN_1413d634c(void)

longlong * FUN_1413d634c(longlong *param_1)

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
  pcVar13 = FUN_1462ca996;
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



// FUNCTION 1413d6430 FUN_1413d6430 body=149 status=ok
// SIG undefined FUN_1413d6430(void)

int FUN_1413d6430(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x50) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x50) + 0x80) != '\x01')) {
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar4 = 0;
      iVar2 = 0;
      do {
        iVar2 = iVar2 + (uint)*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar4) + 0x91)
        ;
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(param_1 + 0x68) * 8 != lVar4);
      return iVar2;
    }
  }
  else {
    iVar2 = FUN_148935970(param_1);
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar4);
        if (*(int *)(lVar1 + 0x9c) == iVar2) {
          iVar3 = iVar3 + (uint)*(byte *)(lVar1 + 0x91);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(param_1 + 0x68) * 8 != lVar4);
      return iVar3;
    }
  }
  return 0;
}



// FUNCTION 1413d64c6 FUN_1413d64c6 body=161 status=ok
// SIG undefined FUN_1413d64c6(void)

undefined4 FUN_1413d64c6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  char local_58 [16];
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar3 = 0;
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    local_58[0] = '\0';
    local_30[0] = 0;
    FUN_1456bb102(local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x20));
    uVar3 = FUN_1413d6568(lVar2,local_58);
    FUN_1448173f8(local_30);
    if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d6568 FUN_1413d6568 body=155 status=ok
// SIG undefined FUN_1413d6568(void)

undefined4 FUN_1413d6568(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1 + 0x30,local_40,param_2);
  uVar2 = FUN_14005fbd2(local_40,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d6604 FUN_1413d6604 body=4255 status=ok
// SIG undefined FUN_1413d6604(void)

void FUN_1413d6604(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  code *local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_ae;
  undefined1 uStack_ad;
  int iStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 local_a5;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1468d96f0;
      local_140 = (undefined8 *)0x0;
      local_148 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_38);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_38);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_38);
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1468d96f0;
      local_140 = (undefined8 *)0x0;
      local_148 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_40);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_40);
    }
    else {
      if (pcVar1 == (code *)&LAB_1428293cc) {
        local_40 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        goto LAB_1413d6775;
      }
      (*pcVar1)(uVar4,param_2,&local_40);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
LAB_1413d6775:
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,local_58);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,local_58);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,local_58);
    }
  }
  plVar6 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1403a682c;
      local_140 = (undefined8 *)0x0;
      local_148 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_70);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_70);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_70 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_70);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1403a682c;
      local_140 = (undefined8 *)0x0;
      local_148 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_88);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_88);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_88 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_88);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1403a682c;
      local_140 = (undefined8 *)0x0;
      local_148 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_a0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_a0);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_a0);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_a0 = (undefined4)uVar4;
      uStack_9c = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar1)(uVar4,param_2,&uStack_a0);
    }
  }
  iStack_a4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_14067a048;
      local_140 = (undefined8 *)0x0;
      local_148 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_a4);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&iStack_a4);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&iStack_a4);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      iStack_a4 = (int)uVar4;
      uStack_a0 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar1)(uVar4,param_2,&iStack_a4);
    }
  }
  iVar3 = iStack_a4;
  local_a5 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_140a4831c;
      local_148 = (undefined8 *)0x1000000008001;
      local_140 = (undefined8 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a5);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_a5);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_a5);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_a5 = (undefined1)uVar4;
      iStack_a4 = (int)((ulonglong)uVar4 >> 8);
      uStack_a0._0_3_ = (undefined3)((ulonglong)uVar4 >> 0x28);
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_a5);
    }
  }
  iStack_ac = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_14067a048;
      local_140 = (undefined8 *)0x0;
      local_148 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_ac);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&iStack_ac);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&iStack_ac);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      iStack_ac = (int)uVar4;
      uStack_a8 = (undefined2)((ulonglong)uVar4 >> 0x20);
      uStack_a6 = (undefined1)((ulonglong)uVar4 >> 0x30);
      local_a5 = (undefined1)((ulonglong)uVar4 >> 0x38);
    }
    else {
      (*pcVar1)(uVar4,param_2,&iStack_ac);
    }
  }
  iVar2 = iStack_ac;
  uStack_ad = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_140a4831c;
      local_148 = (undefined8 *)0x1000000008001;
      local_140 = (undefined8 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_ad);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_ad);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_ad);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_ad = (undefined1)uVar4;
      iStack_ac = (int)((ulonglong)uVar4 >> 8);
      uStack_a8 = (undefined2)((ulonglong)uVar4 >> 0x28);
      uStack_a6 = (undefined1)((ulonglong)uVar4 >> 0x38);
    }
    else {
      (*pcVar1)(uVar4,param_2,&uStack_ad);
    }
  }
  local_ae = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_140a4831c;
      local_148 = (undefined8 *)0x1000000008001;
      local_140 = (undefined8 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ae);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_ae);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_ae);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_ae = (undefined1)uVar4;
      uStack_ad = (undefined1)((ulonglong)uVar4 >> 8);
      iStack_ac = (int)((ulonglong)uVar4 >> 0x10);
      uStack_a8 = (undefined2)((ulonglong)uVar4 >> 0x30);
    }
    else {
      (*pcVar1)(uVar4,param_2,&local_ae);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = CONCAT44(uStack_9c,uStack_a0);
  local_140 = &local_c8;
  uStack_c0 = uStack_98;
  local_b8 = local_90;
  local_148 = &local_e8;
  local_e8 = local_88;
  uStack_e0 = uStack_80;
  local_d8 = local_78;
  local_108 = (undefined4)local_70;
  uStack_104 = local_70._4_4_;
  uStack_100 = uStack_68;
  uStack_fc = uStack_64;
  local_f8 = local_60;
  local_128 = iVar2 != 0;
  local_118 = local_ae;
  local_138 = CONCAT71(local_138._1_7_,iVar3 != 0);
  local_120 = uStack_ad;
  local_130 = (code *)CONCAT71(local_130._1_7_,local_a5);
  uVar4 = FUN_1413d76a4(local_38,local_40,plVar6);
  *param_3 = uVar4;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d76a4 FUN_1413d76a4 body=555 status=ok
// SIG undefined FUN_1413d76a4(void)

undefined8
FUN_1413d76a4(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      if (param_1 == 0) {
LAB_1413d775f:
        param_1 = 0;
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_c0 = &local_50;
          local_50 = FUN_141030f22;
          local_b0 = FUN_14081d0ea;
          local_b8 = FUN_14081d0ea;
          local_c8 = &LAB_1478c0a72;
          local_d0 = &LAB_1417b2375;
          local_d8 = L"Engine";
          local_e0 = 0x1000000000;
          local_e8 = 0x10000004;
          local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,8);
          local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,0x390);
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
        goto LAB_1413d775f;
      }
      local_58 = param_6[2];
      local_f0 = &local_68;
      local_68 = *param_6;
      uStack_60 = param_6[1];
      local_88 = *param_5;
      uStack_80 = param_5[1];
      local_f8 = &local_88;
      local_78 = param_5[2];
      local_a8 = *param_4;
      uStack_a4 = param_4[1];
      uStack_a0 = param_4[2];
      uStack_9c = param_4[3];
      local_98 = *(undefined8 *)(param_4 + 4);
      local_c0 = (code **)CONCAT71(local_c0._1_7_,param_11);
      local_c8 = (undefined1 *)CONCAT71(local_c8._1_7_,param_10);
      local_d8 = (wchar_t *)CONCAT71(local_d8._1_7_,param_9);
      local_e0 = CONCAT71(local_e0._1_7_,param_8);
      local_e8 = CONCAT31(local_e8._1_3_,param_7);
      local_d0 = (undefined1 *)param_1;
      uVar2 = FUN_1405838ec(lVar1,param_2,param_3);
      goto LAB_1413d77e3;
    }
  }
  uVar2 = 0;
LAB_1413d77e3:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d78d0 FUN_1413d78d0 body=155 status=ok
// SIG undefined FUN_1413d78d0(void)

void FUN_1413d78d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2);
  if (cVar3 != '\0') {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x40);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar5);
        *(longlong **)(param_1 + 0x30) = plVar2;
        (**(code **)(*plVar2 + 8))(plVar2,param_2);
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
  }
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x30);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      *(longlong **)(param_1 + 0x30) = plVar2;
      (**(code **)(*plVar2 + 8))(plVar2,param_2);
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1413d796c FUN_1413d796c body=461 status=ok
// SIG undefined FUN_1413d796c(void)

void FUN_1413d796c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_144a78877(*(undefined2 *)(lVar3 + lVar10),*(undefined2 *)(lVar3 + 2 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d7b3a FUN_1413d7b3a body=537 status=ok
// SIG undefined FUN_1413d7b3a(void)

void FUN_1413d7b3a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x68;
      *(undefined4 *)(lVar11 + 0x58 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x50 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_140105116(lVar11 + lVar10 + 0x10);
      uVar12 = uVar12 & ~(uint)uVar8;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_1413d7c86;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1413d7c86:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_14059f004(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d7d56 FUN_1413d7d56 body=52 status=ok
// SIG undefined FUN_1413d7d56(void)

void FUN_1413d7d56(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_1457225f4(param_1);
  *(undefined1 *)(param_1 + 0x189) = 1;
  return;
}



// FUNCTION 1413d7d8a FUN_1413d7d8a body=382 status=ok
// SIG undefined FUN_1413d7d8a(void)

void FUN_1413d7d8a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14b455320;
  if (param_1[0x57] != 0) {
    FUN_14480f766(&DAT_14cb0ca98);
  }
  lVar3 = param_1[0x47];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FUN_14480f766(&DAT_14cb90de0);
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    FUN_143e93adc(lVar3);
    FUN_1465688b8(lVar3);
    if (*(longlong **)(lVar3 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 8) + 8))();
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    FUN_1457225f4(lVar3);
    *(undefined1 *)(lVar3 + 0x189) = 1;
  }
  puVar4 = (undefined8 *)param_1[0x49];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x48];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar3 = param_1[0x47];
  if (lVar3 != 0) {
    FUN_145ed6ff0(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar5 = (longlong *)param_1[0x46];
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
  plVar5 = param_1 + 0x40;
  if (*(int *)(param_1 + 0x41) != 0) {
    puVar4 = (undefined8 *)*plVar5;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1413d7e72;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar5,0,0,0x10);
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
LAB_1413d7e72:
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1413d7f08 FUN_1413d7f08 body=266 status=ok
// SIG undefined FUN_1413d7f08(void)

undefined8 *
FUN_1413d7f08(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(byte *)(param_1 + 5) & 4) == 0) && (param_3 != 0)) && ((longlong)(int)param_1[1] != 0)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar1) == param_3) {
        lVar2 = *param_1 - lVar2;
        if (lVar2 != 0) {
          local_30 = (undefined8 *)0x0;
          local_28 = 0;
          FUN_14114e6dc(&local_30,param_4);
          FUN_140c6314c(lVar2 + 8,param_2,&local_30);
          if (local_28 != 0) {
            if (local_30 == (undefined8 *)0x0) goto LAB_1413d7ff1;
            (**(code **)*local_30)(local_30,0);
            FUN_1446efa72(&local_30,0,0,0x10);
            local_28 = 0;
          }
          if (local_30 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1413d7ff1;
        }
        break;
      }
      lVar2 = lVar2 + -0x90;
      lVar1 = lVar1 + 0x90;
    } while (-lVar2 != (longlong)(int)param_1[1] * 0x90);
  }
  *param_2 = 0;
LAB_1413d7ff1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413d8014 FUN_1413d8014 body=82 status=ok
// SIG undefined FUN_1413d8014(void)

void FUN_1413d8014(longlong param_1,char param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x164) = 0;
  if (*(int *)(param_1 + 0x148) == 7) {
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    if (param_2 == '\x05') {
      FUN_148a68598(param_1);
      return;
    }
    FUN_145abcba6(param_1 + 0xa0,param_3);
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
  }
  return;
}



// FUNCTION 1413d8066 FUN_1413d8066 body=148 status=ok
// SIG undefined FUN_1413d8066(void)

void FUN_1413d8066(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined1 **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bc96c(param_1 + 0x798);
  if (*(char *)(param_1 + 0x7e9) != '\0') {
    *(undefined1 *)(param_1 + 0x7e9) = 0;
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = &LAB_143cba7c4;
  local_20 = &local_30;
  local_28 = FUN_14061a336;
  local_48 = param_2;
  FUN_1448fef12(param_1,3);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d80fc FUN_1413d80fc body=1793 status=ok
// SIG undefined FUN_1413d80fc(void)

int * FUN_1413d80fc(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1413d87fe(param_1,iVar22);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar11 = iVar20 + 1;
    iVar15 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar15 = iVar20;
    }
    if (iVar15 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar6 = iVar20;
        }
        else {
          uVar19 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar19) {
              uVar14 = uVar19;
            }
          }
          else {
            uVar14 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar14 << 2,0);
          iVar6 = (int)(uVar9 >> 2);
          iVar11 = -0x20;
          if ((int)uVar19 <= iVar6) {
            iVar11 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar17,iVar6);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar6 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar6 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar17;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar7 = (longlong)iVar22;
    iVar20 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar20;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0xa0) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar20 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar20 = iVar22;
  }
  puVar12[iVar20 >> 5] = puVar12[iVar20 >> 5] | 1 << ((byte)iVar22 & 0x1f);
  lVar24 = *param_1;
  lVar7 = lVar7 * 0xa0;
  plVar17 = (longlong *)(lVar24 + lVar7);
  puVar3 = (undefined8 *)param_3[1];
  lVar8 = *(longlong *)*param_3;
  *(longlong *)(lVar24 + lVar7) = lVar8;
  *(undefined8 *)(lVar24 + 8 + lVar7) = *puVar3;
  *(undefined4 *)(lVar24 + 0x10 + lVar7) = *(undefined4 *)(puVar3 + 1);
  *(undefined8 *)(lVar24 + 0x40 + lVar7) = 0;
  *(undefined4 *)(lVar24 + 0x48 + lVar7) = 0;
  puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar24 + 0x4c + lVar7) = 0xffffffff00000080;
  *(undefined4 *)(lVar24 + 0x54 + lVar7) = 0;
  *(undefined8 *)(lVar24 + 0x60 + lVar7) = 0;
  *(undefined4 *)(lVar24 + 0x68 + lVar7) = 0;
  puVar2 = (undefined8 *)(lVar24 + 0x70 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined ***)(lVar24 + 0x18 + lVar7) = &PTR_FUN_14a46be50;
  *(undefined8 *)(lVar24 + 0x80 + lVar7) = 0;
  iVar20 = *(int *)(puVar3 + 0x10);
  pvVar4 = (void *)puVar3[0xf];
  *(int *)(lVar24 + 0x88 + lVar7) = iVar20;
  if ((longlong)iVar20 == 0) {
    *(undefined4 *)((longlong)plVar17 + 0x8c) = 0;
  }
  else {
    FUN_140a3dae8(lVar24 + lVar7 + 0x80,iVar20,0);
    memcpy((void *)plVar17[0x10],pvVar4,(longlong)iVar20 << 3);
    lVar8 = *plVar17;
  }
  *(undefined1 *)((longlong)plVar17 + 0x94) = *(undefined1 *)((longlong)puVar3 + 0x8c);
  *(undefined4 *)(plVar17 + 0x12) = *(undefined4 *)(puVar3 + 0x11);
  *(undefined4 *)(plVar17 + 0x13) = 0xffffffff;
  uVar19 = (uint)((ulonglong)lVar8 >> 0x10);
  uVar14 = (uint)lVar8 & 0xffff;
  uVar14 = ((uint)lVar8 << 0x10 | uVar14) + (int)((ulonglong)lVar8 >> 0x20) +
           (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar14 >> 4);
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar19 = 1;
  if (uVar23 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar13 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar13 = (longlong *)param_1[8];
      }
      iVar20 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
      if (iVar20 != -1) {
        do {
          pvVar4 = (void *)(*param_1 + (longlong)iVar20 * 0xa0);
          if (*(longlong *)(*param_1 + (longlong)iVar20 * 0xa0) == lVar8) {
            *(undefined ***)((longlong)pvVar4 + 0x18) = &PTR_FUN_14a46be50;
            if (*(longlong *)((longlong)pvVar4 + 0x80) != 0) {
              FUN_1400020a8();
            }
            *(undefined ***)((longlong)pvVar4 + 0x18) = &PTR_FUN_14a177080;
            FUN_144a78a1a((longlong)pvVar4 + 0x20);
            memmove(pvVar4,plVar17,0x98);
            FUN_1486084fc(param_1,iVar22);
            iVar22 = iVar20;
            goto LAB_1413d83b7;
          }
          iVar20 = *(int *)((longlong)pvVar4 + 0x98);
        } while (iVar20 != -1);
      }
    }
    if (3 < uVar23) {
      uVar9 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar19 = 1 << ((byte)lVar7 & 0x1f);
    }
  }
  if (((int)uVar23 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)plVar17 + 0x9c) = uVar14;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(plVar17 + 0x13) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar22;
    goto LAB_1413d83b7;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar17 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar17,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar13 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar17 != 0) {
      FUN_1446efa72(plVar17,0,0,4);
    }
LAB_1413d8408:
    uVar14 = 0;
    do {
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar13;
      }
      *(undefined4 *)((longlong)plVar17 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4) =
           0xffffffff;
      uVar14 = uVar14 + 1;
    } while (uVar19 != uVar14);
  }
  else {
    if (uVar19 == 0) goto LAB_1413d83b7;
    FUN_1446efa72(plVar17,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_1413d8408;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar9 = 0;
    uVar18 = 1;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar19 = *puVar12;
    if (uVar19 == 0) {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      uVar9 = 0;
      uVar18 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar18 = uVar9;
      }
      iVar11 = 0;
      do {
        if (uVar18 == uVar9) goto LAB_1413d83b7;
        iVar11 = iVar11 + 0x20;
        uVar19 = puVar12[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar9 = 0;
      iVar11 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar21 = uVar18 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar6) {
      iVar6 = iVar20;
    }
  }
  if (iVar6 < iVar20) {
    uVar19 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar24 = (longlong)iVar6 * 0xa0;
      uVar5 = *(undefined8 *)(lVar7 + lVar24);
      uVar14 = (uint)((ulonglong)uVar5 >> 0x10);
      uVar23 = (uint)uVar5 & 0xffff;
      uVar21 = (longlong)
               (int)(((uint)uVar5 << 0x10 | uVar23) + (int)((ulonglong)uVar5 >> 0x20) +
                     (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar23 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar7 + 0x9c + lVar24) = iVar20;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar13;
      }
      *(undefined4 *)(lVar7 + 0x98 + lVar24) =
           *(undefined4 *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar13;
      }
      *(int *)((longlong)plVar17 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      uVar19 = ~(uint)uVar18 & uVar19;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar6 = (int)uVar9;
      lVar7 = (longlong)iVar6;
      uVar14 = puVar12[lVar7] & uVar19;
      if (uVar14 == 0) {
        iVar15 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar15 = iVar20 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar6) {
          iVar16 = iVar6;
        }
        if (iVar15 <= iVar6) break;
        lVar24 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar14 = puVar12[lVar7 + lVar24 + 1];
          if (uVar14 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar16 - lVar7 == lVar24) goto LAB_1413d83b7;
        }
        uVar9 = (ulonglong)(iVar6 + (int)lVar24 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar14 & uVar14);
      uVar21 = uVar18 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar20);
  }
LAB_1413d83b7:
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 1413d87fe FUN_1413d87fe body=275 status=ok
// SIG undefined FUN_1413d87fe(void)

void FUN_1413d87fe(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1413d8912 FUN_1413d8912 body=556 status=ok
// SIG undefined FUN_1413d8912(void)

void FUN_1413d8912(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae2b6a0;
  FUN_14032bd8c();
  FUN_145c99964(param_1[0x390]);
  FUN_1458614ec(param_1[0x38f]);
  if (param_1[0x38d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38c) = 0;
  if (param_1[0x38b] != 0) {
    FUN_1400020a8();
  }
  FUN_14647c676(param_1 + 899);
  FUN_14584b538(param_1[0x382]);
  FUN_144959b6a(param_1[0x37e],*(undefined4 *)(param_1 + 0x37f));
  if (param_1[0x37e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x37d) = 0;
  if (param_1[0x37c] != 0) {
    FUN_1400020a8();
  }
  FUN_14647c6ac(param_1 + 0x374);
  FUN_14013f741(param_1[0x372],*(undefined4 *)(param_1 + 0x373));
  if (param_1[0x372] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x371) = 0;
  if (param_1[0x370] != 0) {
    FUN_1400020a8();
  }
  FUN_14647c6e2(param_1 + 0x368);
  FUN_14647bb90(param_1 + 0x82);
  FUN_144846cc9(param_1[0x80],*(undefined4 *)(param_1 + 0x81));
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_144846cc9(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 0x74;
  lVar1 = -0x230;
  do {
    *(undefined4 *)(plVar2 + 9) = 0;
    if (plVar2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_14032c296(plVar2);
    if (plVar2[4] != 0) {
      FUN_1400020a8();
    }
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    plVar2 = plVar2 + -10;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_14647c718(param_1 + 0x2e);
  lVar1 = 0x140;
  do {
    FUN_144760f98((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x30;
  } while (lVar1 != -0x10);
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1413d8b3e FUN_1413d8b3e body=11 status=ok
// SIG undefined FUN_1413d8b3e(void)

bool FUN_1413d8b3e(longlong param_1)

{
  return *(int *)(param_1 + 0x3f0) == 1;
}



// FUNCTION 1413d8b4a FUN_1413d8b4a body=154 status=ok
// SIG undefined FUN_1413d8b4a(void)

void FUN_1413d8b4a(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      FUN_14033a61a();
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_14124dd15(uVar4,uVar2);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_147f812d2(param_1 + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  FUN_145854bed(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_147f81302(param_1 + 0x50);
    return;
  }
  return;
}



// FUNCTION 1413d8be4 FUN_1413d8be4 body=162 status=ok
// SIG undefined FUN_1413d8be4(void)

void FUN_1413d8be4(longlong *param_1,undefined8 param_2)

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
        goto LAB_1413d8c71;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1413d8c71:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1413d8c86 FUN_1413d8c86 body=854 status=ok
// SIG undefined FUN_1413d8c86(void)

void FUN_1413d8c86(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined ***local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined8 local_80;
  undefined4 local_74;
  longlong local_70;
  int local_68;
  undefined4 local_5c;
  undefined **local_58;
  int local_50;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_14497e828();
  if (lVar2 == 0) goto LAB_1413d8e15;
  if (DAT_14cb5e538 == 0) {
    local_a0 = &local_58;
    local_58 = (undefined **)&LAB_1417c5d06;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_1417ad04a;
    local_a8 = &LAB_1486a7af7;
    local_b0 = &LAB_1464e1631;
    local_b8 = &DAT_149e063b2;
    local_c0 = 0;
    local_c8 = 0x1000000c;
    local_d0 = 8;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,0x420);
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
  }
  if ((((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) != DAT_14cb5e538 + 0x30)) ||
      (*(longlong *)(lVar2 + 0x1e0) == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68), lVar2 == 0)) goto LAB_1413d8e15;
  local_5c = 0xffff;
  FUN_1413d8fde(param_1,lVar2,&local_5c);
  if ((short)local_5c < 0) goto LAB_1413d8e15;
  lVar3 = FUN_140d71416(lVar2,&local_5c);
  if (lVar3 != param_1) {
    FUN_1413d95f0(lVar2,&local_58,&local_5c,param_1);
    local_5c = local_58._0_4_;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x3b8)] == '\x01') {
    if ((*(longlong **)(param_1 + 0x3a8) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x28))(), cVar1 != '\0')) {
LAB_1413d8d78:
      local_70 = 0;
      FUN_1413d9c32(lVar2,&local_58,&local_5c);
      cVar1 = FUN_140ba41f1(&local_58,param_1 + 0x3a0);
      local_58 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
      if (cVar1 == '\0') {
        local_d8 = (undefined8 *)CONCAT71(local_d8._1_7_,1);
        FUN_1414c1098(lVar2,&local_58,&local_5c,param_1 + 0x3a0);
        local_5c = local_58._0_4_;
        FUN_1413d927c(lVar2,&local_58,&local_5c);
        local_5c = local_58._0_4_;
      }
    }
  }
  else if ((*(uint *)(param_1 + 0x3a8) & 0xffffff) != 0) goto LAB_1413d8d78;
  FUN_1411d710c(lVar2,&local_58,&local_5c,0);
  if (local_50 < 2) {
    FUN_145943bf2(param_1,&local_70);
    if (local_68 - 2U < 0x7fffffff) {
      local_d8 = &local_80;
      local_80 = 0;
      FUN_141589eda(lVar2,&local_74,&local_5c,&local_70);
      local_5c = local_74;
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_1413d8e15:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d8fde FUN_1413d8fde body=669 status=ok
// SIG undefined FUN_1413d8fde(void)

void FUN_1413d8fde(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 *local_68;
  undefined4 local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x3b8)] == '\x01') {
    if ((*(longlong **)(param_1 + 0x3a8) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x28))(), cVar3 != '\0')) {
LAB_1413d9033:
      FUN_1413d931e(param_2,local_48,param_1 + 0x3a0,1);
      *(undefined4 *)param_3 = (undefined4)local_48[0];
    }
  }
  else if ((*(uint *)(param_1 + 0x3a8) & 0xffffff) != 0) goto LAB_1413d9033;
  if (*param_3 < 0) {
    FUN_1413d94b2(param_2,local_48,param_1);
    *(undefined4 *)param_3 = (undefined4)local_48[0];
    FUN_145943c4c(param_2);
  }
  else {
    FUN_1413d95f0(param_2,local_48,param_3,param_1);
    *(undefined4 *)param_3 = (undefined4)local_48[0];
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x3b8)] == '\x01') {
    if ((*(longlong **)(param_1 + 0x3a8) == (longlong *)0x0) ||
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x28))(), cVar3 == '\0'))
    goto LAB_1413d90b7;
  }
  else if ((*(uint *)(param_1 + 0x3a8) & 0xffffff) == 0) goto LAB_1413d90b7;
  FUN_1413d927c(param_2,local_48,param_3);
  *(undefined4 *)param_3 = (undefined4)local_48[0];
LAB_1413d90b7:
  if (*(longlong *)(param_1 + 0x490) == 0) {
    local_48[0] = *(longlong *)(param_1 + 0x18);
    FUN_1400021e4(local_48,&local_58);
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(local_48,&DAT_149e11938,puVar5);
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar1 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_14b3e9ca0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_68[2] = lVar4;
    *local_68 = &PTR_FUN_14b420430;
    local_68[3] = 0;
    FUN_14485c47a(local_68 + 3,param_1);
    puVar1[4] = FUN_1459698b6;
    local_78 = 1;
    local_80 = 0x1080020;
    local_88 = local_48;
    FUN_1413d987a(param_2,&local_38,param_3,&local_68);
    *(undefined8 *)(param_1 + 0x490) = local_38;
    FUN_1449db362(&local_68);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413d927c FUN_1413d927c body=161 status=ok
// SIG undefined FUN_1413d927c(void)

undefined2 * FUN_1413d927c(longlong param_1,undefined2 *param_2,ushort *param_3)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  
  uVar1 = *param_3;
  uVar3 = 0xffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar5 + 4)) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar5 + 2) * 8);
        } while (-1 < *(short *)(lVar5 + 4));
        if (lVar5 == 0) goto LAB_1413d930a;
      }
      if (*(short *)(lVar5 + 0xb0) < 0) {
        sVar2 = (short)*(undefined4 *)(param_1 + 0x98);
        *(short *)(param_1 + 0x98) = sVar2 + 1;
        *(short *)(lVar5 + 0xb0) = sVar2;
        FUN_141323fc0(param_1,lVar5,0x400);
      }
      uVar3 = *(undefined2 *)(lVar5 + 2);
      uVar4 = *(undefined2 *)(lVar5 + 8);
      goto LAB_1413d930c;
    }
  }
LAB_1413d930a:
  uVar4 = 0;
LAB_1413d930c:
  *param_2 = uVar3;
  param_2[1] = uVar4;
  return param_2;
}



// FUNCTION 1413d931e FUN_1413d931e body=402 status=ok
// SIG undefined FUN_1413d931e(void)

uint * FUN_1413d931e(longlong param_1,uint *param_2,undefined8 param_3,char param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong local_68;
  uint local_5c;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140b6e764(param_1,&local_5c);
  if ((short)(ushort)local_5c < 0) {
    FUN_145da5dd4(param_3,&local_58);
    lVar2 = FUN_143d9c092(param_1);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140b6e8c2(param_3,local_70);
    local_58 = local_70;
    local_50 = param_3;
    FUN_145c5332e(lVar2 + 0x60,local_44);
    if (param_4 != '\0') {
      FUN_140b6e8c2(param_3,&local_58);
      *(undefined1 **)(lVar2 + 0x58) = local_58;
    }
    FUN_1414f506e(param_1,lVar2);
    FUN_141323fc0(param_1,lVar2,0x10);
    uVar1 = *(undefined2 *)(lVar2 + 8);
    *(undefined2 *)param_2 = *(undefined2 *)(lVar2 + 2);
    *(undefined2 *)((longlong)param_2 + 2) = uVar1;
    goto LAB_1413d93e2;
  }
  if (param_4 != '\0') {
    if ((int)(short)(ushort)local_5c < *(int *)(param_1 + 0x10)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(ushort)local_5c * 8);
      if ((lVar2 == 0) || (*(uint *)(lVar2 + 8) != local_5c >> 0x10)) goto LAB_1413d9398;
      for (; -1 < *(short *)(lVar2 + 4);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar2 + 2) * 8)) {
      }
    }
    else {
LAB_1413d9398:
      lVar2 = 0;
    }
    FUN_140b6e8c2(param_3,&local_68);
    if (*(longlong *)(lVar2 + 0x58) != local_68) {
      FUN_140b6e8c2(param_3,&local_58);
      *(undefined1 **)(lVar2 + 0x58) = local_58;
      FUN_141323fc0(param_1,lVar2,0x10);
    }
  }
  *param_2 = local_5c;
LAB_1413d93e2:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d94b2 FUN_1413d94b2 body=316 status=ok
// SIG undefined FUN_1413d94b2(void)

undefined4 * FUN_1413d94b2(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    *param_2 = 0xffff;
  }
  else {
    FUN_14042af24(param_1,&local_3c);
    if ((short)local_3c < 0) {
      lVar4 = FUN_143d9c092(param_1);
      uVar2 = *(uint *)(param_3 + 0xc);
      *(uint *)(lVar4 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar3 = iVar5;
        }
      }
      *(int *)(lVar4 + 0x1c) = iVar3;
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 0x394);
      FUN_1414f506e(param_1,lVar4);
      FUN_141323fc0(param_1,lVar4,2);
      uVar1 = *(undefined2 *)(lVar4 + 8);
      *(undefined2 *)param_2 = *(undefined2 *)(lVar4 + 2);
      *(undefined2 *)((longlong)param_2 + 2) = uVar1;
    }
    else {
      *param_2 = local_3c;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413d95f0 FUN_1413d95f0 body=649 status=ok
// SIG undefined FUN_1413d95f0(void)

undefined2 * FUN_1413d95f0(longlong param_1,undefined2 *param_2,ushort *param_3,longlong param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined2 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [36];
  ushort local_44;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_3;
  uVar3 = 0xffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar6 != 0) && (*(uint *)(lVar6 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar6 + 4)) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar6 + 2) * 8);
        } while (-1 < *(short *)(lVar6 + 4));
        if (lVar6 == 0) goto LAB_1413d9721;
      }
      if (*(int *)(lVar6 + 0x1c) == 0) {
LAB_1413d9826:
        lVar11 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0x18);
        lVar11 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar8 == (longlong *)0x0) ||
             (((int)plVar8[2] != *(int *)(lVar6 + 0x1c) ||
              ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1413d9826;
          lVar11 = *plVar8;
        }
      }
      if (param_4 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        if (lVar11 == 0) {
LAB_1413d9812:
          *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
        }
        else {
          *(undefined8 *)(lVar6 + 0x18) = 0;
LAB_1413d97ba:
          uVar5 = 0xffffffff;
LAB_1413d97bf:
          *(undefined4 *)(lVar6 + 0x20) = uVar5;
          FUN_1414f506e(param_1,lVar6);
          FUN_141323fc0(param_1,lVar6,2);
        }
      }
      else {
        FUN_14042af24(param_1,&local_44,param_4);
        if (((short)local_44 < 0) || (*(int *)(param_1 + 0x10) <= (int)(short)local_44)) {
LAB_1413d9753:
          if (lVar11 != param_4) {
LAB_1413d975c:
            uVar2 = *(uint *)(param_4 + 0xc);
            *(uint *)(lVar6 + 0x18) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar4 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar12 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar12) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar4 = *(int *)(lVar11 + 0x10);
              bVar12 = iVar4 == 0;
              if (bVar12) {
                *(int *)(lVar11 + 0x10) = iVar9;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar12) {
                iVar4 = iVar9;
              }
            }
            *(int *)(lVar6 + 0x1c) = iVar4;
            if (param_4 == 0) goto LAB_1413d97ba;
            uVar5 = *(undefined4 *)(param_4 + 0x394);
            goto LAB_1413d97bf;
          }
        }
        else {
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)local_44 * 8);
          if ((lVar10 == 0) || (*(uint *)(lVar10 + 8) != (uint)local_42)) goto LAB_1413d9753;
          for (; -1 < *(short *)(lVar10 + 4);
              lVar10 = *(longlong *)
                        (*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar10 + 2) * 8)) {
          }
          if ((lVar10 != 0) && (lVar10 != lVar6)) {
            lVar6 = FUN_143d9c13a(param_1,lVar6);
          }
          if (lVar11 != param_4) goto LAB_1413d975c;
          if (param_4 == 0) goto LAB_1413d9812;
        }
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(param_4 + 0x394);
      }
      uVar3 = *(undefined2 *)(lVar6 + 2);
      uVar7 = *(undefined2 *)(lVar6 + 8);
      goto LAB_1413d9723;
    }
  }
LAB_1413d9721:
  uVar7 = 0;
LAB_1413d9723:
  *param_2 = uVar3;
  param_2[1] = uVar7;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413d987a FUN_1413d987a body=645 status=ok
// SIG undefined FUN_1413d987a(void)

longlong *
FUN_1413d987a(longlong param_1,longlong *param_2,ushort *param_3,longlong *param_4,
             undefined8 *param_5,uint param_6,char param_7)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_3;
  if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x10))) {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
    if ((lVar11 != 0) && (*(uint *)(lVar11 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar11 + 4)) {
        do {
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar11 + 2) * 8);
        } while (-1 < *(short *)(lVar11 + 4));
        if (lVar11 == 0) goto LAB_1413d9af0;
      }
      if (((int)param_4[1] == 0) || (plVar7 = (longlong *)*param_4, plVar7 == (longlong *)0x0)) {
        *param_2 = 0;
        lVar9 = 0;
      }
      else {
        (**(code **)(*plVar7 + 0x38))(plVar7,param_2);
        lVar9 = *param_2;
      }
      plVar7 = (longlong *)(param_1 + 0x38);
      iVar12 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x38);
        lVar10 = 0;
        do {
          if (*(int *)(lVar11 + 0x50) == (int)*(short *)(lVar3 + 0x18 + lVar10)) {
            local_60 = plVar7;
            local_58 = lVar9;
            if (*(int *)(lVar3 + 0x10 + lVar10) == 0) {
              lVar6 = 0;
            }
            else {
              plVar7 = *(longlong **)(lVar3 + 8 + lVar10);
              lVar6 = 0;
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x38))(plVar7,&local_50);
                lVar6 = local_50;
              }
            }
            plVar7 = local_60;
            lVar9 = local_58;
            if (lVar6 == local_58) {
              uVar4 = (int)(lVar10 >> 3) * -0x49249249;
              iVar12 = *(int *)(param_1 + 0x40);
              if (((int)uVar4 < 0) || (iVar12 <= (int)uVar4)) goto LAB_1413d99c2;
              lVar9 = (ulonglong)(uVar4 & 0x7fffffff) * 0x38 + *local_60;
              goto LAB_1413d9a65;
            }
          }
          lVar10 = lVar10 + 0x38;
        } while ((longlong)iVar12 * 0x38 - lVar10 != 0);
        iVar12 = *(int *)(param_1 + 0x40);
      }
LAB_1413d99c2:
      *(uint *)(param_1 + 0x40) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar12 + 1U) {
        FUN_145943cc0(plVar7,iVar12);
      }
      lVar3 = *plVar7;
      lVar10 = (longlong)iVar12 * 0x38;
      lVar9 = lVar3 + lVar10;
      piVar1 = (int *)(lVar3 + lVar10);
      piVar8 = piVar1 + 2;
      iVar12 = DAT_14c763988 + 1;
      *piVar1 = DAT_14c763988;
      DAT_14c763988 = iVar12;
      piVar8[0] = 0;
      piVar8[1] = 0;
      piVar1[4] = 0;
      *(undefined2 *)(piVar1 + 6) = 0xffff;
      piVar1[7] = 0;
      *(undefined1 *)(piVar1 + 8) = 0;
      puVar5 = (undefined8 *)(lVar3 + lVar10 + 0x28);
      *puVar5 = 0;
      *(undefined8 *)(lVar3 + lVar10 + 0x30) = 0;
      if (puVar5 != param_5) {
        *(undefined8 *)(lVar9 + 0x28) = *param_5;
        *param_5 = 0;
        *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(param_5 + 1);
        *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)((longlong)param_5 + 0xc);
        param_5[1] = 0;
      }
      *(undefined2 *)(lVar9 + 0x18) = *(undefined2 *)(lVar11 + 2);
      FUN_1413d9b00(piVar8,param_4);
LAB_1413d9a65:
      uVar4 = 0;
      if (param_7 == '\0') {
        uVar4 = *(uint *)(lVar9 + 0x1c);
      }
      *(uint *)(lVar9 + 0x1c) = uVar4 | param_6;
      goto LAB_1413d9a80;
    }
  }
LAB_1413d9af0:
  *param_2 = 0;
LAB_1413d9a80:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413d9b00 FUN_1413d9b00 body=305 status=ok
// SIG undefined FUN_1413d9b00(void)

void FUN_1413d9b00(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1413d9b9a;
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
LAB_1413d9b73:
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
      goto LAB_1413d9b73;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1413d9b9a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1413d9b9a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413d9c32 FUN_1413d9c32 body=1084 status=ok
// SIG undefined FUN_1413d9c32(void)

undefined8 * FUN_1413d9c32(longlong param_1,undefined8 *param_2,short *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar10 = (uint)*param_3;
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0x10))) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + ((ulonglong)uVar10 & 0xffff) * 8);
    if ((lVar14 != 0) && (*(uint *)(lVar14 + 8) == (uint)(ushort)param_3[1])) {
      if (-1 < *(short *)(lVar14 + 4)) {
        do {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar14 + 2) * 8);
        } while (-1 < *(short *)(lVar14 + 4));
        if (lVar14 == 0) goto LAB_1413d9ec3;
      }
      lVar8 = *param_4;
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(lVar14 + 0x58);
        plVar1 = (longlong *)(lVar14 + 0x60);
        if (lVar8 != 0) {
          if (*(int *)(lVar14 + 0x68) != *(int *)(lVar14 + 0x94)) {
            uVar10 = (uint)((ulonglong)lVar8 >> 0x10);
            uVar11 = (uint)lVar8 & 0xffff;
            lVar9 = lVar14 + 0x98;
            if (*(longlong *)(lVar14 + 0xa0) != 0) {
              lVar9 = *(longlong *)(lVar14 + 0xa0);
            }
            iVar12 = *(int *)(lVar9 + (ulonglong)
                                      (*(int *)(lVar14 + 0xa8) - 1U &
                                      (int)((ulonglong)lVar8 >> 0x20) +
                                      ((uint)lVar8 << 0x10 | uVar11) +
                                      (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar11 >> 4)) * 4);
            if (iVar12 != -1) {
              do {
                lVar14 = *plVar1 + (longlong)iVar12 * 0x30;
                if (*(longlong *)(*plVar1 + (longlong)iVar12 * 0x30) == lVar8) {
                  if ((lVar14 != 0) && (lVar14 != -8)) {
                    *param_2 = &PTR_FUN_14a184370;
                    bVar4 = *(byte *)(lVar14 + 0x20);
                    *(byte *)(param_2 + 3) = bVar4;
                    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar4])
                              (param_2 + 1,lVar14 + 0x10);
                    goto LAB_1413d9e75;
                  }
                  break;
                }
                iVar12 = *(int *)(lVar14 + 0x28);
              } while (iVar12 != -1);
            }
          }
          goto LAB_1413d9ec3;
        }
        ppuVar2 = (undefined **)(lVar14 + 0x70);
        local_70 = 0x100000000;
        local_60 = (longlong *)&DAT_ffffffff;
        uStack_58 = 0;
        uStack_68 = ppuVar2;
        if (*(int *)(lVar14 + 0x88) == 0) {
          iVar12 = 0;
        }
        else {
          FUN_1449c0562(&local_70);
          iVar12 = *(int *)(lVar14 + 0x88);
        }
        uStack_78 = CONCAT44(uStack_54,uStack_58);
        local_80 = local_60;
        plVar5 = local_80;
        local_90 = (undefined4)local_70;
        uStack_8c = local_70._4_4_;
        uStack_88 = (undefined4)uStack_68;
        uStack_84 = uStack_68._4_4_;
        local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
        local_98 = plVar1;
        if ((local_80._4_4_ != iVar12) || (uStack_68 != ppuVar2)) {
          iVar7 = local_80._4_4_;
          local_80 = plVar5;
          do {
            puVar3 = (undefined8 *)(*local_98 + (longlong)iVar7 * 0x30);
            local_70 = *puVar3;
            uStack_68 = &PTR_FUN_14a184370;
            local_50 = *(byte *)(puVar3 + 4);
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_50])(&local_60);
            uVar13 = (ulonglong)local_50;
            if ((&DAT_149fc1b6e)[uVar13] == '\x01') {
              if (local_60 != (longlong *)0x0) {
                cVar6 = (**(code **)(*local_60 + 0x28))();
                uVar13 = (ulonglong)local_50;
                if (cVar6 != '\0') goto LAB_1413da03d;
              }
            }
            else if (((ulonglong)local_60 & 0xffffff) != 0) {
LAB_1413da03d:
              *param_2 = &PTR_FUN_14a184370;
              *(byte *)(param_2 + 3) = local_50;
              (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[uVar13])(param_2 + 1,&local_60);
              uStack_68 = &PTR_FUN_14a184370;
              (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
              goto LAB_1413d9d74;
            }
            uStack_68 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar13])(&local_60);
            local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
            FUN_1449c0562(&local_90);
            iVar7 = local_80._4_4_;
            plVar5 = local_80;
          } while (local_98 != plVar1 ||
                   ((undefined **)CONCAT44(uStack_84,uStack_88) != ppuVar2 ||
                   local_80._4_4_ != iVar12));
        }
        local_80 = plVar5;
        lVar8 = *param_4;
      }
      if (*(int *)(lVar14 + 0x68) != *(int *)(lVar14 + 0x94)) {
        uVar10 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar11 = (uint)lVar8 & 0xffff;
        lVar9 = lVar14 + 0x98;
        if (*(longlong *)(lVar14 + 0xa0) != 0) {
          lVar9 = *(longlong *)(lVar14 + 0xa0);
        }
        iVar12 = *(int *)(lVar9 + (ulonglong)
                                  (*(int *)(lVar14 + 0xa8) - 1U &
                                  (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar11) +
                                  (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar12 != -1) {
          do {
            lVar9 = *(longlong *)(lVar14 + 0x60) + (longlong)iVar12 * 0x30;
            if (*(longlong *)(*(longlong *)(lVar14 + 0x60) + (longlong)iVar12 * 0x30) == lVar8) {
              if ((lVar9 != 0) && (lVar9 != -8)) {
                *param_2 = &PTR_FUN_14a184370;
                bVar4 = *(byte *)(lVar9 + 0x20);
                *(byte *)(param_2 + 3) = bVar4;
                (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar4])
                          (param_2 + 1,lVar9 + 0x10);
                goto LAB_1413d9d74;
              }
              break;
            }
            iVar12 = *(int *)(lVar9 + 0x28);
          } while (iVar12 != -1);
        }
      }
      param_2[3] = 0;
      *param_2 = &PTR_FUN_14a184370;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined1 *)(param_2 + 3) = 0;
LAB_1413d9d74:
      if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
LAB_1413d9ec3:
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14a184370;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
LAB_1413d9e75:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1413da074 FUN_1413da074 body=245 status=ok
// SIG undefined FUN_1413da074(void)

longlong * FUN_1413da074(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_14001cc68(0x50,0x10);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *(undefined1 *)(plVar2 + 6) = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  *(undefined1 *)(plVar2 + 9) = 0;
  if (*(int *)(param_1 + 8) < 2) {
    DAT_14cb974b8 = DAT_14cb974b8 + 1;
    FUN_140002266(&local_28,L"TaskQueue%d");
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    *plVar2 = local_28;
    *(undefined4 *)(plVar2 + 1) = local_20;
    *(undefined4 *)((longlong)plVar2 + 0xc) = local_1c;
  }
  else {
    FUN_144a787a6(plVar2,param_1);
  }
  iVar1 = DAT_14cb974c8;
  lVar3 = (longlong)(int)DAT_14cb974c8;
  DAT_14cb974c8 = DAT_14cb974c8 + 1;
  if (DAT_14cb974cc < DAT_14cb974c8) {
    FUN_14583b742(&DAT_14cb974c0,iVar1);
  }
  *(longlong **)(DAT_14cb974c0 + lVar3 * 8) = plVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413da16a FUN_1413da16a body=2777 status=ok
// SIG undefined FUN_1413da16a(void)

void FUN_1413da16a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined7 *puVar7;
  undefined7 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined4 *local_320;
  undefined *local_318;
  code *local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  undefined1 local_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined4 local_178;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_318 = (undefined *)FUN_1446ddbd2();
      local_310 = FUN_1468d96f0;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2b0 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2b0);
    }
  }
  local_2b8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_318 = (undefined *)FUN_1446ddbd2();
      local_310 = FUN_1468d96f0;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2b8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2b8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2b8 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2b8);
    }
  }
  local_280 = 0;
  local_278 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_274 = 0xffffffff00000080;
  local_26c = 0;
  local_260 = 0;
  local_258 = 0;
  local_230 = 0;
  local_228 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_224 = 0xffffffff00000080;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0xffffffff00000000;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c4 = 0xffffffff00000080;
  local_1bc = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0x200000000;
  local_138 = 0;
  local_130 = 0;
  uStack_12c = 0x20;
  uStack_128 = 0xffffffff;
  uStack_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x20;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0x200000000;
  local_68 = 0;
  local_60 = 0;
  uStack_5c = 0x20;
  uStack_58 = 0xffffffff;
  uStack_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a8);
LAB_1413da4d3:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2a8);
      goto LAB_1413da4d3;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2a8);
      goto LAB_1413da4d3;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_2a8);
      goto LAB_1413da4d3;
    }
    local_2a8 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    puVar6 = (undefined8 *)0x0;
  }
  puVar9 = &local_2a8;
  if (puVar6 != (undefined8 *)0x0) {
    puVar9 = puVar6;
  }
  uStack_2c8 = 0;
  uStack_2c1 = 0;
  uStack_2c0 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_2c8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_2c8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_2c8);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        uStack_2c8 = (undefined7)uVar2;
        uStack_2c1 = (undefined1)((ulonglong)uVar2 >> 0x38);
        puVar7 = (undefined7 *)0x0;
        goto LAB_1413da570;
      }
      (*pcVar3)(uVar2,param_2,&uStack_2c8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  puVar7 = *(undefined7 **)(param_2 + 0x38);
LAB_1413da570:
  puVar8 = &uStack_2c8;
  if (puVar7 != (undefined7 *)0x0) {
    puVar8 = puVar7;
  }
  local_2c9 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c9);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c9);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c9);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_2c9 = (undefined1)uVar2;
      uStack_2c8 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c9);
    }
  }
  puVar10 = &local_2c9;
  if ((undefined1 *)*plVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)*plVar1;
  }
  uStack_2e8 = 0xffffffff;
  uStack_2e4 = 0xffffffff;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_318 = (undefined *)FUN_1446ddbd2();
      local_310 = FUN_1403a682c;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_2e8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_2e8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_2e8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_2e8 = (undefined4)uVar2;
      uStack_2e4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_2e8);
    }
  }
  local_2ec = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_310 = FUN_1405ebbb2;
      local_318 = &DAT_14c9520b8;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2ec);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2ec);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2ec);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_2ec = (undefined4)uVar2;
      uStack_2e8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2ec);
    }
  }
  uVar4 = local_2ec;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_308 = uStack_2e8;
  uStack_304 = uStack_2e4;
  uStack_300 = (undefined4)uStack_2e0;
  uStack_2fc = uStack_2e0._4_4_;
  local_2f8 = lStack_2d8;
  if ((lStack_2d8 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_318 = (undefined *)CONCAT44(local_318._4_4_,uVar4);
  local_320 = &local_308;
  local_328 = puVar10;
  FUN_1413dac44(local_2b0,local_2b8,puVar9,puVar8);
  if (CONCAT17(uStack_2c1,uStack_2c8) != 0) {
    FUN_1400020a8();
  }
  local_2a8 = 0;
  FUN_14076ba36();
  if ((local_28 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dac44 FUN_1413dac44 body=249 status=ok
// SIG undefined FUN_1413dac44(void)

void FUN_1413dac44(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
    FUN_1447a8aa0(param_4,0);
  }
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      lVar1 = lVar1 + 0x460;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
    }
    uVar2 = FUN_14001cc68(0x48,0x10);
    FUN_1413dad3e(uVar2,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_140b1330e(lVar1,*(undefined8 *)(param_6 + 0x10),*(undefined4 *)(param_6 + 4),uVar2);
    return;
  }
  return;
}



// FUNCTION 1413dad3e FUN_1413dad3e body=678 status=ok
// SIG undefined FUN_1413dad3e(void)

undefined8 *
FUN_1413dad3e(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14ac8c790;
  *(undefined4 *)(param_1 + 1) = *param_6;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  if (*(longlong *)(param_6 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_6 + 4) + 0xc);
    *(uint *)((longlong)param_1 + 0x14) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 3) = iVar6;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_4;
  *(undefined4 *)(param_1 + 7) = param_7;
  param_1[8] = param_5;
  if ((param_2 != 0) && (cVar5 = FUN_140dbf4b8(param_3), cVar5 != '\0')) {
    uVar7 = FUN_1447210f0(param_2);
    FUN_1409e0c66(&local_58,uVar7);
    if (local_50 != (longlong *)0x0) {
      iVar6 = (int)local_50[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)local_50[1];
        bVar11 = iVar6 == iVar8;
        if (bVar11) {
          *(int *)(local_50 + 1) = iVar6 + 1;
          iVar8 = iVar6;
        }
        iVar6 = iVar8;
        UNLOCK();
        plVar10 = local_50;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_58 != 0) {
          local_68 = 0;
          FUN_140a41f04(local_58,&local_58,param_2,param_3);
          plVar2 = local_50;
          if (param_1 + 4 != &local_58) {
            param_1[4] = local_58;
            local_58 = 0;
            plVar4 = (longlong *)param_1[5];
            if (local_50 != plVar4) {
              local_50 = (longlong *)0x0;
              param_1[5] = plVar2;
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
          }
          plVar2 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_50 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1413dafe6 FUN_1413dafe6 body=186 status=ok
// SIG undefined FUN_1413dafe6(void)

int FUN_1413dafe6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1413db029:
      lVar11 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar11 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar11 * 0x28) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar10);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_1413db07b;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_1413db07b;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1413db081;
    }
  }
  return -1;
LAB_1413db07b:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_1413db081:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar11 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1413db029;
}



// FUNCTION 1413db0a0 FUN_1413db0a0 body=485 status=ok
// SIG undefined FUN_1413db0a0(void)

void FUN_1413db0a0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413db286 FUN_1413db286 body=43 status=ok
// SIG undefined FUN_1413db286(void)

void FUN_1413db286(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459454d2(param_1);
    param_1 = param_1 + 0x188;
  }
  return;
}



// FUNCTION 1413db2b2 FUN_1413db2b2 body=118 status=ok
// SIG undefined FUN_1413db2b2(void)

ulonglong FUN_1413db2b2(longlong param_1)

{
  ulonglong unaff_RDI;
  float fVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(char *)(param_1 + 0x1d9) == '\0') {
      unaff_RDI = 0;
      fVar1 = (float)FUN_140d033b6(param_1,0);
      if (1.0 < fVar1) goto LAB_1413db2cd;
      if ((ABS(fVar1 + -1.0) <= 1e-08) || (1.0 - fVar1 < *(float *)(param_1 + 0x1e0)))
      goto LAB_1413db324;
    }
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
  }
  else {
LAB_1413db324:
    unaff_RDI = 0;
  }
LAB_1413db2cd:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1413db328 FUN_1413db328 body=506 status=ok
// SIG undefined FUN_1413db328(void)

void FUN_1413db328(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  return;
}



// FUNCTION 1413db522 FUN_1413db522 body=271 status=ok
// SIG undefined FUN_1413db522(void)

void FUN_1413db522(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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



// FUNCTION 1413db632 FUN_1413db632 body=307 status=ok
// SIG undefined FUN_1413db632(void)

undefined4 FUN_1413db632(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x5130);
  lVar2 = param_1 + 0x5140;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x5158) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x5158);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (uVar5 = 0, local_50 != lVar2)) {
    do {
      puVar3 = *(undefined4 **)(*local_80 + (longlong)iStack_64 * 8);
      if (puVar3[1] == param_2) {
        uVar5 = *puVar3;
        break;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
      uVar5 = 0;
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1413db766 FUN_1413db766 body=50 status=ok
// SIG undefined FUN_1413db766(void)

void FUN_1413db766(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  FUN_1459456fe(uVar2,param_1);
  return;
}



// FUNCTION 1413db798 FUN_1413db798 body=1274 status=ok
// SIG undefined FUN_1413db798(void)

ulonglong FUN_1413db798(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  char *local_c8;
  longlong local_c0;
  longlong *local_b8;
  char local_a9;
  longlong local_a8;
  longlong *local_a0;
  void *local_98;
  int local_90;
  int local_8c;
  longlong local_88 [3];
  byte local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_2 != 0) {
    if (*(byte *)(param_1 + 0x1c) < 3) {
      lVar11 = FUN_1487f1638(param_1,param_4);
      if (lVar11 != 0) {
        FUN_1459b2546(lVar11,param_2,param_3,param_4);
      }
    }
    else if (4 < *(byte *)(param_1 + 0x1c)) {
      lVar11 = *(longlong *)(param_1 + 0x1c0);
      if (lVar11 != 0) {
        lVar6 = (longlong)*(int *)(lVar11 + 0x28);
        if (0 < lVar6) {
          plVar7 = *(longlong **)(lVar11 + 0x20);
          do {
            if (*plVar7 == *param_2) {
              if (plVar7 != (longlong *)0x0) goto LAB_1413db849;
              break;
            }
            plVar7 = plVar7 + 0xb;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (*(char *)(lVar11 + 0x30) != '\x01') goto LAB_1413db817;
      }
LAB_1413db849:
      puVar5 = (undefined8 *)FUN_1487f158a(param_1);
      local_68 = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        lVar6 = 0;
LAB_1413db94c:
        local_88[1] = 0;
        local_70 = 0;
        local_88[0] = lVar11;
        local_88[2] = param_1;
        if ((((*(longlong **)(param_1 + 0x140) != (longlong *)0x0) &&
             (*(int *)(param_1 + 0x13c) != 0)) &&
            ((uVar4 = *(uint *)(param_1 + 0x138), -1 < (int)uVar4 &&
             ((((int)uVar4 < DAT_14c9647dc &&
               (lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar11 != 0)
               ) && (*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x13c))))))) &&
           ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) {
          local_70 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x30))();
          local_70 = local_70 ^ 1;
        }
        local_98 = (void *)0x0;
        local_90 = (int)param_3[1];
        lVar11 = (longlong)local_90;
        _Src = (void *)*param_3;
        if (lVar11 == 0) {
          local_8c = 0;
        }
        else {
          FUN_1446dd670(&local_98,local_90,0);
          memcpy(local_98,_Src,lVar11 * 2);
        }
        FUN_143ccb140(&local_a8,&local_98,param_2,local_88);
        local_c8 = &local_a9;
        local_a9 = '\0';
        FUN_1487fc03e(param_1 + 0x120,param_1,*param_2,&local_a8);
        if (local_a9 == '\x01') {
          if (local_a8 == 0) {
            local_90 = 0;
            if (local_8c != 0) {
              FUN_1446f8c06(&local_98,0);
            }
          }
          else {
            FUN_1409e3c80(local_a8,&local_98,0);
            puVar5 = local_68;
          }
        }
        if (puVar5 == (undefined8 *)0x0) {
          if (local_a8 != 0) {
            local_68 = (undefined8 *)FUN_14001cc68(0x78,0x10);
            *local_68 = 0;
            local_68[1] = 0;
            local_68[2] = 0;
            local_68[3] = 0;
            local_68[4] = 0;
            local_68[5] = 0;
            local_68[6] = 0;
            local_68[7] = 0;
            local_68[8] = 0;
            local_68[9] = 0;
            local_68[10] = 0;
            local_68[0xb] = 0;
            local_68[0xc] = 0;
            local_68[0xd] = 0;
            local_68[0xe] = 0;
            *(undefined4 *)(local_68 + 0xe) = 0xffffffff;
            local_58 = &local_68;
            local_68[1] = *param_2;
            local_68[0xd] = param_1;
            *(undefined4 *)(local_68 + 0xe) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x118);
            local_60 = param_2;
            FUN_1487fc5b8(param_1 + 0x168,local_4c);
            lVar11 = FUN_145ab920e(*(longlong *)(param_1 + 0x148) + 0x110);
            *(longlong *)(lVar11 + 0xc) = *param_2;
            *(int *)(lVar11 + 0x48) = *(int *)(*(longlong *)(param_1 + 0x148) + 0x118) + -1;
            *(int *)(lVar11 + 0x14) = param_4;
            FUN_140705884(*(undefined8 *)(param_1 + 0x148),lVar11);
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x110) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x118) * 0x58 + -0x58;
            goto LAB_1413dbaa3;
          }
          uVar9 = 0;
        }
        else {
LAB_1413dbaa3:
          *(int *)(lVar6 + 0x14) = param_4;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (local_a8 == 0) {
            FUN_14020fad6(lVar6 + 0x20,&DAT_149dfb77a);
          }
          else {
            local_60 = (longlong *)CONCAT71(local_60._1_7_,3);
            FUN_1487e6d6c();
            *(undefined8 *)(local_a8 + 0xb0) = 0;
            iVar3 = local_90 + -1;
            if (local_90 == 0) {
              iVar3 = 0;
            }
            FUN_1402980a2(lVar6 + 0x20,local_98,iVar3);
          }
          bVar2 = *(byte *)(param_1 + 0x1c);
          local_c0 = local_a8;
          local_b8 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
            UNLOCK();
          }
          FUN_143ccaafe(local_68,&local_c0,0,3 < bVar2);
          uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_a0 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
            }
          }
        }
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1413db819;
      }
      lVar6 = *(longlong *)(param_1 + 0x148);
      if (lVar6 != 0) {
        iVar3 = *(int *)(puVar5 + 0xe);
        if ((((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar6 + 0x118))) &&
            (lVar6 = (longlong)iVar3 * 0x58 + *(longlong *)(lVar6 + 0x110), lVar6 != 0)) &&
           ((*(longlong *)(lVar6 + 0xc) == puVar5[1] && (*(int *)(lVar6 + 0x14) <= param_4)))) {
          iVar3 = (int)param_3[1];
          if (iVar3 == *(int *)(lVar6 + 0x28)) {
            if (1 < iVar3) {
              lVar8 = 0;
              while( true ) {
                uVar10 = *(ushort *)(*param_3 + lVar8);
                uVar9 = (ulonglong)uVar10;
                uVar12 = *(ushort *)(*(longlong *)(lVar6 + 0x20) + lVar8);
                if (uVar10 != uVar12) break;
                if (uVar10 == 0) goto LAB_1413db817;
LAB_1413db8ee:
                lVar8 = lVar8 + 2;
              }
              if ((uVar12 | uVar10) < 0x80) {
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                uVar13 = (ulonglong)uVar12;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar13]) goto LAB_1413db8ee;
              }
              if (uVar10 != uVar12) goto LAB_1413db94c;
            }
          }
          else if (*(int *)(lVar6 + 0x28) + iVar3 != 1) goto LAB_1413db94c;
        }
      }
    }
  }
LAB_1413db817:
  uVar9 = 0;
LAB_1413db819:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1413dbc94 thunk_FUN_14047a987 body=5 status=ok
// SIG undefined thunk_FUN_14047a987(void)

void thunk_FUN_14047a987(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  uVar4 = param_3 + (iVar2 == 0);
  *(uint *)(param_1 + 1) = uVar4 + iVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar4) {
    FUN_144a2dbb8(param_1,iVar2);
  }
  lVar8 = *param_1;
  lVar3 = (longlong)(int)(iVar2 + -1 + (uint)(iVar2 == 0));
  lVar1 = lVar8 + lVar3 * 2;
  if ((int)param_3 < 1) {
    uVar5 = (ulonglong)(int)param_3;
    puVar6 = (undefined2 *)(lVar1 + uVar5 * 2);
    if (puVar6 != (undefined2 *)0x0) goto LAB_14047aa34;
  }
  else {
    uVar5 = (ulonglong)param_3;
    uVar7 = 0;
    do {
      *(short *)(lVar1 + uVar7 * 2) = (short)*(char *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    puVar6 = (undefined2 *)(lVar1 + uVar5 * 2);
    if (puVar6 != (undefined2 *)0x0) goto LAB_14047aa34;
    lVar8 = *param_1;
    uVar7 = 0;
    do {
      *(short *)(lVar8 + lVar3 * 2 + uVar7 * 2) = (short)*(char *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  puVar6 = (undefined2 *)(lVar8 + lVar3 * 2 + uVar5 * 2);
LAB_14047aa34:
  *puVar6 = 0;
  return;
}



// FUNCTION 1413dbc9a FUN_1413dbc9a body=96 status=ok
// SIG undefined FUN_1413dbc9a(void)

undefined8 * FUN_1413dbc9a(undefined8 *param_1)

{
  FUN_1447400e4(param_1,0,1);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_14a8a3730;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x400000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 1413dbcfa FUN_1413dbcfa body=228 status=ok
// SIG undefined FUN_1413dbcfa(void)

longlong FUN_1413dbcfa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf2b08 == 0) {
    local_30 = &local_10;
    local_10 = &DAT_1435ab5ea;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985984;
    local_38 = &LAB_147be717d;
    local_40 = &LAB_145a3d181;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x4b8;
    FUN_14081cfa3(L"/Script/Engine",L"PackageMapClient",&DAT_14caf2b08,&DAT_147be717c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2b08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dbde0 FUN_1413dbde0 body=78 status=ok
// SIG undefined FUN_1413dbde0(void)

undefined8 FUN_1413dbde0(undefined8 *param_1)

{
  uint uVar1;
  AKRESULT AVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  wchar_t *pwVar4;
  
  if (DAT_14cb25ab0 == '\x01') {
    if (*(int *)(param_1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*param_1;
    }
    if (pwVar4 == (wchar_t *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = AK::SoundEngine::GetIDFromString(pwVar4);
    }
    AVar2 = AK::SoundEngine::PrepareBank(0,uVar1,1,0);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,AVar2) >> 8),AVar2 == 1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1413dbe2e FUN_1413dbe2e body=523 status=ok
// SIG undefined FUN_1413dbe2e(void)

undefined8
FUN_1413dbe2e(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(undefined1 *)(param_1 + 0x38) = param_5;
  iVar3 = *(int *)(param_3 + 0x10);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  local_78 = param_1 + 0x40;
  if (*(int *)(param_1 + 0x4c) < iVar3) {
    FUN_14655b89c(local_78);
    iVar3 = *(int *)(param_3 + 0x10);
  }
  if (iVar3 != 0) {
    puVar5 = *(ulonglong **)(param_3 + 8);
    puVar8 = puVar5 + iVar3;
    do {
      if ((longlong)*(int *)(param_2 + 0x140) == 0) {
LAB_1413dbfe9:
        uVar1 = 0;
        goto LAB_1413dbff7;
      }
      lVar7 = *(longlong *)(param_2 + 0x138) + 0x30;
      lVar2 = (longlong)*(int *)(param_2 + 0x140) * 0xa8;
      while( true ) {
        if (*(ulonglong **)(lVar7 + 0x20) == (ulonglong *)0x0) {
          uVar6 = 0;
          uVar4 = 0;
        }
        else {
          uVar6 = **(ulonglong **)(lVar7 + 0x20);
          uVar4 = uVar6 & 0xffffffff;
          uVar6 = uVar6 & 0xffffffff00000000;
        }
        if ((*puVar5 == *(ulonglong *)(lVar7 + 0x18)) ||
           ((uVar4 | uVar6) != 0 && *puVar5 == (uVar4 | uVar6))) break;
        lVar7 = lVar7 + 0xa8;
        lVar2 = lVar2 + -0xa8;
        if (lVar2 == 0) goto LAB_1413dbfe9;
      }
      if (lVar7 + -0x30 == 0) goto LAB_1413dbfe9;
      iVar3 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar3 + 1U;
      local_70 = param_2;
      if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
        FUN_14893a526(local_78,iVar3);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 8) = lVar7 + -0x30;
      local_68 = &LAB_1458c41a8;
      local_60 = 0;
      FUN_14655b8fc(&local_58,param_1,&local_68);
      FUN_140e588ce(lVar7,&local_68);
      param_2 = local_70;
      if (local_50 == 0) {
LAB_1413dbfc9:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_1413dbfc9;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar8);
  }
  FUN_1412e9358(param_1);
  uVar1 = 1;
LAB_1413dbff7:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1413dc03c FUN_1413dc03c body=228 status=ok
// SIG undefined FUN_1413dc03c(void)

longlong FUN_1413dc03c(void)

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
  if (DAT_14cb6f948 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487a9c63;
    local_40 = FUN_146541eee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"UsableConsumer",&DAT_14cb6f948,&DAT_1487a9c62);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6f948;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dc122 FUN_1413dc122 body=963 status=ok
// SIG undefined FUN_1413dc122(void)

longlong * FUN_1413dc122(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14050cf44(param_1 + 0xca0,&local_58);
  plVar3 = plStack_50;
  *param_2 = (longlong)local_58;
  param_2[1] = (longlong)plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if (*param_2 != 0) goto LAB_1413dc2f1;
  plVar3 = (longlong *)param_2[1];
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
  plStack_50 = (longlong *)FUN_14001cc68(0x80,0x10);
  plStack_50[1] = (longlong)&DAT_100000001;
  *plStack_50 = (longlong)&PTR_FUN_14b3e8cc0;
  local_58 = plStack_50 + 2;
  plStack_50[3] = 0;
  plStack_50[4] = 0;
  plStack_50[2] = (longlong)&PTR_FUN_14affef30;
  *(undefined2 *)(plStack_50 + 5) = 0;
  plStack_50[6] = 0;
  plStack_50[7] = 0;
  *(undefined4 *)(plStack_50 + 8) = 2;
  *(undefined8 *)((longlong)plStack_50 + 0x44) = 0;
  *(undefined8 *)((longlong)plStack_50 + 0x4c) = 0;
  *(undefined8 *)((longlong)plStack_50 + 0x54) = 0;
  *(undefined8 *)((longlong)plStack_50 + 0x5c) = 0;
  *(undefined8 *)((longlong)plStack_50 + 100) = 0;
  *(undefined8 *)((longlong)plStack_50 + 0x6c) = 0;
  plStack_50[0xe] = 0;
  plStack_50[0xf] = 0;
  FUN_1413dc5cc(&local_58);
  plVar1 = plStack_50;
  plVar3 = local_58;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  local_68 = 0;
  FUN_1413dcc0a(plVar3,param_1 + 0xcc0,param_3,0);
  puVar5 = (undefined8 *)plVar3[0xd];
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar5[6] = 0;
    puVar5[7] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
    plVar3[0xd] = (longlong)puVar5;
    if (puVar5 != (undefined8 *)0x0) goto LAB_1413dc291;
  }
  else {
LAB_1413dc291:
    plVar6 = (longlong *)FUN_14050d8a4(param_3);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_1413dc4e6();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
      if (plVar6 != (longlong *)0x0) {
        uVar7 = FUN_1413dc4e6();
        plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
        if ((plVar6 != plVar8) && (plVar8 != (longlong *)0x0)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb714fc) && (FUN_144b3d300(&DAT_14cb714fc), DAT_14cb714fc == -1)) {
            FUN_1446ddc76(&DAT_14cb714f4,"drone",1);
            _Init_thread_footer(&DAT_14cb714fc);
          }
          local_58 = (longlong *)0x0;
          plStack_50 = (longlong *)0x0;
          (**(code **)(*plVar8 + 0x48))(plVar8,&DAT_14cb714f4,param_1 + 0xcc0,&local_58);
          uVar9 = 0;
          if ((longlong)(int)plStack_50 != 0) {
            plVar6 = local_58 + (longlong)(int)plStack_50 * 3;
            plVar8 = local_58;
            do {
              FUN_1459b2546(puVar5,plVar8,plVar8 + 1,1);
              plVar8 = plVar8 + 3;
            } while (plVar8 != plVar6);
            uVar9 = (ulonglong)plStack_50 & 0xffffffff;
          }
          FUN_14096d529(local_58,uVar9);
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  cVar4 = FUN_1413dc66a(plVar3,0,0,0);
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1413dc2f1;
  }
  else {
    *param_2 = (longlong)plVar3;
    param_2[1] = (longlong)plVar1;
    if (plVar1 == (longlong *)0x0) goto LAB_1413dc2f1;
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar3 = plVar1 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar1)(plVar1);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
LAB_1413dc2f1:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413dc4e6 FUN_1413dc4e6 body=228 status=ok
// SIG undefined FUN_1413dc4e6(void)

longlong FUN_1413dc4e6(void)

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
  if (DAT_14cb61d30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486dfa1d;
    local_40 = FUN_1464f57d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerCustomization",&DAT_14cb61d30,FUN_1464f57ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61d30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dc5cc FUN_1413dc5cc body=157 status=ok
// SIG undefined FUN_1413dc5cc(void)

void FUN_1413dc5cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1413dc606;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1413dc606;
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
LAB_1413dc606:
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
                    /* WARNING: Could not recover jumptable at 0x0001413dc665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1413dc66a FUN_1413dc66a body=1439 status=ok
// SIG undefined FUN_1413dc66a(void)

ulonglong FUN_1413dc66a(longlong *param_1,longlong *param_2,ulonglong *param_3,char param_4)

{
  int *piVar1;
  char **ppcVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong *unaff_RDI;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  bool bVar25;
  undefined1 auStack_c8 [40];
  uint *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  ulonglong local_70;
  char *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0x19) == '\0') {
    pcVar8 = (char *)param_1[0xd];
    if (pcVar8 == (char *)0x0 && param_4 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
LAB_1413dc7b4:
      uVar22 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      goto LAB_1413dc7b7;
    }
    if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\0')) {
      local_58 = 0;
      lVar9 = param_1[8];
      if (lVar9 == 0) {
        uVar7 = FUN_145bc9f92();
        lVar9 = FUN_14477b664(uVar7);
        param_1[8] = lVar9;
      }
      local_68 = (char *)param_1[9];
      if (((local_68 == (char *)0x0) && (local_68 = (char *)0x0, lVar9 != 0)) && (param_1[7] != 0))
      {
        plVar24 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar24 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar24 + 0x108))(plVar24), cVar4 == '\0')) {
          local_68 = (char *)0x0;
        }
        else {
          uVar7 = (**(code **)(*plVar24 + 0x110))(plVar24);
          local_68 = (char *)FUN_144aff482(uVar7,param_1 + 7);
        }
        param_1[9] = (longlong)local_68;
      }
      local_50 = 1;
      local_60 = param_2;
      FUN_143ccb552(param_1[0xd],&local_68,0);
    }
    if (param_3 == (ulonglong *)0x0) {
      uVar7 = FUN_14050fd64();
    }
    else {
      FUN_143ccb8a6(param_3,param_1);
      uVar7 = FUN_14050fd64();
      if ((char)param_3[3] == '\x01') {
        FUN_1405209e8(uVar7,&local_68,param_3);
        if (local_60 == (longlong *)0x0) {
LAB_1413dc826:
          plVar24 = (longlong *)0x0;
          pcVar8 = (char *)0x0;
        }
        else {
          iVar5 = (int)local_60[1];
          do {
            if (iVar5 == 0) {
              plVar24 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar19 = (int)local_60[1];
            bVar25 = iVar5 == iVar19;
            if (bVar25) {
              *(int *)(local_60 + 1) = iVar5 + 1;
              iVar19 = iVar5;
            }
            iVar5 = iVar19;
            UNLOCK();
            plVar24 = local_60;
          } while (!bVar25);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
          pcVar8 = local_68;
          local_60 = (longlong *)0x0;
          if (plVar24 == (longlong *)0x0) goto LAB_1413dc826;
          local_68 = (char *)0x0;
        }
        param_1[0xb] = (longlong)pcVar8;
        plVar3 = (longlong *)param_1[0xc];
        if (plVar24 == plVar3) {
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar24 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar5 = *piVar1;
              UNLOCK();
              plVar3 = plVar24;
              goto joined_r0x0001413dc875;
            }
          }
        }
        else {
          param_1[0xc] = (longlong)plVar24;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar24 = plVar3 + 1;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)*plVar24 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar5 = *piVar1;
              UNLOCK();
joined_r0x0001413dc875:
              if (iVar5 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
        }
        if (param_1[0xb] != 0) {
          FUN_143ccbbfe(param_1);
          unaff_RDI = param_3;
          goto LAB_1413dc7b4;
        }
      }
    }
    DAT_14cb73cec = DAT_14cb73cec + 1;
    FUN_140002266(&local_80,L"Data_%d");
    puVar17 = local_80;
    if (local_78 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_70,puVar17,1);
    local_68 = "FGbxActorAvatarInstanceData";
    local_60 = (longlong *)CONCAT35(local_60._5_3_,0x1b);
    uVar6 = FUN_14001a6c0(&local_68,1);
    local_98 = (ulonglong)uVar6;
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = local_98;
      param_3[1] = local_70;
      param_3[2] = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    local_90 = local_70;
    local_88 = 0;
    FUN_14050f74e(uVar7,&local_68,&local_98,0);
    plVar24 = local_60;
    ppcVar2 = (char **)(param_1 + 0xb);
    if (ppcVar2 != &local_68) {
      param_1[0xb] = (longlong)local_68;
      local_68 = (char *)0x0;
      plVar3 = (longlong *)param_1[0xc];
      if (local_60 != plVar3) {
        local_60 = (longlong *)0x0;
        param_1[0xc] = (longlong)plVar24;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar24 = plVar3 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
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
    plVar24 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    if (*ppcVar2 != (char *)0x0) {
      FUN_14050f264(*ppcVar2,DAT_14c9a1ab0);
      lVar9 = param_1[0xd];
      if ((lVar9 != 0) && (iVar5 = *(int *)(lVar9 + 0x30), iVar5 != 0)) {
        local_a0 = (uint *)(lVar9 + 0x18);
        puVar10 = *(uint **)(lVar9 + 0x28);
        puVar15 = puVar10;
        if (puVar10 == (uint *)0x0) {
          puVar15 = local_a0;
        }
        uVar6 = *puVar15;
        if (uVar6 == 0) {
          iVar19 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar19 = iVar5 + -1;
          }
          uVar22 = 0;
          uVar18 = (ulonglong)(uint)(iVar19 >> 5);
          if (iVar19 >> 5 < 1) {
            uVar18 = uVar22;
          }
          iVar19 = 0;
          do {
            if (uVar18 == uVar22) goto LAB_1413dca14;
            iVar19 = iVar19 + 0x20;
            uVar6 = puVar15[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar22 = 0;
          iVar19 = 0;
        }
        uVar23 = (ulonglong)(-uVar6 & uVar6);
        uVar18 = uVar23 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar11 < iVar5) {
          uVar6 = 0xffffffff;
          iVar16 = iVar5;
          do {
            lVar20 = *(longlong *)(*(longlong *)(lVar9 + 8) + 8 + (longlong)iVar11 * 0x48);
            if (lVar20 != 0) {
              FUN_143cca89c(lVar20,ppcVar2);
              puVar10 = *(uint **)(lVar9 + 0x28);
              iVar16 = *(int *)(lVar9 + 0x30);
            }
            uVar6 = uVar6 & ~(uint)uVar23;
            puVar15 = puVar10;
            if (puVar10 == (uint *)0x0) {
              puVar15 = local_a0;
            }
            iVar11 = (int)uVar22;
            lVar20 = (longlong)iVar11;
            uVar12 = puVar15[lVar20] & uVar6;
            if (uVar12 == 0) {
              iVar13 = iVar16 + 0x1e;
              if (-1 < iVar16 + -1) {
                iVar13 = iVar16 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar19 = iVar19 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar11) {
                iVar14 = iVar11;
              }
              if (iVar11 < iVar13) {
                lVar21 = 0;
                do {
                  uVar12 = puVar15[lVar20 + lVar21 + 1];
                  if (uVar12 != 0) {
                    uVar22 = (ulonglong)(iVar11 + (int)lVar21 + 1);
                    uVar6 = 0xffffffff;
                    goto LAB_1413dcbb8;
                  }
                  iVar19 = iVar19 + 0x20;
                  lVar21 = lVar21 + 1;
                } while (iVar14 - lVar20 != lVar21);
                uVar6 = 0xffffffff;
                iVar11 = iVar14;
              }
              uVar22 = (ulonglong)(iVar11 + 1);
              iVar11 = iVar16;
            }
            else {
LAB_1413dcbb8:
              uVar23 = (ulonglong)(-uVar12 & uVar12);
              uVar18 = uVar23 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar16 <= iVar11) {
                iVar11 = iVar16;
              }
            }
          } while (iVar11 != iVar5);
        }
      }
LAB_1413dca14:
      cVar4 = (**(code **)(*param_1 + 0x18))(param_1,ppcVar2);
      uVar22 = CONCAT71((int7)((ulonglong)ppcVar2 >> 8),1);
      if (cVar4 != '\0') {
        FUN_143ccbbfe(param_1);
      }
      goto LAB_1413dc7b7;
    }
    lVar9 = param_1[0xd];
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x50) = 0;
      if (*(longlong *)(lVar9 + 0x48) != 0) {
        FUN_1400020a8();
      }
      FUN_140e74610(lVar9 + 8);
      FUN_1400020a8(lVar9);
      param_1[0xd] = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  }
  uVar22 = 0;
LAB_1413dc7b7:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar22 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dcc0a FUN_1413dcc0a body=2091 status=ok
// SIG undefined FUN_1413dcc0a(void)

undefined8
FUN_1413dcc0a(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_138 [46];
  char local_10a;
  undefined1 local_109;
  uint local_108;
  int local_104;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  uint *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  byte local_80;
  longlong local_78;
  undefined8 *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar5 = (longlong *)FUN_14050d820(param_3);
  plVar6 = (longlong *)FUN_14050d8a4(param_3);
  if (plVar5 == (longlong *)0x0) goto LAB_1413dcd78;
  uVar7 = FUN_140f26902();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar7);
  if (plVar5 == (longlong *)0x0) goto LAB_1413dcd78;
  uVar7 = FUN_140f26902();
  plVar8 = (longlong *)FUN_144718840(plVar5,uVar7);
  if (plVar8 == (longlong *)0x0 || plVar5 == plVar8) goto LAB_1413dcd78;
  lVar9 = (**(code **)(*plVar8 + 0x20))(plVar8);
  if (lVar9 == 0) goto LAB_1413dcd78;
  if ((*(longlong *)(lVar9 + 0x148) == 0) || (*(char *)(lVar9 + 0x1c) != '\x02')) {
    uVar7 = 0;
  }
  else {
    local_10a = param_5;
    if ((*(longlong **)(lVar9 + 0x140) == (longlong *)0x0) || (*(int *)(lVar9 + 0x13c) == 0)) {
LAB_1413dcd3f:
      bVar3 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar9 + 0x138);
      bVar3 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if (((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != *(int *)(lVar9 + 0x13c))) ||
           ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) goto LAB_1413dcd3f;
        bVar3 = (**(code **)(**(longlong **)(lVar9 + 0x140) + 0x40))();
      }
    }
    if (*(longlong *)(lVar9 + 0x20) == 0) {
      if (bVar3 == 0) {
        if (*(int *)(*(longlong *)(lVar9 + 0x148) + 0x118) != 0) goto LAB_1413dcf3a;
      }
      else if (*(int *)(lVar9 + 0xd8) != *(int *)(lVar9 + 0x104)) {
LAB_1413dcf3a:
        puVar10 = (undefined8 *)FUN_14001cc68(0x58,0x10);
        puVar10[6] = 0;
        puVar10[7] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        *(undefined8 *)((longlong)puVar10 + 0x34) = 0xffffffff00000080;
        *(undefined8 **)(lVar9 + 0x20) = puVar10;
        goto LAB_1413dcf79;
      }
      uVar7 = 0;
      param_5 = local_10a;
    }
    else {
LAB_1413dcf79:
      param_5 = local_10a;
      *(undefined1 *)(lVar9 + 0x1c) = 3;
      local_98 = *(undefined8 *)(lVar9 + 0x1c0);
      local_90 = 0;
      local_80 = bVar3 ^ 1;
      local_109 = param_4;
      local_88 = lVar9;
      if (local_80 == 0) {
        if (((((*(longlong **)(lVar9 + 0x140) != (longlong *)0x0) && (*(int *)(lVar9 + 0x13c) != 0))
             && ((uVar2 = *(uint *)(lVar9 + 0x138), -1 < (int)uVar2 &&
                 (((int)uVar2 < DAT_14c9647dc &&
                  (lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8),
                  lVar16 != 0)))))) && (*(int *)(lVar16 + 0x10) == *(int *)(lVar9 + 0x13c))) &&
           ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
          local_80 = (**(code **)(**(longlong **)(lVar9 + 0x140) + 0x30))();
          local_80 = local_80 ^ 1;
        }
        local_e8 = (uint *)(lVar9 + 0xe0);
        uVar2 = *(uint *)(lVar9 + 0xf8);
        if (uVar2 == 0) {
          uVar22 = 1;
          uVar19 = 0;
          iVar15 = 0;
          uVar4 = 0;
        }
        else {
          puVar11 = *(uint **)(lVar9 + 0xf0);
          if (*(uint **)(lVar9 + 0xf0) == (uint *)0x0) {
            puVar11 = local_e8;
          }
          uVar4 = *puVar11;
          if (uVar4 == 0) {
            iVar15 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar15 = uVar2 - 1;
            }
            uVar19 = 0;
            uVar22 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar22 = uVar19;
            }
            iVar15 = 0;
            do {
              if (uVar22 == uVar19) goto LAB_1413dd133;
              iVar15 = iVar15 + 0x20;
              uVar4 = puVar11[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar4 == 0);
          }
          else {
            uVar19 = 0;
            iVar15 = 0;
          }
          uVar22 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar4 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar4) {
            uVar4 = uVar2;
          }
        }
        if (uVar4 != uVar2) {
          uVar20 = 0xffffffff;
          local_f0 = (ulonglong)uVar2;
          do {
            lVar16 = *(longlong *)(*(longlong *)(lVar9 + 0xd0) + (longlong)(int)uVar4 * 0x48);
            local_104 = iVar15;
            if (lVar16 != 0) {
              lVar17 = *(longlong *)(lVar9 + 0xd0) + (longlong)(int)uVar4 * 0x48;
              lVar21 = *(longlong *)(lVar9 + 0x20);
              plVar5 = (longlong *)(lVar21 + 8);
              local_100 = uVar19;
              if (*(int *)(lVar21 + 0x10) != *(int *)(lVar21 + 0x3c)) {
                uVar2 = (uint)((ulonglong)lVar16 >> 0x10);
                uVar4 = (uint)lVar16 & 0xffff;
                lVar14 = lVar21 + 0x40;
                if (*(longlong *)(lVar21 + 0x48) != 0) {
                  lVar14 = *(longlong *)(lVar21 + 0x48);
                }
                iVar15 = *(int *)(lVar14 + (ulonglong)
                                           (*(int *)(lVar21 + 0x50) - 1U &
                                           (int)((ulonglong)lVar16 >> 0x20) +
                                           ((uint)lVar16 << 0x10 | uVar4) +
                                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
                if (iVar15 != -1) {
                  do {
                    plVar8 = (longlong *)(*plVar5 + (longlong)iVar15 * 0x48);
                    if (*plVar8 == lVar16) {
                      if ((plVar8 != (longlong *)0x0) &&
                         (plVar8 != (longlong *)&DAT_fffffffffffffff8)) {
                        if (*(int *)(lVar17 + 0x28) < (int)plVar8[5]) goto LAB_1413dd350;
                        iVar15 = *(int *)(lVar17 + 0x20) + -1;
                        if (*(int *)(lVar17 + 0x20) == 0) {
                          iVar15 = 0;
                        }
                        local_108 = uVar20;
                        FUN_1402980a2(plVar8 + 3,*(undefined8 *)(lVar17 + 0x18),iVar15);
                        *(undefined4 *)(plVar8 + 5) = *(undefined4 *)(lVar17 + 0x28);
                        goto LAB_1413dd33e;
                      }
                      break;
                    }
                    iVar15 = (int)plVar8[8];
                  } while (iVar15 != -1);
                }
              }
              local_c8 = 0;
              uStack_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_b8 = 0xffffffff;
              local_b0 = 0;
              uStack_a8 = 0;
              local_70 = &local_d8;
              local_108 = uVar20;
              local_78 = lVar17;
              FUN_1487fcaec(plVar5,&local_64,&local_78);
              lVar16 = *plVar5;
              local_f8 = (longlong)local_64 * 9;
              local_e0 = lVar16;
              FUN_1457b93ae(&local_d8);
              lVar16 = lVar16 + local_f8 * 8;
              iVar15 = *(int *)(lVar17 + 0x20) + -1;
              if (*(int *)(lVar17 + 0x20) == 0) {
                iVar15 = 0;
              }
              FUN_1402980a2(lVar16 + 0x18,*(undefined8 *)(lVar17 + 0x18),iVar15);
              *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)(lVar17 + 0x28);
              plVar8 = (longlong *)(local_e0 + local_f8 * 8);
LAB_1413dd33e:
              FUN_1487f1ab4(plVar8 + 6,lVar17 + 0x30);
              uVar19 = local_100;
              uVar20 = local_108;
            }
LAB_1413dd350:
            uVar20 = uVar20 & ~(uint)uVar22;
            puVar11 = *(uint **)(lVar9 + 0xf0);
            if (*(uint **)(lVar9 + 0xf0) == (uint *)0x0) {
              puVar11 = local_e8;
            }
            uVar2 = *(uint *)(lVar9 + 0xf8);
            iVar18 = (int)uVar19;
            lVar16 = (longlong)iVar18;
            uVar4 = puVar11[lVar16] & uVar20;
            iVar15 = local_104;
            if (uVar4 == 0) {
              iVar12 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar12 = uVar2 - 1;
              }
              iVar12 = iVar12 >> 5;
              iVar15 = local_104 + 0x20;
              iVar13 = iVar12;
              if (iVar12 < iVar18) {
                iVar13 = iVar18;
              }
              local_108 = uVar20;
              if (iVar18 < iVar12) {
                lVar17 = 0;
                do {
                  uVar4 = puVar11[lVar16 + lVar17 + 1];
                  if (uVar4 != 0) {
                    uVar19 = (ulonglong)(iVar18 + (int)lVar17 + 1);
                    uVar20 = 0xffffffff;
                    goto LAB_1413dd3ed;
                  }
                  iVar15 = iVar15 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar13 - lVar16 != lVar17);
                local_108 = 0xffffffff;
                iVar18 = iVar13;
              }
              uVar19 = (ulonglong)(iVar18 + 1);
              uVar20 = local_108;
              uVar4 = uVar2;
            }
            else {
LAB_1413dd3ed:
              uVar22 = (ulonglong)(-uVar4 & uVar4);
              uVar1 = uVar22 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar4 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar4) {
                uVar4 = uVar2;
              }
            }
            param_5 = local_10a;
          } while (uVar4 != (uint)local_f0);
        }
      }
      else {
        *(undefined1 *)(lVar9 + 0x1bb) = 0;
        lVar16 = *(longlong *)(lVar9 + 0x148);
        if (0 < *(int *)(lVar16 + 0x118)) {
          lVar17 = 0x20;
          lVar21 = 0;
          do {
            lVar14 = *(longlong *)(lVar16 + 0x110) + lVar17;
            FUN_1459b2546(*(undefined8 *)(lVar9 + 0x20),lVar14 + -0x14,
                          *(longlong *)(lVar16 + 0x110) + lVar17,*(undefined4 *)(lVar14 + -0xc));
            lVar21 = lVar21 + 1;
            lVar16 = *(longlong *)(lVar9 + 0x148);
            lVar17 = lVar17 + 0x58;
          } while (lVar21 < *(int *)(lVar16 + 0x118));
        }
      }
LAB_1413dd133:
      FUN_143ccb552(*(undefined8 *)(lVar9 + 0x20),&local_98,lVar9 + 0x120);
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar9 + 0x20) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x68) = uVar7;
LAB_1413dcd78:
  if (param_2 != 0) {
    lVar9 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_1 + 0x38) != lVar9) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    *(longlong *)(param_1 + 0x38) = lVar9;
    if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x18)) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    uVar7 = FUN_14477b664();
    uVar7 = FUN_14477b664(uVar7);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x20);
    if ((*(longlong *)(param_1 + 0x68) == 0) && (*(int *)(param_2 + 0x30) != 0)) {
      puVar10 = (undefined8 *)FUN_14001cc68(0x58,0x10);
      puVar10[6] = 0;
      puVar10[7] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x34) = 0xffffffff00000080;
      *(undefined8 **)(param_1 + 0x68) = puVar10;
      if ((longlong)*(int *)(param_2 + 0x30) != 0) {
        lVar16 = *(longlong *)(param_2 + 0x28);
        lVar9 = lVar16 + (longlong)*(int *)(param_2 + 0x30) * 0x18;
        do {
          FUN_1459b2546(*(undefined8 *)(param_1 + 0x68),lVar16,lVar16 + 8,0xffffffff);
          lVar16 = lVar16 + 0x18;
        } while (lVar16 != lVar9);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uVar7 = FUN_140f26902();
    plVar5 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
    if (plVar5 != (longlong *)0x0) {
      uVar7 = FUN_140f26902();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar7);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        (**(code **)(*plVar6 + 0x38))(plVar6,*(undefined8 *)(param_1 + 0x68),param_1 + 0x38);
      }
    }
  }
  if (param_5 == '\0') {
    if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_138);
}



// FUNCTION 1413dd462 FUN_1413dd462 body=319 status=ok
// SIG undefined FUN_1413dd462(void)

undefined4
FUN_1413dd462(longlong param_1,double *param_2,undefined4 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined1 local_68;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 == (longlong *)0x0) {
    if (param_4 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_4 = 0x3f80000000000000;
      uVar2 = 0;
      memset(param_4 + 1,0,0x9c);
      *(undefined4 *)((longlong)param_4 + 0xa4) = 0xffffffff;
      param_4[0x15] = 0;
      param_4[0x16] = 0;
      param_4[0x17] = 0;
      param_4[0x18] = 0;
      param_4[0x19] = 0;
      *(undefined4 *)(param_4 + 0x1a) = 0xffffffff;
      *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
      *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_4 + 0xec) = 0;
      param_4[0x1e] = 0;
      param_4[0x1f] = 0;
    }
  }
  else {
    local_20 = param_2[2] - (double)plVar1[0x4e];
    local_28 = param_2[1] - (double)plVar1[0x4d];
    local_30 = *param_2 - (double)plVar1[0x4c];
    local_58 = plVar1[0x48];
    lStack_50 = plVar1[0x49];
    local_48 = (undefined4)plVar1[0x4a];
    uStack_44 = *(undefined4 *)((longlong)plVar1 + 0x254);
    uStack_40 = (undefined4)plVar1[0x4b];
    uStack_3c = *(undefined4 *)((longlong)plVar1 + 0x25c);
    local_68 = param_5;
    local_70 = 0;
    local_78 = param_4;
    uVar2 = (**(code **)(*plVar1 + 0x510))(plVar1,&local_30,&local_58,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dd5a2 FUN_1413dd5a2 body=426 status=ok
// SIG undefined FUN_1413dd5a2(void)

void FUN_1413dd5a2(undefined1 *param_1,double *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  double local_90;
  float local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[0x90] = *param_1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 4);
  local_74 = 0;
  local_78 = 1.0;
  puVar1 = param_1 + 8;
  puVar3 = (undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x30);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    puVar3 = puVar1;
  }
  FUN_14101b390(puVar3);
  puVar3 = (undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x30);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    puVar3 = puVar1;
  }
  FUN_1413dd74e(puVar3,&local_98);
  fVar2 = local_98._4_4_;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_14101ae08(param_1 + 0xa8,0);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xc0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 200) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xd0) = 0xffefffffffffffff;
  fVar5 = 0.0;
  if (0.0 <= fVar2) {
    do {
      puVar3 = (undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x30);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        puVar3 = puVar1;
      }
      fVar4 = (float)FUN_1448c9f94(puVar3,fVar5,0);
      local_90 = (double)(fVar4 / local_78);
      local_98 = (double)fVar5;
      FUN_14101ac76(param_1 + 0xa8,&local_98);
      fVar5 = fVar5 + fVar2 / 20.0;
    } while (fVar5 <= fVar2);
  }
  *(float *)(param_1 + 0x98) = (float)param_2[1];
  *(float *)(param_1 + 0x9c) = (float)*param_2;
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dd74e FUN_1413dd74e body=42 status=ok
// SIG undefined FUN_1413dd74e(void)

void FUN_1413dd74e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x78) * 0x1c;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + -0x1c + lVar2);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + -0x10 + lVar2);
  uVar5 = puVar1[1];
  *(undefined8 *)((longlong)param_2 + 0xc) = *puVar1;
  *(undefined8 *)((longlong)param_2 + 0x14) = uVar5;
  *param_2 = uVar3;
  param_2[1] = uVar4;
  return;
}



// FUNCTION 1413dd778 FUN_1413dd778 body=261 status=ok
// SIG undefined FUN_1413dd778(void)

undefined8 FUN_1413dd778(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (1 < (int)param_1[1]) {
    lVar1 = *param_1;
    lVar2 = 0;
    while( true ) {
      uVar4 = *(ushort *)(lVar1 + lVar2);
      uVar3 = (ulonglong)uVar4;
      uVar5 = *(ushort *)((longlong)L"/Disabled" + lVar2 + 2);
      if (uVar4 != uVar5) break;
      if (uVar4 == 0) {
        return 0;
      }
LAB_1413dd7a9:
      lVar2 = lVar2 + 2;
    }
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1413dd7a9;
    }
    if (uVar4 != uVar5) {
      lVar2 = 0;
      while( true ) {
        uVar4 = *(ushort *)(lVar1 + lVar2);
        uVar3 = (ulonglong)uVar4;
        uVar5 = *(ushort *)((longlong)L"Enabled" + lVar2);
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) {
          return 1;
        }
LAB_1413dd7f7:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1413dd7f7;
      }
      if (uVar4 == uVar5) {
        return 1;
      }
      lVar2 = 0;
      do {
        uVar4 = *(ushort *)(lVar1 + lVar2);
        uVar3 = (ulonglong)uVar4;
        uVar5 = *(ushort *)((longlong)L"RayTracingOnly" + lVar2);
        if (uVar4 == uVar5) {
          if (uVar4 == 0) {
            return 2;
          }
        }
        else {
          if (0x7f < (uVar5 | uVar4)) {
LAB_1413dd865:
            if (uVar4 == uVar5) {
              return 2;
            }
            return 0;
          }
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar6]) goto LAB_1413dd865;
        }
        lVar2 = lVar2 + 2;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 1413dd87e FUN_1413dd87e body=191 status=ok
// SIG undefined FUN_1413dd87e(void)

undefined8 * FUN_1413dd87e(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = (int)param_1[3];
  if ((longlong)iVar1 < 1) {
LAB_1413dd8f8:
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = DAT_14c872be0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[2] + -8 + (longlong)iVar1 * 8);
    *(int *)(param_1 + 3) = iVar1 + -1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1413dd8f8;
    if (*(int *)((longlong)puVar2 + 0xc) < 0) {
      *(undefined4 *)(puVar2 + 1) = 0;
      FUN_14491ce3c(puVar2,0);
      goto LAB_1413dd8c0;
    }
  }
  *(undefined4 *)(puVar2 + 1) = 0;
LAB_1413dd8c0:
  puVar2[2] = DAT_14c872be0;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1459499ee(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return puVar2;
}



// FUNCTION 1413dd93e FUN_1413dd93e body=123 status=ok
// SIG undefined FUN_1413dd93e(void)

void FUN_1413dd93e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    uVar2 = uVar3 & 0xffffffff;
    if (*(longlong *)*param_1 == 0) {
      uVar2 = 6;
    }
    uVar1 = FUN_140b8b9b0(uVar2,*(undefined8 *)param_1[1],*(longlong *)*param_1,&DAT_14c8464e0,
                          &DAT_14c8464e0,0,0);
    *(undefined8 *)(param_2 + uVar3 * 8) = uVar1;
    FUN_140b8b62e(*(undefined8 *)param_1[2],uVar1);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 6);
  return;
}



// FUNCTION 1413dd9ba FUN_1413dd9ba body=221 status=ok
// SIG undefined FUN_1413dd9ba(void)

longlong FUN_1413dd9ba(void)

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
  if (DAT_14cb05a60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d11d79;
    local_40 = FUN_1436af5ad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"SimpleConstructionScript",&DAT_14cb05a60,&DAT_147d11d78);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb05a60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413dda98 FUN_1413dda98 body=2745 status=ok
// SIG undefined FUN_1413dda98(void)

void FUN_1413dda98(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 *_Src;
  undefined8 *puVar6;
  undefined1 *_Src_00;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1413ddb94;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_1413ddb94:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1413ddc6a;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1413ddc6a:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_1413ddd40;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_1413ddd40:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1403a682c;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_60);
            goto LAB_1413dde08;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_60) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_60,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_60,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_60,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_60,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
LAB_1413dde08:
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_160);
            goto LAB_1413dded8;
          }
        }
        _Src_00 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != local_160) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_160,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(local_160,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_160,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_160,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_160);
  }
LAB_1413dded8:
  local_190 = local_160;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_190 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_198 = &local_178;
  local_168 = local_50;
  local_178 = local_60;
  uStack_174 = uStack_5c;
  uStack_170 = uStack_58;
  uStack_16c = uStack_54;
  FUN_1413de552(param_1,local_38,local_40,local_48);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413de552 FUN_1413de552 body=4242 status=ok
// SIG undefined FUN_1413de552(void)

void FUN_1413de552(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  double *param_5,undefined8 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  longlong ****pppplVar6;
  double dVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  longlong *****ppppplVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined8 unaff_RBP;
  int iVar23;
  undefined8 *puVar24;
  longlong *****ppppplVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  bool bVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  longlong ****local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined2 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  longlong ****local_280;
  undefined1 *local_278;
  code *local_270;
  longlong local_260;
  longlong local_258;
  undefined8 ****local_250;
  undefined4 local_244;
  longlong local_240;
  undefined8 ****local_238;
  undefined8 ****ppppuStack_230;
  undefined8 ****local_228;
  undefined8 ****ppppuStack_220;
  undefined8 ****ppppuStack_218;
  void *local_210;
  uint local_208;
  undefined4 local_204;
  undefined8 ****local_200;
  undefined8 ****local_1f8;
  undefined8 ****ppppuStack_1f0;
  void *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined8 ****local_1d8;
  undefined8 ****local_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined2 *local_1c0;
  uint local_1b8;
  undefined4 local_1b4;
  longlong ****local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined8 ****local_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****local_178;
  void *pvStack_170;
  ulonglong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_240 = FUN_1447210f0();
  if ((local_240 == 0) ||
     (lVar12 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600), lVar12 == 0)
     ) goto LAB_1413ded36;
  uVar22 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (param_3 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_280 = (longlong ****)&local_188;
      local_188 = (undefined8 ****)FUN_141864c34;
      local_270 = FUN_14081d0ea;
      local_278 = &LAB_1464cee30;
      local_288 = &LAB_148bfac22;
      local_290 = &LAB_140f21842;
      local_298 = &DAT_149e063b2;
      local_2a0 = 0;
      local_2a8 = 0x10000004;
      local_2b0 = (longlong ****)CONCAT44(local_2b0._4_4_,0x10);
      local_2b8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      cVar10 = (**(code **)(*param_3 + 0x798))(param_3);
      if ((cVar10 != '\0') && (cVar10 = (**(code **)(*param_3 + 0x700))(param_3), cVar10 != '\0'))
      goto LAB_1413ded36;
      uVar22 = 0;
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x2900);
  local_260 = param_1;
  local_244 = uVar22;
  if ((lVar14 == 0) || (*(char *)(lVar14 + 0x480) != '\x01')) {
    plVar13 = (longlong *)(**(code **)(*param_2 + 0x610))(param_2,0);
    if (plVar13 == (longlong *)0x0) {
      lVar14 = FUN_1401f2ad8();
    }
    else {
      lVar14 = (**(code **)(*plVar13 + 0x2f8))();
    }
    local_258 = lVar14;
    if (lVar14 == 0) {
      ppppuStack_218 = (longlong *****)0x0;
      local_228 = (longlong *****)0x0;
      ppppuStack_220 = (longlong *****)0x0;
      local_208 = 0;
      local_250 = (longlong *****)0x0;
LAB_1413de6fc:
      local_210 = (void *)0x0;
      local_204 = 0;
      local_1f8 = ppppuStack_220;
      ppppuStack_1f0 = ppppuStack_218;
      local_1e0 = 0;
      local_238 = ppppuStack_220;
      ppppuStack_230 = ppppuStack_218;
      local_200 = local_228;
LAB_1413de727:
      local_1e8 = (void *)0x0;
      local_1dc = 0;
      local_1b8 = 0;
      local_228 = local_200;
      ppppuStack_220 = local_1f8;
      ppppuStack_218 = ppppuStack_1f0;
      local_1d8 = local_200;
LAB_1413de75b:
      local_1c0 = (undefined2 *)0x0;
      local_1b4 = 0;
      uVar21 = 0;
      local_200 = local_1d8;
      local_1d0 = local_1f8;
      ppppuStack_1c8 = ppppuStack_1f0;
    }
    else {
      FUN_1400bbfc4(&local_188,lVar14);
      pvVar5 = pvStack_170;
      local_238 = local_188;
      ppppuStack_230 = ppppuStack_180;
      local_250 = local_178;
      uVar27 = (uint)pvStack_170;
      cVar10 = (*(code *)PTR_FUN_14c758760)();
      uVar21 = *(uint *)(lVar14 + 0xc);
      if (cVar10 == '\0') {
LAB_1413de68f:
        if ((int)uVar21 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        uVar11 = *(uint *)(lVar14 + 0x10);
        if (*(uint *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar23 = DAT_14c964868 + 1;
          UNLOCK();
          uVar19 = DAT_14c964868 + 1;
          bVar29 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar23;
          if (bVar29) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar19);
          }
          LOCK();
          uVar11 = *(uint *)(lVar14 + 0x10);
          bVar29 = uVar11 == 0;
          if (bVar29) {
            *(uint *)(lVar14 + 0x10) = uVar19;
            uVar11 = 0;
          }
          UNLOCK();
          if (bVar29) {
            uVar11 = uVar19;
          }
        }
        uVar18 = (ulonglong)uVar11;
        uVar11 = uVar21;
      }
      else {
        uVar11 = 0;
        if ((int)uVar21 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        uVar18 = 0;
        if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) goto LAB_1413de68f;
      }
      local_228 = (undefined8 ****)((ulonglong)uVar11 | uVar18 << 0x20);
      ppppuStack_220 = local_238;
      ppppuStack_218 = ppppuStack_230;
      local_210 = (void *)0x0;
      local_208 = uVar27;
      if (uVar27 == 0) goto LAB_1413de6fc;
      FUN_1446dd670(&local_210,(ulonglong)pvVar5 & 0xffffffff,0);
      memcpy(local_210,local_250,(longlong)(int)uVar27 * 2);
      pvVar5 = local_210;
      local_1e0 = local_208;
      lVar14 = (longlong)(int)local_208;
      local_200 = local_228;
      local_1f8 = ppppuStack_220;
      ppppuStack_1f0 = ppppuStack_218;
      local_1e8 = (void *)0x0;
      if (lVar14 == 0) goto LAB_1413de727;
      FUN_1446dd670(&local_1e8,local_208,0);
      memcpy(local_1e8,pvVar5,lVar14 * 2);
      pvVar5 = local_1e8;
      local_1b8 = local_1e0;
      lVar14 = (longlong)(int)local_1e0;
      local_1d8 = local_200;
      local_1d0 = local_1f8;
      ppppuStack_1c8 = ppppuStack_1f0;
      local_1c0 = (undefined2 *)0x0;
      if (lVar14 == 0) goto LAB_1413de75b;
      FUN_1446dd670(&local_1c0,local_1e0,0);
      memcpy(local_1c0,pvVar5,lVar14 * 2);
      uVar21 = local_1b8;
    }
    ppppuVar9 = ppppuStack_1c8;
    ppppuVar8 = local_1d0;
    lVar14 = local_260;
    uVar18 = 0;
    iVar23 = uVar21 - 1;
    if (uVar21 == 0) {
      iVar23 = 0;
    }
    if (0 < iVar23) {
      puVar15 = &DAT_149dfb77a;
      if (uVar21 != 0) {
        puVar15 = local_1c0;
      }
      lVar26 = 0;
      uVar18 = 0;
      do {
        uVar21 = ((uint)(0x19 < (ushort)puVar15[lVar26] - 0x61) * 0x20 +
                 (uint)(ushort)puVar15[lVar26]) - 0x20;
        uVar27 = (uint)(uVar18 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar18 ^ uVar21) & 0xff) * 4);
        uVar18 = (ulonglong)
                 (uVar27 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar27 & 0xff ^ uVar21 >> 8 & 0xff) * 4));
        lVar26 = lVar26 + 1;
      } while (iVar23 != (int)lVar26);
    }
    if (local_1c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)(lVar12 + 0x128) != *(int *)(lVar12 + 0x154)) {
      uVar27 = (uint)((ulonglong)ppppuVar8 >> 0x10);
      uVar19 = (uint)ppppuVar8 & 0xffff;
      uVar21 = (uint)((ulonglong)ppppuVar9 >> 0x10);
      uVar11 = (uint)ppppuVar9 & 0xffff;
      uVar27 = (uVar19 >> 4) +
               ((uint)ppppuVar8 << 0x10 | uVar19) + (int)((ulonglong)ppppuVar8 >> 0x20) +
               (uVar27 << 0x13 | uVar27 & 0xffff);
      uVar27 = (uVar27 >> 2) + 0x9e3779b9 +
               uVar27 * 0x40 +
               (uVar11 >> 4) +
               ((uint)ppppuVar9 << 0x10 | uVar11) + (int)((ulonglong)ppppuVar9 >> 0x20) +
               (uVar21 << 0x13 | uVar21 & 0xffff) ^ uVar27;
      uVar11 = uVar27 >> 0xd ^ -uVar27;
      uVar21 = uVar11 << 8 ^ (-0x61c88647 - uVar27) - uVar11;
      uVar19 = uVar21 >> 0xd ^ (uVar27 - uVar11) - uVar21;
      uVar27 = uVar19 >> 0xc ^ (uVar11 - uVar21) - uVar19;
      uVar11 = uVar27 << 0x10 ^ (uVar21 - uVar19) - uVar27;
      uVar21 = uVar11 >> 5 ^ (uVar19 - uVar27) - uVar11;
      uVar19 = uVar21 >> 3 ^ (uVar27 - uVar11) - uVar21;
      uVar27 = uVar19 << 10 ^ (uVar11 - uVar21) - uVar19;
      iVar23 = (int)uVar18;
      uVar27 = (uint)(uVar18 >> 0xd) ^ (uVar27 >> 0xf ^ uVar21 - (uVar19 + uVar27)) - iVar23;
      uVar11 = uVar27 << 8 ^ (-0x61c88647 - iVar23) - uVar27;
      uVar21 = uVar11 >> 0xd ^ (iVar23 - uVar27) - uVar11;
      uVar19 = uVar21 >> 0xc ^ (uVar27 - uVar11) - uVar21;
      uVar27 = uVar19 << 0x10 ^ (uVar11 - uVar21) - uVar19;
      uVar11 = uVar27 >> 5 ^ (uVar21 - uVar19) - uVar27;
      uVar21 = uVar11 >> 3 ^ (uVar19 - uVar27) - uVar11;
      uVar27 = uVar21 << 10 ^ (uVar27 - uVar11) - uVar21;
      lVar26 = lVar12 + 0x158;
      if (*(longlong *)(lVar12 + 0x160) != 0) {
        lVar26 = *(longlong *)(lVar12 + 0x160);
      }
      iVar23 = *(int *)(lVar26 + (ulonglong)
                                 (*(int *)(lVar12 + 0x168) - 1U &
                                 (uVar27 >> 0xf ^ uVar11 - (uVar21 + uVar27))) * 4);
      if (iVar23 != -1) {
LAB_1413de9d9:
        pvVar5 = local_1e8;
        local_188 = local_200;
        ppppuStack_180 = local_1f8;
        local_178 = ppppuStack_1f0;
        pvStack_170 = (void *)0x0;
        lVar14 = (longlong)(int)local_1e0;
        local_168 = CONCAT44(local_168._4_4_,local_1e0);
        if (lVar14 == 0) {
          local_168 = (ulonglong)local_1e0;
        }
        else {
          FUN_1446dd670(&pvStack_170,local_1e0,0);
          memcpy(pvStack_170,pvVar5,lVar14 * 2);
        }
        lVar14 = *(longlong *)(lVar12 + 0x120);
        lVar26 = (longlong)iVar23;
        local_1b0 = *(longlong *****)(lVar14 + lVar26 * 0x48);
        puVar2 = (undefined4 *)(lVar14 + 8 + lVar26 * 0x48);
        local_1a8 = *puVar2;
        uStack_1a4 = puVar2[1];
        uStack_1a0 = puVar2[2];
        uStack_19c = puVar2[3];
        local_198 = (void *)0x0;
        local_190 = *(int *)(lVar14 + 0x20 + lVar26 * 0x48);
        lVar28 = (longlong)local_190;
        pvVar5 = *(void **)(lVar14 + 0x18 + lVar26 * 0x48);
        if (lVar28 == 0) {
          local_18c = 0;
        }
        else {
          FUN_1446dd670(&local_198,local_190,0);
          memcpy(local_198,pvVar5,lVar28 * 2);
        }
        if (((longlong *****)CONCAT44(uStack_1a4,local_1a8) == (longlong *****)ppppuStack_180) &&
           ((longlong *****)CONCAT44(uStack_19c,uStack_1a0) == (longlong *****)local_178)) {
          if (local_190 == (int)local_168) {
            bVar29 = true;
            if (1 < local_190) {
              lVar14 = 0;
              do {
                uVar3 = *(ushort *)((longlong)local_198 + lVar14);
                uVar4 = *(ushort *)((longlong)pvStack_170 + lVar14);
                if (uVar3 == uVar4) {
                  if (uVar3 == 0) goto LAB_1413df0e5;
                }
                else {
                  if (0x7f < (uVar4 | uVar3)) {
                    iVar20 = (uint)uVar3 - (uint)uVar4;
                    goto LAB_1413df0e7;
                  }
                  if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
                    iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar3] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
                    goto LAB_1413df0e7;
                  }
                }
                lVar14 = lVar14 + 2;
              } while( true );
            }
          }
          else {
            bVar29 = (int)local_168 + local_190 == 1;
          }
        }
        else {
          bVar29 = false;
        }
        goto LAB_1413dea95;
      }
    }
LAB_1413df4a0:
    lVar26 = 0;
LAB_1413deada:
    if (local_1e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_210 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *****)local_250 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if (lVar26 == 0) {
      ppppplVar25 = *(longlong ******)(lVar12 + 0x108);
      uVar16 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x110));
      ppppuStack_180 = (undefined8 ****)FUN_14477b664(uVar16);
      puVar24 = (undefined8 *)(lVar12 + 0x118);
    }
    else {
      local_188 = (undefined8 ****)0x0;
      ppppplVar25 = *(longlong ******)(lVar26 + 0x28);
      uVar16 = FUN_14477b664(*(undefined8 *)(lVar26 + 0x30));
      ppppuStack_180 = (undefined8 ****)FUN_14477b664(uVar16);
      puVar24 = (undefined8 *)(lVar26 + 0x38);
    }
    ppppplVar17 = (longlong *****)*puVar24;
    local_188 = ppppplVar25;
    local_178 = ppppplVar17;
    if ((longlong *****)ppppuStack_180 == (longlong *****)0x0) {
      uVar16 = FUN_1405bb4b8();
      ppppuStack_180 = (undefined8 ****)FUN_14477b664(uVar16);
    }
    if (((ppppplVar17 == (longlong *****)0x0) &&
        (ppppplVar17 = (longlong *****)0x0, (longlong *****)ppppuStack_180 != (longlong *****)0x0))
       && (ppppplVar25 != (longlong *****)0x0)) {
      pppplVar6 = (longlong ****)ppppuStack_180[0x17];
      if ((pppplVar6 == (longlong ****)0x0) ||
         (cVar10 = (*(code *)(*pppplVar6)[0x21])(pppplVar6), cVar10 == '\0')) {
        ppppplVar17 = (longlong *****)0x0;
      }
      else {
        uVar16 = (*(code *)(*pppplVar6)[0x22])(pppplVar6);
        ppppplVar17 = (longlong *****)FUN_144aff482(uVar16,&local_188);
      }
    }
LAB_1413debb6:
    if (ppppplVar17 == (longlong *****)0x0) goto LAB_1413ded36;
  }
  else {
    lVar26 = *(longlong *)(lVar14 + 0x490);
    if (lVar26 == 0) {
      uVar16 = FUN_1405bb4b8();
      lVar26 = FUN_14477b664(uVar16);
      *(longlong *)(lVar14 + 0x490) = lVar26;
    }
    ppppplVar17 = *(longlong ******)(lVar14 + 0x498);
    if (ppppplVar17 == (longlong *****)0x0) {
      if ((lVar26 == 0) || (*(longlong *)(lVar14 + 0x488) == 0)) goto LAB_1413ded36;
      plVar13 = *(longlong **)(lVar26 + 0xb8);
      if ((plVar13 == (longlong *)0x0) ||
         (cVar10 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar10 == '\0')) {
        ppppplVar17 = (longlong *****)0x0;
      }
      else {
        uVar16 = (**(code **)(*plVar13 + 0x110))(plVar13);
        ppppplVar17 = (longlong *****)FUN_144aff482(uVar16,(longlong *)(lVar14 + 0x488));
      }
      *(longlong ******)(lVar14 + 0x498) = ppppplVar17;
      local_258 = 0;
      lVar14 = local_260;
      goto LAB_1413debb6;
    }
    local_258 = 0;
    lVar14 = local_260;
  }
  if ((param_2 != (longlong *)0x0) &&
     (lVar26 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff), lVar26 != 0)) {
    fVar32 = (float)*(double *)(local_240 + 0x6d0);
    fVar31 = fVar32 - *(float *)(lVar14 + 0x2730);
    local_1b0 = (longlong ****)&local_1d8;
    local_1d8 = (undefined8 ****)((ulonglong)local_1d8 & 0xffffffff00000000);
    ppppuStack_180 = &local_1b0;
    local_188 = (undefined8 ****)&LAB_14362051c;
    FUN_1448e6002(lVar26 + 0x138);
    if (local_1d8._0_4_ <= 1e-08) {
      dVar30 = *param_5 * *param_5 + param_5[1] * param_5[1];
      dVar7 = param_5[2];
    }
    else {
      dVar30 = 1.0 / (double)local_1d8._0_4_;
      dVar7 = param_5[2] * dVar30;
      dVar30 = dVar30 * *param_5 * dVar30 * *param_5 + param_5[1] * dVar30 * param_5[1] * dVar30;
    }
    if (*(float *)((longlong)ppppplVar17 + 0x1cc) <= fVar31 &&
        fVar31 != *(float *)((longlong)ppppplVar17 + 0x1cc)) {
      fVar31 = (float)(dVar7 * dVar7 + dVar30);
      if (*(float *)(ppppplVar17 + 0x39) * *(float *)(ppppplVar17 + 0x39) < fVar31) {
        if (*(char *)(lVar14 + 0x2708) != '\0') {
          FUN_1458ae19c(lVar14);
        }
        uVar16 = FUN_1447210f0(lVar14);
        FUN_1407f7f84(&local_188,uVar16);
        ppppplVar25 = (longlong *****)ppppuStack_180;
        if ((longlong *****)ppppuStack_180 != (longlong *****)0x0) {
          iVar23 = *(int *)(ppppuStack_180 + 1);
          do {
            if (iVar23 == 0) {
              ppppplVar25 = (longlong *****)0x0;
              break;
            }
            LOCK();
            iVar20 = *(int *)(ppppplVar25 + 1);
            bVar29 = iVar23 == iVar20;
            if (bVar29) {
              *(int *)(ppppplVar25 + 1) = iVar23 + 1;
              iVar20 = iVar23;
            }
            iVar23 = iVar20;
            UNLOCK();
          } while (!bVar29);
          ppppuVar8 = ppppuStack_180;
          LOCK();
          piVar1 = (int *)((longlong)ppppuStack_180 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppppuVar8)[2])();
          }
          ppppuVar8 = local_188;
          if (ppppplVar25 != (longlong *****)0x0) {
            if ((longlong *****)local_188 != (longlong *****)0x0) {
              local_158 = 0;
              uStack_150 = 0;
              local_168 = 0;
              uStack_160 = 0;
              local_178 = (longlong *****)0x0;
              pvStack_170 = (void *)0x0;
              local_188 = (longlong *****)0x0;
              ppppuStack_180 = (longlong *****)0x0;
              local_148 = 0xc0;
              local_138 = 0;
              local_128 = (longlong *)0x0;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              local_a0 = 0x3ff0000000000000;
              local_98 = 0x3ff0000000000000;
              local_90 = 0x3ff0000000000000;
              local_88 = 0x3f80000000000000;
              if (fVar31 < 0.0) {
                local_80 = sqrtf(fVar31);
              }
              else {
                local_80 = SQRT(fVar31);
              }
              if (lVar14 != 0) {
                local_2a8 = 0;
                local_2b8 = local_2b8 & 0xffffff00;
                local_2b0 = (longlong ****)&local_188;
                FUN_1408f2522(ppppuVar8,ppppplVar17,lVar14,param_6);
                *(float *)(lVar14 + 0x2730) = fVar32;
                fVar32 = fRam0000000000002730;
                if (local_f8 != 0) {
                  plVar13 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar13 = local_d8;
                  }
                  (**(code **)(*plVar13 + 0x10))();
                  fVar32 = fRam0000000000002730;
                }
              }
              fRam0000000000002730 = fVar32;
              if (local_138 != 0) {
                plVar13 = local_128;
                if (local_128 == (longlong *)0x0) {
                  plVar13 = local_118;
                }
                (**(code **)(*plVar13 + 0x10))();
              }
              if (local_158 != 0) {
                FUN_1400020a8();
              }
              if (local_168 != 0) {
                FUN_1400020a8();
              }
              if ((longlong *****)local_178 != (longlong *****)0x0) {
                FUN_1400020a8();
              }
              if ((longlong *****)local_188 != (longlong *****)0x0) {
                FUN_1400020a8();
              }
            }
            LOCK();
            ppppplVar17 = ppppplVar25 + 1;
            *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
            UNLOCK();
            if (*(int *)ppppplVar17 == 0) {
              (*(code *)**ppppplVar25)(ppppplVar25);
              LOCK();
              piVar1 = (int *)((longlong)ppppplVar25 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppplVar25)[2])(ppppplVar25);
              }
            }
          }
        }
      }
      else if (*(char *)(lVar14 + 0x2708) == '\0') {
        (**(code **)(*param_2 + 0x4e0))(param_2,&local_188);
        if (((char)local_244 != '\0') &&
           (*(float *)(lVar12 + 0x1a0) * *(float *)(lVar12 + 0x1a0) <
            (float)((double)local_178 * (double)local_178 +
                   (double)local_188 * (double)local_188 +
                   (double)ppppuStack_180 * (double)ppppuStack_180))) {
          FUN_14594d2c6(lVar14,local_258,ppppplVar17);
        }
      }
    }
  }
LAB_1413ded36:
  if ((local_70 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1413df0e5:
  iVar20 = 0;
LAB_1413df0e7:
  bVar29 = iVar20 == 0;
LAB_1413dea95:
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvStack_170 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = local_260;
  if (bVar29) {
    if (iVar23 != -1) {
      lVar26 = lVar26 * 0x48 + *(longlong *)(lVar12 + 0x120);
      goto LAB_1413deada;
    }
    goto LAB_1413df4a0;
  }
  iVar23 = *(int *)(*(longlong *)(lVar12 + 0x120) + 0x40 + lVar26 * 0x48);
  if (iVar23 == -1) goto LAB_1413df4a0;
  goto LAB_1413de9d9;
}



// FUNCTION 1413df5e5 FUN_1413df5e5 body=75 status=ok
// SIG undefined FUN_1413df5e5(void)

void FUN_1413df5e5(longlong param_1,int param_2)

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



// FUNCTION 1413df630 FUN_1413df630 body=877 status=ok
// SIG undefined FUN_1413df630(void)

void FUN_1413df630(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_228 [40];
  undefined8 local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  float fStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined1 local_188 [208];
  undefined1 *local_b8;
  undefined8 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_b8 = (undefined1 *)0x0;
  local_a8 = 0xd00000000;
  iVar8 = 0;
  local_200 = param_2;
  do {
    fVar10 = cosf((float)iVar8 * 0.2617994);
    fVar11 = sinf((float)iVar8 * 0.2617994);
    uVar3 = local_a8;
    lVar6 = (longlong)(int)local_a8;
    uVar4 = (int)local_a8 + 1;
    local_a8 = CONCAT44(local_a8._4_4_,uVar4);
    if (local_a8._4_4_ < uVar4) {
      FUN_1471db218(local_188,uVar3 & 0xffffffff);
    }
    puVar5 = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      puVar5 = local_188;
    }
    lVar6 = lVar6 * 0x10;
    *(undefined4 *)(puVar5 + lVar6) = 0;
    *(float *)(puVar5 + lVar6 + 4) = fVar11;
    *(float *)(puVar5 + lVar6 + 8) = fVar10;
    *(undefined4 *)(puVar5 + lVar6 + 0xc) = 0x3f800000;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xd);
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_14499148c(&local_1d8,0xf7);
  iVar8 = 0;
  do {
    local_1e0 = ((float)iVar8 / 18.0) * 360.0;
    local_1e4 = 0;
    local_1dc = 0;
    FUN_1413df99e(&local_1c8,&local_1e4);
    lVar6 = 8;
    do {
      uVar3 = uStack_1d0;
      puVar5 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar5 = local_188;
      }
      fVar10 = *(float *)(puVar5 + lVar6 + -8);
      fVar11 = *(float *)(puVar5 + lVar6 + -4);
      fVar2 = *(float *)(puVar5 + lVar6);
      fVar12 = fVar2 * local_1a8 + fVar11 * local_1b8 + fVar10 * (float)local_1c8 + local_198;
      fVar13 = fVar2 * fStack_1a4 + fVar11 * fStack_1b4 + fVar10 * local_1c8._4_4_ + fStack_194;
      fVar10 = fVar2 * fStack_1a0 + fVar11 * fStack_1b0 + fVar10 * fStack_1c0 + fStack_190;
      lVar9 = (longlong)(int)uStack_1d0;
      uVar4 = (int)uStack_1d0 + 1;
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar4);
      if (uStack_1d0._4_4_ < uVar4) {
        FUN_1449e2712(&local_1d8,uVar3 & 0xffffffff);
      }
      lVar9 = lVar9 * 0x10;
      *(float *)(local_1d8 + lVar9) = fVar12 + 0.0;
      *(float *)(local_1d8 + 4 + lVar9) = fVar13 + 0.0;
      *(float *)(local_1d8 + 8 + lVar9) = fVar10 + 0.0;
      *(undefined4 *)(local_1d8 + 0xc + lVar9) = 0x3f800000;
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0xd8);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x13);
  *(int *)(param_1 + 0x18) = (int)uStack_1d0;
  local_1f8 = local_1d8;
  local_1f0 = (int)uStack_1d0;
  FUN_1415adbf7(&local_1c8,local_200,L"TStencilSphereVertexBuffer");
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_1c8) {
    lVar6 = *plVar7;
    *plVar7 = local_1c8;
    local_1c8 = 0;
    if (lVar6 == 0) goto LAB_1413df8b5;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_1c8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_1c8 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1413df8b5:
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413df99e FUN_1413df99e body=520 status=ok
// SIG undefined FUN_1413df99e(void)

void FUN_1413df99e(float *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar6;
  float fVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  auVar4 = insertps(auVar3,(int)param_2[1],0x28);
  fVar2 = auVar4._0_4_ * 0.017453292;
  fVar6 = auVar4._4_4_ * 0.017453292;
  fVar7 = auVar4._8_4_ * 0.017453292;
  fVar8 = auVar4._12_4_ * 0.017453292;
  auVar11._0_4_ = (float)(int)(fVar2 * 0.15915494) * -6.2831855 + fVar2;
  auVar11._4_4_ = (float)(int)(fVar6 * 0.15915494) * -6.2831855 + fVar6;
  auVar11._8_4_ = (float)(int)(fVar7 * 0.15915494) * -6.2831855 + fVar7;
  auVar11._12_4_ = (float)(int)(fVar8 * 0.15915494) * -6.2831855 + fVar8;
  auVar9._0_4_ = (float)((uint)auVar11._0_4_ & 0x80000000 | 0x40490fdb) - auVar11._0_4_;
  auVar9._4_4_ = (float)((uint)auVar11._4_4_ & 0x80000000 | 0x40490fdb) - auVar11._4_4_;
  auVar9._8_4_ = (float)((uint)auVar11._8_4_ & 0x80000000 | 0x40490fdb) - auVar11._8_4_;
  auVar9._12_4_ = (float)((uint)auVar11._12_4_ & 0x80000000 | 0x40490fdb) - auVar11._12_4_;
  auVar5._4_4_ = -(uint)(1.5707964 < ABS(auVar11._4_4_));
  auVar5._0_4_ = -(uint)(1.5707964 < ABS(auVar11._0_4_));
  auVar5._8_4_ = -(uint)(1.5707964 < ABS(auVar11._8_4_));
  auVar5._12_4_ = -(uint)(1.5707964 < ABS(auVar11._12_4_));
  auVar4 = blendvps(auVar11,auVar9,auVar5);
  fVar2 = auVar4._0_4_;
  fVar6 = auVar4._4_4_;
  fVar7 = auVar4._8_4_;
  fVar8 = fVar2 * fVar2;
  fVar12 = fVar6 * fVar6;
  fVar13 = fVar7 * fVar7;
  fVar14 = auVar4._12_4_ * auVar4._12_4_;
  auVar10._0_4_ =
       ((((fVar8 * -2.6051615e-07 + 2.4760495e-05) * fVar8 + -0.0013888378) * fVar8 + 0.041666638) *
        fVar8 + -0.5) * fVar8 + 1.0;
  auVar10._4_4_ =
       ((((fVar12 * -2.6051615e-07 + 2.4760495e-05) * fVar12 + -0.0013888378) * fVar12 + 0.041666638
        ) * fVar12 + -0.5) * fVar12 + 1.0;
  auVar10._8_4_ =
       ((((fVar13 * -2.6051615e-07 + 2.4760495e-05) * fVar13 + -0.0013888378) * fVar13 + 0.041666638
        ) * fVar13 + -0.5) * fVar13 + 1.0;
  auVar10._12_4_ =
       ((((fVar14 * -2.6051615e-07 + 2.4760495e-05) * fVar14 + -0.0013888378) * fVar14 + 0.041666638
        ) * fVar14 + -0.5) * fVar14 + 1.0;
  uVar1 = CONCAT44(auVar10._4_4_,auVar10._0_4_);
  auVar4._8_4_ = -auVar10._8_4_;
  auVar4._0_8_ = uVar1 ^ 0x8000000080000000;
  auVar4._12_4_ = -auVar10._12_4_;
  auVar4 = blendvps(auVar10,auVar4,auVar5);
  fVar2 = (((((fVar8 * -2.3889859e-08 + 2.7525562e-06) * fVar8 + -0.00019840874) * fVar8 +
            0.008333331) * fVar8 + -0.16666667) * fVar8 + 1.0) * fVar2;
  fVar6 = (((((fVar12 * -2.3889859e-08 + 2.7525562e-06) * fVar12 + -0.00019840874) * fVar12 +
            0.008333331) * fVar12 + -0.16666667) * fVar12 + 1.0) * fVar6;
  fVar7 = (((((fVar13 * -2.3889859e-08 + 2.7525562e-06) * fVar13 + -0.00019840874) * fVar13 +
            0.008333331) * fVar13 + -0.16666667) * fVar13 + 1.0) * fVar7;
  fVar12 = auVar4._4_4_;
  fVar13 = auVar4._8_4_;
  fVar8 = auVar4._0_4_;
  *param_1 = fVar8 * fVar12;
  param_1[1] = fVar8 * fVar6;
  param_1[2] = fVar2;
  param_1[3] = 0.0;
  param_1[4] = fVar7 * fVar2 * fVar12 - fVar6 * fVar13;
  param_1[5] = fVar7 * fVar2 * fVar6 + fVar13 * fVar12;
  param_1[6] = -fVar7 * fVar8;
  param_1[7] = 0.0;
  param_1[8] = -(fVar2 * fVar13 * fVar12 + fVar7 * fVar6);
  param_1[9] = fVar7 * fVar12 - fVar6 * fVar2 * fVar13;
  param_1[10] = fVar13 * fVar8;
  param_1[0xb] = 0.0;
  param_1[0xc] = (float)DAT_14c846330;
  param_1[0xd] = DAT_14c846330._4_4_;
  param_1[0xe] = DAT_14c846338;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 1413dfba6 FUN_1413dfba6 body=21 status=ok
// SIG undefined FUN_1413dfba6(void)

undefined8 FUN_1413dfba6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1413dfbbc FUN_1413dfbbc body=1092 status=ok
// SIG undefined FUN_1413dfbbc(void)

void FUN_1413dfbbc(longlong param_1)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [40];
  char local_d0 [16];
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
  FUN_140cfa184();
  FUN_140cfa0b8(param_1,0);
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
  }
  if ((*(longlong *)(param_1 + 0x7a8) != 0) && (*(char *)(param_1 + 2000) != '\0')) {
    fVar13 = 0.0;
    if ((*(longlong *)(param_1 + 0x30) != 0) && (lVar9 = FUN_1447210f0(), lVar9 != 0)) {
      fVar13 = *(float *)(lVar9 + 0x930);
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,*(undefined8 *)(param_1 + 0x30));
    pfVar11 = &local_a0;
    FUN_1447c3578(param_1 + 0x6c0,pfVar11,local_d0);
    if (local_80 == 3) {
      fVar14 = local_a0;
      bVar7 = 3;
    }
    else {
      pfVar12 = &local_78;
      FUN_1400b56fe(pfVar12,&local_a0,3);
      fVar14 = 0.0;
      if (local_58 != 0) {
        fVar14 = local_78;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar12 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar3)(pfVar12);
      }
      bVar7 = local_80;
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
        bVar7 = local_80;
      }
    }
    *(float *)(param_1 + 0x7d8) = fVar13 + fVar14;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar11 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar3)(pfVar11);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    cVar2 = *(char *)(param_1 + 2000);
    if (cVar2 == '\x01') {
      lVar9 = param_1 + 200;
    }
    else if (cVar2 == '\x02') {
      lVar9 = param_1 + 0x268;
    }
    else if (cVar2 == '\x04') {
      lVar9 = param_1 + 0x520;
    }
    else {
      lVar9 = 0;
    }
    *(undefined1 *)(param_1 + 2000) = 0;
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    *(undefined8 *)(param_1 + 0x7c8) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x7b8) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x7bc) = uVar4;
    *(undefined4 *)(param_1 + 0x7c0) = uVar5;
    *(undefined4 *)(param_1 + 0x7c4) = uVar6;
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (lVar9 != 0) {
      fVar13 = 0.0;
      if ((*(longlong *)(param_1 + 0x30) != 0) && (lVar10 = FUN_1447210f0(), lVar10 != 0)) {
        fVar13 = *(float *)(lVar10 + 0x930);
      }
      local_d0[0] = '\0';
      local_a8[0] = 0;
      FUN_1456bb102(local_d0,*(undefined8 *)(param_1 + 0x30));
      pfVar11 = &local_a0;
      FUN_1447c3578(lVar9,pfVar11,local_d0);
      if (local_80 == 3) {
        uVar8 = 3;
        fVar14 = local_a0;
      }
      else {
        pfVar12 = &local_78;
        FUN_1400b56fe(pfVar12,&local_a0,3);
        fVar14 = 0.0;
        if (local_58 != 0) {
          fVar14 = local_78;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_60) {
            pfVar12 = (float *)CONCAT44(uStack_74,local_78);
          }
          (*pcVar3)(pfVar12);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(CONCAT44(uStack_74,local_78));
        }
        uVar8 = (uint)local_80;
      }
      *(float *)(lVar9 + 0x114) = fVar13 + fVar14;
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_88) {
          pfVar11 = (float *)CONCAT44(uStack_9c,local_a0);
        }
        (*pcVar3)(pfVar11);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
      }
      FUN_1448173f8(local_a8);
      if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))();
        }
      }
    }
    FUN_14035e754(param_1);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e0002 FUN_1413e0002 body=106 status=ok
// SIG undefined FUN_1413e0002(void)

void FUN_1413e0002(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x70) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_140115c12(param_1 + 0x80,0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413e006c FUN_1413e006c body=333 status=ok
// SIG undefined FUN_1413e006c(void)

void FUN_1413e006c(longlong param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
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
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    if (DAT_14cb94538 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148a18249;
      local_60 = FUN_14657713c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)FUN_144718840(param_1,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      local_80 = CONCAT31(local_80._1_3_,param_5);
      local_88 = CONCAT31(local_88._1_3_,param_4);
      FUN_1413e01ba(uVar2,param_2,param_3,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e01ba FUN_1413e01ba body=747 status=ok
// SIG undefined FUN_1413e01ba(void)

void FUN_1413e01ba(longlong param_1,uint param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  undefined7 uVar9;
  byte bVar10;
  undefined8 unaff_RBP;
  undefined7 uVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  char local_81;
  undefined1 local_80 [8];
  uint local_78;
  longlong local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = param_3;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xa8) <= (int)param_2)) goto LAB_1413e0317;
  uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (param_5 == '\0') {
    lVar12 = *(longlong *)(param_1 + 0xa0);
    lVar13 = (ulonglong)param_2 * 0x170;
    bVar3 = *(byte *)(param_1 + 400);
    pbVar14 = (byte *)(lVar12 + lVar13 + 0x148);
    bVar4 = *pbVar14;
    if (param_4 == '\0') {
      local_81 = param_4;
      FUN_1400bc8c2(pbVar14,&local_50);
    }
    else {
      local_81 = param_4;
      FUN_1400bc96c();
    }
    bVar10 = bVar3 | *pbVar14;
    if (((bVar4 | bVar3) == bVar10) || (lVar12 = lVar12 + lVar13, *(longlong *)(lVar12 + 0x20) == 0)
       ) goto LAB_1413e0317;
    if (param_6 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    uVar7 = FUN_141262f1a();
    plVar8 = (longlong *)FUN_144718840(uVar5,uVar7);
    cVar6 = local_81;
    if (plVar8 == (longlong *)0x0) {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      local_98 = 0;
      (**(code **)(*plVar8 + 200))
                (plVar8,&local_68,*(undefined8 *)(lVar12 + 0x20),
                 CONCAT71(uVar9,local_81) & 0xffffffff);
      if (local_68 != 0 && cVar6 == '\x01') {
        local_78 = param_2;
        local_70 = param_1;
        FUN_143ec2e74(local_68 + 0x18,local_80,*(undefined8 *)(param_1 + 0x150));
        goto LAB_1413e048d;
      }
    }
    FUN_140e17250(*(undefined8 *)(lVar12 + 0x20),CONCAT71(uVar11,bVar10) & 0xffffffff);
  }
  else {
    if ((*(longlong *)(param_1 + 0x150) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x150) + 0x178) != '\x03')) goto LAB_1413e0317;
    lVar12 = *(longlong *)(param_1 + 0xa0);
    lVar13 = (ulonglong)param_2 * 0x170;
    bVar3 = *(byte *)(param_1 + 0x168);
    pbVar14 = (byte *)(lVar12 + lVar13 + 0x120);
    bVar4 = *pbVar14;
    if (param_4 == '\0') {
      local_81 = param_4;
      FUN_1400bc8c2(pbVar14,&local_50);
    }
    else {
      local_81 = param_4;
      FUN_1400bc96c();
    }
    bVar10 = bVar3 | *pbVar14;
    if (((bVar4 | bVar3) == bVar10) || (lVar12 = lVar12 + lVar13, *(longlong *)(lVar12 + 0x20) == 0)
       ) goto LAB_1413e0317;
    if (param_6 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    uVar7 = FUN_141262f1a();
    plVar8 = (longlong *)FUN_144718840(uVar5,uVar7);
    cVar6 = local_81;
    if (plVar8 == (longlong *)0x0) {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      local_98 = 1;
      (**(code **)(*plVar8 + 200))
                (plVar8,&local_68,*(undefined8 *)(lVar12 + 0x20),
                 CONCAT71(uVar9,local_81) & 0xffffffff);
      if (local_68 != 0 && cVar6 == '\x01') {
        local_78 = param_2;
        local_70 = param_1;
        FUN_143ec2ca4(local_68 + 0x18,local_80,*(undefined8 *)(param_1 + 0x150));
        goto LAB_1413e048d;
      }
    }
    (**(code **)(**(longlong **)(lVar12 + 0x20) + 0x330))
              (*(longlong **)(lVar12 + 0x20),CONCAT71(uVar11,bVar10) & 0xffffffff);
  }
LAB_1413e048d:
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1413e0317:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e04dc FUN_1413e04dc body=678 status=ok
// SIG undefined FUN_1413e04dc(void)

longlong FUN_1413e04dc(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [44];
  int local_8c;
  uint local_88;
  uint uStack_84;
  undefined8 uStack_80;
  int local_78 [2];
  uint *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  uStack_84 = 0;
  if (*param_3 == 0) {
    lVar8 = 0;
  }
  else {
    uVar4 = *(uint *)(*param_3 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar6 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar6 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar6 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar5;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar6 = uVar5;
      }
    }
    lVar8 = *param_3;
    local_88 = uVar4;
    uStack_84 = uVar6;
  }
  uVar6 = uStack_84;
  uVar4 = local_88;
  uVar2 = *param_4;
  uStack_80 = uVar2;
  FUN_14027461a(param_1 + 200,param_2,lVar8);
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = uVar6 >> 0xd ^ uVar4 - uVar6;
  uVar5 = uVar4 << 8 ^ (-0x61c88647 - uVar6) - uVar4;
  uVar6 = uVar5 >> 0xd ^ (uVar6 - uVar4) - uVar5;
  uVar4 = uVar6 >> 0xc ^ (uVar4 - uVar5) - uVar6;
  uVar7 = uVar4 << 0x10 ^ (uVar5 - uVar6) - uVar4;
  uVar6 = uVar7 >> 5 ^ (uVar6 - uVar4) - uVar7;
  uVar5 = uVar6 >> 3 ^ (uVar4 - uVar7) - uVar6;
  uVar4 = uVar5 << 10 ^ (uVar7 - uVar6) - uVar5;
  uVar6 = uVar4 >> 0xf ^ uVar6 - (uVar5 + uVar4);
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  iVar3 = FUN_140bf3c50(plVar1,(uVar6 >> 2) + 0x9e3779b9 +
                               ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4) + uVar6 * 0x40 ^
                               uVar6,&local_88);
  if (((iVar3 == -1) || (lVar8 = (longlong)iVar3 * 0x1c + *plVar1, lVar8 == 0)) ||
     (iVar3 = *(int *)(lVar8 + 0x10), iVar3 == -1)) {
    local_68._0_4_ = local_88;
    local_68._4_4_ = uStack_84;
    uStack_60._0_4_ = (uint)uStack_80;
    uStack_60._4_4_ = uStack_80._4_4_;
    FUN_14594deb8(param_1 + 0x68,local_78);
    *local_70 = (uint)local_68;
    local_70[1] = local_68._4_4_;
    local_70[2] = (uint)uStack_60;
    local_70[3] = uStack_60._4_4_;
    *(undefined1 *)(local_70 + 10) = 0;
    local_70[6] = 0;
    local_70[7] = 0;
    *(undefined1 *)(local_70 + 0xc) = 0;
    uStack_60 = &local_8c;
    local_8c = local_78[0];
    local_68 = &local_88;
    FUN_140bf3cbe(plVar1,local_78,&local_68,0);
    iVar3 = local_8c;
  }
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(int *)(param_2 + 8) = iVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413e0784 FUN_1413e0784 body=1 status=ok
// SIG undefined FUN_1413e0784(void)

void FUN_1413e0784(void)

{
  return;
}



// FUNCTION 1413e0786 FUN_1413e0786 body=797 status=ok
// SIG undefined FUN_1413e0786(void)

void FUN_1413e0786(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1413e0aa4(CONCAT44(uStack_1c,uStack_20),local_24);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e0aa4 FUN_1413e0aa4 body=67 status=ok
// SIG undefined FUN_1413e0aa4(void)

undefined8 FUN_1413e0aa4(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x180))(), lVar1 != 0)) &&
     (lVar1 = FUN_140115352(lVar1), lVar1 != 0)) {
    uVar2 = FUN_1406ee510(*(undefined8 *)(lVar1 + 0x48),param_2);
    return CONCAT71((int7)((uVar2 & 0xfffffffffffffffd) >> 8),
                    (char)(uVar2 & 0xfffffffffffffffd) == '\x01');
  }
  return 0;
}



// FUNCTION 1413e0af0 FUN_1413e0af0 body=547 status=ok
// SIG undefined FUN_1413e0af0(void)

undefined8 * FUN_1413e0af0(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a43d710;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  param_1[0x1d] = 0x3ff0000000000000;
  param_1[0x1e] = 0x3ff3333340000000;
  dVar2 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = dVar2;
  param_1[0x21] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff7fffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x38] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  param_1[0x36] = DAT_14c8464e0;
  param_1[0x37] = dVar2;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff7fffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0x3ff0000000000000;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x3ff0000000000000;
  param_1[0x47] = 0x3ff0000000000000;
  param_1[0x48] = 0x3ff0000000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  dVar2 = DAT_14c8462e8 * DAT_14c8462e8 +
          DAT_14c8462d8 * DAT_14c8462d8 + DAT_14c8462e0 * DAT_14c8462e0;
  if (((dVar2 != 1.0) ||
      (dVar3 = DAT_14c8462e0, dVar4 = DAT_14c8462e8, dVar1 = DAT_14c8462d8, NAN(dVar2))) &&
     (dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464f0, dVar1 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar2)) {
    dVar1 = 1.0 / SQRT(dVar2);
    dVar4 = DAT_14c8462e8 * dVar1;
    dVar3 = DAT_14c8462e0 * dVar1;
    dVar1 = DAT_14c8462d8 * dVar1;
  }
  param_1[0x4c] = dVar1;
  param_1[0x4d] = dVar3;
  param_1[0x4e] = dVar4;
  *(undefined2 *)(param_1 + 0x50) = 0x101;
  *(byte *)((longlong)param_1 + 0x282) = *(byte *)((longlong)param_1 + 0x282) & 0xf0 | 8;
  return param_1;
}



// FUNCTION 1413e0d14 FUN_1413e0d14 body=59 status=ok
// SIG undefined FUN_1413e0d14(void)

void FUN_1413e0d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f79ee0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1413e0d50 FUN_1413e0d50 body=602 status=ok
// SIG undefined FUN_1413e0d50(void)

void FUN_1413e0d50(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  sVar3 = (short)*(undefined4 *)(param_1 + 0x20) + 1;
  *(short *)(param_1 + 0x20) = sVar3;
  *(undefined4 *)(param_1 + 0x2c + (longlong)sVar3 * 0xc) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x24 + (longlong)sVar3 * 0xc) = *(undefined8 *)(param_2 + 0x14);
  sVar3 = *(short *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30 + (longlong)sVar3 * 0xc) = 0;
  *(undefined8 *)(param_1 + 0x34 + (longlong)sVar3 * 0xc) = 0;
  iVar5 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar5 + 1U) {
    FUN_1413e0fac(param_1 + 0x130,iVar5);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x128);
  *(undefined8 **)(*(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8) = puVar7;
  if ((((puVar7 == (undefined8 *)0x0) || (pbVar1 = (byte *)*puVar7, pbVar1 == (byte *)0x0)) ||
      ((*pbVar1 & 0x6b) != 3)) ||
     (*(int *)(param_1 + 0x24 + (longlong)*(short *)(param_1 + 0x20) * 0xc) == 0))
  goto LAB_1413e0e8c;
  lVar2 = *(longlong *)(pbVar1 + 8);
  local_60 = *(undefined8 *)(param_2 + 0x14);
  local_58 = *(undefined4 *)(param_2 + 0x1c);
  FUN_1448075d0(local_50);
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    lVar4 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x60);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x68) - 1U & local_50[0]) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar5 * 0x40) == local_50[0]) {
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          local_70 = *(undefined8 *)(param_2 + 0x14);
          local_68 = *(undefined4 *)(param_2 + 0x1c);
          FUN_1448075d0(local_50);
          pbVar1 = (byte *)*puVar7;
          if (pbVar1 == (byte *)0x0) goto LAB_1413e0f43;
          if ((*pbVar1 & 2) == 0) {
            plVar6 = &DAT_14c9a1288;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
          }
          if ((int)plVar6[2] == *(int *)((longlong)plVar6 + 0x3c)) goto LAB_1413e0f43;
          plVar8 = plVar6 + 8;
          if ((longlong *)plVar6[9] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar6[9];
          }
          iVar5 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_50[0]) * 4);
          if (iVar5 == -1) goto LAB_1413e0f43;
          goto LAB_1413e0f28;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x40 + *(longlong *)(lVar2 + 0x18) + 0x38);
      } while (iVar5 != -1);
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  puVar7 = (undefined8 *)0x0;
  goto LAB_1413e0e85;
  while (iVar5 = *(int *)(lVar2 + 0x38), iVar5 != -1) {
LAB_1413e0f28:
    lVar2 = *plVar6 + (longlong)iVar5 * 0x40;
    if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_50[0]) {
      if (((lVar2 != 0) && (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
         (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0)))) goto LAB_1413e0f46;
      break;
    }
  }
LAB_1413e0f43:
  puVar7 = &DAT_14c9a1308;
LAB_1413e0f46:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1413e0e85:
  *(undefined8 **)(param_1 + 0x128) = puVar7;
LAB_1413e0e8c:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e0fac FUN_1413e0fac body=353 status=ok
// SIG undefined FUN_1413e0fac(void)

void FUN_1413e0fac(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1413e1031;
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
LAB_1413e1031:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1413e110e FUN_1413e110e body=1885 status=ok
// SIG undefined FUN_1413e110e(void)

void FUN_1413e110e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  iVar4 = local_24;
  uStack_30 = 0;
  uStack_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined7)uVar2;
      uStack_29 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_31 = (undefined1)uVar2;
      uStack_30 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_31);
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  FUN_1413e186c(CONCAT44(uStack_1c,uStack_20),iVar4 != 0,CONCAT17(uStack_29,uStack_30),local_31);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e186c FUN_1413e186c body=211 status=ok
// SIG undefined FUN_1413e186c(void)

void FUN_1413e186c(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_50 = param_3;
    local_48 = param_4;
    FUN_141143592(0,&local_68,0);
    lVar2 = local_68;
    lVar4 = (longlong)(int)uStack_60;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_50), cVar3 != '\0'))
        {
          (**(code **)(*plVar1 + 0x650))(plVar1,param_2,param_5);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e1940 FUN_1413e1940 body=15 status=ok
// SIG undefined FUN_1413e1940(void)

void FUN_1413e1940(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_14110d22e(param_1 + 0x30,2);
  return;
}



// FUNCTION 1413e1950 FUN_1413e1950 body=112 status=ok
// SIG undefined FUN_1413e1950(void)

int FUN_1413e1950(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 1413e19c0 FUN_1413e19c0 body=455 status=ok
// SIG undefined FUN_1413e19c0(void)

void FUN_1413e19c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1448eb174(lVar2,0x10,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e1b88 FUN_1413e1b88 body=53 status=ok
// SIG undefined FUN_1413e1b88(void)

void FUN_1413e1b88(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x300))(param_2,param_1);
  (**(code **)(*param_2 + 0x308))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001413e1bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2d0))(param_2);
  return;
}



// FUNCTION 1413e1bbe FUN_1413e1bbe body=1227 status=ok
// SIG undefined FUN_1413e1bbe(void)

void FUN_1413e1bbe(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
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
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = *(longlong *)(param_1 + 0x78);
  if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x48) != 0)) {
    plVar10 = (longlong *)(*(longlong *)(lVar9 + 0x40) + 8);
    lVar9 = (longlong)*(int *)(lVar9 + 0x48) * 0x28;
    do {
      if ((((*(int *)((longlong)plVar10 + -4) == 0) ||
           (uVar1 = *(uint *)(plVar10 + -1), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)((longlong)plVar10 + -4))) ||
          (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
           (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))))) {
        if (*plVar10 != 0) {
          plVar7 = (longlong *)FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar7 == (longlong *)0x0) || (cVar3 == '\0')) {
            if (plVar7 != (longlong *)0x0) {
              uVar1 = *(uint *)((longlong)plVar7 + 0xc);
              *(uint *)(plVar10 + -1) = uVar1;
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
                iVar8 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar4 = *(int *)(lVar5 + 0x10);
                bVar11 = iVar4 == 0;
                if (bVar11) {
                  *(int *)(lVar5 + 0x10) = iVar8;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  iVar4 = iVar8;
                }
              }
              goto LAB_1413e1e22;
            }
            plVar10[-1] = 0;
          }
          else {
            uVar1 = *(uint *)((longlong)plVar7 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
              *(uint *)(plVar10 + -1) = uVar1;
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
                iVar8 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar4 = *(int *)(lVar5 + 0x10);
                bVar11 = iVar4 == 0;
                if (bVar11) {
                  *(int *)(lVar5 + 0x10) = iVar8;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  iVar4 = iVar8;
                }
              }
LAB_1413e1e22:
              *(int *)((longlong)plVar10 + -4) = iVar4;
            }
            if ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0) goto LAB_1413e1c81;
          }
        }
      }
      else {
LAB_1413e1c81:
        if (DAT_14c949118 == 0) {
          local_60 = FUN_140631fbe;
          lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar5;
          FUN_1446f470e(local_58,L"Class",1);
          local_80 = &local_60;
          local_88 = &LAB_146891e90;
          local_90 = (code *)&LAB_146273097;
          local_a0 = L"Engine";
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
          local_a8 = 0x20;
          local_b0 = 0x10000000;
          local_b8._0_4_ = 8;
          FUN_14574b4b2(lVar5);
          DAT_14c949118 = lVar5;
          if (DAT_14c951858 == 0) {
            local_50 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_80 = &local_50;
            local_88 = &LAB_1468c5283;
            local_90 = FUN_142809da0;
            local_98 = L"Engine";
            local_a0 = (wchar_t *)0x400000000;
            local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
            local_b0 = 8;
            local_b8._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar2 = DAT_14c951858;
          lVar5 = DAT_14c949118;
          uVar6 = FUN_1449e2fb2();
          local_b8 = L"Class";
          FUN_14574b446(uVar6,lVar5,lVar2,L"/Script/CoreUObject");
        }
        if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
              DAT_14c949118 + 0x30)) && (lVar5 = FUN_145a5570c(), lVar5 != 0)) &&
           ((*(int *)(lVar5 + 0x38) <= (int)plVar7[7] &&
            (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)))) {
          lVar5 = plVar7[0x22];
          if (lVar5 == 0) {
            (**(code **)(*plVar7 + 1000))(plVar7);
            lVar5 = plVar7[0x22];
            if (lVar5 == 0) goto LAB_1413e1e34;
          }
          uVar6 = *(undefined8 *)(lVar5 + 0x28);
          *(longlong *)(lVar5 + 0x28) = param_1;
          FUN_14876c0e6(lVar5,param_1);
          *(undefined8 *)(lVar5 + 0x28) = uVar6;
        }
      }
LAB_1413e1e34:
      plVar10 = plVar10 + 5;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e208a FUN_1413e208a body=2084 status=ok
// SIG undefined FUN_1413e208a(void)

void FUN_1413e208a(longlong *param_1)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_68;
  code *local_60 [3];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar9 = param_1[4];
  }
  else {
    lVar9 = 0;
  }
  (**(code **)(*param_1 + 0x310))(param_1);
  local_68 = param_1[0x16];
  FUN_1446dcdd4(local_60);
  if (DAT_14cb85168 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_144837462();
  }
  param_1[0xf] = lVar6;
  if (local_48 != 0) {
    FUN_1400020a8();
    lVar6 = param_1[0xf];
  }
  if (lVar6 == 0) goto LAB_1413e2644;
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  *(float *)((longlong)param_1 + 0x314) = (float)*(double *)(lVar6 + 0x6d0);
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  lVar6 = param_1[0xf];
  if ((*(byte *)(lVar6 + 0x16c) & 1) == 0) {
    fVar13 = *(float *)(lVar6 + 0x158);
  }
  else {
    fVar13 = *(float *)(lVar6 + 0x15c);
    if (fVar13 <= 1.0) {
      fVar13 = 1.0;
    }
  }
  *(float *)((longlong)param_1 + 0xa4) = fVar13;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  if (*(int *)((longlong)param_1 + 0x374) < 0) {
    *(undefined4 *)(param_1 + 0x6e) = 0;
    FUN_140373bdc(param_1 + 0x6d);
  }
  else {
    *(undefined4 *)(param_1 + 0x6e) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x954) < 0) {
    *(undefined4 *)(param_1 + 0x12a) = 0;
    FUN_1488e4474(param_1 + 0x109);
  }
  else {
    *(undefined4 *)(param_1 + 0x12a) = 0;
  }
  param_1[0x6c] = 0;
  bVar10 = *(byte *)(param_1 + 0x62) & 0xfe;
  *(byte *)(param_1 + 0x62) = bVar10;
  lVar6 = param_1[0xf];
  *(bool *)((longlong)param_1 + 0x312) = (~*(byte *)(lVar6 + 0x16c) & 3) == 0;
  *(undefined1 *)((longlong)param_1 + 0x313) = 0;
  bVar2 = *(byte *)((longlong)param_1 + 0x311);
  *(byte *)((longlong)param_1 + 0x311) = bVar2 & 0xfd;
  *(byte *)((longlong)param_1 + 0x311) = bVar2 & 0xe1 | *(byte *)(lVar6 + 0x16c) >> 1 & 4;
  memset(param_1 + 0xb2,0,0x100);
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0xffffffff;
  param_1[0xd6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (*(int *)((longlong)param_1 + 0x6f4) < 0) {
    *(undefined4 *)(param_1 + 0xde) = 0;
    FUN_1488e455c(param_1 + 0xdd);
    bVar10 = *(byte *)(param_1 + 0x62);
    lVar6 = param_1[0xf];
  }
  else {
    *(undefined4 *)(param_1 + 0xde) = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x9a] = 0;
  *(byte *)(param_1 + 0x62) = bVar10 & 0xb3 | 0x40;
  *(undefined2 *)(param_1 + 0x12d) = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0;
  uVar4 = *(ushort *)((longlong)param_1 + 0x19e);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x144) & 4) != 0)) {
    uVar4 = uVar4 & ~*(ushort *)(lVar6 + 0x146);
  }
  if (uVar4 != 0) {
    *(ushort *)(param_1 + 0x12d) = uVar4;
  }
  local_68 = param_1[0x38];
  FUN_1446dcdd4(local_60);
  if (DAT_14cb77da0 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_144837462(DAT_14cb77da0,local_60);
  }
  param_1[0x50] = lVar6;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar7 = param_1 + 0x3b;
  if ((longlong *)param_1[0x41] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0x41];
  }
  FUN_1400709d4(param_1 + 0x51,plVar7,(int)param_1[0x42],*(undefined4 *)((longlong)param_1 + 0x2c4))
  ;
  if ((*(byte *)((longlong)param_1 + 0x2ea) & 2) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)((longlong)param_1 + 0x31c);
  }
  bVar2 = *(byte *)(param_1 + 0x62) & 0xfd;
  *(byte *)(param_1 + 0x62) = bVar2;
  if (0.0 < *(float *)(param_1 + 0x46)) {
LAB_1413e23c5:
    *(byte *)(param_1 + 0x62) = bVar2 | 2;
  }
  else {
    lVar6 = FUN_14082ce84(param_1[0xf] + 0x178);
    if ((lVar6 != 0) &&
       (lVar6 = FUN_14082ce84(param_1[0xf] + 0x178), *(longlong *)(lVar6 + 0x348) != 0)) {
      bVar2 = *(byte *)(param_1 + 0x62);
      goto LAB_1413e23c5;
    }
  }
  if ((*(ushort *)((longlong)param_1 + 0x2ea) & 0x20) != 0) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar6 = param_1[4];
    }
    else {
      lVar6 = 0;
    }
    if (*(char *)(lVar6 + 0x178) != '\x03') {
      *(ushort *)((longlong)param_1 + 0x2ea) = *(ushort *)((longlong)param_1 + 0x2ea) & 0xffdf;
    }
  }
  FUN_1412f5858(param_1);
  FUN_143dbfcf8(param_1 + 0x19);
  if ((*(byte *)((longlong)param_1 + 0x2ea) & 2) != 0) {
    FUN_143dbfcf8(param_1 + 0x25);
    FUN_1404d6550(param_1 + 0x25);
    param_1[0x9a] = (longlong)local_60[0];
  }
  if ((short)param_1[0x12d] != 0) {
    (**(code **)(*param_1 + 0x410))(param_1);
  }
  uVar11 = (ulonglong)*(int *)(lVar9 + 0x398);
  if (uVar11 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong **)(*(longlong *)(lVar9 + 0x390) + lVar6) == param_1) goto LAB_1413e24de;
      lVar6 = lVar6 + 8;
    } while (uVar11 * 8 - lVar6 != 0);
  }
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
    uVar11 = (ulonglong)*(uint *)(lVar9 + 0x398);
  }
  uVar5 = (int)uVar11 + 1;
  *(uint *)(lVar9 + 0x398) = uVar5;
  if (*(uint *)(lVar9 + 0x39c) < uVar5) {
    FUN_1407c430e((longlong *)(lVar9 + 0x390),uVar11 & 0xffffffff);
  }
  *(longlong **)(*(longlong *)(lVar9 + 0x390) + (longlong)(int)uVar11 * 8) = param_1;
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_1407c3d8a(lVar9,param_1,0);
LAB_1413e24de:
  *(undefined2 *)((longlong)param_1 + 0x344) = 6;
  *(undefined1 *)((longlong)param_1 + 0x346) = 0;
  if (((*(byte *)(param_1[0xf] + 0x16c) & 0x10) != 0) &&
     (plVar7 = (longlong *)param_1[0x31], plVar7 != (longlong *)0x0)) {
    if (DAT_14cb223d8 == 0) {
      local_60[0] = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_147f29feb;
      local_90 = FUN_1464384fe;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      local_80 = local_60;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb223d8);
    if (plVar7 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_60[0] = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_1427b09ee;
        local_88 = &LAB_147f29feb;
        local_90 = FUN_1464384fe;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10004001;
        local_b0 = 8;
        local_b8 = 0x28;
        local_80 = local_60;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb223d8);
      if (((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) &&
         (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 != 0)) {
        uVar1 = *(undefined2 *)(lVar9 + 0x28);
        lVar6 = *(longlong *)(lVar9 + 0x30);
        param_1[0x69] = *(longlong *)(lVar9 + 0x20);
        *(undefined2 *)(param_1 + 0x6a) = uVar1;
        param_1[0x6b] = lVar6;
        cVar3 = FUN_140e8181a(lVar9,(longlong)param_1 + 0x344,local_60);
        if (cVar3 != '\0') {
          bVar2 = *(byte *)(param_1[0xf] + 0x16c) >> 6 & 1;
          if ((*(byte *)(param_1[0xf] + 0x16c) & 0x20) == 0) {
            bVar2 = *(byte *)(lVar9 + 0x52);
          }
          if (bVar2 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x345) = 1;
            *(char *)((longlong)param_1 + 0x346) =
                 (char)(1 << (*(byte *)((longlong)param_1 + 0x344) & 0x1f));
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe6) = 0;
  if (*(int *)((longlong)param_1 + 0x734) < 0) {
    FUN_14480809c(param_1 + 0xe5,0);
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*param_1 + 0x358))(param_1,param_1[0x31],param_1 + 0xe5);
  }
  lVar9 = param_1[8];
  if ((longlong)(int)lVar9 != 0) {
    lVar6 = param_1[7];
    lVar12 = 0;
    do {
      cVar3 = *(char *)(lVar6 + 0xc + lVar12);
      if (cVar3 == '\x02') {
        FUN_1488df66c(param_1,*(undefined8 *)(lVar6 + lVar12),*(undefined4 *)(lVar6 + 8 + lVar12));
      }
      else if (cVar3 == '\x01') {
        FUN_1488df736(param_1,*(undefined8 *)(lVar6 + lVar12),*(undefined4 *)(lVar6 + 8 + lVar12));
      }
      else if (cVar3 == '\0') {
        FUN_1488df5a2(param_1,*(undefined8 *)(lVar6 + lVar12),*(undefined1 *)(lVar6 + 8 + lVar12));
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar9 * 0x10 != lVar12);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_1488e458c(param_1 + 7);
  }
LAB_1413e2644:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e28b0 FUN_1413e28b0 body=252 status=ok
// SIG undefined FUN_1413e28b0(void)

undefined8 * FUN_1413e28b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 1;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14aabe700;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar1 = FUN_140c61bfa();
  FUN_1413e29ae(uVar1,local_20,param_1,FUN_1411b9c74);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_14020fad6(param_1 + 0x1d,L"StreamableManager");
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e29ae FUN_1413e29ae body=604 status=ok
// SIG undefined FUN_1413e29ae(void)

undefined8 * FUN_1413e29ae(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  *local_50 = (longlong)&PTR_LAB_149e020b0;
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
  *local_50 = (longlong)&PTR_FUN_14aac2100;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_1413e2b0f;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1413e2af9;
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
LAB_1413e2af9:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1413e2b0f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e2c0c FUN_1413e2c0c body=252 status=ok
// SIG undefined FUN_1413e2c0c(void)

void FUN_1413e2c0c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_29);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    iVar1 = *(int *)(lVar2 + 0x40);
    *(uint *)(lVar2 + 0x40) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x44) < iVar1 + 1U) {
      FUN_14594fe2e((longlong *)(lVar2 + 0x38),iVar1);
    }
    *(longlong **)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar1 * 8) = param_1;
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e2d1a FUN_1413e2d1a body=109 status=ok
// SIG undefined FUN_1413e2d1a(void)

undefined8 FUN_1413e2d1a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  uVar1 = DAT_14cb84f20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_1);
  uVar1 = FUN_140dd1368(uVar1,local_40,0);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e2d88 FUN_1413e2d88 body=69 status=ok
// SIG undefined FUN_1413e2d88(void)

ulonglong FUN_1413e2d88(longlong *param_1,int param_2,int param_3,int param_4)

{
  undefined8 in_RAX;
  bool bVar1;
  
  if ((int)param_1[9] == 0) {
    bVar1 = SBORROW4(param_2,param_3);
    param_4 = param_2 - param_3;
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39474);
    in_RAX = FUN_1448332aa(param_1,&DAT_149e39474);
    bVar1 = SBORROW4((int)in_RAX,param_4);
    param_4 = (int)in_RAX - param_4;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 == param_4 < 0) ^ 1;
}



// FUNCTION 1413e2dcd FUN_1413e2dcd body=80 status=ok
// SIG undefined FUN_1413e2dcd(void)

void FUN_1413e2dcd(void)

{
  int in_stack_00000038;
  
  if (in_stack_00000038 == 0) {
    FUN_1413e2e1d();
  }
  else {
    if (in_stack_00000038 == 1) {
      FUN_1414249a6();
      return;
    }
    if (in_stack_00000038 == 2) {
      FUN_1414244d0();
    }
  }
  return;
}



// FUNCTION 1413e2e1d FUN_1413e2e1d body=1237 status=ok
// SIG undefined FUN_1413e2e1d(void)

void FUN_1413e2e1d(ulonglong *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar13 = FUN_1415e0fb6();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_1415e0fb6();
  lVar10 = local_58;
  if (local_58 != 0) {
    uVar14 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_141788ec8(lVar17,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar17,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar17,lVar10 + 0xec,&local_58,0);
  puVar20 = (undefined2 *)(lVar10 + 0xf8);
  FUN_144a86a8e(lVar17,puVar20,local_70);
  iVar11 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar12 = iVar11 + *(int *)(lVar17 + 0x40);
  local_70 = uVar14;
  if (iVar12 != 0 && SCARRY4(iVar11,*(int *)(lVar17 + 0x40)) == iVar12 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_64 = param_4;
    local_60 = puVar20;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar4 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar5 = *(undefined4 *)(lVar17 + 0x30);
    uVar8 = *(undefined8 *)(lVar17 + 0x18);
    uVar6 = *(undefined4 *)(lVar17 + 0x20);
    uVar9 = *(undefined8 *)(lVar17 + 8);
    uVar7 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_70;
    puVar16[3] = uVar9;
    *(undefined4 *)(puVar16 + 4) = uVar7;
    puVar16[5] = uVar8;
    *(undefined4 *)(puVar16 + 6) = uVar6;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar5;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar4;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar20 = local_60;
    param_4 = local_64;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = param_3 + 7U >> 3;
  *(uint *)((longlong)puVar16 + 0x14) = param_4 + 7U >> 3;
  *(uint *)(puVar16 + 3) = param_5;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar21 = (uint)param_1[0x13];
    if (0 < (int)uVar21) {
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar21 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar10 + 0xfa) != '\0') && (*(char *)(lVar10 + 0xfb) != '\x06')) {
      uVar3 = *puVar20;
      *(uint *)(param_1 + 0x13) = uVar21 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar21 + 1) {
        FUN_1447477d8(puVar2,uVar21);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar21 * 4) = uVar3;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar21 * 4) = 1;
      uVar21 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar21) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar21 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar21 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_70;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar21;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e32f3 FUN_1413e32f3 body=4150 status=ok
// SIG undefined FUN_1413e32f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413e32f3(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar3 = DAT_14caa8580;
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_40,L"AI.Scripted.Move",1);
  FUN_1413e432a(lVar3,&local_28,local_40,local_38);
  DAT_14cb24268 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_48,L"AI.Scripted.Look",1);
  FUN_1413e432a(lVar3,&local_28,local_48,local_38);
  DAT_14cb24278 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_50,L"AI.Scripted.Wait",1);
  FUN_1413e432a(lVar3,&local_28,local_50,local_38);
  _DAT_14cb24260 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_58,L"AI.Scripted.Give",1);
  FUN_1413e432a(lVar3,&local_28,local_58,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_60,L"AI.Scripted.Take",1);
  FUN_1413e432a(lVar3,&local_28,local_60,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_68,L"AI.Scripted.Perch",1);
  FUN_1413e432a(lVar3,&local_28,local_68,local_38);
  DAT_14cb24290 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_70,L"AI.Scripted.Cover",1);
  FUN_1413e432a(lVar3,&local_28,local_70,local_38);
  DAT_14cb24288 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_78,L"AI.Scripted.Follow",1);
  FUN_1413e432a(lVar3,&local_28,local_78,local_38);
  _DAT_14cb23f30 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_80,L"AI.Scripted.Despawn",1);
  FUN_1413e432a(lVar3,&local_28,local_80,local_38);
  _DAT_14cb24298 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_88,L"AI.Scripted.WeaponAttack",1);
  FUN_1413e432a(lVar3,&local_28,local_88,local_38);
  _DAT_14cb241d8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_90,L"AI.Scripted.MeleeAttack",1);
  FUN_1413e432a(lVar3,&local_28,local_90,local_38);
  _DAT_14cb241c8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_98,L"AI.Scripted.ReviveAlly",1);
  FUN_1413e432a(lVar3,&local_28,local_98,local_38);
  _DAT_14cb23f38 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_a0,L"AI.Scripted.Teleport",1);
  FUN_1413e432a(lVar3,&local_28,local_a0,local_38);
  DAT_14cb23f40 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_a8,L"AI.Scripted.MoveAndWait",1);
  FUN_1413e432a(lVar3,&local_28,local_a8,local_38);
  _DAT_14cb241d0 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_b0,L"AI.Scripted.CoverActions.Combat",1);
  FUN_1413e432a(lVar3,&local_28,local_b0,local_38);
  DAT_14cb241b0 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_b8,L"AI.Scripted.CoverActions.Fidget",1);
  FUN_1413e432a(lVar3,&local_28,local_b8,local_38);
  _DAT_14cb241b8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_c0,L"AI.Scripted.CoverActions.Idle",1);
  FUN_1413e432a(lVar3,&local_28,local_c0,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_c8,L"AI.Stay.Absent",1);
  FUN_1413e432a(lVar3,&local_28,local_c8,local_38);
  DAT_14cb241f8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_d0,L"AI.Stay.Idle",1);
  FUN_1413e432a(lVar3,&local_28,local_d0,local_38);
  DAT_14cb241e8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_d8,L"AI.Stay.Patrol",1);
  FUN_1413e432a(lVar3,&local_28,local_d8,local_38);
  DAT_14cb24200 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_e0,L"AI.Stay.LookAt",1);
  FUN_1413e432a(lVar3,&local_28,local_e0,local_38);
  DAT_14cb24228 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_e8,L"AI.Stay.Perch",1);
  FUN_1413e432a(lVar3,&local_28,local_e8,local_38);
  DAT_14cb24208 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_f0,L"AI.Stay.Cover",1);
  FUN_1413e432a(lVar3,&local_28,local_f0,local_38);
  DAT_14cb24210 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_f8,L"AI.Stay.PlaySequence",1);
  FUN_1413e432a(lVar3,&local_28,local_f8,local_38);
  DAT_14cb24218 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_100,L"AI.Stay.PlayTrick",1);
  FUN_1413e432a(lVar3,&local_28,local_100,local_38);
  DAT_14cb24220 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_108,L"AI.Stay.DirectFollow",1);
  FUN_1413e432a(lVar3,&local_28,local_108,local_38);
  DAT_14cb24230 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_110,L"AI.Travel.Follow",1);
  FUN_1413e432a(lVar3,&local_28,local_110,local_38);
  DAT_14cb24240 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_118,L"AI.Travel.DirectFollow",1);
  FUN_1413e432a(lVar3,&local_28,local_118,local_38);
  DAT_14cb24248 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_120,L"AI.Travel.Lead",1);
  FUN_1413e432a(lVar3,&local_28,local_120,local_38);
  DAT_14cb24238 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_128,L"AI.Travel.Path",1);
  FUN_1413e432a(lVar3,&local_28,local_128,local_38);
  DAT_14cb241f0 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_130,L"AI.Travel.Teleport",1);
  FUN_1413e432a(lVar3,&local_28,local_130,local_38);
  DAT_14cb24258 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_138,L"AI.Travel.Despawn",1);
  FUN_1413e432a(lVar3,&local_28,local_138,local_38);
  DAT_14cb24250 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_140,L"AI.Use.Usable",1);
  FUN_1413e432a(lVar3,&local_28,local_140,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_148,L"AI.Core.Combat",1);
  FUN_1413e432a(lVar3,&local_28,local_148,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_150,L"AI.Core.Patrol",1);
  FUN_1413e432a(lVar3,&local_28,local_150,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_158,L"AI.Core.Taunt",1);
  FUN_1413e432a(lVar3,&local_28,local_158,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_160,L"AI.Core.RestrictedToCombatTerritory",1);
  FUN_1413e432a(lVar3,&local_28,local_160,local_38);
  _DAT_14cb23f48 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = FUN_1413eaf12();
  lVar3 = *(longlong *)(lVar1 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar1);
    lVar3 = *(longlong *)(lVar1 + 0x110);
    if (lVar3 == 0) goto LAB_1413e42d7;
  }
  FUN_1446f470e(local_38,L"AI.Stay.Look");
  lVar1 = lVar3 + 0x80;
  if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x80) + lVar4) == local_38[0]) goto LAB_1413e419c;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x88) * 0x10 != lVar4);
  }
  plVar2 = (longlong *)FUN_147f5a838(lVar1);
  *plVar2 = local_38[0];
  plVar2[1] = DAT_14cb24228;
LAB_1413e419c:
  FUN_1446f470e(local_38,L"AI.Stay.LookAtPlayer");
  if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x80) + lVar4) == local_38[0]) goto LAB_1413e4205;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x88) * 0x10 != lVar4);
  }
  plVar2 = (longlong *)FUN_147f5a838(lVar1);
  *plVar2 = local_38[0];
  plVar2[1] = DAT_14cb24228;
LAB_1413e4205:
  FUN_1446f470e(local_38,L"AI.Use.Perch");
  if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x80) + lVar4) == local_38[0]) goto LAB_1413e426e;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x88) * 0x10 != lVar4);
  }
  plVar2 = (longlong *)FUN_147f5a838(lVar1);
  *plVar2 = local_38[0];
  plVar2[1] = DAT_14cb24290;
LAB_1413e426e:
  FUN_1446f470e(local_38,L"AI.Use.Cover");
  if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x80) + lVar4) == local_38[0]) goto LAB_1413e42d7;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x88) * 0x10 != lVar4);
  }
  plVar2 = (longlong *)FUN_147f5a838(lVar1);
  *plVar2 = local_38[0];
  plVar2[1] = DAT_14cb24288;
LAB_1413e42d7:
  if ((local_20 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e432a FUN_1413e432a body=396 status=ok
// SIG undefined FUN_1413e432a(void)

longlong * FUN_1413e432a(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined **local_60;
  longlong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_3;
  if ((param_3 == 0) || (*(char *)(param_1 + 0x231) != '\0')) {
    *param_2 = 0;
  }
  else {
    *param_2 = param_3;
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      uVar1 = (uint)((ulonglong)param_3 >> 0x10);
      uVar2 = (uint)param_3 & 0xffff;
      lVar4 = param_1 + 0xb0;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0xb8);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0xc0) - 1U &
                               (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar2) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar2 >> 4)) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x78);
        do {
          if (*(longlong *)(lVar4 + (longlong)iVar3 * 0x10) == param_3) goto LAB_1413e4409;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + lVar4 + 8);
        } while (iVar3 != -1);
      }
    }
    FUN_144a13f80((longlong *)(param_1 + 0x78),&local_60,&local_40,0);
LAB_1413e4409:
    local_60 = &PTR_FUN_14a3de8d0;
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_4 + 1);
    lVar4 = (longlong)local_48;
    _Src = (void *)*param_4;
    local_58 = local_40;
    if (lVar4 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar4 * 2);
    }
    FUN_1403dd93c(param_1,&local_60);
    local_60 = &PTR_FUN_14a3de8d0;
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e44b8 FUN_1413e44b8 body=157 status=ok
// SIG undefined FUN_1413e44b8(void)

void FUN_1413e44b8(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_140d60302(param_1 + 0x20);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x28 + (ulonglong)(param_2 != 0) * 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001413e451b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x68))(plVar2,param_1 + 0x70,param_3,param_4);
      return;
    }
  }
  plVar2 = (longlong *)*param_4;
  if (plVar2 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001413e4552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,0xffffffff,param_3);
  return;
}



// FUNCTION 1413e4850 FUN_1413e4850 body=1184 status=ok
// SIG undefined FUN_1413e4850(void)

void FUN_1413e4850(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x230) == 0) goto LAB_1413e499e;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x3a0) = param_2;
  cVar4 = FUN_140843f56(param_1);
  if ((*(char *)(*(longlong *)(param_1 + 0x230) + 0x34) != '\x01') ||
     (*(ulonglong *)(param_1 + 0x3a0) != *(ulonglong *)(param_1 + 0x238))) {
    local_48 = (code *)(CONCAT71(local_48._1_7_,*(undefined1 *)(param_1 + 0x240)) &
                       0xffffffffffffff01);
    local_48._0_2_ = CONCAT11(cVar4,(undefined1)local_48);
    local_40 = *(ulonglong *)(param_1 + 0x3a0);
    FUN_1447cd2ec(param_1 + 0x148);
    FUN_1447f69b6(param_1 + 0x1d8);
  }
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x240) & 1) == 0)) {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_48;
      local_48 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar6 = *(longlong *)(param_1 + 0x238), lVar6 != 0)) {
      uVar5 = FUN_140df74c8();
      lVar6 = FUN_144718840(lVar6,uVar5);
      if (lVar6 != 0) {
        FUN_1458796dc(param_2 + 0x71a8,lVar6);
      }
    }
  }
  if ((cVar4 == '\0') || (lVar6 = *(longlong *)(param_1 + 0x3a0), lVar6 == 0)) goto LAB_1413e499e;
  if (DAT_14cba8288 == 0) {
    local_70 = &local_48;
    local_48 = FUN_141864c34;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1464cee30;
    local_78 = &LAB_148bfac22;
    local_80 = &LAB_140f21842;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    lVar6 = *(longlong *)(param_1 + 0x3a0);
    if (lVar6 == 0) goto LAB_1413e499e;
  }
  if (((DAT_14cba8288 == 0) || (lVar10 = *(longlong *)(lVar6 + 0x10), lVar10 == 0)) ||
     ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cba8288 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
       DAT_14cba8288 + 0x30)))) goto LAB_1413e499e;
  lVar10 = *(longlong *)(param_1 + 0x238);
  local_48 = (code *)0x0;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_1446efa72(&local_48,0,3,0x10);
  pcVar2 = local_48;
  local_40 = CONCAT44(local_40._4_4_,3);
  *(undefined ***)local_48 = &PTR_LAB_14b966570;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_48 + 0x10) = lVar7;
  *(undefined ***)local_48 = &PTR_FUN_14b966500;
  *(undefined8 *)(local_48 + 0x18) = 0;
  iVar8 = 0;
  if (lVar10 != 0) {
    uVar1 = *(uint *)(lVar10 + 0xc);
    *(uint *)(local_48 + 0x18) = uVar1;
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
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar9;
      }
    }
  }
  *(int *)(pcVar2 + 0x1c) = iVar8;
  *(longlong *)(pcVar2 + 0x20) = param_1;
  FUN_14598a1e0(lVar6 + 0x7368,&local_50,&local_48);
  if ((int)local_40 == 0) {
LAB_1413e4af3:
    if (local_48 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = local_40 & 0xffffffff00000000;
    goto LAB_1413e4af3;
  }
  *(undefined8 *)(param_1 + 0x398) = local_50;
LAB_1413e499e:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e4cf2 FUN_1413e4cf2 body=154 status=ok
// SIG undefined FUN_1413e4cf2(void)

int * FUN_1413e4cf2(longlong param_1,int *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [44];
  int local_4c;
  int *local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  local_4c = *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = local_4c + 1;
  local_48 = &local_4c;
  local_40 = param_3;
  FUN_1413e4d8e(param_1 + 0x38,local_34,&local_48,0);
  *param_2 = local_4c;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e4d8e FUN_1413e4d8e body=683 status=ok
// SIG undefined FUN_1413e4d8e(void)

uint * FUN_1413e4d8e(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar15 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar15 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar15) {
      FUN_1447711aa(param_1,uVar15);
    }
    lVar21 = (longlong)(int)uVar15;
    iVar14 = FUN_144a54ea4(param_1 + 2,1);
    plVar16 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar16 = param_1 + 2;
    }
    iVar18 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar18 = iVar14;
    }
    bVar8 = (byte)iVar14 & 0x1f;
    puVar3 = (uint *)((longlong)plVar16 + (longlong)(iVar18 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    uVar15 = *(uint *)(param_1 + 6);
    lVar21 = (longlong)(int)uVar15;
    iVar14 = *(int *)(*param_1 + 4 + lVar21 * 0x20);
    *(int *)(param_1 + 6) = iVar14;
    iVar18 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x20) = 0xffffffff;
    }
  }
  plVar16 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar16 = (longlong *)param_1[4];
  }
  uVar17 = uVar15 + 0x1f;
  if (-1 < (int)uVar15) {
    uVar17 = uVar15;
  }
  puVar3 = (uint *)((longlong)plVar16 + (longlong)((int)uVar17 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar15 & 0x1f);
  lVar5 = *param_1;
  lVar21 = lVar21 * 0x20;
  puVar3 = (uint *)(lVar5 + lVar21);
  puVar6 = (undefined8 *)param_3[1];
  uVar17 = *(uint *)*param_3;
  *(uint *)(lVar5 + lVar21) = uVar17;
  *(undefined8 *)(lVar5 + 8 + lVar21) = *puVar6;
  lVar7 = puVar6[1];
  *(longlong *)(lVar5 + 0x10 + lVar21) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar17 = *puVar3;
  }
  puVar3[6] = 0xffffffff;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    uVar20 = *(uint *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (uVar20 != 0xffffffff) {
      do {
        puVar4 = (uint *)(*param_1 + (longlong)(int)uVar20 * 0x20);
        if (*(uint *)(*param_1 + (longlong)(int)uVar20 * 0x20) == uVar17) {
          plVar16 = *(longlong **)(puVar4 + 4);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar16 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar16)();
              LOCK();
              piVar2 = (int *)((longlong)plVar16 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar16 + 0x10))();
              }
            }
          }
          uVar9 = *puVar3;
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar9;
          puVar4[1] = uVar10;
          puVar4[2] = uVar11;
          puVar4[3] = uVar12;
          FUN_1411494b4(param_1,uVar15,1);
          cVar13 = '\x01';
          goto LAB_1413e4eaf;
        }
        uVar20 = puVar4[6];
      } while (uVar20 != 0xffffffff);
    }
  }
  cVar13 = '\0';
  uVar20 = uVar15;
LAB_1413e4eaf:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar13;
  }
  if (cVar13 == '\0') {
    uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar15 < 4) {
      iVar14 = 1;
    }
    else {
      uVar19 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar21 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar17 = (int)param_1[9] - 1U & uVar17;
      puVar3[7] = uVar17;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      puVar3[6] = *(uint *)((longlong)plVar16 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      *(uint *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
           uVar20;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_1413e503a(param_1);
    }
  }
  *param_2 = uVar20;
  return param_2;
}



// FUNCTION 1413e503a FUN_1413e503a body=431 status=ok
// SIG undefined FUN_1413e503a(void)

void FUN_1413e503a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1413e51ea FUN_1413e51ea body=616 status=ok
// SIG undefined FUN_1413e51ea(void)

void FUN_1413e51ea(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [24];
  longlong local_88;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140c1d3e0();
  cVar4 = FUN_14008df84(param_1);
  if (((cVar4 != '\0') || (*(longlong *)(param_1 + 0x70) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x70) + 0x158) == 0)) {
    if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_140a3e398(param_1 + 0x130);
    return;
  }
  FUN_140851e80(local_a0,param_1);
  FUN_1413e5462(&local_50,local_a0);
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_50 + 8))();
    local_2c = 0;
    if (lVar6 != 0) {
      local_30 = *(uint *)(lVar6 + 0xc);
      if ((int)local_30 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((local_30 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar7;
        }
      }
      goto LAB_1413e5309;
    }
  }
  local_30 = 0;
  iVar5 = 0;
LAB_1413e5309:
  local_2c = iVar5;
  FUN_14029d0b6(param_1 + 0x130,&local_40);
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
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
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)local_58 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1413e5462 FUN_1413e5462 body=254 status=ok
// SIG undefined FUN_1413e5462(void)

longlong * FUN_1413e5462(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_28[1] = (longlong)&DAT_100000001;
  *local_28 = (longlong)&PTR_FUN_14a1b6cc0;
  local_30 = local_28 + 2;
  local_28[2] = (longlong)&PTR_FUN_14a18e458;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  local_28[0xb] = 0;
  local_28[0xc] = 0;
  local_28[0xd] = 0;
  local_28[0xe] = 0;
  local_28[0xf] = 0;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  local_28[0x12] = 0;
  FUN_1404e24cc(&local_30);
  FUN_14085123a(local_30,param_2,0,1);
  plVar3 = local_28;
  *param_1 = (longlong)local_30;
  param_1[1] = (longlong)local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e5562 FUN_1413e5562 body=85 status=ok
// SIG undefined FUN_1413e5562(void)

void FUN_1413e5562(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_1401900c0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145951460(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1413e55b8 FUN_1413e55b8 body=286 status=ok
// SIG undefined FUN_1413e55b8(void)

undefined8 FUN_1413e55b8(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1413e56d0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1413e56d0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1413e56d0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1413e566f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1413e566f;
    }
  }
  uVar6 = 0;
LAB_1413e566f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e56d8 FUN_1413e56d8 body=837 status=ok
// SIG undefined FUN_1413e56d8(void)

undefined4 * FUN_1413e56d8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined4 local_80 [2];
  char *local_78;
  uint local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145951844(param_1,local_80);
  FUN_1459516a0(local_78,*param_3,param_3[1]);
  local_78[0xe0] = -1;
  local_78[0xe1] = -1;
  local_78[0xe2] = -1;
  local_78[0xe3] = -1;
  local_84 = local_80[0];
  if (*local_78 == '\x01') {
    FUN_1447a97f4(&local_70,local_78 + 0x10);
    if (0 < local_6c) {
      lVar8 = 0;
      uVar9 = 0;
      iVar4 = local_6c;
      uVar3 = DAT_14c948000;
      do {
        bVar10 = local_70 != 0;
        bVar11 = local_70 != uVar3;
        piVar5 = &DAT_14c948620;
        piVar6 = (int *)&DAT_14c948618;
        if (bVar11 && bVar10) {
          puVar7 = local_68;
          if (0 < local_4c) {
            puVar7 = local_58;
          }
          if (1 < iVar4) {
            puVar7 = local_58;
          }
          piVar5 = (int *)(puVar7 + lVar8 + 8);
          piVar6 = (int *)(puVar7 + lVar8);
        }
        if ((*piVar6 == DAT_14cb7beb0) && (*piVar5 == DAT_14cb7beb8)) {
LAB_1413e59fb:
          FUN_1402b5374(&local_70,uVar9 & 0xffffffff,0);
          iVar4 = local_6c;
          uVar3 = DAT_14c948000;
        }
        else {
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar4) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bec8) && (*piVar5 == DAT_14cb7bed0)) goto LAB_1413e59fb;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar4) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bee0) && (*piVar5 == DAT_14cb7bee8)) goto LAB_1413e59fb;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar4) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bef8) && (*piVar5 == DAT_14cb7bf00)) goto LAB_1413e59fb;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar4) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bf10) && (*piVar5 == DAT_14cb7bf18)) goto LAB_1413e59fb;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while ((longlong)uVar9 < (longlong)iVar4);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *(uint *)(local_78 + 0x10);
  }
  cVar2 = FUN_145951612(param_1,local_70,local_78,&local_84);
  uVar1 = local_84;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar3) {
      uVar9 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      local_70 = *(int *)(param_1 + 0x48) - 1U & local_70;
      *(uint *)(local_78 + 0xe4) = local_70;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_78 + 0xe0) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4) = local_84;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14595192c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e5a1e FUN_1413e5a1e body=114 status=ok
// SIG undefined FUN_1413e5a1e(void)

int FUN_1413e5a1e(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0xe8,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xe0 + (longlong)iVar4 * 0xe8);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1413e5a90 FUN_1413e5a90 body=8152 status=ok
// SIG undefined FUN_1413e5a90(void)

void FUN_1413e5a90(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  uint **ppuVar1;
  int *piVar2;
  void **ppvVar3;
  undefined4 uVar4;
  void *pvVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  char cVar14;
  ulonglong *puVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  char *pcVar20;
  char cVar21;
  int iVar22;
  longlong *plVar23;
  undefined8 uVar24;
  longlong *plVar25;
  uint **ppuVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong *puVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 *puVar35;
  bool bVar36;
  byte bVar37;
  undefined1 auStack_4b8 [32];
  undefined8 *local_498;
  longlong local_490;
  longlong local_488;
  char local_479;
  longlong local_478;
  undefined4 local_46c;
  longlong *local_468;
  longlong *local_460;
  longlong local_458;
  ulonglong local_450;
  longlong local_448;
  longlong local_440;
  undefined4 *local_438;
  undefined8 *local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong *local_408;
  longlong local_400;
  longlong local_3f8;
  uint *local_3f0 [2];
  longlong local_3e0;
  undefined8 local_3d0;
  undefined8 local_3c8;
  int local_3bc;
  uint local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined1 local_3ab;
  byte local_3aa;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_380;
  longlong local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  longlong local_358;
  longlong local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  uint local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  ulonglong local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  ulonglong local_2b8;
  undefined4 *local_2b0;
  uint *local_2a8;
  undefined8 local_2a0;
  uint local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int local_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined4 local_258;
  longlong local_250;
  int local_248;
  void *local_240;
  int local_238;
  undefined1 local_230;
  void *local_228;
  int local_220;
  undefined5 local_218;
  undefined3 uStack_213;
  int local_210;
  byte local_20c;
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined5 uStack_188;
  undefined3 local_183;
  undefined5 uStack_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_165;
  uint local_164;
  float local_160;
  char local_15c;
  undefined1 local_158 [64];
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 local_108 [64];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_178 = *param_2;
  if (*(int *)(local_178 + 0x24) == 0) {
LAB_1413e68ee:
    local_458 = 0;
  }
  else {
    uVar7 = *(uint *)(local_178 + 0x20);
    local_458 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar23 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar23 == (longlong *)0x0) ||
         (((int)plVar23[2] != *(int *)(local_178 + 0x24) ||
          ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) goto LAB_1413e68ee;
      local_458 = *plVar23;
    }
  }
  local_428 = *(longlong *)(local_458 + 0x548);
  local_448 = *(longlong *)(local_178 + 0x28);
  local_460 = param_2;
  if ((local_448 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_448);
    local_178 = *local_460;
  }
  local_170 = local_460[1];
  if (local_170 != 0) {
    LOCK();
    *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
    UNLOCK();
  }
  local_418 = FUN_140165676(&local_178);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_46c = *(undefined4 *)(*local_460 + 0x30);
  local_450 = CONCAT44(local_450._4_4_,*(undefined4 *)(param_1 + 0xe8));
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0x800000000;
  local_1d8 = *(undefined8 *)(param_3 + 8);
  local_1f8 = *param_3;
  uStack_1f4 = param_3[1];
  uStack_1f0 = param_3[2];
  uStack_1ec = param_3[3];
  local_1e8 = param_3[4];
  uStack_1e4 = param_3[5];
  uStack_1e0 = param_3[6];
  uStack_1dc = param_3[7];
  local_1d0 = *(undefined8 *)(param_3 + 10);
  local_1c8 = param_3[0xc];
  local_1c0 = 0;
  iVar31 = param_3[0x10];
  uVar13 = *(undefined8 *)(param_3 + 0xe);
  local_1b8 = iVar31;
  if (iVar31 == 0) {
    local_1b4 = 0;
  }
  else {
    FUN_14753cf4a(&local_1c0,iVar31,0);
    FUN_14753cfbd(local_1c0,uVar13,iVar31);
  }
  local_1b0 = (void *)0x0;
  local_1a8 = param_3[0x14];
  lVar32 = (longlong)local_1a8;
  pvVar5 = *(void **)(param_3 + 0x12);
  if (lVar32 == 0) {
    local_1a4 = 0;
  }
  else {
    FUN_1456c5740(&local_1b0,local_1a8,0);
    memcpy(local_1b0,pvVar5,lVar32 << 3);
  }
  local_1a0 = *(undefined1 *)(param_3 + 0x16);
  local_198 = (void *)0x0;
  local_190 = param_3[0x1a];
  lVar32 = (longlong)local_190;
  pvVar5 = *(void **)(param_3 + 0x18);
  if (lVar32 == 0) {
    local_18c = 0;
  }
  else {
    FUN_1447bda9e(&local_198,local_190,0);
    memcpy(local_198,pvVar5,lVar32 << 2);
  }
  uStack_180 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x75) >> 0x18);
  uStack_188 = (undefined5)*(undefined8 *)(param_3 + 0x1c);
  local_183 = (undefined3)((ulonglong)*(undefined8 *)(param_3 + 0x1c) >> 0x28);
  local_118 = (undefined1 *)0x0;
  local_110 = 0x1000000000;
  local_430 = (undefined8 *)FUN_1400a382a(local_448,*(undefined4 *)(param_1 + 0xe8));
  local_438 = (undefined4 *)(param_1 + 0xec);
  local_478 = param_1;
  if ((((*(uint *)(param_1 + 0xec) != DAT_14cab2cd4) && (local_430 != (undefined8 *)0x0)) &&
      (lVar32 = FUN_1400d12c6(local_430,local_438), lVar32 != 0)) &&
     (lVar19 = FUN_1400a4c08(lVar32), lVar19 != 0)) {
    uVar4 = *local_438;
    local_208 = *local_460;
    local_200 = local_460[1];
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
    }
    local_488 = CONCAT44(local_488._4_4_,uVar4);
    local_490 = local_428;
    local_498 = local_430;
    FUN_1413e7a6a(local_478,&local_2b0,&local_208);
    local_46c = local_2b0._0_4_;
    FUN_140b56998(local_448,&local_288,lVar19);
    local_450 = CONCAT44(local_450._4_4_,(undefined4)local_288);
    FUN_1456c57a2(param_3,&local_288,lVar32 + 0x40,*(undefined8 *)(lVar32 + 0x60));
    local_1d8 = CONCAT44(uStack_264,local_268);
    local_1e8 = local_278;
    uStack_1e4 = uStack_274;
    uStack_1e0 = uStack_270;
    uStack_1dc = uStack_26c;
    local_1f8 = (undefined4)local_288;
    uStack_1f4 = local_288._4_4_;
    uStack_1f0 = (uint)uStack_280;
    uStack_1ec = uStack_280._4_4_;
    local_1c8 = local_258;
    local_1d0 = local_260;
    FUN_1400a241c(&local_1c0,&local_250);
    FUN_1456c55fa(&local_1b0,&local_240);
    uStack_188 = local_218;
    local_183 = uStack_213;
    uStack_180 = (undefined5)(CONCAT17(local_20c,CONCAT43(local_210,uStack_213)) >> 0x18);
    FUN_144adeafa(&local_288);
    FUN_1400a31b8(local_108,*(undefined4 *)(local_478 + 0xec),local_430);
    uVar9 = local_110;
    lVar32 = (longlong)(int)local_110;
    uVar7 = (int)local_110 + 1;
    local_110 = CONCAT44(local_110._4_4_,uVar7);
    if (local_110._4_4_ < uVar7) {
      FUN_147565124(local_158,uVar9 & 0xffffffff);
    }
    puVar10 = local_118;
    if (local_118 == (undefined1 *)0x0) {
      puVar10 = local_158;
    }
    *(undefined4 *)(puVar10 + lVar32 * 4) = *local_438;
  }
  lVar32 = local_478;
  FUN_14055a9ea(&local_288,&local_1f8);
  if ((int)local_1d8 == 0) {
    local_28c = (*(int *)(&DAT_14a46e600 + (ulonglong)((char)uStack_280 == '\x01') * 4) +
                (int)(uStack_280 >> 0x20)) - 1;
  }
  else {
    local_28c = (int)((ulonglong)local_288 >> 0x20) +
                *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_288 == '\0') * 4);
  }
  local_468 = (longlong *)(lVar32 + 8);
  local_479 = FUN_1400a246c();
  lVar19 = *(longlong *)(local_428 + 8) + (ulonglong)(ushort)local_46c * 0x128;
  lVar33 = *(longlong *)(local_428 + 8) + (ulonglong)(ushort)local_46c * 0x128;
  plVar23 = (longlong *)(lVar33 + 0xa0);
  *(undefined4 *)(lVar33 + 0x68) = local_1f8;
  *(undefined4 *)(lVar33 + 0x6c) = uStack_1f4;
  *(undefined4 *)(lVar33 + 0x70) = uStack_1f0;
  *(undefined4 *)(lVar33 + 0x74) = uStack_1ec;
  *(undefined4 *)(lVar33 + 0x78) = local_1e8;
  *(undefined4 *)(lVar33 + 0x7c) = uStack_1e4;
  *(undefined4 *)(lVar33 + 0x80) = uStack_1e0;
  *(undefined4 *)(lVar33 + 0x84) = uStack_1dc;
  *(undefined8 *)(lVar33 + 0x88) = local_1d8;
  *(undefined4 *)(lVar33 + 0x98) = local_1c8;
  *(undefined8 *)(lVar33 + 0x90) = local_1d0;
  if (plVar23 != &local_1c0) {
    FUN_1447bda9c(*(undefined8 *)(lVar19 + 0xa0),*(undefined4 *)(lVar19 + 0xa8));
    iVar31 = local_1b8;
    lVar33 = local_1c0;
    *(int *)(lVar19 + 0xa8) = local_1b8;
    if (local_1b8 == 0 && *(int *)(lVar19 + 0xac) == 0) {
      *(undefined4 *)(lVar19 + 0xac) = 0;
    }
    else {
      FUN_14753cf4a(plVar23,local_1b8);
      FUN_14753cfbd(*plVar23,lVar33,iVar31);
    }
  }
  iVar31 = local_1a8;
  pvVar5 = local_1b0;
  ppvVar3 = (void **)(lVar19 + 0xb0);
  if (ppvVar3 != &local_1b0) {
    lVar33 = (longlong)local_1a8;
    *(int *)(lVar19 + 0xb8) = local_1a8;
    if (local_1a8 == 0 && *(int *)(lVar19 + 0xbc) == 0) {
      *(undefined4 *)(lVar19 + 0xbc) = 0;
    }
    else {
      FUN_1456c5740(ppvVar3,local_1a8);
      if (iVar31 != 0) {
        memcpy(*ppvVar3,pvVar5,lVar33 << 3);
      }
    }
  }
  iVar22 = local_190;
  pvVar5 = local_198;
  uVar9 = local_450;
  *(undefined1 *)(lVar19 + 0xc0) = local_1a0;
  ppvVar3 = (void **)(lVar19 + 200);
  iVar31 = (int)local_450;
  if (ppvVar3 != &local_198) {
    lVar33 = (longlong)local_190;
    *(int *)(lVar19 + 0xd0) = local_190;
    if (local_190 == 0 && *(int *)(lVar19 + 0xd4) == 0) {
      *(undefined4 *)(lVar19 + 0xd4) = 0;
    }
    else {
      FUN_1447bda9e(ppvVar3,local_190);
      if (iVar22 != 0) {
        memcpy(*ppvVar3,pvVar5,lVar33 << 2);
      }
    }
  }
  lVar33 = local_448;
  *(ulonglong *)(lVar19 + 0xdd) = CONCAT53(uStack_180,local_183);
  *(ulonglong *)(lVar19 + 0xd8) = CONCAT35(local_183,uStack_188);
  lVar8 = FUN_14055aa88(local_448,uVar9 & 0xffffffff);
  lVar34 = (longlong)iVar31 * 0x30;
  lVar33 = FUN_140a46d48(*(longlong *)(lVar33 + 0xa0) + lVar34);
  local_400 = lVar34;
  if (lVar33 == 0) {
    FUN_14055c180(lVar19,local_458,0);
  }
  else {
    cVar6 = *(char *)(lVar32 + 0xf1);
    if (cVar6 == '\0') {
      *(byte *)(lVar32 + 0xf0) = *(byte *)(*(longlong *)(local_448 + 0xa0) + 0x2c + lVar34) >> 2 & 1
      ;
      *(undefined1 *)(lVar32 + 0xf1) = 1;
      cVar6 = '\x01';
      if (local_418 != 0) {
        *(undefined1 *)(lVar32 + 0xf0) = 1;
      }
    }
    plVar23 = (longlong *)(lVar32 + 0xf8);
    if (local_479 == '\0') {
      if (*(int *)(lVar32 + 0x100) != *(int *)(lVar32 + 300)) {
        FUN_1459528ea(plVar23);
        FUN_1459527a6(plVar23);
      }
      local_288 = (undefined4 *)0x2;
      uStack_280 = 2;
      if (lVar8 != 0) {
        FUN_14055c024(lVar8,local_28c,&local_288,&local_b8);
      }
      *local_468 = (longlong)local_288;
      local_468[1] = uStack_280;
      bVar37 = local_278._2_1_ & 0xf8;
      uStack_280 = CONCAT44(local_46c,local_46c);
      local_288 = (undefined4 *)((ulonglong)DAT_14cab2cd4 << 0x20);
      if (*(char *)(lVar32 + 0xf1) == '\x01') {
        cVar6 = *(char *)(lVar32 + 0xf0);
      }
      else {
        cVar6 = '\0';
      }
      local_278._0_3_ = CONCAT12(cVar6 << 2 | bVar37,(ushort)*(byte *)(lVar33 + 0x60));
      local_2b0 = &DAT_14cab2cd4;
      FUN_145951d24(plVar23,local_3f0);
      local_490 = (longlong)(int)local_3f0[0] * 0x60 + *(longlong *)(lVar32 + 0xf8) + 8;
      local_488 = lVar32 + 0x148;
      local_498 = &local_b8;
      FUN_14055e5dc(lVar19,local_458,&local_288,lVar8);
LAB_1413e6e45:
      iVar31 = (int)local_450;
    }
    else if (*(int *)(lVar32 + 0x100) != *(int *)(lVar32 + 300)) {
      lVar34 = lVar32 + 0x130;
      if (*(longlong *)(lVar32 + 0x138) != 0) {
        lVar34 = *(longlong *)(lVar32 + 0x138);
      }
      iVar22 = *(int *)(lVar34 + (ulonglong)(*(int *)(lVar32 + 0x140) - 1U & DAT_14cab2cd4) * 4);
      if (iVar22 != -1) {
        do {
          lVar34 = *plVar23 + (longlong)iVar22 * 0x60;
          if (*(uint *)(*plVar23 + (longlong)iVar22 * 0x60) == DAT_14cab2cd4) {
            if (((lVar34 != 0) && ((undefined8 *)(lVar34 + 8) != (undefined8 *)0x0)) &&
               (*(int *)(lVar34 + 0x10) != *(int *)(lVar34 + 0x3c))) {
              uStack_280 = CONCAT44(local_46c,local_46c);
              local_288 = (undefined4 *)((ulonglong)DAT_14cab2cd4 << 0x20);
              if (cVar6 == '\0') {
                cVar6 = '\0';
              }
              else {
                cVar6 = *(char *)(local_478 + 0xf0);
              }
              local_278 = CONCAT13(local_278._3_1_,
                                   CONCAT12(cVar6 << 2 | local_278._2_1_ & 0xf8,
                                            (ushort)*(byte *)(lVar33 + 0x60)));
              local_498 = (undefined8 *)(lVar34 + 8);
              FUN_1475469f8(lVar19,local_458,&local_288,lVar8);
              lVar32 = local_478;
              goto LAB_1413e6e45;
            }
            break;
          }
          iVar22 = *(int *)(lVar34 + 0x58);
        } while (iVar22 != -1);
      }
    }
    if ((lVar8 != 0) &&
       ((((longlong)*(int *)(lVar8 + 0x78) != -1 &&
         (*(int *)(*(longlong *)(lVar8 + 0x80) + 4 + (longlong)*(int *)(lVar8 + 0x78) * 0xc) != 0))
        || (((longlong)*(int *)(lVar8 + 0x7c) != -1 &&
            (*(int *)(*(longlong *)(lVar8 + 0xa0) + 4 + (longlong)*(int *)(lVar8 + 0x7c) * 0xc) != 0
            )))))) {
      FUN_14055ab72(&local_b8);
      FUN_14055a9ea(&local_288,&local_1f8);
      FUN_14055abb8(lVar8,&local_288,&local_b8);
      lVar34 = local_478;
      if ((int)uStack_b0 != local_84) {
        uStack_280 = CONCAT44(local_46c,local_46c);
        local_288 = (undefined4 *)((ulonglong)DAT_14cab2cd4 << 0x20);
        if (*(char *)(lVar32 + 0xf1) == '\x01') {
          cVar6 = *(char *)(local_478 + 0xf0);
        }
        else {
          cVar6 = '\0';
        }
        local_278 = CONCAT13(local_278._3_1_,
                             CONCAT12(cVar6 << 2 | local_278._2_1_ & 0xf8,
                                      (ushort)*(byte *)(lVar33 + 0x60)));
        local_490 = local_478 + 0x148;
        local_498 = &local_b8;
        FUN_14055e0cc(lVar19,local_458,&local_288,lVar8);
        lVar32 = lVar34;
        iVar31 = (int)local_450;
      }
    }
  }
  uVar9 = FUN_1400a382a(local_448,iVar31);
  if (uVar9 == 0) goto LAB_1413e6716;
  FUN_14055b2f2(&local_2b0,uVar9 + 0x18,((ulonglong)local_28c << 0x20) + 1);
  if (local_479 == '\0') {
    local_288 = local_2b0;
    local_3f0[0] = local_2a8;
    cVar6 = (char)*local_468;
    if (((cVar6 == '\x02') || (*(char *)(lVar32 + 0x10) == '\x02')) ||
       ((iVar31 = *(int *)(lVar32 + 0x14), iVar22 = *(int *)(lVar32 + 0xc),
        iVar22 == iVar31 || iVar22 < iVar31 &&
        ((iVar22 != iVar31 || (*(char *)(lVar32 + 0x10) != '\0' && cVar6 != '\0')))))) {
      cVar14 = (char)local_2b0;
      cVar21 = (char)local_2a8;
      iVar22 = (int)((ulonglong)local_2a8 >> 0x20);
      iVar31 = (int)((ulonglong)local_2b0 >> 0x20);
      if (cVar14 == '\x02') {
LAB_1413e6ec4:
        ppuVar26 = local_3f0;
        if ((*(char *)(lVar32 + 0x10) != '\x02') &&
           ((((ppuVar1 = (uint **)(lVar32 + 0x10), ppuVar26 = ppuVar1, cVar21 != '\x02' &&
              (iVar22 <= *(int *)(lVar32 + 0x14))) &&
             (ppuVar26 = local_3f0, *(int *)(lVar32 + 0x14) <= iVar22)) &&
            (*(char *)(lVar32 + 0x10) == '\0')))) {
          ppuVar26 = ppuVar1;
        }
      }
      else {
        if (cVar21 != '\x02') {
          if ((iVar22 < iVar31) || ((iVar31 == iVar22 && (cVar21 == '\0' || cVar14 == '\0'))))
          goto LAB_1413e7a60;
          goto LAB_1413e6ec4;
        }
        ppuVar26 = local_3f0;
        if (*(char *)(lVar32 + 0x10) != '\x02') {
          ppuVar26 = (uint **)(lVar32 + 0x10);
        }
      }
      plVar23 = local_468;
      if (cVar6 == '\x02') {
        plVar23 = &local_288;
      }
      if (((cVar14 != '\x02') && (cVar6 != '\x02')) &&
         ((plVar23 = local_468, *(int *)(lVar32 + 0xc) <= iVar31 &&
          ((plVar23 = &local_288, iVar31 <= *(int *)(lVar32 + 0xc) &&
           (plVar23 = &local_288, cVar6 == '\0')))))) {
        plVar23 = local_468;
      }
      lVar19 = *plVar23;
      puVar16 = *ppuVar26;
    }
    else {
LAB_1413e7a60:
      lVar19 = 0;
      puVar16 = (uint *)0x0;
    }
    *(longlong *)(lVar32 + 8) = lVar19;
    *(uint **)(lVar32 + 0x10) = puVar16;
  }
  FUN_1400ab8bc(&local_2c8,uVar9 + 0x18,local_2a0);
  local_2e8 = local_2c8;
  uStack_2e4 = uStack_2c4;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
  local_418 = CONCAT44(uStack_2c4,local_2c8);
  local_2d8 = local_2b8;
  lVar19 = CONCAT44(uStack_2c4,local_2c8);
  lVar33 = CONCAT44(uStack_2bc,uStack_2c0);
  if (lVar33 != 0 || (int)local_2b8 != 0) {
    local_408 = (longlong *)(lVar32 + 0xf8);
    local_3f8 = lVar32 + 0x130;
    local_450 = uVar9;
    do {
      if ((longlong)*(int *)(lVar33 + 0x1c) == -1) {
        lVar32 = 0;
      }
      else {
        lVar32 = (longlong)
                 *(int *)(*(longlong *)(lVar19 + 0x40) + (longlong)*(int *)(lVar33 + 0x1c) * 0xc) *
                 0x30 + *(longlong *)(lVar19 + 0x50);
      }
      lVar33 = (longlong)(int)local_2b8 * 0x30;
      uVar7 = *(uint *)(lVar32 + lVar33);
      lVar19 = (longlong)(int)local_c0;
      if (lVar19 != 0) {
        puVar10 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar10 = local_108;
        }
        lVar8 = 0;
        do {
          uVar29 = *(uint *)(puVar10 + lVar8);
          if (uVar7 != 0) {
            uVar29 = FUN_144a78877(uVar7,*(uint *)(puVar10 + lVar8));
          }
          uVar7 = uVar29;
          lVar8 = lVar8 + 8;
          uVar9 = local_450;
        } while (lVar19 * 8 != lVar8);
      }
      local_2ec = uVar7;
      lVar19 = FUN_1400d12c6(uVar9,lVar32 + lVar33);
      uVar9 = local_110;
      lVar32 = (longlong)(int)local_110;
      uVar7 = (int)local_110 + 1;
      local_110 = CONCAT44(local_110._4_4_,uVar7);
      if (local_110._4_4_ < uVar7) {
        FUN_147565124(local_158,uVar9 & 0xffffffff);
      }
      puVar10 = local_118;
      if (local_118 == (undefined1 *)0x0) {
        puVar10 = local_158;
      }
      *(uint *)(puVar10 + lVar32 * 4) = local_2ec;
      plVar23 = *(longlong **)(lVar19 + 0xd0);
      if (plVar23 == (longlong *)0x0) {
        bVar37 = 0;
      }
      else {
        local_300 = *local_460;
        local_2f8 = local_460[1];
        if (local_2f8 != 0) {
          LOCK();
          *(int *)(local_2f8 + 8) = *(int *)(local_2f8 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar23 + 0x2b8))(plVar23,&local_300);
        plVar23 = *(longlong **)(lVar19 + 0xd0);
        if (cVar6 == '\0') {
          local_358 = *local_460;
          local_350 = local_460[1];
          if (local_350 != 0) {
            LOCK();
            *(int *)(local_350 + 8) = *(int *)(local_350 + 8) + 1;
            UNLOCK();
          }
          uVar4 = *local_438;
          puVar18 = &local_368;
          local_368 = 0;
          uStack_360 = 0;
          plVar17 = &local_358;
        }
        else {
          FUN_1400021e4(lVar19 + 200,&local_288);
          puVar35 = local_288;
          if ((uint)uStack_280 == 0) {
            puVar35 = (undefined4 *)&DAT_149dfb77a;
          }
          uVar13 = FUN_140a46d48(*(longlong *)(local_448 + 0xa0) + local_400);
          uVar24 = FUN_1408612da();
          local_498 = (undefined8 *)FUN_140277b32(uVar24,uVar13,puVar35,0);
          lVar32 = local_478;
          local_310 = *local_460;
          local_308 = local_460[1];
          if (local_308 != 0) {
            LOCK();
            *(int *)(local_308 + 8) = *(int *)(local_308 + 8) + 1;
            UNLOCK();
          }
          local_328 = 0;
          uStack_320 = 0;
          uVar7 = (**(code **)(*plVar23 + 0x2b0))
                            (plVar23,&local_328,*(undefined4 *)(local_478 + 0xec),&local_310);
          if (*(int *)(lVar32 + 0x150) != *(int *)(lVar32 + 0x17c)) {
            lVar32 = local_478 + 0x180;
            if (*(longlong *)(local_478 + 0x188) != 0) {
              lVar32 = *(longlong *)(local_478 + 0x188);
            }
            iVar31 = *(int *)(lVar32 + (ulonglong)(*(int *)(local_478 + 400) - 1U & uVar7) * 4);
            if (iVar31 != -1) {
              do {
                lVar32 = *(longlong *)(local_478 + 0x148) + (longlong)iVar31 * 0x10;
                if (*(uint *)(*(longlong *)(local_478 + 0x148) + (longlong)iVar31 * 0x10) == uVar7)
                goto LAB_1413e776f;
                iVar31 = *(int *)(lVar32 + 8);
              } while (iVar31 != -1);
            }
          }
          lVar32 = 0;
LAB_1413e776f:
          pcVar20 = (char *)(lVar32 + 4);
          if (lVar32 == 0) {
            pcVar20 = (char *)0x0;
          }
          if (local_288 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          if (pcVar20 != (char *)0x0) {
            bVar37 = *pcVar20 == '\0';
            goto LAB_1413e61e0;
          }
          plVar23 = *(longlong **)(lVar19 + 0xd0);
          local_338 = *local_460;
          local_330 = local_460[1];
          if (local_330 != 0) {
            LOCK();
            *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
            UNLOCK();
          }
          uVar4 = *local_438;
          puVar18 = &local_348;
          local_348 = 0;
          uStack_340 = 0;
          plVar17 = &local_338;
        }
        bVar37 = FUN_147544a16(plVar23,puVar18,uVar4,plVar17);
        bVar37 = bVar37 ^ 1;
      }
LAB_1413e61e0:
      lVar32 = local_478;
      lVar33 = FUN_1400a4c08(lVar19);
      uVar9 = local_450;
      if ((bVar37 == 0) && (lVar33 != 0)) {
        FUN_140b56998(local_448,&local_36c,lVar33);
        lVar8 = local_428;
        local_380 = *local_460;
        local_378 = local_460[1];
        if (local_378 != 0) {
          LOCK();
          *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
          UNLOCK();
        }
        local_488 = CONCAT44(local_488._4_4_,local_2ec);
        local_490 = local_428;
        local_498 = local_430;
        FUN_1413e7a6a(lVar32,&local_370,&local_380,lVar33);
        lVar32 = *(longlong *)(lVar8 + 8);
        lVar34 = (ulonglong)(ushort)local_370 * 0x128;
        lVar8 = lVar32 + lVar34;
        local_410 = lVar19;
        FUN_1456c57a2(&local_1f8,&local_288,lVar19 + 0x40,*(undefined8 *)(lVar19 + 0x60));
        local_398 = *(undefined8 *)(lVar19 + 0x9c);
        uStack_390 = *(undefined8 *)(lVar19 + 0xa4);
        local_3a8 = *(undefined4 *)(lVar19 + 0x8c);
        uStack_3a4 = *(undefined4 *)(lVar19 + 0x90);
        uStack_3a0 = *(undefined4 *)(lVar19 + 0x94);
        uStack_39c = *(undefined4 *)(lVar19 + 0x98);
        FUN_1456c567c(&local_288,&local_3a8,&local_398);
        local_210 = (int)*(short *)(lVar19 + 0xac);
        bVar37 = *(byte *)(lVar32 + 0xe4 + lVar34);
        bVar36 = (local_20c & 0x14) != 0;
        if ((((bVar37 & 0x14) != 0) != bVar36) ||
           (((bVar37 & 0x28) != 0) != ((local_20c & 0x28) != 0))) {
          *(undefined1 *)(lVar8 + 0x60) = 1;
        }
        lVar32 = lVar32 + lVar34;
        *(ulonglong *)(lVar32 + 0x88) = CONCAT44(uStack_264,local_268);
        *(undefined4 *)(lVar32 + 0x78) = local_278;
        *(undefined4 *)(lVar32 + 0x7c) = uStack_274;
        *(undefined4 *)(lVar32 + 0x80) = uStack_270;
        *(undefined4 *)(lVar32 + 0x84) = uStack_26c;
        *(undefined4 *)(lVar32 + 0x68) = (undefined4)local_288;
        *(undefined4 *)(lVar32 + 0x6c) = local_288._4_4_;
        *(uint *)(lVar32 + 0x70) = (uint)uStack_280;
        *(undefined4 *)(lVar32 + 0x74) = uStack_280._4_4_;
        *(undefined4 *)(lVar8 + 0x98) = local_258;
        *(undefined8 *)(lVar8 + 0x90) = local_260;
        plVar23 = (longlong *)(lVar8 + 0xa0);
        if (plVar23 != &local_250) {
          FUN_1447bda9c(*(undefined8 *)(lVar8 + 0xa0),*(undefined4 *)(lVar8 + 0xa8));
          iVar31 = local_248;
          lVar32 = local_250;
          *(int *)(lVar8 + 0xa8) = local_248;
          if (local_248 == 0 && *(int *)(lVar8 + 0xac) == 0) {
            *(undefined4 *)(lVar8 + 0xac) = 0;
          }
          else {
            FUN_14753cf4a(plVar23,local_248);
            FUN_14753cfbd(*plVar23,lVar32,iVar31);
          }
        }
        iVar31 = local_238;
        pvVar5 = local_240;
        ppvVar3 = (void **)(lVar8 + 0xb0);
        if (ppvVar3 != &local_240) {
          lVar32 = (longlong)local_238;
          *(int *)(lVar8 + 0xb8) = local_238;
          if (local_238 == 0 && *(int *)(lVar8 + 0xbc) == 0) {
            *(undefined4 *)(lVar8 + 0xbc) = 0;
          }
          else {
            FUN_1456c5740(ppvVar3,local_238);
            if (iVar31 != 0) {
              memcpy(*ppvVar3,pvVar5,lVar32 << 3);
            }
          }
        }
        iVar31 = local_220;
        pvVar5 = local_228;
        *(undefined1 *)(lVar8 + 0xc0) = local_230;
        ppvVar3 = (void **)(lVar8 + 200);
        if (ppvVar3 != &local_228) {
          lVar32 = (longlong)local_220;
          *(int *)(lVar8 + 0xd0) = local_220;
          if (local_220 == 0 && *(int *)(lVar8 + 0xd4) == 0) {
            *(undefined4 *)(lVar8 + 0xd4) = 0;
          }
          else {
            FUN_1447bda9e(ppvVar3,local_220);
            if (iVar31 != 0) {
              memcpy(*ppvVar3,pvVar5,lVar32 << 2);
            }
          }
        }
        *(ulonglong *)(lVar8 + 0xdd) = CONCAT17(local_20c,CONCAT43(local_210,uStack_213));
        *(ulonglong *)(lVar8 + 0xd8) = CONCAT35(uStack_213,local_218);
        *(byte *)(lVar8 + 0x126) = *(byte *)(lVar8 + 0x126) & 0xfd;
        lVar34 = FUN_14055aa88(local_448,local_36c);
        FUN_14055a9ea(local_3f0,&local_288);
        lVar32 = local_478;
        if (local_268 == 0) {
          iVar31 = *(int *)(&DAT_14a46e600 + (ulonglong)((char)local_3f0[1] == '\x01') * 4) +
                   (int)((ulonglong)local_3f0[1] >> 0x20) + -1;
        }
        else {
          iVar31 = (int)((ulonglong)local_3f0[0] >> 0x20) +
                   *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_3f0[0] == '\0') * 4);
        }
        local_3b8 = local_2ec;
        local_3b4 = local_370;
        local_3b0 = local_46c;
        local_3ac = *(undefined1 *)(lVar33 + 0x60);
        local_3bc = (int)*(short *)(lVar19 + 0xac);
        local_3ab = *(undefined1 *)(lVar19 + 0xae);
        if (*(char *)(local_478 + 0xf1) == '\x01') {
          cVar6 = *(char *)(local_478 + 0xf0);
        }
        else {
          cVar6 = '\0';
        }
        local_3aa = cVar6 << 2 | bVar36 | local_3aa & 0xf8;
        if ((local_479 == '\0') || (*(char *)(lVar8 + 0x60) == '\x01')) {
          FUN_14055ab72(&local_b8);
          local_3d0 = 2;
          local_3c8 = 2;
          cVar6 = '\x02';
          bVar36 = true;
          if (lVar34 == 0) {
LAB_1413e697a:
            cVar14 = *(char *)(lVar19 + 0x6c);
            if (((cVar14 != '\x02') && (*(char *)(lVar19 + 0x74) != '\x02')) &&
               ((iVar31 = *(int *)(lVar19 + 0x78), iVar22 = *(int *)(lVar19 + 0x70),
                iVar22 != iVar31 && iVar31 <= iVar22 ||
                ((iVar22 == iVar31 && (*(char *)(lVar19 + 0x74) == '\0' || cVar14 == '\0'))))))
            goto LAB_1413e7941;
            puVar11 = (ulonglong *)(local_410 + 0x74);
            puVar15 = puVar11;
            if (((char)local_3c8 != '\x02') && (puVar15 = &local_3c8, *(char *)puVar11 != '\x02')) {
              if (((*(int *)(lVar19 + 0x78) <= local_3c8._4_4_) &&
                  (puVar15 = puVar11, local_3c8._4_4_ <= *(int *)(lVar19 + 0x78))) &&
                 ((char)local_3c8 == '\0')) {
                puVar15 = &local_3c8;
              }
            }
            puVar30 = (ulonglong *)(local_410 + 0x6c);
            puVar11 = &local_3d0;
            if (bVar36) {
              puVar11 = puVar30;
            }
            if (!(bool)(cVar14 == '\x02' | bVar36)) {
              puVar11 = &local_3d0;
              if (((local_3d0._4_4_ <= *(int *)(lVar19 + 0x70)) &&
                  (puVar11 = puVar30, *(int *)(lVar19 + 0x70) <= local_3d0._4_4_)) &&
                 (cVar6 == '\0')) {
                puVar11 = &local_3d0;
              }
            }
            local_3d0 = *puVar11;
            local_3c8 = *puVar15;
          }
          else {
            FUN_14055c024(lVar34,iVar31,&local_3d0,&local_b8);
            if ((char)local_3d0 == '\x02') goto LAB_1413e697a;
            cVar6 = (char)local_3d0;
            if ((char)local_3c8 == '\x02') {
LAB_1413e6975:
              bVar36 = false;
              goto LAB_1413e697a;
            }
            if (local_3d0._4_4_ <= local_3c8._4_4_) {
              if (local_3d0._4_4_ != local_3c8._4_4_) goto LAB_1413e6975;
              bVar36 = false;
              if ((char)local_3c8 != '\0' && (char)local_3d0 != '\0') goto LAB_1413e697a;
            }
LAB_1413e7941:
            local_3d0 = 0;
            local_3c8 = 0;
          }
          lVar19 = local_478;
          lVar32 = local_478 + 0x148;
          local_3f0[0] = &local_2ec;
          FUN_145951d24(local_408,&local_164,local_3f0);
          local_490 = (longlong)(int)local_164 * 0x60 + *(longlong *)(lVar19 + 0xf8) + 8;
          local_498 = &local_b8;
          local_488 = lVar32;
          FUN_14055e5dc(lVar8,local_458,&local_3bc,lVar34);
          FUN_14087ad3e(&local_260,local_3f0);
          local_420 = 2;
          local_440 = 2;
          bVar36 = true;
          uVar7 = 0;
          cVar6 = '\x02';
          if ((char)local_3d0 != '\x02') {
            local_165 = 0xf;
            local_498 = (undefined8 *)&local_165;
            FUN_140cdcd7c(local_3f0,&local_164,local_3d0 >> 0x20,&local_240);
            if (local_15c == '\x01') {
              uVar7 = local_164 + (local_160 != 0.0);
              local_420 = ((ulonglong)uVar7 << 0x20) + 1;
              cVar6 = '\x01';
            }
            else {
              cVar6 = '\x02';
              uVar7 = 0;
            }
          }
          uVar29 = 0;
          if ((char)local_3c8 != '\x02') {
            local_165 = 0xf;
            local_498 = (undefined8 *)&local_165;
            FUN_140cdcd7c(local_3f0,&local_164,local_3c8 >> 0x20,&local_240);
            if (local_15c == '\x01') {
              local_440 = (ulonglong)local_164 << 0x20;
              bVar36 = false;
              uVar29 = local_164;
            }
            else {
              bVar36 = true;
              uVar29 = 0;
            }
          }
          lVar32 = local_478;
          plVar23 = (longlong *)(local_478 + 0x10);
          cVar14 = (char)*local_468;
          if (((cVar14 == '\x02') || (*(char *)plVar23 == '\x02')) ||
             ((iVar31 = *(int *)(local_478 + 0x14), iVar22 = *(int *)(local_478 + 0xc),
              iVar22 == iVar31 || iVar22 < iVar31 &&
              ((iVar22 != iVar31 || (*(char *)plVar23 != '\0' && cVar14 != '\0')))))) {
            if (cVar6 == '\x02') {
LAB_1413e6bfd:
              cVar21 = *(char *)plVar23;
              plVar17 = &local_440;
              if ((cVar21 != '\x02') && (plVar17 = plVar23, !bVar36)) {
LAB_1413e6c14:
                plVar17 = plVar23;
                if ((((int)uVar29 <= *(int *)(local_478 + 0x14)) &&
                    (plVar17 = &local_440, *(int *)(local_478 + 0x14) <= (int)uVar29)) &&
                   (cVar21 == '\0')) {
                  plVar17 = plVar23;
                }
              }
            }
            else {
              if (!bVar36) {
                if ((int)uVar7 <= (int)uVar29) {
                  if (uVar7 != uVar29) goto LAB_1413e6bfd;
                  if (bVar36) {
                    cVar21 = *(char *)plVar23;
                    plVar17 = &local_440;
                    if (cVar21 == '\x02') goto LAB_1413e6c33;
                    goto LAB_1413e6c14;
                  }
                }
                goto LAB_1413e7975;
              }
              plVar17 = &local_440;
              if (*(char *)plVar23 != '\x02') {
                plVar17 = plVar23;
              }
            }
LAB_1413e6c33:
            plVar25 = local_468;
            if (cVar14 == '\x02') {
              plVar25 = &local_420;
            }
            if (((cVar6 != '\x02') && (cVar14 != '\x02')) &&
               ((plVar25 = local_468, *(int *)(local_478 + 0xc) <= (int)uVar7 &&
                ((plVar25 = &local_420, (int)uVar7 <= *(int *)(local_478 + 0xc) && (cVar14 == '\0'))
                )))) {
              plVar25 = local_468;
            }
            lVar19 = *plVar25;
            lVar33 = *plVar17;
          }
          else {
LAB_1413e7975:
            lVar19 = 0;
            lVar33 = 0;
          }
          *local_468 = lVar19;
          *plVar23 = lVar33;
          if (local_3e0 != 0) {
            FUN_1400020a8();
          }
        }
        else if (*(int *)(local_478 + 0x100) != *(int *)(local_478 + 300)) {
          lVar19 = *(longlong *)(local_478 + 0x138);
          if (*(longlong *)(local_478 + 0x138) == 0) {
            lVar19 = local_3f8;
          }
          iVar31 = *(int *)(lVar19 + (ulonglong)(*(int *)(local_478 + 0x140) - 1U & local_2ec) * 4);
          if (iVar31 != -1) {
            do {
              lVar19 = *local_408 + (longlong)iVar31 * 0x60;
              if (*(uint *)(*local_408 + (longlong)iVar31 * 0x60) == local_2ec) {
                if (((lVar19 != 0) && ((undefined8 *)(lVar19 + 8) != (undefined8 *)0x0)) &&
                   (*(int *)(lVar19 + 0x10) != *(int *)(lVar19 + 0x3c))) {
                  local_498 = (undefined8 *)(lVar19 + 8);
                  FUN_1475469f8(lVar8,local_458,&local_3bc,lVar34);
                }
                break;
              }
              iVar31 = *(int *)(lVar19 + 0x58);
            } while (iVar31 != -1);
          }
        }
        if ((lVar34 != 0) &&
           ((((longlong)*(int *)(lVar34 + 0x78) != -1 &&
             (*(int *)(*(longlong *)(lVar34 + 0x80) + 4 + (longlong)*(int *)(lVar34 + 0x78) * 0xc)
              != 0)) ||
            (((longlong)*(int *)(lVar34 + 0x7c) != -1 &&
             (*(int *)(*(longlong *)(lVar34 + 0xa0) + 4 + (longlong)*(int *)(lVar34 + 0x7c) * 0xc)
              != 0)))))) {
          FUN_14055ab72(&local_b8);
          FUN_14055a9ea(local_3f0,&local_288);
          FUN_14055abb8(lVar34,local_3f0,&local_b8);
          if ((int)uStack_b0 != local_84) {
            local_490 = lVar32 + 0x148;
            local_498 = &local_b8;
            FUN_14055e0cc(lVar8,local_458,&local_3bc,lVar34);
          }
        }
        if (local_228 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar9 = local_450;
        if (local_240 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447bda9c(local_250,local_248);
        if (local_250 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar7 = *(uint *)(lVar32 + 0xe0);
        lVar19 = lVar32 + 0x18;
        if (*(longlong *)(lVar32 + 0xd8) != 0) {
          lVar19 = *(longlong *)(lVar32 + 0xd8);
        }
        uVar29 = 0;
        if (0 < (int)uVar7) {
          uVar12 = (ulonglong)uVar7;
          uVar27 = uVar7;
          do {
            uVar12 = uVar12 >> 1;
            uVar28 = (uint)uVar12 + uVar29;
            if (*(uint *)(lVar19 + (ulonglong)uVar28 * 0x18) < local_2ec) {
              uVar29 = uVar28 + (uVar27 & 1);
            }
            bVar36 = 1 < uVar27;
            uVar27 = (uint)uVar12;
          } while (bVar36);
        }
        lVar32 = local_478;
        if (((((int)uVar29 < (int)uVar7) &&
             (*(uint *)(lVar19 + (ulonglong)uVar29 * 0x18) <= local_2ec)) &&
            (lVar19 = lVar19 + (ulonglong)uVar29 * 0x18, lVar19 != -4)) &&
           (uVar12 = (ulonglong)*(ushort *)(lVar19 + 0x14), uVar12 != 0xffff)) {
          lVar32 = *(longlong *)(local_428 + 8);
          lVar19 = uVar12 * 0x128;
          FUN_14055c180(lVar32 + lVar19,local_458,0);
          *(undefined1 *)(lVar32 + 0x60 + lVar19) = 1;
          lVar32 = local_478;
        }
      }
      FUN_1400ab81a(&local_2e8);
      lVar19 = CONCAT44(uStack_2e4,local_2e8);
      lVar33 = CONCAT44(uStack_2dc,uStack_2e0);
      local_2b8 = local_2d8 & 0xffffffff;
    } while ((lVar19 != local_418 || lVar33 != 0) || (int)local_2d8 != 0);
  }
LAB_1413e6716:
  uVar13 = *(undefined8 *)(local_458 + 0x5d8);
  plVar23 = *(longlong **)(local_458 + 0x5e0);
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
    UNLOCK();
  }
  local_288 = (undefined4 *)(lVar32 + 0x18);
  uStack_280 = uStack_280 & 0xffffffff00000000;
  uVar7 = 0;
  do {
    if (*(int *)((longlong)local_288 + 200) <= (int)uVar7) break;
    lVar32 = *(longlong *)((longlong)local_288 + 0xc0);
    if (*(longlong *)((longlong)local_288 + 0xc0) == 0) {
      lVar32 = (longlong)local_288;
    }
    uVar4 = *(undefined4 *)(lVar32 + 0x14 + (ulonglong)uVar7 * 0x18);
    puVar10 = local_118;
    if (local_118 == (undefined1 *)0x0) {
      puVar10 = local_158;
    }
    if ((longlong)(int)local_110 != 0) {
      lVar19 = 0;
      do {
        if (*(int *)(puVar10 + lVar19) == *(int *)(lVar32 + (ulonglong)uVar7 * 0x18)) {
          uVar24 = 0;
          uVar29 = uVar7;
          goto LAB_1413e67c1;
        }
        lVar19 = lVar19 + 4;
      } while ((longlong)(int)local_110 * 4 != lVar19);
    }
    FUN_145951cb4(&local_288);
    uVar24 = 6;
    uVar29 = (uint)uStack_280;
LAB_1413e67c1:
    FUN_1456c5456(uVar13,uVar4,uVar24);
    uVar7 = uVar29 + 1;
    uStack_280 = CONCAT44(uStack_280._4_4_,uVar7);
  } while (-2 < (int)uVar29);
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar23 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  if (local_118 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_1c0,local_1b8);
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14055a9b2(&local_b8);
  plVar23 = (longlong *)local_460[1];
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar23 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e7a6a FUN_1413e7a6a body=542 status=ok
// SIG undefined FUN_1413e7a6a(void)

ushort * FUN_1413e7a6a(longlong param_1,ushort *param_2,longlong *param_3,longlong param_4,
                      undefined8 param_5,longlong param_6,uint param_7)

{
  longlong *plVar1;
  byte *pbVar2;
  ushort uVar3;
  longlong *plVar4;
  bool bVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  int local_88;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(uint *)(param_1 + 0xe0);
  lVar9 = *(longlong *)(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    lVar9 = param_1 + 0x18;
  }
  uVar10 = 0;
  if (0 < (int)uVar8) {
    uVar11 = (ulonglong)uVar8;
    uVar12 = uVar8;
    do {
      uVar11 = uVar11 >> 1;
      uVar13 = (uint)uVar11 + (int)uVar10;
      if (*(uint *)(lVar9 + (ulonglong)uVar13 * 0x18) < param_7) {
        uVar10 = (ulonglong)(uVar13 + (uVar12 & 1));
      }
      bVar5 = 1 < uVar12;
      uVar12 = (uint)uVar11;
    } while (bVar5);
  }
  if ((((int)uVar10 < (int)uVar8) && (*(uint *)(lVar9 + uVar10 * 0x18) <= param_7)) &&
     (lVar9 = lVar9 + uVar10 * 0x18, lVar9 != -4)) {
    *(undefined4 *)param_2 = *(undefined4 *)(lVar9 + 0x14);
    goto LAB_1413e7b09;
  }
  piVar6 = (int *)FUN_1400a5d6e(param_5,&param_7);
  lVar9 = *param_3;
  if (*piVar6 == DAT_14cab2cd4) {
    local_78 = *(uint *)(lVar9 + 0x30);
LAB_1413e7b78:
    uVar8 = local_78 & 0xffff0000;
  }
  else {
    FUN_1400d12c6(param_5,piVar6);
    lVar7 = FUN_1400a4c08();
    if (lVar7 != 0) {
      local_88 = *piVar6;
      local_58 = *param_3;
      local_50 = param_3[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      local_90 = param_6;
      local_98 = param_5;
      FUN_1413e7a6a(param_1,&local_78,&local_58,lVar7);
      goto LAB_1413e7b78;
    }
    local_78 = 0xffff;
    uVar8 = 0;
  }
  local_98 = CONCAT44(local_98._4_4_,local_78 & 0xffff | uVar8);
  FUN_1459522ec(param_6,param_2,param_7,*(undefined4 *)(lVar9 + 0x30));
  local_78 = *(uint *)(param_4 + 0x2c);
  uStack_74 = *(undefined4 *)(param_4 + 0x30);
  uStack_70 = *(undefined4 *)(param_4 + 0x34);
  uStack_6c = *(undefined4 *)(param_4 + 0x38);
  local_68 = *(undefined4 *)param_2;
  FUN_14595219a(param_1 + 0x18,&param_7);
  uVar3 = *param_2;
  lVar9 = *(longlong *)(param_6 + 8);
  pbVar2 = (byte *)(lVar9 + 0x126 + (ulonglong)uVar3 * 0x128);
  *pbVar2 = *pbVar2 | 1;
  FUN_140a462a4(lVar9 + (ulonglong)uVar3 * 0x128,CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
LAB_1413e7b09:
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar6 = (int *)((longlong)plVar4 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e7c8a FUN_1413e7c8a body=147 status=ok
// SIG undefined FUN_1413e7c8a(void)

undefined1 * FUN_1413e7c8a(undefined1 *param_1)

{
  undefined1 auStack_38 [36];
  uint3 uStack_14;
  undefined5 local_11;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  uStack_c = 0;
  *param_1 = 0;
  *(ulonglong *)(param_1 + 1) = (ulonglong)uStack_14;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 **)(param_1 + 0x18) = &DAT_10000003c;
  *(undefined8 *)(param_1 + 0x20) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0x80000000;
  param_1[0x7c] = param_1[0x7c] & 0xc0;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1413e7d1e FUN_1413e7d1e body=532 status=ok
// SIG undefined FUN_1413e7d1e(void)

void FUN_1413e7d1e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b41c010;
  puVar3 = (undefined8 *)param_1[0x2c];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x27];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_146558a79(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x20];
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
  plVar4 = (longlong *)param_1[0x1e];
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
  puVar3 = (undefined8 *)param_1[0x1c];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (*(char *)((longlong)param_1 + 0xdc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  }
  plVar4 = (longlong *)param_1[0x1a];
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
  plVar4 = (longlong *)param_1[0x18];
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
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1413e7f32 FUN_1413e7f32 body=929 status=ok
// SIG undefined FUN_1413e7f32(void)

void FUN_1413e7f32(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  
  if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xd0))();
    puVar4 = *(undefined8 **)(param_1 + 0xe0);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xf8);
  if (lVar9 != 0) {
    FUN_1458232d6(lVar9);
    if (*(longlong **)(lVar9 + 0x90) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar9 + 0x90) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    plVar11 = *(longlong **)(param_1 + 0x100);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      LOCK();
      plVar6 = plVar11 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  lVar9 = *(longlong *)(param_1 + 0x108);
  iVar8 = *(int *)(param_1 + 0x110);
  uVar10 = 0;
  if ((longlong)iVar8 != 0) {
    lVar12 = 0;
    do {
      lVar5 = *(longlong *)(lVar9 + lVar12);
      FUN_1458232d6(lVar5);
      plVar11 = *(longlong **)(lVar5 + 0x90);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)iVar8 * 0x10 != lVar12);
    uVar10 = *(undefined4 *)(param_1 + 0x110);
    lVar9 = *(longlong *)(param_1 + 0x108);
  }
  FUN_146558a79(lVar9,uVar10);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_146558ac2(param_1 + 0x108);
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    *(undefined8 *)(param_1 + 0xe8) = 0;
    plVar11 = *(longlong **)(param_1 + 0xf0);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      LOCK();
      plVar6 = plVar11 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  if (((((*(int *)(param_1 + 0xa8) == 0) || (uVar3 = *(uint *)(param_1 + 0xa4), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0xa8))))) ||
     ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_1413e81f5;
  if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar11;
  }
  else {
    lVar9 = 0;
  }
  FUN_140457ffc(lVar9 + 0xc0,param_1);
  if (*(int *)(param_1 + 0xa8) == 0) {
LAB_1413e82be:
    lVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa4);
    lVar9 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != *(int *)(param_1 + 0xa8) ||
          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_1413e82be;
      lVar9 = *plVar11;
    }
  }
  FUN_140457ffc(lVar9 + 0xd8,param_1);
  if (*(longlong *)(param_1 + 0x98) == 0) goto LAB_1413e81f5;
  if (*(int *)(param_1 + 0xa8) == 0) {
LAB_1413e82c5:
    lVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa4);
    lVar9 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != *(int *)(param_1 + 0xa8) ||
          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_1413e82c5;
      lVar9 = *plVar11;
    }
  }
  FUN_14480f766(lVar9 + 0x60);
LAB_1413e81f5:
  plVar11 = (longlong *)(param_1 + 0x130);
  plVar6 = *(longlong **)(param_1 + 0x138);
  if (plVar6 == (longlong *)0x0) {
    *plVar11 = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_1413e826f;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar13 = iVar8 == iVar7;
      if (bVar13) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar13);
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      FUN_140457ffc(lVar9 + 0x80,param_1);
      FUN_140457ffc(lVar9 + 0x68,param_1);
      FUN_140457ffc(lVar9 + 200,param_1);
    }
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
LAB_1413e826f:
    plVar6 = *(longlong **)(param_1 + 0x138);
    *plVar11 = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001413e8296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1413e82d3 FUN_1413e82d3 body=73 status=ok
// SIG undefined FUN_1413e82d3(void)

void FUN_1413e82d3(longlong param_1,int param_2)

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



// FUNCTION 1413e831c FUN_1413e831c body=88 status=ok
// SIG undefined FUN_1413e831c(void)

void FUN_1413e831c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  FUN_1413e8374(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413e8374 FUN_1413e8374 body=77 status=ok
// SIG undefined FUN_1413e8374(void)

void FUN_1413e8374(longlong param_1,int param_2)

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



// FUNCTION 1413e83c2 FUN_1413e83c2 body=563 status=ok
// SIG undefined FUN_1413e83c2(void)

void FUN_1413e83c2(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xca);
  if (*(longlong *)(param_1 + 0xca) != 0) {
    while( true ) {
      do {
        lVar6 = lVar5;
        lVar5 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar4 != '\0') break;
      lVar5 = *(longlong *)(param_1 + 0xca);
    }
  }
  *param_1 = 2;
  param_1[0x28] = 0;
  if (param_1[0x29] != 0) {
    FUN_14481578e(param_1 + 0x26,0);
  }
  FUN_14068ded2(param_1 + 0x2a,0);
  FUN_14068ded2(param_1 + 0x3e,0);
  iVar2 = param_1[0x20];
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1e);
    local_78 = lVar5 + 0xf8;
    lVar6 = 0;
    do {
      *(undefined2 *)(lVar5 + 0x90 + lVar6) = 0;
      *(undefined1 *)(lVar5 + 0x92 + lVar6) = 0;
      puVar1 = (undefined8 *)(lVar5 + 0x94 + lVar6);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar5 + 0xa4 + lVar6);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar5 + 0xb4 + lVar6);
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_1400b22c2(&local_70,&DAT_149e02088);
      if ((longlong *)(lVar5 + 200 + lVar6) == &local_70) {
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar5 + 200 + lVar6) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar5 + 200 + lVar6) = local_70;
        local_70 = 0;
        *(undefined4 *)(lVar5 + 0xd0 + lVar6) = local_68;
        *(undefined4 *)(lVar5 + 0xd4 + lVar6) = local_64;
      }
      *(undefined8 *)(lVar5 + 0xd8 + lVar6) = 0;
      *(undefined4 *)(lVar5 + 0xe0 + lVar6) = 0;
      *(undefined4 *)(lVar5 + 0x100 + lVar6) = 0;
      if (*(int *)(lVar5 + 0x104 + lVar6) != 0) {
        FUN_14481578e(local_78 + lVar6,0);
      }
      *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0;
      *(undefined1 *)(lVar5 + 0x110 + lVar6) = 0;
      lVar6 = lVar6 + 0x280;
    } while ((longlong)iVar2 * 0x280 != lVar6);
  }
  lVar5 = FUN_14479d2ce(param_1 + 0x1c);
  if (lVar5 == 0) {
    if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145953e40(param_1,lVar5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
}



// FUNCTION 1413e8616 FUN_1413e8616 body=1958 status=ok
// SIG undefined FUN_1413e8616(void)

void FUN_1413e8616(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  if (((((*(longlong *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x54) != 0)) &&
       (uVar7 = *(uint *)(param_1 + 0x50), -1 < (int)uVar7)) &&
      (((int)uVar7 < DAT_14c9647dc &&
       (plVar12 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0)))) &&
     (((int)plVar12[2] == *(int *)(param_1 + 0x54) && ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))
     ) {
    if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
      lVar13 = *plVar12;
    }
    else {
      lVar13 = 0;
    }
    if ((*(longlong *)(lVar13 + 0x1e0) != 0) &&
       (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x1e0) + 0x30), lVar13 != 0)) {
      FUN_14480f766(lVar13 + 0x40);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1e8);
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar16 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x1d0);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar5 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_1413e874c;
        iVar5 = iVar5 + 0x20;
        uVar7 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar16 = 0;
      iVar5 = 0;
    }
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar17 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = (iVar5 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar10) {
      iVar10 = iVar3;
    }
  }
  if (iVar10 != iVar3) {
    uVar7 = 0xffffffff;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1c0) + 8 + (longlong)iVar10 * 0x18) +
                  0x30))();
      uVar7 = ~(uint)uVar15 & uVar7;
      puVar6 = *(uint **)(param_1 + 0x1e0);
      if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x1d0);
      }
      iVar4 = *(int *)(param_1 + 0x1e8);
      iVar10 = (int)uVar16;
      lVar13 = (longlong)iVar10;
      uVar11 = puVar6[lVar13] & uVar7;
      if (uVar11 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar5 = iVar5 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar10) {
          iVar8 = iVar10;
        }
        if (iVar10 < iVar9) {
          lVar14 = 0;
          do {
            uVar11 = puVar6[lVar13 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar10 + (int)lVar14 + 1);
              uVar7 = 0xffffffff;
              goto LAB_1413e8a74;
            }
            iVar5 = iVar5 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar8 - lVar13 != lVar14);
          uVar7 = 0xffffffff;
          lVar13 = (longlong)iVar8;
        }
        uVar16 = lVar13 + 1U & 0xffffffff;
        iVar10 = iVar4;
      }
      else {
LAB_1413e8a74:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar17 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = (iVar5 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar10) {
          iVar10 = iVar4;
        }
      }
    } while (iVar10 != iVar3);
  }
LAB_1413e874c:
  FUN_14615064c(param_1 + 0x1c0);
  plVar12 = *(longlong **)(param_1 + 0x110);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x40))(plVar12,0,0);
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12 = *(longlong **)(param_1 + 0x110);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      (**(code **)(*plVar12 + 0x60))(plVar12,1);
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x118);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x40))(plVar12,0,0);
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12 = *(longlong **)(param_1 + 0x118);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x118) = 0;
      (**(code **)(*plVar12 + 0x60))(plVar12,1);
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x120);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x40))(plVar12,0,0);
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12 = *(longlong **)(param_1 + 0x120);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      (**(code **)(*plVar12 + 0x60))(plVar12,1);
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x128);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x40))(plVar12,0,0);
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12 = *(longlong **)(param_1 + 0x128);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      (**(code **)(*plVar12 + 0x60))(plVar12,1);
    }
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_14654c040();
    plVar12 = *(longlong **)(param_1 + 0x130);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      (**(code **)(*plVar12 + 0x60))(plVar12,1);
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x160);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x38))(plVar12,0);
    plVar12 = *(longlong **)(param_1 + 0x160);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      (**(code **)(*plVar12 + 0x90))(plVar12,1);
    }
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_14575b6c2();
    plVar12 = *(longlong **)(param_1 + 0x138);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      (**(code **)(*plVar12 + 0xe8))(plVar12,1);
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x148);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0xd8))(plVar12,1);
    *(undefined8 *)((longlong)plVar12 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar12 + 0x24) = 0;
    plVar12 = *(longlong **)(param_1 + 0x148);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x148) = 0;
      (**(code **)(*plVar12 + 0x120))(plVar12,1);
    }
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_145aec406();
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    plVar12 = *(longlong **)(param_1 + 0x1b8);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_145aec406();
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    plVar12 = *(longlong **)(param_1 + 0x1a8);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_145aec406();
    *(undefined8 *)(param_1 + 400) = 0;
    plVar12 = *(longlong **)(param_1 + 0x198);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x198) = 0;
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_145ff4b74();
    plVar12 = *(longlong **)(param_1 + 0x150);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
      (**(code **)(*plVar12 + 0x70))(plVar12,1);
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x158);
  if (lVar13 != 0) {
    FUN_145ff117c(lVar13 + 0x10,0);
    *(undefined8 *)(lVar13 + 8) = 0;
    plVar12 = *(longlong **)(param_1 + 0x158);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      (**(code **)(*plVar12 + 0x70))(plVar12,1);
    }
  }
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x80);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_1413e8ad0;
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar16 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != iVar3) {
    uVar7 = 0xffffffff;
    do {
      FUN_145aec256(*(longlong *)(param_1 + 0x70) + (longlong)iVar5 * 0x58 + 8);
      uVar7 = ~(uint)uVar17 & uVar7;
      puVar6 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x80);
      }
      iVar4 = *(int *)(param_1 + 0x98);
      iVar5 = (int)uVar16;
      lVar13 = (longlong)iVar5;
      uVar11 = puVar6[lVar13] & uVar7;
      if (uVar11 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar14 = 0;
          do {
            uVar11 = puVar6[lVar13 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar14 + 1);
              uVar7 = 0xffffffff;
              goto LAB_1413e8b87;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar8 - lVar13 != lVar14);
          uVar7 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar16 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar4;
      }
      else {
LAB_1413e8b87:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar15 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar3);
  }
LAB_1413e8ad0:
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1413e8dbc FUN_1413e8dbc body=323 status=ok
// SIG undefined FUN_1413e8dbc(void)

void FUN_1413e8dbc(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  uint uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1413e8e97;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar1 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_58,0,uVar2,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar2,_Str,(int)sVar1 + 1);
LAB_1413e8e97:
  FUN_148a05522(param_2,local_50,param_1 + 2);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e8f00 FUN_1413e8f00 body=146 status=ok
// SIG undefined FUN_1413e8f00(void)

void FUN_1413e8f00(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_28 = 0x93a9d4e5;
  uStack_24 = 0x577947a7;
  uStack_20 = 0x8023d1a8;
  uStack_1c = 0x96f31813;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e8f94 FUN_1413e8f94 body=108 status=ok
// SIG undefined FUN_1413e8f94(void)

void FUN_1413e8f94(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_30 = param_6;
    local_38 = param_5;
    FUN_1413e9002(local_28,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e9002 FUN_1413e9002 body=729 status=ok
// SIG undefined FUN_1413e9002(void)

void FUN_1413e9002(longlong *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined1 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 local_120;
  longlong local_118;
  int local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  code *local_b0;
  undefined4 **local_a8;
  undefined1 local_99;
  undefined4 *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(byte *)((longlong)param_1 + 0x2dd) & 0x20) == 0) {
    lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
    if (lVar4 == 0) {
      (**(code **)(param_1[0x57] + 0x20))(param_1 + 0x57,&local_c8);
      local_d8 = local_c8;
      local_d0 = local_c0;
      FUN_14015671e(&local_98);
      lVar4 = local_c8;
      local_e8 = 0;
      uStack_e0 = 0;
      if ((longlong)local_c0 != 0) {
        lVar5 = 0;
        do {
          local_b8 = *(undefined8 *)(lVar4 + lVar5);
          local_b0 = (code *)&local_b8;
          local_a8 = (undefined4 **)CONCAT44(local_a8._4_4_,1);
          cVar2 = FUN_144b06fd6(&local_80,&local_b0);
          uVar1 = uStack_e0;
          if (cVar2 == '\0') {
            lVar6 = (longlong)(int)uStack_e0;
            uVar3 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
            if (uStack_e0._4_4_ < uVar3) {
              FUN_14075a758(&local_e8,uVar1 & 0xffffffff);
            }
            *(undefined8 *)(local_e8 + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar5);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)local_c0 * 8 != lVar5);
      }
      if (local_c8 != 0) {
        FUN_1400020a8(local_c8);
      }
      local_c8 = local_e8;
      local_c0 = (int)uStack_e0;
      local_bc = uStack_e0._4_4_;
      local_108 = *param_2;
      uStack_104 = param_2[1];
      uStack_100 = param_2[2];
      uStack_fc = param_2[3];
      local_f8 = *(undefined8 *)(param_2 + 4);
      local_118 = local_e8;
      local_110 = (int)uStack_e0;
      local_120 = 0x3f800000;
      local_128 = 0x3f800000;
      local_138 = param_6;
      local_140 = 0x3f800000;
      local_150 = param_5;
      local_130 = 0;
      local_148 = 1;
      local_158 = param_4;
      FUN_146e21388(&local_80,&local_118,&local_108,param_3);
      FUN_1448635f4(&local_98);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_78 = &local_b8;
      local_b8 = CONCAT71(local_b8._1_7_,param_6);
      local_80 = &local_99;
      local_99 = (undefined1)param_5;
      local_88 = &local_c8;
      local_c8 = CONCAT44(local_c8._4_4_,param_4);
      local_90 = &local_e8;
      local_e8 = CONCAT44(local_e8._4_4_,param_3);
      local_a8 = &local_98;
      local_b0 = FUN_143622fc2;
      local_98 = param_2;
      FUN_144966906(lVar4 + 0x138);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e92dc FUN_1413e92dc body=108 status=ok
// SIG undefined FUN_1413e92dc(void)

longlong FUN_1413e92dc(longlong param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x30,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x40,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  FUN_140056680(param_1 + 0x58,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_1;
}



// FUNCTION 1413e9348 FUN_1413e9348 body=228 status=ok
// SIG undefined FUN_1413e9348(void)

longlong FUN_1413e9348(void)

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
  if (DAT_14cadb4f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_147ac8eeb;
    local_40 = &LAB_1463ce796;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"GameStateBase",&DAT_14cadb4f8,FUN_1463ce774);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadb4f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413e942e FUN_1413e942e body=142 status=ok
// SIG undefined FUN_1413e942e(void)

undefined8 FUN_1413e942e(ulonglong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      else {
LAB_1413e946f:
        if (lVar5 == 0) goto LAB_1413e94b2;
      }
      uVar2 = FUN_141053868(lVar5,0);
      param_1 = uVar2 & 0xffffffff;
      uVar3 = (undefined7)(uVar2 >> 8);
      bVar1 = 1;
      goto LAB_1413e94b4;
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x140);
    lVar5 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    bVar1 = 0;
    uVar3 = 0;
    do {
      if (*plVar4 == param_2) {
        if (plVar4 == (longlong *)0x0) goto LAB_1413e94b2;
        lVar5 = plVar4[7];
        goto LAB_1413e946f;
      }
      plVar4 = plVar4 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
    goto LAB_1413e94b4;
  }
LAB_1413e94b2:
  bVar1 = 0;
  uVar3 = 0;
LAB_1413e94b4:
  return CONCAT71(uVar3,bVar1 & (byte)param_1);
}



// FUNCTION 1413e94bc FUN_1413e94bc body=20 status=ok
// SIG undefined FUN_1413e94bc(void)

undefined4 * FUN_1413e94bc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_2;
  return param_1;
}



// FUNCTION 1413e94d0 FUN_1413e94d0 body=1267 status=ok
// SIG undefined FUN_1413e94d0(void)

void FUN_1413e94d0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_1413e9843;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar2 = DAT_14c8407a8;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14a909c60;
  local_50[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar6;
  puVar3[4] = param_1;
  (**(code **)(*plVar2 + 0x58))(plVar2,local_58,&local_50);
  if (local_48 == 0) {
LAB_1413e9618:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1413e9618;
  }
  uVar4 = FUN_140c61bfa();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14a909cd0;
  local_50[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar6;
  FUN_1448b6402(uVar4,local_58,&local_50);
  if (local_48 == 0) {
LAB_1413e9727:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1413e9727;
  }
  uVar4 = FUN_140b631de();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14a909d40;
  local_50[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar6;
  FUN_1448b6402(uVar4,local_58,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1413e9843;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1413e9843:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413e99c4 FUN_1413e99c4 body=653 status=ok
// SIG undefined FUN_1413e99c4(void)

undefined8 FUN_1413e99c4(longlong *param_1)

{
  int *piVar1;
  byte *pbVar2;
  char *_Str;
  char cVar3;
  undefined8 uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong lVar16;
  undefined1 auStack_88 [32];
  byte *local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  char *local_40;
  int local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  cVar3 = (**(code **)(*param_1 + 0x418))();
  if (cVar3 == '\0') goto LAB_1413e9ace;
  local_68 = (byte *)0x0;
  plStack_60 = (longlong *)0x0;
  cVar3 = FUN_1446e9750(param_1,&local_68,local_58,0);
  if (cVar3 != '\0') {
    if (local_68 != (byte *)0x0) {
      if ((*local_68 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(local_68 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar14 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar8[9];
        }
        iVar7 = *(int *)((longlong)plVar14 +
                        (ulonglong)((int)plVar8[10] - 1U & *(uint *)(param_1 + 0x5a)) * 4);
        if (iVar7 != -1) {
          do {
            lVar10 = *plVar8 + (longlong)iVar7 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == *(uint *)(param_1 + 0x5a)) {
              if ((((lVar10 != 0) &&
                   (puVar9 = (undefined8 *)(lVar10 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_1413e9aa2;
              break;
            }
            iVar7 = *(int *)(lVar10 + 0x38);
          } while (iVar7 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_1413e9aa2:
    pbVar2 = (byte *)*puVar9;
    if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
       (_Str = *(char **)(pbVar2 + 8), _Str == (char *)0x0)) {
LAB_1413e9aae:
      local_58[2] = 0;
      uVar11 = 0;
    }
    else {
      sVar5 = strlen(_Str);
      iVar7 = (int)sVar5;
      if (iVar7 == 0) goto LAB_1413e9aae;
      lVar10 = (longlong)iVar7;
      pcVar15 = _Str + lVar10 + -1;
      uVar6 = 0;
      if (pcVar15 < _Str) {
        lVar13 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar15 - 0x30U)) break;
          uVar6 = uVar6 + 1;
          pcVar15 = pcVar15 + -1;
        } while (_Str <= pcVar15);
        lVar13 = 0;
        if (((uVar6 != 0) && ((int)uVar6 < iVar7)) &&
           ((lVar13 = 0, uVar6 < 0xb &&
            (lVar16 = -(ulonglong)uVar6, _Str[lVar16 + lVar10 + -1] == '_')))) {
          if ((uVar6 == 1) || (_Str[lVar16 + lVar10] != '0')) {
            lVar12 = 0;
            do {
              lVar13 = (longlong)_Str[lVar16 + lVar10] + lVar12 * 10;
              lVar12 = lVar13 + -0x30;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0);
            if (lVar12 < 0x7fffffff) {
              iVar7 = ~uVar6 + iVar7;
              lVar13 = lVar13 + -0x2f;
              goto LAB_1413e9ba5;
            }
          }
          lVar13 = 0;
        }
LAB_1413e9ba5:
        if (iVar7 == 0) goto LAB_1413e9aae;
      }
      local_34 = 0;
      local_40 = _Str;
      local_38 = iVar7;
      uVar6 = FUN_14001a6c0(&local_40,1);
      uVar11 = lVar13 << 0x20;
      local_58[2] = (longlong)uVar6;
    }
    local_58[2] = local_58[2] | uVar11;
  }
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_60 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1413e9ace:
  uVar4 = (**(code **)(*param_1 + 0x450))(param_1,local_58 + 2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


