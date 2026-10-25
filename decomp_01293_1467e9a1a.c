// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467e9a1a FUN_1467e9a1a body=362 status=ok
// SIG undefined FUN_1467e9a1a(void)

void FUN_1467e9a1a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x30) != param_2) {
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar7 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 8))();
      if (iVar7 == 7) {
        lVar3 = **(longlong **)(param_1 + 0x10);
        plVar4 = (longlong *)(*(longlong **)(param_1 + 0x10))[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (*(int *)(lVar3 + 0x38) == *(int *)(param_1 + 0x30)) {
          plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_149e1d3d0;
          plVar1 = plVar8 + 2;
          FUN_1467f3cbc(plVar1,param_2);
          local_48 = plVar1;
          local_40 = plVar8;
          FUN_1467f3dfe(&local_48,plVar1);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          plVar5 = *(longlong **)(param_1 + 0x10);
          plVar6 = (longlong *)plVar5[1];
          *plVar5 = (longlong)plVar1;
          plVar5[1] = (longlong)plVar8;
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
          plVar1 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_40 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_40)(local_40);
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
    }
    *(int *)(param_1 + 0x30) = param_2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e9b86 FUN_1467e9b86 body=1176 status=ok
// SIG undefined FUN_1467e9b86(void)

undefined8 * FUN_1467e9b86(ushort *param_1)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auStack_108 [32];
  ushort *local_e8;
  undefined8 *local_e0;
  int local_d8 [32];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = (int *)0x0;
  local_50 = 0x1000000000;
  uVar15 = 0;
  local_e8 = param_1;
LAB_1467e9bff:
  do {
    lVar11 = 0;
    while( true ) {
      uVar9 = local_50;
      lVar10 = lVar11 * -0x100000000;
      lVar4 = lVar11 * 2 + -2;
      lVar11 = lVar11 * -2;
      do {
        uVar7 = *(ushort *)((longlong)param_1 + lVar4 + 2);
        uVar14 = 1L << ((byte)uVar7 & 0x3f);
        uVar13 = uVar14 & 0x2800000000000000;
        if ((uVar7 & 0xffc0) != 0x40) {
          uVar13 = uVar15;
        }
        lVar10 = lVar10 + -0x100000000;
        lVar4 = lVar4 + 2;
        lVar11 = lVar11 + -2;
      } while (uVar13 == 0 && ((uint)(uVar7 < 0x40) & (uint)uVar14) == 0);
      puVar1 = (ushort *)((longlong)param_1 + lVar4);
      if (uVar7 == 0x7d) break;
      if ((uVar7 != 0x7b) || (puVar1[1] != 0x7b)) goto LAB_1467e9cfc;
LAB_1467e9c7b:
      if (lVar4 != 0) goto code_r0x0001467e9c84;
      lVar4 = (longlong)(int)(uint)local_50;
      local_50._0_4_ = (uint)local_50 + 1;
      if (local_50._4_4_ < (uint)local_50) {
        FUN_1467f3252(local_d8,uVar9 & 0xffffffff);
      }
      param_1 = (ushort *)((longlong)param_1 - lVar11);
      piVar5 = local_58;
      if (local_58 == (int *)0x0) {
        piVar5 = local_d8;
      }
      *(undefined1 **)(piVar5 + lVar4 * 2) = &DAT_100000001;
      lVar11 = 1;
    }
    if (puVar1[1] == 0x7d) goto LAB_1467e9c7b;
LAB_1467e9cfc:
    if (lVar4 != 0) {
      lVar11 = (longlong)(int)(uint)local_50;
      local_50._0_4_ = (uint)local_50 + 1;
      if (local_50._4_4_ < (uint)local_50) {
        FUN_1467f3252(local_d8,uVar9 & 0xffffffff);
      }
      piVar5 = local_58;
      if (local_58 == (int *)0x0) {
        piVar5 = local_d8;
      }
      *(longlong *)(piVar5 + lVar11 * 2) = -0xfffffffe - lVar10;
      uVar7 = *puVar1;
      param_1 = puVar1;
    }
    uVar9 = local_50;
    if (uVar7 == 0) {
      lVar11 = (longlong)(int)(uint)local_50;
      local_50._0_4_ = (uint)local_50 + 1;
      if (local_50._4_4_ < (uint)local_50) {
        FUN_1467f3252(local_d8,uVar9 & 0xffffffff);
      }
      piVar5 = local_58;
      if (local_58 == (int *)0x0) {
        piVar5 = local_d8;
      }
      (piVar5 + lVar11 * 2)[0] = 0;
      (piVar5 + lVar11 * 2)[1] = 0;
      piVar5 = local_58;
      if (local_58 == (int *)0x0) {
        piVar5 = local_d8;
      }
      if ((longlong)(int)(uint)local_50 == 0) {
        iVar8 = 0x10;
      }
      else {
        piVar2 = piVar5 + (longlong)(int)(uint)local_50 * 2;
        iVar8 = 0;
        do {
          uVar15 = (longlong)piVar5[1] << 3 | (longlong)*piVar5;
          lVar11 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          bVar16 = (byte)(((uint)lVar11 & 0xff) * 0x93 >> 10);
          if (7 < bVar16) {
            bVar16 = 8;
          }
          uVar3 = (uint)(byte)(bVar16 + 1);
          if (uVar15 == 0) {
            uVar3 = 1;
          }
          iVar8 = iVar8 + uVar3;
          piVar5 = piVar5 + 2;
        } while (piVar5 != piVar2);
        iVar8 = iVar8 + 0x10;
      }
      puVar6 = (undefined8 *)FUN_14001cc68(iVar8,8);
      *puVar6 = local_e8;
      puVar6[1] = 0;
      local_e0 = puVar6 + 2;
      piVar5 = local_d8;
      if (local_58 != (int *)0x0) {
        piVar5 = local_58;
      }
      if ((longlong)(int)(uint)local_50 != 0) {
        lVar11 = (longlong)(int)(uint)local_50 << 3;
        do {
          FUN_1467ea020(piVar5,&local_e0);
          piVar5 = piVar5 + 2;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      if (local_58 != (int *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return puVar6;
    }
    param_1 = param_1 + 1;
    puVar12 = &DAT_100000003;
    do {
      uVar7 = *param_1;
      uVar14 = 1L << ((byte)uVar7 & 0x3f);
      uVar13 = uVar14 & 0x3ff000000000000;
      if (0x3f < uVar7) {
        uVar13 = uVar15;
      }
      uVar14 = uVar14 & 0x7fffffe87fffffe;
      if ((uVar7 & 0xffc0) != 0x40) {
        uVar14 = uVar15;
      }
      param_1 = param_1 + 1;
      puVar12 = puVar12 + 0x100000000;
    } while (uVar14 != 0 || uVar13 != 0);
    lVar11 = (longlong)(int)(uint)local_50;
    local_50._0_4_ = (uint)local_50 + 1;
    if (local_50._4_4_ < (uint)local_50) {
      FUN_1467f3252(local_d8,uVar9 & 0xffffffff);
    }
    piVar5 = local_58;
    if (local_58 == (int *)0x0) {
      piVar5 = local_d8;
    }
    *(undefined1 **)(piVar5 + lVar11 * 2) = puVar12;
  } while( true );
code_r0x0001467e9c84:
  lVar4 = (longlong)(int)(uint)local_50;
  uVar3 = (uint)local_50 + 1;
  if (local_50._4_4_ < uVar3) {
    uVar9 = local_50 & 0xffffffff;
    local_50._0_4_ = uVar3;
    FUN_1467f3252(local_d8,uVar9);
    uVar3 = (uint)local_50;
  }
  local_50._0_4_ = uVar3;
  piVar5 = local_58;
  if (local_58 == (int *)0x0) {
    piVar5 = local_d8;
  }
  *(longlong *)(piVar5 + lVar4 * 2) = 2 - lVar10;
  uVar3 = (uint)local_50;
  lVar4 = (longlong)(int)(uint)local_50;
  local_50._0_4_ = (uint)local_50 + 1;
  if (local_50._4_4_ < (uint)local_50) {
    FUN_1467f3252(local_d8,uVar3);
  }
  piVar5 = local_58;
  if (local_58 == (int *)0x0) {
    piVar5 = local_d8;
  }
  *(undefined1 **)(piVar5 + lVar4 * 2) = &DAT_100000001;
  param_1 = (ushort *)((longlong)param_1 + (2 - lVar11));
  goto LAB_1467e9bff;
}



// FUNCTION 1467ea020 FUN_1467ea020 body=212 status=ok
// SIG undefined FUN_1467ea020(void)

void FUN_1467ea020(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  
  uVar1 = (longlong)param_1[1] << 3 | (longlong)*param_1;
  lVar6 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  bVar2 = (byte)(((uint)lVar6 & 0xff) * 0x93 >> 10);
  bVar3 = 8;
  if (bVar2 < 8) {
    bVar3 = bVar2;
  }
  uVar4 = 1;
  if (uVar1 != 0) {
    uVar4 = (ulonglong)(byte)(bVar3 + 1);
  }
  pbVar5 = (byte *)(*param_2 + uVar4 + -1);
  switch((int)uVar4) {
  case 9:
    lVar6 = *param_2 + uVar4;
    *(char *)(lVar6 + -1) = (char)uVar1;
    pbVar5 = (byte *)(lVar6 + -2);
    uVar1 = uVar1 >> 8;
  case 8:
    *pbVar5 = (byte)uVar1;
    pbVar5 = pbVar5 + -1;
    uVar1 = uVar1 >> 8;
  case 7:
    *pbVar5 = (byte)uVar1;
    pbVar5 = pbVar5 + -1;
    uVar1 = uVar1 >> 8;
  case 6:
    *pbVar5 = (byte)uVar1;
    pbVar5 = pbVar5 + -1;
    uVar1 = uVar1 >> 8;
  case 5:
    *pbVar5 = (byte)uVar1;
    pbVar5 = pbVar5 + -1;
    uVar1 = uVar1 >> 8;
  case 4:
    *pbVar5 = (byte)uVar1;
    pbVar5 = pbVar5 + -1;
    uVar1 = uVar1 >> 8;
  case 3:
    *pbVar5 = (byte)uVar1;
    pbVar5 = pbVar5 + -1;
    uVar1 = uVar1 >> 8;
  case 2:
    *pbVar5 = (byte)uVar1;
    pbVar5 = pbVar5 + -1;
    uVar1 = uVar1 >> 8;
  default:
    *pbVar5 = (byte)uVar1 | (byte)(0xff << (9U - (char)uVar4 & 0x1f));
    *param_2 = *param_2 + uVar4;
    return;
  }
}



// FUNCTION 1467ea0f4 FUN_1467ea0f4 body=380 status=ok
// SIG undefined FUN_1467ea0f4(void)

undefined8 * FUN_1467ea0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  undefined1 local_78 [32];
  undefined8 *local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_78;
  FUN_1413a400a(&local_58);
  FUN_1413a400a(local_4c,param_1);
  FUN_140208bae(&local_38,local_4c,&local_58,param_3);
  FUN_14023409e(&local_48,&local_38,1);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  local_38 = (longlong *)0x5;
  uStack_30 = 0;
  iVar6 = 0;
  lVar4 = 4;
  do {
    uVar8 = (longlong)*(int *)((longlong)&local_38 + lVar4) << 3 |
            (longlong)*(int *)((longlong)&local_40 + lVar4 + 4);
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    bVar9 = (byte)(((uint)lVar3 & 0xff) * 0x93 >> 10);
    if (7 < bVar9) {
      bVar9 = 8;
    }
    uVar7 = (uint)(byte)(bVar9 + 1);
    if (uVar8 == 0) {
      uVar7 = 1;
    }
    iVar6 = iVar6 + uVar7;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x14);
  puVar5 = (undefined8 *)FUN_14001cc68(iVar6 + 0x20,8);
  *puVar5 = local_48;
  puVar5[1] = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  puVar5[2] = param_3;
  puVar5[3] = 0;
  local_58 = puVar5 + 4;
  lVar4 = 0;
  do {
    FUN_1467ea020((longlong)&local_38 + lVar4,&local_58);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x10);
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
  if ((local_28 ^ (ulonglong)local_78) == DAT_14c707940) {
    return puVar5 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ea272 FUN_1467ea272 body=124 status=ok
// SIG undefined FUN_1467ea272(void)

void FUN_1467ea272(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x10;
  iVar4 = FUN_1467ea2f0();
  if (iVar4 == 5) {
    plVar3 = *(longlong **)(param_1 + -8);
    param_1 = param_1 + -0x10;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1400020a8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ea2f0 FUN_1467ea2f0 body=203 status=ok
// SIG undefined FUN_1467ea2f0(void)

ulonglong FUN_1467ea2f0(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  pbVar2 = (byte *)*param_1;
  uVar3 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
  uVar6 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  uVar4 = 9 - (uint)uVar6;
  uVar3 = (ulonglong)(0xffU >> ((byte)uVar4 & 0x1f) & (uint)*pbVar2);
  if (7 < (uint)uVar6) {
LAB_1467ea39a:
    *param_1 = pbVar2 + uVar4;
    return (uVar3 & 0xfffffffffffffff8) << 0x1d | (ulonglong)((uint)uVar3 & 7);
  }
  pbVar5 = pbVar2 + 1;
  uVar6 = uVar6 & 0xffffffff;
  switch(uVar6) {
  case 0:
    uVar6 = 2;
  case 1:
    pbVar5 = pbVar2 + uVar6;
    break;
  case 2:
    pbVar5 = pbVar2;
    break;
  case 3:
    goto switchD_1467ea33c_caseD_3;
  case 4:
switchD_1467ea33c_caseD_4:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar3 = uVar3 << 8 | (ulonglong)bVar1;
  case 5:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar3 = uVar3 << 8 | (ulonglong)bVar1;
  case 6:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar3 = uVar3 << 8 | (ulonglong)bVar1;
  case 7:
    uVar3 = uVar3 << 8 | (ulonglong)*pbVar5;
    goto LAB_1467ea39a;
  }
  pbVar5 = pbVar5 + 2;
switchD_1467ea33c_caseD_3:
  uVar3 = (ulonglong)*pbVar5;
  pbVar5 = pbVar5 + 1;
  goto switchD_1467ea33c_caseD_4;
}



// FUNCTION 1467ea3bc FUN_1467ea3bc body=1086 status=ok
// SIG undefined FUN_1467ea3bc(void)

undefined8 FUN_1467ea3bc(longlong param_1,undefined8 param_2,uint *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined1 auStack_228 [40];
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  longlong local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined1 *local_180;
  undefined1 *local_178;
  ulonglong *local_170;
  undefined1 local_168;
  undefined1 local_160 [256];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1e8 = *param_3;
  uStack_1e4 = param_3[1];
  uStack_1e0 = param_3[2];
  uStack_1dc = param_3[3];
  local_1d8 = *(undefined8 *)(param_3 + 4);
  if ((local_1e8 & 0x1f) != 0) {
    do {
      FUN_14274678c(&local_180,CONCAT44(uStack_1dc,uStack_1e0) - (ulonglong)uStack_1e4);
      puVar4 = local_180;
      local_1a0 = local_180;
      local_198 = local_178;
      if ((local_1e8 & 0x1f) - 8 < 4) {
        puVar3 = (ulonglong *)CONCAT44(uStack_1dc,uStack_1e0);
        switch(local_1e8 & 0x1f) {
        case 8:
          uVar6 = (ulonglong)(byte)~(byte)*puVar3 * 2 + 1;
          uVar2 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
            }
          }
          uVar5 = 0xffU >> (9U - (char)uVar2 & 0x1f) & (uint)(byte)*puVar3;
          local_180 = (undefined1 *)(ulonglong)uVar5;
          if ((uint)uVar2 < 8) {
            pbVar7 = (byte *)((longlong)puVar3 + 1);
            switch(uVar2 & 0xffffffff) {
            case 0:
              uVar5 = (uint)*(byte *)((longlong)puVar3 + 1);
              pbVar7 = (byte *)((longlong)puVar3 + 2);
            case 1:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar5 = uVar5 << 8 | (uint)bVar1;
            case 2:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              local_180 = (undefined1 *)((ulonglong)(uVar5 << 8) | (ulonglong)bVar1);
            case 3:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              local_180 = (undefined1 *)((longlong)local_180 << 8 | (ulonglong)bVar1);
            case 4:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              local_180 = (undefined1 *)((longlong)local_180 << 8 | (ulonglong)bVar1);
            case 5:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              local_180 = (undefined1 *)((longlong)local_180 << 8 | (ulonglong)bVar1);
            case 6:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              local_180 = (undefined1 *)((longlong)local_180 << 8 | (ulonglong)bVar1);
            case 7:
              local_180 = (undefined1 *)((longlong)local_180 << 8 | (ulonglong)*pbVar7);
            }
          }
          FUN_1467eed1a(&local_1c8,&local_1a0,&local_180);
          break;
        case 9:
          uVar6 = (ulonglong)(byte)~(byte)*puVar3 * 2 + 1;
          uVar2 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
            }
          }
          uVar5 = 0xffU >> (9U - (char)uVar2 & 0x1f) & (uint)(byte)*puVar3;
          uVar6 = (ulonglong)uVar5;
          if ((uint)uVar2 < 8) {
            pbVar7 = (byte *)((longlong)puVar3 + 1);
            switch(uVar2 & 0xffffffff) {
            case 0:
              uVar5 = (uint)*(byte *)((longlong)puVar3 + 1);
              pbVar7 = (byte *)((longlong)puVar3 + 2);
            case 1:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar5 = uVar5 << 8 | (uint)bVar1;
            case 2:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar6 = (ulonglong)(uVar5 << 8) | (ulonglong)bVar1;
            case 3:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar6 = uVar6 << 8 | (ulonglong)bVar1;
            case 4:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar6 = uVar6 << 8 | (ulonglong)bVar1;
            case 5:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar6 = uVar6 << 8 | (ulonglong)bVar1;
            case 6:
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar6 = uVar6 << 8 | (ulonglong)bVar1;
            case 7:
              uVar6 = uVar6 << 8 | (ulonglong)*pbVar7;
            }
          }
          local_180 = (undefined1 *)~uVar6;
          FUN_1467eee94(&local_1c8,&local_1a0,&local_180);
          break;
        case 10:
          uVar5 = (uint)*puVar3;
          local_180 = (undefined1 *)
                      CONCAT44(local_180._4_4_,
                               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                               uVar5 << 0x18);
          FUN_1467ef00e(&local_1c8,&local_1a0,&local_180);
          break;
        case 0xb:
          uVar6 = *puVar3;
          local_180 = (undefined1 *)
                      (uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                       (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                       (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38);
          FUN_1467ef188(&local_1c8,&local_1a0,&local_180);
        }
      }
      else {
        local_168 = 0;
        local_180 = local_160;
        local_170 = local_60;
        local_200 = param_1;
        local_178 = local_180;
        FUN_142768fb6(&local_180);
        local_1b8 = 0;
        uStack_1b0 = 0;
        FUN_14006620a(&local_190,local_180,
                      (ulonglong)((longlong)local_178 - (longlong)local_180) >> 1);
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        local_1b8 = CONCAT44(uStack_18c,local_190);
        FUN_140233b1a(&local_190,&local_1b8);
        FUN_1467ef302(&local_1c8,&local_1a0,&local_190);
        if ((longlong *)CONCAT44(uStack_18c,local_190) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_18c,local_190) + 0x10))();
        }
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        FUN_144724f3c(&local_180);
        param_1 = local_200;
      }
      if (puVar4 != (undefined1 *)0x0) {
        FUN_1400020a8(puVar4);
      }
      FUN_1468223c2(&local_1e8);
    } while ((local_1e8 & 0x1f) != 0);
  }
  local_1f8 = *(undefined8 *)(param_1 + -0x10);
  local_1f0 = *(longlong *)(param_1 + -8);
  if (local_1f0 != 0) {
    LOCK();
    *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
    UNLOCK();
  }
  FUN_140233c04(param_2,&local_1f8,&local_1c8);
  FUN_14010f8af(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ea7fc FUN_1467ea7fc body=439 status=ok
// SIG undefined FUN_1467ea7fc(void)

void FUN_1467ea7fc(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined4 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined4 *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined1 local_e0 [128];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = *(undefined8 *)(param_3 + 4);
  local_f0 = 0;
  lVar7 = *param_1;
  local_118 = param_1 + 2;
  uVar5 = 0xffffffff;
  local_138 = param_1;
  local_130 = param_3;
  local_110 = param_3;
  local_e8 = lVar7;
  do {
    uVar2 = FUN_1467ea2f0();
    if ((uint)uVar2 < 6) {
      iVar6 = (int)(uVar2 >> 0x20);
      switch(uVar2 & 0xffffffff) {
      case 2:
        FUN_1449668a2(param_2,lVar7);
        break;
      case 3:
        local_60 = 0;
        lVar4 = lVar7 + 2;
        if (lVar4 == 0) {
          local_58 = 0;
          local_50 = 0;
        }
        else {
          bVar8 = false;
          uVar1 = iVar6 - 2;
          if (2 < iVar6) {
            bVar8 = *(short *)(lVar4 + (ulonglong)(iVar6 - 3U) * 2) == 0;
            if (bVar8) {
              uVar1 = iVar6 - 3U;
            }
          }
          FUN_1449b853c(local_e0,lVar4,uVar1,bVar8);
        }
        local_128 = local_58;
        local_120 = local_50;
        uVar3 = FUN_1467f33e4(&local_110,&local_128,uVar5);
        FUN_142768fb6(param_2,uVar3);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        uVar5 = 0xffffffff;
        break;
      case 4:
        uVar5 = uVar2 >> 0x20;
        break;
      case 5:
        FUN_1467f3358(local_138,param_2,local_130);
      case 0:
        if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
    lVar4 = (longlong)uVar2 >> 0x20;
    if ((uint)uVar2 == 4) {
      lVar4 = 0;
    }
    lVar7 = lVar7 + lVar4 * 2;
  } while( true );
}



// FUNCTION 1467ea9b4 FUN_1467ea9b4 body=1927 status=ok
// SIG undefined FUN_1467ea9b4(void)

void FUN_1467ea9b4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  longlong *local_180;
  undefined4 *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char *local_130;
  undefined4 local_128;
  undefined1 local_120 [128];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 *local_70;
  ulonglong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_170 = *param_3;
  uStack_16c = param_3[1];
  uStack_168 = param_3[2];
  uStack_164 = param_3[3];
  local_160 = *(undefined8 *)(param_3 + 4);
  local_158 = 0;
  lVar18 = *param_1;
  local_180 = param_1 + 2;
  uVar17 = 0xffffffff;
  local_198 = param_1;
  local_178 = param_3;
  local_150 = lVar18;
  do {
    uVar4 = FUN_1467ea2f0();
    if (5 < (uint)uVar4) goto switchD_1467eaa55_caseD_1;
    iVar12 = (int)(uVar4 >> 0x20);
    switch(uVar4 & 0xffffffff) {
    case 2:
      FUN_144aa081e(param_2,lVar18);
      break;
    case 3:
      local_a0 = 0;
      lVar9 = lVar18 + 2;
      if (lVar9 == 0) {
        local_98 = 0;
        local_90 = 0;
      }
      else {
        bVar19 = false;
        uVar7 = iVar12 - 2;
        if (2 < iVar12) {
          bVar19 = *(short *)(lVar9 + (ulonglong)(iVar12 - 3U) * 2) == 0;
          if (bVar19) {
            uVar7 = iVar12 - 3U;
          }
        }
        FUN_1449b853c(local_120,lVar9,uVar7,bVar19);
      }
      local_190 = local_98;
      local_188 = local_90;
      pbVar5 = (byte *)FUN_1467f35c4(&local_178,&local_190,uVar17);
      bVar3 = *pbVar5;
      uVar7 = bVar3 & 0x1f;
      if (0x1e < uVar7 - 1) goto switchD_1467eab24_caseD_15;
      puVar10 = *(ulonglong **)(pbVar5 + 8);
      switch(uVar7) {
      case 1:
        puVar6 = *(undefined4 **)(param_2 + 8);
        if (*(undefined4 **)(param_2 + 0x10) <= puVar6 + 1) {
          FUN_1402134d6(param_2,4);
          puVar6 = *(undefined4 **)(param_2 + 8);
        }
        *puVar6 = 0x6c6c756e;
        goto LAB_1467eb016;
      case 2:
      case 3:
        local_70._0_2_ = (ushort)(byte)uVar7;
        local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffff);
        local_130 = "$text";
        local_128 = 5;
        local_1a0 = param_3;
        local_68 = puVar10;
        FUN_14682240a(&local_70,&local_88,&local_130);
        if (((ulonglong)local_88 & 0x1f) == 0) {
          bVar3 = *pbVar5;
          puVar10 = *(ulonglong **)(pbVar5 + 8);
          param_3 = local_1a0;
          goto switchD_1467eab24_caseD_4;
        }
        local_148 = 0;
        uStack_140 = 0;
        FUN_146821fac(&local_88,&local_70,&local_148);
        FUN_1467f3718(param_2,local_70,(ulonglong)local_68 & 0xffffffff);
        param_3 = local_1a0;
        break;
      case 4:
      case 5:
      case 6:
      case 10:
      case 0xb:
      case 0x1e:
      case 0x1f:
switchD_1467eab24_caseD_4:
        local_88 = (undefined8 **)(CONCAT71((int7)((ulonglong)local_88 >> 8),bVar3) & 0xffff003f);
        uStack_80 = puVar10;
        FUN_1468248c3(&local_88,param_2);
        break;
      case 7:
        uVar17 = (ulonglong)(byte)~(byte)*puVar10 * 2 + 1;
        uVar15 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> uVar15 == 0; uVar15 = uVar15 - 1) {
          }
        }
        uVar7 = 9 - (uint)uVar15;
        uVar13 = 0xffU >> ((byte)uVar7 & 0x1f) & (uint)(byte)*puVar10;
        if ((uint)uVar15 < 8) {
          pbVar5 = (byte *)((longlong)puVar10 + 1);
          uVar15 = uVar15 & 0xffffffff;
          puVar16 = puVar10;
          switch(uVar15) {
          case 0:
            uVar15 = 2;
          case 1:
            puVar16 = (ulonglong *)(uVar15 + (longlong)puVar10);
          case 2:
            pbVar5 = (byte *)((longlong)puVar16 + 2);
          case 3:
            pbVar5 = pbVar5 + 1;
          case 4:
            uVar13 = (uint)*pbVar5;
            pbVar5 = pbVar5 + 1;
          case 5:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar13 = uVar13 << 8 | (uint)bVar3;
          case 6:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar13 = uVar13 << 8 | (uint)bVar3;
          case 7:
            uVar13 = uVar13 << 8 | (uint)*pbVar5;
          }
        }
        FUN_1467f3718(param_2,(byte *)((longlong)puVar10 + (ulonglong)uVar7),uVar13);
        break;
      case 8:
        uVar17 = (ulonglong)(byte)~(byte)*puVar10 * 2 + 1;
        uVar15 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> uVar15 == 0; uVar15 = uVar15 - 1) {
          }
        }
        uVar7 = 0xffU >> (9U - (char)uVar15 & 0x1f) & (uint)(byte)*puVar10;
        uVar17 = (ulonglong)uVar7;
        if ((uint)uVar15 < 8) {
          pbVar5 = (byte *)((longlong)puVar10 + 1);
          switch(uVar15 & 0xffffffff) {
          case 0:
            uVar7 = (uint)*(byte *)((longlong)puVar10 + 1);
            pbVar5 = (byte *)((longlong)puVar10 + 2);
          case 1:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 << 8 | (uint)bVar3;
          case 2:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = (ulonglong)(uVar7 << 8) | (ulonglong)bVar3;
          case 3:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 4:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 5:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 6:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 7:
            uVar17 = uVar17 << 8 | (ulonglong)*pbVar5;
          }
        }
        puVar11 = &DAT_149e1d7be;
        goto LAB_1467eae65;
      case 9:
        uVar17 = (ulonglong)(byte)~(byte)*puVar10 * 2 + 1;
        uVar15 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> uVar15 == 0; uVar15 = uVar15 - 1) {
          }
        }
        uVar7 = 0xffU >> (9U - (char)uVar15 & 0x1f) & (uint)(byte)*puVar10;
        uVar17 = (ulonglong)uVar7;
        if ((uint)uVar15 < 8) {
          pbVar5 = (byte *)((longlong)puVar10 + 1);
          switch(uVar15 & 0xffffffff) {
          case 0:
            uVar7 = (uint)*(byte *)((longlong)puVar10 + 1);
            pbVar5 = (byte *)((longlong)puVar10 + 2);
          case 1:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 << 8 | (uint)bVar3;
          case 2:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = (ulonglong)(uVar7 << 8) | (ulonglong)bVar3;
          case 3:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 4:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 5:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 6:
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar17 = uVar17 << 8 | (ulonglong)bVar3;
          case 7:
            uVar17 = uVar17 << 8 | (ulonglong)*pbVar5;
          }
        }
        uVar17 = ~uVar17;
        puVar11 = &DAT_149e1d7c3;
LAB_1467eae65:
        FUN_140850d22(param_2,puVar11,uVar17);
        break;
      case 0xc:
        puVar6 = *(undefined4 **)(param_2 + 8);
        if (*(ulonglong *)(param_2 + 0x10) <= (longlong)puVar6 + 5U) {
          FUN_1402134d6(param_2,5);
          puVar6 = *(undefined4 **)(param_2 + 8);
        }
        *(undefined1 *)(puVar6 + 1) = 0x65;
        *puVar6 = 0x736c6166;
        puVar6 = (undefined4 *)((longlong)puVar6 + 5);
        goto LAB_1467eabe2;
      case 0xd:
        puVar6 = *(undefined4 **)(param_2 + 8);
        if (*(undefined4 **)(param_2 + 0x10) <= puVar6 + 1) {
          FUN_1402134d6(param_2,4);
          puVar6 = *(undefined4 **)(param_2 + 8);
        }
        *puVar6 = 0x65757274;
LAB_1467eb016:
        puVar6 = puVar6 + 1;
LAB_1467eabe2:
        *(undefined4 **)(param_2 + 8) = puVar6;
        break;
      case 0xe:
      case 0xf:
      case 0x10:
        local_88 = (undefined8 **)*puVar10;
        uStack_80 = (ulonglong *)puVar10[1];
        local_78 = (undefined4)puVar10[2];
        local_70 = &local_88;
        local_68 = (ulonglong *)CONCAT44(local_68._4_4_,0x14);
        ppuVar8 = &local_70;
        goto LAB_1467eabd5;
      case 0x11:
        uVar7 = (uint)*puVar10;
        uVar13 = *(uint *)((longlong)puVar10 + 4);
        uVar1 = (uint)puVar10[1];
        uVar2 = *(uint *)((longlong)puVar10 + 0xc);
        local_88 = (undefined8 **)
                   CONCAT44(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                            uVar13 << 0x18,
                            uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                            uVar7 << 0x18);
        uStack_80 = (ulonglong *)
                    CONCAT44(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                             uVar2 << 0x18,
                             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18);
        FUN_1468122ee(&local_88,param_2,3);
        break;
      case 0x12:
        uVar17 = *puVar10;
        local_70 = (undefined8 *)
                   (uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                    (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                    (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                    (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38);
        FUN_14047ad2e(&local_70,&local_88,L"%Y-%m-%dT%H:%M:%S.%sZ");
        goto LAB_1467eb101;
      case 0x13:
        uVar17 = *puVar10;
        local_70 = (undefined8 *)
                   (uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                    (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                    (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                    (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38);
        if ((longlong)local_70 + 863999999999U < 0x19254d37fff) {
          pwVar14 = L"%h:%m:%s.%n";
        }
        else {
          pwVar14 = L"%d.%h:%m:%s.%n";
        }
        FUN_14681ea84(&local_70,&local_88,pwVar14);
LAB_1467eb101:
        iVar12 = (int)uStack_80 + -1;
        if ((int)uStack_80 == 0) {
          iVar12 = 0;
        }
        FUN_144aa081e(param_2,local_88,iVar12);
        if (local_88 != (undefined8 **)0x0) {
          FUN_1400020a8();
        }
        break;
      case 0x14:
        local_70 = (undefined8 *)*puVar10;
        local_68 = (ulonglong *)CONCAT44(local_68._4_4_,(int)puVar10[1]);
        local_88 = &local_70;
        uStack_80 = (ulonglong *)CONCAT44(uStack_80._4_4_,0xc);
        ppuVar8 = (undefined8 **)&local_88;
LAB_1467eabd5:
        FUN_14682b3da(ppuVar8,param_2);
      }
switchD_1467eab24_caseD_15:
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      uVar17 = 0xffffffff;
      break;
    case 4:
      uVar17 = uVar4 >> 0x20;
      break;
    case 5:
      FUN_1467f3538(local_198,param_2,param_3);
    case 0:
      if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
switchD_1467eaa55_caseD_1:
    lVar9 = (longlong)uVar4 >> 0x20;
    if ((uint)uVar4 == 4) {
      lVar9 = 0;
    }
    lVar18 = lVar18 + lVar9 * 2;
  } while( true );
}



// FUNCTION 1467eb13c FUN_1467eb13c body=10 status=ok
// SIG undefined FUN_1467eb13c(void)

undefined8 * FUN_1467eb13c(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 1467eb146 FUN_1467eb146 body=121 status=ok
// SIG undefined FUN_1467eb146(void)

void FUN_1467eb146(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_146822224(param_1 + 0x28,local_38);
    FUN_1467ea9b4(lVar1,param_2,local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14276d40a(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467eb1ca FUN_1467eb1ca body=121 status=ok
// SIG undefined FUN_1467eb1ca(void)

void FUN_1467eb1ca(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_146822224(param_1 + 0x28,local_38);
    FUN_1467ea7fc(lVar1,param_2,local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14276d49c(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467eb24e FUN_1467eb24e body=150 status=ok
// SIG undefined FUN_1467eb24e(void)

undefined8 * FUN_1467eb24e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar4 = *(int *)(param_1 + 3);
  uVar3 = iVar4 + 1;
  *(uint *)(param_1 + 3) = uVar3;
  if (*(uint *)((longlong)param_1 + 0x1c) < uVar3) {
    FUN_1467f38ac(param_1 + 2);
  }
  lVar5 = param_1[2];
  lVar7 = (longlong)iVar4 * 0x10;
  *(undefined8 *)(lVar5 + lVar7) = *param_3;
  lVar2 = param_3[1];
  *(longlong *)(lVar5 + 8 + lVar7) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    iVar4 = *(int *)(lVar5 + 8);
    uVar6 = 0;
    do {
      if (iVar4 == 0) {
        lVar5 = 0;
        goto LAB_1467eb2bd;
      }
      LOCK();
      iVar1 = *(int *)(lVar5 + 8);
      bVar8 = iVar4 == iVar1;
      if (bVar8) {
        *(int *)(lVar5 + 8) = iVar4 + 1;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      UNLOCK();
    } while (!bVar8);
    uVar6 = *param_1;
  }
LAB_1467eb2bd:
  *param_2 = uVar6;
  param_2[1] = lVar5;
  return param_2;
}



// FUNCTION 1467eb2e4 FUN_1467eb2e4 body=113 status=ok
// SIG undefined FUN_1467eb2e4(void)

longlong * FUN_1467eb2e4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149e1d330;
  puVar1 = puVar2 + 2;
  FUN_1467f3932(puVar1);
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar2;
  FUN_1467f3a10(param_1,puVar1);
  return param_1;
}



// FUNCTION 1467eb356 FUN_1467eb356 body=114 status=ok
// SIG undefined FUN_1467eb356(void)

longlong FUN_1467eb356(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_1467ef6be(param_1 + 0x10,param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = *(longlong *)(param_2 + 0x28);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(longlong *)(param_1 + 0x28) = lVar4;
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
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 1467eb3c8 FUN_1467eb3c8 body=1319 status=ok
// SIG undefined FUN_1467eb3c8(void)

longlong * FUN_1467eb3c8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  longlong *local_128;
  longlong *local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 auStack_80 [2];
  longlong *local_78 [2];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144a5dc74(param_2);
  if ((*(int *)(param_1 + 0x18) < 1) ||
     (iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 8))(), iVar4 != 7)) {
    FUN_1467eb8f0(&local_88,*(undefined4 *)(param_1 + 0x30));
    FUN_140008f88(param_2,&local_88);
    if ((longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88) + 0x10))();
    }
    uVar7 = 0;
  }
  else {
    lVar9 = **(longlong **)(param_1 + 0x10);
    plVar6 = (longlong *)(*(longlong **)(param_1 + 0x10))[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar9 + 0x38) != *(int *)(param_1 + 0x30)) {
      FUN_1467eb8f0(local_d8);
      FUN_1413a400a(local_fc,L"SeverityMessageTokenFormatter");
      FUN_1413a400a(local_100,L"Core.MessageLog");
      FUN_140208bae(local_f8,local_100,local_fc,L"{0}:");
      FUN_14023409e(&local_e8,local_f8,1);
      local_88._0_4_ = 4;
      FUN_14023423e(local_78,local_d8);
      local_a8 = &local_88;
      local_a0 = (ulonglong *)local_68;
      FUN_14010d304(&local_98);
      local_b8 = local_e8;
      local_b0 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_c8,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      FUN_140008f88(param_2,local_c8);
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
    }
    uVar7 = 1;
    if (plVar6 != (longlong *)0x0) {
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
    }
  }
  if ((int)uVar7 < *(int *)(param_1 + 0x18)) {
    uVar8 = (ulonglong)uVar7;
    do {
      cVar3 = FUN_144a7c5f6(param_2);
      if (cVar3 == '\0') {
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + uVar8 * 0x10) + 0x10))
                           ();
        local_110 = (longlong *)*plVar6;
        if (local_110 != (longlong *)0x0) {
          (**(code **)(*local_110 + 8))();
        }
        local_108 = (undefined4)plVar6[1];
        local_120 = (longlong *)*param_2;
        if (local_120 != (longlong *)0x0) {
          (**(code **)(*local_120 + 8))();
        }
        local_118 = (undefined4)param_2[1];
        FUN_1413a400a(local_fc,L"AggregateMessageTokenFormatter");
        FUN_1413a400a(local_100,L"Core.MessageLog");
        FUN_140208bae(local_f8,local_100,local_fc,L"{0} {1}");
        FUN_14023409e(&local_130,local_f8,1);
        local_88._0_4_ = 4;
        FUN_14023423e(local_78,&local_120);
        local_68[0] = 4;
        FUN_14023423e(local_58,&local_110);
        local_a8 = &local_88;
        local_a0 = &local_48;
        FUN_14010d304(&local_98,&local_a8);
        local_b8 = local_130;
        local_b0 = local_128;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_128 + 1) = (int)local_128[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        lVar9 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_88 + lVar9) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_88 + lVar9) + 0x10))();
            *(undefined8 *)((longlong)&local_88 + lVar9) = 0;
            *(undefined4 *)((longlong)auStack_80 + lVar9) = 0;
          }
          plVar6 = local_128;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != -0x10);
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_128 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_120 != (longlong *)0x0) {
          (**(code **)(*local_120 + 0x10))();
        }
        if (local_110 != (longlong *)0x0) {
          (**(code **)(*local_110 + 0x10))();
        }
        FUN_140008f88(param_2,local_c8);
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
      }
      else {
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + uVar8 * 0x10) + 0x10))
                           ();
        plVar6 = (longlong *)*plVar5;
        plVar2 = (longlong *)*param_2;
        if (plVar2 != plVar6) {
          *param_2 = (longlong)plVar6;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(int *)(param_2 + 1) = (int)plVar5[1];
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x18));
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467eb8f0 FUN_1467eb8f0 body=258 status=ok
// SIG undefined FUN_1467eb8f0(void)

longlong * FUN_1467eb8f0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 1:
    pwVar3 = L"Error";
    break;
  case 2:
    FUN_1413a400a(local_2c,L"PerfWarning");
    FUN_1413a400a(local_30,L"Core.MessageLog");
    pwVar3 = L"Performance Warning";
    goto LAB_1467eb96f;
  case 3:
    pwVar3 = L"Warning";
    break;
  case 4:
    pwVar3 = L"Info";
    break;
  default:
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar2[1];
    goto LAB_1467eb974;
  }
  FUN_1413a400a(local_2c,pwVar3);
  FUN_1413a400a(local_30,L"Core.MessageLog");
LAB_1467eb96f:
  FUN_140208bae(param_1,local_30,local_2c,pwVar3);
LAB_1467eb974:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467eb9f4 FUN_1467eb9f4 body=103 status=ok
// SIG undefined FUN_1467eb9f4(void)

longlong * FUN_1467eb9f4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149e1d380;
  puVar1 = puVar2 + 2;
  FUN_1467f3ab8(puVar1);
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar2;
  FUN_1467f3c14(param_1,puVar1);
  return param_1;
}



// FUNCTION 1467eba5c FUN_1467eba5c body=99 status=ok
// SIG undefined FUN_1467eba5c(void)

void FUN_1467eba5c(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((DAT_14c845070 != (longlong *)0x0 && DAT_14c845078 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c845070 + 0x30))(), cVar1 != '\0')) {
    plVar2 = DAT_14c845070;
    if (DAT_14c845078 == 0) {
      plVar2 = (longlong *)0x0;
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1467ebac0 FUN_1467ebac0 body=113 status=ok
// SIG undefined FUN_1467ebac0(void)

longlong * FUN_1467ebac0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149e1d500;
  puVar1 = puVar2 + 2;
  FUN_1467ebb32(puVar1,param_2,param_3);
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar2;
  FUN_1467f41f0(param_1,puVar1);
  return param_1;
}



// FUNCTION 1467ebb32 FUN_1467ebb32 body=415 status=ok
// SIG undefined FUN_1467ebb32(void)

undefined8 * FUN_1467ebb32(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e1d760;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  plVar1 = param_1 + 5;
  FUN_144a5dc74(plVar1);
  *param_1 = &PTR_FUN_149e1b4a0;
  puVar2 = param_1 + 7;
  param_1[7] = 0;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 8) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar3,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar3 * 2);
  }
  cVar6 = FUN_144a7c5f6(param_3);
  if (cVar6 == '\0') {
    plVar4 = (longlong *)*param_3;
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar4) {
      *plVar1 = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *(int *)(param_1 + 6) = (int)param_3[1];
  }
  else {
    FUN_140009b9a(&local_48,puVar2);
    FUN_140008f88(plVar1,&local_48);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar1 = local_48;
  local_40 = 3;
  FUN_1467f3ea6(local_48,puVar2);
  *plVar1 = (longlong)&PTR_FUN_149e1d420;
  plVar1[4] = (longlong)FUN_1467eba5c;
  FUN_144a450dc(param_1 + 3,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ebcd2 FUN_1467ebcd2 body=66 status=ok
// SIG undefined FUN_1467ebcd2(void)

undefined8
FUN_1467ebcd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140b60818();
  uVar2 = FUN_140b6087d();
  FUN_140b6096c(param_1,param_2,uVar2,uVar1,param_4);
  return param_1;
}



// FUNCTION 1467ebd14 FUN_1467ebd14 body=2820 status=ok
// SIG undefined FUN_1467ebd14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1467ebd14(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  undefined1 *local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 **local_c0;
  code **local_b8;
  undefined1 local_ac [4];
  code *local_a8;
  undefined1 **local_a0;
  undefined ***local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1457ac5c8(param_1 + 0x18);
  FUN_1457ce514(param_1 + 0x158);
  *param_1 = 1;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ec819;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ec8ba;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ec95b;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ec9fc;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467eca9d;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ecb3e;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ecbdf;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ecc80;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ecd21;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_141703c58;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ecdc2;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ece63;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_1467ecf04;
  local_a8 = FUN_14276d564;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d860;
  local_80 = FUN_140b6070a;
  local_a8 = FUN_14276d564;
  local_100 = param_1 + 0x158;
  FUN_140dc6248(param_1,&local_a8);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_a8 = (code *)&DAT_14c758c24;
  local_a0 = (undefined1 **)&DAT_14c758c34;
  FUN_1457ae0f2(param_1 + 0x18,&local_f8,&local_a8,0);
  puVar1 = param_1 + 0x68;
  FUN_1457adc9c(puVar1,&local_a8,&DAT_14c758be4,0);
  FUN_1457adc9c(puVar1,&local_a8,&DAT_14c758bf4,0);
  FUN_1457adc9c(puVar1,&local_a8,&DAT_14c758b84,0);
  puVar1 = param_1 + 0x108;
  local_f8 = (undefined1 *)0x100000005;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_a8 = (code *)&DAT_14c758be4;
  local_a0 = &local_f8;
  FUN_140dc62b6(puVar1,&local_c0,&local_a8,0);
  local_f8 = (undefined1 *)0x100000005;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_a8 = (code *)&DAT_14c758bf4;
  local_a0 = &local_f8;
  FUN_140dc62b6(puVar1,&local_c0,&local_a8,0);
  local_f8 = &DAT_100000004;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_a8 = (code *)&DAT_14c758c04;
  local_a0 = &local_f8;
  FUN_140dc62b6(puVar1,&local_c0,&local_a8,0);
  local_f8 = &DAT_100000004;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_a8 = (code *)&DAT_14c758c14;
  local_a0 = &local_f8;
  FUN_140dc62b6(puVar1,&local_c0,&local_a8,0);
  local_f8 = &DAT_100000004;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_a8 = (code *)&DAT_14c758b74;
  local_a0 = &local_f8;
  FUN_140dc62b6(puVar1,&local_c0,&local_a8,0);
  local_f8 = (undefined1 *)0x3;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_a8 = (code *)&DAT_14c758b94;
  local_a0 = &local_f8;
  FUN_140dc62b6(puVar1,&local_c0,&local_a8,0);
  puVar1 = local_100;
  local_f8 = _DAT_14c758be4;
  uStack_f0 = uRam000000014c758bec;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d5a0;
  local_a8 = (code *)&LAB_14276d584;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce20c(local_100,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758bf4;
  uStack_f0 = uRam000000014c758bfc;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d5c0;
  local_a8 = (code *)&LAB_14276d62c;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce20c(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758b84;
  uStack_f0 = uRam000000014c758b8c;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d5e0;
  local_a8 = FUN_14276d6da;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce20c(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758be4;
  uStack_f0 = uRam000000014c758bec;
  local_e8 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  uStack_e0 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  puVar1 = param_1 + 0x1f8;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d600;
  local_a8 = FUN_14276d7a6;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce842(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758bf4;
  uStack_f0 = uRam000000014c758bfc;
  local_e8 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  uStack_e0 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d620;
  local_a8 = FUN_14276d880;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce842(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758c04;
  uStack_f0 = uRam000000014c758c0c;
  local_e8 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  uStack_e0 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d640;
  local_a8 = FUN_14276d95a;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce842(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758b94;
  uStack_f0 = uRam000000014c758b9c;
  local_e8 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  uStack_e0 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d660;
  local_a8 = FUN_14276da34;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce842(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758c14;
  uStack_f0 = uRam000000014c758c1c;
  local_e8 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  uStack_e0 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d680;
  local_a8 = FUN_14276db24;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce842(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_f8 = _DAT_14c758b74;
  uStack_f0 = uRam000000014c758b7c;
  local_e8 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  uStack_e0 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  local_d8 = DAT_14c758c44;
  uStack_d4 = DAT_14c758c48;
  uStack_d0 = DAT_14c758c4c;
  uStack_cc = DAT_14c758c50;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149e1d6e0;
  local_a8 = FUN_14276dd32;
  local_c0 = &local_f8;
  local_b8 = &local_a8;
  FUN_1457ce842(puVar1,local_ac,&local_c0,0);
  if (local_a8 != (code *)0x0) {
    pppuVar2 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar2 = local_98;
    }
    (*(code *)(*pppuVar2)[2])(pppuVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ec819 FUN_1467ec819 body=160 status=ok
// SIG undefined FUN_1467ec819(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ec819(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e06140,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758c24;
    uStack_84 = uRam000000014c758c28;
    uStack_80 = uRam000000014c758c2c;
    uStack_7c = uRam000000014c758c30;
    local_78 = &PTR_FUN_149e1d960;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ec8ba FUN_1467ec8ba body=160 status=ok
// SIG undefined FUN_1467ec8ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ec8ba(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e06144,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758c34;
    uStack_84 = uRam000000014c758c38;
    uStack_80 = uRam000000014c758c3c;
    uStack_7c = uRam000000014c758c40;
    local_78 = &PTR_FUN_149e1d980;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ec95b FUN_1467ec95b body=160 status=ok
// SIG undefined FUN_1467ec95b(void)

longlong FUN_1467ec95b(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e1b4ca,0);
  if (local_28 == '\x01') {
    local_88 = DAT_14c758ba4;
    uStack_84 = DAT_14c758ba8;
    uStack_80 = DAT_14c758bac;
    uStack_7c = DAT_14c758bb0;
    local_78 = &PTR_FUN_149e1d840;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ec9fc FUN_1467ec9fc body=160 status=ok
// SIG undefined FUN_1467ec9fc(void)

longlong FUN_1467ec9fc(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e1b4d0,0);
  if (local_28 == '\x01') {
    local_88 = DAT_14c758bb4;
    uStack_84 = DAT_14c758bb8;
    uStack_80 = DAT_14c758bbc;
    uStack_7c = DAT_14c758bc0;
    local_78 = &PTR_FUN_149e1d880;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467eca9d FUN_1467eca9d body=160 status=ok
// SIG undefined FUN_1467eca9d(void)

longlong FUN_1467eca9d(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e1b4d6,0);
  if (local_28 == '\x01') {
    local_88 = DAT_14c758bc4;
    uStack_84 = DAT_14c758bc8;
    uStack_80 = DAT_14c758bcc;
    uStack_7c = DAT_14c758bd0;
    local_78 = &PTR_FUN_149e1d8a0;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ecb3e FUN_1467ecb3e body=160 status=ok
// SIG undefined FUN_1467ecb3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ecb3e(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e1b4dc,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758bd4;
    uStack_84 = _DAT_14c758bd8;
    uStack_80 = _DAT_14c758bdc;
    uStack_7c = _DAT_14c758be0;
    local_78 = &PTR_FUN_149e1d8c0;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ecbdf FUN_1467ecbdf body=160 status=ok
// SIG undefined FUN_1467ecbdf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ecbdf(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e06124,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758be4;
    uStack_84 = uRam000000014c758be8;
    uStack_80 = uRam000000014c758bec;
    uStack_7c = uRam000000014c758bf0;
    local_78 = &PTR_FUN_149e1d8e0;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ecc80 FUN_1467ecc80 body=160 status=ok
// SIG undefined FUN_1467ecc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ecc80(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e1419a,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758bf4;
    uStack_84 = uRam000000014c758bf8;
    uStack_80 = uRam000000014c758bfc;
    uStack_7c = uRam000000014c758c00;
    local_78 = &PTR_FUN_149e1d900;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ecd21 FUN_1467ecd21 body=160 status=ok
// SIG undefined FUN_1467ecd21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ecd21(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e060b2,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758c04;
    uStack_84 = uRam000000014c758c08;
    uStack_80 = uRam000000014c758c0c;
    uStack_7c = uRam000000014c758c10;
    local_78 = &PTR_FUN_149e1d920;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ecdc2 FUN_1467ecdc2 body=160 status=ok
// SIG undefined FUN_1467ecdc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ecdc2(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e1dd00,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758b74;
    uStack_84 = uRam000000014c758b78;
    uStack_80 = uRam000000014c758b7c;
    uStack_7c = uRam000000014c758b80;
    local_78 = &PTR_FUN_149e1d540;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ece63 FUN_1467ece63 body=160 status=ok
// SIG undefined FUN_1467ece63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ece63(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,L"sqrt",0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758b84;
    uStack_84 = uRam000000014c758b88;
    uStack_80 = uRam000000014c758b8c;
    uStack_7c = uRam000000014c758b90;
    local_78 = &PTR_FUN_149e1d560;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ecf04 FUN_1467ecf04 body=160 status=ok
// SIG undefined FUN_1467ecf04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467ecf04(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e1b4ec,0);
  if (local_28 == '\x01') {
    local_88 = _DAT_14c758b94;
    uStack_84 = uRam000000014c758b98;
    uStack_80 = uRam000000014c758b9c;
    uStack_7c = uRam000000014c758ba0;
    local_78 = &PTR_FUN_149e1d580;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ecfa6 FUN_1467ecfa6 body=1555 status=ok
// SIG undefined FUN_1467ecfa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1467ecfa6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [4];
  undefined1 local_284 [4];
  longlong *local_280;
  int local_278;
  undefined **local_270;
  longlong local_268;
  undefined8 local_260;
  undefined1 local_258 [8];
  int local_250;
  undefined4 local_24c;
  int *local_248;
  undefined8 uStack_240;
  int local_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  undefined **local_228;
  undefined8 local_220;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int local_ec;
  undefined8 local_e0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  int *local_78;
  undefined8 uStack_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1449078e7(&local_78,param_3,param_1);
  if ((&DAT_149e19eee)[local_68] == '\0') {
    FUN_14023423e(&local_f8,&local_78);
    (*(code *)(&PTR_FUN_149e19f00)[local_68])(&local_78);
    local_68 = 2;
    FUN_14023423e(param_2,&local_f8);
    *(undefined1 *)(param_2 + 2) = 1;
    if ((longlong *)CONCAT44(iStack_f4,local_f8) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(iStack_f4,local_f8) + 0x10))();
    }
    goto LAB_1467ed371;
  }
  local_248 = local_78;
  uStack_240 = uStack_70;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  (*(code *)(&PTR_FUN_149e19f00)[local_68])(&local_78);
  local_68 = 2;
  if ((int)uStack_240 == 0) {
    local_250 = 0;
  }
  else {
    local_88 = *(ulonglong *)(local_248 + 0x14);
    local_98 = *(undefined8 *)(local_248 + 0x10);
    uStack_90 = *(undefined8 *)(local_248 + 0x12);
    iVar1 = *local_248;
    iVar2 = local_248[1];
    iVar3 = local_248[2];
    iVar4 = local_248[3];
    if (local_248 == (int *)&DAT_ffffffffffffffe8 ||
        (DAT_14c758bb0 != iVar4 ||
        (DAT_14c758bac != iVar3 || (DAT_14c758ba8 != iVar2 || DAT_14c758ba4 != iVar1)))) {
      if ((DAT_14c758bc0 == iVar4 &&
          (DAT_14c758bbc == iVar3 && (DAT_14c758bb8 == iVar2 && DAT_14c758bb4 == iVar1))) &&
          local_248 != (int *)&DAT_ffffffffffffffe8) {
        local_178 = _DAT_14c758bf4;
        uStack_174 = uRam000000014c758bf8;
        uStack_170 = uRam000000014c758bfc;
        uStack_16c = uRam000000014c758c00;
        puVar7 = &local_178;
        ppuVar6 = &PTR_FUN_149e1d900;
      }
      else if ((DAT_14c758bd0 == iVar4 &&
               (DAT_14c758bcc == iVar3 && (DAT_14c758bc8 == iVar2 && DAT_14c758bc4 == iVar1))) &&
               local_248 != (int *)&DAT_ffffffffffffffe8) {
        local_1b8 = _DAT_14c758c04;
        uStack_1b4 = uRam000000014c758c08;
        uStack_1b0 = uRam000000014c758c0c;
        uStack_1ac = uRam000000014c758c10;
        puVar7 = &local_1b8;
        ppuVar6 = &PTR_FUN_149e1d920;
      }
      else {
        local_250 = (int)uStack_240;
        if ((iVar4 != _DAT_14c758be0 ||
            (iVar3 != _DAT_14c758bdc || (iVar2 != _DAT_14c758bd8 || iVar1 != _DAT_14c758bd4))) ||
            local_248 == (int *)&DAT_ffffffffffffffe8) goto LAB_1467ed167;
        local_1f8 = _DAT_14c758c14;
        uStack_1f4 = uRam000000014c758c18;
        uStack_1f0 = uRam000000014c758c1c;
        uStack_1ec = uRam000000014c758c20;
        puVar7 = &local_1f8;
        ppuVar6 = &PTR_FUN_149e1d940;
      }
    }
    else {
      puVar7 = &local_138;
      local_138 = _DAT_14c758be4;
      uStack_134 = uRam000000014c758be8;
      uStack_130 = uRam000000014c758bec;
      uStack_12c = uRam000000014c758bf0;
      ppuVar6 = &PTR_FUN_149e1d8e0;
    }
    *(undefined ***)(puVar7 + 4) = ppuVar6;
    FUN_141151bf0(&local_f8,puVar7);
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (undefined4)uStack_90;
    uStack_ac = uStack_90._4_4_;
    local_a8 = local_88;
    FUN_1448f2150(puVar7);
    FUN_1467ed5ba(&local_248,&local_f8,0);
    FUN_1448f2150(&local_f8);
    local_238 = DAT_14c758c44;
    iStack_234 = DAT_14c758c48;
    iStack_230 = DAT_14c758c4c;
    iStack_22c = DAT_14c758c50;
    local_228 = &PTR_FUN_149e1d520;
    local_220 = param_4;
    FUN_141151bf0(&local_f8,&local_238);
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (undefined4)uStack_90;
    uStack_ac = uStack_90._4_4_;
    local_a8 = local_88;
    FUN_1448f2150(&local_238);
    FUN_1467ed5ba(&local_248,&local_f8,0);
    FUN_1448f2150(&local_f8);
    FUN_1448f2150(local_248 + 0x30);
    local_250 = (int)uStack_240;
    if ((int)uStack_240 + -3 != 0) {
      memmove(local_248 + 0x30,local_248 + 0x48,(longlong)((int)uStack_240 + -3) * 0x60);
    }
    local_250 = local_250 + -1;
  }
LAB_1467ed167:
  local_24c = uStack_240._4_4_;
  local_248 = (int *)0x0;
  uStack_240 = 0;
  FUN_140f5b56a(&local_98,local_258,param_1 + 0x18);
  if ((&DAT_149e1da58)[local_88 & 0xff] == '\0') {
    FUN_14023423e(&local_f8,&local_98);
    (*(code *)(&PTR_FUN_149e1da60)[local_88 & 0xff])(&local_98);
    local_88 = CONCAT71(local_88._1_7_,2);
    FUN_14023423e(param_2,&local_f8);
    *(undefined1 *)(param_2 + 2) = 1;
    if ((longlong *)CONCAT44(iStack_f4,local_f8) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(iStack_f4,local_f8) + 0x10))();
    }
  }
  else {
    local_268 = param_1 + 0x158;
    local_270 = &PTR_FUN_149e1da80;
    local_260 = 0;
    FUN_14488fa50(&local_f8,&local_98);
    if ((&DAT_149e1dc64)[(byte)local_b8] == '\0') {
      plVar5 = (longlong *)CONCAT44(iStack_f4,local_f8);
      *param_2 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
LAB_1467ed321:
      *(int *)(param_2 + 1) = local_f0;
      *(undefined1 *)(param_2 + 2) = 1;
    }
    else if ((((local_f8 == DAT_14c758c44) && (iStack_f4 == DAT_14c758c48)) &&
             (local_f0 == DAT_14c758c4c)) && (local_ec == DAT_14c758c50)) {
      *param_2 = local_e0;
      *(undefined1 *)(param_2 + 2) = 0;
    }
    else {
      FUN_1413a400a(local_284,L"UnrecognizedResult");
      FUN_1413a400a(local_288,L"BasicMathExpressionEvaluator");
      FUN_140208bae(&local_280,local_288,local_284,L"Unrecognized result returned from expression");
      *param_2 = local_280;
      local_f0 = local_278;
      if (local_280 == (longlong *)0x0) goto LAB_1467ed321;
      (**(code **)(*local_280 + 8))();
      *(int *)(param_2 + 1) = local_278;
      *(undefined1 *)(param_2 + 2) = 1;
      if (local_280 != (longlong *)0x0) {
        (**(code **)(*local_280 + 0x10))();
      }
    }
    (*(code *)(&PTR_LAB_149e1d9c0)[(byte)local_b8])();
  }
  (*(code *)(&PTR_FUN_149e1da60)[local_88 & 0xff])();
  FUN_1449079f2(local_248,uStack_240 & 0xffffffff);
  if (local_248 != (int *)0x0) {
    FUN_1400020a8();
  }
LAB_1467ed371:
  (*(code *)(&PTR_FUN_149e19f00)[local_68])();
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467ed5ba FUN_1467ed5ba body=139 status=ok
// SIG undefined FUN_1467ed5ba(void)

int FUN_1467ed5ba(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140188580(param_1,iVar2);
  }
  lVar4 = (longlong)param_3 * 0x60;
  memmove((void *)(*param_1 + lVar4 + 0x60),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar2 - param_3) * 0x60);
  lVar3 = *param_1;
  FUN_141151bf0(lVar3 + lVar4,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar4);
  *puVar1 = *(undefined8 *)(param_2 + 0x40);
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar3 + 0x50 + lVar4) = *(undefined8 *)(param_2 + 0x50);
  return param_3;
}



// FUNCTION 1467ed646 FUN_1467ed646 body=39 status=ok
// SIG undefined FUN_1467ed646(void)

undefined4 * FUN_1467ed646(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0x3f800000;
  return param_1;
}



// FUNCTION 1467ed66e FUN_1467ed66e body=78 status=ok
// SIG undefined FUN_1467ed66e(void)

void FUN_1467ed66e(undefined4 *param_1,byte *param_2)

{
  *param_1 = *(undefined4 *)(&DAT_14c758770 + (ulonglong)param_2[2] * 4);
  param_1[1] = *(undefined4 *)(&DAT_14c758770 + (ulonglong)param_2[1] * 4);
  param_1[2] = *(undefined4 *)(&DAT_14c758770 + (ulonglong)*param_2 * 4);
  param_1[3] = (float)param_2[3] * 0.003921569;
  return;
}



// FUNCTION 1467ed6bc FUN_1467ed6bc body=273 status=ok
// SIG undefined FUN_1467ed6bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467ed6bc(undefined1 (*param_1) [16],longlong param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  
  auVar7 = _DAT_149e1a210;
  auVar6 = _DAT_149e1a200;
  auVar5 = _DAT_1499378f0;
  if (0 < param_3) {
    lVar8 = 0;
    auVar9 = pmovzxbd(in_XMM3,0xffffffff);
    do {
      auVar11 = maxps(*param_1,auVar6);
      auVar11 = minps(auVar11,auVar7);
      fVar10 = auVar11._0_4_;
      fVar13 = auVar11._4_4_;
      fVar15 = auVar11._8_4_;
      auVar16._4_4_ =
           *(undefined4 *)
            (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar13 + -0x39000000) >> 0x14) * 4);
      auVar16._0_4_ =
           *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar10 + 0xc7000000U >> 0x14) * 4);
      auVar16._8_4_ =
           *(undefined4 *)
            (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar15 + -0x39000000) >> 0x14) * 4);
      auVar16._12_4_ = 0;
      auVar14._0_4_ = (uint)fVar10 >> 0xc;
      auVar14._4_4_ = (uint)fVar13 >> 0xc;
      auVar14._8_4_ = (uint)fVar15 >> 0xc;
      auVar14._12_4_ = (uint)auVar11._12_4_ >> 0xc;
      auVar14 = pmaddwd(auVar14 & auVar9 | auVar5,auVar16);
      auVar12._4_4_ = (int)(fVar13 * 0.0 + 0.5) | auVar14._4_4_ >> 0x10;
      auVar12._12_4_ = (int)(auVar11._12_4_ * 255.0 + 0.5) | auVar14._12_4_ >> 0x10;
      auVar12._0_4_ = (int)(fVar15 * 0.0 + 0.5) | auVar14._8_4_ >> 0x10;
      auVar12._8_4_ = (int)(fVar10 * 0.0 + 0.5) | auVar14._0_4_ >> 0x10;
      auVar11 = packssdw(auVar12,auVar12);
      sVar1 = auVar11._0_2_;
      sVar2 = auVar11._2_2_;
      sVar3 = auVar11._4_2_;
      sVar4 = auVar11._6_2_;
      *(uint *)(param_2 + lVar8 * 4) =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar11[6] - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar11[4] - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar11[2] - (0xff < sVar2),
                                      (0 < sVar1) * (sVar1 < 0x100) * auVar11[0] - (0xff < sVar1))))
      ;
      lVar8 = lVar8 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != lVar8);
  }
  return;
}



// FUNCTION 1467ed7ce FUN_1467ed7ce body=162 status=ok
// SIG undefined FUN_1467ed7ce(void)

float * FUN_1467ed7ce(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)FUN_14064fe5c();
  fVar1 = param_1[3];
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  *param_2 = (fVar4 - *param_1) * param_3 + *param_1;
  param_2[1] = (fVar4 - fVar3) * param_3 + fVar3;
  param_2[2] = (fVar4 - fVar2) * param_3 + fVar2;
  param_2[3] = (0.0 - fVar1) * param_3 + fVar1;
  return param_2;
}



// FUNCTION 1467ed870 FUN_1467ed870 body=142 status=ok
// SIG undefined FUN_1467ed870(void)

float * FUN_1467ed870(byte *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  float fVar4;
  
  if (param_1[3] == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 1.0;
  }
  else {
    dVar3 = ldexp(1.0,param_1[3] - 0x88);
    fVar4 = (float)dVar3;
    bVar1 = *param_1;
    bVar2 = param_1[1];
    *param_2 = ((float)param_1[2] + 0.5) * fVar4;
    param_2[1] = ((float)bVar2 + 0.5) * fVar4;
    param_2[2] = ((float)bVar1 + 0.5) * fVar4;
    param_2[3] = 1.0;
  }
  return param_2;
}



// FUNCTION 1467ed8fe FUN_1467ed8fe body=303 status=ok
// SIG undefined FUN_1467ed8fe(void)

float * FUN_1467ed8fe(float *param_1,byte param_2,byte param_3,byte param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_58 [32];
  float local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = (float)param_4 / 255.0;
  fVar3 = (float)param_3 / 255.0;
  fVar2 = ((float)param_2 * 1.40625) / 60.0;
  auVar4 = roundss(in_XMM3,ZEXT416((uint)fVar2),9);
  fVar2 = fVar2 - auVar4._0_4_;
  local_38[1] = (1.0 - fVar3) * local_38[0];
  local_38[2] = (1.0 - fVar2 * fVar3) * local_38[0];
  uVar1 = (ulonglong)auVar4._0_4_;
  local_38[3] = (1.0 - (1.0 - fVar2) * fVar3) * local_38[0];
  uVar1 = (ulonglong)(uint)((int)uVar1 + (int)((uVar1 & 0xffffffff) / 6) * -6);
  fVar2 = local_38[*(uint *)(&DAT_149e1b588 + uVar1 * 0xc)];
  fVar3 = local_38[*(uint *)(&DAT_149e1b584 + uVar1 * 0xc)];
  *param_1 = local_38[*(uint *)(&DAT_149e1b580 + uVar1 * 0xc)];
  param_1[1] = fVar3;
  param_1[2] = fVar2;
  param_1[3] = 1.0;
  uVar1 = local_20 ^ (ulonglong)auStack_58;
  if (uVar1 == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar1);
}



// FUNCTION 1467eda2e FUN_1467eda2e body=268 status=ok
// SIG undefined FUN_1467eda2e(void)

float * FUN_1467eda2e(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_58 [32];
  float local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar1 = param_1[1];
  local_38[0] = param_1[2];
  auVar5 = roundss(in_XMM3,ZEXT416((uint)(*param_1 / 60.0)),9);
  fVar4 = *param_1 / 60.0 - auVar5._0_4_;
  local_38[1] = (1.0 - fVar1) * local_38[0];
  local_38[2] = (1.0 - fVar4 * fVar1) * local_38[0];
  local_38[3] = (1.0 - (1.0 - fVar4) * fVar1) * local_38[0];
  uVar3 = (ulonglong)auVar5._0_4_;
  uVar3 = (ulonglong)(uint)((int)uVar3 + (int)((uVar3 & 0xffffffff) / 6) * -6);
  fVar1 = param_1[3];
  fVar4 = local_38[*(uint *)(&DAT_149e1b588 + uVar3 * 0xc)];
  fVar2 = local_38[*(uint *)(&DAT_149e1b584 + uVar3 * 0xc)];
  *param_2 = local_38[*(uint *)(&DAT_149e1b580 + uVar3 * 0xc)];
  param_2[1] = fVar2;
  param_2[2] = fVar4;
  param_2[3] = fVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467edb3c FUN_1467edb3c body=284 status=ok
// SIG undefined FUN_1467edb3c(void)

float * FUN_1467edb3c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_1[2];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = fVar2;
  if (fVar3 <= fVar2) {
    fVar4 = fVar3;
  }
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  fVar6 = fVar2;
  if (fVar2 <= fVar3) {
    fVar6 = fVar3;
  }
  if (fVar6 <= fVar1) {
    fVar6 = fVar1;
  }
  fVar7 = fVar6 - fVar4;
  fVar5 = 0.0;
  if ((fVar6 != fVar4) || (NAN(fVar6) || NAN(fVar4))) {
    if ((fVar6 != fVar2) || (NAN(fVar6) || NAN(fVar2))) {
      if ((fVar6 != fVar3) || (NAN(fVar6) || NAN(fVar3))) {
        if ((fVar6 == fVar1) && (!NAN(fVar6) && !NAN(fVar1))) {
          fVar5 = ((fVar2 - fVar3) / fVar7) * 60.0 + 240.0;
        }
      }
      else {
        fVar5 = ((fVar1 - fVar2) / fVar7) * 60.0 + 120.0;
      }
    }
    else {
      fVar5 = (float)FUN_1447c7e44(((fVar3 - fVar1) / fVar7) * 60.0 + 360.0);
    }
  }
  fVar1 = param_1[3];
  *param_2 = fVar5;
  param_2[1] = (float)(~-(uint)(fVar6 == 0.0) & (uint)(fVar7 / fVar6));
  param_2[2] = fVar6;
  param_2[3] = fVar1;
  return param_2;
}



// FUNCTION 1467edc58 FUN_1467edc58 body=495 status=ok
// SIG undefined FUN_1467edc58(void)

float * FUN_1467edc58(float *param_1,longlong param_2,longlong param_3,float param_4)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68 [6];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1467edb3c(param_2,&local_78);
  FUN_1467edb3c(param_3,&local_88);
  if (180.0 < ABS(local_78 - local_88)) {
    if (local_88 <= local_78) {
      local_88 = local_88 + 360.0;
    }
    else {
      local_78 = local_78 + 360.0;
    }
  }
  fVar3 = (float)FUN_1447c7e44((local_88 - local_78) * param_4 + local_78);
  local_74 = (local_84 - local_74) * param_4 + local_74;
  local_68[0] = (local_80 - local_70) * param_4 + local_70;
  fVar3 = (float)(~-(uint)(fVar3 < 0.0) & (uint)fVar3 | (uint)(fVar3 + 360.0) & -(uint)(fVar3 < 0.0)
                 ) / 60.0;
  auVar4 = roundss(ZEXT816(0),ZEXT416((uint)fVar3),9);
  fVar3 = fVar3 - auVar4._0_4_;
  local_68[1] = (1.0 - local_74) * local_68[0];
  local_68[2] = (1.0 - fVar3 * local_74) * local_68[0];
  local_68[3] = (1.0 - (1.0 - fVar3) * local_74) * local_68[0];
  uVar2 = (ulonglong)auVar4._0_4_;
  uVar2 = (ulonglong)(uint)((int)uVar2 + (int)((uVar2 & 0xffffffff) / 6) * -6);
  fVar3 = local_68[*(uint *)(&DAT_149e1b588 + uVar2 * 0xc)];
  fVar1 = local_68[*(uint *)(&DAT_149e1b584 + uVar2 * 0xc)];
  *param_1 = local_68[*(uint *)(&DAT_149e1b580 + uVar2 * 0xc)];
  param_1[1] = fVar1;
  param_1[2] = fVar3;
  param_1[3] = (*(float *)(param_3 + 0xc) - *(float *)(param_2 + 0xc)) * param_4 +
               *(float *)(param_2 + 0xc);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ede48 FUN_1467ede48 body=241 status=ok
// SIG undefined FUN_1467ede48(void)

undefined4 * FUN_1467ede48(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *in_RCX;
  float fVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_38 [32];
  undefined8 local_18;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  UNLOCK();
  fVar4 = ((float)(DAT_14c8450b0 & 0xff) * 1.40625) / 60.0;
  auVar5._4_4_ = (int)((ulonglong)param_1 >> 0x20);
  auVar5._0_4_ = fVar4;
  auVar5._8_4_ = in_XMM0_Dc;
  auVar5._12_4_ = in_XMM0_Dd;
  auVar5 = roundss(in_XMM1,auVar5,9);
  fVar4 = fVar4 - auVar5._0_4_;
  local_18 = 0x3f800000;
  local_10 = 1.0 - fVar4;
  uVar3 = (ulonglong)auVar5._0_4_;
  local_c = fVar4 + -1.0 + 1.0;
  uVar3 = (ulonglong)(uint)((int)uVar3 + (int)((uVar3 & 0xffffffff) / 6) * -6);
  uVar1 = *(undefined4 *)
           ((longlong)&local_18 + (ulonglong)*(uint *)(&DAT_149e1b588 + uVar3 * 0xc) * 4);
  uVar2 = *(undefined4 *)
           ((longlong)&local_18 + (ulonglong)*(uint *)(&DAT_149e1b584 + uVar3 * 0xc) * 4);
  DAT_14c8450b0 = DAT_14c8450b0 + 0x9d;
  *in_RCX = *(undefined4 *)
             ((longlong)&local_18 + (ulonglong)*(uint *)(&DAT_149e1b580 + uVar3 * 0xc) * 4);
  in_RCX[1] = uVar2;
  in_RCX[2] = uVar1;
  in_RCX[3] = 0x3f800000;
  uVar3 = local_8 ^ (ulonglong)auStack_38;
  if (uVar3 == DAT_14c707940) {
    return in_RCX;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 1467edf3a FUN_1467edf3a body=405 status=ok
// SIG undefined FUN_1467edf3a(void)

float * FUN_1467edf3a(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (15000.0 <= param_2) {
    param_2 = 15000.0;
  }
  if (param_2 <= 1000.0) {
    param_2 = 1000.0;
  }
  fVar2 = (param_2 * 1.2864122e-07 * param_2 + param_2 * 0.00015411826 + 0.86011773) /
          (param_2 * 7.0814514e-07 * param_2 + param_2 * 0.0008424202 + 1.0);
  fVar4 = (param_2 * 4.2048168e-08 * param_2 + param_2 * 4.2280626e-05 + 0.31739873) /
          (param_2 * 1.6145606e-07 * param_2 + param_2 * -2.8974182e-05 + 1.0);
  fVar3 = fVar2 + fVar2 + fVar4 * -8.0 + 4.0;
  fVar1 = (fVar2 * 3.0) / fVar3;
  fVar3 = (fVar4 + fVar4) / fVar3;
  fVar2 = 1.0 / fVar3;
  fVar4 = fVar1 * fVar2;
  fVar2 = fVar2 * ((1.0 - fVar1) - fVar3);
  fVar3 = fVar2 * -0.4985314 + fVar4 * 3.2404542 + -1.5371385;
  fVar5 = fVar2 * 0.041556 + fVar4 * -0.969266 + 1.8760108;
  fVar1 = fVar2 * 1.0572252 + fVar4 * 0.0556434 + -0.2040259;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar5) {
    fVar1 = fVar5;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_1 = fVar4;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = 1.0;
  return param_1;
}



// FUNCTION 1467ee0d0 FUN_1467ee0d0 body=196 status=ok
// SIG undefined FUN_1467ee0d0(void)

undefined4 FUN_1467ee0d0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  param_1[1] = 0x3f80000000000000;
  *param_1 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_14170b16c(puVar3,&DAT_149e1dcf4,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    cVar1 = FUN_14170b16c(puVar3,&DAT_149e1dcee,(longlong)param_1 + 4);
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      uVar2 = FUN_14170b16c(puVar3,&DAT_149e1dce8,param_1 + 1);
      goto LAB_1467ee14e;
    }
  }
  uVar2 = 0;
LAB_1467ee14e:
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_14170b16c(puVar3,&DAT_149e1dcfa,(longlong)param_1 + 0xc);
  return uVar2;
}



// FUNCTION 1467ee194 FUN_1467ee194 body=57 status=ok
// SIG undefined FUN_1467ee194(void)

undefined8 FUN_1467ee194(undefined1 *param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"(R=%i,G=%i,B=%i,A=%i)",param_1[2],param_1[1],*param_1,param_1[3]);
  return param_2;
}



// FUNCTION 1467ee1ce FUN_1467ee1ce body=181 status=ok
// SIG undefined FUN_1467ee1ce(void)

undefined4 FUN_1467ee1ce(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0xff000000;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_146816b88(puVar3,&DAT_149e1dcf4,(longlong)param_1 + 2);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    cVar1 = FUN_146816b88(puVar3,&DAT_149e1dcee,(longlong)param_1 + 1);
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      uVar2 = FUN_146816b88(puVar3,&DAT_149e1dce8,param_1);
      goto LAB_1467ee23a;
    }
  }
  uVar2 = 0;
LAB_1467ee23a:
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_146816b88(puVar3,&DAT_149e1dcfa,(longlong)param_1 + 3);
  return uVar2;
}



// FUNCTION 1467ee290 FUN_1467ee290 body=98 status=ok
// SIG undefined FUN_1467ee290(void)

undefined8 * FUN_1467ee290(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  FUN_1467f53cc(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(lVar3 + 8);
    uVar4 = 0;
    do {
      if (iVar2 == 0) {
        lVar3 = 0;
        goto LAB_1467ee2d4;
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 8);
      bVar5 = iVar2 == iVar1;
      if (bVar5) {
        *(int *)(lVar3 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar5);
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
LAB_1467ee2d4:
  *param_2 = uVar4;
  param_2[1] = lVar3;
  FUN_1449db362(param_3);
  return param_2;
}



// FUNCTION 1467ee2f2 FUN_1467ee2f2 body=65 status=ok
// SIG undefined FUN_1467ee2f2(void)

undefined8 * FUN_1467ee2f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e1b4a0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1467f3db2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ee33a FUN_1467ee33a body=53 status=ok
// SIG undefined FUN_1467ee33a(void)

void FUN_1467ee33a(void)

{
  FUN_1467ee370();
  if (DAT_14c844cc8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c844ca8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467ee370 FUN_1467ee370 body=342 status=ok
// SIG undefined FUN_1467ee370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467ee370(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c844cb8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c844cd0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c844ca8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_1449db362(*local_58 + (longlong)iStack_3c * 0x20 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14c844cb0 = 0;
  if (DAT_14c844cb4 != 0) {
    FUN_1446f4a44(&DAT_14c844ca8,0);
  }
  _DAT_14c844cd8 = 0xffffffff;
  DAT_14c844cd0 = 0;
  if (0x80 < DAT_14c844cd4) {
    DAT_14c844cd4 = 0x80;
    FUN_1446efbd8(&DAT_14c844cb8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ee4c7 FUN_1467ee4c7 body=68 status=ok
// SIG undefined FUN_1467ee4c7(void)

void FUN_1467ee4c7(undefined8 param_1,undefined4 param_2)

{
  wchar_t *_Str;
  size_t sVar1;
  
  FUN_1400020e8(param_1,L"EDateTimeStyle::",0x10);
  _Str = (wchar_t *)FUN_1467d2800(param_2);
  sVar1 = wcslen(_Str);
  FUN_1400020e8(param_1,_Str,sVar1 & 0xffffffff);
  return;
}



// FUNCTION 1467ee50b FUN_1467ee50b body=207 status=ok
// SIG undefined FUN_1467ee50b(void)

longlong FUN_1467ee50b(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = DAT_14c8450c0 + -1;
  puVar6 = DAT_14c8450b8;
  if (DAT_14c8450c0 == 0) {
    puVar6 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  iVar4 = FUN_144a54874(param_1,puVar6,(longlong)iVar3);
  if (iVar4 == 0) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    lVar5 = FUN_1467dfda7(param_1 + (longlong)iVar3 * 2);
    if (lVar5 == 0) {
LAB_1467ee5c2:
      bVar1 = true;
    }
    else {
      puVar6 = local_38;
      if ((int)uStack_30 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      cVar2 = FUN_1467d25e9(param_2,puVar6);
      if (cVar2 == '\0') goto LAB_1467ee5c2;
      bVar1 = false;
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar1) goto LAB_1467ee55f;
  }
  lVar5 = 0;
LAB_1467ee55f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ee5dc FUN_1467ee5dc body=32 status=ok
// SIG undefined FUN_1467ee5dc(void)

undefined8 FUN_1467ee5dc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FMemoryReader");
  return param_2;
}



// FUNCTION 1467ee600 FUN_1467ee600 body=65 status=ok
// SIG undefined FUN_1467ee600(void)

undefined8 FUN_1467ee600(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    FUN_140002266(param_2,L"FMemoryWriter%d",4);
  }
  else {
    FUN_1400021e4(param_1 + 0xa0,param_2);
  }
  return param_2;
}



// FUNCTION 1467ee64e FUN_1467ee64e body=38 status=ok
// SIG undefined FUN_1467ee64e(void)

undefined8 FUN_1467ee64e(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ee674 FUN_1467ee674 body=132 status=ok
// SIG undefined FUN_1467ee674(void)

void FUN_1467ee674(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467ee6fa FUN_1467ee6fa body=38 status=ok
// SIG undefined FUN_1467ee6fa(void)

undefined8 FUN_1467ee6fa(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ee720 FUN_1467ee720 body=32 status=ok
// SIG undefined FUN_1467ee720(void)

undefined8 FUN_1467ee720(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FMemoryReaderView");
  return param_2;
}



// FUNCTION 1467ee77a FUN_1467ee77a body=93 status=ok
// SIG undefined FUN_1467ee77a(void)

void FUN_1467ee77a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e1b900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467ee7d8 FUN_1467ee7d8 body=93 status=ok
// SIG undefined FUN_1467ee7d8(void)

void FUN_1467ee7d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e1b900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467ee836 FUN_1467ee836 body=126 status=ok
// SIG undefined FUN_1467ee836(void)

void FUN_1467ee836(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e1b900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467ee8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467ee8b4 FUN_1467ee8b4 body=21 status=ok
// SIG undefined FUN_1467ee8b4(void)

undefined8 FUN_1467ee8b4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1467ee8ca FUN_1467ee8ca body=31 status=ok
// SIG undefined FUN_1467ee8ca(void)

undefined8 FUN_1467ee8ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ee8fe FUN_1467ee8fe body=93 status=ok
// SIG undefined FUN_1467ee8fe(void)

void FUN_1467ee8fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e1b970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467ee95c FUN_1467ee95c body=93 status=ok
// SIG undefined FUN_1467ee95c(void)

void FUN_1467ee95c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e1b970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467ee9ba FUN_1467ee9ba body=126 status=ok
// SIG undefined FUN_1467ee9ba(void)

void FUN_1467ee9ba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e1b970;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467eea29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467eea38 FUN_1467eea38 body=39 status=ok
// SIG undefined FUN_1467eea38(void)

void FUN_1467eea38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_140f0bc06(*(longlong *)(lVar1 + 0x38) + 8);
  FUN_140f0bbae(lVar1 + 0x40);
  return;
}



// FUNCTION 1467eea62 FUN_1467eea62 body=137 status=ok
// SIG undefined FUN_1467eea62(void)

longlong * FUN_1467eea62(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1467eeaec(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1467eeaec FUN_1467eeaec body=132 status=ok
// SIG undefined FUN_1467eeaec(void)

void FUN_1467eeaec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467eeb71 FUN_1467eeb71 body=47 status=ok
// SIG undefined FUN_1467eeb71(void)

void FUN_1467eeb71(longlong param_1,int param_2)

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



// FUNCTION 1467eeba0 FUN_1467eeba0 body=54 status=ok
// SIG undefined FUN_1467eeba0(void)

longlong FUN_1467eeba0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467eebdc FUN_1467eebdc body=69 status=ok
// SIG undefined FUN_1467eebdc(void)

void FUN_1467eebdc(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      FUN_142768eba(param_1,*param_2 + lVar2,param_3);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (iVar1 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1467eec26 FUN_1467eec26 body=110 status=ok
// SIG undefined FUN_1467eec26(void)

void FUN_1467eec26(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    FUN_1467eec96(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467eec96 FUN_1467eec96 body=132 status=ok
// SIG undefined FUN_1467eec96(void)

void FUN_1467eec96(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,4);
  return;
}



// FUNCTION 1467eed1a FUN_1467eed1a body=377 status=ok
// SIG undefined FUN_1467eed1a(void)

void FUN_1467eed1a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str2;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar3 = (ulonglong)uVar7 * 0x30;
      pwVar4 = L"";
      if (*(int *)(lVar9 + 8 + lVar3) != 0) {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(pwVar4,_Str2);
      uVar5 = (uint)uVar6;
      if (iVar2 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar3 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(_Str2,pwVar4);
      if (-1 < iVar2) {
        lVar9 = lVar9 + lVar3;
        FUN_14010f8af(lVar9,1);
        goto LAB_1467eee48;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140234572(param_1,uVar1);
    lVar9 = *param_1;
  }
  lVar3 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar3 + 0x30),(void *)(lVar9 + lVar3),(ulonglong)(uVar1 - uVar8) * 0x30);
  lVar9 = lVar3 + *param_1;
LAB_1467eee48:
  FUN_1467ef47c(lVar9,param_2,param_3);
  return;
}



// FUNCTION 1467eee94 FUN_1467eee94 body=377 status=ok
// SIG undefined FUN_1467eee94(void)

void FUN_1467eee94(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str2;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar3 = (ulonglong)uVar7 * 0x30;
      pwVar4 = L"";
      if (*(int *)(lVar9 + 8 + lVar3) != 0) {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(pwVar4,_Str2);
      uVar5 = (uint)uVar6;
      if (iVar2 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar3 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(_Str2,pwVar4);
      if (-1 < iVar2) {
        lVar9 = lVar9 + lVar3;
        FUN_14010f8af(lVar9,1);
        goto LAB_1467eefc2;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140234572(param_1,uVar1);
    lVar9 = *param_1;
  }
  lVar3 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar3 + 0x30),(void *)(lVar9 + lVar3),(ulonglong)(uVar1 - uVar8) * 0x30);
  lVar9 = lVar3 + *param_1;
LAB_1467eefc2:
  FUN_1467ef4f2(lVar9,param_2,param_3);
  return;
}



// FUNCTION 1467ef00e FUN_1467ef00e body=377 status=ok
// SIG undefined FUN_1467ef00e(void)

void FUN_1467ef00e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str2;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar3 = (ulonglong)uVar7 * 0x30;
      pwVar4 = L"";
      if (*(int *)(lVar9 + 8 + lVar3) != 0) {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(pwVar4,_Str2);
      uVar5 = (uint)uVar6;
      if (iVar2 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar3 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(_Str2,pwVar4);
      if (-1 < iVar2) {
        lVar9 = lVar9 + lVar3;
        FUN_14010f8af(lVar9,1);
        goto LAB_1467ef13c;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140234572(param_1,uVar1);
    lVar9 = *param_1;
  }
  lVar3 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar3 + 0x30),(void *)(lVar9 + lVar3),(ulonglong)(uVar1 - uVar8) * 0x30);
  lVar9 = lVar3 + *param_1;
LAB_1467ef13c:
  FUN_1467ef562(lVar9,param_2,param_3);
  return;
}



// FUNCTION 1467ef188 FUN_1467ef188 body=377 status=ok
// SIG undefined FUN_1467ef188(void)

void FUN_1467ef188(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str2;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar3 = (ulonglong)uVar7 * 0x30;
      pwVar4 = L"";
      if (*(int *)(lVar9 + 8 + lVar3) != 0) {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(pwVar4,_Str2);
      uVar5 = (uint)uVar6;
      if (iVar2 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar3 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(_Str2,pwVar4);
      if (-1 < iVar2) {
        lVar9 = lVar9 + lVar3;
        FUN_14010f8af(lVar9,1);
        goto LAB_1467ef2b6;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140234572(param_1,uVar1);
    lVar9 = *param_1;
  }
  lVar3 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar3 + 0x30),(void *)(lVar9 + lVar3),(ulonglong)(uVar1 - uVar8) * 0x30);
  lVar9 = lVar3 + *param_1;
LAB_1467ef2b6:
  FUN_1467ef5da(lVar9,param_2,param_3);
  return;
}



// FUNCTION 1467ef302 FUN_1467ef302 body=377 status=ok
// SIG undefined FUN_1467ef302(void)

void FUN_1467ef302(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str2;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar3 = (ulonglong)uVar7 * 0x30;
      pwVar4 = L"";
      if (*(int *)(lVar9 + 8 + lVar3) != 0) {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(pwVar4,_Str2);
      uVar5 = (uint)uVar6;
      if (iVar2 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar3 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(_Str2,pwVar4);
      if (-1 < iVar2) {
        lVar9 = lVar9 + lVar3;
        FUN_14010f8af(lVar9,1);
        goto LAB_1467ef430;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140234572(param_1,uVar1);
    lVar9 = *param_1;
  }
  lVar3 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar3 + 0x30),(void *)(lVar9 + lVar3),(ulonglong)(uVar1 - uVar8) * 0x30);
  lVar9 = lVar3 + *param_1;
LAB_1467ef430:
  FUN_1467ef652(lVar9,param_2,param_3);
  return;
}



// FUNCTION 1467ef47c FUN_1467ef47c body=118 status=ok
// SIG undefined FUN_1467ef47c(void)

undefined8 * FUN_1467ef47c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *param_3;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 1467ef4f2 FUN_1467ef4f2 body=112 status=ok
// SIG undefined FUN_1467ef4f2(void)

undefined8 * FUN_1467ef4f2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 1467ef562 FUN_1467ef562 body=120 status=ok
// SIG undefined FUN_1467ef562(void)

undefined8 * FUN_1467ef562(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 2) = 2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  return param_1;
}



// FUNCTION 1467ef5da FUN_1467ef5da body=120 status=ok
// SIG undefined FUN_1467ef5da(void)

undefined8 * FUN_1467ef5da(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 2) = 3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = uVar1;
  return param_1;
}



// FUNCTION 1467ef652 FUN_1467ef652 body=108 status=ok
// SIG undefined FUN_1467ef652(void)

undefined8 * FUN_1467ef652(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 2) = 4;
  FUN_14023423e(param_1 + 4,param_3);
  return param_1;
}



// FUNCTION 1467ef6be FUN_1467ef6be body=95 status=ok
// SIG undefined FUN_1467ef6be(void)

undefined8 * FUN_1467ef6be(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1467ef71d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1467ef766(param_1,iVar1);
      FUN_1467ef7c8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1467ef71d FUN_1467ef71d body=73 status=ok
// SIG undefined FUN_1467ef71d(void)

void FUN_1467ef71d(longlong param_1,int param_2)

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



// FUNCTION 1467ef766 FUN_1467ef766 body=98 status=ok
// SIG undefined FUN_1467ef766(void)

void FUN_1467ef766(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1467ef7c8 FUN_1467ef7c8 body=45 status=ok
// SIG undefined FUN_1467ef7c8(void)

void FUN_1467ef7c8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467ef7f8 FUN_1467ef7f8 body=16 status=ok
// SIG undefined FUN_1467ef7f8(void)

void FUN_1467ef7f8(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467ef803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1467ef808 FUN_1467ef808 body=1 status=ok
// SIG undefined FUN_1467ef808(void)

void FUN_1467ef808(void)

{
  return;
}



// FUNCTION 1467ef81a FUN_1467ef81a body=1 status=ok
// SIG undefined FUN_1467ef81a(void)

void FUN_1467ef81a(void)

{
  return;
}



// FUNCTION 1467ef81c FUN_1467ef81c body=130 status=ok
// SIG undefined FUN_1467ef81c(void)

void FUN_1467ef81c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ef89f FUN_1467ef89f body=68 status=ok
// SIG undefined FUN_1467ef89f(void)

void FUN_1467ef89f(undefined8 param_1,undefined4 param_2)

{
  wchar_t *_Str;
  size_t sVar1;
  
  FUN_1400020e8(param_1,L"ERoundingMode::",0xf);
  _Str = (wchar_t *)FUN_1467d2a8b(param_2);
  sVar1 = wcslen(_Str);
  FUN_1400020e8(param_1,_Str,sVar1 & 0xffffffff);
  return;
}



// FUNCTION 1467ef8e3 FUN_1467ef8e3 body=207 status=ok
// SIG undefined FUN_1467ef8e3(void)

longlong FUN_1467ef8e3(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = DAT_14c845208 + -1;
  puVar6 = DAT_14c845200;
  if (DAT_14c845208 == 0) {
    puVar6 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  iVar4 = FUN_144a54874(param_1,puVar6,(longlong)iVar3);
  if (iVar4 == 0) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    lVar5 = FUN_1467dfda7(param_1 + (longlong)iVar3 * 2);
    if (lVar5 == 0) {
LAB_1467ef99a:
      bVar1 = true;
    }
    else {
      puVar6 = local_38;
      if ((int)uStack_30 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      cVar2 = FUN_1467d281b(param_2,puVar6);
      if (cVar2 == '\0') goto LAB_1467ef99a;
      bVar1 = false;
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar1) goto LAB_1467ef937;
  }
  lVar5 = 0;
LAB_1467ef937:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ef9b4 FUN_1467ef9b4 body=47 status=ok
// SIG undefined FUN_1467ef9b4(void)

void FUN_1467ef9b4(longlong param_1,undefined8 *param_2)

{
  FUN_1467ef9e4();
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    return;
  }
  FUN_1467efcaa(*param_2,*(undefined4 *)(param_2 + 1));
  return;
}



// FUNCTION 1467ef9e4 FUN_1467ef9e4 body=526 status=ok
// SIG undefined FUN_1467ef9e4(void)

longlong * FUN_1467ef9e4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_208 [44];
  uint local_1dc;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  local_1dc = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1dc = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1dc,4);
    }
    else {
      FUN_14572512c(param_1,&local_1dc);
    }
  }
  else {
    local_1dc = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1dc == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14010f8af(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_14598e1ac(param_2,0);
      }
    }
  }
  else if ((((int)local_1dc < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x55555 < local_1dc && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_1dc;
    lVar6 = 0x10;
    lVar5 = 0;
    do {
      lVar3 = *param_2;
      FUN_14021219d(param_1,lVar3 + lVar6 + -0x10);
      local_1d8 = &PTR_FUN_149e37810;
      local_1d0 = param_1;
      local_1c8 = &local_1d8;
      local_1c0 = &local_1c8;
      FUN_1467d16da(&local_1c8,lVar3 + lVar6);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar5 < (int)param_2[1]);
  }
  else {
    FUN_1467efbf4(param_2);
    if (0 < (int)local_1dc) {
      iVar4 = 0;
      do {
        lVar5 = FUN_1467efc2e(param_2);
        FUN_14021219d(param_1,lVar5);
        local_1d8 = &PTR_FUN_149e37810;
        local_1d0 = param_1;
        local_1c8 = &local_1d8;
        local_1c0 = &local_1c8;
        FUN_1467d16da(&local_1c8,lVar5 + 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_1dc);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467efbf4 FUN_1467efbf4 body=57 status=ok
// SIG undefined FUN_1467efbf4(void)

void FUN_1467efbf4(undefined8 *param_1,int param_2)

{
  FUN_14010f8af(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14598e1ac(param_1,param_2);
  return;
}



// FUNCTION 1467efc2e FUN_1467efc2e body=63 status=ok
// SIG undefined FUN_1467efc2e(void)

longlong FUN_1467efc2e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140234572(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1467efc6d(lVar2);
  return lVar2;
}



// FUNCTION 1467efc6d FUN_1467efc6d body=61 status=ok
// SIG undefined FUN_1467efc6d(void)

void FUN_1467efc6d(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[4] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)plVar2[1];
  return;
}



// FUNCTION 1467efcaa FUN_1467efcaa body=1159 status=ok
// SIG undefined FUN_1467efcaa(void)

void FUN_1467efcaa(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *_Str1;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  wchar_t *_Str2;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_3b8 [32];
  longlong *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = (ulonglong)param_2 * 0x30 + param_1 + -0x30;
    local_378 = param_1;
    fVar23 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar23 + fVar23);
    plVar16 = &local_378;
    do {
      puVar20 = (undefined8 *)*plVar16;
      puVar12 = (undefined8 *)plVar16[1];
      iVar10 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar20) >> 4);
      local_390 = (undefined8 *)CONCAT44(local_390._4_4_,(int)plVar16[2]);
      puVar21 = puVar12;
      puVar18 = puVar20;
      local_398 = plVar16;
      if ((int)plVar16[2] != 0) {
LAB_1467efd8e:
        uVar13 = iVar10 * -0x55555555 + 1;
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          uVar2 = puVar20[uVar14 * 6];
          uVar3 = (puVar20 + uVar14 * 6)[1];
          local_68 = puVar20[uVar14 * 6 + 2];
          uStack_60 = (puVar20 + uVar14 * 6 + 2)[1];
          local_58 = puVar20[uVar14 * 6 + 4];
          uStack_50 = (puVar20 + uVar14 * 6 + 4)[1];
          uVar4 = *puVar20;
          uVar5 = puVar20[1];
          uVar6 = puVar20[2];
          uVar7 = puVar20[3];
          uVar8 = puVar20[5];
          puVar20[uVar14 * 6 + 4] = puVar20[4];
          (puVar20 + uVar14 * 6 + 4)[1] = uVar8;
          puVar20[uVar14 * 6 + 2] = uVar6;
          (puVar20 + uVar14 * 6 + 2)[1] = uVar7;
          puVar20[uVar14 * 6] = uVar4;
          (puVar20 + uVar14 * 6)[1] = uVar5;
          local_78._0_4_ = (undefined4)uVar2;
          local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar3;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar20[4] = local_58;
          puVar20[5] = uStack_50;
          puVar20[2] = local_68;
          puVar20[3] = uStack_60;
          *(undefined4 *)puVar20 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar20 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_70._4_4_;
          puVar17 = puVar21 + 6;
          puVar19 = puVar20;
          local_388 = puVar18;
          local_380 = puVar12;
          local_78 = uVar2;
          uStack_70 = uVar3;
          do {
            puVar12 = puVar19 + 6;
            puVar9 = puVar19 + 6;
            do {
              puVar19 = puVar9;
              puVar18 = puVar12;
              if (puVar21 < puVar19) break;
              pwVar15 = L"";
              if (*(int *)(puVar19 + 1) != 0) {
                pwVar15 = (wchar_t *)*puVar19;
              }
              pwVar11 = L"";
              if (*(int *)(puVar20 + 1) != 0) {
                pwVar11 = (wchar_t *)*puVar20;
              }
              iVar10 = wcscmp(pwVar11,pwVar15);
              puVar12 = puVar18 + 6;
              puVar9 = puVar19 + 6;
            } while (-1 < iVar10);
            puVar9 = puVar17 + -0xc;
            do {
              puVar22 = puVar17;
              puVar12 = puVar9;
              puVar17 = puVar22 + -6;
              if (puVar17 <= puVar20) break;
              pwVar15 = L"";
              if (*(int *)(puVar20 + 1) != 0) {
                pwVar15 = (wchar_t *)*puVar20;
              }
              pwVar11 = L"";
              if (*(int *)(puVar22 + -5) != 0) {
                pwVar11 = (wchar_t *)*puVar17;
              }
              iVar10 = wcscmp(pwVar11,pwVar15);
              puVar9 = puVar12 + -6;
            } while (-1 < iVar10);
            if (puVar17 < puVar19) goto LAB_1467eff0e;
            uVar2 = *puVar19;
            uVar3 = puVar19[1];
            local_68 = puVar19[2];
            uStack_60 = puVar19[3];
            local_58 = puVar19[4];
            uStack_50 = puVar19[5];
            uVar4 = *puVar17;
            uVar5 = puVar22[-5];
            uVar6 = puVar22[-4];
            uVar7 = puVar22[-3];
            uVar8 = puVar22[-1];
            puVar19[4] = puVar22[-2];
            puVar19[5] = uVar8;
            puVar19[2] = uVar6;
            puVar19[3] = uVar7;
            *puVar19 = uVar4;
            puVar19[1] = uVar5;
            local_78._0_4_ = (undefined4)uVar2;
            local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar3;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar22[-2] = local_58;
            puVar22[-1] = uStack_50;
            puVar22[-4] = local_68;
            puVar22[-3] = uStack_60;
            *(undefined4 *)puVar17 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar22 + -0x2c) = local_78._4_4_;
            *(undefined4 *)(puVar22 + -5) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar22 + -0x24) = uStack_70._4_4_;
            local_78 = uVar2;
            uStack_70 = uVar3;
          } while( true );
        }
        plVar16 = local_398;
        if (puVar20 < puVar21) {
          local_390 = puVar20 + 6;
          do {
            puVar12 = puVar20;
            if (local_390 <= puVar21) {
              pwVar15 = (wchar_t *)*puVar20;
              puVar18 = puVar20;
              puVar17 = local_390;
              do {
                pwVar11 = (wchar_t *)*puVar17;
                _Str2 = pwVar11;
                if (*(int *)(puVar17 + 1) == 0) {
                  _Str2 = L"";
                }
                _Str1 = L"";
                if (*(int *)(puVar18 + 1) != 0) {
                  _Str1 = pwVar15;
                }
                iVar10 = wcscmp(_Str1,_Str2);
                puVar12 = puVar17;
                if (-1 < iVar10) {
                  puVar12 = puVar18;
                  pwVar11 = pwVar15;
                }
                pwVar15 = pwVar11;
                puVar17 = puVar17 + 6;
                puVar18 = puVar12;
              } while (puVar17 <= puVar21);
            }
            local_78 = *puVar12;
            uStack_70 = puVar12[1];
            local_68 = puVar12[2];
            uStack_60 = puVar12[3];
            local_58 = puVar12[4];
            uStack_50 = puVar12[5];
            uVar7 = local_78;
            uVar8 = uStack_70;
            uVar2 = *puVar21;
            uVar3 = puVar21[1];
            uVar4 = puVar21[2];
            uVar5 = puVar21[3];
            uVar6 = puVar21[5];
            puVar12[4] = puVar21[4];
            puVar12[5] = uVar6;
            puVar12[2] = uVar4;
            puVar12[3] = uVar5;
            *puVar12 = uVar2;
            puVar12[1] = uVar3;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            puVar21[4] = local_58;
            puVar21[5] = uStack_50;
            puVar21[2] = local_68;
            puVar21[3] = uStack_60;
            *(undefined4 *)puVar21 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar21 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_70._4_4_;
            puVar21 = puVar21 + -6;
            plVar16 = local_398;
            local_78 = uVar7;
            uStack_70 = uVar8;
          } while (puVar20 < puVar21);
        }
        goto LAB_1467f0108;
      }
LAB_1467f0122:
      FUN_1467f0132(puVar20);
      plVar16 = local_398;
LAB_1467f0108:
      plVar16 = plVar16 + -3;
    } while (&local_378 <= plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1467eff0e:
  local_78 = *puVar20;
  uStack_70 = puVar20[1];
  local_68 = puVar20[2];
  uStack_60 = puVar20[3];
  local_58 = puVar20[4];
  uStack_50 = puVar20[5];
  uVar7 = local_78;
  uVar8 = uStack_70;
  uVar2 = *puVar17;
  uVar3 = puVar22[-5];
  uVar4 = puVar22[-4];
  uVar5 = puVar22[-3];
  uVar6 = puVar22[-1];
  puVar20[4] = puVar22[-2];
  puVar20[5] = uVar6;
  puVar20[2] = uVar4;
  puVar20[3] = uVar5;
  *puVar20 = uVar2;
  puVar20[1] = uVar3;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar22[-2] = local_58;
  puVar22[-1] = uStack_50;
  puVar22[-4] = local_68;
  puVar22[-3] = uStack_60;
  *(undefined4 *)puVar17 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar22 + -0x2c) = local_78._4_4_;
  *(undefined4 *)(puVar22 + -5) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar22 + -0x24) = uStack_70._4_4_;
  iVar1 = (int)local_390 + -1;
  local_390 = (undefined8 *)CONCAT44(local_390._4_4_,iVar1);
  puVar22 = puVar22 + -0xc;
  local_78 = uVar7;
  uStack_70 = uVar8;
  if ((longlong)puVar12 - (longlong)local_388 < (longlong)local_380 - (longlong)puVar18) {
    plVar16 = local_398;
    if (puVar19 < puVar21) {
      *local_398 = (longlong)puVar19;
      local_398[1] = (longlong)puVar21;
      *(int *)(local_398 + 2) = iVar1;
      plVar16 = local_398 + 3;
    }
    puVar18 = puVar20;
    if (puVar17 <= puVar20 + 6) goto LAB_1467f0108;
  }
  else {
    if (puVar20 + 6 < puVar17) {
      *local_398 = (longlong)puVar20;
      local_398[1] = (longlong)puVar22;
      *(int *)(local_398 + 2) = iVar1;
      local_398 = local_398 + 3;
    }
    plVar16 = local_398;
    puVar12 = puVar21;
    puVar20 = puVar19;
    puVar22 = puVar21;
    if (puVar21 <= puVar19) goto LAB_1467f0108;
  }
  local_398 = plVar16;
  iVar10 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar18) >> 4);
  puVar21 = puVar22;
  if (iVar1 == 0) goto LAB_1467f0122;
  goto LAB_1467efd8e;
}



// FUNCTION 1467f0132 FUN_1467f0132 body=877 status=ok
// SIG undefined FUN_1467f0132(void)

void FUN_1467f0132(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar23 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar20 = iVar23;
joined_r0x0001467f0180:
    do {
      iVar14 = iVar23 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar21 = iVar23 * 2 + 2;
        if (iVar21 < (int)param_2) {
          pwVar18 = L"";
          if (*(int *)(param_1 + (longlong)iVar14 * 6 + 1) != 0) {
            pwVar18 = (wchar_t *)param_1[(longlong)iVar14 * 6];
          }
          pwVar17 = L"";
          if (*(int *)(param_1 + (longlong)iVar21 * 6 + 1) != 0) {
            pwVar17 = (wchar_t *)param_1[(longlong)iVar21 * 6];
          }
          iVar13 = wcscmp(pwVar17,pwVar18);
          if (-1 < iVar13) {
            iVar14 = iVar21;
          }
        }
        lVar15 = (longlong)iVar14;
        pwVar18 = L"";
        if (*(int *)(param_1 + lVar15 * 6 + 1) != 0) {
          pwVar18 = (wchar_t *)param_1[lVar15 * 6];
        }
        lVar16 = (longlong)iVar23;
        pwVar17 = L"";
        if (*(int *)(param_1 + lVar16 * 6 + 1) != 0) {
          pwVar17 = (wchar_t *)param_1[lVar16 * 6];
        }
        iVar23 = wcscmp(pwVar17,pwVar18);
        if (iVar23 < 0) {
          puVar22 = param_1 + lVar16 * 6;
          puVar19 = param_1 + lVar15 * 6;
          uVar2 = *puVar22;
          uVar3 = puVar22[1];
          local_68 = puVar22[2];
          uStack_60 = puVar22[3];
          local_58 = puVar22[4];
          uStack_50 = puVar22[5];
          uVar4 = *puVar19;
          uVar5 = puVar19[1];
          uVar6 = puVar19[2];
          uVar7 = puVar19[3];
          uVar8 = puVar19[5];
          puVar22[4] = puVar19[4];
          puVar22[5] = uVar8;
          puVar22[2] = uVar6;
          puVar22[3] = uVar7;
          *puVar22 = uVar4;
          puVar22[1] = uVar5;
          local_78._0_4_ = (undefined4)uVar2;
          local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar3;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar19[4] = local_58;
          puVar19[5] = uStack_50;
          puVar19[2] = local_68;
          puVar19[3] = uStack_60;
          *(undefined4 *)puVar19 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar19 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_70._4_4_;
          iVar23 = iVar14;
          local_78 = uVar2;
          uStack_70 = uVar3;
          goto joined_r0x0001467f0180;
        }
      }
      bVar25 = iVar20 != 0;
      iVar23 = iVar20 + -1;
      iVar20 = iVar23;
    } while (bVar25);
    if (1 < (int)param_2) {
      uVar24 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[4];
      uVar7 = param_1[5];
      uVar8 = param_1[uVar24 * 6];
      uVar9 = (param_1 + uVar24 * 6)[1];
      uVar10 = param_1[uVar24 * 6 + 2];
      uVar11 = (param_1 + uVar24 * 6 + 2)[1];
      uVar12 = (param_1 + uVar24 * 6 + 4)[1];
      param_1[4] = param_1[uVar24 * 6 + 4];
      param_1[5] = uVar12;
      param_1[2] = uVar10;
      param_1[3] = uVar11;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      local_78._0_4_ = (undefined4)uVar2;
      local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_70._0_4_ = (undefined4)uVar3;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_68._0_4_ = (undefined4)uVar4;
      local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar5;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar19 = param_1 + uVar24 * 6 + 4;
      *(undefined4 *)puVar19 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar19 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
      puVar19 = param_1 + uVar24 * 6 + 2;
      *(undefined4 *)puVar19 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar19 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_60._4_4_;
      puVar19 = param_1 + uVar24 * 6;
      *(undefined4 *)puVar19 = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar19 + 4) = local_78._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_70._4_4_;
      local_78 = uVar2;
      uStack_70 = uVar3;
      local_68 = uVar4;
      uStack_60 = uVar5;
      local_58 = uVar6;
      uStack_50 = uVar7;
      if (param_2 != 2) {
        do {
          iVar23 = 0;
          iVar14 = 1;
          iVar20 = 0;
          do {
            lVar15 = (longlong)(iVar23 + 2);
            iVar21 = iVar14;
            if (lVar15 < (longlong)uVar24) {
              pwVar18 = L"";
              if (*(int *)(param_1 + (longlong)iVar14 * 6 + 1) != 0) {
                pwVar18 = (wchar_t *)param_1[(longlong)iVar14 * 6];
              }
              pwVar17 = L"";
              if (*(int *)(param_1 + lVar15 * 6 + 1) != 0) {
                pwVar17 = (wchar_t *)param_1[lVar15 * 6];
              }
              iVar14 = wcscmp(pwVar17,pwVar18);
              if (-1 < iVar14) {
                iVar21 = iVar23 + 2;
              }
            }
            lVar15 = (longlong)iVar21;
            pwVar18 = L"";
            if (*(int *)(param_1 + lVar15 * 6 + 1) != 0) {
              pwVar18 = (wchar_t *)param_1[lVar15 * 6];
            }
            lVar16 = (longlong)iVar20;
            pwVar17 = L"";
            if (*(int *)(param_1 + lVar16 * 6 + 1) != 0) {
              pwVar17 = (wchar_t *)param_1[lVar16 * 6];
            }
            iVar23 = wcscmp(pwVar17,pwVar18);
            if (-1 < iVar23) break;
            puVar22 = param_1 + lVar16 * 6;
            puVar19 = param_1 + lVar15 * 6;
            uVar2 = *puVar22;
            uVar3 = puVar22[1];
            uVar4 = puVar22[2];
            uVar5 = puVar22[3];
            uVar6 = puVar22[4];
            uVar7 = puVar22[5];
            uVar8 = *puVar19;
            uVar9 = puVar19[1];
            uVar10 = puVar19[2];
            uVar11 = puVar19[3];
            uVar12 = puVar19[5];
            puVar22[4] = puVar19[4];
            puVar22[5] = uVar12;
            puVar22[2] = uVar10;
            puVar22[3] = uVar11;
            *puVar22 = uVar8;
            puVar22[1] = uVar9;
            local_78._0_4_ = (undefined4)uVar2;
            local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar3;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_68._0_4_ = (undefined4)uVar4;
            local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar5;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_58._0_4_ = (undefined4)uVar6;
            local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar7;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            *(undefined4 *)(puVar19 + 4) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar19 + 0x24) = local_58._4_4_;
            *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_50._4_4_;
            *(undefined4 *)(puVar19 + 2) = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar19 + 0x14) = local_68._4_4_;
            *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_60._4_4_;
            *(undefined4 *)puVar19 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar19 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_70._4_4_;
            iVar23 = iVar21 * 2;
            iVar14 = iVar21 * 2 + 1;
            local_78 = uVar2;
            uStack_70 = uVar3;
            local_68 = uVar4;
            uStack_60 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            iVar20 = iVar21;
          } while ((longlong)iVar14 < (longlong)uVar24);
          uVar1 = uVar24 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[4];
          uVar7 = param_1[5];
          uVar8 = param_1[uVar1 * 6];
          uVar9 = (param_1 + uVar1 * 6)[1];
          uVar10 = param_1[uVar1 * 6 + 2];
          uVar11 = (param_1 + uVar1 * 6 + 2)[1];
          uVar12 = (param_1 + uVar1 * 6 + 4)[1];
          param_1[4] = param_1[uVar1 * 6 + 4];
          param_1[5] = uVar12;
          param_1[2] = uVar10;
          param_1[3] = uVar11;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          local_78._0_4_ = (undefined4)uVar2;
          local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar3;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_58._0_4_ = (undefined4)uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar7;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar19 = param_1 + uVar1 * 6 + 4;
          *(undefined4 *)puVar19 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar19 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
          puVar19 = param_1 + uVar1 * 6 + 2;
          *(undefined4 *)puVar19 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar19 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_60._4_4_;
          puVar19 = param_1 + uVar1 * 6;
          *(undefined4 *)puVar19 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar19 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_70._4_4_;
          bVar25 = 2 < uVar24;
          uVar24 = uVar1;
          local_78 = uVar2;
          uStack_70 = uVar3;
          local_68 = uVar4;
          uStack_60 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
        } while (bVar25);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467f04a0 FUN_1467f04a0 body=415 status=ok
// SIG undefined FUN_1467f04a0(void)

longlong FUN_1467f04a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  wchar_t *_Str2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar7) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar7;
    local_68 = param_1;
    local_60 = param_2;
    local_58 = (ulonglong)uVar7;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar2 = (ulonglong)uVar7 * 0x30;
      pwVar3 = L"";
      if (*(int *)(lVar4 + 8 + lVar2) != 0) {
        pwVar3 = *(wchar_t **)(lVar4 + lVar2);
      }
      iVar1 = wcscmp(pwVar3,_Str2);
      param_2 = local_60;
      param_1 = local_68;
      uVar5 = (uint)uVar6;
      if (iVar1 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    uVar7 = (uint)local_58;
    if ((int)uVar8 < (int)uVar7) {
      lVar2 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar4 + 8 + lVar2) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = *(wchar_t **)(lVar4 + lVar2);
      }
      iVar1 = wcscmp(_Str2,pwVar3);
      if (-1 < iVar1) {
        lVar4 = lVar4 + lVar2;
        FUN_14010f8af(lVar4,1);
        goto LAB_1467f05d4;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar7) {
    FUN_140234572(param_1,uVar7);
    lVar4 = *param_1;
  }
  lVar2 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar4 + lVar2 + 0x30),(void *)(lVar4 + lVar2),(ulonglong)(uVar7 - uVar8) * 0x30);
  lVar4 = lVar2 + *param_1;
LAB_1467f05d4:
  local_50 = param_2;
  FUN_1467f0640(&local_50,lVar4);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 0x10;
}



// FUNCTION 1467f0640 FUN_1467f0640 body=136 status=ok
// SIG undefined FUN_1467f0640(void)

undefined8 FUN_1467f0640(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40 [4];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[0] = 4;
  plVar1 = (longlong *)FUN_140e82300();
  local_30 = (longlong *)*plVar1;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)plVar1[1];
  FUN_140234040(param_2,*param_1,local_40);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f06ca FUN_1467f06ca body=147 status=ok
// SIG undefined FUN_1467f06ca(void)

void FUN_1467f06ca(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f075e FUN_1467f075e body=121 status=ok
// SIG undefined FUN_1467f075e(void)

void FUN_1467f075e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140188694(param_1,iVar1);
    }
    FUN_1467f07d8((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1467f081e(param_1,param_2,iVar1 - param_2);
    FUN_1467f0878(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467f07d8 FUN_1467f07d8 body=70 status=ok
// SIG undefined FUN_1467f07d8(void)

void FUN_1467f07d8(undefined4 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 4;
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *(longlong **)(param_1 + 4) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    param_1[6] = (int)plVar2[1];
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1467f081e FUN_1467f081e body=89 status=ok
// SIG undefined FUN_1467f081e(void)

void FUN_1467f081e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x20 + *param_1);
  FUN_14007f2db(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1467f0878 FUN_1467f0878 body=62 status=ok
// SIG undefined FUN_1467f0878(void)

void FUN_1467f0878(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467f08b6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1467f08b6 FUN_1467f08b6 body=93 status=ok
// SIG undefined FUN_1467f08b6(void)

ulonglong FUN_1467f08b6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1467f0914 FUN_1467f0914 body=122 status=ok
// SIG undefined FUN_1467f0914(void)

void FUN_1467f0914(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1467f09ce(param_1,iVar1);
    }
    FUN_1467f098f((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1467f0a62(param_1,param_2,iVar1 - param_2);
    FUN_1467f0ac4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467f098f FUN_1467f098f body=63 status=ok
// SIG undefined FUN_1467f098f(void)

void FUN_1467f098f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_144a5dc74(param_1 + 3);
    FUN_1467d1ecc(param_1);
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 1467f09ce FUN_1467f09ce body=147 status=ok
// SIG undefined FUN_1467f09ce(void)

void FUN_1467f09ce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f0a62 FUN_1467f0a62 body=98 status=ok
// SIG undefined FUN_1467f0a62(void)

void FUN_1467f0a62(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x48 + *param_1);
  FUN_1467de9d3(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1467f0ac4 FUN_1467f0ac4 body=62 status=ok
// SIG undefined FUN_1467f0ac4(void)

void FUN_1467f0ac4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467f0b02(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1467f0b02 FUN_1467f0b02 body=112 status=ok
// SIG undefined FUN_1467f0b02(void)

ulonglong FUN_1467f0b02(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467f0b3c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_1467f0b3c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467f0b72 FUN_1467f0b72 body=136 status=ok
// SIG undefined FUN_1467f0b72(void)

undefined8 *
FUN_1467f0b72(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(param_1 + 2) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  if (*(longlong *)(param_4 + 4) == 0) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    FUN_14023423e(param_1 + 4,param_4 + 4);
  }
  return param_1;
}



// FUNCTION 1467f0bfa FUN_1467f0bfa body=125 status=ok
// SIG undefined FUN_1467f0bfa(void)

undefined8 * FUN_1467f0bfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149e1c0a0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 9),4000);
  return puVar1;
}



// FUNCTION 1467f0c82 FUN_1467f0c82 body=29 status=ok
// SIG undefined FUN_1467f0c82(void)

undefined8 FUN_1467f0c82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f0ca0 FUN_1467f0ca0 body=125 status=ok
// SIG undefined FUN_1467f0ca0(void)

void FUN_1467f0ca0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_18 = *(longlong *)(param_1 + 0x30);
    FUN_1447a2442();
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f0d1e FUN_1467f0d1e body=164 status=ok
// SIG undefined FUN_1467f0d1e(void)

void FUN_1467f0d1e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1467f0d96;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1467f0d96;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1467f0d96:
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
                    /* WARNING: Could not recover jumptable at 0x0001467f0db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1467f0dc2 FUN_1467f0dc2 body=129 status=ok
// SIG undefined FUN_1467f0dc2(void)

void FUN_1467f0dc2(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x80;
    if (0x80 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 * 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 1)) {
        uVar4 = uVar2 >> 1 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_144aa0790(param_1,param_2,uVar4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467f0e44 FUN_1467f0e44 body=31 status=ok
// SIG undefined FUN_1467f0e44(void)

undefined8 FUN_1467f0e44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f0e80 FUN_1467f0e80 body=93 status=ok
// SIG undefined FUN_1467f0e80(void)

void FUN_1467f0e80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e1c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467f0ede FUN_1467f0ede body=93 status=ok
// SIG undefined FUN_1467f0ede(void)

void FUN_1467f0ede(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e1c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467f0f3c FUN_1467f0f3c body=126 status=ok
// SIG undefined FUN_1467f0f3c(void)

void FUN_1467f0f3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e1c0e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467f0fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467f0fca FUN_1467f0fca body=31 status=ok
// SIG undefined FUN_1467f0fca(void)

undefined8 FUN_1467f0fca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f1006 FUN_1467f1006 body=93 status=ok
// SIG undefined FUN_1467f1006(void)

void FUN_1467f1006(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e1c1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467f1064 FUN_1467f1064 body=93 status=ok
// SIG undefined FUN_1467f1064(void)

void FUN_1467f1064(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e1c1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467f10c2 FUN_1467f10c2 body=126 status=ok
// SIG undefined FUN_1467f10c2(void)

void FUN_1467f10c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e1c1c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467f1131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467f114c FUN_1467f114c body=114 status=ok
// SIG undefined FUN_1467f114c(void)

void FUN_1467f114c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1467f11be FUN_1467f11be body=96 status=ok
// SIG undefined FUN_1467f11be(void)

void FUN_1467f11be(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1467f121e(param_1,param_2,1);
  return;
}



// FUNCTION 1467f121e FUN_1467f121e body=138 status=ok
// SIG undefined FUN_1467f121e(void)

void FUN_1467f121e(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467f12a8 FUN_1467f12a8 body=323 status=ok
// SIG undefined FUN_1467f12a8(void)

undefined4 * FUN_1467f12a8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467f13ec(param_1,local_48);
  *local_40 = *param_3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = FUN_144afd4c3((longlong)local_40 + 4);
  uVar3 = FUN_144afd4c3(local_40);
  uVar4 = FUN_144a78877(uVar3,uVar2);
  local_58 = 0;
  cVar1 = FUN_1467f14d2(param_1,uVar4,local_40,&local_4c);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0xc) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467f156e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f13ec FUN_1467f13ec body=229 status=ok
// SIG undefined FUN_1467f13ec(void)

int * FUN_1467f13ec(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1467f14d2 FUN_1467f14d2 body=155 status=ok
// SIG undefined FUN_1467f14d2(void)

void FUN_1467f14d2(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x10;
        if ((*(int *)(lVar1 + lVar5) == *param_3) && (*(int *)(lVar1 + 4 + lVar5) == param_3[1])) {
          *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)param_3;
          FUN_1467f121e(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_1467f1545;
        }
        iVar4 = *(int *)((undefined8 *)(lVar1 + lVar5) + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_1467f1545:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1467f156e FUN_1467f156e body=472 status=ok
// SIG undefined FUN_1467f156e(void)

void FUN_1467f156e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar12 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4)
             = 0xffffffff;
        uVar12 = uVar12 + 1;
      } while (uVar3 != uVar12);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *local_88;
        lVar2 = lVar4 + (longlong)iVar6 * 0x10;
        uVar7 = FUN_144afd4c3(lVar2 + 4);
        uVar8 = FUN_144afd4c3(lVar4 + (longlong)iVar6 * 0x10);
        iVar9 = FUN_144a78877(uVar8,uVar7);
        uVar10 = (longlong)iVar9 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc) = iVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467f1748 FUN_1467f1748 body=57 status=ok
// SIG undefined FUN_1467f1748(void)

undefined8 * FUN_1467f1748(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e1c290;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f1786 FUN_1467f1786 body=38 status=ok
// SIG undefined FUN_1467f1786(void)

undefined8 FUN_1467f1786(undefined8 param_1,int param_2)

{
  FUN_1459c6636();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f17ac FUN_1467f17ac body=112 status=ok
// SIG undefined FUN_1467f17ac(void)

void FUN_1467f17ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,8);
  }
  return;
}



// FUNCTION 1467f181c FUN_1467f181c body=469 status=ok
// SIG undefined FUN_1467f181c(void)

void FUN_1467f181c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar12 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4)
             = 0xffffffff;
        uVar12 = uVar12 + 1;
      } while (uVar3 != uVar12);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *local_88;
        lVar2 = lVar4 + (longlong)iVar6 * 0x14;
        uVar7 = FUN_144afd4c3(lVar2 + 4);
        uVar8 = FUN_144afd4c3(lVar4 + (longlong)iVar6 * 0x14);
        iVar9 = FUN_144a78877(uVar8,uVar7);
        uVar10 = (longlong)iVar9 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x10) = iVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467f19f2 FUN_1467f19f2 body=67 status=ok
// SIG undefined FUN_1467f19f2(void)

void FUN_1467f19f2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14142ffc4(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1467f156e(param_1);
    return;
  }
  FUN_1467f1bfa(param_1);
  FUN_14142ffc4(param_1,0);
  return;
}



// FUNCTION 1467f1a36 FUN_1467f1a36 body=148 status=ok
// SIG undefined FUN_1467f1a36(void)

void FUN_1467f1a36(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = FUN_144afd4c3(param_2 + 1);
    uVar3 = FUN_144afd4c3(param_2);
    iVar4 = FUN_144a78877(uVar3,uVar2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar6 = (longlong)iVar4 * 0x20;
        if ((*(int *)(lVar1 + lVar6) == *param_2) && (*(int *)(lVar1 + 4 + lVar6) == param_2[1])) {
          FUN_1467f1aca(param_1);
          return;
        }
        iVar4 = *(int *)(lVar6 + lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1467f1aca FUN_1467f1aca body=90 status=ok
// SIG undefined FUN_1467f1aca(void)

void FUN_1467f1aca(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1467f1b24();
  return;
}



// FUNCTION 1467f1b24 FUN_1467f1b24 body=98 status=ok
// SIG undefined FUN_1467f1b24(void)

void FUN_1467f1b24(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20);
  if (lVar1 != 0) {
    local_20 = lVar1;
    FUN_1447a2442();
  }
  FUN_1467f1b88(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f1b88 FUN_1467f1b88 body=114 status=ok
// SIG undefined FUN_1467f1b88(void)

void FUN_1467f1b88(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1467f1bfa FUN_1467f1bfa body=322 status=ok
// SIG undefined FUN_1467f1bfa(void)

void FUN_1467f1bfa(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1467f1d3e FUN_1467f1d3e body=95 status=ok
// SIG undefined FUN_1467f1d3e(void)

void FUN_1467f1d3e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1467f1d9e FUN_1467f1d9e body=132 status=ok
// SIG undefined FUN_1467f1d9e(void)

void FUN_1467f1d9e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f1e24 FUN_1467f1e24 body=114 status=ok
// SIG undefined FUN_1467f1e24(void)

void FUN_1467f1e24(longlong *param_1,int param_2)

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



// FUNCTION 1467f1e96 FUN_1467f1e96 body=129 status=ok
// SIG undefined FUN_1467f1e96(void)

void FUN_1467f1e96(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x820);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x40b;
    if (0x40b < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x40b < *(uint *)(param_1 + 0x824)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 * 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 1)) {
        uVar4 = uVar2 >> 1 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x824) = (int)uVar4;
    FUN_1467f1f18(param_1,param_2,uVar4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467f1f18 FUN_1467f1f18 body=143 status=ok
// SIG undefined FUN_1467f1f18(void)

void FUN_1467f1f18(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x818);
  if ((uint)param_3 < 0x40c) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x818,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x818),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x818,param_2,param_3,param_4);
  return;
}



// FUNCTION 1467f1fa8 FUN_1467f1fa8 body=132 status=ok
// SIG undefined FUN_1467f1fa8(void)

void FUN_1467f1fa8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f202e FUN_1467f202e body=132 status=ok
// SIG undefined FUN_1467f202e(void)

void FUN_1467f202e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f20b4 FUN_1467f20b4 body=63 status=ok
// SIG undefined FUN_1467f20b4(void)

longlong FUN_1467f20b4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467f2174(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1467f2164(lVar2);
  return lVar2;
}



// FUNCTION 1467f20f4 FUN_1467f20f4 body=112 status=ok
// SIG undefined FUN_1467f20f4(void)

void FUN_1467f20f4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1467f2164 FUN_1467f2164 body=15 status=ok
// SIG undefined FUN_1467f2164(void)

void FUN_1467f2164(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  return;
}



// FUNCTION 1467f2174 FUN_1467f2174 body=147 status=ok
// SIG undefined FUN_1467f2174(void)

void FUN_1467f2174(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f2208 FUN_1467f2208 body=115 status=ok
// SIG undefined FUN_1467f2208(void)

void FUN_1467f2208(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1467f227c FUN_1467f227c body=115 status=ok
// SIG undefined FUN_1467f227c(void)

void FUN_1467f227c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1467f22f0 FUN_1467f22f0 body=112 status=ok
// SIG undefined FUN_1467f22f0(void)

void FUN_1467f22f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,4);
  }
  return;
}



// FUNCTION 1467f2360 FUN_1467f2360 body=147 status=ok
// SIG undefined FUN_1467f2360(void)

void FUN_1467f2360(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f23f4 FUN_1467f23f4 body=67 status=ok
// SIG undefined FUN_1467f23f4(void)

void FUN_1467f23f4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467f2438(*(undefined4 *)(param_1 + 0x808),*(undefined4 *)(param_1 + 0x80c));
  if (iVar1 == *(int *)(param_1 + 0x80c)) {
    return;
  }
  *(int *)(param_1 + 0x80c) = iVar1;
  FUN_1457817d8(param_1,*(undefined4 *)(param_1 + 0x808),iVar1);
  return;
}



// FUNCTION 1467f2438 FUN_1467f2438 body=111 status=ok
// SIG undefined FUN_1467f2438(void)

ulonglong FUN_1467f2438(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x100;
  if (0x100 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1467f24a8 FUN_1467f24a8 body=647 status=ok
// SIG undefined FUN_1467f24a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467f24a8(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auStack_e8 [47];
  char local_b9;
  longlong local_b8;
  byte local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845d7c) {
    FUN_144b3d300(&DAT_14c845d7c);
    if (DAT_14c845d7c == -1) {
      FUN_1446f470e(&local_98,L"Global",1);
      FUN_142767454(&DAT_14c845d70,&local_98,7,7);
      atexit(FUN_14276d21c);
      _Init_thread_footer(&DAT_14c845d7c);
    }
  }
  bVar6 = DAT_14c758b70;
  bVar7 = DAT_14c845d70;
  DAT_14c758b70 = DAT_14c845d70;
  cVar8 = DAT_14c845d71;
  local_b9 = DAT_14c845d6c;
  DAT_14c845d6c = DAT_14c845d71;
  plVar1 = (longlong *)(param_1 + 0x820);
  pbVar2 = (byte *)(param_1 + 0x830);
  local_70 = (undefined4 *)&DAT_100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  local_b8 = param_1;
  uStack_68 = pbVar2;
  if (*(int *)(param_1 + 0x848) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar9 = *(int *)(param_1 + 0x848);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar1;
  if ((iStack_5c != iVar9) || (uStack_68 != pbVar2)) {
    local_b8 = local_b8 + 0x8c0;
    do {
      puVar3 = (undefined4 *)(*local_98 + (longlong)iStack_7c * 0x18);
      local_a8 = *puVar3;
      uStack_a4 = puVar3[1];
      uStack_a0 = puVar3[2];
      uStack_9c = puVar3[3];
      pbVar5 = *(byte **)(puVar3 + 2);
      bVar4 = *pbVar5;
      bVar10 = (byte)_DAT_14c845d70;
      bVar11 = bVar4;
      if ((bVar7 < bVar6) && (bVar11 = bVar10, bVar4 <= bVar10)) {
        bVar11 = bVar4;
      }
      if (bVar6 < bVar7) {
        if (bVar10 < bVar4) {
          bVar10 = bVar4;
        }
        bVar11 = bVar10;
        if (pbVar5[3] < bVar10) {
          bVar11 = pbVar5[3];
        }
      }
      if (bVar11 != 0) {
        local_70 = &local_a8;
        uStack_68 = &local_a9;
        local_a9 = bVar11;
        FUN_140bbce72(local_b8,local_4c,&local_70,0);
      }
      *pbVar5 = bVar11;
      if (cVar8 != local_b9) {
        pbVar5[1] = DAT_14c845d71;
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 ||
             ((byte *)CONCAT44(uStack_84,uStack_88) != pbVar2 || iStack_7c != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f2730 FUN_1467f2730 body=132 status=ok
// SIG undefined FUN_1467f2730(void)

void FUN_1467f2730(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f27b6 FUN_1467f27b6 body=67 status=ok
// SIG undefined FUN_1467f27b6(void)

void FUN_1467f27b6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1459834be(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140bbd39c(param_1);
    return;
  }
  FUN_145a2bbf0(param_1);
  FUN_1459834be(param_1,0);
  return;
}



// FUNCTION 1467f27fa FUN_1467f27fa body=31 status=ok
// SIG undefined FUN_1467f27fa(void)

undefined8 FUN_1467f27fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f282e FUN_1467f282e body=93 status=ok
// SIG undefined FUN_1467f282e(void)

void FUN_1467f282e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e1c610;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467f288c FUN_1467f288c body=93 status=ok
// SIG undefined FUN_1467f288c(void)

void FUN_1467f288c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e1c610;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467f28ea FUN_1467f28ea body=126 status=ok
// SIG undefined FUN_1467f28ea(void)

void FUN_1467f28ea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1dc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e1c610;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467f2959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467f2972 FUN_1467f2972 body=20 status=ok
// SIG undefined FUN_1467f2972(void)

undefined1 FUN_1467f2972(longlong param_1)

{
  FUN_1467f2988(param_1 + 0x18);
  return 1;
}



// FUNCTION 1467f2988 FUN_1467f2988 body=70 status=ok
// SIG undefined FUN_1467f2988(void)

void FUN_1467f2988(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  lVar2 = FUN_140a3e602();
  if (lVar2 == 0) {
    uVar3 = FUN_145857cde();
    FUN_14126849c(uVar3,uVar1);
    return;
  }
  FUN_1467f29ce(lVar2,param_2,param_3);
  return;
}



// FUNCTION 1467f29ce FUN_1467f29ce body=267 status=ok
// SIG undefined FUN_1467f29ce(void)

void FUN_1467f29ce(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_2[1];
  if (iVar2 == DAT_14c872cf0) {
    if (1 < iVar2) {
      lVar3 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar3);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(DAT_14c872ce8 + lVar3);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_1467f2a59;
LAB_1467f2a24:
        lVar3 = lVar3 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1467f2a24;
      }
      if (uVar5 != uVar7) goto LAB_1467f2abb;
    }
  }
  else if (DAT_14c872cf0 + iVar2 != 1) goto LAB_1467f2abb;
LAB_1467f2a59:
  FUN_140056680(&local_30,L"Core.Log");
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_28 + -1;
  if (local_28 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_1456cf568(param_3,uVar1,&local_30);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar2 != -1) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
LAB_1467f2abb:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467f2ada FUN_1467f2ada body=1174 status=ok
// SIG undefined FUN_1467f2ada(void)

ulonglong FUN_1467f2ada(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  byte *unaff_RSI;
  ulonglong uVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_d8 = 1;
  local_d0 = param_3;
  FUN_144a38a52(param_2,&local_78,&PTR_DAT_149e00c20,4);
  if (1 < (int)uStack_70) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c845d88) && (FUN_144b3d300(&DAT_14c845d88), DAT_14c845d88 == -1)) {
      FUN_1446f470e(&DAT_14c845d80,L"only",1);
      _Init_thread_footer(&DAT_14c845d88);
    }
    if (*(int *)(local_78 + 3) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)local_78[2];
    }
    FUN_1446f470e(&local_80,puVar7,1);
    if (DAT_14c845d80 == local_80) {
      if (*(int *)(local_78 + 1) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*local_78;
      }
      FUN_1446f470e(&local_88,puVar7,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c845da0) && (FUN_144b3d300(&DAT_14c845da0), DAT_14c845da0 == -1))
      {
        FUN_1400b22c2(&DAT_14c845d90,&DAT_149e1d286);
        atexit((_func_5014 *)&LAB_14276d3e8);
        _Init_thread_footer(&DAT_14c845da0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c845db8) && (FUN_144b3d300(&DAT_14c845db8), DAT_14c845db8 == -1))
      {
        FUN_1400b22c2(&DAT_14c845da8," Verbose");
        atexit((_func_5014 *)&LAB_14276d3f9);
        _Init_thread_footer(&DAT_14c845db8);
      }
      plVar1 = (longlong *)(param_1 + 0x820);
      lVar2 = param_1 + 0x830;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(param_1 + 0x848) == 0) {
        iVar5 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar5 = *(int *)(param_1 + 0x848);
      }
      uStack_90 = CONCAT44(uStack_4c,uStack_50);
      local_98 = local_58;
      uVar3 = local_98;
      local_a8 = (undefined4)local_68;
      uStack_a4 = local_68._4_4_;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar4 = local_98._4_4_;
      local_b0 = plVar1;
      if ((local_98._4_4_ != iVar5) || (local_98 = uVar3, uStack_60 != lVar2)) {
        do {
          local_98 = uVar3;
          local_b8 = *(longlong *)(*local_b0 + (longlong)iVar4 * 0x18);
          unaff_RSI = *(byte **)(*local_b0 + 8 + (longlong)iVar4 * 0x18);
          if (local_b8 == local_88) {
            FUN_1400021e4(&local_b8,local_c8);
            FUN_144a7dea0(&local_68,local_c8,&DAT_14c845da8);
            FUN_14276c0ba(param_1,&local_68,0);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
            if (unaff_RSI == (byte *)0x0) {
              pwVar8 = L"Verbose";
            }
            else if ((byte)(*unaff_RSI & 0xf) < 8) {
              pwVar8 = (wchar_t *)(&PTR_DAT_149e1e918)[*unaff_RSI & 0xf];
            }
            else {
              pwVar8 = L"UnknownVerbosity";
            }
            if (*(int *)(local_78 + 1) == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            else {
              puVar7 = (undefined2 *)*local_78;
            }
            FUN_140047918(local_d0,L"%s is now %s",puVar7,pwVar8);
          }
          else {
            FUN_1400021e4(&local_b8,local_c8);
            FUN_144a7dea0(&local_68,local_c8,&DAT_14c845d90);
            FUN_14276c0ba(param_1,&local_68,0);
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
          }
          local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
          FUN_1449c0562(&local_a8);
          iVar4 = local_98._4_4_;
          uVar3 = local_98;
        } while (local_b0 != plVar1 ||
                 (CONCAT44(uStack_9c,uStack_a0) != lVar2 || local_98._4_4_ != iVar5));
      }
      FUN_1468161aa(local_d0,L"Disabling other logs finished");
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      goto LAB_1467f2b3a;
    }
  }
  uVar6 = 0;
LAB_1467f2b3a:
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1467f2f72 FUN_1467f2f72 body=411 status=ok
// SIG undefined FUN_1467f2f72(void)

void FUN_1467f2f72(longlong *param_1,uint param_2)

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
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x14 + -0x10);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar8 + -1;
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
        puVar5 = puVar5 + -5;
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



// FUNCTION 1467f310e FUN_1467f310e body=24 status=ok
// SIG undefined FUN_1467f310e(void)

void FUN_1467f310e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467f3122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1467f3126 FUN_1467f3126 body=29 status=ok
// SIG undefined FUN_1467f3126(void)

undefined8 FUN_1467f3126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f3144 FUN_1467f3144 body=132 status=ok
// SIG undefined FUN_1467f3144(void)

void FUN_1467f3144(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f31c9 FUN_1467f31c9 body=40 status=ok
// SIG undefined FUN_1467f31c9(void)

void FUN_1467f31c9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1467f31f2 FUN_1467f31f2 body=96 status=ok
// SIG undefined FUN_1467f31f2(void)

void FUN_1467f31f2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1467f3252 FUN_1467f3252 body=119 status=ok
// SIG undefined FUN_1467f3252(void)

void FUN_1467f3252(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1467f32ca(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467f32ca FUN_1467f32ca body=141 status=ok
// SIG undefined FUN_1467f32ca(void)

void FUN_1467f32ca(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 1467f3358 FUN_1467f3358 body=123 status=ok
// SIG undefined FUN_1467f3358(void)

void FUN_1467f3358(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1467ea3bc(param_1,local_28);
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_28);
  iVar1 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(param_2,*puVar2,iVar1);
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f33e4 FUN_1467f33e4 body=339 status=ok
// SIG undefined FUN_1467f33e4(void)

longlong * FUN_1467f33e4(longlong *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  
  if (-1 < param_3) {
    pbVar1 = (byte *)(param_1 + 1);
    while ((iVar8 = (int)param_1[4], iVar8 < param_3 && ((*pbVar1 & 0x1f) != 0))) {
      *(int *)(param_1 + 4) = iVar8 + 1;
      FUN_1468223c2(pbVar1);
    }
    if (param_3 < iVar8) {
      puVar3 = (undefined4 *)*param_1;
      param_1[3] = *(longlong *)(puVar3 + 4);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)pbVar1 = *puVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 2) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
      *(undefined4 *)(param_1 + 4) = 0;
      iVar8 = 0;
      if (param_3 != 0) {
        do {
          if ((*pbVar1 & 0x1f) == 0) break;
          *(int *)(param_1 + 4) = iVar8 + 1;
          FUN_1468223c2(pbVar1);
          iVar8 = (int)param_1[4];
        } while (iVar8 < param_3);
      }
    }
    if (iVar8 == param_3) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      if (*(uint *)(param_2 + 1) == uVar2) {
        if (uVar2 == 0) goto LAB_1467f352b;
        iVar8 = FUN_1467b8aa2(*param_2,param_1[2] - (ulonglong)uVar2);
        if (iVar8 == 0) goto LAB_1467f352b;
      }
    }
  }
  lVar7 = param_1[4];
  pbVar1 = (byte *)(param_1 + 1);
  while ((*(byte *)(param_1 + 1) & 0x1f) != 0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    if (*(uint *)(param_2 + 1) == uVar2) {
      if (uVar2 == 0) goto LAB_1467f352b;
      iVar8 = FUN_1467b8aa2(*param_2,param_1[2] - (ulonglong)uVar2);
      if (iVar8 == 0) goto LAB_1467f352b;
    }
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
    FUN_1468223c2(pbVar1);
  }
  puVar3 = (undefined4 *)*param_1;
  param_1[3] = *(longlong *)(puVar3 + 4);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)pbVar1 = *puVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 4) = 0;
  if (0 < (int)lVar7) {
    iVar8 = 0;
    do {
      if ((*pbVar1 & 0x1f) == 0) break;
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      if (*(uint *)(param_2 + 1) == uVar2) {
        if (uVar2 == 0) break;
        iVar8 = FUN_1467b8aa2(*param_2,param_1[2] - (ulonglong)uVar2);
        if (iVar8 == 0) break;
        iVar8 = (int)param_1[4];
      }
      *(int *)(param_1 + 4) = iVar8 + 1;
      FUN_1468223c2(pbVar1);
      iVar8 = (int)param_1[4];
    } while (iVar8 < (int)lVar7);
  }
LAB_1467f352b:
  return param_1 + 1;
}



// FUNCTION 1467f3538 FUN_1467f3538 body=123 status=ok
// SIG undefined FUN_1467f3538(void)

void FUN_1467f3538(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1467ea3bc(param_1,local_28);
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_28);
  iVar1 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_144aa081e(param_2,*puVar2,iVar1);
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f35c4 FUN_1467f35c4 body=339 status=ok
// SIG undefined FUN_1467f35c4(void)

longlong * FUN_1467f35c4(longlong *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  
  if (-1 < param_3) {
    pbVar1 = (byte *)(param_1 + 1);
    while ((iVar8 = (int)param_1[4], iVar8 < param_3 && ((*pbVar1 & 0x1f) != 0))) {
      *(int *)(param_1 + 4) = iVar8 + 1;
      FUN_1468223c2(pbVar1);
    }
    if (param_3 < iVar8) {
      puVar3 = (undefined4 *)*param_1;
      param_1[3] = *(longlong *)(puVar3 + 4);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)pbVar1 = *puVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 2) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
      *(undefined4 *)(param_1 + 4) = 0;
      iVar8 = 0;
      if (param_3 != 0) {
        do {
          if ((*pbVar1 & 0x1f) == 0) break;
          *(int *)(param_1 + 4) = iVar8 + 1;
          FUN_1468223c2(pbVar1);
          iVar8 = (int)param_1[4];
        } while (iVar8 < param_3);
      }
    }
    if (iVar8 == param_3) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      if (*(uint *)(param_2 + 1) == uVar2) {
        if (uVar2 == 0) goto LAB_1467f370b;
        iVar8 = FUN_1467b8aa2(*param_2,param_1[2] - (ulonglong)uVar2);
        if (iVar8 == 0) goto LAB_1467f370b;
      }
    }
  }
  lVar7 = param_1[4];
  pbVar1 = (byte *)(param_1 + 1);
  while ((*(byte *)(param_1 + 1) & 0x1f) != 0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    if (*(uint *)(param_2 + 1) == uVar2) {
      if (uVar2 == 0) goto LAB_1467f370b;
      iVar8 = FUN_1467b8aa2(*param_2,param_1[2] - (ulonglong)uVar2);
      if (iVar8 == 0) goto LAB_1467f370b;
    }
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
    FUN_1468223c2(pbVar1);
  }
  puVar3 = (undefined4 *)*param_1;
  param_1[3] = *(longlong *)(puVar3 + 4);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)pbVar1 = *puVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 4) = 0;
  if (0 < (int)lVar7) {
    iVar8 = 0;
    do {
      if ((*pbVar1 & 0x1f) == 0) break;
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      if (*(uint *)(param_2 + 1) == uVar2) {
        if (uVar2 == 0) break;
        iVar8 = FUN_1467b8aa2(*param_2,param_1[2] - (ulonglong)uVar2);
        if (iVar8 == 0) break;
        iVar8 = (int)param_1[4];
      }
      *(int *)(param_1 + 4) = iVar8 + 1;
      FUN_1468223c2(pbVar1);
      iVar8 = (int)param_1[4];
    } while (iVar8 < (int)lVar7);
  }
LAB_1467f370b:
  return param_1 + 1;
}



// FUNCTION 1467f3718 FUN_1467f3718 body=89 status=ok
// SIG undefined FUN_1467f3718(void)

longlong FUN_1467f3718(longlong param_1,void *param_2,int param_3)

{
  void *_Dst;
  size_t _Size;
  
  _Size = (size_t)param_3;
  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 8) + _Size) {
    FUN_1402134d6(param_1,_Size);
  }
  if (param_3 != 0) {
    _Dst = *(void **)(param_1 + 8);
    memcpy(_Dst,param_2,_Size);
    *(size_t *)(param_1 + 8) = (longlong)_Dst + _Size;
  }
  return param_1;
}



// FUNCTION 1467f377c FUN_1467f377c body=29 status=ok
// SIG undefined FUN_1467f377c(void)

undefined8 FUN_1467f377c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f379a FUN_1467f379a body=109 status=ok
// SIG undefined FUN_1467f379a(void)

void FUN_1467f379a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  FUN_1467ef71d(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467f37fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1467f3808 FUN_1467f3808 body=164 status=ok
// SIG undefined FUN_1467f3808(void)

void FUN_1467f3808(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1467f3880;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1467f3880;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1467f3880:
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
                    /* WARNING: Could not recover jumptable at 0x0001467f38a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1467f38ac FUN_1467f38ac body=132 status=ok
// SIG undefined FUN_1467f38ac(void)

void FUN_1467f38ac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467f3932 FUN_1467f3932 body=138 status=ok
// SIG undefined FUN_1467f3932(void)

undefined8 *
FUN_1467f3932(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e1d760;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_144a5dc74(param_1 + 5);
  *param_1 = &PTR_FUN_149e1d350;
  plVar1 = (longlong *)*param_3;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 6) = (int)param_3[1];
  *(undefined1 *)(param_1 + 7) = param_4;
  return param_1;
}



// FUNCTION 1467f39bc FUN_1467f39bc body=9 status=ok
// SIG undefined FUN_1467f39bc(void)

void FUN_1467f39bc(longlong param_1)

{
  FUN_1467f3db2(param_1 + 0x10);
  return;
}



// FUNCTION 1467f39c6 FUN_1467f39c6 body=29 status=ok
// SIG undefined FUN_1467f39c6(void)

undefined8 FUN_1467f39c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f39e4 FUN_1467f39e4 body=38 status=ok
// SIG undefined FUN_1467f39e4(void)

undefined8 FUN_1467f39e4(undefined8 param_1,int param_2)

{
  FUN_1467f3db2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f3a10 FUN_1467f3a10 body=167 status=ok
// SIG undefined FUN_1467f3a10(void)

void FUN_1467f3a10(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1467f3a8b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1467f3a8b;
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
LAB_1467f3a8b:
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
                    /* WARNING: Could not recover jumptable at 0x0001467f3aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1467f3ab8 FUN_1467f3ab8 body=197 status=ok
// SIG undefined FUN_1467f3ab8(void)

undefined8 * FUN_1467f3ab8(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e1d760;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_144a5dc74(param_1 + 5);
  *param_1 = &PTR_FUN_149e1d3a0;
  plVar1 = (longlong *)*param_3;
  param_1[7] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 8) = (int)param_3[1];
  *(char *)(param_1 + 9) = (char)param_3[2];
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1413a4324(param_1 + 10,param_3 + 3);
  plVar3 = (longlong *)FUN_14142e2d2(param_3);
  plVar1 = (longlong *)*plVar3;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 6) = (int)plVar3[1];
  return param_1;
}



// FUNCTION 1467f3b88 FUN_1467f3b88 body=29 status=ok
// SIG undefined FUN_1467f3b88(void)

undefined8 FUN_1467f3b88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f3ba6 FUN_1467f3ba6 body=38 status=ok
// SIG undefined FUN_1467f3ba6(void)

undefined8 FUN_1467f3ba6(undefined8 param_1,int param_2)

{
  FUN_1467f3bdc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f3bdc FUN_1467f3bdc body=55 status=ok
// SIG undefined FUN_1467f3bdc(void)

void FUN_1467f3bdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e1d3a0;
  FUN_1449db362(param_1 + 10);
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  FUN_1467f3db2(param_1);
  return;
}



// FUNCTION 1467f3c14 FUN_1467f3c14 body=167 status=ok
// SIG undefined FUN_1467f3c14(void)

void FUN_1467f3c14(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1467f3c8f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1467f3c8f;
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
LAB_1467f3c8f:
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
                    /* WARNING: Could not recover jumptable at 0x0001467f3caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1467f3cbc FUN_1467f3cbc body=161 status=ok
// SIG undefined FUN_1467f3cbc(void)

undefined8 * FUN_1467f3cbc(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e1d760;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_144a5dc74(param_1 + 5);
  *param_1 = &PTR_FUN_149e1d3f0;
  *(undefined4 *)(param_1 + 7) = param_2;
  FUN_1467eb8f0(local_38,param_2);
  FUN_140008f88(param_1 + 5,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f3d5e FUN_1467f3d5e body=9 status=ok
// SIG undefined FUN_1467f3d5e(void)

void FUN_1467f3d5e(longlong param_1)

{
  FUN_1467f3db2(param_1 + 0x10);
  return;
}



// FUNCTION 1467f3d68 FUN_1467f3d68 body=29 status=ok
// SIG undefined FUN_1467f3d68(void)

undefined8 FUN_1467f3d68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f3d86 FUN_1467f3d86 body=38 status=ok
// SIG undefined FUN_1467f3d86(void)

undefined8 FUN_1467f3d86(undefined8 param_1,int param_2)

{
  FUN_1467f3db2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f3db2 FUN_1467f3db2 body=76 status=ok
// SIG undefined FUN_1467f3db2(void)

void FUN_1467f3db2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149e1d760;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467f3df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1467f3dfe FUN_1467f3dfe body=167 status=ok
// SIG undefined FUN_1467f3dfe(void)

void FUN_1467f3dfe(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1467f3e79;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1467f3e79;
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
LAB_1467f3e79:
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
                    /* WARNING: Could not recover jumptable at 0x0001467f3e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1467f3ea6 FUN_1467f3ea6 body=110 status=ok
// SIG undefined FUN_1467f3ea6(void)

undefined8 * FUN_1467f3ea6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_149e1d490;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = FUN_144a3f946();
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 1467f3f14 FUN_1467f3f14 body=57 status=ok
// SIG undefined FUN_1467f3f14(void)

undefined8 * FUN_1467f3f14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e1d490;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f3f70 FUN_1467f3f70 body=64 status=ok
// SIG undefined FUN_1467f3f70(void)

void FUN_1467f3f70(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  FUN_1467f4086(*param_2,param_1);
  return;
}



// FUNCTION 1467f3fb0 FUN_1467f3fb0 body=64 status=ok
// SIG undefined FUN_1467f3fb0(void)

void FUN_1467f3fb0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  FUN_1467f4086(*param_2,param_1);
  return;
}



// FUNCTION 1467f3ff0 FUN_1467f3ff0 body=98 status=ok
// SIG undefined FUN_1467f3ff0(void)

void FUN_1467f3ff0(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  FUN_1467f4086(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467f4043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467f4066 FUN_1467f4066 body=30 status=ok
// SIG undefined FUN_1467f4066(void)

undefined8 FUN_1467f4066(longlong param_1,undefined8 param_2)

{
  FUN_1467f410e(param_1 + 8,param_1 + 0x20,param_2);
  return 1;
}



// FUNCTION 1467f4086 FUN_1467f4086 body=135 status=ok
// SIG undefined FUN_1467f4086(void)

undefined8 * FUN_1467f4086(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_LAB_149e1d490;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_149e1d420;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 1467f410e FUN_1467f410e body=147 status=ok
// SIG undefined FUN_1467f410e(void)

void FUN_1467f410e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = (code *)*param_2;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  (*pcVar1)(param_3,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f41a2 FUN_1467f41a2 body=47 status=ok
// SIG undefined FUN_1467f41a2(void)

void FUN_1467f41a2(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149e1b4a0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1467f3db2(param_1 + 0x10);
  return;
}



// FUNCTION 1467f41d2 FUN_1467f41d2 body=29 status=ok
// SIG undefined FUN_1467f41d2(void)

undefined8 FUN_1467f41d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f41f0 FUN_1467f41f0 body=167 status=ok
// SIG undefined FUN_1467f41f0(void)

void FUN_1467f41f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1467f426b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1467f426b;
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
LAB_1467f426b:
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
                    /* WARNING: Could not recover jumptable at 0x0001467f428b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1467f42c8 FUN_1467f42c8 body=29 status=ok
// SIG undefined FUN_1467f42c8(void)

undefined8 FUN_1467f42c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f4326 FUN_1467f4326 body=29 status=ok
// SIG undefined FUN_1467f4326(void)

undefined8 FUN_1467f4326(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f436c FUN_1467f436c body=29 status=ok
// SIG undefined FUN_1467f436c(void)

undefined8 FUN_1467f436c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f43b2 FUN_1467f43b2 body=29 status=ok
// SIG undefined FUN_1467f43b2(void)

undefined8 FUN_1467f43b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f43f8 FUN_1467f43f8 body=29 status=ok
// SIG undefined FUN_1467f43f8(void)

undefined8 FUN_1467f43f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f443e FUN_1467f443e body=29 status=ok
// SIG undefined FUN_1467f443e(void)

undefined8 FUN_1467f443e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f4484 FUN_1467f4484 body=29 status=ok
// SIG undefined FUN_1467f4484(void)

undefined8 FUN_1467f4484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f44ca FUN_1467f44ca body=29 status=ok
// SIG undefined FUN_1467f44ca(void)

undefined8 FUN_1467f44ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f4510 FUN_1467f4510 body=29 status=ok
// SIG undefined FUN_1467f4510(void)

undefined8 FUN_1467f4510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f4556 FUN_1467f4556 body=138 status=ok
// SIG undefined FUN_1467f4556(void)

void FUN_1467f4556(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467f45e0 FUN_1467f45e0 body=138 status=ok
// SIG undefined FUN_1467f45e0(void)

void FUN_1467f45e0(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1467f466a FUN_1467f466a body=138 status=ok
// SIG undefined FUN_1467f466a(void)

void FUN_1467f466a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x24 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x24) = param_2;
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
      puVar7 = puVar7 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467f46f4 FUN_1467f46f4 body=138 status=ok
// SIG undefined FUN_1467f46f4(void)

void FUN_1467f46f4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x80 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
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
      puVar7 = puVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467f477e FUN_1467f477e body=110 status=ok
// SIG undefined FUN_1467f477e(void)

int FUN_1467f477e(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a70af3(lVar4 + (longlong)iVar1 * 0x80,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x70 + (longlong)iVar1 * 0x80);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1467f47ec FUN_1467f47ec body=138 status=ok
// SIG undefined FUN_1467f47ec(void)

void FUN_1467f47ec(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x80 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
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
      puVar7 = puVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467f4876 thunk_FUN_14023423e body=5 status=ok
// SIG undefined thunk_FUN_14023423e(void)

void thunk_FUN_14023423e(void)

{
  FUN_14023423e();
  return;
}



// FUNCTION 1467f487e FUN_1467f487e body=29 status=ok
// SIG undefined FUN_1467f487e(void)

undefined8 FUN_1467f487e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f48c4 FUN_1467f48c4 body=29 status=ok
// SIG undefined FUN_1467f48c4(void)

undefined8 FUN_1467f48c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f490a FUN_1467f490a body=29 status=ok
// SIG undefined FUN_1467f490a(void)

undefined8 FUN_1467f490a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f4950 FUN_1467f4950 body=29 status=ok
// SIG undefined FUN_1467f4950(void)

undefined8 FUN_1467f4950(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467f4996 FUN_1467f4996 body=38 status=ok
// SIG undefined FUN_1467f4996(void)

undefined8 FUN_1467f4996(longlong param_1,undefined8 param_2)

{
  FUN_1467f4a00(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 1467f49bc FUN_1467f49bc body=51 status=ok
// SIG undefined FUN_1467f49bc(void)

undefined8
FUN_1467f49bc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1467f4db0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5,
                *(undefined8 *)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 1467f4a00 FUN_1467f4a00 body=943 status=ok
// SIG undefined FUN_1467f4a00(void)

undefined8 *
FUN_1467f4a00(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             longlong *param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_108 [44];
  undefined1 local_dc [4];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  longlong *local_b8 [2];
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = 0;
  uStack_80 = 0;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  uVar4 = FUN_144a70b6e(&local_98);
  iVar5 = FUN_141041776(param_1,uVar4,&local_98);
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0x80 + *param_1;
    if (lVar8 != -0x30 && lVar8 != 0) {
      local_60 = param_5;
      pcVar2 = *(code **)(lVar8 + 0x30);
      plVar9 = (longlong *)(lVar8 + 0x50);
      if (*(longlong **)(lVar8 + 0x40) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar8 + 0x40);
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar2)(param_2,uVar7,param_4,&local_60);
      goto LAB_1467f4d01;
    }
  }
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  FUN_14006620a(local_c8,param_3[8],(ulonglong)(param_3[9] - param_3[8]) >> 1);
  FUN_140233b1a(local_b8,local_c8);
  local_60._0_4_ = 4;
  FUN_14023423e(&local_50,local_b8);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
  FUN_140188694(&local_a8,0);
  *local_a8 = (undefined4)local_60;
  local_a8[1] = local_60._4_4_;
  local_a8[2] = uStack_58;
  local_a8[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_a8 + 4) = 0;
    local_a8[6] = 0;
  }
  else {
    FUN_14023423e(local_a8 + 4,&local_50);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14006620a(local_c8,*(longlong *)(param_4 + 0x10),
                (ulonglong)(*(longlong *)(param_4 + 0x12) - *(longlong *)(param_4 + 0x10)) >> 1);
  FUN_140233b1a(local_b8,local_c8);
  local_60 = (longlong *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(&local_50,local_b8);
  uVar3 = uStack_a0;
  lVar8 = (longlong)(int)uStack_a0;
  uVar6 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
  if (uStack_a0._4_4_ < uVar6) {
    FUN_140188694(&local_a8,uVar3 & 0xffffffff);
  }
  puVar1 = local_a8 + lVar8 * 8;
  *puVar1 = (undefined4)local_60;
  puVar1[1] = local_60._4_4_;
  puVar1[2] = uStack_58;
  puVar1[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_a8 + lVar8 * 8 + 4) = 0;
    local_a8[lVar8 * 8 + 6] = 0;
  }
  else {
    FUN_14023423e(local_a8 + lVar8 * 8 + 4,&local_50);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1413a400a(local_c8,L"PreUnaryExecutionError");
  FUN_1413a400a(local_dc,L"ExpressionParser");
  FUN_140208bae(local_b8,local_dc,local_c8,L"Pre-unary operator {0} cannot operate on {1}");
  FUN_14023409e(local_d8,local_b8,1);
  FUN_140188794(&local_60,local_d8,&local_a8);
  *param_2 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 1) = uStack_58;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    (**(code **)(*local_60 + 8))();
    *(undefined4 *)(param_2 + 1) = uStack_58;
    *(undefined1 *)(param_2 + 8) = 1;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  FUN_14007f2db(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_1467f4d01:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f4db0 FUN_1467f4db0 body=1242 status=ok
// SIG undefined FUN_1467f4db0(void)

undefined8 *
FUN_1467f4db0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,longlong *param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_cc [4];
  undefined1 local_c8 [16];
  longlong local_b8 [2];
  longlong *local_a8 [2];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = *param_4;
  uStack_70 = param_4[1];
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  uVar4 = FUN_144a70b6e(&local_88);
  iVar5 = FUN_1467f477e((longlong *)(param_1 + 0xa0),uVar4,&local_88);
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0x80 + *(longlong *)(param_1 + 0xa0);
    if (lVar8 != -0x30 && lVar8 != 0) {
      local_58 = param_6;
      pcVar2 = *(code **)(lVar8 + 0x30);
      plVar9 = (longlong *)(lVar8 + 0x50);
      if (*(longlong **)(lVar8 + 0x40) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar8 + 0x40);
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      local_d8 = &local_58;
      (*pcVar2)(param_2,uVar7,param_4,param_5);
      goto LAB_1467f51c3;
    }
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_14006620a(local_b8,param_3[8],(ulonglong)(param_3[9] - param_3[8]) >> 1);
  FUN_140233b1a(local_a8,local_b8);
  local_58 = (longlong *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,local_a8);
  uVar3 = uStack_90;
  lVar8 = (longlong)(int)uStack_90;
  uVar6 = (int)uStack_90 + 1;
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
  if (uStack_90._4_4_ < uVar6) {
    FUN_140188694(&local_98,uVar3 & 0xffffffff);
  }
  lVar8 = lVar8 * 0x20;
  puVar1 = (undefined4 *)(local_98 + lVar8);
  *puVar1 = (undefined4)local_58;
  puVar1[1] = local_58._4_4_;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  if (local_48 == (longlong *)0x0) {
    *(undefined8 *)(local_98 + lVar8 + 0x10) = 0;
    *(undefined4 *)(local_98 + lVar8 + 0x18) = 0;
  }
  else {
    FUN_14023423e(local_98 + lVar8 + 0x10,&local_48);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14006620a(local_b8,param_4[8],(ulonglong)(param_4[9] - param_4[8]) >> 1);
  FUN_140233b1a(local_a8,local_b8);
  local_58 = (longlong *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,local_a8);
  uVar3 = uStack_90;
  lVar8 = (longlong)(int)uStack_90;
  uVar6 = (int)uStack_90 + 1;
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
  if (uStack_90._4_4_ < uVar6) {
    FUN_140188694(&local_98,uVar3 & 0xffffffff);
  }
  lVar8 = lVar8 * 0x20;
  puVar1 = (undefined4 *)(local_98 + lVar8);
  *puVar1 = (undefined4)local_58;
  puVar1[1] = local_58._4_4_;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  if (local_48 == (longlong *)0x0) {
    *(undefined8 *)(local_98 + lVar8 + 0x10) = 0;
    *(undefined4 *)(local_98 + lVar8 + 0x18) = 0;
  }
  else {
    FUN_14023423e(local_98 + lVar8 + 0x10,&local_48);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14006620a(local_b8,*(longlong *)(param_5 + 0x10),
                (ulonglong)(*(longlong *)(param_5 + 0x12) - *(longlong *)(param_5 + 0x10)) >> 1);
  FUN_140233b1a(local_a8,local_b8);
  local_58 = (longlong *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,local_a8);
  uVar3 = uStack_90;
  lVar8 = (longlong)(int)uStack_90;
  uVar6 = (int)uStack_90 + 1;
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
  if (uStack_90._4_4_ < uVar6) {
    FUN_140188694(&local_98,uVar3 & 0xffffffff);
  }
  lVar8 = lVar8 * 0x20;
  puVar1 = (undefined4 *)(local_98 + lVar8);
  *puVar1 = (undefined4)local_58;
  puVar1[1] = local_58._4_4_;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  if (local_48 == (longlong *)0x0) {
    *(undefined8 *)(local_98 + lVar8 + 0x10) = 0;
    *(undefined4 *)(local_98 + lVar8 + 0x18) = 0;
  }
  else {
    FUN_14023423e(local_98 + lVar8 + 0x10,&local_48);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1413a400a(local_b8,L"BinaryExecutionError");
  FUN_1413a400a(local_cc,L"ExpressionParser");
  FUN_140208bae(local_a8,local_cc,local_b8,L"Binary operator {0} cannot operate on {1} and {2}");
  FUN_14023409e(local_c8,local_a8,1);
  FUN_140188794(&local_58,local_c8,&local_98);
  *param_2 = local_58;
  if (local_58 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 1) = uStack_50;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    (**(code **)(*local_58 + 8))();
    *(undefined4 *)(param_2 + 1) = uStack_50;
    *(undefined1 *)(param_2 + 8) = 1;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  FUN_14007f2db(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_1467f51c3:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f528c FUN_1467f528c body=208 status=ok
// SIG undefined FUN_1467f528c(void)

undefined8
FUN_1467f528c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  plVar9 = (longlong *)(param_1 + 0xf0);
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = FUN_144a70b6e(&local_68);
  plVar8 = plVar9;
  iVar4 = FUN_1467f535e(plVar9,uVar3,&local_68);
  if (iVar4 != -1) {
    plVar8 = (longlong *)((longlong)iVar4 * 0x80 + *plVar9);
    if (plVar8 != (longlong *)&DAT_ffffffffffffffd0 && plVar8 != (longlong *)0x0) {
      pcVar1 = (code *)plVar8[6];
      plVar9 = plVar8 + 10;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar8[8];
      }
      local_30 = param_4;
      uVar5 = (**(code **)(*plVar9 + 8))();
      uVar5 = (*pcVar1)(uVar5,param_3,&local_30);
      bVar7 = (byte)uVar5;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      bVar2 = 1;
      goto LAB_1467f533a;
    }
  }
  bVar7 = (byte)plVar8;
  bVar2 = 0;
  uVar6 = 0;
LAB_1467f533a:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar2 & bVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467f535e FUN_1467f535e body=110 status=ok
// SIG undefined FUN_1467f535e(void)

int FUN_1467f535e(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a70af3(lVar4 + (longlong)iVar1 * 0x80,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x70 + (longlong)iVar1 * 0x80);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1467f53cc FUN_1467f53cc body=130 status=ok
// SIG undefined FUN_1467f53cc(void)

void FUN_1467f53cc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


