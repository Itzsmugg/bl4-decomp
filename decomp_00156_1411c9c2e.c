// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1411c9c2e FUN_1411c9c2e body=334 status=ok
// SIG undefined FUN_1411c9c2e(void)

void FUN_1411c9c2e(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411c9ca0;
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
LAB_1411c9ca0:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1411c9d7c FUN_1411c9d7c body=608 status=ok
// SIG undefined FUN_1411c9d7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411c9d7c(uint param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_6d8 [40];
  uint local_6b0;
  undefined8 *local_6a8;
  undefined1 *local_698;
  undefined8 *puStack_690;
  undefined4 *local_688;
  undefined8 uStack_680;
  undefined4 local_674;
  code *local_670;
  undefined1 **local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined1 local_650 [1536];
  undefined1 *local_50;
  ulonglong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  local_674 = 0;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x2000000000;
  local_40 = 0;
  if ((param_1 & 1) == 0) {
    iVar2 = 1;
  }
  else {
    iVar4 = (DAT_14c9640f0 - (DAT_14c9640f0 + 1 >> 0x1f)) + 1 >> 1;
    iVar2 = (**(code **)(*DAT_14c82b500 + 0x20))();
    iVar3 = 0x10;
    if (iVar2 < 0x10) {
      iVar3 = iVar2;
    }
    iVar2 = 1;
    if (1 < iVar3) {
      iVar2 = iVar3;
    }
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
  }
  FUN_1411ca020(local_650,param_1,DAT_14c9640f0,iVar2);
  local_668 = &local_698;
  puStack_690 = &DAT_14c9640e8;
  local_688 = &local_674;
  local_6a8 = &local_660;
  local_660 = 0;
  local_658 = 0;
  local_670 = FUN_1407dba7a;
  local_6b0 = (uint)((int)local_48 == 1);
  local_698 = local_650;
  FUN_1411ca36e(L"GC.MarkClusteredObjectsAsReachable",local_48 & 0xffffffff,1);
  local_688 = (undefined4 *)0x0;
  uStack_680 = 0;
  local_698 = (undefined1 *)0x0;
  puStack_690 = (undefined8 *)0x0;
  FUN_1411ca16a(local_650,&local_698);
  puVar1 = local_688;
  lVar6 = (longlong)(int)uStack_680;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      if ((*(uint *)(*(longlong *)((longlong)puVar1 + lVar7) + 8) >> 0x18 & 1) != 0) {
        FUN_1468ff2e4(&DAT_14c9640e8);
        DAT_14c96410c = 1;
      }
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
  }
  puVar5 = local_698;
  lVar6 = (longlong)(int)puStack_690;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      FUN_1411caa58(~*(uint *)(*(longlong *)(puVar5 + lVar7) + 0xc),param_2);
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
  }
  _DAT_14c9502fc = local_674;
  if (local_688 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_698 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar5 = local_650;
  if (local_50 != (undefined1 *)0x0) {
    puVar5 = local_50;
  }
  FUN_1411c9fdd(puVar5,local_48 & 0xffffffff);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c9fdd FUN_1411c9fdd body=67 status=ok
// SIG undefined FUN_1411c9fdd(void)

void FUN_1411c9fdd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411ca020 FUN_1411ca020 body=313 status=ok
// SIG undefined FUN_1411ca020(void)

void FUN_1411ca020(longlong param_1,ulonglong param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_4;
  if (((int)param_4 < 1) && (uVar9 = 1, 0 < param_3 && (param_2 & 1) != 0)) {
    uVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
    uVar8 = 1;
    if (1 < (int)uVar1) {
      uVar8 = uVar1;
    }
    uVar1 = (param_3 + 99U) / 100;
    if (uVar1 < uVar8) {
      uVar8 = uVar1;
    }
    uVar9 = (ulonglong)uVar8;
  }
  uVar8 = (uint)uVar9;
  iVar2 = param_3 / (int)uVar8 + 1;
  iVar4 = *(int *)(param_1 + 0x608);
  *(uint *)(param_1 + 0x608) = iVar4 + uVar8;
  if ((uint)(*(int *)(param_1 + 0x60c) - iVar4) < uVar8) {
    FUN_1468b1cc2(param_1,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar5 = param_1;
  }
  FUN_1411ca159((longlong)iVar4 * 0x30 + lVar5,uVar9);
  iVar4 = 0;
  lVar5 = 0xc;
  uVar6 = 0;
  do {
    lVar7 = *(longlong *)(param_1 + 0x600);
    if (*(longlong *)(param_1 + 0x600) == 0) {
      lVar7 = param_1;
    }
    *(int *)(lVar7 + -0xc + lVar5) = iVar4;
    *(int *)(lVar7 + -8 + lVar5) = iVar4;
    iVar3 = param_3 - iVar2 * (uVar8 - 1);
    if (uVar6 < uVar8 - 1) {
      iVar3 = iVar2;
    }
    *(int *)(lVar7 + -4 + lVar5) = iVar3;
    iVar3 = iVar3 + iVar4 + -1;
    if (param_3 + -1 < iVar3) {
      iVar3 = param_3 + -1;
    }
    *(int *)(lVar7 + lVar5) = iVar3;
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + iVar2;
    lVar5 = lVar5 + 0x30;
  } while (uVar9 != uVar6);
  return;
}



// FUNCTION 1411ca159 FUN_1411ca159 body=17 status=ok
// SIG undefined FUN_1411ca159(void)

void FUN_1411ca159(void *param_1,ulonglong param_2)

{
  memset(param_1,0,(param_2 & 0xffffffff) * 0x30);
  return;
}



// FUNCTION 1411ca16a FUN_1411ca16a body=516 status=ok
// SIG undefined FUN_1411ca16a(void)

void FUN_1411ca16a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x608);
  if ((longlong)iVar6 == 1) {
    lVar5 = *(longlong *)(param_1 + 0x600);
    if (*(longlong *)(param_1 + 0x600) == 0) {
      lVar5 = param_1;
    }
    if ((int)param_2[1] + (int)param_2[3] == 0) {
      FUN_1468b1de2(param_2,lVar5 + 0x10);
      goto LAB_1411ca1fd;
    }
    lVar3 = lVar5 + 0x30;
LAB_1411ca1b2:
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar6 = iVar6 + *(int *)(lVar5 + 0x18);
      iVar7 = iVar7 + *(int *)(lVar5 + 0x28);
      lVar5 = lVar5 + 0x30;
    } while (lVar5 != lVar3);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x600);
    if (*(longlong *)(param_1 + 0x600) == 0) {
      lVar5 = param_1;
    }
    if (iVar6 != 0) {
      lVar3 = (longlong)iVar6 * 0x30 + lVar5;
      goto LAB_1411ca1b2;
    }
    iVar7 = 0;
    iVar6 = 0;
  }
  iVar4 = (int)param_2[1] + iVar6;
  if (-1 < iVar4) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      FUN_1411ca918(param_2);
    }
    iVar4 = (int)param_2[3] + iVar7;
    if (-1 < iVar4) {
      plVar1 = param_2 + 2;
      if (*(int *)((longlong)param_2 + 0x1c) < iVar4) {
        FUN_1411ca918(plVar1);
      }
      if (iVar6 + iVar7 != 0 && SCARRY4(iVar6,iVar7) == iVar6 + iVar7 < 0) {
        lVar5 = *(longlong *)(param_1 + 0x600);
        if (*(longlong *)(param_1 + 0x600) == 0) {
          lVar5 = param_1;
        }
        iVar6 = *(int *)(param_1 + 0x608);
        if ((longlong)iVar6 != 0) {
          lVar3 = 0;
          do {
            uVar2 = *(uint *)(lVar5 + 0x18 + lVar3);
            if ((longlong)(int)uVar2 != 0) {
              iVar7 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar7 + uVar2;
              if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar7) < uVar2) {
                FUN_1407dbc78(param_2,iVar7);
              }
              memcpy((void *)((longlong)iVar7 * 8 + *param_2),*(void **)(lVar5 + 0x10 + lVar3),
                     (longlong)(int)uVar2 << 3);
            }
            uVar2 = *(uint *)(lVar5 + 0x28 + lVar3);
            if ((longlong)(int)uVar2 != 0) {
              iVar7 = (int)param_2[3];
              *(uint *)(param_2 + 3) = iVar7 + uVar2;
              if ((uint)(*(int *)((longlong)param_2 + 0x1c) - iVar7) < uVar2) {
                FUN_1407dbc78(plVar1,iVar7);
              }
              memcpy((void *)((longlong)iVar7 * 8 + *plVar1),*(void **)(lVar5 + 0x20 + lVar3),
                     (longlong)(int)uVar2 << 3);
            }
            lVar3 = lVar3 + 0x30;
          } while ((longlong)iVar6 * 0x30 != lVar3);
        }
      }
LAB_1411ca1fd:
      if (*(int *)(param_1 + 0x60c) < 0) {
        FUN_1468b1e52(param_1);
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x600);
        if (*(longlong *)(param_1 + 0x600) == 0) {
          lVar5 = param_1;
        }
        FUN_1411c9fdd(lVar5,*(undefined4 *)(param_1 + 0x608));
        *(undefined4 *)(param_1 + 0x608) = 0;
      }
      *(undefined1 *)(param_1 + 0x610) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1411ca36e FUN_1411ca36e body=1448 status=ok
// SIG undefined FUN_1411ca36e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411ca36e(undefined8 param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,byte param_6,longlong param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined1 uVar19;
  int iVar20;
  undefined1 auStack_138 [32];
  int *local_118;
  undefined1 *local_110;
  byte *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e5;
  int local_e4;
  undefined1 local_e0 [7];
  undefined1 local_d9;
  int local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  int local_c8;
  char local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar14 = (int)param_2;
  if (iVar14 == 0) goto LAB_1411ca7d4;
  bVar6 = FUN_1447e0190();
  iVar8 = 0;
  if (((1 < iVar14) && (((~bVar6 | param_6) & 1) == 0)) &&
     (iVar8 = (param_3 / 2 + iVar14) / param_3, DAT_14c8335d8 < iVar8)) {
    iVar8 = DAT_14c8335d8;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = (uint)(*(undefined **)(lVar4 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar4 + 0x2c8) == 0) +
          iVar8;
  if (DAT_14c8c27ac < 1) {
    memset(&local_d0,0,0x82);
    local_f0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    FUN_140e55932(&local_d0,&local_f0,&local_d4,&local_d8);
    iVar9 = local_d8;
    local_110 = &local_e5;
    local_118 = &local_e4;
    FUN_1457b80ec(local_d4,local_d8,&local_d9,local_e0);
    DAT_14c8c27ac = iVar9;
    if ((0 < local_e4) && (local_e4 <= iVar9)) {
      DAT_14c8c27ac = local_e4;
    }
  }
  iVar9 = DAT_14c8c27ac;
  if (iVar8 < DAT_14c8c27ac) {
    iVar9 = iVar8;
  }
  iVar8 = 1;
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  iVar17 = *(int *)(param_7 + 8);
  iVar20 = iVar17;
  if (iVar9 < iVar17) {
    iVar20 = iVar9;
  }
  if (iVar17 == 0) {
    iVar20 = iVar9;
  }
  if (iVar20 < 2) {
    if (0 < iVar14) {
      iVar8 = 0;
      do {
        local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,iVar8);
        (*(code *)*param_4)(param_4[1],&local_d0);
        iVar8 = iVar8 + 1;
      } while (iVar14 != iVar8);
    }
    goto LAB_1411ca7d4;
  }
  iVar9 = iVar14;
  if ((param_6 & 2) == 0) {
    iVar17 = iVar20 * 6;
    iVar8 = 1;
    iVar18 = -6;
    param_2 = param_2 & 0xffffffff;
    do {
      if (iVar17 <= iVar14) {
        iVar8 = (iVar14 + -1 + iVar17) / iVar17;
        param_2 = (longlong)(iVar8 + iVar14 + -1) / (longlong)iVar8;
        iVar9 = (int)param_2;
        param_2 = param_2 & 0xffffffff;
        if (iVar20 <= iVar9) break;
      }
      iVar9 = (int)param_2;
      iVar17 = iVar17 - iVar20;
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0);
  }
  iVar20 = iVar20 + -1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_100 = (byte *)(lVar4 + 0xc60);
  uVar12 = 6;
  if ((*local_100 & 0x37) != 0) {
    uVar12 = 0;
  }
  uVar19 = 3;
  if ((param_6 & 8) == 0) {
    uVar19 = uVar12;
  }
  local_f8 = param_1;
  FUN_144a85b52(&local_f0,1);
  puVar2 = (undefined8 *)(lVar4 + 0x308);
  puVar11 = (uint *)*puVar2;
  if (puVar11 != (uint *)0x0) goto LAB_1411ca5a9;
  while( true ) {
    uVar13 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar13 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar13 | 1;
      __tlregdtor(&LAB_14274a1dc);
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
LAB_1411ca5a9:
    puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 0x3fU & 0xffffffffffffffc0);
    puVar15 = (uint *)(puVar16 + 0x10);
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
      puVar16 = (undefined8 *)((longlong)puVar11 + 0x97U & 0xffffffffffffffc0);
      puVar15 = (uint *)(puVar16 + 0x10);
      uVar13 = 0;
      if (puVar15 <= puVar11 + 0x4000) {
        uVar13 = 1;
        goto LAB_1411ca62e;
      }
    }
  }
  uVar13 = uVar13 + 1;
LAB_1411ca62e:
  *(uint **)(puVar11 + 0x10) = puVar15;
  puVar11[0x12] = uVar13;
  *puVar16 = &PTR_FUN_149e002e8;
  *(undefined4 *)(puVar16 + 1) = 0;
  *puVar16 = &PTR_FUN_149e01ec0;
  puVar16[3] = local_f8;
  *(undefined4 *)(puVar16 + 4) = 0;
  *(undefined4 *)(puVar16 + 5) = 0;
  *(int *)((longlong)puVar16 + 0x2c) = iVar14;
  *(int *)(puVar16 + 6) = iVar8;
  *(int *)((longlong)puVar16 + 0x34) = iVar9;
  puVar16[7] = param_7;
  puVar16[8] = param_4;
  puVar16[9] = &local_f0;
  *(undefined1 *)(puVar16 + 10) = uVar19;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  *(int *)((longlong)puVar16 + 0x24) = iVar9;
  *(int *)(puVar16 + 0xc) = iVar20;
  FUN_14480c5c6(puVar16 + 0xb,0);
  FUN_144afd251(puVar16[0xb],iVar20);
  if (puVar16 == (undefined8 *)0x0) {
    LOCK();
    iVar14 = _DAT_00000028 + 1;
    UNLOCK();
    if ((_DAT_00000028 != -1) && (iVar8 = _DAT_00000028, _DAT_00000028 < _DAT_00000060))
    goto LAB_1411ca6fc;
  }
  else {
    LOCK();
    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar16 + 5);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar14 = _DAT_00000028;
    if ((iVar8 != -1) && (iVar8 < *(int *)(puVar16 + 0xc))) {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      iVar14 = _DAT_00000028;
LAB_1411ca6fc:
      _DAT_00000028 = iVar14;
      local_d0 = puVar16;
      FUN_14491b968(&local_d0,iVar8,1);
      iVar14 = _DAT_00000028;
      if (local_d0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_d0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar14 = _DAT_00000028;
        if (*piVar1 == 0) {
          (**(code **)*local_d0)(local_d0,1);
          iVar14 = _DAT_00000028;
        }
      }
    }
  }
  _DAT_00000028 = iVar14;
  local_c4 = '\0';
  local_d0 = puVar16;
  local_c8 = iVar20;
  cVar7 = FUN_1400f7108(&local_d0,1);
  if (cVar7 == '\0') {
    plVar5 = (longlong *)CONCAT44(uStack_ec,local_f0);
    if (((param_6 & 4) == 0) || (*(int *)local_100 != 0x10)) {
      (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
    }
    else {
      cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,1,0);
      while (cVar7 == '\0') {
        (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,DAT_14c7585d4);
        cVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_ec,local_f0) + 0x20))
                          ((longlong *)CONCAT44(uStack_ec,local_f0),1,0);
      }
    }
  }
  if ((local_d0 != (undefined8 *)0x0) &&
     ((local_c4 != '\x01' || (FUN_14491b968(&local_d0,local_c8,1), local_d0 != (undefined8 *)0x0))))
  {
    LOCK();
    piVar1 = (int *)(local_d0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      if (*(code **)*local_d0 == FUN_140270b2e) {
        FUN_140270b2e(local_d0,1);
      }
      else {
        (**(code **)*local_d0)(local_d0,1);
      }
    }
  }
  FUN_144a75412(&local_f0);
LAB_1411ca7d4:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411ca918 FUN_1411ca918 body=320 status=ok
// SIG undefined FUN_1411ca918(void)

void FUN_1411ca918(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1411ca981;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1411ca981:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1411caa58 FUN_1411caa58 body=702 status=ok
// SIG undefined FUN_1411caa58(void)

void FUN_1411caa58(int param_1,longlong *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  uint *puVar18;
  bool bVar19;
  
  lVar13 = (longlong)param_1 * 0x50;
  lVar1 = DAT_14c9640e8 + lVar13;
  lVar12 = (longlong)*(int *)(DAT_14c9640e8 + 0x20 + lVar13);
  if (lVar12 == 0) {
    lVar12 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar12 == 0) {
      return;
    }
    puVar18 = *(uint **)(lVar1 + 0x28);
    bVar17 = false;
  }
  else {
    lVar13 = *(longlong *)(DAT_14c9640e8 + 0x18 + lVar13);
    lVar16 = 0;
    bVar17 = false;
    do {
      uVar10 = *(uint *)(lVar13 + lVar16);
      if (-1 < (int)uVar10) {
        lVar7 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        if ((*(uint *)(lVar7 + 8 + (ulonglong)(uVar10 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          puVar18 = (uint *)(lVar7 + (ulonglong)(uVar10 & 0xffff) * 0x18 + 8);
          LOCK();
          *puVar18 = *puVar18 & ~DAT_14c75ec9c;
          UNLOCK();
          LOCK();
          *puVar18 = *puVar18 | DAT_14c75ec98;
          UNLOCK();
        }
        else {
          *(undefined4 *)(lVar13 + lVar16) = 0xffffffff;
          bVar17 = true;
        }
      }
      lVar16 = lVar16 + 4;
    } while (lVar12 * 4 != lVar16);
    lVar12 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar12 == 0) goto joined_r0x0001411cac95;
    puVar18 = *(uint **)(lVar1 + 0x28);
  }
  puVar2 = puVar18 + lVar12;
  bVar9 = 0;
  do {
    uVar11 = DAT_14c75ec9c;
    uVar10 = *puVar18;
    if (-1 < (int)uVar10) {
      lVar12 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      if ((*(uint *)(lVar12 + 8 + (ulonglong)(uVar10 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
        puVar3 = (undefined8 *)(lVar12 + (ulonglong)(uVar10 & 0xffff) * 0x18);
        if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
          if ((0 < *(int *)((longlong)puVar3 + 0xc)) && ((*(uint *)(puVar3 + 1) >> 0x17 & 1) == 0))
          {
            do {
              uVar10 = *(uint *)(puVar3 + 1);
              if ((uVar10 >> 0x17 & 1) != 0) goto LAB_1411cabe5;
              LOCK();
              bVar19 = uVar10 == *(uint *)(puVar3 + 1);
              if (bVar19) {
                *(uint *)(puVar3 + 1) = uVar10 | 0x800000;
              }
              uVar10 = DAT_14c75ec9c;
              UNLOCK();
            } while (!bVar19);
            uVar14 = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0xffff);
            lVar12 = *(longlong *)
                      (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 0x10) * 8);
            if (((DAT_14c75ec9c & *(uint *)(lVar12 + 8 + uVar14 * 0x18)) != 0) &&
               (lVar12 = lVar12 + uVar14 * 0x18, (*(uint *)(lVar12 + 8) & DAT_14c75ec9c) != 0)) {
              uVar15 = ~DAT_14c75ec9c;
              uVar11 = *(uint *)(lVar12 + 8);
              do {
                LOCK();
                uVar4 = *(uint *)(lVar12 + 8);
                bVar19 = uVar11 == uVar4;
                if (bVar19) {
                  *(uint *)(lVar12 + 8) = uVar11 & uVar15;
                  uVar4 = uVar11;
                }
                uVar11 = uVar4;
                UNLOCK();
              } while (!bVar19);
              LOCK();
              *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | DAT_14c75ec98;
              UNLOCK();
              if ((uVar11 & uVar10) != 0) {
                uVar10 = *(uint *)(lVar12 + 0xc);
                goto LAB_1411cabcf;
              }
            }
          }
        }
        else if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) != 0) {
          uVar15 = ~DAT_14c75ec9c;
          uVar10 = *(uint *)(puVar3 + 1);
          do {
            LOCK();
            uVar4 = *(uint *)(puVar3 + 1);
            bVar19 = uVar10 == uVar4;
            if (bVar19) {
              *(uint *)(puVar3 + 1) = uVar10 & uVar15;
              uVar4 = uVar10;
            }
            uVar10 = uVar4;
            UNLOCK();
          } while (!bVar19);
          LOCK();
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar10 & uVar11) != 0) {
            uVar8 = *puVar3;
            iVar5 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
              FUN_1447f76d2(param_2,iVar5);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = uVar8;
            uVar10 = *(uint *)((longlong)puVar3 + 0xc);
            if ((int)uVar10 < 0) {
LAB_1411cabcf:
              FUN_1411caa58(~uVar10,param_2);
            }
          }
        }
      }
      else {
        *puVar18 = 0xffffffff;
        bVar9 = 1;
      }
    }
LAB_1411cabe5:
    puVar18 = puVar18 + 1;
  } while (puVar18 != puVar2);
  bVar17 = (bool)(bVar9 | bVar17);
joined_r0x0001411cac95:
  if (bVar17) {
    iVar5 = *(int *)(lVar1 + 0x10);
    if ((longlong)iVar5 != 0) {
      lVar12 = *(longlong *)(lVar1 + 8);
      lVar13 = 0;
      do {
        uVar10 = *(uint *)(lVar12 + lVar13);
        uVar8 = *(undefined8 *)
                 (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8) +
                 (ulonglong)(uVar10 & 0xffff) * 0x18);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447f76d2(param_2,iVar6);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = uVar8;
        lVar13 = lVar13 + 4;
      } while ((longlong)iVar5 * 4 != lVar13);
    }
    *(undefined1 *)(lVar1 + 0x48) = 1;
    DAT_14c96410c = 1;
  }
  return;
}



// FUNCTION 1411cad20 FUN_1411cad20 body=75 status=ok
// SIG undefined FUN_1411cad20(void)

void FUN_1411cad20(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != 0)) &&
     ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)*param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001411cad5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))();
      return;
    }
  }
  return;
}



// FUNCTION 1411cad6c FUN_1411cad6c body=207 status=ok
// SIG undefined FUN_1411cad6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1411cad6c(void)

{
  if ((DAT_14c9e900f & 2) == 0) {
    DAT_14c9e900f = DAT_14c9e900f | 2;
    _DAT_14c9e8fb0 = L"FUniformLightMapPolicyShaderParametersType";
    _DAT_14c9e8fc8 = FUN_146826540;
    _DAT_14c9e8fd0 = FUN_146825d77;
    _DAT_14c9e8fd8 = FUN_146825fd6;
    _DAT_14c9e8fe0 = FUN_1407e02ea;
    _DAT_14c9e8fe8 = FUN_146826273;
    _DAT_14c9e8fc0 = &LAB_1471d1620;
    _DAT_14c9e9000 = 0xffffffff00000006;
    _DAT_14c9e9008 = 2;
    DAT_14c9e900c = 0;
    _DAT_14c9e8ff0 = &LAB_1471d162e;
    FUN_145834504();
    FUN_1407e00cc(&DAT_14c9e8fa8);
  }
  return &DAT_14c9e8fa8;
}



// FUNCTION 1411cae3c FUN_1411cae3c body=92 status=ok
// SIG undefined FUN_1411cae3c(void)

void FUN_1411cae3c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x138);
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 0x469c4000;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x55000000;
  *(undefined4 *)(param_2 + 4) = 0x469c4000;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x55000000;
  param_2[5] = 0x1003f000000;
  *(undefined4 *)(param_2 + 6) = 0x100;
  *param_2 = &PTR_FUN_14b745950;
  FUN_1411cae98(param_2 + 7);
  return;
}



// FUNCTION 1411cae98 FUN_1411cae98 body=567 status=ok
// SIG undefined FUN_1411cae98(void)

undefined8 * FUN_1411cae98(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  puVar1 = param_1 + 2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  param_1[2] = &DAT_14a176f00;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0x42c80000461c4000;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f80000042c80000;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0x44000000461c4000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0x1b) = 0x461c4000;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0x4400000042b40000;
  *(undefined4 *)(param_1 + 0x1d) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xee) = 1;
  *(undefined4 *)(param_1 + 0x1e) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x1f) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x3f80000042960000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x42c80000;
  LOCK();
  UNLOCK();
  local_40 = DAT_14c761474 + 1;
  local_48 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_34,0,0);
  FUN_140650770(puVar1,local_34,0,1);
  FUN_14045d156(puVar1,local_34,0,1);
  LOCK();
  UNLOCK();
  local_40 = DAT_14c761474 + 1;
  local_48 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_38,0x3f800000,0x3f800000);
  FUN_140650770(puVar1,local_38,0,1);
  FUN_14045d156(puVar1,local_38,0,1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cb0d0 FUN_1411cb0d0 body=286 status=ok
// SIG undefined FUN_1411cb0d0(void)

undefined8 FUN_1411cb0d0(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1411cb1e8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411cb1e8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1411cb1e8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411cb195;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1411cb195;
    }
  }
  uVar6 = 0;
LAB_1411cb195:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cb1fe FUN_1411cb1fe body=110 status=ok
// SIG undefined FUN_1411cb1fe(void)

void FUN_1411cb1fe(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1411cb32c(param_1,0);
  iVar1 = *(int *)(param_1 + 0xb3c);
  if ((1 < iVar1) && (iVar2 = *(int *)(param_1 + 0xb44), iVar2 < iVar1)) {
    if (*(char *)(param_1 + 0x178) == '\x03') {
      *(int *)(param_1 + 0xb44) = iVar2 + 1;
      FUN_140ef1516(param_1);
      iVar1 = *(int *)(param_1 + 0xb3c);
      iVar2 = *(int *)(param_1 + 0xb44);
    }
    if (iVar2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001411cb261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x8c8) + 0x70))(param_1 + 0x8c8);
      return;
    }
  }
  return;
}



// FUNCTION 1411cb26c FUN_1411cb26c body=192 status=ok
// SIG undefined FUN_1411cb26c(void)

void FUN_1411cb26c(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (((*(longlong *)(param_1 + 0x2a8) != 0) && (*(char *)(param_1 + -0x750) == '\x03')) &&
     (fVar2 = *(float *)(param_1 + 0x164), 0.0 < fVar2)) {
    lVar1 = param_1 + 0x288;
    cVar4 = FUN_1403ae288(lVar1);
    if (cVar4 != '\0') {
      lVar5 = FUN_14008e0ae(lVar1);
      *(float *)(lVar5 + 0x58) = 1.0 / fVar2;
      FUN_14020a6cc(lVar5 + 0x50,1);
      uVar3 = FUN_14008e0ae(lVar1);
      FUN_1409d461e(uVar3,0x3f800000,1);
      FUN_1411cb32c(param_1 + -0x8c8,1);
      return;
    }
  }
  return;
}



// FUNCTION 1411cb32c FUN_1411cb32c body=713 status=ok
// SIG undefined FUN_1411cb32c(void)

void FUN_1411cb32c(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x900) != 0) {
      lVar3 = FUN_1401b4c98(param_1);
      lVar9 = *(longlong *)(param_1 + 0x900);
      if (lVar9 != 0) {
        uVar4 = (uint)lVar9;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
          lVar7 = lVar3 + 0x18;
          if (*(longlong *)(lVar3 + 0x28) != 0) {
            lVar7 = *(longlong *)(lVar3 + 0x28);
          }
          if ((*(uint *)(lVar7 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar7 = *(longlong *)(lVar3 + 8);
            lVar8 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar7 + lVar8 != 0) && (*(longlong *)(lVar7 + 0x60 + lVar8) == lVar9)) &&
               (*(char *)(lVar7 + 1 + lVar8) != '\x04')) {
              FUN_1405a424c(lVar3);
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x900) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x900) == 0) {
    uVar2 = FUN_1401b4c98(param_1);
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,3,0x10);
    puVar1 = local_a0;
    local_98 = 3;
    *local_a0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_a0[2] = lVar3;
    *local_a0 = &PTR_FUN_14b977c20;
    local_a0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar4 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_a0 + 3) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar6 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar6 = iVar5;
        }
      }
    }
    *(int *)((longlong)puVar1 + 0x1c) = iVar6;
    puVar1[4] = FUN_14417d692;
    *(undefined4 *)(puVar1 + 5) = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 1;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar2,(undefined8 *)(param_1 + 0x900),&local_88,0x3e4ccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_98 != 0) {
      if (local_a0 == (undefined8 *)0x0) goto LAB_1411cb56a;
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1411cb56a:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411cb5f6 FUN_1411cb5f6 body=266 status=ok
// SIG undefined FUN_1411cb5f6(void)

undefined8 * FUN_1411cb5f6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1411cb701(local_30);
  FUN_1446f470e(&local_48,L"SHIFT",1);
  local_20 = local_48;
  plVar2 = (longlong *)FUN_1401e3228();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_40);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x120))(local_40,param_1,local_30);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_38 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      goto LAB_1411cb689;
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1411cb689:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cb701 FUN_1411cb701 body=107 status=ok
// SIG undefined FUN_1411cb701(void)

undefined8 * FUN_1411cb701(undefined8 *param_1,SessionId param_2)

{
  AccountId AVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  AVar1 = bifrost::account::id(param_2);
  if (AVar1 != 0) {
    local_18 = &local_28;
    local_20 = FUN_143efd760;
    local_28 = param_1;
    bifrost::users::shiftId(AVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cb76e thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1411cb774 FUN_1411cb774 body=784 status=ok
// SIG undefined FUN_1411cb774(void)

void FUN_1411cb774(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  longlong lVar8;
  short *psVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  psVar6 = (short *)FUN_1411cba86();
  if (psVar6 != (short *)0x0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    local_78 = 0;
    uStack_70 = 0;
    lVar10 = param_1 + 0xb0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar7 = 0;
    local_60 = lVar10;
    if (*(int *)(param_1 + 200) != 0) {
      FUN_1449c0562(&local_68);
      iVar7 = *(int *)(param_1 + 200);
    }
    local_88 = local_58;
    uVar3 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_68;
    local_90 = local_60;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar4 = local_88._4_4_;
    local_a0 = plVar1;
    if ((local_88._4_4_ != iVar7) || (local_88 = uVar3, local_60 != lVar10)) {
      do {
        local_88 = uVar3;
        local_a8 = *local_a0;
        if (*(short *)(local_a8 + (longlong)iVar4 * 0x30) == *psVar6) {
          local_b0 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_147d58d64(&local_78,local_b0);
          }
          *(undefined4 *)(local_78 + local_b0 * 4) =
               *(undefined4 *)(local_a8 + (longlong)iVar4 * 0x30);
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar4 = local_88._4_4_;
        uVar3 = local_88;
      } while (((local_88._4_4_ != iVar7) || (local_90 != lVar10)) || (local_a0 != plVar1));
    }
    if ((longlong)(int)uStack_70 != 0) {
      lVar8 = (longlong)(int)uStack_70 << 2;
      lVar10 = local_78;
      do {
        FUN_147d58dea(plVar1,lVar10);
        lVar10 = lVar10 + 4;
        lVar8 = lVar8 + -4;
      } while (lVar8 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
      psVar9 = *(short **)(param_1 + 0xf0);
      lVar10 = (longlong)*(int *)(param_1 + 0xf8) * 0x28;
      do {
        if (*psVar9 == *psVar6) {
          FUN_1411cbc82(psVar9);
        }
        psVar9 = psVar9 + 0x14;
        lVar10 = lVar10 + -0x28;
      } while (lVar10 != 0);
    }
    iVar7 = *(int *)(psVar6 + 0x2c);
    if ((longlong)iVar7 != 0) {
      lVar10 = *(longlong *)(psVar6 + 0x28);
      lVar8 = 0;
      do {
        FUN_147d4cb06(param_1 + 0x160,*(undefined8 *)(lVar10 + lVar8));
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar7 * 8 != lVar8);
    }
    if ((longlong)*(int *)(psVar6 + 0x24) != 0) {
      lVar10 = *(longlong *)(psVar6 + 0x20);
      lVar8 = (longlong)*(int *)(psVar6 + 0x24) << 8;
      do {
        plVar1 = *(longlong **)(lVar10 + 0xf8);
        if (plVar1 != (longlong *)0x0) {
          *(undefined8 *)(lVar10 + 0xf8) = 0;
          (**(code **)(*plVar1 + 0x38))();
        }
        FUN_145834a84(param_1 + 0x200,lVar10);
        lVar10 = lVar10 + 0x100;
        lVar8 = lVar8 + -0x100;
      } while (lVar8 != 0);
    }
    if (*(longlong **)(psVar6 + 0x80) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(psVar6 + 0x80) + 0x20))();
      puVar2 = *(undefined8 **)(psVar6 + 0x80);
      if (puVar2 != (undefined8 *)0x0) {
        psVar6[0x80] = 0;
        psVar6[0x81] = 0;
        psVar6[0x82] = 0;
        psVar6[0x83] = 0;
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1458347b2(param_1 + 0x68,*psVar6);
    FUN_1411cbb54(param_1 + 0x18,param_2);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411cba86 FUN_1411cba86 body=205 status=ok
// SIG undefined FUN_1411cba86(void)

undefined8 FUN_1411cba86(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      while (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x18),
            *puVar1 != param_2) {
        iVar5 = (int)puVar1[2];
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        return 0;
      }
      if (puVar1 + 1 == (ulonglong *)0x0) {
        return 0;
      }
      uVar2 = (ushort)puVar1[1];
      if (*(int *)(param_1 + 0x90) <= (int)(uint)uVar2) {
        return 0;
      }
      lVar4 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x88);
      }
      if ((*(uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uint)uVar2 * 8);
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1411cbb54 FUN_1411cbb54 body=132 status=ok
// SIG undefined FUN_1411cbb54(void)

void FUN_1411cbb54(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1458349bc(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1411cbbd8 FUN_1411cbbd8 body=169 status=ok
// SIG undefined FUN_1411cbbd8(void)

void FUN_1411cbbd8(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001411cbc7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1411cbc82 FUN_1411cbc82 body=264 status=ok
// SIG undefined FUN_1411cbc82(void)

void FUN_1411cbc82(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = 0xffffffffffffffff;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    plVar3 = param_1 + 3;
    iVar5 = (**(code **)(*(longlong *)param_1[3] + 0x20))();
    if (iVar5 == 1) {
      FUN_1411b0914(plVar3);
      plVar2 = (longlong *)*plVar3;
      if (plVar2 == (longlong *)0x0) goto LAB_1411cbd03;
      (**(code **)(*plVar2 + 0x30))(plVar2,0xffffffff);
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != (longlong *)0x0) {
      *plVar3 = 0;
      pcVar7 = *(code **)(*plVar2 + 0x10);
      if (pcVar7 == (code *)&LAB_141067ecc) {
        plVar3 = (longlong *)plVar2[1];
        pcVar7 = *(code **)(*plVar3 + 0x10);
        if (pcVar7 == (code *)&LAB_1401bbf4a) {
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (plVar3 != (longlong *)0x0 && (int)*plVar2 == 0) {
            (**(code **)*plVar3)(plVar3,1);
          }
          goto LAB_1411cbd03;
        }
      }
      (*pcVar7)();
    }
  }
LAB_1411cbd03:
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)((longlong)puVar6 + 10) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x12) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + 1;
    UNLOCK();
  }
  lVar4 = param_1[2];
  param_1[2] = puVar6;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar4);
      FUN_1400020a8(lVar4);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 1411cbd8a FUN_1411cbd8a body=45 status=ok
// SIG undefined FUN_1411cbd8a(void)

undefined8 FUN_1411cbd8a(undefined8 param_1,int param_2)

{
  FUN_1411cbdb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 1411cbdb8 FUN_1411cbdb8 body=281 status=ok
// SIG undefined FUN_1411cbdb8(void)

void FUN_1411cbdb8(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d2e40;
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
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
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



// FUNCTION 1411cbed1 FUN_1411cbed1 body=176 status=ok
// SIG undefined FUN_1411cbed1(void)

void FUN_1411cbed1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar4[0xb] != 0) {
        FUN_1400020a8();
      }
      if (plVar4[5] != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[4];
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
      FUN_1411cbf81(plVar4[1],(int)plVar4[2]);
      if (plVar4[1] != 0) {
        FUN_1400020a8();
      }
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
      plVar4 = plVar4 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411cbf81 FUN_1411cbf81 body=77 status=ok
// SIG undefined FUN_1411cbf81(void)

void FUN_1411cbf81(longlong param_1,int param_2)

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



// FUNCTION 1411cbfce FUN_1411cbfce body=1850 status=ok
// SIG undefined FUN_1411cbfce(void)

void FUN_1411cbfce(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  uint *puVar12;
  longlong *plVar13;
  undefined8 *****pppppuVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  longlong *local_a0;
  int local_98;
  longlong *local_90;
  ushort local_88;
  byte local_80;
  undefined4 local_78 [2];
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = *param_2;
  plVar13 = (longlong *)param_2[1];
  if (plVar13 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = uVar8;
    plVar18 = *(longlong **)(param_1 + 0xe8);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1411cc574:
      LOCK();
      plVar2 = plVar18 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      if (plVar13 != (longlong *)0x0) goto LAB_1411cc040;
    }
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xe0) = uVar8;
    plVar18 = *(longlong **)(param_1 + 0xe8);
    if (plVar13 == plVar18) {
      LOCK();
      plVar18 = plVar13 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
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
    else {
      *(longlong **)(param_1 + 0xe8) = plVar13;
      if (plVar18 != (longlong *)0x0) goto LAB_1411cc574;
    }
LAB_1411cc040:
    LOCK();
    plVar18 = plVar13 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  local_b0 = *param_2;
  local_a8 = param_2[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_1411cc758(param_1,&local_b0,param_3,param_4);
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | (byte)(1 << ((byte)param_4 & 0x1f));
  *(byte *)(param_1 + 0x128) =
       *(byte *)(param_1 + 0x128) & 0xfb | *(byte *)(*(longlong *)(param_1 + 0xe0) + 0x180) & 4;
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x181);
  lVar9 = *param_3;
  uVar8 = FUN_140b9b479();
  lVar16 = *(longlong *)(lVar9 + 0x200);
  if (lVar16 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar16,uVar8,2);
  }
  FUN_140ccc900(lVar9,&local_a0,uVar8,param_4);
  uVar6 = FUN_1405d5f74(&local_a0);
  piVar1 = (int *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = uVar6;
  FUN_140841e14(piVar1,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  if (0x18 < local_88) {
    FUN_1400020a8();
  }
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if (uVar4 < 0xffffffff00000000) {
    plVar13 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar13 = (longlong *)0x0;
    }
    (**(code **)(*plVar13 + 0x58))(plVar13,param_1,uVar4,2);
  }
  else {
    uVar17 = (uint)uVar4;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c998088)) {
      puVar11 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar11 = DAT_14c998080;
      }
      if ((*(uint *)(puVar11 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar17 & 0x1f) & 1) != 0) {
        lVar9 = DAT_14c998060 + (ulonglong)(uVar17 & 0x7fffffff) * 0x68;
        puVar12 = *(uint **)(lVar9 + 0x18);
        if (*(uint **)(lVar9 + 0x18) == (uint *)0x0) {
          puVar12 = (uint *)(lVar9 + 8);
        }
        *puVar12 = *puVar12 | 4;
        *(byte *)(lVar9 + 0x60) = *(byte *)(lVar9 + 0x60) | 1;
      }
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) != '\x03') goto LAB_1411cc179;
  iVar19 = *piVar1;
  if (iVar19 == 0) {
    FUN_1402a453c(piVar1);
    iVar19 = *piVar1;
  }
  lVar9 = DAT_14c9a3d60;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  FUN_1446efa72(&local_a0,0,3,0x10);
  plVar13 = local_a0;
  local_98 = 3;
  *local_a0 = (longlong)&PTR_LAB_14a1c8700;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_a0[2] = lVar10;
  *local_a0 = (longlong)&PTR_FUN_14b9decf0;
  local_a0[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar17 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_a0 + 3) = uVar17;
    if ((int)uVar17 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar7 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar7 = *(int *)(lVar16 + 0x10);
      bVar20 = iVar7 == 0;
      if (bVar20) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar7 = iVar15;
      }
    }
  }
  *(int *)((longlong)plVar13 + 0x1c) = iVar7;
  plVar13[4] = (longlong)FUN_145bfcfd4;
  if (((local_98 == 0) || (local_a0 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_a0 + 0x30))(), cVar5 == '\0')) {
    if (local_98 != 0) {
      if (local_a0 == (longlong *)0x0) goto LAB_1411cc179;
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      goto LAB_1411cc401;
    }
  }
  else {
    lVar16 = (longlong)iVar19 * 0x88 + lVar9;
    plVar13 = (longlong *)((longlong)iVar19 * 0x88 + lVar9 + -0x18);
    if (*(int *)(lVar16 + -4) < 1) {
      iVar19 = *(int *)(lVar16 + -0x10);
      iVar7 = *(int *)(lVar16 + -8) + -1;
      *(int *)(lVar16 + -8) = iVar7;
      if (iVar7 <= iVar19) {
        iVar7 = iVar19;
        if (0 < iVar19) {
          iVar15 = 0;
          do {
            if (((*(int *)(*plVar13 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                (plVar18 = *(longlong **)(*plVar13 + (longlong)iVar15 * 0x10),
                plVar18 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar18 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar13,iVar15);
              FUN_14005b248(plVar13);
            }
            else {
              iVar15 = iVar15 + 1;
            }
            iVar7 = *(int *)(lVar16 + -0x10);
          } while (iVar15 < iVar7);
        }
        iVar15 = 2;
        if (2 < iVar7 * 2) {
          iVar15 = iVar7 * 2;
        }
        *(int *)(lVar16 + -8) = iVar15;
        if ((iVar15 < iVar19) && (*(int *)(lVar16 + -0xc) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_98 != 0) && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x38))(local_a0,local_70);
    }
    iVar19 = *(int *)(lVar16 + -0x10);
    *(uint *)(lVar16 + -0x10) = iVar19 + 1U;
    if (*(uint *)(lVar16 + -0xc) < iVar19 + 1U) {
      FUN_1447a71f6(plVar13,iVar19);
    }
    lVar9 = *plVar13;
    lVar16 = (longlong)iVar19 * 0x10;
    *(undefined8 *)(lVar9 + lVar16) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar16) = 0;
    *(longlong **)(lVar9 + lVar16) = local_a0;
    local_a0 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar16) = local_98;
LAB_1411cc401:
    local_98 = 0;
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1411cc179:
  lVar9 = *(longlong *)(param_1 + 0xe0);
  local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffffffffff00);
  local_78[0] = 0;
  FUN_1456bb102(&local_a0,param_1);
  FUN_1448729ea(lVar9 + 0x130,local_70,&local_a0);
  uVar6 = FUN_14005fbd2(local_70,0x78);
  *(undefined4 *)(param_1 + 0xfc) = uVar6;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppppuVar14 = local_70;
    if (0x18 < local_58) {
      pppppuVar14 = (undefined8 *****)local_70[0];
    }
    (*pcVar3)(pppppuVar14);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_1448173f8(local_78);
  if (((char)local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xfc);
  plVar13 = (longlong *)param_2[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar13 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cc758 FUN_1411cc758 body=2265 status=ok
// SIG undefined FUN_1411cc758(void)

void FUN_1411cc758(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong ****pppplVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  longlong ****pppplVar13;
  undefined *puVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *****ppppplVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [6];
  ushort local_98;
  byte local_90;
  longlong ****local_88;
  int local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *param_2;
  plVar16 = (longlong *)param_2[1];
  if (plVar16 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = uVar9;
    plVar21 = *(longlong **)(param_1 + 0x80);
    if (plVar21 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x80) = 0;
LAB_1411cce29:
      LOCK();
      plVar2 = plVar21 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      if (plVar16 != (longlong *)0x0) goto LAB_1411cc7cc;
    }
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x78) = uVar9;
    plVar21 = *(longlong **)(param_1 + 0x80);
    if (plVar16 == plVar21) {
      LOCK();
      plVar21 = plVar16 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x80) = plVar16;
      if (plVar21 != (longlong *)0x0) goto LAB_1411cce29;
    }
LAB_1411cc7cc:
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar16 = (longlong *)param_2[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x78);
  bVar3 = *(byte *)(param_1 + 0x91);
  bVar11 = (*(byte *)(lVar10 + 0x30) & 1) << 2;
  *(byte *)(param_1 + 0x91) = bVar3 & 0xfb | bVar11;
  bVar12 = (*(byte *)(lVar10 + 0x30) & 2) << 2;
  *(byte *)(param_1 + 0x91) = bVar3 & 0xf3 | bVar11 | bVar12;
  *(byte *)(param_1 + 0x91) = bVar3 & 0xe3 | bVar11 | bVar12 | (*(byte *)(lVar10 + 0x30) & 4) << 2;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar10 + 0x34);
  lVar10 = *param_3;
  uVar9 = FUN_140b9b479();
  lVar22 = *(longlong *)(lVar10 + 0x200);
  if (lVar22 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar22,uVar9,0);
  }
  FUN_140ccc900(lVar10,local_b0,uVar9,param_4);
  uVar24 = local_b0[0];
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,local_b0,3);
    uVar24 = 0;
    if (local_68 != 0) {
      uVar24 = local_88._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppplVar17 = &local_88;
      if (0x18 < local_70) {
        ppppplVar17 = (longlong *****)local_88;
      }
      (*pcVar4)(ppppplVar17);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  piVar1 = (int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = uVar24;
  FUN_14020a6cc(piVar1,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  if (uVar5 < 0xffffffff00000000) {
    plVar16 = (longlong *)0x0;
    if (DAT_14c9980d8 != 0) {
      plVar16 = DAT_14c9980d0;
    }
    (**(code **)(*plVar16 + 0x58))(plVar16,param_1,uVar5,0);
  }
  else {
    uVar19 = (uint)uVar5;
    if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c998088)) {
      puVar14 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar14 = DAT_14c998080;
      }
      if ((*(uint *)(puVar14 + ((uint)(uVar5 >> 3) & 0xffffffc)) >> (uVar19 & 0x1f) & 1) != 0) {
        lVar10 = DAT_14c998060 + (ulonglong)(uVar19 & 0x7fffffff) * 0x68;
        puVar15 = *(uint **)(lVar10 + 0x18);
        if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
          puVar15 = (uint *)(lVar10 + 8);
        }
        *puVar15 = *puVar15 | 1;
        *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
      }
    }
  }
  lVar10 = *param_3;
  uVar9 = FUN_140b9b479();
  lVar22 = *(longlong *)(lVar10 + 0x200);
  if (lVar22 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar22,uVar9,1);
  }
  FUN_140ccc900(lVar10,local_b0,uVar9,param_4);
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,local_b0,3);
    local_b0[0] = 0;
    if (local_68 != 0) {
      local_b0[0] = local_88._0_4_;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppplVar17 = &local_88;
      if (0x18 < local_70) {
        ppppplVar17 = (longlong *****)local_88;
      }
      (*pcVar4)(ppppplVar17);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 0xac) = local_b0[0];
  FUN_14020a6cc(param_1 + 0xa4,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  if (uVar5 < 0xffffffff00000000) {
    plVar16 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar16 = (longlong *)0x0;
    }
    (**(code **)(*plVar16 + 0x58))(plVar16,param_1,uVar5,1);
  }
  else {
    uVar19 = (uint)uVar5;
    if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c998088)) {
      puVar14 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar14 = DAT_14c998080;
      }
      if ((*(uint *)(puVar14 + ((uint)(uVar5 >> 3) & 0xffffffc)) >> (uVar19 & 0x1f) & 1) != 0) {
        lVar10 = DAT_14c998060 + (ulonglong)(uVar19 & 0x7fffffff) * 0x68;
        puVar15 = *(uint **)(lVar10 + 0x18);
        if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
          puVar15 = (uint *)(lVar10 + 8);
        }
        *puVar15 = *puVar15 | 2;
        *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x94) == 0) goto LAB_1411cc9b1;
  iVar20 = *piVar1;
  if (iVar20 == 0) {
    FUN_1402a453c(piVar1);
    iVar20 = *piVar1;
  }
  lVar10 = DAT_14c9a3d60;
  local_88 = (longlong ****)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  pppplVar6 = local_88;
  local_80 = 3;
  *local_88 = (longlong ***)&PTR_LAB_14a1c8700;
  LOCK();
  UNLOCK();
  pppplVar13 = (longlong ****)(DAT_14c758608 + 1);
  lVar22 = DAT_14c758608 + 1;
  if (pppplVar13 == (longlong ****)0x0) {
    LOCK();
    UNLOCK();
    pppplVar13 = (longlong ****)(DAT_14c758608 + 2);
    lVar22 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar22;
  local_88[2] = (longlong ***)pppplVar13;
  *local_88 = (longlong ***)&PTR_FUN_14b4aa350;
  local_88[3] = (longlong ***)0x0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar19 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_88 + 3) = uVar19;
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    iVar8 = *(int *)(lVar22 + 0x10);
    if (*(int *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar18);
      }
      LOCK();
      iVar8 = *(int *)(lVar22 + 0x10);
      bVar23 = iVar8 == 0;
      if (bVar23) {
        *(int *)(lVar22 + 0x10) = iVar18;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar8 = iVar18;
      }
    }
  }
  *(int *)((longlong)pppplVar6 + 0x1c) = iVar8;
  pppplVar6[4] = (longlong ***)FUN_148a19564;
  if (((local_80 == 0) || ((longlong *****)local_88 == (longlong *****)0x0)) ||
     (cVar7 = (*(code *)(*local_88)[6])(), cVar7 == '\0')) {
    if (local_80 != 0) {
      if ((longlong *****)local_88 == (longlong *****)0x0) goto LAB_1411cc9b1;
      (*(code *)**local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      goto LAB_1411ccbc2;
    }
  }
  else {
    lVar22 = lVar10 + (longlong)iVar20 * 0x88;
    plVar16 = (longlong *)(lVar10 + (longlong)iVar20 * 0x88 + -0x18);
    if (*(int *)(lVar22 + -4) < 1) {
      iVar20 = *(int *)(lVar22 + -0x10);
      iVar8 = *(int *)(lVar22 + -8) + -1;
      *(int *)(lVar22 + -8) = iVar8;
      if (iVar8 <= iVar20) {
        iVar8 = iVar20;
        if (0 < iVar20) {
          iVar18 = 0;
          do {
            if (((*(int *)(*plVar16 + 8 + (longlong)iVar18 * 0x10) == 0) ||
                (plVar21 = *(longlong **)(*plVar16 + (longlong)iVar18 * 0x10),
                plVar21 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar21 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(plVar16,iVar18);
              FUN_14005b248(plVar16);
            }
            else {
              iVar18 = iVar18 + 1;
            }
            iVar8 = *(int *)(lVar22 + -0x10);
          } while (iVar18 < iVar8);
        }
        iVar18 = 2;
        if (2 < iVar8 * 2) {
          iVar18 = iVar8 * 2;
        }
        *(int *)(lVar22 + -8) = iVar18;
        if ((iVar18 < iVar20) && (*(int *)(lVar22 + -0xc) != iVar8)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_80 != 0) && ((longlong *****)local_88 != (longlong *****)0x0)) {
      (*(code *)(*local_88)[7])(local_88,local_b0);
    }
    iVar20 = *(int *)(lVar22 + -0x10);
    *(uint *)(lVar22 + -0x10) = iVar20 + 1U;
    if (*(uint *)(lVar22 + -0xc) < iVar20 + 1U) {
      FUN_1447a71f6(plVar16,iVar20);
    }
    lVar10 = *plVar16;
    lVar22 = (longlong)iVar20 * 0x10;
    *(undefined8 *)(lVar10 + lVar22) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar22) = 0;
    *(longlong *****)(lVar10 + lVar22) = local_88;
    local_88 = (longlong ****)0x0;
    *(int *)(lVar10 + 8 + lVar22) = local_80;
LAB_1411ccbc2:
    local_80 = 0;
  }
  if ((longlong *****)local_88 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
LAB_1411cc9b1:
  *(byte *)(param_1 + 0x91) =
       *(byte *)(param_1 + 0x91) & 0xdf | (0.0 < *(float *)(param_1 + 0x9c)) << 5;
  plVar16 = (longlong *)param_2[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cd032 FUN_1411cd032 body=154 status=ok
// SIG undefined FUN_1411cd032(void)

undefined8 * FUN_1411cd032(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b693560;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1411cd0cc(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411cd0cc FUN_1411cd0cc body=55 status=ok
// SIG undefined FUN_1411cd0cc(void)

void FUN_1411cd0cc(longlong *param_1)

{
  FUN_1411cd104(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411cd104 FUN_1411cd104 body=550 status=ok
// SIG undefined FUN_1411cd104(void)

void FUN_1411cd104(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar7 = 0;
    iVar13 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_1411cd254;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_1411cd254;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1411cd254:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar8 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar8 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1411cd32a FUN_1411cd32a body=142 status=ok
// SIG undefined FUN_1411cd32a(void)

void FUN_1411cd32a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = (ulonglong)(int)param_2[1];
  if (0 < (longlong)uVar4) {
    do {
      uVar5 = uVar4 - 1;
      if ((longlong)*(int *)(param_1 + 0x2f8) != 0) {
        lVar6 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2f0) + lVar6);
          if (((int)plVar1[1] == *(int *)(*param_2 + uVar5 * 0x48)) &&
             ((int)plVar1[2] == *(int *)(*param_2 + 8 + uVar5 * 0x48))) {
            if ((plVar1 != (longlong *)0x0) &&
               (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
              FUN_1411cd3b8(param_2,uVar5 & 0xffffffff,1);
            }
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x2f8) * 0x10 != lVar6);
      }
      bVar2 = 1 < (longlong)uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  return;
}



// FUNCTION 1411cd3b8 FUN_1411cd3b8 body=210 status=ok
// SIG undefined FUN_1411cd3b8(void)

void FUN_1411cd3b8(longlong *param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  void *_Dst;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x48);
  FUN_14029e95e(*(undefined8 *)((longlong)_Dst + 0x38),*(undefined4 *)((longlong)_Dst + 0x40));
  if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)((longlong)_Dst + 0x10);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)((longlong)_Dst + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)((longlong)_Dst + 0x28)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)((longlong)_Dst + 0x28)) {
    FUN_1400020a8(*plVar1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar3) * 0x48);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  if (param_3 == '\x01') {
    FUN_1411cd48a(param_1);
    return;
  }
  return;
}



// FUNCTION 1411cd48a FUN_1411cd48a body=157 status=ok
// SIG undefined FUN_1411cd48a(void)

void FUN_1411cd48a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x48)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x48,8);
      uVar3 = uVar3 / 0x48;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x48,8);
    }
  }
  return;
}



// FUNCTION 1411cd528 FUN_1411cd528 body=1677 status=ok
// SIG undefined FUN_1411cd528(void)

void FUN_1411cd528(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (undefined1 *)param_1[0xc3];
  if (puVar4 != (undefined1 *)0x0) {
    if ((int)param_1[0x9f] < 1) {
LAB_1411cda58:
      *(undefined4 *)(puVar4 + 4) = 0;
      lVar14 = 0;
      iVar7 = 0;
    }
    else {
      puVar8 = (uint *)(param_1 + 0x66);
      if ((uint *)param_1[0x9e] != (uint *)0x0) {
        puVar8 = (uint *)param_1[0x9e];
      }
      if (((((puVar8[1] == 0) || (uVar9 = *puVar8, (int)uVar9 < 0)) || (DAT_14c9647dc <= (int)uVar9)
           ) || ((plVar10 = (longlong *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                 plVar10 == (longlong *)0x0 || (*(uint *)(plVar10 + 2) != puVar8[1])))) ||
         ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_1411cda58;
      lVar14 = *plVar10;
      if (lVar14 == 0) goto LAB_1411cda58;
      uVar9 = *(uint *)(lVar14 + 0xc);
      *(uint *)(puVar4 + 4) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      iVar7 = *(int *)(lVar18 + 0x10);
      if (*(int *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar7 = *(int *)(lVar18 + 0x10);
        bVar20 = iVar7 == 0;
        if (bVar20) {
          *(int *)(lVar18 + 0x10) = iVar12;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar7 = iVar12;
        }
      }
    }
    *(int *)(puVar4 + 8) = iVar7;
    *puVar4 = 1;
    if ((*(int *)(puVar4 + 0x128) != 0) &&
       (plVar10 = *(longlong **)(puVar4 + 0x120), plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x60))(plVar10,lVar14);
    }
    FUN_1411cdc38(param_1 + 0xc3);
  }
  if ((int)param_1[0x14] != *(int *)((longlong)param_1 + 0xcc)) {
    lVar14 = param_1[0x40];
    uVar16 = (uint)((ulonglong)lVar14 >> 0x10);
    uVar17 = (uint)lVar14 & 0xffff;
    lVar18 = param_1[0x41];
    uVar9 = (uint)((ulonglong)lVar18 >> 0x10);
    uVar15 = (uint)lVar18 & 0xffff;
    uVar15 = (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar15) +
             (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar15 >> 4);
    uVar9 = uVar15 >> 0xd ^
            ((int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar17) +
             (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar17 >> 4)) - uVar15;
    uVar17 = uVar9 << 8 ^ (-0x61c88647 - uVar15) - uVar9;
    uVar15 = uVar17 >> 0xd ^ (uVar15 - uVar9) - uVar17;
    uVar16 = uVar15 >> 0xc ^ (uVar9 - uVar17) - uVar15;
    uVar9 = uVar16 << 0x10 ^ (uVar17 - uVar15) - uVar16;
    uVar15 = uVar9 >> 5 ^ (uVar15 - uVar16) - uVar9;
    uVar16 = uVar15 >> 3 ^ (uVar16 - uVar9) - uVar15;
    uVar9 = uVar16 << 10 ^ (uVar9 - uVar15) - uVar16;
    plVar10 = param_1 + 0x1a;
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x1b];
    }
    iVar7 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)param_1[0x1c] - 1U & (uVar9 >> 0xf ^ uVar15 - (uVar16 + uVar9))) * 4);
    if (iVar7 != -1) {
      do {
        plVar10 = (longlong *)(param_1[0x13] + (longlong)iVar7 * 0x28);
        if ((*plVar10 == lVar14) &&
           (*(longlong *)(param_1[0x13] + 8 + (longlong)iVar7 * 0x28) == lVar18))
        goto LAB_1411cd7be;
        iVar7 = (int)plVar10[4];
      } while (iVar7 != -1);
    }
  }
  plVar10 = (longlong *)0x0;
LAB_1411cd7be:
  local_60 = param_1 + 0x3e;
  if (*(char *)(plVar10[2] + 0xf8) == '\0') {
    cVar5 = FUN_140510976();
    if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (*(int *)((longlong)param_1 + 0x304) != 0) {
    uVar9 = *(uint *)(param_1 + 0x60);
    lVar14 = 0;
    if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_1411cd836;
    plVar11 = (longlong *)
              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
    if ((plVar11 != (longlong *)0x0) &&
       (((int)plVar11[2] == *(int *)((longlong)param_1 + 0x304) &&
        ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) {
      lVar14 = *plVar11;
      goto LAB_1411cd836;
    }
  }
  lVar14 = 0;
LAB_1411cd836:
  puVar8 = (uint *)(param_1 + 0x66);
  if ((uint *)param_1[0x9e] != (uint *)0x0) {
    puVar8 = (uint *)param_1[0x9e];
  }
  if ((longlong)(int)param_1[0x9f] != 0) {
    local_68 = param_1 + 0x40;
    puVar13 = puVar8 + (longlong)(int)param_1[0x9f] * 0xe;
    do {
      if ((puVar8[1] == 0) || (uVar9 = *puVar8, (int)uVar9 < 0)) {
LAB_1411cda44:
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        if ((int)uVar9 < DAT_14c9647dc) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if (((plVar11 == (longlong *)0x0) || (*(uint *)(plVar11 + 2) != puVar8[1])) ||
             ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_1411cda44;
          lVar18 = *plVar11;
        }
      }
      lVar19 = plVar10[2];
      local_58 = 0;
      local_50 = (longlong *)param_1[0x65];
      if (local_50 != (longlong *)0x0) {
        iVar7 = (int)local_50[1];
        do {
          if (iVar7 == 0) {
            local_50 = (longlong *)0x0;
            goto LAB_1411cd8eb;
          }
          LOCK();
          iVar12 = (int)local_50[1];
          bVar20 = iVar7 == iVar12;
          if (bVar20) {
            *(int *)(local_50 + 1) = iVar7 + 1;
            iVar12 = iVar7;
          }
          iVar7 = iVar12;
          UNLOCK();
        } while (!bVar20);
        if (local_50 != (longlong *)0x0) {
          local_58 = param_1[100];
        }
      }
LAB_1411cd8eb:
      puVar1 = puVar8 + 4;
      local_78 = &local_58;
      FUN_1411ce04e(lVar19,lVar18,puVar8 + 2,puVar1);
      plVar11 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if ((lVar18 == 0) || ((*(uint *)(lVar18 + 8) >> 0x1e & 1) != 0)) {
        FUN_141002834(param_1,local_68,0);
      }
      else {
        (**(code **)(*param_1 + 0x90))(param_1,lVar18);
        lVar18 = plVar10[2];
        uVar6 = FUN_140b95084(puVar1);
        iVar7 = FUN_140b95012((longlong *)(lVar18 + 0x28),uVar6,puVar1);
        if ((iVar7 != -1) &&
           (lVar18 = (longlong)iVar7 * 0x58 + *(longlong *)(lVar18 + 0x28), lVar18 != 0)) {
          *(float *)((longlong)param_1 + 0x664) =
               *(float *)(lVar18 + 0x44) + *(float *)((longlong)param_1 + 0x664);
          (**(code **)(*param_1 + 0x60))(param_1,lVar18 + 0x18);
        }
        if (lVar14 != 0) {
          lVar18 = plVar10[2];
          uVar6 = FUN_140b95084(puVar1);
          iVar7 = FUN_140b95012((longlong *)(lVar18 + 0x28),uVar6,puVar1);
          if (iVar7 != -1) {
            lVar18 = *(longlong *)(lVar18 + 0x28);
            lVar19 = lVar18 + (longlong)iVar7 * 0x58;
            if ((lVar19 != 0) && ((longlong)iVar7 * 0x58 + lVar18 != -0x18)) {
              uVar9 = *(uint *)(lVar14 + 0xc);
              *(uint *)(lVar19 + 0x48) = uVar9;
              if ((int)uVar9 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              iVar7 = *(int *)(lVar18 + 0x10);
              if (*(int *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar12 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar12);
                }
                LOCK();
                iVar7 = *(int *)(lVar18 + 0x10);
                bVar20 = iVar7 == 0;
                if (bVar20) {
                  *(int *)(lVar18 + 0x10) = iVar12;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  iVar7 = iVar12;
                }
              }
              *(int *)(lVar19 + 0x4c) = iVar7;
            }
          }
        }
      }
      puVar8 = puVar8 + 0xe;
    } while (puVar8 != puVar13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1411cdbe8 FUN_1411cdbe8 body=79 status=ok
// SIG undefined FUN_1411cdbe8(void)

void FUN_1411cdbe8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 400);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1411cdc38 FUN_1411cdc38 body=1044 status=ok
// SIG undefined FUN_1411cdc38(void)

void FUN_1411cdc38(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_98 [43];
  byte local_6d;
  int local_6c;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = *param_1;
  if ((((((lVar8 != 0) && (*(int *)(lVar8 + 0x84) != 0)) &&
        (uVar3 = *(uint *)(lVar8 + 0x80), -1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        (plVar10 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar10 != (longlong *)0x0)))) &&
      ((((int)plVar10[2] == *(int *)(lVar8 + 0x84) &&
        (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((longlong *)*plVar10 != (longlong *)0x0))))
       && (lVar8 = (**(code **)(*(longlong *)*plVar10 + 0x180))(), lVar8 != 0)))) &&
     (iVar7 = FUN_14490d72a(lVar8), iVar7 != 3)) {
    iVar7 = *(int *)(*param_1 + 0x84);
    if ((((iVar7 != 0) && (uVar3 = *(uint *)(*param_1 + 0x80), -1 < (int)uVar3)) &&
        ((int)uVar3 < DAT_14c9647dc)) &&
       (((plVar10 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar7)) &&
        (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
         (((longlong *)*plVar10 != (longlong *)0x0 &&
          (lVar8 = (**(code **)(*(longlong *)*plVar10 + 0x180))(), uVar5 = DAT_14cb1ae68, lVar8 != 0
          )))))))) {
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_58,uVar5,lVar8);
      plVar10 = local_50;
      if ((local_58 == 0) || (local_50 == (longlong *)0x0)) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar11 = local_50 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_50 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      if (plVar10 != (longlong *)0x0) {
        iVar7 = (int)plVar10[1];
        do {
          plVar11 = (longlong *)0x0;
          if (iVar7 == 0) break;
          LOCK();
          iVar17 = (int)plVar10[1];
          bVar19 = iVar7 == iVar17;
          if (bVar19) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar17 = iVar7;
          }
          iVar7 = iVar17;
          UNLOCK();
          plVar11 = plVar10;
        } while (!bVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        if (plVar11 != (longlong *)0x0) {
          if (local_58 != 0) {
            iVar7 = *(int *)(local_58 + 0x630);
            lVar8 = (longlong)iVar7;
            if (lVar8 != 0) {
              local_68 = *(longlong **)(local_58 + 0x628);
              local_6d = *local_68 == *param_1;
              local_60 = local_68 + 2;
              iVar17 = 0;
              iVar12 = 0;
              do {
                bVar9 = local_6d ^ 1;
                lVar15 = (longlong)iVar12;
                iVar18 = iVar12 + 1;
                if (iVar12 + 1 < iVar7) {
                  iVar18 = iVar7;
                }
                plVar10 = local_60 + lVar15 * 2;
                iVar13 = iVar12;
                lVar16 = lVar15;
                do {
                  lVar16 = lVar16 + 1;
                  iVar14 = iVar18;
                  if (lVar8 <= lVar16) break;
                  lVar4 = *plVar10;
                  iVar13 = iVar13 + 1;
                  plVar10 = plVar10 + 2;
                  iVar14 = iVar13;
                } while ((bool)(local_6d & 1) == (lVar4 == *param_1));
                iVar18 = iVar14 - iVar12;
                local_6c = iVar17;
                if ((local_6d & 1) == 0) {
                  local_6d = bVar9;
                  if (iVar17 != iVar12) {
                    memmove(local_68 + (longlong)iVar17 * 2,local_68 + lVar15 * 2,
                            (longlong)iVar18 << 4);
                  }
                  iVar17 = iVar17 + iVar18;
                }
                else {
                  local_6d = bVar9;
                  FUN_14641b3b7(local_68 + lVar15 * 2,iVar18);
                  iVar17 = local_6c;
                }
                iVar12 = iVar14;
              } while (lVar16 < lVar8);
              *(int *)(local_58 + 0x630) = iVar17;
            }
            if (*(longlong *)(local_58 + 0x618) == *param_1) {
              *(undefined8 *)(local_58 + 0x618) = 0;
              plVar10 = *(longlong **)(local_58 + 0x620);
              if (plVar10 != (longlong *)0x0) {
                *(undefined8 *)(local_58 + 0x620) = 0;
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
              if (*(int *)(local_58 + 0x1f0) != 0x7fffffff) {
                cVar6 = FUN_140510976(local_58 + 0x1f0);
                if (cVar6 != '\0') {
                  FUN_145758894(local_58 + 0x1f0);
                }
              }
            }
          }
          LOCK();
          plVar10 = plVar11 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411ce04e FUN_1411ce04e body=4313 status=ok
// SIG undefined FUN_1411ce04e(void)

void FUN_1411ce04e(undefined8 *param_1,ulonglong param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  float *pfVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined ***pppuVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong *plVar32;
  undefined1 *puVar33;
  ulonglong uVar34;
  uint *puVar35;
  longlong lVar36;
  bool bVar37;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  uint *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)((longlong)param_4 + 0x14) == '\0') {
    *(int *)(param_1 + 0x2f) = *(int *)(param_1 + 0x2f) + 1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x31) = *(int *)(param_1 + 0x31) + 1;
  }
  else {
    *(int *)((longlong)param_1 + 0x17c) = *(int *)((longlong)param_1 + 0x17c) + 1;
    *(int *)((longlong)param_1 + 0x184) = *(int *)((longlong)param_1 + 0x184) + 1;
    *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
  }
  if (param_2 != 0) {
    uVar13 = FUN_1401b0f18();
    plVar14 = (longlong *)FUN_144718840(param_2,uVar13);
    lVar15 = (**(code **)(*plVar14 + 0x28))(plVar14);
    uVar3 = *(undefined4 *)((longlong)param_4 + 4);
    uVar4 = *(undefined4 *)(param_4 + 1);
    uVar5 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(lVar15 + 0xb8) = *(undefined4 *)param_4;
    *(undefined4 *)(lVar15 + 0xbc) = uVar3;
    *(undefined4 *)(lVar15 + 0xc0) = uVar4;
    *(undefined4 *)(lVar15 + 0xc4) = uVar5;
    *(undefined8 *)(lVar15 + 200) = param_4[2];
  }
  plVar14 = param_1 + 5;
  local_b8 = param_3;
  local_98 = param_2;
  if (*(int *)((longlong)param_1 + 0x5c) == 0) {
    uVar29 = *(uint *)(param_1 + 6);
    uVar28 = (ulonglong)uVar29;
    *(uint *)(param_1 + 6) = uVar29 + 1;
    if (*(uint *)((longlong)param_1 + 0x34) == uVar29) {
      FUN_1403e7a24(plVar14,uVar29);
    }
    iVar10 = *(int *)(param_1 + 10);
    if (iVar10 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar7 = iVar10 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    puVar24 = param_1 + 7;
    iVar19 = iVar10 + 1;
    iVar18 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar18 = iVar10;
    }
    if (iVar18 >> 5 == iVar7) {
      *(int *)(param_1 + 10) = iVar19;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x54) <= iVar10) {
        iVar7 = iVar10;
        if (iVar10 + 0x20U < 0xa0) {
          iVar19 = 0x80;
        }
        else {
          uVar8 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x54) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar8) {
              uVar9 = uVar8;
            }
          }
          else {
            uVar9 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar20 = (ulonglong)(uVar9 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar20 + 0xf);
              if (uVar9 < 0x1ffd) {
                uVar20 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar20 + 0xf >> 4]];
              }
              else {
                uVar34 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar34 < 0x7ff1) {
                  bVar17 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar26 = 0x32;
                  if (0x32 < bVar17) {
                    uVar26 = (ulonglong)bVar17;
                  }
                  uVar31 = 0x32 - (ulonglong)bVar17;
                  do {
                    uVar20 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0) goto LAB_1411cef69;
                    lVar15 = uVar26 + 1 + uVar31;
                    uVar31 = uVar31 - 1;
                  } while (lVar15 != 0x33);
                }
                uVar20 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar20 = (ulonglong)DAT_14c841df8;
                }
                uVar20 = -uVar20 & (uVar34 + uVar20) - 1;
              }
            }
            else {
              uVar20 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar20,0);
              iVar7 = *(int *)(param_1 + 10);
            }
          }
LAB_1411cef69:
          iVar12 = (int)(uVar20 >> 2);
          iVar19 = -0x20;
          if ((int)uVar8 <= iVar12) {
            iVar19 = iVar12 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x54) = iVar19;
        FUN_1446efbd8(puVar24,iVar7);
        iVar19 = *(int *)(param_1 + 10) + 1;
      }
      iVar7 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar7 = iVar19;
      }
      *(int *)(param_1 + 10) = iVar19;
      if (iVar19 % 0x20 != 0) {
        puVar21 = (undefined8 *)param_1[9];
        if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
          puVar21 = puVar24;
        }
        bVar17 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)puVar21 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)puVar21 + (longlong)(iVar7 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar15 = (longlong)(int)uVar29;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar24 = (undefined8 *)param_1[9];
    }
    bVar17 = (byte)iVar10 & 0x1f;
    puVar35 = (uint *)((longlong)puVar24 + (longlong)(iVar18 >> 5) * 4);
    *puVar35 = *puVar35 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    uVar28 = (ulonglong)*(uint *)(param_1 + 0xb);
    lVar15 = (longlong)(int)*(uint *)(param_1 + 0xb);
    iVar10 = *(int *)(param_1[5] + 4 + lVar15 * 0x58);
    *(int *)(param_1 + 0xb) = iVar10;
    iVar7 = *(int *)((longlong)param_1 + 0x5c) + -1;
    *(int *)((longlong)param_1 + 0x5c) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(param_1[5] + (longlong)iVar10 * 0x58) = 0xffffffff;
    }
  }
  local_a0 = (uint *)(param_1 + 7);
  uVar29 = 1;
  iVar10 = (int)uVar28;
  puVar35 = (uint *)param_1[9];
  if ((uint *)param_1[9] == (uint *)0x0) {
    puVar35 = local_a0;
  }
  iVar7 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar7 = iVar10;
  }
  puVar35[iVar7 >> 5] = puVar35[iVar7 >> 5] | 1 << ((byte)uVar28 & 0x1f);
  lVar36 = param_1[5];
  lVar15 = lVar15 * 0x58;
  _Src = (void *)(lVar36 + lVar15);
  *(undefined4 *)(lVar36 + 0x3c + lVar15) = 0;
  *(undefined8 *)(lVar36 + 0x34 + lVar15) = 0;
  *(undefined1 *)(lVar36 + 0x43 + lVar15) = 0;
  *(undefined2 *)(lVar36 + 0x41 + lVar15) = 0;
  *(undefined8 *)(lVar36 + lVar15) = *param_4;
  *(undefined8 *)(lVar36 + 8 + lVar15) = param_4[1];
  *(undefined4 *)(lVar36 + 0x10 + lVar15) = *(undefined4 *)(param_4 + 2);
  *(undefined1 *)(lVar36 + 0x14 + lVar15) = *(undefined1 *)((longlong)param_4 + 0x14);
  puVar24 = (undefined8 *)(lVar36 + 0x18 + lVar15);
  *puVar24 = 0;
  puVar24[1] = 0;
  *(undefined4 *)(lVar36 + 0x28 + lVar15) = 0xffffffff;
  *(undefined1 *)(lVar36 + 0x2c + lVar15) = 0;
  *(undefined4 *)(lVar36 + 0x30 + lVar15) = 0;
  *(undefined1 *)(lVar36 + 0x40 + lVar15) = 0;
  puVar35 = (uint *)(lVar36 + 0x44 + lVar15);
  *puVar35 = 0;
  puVar35[1] = 0;
  puVar35[2] = 0;
  puVar35[3] = 0xffffffff;
  uVar8 = FUN_140b95084(_Src);
  if (*(int *)(param_1 + 6) - *(int *)((longlong)param_1 + 0x5c) == 1) {
    uVar9 = 1;
LAB_1411ce297:
    if (((int)uVar9 < 1) || ((int)uVar29 <= *(int *)(param_1 + 0xe))) {
      uVar8 = *(int *)(param_1 + 0xe) - 1U & uVar8;
      *(uint *)((longlong)_Src + 0x54) = uVar8;
      puVar24 = (undefined8 *)param_1[0xd];
      if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
        puVar24 = param_1 + 0xc;
      }
      *(undefined4 *)((longlong)_Src + 0x50) =
           *(undefined4 *)
            ((longlong)puVar24 + ((longlong)*(int *)(param_1 + 0xe) - 1U & (longlong)(int)uVar8) * 4
            );
      puVar24 = (undefined8 *)param_1[0xd];
      if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
        puVar24 = param_1 + 0xc;
      }
      *(int *)((longlong)puVar24 +
              ((longlong)*(int *)(param_1 + 0xe) - 1U & (longlong)(int)uVar8) * 4) = iVar10;
    }
    else {
      *(uint *)(param_1 + 0xe) = uVar29;
      plVar32 = param_1 + 0xd;
      if (param_1[0xd] != 0) {
        FUN_1446efa72(plVar32,0,0,4);
        uVar29 = *(uint *)(param_1 + 0xe);
      }
      puVar24 = param_1 + 0xc;
      if (uVar29 == 1) {
        if (*plVar32 != 0) {
          FUN_1446efa72(plVar32,0,0,4);
        }
LAB_1411ce3a4:
        uVar8 = 0;
        do {
          puVar21 = (undefined8 *)param_1[0xd];
          if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
            puVar21 = puVar24;
          }
          *(undefined4 *)
           ((longlong)puVar21 + (ulonglong)(*(int *)(param_1 + 0xe) + 0x7fffffffU & uVar8) * 4) =
               0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar29 != uVar8);
      }
      else {
        if (uVar29 == 0) goto LAB_1411ce59a;
        FUN_1446efa72(plVar32,0,uVar29,4);
        if (0 < (int)uVar29) goto LAB_1411ce3a4;
      }
      iVar10 = *(int *)(param_1 + 10);
      if (iVar10 == 0) {
        uVar20 = 0;
        uVar34 = 1;
        iVar19 = 0;
        iVar7 = 0;
      }
      else {
        puVar35 = (uint *)param_1[9];
        if ((uint *)param_1[9] == (uint *)0x0) {
          puVar35 = local_a0;
        }
        uVar29 = *puVar35;
        if (uVar29 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          uVar20 = 0;
          uVar34 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar34 = uVar20;
          }
          iVar7 = 0;
          do {
            if (uVar34 == uVar20) goto LAB_1411ce59a;
            iVar7 = iVar7 + 0x20;
            uVar29 = puVar35[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar29 == 0);
        }
        else {
          uVar20 = 0;
          iVar7 = 0;
        }
        uVar34 = (ulonglong)(-uVar29 & uVar29);
        uVar26 = uVar34 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar19 = (iVar7 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar19) {
          iVar19 = iVar10;
        }
      }
      local_b0 = plVar14;
      if (iVar19 < iVar10) {
        uVar29 = 0xffffffff;
        local_c0 = param_4;
        local_90 = uVar28;
        do {
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,iVar7);
          lVar15 = param_1[5];
          lVar36 = (longlong)iVar19 * 0x58;
          iVar10 = FUN_140b95084(lVar15 + lVar36);
          uVar28 = (longlong)iVar10 & (longlong)*(int *)(param_1 + 0xe) - 1U;
          iVar10 = (int)uVar28;
          *(int *)(lVar15 + 0x54 + lVar36) = iVar10;
          puVar21 = (undefined8 *)param_1[0xd];
          if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
            puVar21 = puVar24;
          }
          *(undefined4 *)(lVar15 + 0x50 + lVar36) =
               *(undefined4 *)
                ((longlong)puVar21 + ((longlong)*(int *)(param_1 + 0xe) - 1U & uVar28) * 4);
          puVar21 = (undefined8 *)param_1[0xd];
          if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
            puVar21 = puVar24;
          }
          *(int *)((longlong)puVar21 +
                  ((longlong)iVar10 & (longlong)*(int *)(param_1 + 0xe) - 1U) * 4) = iVar19;
          uVar29 = ~(uint)uVar34 & uVar29;
          puVar35 = (uint *)param_1[9];
          if ((uint *)param_1[9] == (uint *)0x0) {
            puVar35 = local_a0;
          }
          iVar10 = *(int *)(param_1 + 10);
          iVar19 = (int)uVar20;
          lVar15 = (longlong)iVar19;
          uVar8 = puVar35[lVar15] & uVar29;
          iVar7 = (int)local_a8;
          param_4 = local_c0;
          uVar28 = local_90;
          plVar14 = local_b0;
          if (uVar8 == 0) {
            iVar18 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar18 = iVar10 + -1;
            }
            iVar18 = iVar18 >> 5;
            iVar12 = iVar18;
            if (iVar18 < iVar19) {
              iVar12 = iVar19;
            }
            if (iVar18 <= iVar19) break;
            lVar36 = 0;
            while( true ) {
              iVar7 = iVar7 + 0x20;
              uVar8 = puVar35[lVar15 + lVar36 + 1];
              if (uVar8 != 0) break;
              lVar36 = lVar36 + 1;
              if (iVar12 - lVar15 == lVar36) goto LAB_1411ce59a;
            }
            uVar20 = (ulonglong)(iVar19 + (int)lVar36 + 1);
            uVar29 = 0xffffffff;
          }
          uVar34 = (ulonglong)(-uVar8 & uVar8);
          uVar26 = uVar34 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar19 = (iVar7 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        } while (iVar19 < iVar10);
      }
    }
  }
  else {
    uVar9 = FUN_140b95012(plVar14,uVar8,_Src);
    if (uVar9 == 0xffffffff) {
      uVar9 = *(int *)(param_1 + 6) - *(int *)((longlong)param_1 + 0x5c);
      if (3 < uVar9) {
        uVar20 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
        lVar15 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar29 = 1 << ((byte)lVar15 & 0x1f);
      }
      goto LAB_1411ce297;
    }
    memmove((void *)((longlong)(int)uVar9 * 0x58 + *plVar14),_Src,0x50);
    FUN_1437edccc(plVar14,uVar28);
    uVar28 = (ulonglong)uVar9;
  }
LAB_1411ce59a:
  plVar32 = (longlong *)((longlong)(int)uVar28 * 0x58);
  lVar15 = *plVar14;
  puVar35 = (uint *)((longlong)plVar32 + lVar15 + 0x30);
  *(undefined8 *)((longlong)plVar32 + lVar15 + 0x28) = param_4[2];
  uVar3 = *(undefined4 *)((longlong)param_4 + 4);
  uVar4 = *(undefined4 *)(param_4 + 1);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(undefined4 *)((longlong)plVar32 + lVar15 + 0x18) = *(undefined4 *)param_4;
  *(undefined4 *)((longlong)plVar32 + lVar15 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)plVar32 + lVar15 + 0x20) = uVar4;
  *(undefined4 *)((longlong)plVar32 + lVar15 + 0x24) = uVar5;
  if (local_98 == 0) {
    *puVar35 = 0;
    iVar10 = 0;
  }
  else {
    uVar29 = *(uint *)(local_98 + 0xc);
    *puVar35 = uVar29;
    if ((int)uVar29 < DAT_14c9647dc) {
      lVar36 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
    }
    else {
      lVar36 = 0;
    }
    iVar10 = *(int *)(lVar36 + 0x10);
    if (*(int *)(lVar36 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar37 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar37) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar10 = *(int *)(lVar36 + 0x10);
      bVar37 = iVar10 == 0;
      if (bVar37) {
        *(int *)(lVar36 + 0x10) = iVar7;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar37) {
        iVar10 = iVar7;
      }
    }
  }
  *(int *)(lVar15 + 0x34 + (longlong)plVar32) = iVar10;
  lVar36 = *local_b8;
  *(longlong *)(lVar15 + 0x38 + (longlong)plVar32) = lVar36;
  *(undefined4 *)(lVar15 + 0x44 + (longlong)plVar32) = *(undefined4 *)(lVar36 + 0x48);
  if ((param_1[0x1a] == 0) &&
     (iVar10 = *(int *)((longlong)param_1 + 0x18c) + *(int *)(param_1 + 0x31),
     iVar10 != 0 &&
     SCARRY4(*(int *)((longlong)param_1 + 0x18c),*(int *)(param_1 + 0x31)) == iVar10 < 0)) {
    lVar36 = param_1[2];
    puVar24 = param_1 + 0x17;
    plVar14 = (longlong *)(lVar36 + 0x68);
    for (puVar21 = *(undefined8 **)(lVar36 + 0x68); puVar21 != (undefined8 *)0x0;
        puVar21 = (undefined8 *)*puVar21) {
      if ((puVar21[2] != 0) &&
         (pfVar2 = (float *)(puVar21[2] + 0x170),
         *pfVar2 <= *(float *)(param_1 + 0x2e) && *(float *)(param_1 + 0x2e) != *pfVar2)) {
        if ((longlong *)puVar21[3] != plVar14) goto LAB_1411ce70c;
        param_1[0x17] = puVar21;
        param_1[0x18] = puVar21[1];
        param_1[0x19] = param_1;
        param_1[0x1a] = plVar14;
        if ((longlong *)puVar21[1] != (longlong *)0x0) {
          *(longlong *)puVar21[1] = (longlong)puVar24;
        }
        puVar21[1] = puVar24;
        plVar23 = plVar14;
        if ((undefined8 *)*plVar14 == puVar21) goto LAB_1411ce706;
        goto LAB_1411ce709;
      }
    }
    param_1[0x17] = 0;
    plVar23 = (longlong *)(lVar36 + 0x70);
    param_1[0x18] = *(undefined8 *)(lVar36 + 0x70);
    param_1[0x19] = param_1;
    param_1[0x1a] = plVar14;
    if (*(longlong *)(lVar36 + 0x68) == 0) {
      *plVar14 = (longlong)puVar24;
    }
    if ((longlong *)*plVar23 != (longlong *)0x0) {
      *(longlong *)*plVar23 = (longlong)puVar24;
    }
LAB_1411ce706:
    *plVar23 = (longlong)puVar24;
LAB_1411ce709:
    *(int *)(lVar36 + 0x78) = *(int *)(lVar36 + 0x78) + 1;
  }
LAB_1411ce70c:
  plVar14 = (longlong *)param_1[0x2a];
  if ((plVar14 == (longlong *)0x0) || (*(char *)((longlong)param_4 + 0x14) != '\0'))
  goto LAB_1411cedda;
  (**(code **)(*plVar14 + 0x48))(plVar14,param_4,(longlong)plVar32 + lVar15 + 0x18);
  iVar10 = *(int *)((longlong)plVar32 + lVar15 + 0x34);
  if (iVar10 == 0) {
LAB_1411cee22:
    plVar14 = (longlong *)0x0;
  }
  else {
    uVar29 = *puVar35;
    plVar14 = (longlong *)0x0;
    if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
      puVar24 = (undefined8 *)
                ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
      if ((puVar24 == (undefined8 *)0x0) ||
         ((*(int *)(puVar24 + 2) != iVar10 || ((*(uint *)(puVar24 + 1) & 0x10200000) != 0))))
      goto LAB_1411cee22;
      plVar14 = (longlong *)*puVar24;
    }
  }
  if (*(int *)(param_1 + 0x21) == 0) {
LAB_1411cee29:
    puVar27 = (undefined1 *)0x0;
  }
  else {
    uVar29 = *(uint *)((longlong)param_1 + 0x104);
    puVar27 = (undefined1 *)0x0;
    if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
      puVar24 = (undefined8 *)
                ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
      if ((puVar24 == (undefined8 *)0x0) ||
         ((*(int *)(puVar24 + 2) != *(int *)(param_1 + 0x21) ||
          ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)))) goto LAB_1411cee29;
      puVar27 = (undefined1 *)*puVar24;
    }
  }
  if (*(int *)(param_1 + 0x22) == 0) {
LAB_1411cee30:
    plVar23 = (longlong *)0x0;
  }
  else {
    uVar29 = *(uint *)((longlong)param_1 + 0x10c);
    plVar23 = (longlong *)0x0;
    if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
      puVar24 = (undefined8 *)
                ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
      if ((puVar24 == (undefined8 *)0x0) ||
         ((*(int *)(puVar24 + 2) != *(int *)(param_1 + 0x22) ||
          ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)))) goto LAB_1411cee30;
      plVar23 = (longlong *)*puVar24;
    }
  }
  bVar17 = 1;
  local_b8 = plVar32;
  if (plVar14 == (longlong *)0x0) {
LAB_1411cee08:
    plVar25 = (longlong *)0x0;
LAB_1411cee1a:
    puVar33 = (undefined1 *)0x0;
  }
  else {
    uVar13 = FUN_1401b0f18();
    plVar32 = (longlong *)(**(code **)(*plVar14 + 0x288))(plVar14,uVar13);
    if (plVar32 == (longlong *)0x0) goto LAB_1411cee08;
    uVar13 = FUN_1401b0f18();
    plVar16 = (longlong *)FUN_144718840(plVar32,uVar13);
    plVar25 = (longlong *)0x0;
    if ((plVar32 == plVar16) || (plVar16 == (longlong *)0x0)) goto LAB_1411cee1a;
    lVar36 = (**(code **)(*plVar16 + 0x28))(plVar16);
    if ((lVar36 == 0) || (*(int *)(lVar36 + 0xd4) == 0)) goto LAB_1411cee08;
    uVar29 = *(uint *)(lVar36 + 0xd0);
    plVar25 = (longlong *)0x0;
    if (((int)uVar29 < 0) || (plVar25 = (longlong *)0x0, DAT_14c9647dc <= (int)uVar29))
    goto LAB_1411cee1a;
    plVar25 = (longlong *)
              ((ulonglong)((uVar29 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
    if ((plVar25 == (longlong *)0x0) ||
       ((((int)plVar25[2] != *(int *)(lVar36 + 0xd4) || ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)
         ) || (plVar25 = (longlong *)*plVar25, plVar25 == (longlong *)0x0)))) goto LAB_1411cee08;
    puVar33 = (undefined1 *)plVar25[0x15];
    if (puVar33 == (undefined1 *)0x0) {
LAB_1411cee17:
      bVar17 = 0;
      goto LAB_1411cee1a;
    }
    lVar36 = FUN_1412bd498();
    if ((*(int *)(*(longlong *)(puVar33 + 0x10) + 0x38) < *(int *)(lVar36 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar33 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar36 + 0x38) * 8) != lVar36 + 0x30)) goto LAB_1411cee17;
    bVar17 = 0;
  }
  if (plVar23 != (longlong *)0x0) {
    (**(code **)(*plVar23 + 0xa18))(plVar23,plVar14);
  }
  if (!(bool)(bVar17 | plVar25 == plVar23)) {
    (**(code **)(*plVar25 + 0xa18))(plVar25,plVar14);
  }
  if (puVar27 != (undefined1 *)0x0) {
    local_88 = puVar27;
    local_80 = plVar14;
    FUN_1447cd2ec(puVar27 + 0x3c0);
  }
  if (puVar33 != (undefined1 *)0x0) {
    local_88 = puVar33;
    local_80 = plVar14;
    FUN_1447cd2ec(puVar33 + 0x3a0);
  }
  cVar6 = (**(code **)(*(longlong *)param_1[0x2a] + 0x30))();
  plVar14 = local_b8;
  if (cVar6 != '\0') {
    *(undefined4 *)((longlong)param_1 + 500) = 4;
    if (((*(int *)(param_1 + 0x22) != 0) &&
        (uVar29 = *(uint *)((longlong)param_1 + 0x10c), -1 < (int)uVar29)) &&
       (((int)uVar29 < DAT_14c9647dc &&
        ((((plVar32 = (longlong *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
           plVar32 != (longlong *)0x0 && ((int)plVar32[2] == *(int *)(param_1 + 0x22))) &&
          ((*(uint *)(plVar32 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar32 != (longlong *)0x0)
         ))))) {
      (**(code **)(*(longlong *)*plVar32 + 0xa80))();
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14ab66cc0;
      local_60 = &LAB_1437ede64;
      local_88 = &LAB_140ba5f00;
      FUN_140ba5e30(param_1 + 0x42,&local_88);
      if (local_88 != (undefined1 *)0x0) {
        pppuVar22 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar22 = &local_68;
        }
        (*(code *)(*pppuVar22)[2])();
      }
    }
    if (((*(int *)(param_1 + 0x21) != 0) &&
        (uVar29 = *(uint *)((longlong)param_1 + 0x104), -1 < (int)uVar29)) &&
       (((((int)uVar29 < DAT_14c9647dc &&
          ((puVar24 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
           puVar24 != (undefined8 *)0x0 && (*(int *)(puVar24 + 2) == *(int *)(param_1 + 0x21))))) &&
         ((*(uint *)(puVar24 + 1) & 0x10200000) == 0)) &&
        (puVar27 = (undefined1 *)*puVar24, puVar27 != (undefined1 *)0x0)))) {
      local_88 = puVar27;
      FUN_1447cd2ec(puVar27 + 0x3e0);
    }
  }
  if ((((*(int *)(param_1 + 0x22) != 0) &&
       (uVar29 = *(uint *)((longlong)param_1 + 0x10c), -1 < (int)uVar29)) &&
      ((int)uVar29 < DAT_14c9647dc)) &&
     (((plVar32 = (longlong *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
       plVar32 != (longlong *)0x0 && ((int)plVar32[2] == *(int *)(param_1 + 0x22))) &&
      (((*(uint *)(plVar32 + 1) & 0x10200000) == 0 &&
       ((*plVar32 != 0 && (plVar32 = (longlong *)param_1[0x24], plVar32 != (longlong *)0x0)))))))) {
    local_b8 = (longlong *)((longlong)plVar14 + lVar15 + 0x38);
    iVar10 = (int)plVar32[1];
    do {
      if (iVar10 == 0) goto LAB_1411cedb8;
      LOCK();
      iVar7 = (int)plVar32[1];
      bVar37 = iVar10 == iVar7;
      if (bVar37) {
        *(int *)(plVar32 + 1) = iVar10 + 1;
        iVar7 = iVar10;
      }
      iVar10 = iVar7;
      UNLOCK();
    } while (!bVar37);
    lVar15 = param_1[0x23];
    local_c0 = param_1;
    local_a8 = plVar32;
    if (lVar15 != 0) {
      uVar29 = *(uint *)(lVar15 + 0x448);
      if (uVar29 == 0) {
        uVar28 = 1;
        uVar20 = 0;
        iVar10 = 0;
        uVar8 = 0;
      }
      else {
        puVar35 = *(uint **)(lVar15 + 0x440);
        if (*(uint **)(lVar15 + 0x440) == (uint *)0x0) {
          puVar35 = (uint *)(lVar15 + 0x438);
        }
        uVar8 = *puVar35;
        if (uVar8 == 0) {
          iVar10 = uVar29 + 0x1e;
          if (-1 < (int)(uVar29 - 1)) {
            iVar10 = uVar29 - 1;
          }
          uVar20 = 0;
          uVar28 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar28 = uVar20;
          }
          iVar10 = 0;
          do {
            if (uVar28 == uVar20) goto LAB_1411ceda4;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar35[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar20 = 0;
          iVar10 = 0;
        }
        uVar28 = (ulonglong)(-uVar8 & uVar8);
        uVar34 = uVar28 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar8 = (iVar10 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        if ((int)uVar29 <= (int)uVar8) {
          uVar8 = uVar29;
        }
      }
      if (uVar8 != uVar29) {
        local_a0 = (uint *)(lVar15 + 0x28);
        uVar9 = 0xffffffff;
        local_98 = (ulonglong)uVar29;
        do {
          puVar35 = *(uint **)(lVar15 + 0x428);
          if (*(uint **)(lVar15 + 0x428) == (uint *)0x0) {
            puVar35 = local_a0;
          }
          plVar14 = *(longlong **)(puVar35 + (longlong)(int)uVar8 * 8);
          if ((plVar14 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*plVar14 + 0x60))(plVar14,*local_b8), cVar6 != '\0')) {
            puVar35[(longlong)(int)uVar8 * 8 + 2] = puVar35[(longlong)(int)uVar8 * 8 + 2] + 1;
          }
          uVar9 = uVar9 & ~(uint)uVar28;
          puVar35 = *(uint **)(lVar15 + 0x440);
          if (*(uint **)(lVar15 + 0x440) == (uint *)0x0) {
            puVar35 = (uint *)(lVar15 + 0x438);
          }
          uVar29 = *(uint *)(lVar15 + 0x448);
          iVar7 = (int)uVar20;
          lVar36 = (longlong)iVar7;
          uVar8 = puVar35[lVar36] & uVar9;
          if (uVar8 == 0) {
            iVar19 = uVar29 + 0x1e;
            if (-1 < (int)(uVar29 - 1)) {
              iVar19 = uVar29 - 1;
            }
            iVar19 = iVar19 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar18 = iVar19;
            if (iVar19 < iVar7) {
              iVar18 = iVar7;
            }
            iVar12 = iVar7;
            if (iVar7 < iVar19) {
              lVar30 = 0;
              do {
                uVar8 = puVar35[lVar36 + lVar30 + 1];
                if (uVar8 != 0) {
                  uVar20 = (ulonglong)(iVar7 + (int)lVar30 + 1);
                  uVar9 = 0xffffffff;
                  goto LAB_1411ced72;
                }
                iVar10 = iVar10 + 0x20;
                lVar30 = lVar30 + 1;
                uVar9 = 0xffffffff;
                iVar12 = iVar18;
              } while (iVar18 - lVar36 != lVar30);
            }
            uVar20 = (ulonglong)(iVar12 + 1);
            uVar8 = uVar29;
          }
          else {
LAB_1411ced72:
            uVar28 = (ulonglong)(-uVar8 & uVar8);
            uVar34 = uVar28 * 2 + 1;
            lVar36 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            uVar8 = (iVar10 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
            if ((int)uVar29 <= (int)uVar8) {
              uVar8 = uVar29;
            }
          }
        } while (uVar8 != (uint)local_98);
      }
    }
LAB_1411ceda4:
    plVar32 = local_a8;
    param_1 = local_c0;
    LOCK();
    plVar14 = local_a8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar32 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
      }
    }
  }
LAB_1411cedb8:
  if ((param_1[0x37] != 0) && (*(int *)(param_1 + 0x38) - 1U < 0xfffffffe)) {
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x38) = 0x4000;
    param_1[0x39] = 0;
  }
  puVar27 = (undefined1 *)*param_5;
  if (puVar27 != (undefined1 *)0x0) {
    plVar14 = (longlong *)param_5[1];
    local_88 = puVar27;
    local_80 = plVar14;
    if (plVar14 == (longlong *)0x0) {
      FUN_145ff300c(param_1,&local_88);
    }
    else {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      FUN_145ff300c(param_1);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar32 = plVar14 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
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
    }
  }
LAB_1411cedda:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cf128 FUN_1411cf128 body=157 status=ok
// SIG undefined FUN_1411cf128(void)

void FUN_1411cf128(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa4cdd0;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_145805506(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] == 0) goto LAB_1411cf18a;
  while( true ) {
    FUN_1400020a8();
LAB_1411cf18a:
    if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) break;
    param_1[0xf] = *(undefined8 *)param_1[0xf];
  }
  FUN_1411cf1c5(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_1411cf1b1;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_1411cf1b1:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1411cf1c5 FUN_1411cf1c5 body=53 status=ok
// SIG undefined FUN_1411cf1c5(void)

void FUN_1411cf1c5(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1411cf1fa FUN_1411cf1fa body=69 status=ok
// SIG undefined FUN_1411cf1fa(void)

undefined8 * FUN_1411cf1fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa4cea0;
  FUN_1401be6ed(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411cf240 FUN_1411cf240 body=1174 status=ok
// SIG undefined FUN_1411cf240(void)

undefined8 FUN_1411cf240(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  size_t sVar4;
  wchar_t *_Str;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b0;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_14009b010(&local_c8,3,0);
    FUN_1446dcc2e(param_3,&local_c8);
    plVar3 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
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
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  FUN_14009b010(&local_e8,1,0);
  FUN_140a9b590(param_1 + 0x3910,&local_c8,0);
  local_f8 = local_c8;
  if (local_e8 != 0) {
    FUN_1401269d0(local_e8,&local_f8);
  }
  plStack_f0 = (longlong *)CONCAT44(plStack_f0._4_4_,DAT_14cbe6fb8);
  local_f8 = DAT_14cbe6fb0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_118 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_e8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_14009b010(&local_f8,1,0);
  FUN_1411cf6d8(param_1 + 0x3910,&local_c8,0);
  local_108 = local_c8;
  if (local_f8 != 0) {
    FUN_1401269d0(local_f8,&local_108);
  }
  plStack_100 = (longlong *)CONCAT44(plStack_100._4_4_,DAT_14cbe6fd0);
  local_108 = DAT_14cbe6fc8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_118 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x3988) < 2) goto LAB_1411cf3c5;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  FUN_14009b010(&local_108,1,0);
  if (*(int *)(param_1 + 0x3988) == 0) {
    _Str = L"";
LAB_1411cf568:
    local_48 = 0;
    sVar4 = wcslen(_Str);
    FUN_1446fe5a4(&local_c8,_Str,sVar4 & 0xffffffff,1);
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x3980);
    local_48 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_1411cf568;
    local_40 = 0;
    local_38 = 0;
  }
  FUN_1417381b0(&local_108,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_d0 = DAT_14cbe6fe8;
  local_d8 = DAT_14cbe6fe0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_118 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_108,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1411cf3c5:
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  FUN_14009b010(&local_108,1,0);
  if (local_108 != 0) {
    FUN_1404a8912(local_108,*(undefined4 *)(param_1 + 0x3990));
  }
  local_d0 = DAT_14cbe7000;
  local_d8 = DAT_14cbe6ff8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_118 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_108,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cf6d8 FUN_1411cf6d8 body=667 status=ok
// SIG undefined FUN_1411cf6d8(void)

longlong * FUN_1411cf6d8(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (lVar5 == 0) {
    uVar4 = FUN_140aff5aa();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x60) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x68) != 0) {
LAB_1411cf713:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = lVar6;
    uVar4 = FUN_14477b664(lVar5);
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
    param_2[2] = *(longlong *)(param_1 + 0x68);
    goto LAB_1411cf736;
  }
  if (lVar5 != 0 && lVar6 != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_1 + 0x58);
        *(longlong *)(param_1 + 0x68) = lVar5;
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x58);
          lVar5 = *(longlong *)(param_1 + 0x60);
          goto LAB_1411cf713;
        }
        goto LAB_1411cf770;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
LAB_1411cf770:
  bVar2 = FUN_1411cf974(param_1);
  if ((bVar2 & param_3) == 1) {
    lVar6 = FUN_1411cfb7f();
    lVar5 = *(longlong *)(lVar6 + 0x70);
    if (lVar5 == 0) {
      uVar4 = FUN_140aff5aa();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x70) = lVar5;
    }
    lVar7 = *(longlong *)(lVar6 + 0x78);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(lVar6 + 0x68) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if (plVar1 == (longlong *)0x0) {
LAB_1411cf970:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 == '\0') goto LAB_1411cf970;
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x68));
      }
      *(longlong *)(lVar6 + 0x78) = lVar7;
    }
  }
  else {
    lVar7 = 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar4 = FUN_140aff5aa();
  lVar5 = FUN_14477b664(uVar4);
  param_2[1] = lVar5;
  lVar5 = FUN_140aff5aa();
  uVar4 = FUN_140aff5aa();
  FUN_1402d1bfa(&local_38,uVar4,lVar7);
  if (*param_2 != local_38) {
    param_2[2] = 0;
  }
  *param_2 = local_38;
  lVar6 = FUN_140aff5aa();
  if (lVar5 == 0) {
LAB_1411cf7ff:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_1411cf7ff;
  if (param_2[1] != lVar6) {
    param_2[2] = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lVar5 = FUN_14477b664(uVar4);
  param_2[1] = lVar5;
  if (lVar5 != 0 && local_38 != 0) {
    param_2[2] = lVar7;
  }
LAB_1411cf736:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cf974 FUN_1411cf974 body=522 status=ok
// SIG undefined FUN_1411cf974(void)

uint FUN_1411cf974(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  char local_38 [4];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 == 0) {
    uVar6 = FUN_14037df6e();
    lVar4 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x48) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      plVar7 = (longlong *)(param_1 + 0x50);
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
LAB_1411cfb73:
        *plVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x40));
        *plVar7 = lVar4;
        if (lVar4 != 0) goto LAB_1411cf9a7;
      }
    }
LAB_1411cf9cd:
    lVar4 = FUN_140a9a328(param_1);
    if (lVar4 != 0) {
      lVar5 = FUN_1411cfb7f();
      cVar2 = FUN_140114204(lVar5 + 0x80);
      if (cVar2 != '\0') {
        local_38[0] = '\0';
        local_34 = 0;
        local_2c = 0;
        uVar3 = 0;
        lVar4 = FUN_140149a73(lVar4,0);
        if (lVar4 != 0) {
          uVar3 = 0;
          FUN_14039fc7b(lVar5 + 0x80,local_38,lVar4,0);
          if (local_38[0] == '\x01') {
            uVar3 = (uint)(local_2c != 0);
          }
          else if (local_38[0] != '\0') {
            uVar3 = FUN_140321d1a(local_38);
          }
        }
        goto LAB_1411cfa51;
      }
    }
  }
  else {
LAB_1411cf9a7:
    lVar4 = *(longlong *)(param_1 + 0x60);
    if (lVar4 == 0) {
      uVar6 = FUN_140aff5aa();
      lVar4 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x60) = lVar4;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      if ((*(longlong *)(param_1 + 0x58) != 0) && (lVar4 != 0)) {
        plVar7 = (longlong *)(param_1 + 0x68);
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) goto LAB_1411cfb73;
        uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x58));
        *plVar7 = lVar4;
        if (lVar4 != 0) goto LAB_1411cfb6c;
      }
      goto LAB_1411cf9cd;
    }
  }
LAB_1411cfb6c:
  uVar3 = 0;
LAB_1411cfa51:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1411cfb7f FUN_1411cfb7f body=432 status=ok
// SIG undefined FUN_1411cfb7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1411cfb7f(void)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbe6c90 == (longlong *)0x0) {
    plVar4 = &DAT_14cbe6ca0;
    memset(&DAT_14cbe6ca0,0,0x118);
    _DAT_14cbe6cb0 = 0xffffffff;
    _DAT_14cbe6c98 = &PTR_FUN_14b77f140;
    _DAT_14cbe6d20 = 0;
    _DAT_14cbe6d28 = 0;
    uRam000000014cbe6d30 = 0;
    _DAT_14cbe6d38 = 0;
    _DAT_14cbe6cb8 = 0;
    uRam000000014cbe6cc0 = 0;
    _DAT_14cbe6cc8 = 0;
    uRam000000014cbe6cd0 = 0;
    _DAT_14cbe6cd8 = 0;
    uRam000000014cbe6ce0 = 0;
    _DAT_14cbe6ce8 = 0;
    uRam000000014cbe6cf0 = 0;
    _DAT_14cbe6cf8 = 0;
    uRam000000014cbe6d00 = 0;
    _DAT_14cbe6d08 = 0;
    uRam000000014cbe6d10 = 0;
    _DAT_14cbe6d18 = 0;
    _DAT_14cbe6d40 = 0;
    uRam000000014cbe6d48 = 0;
    _DAT_14cbe6d50 = 0;
    uRam000000014cbe6d58 = 0;
    _DAT_14cbe6d60 = 0;
    uRam000000014cbe6d68 = 0;
    _DAT_14cbe6d70 = 0;
    uRam000000014cbe6d78 = 0;
    _DAT_14cbe6d80 = 0;
    uRam000000014cbe6d88 = 0;
    DAT_14cbe6d90 = 0;
    _DAT_14cbe6da8 = DAT_14c8464f0;
    _DAT_14cbe6d98 = (undefined4)DAT_14c8464e0;
    uRam000000014cbe6d9c = DAT_14c8464e0._4_4_;
    uRam000000014cbe6da0 = (undefined4)DAT_14c8464e8;
    uRam000000014cbe6da4 = DAT_14c8464e8._4_4_;
    DAT_14cbe6c90 = (longlong *)&DAT_14cbe6c98;
LAB_1411cfbb1:
    plVar3 = DAT_14cbe6c90;
    if (*plVar4 == 0) goto LAB_1411cfcd1;
    cVar1 = FUN_1449e3c20(DAT_14cbe6c90);
    if (cVar1 == '\0') goto LAB_1411cfbcb;
  }
  else {
    plVar4 = DAT_14cbe6c90 + 1;
    if ((char)DAT_14cbe6c90[2] == '\0') goto LAB_1411cfbb1;
    if ((char)DAT_14cbe6c90[2] == '\x02') {
      plVar4 = (longlong *)(*plVar4 + 0x30);
      goto LAB_1411cfbb1;
    }
LAB_1411cfcd1:
    plVar3 = DAT_14cbe6c90;
    lVar2 = FUN_140162146();
    if (lVar2 == 0) goto LAB_1411cfbcb;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_oak_vehicles",0);
    FUN_140024ada(&local_48,plVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_1411cfbcb:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411cfd30 FUN_1411cfd30 body=21 status=ok
// SIG undefined FUN_1411cfd30(void)

undefined8 FUN_1411cfd30(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1411cfd46 FUN_1411cfd46 body=487 status=ok
// SIG undefined FUN_1411cfd46(void)

void FUN_1411cfd46(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar10 = 0;
    iVar7 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x18);
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    puVar6 = (uint *)(param_1 + 0x58);
    uVar14 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(param_1 + 8);
      uVar3 = *(uint *)(lVar12 + (longlong)iVar7 * 0x20);
      iVar7 = *(int *)(lVar12 + 4 + (longlong)iVar7 * 0x20);
      if (((((iVar7 == 0) || ((int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
          ((plVar11 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar11 == (longlong *)0x0 || ((int)plVar11[2] != iVar7)))) ||
         (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (*plVar11 == 0)))) {
        if ((uVar3 == *puVar6) && (iVar7 == *(int *)(param_1 + 0x5c))) {
          puVar6[0] = 0;
          puVar6[1] = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
        }
        FUN_14098f644((longlong *)(param_1 + 8));
        iVar2 = *(int *)(param_1 + 0x30);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x18);
      }
      iVar7 = (int)uVar15;
      lVar12 = (longlong)iVar7;
      uVar3 = puVar8[lVar12] & uVar14;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar7) {
          iVar5 = iVar7;
        }
        if (iVar4 <= iVar7) {
          return;
        }
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar8[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) {
            return;
          }
        }
        uVar15 = (ulonglong)(iVar7 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
  return;
}



// FUNCTION 1411cff2e FUN_1411cff2e body=63 status=ok
// SIG undefined FUN_1411cff2e(void)

void FUN_1411cff2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1406f625c(param_3);
  uVar2 = FUN_140d84280(param_1);
  FUN_140d84456(uVar2,param_2,uVar1,param_4);
  return;
}



// FUNCTION 1411cff7c FUN_1411cff7c body=219 status=ok
// SIG undefined FUN_1411cff7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411cff7c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b33e250;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
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
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1411d0058 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  FUN_144760e82();
  return;
}



// FUNCTION 1411d005e FUN_1411d005e body=93 status=ok
// SIG undefined FUN_1411d005e(void)

ulonglong FUN_1411d005e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x28);
  dVar2 = pow((double)param_2 * *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x18),
              *(double *)(param_1 + 0x30));
  dVar3 = (dVar2 + *(double *)(param_1 + 0x38)) * dVar3;
  uVar1 = (ulonglong)dVar3;
  return (longlong)(dVar3 - 9.223372036854776e+18) & (longlong)uVar1 >> 0x3f | uVar1;
}



// FUNCTION 1411d00bc FUN_1411d00bc body=71 status=ok
// SIG undefined FUN_1411d00bc(void)

undefined8 * FUN_1411d00bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b343e80;
  FUN_1400fd473(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411d0104 FUN_1411d0104 body=252 status=ok
// SIG undefined FUN_1411d0104(void)

void FUN_1411d0104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b65c840;
  param_1[6] = &PTR_FUN_14b65cb30;
  FUN_140bcae4d(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 1411d0206 FUN_1411d0206 body=228 status=ok
// SIG undefined FUN_1411d0206(void)

longlong FUN_1411d0206(void)

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
  if (DAT_14cb4d728 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14851d690;
    local_40 = FUN_14649524d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PolygroupLayersProperties",&DAT_14cb4d728,
                  FUN_146495226);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4d728;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d02f2 FUN_1411d02f2 body=228 status=ok
// SIG undefined FUN_1411d02f2(void)

longlong FUN_1411d02f2(void)

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
  if (DAT_14cb62068 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458dac44;
    local_38 = &LAB_1486e0709;
    local_40 = &LAB_1464f6516;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProfileProgressRoleClientLocal",&DAT_14cb62068,
                  &DAT_1486e0708);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62068;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d03d7 FUN_1411d03d7 body=32 status=ok
// SIG undefined FUN_1411d03d7(void)

void FUN_1411d03d7(undefined4 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x39410000;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1411d03f8 FUN_1411d03f8 body=162 status=ok
// SIG undefined FUN_1411d03f8(void)

void FUN_1411d03f8(longlong *param_1,undefined8 param_2)

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
        goto LAB_1411d0485;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1411d0485:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1411d049a FUN_1411d049a body=55 status=ok
// SIG undefined FUN_1411d049a(void)

void FUN_1411d049a(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x3dc0,0x10);
  FUN_1411d04d2(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1411d04d2 FUN_1411d04d2 body=969 status=ok
// SIG undefined FUN_1411d04d2(void)

undefined8 * FUN_1411d04d2(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_1411d0906();
  uVar2 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 4);
  param_1[0x3a] = 0;
  lVar5 = 0x1ed;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar5 + -0x15) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar5 + -5) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar5 + -1) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x2ad);
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 700) = 0xffffffff;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cf) = 0;
  param_1[0x5b] = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar2;
  param_1[0x5d] = param_2;
  *param_1 = &PTR_FUN_14a348280;
  param_1[0x39] = &PTR_FUN_14a3482e0;
  puVar1 = param_1 + 0x5e;
  uVar2 = *param_2;
  param_1[0x5e] = param_2;
  *(undefined4 *)(param_1 + 0x5f) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar2;
  param_1[0x60] = param_2;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x371) = 0xff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  uVar2 = DAT_14c760b60;
  *(undefined4 *)(param_1 + 0x6f) = DAT_14c760b60;
  *(undefined4 *)((longlong)param_1 + 0x37c) = uVar2;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_1411d0b80(param_1 + 0x72,param_1,*param_2);
  uVar6 = 0xffffcc00;
  if (param_3 != 1) {
    uVar6 = -(uint)(param_3 != 2) | 0xffffcc48;
  }
  memset(param_1 + 0x714,0,0x30c);
  param_1[0x776] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3bb7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc4) = 0;
  *(uint *)((longlong)param_1 + 0x3bcc) = uVar6;
  param_1[0x77b] = param_2;
  param_1[0x77a] = &PTR_FUN_14a349540;
  param_1[0x77c] = 0;
  param_1[0x77d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3be9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bf1) = 0;
  param_1[0x780] = puVar1;
  param_1[0x782] = param_2;
  param_1[0x781] = &PTR_FUN_14a349540;
  param_1[0x783] = 0;
  param_1[0x784] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c29) = 0;
  param_1[0x787] = puVar1;
  param_1[0x789] = param_2;
  param_1[0x788] = &PTR_FUN_14a349540;
  param_1[0x78a] = 0;
  param_1[0x78b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c61) = 0;
  param_1[0x78e] = puVar1;
  param_1[0x790] = param_2;
  param_1[0x78f] = &PTR_FUN_14a349540;
  param_1[0x791] = 0;
  param_1[0x792] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c99) = 0;
  param_1[0x795] = puVar1;
  param_1[0x797] = param_2;
  param_1[0x796] = &PTR_FUN_14a349540;
  param_1[0x798] = 0;
  param_1[0x799] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cd1) = 0;
  param_1[0x79c] = puVar1;
  param_1[0x79e] = param_2;
  param_1[0x79d] = &PTR_FUN_14a349540;
  param_1[0x79f] = 0;
  param_1[0x7a0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d01) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d09) = 0;
  param_1[0x7a3] = puVar1;
  param_1[0x7a9] = 0;
  param_1[0x7a6] = 0;
  param_1[0x7a7] = 0;
  param_1[0x7a4] = 0;
  param_1[0x7a5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d54) = 1;
  *(undefined4 *)(param_1 + 0x7aa) = 1;
  param_1[0x7a8] = 0xffffffffffffffff;
  param_1[0x7ad] = 0;
  param_1[0x7b0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d8c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3d94) = 0;
  param_1[0x7ae] = &DAT_100000001;
  *(undefined4 *)(param_1 + 0x7b1) = 1;
  FUN_14471858a(param_1 + 0x7af);
  *(undefined1 *)(param_1 + 0x7b7) = 0;
  param_1[0x7b5] = 0;
  param_1[0x7b6] = 0;
  param_1[0x7b3] = 0;
  param_1[0x7b4] = 0;
  lVar5 = FUN_1411d089c();
  uVar6 = *(uint *)(lVar5 + 8);
  iVar3 = *(int *)(param_1 + 0x7b4);
  *(uint *)(param_1 + 0x7b4) = iVar3 + uVar6;
  if ((uint)(*(int *)((longlong)param_1 + 0x3da4) - iVar3) < uVar6) {
    FUN_1411d0a1e(param_1 + 0x7b3);
  }
  memset((void *)((longlong)iVar3 * 8 + param_1[0x7b3]),0,(longlong)(int)uVar6 << 3);
  FUN_1411d119e(param_1 + 0x72);
  *(undefined2 *)((longlong)param_1 + 0x3bb9) = 0;
  memset(param_1 + 0x714,0,0x30c);
  memset((void *)param_1[0x7b3],0,(longlong)*(int *)(param_1 + 0x7b4) << 3);
  return param_1;
}



// FUNCTION 1411d089c FUN_1411d089c body=106 status=ok
// SIG undefined FUN_1411d089c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411d089c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9ed70) {
    FUN_144b3d300(&DAT_14ca9ed70);
    if (DAT_14ca9ed70 == -1) {
      DAT_14ca9ed60 = 0;
      _DAT_14ca9ed68 = 0;
      atexit((_func_5014 *)&LAB_143234896);
      _Init_thread_footer(&DAT_14ca9ed70);
    }
  }
  return &DAT_14ca9ed60;
}



// FUNCTION 1411d0906 FUN_1411d0906 body=280 status=ok
// SIG undefined FUN_1411d0906(void)

void FUN_1411d0906(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = &PTR_FUN_14a349150;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x14) = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x44) = 2;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  *(undefined4 *)(param_1 + 0x16) = param_3;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x124) = 3;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return;
}



// FUNCTION 1411d0a1e FUN_1411d0a1e body=353 status=ok
// SIG undefined FUN_1411d0a1e(void)

void FUN_1411d0a1e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411d0aa3;
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
LAB_1411d0aa3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1411d0b80 FUN_1411d0b80 body=502 status=ok
// SIG undefined FUN_1411d0b80(void)

longlong * FUN_1411d0b80(longlong *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  
  *param_1 = *(longlong *)(param_2 + 8);
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((longlong)param_1 + 0xc) = param_3;
  if (param_3 == 0) {
    iVar1 = 0x20;
  }
  else {
    iVar1 = 0;
    if (param_3 != 0) {
      for (; (param_3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
  }
  *(int *)(param_1 + 2) = iVar1;
  param_1[3] = param_2;
  param_1[4] = 0x101010101010101;
  *(undefined4 *)((longlong)param_1 + 0x27) = 0x1010101;
  FUN_145835bd6(param_1 + 6);
  param_1[0xf2] = 0;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x79c) = 4;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0xffffffff;
  memset(param_1 + 0x27a,0,0xc30);
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2004) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x401) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x200c) = 0xffffffff;
  param_1[0x402] = -1;
  memset(param_1 + 0xfa,0,0xc00);
  param_1[0x403] = -1;
  *(undefined4 *)(param_1 + 0x404) = 0xffffffff;
  memset(param_1 + 0x405,0,0x600);
  param_1[0x4c5] = -1;
  *(undefined4 *)(param_1 + 0x4c6) = 0xffffffff;
  memset(param_1 + 0x4c7,0,0x600);
  *(undefined4 *)(param_1 + 0x587) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x588) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x589) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c64) = 0xffffffff;
  memset(param_1 + 0x58d,0,0x60a);
  *(undefined8 *)((longlong)param_1 + 0x3274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x327c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x329c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32dc) = 0;
  memset(param_1 + 0x65d,0,0xc0);
  FUN_1411d0ec2(param_1 + 0x676,param_2,param_3);
  *(undefined1 *)(param_1 + 0x6a0) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) =
       *(undefined4 *)(*(longlong *)(*param_1 + 0x10) + 0x214);
  FUN_1411d0d76(param_1 + 0x676,DAT_14c760bb4,0x800);
  FUN_1411d119e(param_1);
  return param_1;
}



// FUNCTION 1411d0d76 FUN_1411d0d76 body=116 status=ok
// SIG undefined FUN_1411d0d76(void)

void FUN_1411d0d76(longlong *param_1,undefined4 param_2,ulonglong param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  
  bVar3 = *(int *)(*param_1 + 0x6d0) == 1;
  *(bool *)(param_1 + 0x27) = bVar3;
  iVar1 = *(int *)(*param_1 + 0x6d4);
  *(bool *)((longlong)param_1 + 0x133) = !bVar3;
  bVar3 = iVar1 == 1;
  *(bool *)((longlong)param_1 + 0x139) = bVar3;
  plVar2 = (longlong *)(param_3 & 0xffffffff);
  if (bVar3) {
    plVar2 = (longlong *)0x0;
  }
  FUN_1411d0dea(param_1 + 10,plVar2,CONCAT71((int7)((ulonglong)plVar2 >> 8),1));
  bVar3 = *(char *)((longlong)param_1 + 0x133) == '\0';
  if (bVar3) {
    param_2 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x134) = param_2;
  plVar2 = param_1 + 0x18;
  if (bVar3) {
    plVar2 = (longlong *)0x0;
  }
  param_1[7] = (longlong)plVar2;
  param_1[8] = 0;
  return;
}



// FUNCTION 1411d0dea FUN_1411d0dea body=216 status=ok
// SIG undefined FUN_1411d0dea(void)

void FUN_1411d0dea(longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  
  if (param_2 == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    pwVar4 = L"Thread Local - Online Sampler Heap";
    if ((char)param_3 == '\0') {
      pwVar4 = L"Thread Local - Online View Heap";
    }
    puVar2 = (undefined8 *)
             FUN_1407d752c(*(longlong *)(param_1 + 8) + 0x658,pwVar4,param_3,param_2,1);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if (puVar3 != puVar2) {
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      puVar3 = *(undefined8 **)(param_1 + 0x10);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    if (puVar2 == puVar3) {
      return;
    }
    *(undefined8 **)(param_1 + 0x40) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
  }
  LOCK();
  piVar1 = (int *)(puVar2 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001411d0eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,1,*(code **)*puVar2);
  return;
}



// FUNCTION 1411d0ec2 FUN_1411d0ec2 body=307 status=ok
// SIG undefined FUN_1411d0ec2(void)

undefined8 * FUN_1411d0ec2(undefined8 *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *(undefined8 *)(param_2 + 8);
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((longlong)param_1 + 0xc) = param_3;
  if (param_3 == 0) {
    iVar1 = 0x20;
  }
  else {
    iVar1 = 0;
    if (param_3 != 0) {
      for (; (param_3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
  }
  *(int *)(param_1 + 2) = iVar1;
  param_1[3] = param_2;
  param_1[4] = *(longlong *)(param_2 + 8) + 0x950;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1411d0ff6(param_1 + 10,param_1,param_2);
  param_1[0x19] = *(undefined8 *)(param_2 + 8);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x18] = &PTR_FUN_14a3497e0;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_1;
  param_1[0x1f] = param_2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x10f;
  FUN_1411d108e(param_1 + 0x20,0);
  if (0 < *(int *)(param_1 + 0x21)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      *(undefined1 *)(param_1[0x20] + lVar2) = 0;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x50;
    } while (lVar3 < *(int *)(param_1 + 0x21));
  }
  *(undefined4 *)((longlong)param_1 + 0x12f) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)((longlong)param_1 + 0x133) = 1;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 1411d0ff6 FUN_1411d0ff6 body=152 status=ok
// SIG undefined FUN_1411d0ff6(void)

undefined8 * FUN_1411d0ff6(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  param_1[1] = *(undefined8 *)(param_3 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *param_1 = &PTR_FUN_14a349810;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  param_1[7] = puVar1;
  param_1[6] = puVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  return param_1;
}



// FUNCTION 1411d108e FUN_1411d108e body=272 status=ok
// SIG undefined FUN_1411d108e(void)

void FUN_1411d108e(longlong param_1,int param_2)

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



// FUNCTION 1411d119e FUN_1411d119e body=1290 status=ok
// SIG undefined FUN_1411d119e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1411d119e(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_33f8 [32];
  longlong local_33d8;
  undefined8 local_33d0;
  undefined1 *local_33c8;
  undefined1 *puStack_33c0;
  undefined1 local_33b8 [392];
  undefined1 local_3230 [1024];
  undefined4 local_2e30;
  undefined8 local_2e2c;
  undefined8 uStack_2e24;
  undefined4 local_2e1c;
  undefined8 local_2e18;
  undefined1 local_2e08 [296];
  undefined8 local_2ce0;
  undefined8 uStack_2cd8;
  undefined8 local_2cd0;
  undefined8 uStack_2cc8;
  undefined8 local_2cc0;
  undefined8 uStack_2cb8;
  undefined8 local_2cb0;
  undefined8 uStack_2ca8;
  undefined4 local_2ca0;
  undefined8 local_2c98;
  undefined4 local_2c90;
  undefined4 local_2c8c;
  undefined1 local_2c88;
  undefined2 local_2c87;
  undefined8 local_2c80;
  longlong lStack_2c78;
  uint local_2c70;
  undefined4 uStack_2c6c;
  undefined4 local_2c68;
  undefined4 uStack_2c64;
  undefined4 uStack_2c60;
  undefined4 uStack_2c5c;
  undefined4 local_2c58;
  undefined4 uStack_2c54;
  undefined4 uStack_2c50;
  undefined4 uStack_2c4c;
  undefined4 local_2c48;
  undefined4 uStack_2c44;
  undefined4 uStack_2c40;
  undefined4 uStack_2c3c;
  undefined1 local_2c38 [3072];
  undefined1 local_2038 [3120];
  undefined4 local_1408;
  undefined4 uStack_1404;
  undefined4 uStack_1400;
  undefined4 uStack_13fc;
  undefined8 local_13f8;
  undefined8 local_13f0;
  undefined4 local_13e8;
  undefined1 local_13e0 [1536];
  undefined8 local_de0;
  undefined4 local_dd8;
  undefined1 local_dd0 [1536];
  undefined4 local_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined1 local_7a0 [1548];
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_33f8;
  local_33d8 = 0;
  local_33d0._4_4_ = 0;
  local_33c8 = &DAT_3f8000003f800000;
  puStack_33c0 = &DAT_3f8000003f800000;
  memset(local_33b8,0,0x184);
  memset(local_3230,0,0x400);
  local_2e30 = 0xffffffff;
  local_2e2c = 0;
  uStack_2e24 = 0;
  local_2e1c = 0;
  local_2e18 = 6;
  local_2c98 = 0;
  local_2c90 = 0;
  memset(local_2e08,0,0x104);
  local_2ce0 = 0;
  uStack_2cd8 = 0;
  local_2cd0 = 0;
  uStack_2cc8 = 0;
  local_2cc0 = 0;
  uStack_2cb8 = 0;
  local_2cb0 = 0;
  uStack_2ca8 = 0;
  local_2ca0 = 0;
  local_2c8c = 0x3f800000;
  local_2c88 = 0;
  local_2c87 = 0;
  local_2c80 = 0;
  lStack_2c78 = 0;
  local_2c70 = local_2c70 & 0xffffff00;
  uStack_2c6c = 4;
  local_2c68 = 0xffffffff;
  uStack_2c64 = 0xffffffff;
  uStack_2c60 = 0xffffffff;
  uStack_2c5c = 0xffffffff;
  local_2c58 = 0xffffffff;
  uStack_2c54 = 0xffffffff;
  uStack_2c50 = 0xffffffff;
  uStack_2c4c = 0xffffffff;
  local_2c48 = 0xffffffff;
  uStack_2c44 = 0xffffffff;
  uStack_2c40 = 0xffffffff;
  uStack_2c3c = 0xffffffff;
  memset(local_2038,0,0xc30);
  local_1408 = 0xffffffff;
  uStack_1404 = 0xffffffff;
  uStack_1400 = 0xffffffff;
  uStack_13fc = 0xffffffff;
  local_13f8 = 0xffffffffffffffff;
  memset(local_2c38,0,0xc00);
  local_13f0 = 0xffffffffffffffff;
  local_13e8 = 0xffffffff;
  memset(local_13e0,0,0x600);
  local_de0 = 0xffffffffffffffff;
  local_dd8 = 0xffffffff;
  memset(local_dd0,0,0x600);
  local_7d0 = 0xffffffff;
  uStack_7cc = 0xffffffff;
  uStack_7c8 = 0xffffffff;
  uStack_7c4 = 0xffffffff;
  local_7c0 = 0xffffffff;
  uStack_7bc = 0xffffffff;
  uStack_7b8 = 0xffffffff;
  uStack_7b4 = 0xffffffff;
  local_7b0 = 0xffffffff;
  uStack_7ac = 0xffffffff;
  uStack_7a8 = 0xffffffff;
  uStack_7a4 = 0xffffffff;
  plVar1 = (longlong *)(param_1 + 0x30);
  memset(local_7a0,0,0x60a);
  local_194 = 0;
  uStack_18c = 0;
  local_184 = 0;
  uStack_17c = 0;
  local_174 = 0;
  uStack_16c = 0;
  local_164 = 0;
  uStack_15c = 0;
  local_154 = 0;
  uStack_14c = 0;
  local_144 = 0;
  uStack_13c = 0;
  local_134 = 0;
  uStack_12c = 0;
  memset(&local_120,0,0xc0);
  if (plVar1 == &local_33d8) {
    memcpy((void *)(param_1 + 0x38),&local_33d0,0x758);
  }
  else {
    lVar4 = *plVar1;
    *plVar1 = 0;
    local_33d8 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    memcpy((void *)(param_1 + 0x38),&local_33d0,0x758);
    lVar4 = *(longlong *)(param_1 + 0x790);
    *(longlong *)(param_1 + 0x790) = lStack_2c78;
    lStack_2c78 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(ulonglong *)(param_1 + 0x798) = CONCAT44(uStack_2c6c,local_2c70);
  memcpy((undefined4 *)(param_1 + 0x7a0),&local_2c68,0x2b44);
  lVar4 = 0x32b8;
  do {
    if (plVar1 != &local_33d8) {
      if (*(longlong *)(param_1 + 0x30 + lVar4) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x30 + lVar4) = *(undefined8 *)((longlong)&local_33d8 + lVar4);
      *(undefined8 *)((longlong)&local_33d8 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x38 + lVar4) = *(undefined4 *)((longlong)&local_33d0 + lVar4);
      *(undefined4 *)(param_1 + 0x3c + lVar4) = *(undefined4 *)((longlong)&local_33d0 + lVar4 + 4);
      *(undefined8 *)((longlong)&local_33d0 + lVar4) = 0;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x3318);
  lVar4 = 0x3318;
  do {
    if (plVar1 != &local_33d8) {
      if (*(longlong *)(param_1 + 0x30 + lVar4) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x30 + lVar4) = *(undefined8 *)((longlong)&local_33d8 + lVar4);
      *(undefined8 *)((longlong)&local_33d8 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x38 + lVar4) = *(undefined4 *)((longlong)&local_33d0 + lVar4);
      *(undefined4 *)(param_1 + 0x3c + lVar4) = *(undefined4 *)((longlong)&local_33d0 + lVar4 + 4);
      *(undefined8 *)((longlong)&local_33d0 + lVar4) = 0;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x3378);
  lVar4 = 0x3368;
  do {
    if (*(longlong *)((longlong)&local_33d8 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x3308);
  lVar4 = 0x3308;
  do {
    if (*(longlong *)((longlong)&local_33d8 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x32a8);
  if (lStack_2c78 != 0) {
    LOCK();
    puVar2 = (uint *)(lStack_2c78 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_33d8 != 0) {
    LOCK();
    puVar2 = (uint *)(local_33d8 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined2 *)(param_1 + 0x3270) = 0x101;
  *(undefined1 *)(param_1 + 0x798) = 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x1010101;
  *(undefined4 *)(param_1 + 0x23) = 0x1010101;
  *(undefined1 *)(param_1 + 0x27) = DAT_14ca84e1e;
  *(undefined1 *)(param_1 + 0x28) = DAT_14ca84f32;
  *(undefined1 *)(param_1 + 0x29) = DAT_14ca84f34;
  *(undefined4 *)(param_1 + 0x7c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2020) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2018) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2628) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2630) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c5c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c60) = 0xffffffffffffffff;
  if ((local_60 ^ (ulonglong)auStack_33f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d16aa FUN_1411d16aa body=1050 status=ok
// SIG undefined FUN_1411d16aa(void)

void FUN_1411d16aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar14 = *(int *)(param_1 + 0x58);
  if (iVar14 != 4) {
    *(undefined4 *)(param_1 + 0x58) = 4;
    FUN_145835dd8(param_1 + 0x580,4);
  }
  lVar13 = *(longlong *)(param_1 + 0x2a0);
  iVar10 = *(int *)(param_1 + 0x2a8);
  uVar11 = 0;
  local_78 = param_1;
  if ((longlong)iVar10 != 0) {
    lVar20 = 0;
    do {
      if ((*(longlong *)(lVar13 + lVar20) != 0) && (cVar7 = FUN_14708d202(), cVar7 == '\0')) {
        FUN_14708d244(*(undefined8 *)(lVar13 + lVar20));
      }
      lVar20 = lVar20 + 0x10;
    } while ((longlong)iVar10 * 0x10 != lVar20);
    uVar11 = *(undefined4 *)(local_78 + 0x2a8);
    lVar13 = *(longlong *)(local_78 + 0x2a0);
  }
  FUN_145835d8b(lVar13,uVar11);
  lVar13 = local_78;
  *(undefined4 *)(local_78 + 0x2a8) = 0;
  if (*(int *)(local_78 + 0x2ac) != 0) {
    FUN_145836064(local_78 + 0x2a0);
  }
  *(undefined8 *)(lVar13 + 0x2b0) = 0;
  plVar5 = *(longlong **)(lVar13 + 0x2b8);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(lVar13 + 0x2b8) = 0;
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
  if (*(longlong *)(lVar13 + 0x68) != 0) {
    uVar8 = FUN_1411d204e();
    if (*(longlong *)(lVar13 + 0x68) != 0) {
      FUN_141092d32(uVar8);
    }
    *(undefined8 *)(lVar13 + 0x68) = 0;
  }
  FUN_14583624a(lVar13);
  if (0 < iVar14) {
    FUN_1411d1b51(*(undefined8 *)(lVar13 + 0x288),*(undefined4 *)(lVar13 + 0x290));
    *(undefined4 *)(lVar13 + 0x290) = 0;
    if (*(int *)(lVar13 + 0x294) != 0) {
      FUN_145836590(lVar13 + 0x288,0);
    }
    if (0 < (longlong)*(int *)(lVar13 + 0xd0)) {
      uVar16 = (longlong)*(int *)(lVar13 + 0xd0) + 1;
      do {
        FUN_1411d1ac6(*(undefined8 *)(*(longlong *)(lVar13 + 200) + -0x10 + uVar16 * 8));
        uVar16 = uVar16 - 1;
      } while (1 < uVar16);
    }
    *(undefined4 *)(lVar13 + 0xd0) = 0;
    if (*(int *)(lVar13 + 0xd4) != 0) {
      FUN_145836094((longlong *)(lVar13 + 200));
    }
    FUN_145835ed8(lVar13 + 0xe8);
    FUN_145835f9e(lVar13 + 0x1e8);
    FUN_1411d20e3(*(undefined8 *)(lVar13 + 0xd8),*(undefined4 *)(lVar13 + 0xe0));
    *(undefined4 *)(lVar13 + 0xe0) = 0;
    if (*(int *)(lVar13 + 0xe4) != 0) {
      FUN_1458360c4(lVar13 + 0xd8);
    }
    local_70 = lVar13 + 0x80;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = local_70;
    if (*(int *)(lVar13 + 0x98) == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar14 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
      iVar14 = *(int *)(lVar13 + 0x98);
    }
    lVar20 = local_60;
    iVar10 = (int)local_68;
    uVar15 = (uint)local_58;
    iVar9 = local_58._4_4_;
    iVar21 = local_50;
    if (local_58._4_4_ != iVar14 || local_60 != local_70) {
      do {
        lVar19 = *(longlong *)(lVar13 + 0x70);
        lVar17 = *(longlong *)(lVar19 + 8 + (longlong)iVar9 * 0x18);
        if (lVar17 != 0) {
          FUN_140a6c742(lVar17);
          FUN_1400020a8(lVar17);
          *(undefined8 *)(lVar19 + (longlong)iVar9 * 0x18 + 8) = 0;
          lVar13 = local_78;
        }
        uVar15 = uVar15 & ~(uint)uVar16;
        lVar19 = *(longlong *)(lVar20 + 0x10);
        if (*(longlong *)(lVar20 + 0x10) == 0) {
          lVar19 = lVar20;
        }
        iVar4 = *(int *)(lVar20 + 0x18);
        lVar17 = (longlong)iVar10;
        uVar12 = *(uint *)(lVar19 + lVar17 * 4) & uVar15;
        if (uVar12 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar6 = iVar9;
          if (iVar9 < iVar10) {
            iVar6 = iVar10;
          }
          if (iVar10 < iVar9) {
            lVar18 = 0;
            do {
              uVar12 = *(uint *)(lVar19 + lVar17 * 4 + 4 + lVar18 * 4);
              if (uVar12 != 0) {
                iVar10 = iVar10 + (int)lVar18 + 1;
                uVar15 = 0xffffffff;
                goto LAB_1411d1952;
              }
              iVar21 = iVar21 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar6 - lVar17 != lVar18);
            uVar15 = 0xffffffff;
            iVar10 = iVar6;
          }
          iVar10 = iVar10 + 1;
          lVar13 = local_78;
          iVar9 = iVar4;
        }
        else {
LAB_1411d1952:
          uVar16 = (ulonglong)(-uVar12 & uVar12);
          uVar3 = uVar16 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar9 = (iVar21 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar9) {
            iVar9 = iVar4;
          }
        }
      } while (iVar9 != iVar14 || lVar20 != local_70);
    }
    FUN_145835d0a(lVar13 + 0x480);
    FUN_145835d0a(lVar13 + 0x398);
    if (DAT_14c9a1ab0 == lVar13) {
      DAT_14c9a1ab0 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411d1ac6 FUN_1411d1ac6 body=139 status=ok
// SIG undefined FUN_1411d1ac6(void)

void FUN_1411d1ac6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x410))();
  (**(code **)(*param_1 + 0x400))(param_1);
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)((longlong)param_1 + 0x1c4) != 0) {
    FUN_145835e78(param_1 + 0x37,0);
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_14482b126(lVar2,0x40000000);
  return;
}



// FUNCTION 1411d1b51 FUN_1411d1b51 body=41 status=ok
// SIG undefined FUN_1411d1b51(void)

void FUN_1411d1b51(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1411d1b7a(param_1);
    param_1 = param_1 + 0x238;
  }
  return;
}



// FUNCTION 1411d1b7a FUN_1411d1b7a body=1236 status=ok
// SIG undefined FUN_1411d1b7a(void)

void FUN_1411d1b7a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (*(int *)((longlong)param_1 + 500) != 0) {
    FUN_14472eb64(param_1 + 0x3d,0);
  }
  param_1[0x43] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x214)) {
    *(undefined4 *)((longlong)param_1 + 0x214) = 0x80;
    FUN_1446efbd8(param_1 + 0x3f,0);
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)((longlong)param_1 + 0x1a4) != 0) {
    FUN_14472eb64(param_1 + 0x33,0);
  }
  param_1[0x39] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1c4)) {
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x80;
    FUN_1446efbd8(param_1 + 0x35,0);
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (*(int *)((longlong)param_1 + 0x154) != 0) {
    FUN_14472eb64(param_1 + 0x29,0);
  }
  param_1[0x2f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x174)) {
    *(undefined4 *)((longlong)param_1 + 0x174) = 0x80;
    FUN_1446efbd8(param_1 + 0x2b,0);
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)((longlong)param_1 + 0x104) != 0) {
    FUN_14472eb64(param_1 + 0x1f,0);
  }
  param_1[0x25] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x124)) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
    FUN_1446efbd8(param_1 + 0x21,0);
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x19] = (longlong)&DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    FUN_140115c12(param_1 + 0x1b,0);
  }
  param_1[0x1a] = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x15] = (longlong)&DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0xc4) != 0) {
    FUN_140115c12(param_1 + 0x17,0);
  }
  param_1[0x16] = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = (longlong)&DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x13,0);
  }
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  param_1[0xd] = (longlong)&DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0xf,0);
  }
  param_1[0xe] = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  param_1[9] = (longlong)&DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_140115c12(param_1 + 0xb,0);
  }
  param_1[10] = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1411d204e FUN_1411d204e body=149 status=ok
// SIG undefined FUN_1411d204e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1411d204e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8671a0) {
    FUN_144b3d300(&DAT_14c8671a0);
    if (DAT_14c8671a0 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c867160);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c867160,4000);
      DAT_14c867188 = 0;
      _DAT_14c867190 = 0;
      _DAT_14c867198 = 2;
      atexit(FUN_14277ec26);
      _Init_thread_footer(&DAT_14c8671a0);
    }
  }
  return &DAT_14c867160;
}



// FUNCTION 1411d20e3 FUN_1411d20e3 body=97 status=ok
// SIG undefined FUN_1411d20e3(void)

void FUN_1411d20e3(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x58;
    do {
      FUN_1401d9a90(param_1 + 0x20);
      FUN_1401d9a90(param_1);
      FUN_1401d9a90(param_1 + -0x20);
      if (*(longlong *)(param_1 + -0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x40) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x98;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411d2144 FUN_1411d2144 body=613 status=ok
// SIG undefined FUN_1411d2144(void)

void FUN_1411d2144(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x18);
        local_70 = uVar5;
        if (piVar1[2] == 0) {
          iVar4 = *piVar1;
        }
        else {
          local_78 = plVar13;
          iVar4 = FUN_144a78877(*piVar1,piVar1[2]);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[5] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[4] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_1411d233f;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_1411d233f:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d23aa FUN_1411d23aa body=103 status=ok
// SIG undefined FUN_1411d23aa(void)

ulonglong FUN_1411d23aa(longlong param_1)

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
LAB_1411d23f4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1411d23f4;
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



// FUNCTION 1411d2412 FUN_1411d2412 body=2049 status=ok
// SIG undefined FUN_1411d2412(void)

void FUN_1411d2412(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_108 [32];
  uint *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  uint local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined2 *local_98;
  longlong local_90;
  longlong lStack_88;
  ulonglong local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_2;
  if ((longlong)(int)param_2[1] != 0) {
    puVar13 = (uint *)*param_2;
    puVar7 = puVar13 + (longlong)(int)param_2[1] * 3;
    do {
      uVar22 = *puVar13;
      uVar9 = puVar13[2];
      if (uVar9 != 0) {
        uVar22 = uVar9 >> 0xd ^ uVar22 - uVar9;
        uVar15 = uVar22 << 8 ^ (-0x61c88647 - uVar9) - uVar22;
        uVar4 = uVar15 >> 0xd ^ (uVar9 - uVar22) - uVar15;
        uVar22 = uVar4 >> 0xc ^ (uVar22 - uVar15) - uVar4;
        uVar9 = uVar22 << 0x10 ^ (uVar15 - uVar4) - uVar22;
        uVar4 = uVar9 >> 5 ^ (uVar4 - uVar22) - uVar9;
        uVar15 = uVar4 >> 3 ^ (uVar22 - uVar9) - uVar4;
        uVar22 = uVar15 << 10 ^ (uVar9 - uVar4) - uVar15;
        uVar22 = uVar22 >> 0xf ^ uVar4 - (uVar15 + uVar22);
      }
      iVar3 = FUN_1407a7398(param_1 + 200,uVar22,puVar13);
      if (iVar3 == -1) {
        FUN_1411d2c14(param_1 + 200,&local_98,puVar13,0);
        local_c0 = puVar13[2];
        local_c8 = *(undefined8 *)puVar13;
        local_a8 = local_c8;
        local_a0 = local_c0;
        FUN_1448075d0(&local_98);
        plVar5 = (longlong *)FUN_140fa5e12(&local_98);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        if ((plVar5 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar5 + 0x50))(), cVar2 == '\0'))
        {
          lVar17 = FUN_1406d51c0();
          local_98 = &DAT_14a171d50;
          local_90 = 0;
          lStack_88 = 0;
          local_80 = 0;
          FUN_1401004a0(&local_98);
          if (*(longlong *)(lVar17 + 0xb8) == local_90) {
            uVar22 = *(uint *)(lVar17 + 200);
            uVar9 = (uint)local_80;
            if ((int)uVar22 < (int)(uint)local_80) {
              uVar9 = uVar22;
            }
            if (0 < (int)uVar9) {
              uVar21 = 0;
              do {
                if ((*(ulonglong *)(lStack_88 + uVar21 * 8) &
                    ~*(ulonglong *)(*(longlong *)(lVar17 + 0xc0) + uVar21 * 8)) != 0)
                goto LAB_1411d2622;
                uVar21 = uVar21 + 1;
              } while (uVar9 != uVar21);
            }
            bVar24 = true;
            if ((int)uVar22 < (int)(uint)local_80) {
              lVar17 = 0;
              do {
                bVar24 = *(longlong *)((longlong)(int)uVar22 * 8 + lStack_88 + lVar17 * 8) == 0;
                if (!bVar24) break;
                iVar3 = (int)lVar17;
                lVar17 = lVar17 + 1;
              } while (~uVar22 + (uint)local_80 != iVar3);
            }
          }
          else {
LAB_1411d2622:
            bVar24 = false;
          }
          local_98 = &DAT_14a171d50;
          uVar21 = local_80 >> 0x20;
          local_80 = local_80 & 0xffffffff00000000;
          if ((int)uVar21 != 0) {
            FUN_140115c12(&lStack_88);
          }
          local_90 = 0;
          if (lStack_88 != 0) {
            FUN_1400020a8();
          }
          if ((bVar24) && (plVar6 = (longlong *)FUN_14891b81c(), plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x78))(plVar6,&local_b8,&local_c8);
            if (local_b8 != 0) {
              iVar3 = *(int *)(param_1 + 0x120);
              *(uint *)(param_1 + 0x120) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x124) < iVar3 + 1U) {
                FUN_148d89392(param_1 + 0x118,iVar3);
              }
              lVar18 = *(longlong *)(param_1 + 0x118);
              lVar17 = lVar18 + 0x20 + (longlong)iVar3 * 0x58;
              *(undefined8 *)(lVar17 + 0x28) = 0;
              *(undefined8 *)(lVar17 + 0x30) = 0;
              *(undefined8 *)(lVar17 + 0x1c) = 0;
              *(undefined8 *)(lVar17 + 0x24) = 0;
              *(undefined8 *)(lVar17 + 0xc) = 0;
              *(undefined8 *)(lVar17 + 0x14) = 0;
              *(undefined8 *)(lVar17 + -4) = 0;
              *(undefined8 *)(lVar17 + 4) = 0;
              *(undefined8 *)(lVar17 + -0x14) = 0;
              *(undefined8 *)(lVar17 + -0xc) = 0;
              *(undefined8 *)(lVar17 + -0x20) = local_c8;
              *(uint *)(lVar17 + -0x18) = local_c0;
              FUN_14884314a(local_b8,lVar18 + (longlong)iVar3 * 0x58 + 0x10);
              FUN_14891b796(param_1);
              FUN_1456d2b0e(plVar5 + 0x106,&local_98,&local_c8);
              FUN_1411b8130(lVar17);
              if (local_70 != 0) {
                FUN_1400020a8();
              }
            }
            plVar5 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_b0 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*local_b0)();
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))();
                }
              }
            }
          }
        }
      }
      puVar13 = puVar13 + 3;
    } while (puVar13 != puVar7);
  }
  puVar7 = (uint *)(param_1 + 0xd8);
  iVar3 = *(int *)(param_1 + 0xf0);
  if (iVar3 == 0) {
    uVar23 = 1;
    uVar21 = 0;
    iVar8 = 0;
    iVar19 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0xe8);
    if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
      puVar13 = puVar7;
    }
    uVar22 = *puVar13;
    if (uVar22 == 0) {
      iVar8 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar8 = iVar3 + -1;
      }
      uVar21 = 0;
      uVar23 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar23 = uVar21;
      }
      iVar19 = 0;
      do {
        if (uVar23 == uVar21) goto LAB_1411d2af5;
        iVar19 = iVar19 + 0x20;
        uVar22 = puVar13[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar21 = 0;
      iVar19 = 0;
    }
    uVar23 = (ulonglong)(-uVar22 & uVar22);
    uVar14 = uVar23 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar8 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 < iVar3) {
    plVar5 = (longlong *)(param_1 + 200);
    local_d8 = param_1 + 0x118;
    local_d0 = param_1 + 0x100;
    uVar22 = 0xffffffff;
    local_e8 = puVar7;
    do {
      uVar9 = *(uint *)(*plVar5 + (longlong)iVar8 * 0x14);
      uVar15 = *(uint *)(*plVar5 + 8 + (longlong)iVar8 * 0x14);
      if ((longlong)(int)local_e0[1] != 0) {
        lVar17 = 0;
        do {
          if ((*(uint *)(*local_e0 + lVar17) == uVar9) &&
             (*(uint *)(*local_e0 + 8 + lVar17) == uVar15)) goto LAB_1411d288b;
          lVar17 = lVar17 + 0xc;
        } while ((longlong)(int)local_e0[1] * 0xc != lVar17);
      }
      iVar3 = *(int *)(param_1 + 0x120);
      if ((longlong)iVar3 != 0) {
        uVar14 = 0;
        do {
          puVar7 = local_e8;
          if ((*(uint *)(*(longlong *)(param_1 + 0x118) + uVar14) == uVar9) &&
             (*(uint *)(*(longlong *)(param_1 + 0x118) + 8 + uVar14) == uVar15)) {
            iVar8 = (int)(uVar14 >> 3) * -0x45d1745d;
            if (iVar8 < iVar3 && -1 < iVar8) {
              if (iVar8 < *(int *)(param_1 + 0x128)) {
                if ((*(uint *)(param_1 + 0x148) == uVar9) && (*(uint *)(param_1 + 0x150) == uVar15))
                {
                  *(undefined4 *)(param_1 + 0x150) = DAT_14c948620;
                  *(undefined8 *)(param_1 + 0x148) = DAT_14c948618;
                  *(undefined8 *)(param_1 + 0x158) = 0x7fefffffffffffff;
                }
                *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
              }
              FUN_148d89422(local_d8);
              FUN_148d89486(local_d8);
              puVar7 = local_e8;
            }
            break;
          }
          uVar14 = uVar14 + 0x58;
        } while ((longlong)iVar3 * 0x58 - uVar14 != 0);
      }
      if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
        uVar4 = uVar9;
        if (uVar15 != 0) {
          uVar12 = uVar15 >> 0xd ^ uVar9 - uVar15;
          uVar4 = uVar12 << 8 ^ (-0x61c88647 - uVar15) - uVar12;
          uVar16 = uVar4 >> 0xd ^ (uVar15 - uVar12) - uVar4;
          uVar12 = uVar16 >> 0xc ^ (uVar12 - uVar4) - uVar16;
          uVar20 = uVar12 << 0x10 ^ (uVar4 - uVar16) - uVar12;
          uVar4 = uVar20 >> 5 ^ (uVar16 - uVar12) - uVar20;
          uVar16 = uVar4 >> 3 ^ (uVar12 - uVar20) - uVar4;
          uVar12 = uVar16 << 10 ^ (uVar20 - uVar4) - uVar16;
          uVar4 = uVar12 >> 0xf ^ uVar4 - (uVar16 + uVar12);
        }
        lVar17 = *(longlong *)(param_1 + 0x108);
        if (*(longlong *)(param_1 + 0x108) == 0) {
          lVar17 = local_d0;
        }
        uVar4 = *(uint *)(lVar17 + ((longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0x110) - 1U)
                                   * 4);
        if (uVar4 != 0xffffffff) {
LAB_1411d29fe:
          puVar13 = (uint *)(*plVar5 + (longlong)(int)uVar4 * 0x14);
          if ((*puVar13 != uVar9) || (puVar13[2] != uVar15)) goto LAB_1411d2a0e;
          uVar9 = *(uint *)(lVar17 + (longlong)(int)puVar13[4] * 4);
          if (uVar9 == uVar4) {
            puVar7 = (uint *)(lVar17 + (longlong)(int)puVar13[4] * 4);
          }
          else {
            do {
              puVar7 = (uint *)(*plVar5 + (longlong)(int)uVar9 * 0x14 + 0xc);
              uVar9 = *puVar7;
            } while (uVar9 != uVar4);
          }
          *puVar7 = puVar13[3];
          FUN_14096170c(plVar5,uVar4,1);
          puVar7 = local_e8;
        }
      }
LAB_1411d288b:
      uVar22 = uVar22 & ~(uint)uVar23;
      puVar13 = *(uint **)(param_1 + 0xe8);
      if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
        puVar13 = puVar7;
      }
      iVar3 = *(int *)(param_1 + 0xf0);
      iVar8 = (int)uVar21;
      lVar17 = (longlong)iVar8;
      uVar9 = puVar13[lVar17] & uVar22;
      if (uVar9 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar18 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar9 = puVar13[lVar17 + lVar18 + 1];
          if (uVar9 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar11 - lVar17 == lVar18) goto LAB_1411d2af5;
        }
        uVar21 = (ulonglong)(iVar8 + (int)lVar18 + 1);
        uVar22 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar9 & uVar9);
      uVar14 = uVar23 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar8 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_1411d2af5:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1411d2a0e:
  uVar4 = puVar13[3];
  if (uVar4 == 0xffffffff) goto LAB_1411d288b;
  goto LAB_1411d29fe;
}



// FUNCTION 1411d2c14 FUN_1411d2c14 body=435 status=ok
// SIG undefined FUN_1411d2c14(void)

undefined4 *
FUN_1411d2c14(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
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
  uVar2 = *local_48;
  uVar4 = local_48[2];
  if (uVar4 != 0) {
    uVar2 = uVar4 >> 0xd ^ uVar2 - uVar4;
    uVar5 = uVar2 << 8 ^ (-0x61c88647 - uVar4) - uVar2;
    uVar6 = uVar5 >> 0xd ^ (uVar4 - uVar2) - uVar5;
    uVar4 = uVar6 >> 0xc ^ (uVar2 - uVar5) - uVar6;
    uVar2 = uVar4 << 0x10 ^ (uVar5 - uVar6) - uVar4;
    uVar5 = uVar2 >> 5 ^ (uVar6 - uVar4) - uVar2;
    uVar4 = uVar5 >> 3 ^ (uVar4 - uVar2) - uVar5;
    uVar2 = uVar4 << 10 ^ (uVar2 - uVar5) - uVar4;
    uVar2 = uVar2 >> 0xf ^ uVar5 - (uVar4 + uVar2);
  }
  local_68 = param_4;
  cVar1 = FUN_1409614b4(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      local_48[4] = uVar2;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar2) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
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



// FUNCTION 1411d2dc8 FUN_1411d2dc8 body=286 status=ok
// SIG undefined FUN_1411d2dc8(void)

undefined8 FUN_1411d2dc8(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1411d2ee0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411d2ee0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1411d2ee0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411d2e8d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1411d2e8d;
    }
  }
  uVar6 = 0;
LAB_1411d2e8d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d2f10 FUN_1411d2f10 body=349 status=ok
// SIG undefined FUN_1411d2f10(void)

void FUN_1411d2f10(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
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
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x26e0) != 0)) {
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
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      plVar2 = (longlong *)FUN_1403ca102(param_1);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
        if (cVar1 == '\b') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d3086 FUN_1411d3086 body=235 status=ok
// SIG undefined FUN_1411d3086(void)

void FUN_1411d3086(longlong *param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = (**(code **)(*param_1 + 0x680))();
  if ((cVar4 != '\0') &&
     ((param_3 != '\0' || (cVar4 = (**(code **)(*param_1 + 0x678))(param_1), cVar4 != '\0')))) {
    uVar6 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_30,uVar6);
    if (local_28 != (longlong *)0x0) {
      iVar5 = (int)local_28[1];
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_14422f78e(local_30,param_2,param_1 + 0x4c8);
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411d3172 FUN_1411d3172 body=142 status=ok
// SIG undefined FUN_1411d3172(void)

void FUN_1411d3172(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(double *)(param_2 + 10) + 50.0;
  local_20 = *(double *)(param_2 + 8) + 50.0;
  local_28 = *(double *)(param_2 + 6) + 50.0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  local_10 = 0;
  local_30 = 0;
  FUN_1411d3202(param_1 + 0x30,0,param_1 + 0x30);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d3202 FUN_1411d3202 body=899 status=ok
// SIG undefined FUN_1411d3202(void)

void FUN_1411d3202(longlong param_1,int param_2,double *param_3,double *param_4)

{
  double dVar1;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  ulonglong in_R11;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  double dVar2;
  
  iVar3 = DAT_14c9647dc;
  lVar23 = DAT_14c9647c8;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar22 = *(longlong *)(param_1 + 0x60);
  lVar8 = (longlong)param_2;
  if (*(int *)(lVar22 + 4 + lVar8 * 8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x80);
    lVar15 = lVar8 * 0x410;
    piVar17 = *(int **)(lVar13 + 0x400 + lVar15);
    piVar11 = (int *)(lVar13 + lVar15);
    if (piVar17 != (int *)0x0) {
      piVar11 = piVar17;
    }
    lVar13 = (longlong)*(int *)(lVar13 + 0x408 + lVar15);
    piVar14 = (int *)0x0;
    if (lVar13 != 0) {
      piVar14 = piVar11 + lVar13 * 0x10;
      piVar10 = piVar11 + 0xf;
      do {
        auVar31._8_8_ =
             -(ulonglong)
              (*(double *)(piVar10 + -7) + param_4[5] <
              ABS(*(double *)(piVar10 + -0xd) - param_4[1]));
        auVar31._0_8_ =
             -(ulonglong)
              (*(double *)(piVar10 + -9) + param_4[4] < ABS(*(double *)(piVar10 + -0xf) - *param_4))
        ;
        uVar16 = movmskpd((int)piVar17,auVar31);
        auVar5._8_8_ = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        auVar5._0_8_ = -(ulonglong)
                        (*(double *)(piVar10 + -5) + param_4[6] <
                        ABS(*(double *)(piVar10 + -0xb) - param_4[2]));
        iVar18 = movmskpd((int)in_R11,auVar5);
        uVar16 = iVar18 << 2 | uVar16;
        in_R11 = (ulonglong)uVar16;
        if ((uVar16 == 0) && (*piVar10 != 0)) {
          uVar16 = piVar10[-1];
          in_R11 = (ulonglong)uVar16;
          if ((-1 < (int)uVar16) && ((int)uVar16 < iVar3)) {
            in_R11 = (ulonglong)(uVar16 >> 0x10);
            plVar21 = (longlong *)
                      ((ulonglong)((uVar16 & 0xffff) * 0x18) + *(longlong *)(lVar23 + in_R11 * 8));
            if ((((plVar21 != (longlong *)0x0) && ((int)plVar21[2] == *piVar10)) &&
                ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)) && (*plVar21 != 0)) {
              *(undefined1 *)(*plVar21 + 0x628) = 0;
            }
          }
        }
        piVar11 = piVar10 + 0x10;
        piVar17 = piVar10 + 1;
        piVar10 = piVar11;
      } while (piVar17 != piVar14);
      lVar22 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar22 + lVar8 * 8);
    if (iVar3 != -1) {
      dVar1 = param_3[8];
      dVar2 = param_3[8];
      auVar30._8_8_ = dVar2;
      auVar30._0_8_ = dVar1;
      dVar27 = param_3[9];
      dVar24 = param_3[9];
      lVar22 = -(ulonglong)((param_3[1] + dVar24) - dVar2 < param_4[1] + param_4[5]);
      lVar23 = -(ulonglong)((param_3[3] + dVar24) - dVar2 < param_4[3] + param_4[7]);
      auVar25._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar24) + dVar2);
      auVar25._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar27) + dVar1);
      auVar6._8_4_ = (int)lVar22;
      auVar6._0_8_ = -(ulonglong)((*param_3 + dVar27) - dVar1 < *param_4 + param_4[4]);
      auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      iVar18 = movmskpd(param_2,auVar6);
      auVar7._8_4_ = (int)lVar23;
      auVar7._0_8_ = -(ulonglong)((param_3[2] + dVar27) - dVar1 < param_4[2] + param_4[6]);
      auVar7._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      uVar16 = movmskpd((int)piVar11,auVar7);
      iVar9 = movmskpd(uVar16 & 1,auVar25);
      auVar4._8_8_ = -(ulonglong)(param_4[3] - param_4[7] <= (param_3[3] - dVar24) + dVar2);
      auVar4._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (param_3[2] - dVar27) + dVar1);
      iVar12 = movmskpd((int)piVar14,auVar4);
      uVar19 = 0;
      auVar31 = pmovsxbd(auVar30,0x8040201);
      iVar20 = 0;
      do {
        if ((uVar19 ^ 0xffffffc7 | iVar12 * 0x20 + iVar9 * 8 | iVar18 + (uVar16 & 1) * 4) ==
            0xffffffff) {
          auVar26._4_4_ = iVar20;
          auVar26._0_4_ = iVar20;
          auVar26._8_4_ = iVar20;
          auVar26._12_4_ = iVar20;
          auVar26 = auVar26 & auVar31;
          dVar1 = param_3[9];
          dVar2 = param_3[9];
          dVar28 = (double)(float)-(uint)(auVar26._0_4_ == auVar31._0_4_);
          dVar29 = (double)(float)-(uint)(auVar26._4_4_ == auVar31._4_4_);
          dVar24 = (double)(float)-(uint)(auVar26._8_4_ == auVar31._8_4_);
          dVar27 = (double)(float)-(uint)(auVar26._12_4_ == auVar31._12_4_);
          local_108 = (double)(~(ulonglong)dVar28 & (ulonglong)-dVar1 |
                              (ulonglong)dVar1 & (ulonglong)dVar28) + *param_3;
          dStack_100 = (double)(~(ulonglong)dVar29 & (ulonglong)-dVar2 |
                               (ulonglong)dVar2 & (ulonglong)dVar29) + param_3[1];
          local_f8 = ((double)(~(ulonglong)dVar24 & (ulonglong)-dVar1 |
                              (ulonglong)dVar1 & (ulonglong)dVar24) + param_3[2]) * 1.0;
          dStack_f0 = ((double)(~(ulonglong)dVar27 & (ulonglong)-dVar2 |
                               (ulonglong)dVar2 & (ulonglong)dVar27) + param_3[3]) * 0.0;
          local_e8 = param_3[8];
          local_d8 = local_e8 * 1.0;
          dStack_d0 = local_e8 * 0.0;
          local_c8 = local_e8 * 0.5 * 1.0625;
          local_c0 = local_e8 - local_c8;
          dStack_e0 = local_e8;
          FUN_1411d3202(param_1,iVar3 + iVar20,&local_108,param_4);
        }
        iVar20 = iVar20 + 1;
        uVar19 = uVar19 + 9;
      } while (iVar20 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d3586 FUN_1411d3586 body=393 status=ok
// SIG undefined FUN_1411d3586(void)

undefined8 * FUN_1411d3586(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7be070;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14061cc94(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14061cc94(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1411d370f(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a7be078;
  puVar1 = TlsGetValue(DAT_14c7612d4);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612d4,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411d370f FUN_1411d370f body=45 status=ok
// SIG undefined FUN_1411d370f(void)

void FUN_1411d370f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1411d373c FUN_1411d373c body=678 status=ok
// SIG undefined FUN_1411d373c(void)

void FUN_1411d373c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_b8 [44];
  int local_8c;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_3;
  local_70 = param_1;
  lVar6 = FUN_1400e3c00(param_1,param_2,1);
  if (lVar6 != 0) {
    lVar14 = lVar6 + 0x80;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar14;
    if (*(int *)(lVar6 + 0x98) == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar15 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
      iVar15 = *(int *)(lVar6 + 0x98);
    }
    lVar4 = local_60;
    iVar9 = (int)local_68;
    uVar16 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar13 = local_50;
    iVar1 = iVar15;
    lVar7 = lVar14;
    if (local_58._4_4_ != iVar15 || local_60 != lVar14) {
      do {
        local_78 = lVar7;
        local_80 = lVar6;
        local_8c = iVar1;
        lVar6 = *(longlong *)(*(longlong *)(local_80 + 0x70) + 0x10 + (longlong)iVar8 * 0x20);
        if ((*(char *)(lVar6 + 0x2a) == '\0') &&
           (cVar5 = FUN_1411d39e4(lVar6), iVar15 = local_8c, cVar5 == '\0')) {
          lVar7 = FUN_140cbed0a(local_70,lVar6);
          plVar3 = local_88;
          lVar6 = *local_88;
          iVar8 = (int)local_88[1];
          lVar17 = (longlong)iVar8;
          if (lVar17 != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(lVar6 + uVar10) == lVar7) {
                iVar15 = local_8c;
                if ((int)(~uVar10 >> 3) != 0) goto LAB_1411d3888;
                break;
              }
              uVar10 = uVar10 + 8;
            } while (lVar17 * 8 - uVar10 != 0);
          }
          *(uint *)(local_88 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)local_88 + 0xc) < iVar8 + 1U) {
            FUN_1411d3a24(local_88,iVar8);
            lVar6 = *plVar3;
            lVar14 = local_78;
          }
          *(longlong *)(lVar6 + lVar17 * 8) = lVar7;
          iVar15 = local_8c;
        }
LAB_1411d3888:
        uVar16 = uVar16 & ~(uint)uVar12;
        lVar6 = *(longlong *)(lVar4 + 0x10);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar6 = lVar4;
        }
        iVar1 = *(int *)(lVar4 + 0x18);
        lVar7 = (longlong)iVar9;
        uVar11 = *(uint *)(lVar6 + lVar7 * 4) & uVar16;
        if (uVar11 == 0) {
          iVar8 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar8 = iVar1 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar2 = iVar8;
          if (iVar8 < iVar9) {
            iVar2 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar17 = 0;
            do {
              uVar11 = *(uint *)(lVar6 + lVar7 * 4 + 4 + lVar17 * 4);
              if (uVar11 != 0) {
                iVar9 = iVar9 + (int)lVar17 + 1;
                uVar16 = 0xffffffff;
                goto LAB_1411d38fb;
              }
              iVar13 = iVar13 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar2 - lVar7 != lVar17);
            uVar16 = 0xffffffff;
            iVar9 = iVar2;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar1;
          iVar15 = local_8c;
        }
        else {
LAB_1411d38fb:
          uVar12 = (ulonglong)(-uVar11 & uVar11);
          uVar10 = uVar12 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar1 <= iVar8) {
            iVar8 = iVar1;
          }
        }
        iVar1 = local_8c;
        lVar6 = local_80;
        lVar7 = local_78;
      } while (iVar8 != iVar15 || lVar4 != lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411d39e4 FUN_1411d39e4 body=63 status=ok
// SIG undefined FUN_1411d39e4(void)

undefined8 FUN_1411d39e4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    for (lVar1 = *(longlong *)(param_1 + 0x60); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
      lVar2 = *(longlong *)(lVar1 + 8);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x168) <= *(int *)(lVar1 + 0x10))) &&
         ((*(byte *)(lVar2 + 0x160) & 4) == 0)) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1411d3a24 FUN_1411d3a24 body=353 status=ok
// SIG undefined FUN_1411d3a24(void)

void FUN_1411d3a24(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411d3aa9;
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
LAB_1411d3aa9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1411d3b86 FUN_1411d3b86 body=60 status=ok
// SIG undefined FUN_1411d3b86(void)

void FUN_1411d3b86(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a3de8d0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1411d3bc2 FUN_1411d3bc2 body=4360 status=ok
// SIG undefined FUN_1411d3bc2(void)

char * FUN_1411d3bc2(longlong *param_1,char *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  longlong **pplVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_618 [32];
  undefined ***local_5f8;
  undefined4 local_5f0;
  longlong *local_5e8;
  char *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  longlong local_5c8;
  longlong local_5c0;
  undefined8 local_5b8;
  longlong local_5b0;
  ulonglong local_5a8;
  longlong *plStack_5a0;
  undefined8 local_598;
  longlong *plStack_590;
  ulonglong local_588;
  longlong *plStack_580;
  undefined8 local_578;
  longlong *plStack_570;
  ulonglong local_560;
  longlong *local_558;
  longlong local_550;
  longlong *local_548;
  undefined **local_540;
  ulonglong local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  ulonglong local_520;
  longlong *plStack_518;
  undefined8 local_510;
  longlong *plStack_508;
  longlong *local_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined3 uStack_4d8;
  undefined8 uStack_4d5;
  ulonglong local_4c8;
  longlong *aplStack_4c0 [36];
  longlong **local_3a0;
  undefined4 local_398;
  longlong *local_380;
  longlong local_378;
  undefined4 local_370;
  undefined8 uStack_368;
  undefined3 uStack_360;
  undefined5 local_35d;
  undefined3 uStack_358;
  undefined8 uStack_355;
  ulonglong local_348;
  undefined8 uStack_340;
  undefined **local_338;
  ulonglong uStack_330;
  undefined8 local_328;
  longlong lStack_320;
  ulonglong local_318;
  longlong *plStack_310;
  undefined8 local_308;
  longlong *local_300;
  longlong *local_2f8;
  ulonglong local_2f0;
  longlong *plStack_2e8;
  char local_2e0;
  undefined4 local_288;
  undefined1 local_284;
  undefined8 uStack_278;
  undefined3 uStack_270;
  undefined5 local_26d;
  undefined3 uStack_268;
  undefined8 uStack_265;
  ulonglong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  longlong *plStack_210;
  longlong *local_208;
  undefined **local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  longlong *plStack_1d8;
  undefined8 local_1d0;
  longlong *plStack_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 uStack_1a8;
  undefined3 uStack_1a0;
  undefined5 local_19d;
  undefined3 uStack_198;
  undefined8 uStack_195;
  undefined4 local_150;
  undefined1 local_14c;
  undefined **local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong lStack_130;
  ulonglong local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined3 uStack_e0;
  undefined8 uStack_dd;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *plStack_78;
  char local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_618;
  *(int *)(param_1 + 199) = (int)param_1[199] + 1;
  local_5e8 = param_1;
  local_5e0 = param_2;
  local_5c8 = param_4;
  if (*(int *)(param_3 + 0x130) < 1) {
    local_528 = *(undefined8 *)(param_4 + 0x18);
    local_538 = *(ulonglong *)(param_4 + 8);
    uStack_530 = *(undefined8 *)(param_4 + 0x10);
    local_540 = &PTR_FUN_149eda650;
    local_520 = *(ulonglong *)(param_4 + 0x20);
    plStack_518 = *(longlong **)(param_4 + 0x28);
    local_510 = *(undefined8 *)(param_4 + 0x30);
    plStack_508 = *(longlong **)(param_4 + 0x38);
    local_500 = *(longlong **)(param_4 + 0x40);
    local_4f8 = *(undefined8 *)(param_4 + 0x48);
    local_4f0 = *(longlong **)(param_4 + 0x50);
    if (local_4f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
      UNLOCK();
    }
    local_4e8 = *(undefined4 *)(param_4 + 0x58);
    uStack_4e4 = *(undefined4 *)(param_4 + 0x5c);
    uStack_4e0 = *(undefined4 *)(param_4 + 0x60);
    uStack_4dc = *(undefined4 *)(param_4 + 100);
    uStack_4d5 = *(undefined8 *)(param_4 + 0x6b);
    uStack_4d8 = (undefined3)((ulonglong)*(undefined8 *)(param_4 + 99) >> 0x28);
  }
  else {
    lVar13 = param_3 + 8;
    if (*(longlong *)(param_3 + 0x128) != 0) {
      lVar13 = *(longlong *)(param_3 + 0x128);
    }
    local_4c8 = *(ulonglong *)(lVar13 + 0x38);
    plVar6 = *(longlong **)(lVar13 + 0x40);
    if (plVar6 == (longlong *)0x0) {
      aplStack_4c0[0] = (longlong *)0x0;
      FUN_1403d09a4(param_1,&local_540,param_4);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      aplStack_4c0[0] = plVar6;
      FUN_1403d09a4(param_1,&local_540,param_4);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  iVar14 = *(int *)(param_4 + 0xc);
  if (((longlong)iVar14 < 0) || ((int)local_5e8[99] <= iVar14)) {
LAB_1411d4acc:
    FUN_141370954(local_5e8,&local_550,iVar14,0);
  }
  else {
    lVar10 = (longlong)iVar14 * 0x10;
    lVar13 = *(longlong *)(local_5e8[0x62] + lVar10);
    plVar6 = *(longlong **)(local_5e8[0x62] + 8 + lVar10);
    if (plVar6 == (longlong *)0x0) {
      if (lVar13 == 0) goto LAB_1411d4acc;
      local_548 = (longlong *)0x0;
      local_550 = lVar13;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (lVar13 != 0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_550 = lVar13;
        local_548 = plVar6;
      }
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (lVar13 == 0) goto LAB_1411d4acc;
    }
  }
  FUN_1411d4e4a(local_550,param_4);
  (**(code **)(*local_5e8 + 0x98))();
  plVar6 = local_4f0;
  pcVar7 = local_5e0;
  local_258 = local_538;
  uStack_250 = uStack_530;
  local_588 = local_520;
  plStack_580 = plStack_518;
  local_578 = local_510;
  plStack_570 = plStack_508;
  local_5d0 = local_500;
  local_5d8 = local_4f8;
  if (local_4f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
    UNLOCK();
  }
  uStack_278 = CONCAT44(uStack_4e4,local_4e8);
  uStack_268 = uStack_4d8;
  uStack_265 = uStack_4d5;
  uStack_270 = (undefined3)uStack_4e0;
  local_26d = (undefined5)(CONCAT44(uStack_4dc,uStack_4e0) >> 0x18);
  *local_5e0 = '\0';
  local_5e0[0x20] = '\0';
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  pcVar7[0xc] = '\0';
  pcVar7[0xd] = '\0';
  pcVar7[0xe] = '\0';
  pcVar7[0xf] = '\0';
  pcVar7[0x10] = '\0';
  pcVar7[0x11] = '\0';
  pcVar7[0x12] = '\0';
  pcVar7[0x13] = '\0';
  pcVar7[0x14] = '\0';
  pcVar7[0x15] = '\0';
  pcVar7[0x16] = '\0';
  pcVar7[0x17] = '\0';
  memset(local_5e0 + 0x28,0,0x88);
  pcVar7[0xb0] = '\x02';
  pcVar7[0xb1] = '\a';
  pcVar7[0xb2] = '\x02';
  pcVar7[0xb3] = '\0';
  pcVar7[0xb4] = '\0';
  if (0 < *(int *)(param_3 + 0x130)) {
    local_5c0 = param_3 + 8;
    lVar16 = 0x40;
    lVar10 = 0x10;
    lVar13 = 1;
    do {
      local_2e0 = *(char *)(*(longlong *)(param_3 + 0x150) + lVar10);
      if (local_2e0 == '\x01') {
        lVar12 = *(longlong *)(param_3 + 0x150) + lVar10;
        local_4c8 = *(ulonglong *)(lVar12 + -0x10);
        aplStack_4c0[0] = *(longlong **)(lVar12 + -8);
      }
      lVar12 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar12 = local_5c0;
      }
      local_308 = *(undefined8 *)(lVar12 + -0x10 + lVar16);
      puVar4 = (ulonglong *)(lVar12 + -0x40 + lVar16);
      local_338 = (undefined **)*puVar4;
      uStack_330 = puVar4[1];
      puVar5 = (undefined8 *)(lVar12 + -0x30 + lVar16);
      local_328 = *puVar5;
      lStack_320 = puVar5[1];
      puVar4 = (ulonglong *)(lVar12 + -0x20 + lVar16);
      local_318 = *puVar4;
      plStack_310 = (longlong *)puVar4[1];
      local_300 = *(longlong **)(lVar12 + -8 + lVar16);
      local_2f8 = *(longlong **)(lVar12 + lVar16);
      if (local_2f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
        UNLOCK();
      }
      if (local_2e0 == '\0') {
        local_1e0 = local_588;
        plStack_1d8 = plStack_580;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
      }
      else {
        local_2f0 = local_4c8;
        plStack_2e8 = aplStack_4c0[0];
        local_1e0 = local_4c8;
        plStack_1d8 = aplStack_4c0[0];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
      }
      uStack_195 = uStack_265;
      uStack_198 = uStack_268;
      local_19d = local_26d;
      uStack_1a0 = uStack_270;
      uStack_1a8 = uStack_278;
      local_1b0 = plVar6;
      local_1b8 = local_5d8;
      local_1c0 = local_5d0;
      plStack_1c8 = plStack_570;
      local_1d0 = local_578;
      uStack_1f0 = uStack_250;
      local_1f8 = local_258;
      local_200 = &PTR_FUN_149eda650;
      if (local_2f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
        UNLOCK();
      }
      local_1e8 = param_3;
      local_148 = local_338;
      uStack_140 = uStack_330;
      local_138 = local_328;
      lStack_130 = lStack_320;
      local_128 = local_318;
      plStack_120 = plStack_310;
      local_118 = local_308;
      plStack_110 = local_300;
      local_108 = local_2f8;
      (**(code **)(*local_300 + 0x60))(local_338._0_4_,&local_4c8,&local_148,&local_200);
      plVar1 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_108 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1402c173a(&local_4c8,&local_300);
      pcVar7 = local_5e0;
      FUN_1402c17c2(local_5e0,&local_4c8);
      FUN_14493db24(&local_4c8);
      local_5f0 = local_1f8._4_4_;
      local_5f8 = &local_200;
      FUN_1402c1d72(local_5e8,param_3,pcVar7,param_3);
      plVar1 = local_1b0;
      local_200 = &PTR_FUN_149eda650;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      plVar1 = local_2f8;
      if (local_2e0 == '\x01') {
        local_2e0 = '\0';
      }
      if (local_2f8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_2f8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_2f8)(local_2f8);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (*local_5e0 != '\0') break;
      lVar16 = lVar16 + 0x48;
      lVar10 = lVar10 + 0x14;
      bVar17 = lVar13 < *(int *)(param_3 + 0x130);
      lVar13 = lVar13 + 1;
    } while (bVar17);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = local_4f0;
  if (*local_5e0 == '\0') {
    local_348 = local_538;
    uStack_340 = uStack_530;
    local_5a8 = local_520;
    plStack_5a0 = plStack_518;
    local_598 = local_510;
    plStack_590 = plStack_508;
    local_5d0 = local_500;
    local_5d8 = local_4f8;
    if (local_4f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
      UNLOCK();
    }
    uStack_368 = CONCAT44(uStack_4e4,local_4e8);
    uStack_358 = uStack_4d8;
    uStack_355 = uStack_4d5;
    uStack_360 = (undefined3)uStack_4e0;
    local_35d = (undefined5)(CONCAT44(uStack_4dc,uStack_4e0) >> 0x18);
    uVar15 = (ulonglong)*(int *)(param_3 + 0x130);
    local_338 = (undefined **)((ulonglong)local_338 & 0xffffffffffffff00);
    local_318 = local_318 & 0xffffffffffffff00;
    uStack_330 = 0;
    local_328 = 0;
    memset(&plStack_310,0,0x88);
    local_288 = 0x20702;
    local_284 = 0;
    if (0 < (longlong)uVar15) {
      local_5c0 = param_3 + 8;
      lVar13 = uVar15 * 0x48 + -8;
      lVar10 = uVar15 * 0x14 + -4;
      do {
        local_70 = *(char *)(*(longlong *)(param_3 + 0x150) + lVar10);
        if (local_70 == '\x01') {
          lVar16 = *(longlong *)(param_3 + 0x150) + lVar10;
          local_4c8 = *(ulonglong *)(lVar16 + -0x10);
          aplStack_4c0[0] = *(longlong **)(lVar16 + -8);
        }
        lVar16 = *(longlong *)(param_3 + 0x128);
        if (*(longlong *)(param_3 + 0x128) == 0) {
          lVar16 = local_5c0;
        }
        local_218 = *(undefined8 *)(lVar16 + -0x10 + lVar13);
        puVar5 = (undefined8 *)(lVar16 + -0x40 + lVar13);
        local_248 = *puVar5;
        uStack_240 = puVar5[1];
        puVar5 = (undefined8 *)(lVar16 + -0x30 + lVar13);
        local_238 = *puVar5;
        uStack_230 = puVar5[1];
        puVar5 = (undefined8 *)(lVar16 + -0x20 + lVar13);
        local_228 = *puVar5;
        uStack_220 = puVar5[1];
        plStack_210 = *(longlong **)(lVar16 + -8 + lVar13);
        local_208 = *(longlong **)(lVar16 + lVar13);
        if (local_208 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_208 + 1) = (int)local_208[1] + 1;
          UNLOCK();
        }
        uStack_e4 = (undefined4)((uint5)local_35d >> 8);
        if (local_70 == '\0') {
          local_128 = local_5a8;
          plStack_120 = plStack_5a0;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          uStack_e8 = (undefined4)CONCAT53(local_35d,uStack_360);
        }
        else {
          local_80 = local_4c8;
          plStack_78 = aplStack_4c0[0];
          local_128 = local_4c8;
          plStack_120 = aplStack_4c0[0];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          uStack_e8 = (undefined4)CONCAT53(local_35d,uStack_360);
        }
        uStack_dd = uStack_355;
        uStack_e0 = uStack_358;
        uStack_f0 = uStack_368;
        local_f8 = plVar6;
        local_100 = local_5d8;
        local_108 = local_5d0;
        plStack_110 = plStack_590;
        local_118 = local_598;
        local_138 = uStack_340;
        uStack_140 = local_348;
        local_148 = &PTR_FUN_149eda650;
        if (local_208 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_208 + 1) = (int)local_208[1] + 1;
          UNLOCK();
        }
        local_200 = (undefined **)((ulonglong)local_200 & 0xffffffffffffff00);
        local_1e0 = local_1e0 & 0xffffffffffffff00;
        local_1f8 = 0;
        uStack_1f0 = 0;
        lStack_130 = param_3;
        local_c8 = local_248;
        uStack_c0 = uStack_240;
        local_b8 = local_238;
        uStack_b0 = uStack_230;
        local_a8 = local_228;
        uStack_a0 = uStack_220;
        local_98 = local_218;
        plStack_90 = plStack_210;
        local_88 = local_208;
        memset(&plStack_1d8,0,0x88);
        local_150 = 0x20702;
        local_14c = 0;
        if ((byte)uStack_e4 == 1) {
          (**(code **)(*plStack_210 + 0xe8))(plStack_210,&local_4c8,&local_248,&local_148);
          FUN_1403d4924(&local_200,&local_4c8);
          FUN_14493db24(&local_4c8);
        }
        if ((((byte)uStack_e4 & 1) == 0) ||
           (((char)local_200 == '\0' && ((char)local_5e8[0x9d] == '\x01')))) {
          (**(code **)(*plStack_210 + 0x58))(plStack_210,&local_4c8,&local_248,&local_148);
          FUN_1403d4924(&local_200,&local_4c8);
          FUN_14493db24(&local_4c8);
        }
        plVar1 = local_208;
        if (local_208 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_208 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_208)(local_208);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        FUN_1402c173a(&local_200,&plStack_90);
        FUN_1402c17c2(&local_338,&local_200);
        FUN_14493db24(&local_200);
        local_5f0 = uStack_140._4_4_;
        local_5f8 = &local_148;
        FUN_1402c1d72(local_5e8,param_3,&local_338,param_3);
        plVar1 = local_f8;
        local_148 = &PTR_FUN_149eda650;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_f8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        plVar1 = local_88;
        if (local_70 == '\x01') {
          local_70 = '\0';
        }
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_88 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (uVar15 < 2) break;
        lVar13 = lVar13 + -0x48;
        lVar10 = lVar10 + -0x14;
        uVar15 = uVar15 - 1;
      } while ((char)local_338 == '\0');
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1403d4924(local_5e0,&local_338);
    FUN_14493db24(&local_338);
    if ((*(char *)(local_5c8 + 100) == '\x01') &&
       (((*(char *)((longlong)local_5e8 + 0x4c3) != '\x01' ||
         (((char)local_5e8[0x98] == '\0' && (*(char *)((longlong)local_5e8 + 0x4c1) == '\0')))) &&
        (lVar13 = (longlong)*(int *)(param_3 + 0x130), 0 < lVar13)))) {
      uVar15 = lVar13 + 1;
      lVar13 = lVar13 * 0x48;
      do {
        lVar13 = lVar13 + -0x48;
        lVar10 = *(longlong *)(param_3 + 0x128);
        if (*(longlong *)(param_3 + 0x128) == 0) {
          lVar10 = param_3 + 8;
        }
        plVar6 = *(longlong **)(lVar10 + 0x38 + lVar13);
        (**(code **)(*plVar6 + 0x78))(plVar6,lVar10 + lVar13,&local_540);
        uVar15 = uVar15 - 1;
      } while (1 < uVar15);
    }
  }
  (**(code **)(*local_5e8 + 0x98))(local_5e8,&local_4c8);
  plVar6 = aplStack_4c0[0];
  uVar15 = local_4c8;
  if (aplStack_4c0[0] != (longlong *)0x0) {
    LOCK();
    plVar1 = aplStack_4c0[0] + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*aplStack_4c0[0])(aplStack_4c0[0]);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_560 == uVar15) {
    plVar6 = *(longlong **)(local_5e0 + 0x50);
    if (plVar6 != (longlong *)0x0) {
      iVar14 = (int)plVar6[1];
      do {
        if (iVar14 == 0) goto LAB_1411d44be;
        LOCK();
        iVar8 = (int)plVar6[1];
        bVar17 = iVar14 == iVar8;
        if (bVar17) {
          *(int *)(plVar6 + 1) = iVar14 + 1;
          iVar8 = iVar14;
        }
        iVar14 = iVar8;
        UNLOCK();
      } while (!bVar17);
      lVar13 = *(longlong *)(local_5e0 + 0x48);
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (lVar13 != 0) goto LAB_1411d45c4;
    }
LAB_1411d44be:
    iVar14 = *(uint *)(param_3 + 0x130) + 1;
    lVar13 = (ulonglong)*(uint *)(param_3 + 0x130) * 0x48 + 0x40;
    do {
      iVar14 = iVar14 + -1;
      if (iVar14 < 1) goto LAB_1411d45c4;
      lVar10 = lVar13 + -0x48;
      lVar16 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar16 = param_3 + 8;
      }
      cVar9 = (**(code **)(**(longlong **)(lVar16 + -0x50 + lVar13) + 400))();
      lVar13 = lVar10;
    } while (cVar9 == '\0');
    local_5b8 = *(undefined8 *)(lVar16 + -8 + lVar10);
    local_5b0 = *(longlong *)(lVar16 + lVar10);
    if (local_5b0 != 0) {
      LOCK();
      *(int *)(local_5b0 + 8) = *(int *)(local_5b0 + 8) + 1;
      UNLOCK();
    }
    FUN_140d95bee(param_3,&local_4c8,&local_5b8);
    (**(code **)(*local_5e8 + 0x150))(local_5e8,*(undefined4 *)(local_5c8 + 0xc),&local_4c8,0);
    FUN_1447fa2ac(local_378,local_370);
    if (local_378 != 0) {
      FUN_1400020a8();
    }
    if (local_380 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_380 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_380)(local_380);
        LOCK();
        piVar3 = (int *)((longlong)local_380 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_380 + 0x10))(local_380);
        }
      }
    }
    pplVar11 = local_3a0;
    if (local_3a0 == (longlong **)0x0) {
      pplVar11 = aplStack_4c0;
    }
    FUN_1447157bd(pplVar11,local_398);
    if (local_3a0 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1411d45c4:
  if (local_558 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_558 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_558)(local_558);
      LOCK();
      piVar3 = (int *)((longlong)local_558 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_558 + 0x10))(local_558);
      }
    }
  }
  plVar6 = local_548;
  if (local_548 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_548 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_548)(local_548);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = local_4f0;
  local_540 = &PTR_FUN_149eda650;
  if (local_4f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4f0)(local_4f0);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  *(int *)(local_5e8 + 199) = (int)local_5e8[199] + -1;
  if ((local_60 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_5e0;
}



// FUNCTION 1411d4ccc FUN_1411d4ccc body=69 status=ok
// SIG undefined FUN_1411d4ccc(void)

undefined1 * FUN_1411d4ccc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1411d4d12 FUN_1411d4d12 body=196 status=ok
// SIG undefined FUN_1411d4d12(void)

undefined8 * FUN_1411d4d12(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x720) + 8))();
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x318))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)uVar5 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)uVar5 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (lVar3 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        FUN_1400c3152(lVar3,param_2);
      }
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return param_2;
    }
    if (lVar3 != 0) {
      FUN_1400c3152(lVar3,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1411d4dd6 FUN_1411d4dd6 body=115 status=ok
// SIG undefined FUN_1411d4dd6(void)

undefined4 FUN_1411d4dd6(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x318) <= (int)param_2)) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_2 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_2 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1410a406a();
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
  return uVar5;
}



// FUNCTION 1411d4e4a FUN_1411d4e4a body=117 status=ok
// SIG undefined FUN_1411d4e4a(void)

void FUN_1411d4e4a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *(undefined4 *)(param_2 + 0x58);
  puVar1 = (undefined8 *)FUN_1411d4ec0(param_1 + 0xa8,local_24,&local_24);
  *puVar1 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1411d4ec0(param_1 + 0xf8,local_24,&local_24);
  *puVar1 = *(undefined8 *)(param_2 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d4ec0 FUN_1411d4ec0 body=188 status=ok
// SIG undefined FUN_1411d4ec0(void)

int * FUN_1411d4ec0(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x14);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_1411d4f1f;
          break;
        }
        iVar2 = piVar1[3];
      } while (iVar2 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1469e657a(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1411d4f1f:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 1;
}



// FUNCTION 1411d4f7e FUN_1411d4f7e body=741 status=ok
// SIG undefined FUN_1411d4f7e(void)

void FUN_1411d4f7e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined *local_40;
  undefined1 *local_38;
  undefined **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong **)(param_1 + 0x3f70) != (longlong *)0x0) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))(), cVar1 != '\0')) &&
     ((*(byte *)(param_1 + 0x41a4) & 0x40) == 0)) goto LAB_1411d5184;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (param_2 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x4da0) = 0;
      FUN_14118c70e(param_1 + 0x4da8,&DAT_14cb77c90);
    }
    else {
      lVar2 = (**(code **)(*param_2 + 0x108))(param_2);
      if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_1 + 0x4da0) = lVar2;
        if (lVar2 == 0) {
          lVar2 = (**(code **)(*param_2 + 0x100))(param_2);
          if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) goto LAB_1411d5257;
          goto LAB_1411d51c6;
        }
      }
      else {
LAB_1411d5257:
        FUN_1456cec3c(lVar2);
LAB_1411d51c6:
        *(longlong *)(param_1 + 0x4da0) = lVar2;
      }
      lVar2 = (**(code **)(*param_2 + 0xd8))(param_2);
      if (param_1 + 0x4da8 != lVar2) {
        lVar4 = *(longlong *)(lVar2 + 0x30);
        if (*(longlong *)(lVar2 + 0x30) == 0) {
          lVar4 = lVar2;
        }
        FUN_1400709d4(param_1 + 0x4da8,lVar4,*(undefined4 *)(lVar2 + 0x38),
                      *(undefined4 *)(param_1 + 0x4de4));
      }
    }
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x3b58) + 0x18))(param_1 + 0x3b58);
    FUN_140ebeee8(param_1 + 0x4de8);
  }
  lVar2 = *(longlong *)(param_1 + 0x858);
  if (lVar2 != 0) {
    FUN_1400bc96c(lVar2 + 0x11f0,&DAT_14cbc1d58);
    FUN_1400bc96c(lVar2 + 0x1218,&DAT_14cbc1d58);
    if ((*(longlong *)(param_1 + 0x3f70) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x3f70) + 0x1080) == '\x01')) {
      local_30 = &local_40;
      local_40 = &DAT_14cbc1d58;
      local_38 = &LAB_143cbcb14;
      FUN_1400b7536(param_1 + 0x1808);
    }
  }
  if (((*(longlong *)(param_1 + 0x9490) != 0) && (*(longlong *)(param_1 + 0x9498) != 0)) &&
     ((*(byte *)(param_1 + 0x9778) & 2) != 0)) {
    FUN_1446f470e(&local_38,L"GoreModifier",1);
    FUN_1407bcc70(param_1 + 0x7c78,&local_38,0);
  }
  FUN_1411d5264(param_1 + 0x7c78,param_2);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x1118) + 0x20))(param_1 + 0x1118);
  if (lVar2 != 0) {
    FUN_1403569b4(lVar2);
  }
  uVar3 = (**(code **)(*(longlong *)(param_1 + 0x878) + 0x10))(param_1 + 0x878);
  FUN_1411d52e8(uVar3,*(undefined8 *)(param_1 + 0x4da0));
  FUN_1400bc96c(param_1 + 0x788,&DAT_14cbc1d58);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x860) + 0x10))(param_1 + 0x860);
  if (*(char *)(lVar2 + 0x18) == '\0') {
    FUN_1403663e2(lVar2);
  }
  FUN_1400bc96c(lVar2 + 0x18,&DAT_14cbc1d58);
  FUN_1400bc96c(lVar2 + 0x40,&DAT_14cbc1d58);
  FUN_140356874(param_1,0);
  FUN_140ecf43a(param_1 + 0x9b60);
LAB_1411d5184:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411d5264 FUN_1411d5264 body=131 status=ok
// SIG undefined FUN_1411d5264(void)

void FUN_1411d5264(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((((*(longlong *)(param_1 + 0x148) != 0) && (*(longlong *)(param_1 + 0x140) != 0)) &&
       (*(longlong *)(param_1 + 0x168) != 0)) &&
      ((*(longlong *)(param_1 + 0x170) != 0 && (*(longlong *)(param_1 + 0x178) != 0)))) &&
     ((param_2 != 0 &&
      ((*(longlong **)(param_1 + 0x180) != (longlong *)0x0 && (*(char *)(param_1 + 0x199) == '\0')))
      ))) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x40))();
    if (cVar1 != '\0') {
      FUN_140cf857e(param_1);
      FUN_140c4c7e8(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1411d52e8 FUN_1411d52e8 body=148 status=ok
// SIG undefined FUN_1411d52e8(void)

void FUN_1411d52e8(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x98);
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411d5344;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x9c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar4 = *plVar3;
      goto LAB_1411d5344;
    }
  }
  lVar4 = 0;
LAB_1411d5344:
  if ((lVar4 != param_2) && (cVar2 = FUN_14015491a(param_1,param_2), cVar2 == '\0')) {
    FUN_140154eac(param_1,0,param_2,lVar4);
    return;
  }
  return;
}



// FUNCTION 1411d537c FUN_1411d537c body=136 status=ok
// SIG undefined FUN_1411d537c(void)

void FUN_1411d537c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b517f90;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1411d5404 FUN_1411d5404 body=1253 status=ok
// SIG undefined FUN_1411d5404(void)

void FUN_1411d5404(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 param_8,
                  undefined1 param_9,undefined8 param_10,undefined1 param_11,char param_12,
                  char param_13)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_51 = param_11;
  local_52 = param_9;
  local_68 = param_1;
  local_60 = param_3;
  local_50 = param_4;
  if ((param_3 == (longlong *)0x0 || param_1 == 0) ||
     (lVar12 = FUN_1447210f0(param_3), cVar9 = param_13, cVar8 = param_12, local_70 = lVar12,
     lVar12 == 0)) goto LAB_1411d5816;
  if (param_12 == '\x01' && param_13 != '\0') {
    iVar11 = FUN_14490d72a(lVar12);
    if (iVar11 == 3) goto LAB_1411d5507;
    plVar13 = (longlong *)(**(code **)(*param_3 + 0x5d0))(param_3);
    if (plVar13 != (longlong *)0x0) {
      cVar10 = (**(code **)(*plVar13 + 0x6c8))(plVar13);
      if (cVar10 == '\0') goto LAB_1411d5507;
    }
  }
  else {
    if (param_13 == '\0') goto LAB_1411d576b;
LAB_1411d5507:
    iVar11 = FUN_14490d72a(lVar12);
    if (iVar11 == 3) goto LAB_1411d5816;
    FUN_140586e04(&local_80);
    lVar12 = local_80;
    if (local_80 != 0) {
      FUN_1400bbfc4(&local_f0,param_1);
      *(undefined4 *)(lVar12 + 0x18) = (undefined4)local_f0;
      *(undefined4 *)(lVar12 + 0x1c) = local_f0._4_4_;
      *(undefined4 *)(lVar12 + 0x20) = (undefined4)uStack_e8;
      *(undefined4 *)(lVar12 + 0x24) = uStack_e8._4_4_;
      if ((undefined8 *)(lVar12 + 0x18) == &local_f0) {
        if (local_e0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar12 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(lVar12 + 0x28) = local_e0;
        local_e0 = (longlong *)0x0;
        *(undefined4 *)(lVar12 + 0x30) = (undefined4)local_d8;
        *(undefined4 *)(lVar12 + 0x34) = local_d8._4_4_;
      }
      cVar10 = (*(code *)PTR_FUN_14c758760)();
      uVar2 = *(uint *)(param_1 + 0xc);
      if (cVar10 == '\0') {
LAB_1411d55df:
        *(uint *)(lVar12 + 0x10) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar11 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar11 = *(int *)(lVar14 + 0x10);
          bVar16 = iVar11 == 0;
          if (bVar16) {
            *(int *)(lVar14 + 0x10) = iVar15;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar11 = iVar15;
          }
        }
        *(int *)(lVar12 + 0x14) = iVar11;
        lVar12 = local_80;
      }
      else {
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) goto LAB_1411d55df;
        *(undefined8 *)(lVar12 + 0x10) = 0;
      }
      uVar6 = *param_5;
      uVar7 = param_5[1];
      *(undefined8 *)(lVar12 + 0x48) = param_5[2];
      *(undefined8 *)(lVar12 + 0x38) = uVar6;
      *(undefined8 *)(lVar12 + 0x40) = uVar7;
      uVar6 = param_6[1];
      *(undefined8 *)(lVar12 + 0x50) = *param_6;
      *(undefined8 *)(lVar12 + 0x58) = uVar6;
      *(undefined8 *)(lVar12 + 0x60) = param_6[2];
      uVar3 = param_7[1];
      uVar4 = param_7[2];
      uVar5 = param_7[3];
      *(undefined4 *)(lVar12 + 0x68) = *param_7;
      *(undefined4 *)(lVar12 + 0x6c) = uVar3;
      *(undefined4 *)(lVar12 + 0x70) = uVar4;
      *(undefined4 *)(lVar12 + 0x74) = uVar5;
      *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(param_7 + 4);
      FUN_14065c7a4(lVar12 + 0x80,param_2);
      *(undefined2 *)(lVar12 + 0xac) = 0;
      *(bool *)(lVar12 + 0xae) = cVar8 != '\x02';
      *(bool *)(lVar12 + 0xaf) = cVar8 != '\x01';
      *(bool *)(lVar12 + 9) = cVar9 == '\x02';
      *(undefined8 *)(lVar12 + 0xa0) = local_50;
      *(undefined4 *)(lVar12 + 0xa8) = param_8;
      if (local_60 == (longlong *)0x0) {
        *(undefined4 *)(lVar12 + 0x90) = 0;
        iVar11 = 0;
      }
      else {
        uVar2 = *(uint *)((longlong)local_60 + 0xc);
        *(uint *)(lVar12 + 0x90) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar11 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar11 = *(int *)(lVar14 + 0x10);
          bVar16 = iVar11 == 0;
          if (bVar16) {
            *(int *)(lVar14 + 0x10) = iVar15;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar11 = iVar15;
          }
        }
      }
      *(int *)(lVar12 + 0x94) = iVar11;
      local_90 = local_80;
      local_88 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      FUN_140586e9a(local_70,&local_90);
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_78 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
  }
LAB_1411d576b:
  local_f0 = &local_60;
  uStack_e8 = &local_50;
  local_e0 = &local_68;
  local_d8 = &local_70;
  local_d0 = &local_52;
  local_c8 = (undefined1 *)&param_10;
  local_c0 = &param_8;
  local_b8 = param_6;
  local_b0 = param_5;
  local_a8 = param_7;
  local_98 = &local_51;
  local_a0 = param_2;
  if (cVar8 != '\x01') {
    FUN_143d51bf8(&local_f0,0);
    if (cVar8 == '\x02') goto LAB_1411d5816;
  }
  FUN_143d51bf8(&local_f0,1);
LAB_1411d5816:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411d58ea FUN_1411d58ea body=314 status=ok
// SIG undefined FUN_1411d58ea(void)

undefined4 * FUN_1411d58ea(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  char local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_3;
  (**(code **)(*param_1 + 0x40))();
  *(undefined1 *)(param_2 + 1) = 0;
  if ((char)param_1[0xb] == '\0') {
    plVar1 = (longlong *)FUN_1411d67c8(param_1);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_1401b0f18();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = FUN_1401b0f18();
        plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
        if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
          lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (((lVar4 != 0) && (*(byte *)(lVar4 + 0x101) < 5)) &&
             ((*(byte *)(lVar4 + 0x101) != 4 || (*(longlong *)(lVar4 + 0xd8) == 0)))) {
            FUN_14583712a(&local_38,param_1,FUN_145c69aa8,&local_3c);
            FUN_1448b6402(lVar4 + 0x28,local_48,&local_38);
            FUN_1449db362(&local_38);
            *(undefined1 *)(param_1 + 0xb) = 1;
          }
        }
      }
    }
  }
  if ((char)param_1[0xb] == '\0') {
    FUN_1411d5a26(param_1,&local_38,local_3c);
    if (local_34 == '\x01') {
      *param_2 = local_38;
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d5a26 FUN_1411d5a26 body=3489 status=ok
// SIG undefined FUN_1411d5a26(void)

float * FUN_1411d5a26(longlong param_1,float *param_2,float param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong *plVar23;
  bool bVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  undefined8 *local_1a0;
  code *local_198;
  code *local_190;
  longlong *local_188;
  float *local_180;
  longlong local_178;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined2 local_138;
  undefined1 local_136;
  undefined1 auStack_135 [5];
  int local_130;
  float local_12c;
  undefined4 local_128;
  undefined2 local_f8;
  undefined1 local_f6;
  int local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if ((((*(longlong *)(param_1 + 0x50) != 0) || (lVar11 = FUN_1411d67c8(), lVar11 == 0)) ||
      (lVar12 = FUN_1447210f0(lVar11), lVar12 == 0)) ||
     ((bVar2 = *(byte *)(lVar12 + 0x152), bVar2 != 1 &&
      ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))))) {
    *(undefined1 *)(param_2 + 1) = 0;
    goto LAB_1411d6208;
  }
  lVar20 = *(longlong *)(param_1 + 0x38);
  plVar23 = *(longlong **)(param_1 + 0x40);
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
    UNLOCK();
  }
  if (lVar20 == 0) {
LAB_1411d63a8:
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    puVar1 = (uint *)(lVar20 + 0x60);
    local_180 = param_2;
    if (((*(int *)(lVar20 + 100) == 0) || (uVar25 = *puVar1, (int)uVar25 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar25 ||
        ((((plVar16 = (longlong *)
                      ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
           plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(lVar20 + 100))) ||
          ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) ||
         (plVar16 = (longlong *)*plVar16, plVar16 == (longlong *)0x0)))))) {
      if (*(longlong *)(lVar20 + 0x68) != 0) {
        plVar16 = (longlong *)FUN_140007850();
        cVar8 = (*(code *)PTR_FUN_14c758760)();
        if ((plVar16 == (longlong *)0x0) || (cVar8 == '\0')) {
          if (plVar16 == (longlong *)0x0) {
            *(undefined8 *)(lVar20 + 0x60) = 0;
            goto LAB_1411d63a8;
          }
          uVar25 = *(uint *)((longlong)plVar16 + 0xc);
          *puVar1 = uVar25;
          if ((int)uVar25 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          iVar21 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar21 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar24 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar21;
            if (bVar24) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            iVar21 = *(int *)(lVar13 + 0x10);
            bVar24 = iVar21 == 0;
            if (bVar24) {
              *(int *)(lVar13 + 0x10) = iVar19;
              iVar21 = 0;
            }
            UNLOCK();
            if (bVar24) {
              iVar21 = iVar19;
            }
          }
          *(int *)(lVar20 + 100) = iVar21;
        }
        else {
          uVar25 = *(uint *)((longlong)plVar16 + 0xc);
          if ((int)uVar25 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(puVar1,plVar16);
          }
        }
        param_2 = local_180;
        if ((*(uint *)(plVar16 + 1) >> 0x1e & 1) == 0) goto LAB_1411d5b49;
      }
      goto LAB_1411d63a8;
    }
LAB_1411d5b49:
    param_2 = local_180;
    lVar13 = FUN_1411d6932();
    if ((*(int *)(plVar16[2] + 0x38) < *(int *)(lVar13 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
        lVar13 + 0x30)) goto LAB_1411d63a8;
    local_188 = plVar23;
    lVar13 = FUN_1411d6a18(param_1);
    if (lVar13 == 0) {
      *(undefined1 *)(param_2 + 1) = 0;
      plVar23 = local_188;
      goto LAB_1411d61f8;
    }
    lVar14 = FUN_140bc3368(lVar11);
    uVar3 = *(undefined4 *)(lVar20 + 0x88);
    uVar4 = *(undefined8 *)(lVar20 + 0x8c);
    uVar25 = *(uint *)(lVar20 + 0x94);
    *(undefined4 *)(lVar14 + 0x2b4) = 0;
    *(undefined4 *)(lVar14 + 0x2b8) = uVar3;
    *(undefined8 *)(lVar14 + 700) = 0;
    *(undefined2 *)(lVar14 + 0x2c4) = 0x100;
    *(undefined8 *)(lVar14 + 0x2c8) = uVar4;
    *(uint *)(lVar14 + 0x2d0) = uVar25 & 1;
    *(undefined1 *)(lVar14 + 0x2d4) = 0;
    *(uint *)(lVar14 + 0x2d8) = uVar25 >> 2 & 1 | 2;
    local_b0 = CONCAT62(local_b0._2_6_,0x101);
    local_178 = lVar20;
    if (DAT_14cae8b20 == 0) {
      local_1a0 = &local_a8;
      local_a8 = (code *)&LAB_14355090c;
      local_190 = FUN_14081d0ea;
      local_198 = FUN_14081d0ea;
      local_1a8 = &LAB_147b8e16d;
      local_1b0 = (code *)&LAB_140810a38;
      local_1b8 = L"Engine";
      local_1c0 = 0x800000000;
      local_1c8 = 0x10000000;
      local_1d0 = 8;
      local_1d8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar20 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_1a0 = &local_a8;
      local_a8 = FUN_1449e2820;
      local_190 = FUN_14081d0ea;
      local_198 = FUN_14081d0ea;
      local_1a8 = &LAB_1468c5283;
      local_1b0 = FUN_142809da0;
      local_1b8 = L"Engine";
      local_1c0 = 0x400000000;
      local_1c8 = 0x10000000;
      local_1d0 = 8;
      local_1d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar11 = *(longlong *)(lVar11 + 0x20);
    if (lVar11 == 0) {
      lVar18 = 0;
    }
    else {
      iVar21 = *(int *)(lVar20 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar21) ||
           (lVar18 = lVar11,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar21 * 8)
           != lVar20 + 0x30)) {
          lVar18 = 0;
        }
      } while ((lVar18 == 0) && (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 != 0));
    }
    FUN_140a22888(lVar14,plVar16,lVar18,&local_b0);
    FUN_140a22fc0(lVar14);
    lVar11 = *(longlong *)(param_1 + 0x50);
    if (lVar14 == 0) {
      if (lVar11 != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        goto LAB_1411d5ca5;
      }
    }
    else if (lVar11 != lVar14) {
      if ((lVar11 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar14);
LAB_1411d5ca5:
      *(longlong *)(param_1 + 0x50) = lVar14;
    }
    lVar11 = (**(code **)(*plVar16 + 0x2e8))(plVar16);
    if ((lVar11 == 0) || (uVar5 = *(ulonglong *)(lVar11 + 0x108), (char)uVar5 == '\x02')) {
      iVar21 = *(int *)(lVar14 + 0x2a0);
LAB_1411d5e19:
      fVar35 = 0.0;
    }
    else {
      iVar21 = (int)(uVar5 >> 0x20);
      if ((uVar5 & 0xff) == 0) {
        iVar21 = iVar21 + 1;
      }
      lVar20 = *(longlong *)(lVar11 + 0x118);
      lVar11 = *(longlong *)(lVar11 + 0x120);
      if (lVar20 == lVar11) goto LAB_1411d5e19;
      local_a8 = (code *)((lVar20 >> 0x20) * (longlong)(int)lVar11);
      local_b0 = (longlong)(int)lVar20 * (lVar11 >> 0x20);
      lVar11 = ((longlong)local_a8 * (longlong)iVar21) / local_b0;
      dVar28 = (double)((ulonglong)(double)(longlong)local_a8 & 0x8000000000000000) /
               (double)local_b0 +
               (((double)(longlong)local_a8 * (double)iVar21) / (double)local_b0 - (double)lVar11);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = dVar28;
      auVar30 = roundpd(auVar30,auVar30,1);
      fVar26 = (float)(dVar28 - auVar30._0_8_);
      lVar11 = (longlong)auVar30._0_8_ + lVar11;
      fVar35 = fVar26;
      if (0.99999994 <= fVar26) {
        fVar35 = 0.99999994;
      }
      if (0x7ffffffe < lVar11) {
        lVar11 = 0x7fffffff;
      }
      lVar20 = -0x80000000;
      if (-0x80000000 < lVar11) {
        lVar20 = lVar11;
      }
      iVar21 = (int)lVar20;
      fVar35 = (float)(~-(uint)(0.0 < fVar26) & (uint)fVar26 | (uint)fVar35 & -(uint)(0.0 < fVar26))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar35) {
        fVar35 = 0.99999994;
      }
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
    }
    lVar11 = (**(code **)(*plVar16 + 0x2e8))(plVar16);
    if ((lVar11 == 0) || (uVar5 = *(ulonglong *)(lVar11 + 0x110), (char)uVar5 == '\x02')) {
      iVar19 = *(int *)(lVar14 + 0x2a4);
      fVar26 = *(float *)(lVar14 + 0x2a8) + 0.5 + -0.5;
      auVar34 = ZEXT416((uint)fVar26);
      if (0.99999994 <= fVar26) {
        auVar34._4_12_ = ZEXT812(0);
        auVar34._0_4_ = 0x3f7fffff;
      }
      if (auVar34._0_4_ <= 0.0) {
        auVar6._12_4_ = 0;
        auVar6._0_12_ = auVar34._4_12_;
        auVar34 = auVar6 << 0x20;
      }
    }
    else {
      iVar19 = (int)(uVar5 >> 0x20);
      if ((uVar5 & 0xff) == 0) {
        iVar19 = iVar19 + -1;
      }
      lVar20 = *(longlong *)(lVar11 + 0x118);
      lVar11 = *(longlong *)(lVar11 + 0x120);
      if (lVar20 == lVar11) {
        auVar34 = ZEXT816(0);
      }
      else {
        local_a8 = (code *)((lVar20 >> 0x20) * (longlong)(int)lVar11);
        local_b0 = (longlong)(int)lVar20 * (lVar11 >> 0x20);
        lVar11 = ((longlong)local_a8 * (longlong)iVar19) / local_b0;
        dVar28 = (double)((ulonglong)(double)(longlong)local_a8 & 0x8000000000000000) /
                 (double)local_b0 +
                 (((double)(longlong)local_a8 * (double)iVar19) / (double)local_b0 - (double)lVar11)
        ;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = dVar28;
        auVar30 = roundpd(auVar31,auVar31,1);
        dVar28 = dVar28 - auVar30._0_8_;
        fVar27 = (float)dVar28;
        lVar11 = (longlong)auVar30._0_8_ + lVar11;
        fVar26 = fVar27;
        if (0.99999994 <= fVar27) {
          fVar26 = 0.99999994;
        }
        if (0x7ffffffe < lVar11) {
          lVar11 = 0x7fffffff;
        }
        lVar20 = -0x80000000;
        if (-0x80000000 < lVar11) {
          lVar20 = lVar11;
        }
        iVar19 = (int)lVar20;
        fVar26 = (float)(~-(uint)(0.0 < fVar27) & (uint)fVar27 |
                        (uint)fVar26 & -(uint)(0.0 < fVar27)) + 0.5 + -0.5;
        if (0.99999994 <= fVar26) {
          fVar26 = 0.99999994;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        auVar34._4_4_ = (int)((ulonglong)dVar28 >> 0x20);
        auVar34._0_4_ = fVar26;
        auVar34._8_8_ = 0;
      }
    }
    if (*(longlong **)(lVar12 + 0x178) == (longlong *)0x0) {
      dVar28 = *(double *)(lVar12 + 0x6d0);
    }
    else {
      dVar28 = (double)(**(code **)(**(longlong **)(lVar12 + 0x178) + 0x640))();
    }
    uVar25 = -(uint)(*(float *)(lVar13 + 0x84) < 0.0);
    fVar27 = (float)(uVar25 & 0x7f7fffff |
                    ~uVar25 & (uint)((float)dVar28 - *(float *)(lVar13 + 0x84)));
    fVar38 = auVar34._0_4_;
    fVar26 = fVar38 - fVar35;
    auVar30 = roundps(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26),1);
    fVar27 = (float)(-(uint)(0.5 <= fVar27) & (uint)fVar27);
    local_a8 = *(code **)(lVar14 + 0x308);
    fVar26 = (fVar26 - auVar30._0_4_) + 0.5 + -0.5;
    iVar22 = (int)auVar30._0_4_ + (iVar19 - iVar21);
    if (0.99999994 <= fVar26) {
      fVar26 = 0.99999994;
    }
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    auVar37._4_4_ = auVar34._4_4_;
    auVar37._0_4_ = fVar26;
    auVar37._8_4_ = auVar34._8_4_;
    auVar37._12_4_ = auVar34._12_4_;
    if ((fVar27 != 3.4028235e+38) || (iVar9 = iVar22, NAN(fVar27))) {
      dVar33 = ((double)(int)local_a8 * (double)fVar27) / (double)(int)((ulonglong)local_a8 >> 0x20)
      ;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = dVar33;
      auVar30 = roundpd(auVar32,auVar32,1);
      dVar28 = auVar30._0_8_;
      dVar33 = dVar33 - dVar28;
      if (2147483647.0 <= dVar28) {
        dVar28 = 2147483647.0;
      }
      if (dVar28 <= -2147483648.0) {
        dVar28 = -2147483648.0;
      }
      iVar9 = (int)dVar33;
      fVar29 = (float)dVar33 - (float)iVar9;
      iVar9 = (int)dVar28 + iVar9;
      fVar27 = fVar29;
      if (0.99999994 <= fVar29) {
        fVar27 = 0.99999994;
      }
      fVar27 = (float)(~-(uint)(0.0 < fVar29) & (uint)fVar29 | (uint)fVar27 & -(uint)(0.0 < fVar29))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar27) {
        fVar27 = 0.99999994;
      }
      auVar37 = ZEXT416((uint)fVar27);
      if (fVar27 <= 0.0) {
        auVar37 = ZEXT416(0) << 0x20;
      }
    }
    *(undefined1 *)(param_2 + 1) = 0;
    if ((0.0 < param_3) && (*(char *)(local_178 + 0x98) != '\0')) {
      FUN_148942f18(&local_a8,&local_b0,(double)param_3);
      fVar29 = fVar26 - local_b0._4_4_;
      auVar30 = roundps(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29),1);
      iVar15 = (iVar22 - (int)local_b0) + (int)auVar30._0_4_;
      fVar27 = auVar37._0_4_;
      if (iVar9 <= iVar15) {
        fVar29 = (fVar29 - auVar30._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar29) {
          fVar29 = 0.99999994;
        }
        if (fVar29 <= 0.0) {
          fVar29 = 0.0;
        }
        iVar10 = iVar9;
        if (fVar27 <= fVar29) {
          iVar10 = iVar15;
          fVar27 = fVar29;
        }
        bVar24 = iVar15 != iVar9;
        iVar9 = iVar10;
        if (bVar24) {
          iVar9 = iVar15;
          fVar27 = fVar29;
        }
      }
      auVar37 = ZEXT416((uint)fVar27);
      *local_180 = -(((float)((longlong)iVar9 * (longlong)local_a8._4_4_) +
                     (float)local_a8._4_4_ * fVar27) / (float)(int)local_a8);
      *(undefined1 *)(local_180 + 1) = 1;
    }
    plVar23 = local_188;
    fVar27 = fVar38;
    iVar15 = iVar19;
    iVar10 = iVar21;
    if ((*(byte *)(local_178 + 0x94) & 8) == 0) {
      fVar27 = fVar35;
      iVar15 = iVar21;
      fVar35 = fVar38;
      iVar10 = iVar19;
    }
    fVar38 = auVar37._0_4_;
    if ((iVar9 <= iVar22 && (fVar38 < fVar26 || iVar22 != iVar9)) ||
       (*(int *)(local_178 + 0x88) == -1)) {
      if ((iVar15 < iVar10) || ((iVar19 == iVar21 && (fVar27 < fVar35)))) {
        FUN_140ef5ee2(lVar14);
        if ((iVar9 != 0) || ((fVar38 != 0.0 || (param_2 = local_180, NAN(fVar38))))) {
          auVar36._4_12_ = auVar37._4_12_;
          auVar36._0_4_ = fVar38 + fVar27;
          auVar30 = roundss(ZEXT416(0),auVar36,9);
          local_130 = iVar15 + iVar9 + ((int)ROUND(auVar36._0_4_ + auVar36._0_4_ + -0.5) >> 1);
          local_12c = (auVar36._0_4_ - auVar30._0_4_) + 0.5 + -0.5;
          if (0.99999994 <= local_12c) {
            local_12c = 0.99999994;
          }
          if (local_12c <= 0.0) {
            local_12c = 0.0;
          }
          piVar17 = &local_130;
          local_128 = 0;
          local_f8 = 0;
          local_f6 = 0;
          goto LAB_1411d6302;
        }
      }
      else if (((iVar10 < iVar15) || (param_2 = local_180, iVar19 == iVar21 && fVar35 < fVar27)) &&
              ((FUN_140ef637e(lVar14), iVar9 != 0 ||
               ((fVar38 != 0.0 || (param_2 = local_180, NAN(fVar38))))))) {
        fVar27 = fVar27 - fVar38;
        auVar30 = roundps(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27),1);
        fVar35 = (fVar27 - auVar30._0_4_) + 0.5 + -0.5;
        auVar34 = ZEXT416((uint)fVar35);
        if (0.99999994 <= fVar35) {
          auVar34 = ZEXT416(0x3f7fffff);
        }
        local_170 = (iVar15 - iVar9) + (int)auVar30._0_4_;
        if (auVar34._0_4_ <= 0.0) {
          auVar7._12_4_ = 0;
          auVar7._0_12_ = auVar34._4_12_;
          auVar34 = auVar7 << 0x20;
        }
        piVar17 = &local_170;
        local_16c = auVar34._0_4_;
        local_168 = 0;
        local_138 = 0;
        local_136 = 0;
LAB_1411d6302:
        piVar17[4] = 0;
        piVar17[5] = 0;
        piVar17[6] = 0;
        piVar17[7] = 0;
        piVar17[8] = 0;
        piVar17[9] = 0;
        piVar17[10] = 0;
        piVar17[0xb] = 0;
        *(undefined8 *)((longlong)piVar17 + 0x2d) = 0;
        goto LAB_1411d61e7;
      }
    }
    else {
      piVar17 = &local_f0;
      local_e8 = 0;
      local_b8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      uStack_c3 = 0;
      uStack_c0 = 0;
      local_b7 = 1;
      local_f0 = iVar10;
      local_ec = fVar35;
LAB_1411d61e7:
      *(undefined1 *)((longlong)piVar17 + 0x3b) = 1;
      FUN_1405244c0(lVar14);
      param_2 = local_180;
    }
  }
LAB_1411d61f8:
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar23 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar17 = (int *)((longlong)plVar23 + 0xc);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
LAB_1411d6208:
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d67c8 FUN_1411d67c8 body=360 status=ok
// SIG undefined FUN_1411d67c8(void)

longlong FUN_1411d67c8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
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
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      lVar2 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411d686d;
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar2 != 0) &&
         ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c) &&
          ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        if (lVar2 != 0) {
          if (DAT_14cac9ca8 == 0) {
            local_30 = &local_18;
            local_18 = FUN_141030f22;
            local_20 = FUN_14081d0ea;
            local_28 = FUN_14081d0ea;
            local_38 = &LAB_1478c0a72;
            local_40 = &LAB_1417b2375;
            local_48 = L"Engine";
            local_50 = 0x1000000000;
            local_58 = 0x10000004;
            local_60 = 8;
            local_68 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
          goto LAB_1411d686d;
        }
      }
    }
  }
  lVar2 = 0;
LAB_1411d686d:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d6932 FUN_1411d6932 body=228 status=ok
// SIG undefined FUN_1411d6932(void)

longlong FUN_1411d6932(void)

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
  if (DAT_14cb630b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464eaa2e;
    local_38 = &LAB_1486ed427;
    local_40 = FUN_140bb8f10;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSequence",&DAT_14cb630b0,&DAT_1486ed426);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb630b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d6a18 FUN_1411d6a18 body=310 status=ok
// SIG undefined FUN_1411d6a18(void)

longlong FUN_1411d6a18(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar5) {
    return 0;
  }
  lVar2 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x1c)) {
    return 0;
  }
  if ((*(uint *)(lVar2 + 8) & 0x10200000) != 0) {
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x30);
  if (lVar2 == 0 && uVar5 == 0xffffffff) {
    return 0;
  }
  if ((int)uVar5 < 0) {
    lVar4 = *plVar3;
    uVar7 = *(uint *)(plVar3 + 1);
LAB_1411d6aac:
    if (uVar7 == 0) goto LAB_1411d6ae3;
    uVar6 = (ulonglong)(int)uVar7;
  }
  else {
    uVar7 = *(uint *)(plVar3 + 1);
    uVar6 = (ulonglong)uVar7;
    lVar4 = *plVar3;
    if ((int)uVar7 <= (int)uVar5) goto LAB_1411d6aac;
    if (*(longlong *)(lVar4 + 0x68 + (ulonglong)uVar5 * 0x88) == lVar2) {
LAB_1411d6b06:
      return (longlong)(int)uVar5 * 0x88 + lVar4;
    }
  }
  uVar8 = 0;
  do {
    if (*(longlong *)(lVar4 + 0x68 + uVar8) == lVar2) {
      uVar5 = (int)(uVar8 >> 3) * -0xf0f0f0f;
      *(uint *)(param_1 + 0x30) = uVar5;
      if (uVar5 == 0xffffffff) {
        return 0;
      }
      lVar4 = *plVar3;
      goto LAB_1411d6b06;
    }
    lVar1 = lVar4 + uVar8;
    uVar8 = uVar8 + 0x88;
  } while (lVar1 + 0x88 != uVar6 * 0x88 + lVar4);
LAB_1411d6ae3:
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return 0;
}



// FUNCTION 1411d6b4e FUN_1411d6b4e body=240 status=ok
// SIG undefined FUN_1411d6b4e(void)

void FUN_1411d6b4e(longlong param_1)

{
  undefined1 auStack_878 [32];
  undefined8 local_858;
  undefined8 *local_850;
  undefined2 *local_848;
  undefined2 *local_840;
  char local_838;
  undefined8 local_830;
  undefined2 local_828 [1031];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_850 = &local_830;
  local_838 = '\0';
  local_840 = &local_1a;
  local_830 = 0x2e00430050004e;
  local_848 = local_828;
  FUN_14005eb5c(param_1 + 0x28,&local_850);
  if (local_840 <= local_848 + 1) {
    FUN_140213274(&local_850,1);
  }
  *local_848 = 0x2e;
  local_848 = local_848 + 1;
  FUN_1446f82e2(&local_858,(ulonglong)((longlong)local_848 - (longlong)local_850) >> 1,local_850,1);
  *(undefined8 *)(param_1 + 0x60) = local_858;
  if (local_838 == '\x01') {
    FUN_1400020a8(local_850);
  }
  if ((local_18 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d6c40 FUN_1411d6c40 body=221 status=ok
// SIG undefined FUN_1411d6c40(void)

longlong FUN_1411d6c40(void)

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
  if (DAT_14cb42248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481cfe35;
    local_40 = FUN_143aa2f94;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraParameterCollectionInstance",&DAT_14cb42248,
                  FUN_146476aa4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb42248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d6d1e FUN_1411d6d1e body=100 status=ok
// SIG undefined FUN_1411d6d1e(void)

void FUN_1411d6d1e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong *plVar3;
  
  FUN_1411d6d82();
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb92a18);
  }
  if (*plVar3 == 0) {
    uVar2 = 2;
  }
  else {
    bVar1 = FUN_14000584e(*plVar3,1);
    uVar2 = (ushort)bVar1 * 2;
  }
  *(ushort *)(param_1 + 0x298) = uVar2 | (ushort)*(undefined4 *)(param_1 + 0x298) & 0xfffd;
  return;
}



// FUNCTION 1411d6d82 FUN_1411d6d82 body=691 status=ok
// SIG undefined FUN_1411d6d82(void)

void FUN_1411d6d82(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    puVar5 = &DAT_14c9a1308;
  }
  else {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb928c0);
  }
  pbVar1 = (byte *)*puVar5;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_1400b22c2(&local_30,uVar7);
  if ((longlong *)(param_1 + 0xb0) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xb0) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0xb8) = local_28;
    *(undefined4 *)(param_1 + 0xbc) = local_24;
  }
  if (*param_2 == 0) {
    puVar5 = &DAT_14c9a1308;
  }
  else {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb928c8);
  }
  pbVar1 = (byte *)*puVar5;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_1400b22c2(&local_30,uVar7);
  if ((longlong *)(param_1 + 0x90) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x90) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x98) = local_28;
    *(undefined4 *)(param_1 + 0x9c) = local_24;
  }
  if (*param_2 == 0) {
    plVar6 = &DAT_14c9a1308;
  }
  else {
    plVar6 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb928d0);
  }
  if (*plVar6 == 0) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_14000584e(*plVar6,0);
    uVar4 = (uint)bVar2 << 9;
  }
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffdff | uVar4;
  if (*param_2 == 0) {
    plVar6 = &DAT_14c9a1308;
  }
  else {
    plVar6 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb928e0);
  }
  if (*plVar6 == 0) {
    uVar4 = *(uint *)(param_1 + 0x8c);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    cVar3 = FUN_14000584e(*plVar6,0);
    uVar4 = *(uint *)(param_1 + 0x8c);
    if (cVar3 != '\0') {
      uVar8 = 0x800;
    }
  }
  *(uint *)(param_1 + 0x8c) = uVar4 & 0xfffff7ff | uVar8;
  if (*param_2 == 0) {
    plVar6 = &DAT_14c9a1308;
  }
  else {
    plVar6 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb928e8);
  }
  if (*plVar6 == 0) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_14000584e(*plVar6,0);
    uVar4 = (uint)bVar2 << 0x16;
  }
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffbfffff | uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d7036 FUN_1411d7036 body=46 status=ok
// SIG undefined FUN_1411d7036(void)

void FUN_1411d7036(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if ((bool)*(char *)(param_1 + 0x80) == 0 < iVar2) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  *(bool *)(param_1 + 0x80) = 0 < iVar2;
  if (iVar2 < 1) {
    FUN_1449db8d8();
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bab8) {
    FUN_144b3d300(&DAT_14cb0bab8);
    if (DAT_14cb0bab8 == -1) {
      FUN_146408b70(&DAT_14cb0ba00);
      atexit((_func_5014 *)&LAB_14373e0ae);
      _Init_thread_footer(&DAT_14cb0bab8);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  FUN_140548616(&DAT_14cb0ba60);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  if ((longlong)(int)DAT_14cb0ba30 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong **)(DAT_14cb0ba28 + lVar7) == plVar1) goto LAB_144958e23;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)DAT_14cb0ba30 * 0x10 != lVar7);
  }
  if (DAT_14c963ff1 == '\x01') {
    FUN_14032851c(&DAT_14cb0ba00,plVar1);
  }
  else {
    uVar5 = (**(code **)(*plVar1 + 8))(plVar1);
    uVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
    uVar4 = DAT_14cb0ba30;
    lVar7 = (longlong)(int)DAT_14cb0ba30;
    DAT_14cb0ba30 = DAT_14cb0ba30 + 1;
    if (DAT_14cb0ba34 < DAT_14cb0ba30) {
      FUN_14084398e(&DAT_14cb0ba28,uVar4);
    }
    lVar3 = DAT_14cb0ba28;
    lVar7 = lVar7 * 0x10;
    *(longlong **)(DAT_14cb0ba28 + lVar7) = plVar1;
    *(undefined1 *)(lVar3 + 8 + lVar7) = uVar5;
    *(undefined4 *)(lVar3 + 0xc + lVar7) = uVar6;
  }
LAB_144958e23:
                    /* WARNING: Could not recover jumptable at 0x000144958e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  return;
}



// FUNCTION 1411d7064 FUN_1411d7064 body=166 status=ok
// SIG undefined FUN_1411d7064(void)

undefined8 FUN_1411d7064(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
      FUN_14042af24(lVar1,local_2c,param_1);
      if (-1 < local_2c[0]) {
        FUN_1411d710c(lVar1,param_2,local_2c,0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  FUN_145943bf2(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411d710c FUN_1411d710c body=395 status=ok
// SIG undefined FUN_1411d710c(void)

undefined8 * FUN_1411d710c(longlong param_1,undefined8 *param_2,ushort *param_3,longlong param_4)

{
  ushort uVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar1 = *param_3;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar3 + 4)) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar3 + 2) * 8);
        } while (-1 < *(short *)(lVar3 + 4));
        if (lVar3 == 0) goto LAB_1411d726c;
      }
      if (param_4 == 0) {
        param_4 = *(longlong *)(lVar3 + 0x110);
      }
      if (*(int *)(lVar3 + 200) != *(int *)(lVar3 + 0xf4)) {
        uVar2 = (uint)((ulonglong)param_4 >> 0x10);
        uVar6 = (uint)param_4 & 0xffff;
        lVar5 = lVar3 + 0xf8;
        if (*(longlong *)(lVar3 + 0x100) != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x100);
        }
        iVar4 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(lVar3 + 0x108) - 1U &
                                 (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar6)
                                 + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            lVar5 = *(longlong *)(lVar3 + 0xc0) + (longlong)iVar4 * 0x20;
            if (*(longlong *)(*(longlong *)(lVar3 + 0xc0) + (longlong)iVar4 * 0x20) == param_4) {
              if ((lVar5 != 0) && (lVar5 + 8 != 0)) {
                if (*(char *)(lVar3 + 0x11c) == '\x01') {
                  FUN_1449b8608(param_2,lVar5 + 8,L" (Bot)");
                  return param_2;
                }
                *param_2 = 0;
                iVar4 = *(int *)(lVar5 + 0x10);
                _Src = *(void **)(lVar5 + 8);
                *(int *)(param_2 + 1) = iVar4;
                if ((longlong)iVar4 != 0) {
                  FUN_1446dd670(param_2,iVar4,0);
                  memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
                  return param_2;
                }
                *(undefined4 *)((longlong)param_2 + 0xc) = 0;
                return param_2;
              }
              break;
            }
            iVar4 = *(int *)(lVar5 + 0x18);
          } while (iVar4 != -1);
        }
      }
    }
  }
LAB_1411d726c:
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1411d7298 FUN_1411d7298 body=111 status=ok
// SIG undefined FUN_1411d7298(void)

void FUN_1411d7298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac4f5c0;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 1411d730e FUN_1411d730e body=228 status=ok
// SIG undefined FUN_1411d730e(void)

longlong FUN_1411d730e(void)

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
  if (DAT_14cba4280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458c8470;
    local_38 = &LAB_148bc500d;
    local_40 = &LAB_140fe6b34;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x26c0;
    FUN_14081cfa3(L"/Script/OakGame",L"GrapplePoint",&DAT_14cba4280,FUN_1465bd0bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d73f4 FUN_1411d73f4 body=174 status=ok
// SIG undefined FUN_1411d73f4(void)

undefined8 FUN_1411d73f4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0xdc)) {
      return 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
    if (*(char *)(lVar3 + 0x80) == '\x01') {
      if (*(char *)(lVar4 + 0xd0) != '\x01') {
        return 0;
      }
      if (*(longlong *)(lVar4 + 0xc0) == 0) {
        return 2;
      }
      cVar2 = *(char *)(*(longlong *)(lVar4 + 0xc0) + 0xa0);
    }
    else {
      cVar2 = FUN_1411d74a2(lVar4);
    }
    if (cVar2 != '\0') {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 1411d74a2 FUN_1411d74a2 body=74 status=ok
// SIG undefined FUN_1411d74a2(void)

undefined8 FUN_1411d74a2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0xd0) == '\x03') && (*(char *)(param_1 + 0x200) == '\0')) &&
      ((*(longlong *)(param_1 + 0xc0) == 0 ||
       (*(char *)(*(longlong *)(param_1 + 0xc0) + 0xa0) != '\0')))) &&
     ((*(char *)(param_1 + 0x132) != '\x01' || (cVar1 = FUN_148cd7d46(), cVar1 != '\0')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1411d74ec FUN_1411d74ec body=327 status=ok
// SIG undefined FUN_1411d74ec(void)

undefined8 FUN_1411d74ec(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_28 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_1411d76c8((longlong *)(param_1 + 0x1c0),uVar1 >> 0x10 ^ uVar1,&local_28);
  if (iVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x1c0);
    uVar3 = 0xffffffff;
    if ((lVar4 + (longlong)iVar2 * 0x68 != 0) &&
       (lVar4 = lVar4 + (longlong)iVar2 * 0x68 + 8, lVar4 != 0)) {
      uVar3 = FUN_1411d7634(lVar4,param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d7634 FUN_1411d7634 body=147 status=ok
// SIG undefined FUN_1411d7634(void)

undefined4 FUN_1411d7634(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) +
                    ((int)param_2 << 0x10 | (uint)(ushort)param_2) + (uVar1 << 0x13 | uVar1) +
                    (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x14);
        if (*plVar3 == param_2) {
          if (plVar3 == (longlong *)0x0) {
            return 0xffffffff;
          }
          if (plVar3 + 1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          return (int)plVar3[1];
        }
        iVar2 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1411d76c8 FUN_1411d76c8 body=202 status=ok
// SIG undefined FUN_1411d76c8(void)

int FUN_1411d76c8(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x60 + (longlong)iVar1 * 0x68)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x68);
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



// FUNCTION 1411d7792 FUN_1411d7792 body=617 status=ok
// SIG undefined FUN_1411d7792(void)

void FUN_1411d7792(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  int local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar5 = *param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      plVar7 = *(longlong **)(param_1 + 0x18);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
LAB_1411d7831:
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001411d785c:
          if (iVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      plVar7 = *(longlong **)(param_1 + 0x18);
      if (plVar4 == plVar7) {
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar7 = plVar4;
          goto joined_r0x0001411d785c;
        }
      }
      else {
        *(longlong **)(param_1 + 0x18) = plVar4;
        if (plVar7 != (longlong *)0x0) goto LAB_1411d7831;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
      FUN_146584a74((longlong *)(param_1 + 0x20),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = *param_2;
    lVar6 = param_2[1];
    *(longlong *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  if (((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 0x40) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x40) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_48[2] = lVar6;
    *local_48 = &PTR_FUN_14b4f0020;
    local_48[3] = param_1;
    local_48[4] = FUN_1408e13f0;
    local_58 = 0;
    FUN_1405f67fc(uVar5,&local_38,&local_48,L"FGbxOnlineTaskQueue_Tick");
    *(undefined8 *)(param_1 + 0x38) = local_38;
    local_38 = 0;
    plVar4 = *(longlong **)(param_1 + 0x40);
    *(longlong **)(param_1 + 0x40) = local_30;
    local_30 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1411d79b1;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1411d79b1:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d79fc thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1411d7a02 FUN_1411d7a02 body=3552 status=ok
// SIG undefined FUN_1411d7a02(void)

void FUN_1411d7a02(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 uVar13;
  byte bVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  longlong *plVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auStack_148 [32];
  void **local_128;
  void **local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1400021e4((longlong)param_2 + 0x3c,&local_d0);
  FUN_1400b22c2(&local_68,L"_Common");
  FUN_1400021e4(param_2 + 1,local_88);
  FUN_1401c7f3e(local_58,local_88,&local_68);
  FUN_1401c7f3e(&local_78,local_58,&local_d0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_100 = param_3;
  if (CONCAT44(uStack_cc,local_d0) != 0) {
    FUN_1400020a8();
  }
  uVar13 = *(undefined8 *)((longlong)param_2 + 0x3c);
  uVar2 = *(undefined1 *)(param_2 + 7);
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x39);
  local_e0 = (void *)0x0;
  local_d8 = *(int *)(param_2 + 6);
  lVar30 = (longlong)local_d8;
  pvVar4 = (void *)param_2[5];
  if (lVar30 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_1446dd670(&local_e0,local_d8,0);
    memcpy(local_e0,pvVar4,lVar30 * 2);
  }
  local_f0 = (void *)0x0;
  local_e8 = *(int *)(param_2 + 4);
  lVar30 = (longlong)local_e8;
  pvVar4 = (void *)param_2[3];
  if (lVar30 == 0) {
    local_e4 = 0;
  }
  else {
    FUN_1446dd670(&local_f0,local_e8,0);
    memcpy(local_f0,pvVar4,lVar30 * 2);
  }
  uVar5 = param_2[2];
  puVar23 = local_78;
  if (local_70 == 0) {
    puVar23 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_f8,puVar23,1);
  local_120 = &local_e0;
  local_128 = &local_f0;
  local_118 = uVar2;
  local_110 = uVar3;
  local_108 = uVar13;
  FUN_140d7e4ae(&local_d0,*param_2,local_f8,uVar5);
  plVar20 = local_100;
  iVar28 = (int)param_1[1];
  iVar26 = *(int *)((longlong)param_1 + 0x34);
  if (iVar28 != iVar26) {
    uVar9 = (uint)((ulonglong)CONCAT44(uStack_cc,local_d0) >> 0x10);
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar12 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    uStack_cc + (local_d0 << 0x10 | local_d0 & 0xffff) +
                    (uVar9 << 0x13 | uVar9 & 0xffff) + ((local_d0 & 0xffff) >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x60) == CONCAT44(uStack_cc,local_d0))
        goto LAB_1411d81ca;
        iVar8 = *(int *)((longlong)iVar8 * 0x60 + *param_1 + 0x50);
      } while (iVar8 != -1);
    }
  }
  if (iVar26 == 0) {
    *(int *)(param_1 + 1) = iVar28 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar28) {
      FUN_1401284dc(param_1,iVar28);
    }
    iVar26 = (int)param_1[5];
    if (iVar26 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar8 = iVar26 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar15 = iVar26 + 1;
    iVar25 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar25 = iVar26;
    }
    if (iVar25 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar26) {
        iVar8 = iVar26;
        if (iVar26 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar9 = iVar26 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar9) {
              uVar21 = uVar9;
            }
          }
          else {
            uVar21 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
          }
          uVar18 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar10 = (uint)(uVar18 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar18 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 >> 4]];
              }
              else {
                uVar19 = uVar18 + 0xf & 0xfffffffffffffff0;
                plVar20 = local_100;
                if (uVar19 < 0x7ff1) {
                  bVar14 = (&DAT_14c841e00)[uVar10 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar14) {
                    uVar24 = (ulonglong)bVar14;
                  }
                  uVar29 = 0x32 - (ulonglong)bVar14;
                  do {
                    uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_1411d845d;
                    lVar30 = uVar24 + 1 + uVar29;
                    uVar29 = uVar29 - 1;
                  } while (lVar30 != 0x33);
                }
                uVar18 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar18 = (ulonglong)DAT_14c841df8;
                }
                uVar18 = -uVar18 & (uVar19 + uVar18) - 1;
              }
            }
            else {
              uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
              iVar8 = (int)param_1[5];
            }
          }
LAB_1411d845d:
          iVar11 = (int)(uVar18 >> 2);
          iVar15 = -0x20;
          if ((int)uVar9 <= iVar11) {
            iVar15 = iVar11 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar12,iVar8);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar8 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar12;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar8 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar30 = (longlong)iVar28;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar26 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar25 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar28 = (int)param_1[6];
    lVar30 = (longlong)iVar28;
    iVar8 = *(int *)(*param_1 + 4 + lVar30 * 0x60);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar26 + -1;
    if (iVar26 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x60) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar26 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar26 = iVar28;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar26 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar28 & 0x1f);
  iVar26 = 1;
  lVar6 = *param_1;
  lVar30 = lVar30 * 0x60;
  plVar12 = (longlong *)(lVar6 + lVar30);
  lVar17 = CONCAT44(uStack_cc,local_d0);
  *(longlong *)(lVar6 + lVar30) = lVar17;
  lVar7 = *plVar20;
  *(longlong *)(lVar6 + 0x10 + lVar30) = lVar7;
  *(undefined8 *)(lVar6 + 0x20 + lVar30) = 0;
  if (lVar7 != 0) {
    plVar16 = plVar20 + 4;
    if ((longlong *)plVar20[2] != (longlong *)0x0) {
      plVar16 = (longlong *)plVar20[2];
    }
    (**(code **)*plVar16)(plVar16,lVar30 + lVar6 + 0x20);
    lVar17 = *plVar12;
  }
  *(undefined4 *)(plVar12 + 10) = 0xffffffff;
  uVar9 = (uint)((ulonglong)lVar17 >> 0x10);
  uVar21 = (uint)lVar17 & 0xffff;
  uVar9 = ((uint)lVar17 << 0x10 | uVar21) + (int)((ulonglong)lVar17 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar21 >> 4);
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar21 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar16 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar16 = (longlong *)param_1[8];
      }
      iVar8 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
      if (iVar8 != -1) {
        do {
          pvVar4 = (void *)(*param_1 + (longlong)iVar8 * 0x60);
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x60) == lVar17) {
            if (*(longlong *)((longlong)pvVar4 + 0x10) != 0) {
              plVar20 = (longlong *)((longlong)pvVar4 + 0x30);
              if (*(longlong **)((longlong)pvVar4 + 0x20) != (longlong *)0x0) {
                plVar20 = *(longlong **)((longlong)pvVar4 + 0x20);
              }
              (**(code **)(*plVar20 + 0x10))();
            }
            memmove(pvVar4,plVar12,0x50);
            FUN_146fd9e12(param_1,iVar28);
            plVar20 = local_100;
            goto LAB_1411d7e62;
          }
          iVar8 = *(int *)((longlong)pvVar4 + 0x50);
        } while (iVar8 != -1);
      }
    }
    if (3 < uVar21) {
      uVar18 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
      lVar30 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar26 = 1 << ((byte)lVar30 & 0x1f);
    }
  }
  if (((int)uVar21 < 1) || (iVar26 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)plVar12 + 0x54) = uVar9;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 10) =
         *(undefined4 *)
          ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar28;
  }
  else {
    *(int *)(param_1 + 9) = iVar26;
    FUN_141733de4(param_1);
  }
LAB_1411d7e62:
  plVar12 = param_1 + 10;
  if (*(int *)((longlong)param_1 + 0x84) == 0) {
    iVar28 = (int)param_1[0xb];
    *(int *)(param_1 + 0xb) = iVar28 + 1;
    if (*(int *)((longlong)param_1 + 0x5c) == iVar28) {
      FUN_1403e7a24(plVar12,iVar28);
    }
    iVar26 = (int)param_1[0xf];
    if (iVar26 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar8 = iVar26 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar16 = param_1 + 0xc;
    iVar15 = iVar26 + 1;
    iVar25 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar25 = iVar26;
    }
    if (iVar25 >> 5 == iVar8) {
      *(int *)(param_1 + 0xf) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x7c) <= iVar26) {
        iVar8 = iVar26;
        if (iVar26 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar9 = iVar26 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x7c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar9) {
              uVar21 = uVar9;
            }
          }
          else {
            uVar21 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
          }
          uVar18 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar10 = (uint)(uVar18 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar18 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 >> 4]];
              }
              else {
                uVar19 = uVar18 + 0xf & 0xfffffffffffffff0;
                plVar20 = local_100;
                if (uVar19 < 0x7ff1) {
                  bVar14 = (&DAT_14c841e00)[uVar10 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar14) {
                    uVar24 = (ulonglong)bVar14;
                  }
                  uVar29 = 0x32 - (ulonglong)bVar14;
                  do {
                    uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_1411d8503;
                    lVar30 = uVar24 + 1 + uVar29;
                    uVar29 = uVar29 - 1;
                  } while (lVar30 != 0x33);
                }
                uVar18 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar18 = (ulonglong)DAT_14c841df8;
                }
                uVar18 = -uVar18 & (uVar19 + uVar18) - 1;
              }
            }
            else {
              uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
              iVar8 = (int)param_1[0xf];
            }
          }
LAB_1411d8503:
          iVar11 = (int)(uVar18 >> 2);
          iVar15 = -0x20;
          if ((int)uVar9 <= iVar11) {
            iVar15 = iVar11 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x7c) = iVar15;
        FUN_1446efbd8(plVar16,iVar8);
        iVar15 = (int)param_1[0xf] + 1;
      }
      iVar8 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      *(int *)(param_1 + 0xf) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[0xe];
        if ((longlong *)param_1[0xe] == (longlong *)0x0) {
          plVar22 = plVar16;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar8 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar30 = (longlong)iVar28;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[0xe];
    }
    bVar14 = (byte)iVar26 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar25 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar28 = (int)param_1[0x10];
    lVar30 = (longlong)iVar28;
    iVar26 = *(int *)(param_1[10] + 4 + lVar30 * 0x58);
    *(int *)(param_1 + 0x10) = iVar26;
    iVar8 = *(int *)((longlong)param_1 + 0x84) + -1;
    *(int *)((longlong)param_1 + 0x84) = iVar8;
    plVar20 = local_100;
    if (iVar8 != 0) {
      *(undefined4 *)(param_1[10] + (longlong)iVar26 * 0x58) = 0xffffffff;
    }
  }
  pvVar4 = local_b8;
  bVar14 = (byte)iVar28 & 0x1f;
  plVar16 = param_1 + 0xc;
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    plVar16 = (longlong *)param_1[0xe];
  }
  iVar26 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar26 = iVar28;
  }
  puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar26 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << bVar14;
  lVar6 = param_1[10];
  lVar30 = lVar30 * 0x58;
  plVar16 = (longlong *)(lVar6 + lVar30);
  *(ulonglong *)(lVar6 + lVar30) = CONCAT44(uStack_cc,local_d0);
  puVar1 = (uint *)(lVar6 + 8 + lVar30);
  *puVar1 = local_d0;
  puVar1[1] = uStack_cc;
  puVar1[2] = uStack_c8;
  puVar1[3] = uStack_c4;
  *(undefined8 *)(lVar6 + 0x18 + lVar30) = local_c0;
  *(undefined8 *)(lVar6 + 0x20 + lVar30) = 0;
  *(int *)(lVar6 + 0x28 + lVar30) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)plVar16 + 0x2c) = 0;
  }
  else {
    puVar27 = (undefined8 *)(lVar6 + lVar30 + 0x20);
    FUN_1446dd670(puVar27,local_b0,0 << bVar14);
    memcpy((void *)*puVar27,pvVar4,(longlong)local_b0 * 2);
  }
  pvVar4 = local_a8;
  plVar16[6] = 0;
  *(int *)(plVar16 + 7) = local_a0;
  if ((longlong)local_a0 == 0) {
    *(undefined4 *)((longlong)plVar16 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(plVar16 + 6,local_a0,0);
    memcpy((void *)plVar16[6],pvVar4,(longlong)local_a0 * 2);
  }
  *(undefined4 *)(plVar16 + 9) = local_90;
  plVar16[8] = local_98;
  *(undefined4 *)(plVar16 + 10) = 0xffffffff;
  lVar30 = *plVar16;
  uVar9 = (uint)((ulonglong)lVar30 >> 0x10);
  uVar21 = (uint)lVar30 & 0xffff;
  uVar9 = ((uint)lVar30 << 0x10 | uVar21) + (int)((ulonglong)lVar30 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar21 >> 4);
  uVar21 = (int)param_1[0xb] - *(int *)((longlong)param_1 + 0x84);
  if ((uVar21 != 0) && (uVar21 != 1)) {
    plVar22 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[0x12];
    }
    iVar26 = *(int *)((longlong)plVar22 + (ulonglong)((int)param_1[0x13] - 1U & uVar9) * 4);
    if (iVar26 != -1) {
      do {
        pvVar4 = (void *)(*plVar12 + (longlong)iVar26 * 0x58);
        if (*(longlong *)(*plVar12 + (longlong)iVar26 * 0x58) == lVar30) {
          if (*(longlong *)((longlong)pvVar4 + 0x30) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)((longlong)pvVar4 + 0x20) != 0) {
            FUN_1400020a8();
          }
          memmove(pvVar4,plVar16,0x50);
          FUN_146fd9e8c(plVar12,iVar28);
          plVar20 = local_100;
          goto LAB_1411d80cd;
        }
        iVar26 = *(int *)((longlong)pvVar4 + 0x50);
      } while (iVar26 != -1);
    }
  }
  if (uVar21 < 4) {
    iVar26 = 1;
  }
  else {
    uVar18 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar30 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    iVar26 = 1 << ((byte)lVar30 & 0x1f);
  }
  if (((int)uVar21 < 1) || (iVar26 <= (int)param_1[0x13])) {
    uVar9 = (int)param_1[0x13] - 1U & uVar9;
    *(uint *)((longlong)plVar16 + 0x54) = uVar9;
    plVar12 = (longlong *)param_1[0x12];
    if ((longlong *)param_1[0x12] == (longlong *)0x0) {
      plVar12 = param_1 + 0x11;
    }
    *(undefined4 *)(plVar16 + 10) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[0x13] - 1U & (longlong)(int)uVar9) * 4);
    plVar12 = (longlong *)param_1[0x12];
    if ((longlong *)param_1[0x12] == (longlong *)0x0) {
      plVar12 = param_1 + 0x11;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[0x13] - 1U & (longlong)(int)uVar9) * 4) =
         iVar28;
  }
  else {
    *(int *)(param_1 + 0x13) = iVar26;
    FUN_14173403c(plVar12);
  }
LAB_1411d80cd:
  local_88[0] = CONCAT44(uStack_cc,local_d0);
  FUN_1400021e4(&local_d0,local_58);
  FUN_1400b22c2(&local_68,&DAT_149fba5e0);
  iVar28 = local_60 + -1;
  puVar23 = local_68;
  if (local_60 == 0) {
    puVar23 = &DAT_149dfb77a;
    iVar28 = 0;
  }
  local_120 = (void **)CONCAT44(local_120._4_4_,0xffffffff);
  local_128 = (void **)CONCAT44(local_128._4_4_,1);
  iVar28 = FUN_1447ee042(local_58,puVar23,iVar28,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar28 != -1) {
    FUN_144a63a7c(local_58,&local_68,0,iVar28);
    puVar23 = local_68;
    if (local_60 == 0) {
      puVar23 = &DAT_149dfb77a;
    }
    FUN_1446f470e(local_88,puVar23,1);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  uVar9 = (uint)((ulonglong)local_88[0] >> 0x10);
  uVar21 = (uint)local_88[0] & 0xffff;
  uVar13 = FUN_140e6d7e2(param_1 + 0x14,
                         ((uint)local_88[0] << 0x10 | uVar21) +
                         (int)((ulonglong)local_88[0] >> 0x20) + (uVar9 << 0x13 | uVar9 & 0xffff) +
                         (uVar21 >> 4));
  FUN_140721fbe(uVar13,&local_d0);
LAB_1411d81ca:
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*plVar20 != 0) {
    plVar12 = plVar20 + 4;
    if ((longlong *)plVar20[2] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar20[2];
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d87e8 FUN_1411d87e8 body=221 status=ok
// SIG undefined FUN_1411d87e8(void)

longlong FUN_1411d87e8(void)

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
  if (DAT_14cbf31a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148f48561;
    local_40 = FUN_1466657a6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"PolyEditActivityContext",&DAT_14cbf31a0,
                  &DAT_148f48560);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf31a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d88c6 FUN_1411d88c6 body=311 status=ok
// SIG undefined FUN_1411d88c6(void)

undefined8 FUN_1411d88c6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1411d89f6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411d89f6;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1411d89f6:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411d899f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1411d899f;
    }
  }
  uVar6 = 0;
LAB_1411d899f:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d89fe FUN_1411d89fe body=2585 status=ok
// SIG undefined FUN_1411d89fe(void)

void FUN_1411d89fe(longlong param_1,longlong param_2,byte param_3,longlong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_68;
  longlong lStack_60;
  longlong local_58 [2];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar6 = FUN_1411d9434();
  if (cVar6 == '\0') goto LAB_1411d8eb8;
  if (param_4 == 0) {
LAB_1411d8ee4:
    bVar16 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141864c34;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464cee30;
      local_88 = &LAB_148bfac22;
      local_90 = &LAB_140f21842;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (bVar16 = 1,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1411d8ee4;
  }
  if ((((((*(int *)(param_2 + 0x9c) == 0) || (uVar7 = *(uint *)(param_2 + 0x98), (int)uVar7 < 0)) ||
        (DAT_14c9647dc <= (int)uVar7)) ||
       ((plVar15 = (longlong *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
        plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_2 + 0x9c))))) ||
      ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (lVar18 = *plVar15, lVar18 == 0))
  goto LAB_1411d8eb8;
  if (DAT_14cba8288 == 0) {
    local_80 = &local_68;
    local_68 = FUN_141864c34;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_1464cee30;
    local_88 = &LAB_148bfac22;
    local_90 = &LAB_140f21842;
    local_98 = &DAT_149e063b2;
    local_a0 = 0;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1411d8eb8;
  iVar14 = (int)((ulonglong)lVar18 >> 0x20);
  if ((bVar16 & param_3) != 1) {
    if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
      lVar8 = param_1 + 0xf8;
      if (*(longlong *)(param_1 + 0x100) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x100);
      }
      iVar14 = *(int *)(lVar8 + ((longlong)(iVar14 * 0x17 + (int)lVar18) &
                                (longlong)*(int *)(param_1 + 0x108) - 1U) * 4);
      if (iVar14 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar14 * 0x18) == lVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
          }
          iVar14 = *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar14 * 0x18 + 0x10);
        } while (iVar14 != -1);
      }
    }
    goto LAB_1411d8eb8;
  }
  if (*(longlong **)(lVar18 + 0x13f8) == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(**(longlong **)(lVar18 + 0x13f8) + 0x78))();
  }
  local_68 = (code *)0x0;
  lStack_60 = 0;
  local_58[0] = 0;
  uVar9 = FUN_1405a25e0();
  lStack_60 = FUN_14477b664(uVar9);
  lVar10 = FUN_1405a25e0();
  uVar9 = FUN_1405a25e0();
  FUN_1402d1bfa(&local_48,uVar9,lVar8);
  if (local_68 != local_48) {
    local_58[0] = 0;
  }
  local_68 = local_48;
  lVar11 = FUN_1405a25e0();
  if (lVar10 == 0) {
LAB_1411d8bcc:
    lVar11 = lVar10;
  }
  else if (lVar11 == 0) {
    lVar11 = 0;
  }
  else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
           lVar11 + 0x30)) goto LAB_1411d8bcc;
  if (lStack_60 != lVar11) {
    local_58[0] = 0;
  }
  uVar9 = FUN_14477b664(lVar11);
  lStack_60 = FUN_14477b664(uVar9);
  if (((lStack_60 == 0) || (local_68 == (code *)0x0)) && (lVar8 = local_58[0], lStack_60 == 0)) {
    uVar9 = FUN_1405a25e0();
    lStack_60 = FUN_14477b664(uVar9);
    lVar8 = local_58[0];
  }
  local_58[0] = lVar8;
  if (local_58[0] == 0) {
    local_58[0] = 0;
    if ((lStack_60 != 0) && (local_68 != (code *)0x0)) {
      plVar15 = local_58;
      plVar1 = *(longlong **)(lStack_60 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar6 == '\0')) {
LAB_1411d93db:
        *plVar15 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar1 + 0x110))(plVar1);
        local_58[0] = FUN_144aff482(uVar9,&local_68);
        if (local_58[0] != 0) goto LAB_1411d8c15;
      }
    }
  }
  else {
LAB_1411d8c15:
    lVar8 = *(longlong *)(param_1 + 0x280);
    if (lVar8 == 0) {
      uVar9 = FUN_1405a25e0();
      lVar8 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x280) = lVar8;
    }
    plVar1 = (longlong *)(param_1 + 0x278);
    plVar15 = (longlong *)(param_1 + 0x288);
    lVar10 = *(longlong *)(param_1 + 0x288);
    if (lVar10 == 0) {
      if ((lVar8 != 0) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) goto LAB_1411d93db;
        uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar10 = FUN_144aff482(uVar9,plVar1);
        *plVar15 = lVar10;
        if (lVar10 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x280);
          goto LAB_1411d8c43;
        }
      }
    }
    else {
LAB_1411d8c43:
      if (lVar8 == 0) {
        uVar9 = FUN_1405a25e0();
        lVar8 = FUN_14477b664(uVar9);
        *(longlong *)(param_1 + 0x280) = lVar8;
        lVar10 = *(longlong *)(param_1 + 0x288);
        if (((lVar10 == 0) && (lVar10 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
          plVar3 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar10 = FUN_144aff482(uVar9,plVar1);
          }
          *plVar15 = lVar10;
        }
      }
      if (lStack_60 == 0) {
        uVar9 = FUN_1405a25e0();
        lStack_60 = FUN_14477b664(uVar9);
      }
      if (local_58[0] == 0) {
        if ((lStack_60 != 0) && (local_68 != (code *)0x0)) {
          plVar15 = *(longlong **)(lStack_60 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
            local_58[0] = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar15 + 0x110))(plVar15);
            local_58[0] = FUN_144aff482(uVar9,&local_68);
            if (local_58[0] != 0) goto LAB_1411d8c6b;
          }
        }
        if ((lVar10 == 0) || (*(char *)(lVar10 + 0x33) != '\x01')) goto LAB_1411d8eb8;
        uVar7 = (uint)*(byte *)(lVar10 + 0x32);
      }
      else {
LAB_1411d8c6b:
        uVar7 = FUN_1449029b8(local_58[0],lVar10);
      }
      if (uVar7 != 2) goto LAB_1411d8eb8;
    }
  }
  plVar15 = (longlong *)(param_1 + 0xc0);
  uVar7 = iVar14 * 0x17 + (int)lVar18;
  iVar17 = *(int *)(param_1 + 200);
  iVar14 = *(int *)(param_1 + 0xf4);
  if (iVar17 != iVar14) {
    lVar8 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x100);
    }
    iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & uVar7) * 4);
    if (iVar13 != -1) {
      do {
        plVar1 = (longlong *)(*plVar15 + (longlong)iVar13 * 0x18);
        if (*plVar1 == lVar18) {
          if (plVar1 != (longlong *)0x0) goto LAB_1411d8e7e;
          break;
        }
        iVar13 = (int)plVar1[2];
      } while (iVar13 != -1);
    }
  }
  if (iVar14 == 0) {
    *(int *)(param_1 + 200) = iVar17 + 1;
    if (*(int *)(param_1 + 0xcc) == iVar17) {
      FUN_14482b872(plVar15,iVar17);
    }
    lVar10 = (longlong)iVar17;
    iVar14 = FUN_144a54ea4(param_1 + 0xd0,1);
    lVar8 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar8 = param_1 + 0xd0;
    }
    iVar13 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar13 = iVar14;
    }
    bVar16 = (byte)iVar14 & 0x1f;
    puVar2 = (uint *)(lVar8 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar17 = *(int *)(param_1 + 0xf0);
    lVar10 = (longlong)iVar17;
    iVar13 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 0xf0) = iVar13;
    *(int *)(param_1 + 0xf4) = iVar14 + -1;
    if (iVar14 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar13 * 0x18) = 0xffffffff;
    }
  }
  iVar14 = 1;
  lVar8 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xe0);
  }
  iVar13 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar13 = iVar17;
  }
  puVar2 = (uint *)(lVar8 + (longlong)(iVar13 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar17 & 0x1f);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar10 * 0x18);
  *plVar1 = lVar18;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0xffffffff;
  uVar19 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4);
  if (1 < uVar19) {
    lVar8 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x100);
    }
    iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & uVar7) * 4);
    if (iVar13 != -1) {
      do {
        plVar3 = (longlong *)(*plVar15 + (longlong)iVar13 * 0x18);
        if (*plVar3 == lVar18) {
          uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
          lVar8 = plVar1[1];
          uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
          *(int *)plVar3 = (int)*plVar1;
          *(undefined4 *)((longlong)plVar3 + 4) = uVar4;
          *(int *)(plVar3 + 1) = (int)lVar8;
          *(undefined4 *)((longlong)plVar3 + 0xc) = uVar5;
          FUN_1411d94ee(plVar15,iVar17);
          goto LAB_1411d8e6c;
        }
        iVar13 = (int)plVar3[2];
      } while (iVar13 != -1);
    }
  }
  if (3 < uVar19) {
    uVar12 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar14 <= *(int *)(param_1 + 0x108))) {
    uVar7 = *(int *)(param_1 + 0x108) - 1U & uVar7;
    *(uint *)((longlong)plVar1 + 0x14) = uVar7;
    lVar8 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar8 = param_1 + 0xf8;
    }
    *(undefined4 *)(plVar1 + 2) =
         *(undefined4 *)
          (lVar8 + ((longlong)*(int *)(param_1 + 0x108) - 1U & (longlong)(int)uVar7) * 4);
    lVar8 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar8 = param_1 + 0xf8;
    }
    *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x108) - 1U & (longlong)(int)uVar7) * 4) = iVar17
    ;
  }
  else {
    *(int *)(param_1 + 0x108) = iVar14;
    FUN_145837f54(plVar15);
  }
LAB_1411d8e6c:
  plVar1 = (longlong *)(*plVar15 + (longlong)iVar17 * 0x18);
LAB_1411d8e7e:
  uVar7 = *(uint *)(lVar18 + 0xc);
  *(uint *)(plVar1 + 1) = uVar7;
  if ((int)uVar7 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
  }
  else {
    lVar18 = 0;
  }
  iVar14 = *(int *)(lVar18 + 0x10);
  if (*(int *)(lVar18 + 0x10) == 0) {
    LOCK();
    iVar14 = DAT_14c964868 + 1;
    UNLOCK();
    iVar17 = DAT_14c964868 + 1;
    bVar20 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar14;
    if (bVar20) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar17);
    }
    LOCK();
    iVar14 = *(int *)(lVar18 + 0x10);
    bVar20 = iVar14 == 0;
    if (bVar20) {
      *(int *)(lVar18 + 0x10) = iVar17;
      iVar14 = 0;
    }
    UNLOCK();
    if (bVar20) {
      iVar14 = iVar17;
    }
  }
  *(int *)((longlong)plVar1 + 0xc) = iVar14;
LAB_1411d8eb8:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411d9434 FUN_1411d9434 body=98 status=ok
// SIG undefined FUN_1411d9434(void)

bool FUN_1411d9434(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  
  bVar4 = true;
  if (((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x2c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      iVar2 = FUN_14490d72a();
      bVar4 = iVar2 != 3;
    }
  }
  return bVar4;
}



// FUNCTION 1411d9496 FUN_1411d9496 body=87 status=ok
// SIG undefined FUN_1411d9496(void)

void FUN_1411d9496(longlong *param_1,int param_2)

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
  FUN_1411d94ee();
  return;
}



// FUNCTION 1411d94ee FUN_1411d94ee body=114 status=ok
// SIG undefined FUN_1411d94ee(void)

void FUN_1411d94ee(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 1411d9560 FUN_1411d9560 body=467 status=ok
// SIG undefined FUN_1411d9560(void)

void FUN_1411d9560(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  puVar5 = (undefined8 *)&DAT_14c949a00;
  if ((longlong)DAT_14c949e08 == 1) {
    if (DAT_14c949e00 != (undefined8 *)0x0) {
      puVar5 = DAT_14c949e00;
    }
    if (DAT_14c949828 == 0) {
      if (puVar5 != &DAT_14c949810) {
        if (DAT_14c949820 != 0) {
          FUN_1400020a8();
        }
        DAT_14c949820 = puVar5[2];
        puVar5[2] = 0;
        DAT_14c949828 = *(int *)(puVar5 + 3);
        DAT_14c94982c = *(int *)((longlong)puVar5 + 0x1c);
        puVar5[3] = 0;
      }
      goto LAB_1411d9646;
    }
    puVar3 = puVar5 + 4;
LAB_1411d95a0:
    iVar6 = 0;
    do {
      iVar6 = iVar6 + *(int *)(puVar5 + 3);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar3);
  }
  else {
    if (DAT_14c949e00 != (undefined8 *)0x0) {
      puVar5 = DAT_14c949e00;
    }
    if (DAT_14c949e08 != 0) {
      puVar3 = puVar5 + (longlong)DAT_14c949e08 * 4;
      goto LAB_1411d95a0;
    }
    iVar6 = 0;
  }
  iVar4 = DAT_14c949828 + iVar6;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (DAT_14c94982c < iVar4) {
    FUN_14583811e();
  }
  if (0 < iVar6) {
    puVar5 = (undefined8 *)&DAT_14c949a00;
    if (DAT_14c949e00 != (undefined8 *)0x0) {
      puVar5 = DAT_14c949e00;
    }
    lVar8 = (longlong)DAT_14c949e08;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        iVar6 = DAT_14c949828;
        uVar1 = *(uint *)((longlong)puVar5 + lVar9 + 0x18);
        if ((longlong)(int)uVar1 != 0) {
          lVar7 = (longlong)DAT_14c949828;
          iVar4 = DAT_14c949828 + uVar1;
          uVar2 = DAT_14c94982c - DAT_14c949828;
          DAT_14c949828 = iVar4;
          if (uVar2 < uVar1) {
            FUN_141716500(&DAT_14c949820,iVar6);
          }
          memcpy((void *)(lVar7 * 8 + DAT_14c949820),*(void **)((longlong)puVar5 + lVar9 + 0x10),
                 (longlong)(int)uVar1 << 3);
        }
        lVar9 = lVar9 + 0x20;
      } while (lVar8 * 0x20 != lVar9);
    }
  }
LAB_1411d9646:
  if (DAT_14c949e0c < 0) {
    FUN_14689da6e();
  }
  else {
    puVar5 = (undefined8 *)&DAT_14c949a00;
    if (DAT_14c949e00 != (undefined8 *)0x0) {
      puVar5 = DAT_14c949e00;
    }
    FUN_1411d9733(puVar5,DAT_14c949e08);
    DAT_14c949e08 = 0;
  }
  DAT_14c949e10 = 0;
  return;
}



// FUNCTION 1411d9733 FUN_1411d9733 body=47 status=ok
// SIG undefined FUN_1411d9733(void)

void FUN_1411d9733(longlong param_1,int param_2)

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



// FUNCTION 1411d9762 FUN_1411d9762 body=58 status=ok
// SIG undefined FUN_1411d9762(void)

undefined8 FUN_1411d9762(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    cVar1 = FUN_1411d97e6(param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar2 = FUN_1411d979c(param_1,param_2);
  return uVar2;
}



// FUNCTION 1411d979c FUN_1411d979c body=73 status=ok
// SIG undefined FUN_1411d979c(void)

bool FUN_1411d979c(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((((DAT_14c872bf2 != '\x01') || ((DAT_14cb80f38 & 1) != 0)) &&
      (cVar1 = FUN_1401badd8(param_1), cVar1 != '\0')) && ((char)param_1[0xea] == '\0')) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    return *plVar2 != 0;
  }
  return false;
}



// FUNCTION 1411d97e6 FUN_1411d97e6 body=125 status=ok
// SIG undefined FUN_1411d97e6(void)

undefined8 FUN_1411d97e6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_14050cbd4();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar3 = FUN_14050caa6();
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
        if ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30) && ((char)plVar1[0x1a] == '\x01')) {
          uVar4 = FUN_141563480(plVar1 + 0x1b);
          uVar4 = FUN_1411d9864(param_2,uVar4);
          return uVar4;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1411d9864 FUN_1411d9864 body=487 status=ok
// SIG undefined FUN_1411d9864(void)

undefined8 FUN_1411d9864(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
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
  if (param_2 != 0 && param_1 != (longlong *)0x0) {
    lVar1 = FUN_14589e8f4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x160) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_140636ec6(lVar1);
      if (plVar2 != (longlong *)0x0) {
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
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          lVar1 = (**(code **)(*plVar2 + 0x14d8))(plVar2);
          if (lVar1 != 0) {
            (**(code **)(*plVar2 + 0x14d8))(plVar2);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411d9a6e FUN_1411d9a6e body=3271 status=ok
// SIG undefined FUN_1411d9a6e(void)

void FUN_1411d9a6e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 *_Src;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined *local_168;
  code *local_160;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
            goto LAB_1411d9b6a;
          }
        }
        plVar6 = (longlong *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,plVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,plVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1411d9b6a:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
            goto LAB_1411d9c40;
          }
        }
        plVar6 = (longlong *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,plVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,plVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1411d9c40:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
            goto LAB_1411d9d16;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_1411d9d16:
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_4c);
            goto LAB_1411d9deb;
          }
        }
        puVar8 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar8 != &local_4c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_4c,puVar8,(int)plVar1[6]);
          }
          else {
            memcpy(&local_4c,puVar8,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_4c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_4c,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
LAB_1411d9deb:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_1411d9ebe;
          }
        }
        puVar8 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar8 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar8,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar8,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_1411d9ebe:
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_150);
            goto LAB_1411d9f8f;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_150) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_150,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_150,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_150,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_150,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
LAB_1411d9f8f:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_40 != 0) && (local_38 != 0)) {
    FUN_1411da736(param_1,local_40,1);
  }
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411da736 FUN_1411da736 body=297 status=ok
// SIG undefined FUN_1411da736(void)

void FUN_1411da736(longlong param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  float fVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x674) == '\0') {
    *(undefined1 *)(param_1 + 0x674) = 1;
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
       (*(int *)(param_1 + 0x678) < *(int *)(param_1 + 0x644) || *(int *)(param_1 + 0x644) < 1)) {
      dVar2 = *(double *)(lVar4 + 0x6d0);
      fVar1 = *(float *)(param_1 + 0x640);
      if (((fVar1 <= 0.0) || (fVar1 <= (float)dVar2 - *(float *)(param_1 + 0x670))) &&
         (((*(char *)(param_1 + 0x648) == '\x01' && (*(int *)(param_1 + 0x658) == 0)) ||
          ((lVar4 = FUN_140149a73(fVar1,0), lVar4 == 0 ||
           (cVar3 = FUN_1405d584e(param_1 + 0x650,lVar4), cVar3 != '\0')))))) {
        if (0 < *(int *)(param_1 + 0x644)) {
          *(int *)(param_1 + 0x678) = *(int *)(param_1 + 0x678) + 1;
        }
        *(float *)(param_1 + 0x670) = (float)dVar2;
        FUN_1458382bc(param_1 + (ulonglong)(param_3 ^ 1) * 0x10 + 0x620,param_2,param_4);
      }
    }
    *(undefined1 *)(param_1 + 0x674) = 0;
  }
  return;
}



// FUNCTION 1411da860 FUN_1411da860 body=145 status=ok
// SIG undefined FUN_1411da860(void)

undefined8 * FUN_1411da860(undefined8 *param_1)

{
  FUN_1411da948();
  *param_1 = &PTR_FUN_149f535b0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa5] = &PTR_LAB_149f48c00;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xa8] = &PTR_LAB_149f51d80;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xab] = &PTR_LAB_149f4c0e0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xae] = &PTR_LAB_149f4c0e0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb1] = &PTR_LAB_149f537b0;
  *(undefined1 *)(param_1 + 0xe) = 2;
  FUN_1411da8f2(param_1);
  return param_1;
}



// FUNCTION 1411da8f2 FUN_1411da8f2 body=85 status=ok
// SIG undefined FUN_1411da8f2(void)

void FUN_1411da8f2(longlong param_1)

{
  FUN_14062dc0c(param_1,param_1 + 0x528);
  FUN_14062dc0c(param_1,param_1 + 0x540);
  FUN_14062dc0c(param_1,param_1 + 0x558);
  FUN_14062dc0c(param_1,param_1 + 0x570);
  FUN_14062dc0c(param_1,param_1 + 0x588);
  return;
}



// FUNCTION 1411da948 FUN_1411da948 body=483 status=ok
// SIG undefined FUN_1411da948(void)

undefined8 * FUN_1411da948(undefined8 *param_1)

{
  FUN_1411dab2c();
  *param_1 = &PTR_FUN_149f535d0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x57] = &PTR_LAB_149f535f0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5a] = &PTR_LAB_149f48c00;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5d] = &PTR_LAB_149f48c00;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x60] = &PTR_LAB_149f48c00;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[99] = &PTR_LAB_149f48c00;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x66] = &PTR_LAB_149f48c00;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x69] = &PTR_LAB_149f48c00;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6c] = &PTR_LAB_149f4c0e0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6f] = &PTR_LAB_149f4c0e0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x72] = &PTR_LAB_149f4c0e0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x75] = &PTR_LAB_149f53630;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x78] = &PTR_LAB_149f53630;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7b] = &PTR_LAB_149f48c00;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x7e] = &PTR_LAB_149f51e80;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x81] = &PTR_LAB_149f53630;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x84] = &PTR_LAB_149f53630;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x87] = &PTR_LAB_149f53630;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8a] = &PTR_LAB_149f53630;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8d] = &PTR_LAB_149f51bd0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x90] = &PTR_LAB_149f51bd0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x93] = &PTR_LAB_149f53670;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x96] = &PTR_LAB_149f536b0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x99] = &PTR_LAB_149f536f0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9c] = &PTR_LAB_149f536f0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9f] = &PTR_LAB_149f53730;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xa4));
  FUN_1411daf68(param_1);
  return param_1;
}



// FUNCTION 1411dab2c FUN_1411dab2c body=150 status=ok
// SIG undefined FUN_1411dab2c(void)

undefined8 * FUN_1411dab2c(undefined8 *param_1)

{
  FUN_1411dabc2();
  *param_1 = &PTR_FUN_149f53550;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4e] = &PTR_LAB_149f4c0e0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x51] = &PTR_LAB_149f4c0e0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x54] = &PTR_LAB_149f53570;
  *(undefined1 *)(param_1 + 0xe) = 1;
  FUN_14062dc0c(param_1,param_1 + 0x4e);
  FUN_14062dc0c(param_1,param_1 + 0x51);
  FUN_14062dc0c(param_1,param_1 + 0x54);
  return param_1;
}



// FUNCTION 1411dabc2 FUN_1411dabc2 body=464 status=ok
// SIG undefined FUN_1411dabc2(void)

undefined8 * FUN_1411dabc2(undefined8 *param_1)

{
  FUN_1411dad92();
  *param_1 = &PTR_FUN_149f53150;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = &PTR_LAB_149f53190;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = &PTR_LAB_149f531d0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = &PTR_LAB_149f53210;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = &PTR_LAB_149f53250;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = &PTR_LAB_149f51ec0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = &PTR_LAB_149f53290;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = &PTR_LAB_149f532d0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = &PTR_LAB_149f48c00;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = &PTR_LAB_149f532d0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = &PTR_LAB_149f51ec0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = &PTR_LAB_149f53310;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = &PTR_LAB_149f53350;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = &PTR_LAB_149f53390;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x36] = &PTR_LAB_149f533d0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = &PTR_LAB_149f53410;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = &PTR_LAB_149f53450;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = &PTR_LAB_149f53490;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = &PTR_LAB_149f51ec0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = &PTR_LAB_149f51ec0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = &PTR_LAB_149f534d0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4b] = &PTR_LAB_149f53510;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_1411dae26(param_1);
  return param_1;
}



// FUNCTION 1411dad92 FUN_1411dad92 body=148 status=ok
// SIG undefined FUN_1411dad92(void)

undefined8 * FUN_1411dad92(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f48bf8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f48c00;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_14062dc0c(param_1,param_1 + 4);
  *param_1 = &PTR_FUN_149f53170;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = &PTR_LAB_149f51d80;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = &PTR_LAB_149f51dc0;
  FUN_14062dc0c(param_1,param_1 + 8);
  FUN_14062dc0c(param_1,param_1 + 0xb);
  return param_1;
}



// FUNCTION 1411dae26 FUN_1411dae26 body=322 status=ok
// SIG undefined FUN_1411dae26(void)

void FUN_1411dae26(longlong param_1)

{
  FUN_14062dc0c(param_1,param_1 + 0x78);
  FUN_14062dc0c(param_1,param_1 + 600);
  FUN_14062dc0c(param_1,param_1 + 0xd8);
  FUN_14062dc0c(param_1,param_1 + 0xf0);
  FUN_14062dc0c(param_1,param_1 + 0x108);
  FUN_14062dc0c(param_1,param_1 + 0x120);
  FUN_14062dc0c(param_1,param_1 + 0x138);
  FUN_14062dc0c(param_1,param_1 + 0x150);
  FUN_14062dc0c(param_1,param_1 + 0x168);
  FUN_14062dc0c(param_1,param_1 + 0x180);
  FUN_14062dc0c(param_1,param_1 + 0x198);
  FUN_14062dc0c(param_1,param_1 + 0x1b0);
  FUN_14062dc0c(param_1,param_1 + 0x1c8);
  FUN_14062dc0c(param_1,param_1 + 0x1e0);
  FUN_14062dc0c(param_1,param_1 + 0x1f8);
  FUN_14062dc0c(param_1,param_1 + 0x210);
  FUN_14062dc0c(param_1,param_1 + 0x228);
  FUN_14062dc0c(param_1,param_1 + 0x240);
  FUN_14062dc0c(param_1,param_1 + 0x90);
  FUN_14062dc0c(param_1,param_1 + 0xa8);
  FUN_14062dc0c(param_1,param_1 + 0xc0);
  return;
}



// FUNCTION 1411daf68 FUN_1411daf68 body=385 status=ok
// SIG undefined FUN_1411daf68(void)

void FUN_1411daf68(longlong param_1)

{
  FUN_14062dc0c(param_1,param_1 + 0x2b8);
  FUN_14062dc0c(param_1,param_1 + 0x2d0);
  FUN_14062dc0c(param_1,param_1 + 0x2e8);
  FUN_14062dc0c(param_1,param_1 + 0x300);
  FUN_14062dc0c(param_1,param_1 + 0x318);
  FUN_14062dc0c(param_1,param_1 + 0x330);
  FUN_14062dc0c(param_1,param_1 + 0x348);
  FUN_14062dc0c(param_1,param_1 + 0x360);
  FUN_14062dc0c(param_1,param_1 + 0x378);
  FUN_14062dc0c(param_1,param_1 + 0x390);
  FUN_14062dc0c(param_1,param_1 + 0x3a8);
  FUN_14062dc0c(param_1,param_1 + 0x3c0);
  FUN_14062dc0c(param_1,param_1 + 0x3d8);
  FUN_14062dc0c(param_1,param_1 + 0x3f0);
  FUN_14062dc0c(param_1,param_1 + 0x408);
  FUN_14062dc0c(param_1,param_1 + 0x420);
  FUN_14062dc0c(param_1,param_1 + 0x438);
  FUN_14062dc0c(param_1,param_1 + 0x450);
  FUN_14062dc0c(param_1,param_1 + 0x468);
  FUN_14062dc0c(param_1,param_1 + 0x480);
  FUN_14062dc0c(param_1,param_1 + 0x498);
  FUN_14062dc0c(param_1,param_1 + 0x4b0);
  FUN_14062dc0c(param_1,param_1 + 0x4c8);
  FUN_14062dc0c(param_1,param_1 + 0x4e0);
  FUN_14062dc0c(param_1,param_1 + 0x4f8);
  return;
}



// FUNCTION 1411db0f8 FUN_1411db0f8 body=182 status=ok
// SIG undefined FUN_1411db0f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411db0f8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b84c6b0;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
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



// FUNCTION 1411db1ae FUN_1411db1ae body=346 status=ok
// SIG undefined FUN_1411db1ae(void)

undefined8 FUN_1411db1ae(longlong param_1)

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
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      lVar1 = *(longlong *)(param_1 + 0x1f0);
      if (lVar1 == 0) goto LAB_1411db2f9;
    }
    if ((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_1411db2f9:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1411db320 FUN_1411db320 body=508 status=ok
// SIG undefined FUN_1411db320(void)

void FUN_1411db320(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
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
  local_60 = local_70;
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
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      lVar11 = *(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x18);
      if (lVar11 != 0) {
        FUN_1411db51e(lVar11);
        FUN_1400020a8(lVar11);
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_1411db460;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_1411db460:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
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



// FUNCTION 1411db51e FUN_1411db51e body=61 status=ok
// SIG undefined FUN_1411db51e(void)

void FUN_1411db51e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_1411db55b(lVar1,*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411db55b FUN_1411db55b body=81 status=ok
// SIG undefined FUN_1411db55b(void)

void FUN_1411db55b(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x68);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1411db5ac(puVar1 + -0x12);
      if (*(longlong *)(puVar1 + -0x16) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411db5ac FUN_1411db5ac body=55 status=ok
// SIG undefined FUN_1411db5ac(void)

void FUN_1411db5ac(longlong *param_1)

{
  FUN_1411db5e4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411db5e4 FUN_1411db5e4 body=510 status=ok
// SIG undefined FUN_1411db5e4(void)

void FUN_1411db5e4(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1411db731;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      puVar3 = *(undefined8 **)(*param_1 + 8 + (longlong)iVar5 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        iVar4 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar9[lVar12 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar12 == lVar10) goto LAB_1411db731;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_1411db731:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar6 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1411db7e4 FUN_1411db7e4 body=42 status=ok
// SIG undefined FUN_1411db7e4(void)

longlong FUN_1411db7e4(longlong param_1,int param_2)

{
  FUN_1411db80e(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411db80e FUN_1411db80e body=52 status=ok
// SIG undefined FUN_1411db80e(void)

void FUN_1411db80e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_1411db842(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411db842 FUN_1411db842 body=45 status=ok
// SIG undefined FUN_1411db842(void)

void FUN_1411db842(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1411db870 FUN_1411db870 body=122 status=ok
// SIG undefined FUN_1411db870(void)

void FUN_1411db870(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
    lVar2 = (longlong)*(int *)(param_1 + 0xf8) << 3;
    do {
      cVar1 = FUN_1411db966(lVar3,param_2);
      if (cVar1 != '\0') {
        FUN_1411db8ea(param_1,param_3);
        FUN_1411dbaa8(param_1,param_4);
        return;
      }
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1411db8ea FUN_1411db8ea body=122 status=ok
// SIG undefined FUN_1411db8ea(void)

void FUN_1411db8ea(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_30 = &local_38;
    FUN_1411dbb96(param_1 + 0x1c);
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411db966 FUN_1411db966 body=320 status=ok
// SIG undefined FUN_1411db966(void)

ulonglong FUN_1411db966(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1411dbaa8 FUN_1411dbaa8 body=215 status=ok
// SIG undefined FUN_1411dbaa8(void)

void FUN_1411dbaa8(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
      lVar4 = (longlong)*(int *)(param_1 + 0xe8) << 3;
      do {
        cVar2 = FUN_1409d2f40(lVar3,param_2);
        if (cVar2 != '\0') goto LAB_1411dbb74;
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,param_2);
    iVar1 = *(int *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0xe8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xec) < iVar1 + 1U) {
      FUN_1409d3082(param_1 + 0xe0,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar1 * 8) = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_1411dbb74:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dbb96 FUN_1411dbb96 body=301 status=ok
// SIG undefined FUN_1411dbb96(void)

int FUN_1411dbb96(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar2 = FUN_1401246e4(lVar1,*param_2);
    iVar11 = 0;
    iVar8 = 0;
    do {
      lVar12 = (longlong)iVar8;
      iVar5 = iVar8 + 1;
      if (iVar8 + 1 < iVar6) {
        iVar5 = iVar6;
      }
      lVar13 = lVar1 + 8 + lVar12 * 8;
      iVar9 = iVar8;
      lVar4 = lVar12;
      do {
        lVar4 = lVar4 + 1;
        iVar10 = iVar5;
        if (lVar7 <= lVar4) break;
        bVar3 = FUN_1401246e4(lVar13,*param_2);
        iVar9 = iVar9 + 1;
        lVar13 = lVar13 + 8;
        iVar10 = iVar9;
      } while ((bVar2 & 1) == bVar3);
      if ((bVar2 & 1) == 0) {
        if (iVar11 != iVar8) {
          memmove((void *)(lVar1 + (longlong)iVar11 * 8),(void *)(lVar1 + lVar12 * 8),
                  (longlong)(iVar10 - iVar8) << 3);
        }
        iVar11 = iVar11 + (iVar10 - iVar8);
      }
      iVar8 = iVar10;
      bVar2 = bVar2 ^ 1;
    } while (lVar4 < lVar7);
    *(int *)(param_1 + 1) = iVar11;
    iVar6 = iVar6 - iVar11;
  }
  return iVar6;
}



// FUNCTION 1411dbcc4 FUN_1411dbcc4 body=139 status=ok
// SIG undefined FUN_1411dbcc4(void)

undefined8
FUN_1411dbcc4(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0xffffffffffffffff;
  if ((ulonglong)*(uint5 *)(param_1 + 0xd) != 0xffffffffff) {
    uVar1 = (ulonglong)*(uint5 *)(param_1 + 0xd);
  }
  local_28 = param_5;
  uStack_20 = param_6;
  local_38 = param_3;
  local_30 = param_4;
  FUN_1411dbd50(&local_18,param_1 + 0x18,param_1 + 0x18,uVar1 + param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dbd50 FUN_1411dbd50 body=467 status=ok
// SIG undefined FUN_1411dbd50(void)

longlong *
FUN_1411dbd50(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,uint param_6,longlong param_7,longlong param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_3[1] == DAT_14c845dc4 && *param_3 == DAT_14c845dbc) {
    *param_1 = 0;
  }
  else {
    if (param_8 == 0) {
      FUN_1400eecdc(&local_60,param_5);
    }
    else {
      local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
      local_60[1] = 0;
      local_60[2] = 0;
      *local_60 = param_8;
      *(int *)(local_60 + 1) = (int)param_5;
      *(char *)(local_60 + 3) = (char)((ulonglong)param_5 >> 0x20);
      *(undefined1 *)((longlong)local_60 + 0x19) = 0;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
        UNLOCK();
      }
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    puVar3[1] = local_60;
    local_60 = (longlong *)0x0;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar4 = puVar3 + 6;
    *puVar3 = &PTR_FUN_149e690c8;
    puVar3[6] = &PTR_LAB_149e690e0;
    puVar3[8] = 0;
    puVar3[10] = 0;
    if (param_7 != 0) {
      FUN_1411dbf24(puVar3 + 8,param_7);
    }
    local_78 = param_5;
    local_70 = 0;
    local_68 = 0;
    local_58 = *param_3;
    local_50 = (undefined4)param_3[1];
    local_80 = param_4;
    FUN_1400d65e0(puVar3,&local_58,&local_80,
                  *(undefined4 *)(&DAT_149e69990 + (ulonglong)(param_6 & 0xff) * 4));
    plVar2 = local_60;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    *param_1 = (longlong)puVar4;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_144716208(local_60);
        FUN_1400020a8(plVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dbf24 FUN_1411dbf24 body=292 status=ok
// SIG undefined FUN_1411dbf24(void)

longlong * FUN_1411dbf24(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dc04a FUN_1411dc04a body=428 status=ok
// SIG undefined FUN_1411dc04a(void)

void FUN_1411dc04a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411dc1f8(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dc1f8 FUN_1411dc1f8 body=351 status=ok
// SIG undefined FUN_1411dc1f8(void)

void FUN_1411dc1f8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
      if (cVar2 != (char)param_2) {
        (**(code **)(*plVar1 + 0x690))(plVar1,param_2);
        if (((char)param_2 != '\0') &&
           ((*(byte *)(*(longlong *)(param_1 + 0xe10) + 0x250) & 0x20) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dc36a FUN_1411dc36a body=335 status=ok
// SIG undefined FUN_1411dc36a(void)

void FUN_1411dc36a(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      (**(code **)(*plVar1 + 0x938))(plVar1,2,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dc4d4 FUN_1411dc4d4 body=178 status=ok
// SIG undefined FUN_1411dc4d4(void)

undefined8 FUN_1411dc4d4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xec))) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
         ((lVar2 = *plVar4, lVar2 != 0 && (*(longlong *)(lVar2 + 0x620) != 0)))) &&
        ((*(char *)(lVar2 + 0x629) == '\x01' &&
         ((0 < *(int *)(lVar2 + 0x638) && (*(char *)(lVar2 + 0x628) == '\x01')))))) &&
       (cVar3 = FUN_1411dc586(param_1), cVar3 != '\0')) {
      uVar5 = FUN_140343d7a(param_1);
      FUN_140f8f968(lVar2,uVar5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1411dc586 FUN_1411dc586 body=302 status=ok
// SIG undefined FUN_1411dc586(void)

undefined8 FUN_1411dc586(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  longlong local_138;
  byte local_130 [272];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411dc5fe;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      if (lVar3 != 0) {
        FUN_1415066ce(param_1,&local_148);
        if (((local_148 == 0) || (*(longlong *)(local_148 + 0x620) == 0)) ||
           ((*(char *)(local_148 + 0x629) != '\x01' || (*(int *)(local_148 + 0x638) < 1)))) {
LAB_1411dc689:
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
          if ((*(char *)(local_148 + 0x628) == '\x01') && (local_140 != 0)) {
            if ((local_138 == 0) && ((local_130[0] & 1) != 0)) goto LAB_1411dc689;
            FUN_14386c64c(lVar3,&local_148);
            *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar3 + 0x24);
            uVar2 = 1;
          }
        }
        FUN_140b970fc(local_130);
        goto LAB_1411dc5fe;
      }
    }
  }
  uVar2 = 0;
LAB_1411dc5fe:
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dc6b6 FUN_1411dc6b6 body=275 status=ok
// SIG undefined FUN_1411dc6b6(void)

void FUN_1411dc6b6(longlong param_1)

{
  longlong lVar1;
  
  FUN_1403d8a98();
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_14480f766(&DAT_14cad0f38);
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FUN_14480f766(&DAT_14cad0f50);
  }
  FUN_1447af2f2(*(undefined8 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x428));
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x42c) != 0) {
    FUN_145839216(param_1 + 0x420);
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x438) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  lVar1 = FUN_1447210f0(param_1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x260), lVar1 != 0)) {
    if (*(longlong *)(param_1 + 0x450) != 0) {
      FUN_14480f766(lVar1 + 0x88);
    }
    if (*(longlong *)(param_1 + 0x410) != 0) {
      FUN_1411dc7ca(*(longlong *)(lVar1 + 0x38) + 0x70);
      if (*(longlong *)(param_1 + 0x450) != 0) {
        FUN_14480f766(lVar1 + 0x88);
      }
      *(undefined8 *)(param_1 + 0x410) = 0;
    }
  }
  return;
}



// FUNCTION 1411dc7ca FUN_1411dc7ca body=143 status=ok
// SIG undefined FUN_1411dc7ca(void)

void FUN_1411dc7ca(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0xb8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  *(undefined1 *)(param_2 + 9) = 1;
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x2b8);
  *(uint *)(lVar2 + 0x2b8) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 700) < iVar1 + 1U) {
    FUN_1411dc85a((longlong *)(lVar2 + 0x2b0),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x2b0) + (longlong)iVar1 * 8) = param_2;
  if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001411dc83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
  return;
}



// FUNCTION 1411dc85a FUN_1411dc85a body=353 status=ok
// SIG undefined FUN_1411dc85a(void)

void FUN_1411dc85a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411dc8df;
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
LAB_1411dc8df:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1411dc9bc FUN_1411dc9bc body=468 status=ok
// SIG undefined FUN_1411dc9bc(void)

void FUN_1411dc9bc(longlong *param_1,char param_2,longlong *param_3)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == '\0') {
    local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar1;
    }
    lVar4 = (**(code **)(*param_3 + 0x40))(param_3,local_80 & 0xffffffff);
  }
  else {
    local_80 = 0;
    (**(code **)(*param_1 + 0x150))(param_1,&local_80);
    if (local_80 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*param_3 + 0x30))(param_3);
    }
  }
  local_30 = 0;
  local_28 = 0;
  FUN_1403f5866(local_48,param_1);
  if (lVar4 != 0) {
    FUN_140c5894c(&local_80,local_48);
    FUN_1411dcb92(lVar4,&local_80);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar5 = (undefined8 ****)local_78[0];
      if (local_60 < 0x19) {
        ppppuVar5 = local_78;
      }
      (*pcVar3)(ppppuVar5);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78[0]);
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar5 = local_48;
    if (0x18 < local_30) {
      ppppuVar5 = (undefined8 ****)local_48[0];
    }
    (*pcVar3)(ppppuVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411dcb92 FUN_1411dcb92 body=396 status=ok
// SIG undefined FUN_1411dcb92(void)

undefined8 FUN_1411dcb92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *_Buf1;
  undefined8 ****ppppuVar7;
  void *_Buf2;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(byte *)(param_1 + 0x38) == *(byte *)(param_2 + 0x28)) {
    if (*(ushort *)(param_2 + 0x20) < 0x19) {
      _Buf2 = (void *)(param_2 + 8);
    }
    else {
      _Buf2 = *(void **)(param_2 + 8);
    }
    _Buf1 = (undefined8 *)(param_1 + 0x18);
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    uVar5 = (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120);
    if (*(code **)(&DAT_14c9a85e0 + uVar5) == (code *)0x0) {
      iVar4 = memcmp(_Buf1,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      if (iVar4 == 0) goto LAB_1411dcd01;
    }
    else {
      cVar3 = (**(code **)(&DAT_14c9a85e0 + uVar5))();
      if (cVar3 != '\0') {
LAB_1411dcd01:
        uVar6 = 0;
        goto LAB_1411dcc6a;
      }
    }
  }
  lVar1 = param_1 + 0x10;
  FUN_14034cca6(local_58,lVar1);
  FUN_144983130(lVar1);
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x48) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar8) != 0)) {
        uVar6 = FUN_14479d2ce(param_1 + 8);
        FUN_145839246(param_1 + 0x48,uVar6,local_58,lVar1);
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x10 != lVar8);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    FUN_1411dcd1f(param_1 + 0x60,local_58,lVar1);
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar7 = (undefined8 ****)local_50[0];
    if (local_38 < 0x19) {
      ppppuVar7 = local_50;
    }
    (*pcVar2)(ppppuVar7);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  uVar6 = 1;
LAB_1411dcc6a:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1411dcd1f FUN_1411dcd1f body=955 status=ok
// SIG undefined FUN_1411dcd1f(void)

void FUN_1411dcd1f(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ushort local_90;
  byte local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  puVar6 = (undefined8 *)(param_2 + 8);
  if (*(char *)(param_2 + 0x28) == '\0') {
    if (0x18 < *(ushort *)(param_2 + 0x20)) {
      puVar6 = *(undefined8 **)(param_2 + 8);
    }
    if (DAT_14c9a85c0 == (code *)0x0) {
      memcpy(&local_a8,puVar6,(longlong)DAT_14c9a8510);
    }
    else if (DAT_14c9a85c0 == (code *)&LAB_144b08a50) {
      local_98 = puVar6[2];
      local_a8 = (undefined8 ***)*puVar6;
      uStack_a0 = puVar6[1];
    }
    else {
      (*DAT_14c9a85c0)(&local_a8,puVar6);
    }
  }
  else {
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_a8), 0x18 < local_90)) {
      FUN_1400020a8(local_a8);
    }
    bVar1 = *(byte *)(param_2 + 0x28);
    local_90 = *(ushort *)(param_2 + 0x20);
    ppppuVar5 = &local_a8;
    if (0x18 < local_90) {
      local_a8 = (undefined8 ***)FUN_14001cc68(local_90,0);
      puVar6 = (undefined8 *)*puVar6;
      ppppuVar5 = (undefined8 ****)local_a8;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
    if (pcVar2 == (code *)0x0) {
      memcpy(ppppuVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar2)(ppppuVar5,puVar6);
    }
    local_88 = *(byte *)(param_2 + 0x28);
  }
  local_80 = *(undefined1 *)(param_2 + 0x30);
  puVar6 = (undefined8 *)(param_3 + 8);
  if (local_50 == *(byte *)(param_3 + 0x28)) {
    if (0x18 < *(ushort *)(param_3 + 0x20)) {
      puVar6 = *(undefined8 **)(param_3 + 8);
    }
    ppppuVar5 = local_70;
    if (0x18 < local_58) {
      ppppuVar5 = (undefined8 ****)local_70[0];
    }
    uVar4 = (ulonglong)((uint)local_50 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar2 == (code *)0x0) {
      memcpy(ppppuVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else if (pcVar2 == (code *)&LAB_144b08a50) {
      ppppuVar5[2] = (undefined8 ***)puVar6[2];
      pppuVar3 = (undefined8 ***)puVar6[1];
      *ppppuVar5 = (undefined8 ***)*puVar6;
      ppppuVar5[1] = pppuVar3;
    }
    else {
      (*pcVar2)(ppppuVar5,puVar6);
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar5 = local_70;
      if (0x18 < local_58) {
        ppppuVar5 = (undefined8 ****)local_70[0];
      }
      (*pcVar2)(ppppuVar5);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    bVar1 = *(byte *)(param_3 + 0x28);
    local_58 = *(ushort *)(param_3 + 0x20);
    ppppuVar5 = local_70;
    if (0x18 < local_58) {
      local_70[0] = (undefined8 ***)FUN_14001cc68(local_58,0);
      puVar6 = (undefined8 *)*puVar6;
      ppppuVar5 = (undefined8 ****)local_70[0];
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
    if (pcVar2 == (code *)0x0) {
      memcpy(ppppuVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar2)(ppppuVar5,puVar6);
    }
    local_50 = *(byte *)(param_3 + 0x28);
  }
  local_48 = *(undefined1 *)(param_3 + 0x30);
  FUN_1447cd2ec(param_1,&local_b0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar5 = local_70;
    if (0x18 < local_58) {
      ppppuVar5 = (undefined8 ****)local_70[0];
    }
    (*pcVar2)(ppppuVar5);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar5 = &local_a8;
    if (0x18 < local_90) {
      ppppuVar5 = (undefined8 ****)local_a8;
    }
    (*pcVar2)(ppppuVar5);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411dd0dc FUN_1411dd0dc body=2190 status=ok
// SIG undefined FUN_1411dd0dc(void)

void FUN_1411dd0dc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  longlong *local_170;
  undefined8 *local_168;
  undefined7 *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined7 local_118;
  undefined1 uStack_111;
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_d8 = local_d8 & 0xffffff00;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_b8 = DAT_14c8464f0;
  local_c8 = DAT_14c8464e0;
  uStack_c0 = DAT_14c8464e8;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x3002;
  local_90 = 0;
  local_58 = 0;
  local_50 = 0x200000000;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
LAB_1411dd1f2:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar6 = *(uint **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_d8);
      goto LAB_1411dd1f2;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_d8);
      goto LAB_1411dd1f2;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_d8);
      goto LAB_1411dd1f2;
    }
    uVar2 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    local_d8 = (uint)uVar2;
    uStack_d4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    puVar6 = (uint *)0x0;
  }
  uVar4 = uStack_11c;
  puVar9 = &local_d8;
  if (puVar6 != (uint *)0x0) {
    puVar9 = puVar6;
  }
  uStack_11c = uStack_11c & 0xffffff;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_11c + 3);
LAB_1411dd27f:
    pbVar5 = *(byte **)(param_2 + 0x20);
    lVar7 = *(longlong *)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,(longlong)&uStack_11c + 3);
      goto LAB_1411dd27f;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,(longlong)&uStack_11c + 3);
      goto LAB_1411dd27f;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,(longlong)&uStack_11c + 3);
      goto LAB_1411dd27f;
    }
    uVar2 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    uStack_11c._0_3_ = (undefined3)uVar4;
    uStack_11c._3_1_ = (undefined1)uVar2;
    local_118 = (undefined7)((ulonglong)uVar2 >> 8);
    lVar7 = 0;
  }
  lVar14 = (longlong)&uStack_11c + 3;
  if (lVar7 != 0) {
    lVar14 = lVar7;
  }
  local_120 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
LAB_1411dd30c:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_120);
      goto LAB_1411dd30c;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_120);
      goto LAB_1411dd30c;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_120);
      goto LAB_1411dd30c;
    }
    uVar2 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    local_120 = (undefined4)uVar2;
    uStack_11c = (uint)((ulonglong)uVar2 >> 0x20);
    puVar8 = (undefined4 *)0x0;
  }
  puVar15 = &local_120;
  if (puVar8 != (undefined4 *)0x0) {
    puVar15 = puVar8;
  }
  uStack_124 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_124);
LAB_1411dd399:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_124);
      goto LAB_1411dd399;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_124);
      goto LAB_1411dd399;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&uStack_124);
      goto LAB_1411dd399;
    }
    uVar2 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    uStack_124 = (undefined4)uVar2;
    local_120 = (undefined4)((ulonglong)uVar2 >> 0x20);
    puVar8 = (undefined4 *)0x0;
  }
  puVar12 = &uStack_124;
  if (puVar8 != (undefined4 *)0x0) {
    puVar12 = puVar8;
  }
  local_128 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_128);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_128);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        local_128 = (undefined4)uVar2;
        uStack_124 = (undefined4)((ulonglong)uVar2 >> 0x20);
        puVar8 = (undefined4 *)0x0;
        goto LAB_1411dd42e;
      }
      (*pcVar3)(uVar2,param_2,&local_128);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  puVar8 = *(undefined4 **)(param_2 + 0x38);
LAB_1411dd42e:
  puVar10 = &local_128;
  if (puVar8 != (undefined4 *)0x0) {
    puVar10 = puVar8;
  }
  local_130 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_158 = puVar12;
  local_150 = puVar15;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_130 = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_130);
    }
  }
  plVar13 = &local_130;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x38);
  }
  local_148 = 0;
  local_140 = 0x3002;
  local_138 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_148);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_148);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_148 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_148);
    }
  }
  puVar11 = &local_148;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  local_e8 = 0;
  local_e0 = 0x200000000;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_118 = (undefined7)uVar2;
      uStack_111 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_118);
    }
  }
  local_160 = &local_118;
  if (*(undefined7 **)(param_2 + 0x38) != (undefined7 *)0x0) {
    local_160 = *(undefined7 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = puVar10;
  local_170 = plVar13;
  local_168 = puVar11;
  FUN_1411dd96c(puVar9,lVar14,local_150,local_158);
  if ((DAT_14c950c29 == '\x01') && (*plVar13 != 0)) {
    FUN_1456cec3c();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dd96c FUN_1411dd96c body=147 status=ok
// SIG undefined FUN_1411dd96c(void)

void FUN_1411dd96c(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 *param_6,longlong *param_7,undefined1 *param_8)

{
  undefined1 *puVar1;
  
  *param_2 = *param_1;
  *param_3 = *(undefined4 *)(param_1 + 4);
  *param_4 = *(undefined4 *)(param_1 + 8);
  *param_5 = *(undefined4 *)(param_1 + 0x28);
  *param_6 = *(undefined8 *)(param_1 + 0x30);
  if ((*param_7 != *(longlong *)(param_1 + 0x38)) || ((int)param_7[1] != *(int *)(param_1 + 0x40)))
  {
    *param_7 = *(longlong *)(param_1 + 0x38);
    *(undefined4 *)(param_7 + 1) = *(undefined4 *)(param_1 + 0x40);
    param_7[2] = 0;
  }
  if (param_1 + 0x50 != param_8) {
    puVar1 = param_1 + 0x50;
    if (*(undefined1 **)(param_1 + 0x80) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_1 + 0x80);
    }
    FUN_1400709d4(param_8,puVar1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_8 + 0x3c));
    return;
  }
  return;
}



// FUNCTION 1411dda00 FUN_1411dda00 body=375 status=ok
// SIG undefined FUN_1411dda00(void)

undefined8 * FUN_1411dda00(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1411ddb88 FUN_1411ddb88 body=137 status=ok
// SIG undefined FUN_1411ddb88(void)

void FUN_1411ddb88(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined4 *puStack_38;
  undefined4 *local_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_40;
  local_40 = param_2;
  puStack_38 = param_3;
  FUN_1411ddc12(param_1,auStack_3c,&puStack_38,0);
  FUN_1411ddd78(param_1 + 0x50,&puStack_38,param_2);
  puVar8 = local_30;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  local_30[4] = param_3[4];
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[7] = uVar7;
  *puVar8 = uVar1;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  if ((uStack_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411ddc12 FUN_1411ddc12 body=356 status=ok
// SIG undefined FUN_1411ddc12(void)

undefined4 *
FUN_1411ddc12(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140283634(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140283598(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140283902(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411ddd78 FUN_1411ddd78 body=581 status=ok
// SIG undefined FUN_1411ddd78(void)

int * FUN_1411ddd78(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  
  iVar2 = (int)param_1[1];
  if (param_3 < iVar2) {
    lVar12 = *param_1;
  }
  else {
    iVar3 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < (uint)(iVar3 - iVar2)) {
      FUN_1447711aa(param_1);
      iVar3 = (int)param_1[1];
    }
    lVar12 = *param_1;
    iVar2 = (int)param_1[5];
    if (iVar2 < iVar3) {
      plVar10 = param_1 + 2;
      do {
        *(undefined4 *)(lVar12 + (longlong)iVar2 * 0x20) = 0xffffffff;
        lVar6 = param_1[6];
        *(int *)(lVar12 + 4 + (longlong)iVar2 * 0x20) = (int)lVar6;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar12 + (longlong)(int)lVar6 * 0x20) = iVar2;
        }
        *(int *)(param_1 + 6) = iVar2;
        iVar2 = (int)param_1[5];
        if (iVar2 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar3 = iVar2 + -1;
          }
          iVar3 = iVar3 >> 5;
        }
        iVar9 = iVar2 + 1;
        iVar11 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar11 = iVar2;
        }
        if (iVar11 >> 5 == iVar3) {
          *(int *)(param_1 + 5) = iVar9;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
            if (iVar2 + 0x20U < 0xa0) {
              iVar9 = 0x80;
              iVar3 = iVar2;
            }
            else {
              uVar13 = iVar2 + 0x20U >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar8 = 4;
                if (4 < uVar13) {
                  uVar8 = uVar13;
                }
              }
              else {
                uVar8 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
              }
              uVar5 = FUN_144a3809e(uVar8 << 2,0);
              iVar3 = (int)(uVar5 >> 2);
              iVar9 = -0x20;
              if ((int)uVar13 <= iVar3) {
                iVar9 = iVar3 << 5;
              }
              iVar3 = (int)param_1[5];
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar9;
            FUN_1446efbd8(plVar10,iVar3);
            iVar9 = (int)param_1[5] + 1;
          }
          iVar3 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar3 = iVar9;
          }
          *(int *)(param_1 + 5) = iVar9;
          if (iVar9 % 0x20 != 0) {
            plVar4 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar4 = plVar10;
            }
            bVar7 = -(char)(iVar9 % 0x20);
            *(uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f))
                 >> (bVar7 & 0x1f);
          }
        }
        plVar4 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar4 = plVar10;
        }
        bVar7 = (byte)iVar2 & 0x1f;
        puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar2 = (int)param_1[5];
      } while (iVar2 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar6 = (longlong)param_3 * 0x20;
  iVar2 = *(int *)(lVar12 + lVar6);
  iVar3 = *(int *)(lVar12 + 4 + lVar6);
  if ((longlong)iVar2 == -1) {
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(lVar12 + 4 + (longlong)iVar2 * 0x20) = iVar3;
  }
  if (iVar3 != -1) {
    *(int *)(lVar12 + (longlong)iVar3 * 0x20) = iVar2;
  }
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar2 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar6 + *param_1;
  return param_2;
}



// FUNCTION 1411ddfbe FUN_1411ddfbe body=219 status=ok
// SIG undefined FUN_1411ddfbe(void)

longlong * FUN_1411ddfbe(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x3a0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b9db290;
  plVar1 = plVar3 + 2;
  FUN_1411de13c(plVar1,param_3,param_4);
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_1411de09a(&local_40,plVar1);
  plVar1 = local_38;
  *param_2 = (longlong)local_40;
  param_2[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411de09a FUN_1411de09a body=162 status=ok
// SIG undefined FUN_1411de09a(void)

void FUN_1411de09a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_1411de0d9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_1411de0d9;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1411de0d9:
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
                    /* WARNING: Could not recover jumptable at 0x0001411de138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1411de13c FUN_1411de13c body=244 status=ok
// SIG undefined FUN_1411de13c(void)

undefined8 * FUN_1411de13c(undefined8 *param_1)

{
  FUN_1411de230();
  *param_1 = &PTR_FUN_14b9d8f60;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  return param_1;
}



// FUNCTION 1411de230 FUN_1411de230 body=528 status=ok
// SIG undefined FUN_1411de230(void)

undefined8 * FUN_1411de230(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8;
  *param_1 = &PTR_FUN_14b47bb30;
  param_1[6] = *param_3;
  lVar4 = param_3[1];
  param_1[7] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x44) = iVar2;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  FUN_1400b22c2(param_1 + 0x46,&DAT_149e02088);
  return param_1;
}



// FUNCTION 1411de440 FUN_1411de440 body=469 status=ok
// SIG undefined FUN_1411de440(void)

undefined8 FUN_1411de440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(lVar1 + 8);
      FUN_1401f3db8(lVar2,lVar1 + 0x10);
      if ((*(longlong *)(lVar2 + 0x18) != *(longlong *)(lVar1 + 0x28)) ||
         (*(int *)(param_2 + 0x30 + lVar6) != *(int *)(param_3 + 0x30 + lVar6))) {
        *(longlong *)(param_2 + 0x28 + lVar6) = *(longlong *)(lVar1 + 0x28);
        *(undefined4 *)(param_2 + 0x30 + lVar6) = *(undefined4 *)(param_3 + 0x30 + lVar6);
        *(undefined8 *)(param_2 + 0x38 + lVar6) = 0;
      }
      *(undefined4 *)(param_2 + 0x40 + lVar6) = *(undefined4 *)(param_3 + 0x40 + lVar6);
      lVar1 = *(longlong *)(param_3 + 0x48 + lVar6);
      if (*(longlong *)(param_2 + 0x48 + lVar6) != lVar1) {
        *(undefined8 *)(param_2 + 0x58 + lVar6) = 0;
      }
      *(longlong *)(param_2 + 0x48 + lVar6) = lVar1;
      if (*(longlong *)(param_2 + 0x50 + lVar6) != *(longlong *)(param_3 + 0x50 + lVar6)) {
        *(undefined8 *)(param_2 + 0x58 + lVar6) = 0;
      }
      uVar5 = FUN_14477b664();
      uVar5 = FUN_14477b664(uVar5);
      *(undefined8 *)(param_2 + 0x50 + lVar6) = uVar5;
      *(undefined8 *)(param_2 + 0x58 + lVar6) = *(undefined8 *)(param_3 + 0x58 + lVar6);
      puVar7 = (undefined8 *)(param_3 + 0x60 + lVar6);
      uVar5 = puVar7[1];
      puVar3 = (undefined8 *)(param_2 + 0x60 + lVar6);
      *puVar3 = *puVar7;
      puVar3[1] = uVar5;
      lVar1 = *(longlong *)(param_3 + 0x70 + lVar6);
      if ((*(longlong *)(param_2 + 0x70 + lVar6) != lVar1) ||
         (*(int *)(param_2 + 0x78 + lVar6) != *(int *)(param_3 + 0x78 + lVar6))) {
        *(longlong *)(param_2 + 0x70 + lVar6) = lVar1;
        *(undefined4 *)(param_2 + 0x78 + lVar6) = *(undefined4 *)(param_3 + 0x78 + lVar6);
        *(undefined8 *)(param_2 + 0x80 + lVar6) = 0;
      }
      *(undefined4 *)(param_2 + 0x88 + lVar6) = *(undefined4 *)(param_3 + 0x88 + lVar6);
      if (param_2 + lVar6 != param_3 + lVar6) {
        iVar4 = *(int *)(param_3 + 0x98 + lVar6);
        uVar5 = *(undefined8 *)(param_3 + 0x90 + lVar6);
        *(int *)(param_2 + 0x98 + lVar6) = iVar4;
        if (iVar4 == 0 && *(int *)(param_2 + 0x9c + lVar6) == 0) {
          *(undefined4 *)(param_2 + 0x9c + lVar6) = 0;
        }
        else {
          puVar7 = (undefined8 *)(param_2 + lVar6 + 0x90);
          FUN_1411de616(puVar7,iVar4);
          FUN_1411de6ff(*puVar7,uVar5,iVar4);
        }
      }
      lVar6 = lVar6 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1411de616 FUN_1411de616 body=233 status=ok
// SIG undefined FUN_1411de616(void)

void FUN_1411de616(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xa0;
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
    iVar1 = (int)(uVar3 / 0xa0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1411de6ff FUN_1411de6ff body=332 status=ok
// SIG undefined FUN_1411de6ff(void)

void FUN_1411de6ff(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined4 *)(param_1 + lVar4) = *(undefined4 *)(param_2 + lVar4);
      puVar1 = (undefined8 *)(param_1 + 8 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar4) = 0;
      *(undefined8 *)(param_1 + 8 + lVar4) = *(undefined8 *)(param_2 + 8 + lVar4);
      uVar3 = FUN_14477b664(*(undefined8 *)(param_2 + 0x10 + lVar4));
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x10 + lVar4) = uVar3;
      *(undefined8 *)(param_1 + 0x18 + lVar4) = *(undefined8 *)(param_2 + 0x18 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x30 + lVar4) = *(undefined8 *)(param_2 + 0x30 + lVar4);
      *(undefined4 *)(param_1 + 0x38 + lVar4) = *(undefined4 *)(param_2 + 0x38 + lVar4);
      *(undefined8 *)(param_1 + 0x40 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x48 + lVar4) = *(undefined4 *)(param_2 + 0x48 + lVar4);
      *(undefined4 *)(param_1 + 0x50 + lVar4) = *(undefined4 *)(param_2 + 0x50 + lVar4);
      *(undefined8 *)(param_1 + 0x68 + lVar4) = 0;
      puVar1 = (undefined8 *)(param_1 + 0x58 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x58 + lVar4) = *(undefined8 *)(param_2 + 0x58 + lVar4);
      uVar3 = FUN_14477b664(*(undefined8 *)(param_2 + 0x60 + lVar4));
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x60 + lVar4) = uVar3;
      *(undefined8 *)(param_1 + 0x68 + lVar4) = *(undefined8 *)(param_2 + 0x68 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x70 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x70 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x80 + lVar4) = *(undefined8 *)(param_2 + 0x80 + lVar4);
      *(undefined4 *)(param_1 + 0x88 + lVar4) = *(undefined4 *)(param_2 + 0x88 + lVar4);
      *(undefined8 *)(param_1 + 0x90 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x98 + lVar4) = *(undefined4 *)(param_2 + 0x98 + lVar4);
      lVar4 = lVar4 + 0xa0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1411de84b FUN_1411de84b body=38 status=ok
// SIG undefined FUN_1411de84b(void)

void FUN_1411de84b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1411de872(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1411de872 FUN_1411de872 body=204 status=ok
// SIG undefined FUN_1411de872(void)

void FUN_1411de872(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_1411de885:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x48) = 0;
      goto LAB_1411de885;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1411de8a7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1411de8a7:
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411de93e FUN_1411de93e body=228 status=ok
// SIG undefined FUN_1411de93e(void)

longlong FUN_1411de93e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = FUN_1411dea22(param_1,DAT_14cb714e0,0x41,0,0,0);
  *(undefined4 *)(lVar2 + 0x17c) = *(undefined4 *)(param_1 + 0x1648);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1850) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(param_1 + 0x1850) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x1854) = iVar3;
  return lVar2;
}



// FUNCTION 1411dea22 FUN_1411dea22 body=257 status=ok
// SIG undefined FUN_1411dea22(void)

undefined8
FUN_1411dea22(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_1411deb24();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411deb24 FUN_1411deb24 body=228 status=ok
// SIG undefined FUN_1411deb24(void)

longlong FUN_1411deb24(void)

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
  if (DAT_14cb5d970 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464dd44a;
    local_38 = &LAB_14869a3c7;
    local_40 = &LAB_1410bf454;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x580;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDroneMovementComponent",&DAT_14cb5d970,&DAT_14869a3c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d970;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411dec12 FUN_1411dec12 body=431 status=ok
// SIG undefined FUN_1411dec12(void)

void FUN_1411dec12(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x44);
  FUN_140fb6545(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_1488d2f84(plVar1,0);
  }
  local_78 = 0;
  uStack_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    local_88 = (longlong)*(int *)(param_1 + 0x20) * 0x30 + lVar5;
    do {
      bVar8 = (longlong)uStack_70 < 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if (bVar8) {
        FUN_1402191ca(&local_78,0);
      }
      FUN_1449f3ff4(lVar5 + 0x10,&local_78);
      local_80 = 0;
      FUN_1408c99be();
      FUN_1405593a8(&DAT_14cb83290,&local_80,lVar5);
      lVar4 = local_80;
      if ((longlong)(int)uStack_70 != 0) {
        lVar6 = (longlong)(int)uStack_70 << 3;
        lVar7 = local_78;
        do {
          iVar3 = *(int *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
            FUN_1411dedc2(plVar1,iVar3);
          }
          puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x18);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          *(undefined4 *)puVar2 = *(undefined4 *)(lVar5 + 8);
          if (lVar4 != 0) {
            puVar2[1] = lVar4;
          }
          FUN_1408c99be();
          FUN_1405593a8(&DAT_14cb83290,puVar2 + 2,lVar7);
          lVar7 = lVar7 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 0x30;
    } while (lVar5 != local_88);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411dedc2 FUN_1411dedc2 body=363 status=ok
// SIG undefined FUN_1411dedc2(void)

void FUN_1411dedc2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411dee58;
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
LAB_1411dee58:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1411def2e FUN_1411def2e body=221 status=ok
// SIG undefined FUN_1411def2e(void)

longlong FUN_1411def2e(void)

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
  if (DAT_14cab3a30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147577edc;
    local_40 = &LAB_146341bc5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x4a0;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSequencePlayer",&DAT_14cab3a30,FUN_146341b9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3a30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411df00c FUN_1411df00c body=375 status=ok
// SIG undefined FUN_1411df00c(void)

undefined8 * FUN_1411df00c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1411df190 FUN_1411df190 body=78 status=ok
// SIG undefined FUN_1411df190(void)

void FUN_1411df190(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    plVar1 = (longlong *)FUN_145a6b0e2();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    *(longlong *)(param_1 + 0x4d8) = lVar2;
  }
  return;
}



// FUNCTION 1411df1de FUN_1411df1de body=3362 status=ok
// SIG undefined FUN_1411df1de(void)

void FUN_1411df1de(longlong param_1)

{
  undefined2 **ppuVar1;
  longlong *plVar2;
  ulonglong uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined1 auStack_168 [40];
  longlong *local_140;
  int local_138;
  uint local_134;
  ulonglong local_130;
  uint *local_128;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 *local_f8;
  int local_f0;
  int local_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_bc [4];
  undefined8 *local_b8;
  uint *puStack_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar2 = (longlong *)(param_1 + 0x408);
  if (*(int *)(param_1 + 0x410) != *(int *)(param_1 + 0x43c)) {
    FUN_1479688ce(plVar2);
    FUN_147968a12(plVar2);
  }
  lVar23 = param_1 + 0x3b8;
  local_140 = plVar2;
  if (*(int *)(param_1 + 0x3c0) != *(int *)(param_1 + 0x3ec)) {
    FUN_14587c8aa(lVar23);
    FUN_145da4014(lVar23);
  }
  FUN_14574b114(param_1 + 0x368);
  local_118 = param_1;
  lVar7 = FUN_1411df190(param_1);
  iVar15 = *(int *)(lVar7 + 0x98);
  if ((longlong)iVar15 != 0) {
    lVar16 = *(longlong *)(lVar7 + 0x90);
    lVar18 = 0;
    do {
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(lVar16 + 0x18 + lVar18) != 0) {
        puVar13 = *(undefined2 **)(lVar16 + 0x10 + lVar18);
      }
      FUN_1446f470e(&local_e8,puVar13,1);
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(lVar16 + 8 + lVar18) != 0) {
        puVar13 = *(undefined2 **)(lVar16 + lVar18);
      }
      FUN_1446f470e(&local_108,puVar13,1);
      local_b8 = &local_108;
      puStack_b0 = &local_e8;
      FUN_146873bc6(param_1 + 0x368,local_bc,&local_b8,0);
      lVar18 = lVar18 + 0x20;
    } while ((longlong)iVar15 * 0x20 != lVar18);
  }
  if ((longlong)*(int *)(lVar7 + 0x88) != 0) {
    puVar25 = *(undefined8 **)(lVar7 + 0x80);
    puVar19 = puVar25 + (longlong)*(int *)(lVar7 + 0x88) * 4;
    do {
      puStack_b0 = (uint *)(puVar25 + 2);
      local_b8 = puVar25;
      FUN_140ac5c08(lVar23,&local_e8,&local_b8,0);
      puVar25 = puVar25 + 4;
    } while (puVar25 != puVar19);
  }
  iVar15 = *(int *)(lVar7 + 0xa8);
  if ((longlong)iVar15 != 0) {
    lVar23 = *(longlong *)(lVar7 + 0xa0);
    lVar7 = 0;
    do {
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(lVar23 + 0x18 + lVar7) != 0) {
        puVar13 = *(undefined2 **)(lVar23 + 0x10 + lVar7);
      }
      FUN_1411e4208(&local_b8,puVar13);
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(lVar23 + 8 + lVar7) != 0) {
        puVar13 = *(undefined2 **)(lVar23 + lVar7);
      }
      FUN_1411e4208(&local_e8,puVar13);
      local_108 = &local_e8;
      uStack_100 = &local_b8;
      FUN_147968b4a(local_140,local_bc,&local_108);
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x20;
    } while ((longlong)iVar15 * 0x20 != lVar7);
  }
  uVar24 = *(uint *)(local_118 + 0x430);
  if (uVar24 == 0) {
    uVar20 = 1;
    uVar14 = 0;
    iVar15 = 0;
    uVar5 = 0;
  }
  else {
    puVar8 = *(uint **)(local_118 + 0x428);
    if (*(uint **)(local_118 + 0x428) == (uint *)0x0) {
      puVar8 = (uint *)(local_118 + 0x418);
    }
    uVar5 = *puVar8;
    if (uVar5 == 0) {
      iVar15 = uVar24 + 0x1e;
      if (-1 < (int)(uVar24 - 1)) {
        iVar15 = uVar24 - 1;
      }
      uVar14 = 0;
      uVar20 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar20 = uVar14;
      }
      iVar15 = 0;
      do {
        if (uVar20 == uVar14) goto LAB_1411df4cb;
        iVar15 = iVar15 + 0x20;
        uVar5 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar14 = 0;
      iVar15 = 0;
    }
    uVar20 = (ulonglong)(-uVar5 & uVar5);
    uVar3 = uVar20 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar5 = (iVar15 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar24 <= (int)uVar5) {
      uVar5 = uVar24;
    }
  }
  if (uVar5 != uVar24) {
    uVar9 = 0xffffffff;
    local_130 = (ulonglong)uVar24;
    local_128 = (uint *)(local_118 + 0x418);
    do {
      lVar23 = *local_140;
      lVar7 = (longlong)(int)uVar5;
      puVar8 = (uint *)(lVar23 + lVar7 * 0x48);
      local_e8 = *puVar8;
      uStack_e4 = puVar8[1];
      uStack_e0 = puVar8[2];
      uStack_dc = puVar8[3];
      local_d8 = (undefined2 *)0x0;
      local_d0 = *(int *)(lVar23 + 0x18 + lVar7 * 0x48);
      lVar16 = (longlong)local_d0;
      pvVar4 = *(void **)(lVar23 + 0x10 + lVar7 * 0x48);
      local_138 = iVar15;
      local_134 = uVar9;
      local_120 = uVar20;
      local_110 = uVar14;
      if (lVar16 == 0) {
        local_cc = 0;
      }
      else {
        FUN_1446dd670(&local_d8,local_d0,0);
        memcpy(local_d8,pvVar4,lVar16 * 2);
      }
      lVar23 = lVar23 + lVar7 * 0x48;
      local_108 = *(uint **)(lVar23 + 0x20);
      uStack_100 = *(undefined8 ***)(lVar23 + 0x28);
      local_f8 = (undefined2 *)0x0;
      local_f0 = *(int *)(lVar23 + 0x38);
      lVar7 = (longlong)local_f0;
      pvVar4 = *(void **)(lVar23 + 0x30);
      if (lVar7 == 0) {
        local_ec = 0;
      }
      else {
        FUN_1446dd670(&local_f8,local_f0,0);
        memcpy(local_f8,pvVar4,lVar7 * 2);
      }
      plVar2 = local_140;
      local_98 = 0;
      local_90 = 0;
      local_b8 = (undefined8 *)0x0;
      puStack_b0 = (uint *)0x0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_1449774fc(&local_b8,local_bc,&local_e8,0);
      do {
        FUN_1449774fc(&local_b8,local_bc,&local_108,0);
        uVar24 = 0;
        iVar15 = local_f0 + -1;
        if (local_f0 == 0) {
          iVar15 = 0;
        }
        if (0 < iVar15) {
          puVar13 = &DAT_149dfb77a;
          if (local_f0 != 0) {
            puVar13 = local_f8;
          }
          lVar23 = 0;
          do {
            uVar5 = ((uint)(0x19 < (ushort)puVar13[lVar23] - 0x61) * 0x20 +
                    (uint)(ushort)puVar13[lVar23]) - 0x20;
            uVar24 = uVar24 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar24 ^ uVar5) & 0xff) * 4);
            uVar24 = uVar24 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
            lVar23 = lVar23 + 1;
          } while (iVar15 != (int)lVar23);
        }
        uVar5 = (uint)((ulonglong)uStack_100 >> 0x10);
        uVar22 = (uint)uStack_100 & 0xffff;
        uVar9 = (uint)((ulonglong)local_108 >> 0x10);
        uVar17 = (uint)local_108 & 0xffff;
        uVar9 = ((uint)local_108 << 0x10 | uVar17) + (int)((ulonglong)local_108 >> 0x20) +
                (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar17 >> 4);
        uVar9 = (uVar9 >> 2) + 0x9e3779b9 +
                ((uint)uStack_100 << 0x10 | uVar22) + (int)((ulonglong)uStack_100 >> 0x20) +
                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar22 >> 4) + uVar9 * 0x40 ^ uVar9;
        uVar17 = uVar9 >> 0xd ^ -uVar9;
        uVar5 = uVar17 << 8 ^ (-0x61c88647 - uVar9) - uVar17;
        uVar22 = uVar5 >> 0xd ^ (uVar9 - uVar17) - uVar5;
        uVar17 = uVar22 >> 0xc ^ (uVar17 - uVar5) - uVar22;
        uVar9 = uVar17 << 0x10 ^ (uVar5 - uVar22) - uVar17;
        uVar5 = uVar9 >> 5 ^ (uVar22 - uVar17) - uVar9;
        uVar17 = uVar5 >> 3 ^ (uVar17 - uVar9) - uVar5;
        uVar9 = uVar17 << 10 ^ (uVar9 - uVar5) - uVar17;
        uVar5 = uVar24 >> 0xd ^ (uVar9 >> 0xf ^ uVar5 - (uVar17 + uVar9)) - uVar24;
        uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar24) - uVar5;
        uVar17 = uVar9 >> 0xd ^ (uVar24 - uVar5) - uVar9;
        uVar24 = uVar17 >> 0xc ^ (uVar5 - uVar9) - uVar17;
        uVar5 = uVar24 << 0x10 ^ (uVar9 - uVar17) - uVar24;
        uVar17 = uVar5 >> 5 ^ (uVar17 - uVar24) - uVar5;
        uVar9 = uVar17 >> 3 ^ (uVar24 - uVar5) - uVar17;
        uVar24 = uVar9 << 10 ^ (uVar5 - uVar17) - uVar9;
        iVar15 = FUN_14587a5e6(plVar2,uVar24 >> 0xf ^ uVar17 - (uVar9 + uVar24),&local_108);
        if (iVar15 == -1) break;
        lVar23 = *plVar2 + (longlong)iVar15 * 0x48;
        if (lVar23 == 0) break;
        lVar7 = *plVar2 + (longlong)iVar15 * 0x48;
        plVar12 = (longlong *)(lVar7 + 0x20);
        if (plVar12 == (longlong *)0x0) break;
        local_108 = (uint *)*plVar12;
        uStack_100 = *(undefined8 ***)(lVar7 + 0x28);
        if (&local_f8 != (undefined2 **)(lVar23 + 0x30)) {
          iVar15 = *(int *)(lVar23 + 0x38);
          pvVar4 = *(void **)(lVar23 + 0x30);
          local_f0 = iVar15;
          if (iVar15 == 0 && local_ec == 0) {
            local_ec = 0;
          }
          else {
            FUN_1446dd670(&local_f8,iVar15);
            if (iVar15 != 0) {
              memcpy(local_f8,pvVar4,(longlong)iVar15 * 2);
            }
          }
        }
        uVar24 = 0;
        iVar15 = local_f0 + -1;
        if (local_f0 == 0) {
          iVar15 = 0;
        }
        if (0 < iVar15) {
          puVar13 = &DAT_149dfb77a;
          if (local_f0 != 0) {
            puVar13 = local_f8;
          }
          lVar23 = 0;
          do {
            uVar5 = ((uint)(0x19 < (ushort)puVar13[lVar23] - 0x61) * 0x20 +
                    (uint)(ushort)puVar13[lVar23]) - 0x20;
            uVar24 = uVar24 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar24 ^ uVar5) & 0xff) * 4);
            uVar24 = uVar24 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
            lVar23 = lVar23 + 1;
          } while (iVar15 != (int)lVar23);
        }
        uVar5 = (uint)((ulonglong)uStack_100 >> 0x10);
        uVar22 = (uint)uStack_100 & 0xffff;
        uVar9 = (uint)((ulonglong)local_108 >> 0x10);
        uVar17 = (uint)local_108 & 0xffff;
        uVar9 = ((uint)local_108 << 0x10 | uVar17) + (int)((ulonglong)local_108 >> 0x20) +
                (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar17 >> 4);
        uVar9 = (uVar9 >> 2) + 0x9e3779b9 +
                ((uint)uStack_100 << 0x10 | uVar22) + (int)((ulonglong)uStack_100 >> 0x20) +
                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar22 >> 4) + uVar9 * 0x40 ^ uVar9;
        uVar17 = uVar9 >> 0xd ^ -uVar9;
        uVar5 = uVar17 << 8 ^ (-0x61c88647 - uVar9) - uVar17;
        uVar22 = uVar5 >> 0xd ^ (uVar9 - uVar17) - uVar5;
        uVar17 = uVar22 >> 0xc ^ (uVar17 - uVar5) - uVar22;
        uVar9 = uVar17 << 0x10 ^ (uVar5 - uVar22) - uVar17;
        uVar5 = uVar9 >> 5 ^ (uVar22 - uVar17) - uVar9;
        uVar17 = uVar5 >> 3 ^ (uVar17 - uVar9) - uVar5;
        uVar9 = uVar17 << 10 ^ (uVar9 - uVar5) - uVar17;
        uVar5 = uVar24 >> 0xd ^ (uVar9 >> 0xf ^ uVar5 - (uVar17 + uVar9)) - uVar24;
        uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar24) - uVar5;
        uVar17 = uVar9 >> 0xd ^ (uVar24 - uVar5) - uVar9;
        uVar24 = uVar17 >> 0xc ^ (uVar5 - uVar9) - uVar17;
        uVar5 = uVar24 << 0x10 ^ (uVar9 - uVar17) - uVar24;
        uVar17 = uVar5 >> 5 ^ (uVar17 - uVar24) - uVar5;
        uVar9 = uVar17 >> 3 ^ (uVar24 - uVar5) - uVar17;
        uVar24 = uVar9 << 10 ^ (uVar5 - uVar17) - uVar9;
        iVar15 = FUN_1403af82c(&local_b8,uVar24 >> 0xf ^ uVar17 - (uVar9 + uVar24),&local_108);
      } while (iVar15 == -1);
      uVar24 = 0;
      iVar15 = local_d0 + -1;
      if (local_d0 == 0) {
        iVar15 = 0;
      }
      if (0 < iVar15) {
        puVar13 = &DAT_149dfb77a;
        if (local_d0 != 0) {
          puVar13 = local_d8;
        }
        lVar23 = 0;
        do {
          uVar5 = ((uint)(0x19 < (ushort)puVar13[lVar23] - 0x61) * 0x20 +
                  (uint)(ushort)puVar13[lVar23]) - 0x20;
          uVar24 = uVar24 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar24 ^ uVar5) & 0xff) * 4);
          uVar24 = uVar24 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
          lVar23 = lVar23 + 1;
        } while (iVar15 != (int)lVar23);
      }
      uVar5 = (uint)(CONCAT44(uStack_dc,uStack_e0) >> 0x10);
      uVar9 = (uint)(CONCAT44(uStack_e4,local_e8) >> 0x10);
      uVar9 = (local_e8 << 0x10 | local_e8 & 0xffff) + uStack_e4 + (uVar9 << 0x13 | uVar9 & 0xffff)
              + ((local_e8 & 0xffff) >> 4);
      uVar9 = (uVar9 >> 2) + 0x9e3779b9 +
              (uStack_e0 << 0x10 | uStack_e0 & 0xffff) + uStack_dc +
              (uVar5 << 0x13 | uVar5 & 0xffff) + ((uStack_e0 & 0xffff) >> 4) + uVar9 * 0x40 ^ uVar9;
      uVar17 = uVar9 >> 0xd ^ -uVar9;
      uVar5 = uVar17 << 8 ^ (-0x61c88647 - uVar9) - uVar17;
      uVar22 = uVar5 >> 0xd ^ (uVar9 - uVar17) - uVar5;
      uVar17 = uVar22 >> 0xc ^ (uVar17 - uVar5) - uVar22;
      uVar9 = uVar17 << 0x10 ^ (uVar5 - uVar22) - uVar17;
      uVar5 = uVar9 >> 5 ^ (uVar22 - uVar17) - uVar9;
      uVar17 = uVar5 >> 3 ^ (uVar17 - uVar9) - uVar5;
      uVar9 = uVar17 << 10 ^ (uVar9 - uVar5) - uVar17;
      uVar5 = uVar24 >> 0xd ^ (uVar9 >> 0xf ^ uVar5 - (uVar17 + uVar9)) - uVar24;
      uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar24) - uVar5;
      uVar17 = uVar9 >> 0xd ^ (uVar24 - uVar5) - uVar9;
      uVar24 = uVar17 >> 0xc ^ (uVar5 - uVar9) - uVar17;
      uVar5 = uVar24 << 0x10 ^ (uVar9 - uVar17) - uVar24;
      uVar17 = uVar5 >> 5 ^ (uVar17 - uVar24) - uVar5;
      uVar9 = uVar17 >> 3 ^ (uVar24 - uVar5) - uVar17;
      uVar24 = uVar9 << 10 ^ (uVar5 - uVar17) - uVar9;
      iVar6 = FUN_14587a5e6(plVar2,uVar24 >> 0xf ^ uVar17 - (uVar9 + uVar24),&local_e8);
      iVar15 = local_f0;
      puVar13 = local_f8;
      puVar8 = local_128;
      if (iVar6 == -1) {
        lVar23 = 0;
      }
      else {
        lVar23 = (longlong)iVar6 * 0x48 + *plVar2;
      }
      *(undefined4 *)(lVar23 + 0x20) = (undefined4)local_108;
      *(undefined4 *)(lVar23 + 0x24) = local_108._4_4_;
      *(undefined4 *)(lVar23 + 0x28) = (undefined4)uStack_100;
      *(undefined4 *)(lVar23 + 0x2c) = uStack_100._4_4_;
      ppuVar1 = (undefined2 **)(lVar23 + 0x30);
      if (ppuVar1 != &local_f8) {
        lVar7 = (longlong)local_f0;
        *(int *)(lVar23 + 0x38) = local_f0;
        if (local_f0 == 0 && *(int *)(lVar23 + 0x3c) == 0) {
          *(undefined4 *)(lVar23 + 0x3c) = 0;
        }
        else {
          FUN_1446dd670(ppuVar1,local_f0);
          if (iVar15 != 0) {
            memcpy(*ppuVar1,puVar13,lVar7 * 2);
          }
        }
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_144a1c8ac(&local_b8);
      uVar14 = local_110;
      lVar23 = local_118;
      uVar20 = local_120;
      if (local_f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = local_134 & ~(uint)uVar20;
      puVar21 = *(uint **)(lVar23 + 0x428);
      if (puVar21 == (uint *)0x0) {
        puVar21 = puVar8;
      }
      uVar24 = *(uint *)(lVar23 + 0x430);
      iVar6 = (int)uVar14;
      lVar23 = (longlong)iVar6;
      uVar5 = puVar21[lVar23] & uVar9;
      iVar15 = local_138;
      if (uVar5 == 0) {
        iVar10 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar10 = uVar24 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar15 = local_138 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar7 = 0;
          do {
            uVar5 = puVar21[lVar23 + lVar7 + 1];
            if (uVar5 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar7 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1411dfea1;
            }
            iVar15 = iVar15 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar11 - lVar23 != lVar7);
          uVar9 = 0xffffffff;
          iVar6 = iVar11;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        uVar20 = local_120;
        uVar5 = uVar24;
      }
      else {
LAB_1411dfea1:
        uVar20 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar20 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar5 = (iVar15 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)uVar24 <= (int)uVar5) {
          uVar5 = uVar24;
        }
      }
    } while (uVar5 != (uint)local_130);
  }
LAB_1411df4cb:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411dff02 FUN_1411dff02 body=99 status=ok
// SIG undefined FUN_1411dff02(void)

uint FUN_1411dff02(undefined8 param_1,int param_2,longlong param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1411dff66();
  if ((((param_3 != 0) && (plVar3 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_3,param_4), cVar1 != '\0')) {
    iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if ((uint)(iVar2 - param_2) <= param_4) {
      return iVar2 - param_2;
    }
    return param_4;
  }
  return 0;
}



// FUNCTION 1411dff66 FUN_1411dff66 body=397 status=ok
// SIG undefined FUN_1411dff66(void)

longlong * FUN_1411dff66(longlong param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  DWORD DVar8;
  undefined2 *puVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  DWORD local_4c;
  DWORD *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DVar1 = GetCurrentThreadId();
  local_4c = DVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    DVar6 = *(DWORD *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & DVar1) * 4);
    if (DVar6 != 0xffffffff) {
      lVar3 = *(longlong *)(param_1 + 0x48);
      DVar8 = DVar6;
      do {
        if (*(DWORD *)(lVar3 + (longlong)(int)DVar8 * 0x18) == DVar1) goto LAB_1411dffe7;
        DVar8 = *(DWORD *)(lVar3 + (longlong)(int)DVar8 * 0x18 + 0x10);
      } while (DVar8 != 0xffffffff);
    }
  }
  plVar4 = (longlong *)FUN_1400dbadc();
  plVar5 = (longlong *)*plVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_140e92164();
    *plVar4 = (longlong)plVar5;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x30);
  }
  local_58 = (longlong *)(**(code **)(*plVar5 + 0xe8))(plVar5,puVar9,0);
  if (local_58 != (longlong *)0x0) {
    local_48 = &local_4c;
    local_40 = &local_58;
    FUN_1411e00f4((longlong *)(param_1 + 0x48),local_34,&local_48,0);
  }
  goto LAB_1411e0003;
  while (DVar6 = pDVar7[4], DVar6 != 0xffffffff) {
LAB_1411dffe7:
    pDVar7 = (DWORD *)(lVar3 + (longlong)(int)DVar6 * 0x18);
    if (*pDVar7 == DVar1) goto LAB_1411dfffa;
  }
  pDVar7 = (DWORD *)0x0;
LAB_1411dfffa:
  local_58 = *(longlong **)(pDVar7 + 2);
LAB_1411e0003:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_58 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = local_58;
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar2 = (**(code **)(*local_58 + 0x50))(local_58);
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      plVar5 = local_58;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e00f4 FUN_1411e00f4 body=304 status=ok
// SIG undefined FUN_1411e00f4(void)

undefined4 *
FUN_1411e00f4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1411e02e6(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_1411e0226(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1411e04c2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e0226 FUN_1411e0226 body=191 status=ok
// SIG undefined FUN_1411e0226(void)

void FUN_1411e0226(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          puVar2 = *(undefined8 **)(piVar1 + 2);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489c1488(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[4];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1411e0254;
    }
  }
  uVar6 = 0;
LAB_1411e0254:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1411e02e6 FUN_1411e02e6 body=476 status=ok
// SIG undefined FUN_1411e02e6(void)

int * FUN_1411e02e6(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1411e04c2 FUN_1411e04c2 body=637 status=ok
// SIG undefined FUN_1411e04c2(void)

void FUN_1411e04c2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1411e0525;
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
  } while (uVar7 != uVar2);
LAB_1411e0525:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1411e0748 FUN_1411e0748 body=610 status=ok
// SIG undefined FUN_1411e0748(void)

undefined8 * FUN_1411e0748(undefined8 *param_1)

{
  void **ppvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d4f264();
  *param_1 = &PTR_FUN_14b693f90;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0x3005;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xf00000d0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0x3f800000;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3002;
  param_1[0xa9] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0x200000000;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xb4] = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xf00000d0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5d4) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0xf00000d0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0xf00000d0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0x3f800000;
  param_1[0xd2] = 0x3f00000000000000;
  *(undefined2 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0xc5daac38;
  param_1[0xd6] = 0;
  param_1[0xd9] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xd7) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x6bc) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = uVar4;
  param_1[0xda] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.InventoryAugment_Damage";
  local_30 = 0x27;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar5 = (int)uStack_40;
    lVar6 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar5 != 0) {
        memcpy(*ppvVar1,_Src,lVar6 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e09ac FUN_1411e09ac body=179 status=ok
// SIG undefined FUN_1411e09ac(void)

void FUN_1411e09ac(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*puVar1 == param_2) {
          iVar4 = *(int *)((longlong)plVar5 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          if (iVar4 == iVar3) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          }
          else {
            do {
              piVar6 = (int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
              iVar4 = *piVar6;
            } while (iVar4 != iVar3);
          }
          *piVar6 = (int)puVar1[2];
          FUN_1411e0a60(param_1,iVar3);
          return;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1411e0a60 FUN_1411e0a60 body=114 status=ok
// SIG undefined FUN_1411e0a60(void)

void FUN_1411e0a60(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 1411e0ad2 FUN_1411e0ad2 body=3919 status=ok
// SIG undefined FUN_1411e0ad2(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_1411e0ad2(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  double dVar17;
  double *pdVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  int iVar32;
  undefined8 *puVar33;
  int iVar34;
  undefined8 *puVar35;
  longlong lVar36;
  longlong lVar37;
  longlong *plVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined4 local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined2 *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  undefined8 *local_400;
  undefined1 *local_3f8;
  code *local_3f0;
  undefined1 local_3d9;
  longlong local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  double local_3c0;
  double local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_388;
  longlong lStack_380;
  undefined1 local_378;
  undefined4 local_370;
  undefined1 local_36c;
  longlong local_368;
  longlong lStack_360;
  undefined1 local_358;
  undefined1 local_350;
  longlong local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  uint local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  float fStack_8c;
  undefined4 local_80 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_458;
  FUN_140880c0c();
  lVar37 = *(longlong *)(param_1 + 0x38);
  if (lVar37 == 0) {
LAB_1411e15be:
    lVar37 = 0;
  }
  else {
    if (DAT_14cb5b388 == 0) {
      local_400 = &local_3a8;
      local_3a8 = FUN_141864c34;
      local_3f0 = FUN_14081d0ea;
      local_3f8 = &LAB_146431698;
      local_408 = &LAB_1486775cb;
      local_410 = &LAB_1464cee35;
      local_418 = &DAT_149e063b2;
      local_420 = 0;
      local_428 = 0x10000005;
      local_430 = 0x10;
      local_438 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(*(longlong *)(lVar37 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar37 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) goto LAB_1411e15be;
  }
  lVar15 = FUN_1403cba6c(*(undefined8 *)(param_1 + 0x38));
  uVar24 = 1;
  if (lVar15 == 0) goto LAB_1411e1156;
  lVar36 = *(longlong *)(lVar15 + 0xae8);
  if ((DAT_14c950c29 == 1) && (lVar36 != 0)) {
    FUN_1456cec3c(lVar36);
  }
  if ((lVar37 == 0) || (lVar36 == 0)) goto LAB_1411e1156;
  uVar19 = *(uint *)(lVar36 + 0xc);
  *(uint *)(param_1 + 0xe0) = uVar19;
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar36 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
  }
  else {
    lVar36 = 0;
  }
  iVar14 = *(int *)(lVar36 + 0x10);
  if (*(int *)(lVar36 + 0x10) == 0) {
    LOCK();
    iVar14 = DAT_14c964868 + 1;
    UNLOCK();
    iVar34 = DAT_14c964868 + 1;
    bVar41 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar14;
    if (bVar41) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar34);
    }
    LOCK();
    iVar14 = *(int *)(lVar36 + 0x10);
    bVar41 = iVar14 == 0;
    if (bVar41) {
      *(int *)(lVar36 + 0x10) = iVar34;
      iVar14 = 0;
    }
    UNLOCK();
    if (bVar41) {
      iVar14 = iVar34;
    }
  }
  *(int *)(param_1 + 0xe4) = iVar14;
  uVar19 = *(uint *)(lVar15 + 0xc);
  *(uint *)(param_1 + 0xe8) = uVar19;
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar36 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
  }
  else {
    lVar36 = 0;
  }
  iVar14 = *(int *)(lVar36 + 0x10);
  if (*(int *)(lVar36 + 0x10) == 0) {
    LOCK();
    iVar14 = DAT_14c964868 + 1;
    UNLOCK();
    iVar34 = DAT_14c964868 + 1;
    bVar41 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar14;
    if (bVar41) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar34);
    }
    LOCK();
    iVar14 = *(int *)(lVar36 + 0x10);
    bVar41 = iVar14 == 0;
    if (bVar41) {
      *(int *)(lVar36 + 0x10) = iVar34;
      iVar14 = 0;
    }
    UNLOCK();
    if (bVar41) {
      iVar14 = iVar34;
    }
  }
  *(int *)(param_1 + 0xec) = iVar14;
  uVar19 = *(uint *)(lVar37 + 0xc);
  *(uint *)(param_1 + 0xf0) = uVar19;
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar37 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
  }
  else {
    lVar37 = 0;
  }
  iVar14 = *(int *)(lVar37 + 0x10);
  if (*(int *)(lVar37 + 0x10) == 0) {
    LOCK();
    iVar14 = DAT_14c964868 + 1;
    UNLOCK();
    iVar34 = DAT_14c964868 + 1;
    bVar41 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar14;
    if (bVar41) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar34);
    }
    LOCK();
    iVar14 = *(int *)(lVar37 + 0x10);
    bVar41 = iVar14 == 0;
    if (bVar41) {
      *(int *)(lVar37 + 0x10) = iVar34;
      iVar14 = 0;
    }
    UNLOCK();
    if (bVar41) {
      iVar14 = iVar34;
    }
  }
  *(int *)(param_1 + 0xf4) = iVar14;
  lVar37 = FUN_14025708c(lVar15,DAT_14c9abbf0);
  if ((lVar37 == 0) || (*(char *)(lVar37 + 0x362) != '\x01')) goto LAB_1411e1156;
  lVar37 = *(longlong *)(lVar15 + 0xb0);
  if (lVar37 == 0) {
    lVar37 = FUN_1448abda6(lVar15);
  }
  if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0xb1) == '\x01') {
    lVar15 = param_1;
    cVar13 = FUN_1411e1a22(param_1,*(undefined4 *)(param_1 + 0x108));
    uVar24 = (undefined4)lVar15;
    if (cVar13 == '\0') {
      *(undefined4 *)(param_1 + 0x108) = 4;
      dVar17 = *(double *)(param_1 + 0x38);
      lVar15 = *(longlong *)((longlong)dVar17 + 0x1c8);
      if (lVar15 == 0) {
        local_98 = (longlong *)DAT_14c846508;
        local_a8 = (uint)DAT_14c8464f8;
        fStack_a4 = (float)DAT_14c8464f8._4_4_;
        uStack_a0 = (undefined4)DAT_14c846500;
        fStack_9c = (float)DAT_14c846500._4_4_;
      }
      else {
        pcVar8 = *(code **)(lVar15 + 0x240);
        plVar38 = *(longlong **)(lVar15 + 0x248);
        dVar9 = *(double *)(lVar15 + 0x250);
        dVar10 = *(double *)(lVar15 + 600);
        pdVar18 = *(double **)(lVar15 + 0x228);
        local_3a8 = pcVar8;
        uStack_3a0 = plVar38;
        local_398 = dVar9;
        uStack_390 = dVar10;
        if (pdVar18 == (double *)0x0) {
          uVar24 = 0x40;
          pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
          dVar17 = DAT_14c8463d8;
          *pdVar18 = DAT_14c8463d0;
          pdVar18[1] = dVar17;
          dVar17 = DAT_14c8463e8;
          pdVar18[2] = DAT_14c8463e0;
          pdVar18[3] = dVar17;
          dVar17 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar18[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(uint)DAT_14c8464f8);
          pdVar18[5] = dVar17;
          dVar17 = DAT_14c846508;
          pdVar18[6] = DAT_14c846508;
          *(double **)(lVar15 + 0x228) = pdVar18;
        }
        auVar6._8_4_ = (int)-(ulonglong)((double)plVar38 != pdVar18[1]);
        auVar6._0_8_ = -(ulonglong)((double)pcVar8 != *pdVar18);
        auVar6._12_4_ = (int)(-(ulonglong)((double)plVar38 != pdVar18[1]) >> 0x20);
        iVar14 = movmskpd(SUB84(dVar17,0),auVar6);
        auVar7._8_4_ = (int)-(ulonglong)(dVar10 != pdVar18[3]);
        auVar7._0_8_ = -(ulonglong)(dVar9 != pdVar18[2]);
        auVar7._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar18[3]) >> 0x20);
        uVar19 = movmskpd(uVar24,auVar7);
        if ((uVar19 & 0x3fffffff) != 0 || iVar14 != 0) {
          *(float *)(pdVar18 + 2) = (float)local_398;
          *(undefined4 *)((longlong)pdVar18 + 0x14) = local_398._4_4_;
          *(undefined4 *)(pdVar18 + 3) = (undefined4)uStack_390;
          *(undefined4 *)((longlong)pdVar18 + 0x1c) = uStack_390._4_4_;
          *(undefined4 *)pdVar18 = (undefined4)local_3a8;
          *(undefined4 *)((longlong)pdVar18 + 4) = local_3a8._4_4_;
          *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_3a0;
          *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_3a0._4_4_;
          FUN_1448052ee(&local_3a8,&local_a8);
          pdVar18[6] = (double)local_98;
          pdVar18[4] = (double)CONCAT44(fStack_a4,local_a8);
          pdVar18[5] = (double)CONCAT44(fStack_9c,uStack_a0);
        }
        local_98 = (longlong *)pdVar18[6];
        local_a8 = *(uint *)(pdVar18 + 4);
        fStack_a4 = (float)*(undefined4 *)((longlong)pdVar18 + 0x24);
        uStack_a0 = *(undefined4 *)(pdVar18 + 5);
        fStack_9c = (float)*(undefined4 *)((longlong)pdVar18 + 0x2c);
      }
      FUN_140d2943c(&local_a8,&local_3c0,param_1 + 0x110);
      fStack_a4 = (float)local_3c0;
      local_a8 = 0;
      fStack_9c = -fStack_a4;
      fStack_8c = -(float)local_3b8;
      uStack_a0 = 1;
      local_98 = (longlong *)CONCAT44((float)local_3b8,3);
      local_90 = 2;
      memset(&local_398,0,0x2f0);
      local_3a8 = (code *)&local_a8;
      uStack_3a0 = (longlong *)&local_90;
      local_398 = (double)CONCAT44(local_398._4_4_,2);
      plVar38 = &local_3a8;
      do {
        puVar21 = (undefined8 *)*plVar38;
        puVar22 = (undefined8 *)plVar38[1];
        iVar14 = (int)plVar38[2];
        iVar34 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 3);
        uVar19 = iVar34 + 1;
        puVar30 = puVar22;
        puVar39 = puVar21;
        if (iVar14 != 0) {
LAB_1411e12ef:
          puVar26 = puVar21;
          if (8 < (int)uVar19) {
            uVar5 = puVar26[uVar19 >> 1];
            puVar26[uVar19 >> 1] = *puVar26;
            *puVar26 = uVar5;
            puVar33 = puVar30 + 1;
            puVar21 = puVar26;
            do {
              puVar12 = puVar21 + 1;
              puVar31 = puVar21 + 1;
              do {
                puVar40 = puVar31;
                puVar21 = puVar12;
                if (puVar30 < puVar21) break;
                puVar12 = puVar21 + 1;
                puVar31 = puVar40 + 1;
              } while (*(float *)((longlong)puVar26 + 4) < *(float *)((longlong)puVar21 + 4) ||
                       *(float *)((longlong)puVar26 + 4) == *(float *)((longlong)puVar21 + 4));
              puVar12 = puVar33 + -2;
              do {
                puVar31 = puVar33;
                puVar35 = puVar12;
                puVar33 = puVar31 + -1;
                if (puVar33 <= puVar26) break;
                puVar12 = puVar35 + -1;
              } while (*(float *)((longlong)puVar31 + -4) < *(float *)((longlong)puVar26 + 4) ||
                       *(float *)((longlong)puVar31 + -4) == *(float *)((longlong)puVar26 + 4));
              if (puVar33 < puVar21) goto LAB_1411e1870;
              uVar5 = *puVar21;
              *puVar21 = *puVar33;
              *puVar33 = uVar5;
            } while( true );
          }
          for (; puVar21 = puVar26, puVar22 = puVar26, puVar26 < puVar30; puVar30 = puVar30 + -1) {
            while (puVar39 = puVar21, puVar21 = puVar22 + 1, puVar21 <= puVar30) {
              pfVar1 = (float *)((longlong)puVar22 + 0xc);
              puVar22 = puVar21;
              if (*(float *)((longlong)puVar39 + 4) < *pfVar1 ||
                  *(float *)((longlong)puVar39 + 4) == *pfVar1) {
                puVar21 = puVar39;
              }
            }
            uVar5 = *puVar39;
            *puVar39 = *puVar30;
            *puVar30 = uVar5;
          }
          goto LAB_1411e1346;
        }
LAB_1411e16a3:
        if (uVar19 != 0) {
          iVar14 = (iVar34 - (iVar34 + -1 >> 0x1f)) + -1 >> 1;
          iVar34 = iVar14;
joined_r0x0001411e16ca:
          do {
            iVar29 = iVar14 * 2 + 1;
            if (iVar29 < (int)uVar19) {
              iVar32 = iVar14 * 2 + 2;
              if ((iVar32 < (int)uVar19) &&
                 (fVar3 = *(float *)((longlong)puVar21 + (longlong)iVar32 * 8 + 4),
                 pfVar1 = (float *)((longlong)puVar21 + (longlong)iVar29 * 8 + 4),
                 fVar3 < *pfVar1 || fVar3 == *pfVar1)) {
                iVar29 = iVar32;
              }
              lVar36 = (longlong)iVar14;
              lVar15 = (longlong)iVar29;
              fVar3 = *(float *)((longlong)puVar21 + lVar36 * 8 + 4);
              pfVar1 = (float *)((longlong)puVar21 + lVar15 * 8 + 4);
              if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
                uVar5 = puVar21[lVar36];
                puVar21[lVar36] = puVar21[lVar15];
                puVar21[lVar15] = uVar5;
                iVar14 = iVar29;
                goto joined_r0x0001411e16ca;
              }
            }
            bVar41 = iVar34 != 0;
            iVar14 = iVar34 + -1;
            iVar34 = iVar14;
          } while (bVar41);
          if (1 < (int)uVar19) {
            uVar27 = (ulonglong)uVar19;
            uVar5 = *puVar21;
            *puVar21 = puVar21[uVar27 - 1];
            puVar21[uVar27 - 1] = uVar5;
            if (uVar19 != 2) {
              do {
                uVar28 = uVar27 - 1;
                iVar14 = 0;
                iVar29 = 1;
                iVar34 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar32 = iVar29;
                  if (((longlong)iVar14 < (longlong)uVar28) &&
                     (fVar3 = *(float *)((longlong)puVar21 + (longlong)iVar14 * 8 + 4),
                     pfVar1 = (float *)((longlong)puVar21 + (longlong)iVar29 * 8 + 4),
                     fVar3 < *pfVar1 || fVar3 == *pfVar1)) {
                    iVar32 = iVar14;
                  }
                  lVar15 = (longlong)iVar34;
                  lVar36 = (longlong)iVar32;
                  fVar3 = *(float *)((longlong)puVar21 + lVar15 * 8 + 4);
                  pfVar1 = (float *)((longlong)puVar21 + lVar36 * 8 + 4);
                  if (fVar3 < *pfVar1 || fVar3 == *pfVar1) break;
                  uVar5 = puVar21[lVar15];
                  puVar21[lVar15] = puVar21[lVar36];
                  puVar21[lVar36] = uVar5;
                  iVar14 = iVar32 * 2;
                  iVar29 = iVar32 * 2 + 1;
                  iVar34 = iVar32;
                } while ((longlong)iVar29 < (longlong)uVar28);
                uVar5 = *puVar21;
                *puVar21 = puVar21[uVar27 - 2];
                puVar21[uVar27 - 2] = uVar5;
                uVar27 = uVar28;
              } while (2 < uVar28);
            }
          }
        }
LAB_1411e1346:
        plVar38 = plVar38 + -3;
      } while (&local_3a8 <= plVar38);
      lVar15 = 0;
      do {
        cVar13 = FUN_1411e1a22(param_1,(&local_a8)[lVar15 * 2]);
        if (cVar13 != '\0') {
          *(uint *)(param_1 + 0x108) = (&local_a8)[lVar15 * 2];
          break;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 4);
    }
  }
  uVar24 = 1;
  if ((longlong)*(int *)(param_1 + 0x108) == 4) {
LAB_1411e1143:
    uVar23 = uVar24;
    FUN_1411e1e9a(param_1,0);
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0xd8) + (longlong)*(int *)(param_1 + 0x108) * 0x150;
    plVar38 = (longlong *)(lVar15 + 0xb8);
    local_3d9 = *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0xb0);
    local_3d0 = (longlong *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = 0;
    local_3c8 = lVar37;
    if (*(int *)(param_1 + 0x104) < 0) {
      FUN_14583a3a2(local_3d0);
    }
    FUN_1403dcede(plVar38);
    lVar37 = (longlong)*(int *)(lVar15 + 0xc0);
    if (lVar37 != 0) {
      lVar15 = *plVar38;
      lVar37 = lVar37 * 0xf0;
      do {
        plVar38 = *(longlong **)(param_1 + 0x98);
        plVar16 = (longlong *)(**(code **)(*plVar38 + 0x58))(plVar38,lVar15 + 4);
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)FUN_140312a30(plVar38,lVar15 + 4);
        }
        plVar38 = *(longlong **)(lVar15 + 0x18);
        plVar11 = plVar16;
        if (plVar38 == (longlong *)0x0) {
          if (plVar16 != (longlong *)0x0) {
            plVar38 = (longlong *)FUN_1404dcd0c(plVar16 + 0x251,lVar15 + 0x10);
            plVar11 = plVar38;
            goto joined_r0x0001411e0dd3;
          }
        }
        else {
joined_r0x0001411e0dd3:
          if (plVar11 != (longlong *)0x0) {
            lVar36 = plVar16[0x15d];
            if ((DAT_14c950c29 == 1) && (lVar36 != 0)) {
              FUN_1456cec3c();
            }
            else if (lVar36 == 0) goto LAB_1411e0da3;
            uStack_3a0 = (longlong *)0x0;
            local_398 = 5.26354424712089e-315;
            uStack_390 = (double)CONCAT35(uStack_390._5_3_,0x3dcccccd);
            local_378 = 0;
            local_388 = 0;
            lStack_380 = 0;
            local_370 = 0x3dcccccd;
            local_36c = 0;
            local_358 = 0;
            local_368 = 0;
            lStack_360 = 0;
            local_350 = 0;
            local_348 = 0;
            local_330 = DAT_14c8464f0;
            local_340 = (undefined4)DAT_14c8464e0;
            uStack_33c = DAT_14c8464e0._4_4_;
            uStack_338 = (undefined4)DAT_14c8464e8;
            uStack_334 = DAT_14c8464e8._4_4_;
            local_3a8 = *(code **)(lVar15 + 0x28);
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(plVar38);
            }
            local_a8 = local_a8 & 0xffffff00;
            local_80[0] = 0;
            uStack_3a0 = plVar38;
            FUN_1456bb102(&local_a8,*(undefined8 *)(param_1 + 0x38));
            uVar24 = FUN_140bb540c(lVar15,&local_a8);
            local_398 = (double)CONCAT44(local_398._4_4_,uVar24);
            FUN_1448173f8(local_80);
            if ((local_a8._0_1_ == (code)0x3) && (local_98 != (longlong *)0x0)) {
              LOCK();
              piVar2 = (int *)((longlong)local_98 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_98 + 0x10))();
              }
            }
            uStack_390 = (double)CONCAT44(CONCAT31(uStack_390._5_3_,*(undefined1 *)(lVar15 + 0x34)),
                                          *(undefined4 *)(lVar15 + 0x30));
            lVar20 = *(longlong *)(lVar15 + 0x38);
            if (DAT_14c950c29 == 1) {
              if (lVar20 == 0) {
                lVar20 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar20 = *(longlong *)(lVar15 + 0x38);
              }
            }
            lVar25 = *(longlong *)(lVar15 + 0x40);
            local_388 = lVar20;
            if ((DAT_14c950c29 & 1) != 0) {
              if (lVar25 == 0) {
                lVar25 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar25 = *(longlong *)(lVar15 + 0x40);
              }
            }
            local_378 = *(undefined1 *)(lVar15 + 0x48);
            local_36c = *(undefined1 *)(lVar15 + 0x54);
            local_370 = *(undefined4 *)(lVar15 + 0x50);
            lVar20 = *(longlong *)(lVar15 + 0x58);
            lStack_380 = lVar25;
            if ((DAT_14c950c29 & 1) != 0) {
              if (lVar20 == 0) {
                lVar20 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar20 = *(longlong *)(lVar15 + 0x58);
              }
            }
            lVar25 = *(longlong *)(lVar15 + 0x60);
            local_368 = lVar20;
            if ((DAT_14c950c29 & 1) != 0) {
              if (lVar25 == 0) {
                lVar25 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar25 = *(longlong *)(lVar15 + 0x60);
              }
            }
            local_358 = *(undefined1 *)(lVar15 + 0x68);
            local_350 = local_3d9;
            local_a8 = local_a8 & 0xffffff00;
            local_80[0] = 0;
            lStack_360 = lVar25;
            FUN_1456bb102(&local_a8,*(undefined8 *)(param_1 + 0x38));
            uVar24 = FUN_1411e1adc(lVar15,&local_a8);
            local_398 = (double)CONCAT44(uVar24,(float)local_398);
            FUN_1448173f8(local_80);
            if ((local_a8._0_1_ == (code)0x3) && (local_98 != (longlong *)0x0)) {
              LOCK();
              piVar2 = (int *)((longlong)local_98 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_98 + 0x10))();
              }
            }
            lVar20 = local_348;
            if (*(char *)(lVar15 + 0xe0) == '\x01') {
              FUN_1411e1c16(plVar16,&local_a8);
              lVar20 = CONCAT44(fStack_a4,local_a8);
              if (DAT_14c950c29 == 1) {
                if (lVar20 == 0) {
                  lVar20 = 0;
                }
                else {
                  FUN_1456cec3c(lVar20);
                }
              }
            }
            local_348 = lVar20;
            FUN_140657bfa(lVar36,&local_3a8);
            fVar3 = *(float *)(param_1 + 0x130);
            fVar42 = (float)(**(code **)(*plVar38 + 0x2b0))(plVar38);
            fVar43 = fVar42 * (float)local_398;
            if (fVar42 * (float)local_398 <= fVar3) {
              fVar43 = fVar3;
            }
            *(float *)(param_1 + 0x130) = fVar43;
            lVar20 = *(longlong *)(lVar15 + 0x28);
            uVar19 = *(uint *)((longlong)plVar38 + 0xc);
            if ((int)uVar19 < DAT_14c9647dc) {
              lVar25 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
            }
            else {
              lVar25 = 0;
            }
            iVar14 = *(int *)(lVar25 + 0x10);
            if (*(int *)(lVar25 + 0x10) == 0) {
              LOCK();
              iVar14 = DAT_14c964868 + 1;
              UNLOCK();
              iVar34 = DAT_14c964868 + 1;
              bVar41 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar14;
              if (bVar41) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar34);
              }
              LOCK();
              iVar14 = *(int *)(lVar25 + 0x10);
              bVar41 = iVar14 == 0;
              if (bVar41) {
                *(int *)(lVar25 + 0x10) = iVar34;
                iVar14 = 0;
              }
              UNLOCK();
              if (bVar41) {
                iVar14 = iVar34;
              }
            }
            uVar4 = *(uint *)(lVar36 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar36 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar36 = 0;
            }
            iVar34 = *(int *)(lVar36 + 0x10);
            if (*(int *)(lVar36 + 0x10) == 0) {
              LOCK();
              iVar34 = DAT_14c964868 + 1;
              UNLOCK();
              iVar29 = DAT_14c964868 + 1;
              bVar41 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar34;
              if (bVar41) {
                local_3d8 = lVar20;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
                lVar20 = local_3d8;
              }
              LOCK();
              iVar34 = *(int *)(lVar36 + 0x10);
              bVar41 = iVar34 == 0;
              if (bVar41) {
                *(int *)(lVar36 + 0x10) = iVar29;
                iVar34 = 0;
              }
              UNLOCK();
              if (bVar41) {
                iVar34 = iVar29;
              }
            }
            iVar29 = *(int *)(param_1 + 0x100);
            lVar36 = (longlong)iVar29;
            *(uint *)(param_1 + 0x100) = iVar29 + 1U;
            if (*(uint *)(param_1 + 0x104) < iVar29 + 1U) {
              local_3d8 = param_1;
              FUN_1411e1d28(local_3d0,iVar29);
              param_1 = local_3d8;
            }
            lVar25 = *local_3d0;
            *(longlong *)(lVar25 + lVar36 * 0x18) = lVar20;
            *(uint *)(lVar25 + 8 + lVar36 * 0x18) = uVar19;
            *(int *)(lVar25 + 0xc + lVar36 * 0x18) = iVar14;
            *(uint *)(lVar25 + 0x10 + lVar36 * 0x18) = uVar4;
            *(int *)(lVar25 + 0x14 + lVar36 * 0x18) = iVar34;
          }
        }
LAB_1411e0da3:
        lVar15 = lVar15 + 0xf0;
        lVar37 = lVar37 + -0xf0;
      } while (lVar37 != 0);
    }
    *(float *)(param_1 + 0x134) = (float)*(double *)(local_3c8 + 0x6d0);
    uVar24 = 1;
    if (*(int *)(param_1 + 0x100) < 1) goto LAB_1411e1143;
    uVar23 = 0;
    uVar24 = 0;
    if (*(int *)(*(longlong *)(param_1 + 0xd8) + 0x98) != 2) goto LAB_1411e1143;
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar23;
  uVar24 = 0;
LAB_1411e1156:
  if ((local_70 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24;
LAB_1411e1870:
  uVar5 = *puVar26;
  *puVar26 = *puVar33;
  *puVar33 = uVar5;
  iVar14 = iVar14 + -1;
  puVar31 = puVar31 + -2;
  if ((longlong)puVar35 - (longlong)puVar39 < (longlong)puVar22 - (longlong)puVar40) {
    if (puVar21 < puVar30) {
      *plVar38 = (longlong)puVar21;
      plVar38[1] = (longlong)puVar30;
      *(int *)(plVar38 + 2) = iVar14;
      plVar38 = plVar38 + 3;
    }
    puVar21 = puVar26;
    puVar22 = puVar35;
    if (puVar33 <= puVar26 + 1) goto LAB_1411e1346;
  }
  else {
    if (puVar26 + 1 < puVar33) {
      *plVar38 = (longlong)puVar26;
      plVar38[1] = (longlong)puVar31;
      *(int *)(plVar38 + 2) = iVar14;
      plVar38 = plVar38 + 3;
    }
    puVar26 = puVar40;
    puVar31 = puVar30;
    puVar22 = puVar30;
    if (puVar30 <= puVar21) goto LAB_1411e1346;
  }
  iVar34 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar26) >> 3);
  uVar19 = iVar34 + 1;
  puVar30 = puVar31;
  puVar39 = puVar26;
  if (iVar14 == 0) goto LAB_1411e16a3;
  goto LAB_1411e12ef;
}



// FUNCTION 1411e1a22 FUN_1411e1a22 body=185 status=ok
// SIG undefined FUN_1411e1a22(void)

ulonglong FUN_1411e1a22(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xd8);
  lVar2 = lVar5 + (longlong)param_2 * 0x150;
  FUN_1403dcede(lVar2 + 0xb8);
  lVar2 = (longlong)*(int *)(lVar2 + 0xc0);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0xf0;
    lVar5 = *(longlong *)(lVar5 + 0xb8 + (longlong)param_2 * 0x150) + 0x10;
    do {
      plVar1 = *(longlong **)(param_1 + 0x98);
      lVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,lVar5 + -0xc);
      if (lVar3 == 0) {
        lVar3 = FUN_140312a30(plVar1,lVar5 + -0xc);
      }
      uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      if (*(longlong *)(lVar5 + 8) != 0) goto LAB_1411e1acd;
      if (lVar3 != 0) {
        lVar3 = FUN_1404dcd0c(lVar3 + 0x1288,lVar5);
        if (lVar3 != 0) goto LAB_1411e1acd;
      }
      lVar5 = lVar5 + 0xf0;
      lVar2 = lVar2 + -0xf0;
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_1411e1acd:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1411e1adc FUN_1411e1adc body=312 status=ok
// SIG undefined FUN_1411e1adc(void)

undefined4 FUN_1411e1adc(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_80;
  FUN_1447c3578(param_1 + 0xa8,puVar3,param_2);
  if (local_60 == 3) {
    uVar2 = 3;
    uVar5 = local_80;
  }
  else {
    puVar4 = &local_58;
    FUN_1400b56fe(puVar4,&local_80,3);
    uVar5 = 0;
    if (local_38 != 0) {
      uVar5 = local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar4 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar2 = (uint)local_60;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar3 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e1c16 FUN_1411e1c16 body=273 status=ok
// SIG undefined FUN_1411e1c16(void)

longlong * FUN_1411e1c16(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_1411e1ce5;
    if (plVar3 == (longlong *)0x0) goto LAB_1411e1cdc;
LAB_1411e1cb1:
    bVar1 = DAT_14c950c29 & plVar3 != (longlong *)0x0;
joined_r0x0001411e1d14:
    if (bVar1 != 0) {
      FUN_1456cec3c(plVar3);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_1411e1ce5:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_1411e1cb1;
    }
    bVar1 = DAT_14c950c29 & 1;
    goto joined_r0x0001411e1d14;
  }
  lVar2 = (**(code **)(*plVar3 + 0x3f8))(plVar3);
  if (lVar2 == 0) {
LAB_1411e1cdc:
    *param_2 = 0;
    return param_2;
  }
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) == 0) goto LAB_1411e1c66;
  }
  else if (DAT_14c950c29 != 1) goto LAB_1411e1c66;
  FUN_1456cec3c(plVar3);
LAB_1411e1c66:
  lVar2 = (**(code **)(*plVar3 + 0x3f8))(plVar3);
  lVar2 = *(longlong *)(lVar2 + 0x488);
  *param_2 = lVar2;
  if (DAT_14c950c29 != 1) {
    return param_2;
  }
  if (lVar2 == 0) {
    return param_2;
  }
  FUN_1456cec3c();
  return param_2;
}



// FUNCTION 1411e1d28 FUN_1411e1d28 body=370 status=ok
// SIG undefined FUN_1411e1d28(void)

void FUN_1411e1d28(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411e1db1;
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
LAB_1411e1db1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1411e1e9a FUN_1411e1e9a body=998 status=ok
// SIG undefined FUN_1411e1e9a(void)

void FUN_1411e1e9a(longlong param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined1 local_6c;
  undefined1 local_64;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined1 local_5b;
  char local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  ulonglong local_54;
  undefined8 uStack_4c;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(int *)(param_1 + 0xec) == 0) || (uVar1 = *(uint *)(param_1 + 0xe8), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411e2117;
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(param_1 + 0xec))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
      (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)))) goto LAB_1411e2117;
  lVar4 = FUN_14025708c(plVar6,DAT_14c9abbf0);
  if (lVar4 == 0) goto LAB_1411e2117;
  if (plVar6[0x16] == 0) {
    FUN_1448abda6(plVar6);
  }
  *(undefined1 *)(lVar4 + 0x360) = 1;
  local_6c = 0;
  local_64 = 0;
  local_5f = 0;
  local_5b = 0;
  local_54 = 0xffffffff;
  uStack_4c = 0xffffffff;
  local_44._0_2_ = (ushort)(byte)local_44;
  local_44 = local_44 & 0xffffff;
  local_5e = 0x101;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  local_5a = *(char *)(lVar5 + 0x5f8);
  local_59 = 1;
  local_57 = (undefined1 *)(lVar5 + 0x5f9) != &local_58;
  if ((bool)local_57) {
    local_58 = *(undefined1 *)(lVar5 + 0x5f9);
  }
  if ((local_5a == '\0') && (*(char *)(lVar5 + 0x5fa) == '\x01')) {
    FUN_14583a3d2(&local_78);
    FUN_14583a492(plVar6 + 0xb3,*(undefined8 *)(param_1 + 0xd8),local_78);
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  if (*(char *)(lVar5 + 0x5fb) == '\x01') {
    *(undefined1 *)(lVar4 + 0x17a) = 1;
    *(undefined4 *)(lVar4 + 0x17c) = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x5fc);
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  if (*(char *)(lVar5 + 0x600) == '\x01') {
    *(undefined1 *)(lVar4 + 0x180) = 1;
    *(undefined4 *)(lVar4 + 0x184) = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x604);
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar2 = *(int *)(lVar5 + 0x98);
  if (iVar2 == 2) {
    cVar3 = FUN_14071817c(param_1);
    if (cVar3 == '\0') {
      puVar8 = &local_80;
      FUN_14079976a(puVar8);
    }
    else {
      puVar8 = &DAT_14c9ab764;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9ab76c) {
        FUN_144b3d300(&DAT_14c9ab76c);
        if (DAT_14c9ab76c == -1) {
          puVar8 = &DAT_14c9ab764;
          FUN_1446f470e(&DAT_14c9ab764,L"Animated Death",1);
          _Init_thread_footer(&DAT_14c9ab76c);
        }
      }
    }
    local_80 = *puVar8;
    local_54 = local_80 & 0xffffffff00000000;
    local_44 = 0x1000101;
  }
  else {
    if (iVar2 == 0) {
      FUN_14079848a(&local_80);
    }
    else {
      if (iVar2 != 1) {
        local_80 = 0;
        local_54 = 0;
        goto LAB_1411e204f;
      }
      FUN_140798502(&local_80);
    }
    local_54 = local_80 & 0xffffffff00000000;
  }
LAB_1411e204f:
  local_54 = local_80 & 0xffffffff | local_54;
  if (*(int *)(param_1 + 0x100) == 1) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0xc);
    if (((((iVar2 != 0) && (uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf8) + 8), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar2)))) &&
       ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar7;
      }
      else {
        lVar4 = 0;
      }
      uStack_4c = *(undefined8 *)(lVar4 + 0x18);
    }
  }
  (**(code **)(*plVar6 + 0xd78))(plVar6,&DAT_14cb8cf30,local_70);
  if (param_2 < 1e-08) {
    local_88 = *(undefined8 *)(param_1 + 0x120);
    local_98 = *(undefined4 *)(param_1 + 0x110);
    uStack_94 = *(undefined4 *)(param_1 + 0x114);
    uStack_90 = *(undefined4 *)(param_1 + 0x118);
    uStack_8c = *(undefined4 *)(param_1 + 0x11c);
    (**(code **)(*plVar6 + 0x6d0))(plVar6,&local_98,*(undefined8 *)(param_1 + 0x128),0);
  }
LAB_1411e2117:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e2282 FUN_1411e2282 body=1478 status=ok
// SIG undefined FUN_1411e2282(void)

undefined4 * FUN_1411e2282(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar2 = param_2[4];
  pvVar3 = *(void **)(param_2 + 2);
  param_1[4] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy(*(void **)(param_1 + 2),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar2 = param_2[8];
  pvVar3 = *(void **)(param_2 + 6);
  param_1[8] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar2,0);
    memcpy(*(void **)(param_1 + 6),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar2 = param_2[0x10];
  pvVar3 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar2,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar2 = param_2[0x14];
  pvVar3 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar2,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar2 = param_2[0x18];
  pvVar3 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar2,0);
    memcpy(*(void **)(param_1 + 0x16),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar2 = param_2[0x1c];
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  param_1[0x1c] = iVar2;
  if (iVar2 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x1a,iVar2,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x1a),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar2 = param_2[0x20];
  pvVar3 = *(void **)(param_2 + 0x1e);
  param_1[0x20] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar2,0);
    memcpy(*(void **)(param_1 + 0x1e),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar2 = param_2[0x24];
  pvVar3 = *(void **)(param_2 + 0x22);
  param_1[0x24] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x25] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x22,iVar2,0);
    memcpy(*(void **)(param_1 + 0x22),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar2 = param_2[0x28];
  pvVar3 = *(void **)(param_2 + 0x26);
  param_1[0x28] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x29] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x26,iVar2,0);
    memcpy(*(void **)(param_1 + 0x26),pvVar3,(longlong)iVar2 * 2);
  }
  cVar1 = *(char *)(param_2 + 0x34);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2c) = 0;
    iVar2 = param_2[0x2e];
    pvVar3 = *(void **)(param_2 + 0x2c);
    param_1[0x2e] = iVar2;
    if ((longlong)iVar2 == 0) {
      param_1[0x2f] = 0;
    }
    else {
      FUN_1411e2848(param_1 + 0x2c,iVar2,0);
      memcpy(*(void **)(param_1 + 0x2c),pvVar3,(longlong)iVar2 << 3);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    iVar2 = param_2[0x32];
    pvVar3 = *(void **)(param_2 + 0x30);
    param_1[0x32] = iVar2;
    if ((longlong)iVar2 == 0) {
      param_1[0x33] = 0;
    }
    else {
      FUN_1411e2848(param_1 + 0x30,iVar2,0);
      memcpy(*(void **)(param_1 + 0x30),pvVar3,(longlong)iVar2 << 3);
    }
  }
  cVar1 = *(char *)((longlong)param_2 + 0xd9);
  *(char *)((longlong)param_1 + 0xd9) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  }
  *(undefined1 *)((longlong)param_1 + 0xda) = *(undefined1 *)((longlong)param_2 + 0xda);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar2 = param_2[0x3a];
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  param_1[0x3a] = iVar2;
  if (iVar2 == 0) {
    param_1[0x3b] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x38,iVar2,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x38),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x3c) = 0;
  iVar2 = param_2[0x3e];
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x3e] = iVar2;
  if (iVar2 == 0) {
    param_1[0x3f] = 0;
  }
  else {
    FUN_1411e29ba(param_1 + 0x3c,iVar2,0);
    FUN_1411e2985(*(undefined8 *)(param_1 + 0x3c),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar2 = param_2[0x42];
  pvVar3 = *(void **)(param_2 + 0x40);
  param_1[0x42] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x43] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x40,iVar2,0);
    memcpy(*(void **)(param_1 + 0x40),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x44) = 0;
  iVar2 = param_2[0x46];
  pvVar3 = *(void **)(param_2 + 0x44);
  param_1[0x46] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x47] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x44,iVar2,0);
    memcpy(*(void **)(param_1 + 0x44),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = 0;
  iVar2 = param_2[0x4c];
  pvVar3 = *(void **)(param_2 + 0x4a);
  param_1[0x4c] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x4d] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x4a,iVar2,0);
    memcpy(*(void **)(param_1 + 0x4a),pvVar3,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1411e2848 FUN_1411e2848 body=317 status=ok
// SIG undefined FUN_1411e2848(void)

void FUN_1411e2848(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411e28b6;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1411e28b6:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1411e2985 FUN_1411e2985 body=52 status=ok
// SIG undefined FUN_1411e2985(void)

void FUN_1411e2985(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1411e2a92(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1411e29ba FUN_1411e29ba body=216 status=ok
// SIG undefined FUN_1411e29ba(void)

void FUN_1411e29ba(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
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
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1411e2a92 FUN_1411e2a92 body=303 status=ok
// SIG undefined FUN_1411e2a92(void)

undefined8 * FUN_1411e2a92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar3 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1411e2bc2(param_1 + 6,iVar1,0);
    FUN_1411e2c9a(param_1[6],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1411e2bc2 FUN_1411e2bc2 body=216 status=ok
// SIG undefined FUN_1411e2bc2(void)

void FUN_1411e2bc2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
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
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1411e2c9a FUN_1411e2c9a body=291 status=ok
// SIG undefined FUN_1411e2c9a(void)

void FUN_1411e2c9a(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x30);
    piVar6 = (int *)(param_2 + 0x38);
    do {
      puVar5[-6] = 0;
      iVar1 = piVar6[-0xc];
      pvVar2 = *(void **)(piVar6 + -0xe);
      *(int *)(puVar5 + -5) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + -0x24) = 0;
      }
      else {
        FUN_1446dd670(puVar5 + -6,iVar1,0);
        memcpy((void *)puVar5[-6],pvVar2,(longlong)iVar1 * 2);
      }
      puVar5[-4] = 0;
      iVar1 = piVar6[-8];
      pvVar2 = *(void **)(piVar6 + -10);
      *(int *)(puVar5 + -3) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + -0x14) = 0;
      }
      else {
        FUN_1446dd670(puVar5 + -4,iVar1,0);
        memcpy((void *)puVar5[-4],pvVar2,(longlong)iVar1 * 2);
      }
      iVar1 = piVar6[-5];
      iVar3 = piVar6[-4];
      iVar4 = piVar6[-3];
      *(int *)(puVar5 + -2) = piVar6[-6];
      *(int *)((longlong)puVar5 + -0xc) = iVar1;
      *(int *)(puVar5 + -1) = iVar3;
      *(int *)((longlong)puVar5 + -4) = iVar4;
      *puVar5 = 0;
      iVar1 = *piVar6;
      pvVar2 = *(void **)(piVar6 + -2);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,pvVar2,(longlong)iVar1 * 2);
      }
      puVar5 = puVar5 + 8;
      piVar6 = piVar6 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1411e2dbe FUN_1411e2dbe body=104 status=ok
// SIG undefined FUN_1411e2dbe(void)

void FUN_1411e2dbe(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1411e2e26 FUN_1411e2e26 body=479 status=ok
// SIG undefined FUN_1411e2e26(void)

void FUN_1411e2e26(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x88;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = lVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar15 = 1;
    local_70._0_4_ = 0xffffffff;
    iVar10 = 0;
    local_70._4_4_ = 0;
    local_80._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    uVar15 = local_80 >> 0x20;
    iVar10 = *(int *)(param_1 + 0xa0);
  }
  lVar5 = local_78;
  iVar8 = (int)local_80;
  uVar6 = (uint)local_70;
  iVar7 = local_70._4_4_;
  iVar9 = local_68;
  if (local_70._4_4_ != iVar10 || local_78 != lVar1) {
    do {
      FUN_1411e3006(*(longlong *)(param_1 + 0x78) + (longlong)iVar7 * 0x180 + 0x10,param_2);
      uVar6 = ~(uint)uVar15 & uVar6;
      lVar14 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar14 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar12 = (longlong)iVar8;
      uVar11 = *(uint *)(lVar14 + lVar12 * 4) & uVar6;
      if (uVar11 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar11 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
            if (uVar11 != 0) {
              iVar8 = iVar8 + (int)lVar13 + 1;
              uVar6 = 0xffffffff;
              goto LAB_1411e2f56;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar4 - lVar12 != lVar13);
          uVar6 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_1411e2f56:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar10 || lVar5 != lVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411e3006 FUN_1411e3006 body=108 status=ok
// SIG undefined FUN_1411e3006(void)

void FUN_1411e3006(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  if (((*(int *)(param_1 + 0xe0) != 0) && (uVar1 = *(uint *)(param_1 + 0xdc), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xe0))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      *(undefined4 *)(lVar2 + 0x3a8) = param_2;
      FUN_1411e3072();
      return;
    }
  }
  return;
}



// FUNCTION 1411e3072 FUN_1411e3072 body=4501 status=ok
// SIG undefined FUN_1411e3072(void)

void FUN_1411e3072(longlong param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  char cVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined2 *puStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined2 *puStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined2 *puStack_e0;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(byte *)(param_1 + 0x65) & 0x18) != 0x10) goto LAB_1411e3c66;
  local_e8 = 0;
  puStack_e0 = (undefined2 *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0;
  local_108 = 0;
  local_118 = 0;
  puStack_110 = (undefined2 *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  local_148 = 0;
  puStack_140 = (undefined2 *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  iVar7 = *(int *)(param_1 + 0x3a4);
  if (iVar7 == 0) {
    fVar18 = 0.0;
LAB_1411e32a4:
    uStack_f0 = 0;
    local_f8 = 0;
    local_e8 = 0;
    bVar16 = (longlong)local_d8 < 0;
    local_d8 = local_d8 & 0xffffffff00000000;
    if (bVar16) {
      FUN_1446f8c06(&puStack_e0,0);
    }
    if (puStack_e0 != (undefined2 *)0x0) {
      *puStack_e0 = 0;
    }
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    bVar16 = (longlong)local_108 < 0;
    local_108 = local_108 & 0xffffffff00000000;
    if (bVar16) {
      FUN_1446f8c06(&puStack_110,0);
    }
    if (puStack_110 != (undefined2 *)0x0) {
      *puStack_110 = 0;
    }
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    bVar16 = (longlong)local_138 < 0;
    local_138 = local_138 & 0xffffffff00000000;
    if (bVar16) {
      FUN_1446f8c06(&puStack_140,0);
    }
    if (puStack_140 != (undefined2 *)0x0) {
      *puStack_140 = 0;
    }
    lVar9 = 0;
    cVar14 = '\0';
    cVar6 = '\0';
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x3a0);
    fVar18 = 0.0;
    if (((((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) &&
         (puVar12 = (undefined8 *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         puVar12 != (undefined8 *)0x0)) &&
        ((*(int *)(puVar12 + 2) == iVar7 && ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)))) &&
       (*(longlong *)(param_1 + 0x398) != 0)) {
      if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
        plVar13 = (longlong *)*puVar12;
      }
      else {
        plVar13 = (longlong *)0x0;
      }
      fVar18 = (float)(**(code **)(*plVar13 + 0x2c0))();
      fVar18 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x398) + 0x140);
      iVar7 = *(int *)(param_1 + 0x3a4);
      if (iVar7 == 0) goto LAB_1411e32a4;
    }
    uVar15 = *(uint *)(param_1 + 0x3a0);
    if ((((int)uVar15 < 0) || (DAT_14c9647dc <= (int)uVar15)) ||
       ((plVar13 = (longlong *)
                   ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
        plVar13 == (longlong *)0x0 ||
        (((int)plVar13[2] != iVar7 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))))
    goto LAB_1411e32a4;
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar13;
    }
    else {
      lVar11 = 0;
    }
    if ((*(char *)(lVar11 + 0x60) != '\x01') || (*(longlong *)(lVar11 + 0x50) == 0))
    goto LAB_1411e32a4;
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar13;
    }
    else {
      lVar11 = 0;
    }
    if ((*(char *)(lVar11 + 0x60) != '\x01') || (lVar11 = *(longlong *)(lVar11 + 0x50), lVar11 == 0)
       ) goto LAB_1411e32a4;
    local_f8 = *(undefined8 *)(lVar11 + 0x18);
    uStack_f0 = *(undefined8 *)(lVar11 + 0x20);
    local_e8 = *(undefined8 *)(lVar11 + 0x28);
    if (&puStack_e0 != (undefined2 **)(lVar11 + 0x30)) {
      uVar15 = *(uint *)(lVar11 + 0x38);
      pvVar3 = *(void **)(lVar11 + 0x30);
      local_d8 = CONCAT44(local_d8._4_4_,uVar15);
      if (uVar15 == 0 && local_d8._4_4_ == 0) {
        local_d8 = (ulonglong)uVar15;
      }
      else {
        FUN_1446dd670(&puStack_e0,uVar15);
        if (uVar15 != 0) {
          memcpy(puStack_e0,pvVar3,(longlong)(int)uVar15 * 2);
        }
      }
    }
    lVar10 = *(longlong *)(lVar11 + 0xd0);
    if (lVar10 == 0) {
      uVar8 = FUN_145d82412();
      lVar10 = FUN_14477b664(uVar8);
      *(longlong *)(lVar11 + 0xd0) = lVar10;
    }
    lVar9 = *(longlong *)(lVar11 + 0xd8);
    if (((lVar9 == 0) && (lVar9 = 0, lVar10 != 0)) && (*(longlong *)(lVar11 + 200) != 0)) {
      plVar13 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar13 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar6 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar13 + 0x110))(plVar13);
        lVar9 = FUN_144aff482(uVar8,(longlong *)(lVar11 + 200));
      }
      *(longlong *)(lVar11 + 0xd8) = lVar9;
    }
    local_128 = *(undefined8 *)(lVar11 + 0x50);
    uStack_120 = *(undefined8 *)(lVar11 + 0x58);
    local_118 = *(undefined8 *)(lVar11 + 0x60);
    if (&puStack_110 != (undefined2 **)(lVar11 + 0x68)) {
      uVar15 = *(uint *)(lVar11 + 0x70);
      pvVar3 = *(void **)(lVar11 + 0x68);
      local_108 = CONCAT44(local_108._4_4_,uVar15);
      if (uVar15 == 0 && local_108._4_4_ == 0) {
        local_108 = (ulonglong)uVar15;
      }
      else {
        FUN_1446dd670(&puStack_110,uVar15);
        if (uVar15 != 0) {
          memcpy(puStack_110,pvVar3,(longlong)(int)uVar15 * 2);
        }
      }
    }
    if (*(int *)(param_1 + 0x3a4) == 0) {
LAB_1411e3f05:
      lVar10 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3a0);
      lVar10 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x3a4) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1411e3f05;
        lVar10 = *plVar13;
      }
    }
    if (((*(char *)(lVar10 + 0x60) == '\x01') && (*(char *)(lVar10 + 0x59) == '\x01')) &&
       (*(longlong *)(lVar11 + 0xa8) != 0)) {
      puVar12 = (undefined8 *)(lVar11 + 0xa0);
    }
    else {
      puVar12 = (undefined8 *)(lVar11 + 0x78);
    }
    local_158 = *puVar12;
    uStack_150 = puVar12[1];
    local_148 = puVar12[2];
    if (&local_158 != puVar12) {
      uVar15 = *(uint *)(puVar12 + 4);
      pvVar3 = (void *)puVar12[3];
      local_138 = CONCAT44(local_138._4_4_,uVar15);
      if (uVar15 == 0 && local_138._4_4_ == 0) {
        local_138 = (ulonglong)uVar15;
      }
      else {
        FUN_1446dd670(&puStack_140,uVar15);
        if (uVar15 != 0) {
          memcpy(puStack_140,pvVar3,(longlong)(int)uVar15 * 2);
        }
      }
    }
    cVar6 = *(char *)(lVar11 + 0x49);
    cVar14 = *(char *)(param_1 + 0x3ac);
  }
  if ((((*(int *)(param_1 + 0x3bc) != 0) && (uVar15 = *(uint *)(param_1 + 0x3b8), -1 < (int)uVar15))
      && (((int)uVar15 < DAT_14c9647dc &&
          ((puVar12 = (undefined8 *)
                      ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
           puVar12 != (undefined8 *)0x0 && (*(int *)(puVar12 + 2) == *(int *)(param_1 + 0x3bc)))))))
     && ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
      uVar8 = *puVar12;
    }
    else {
      uVar8 = 0;
    }
    FUN_141140cda(uVar8,&local_f8,lVar9);
    if (*(int *)(param_1 + 0x3bc) == 0) {
LAB_1411e3e91:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x3bc) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1411e3e91;
        lVar11 = *plVar13;
      }
    }
    *(undefined4 *)(lVar11 + 0x770) = 0;
    if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
      bVar4 = *(byte *)(lVar11 + 0x9d);
      if ((bVar4 & 1) != 0) {
        if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(lVar11), lVar9 != 0))
        goto LAB_1411e3495;
        bVar4 = *(byte *)(lVar11 + 0x9d);
      }
      *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
      FUN_1401057d4(lVar11);
      FUN_14010586c(&DAT_14cad0140,lVar11);
    }
LAB_1411e3495:
    if (*(int *)(param_1 + 0x3bc) == 0) {
LAB_1411e3e98:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x3bc) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1411e3e98;
        lVar11 = *plVar13;
      }
    }
    if (*(int *)(param_1 + 0x3a4) == 0) {
LAB_1411e3554:
      cVar5 = '\0';
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3a0);
      cVar5 = '\0';
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 != (longlong *)0x0) &&
           (((int)plVar13[2] == *(int *)(param_1 + 0x3a4) &&
            ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar13;
          }
          else {
            lVar9 = 0;
          }
          if (*(char *)(lVar9 + 0x60) == '\x01') {
            cVar5 = *(char *)(lVar9 + 0x58);
            goto LAB_1411e3556;
          }
        }
        goto LAB_1411e3554;
      }
    }
LAB_1411e3556:
    if (*(char *)(lVar11 + 0x77c) != cVar5) {
      *(char *)(lVar11 + 0x77c) = cVar5;
      if ((*(longlong *)(lVar11 + 0x680) != 0) && (*(longlong *)(lVar11 + 0x638) != 0)) {
        if (cVar5 == '\0') {
          uVar17 = 0;
        }
        else {
          uVar17 = 0x3f800000;
        }
        local_68 = 2;
        local_64 = 0xffffffff;
        local_168 = local_c8;
        local_c8[0] = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = *(longlong *)(lVar11 + 0x638);
        FUN_140042bb4(*(longlong *)(lVar11 + 0x680),&local_70,uVar17,0);
      }
      if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
        bVar4 = *(byte *)(lVar11 + 0x9d);
        if ((bVar4 & 1) != 0) {
          if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(lVar11), lVar9 != 0))
          goto LAB_1411e3562;
          bVar4 = *(byte *)(lVar11 + 0x9d);
        }
        *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
        FUN_1401057d4(lVar11);
        FUN_14010586c(&DAT_14cad0140,lVar11);
      }
    }
LAB_1411e3562:
    if (*(int *)(param_1 + 0x3bc) == 0) {
LAB_1411e3e9f:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x3bc) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1411e3e9f;
        lVar11 = *plVar13;
      }
    }
    *(undefined4 *)(lVar11 + 0x774) = *(undefined4 *)(param_1 + 0x3a8);
    if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
      bVar4 = *(byte *)(lVar11 + 0x9d);
      if ((bVar4 & 1) != 0) {
        if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(lVar11), lVar9 != 0))
        goto LAB_1411e361e;
        bVar4 = *(byte *)(lVar11 + 0x9d);
      }
      *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
      FUN_1401057d4(lVar11);
      FUN_14010586c(&DAT_14cad0140,lVar11);
    }
LAB_1411e361e:
    FUN_14090b096();
    if (*(int *)(param_1 + 0x3bc) == 0) {
LAB_1411e3ea6:
      uVar8 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      uVar8 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x3bc) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1411e3ea6;
        uVar8 = *puVar12;
      }
    }
    FUN_141140898(uVar8,&local_128);
    if (*(int *)(param_1 + 0x3bc) == 0) {
LAB_1411e3ead:
      uVar8 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      uVar8 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x3bc) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1411e3ead;
        uVar8 = *puVar12;
      }
    }
    FUN_141140462(uVar8,&local_158);
    if (*(int *)(param_1 + 0x3bc) == 0) {
LAB_1411e3eb4:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x3bc) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1411e3eb4;
        lVar11 = *plVar13;
      }
    }
    if (*(char *)(lVar11 + 0x77d) != cVar6) {
      *(char *)(lVar11 + 0x77d) = cVar6;
      if ((*(longlong *)(lVar11 + 0x680) != 0) && (*(longlong *)(lVar11 + 0x640) != 0)) {
        if (cVar6 == '\0') {
          uVar17 = 0;
        }
        else {
          uVar17 = 0x3f800000;
        }
        local_68 = 2;
        local_64 = 0xffffffff;
        local_168 = local_c8;
        local_c8[0] = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = *(longlong *)(lVar11 + 0x640);
        FUN_140042bb4(*(longlong *)(lVar11 + 0x680),&local_70,uVar17,0);
      }
      if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
        bVar4 = *(byte *)(lVar11 + 0x9d);
        if ((bVar4 & 1) != 0) {
          if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(), lVar9 != 0))
          goto LAB_1411e3755;
          bVar4 = *(byte *)(lVar11 + 0x9d);
        }
        *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
        FUN_1401057d4(lVar11);
        FUN_14010586c(&DAT_14cad0140,lVar11);
      }
    }
LAB_1411e3755:
    if (*(int *)(param_1 + 0x3bc) == 0) {
LAB_1411e3ebb:
      uVar8 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      uVar8 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x3bc) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1411e3ebb;
        uVar8 = *puVar12;
      }
    }
    FUN_1441969c4(uVar8,*(undefined4 *)(param_1 + 0x3b0));
    iVar7 = *(int *)(param_1 + 0x3bc);
    if (iVar7 == 0) {
LAB_1411e3ec2:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != iVar7 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_1411e3ec2;
        lVar11 = *plVar13;
      }
    }
    if (*(char *)(lVar11 + 0x77e) != cVar14) {
      *(char *)(lVar11 + 0x77e) = cVar14;
      FUN_148d7147a(lVar11);
      if ((*(longlong *)(lVar11 + 0x680) != 0) && (*(longlong *)(lVar11 + 0x650) != 0)) {
        if (*(char *)(lVar11 + 0x77e) == '\0') {
          uVar17 = 0;
        }
        else {
          uVar17 = 0x3f800000;
        }
        local_68 = 2;
        local_64 = 0xffffffff;
        local_168 = local_c8;
        local_c8[0] = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = *(longlong *)(lVar11 + 0x650);
        FUN_140042bb4(*(longlong *)(lVar11 + 0x680),&local_70,uVar17,0);
      }
      if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
        bVar4 = *(byte *)(lVar11 + 0x9d);
        if ((bVar4 & 1) != 0) {
          if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(lVar11), lVar9 != 0))
          goto LAB_1411e41ed;
          bVar4 = *(byte *)(lVar11 + 0x9d);
        }
        *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
        FUN_1401057d4(lVar11);
        FUN_14010586c(&DAT_14cad0140,lVar11);
      }
LAB_1411e41ed:
      FUN_14090b096();
      iVar7 = *(int *)(param_1 + 0x3bc);
    }
    if (iVar7 == 0) {
LAB_1411e3ec9:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3b8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != iVar7 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_1411e3ec9;
        lVar11 = *plVar13;
      }
    }
    iVar1 = *(int *)(param_1 + 0x3b4);
    if (*(int *)(lVar11 + 0x780) != iVar1) {
      *(int *)(lVar11 + 0x780) = iVar1;
      FUN_1412ff0e6(lVar11,-iVar1);
      iVar7 = *(int *)(param_1 + 0x3bc);
    }
    uVar15 = 0;
    if (iVar7 == 0) {
LAB_1411e3ed0:
      lVar11 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x3b8);
      lVar11 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != iVar7 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_1411e3ed0;
        lVar11 = *plVar13;
      }
    }
    if (((((*(int *)(param_1 + 0x394) != 0) && (uVar2 = *(uint *)(param_1 + 0x390), -1 < (int)uVar2)
          ) && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar13 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0x394))))) &&
       ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
      uVar15 = 0;
      if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
        lVar9 = *plVar13;
      }
      else {
        lVar9 = 0;
      }
      if ((*(longlong *)(lVar9 + 0x408) != 0) && (lVar9 = FUN_140d97494(), lVar9 != 0)) {
        uVar15 = (uint)*(byte *)(lVar9 + 0x70);
      }
    }
    if (*(uint *)(lVar11 + 0x788) != uVar15) {
      *(uint *)(lVar11 + 0x788) = uVar15;
      FUN_14090b096(lVar11);
      if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
        bVar4 = *(byte *)(lVar11 + 0x9d);
        if ((bVar4 & 1) != 0) {
          if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(lVar11), lVar9 != 0))
          goto LAB_1411e39c7;
          bVar4 = *(byte *)(lVar11 + 0x9d);
        }
        *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
        FUN_1401057d4(lVar11);
        FUN_14010586c(&DAT_14cad0140,lVar11);
      }
    }
  }
LAB_1411e39c7:
  if ((((*(int *)(param_1 + 0x3dc) != 0) && (uVar15 = *(uint *)(param_1 + 0x3d8), -1 < (int)uVar15))
      && ((int)uVar15 < DAT_14c9647dc)) &&
     (((plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
       plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0x3dc))) &&
      ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar13;
    }
    else {
      lVar11 = 0;
    }
    *(float *)(lVar11 + 0x770) = fVar18;
    if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
      bVar4 = *(byte *)(lVar11 + 0x9d);
      if ((bVar4 & 1) != 0) {
        if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(lVar11), lVar9 != 0))
        goto LAB_1411e3a8f;
        bVar4 = *(byte *)(lVar11 + 0x9d);
      }
      *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
      FUN_1401057d4(lVar11);
      FUN_14010586c(&DAT_14cad0140,lVar11);
    }
LAB_1411e3a8f:
    if (*(int *)(param_1 + 0x3dc) == 0) {
LAB_1411e3ed7:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3d8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x3dc) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1411e3ed7;
        lVar11 = *plVar13;
      }
    }
    *(undefined4 *)(lVar11 + 0x774) = *(undefined4 *)(param_1 + 0x3a8);
    if ((~*(byte *)(lVar11 + 0x9c) & 3) == 0) {
      bVar4 = *(byte *)(lVar11 + 0x9d);
      if ((bVar4 & 1) != 0) {
        if ((*(longlong *)(lVar11 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(lVar11), lVar9 != 0))
        goto LAB_1411e3b4b;
        bVar4 = *(byte *)(lVar11 + 0x9d);
      }
      *(byte *)(lVar11 + 0x9d) = bVar4 | 1;
      FUN_1401057d4(lVar11);
      FUN_14010586c(&DAT_14cad0140,lVar11);
    }
LAB_1411e3b4b:
    FUN_14090b096(lVar11);
    if (*(int *)(param_1 + 0x3dc) == 0) {
LAB_1411e3ede:
      uVar8 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3d8);
      uVar8 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x3dc) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1411e3ede;
        uVar8 = *puVar12;
      }
    }
    FUN_1441969c4(uVar8,*(undefined4 *)(param_1 + 0x3b0));
    if (*(int *)(param_1 + 0x3dc) == 0) {
LAB_1411e3ee5:
      lVar11 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x3d8);
      lVar11 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x3dc) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1411e3ee5;
        lVar11 = *plVar13;
      }
    }
    iVar7 = FUN_1457c5e5a(7);
    if (*(int *)(lVar11 + 0x780) != iVar7) {
      *(int *)(lVar11 + 0x780) = iVar7;
      FUN_1412ff0e6(lVar11,-iVar7);
    }
  }
  if (puStack_140 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puStack_110 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puStack_e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1411e3c66:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411e4208 FUN_1411e4208 body=103 status=ok
// SIG undefined FUN_1411e4208(void)

undefined8 * FUN_1411e4208(undefined8 *param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_20 = param_2;
  if (param_2 == (wchar_t *)0x0) {
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(param_2);
    local_18 = (int)sVar1;
  }
  FUN_14475bf92(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e4270 FUN_1411e4270 body=126 status=ok
// SIG undefined FUN_1411e4270(void)

void FUN_1411e4270(int param_1)

{
  undefined1 auStack_48 [40];
  int *local_20;
  undefined4 local_18;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == -1) {
    if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_1411e42d3;
    local_20 = (int *)0x0;
    local_18 = 0;
  }
  else {
    local_c = param_1;
    if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_1411e42d3;
    local_20 = &local_c;
    local_18 = 1;
  }
  (**(code **)(*DAT_14c948aa0 + 0x60))();
LAB_1411e42d3:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e42ef FUN_1411e42ef body=138 status=ok
// SIG undefined FUN_1411e42ef(void)

void FUN_1411e42ef(undefined8 *param_1)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_30;
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = *param_1;
  local_30 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_30 = 0;
  }
  FUN_1427d6652(local_24);
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0xffffffff;
  FUN_140b1a772(local_24,0,&local_48,0);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e437a FUN_1411e437a body=1693 status=ok
// SIG undefined FUN_1411e437a(void)

void FUN_1411e437a(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  code *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408c7d08();
  lVar7 = param_1[0x15];
  if (lVar7 == 0) {
    uVar6 = FUN_140b7bb2c();
    lVar7 = FUN_14477b664(uVar6);
    param_1[0x15] = lVar7;
  }
  plVar9 = param_1 + 0x14;
  plVar12 = param_1 + 0x16;
  lVar8 = param_1[0x16];
  if (lVar8 == 0) {
    if ((lVar7 != 0) && (*plVar9 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) goto LAB_1411e4888;
      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar8 = FUN_144aff482(uVar6,plVar9);
      *plVar12 = lVar8;
      if (lVar8 != 0) {
        lVar7 = param_1[0x15];
        goto LAB_1411e484c;
      }
    }
  }
  else {
LAB_1411e484c:
    if (lVar7 == 0) {
      uVar6 = FUN_140b7bb2c();
      lVar7 = FUN_14477b664(uVar6);
      param_1[0x15] = lVar7;
      lVar8 = param_1[0x16];
      if (lVar8 == 0) {
        if ((lVar7 != 0) && (*plVar9 != 0)) {
          plVar2 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) goto LAB_1411e4888;
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar8 = FUN_144aff482(uVar6,plVar9);
          *plVar12 = lVar8;
          if (lVar8 != 0) goto LAB_1411e4855;
        }
        goto LAB_1411e43ed;
      }
    }
LAB_1411e4855:
    if ((param_1[0x17] != *(longlong *)(lVar8 + 0x30)) ||
       ((int)param_1[0x18] != *(int *)(lVar8 + 0x38))) {
      param_1[0x17] = *(longlong *)(lVar8 + 0x30);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar8 + 0x38);
      plVar12 = param_1 + 0x19;
LAB_1411e4888:
      *plVar12 = 0;
    }
  }
LAB_1411e43ed:
  lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar7 == 0) || (cVar4 = FUN_1411e4a18(param_1), cVar4 == '\0')) goto LAB_1411e46f9;
  lVar8 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x178) == '\x03')) {
    plVar9 = *(longlong **)(lVar7 + 0x1f0);
    if (plVar9 == (longlong *)0x0) goto LAB_1411e46f9;
    lVar7 = FUN_1403ca142();
    if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_1411e46f9;
    if (*(code **)(*plVar9 + 0x498) == (code *)&LAB_14015c36e) {
      cVar4 = (char)plVar9[0x42];
    }
    else {
      cVar4 = (**(code **)(*plVar9 + 0x498))(plVar9);
    }
    if (cVar4 == '\b') {
      local_50 = (code *)CONCAT71(local_50._1_7_,8);
      FUN_1411e4bdc(param_1);
    }
    else {
      local_50 = FUN_1411e4bdc;
      local_48 = 0;
      FUN_14583a958(plVar9 + 0x55,local_40,param_1);
    }
  }
  if ((((((((longlong *)param_1[0xc] == (longlong *)0x0) ||
          (*(int *)((longlong)param_1 + 0x5c) == 0)) ||
         (uVar1 = *(uint *)(param_1 + 0xb), (int)uVar1 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar1 ||
         (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0)))) ||
       (*(int *)(lVar7 + 0x10) != *(int *)((longlong)param_1 + 0x5c))) ||
      ((((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
        (plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0xc] + 0x18))(), plVar9[3] == 0)) ||
       ((*(int *)((longlong)plVar9 + 0x14) == 0 ||
        (((uVar1 = *(uint *)(plVar9 + 2), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0))))))))
     || ((*(int *)(lVar7 + 0x10) != *(int *)((longlong)plVar9 + 0x14) ||
         ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) goto LAB_1411e46f9;
  local_50 = (code *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  pcVar3 = local_50;
  local_48 = 3;
  *(undefined ***)local_50 = &PTR_LAB_14b3f7600;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_50 + 0x10) = lVar8;
  *(undefined ***)local_50 = &PTR_FUN_14b964310;
  *(longlong *)(local_50 + 0x18) = 0;
  iVar10 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_50 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar10 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar7 + 0x10);
      bVar13 = iVar10 == 0;
      if (bVar13) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar10;
  *(code **)(pcVar3 + 0x20) = FUN_145925774;
  *(undefined4 *)(pcVar3 + 0x28) = 0;
  if (((local_48 == 0) || (local_50 == (code *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 == 0) goto LAB_1411e4688;
    if (local_50 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1411e467b;
    }
  }
  else {
    plVar12 = plVar9 + 0xb;
    if (*(int *)((longlong)plVar9 + 0x6c) < 1) {
      iVar10 = (int)plVar9[0xc];
      iVar5 = (int)plVar9[0xd] + -1;
      *(int *)(plVar9 + 0xd) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar12 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar12 + (longlong)iVar11 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar12,iVar11);
              FUN_14005b248(plVar12);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar5 = (int)plVar9[0xc];
          } while (iVar11 < iVar5);
        }
        iVar11 = 2;
        if (2 < iVar5 * 2) {
          iVar11 = iVar5 * 2;
        }
        *(int *)(plVar9 + 0xd) = iVar11;
        if ((iVar11 < iVar10) && (*(int *)((longlong)plVar9 + 100) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_50 + 0x38))(local_50,local_40);
    }
    iVar10 = (int)plVar9[0xc];
    *(uint *)(plVar9 + 0xc) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar9 + 100) < iVar10 + 1U) {
      FUN_1447a71f6(plVar12,iVar10);
    }
    lVar7 = *plVar12;
    lVar8 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(code **)(lVar7 + lVar8) = local_50;
    local_50 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar8) = local_48;
LAB_1411e467b:
    local_48 = 0;
LAB_1411e4688:
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14cbc5898 != 0) && ((longlong)(int)plVar9[1] != 0)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(*plVar9 + 0x68 + lVar7) == DAT_14cbc5898) {
        iVar10 = (int)(lVar7 >> 3) * -0xf0f0f0f;
        if ((iVar10 != -1) && (lVar7 = *plVar9 + (longlong)iVar10 * 0x88, lVar7 != 0)) {
          *(bool *)(param_1 + 0x23) = 0 < *(int *)(lVar7 + 0x80);
        }
        break;
      }
      lVar7 = lVar7 + 0x88;
    } while ((longlong)(int)plVar9[1] * 0x88 != lVar7);
  }
LAB_1411e46f9:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411e4a18 FUN_1411e4a18 body=305 status=ok
// SIG undefined FUN_1411e4a18(void)

bool FUN_1411e4a18(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    lVar3 = FUN_1411e4b4a(lVar3,0);
    if (lVar3 == 0) {
      return false;
    }
    if (*(longlong *)(lVar3 + 0x170) == 0) {
      param_1[0x1f] = 0;
    }
    else {
      uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x170) + 0xc);
      *(uint *)(param_1 + 0x1f) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar5 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar5) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar5 = iVar2 == 0;
        if (bVar5) {
          *(int *)(lVar3 + 0x10) = iVar4;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar5) {
          iVar2 = iVar4;
        }
        *(int *)((longlong)param_1 + 0xfc) = iVar2;
        if (iVar2 == 0) {
          return false;
        }
      }
      else {
        *(int *)((longlong)param_1 + 0xfc) = iVar2;
      }
      uVar1 = *(uint *)(param_1 + 0x1f);
      if ((int)uVar1 < 0) {
        return false;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return false;
      }
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == iVar2)) {
        return (*(uint *)(lVar3 + 8) & 0x10200000) == 0;
      }
    }
  }
  return false;
}



// FUNCTION 1411e4b4a FUN_1411e4b4a body=145 status=ok
// SIG undefined FUN_1411e4b4a(void)

longlong FUN_1411e4b4a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar2 = FUN_1403ca142();
    lVar3 = *(longlong *)(param_1 + 0x1f0);
    if (lVar3 != 0) {
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar3 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if ((((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) && (*(longlong *)(lVar3 + 0x518) != 0)) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x518) + 0xa8), lVar3 != 0)) {
        if (*(char *)(lVar3 + 0x1f0) == (char)param_2) {
          return lVar3;
        }
        lVar3 = FUN_14008f8aa(lVar3,param_2);
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1411e4bdc FUN_1411e4bdc body=239 status=ok
// SIG undefined FUN_1411e4bdc(void)

void FUN_1411e4bdc(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_4 != '\b') goto LAB_1411e4c7d;
  if (*(int *)(param_1 + 0xfc) == 0) {
LAB_1411e4c6f:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xf8);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0xfc) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1411e4c6f;
      uVar4 = *puVar5;
    }
  }
  cVar2 = FUN_1411e4cda(uVar4);
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar3 = FUN_14479d2ce((uint *)(param_1 + 0xf8));
    local_30 = &LAB_1411e4ff4;
    local_28 = 0;
    FUN_148cfc2e6(lVar3 + 0x30,&local_20,param_1);
    *(undefined8 *)(param_1 + 0xe8) = local_20;
  }
LAB_1411e4c7d:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e4cda FUN_1411e4cda body=792 status=ok
// SIG undefined FUN_1411e4cda(void)

int FUN_1411e4cda(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  longlong **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong *local_68;
  int local_60;
  uint local_5c;
  uint *local_58;
  uint local_50;
  int local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (((lVar5 != 0) && ((char)param_1[0x12] == '\x01')) &&
     (plVar7 = *(longlong **)(lVar5 + 0x1f0), plVar7 != (longlong *)0x0)) {
    if (DAT_14cb5e538 == 0) {
      local_80 = &local_68;
      local_68 = (longlong *)&LAB_1417c5d06;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1417ad04a;
      local_88 = &LAB_1486a7af7;
      local_90 = &LAB_1464e1631;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x1000000c;
      local_b0 = 8;
      local_b8 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance");
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
      if (*(code **)(*plVar7 + 0x498) == (code *)&LAB_14015c36e) {
        cVar4 = (char)plVar7[0x42];
      }
      else {
        cVar4 = (**(code **)(*plVar7 + 0x498))(plVar7);
      }
      iVar9 = 0;
      if (cVar4 == '\b') {
        puVar1 = (uint *)(param_1 + 0x7d);
        iVar2 = (int)param_1[0x80];
        local_5c = 1;
        if (iVar2 == 0) {
          local_48 = 0;
          local_60 = 0;
          local_4c = iVar9;
        }
        else {
          puVar6 = (uint *)param_1[0x7f];
          if ((uint *)param_1[0x7f] == (uint *)0x0) {
            puVar6 = puVar1;
          }
          uVar8 = *puVar6;
          if (uVar8 == 0) {
            iVar9 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar9 = iVar2 + -1;
            }
            uVar11 = 0;
            uVar10 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar10 = uVar11;
            }
            local_60 = (int)uVar10 + 1;
            local_48 = (int)uVar10 * 0x20 + 0x20;
            iVar9 = 0;
            do {
              local_4c = iVar2;
              if (uVar10 == uVar11) goto LAB_1411e4e3f;
              iVar9 = iVar9 + 0x20;
              uVar8 = puVar6[uVar11 + 1];
              uVar11 = uVar11 + 1;
            } while (uVar8 == 0);
            local_60 = (int)uVar11;
            local_48 = iVar9;
          }
          else {
            local_48 = 0;
            local_60 = 0;
          }
          local_5c = -uVar8 & uVar8;
          uVar10 = (ulonglong)local_5c * 2 + 1;
          lVar3 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          local_4c = (local_48 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
          if (iVar2 <= local_4c) {
            local_4c = iVar2;
          }
        }
LAB_1411e4e3f:
        local_50 = 0xffffffff;
        local_68 = param_1 + 0x7b;
        local_58 = puVar1;
        while( true ) {
          if (((local_4c == iVar2) && (local_58 == puVar1)) && (local_68 == param_1 + 0x7b)) {
            *(undefined1 *)(param_1 + 0x12) = 0;
            goto LAB_1411e4fec;
          }
          plVar7 = (longlong *)
                   FUN_140d172b5(lVar5,*(undefined4 *)(*local_68 + (longlong)local_4c * 0x60));
          if (((plVar7 != (longlong *)0x0) &&
              (cVar4 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar4 != '\0')) &&
             ((char)plVar7[0x2f] == '\x03')) break;
          local_50 = local_50 & ~local_5c;
          FUN_1449c0562(&local_60);
        }
        iVar9 = 1;
      }
      goto LAB_1411e4ebb;
    }
  }
LAB_1411e4fec:
  iVar9 = 0;
LAB_1411e4ebb:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1411e55f8 FUN_1411e55f8 body=819 status=ok
// SIG undefined FUN_1411e55f8(void)

undefined1 FUN_1411e55f8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_14148eec0();
  if ((lVar2 != 0) && (lVar3 = (**(code **)(*param_1 + 0x180))(param_1), lVar3 != 0)) {
    uVar6 = *(uint *)(lVar2 + 0x1c);
    if (uVar6 == 0xffffffff) {
      uVar6 = 0xffffffff;
      if ((longlong)(int)param_1[0x19] != 0) {
        lVar4 = (longlong)(int)param_1[0x19] << 3;
        lVar7 = 0;
        do {
          if (*(longlong *)(param_1[0x18] + lVar7 * 8) == lVar2) {
            uVar6 = (uint)lVar7;
            break;
          }
          lVar7 = lVar7 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    if (*(longlong *)(lVar3 + 0x178) != 0) {
      lVar4 = FUN_14030d660();
      lVar3 = *(longlong *)(lVar3 + 0x178);
      if (lVar3 != 0) {
        uVar8 = 0;
        if ((lVar4 == 0) || (lVar7 = *(longlong *)(lVar3 + 0x10), lVar7 == 0)) goto LAB_1411e5688;
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
           ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30 && (lVar3 = *(longlong *)(lVar3 + 0x488), lVar3 != 0)))) {
          if (DAT_14cbae3d8 == 0) {
            local_50 = &local_38;
            local_38 = FUN_141030f22;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1464f5fc4;
            local_58 = &LAB_148c3dd26;
            local_60 = &LAB_1459673ba;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000004;
            local_80 = 0x10;
            local_88 = 0x1360;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
          }
          if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
            if ((int)uVar6 < 0) {
              plVar5 = (longlong *)FUN_1401b2ade(lVar3);
              if (plVar5 != (longlong *)0x0) {
                if (DAT_14cb61cd0 == 0) {
                  local_50 = &local_38;
                  local_38 = FUN_141030f22;
                  local_40 = FUN_14081d0ea;
                  local_48 = &LAB_1463b31ae;
                  local_58 = &LAB_1486dca4f;
                  local_60 = &LAB_1464f50a6;
                  local_68 = L"Game";
                  local_70 = 0;
                  local_78 = 0x10000004;
                  local_80 = 8;
                  local_88 = 0xd70;
                  FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,
                                FUN_1464f5084);
                }
                if ((((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar5[2] + 0x30) +
                       (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) &&
                    (cVar1 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar1 != '\0')) &&
                   (((char)plVar5[0x2f] == '\x03' &&
                    (lVar2 = FUN_1403362f0(param_1,*(undefined4 *)(lVar3 + 0x394),lVar2), lVar2 != 0
                    )))) {
                  uVar8 = 1;
                  if (*(char *)(lVar2 + 0x11) == '\0') {
                    uVar8 = *(undefined1 *)(lVar2 + 0x12);
                  }
                  goto LAB_1411e5688;
                }
              }
            }
            else if ((int)(uVar6 >> 5) < *(int *)(lVar3 + 0x10a8)) {
              uVar8 = (*(uint *)(*(longlong *)(lVar3 + 0x10a0) + 0xc +
                                (ulonglong)(uVar6 >> 5) * 0x14) >> (uVar6 & 0x1f) & 1) != 0;
              goto LAB_1411e5688;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_1411e5688:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1411e592c FUN_1411e592c body=103 status=ok
// SIG undefined FUN_1411e592c(void)

undefined8 FUN_1411e592c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1411d089c();
  FUN_1446f470e(&local_28,param_2,1);
  FUN_1411e5994(&DAT_14ca9ed60,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e5994 FUN_1411e5994 body=85 status=ok
// SIG undefined FUN_1411e5994(void)

void FUN_1411e5994(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  if (0 < lVar3) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) == param_2) {
        if ((char)lVar2 != -1) {
          return;
        }
        break;
      }
      lVar2 = lVar2 + 1;
    } while (lVar3 != lVar2);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(longlong *)(*param_1 + lVar3 * 8) = param_2;
  return;
}



// FUNCTION 1411e59ea FUN_1411e59ea body=241 status=ok
// SIG undefined FUN_1411e59ea(void)

void FUN_1411e59ea(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_1411e5b4e();
  if (*param_2 == DAT_14cbd42f0) {
    iVar3 = FUN_14005fbd2(param_3,0xffffffff);
    if (iVar3 == -1) {
      *(undefined1 *)((longlong)param_1 + 300) = 8;
      *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
    }
    else {
      *(char *)((longlong)param_1 + 300) = (char)(iVar3 / 100);
      *(int *)(param_1 + 0x25) = iVar3 % 100;
      if ((iVar3 / 100 & 0xf7U) != 0) {
        lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
        if (lVar4 != 0) {
          cVar1 = *(char *)((longlong)param_1 + 300);
          if (cVar1 == '\x06') {
            uVar5 = 2;
          }
          else {
            uVar5 = 0;
          }
          cVar2 = FUN_1408838b6(param_1,lVar4,uVar5,1);
          if (cVar2 != '\0') {
            FUN_14583aca6(param_1);
            if ((*(char *)((longlong)param_1 + 0x12e) == '\0') && (param_1[0x16] != 0)) {
              FUN_1407ab98c(param_1[0x16],
                            CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)(cVar1 - 7U) < 0xfe) &
                            0xffffffff,0);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411e5adc FUN_1411e5adc body=72 status=ok
// SIG undefined FUN_1411e5adc(void)

longlong FUN_1411e5adc(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           (**(code **)(*param_1 + 0x98))(param_1,*(undefined1 *)((longlong)param_1 + 300));
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (int)param_1[0x25];
    if ((-1 < (longlong)iVar1) && (iVar1 < (int)plVar2[1])) {
      return *plVar2 + (longlong)iVar1 * 400 + 0x38;
    }
  }
  return 0;
}



// FUNCTION 1411e5b4e FUN_1411e5b4e body=154 status=ok
// SIG undefined FUN_1411e5b4e(void)

void FUN_1411e5b4e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_2 == DAT_14cb8ce00) && (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) != '\x03')) {
    cVar1 = FUN_1418115bc(param_3,&local_30);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x110) == '\x01') {
        *(undefined1 *)(param_1 + 0x110) = 0;
      }
    }
    else if (&local_30 != (undefined4 *)(param_1 + 0xf8)) {
      *(undefined8 *)(param_1 + 0x108) = local_20;
      *(undefined4 *)(param_1 + 0xf8) = local_30;
      *(undefined4 *)(param_1 + 0xfc) = uStack_2c;
      *(undefined4 *)(param_1 + 0x100) = uStack_28;
      *(undefined4 *)(param_1 + 0x104) = uStack_24;
      *(undefined1 *)(param_1 + 0x110) = 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e5bf0 FUN_1411e5bf0 body=228 status=ok
// SIG undefined FUN_1411e5bf0(void)

longlong FUN_1411e5bf0(void)

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
  if (DAT_14cab2710 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_1475469f5;
    local_40 = FUN_14633c08e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntityInstantiatorSystem",&DAT_14cab2710,
                  &DAT_1475469f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2710;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e5cd6 FUN_1411e5cd6 body=228 status=ok
// SIG undefined FUN_1411e5cd6(void)

longlong FUN_1411e5cd6(void)

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
  if (DAT_14cacf420 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147992567;
    local_40 = FUN_1463b1327;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/Engine",L"CameraShakeSourceComponent",&DAT_14cacf420,FUN_1463b1300);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e5dc0 FUN_1411e5dc0 body=228 status=ok
// SIG undefined FUN_1411e5dc0(void)

longlong FUN_1411e5dc0(void)

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
  if (DAT_14cb1be90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147e33e2f;
    local_40 = FUN_14641e812;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavMeshLayer",&DAT_14cb1be90,&DAT_147e33e2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1be90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e5eac FUN_1411e5eac body=228 status=ok
// SIG undefined FUN_1411e5eac(void)

longlong FUN_1411e5eac(void)

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
  if (DAT_14cb1f148 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459eb380;
    local_38 = &LAB_147ebb527;
    local_40 = &LAB_14642a0a7;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/AIModule",L"BTDecorator",&DAT_14cb1f148,&DAT_147ebb526);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1f148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e5f92 FUN_1411e5f92 body=228 status=ok
// SIG undefined FUN_1411e5f92(void)

longlong FUN_1411e5f92(void)

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
  if (DAT_14cb1fb68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14642c182;
    local_38 = &LAB_147eced21;
    local_40 = FUN_14642c20a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryContext_Querier",&DAT_14cb1fb68,&DAT_147eced20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fb68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e607c FUN_1411e607c body=228 status=ok
// SIG undefined FUN_1411e607c(void)

longlong FUN_1411e607c(void)

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
  if (DAT_14cb265d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d6516;
    local_38 = &LAB_147f8555f;
    local_40 = &LAB_145aa588f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/FaceFX",L"FaceFXAnim",&DAT_14cb265d0,&DAT_147f8555e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb265d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e6166 FUN_1411e6166 body=228 status=ok
// SIG undefined FUN_1411e6166(void)

longlong FUN_1411e6166(void)

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
  if (DAT_14cb4ccc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_1484f6c97;
    local_40 = &LAB_145f832f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x280;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"DragAlignmentMechanic",&DAT_14cb4ccc0,
                  &DAT_1484f6c96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ccc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e624c FUN_1411e624c body=228 status=ok
// SIG undefined FUN_1411e624c(void)

longlong FUN_1411e624c(void)

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
  if (DAT_14cba0178 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148b8bc96;
    local_40 = &LAB_1461f7551;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xb30;
    FUN_14081cfa3(L"/Script/OakGame",L"CommandRing",&DAT_14cba0178,FUN_1465a88fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba0178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411e6332 FUN_1411e6332 body=228 status=ok
// SIG undefined FUN_1411e6332(void)

longlong FUN_1411e6332(void)

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
  if (DAT_14cc06ed8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1491a821b;
    local_40 = &LAB_14612316f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x790;
    FUN_14081cfa3(L"/Script/ControlRig",L"ControlRigComponent",&DAT_14cc06ed8,FUN_1466cac86);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc06ed8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


