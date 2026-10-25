// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140405458 FUN_140405458 body=615 status=ok
// SIG undefined FUN_140405458(void)

void FUN_140405458(longlong *param_1)

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
LAB_14040549f:
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
    if (uVar9 == 0) goto LAB_14040558c;
    FUN_1446efa72(plVar7,0);
    if (0 < (int)uVar9) goto LAB_14040549f;
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
        if (uVar6 == uVar8) goto LAB_140405560;
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
LAB_140405560:
  local_48 = 0xffffffff;
  local_60 = param_1;
  if (local_44 < iVar5) {
    do {
      iVar10 = local_44;
      piVar2 = (int *)(*local_60 + (longlong)local_44 * 0x70);
      iVar5 = *(int *)(*local_60 + 8 + (longlong)local_44 * 0x70);
      if (iVar5 == 0) {
        iVar5 = *piVar2;
      }
      else {
        iVar5 = FUN_144a78877(*piVar2,iVar5);
      }
      uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
      iVar5 = (int)uVar6;
      piVar2[0x1b] = iVar5;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      piVar2[0x1a] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
LAB_14040558c:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404056c0 FUN_1404056c0 body=419 status=ok
// SIG undefined FUN_1404056c0(void)

void FUN_1404056c0(longlong *param_1,uint param_2)

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
      FUN_140875b54(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140275bcc(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x70 + lVar2 + -0x6c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = iVar8 + -1;
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
        puVar5 = puVar5 + -0x1c;
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



// FUNCTION 140405864 FUN_140405864 body=1259 status=ok
// SIG undefined FUN_140405864(void)

void FUN_140405864(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong *puVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined ****ppppuVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined *puVar10;
  undefined1 auStack_218 [36];
  int local_1f4;
  longlong *local_1f0;
  undefined ***local_1e8;
  undefined ****local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined **local_1d0;
  undefined8 local_1c8;
  undefined ***local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb70);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  local_1b8 = &local_1c0;
  local_1d0 = &PTR_FUN_149e37810;
  local_1c0 = &local_1d0;
  local_1c8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  ppuVar1 = (undefined **)(param_1 + 0xe8);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xf0) * 0x14,
             (longlong)*(int *)(param_1 + 0xf4) * 0x14);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x110) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x114) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_1f4 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0x11c);
    puVar2 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1f4,4);
      }
      else {
        FUN_14572512c(param_2,&local_1f4);
      }
    }
    else {
      local_1f4 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar3;
    }
    local_1e8 = (undefined ***)(param_1 + 0xf8);
    local_1f0 = (longlong *)&DAT_100000000;
    local_1e0 = (undefined ****)&DAT_ffffffff;
    local_1d8 = 0;
    if (*(int *)(param_1 + 0x110) != 0) {
      FUN_1449c0562(&local_1f0);
    }
    local_1c8 = local_1f0;
    local_1c0 = local_1e8;
    local_1b0 = local_1d8;
    local_1ac = local_1d4;
    local_1b8 = local_1e0;
    ppppuVar6 = local_1b8;
    local_1b8._4_4_ = (int)((ulonglong)local_1e0 >> 0x20);
    local_1d0 = ppuVar1;
    if (local_1b8._4_4_ < *(int *)(local_1e8 + 3)) {
      iVar9 = local_1b8._4_4_;
      local_1b8 = ppppuVar6;
      do {
        puVar10 = *local_1d0 + (longlong)iVar9 * 0x14;
        FUN_140405d50(param_2,puVar10);
        piVar3 = *(int **)param_2[1];
        if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
          local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,(uint)(byte)puVar10[8]);
          (**(code **)(*param_2 + 0x170))(param_2,&local_1f0,4);
          if (1 < (uint)local_1f0) {
            FUN_14572541c(param_2);
          }
          puVar10[8] = (uint)local_1f0 != 0;
        }
        else {
          puVar10[8] = *piVar3 != 0;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        local_1b8 = (undefined ****)CONCAT44(local_1b8._4_4_,(uint)local_1b8 & ~local_1c8._4_4_);
        FUN_1449c0562(&local_1c8);
        iVar9 = local_1b8._4_4_;
        ppppuVar6 = local_1b8;
      } while (local_1b8._4_4_ < *(int *)(local_1c0 + 3));
    }
  }
  else {
    local_1f4 = 0;
    puVar2 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1f4,4);
      }
      else {
        FUN_14572512c(param_2,&local_1f4);
      }
    }
    else {
      local_1f4 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar3;
    }
    FUN_1407a81ea(ppuVar1,local_1f4);
    ppppuVar6 = local_1b8;
    if (0 < local_1f4) {
      iVar9 = 0;
      do {
        FUN_140405df8(ppuVar1,&local_1d0);
        plVar5 = local_1c8;
        *(undefined1 *)(local_1c8 + 1) = 0;
        *(undefined4 *)((longlong)local_1c8 + 0xc) = 0xffffffff;
        FUN_140405d50(param_2,local_1c8);
        piVar3 = *(int **)param_2[1];
        if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
          local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,(uint)*(byte *)(plVar5 + 1));
          (**(code **)(*param_2 + 0x170))(param_2,&local_1f0,4);
          if (1 < (uint)local_1f0) {
            FUN_14572541c(param_2);
          }
          *(bool *)(plVar5 + 1) = (uint)local_1f0 != 0;
        }
        else {
          *(bool *)(plVar5 + 1) = *piVar3 != 0;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        iVar9 = iVar9 + 1;
        ppppuVar6 = local_1b8;
      } while (iVar9 < local_1f4);
    }
  }
  local_1b8 = ppppuVar6;
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((*(byte *)(param_2 + 5) & 4) == 0 && ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_1446efa72(param_1 + 0x128,0,0,4);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    uVar7 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0x11c);
    if (uVar7 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((0 < (int)uVar7) && (0 < iVar9)) {
      *(int *)(param_1 + 0x130) = iVar9;
      FUN_1404060c4(ppuVar1);
    }
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cb70);
  if (iVar9 < 9) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if (iVar9 < 0x8f) {
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  if ((local_40 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_218,&DAT_149e31250);
  }
                    /* WARNING: Could not recover jumptable at 0x000140405ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2);
  return;
}



// FUNCTION 140405d50 FUN_140405d50 body=168 status=ok
// SIG undefined FUN_140405d50(void)

longlong * FUN_140405d50(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140405df8 FUN_140405df8 body=715 status=ok
// SIG undefined FUN_140405df8(void)

int * FUN_140405df8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_140171ad2(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140405fab;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_140405fab:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x14);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x14) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1404060c4 FUN_1404060c4 body=658 status=ok
// SIG undefined FUN_1404060c4(void)

void FUN_1404060c4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_140406128;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_140406128:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x14);
      uVar16 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x10 + lVar13 * 0x14) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0xc + lVar13 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 140406356 FUN_140406356 body=89 status=ok
// SIG undefined FUN_140406356(void)

void FUN_140406356(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404063b0(param_1 + 0x100,
                (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
                (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                (uint)((char)*(undefined8 *)(param_1 + 0xa0) == '\x01') +
                (int)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20),param_2,param_3);
  return;
}



// FUNCTION 1404063b0 FUN_1404063b0 body=172 status=ok
// SIG undefined FUN_1404063b0(void)

void FUN_1404063b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  longlong local_48;
  undefined4 local_40;
  int local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 1;
  local_60 = 0;
  local_64 = param_2;
  local_5c = param_3;
  FUN_14040650c(param_1,local_58,&stack0x00000028);
  FUN_14040645e(local_58,&local_38,param_4);
  FUN_1447bda9c(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)local_34 + (double)local_38);
}



// FUNCTION 14040645e FUN_14040645e body=170 status=ok
// SIG undefined FUN_14040645e(void)

undefined8 * FUN_14040645e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_1400a24f6(param_2,param_3,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  FUN_1400a24f6(param_2,param_3,param_1);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
    uVar2 = *param_2;
    do {
      FUN_140406768(lVar1,&local_30,uVar2);
      *param_2 = local_30;
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
      uVar2 = local_30;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14040650c FUN_14040650c body=600 status=ok
// SIG undefined FUN_14040650c(void)

undefined8 *
FUN_14040650c(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  longlong local_78;
  float local_70;
  float local_6c;
  float local_68;
  byte local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    *param_2 = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0;
    param_2[2] = 0;
    param_2[3] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  fVar4 = (float)(**(code **)(*(longlong *)*param_1 + 0x2b0))();
  local_88 = (double)fVar4;
  lVar1 = *param_3;
  dVar5 = (double)(int)lVar1;
  dVar6 = (double)(int)((ulonglong)lVar1 >> 0x20);
  dVar8 = (local_88 * dVar5) / dVar6;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar8;
  auVar10 = roundpd(auVar10,auVar10,1);
  dVar9 = auVar10._0_8_;
  dVar8 = dVar8 - dVar9;
  if (2147483647.0 <= dVar9) {
    dVar9 = 2147483647.0;
  }
  if (dVar9 <= -2147483648.0) {
    dVar9 = -2147483648.0;
  }
  iVar2 = (int)dVar8;
  fVar7 = (float)dVar8 - (float)iVar2;
  fVar4 = fVar7;
  if (0.99999994 <= fVar7) {
    fVar4 = 0.99999994;
  }
  fVar4 = (float)(~-(uint)(0.0 < fVar7) & (uint)fVar7 | (uint)fVar4 & -(uint)(0.0 < fVar7)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar4) {
    fVar4 = 0.99999994;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  iVar2 = (int)dVar9 + iVar2 + (int)(fVar4 + 0.5) + 1;
  iVar3 = (*(int *)((longlong)param_1 + 0xc) + (int)param_1[2] +
           *(int *)(&DAT_14a46e600 + (ulonglong)((char)param_4[1] == '\x01') * 4) +
          (int)((ulonglong)param_4[1] >> 0x20)) -
          ((int)((ulonglong)*param_4 >> 0x20) +
          *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)*param_4 == '\0') * 4));
  local_78 = param_1[3];
  lVar1 = lVar1 >> 0x20;
  dVar6 = (double)((ulonglong)dVar6 & 0x8000000000000000);
  local_70 = (float)(((double)(*(int *)((longlong)param_1 + 0xc) * lVar1) + dVar6) / dVar5);
  local_6c = (float)(((double)((int)param_1[2] * lVar1) + dVar6) / dVar5);
  local_68 = (float)(((double)((int)param_1[1] * lVar1) + dVar6) / dVar5);
  local_64 = (*(byte *)(param_1 + 4) & 1) << 2 |
             (iVar3 <= iVar2) * '\x02' | local_64 & 0xf8 | iVar2 < iVar3;
  local_80 = (double)*(float *)(*param_1 + 0xb0);
  FUN_140406f2a(&local_78,param_2,param_3,param_4);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140406768 FUN_140406768 body=1643 status=ok
// SIG undefined FUN_140406768(void)

int * FUN_140406768(double *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  int local_b0 [2];
  int local_a8 [2];
  int local_a0 [2];
  float local_98;
  int iStack_94;
  undefined4 uStack_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar15 = *param_1;
  if ((uint)((ulonglong)dVar15 >> 0x33) < 0x1fff) {
    if (3.4028234663852886e+38 <= dVar15) {
      dVar15 = 3.4028234663852886e+38;
    }
    if (dVar15 <= -3.4028234663852886e+38) {
      dVar15 = -3.4028234663852886e+38;
    }
    local_98 = (float)dVar15;
    iStack_94 = SUB84(param_1[1],0);
    uStack_90 = (undefined4)((ulonglong)param_1[1] >> 0x20);
    FUN_1400a24f6(param_2,param_3);
    goto LAB_140406a46;
  }
  fVar12 = SUB84(dVar15,0);
  iVar7 = (int)param_3;
  fVar13 = (float)((ulonglong)param_3 >> 0x20);
  switch((ushort)((ulonglong)dVar15 >> 0x30) & 7) {
  case 0:
    plVar5 = (longlong *)FUN_147585980(param_1);
    if (plVar5 != (longlong *)0x0) {
      fVar13 = fVar13 + *(float *)((longlong)param_1 + 0xc);
      auVar16 = roundss(ZEXT416(0),ZEXT416((uint)fVar13),9);
      fVar12 = (fVar13 - auVar16._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar12) {
        fVar12 = 0.99999994;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      (**(code **)(*plVar5 + 0x2b0))
                (plVar5,param_2,
                 CONCAT44(fVar12,((int)ROUND(fVar13 + fVar13 + -0.5) >> 1) +
                                 iVar7 + *(int *)(param_1 + 1)));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_d8);
    }
  case 7:
    *(undefined8 *)param_2 = param_3;
    goto LAB_140406a46;
  case 1:
    iVar7 = *(int *)(param_1 + 1);
    fVar12 = *(float *)((longlong)param_1 + 0xc) + 0.0;
    FUN_14758a972(param_1,&local_98);
    auVar16 = roundss(ZEXT816(0),ZEXT416((uint)fVar12),9);
    *param_2 = iVar7 + (int)local_98 + ((int)ROUND(fVar12 + fVar12 + -0.5) >> 1);
    fVar12 = (fVar12 - auVar16._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    param_2[1] = (int)fVar12;
    goto LAB_140406a46;
  case 2:
    uVar1 = (uint)fVar12 & 0x7fffff | ((uint)fVar12 & 0x800000) << 8;
    uVar6 = (uint)((ulonglong)dVar15 >> 0x18);
    fVar13 = fVar13 + *(float *)((longlong)param_1 + 0xc);
    fVar12 = (float)(uVar6 & 0x7fffff | (uVar6 & 0x800000) << 8);
    iVar7 = ((int)ROUND(fVar13 + fVar13 + -0.5) >> 1) + iVar7 + *(int *)(param_1 + 1);
    auVar16 = roundss(ZEXT416(0),ZEXT416((uint)fVar13),9);
    fVar13 = (fVar13 - auVar16._0_4_) + 0.5 + -0.5;
    auVar16 = ZEXT416((uint)fVar13);
    if (0.99999994 <= fVar13) {
      auVar16 = ZEXT416(0x3f7fffff);
    }
    if (auVar16._0_4_ <= 0.0) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auVar16._4_12_;
      auVar16 = auVar3 << 0x20;
    }
    if ((undefined1 *)CONCAT44(fVar12,uVar1) != &DAT_100000001) {
      iStack_94 = (int)fVar12 >> 0x1f;
      local_88 = (longlong)(int)uVar1;
      lVar4 = ((longlong)(int)fVar12 * (longlong)iVar7) / local_88;
      dVar15 = ((double)auVar16._0_4_ * (double)(longlong)(int)fVar12) / (double)local_88 +
               (((double)(longlong)(int)fVar12 * (double)iVar7) / (double)local_88 - (double)lVar4);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar15;
      auVar16 = roundpd(auVar17,auVar17,1);
      lVar4 = (longlong)auVar16._0_8_ + lVar4;
      fVar11 = (float)(dVar15 - auVar16._0_8_);
      fVar13 = fVar11;
      if (0.99999994 <= fVar11) {
        fVar13 = 0.99999994;
      }
      if (0x7ffffffe < lVar4) {
        lVar4 = 0x7fffffff;
      }
      lVar8 = -0x80000000;
      if (-0x80000000 < lVar4) {
        lVar8 = lVar4;
      }
      iVar7 = (int)lVar8;
      fVar13 = (float)(~-(uint)(0.0 < fVar11) & (uint)fVar11 | (uint)fVar13 & -(uint)(0.0 < fVar11))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar13) {
        fVar13 = 0.99999994;
      }
      auVar16 = ZEXT416((uint)fVar13);
      local_98 = fVar12;
      if (fVar13 <= 0.0) {
        auVar16 = ZEXT416(0) << 0x20;
      }
    }
    *param_2 = iVar7;
    goto LAB_140406a41;
  case 3:
    iVar9 = *(int *)(param_1 + 1);
    fVar11 = *(float *)((longlong)param_1 + 0xc);
    FUN_14758a97a(param_1,&local_98);
    fVar13 = fVar13 + *(float *)((longlong)param_1 + 0xc);
    auVar16 = roundss(ZEXT416(0),ZEXT416((uint)fVar13),9);
    fVar12 = (fVar13 - auVar16._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    piVar10 = local_a0;
    FUN_14758b56e(&local_98,piVar10,
                  CONCAT44(fVar12,((int)ROUND(fVar13 + fVar13 + -0.5) >> 1) +
                                  iVar7 + *(int *)(param_1 + 1)));
    break;
  case 4:
    iVar9 = *(int *)(param_1 + 1);
    fVar11 = *(float *)((longlong)param_1 + 0xc);
    FUN_14758a982(param_1,&local_98);
    fVar13 = fVar13 + *(float *)((longlong)param_1 + 0xc);
    auVar16 = roundss(ZEXT416(0),ZEXT416((uint)fVar13),9);
    fVar12 = (fVar13 - auVar16._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    piVar10 = local_a8;
    FUN_14758bc4c(&local_98,piVar10,
                  CONCAT44(fVar12,((int)ROUND(fVar13 + fVar13 + -0.5) >> 1) +
                                  iVar7 + *(int *)(param_1 + 1)));
    break;
  case 5:
    iVar9 = *(int *)(param_1 + 1);
    fVar11 = *(float *)((longlong)param_1 + 0xc);
    local_88 = CONCAT44(local_88._4_4_,fVar12);
    fVar13 = fVar13 + fVar11;
    auVar16 = roundss(ZEXT416(0),ZEXT416((uint)fVar13),9);
    fVar12 = (fVar13 - auVar16._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    piVar10 = local_b0;
    FUN_140406dda(&local_88,piVar10,
                  CONCAT44(fVar12,((int)ROUND(fVar13 + fVar13 + -0.5) >> 1) + iVar7 + iVar9),
                  &local_98);
    goto LAB_140406a08;
  case 6:
    iVar9 = *(int *)(param_1 + 1);
    fVar11 = *(float *)((longlong)param_1 + 0xc);
    fVar13 = fVar13 + fVar11;
    auVar16 = roundss(ZEXT416(0),ZEXT416((uint)fVar13),9);
    fVar14 = (fVar13 - auVar16._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar14) {
      fVar14 = 0.99999994;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    piVar10 = local_b8;
    local_98 = fVar12;
    FUN_140406e82(&local_98,piVar10,
                  CONCAT44(fVar14,((int)ROUND(fVar13 + fVar13 + -0.5) >> 1) + iVar7 + iVar9));
LAB_140406a08:
    fVar11 = (float)piVar10[1] - fVar11;
    auVar16 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),1);
    fVar11 = fVar11 - auVar16._0_4_;
    *param_2 = (int)auVar16._0_4_ + (*piVar10 - iVar9);
    goto LAB_140406a37;
  }
  fVar11 = (float)piVar10[1] - fVar11;
  auVar16 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),1);
  fVar11 = fVar11 - auVar16._0_4_;
  *param_2 = (int)auVar16._0_4_ + (*piVar10 - iVar9);
LAB_140406a37:
  fVar12 = fVar11 + 0.5 + -0.5;
  auVar16 = ZEXT416((uint)fVar12);
  if (0.99999994 <= fVar12) {
    auVar16._4_12_ = ZEXT812(0);
    auVar16._0_4_ = 0x3f7fffff;
  }
  if (auVar16._0_4_ <= 0.0) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar16._4_12_;
    auVar16 = auVar2 << 0x20;
  }
LAB_140406a41:
  param_2[1] = auVar16._0_4_;
LAB_140406a46:
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140406dda FUN_140406dda body=168 status=ok
// SIG undefined FUN_140406dda(void)

int * FUN_140406dda(float *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar3 = (double)(float)((ulonglong)param_3 >> 0x20) + (double)(int)param_3;
  dVar4 = dVar3 / (double)*param_1;
  iVar1 = (int)((ulonglong)(longlong)ROUND(dVar4 + dVar4 + -0.5) >> 1);
  *param_4 = iVar1;
  dVar3 = dVar3 - (double)((float)iVar1 * *param_1);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3;
  auVar5 = roundpd(auVar5,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar3 = dVar3 - dVar4;
  if (2147483647.0 <= dVar4) {
    dVar4 = 2147483647.0;
  }
  if (dVar4 <= -2147483648.0) {
    dVar4 = -2147483648.0;
  }
  fVar2 = (float)dVar3;
  if (0.99999994 <= fVar2) {
    fVar2 = 0.99999994;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_2 = (int)dVar4;
  fVar2 = fVar2 + 0.5 + -0.5;
  if (0.99999994 <= fVar2) {
    fVar2 = 0.99999994;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  param_2[1] = (int)fVar2;
  return param_2;
}



// FUNCTION 140406e82 FUN_140406e82 body=167 status=ok
// SIG undefined FUN_140406e82(void)

void FUN_140406e82(float *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  fVar2 = (float)((ulonglong)param_3 >> 0x20);
  iVar1 = (int)param_3;
  if ((-1 < iVar1) && ((iVar1 != 0 || (0.0 <= fVar2)))) {
    dVar3 = (double)*param_1;
    if ((double)fVar2 + (double)iVar1 <= dVar3) {
      *param_2 = iVar1;
      param_2[1] = (int)fVar2;
      return;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar3;
    auVar5 = roundpd(auVar5,auVar5,1);
    dVar4 = auVar5._0_8_;
    dVar3 = dVar3 - dVar4;
    if (2147483647.0 <= dVar4) {
      dVar4 = 2147483647.0;
    }
    if (dVar4 <= -2147483648.0) {
      dVar4 = -2147483648.0;
    }
    fVar2 = (float)dVar3;
    if (0.99999994 <= (float)dVar3) {
      fVar2 = 0.99999994;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = fVar2 + 0.5 + -0.5;
    *param_2 = (int)dVar4;
    if (0.99999994 <= fVar2) {
      fVar2 = 0.99999994;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    param_2[1] = (int)fVar2;
    return;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140406f2a FUN_140406f2a body=852 status=ok
// SIG undefined FUN_140406f2a(void)

undefined8 *
FUN_140406f2a(double *param_1,undefined8 *param_2,ulonglong *param_3,longlong param_4,double param_5
             )

{
  double dVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  int local_80;
  float local_7c;
  undefined4 local_78;
  int local_74;
  float local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  double local_58;
  ulonglong local_50;
  ulonglong uVar5;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (param_5 <= 0.0) {
    local_58 = -NAN;
    FUN_140407280(param_2,0);
    goto LAB_14040711f;
  }
  local_68 = -*(int *)(param_4 + 4);
  local_6c = 0x3f800000;
  local_64 = 0;
  FUN_14040737a(param_2);
  local_58 = *param_1;
  FUN_140407280(param_2,0,&local_58);
  uVar5 = *param_3;
  uVar2 = (uint)(uVar5 >> 0x20);
  local_58 = (double)(((ulonglong)(uVar2 | uVar2 >> 8 & 0x800000) & 0xffffff) << 0x18 |
                      uVar5 & 0xffffff | (ulonglong)((uint)(uVar5 >> 8) & 0x800000) |
                     0xfffa000000000000);
  FUN_140407280(param_2,0,&local_58);
  dVar6 = (double)*(float *)(param_1 + 1);
  dVar1 = (param_5 - (double)*(float *)((longlong)param_1 + 0xc)) - dVar6;
  dVar4 = (double)(*(float *)(param_1 + 1) + *(float *)(param_1 + 2));
  if (((uint)((ulonglong)*param_1 >> 0x33) < 0x1fff) && (*param_1 < 0.0)) {
    dVar4 = dVar4 + dVar1;
  }
  if (1e-08 < ABS(dVar4)) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar4;
    auVar8 = roundpd(auVar8,auVar8,1);
    dVar10 = auVar8._0_8_;
    dVar4 = dVar4 - dVar10;
    if (2147483647.0 <= dVar10) {
      dVar10 = 2147483647.0;
    }
    if (dVar10 <= -2147483648.0) {
      dVar10 = -2147483648.0;
    }
    local_74 = (int)dVar10;
    fVar3 = (float)dVar4;
    if (0.99999994 <= (float)dVar4) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    local_70 = fVar3 + 0.5 + -0.5;
    if (0.99999994 <= local_70) {
      local_70 = 0.99999994;
    }
    if (local_70 <= 0.0) {
      local_70 = 0.0;
    }
    local_78 = 0x3f800000;
    FUN_14040737a(param_2);
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 2) != 0) {
      local_60 = 0xfffe000000000000;
      goto LAB_14040709b;
    }
  }
  else {
    local_60 = 0xfffd000000000000;
LAB_14040709b:
    local_60 = local_60 | (uint)(float)dVar1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = -dVar6;
    auVar8 = roundpd(auVar7,auVar7,1);
    dVar4 = auVar8._0_8_;
    dVar6 = -dVar6 - dVar4;
    if (2147483647.0 <= dVar4) {
      dVar4 = 2147483647.0;
    }
    if (dVar4 <= -2147483648.0) {
      dVar4 = -2147483648.0;
    }
    fVar3 = (float)dVar6;
    if (0.99999994 <= (float)dVar6) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = fVar3 + 0.5 + -0.5;
    if (0.99999994 <= fVar3) {
      fVar3 = 0.99999994;
    }
    uVar5 = (ulonglong)(uint)fVar3;
    if (fVar3 <= 0.0) {
      uVar5 = 0;
    }
    FUN_140407280(param_2,(ulonglong)(uint)(int)dVar4 | uVar5 << 0x20);
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar1;
    auVar8 = roundpd(auVar9,auVar9,1);
    dVar6 = auVar8._0_8_;
    dVar1 = dVar1 - dVar6;
    if (2147483647.0 <= dVar6) {
      dVar6 = 2147483647.0;
    }
    if (dVar6 <= -2147483648.0) {
      dVar6 = -2147483648.0;
    }
    local_80 = (int)dVar6;
    fVar3 = (float)dVar1;
    if (0.99999994 <= (float)dVar1) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    local_7c = fVar3 + 0.5 + -0.5;
    if (0.99999994 <= local_7c) {
      local_7c = 0.99999994;
    }
    if (local_7c <= 0.0) {
      local_7c = 0.0;
    }
    local_84 = 0xbf800000;
    FUN_14040737a(param_2);
  }
LAB_14040711f:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140407280 FUN_140407280 body=248 status=ok
// SIG undefined FUN_140407280(void)

void FUN_140407280(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_68 [44];
  float local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar5 = *param_3;
  if ((uint)((ulonglong)dVar5 >> 0x33) < 0x1fff) {
    if (3.4028234663852886e+38 <= dVar5) {
      dVar5 = 3.4028234663852886e+38;
    }
    if (dVar5 <= -3.4028234663852886e+38) {
      dVar5 = -3.4028234663852886e+38;
    }
    local_3c = (float)dVar5;
    local_38 = param_2;
    FUN_14040737a(param_1);
  }
  else if (((((ulonglong)dVar5 & 0x7000000000000) != 0) ||
           (lVar4 = FUN_147585980(param_3), lVar4 == 0)) ||
          (cVar3 = FUN_14758a96c(lVar4), cVar3 == '\0')) {
    iVar1 = *(int *)(param_1 + 0x18);
    lVar4 = (longlong)iVar1;
    *(uint *)(param_1 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
      FUN_140407554((longlong *)(param_1 + 0x10),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(double *)(lVar2 + lVar4 * 0x18) = *param_3;
    *(undefined8 *)(lVar2 + 8 + lVar4 * 0x18) = param_2;
    *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14040737a FUN_14040737a body=474 status=ok
// SIG undefined FUN_14040737a(void)

void FUN_14040737a(float *param_1,float *param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  
  if (((param_2[1] == 0.0) && (ABS(param_2[2]) <= 1e-08)) && (ABS(*param_2 + -1.0) <= 1e-08)) {
    return;
  }
  fVar3 = param_1[6];
  lVar4 = (longlong)(int)fVar3;
  if (lVar4 != 0) {
    param_1[6] = (float)((int)fVar3 + 1);
    if ((uint)param_1[7] < (uint)((int)fVar3 + 1)) {
      FUN_140407554(param_1 + 4,fVar3);
    }
    lVar1 = *(longlong *)(param_1 + 4);
    uVar5 = -(ulonglong)(1e-08 < ABS((double)*param_2));
    *(ulonglong *)(lVar1 + lVar4 * 0x18) =
         (ulonglong)(~(uint)(uVar5 >> 0x20) & 0xfff90000) << 0x20 |
         (ulonglong)(double)*param_2 & uVar5;
    *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(lVar1 + 0x10 + lVar4 * 0x18) = 0;
    return;
  }
  fVar3 = *param_2;
  fVar6 = 1.0;
  if ((fVar3 != 1.0) || (NAN(fVar3))) {
    iVar2 = _finite((double)fVar3);
    fVar6 = *param_2;
    if (iVar2 != 0) {
      dVar11 = ((double)param_1[2] + (double)(int)param_1[1]) * (double)fVar6;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar11;
      auVar12 = roundpd(auVar12,auVar12,1);
      dVar9 = auVar12._0_8_;
      dVar11 = dVar11 - dVar9;
      if (2147483647.0 <= dVar9) {
        dVar9 = 2147483647.0;
      }
      if (dVar9 <= -2147483648.0) {
        dVar9 = -2147483648.0;
      }
      fVar3 = (float)(int)dVar9;
      fVar8 = (float)dVar11;
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar8 = fVar8 + 0.5 + -0.5;
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
      auVar12 = ZEXT416((uint)fVar8);
      if (fVar8 <= 0.0) {
        auVar12 = ZEXT816(0) << 0x20;
      }
      goto LAB_1404073fa;
    }
  }
  fVar3 = param_1[1];
  auVar12 = ZEXT416((uint)param_1[2]);
LAB_1404073fa:
  auVar10._4_12_ = auVar12._4_12_;
  auVar10._0_4_ = auVar12._0_4_ + param_2[2];
  auVar12 = roundss(ZEXT416(0),auVar10,9);
  fVar8 = param_2[1];
  fVar7 = (auVar10._0_4_ - auVar12._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar7) {
    fVar7 = 0.99999994;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *param_1 = fVar6 * *param_1;
  param_1[1] = (float)((int)fVar3 + (int)fVar8 +
                      ((int)ROUND(auVar10._0_4_ + auVar10._0_4_ + -0.5) >> 1));
  param_1[2] = fVar7;
  return;
}



// FUNCTION 140407554 FUN_140407554 body=370 status=ok
// SIG undefined FUN_140407554(void)

void FUN_140407554(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404075dd;
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
LAB_1404075dd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1404076c6 FUN_1404076c6 body=265 status=ok
// SIG undefined FUN_1404076c6(void)

void FUN_1404076c6(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  longlong *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x5a8) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x5a8) + 0x2f0) != 0)) {
    FUN_1404077d0();
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
     (plVar1 = *(longlong **)(lVar3 + 0x218), plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    if (pcVar2 == FUN_1447fa51c) {
      local_30 = param_1;
      if ((*(byte *)(param_1 + 0x2d3) & 2) == 0) {
        local_40 = &local_30;
        local_38 = 1;
        pcVar2 = *(code **)(*plVar1 + 0x48);
        if (pcVar2 == FUN_14177bd6a) {
          local_20 = 1;
          local_1c = local_34;
          local_28 = local_40;
          FUN_1400e4416();
        }
        else {
          (*pcVar2)(plVar1,&local_40);
        }
      }
    }
    else {
      (*pcVar2)(plVar1,param_1);
    }
  }
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404077d0 FUN_1404077d0 body=102 status=ok
// SIG undefined FUN_1404077d0(void)

void FUN_1404077d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_14183a8e8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140407836 FUN_140407836 body=45 status=ok
// SIG undefined FUN_140407836(void)

longlong FUN_140407836(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_140407864(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140407864 FUN_140407864 body=137 status=ok
// SIG undefined FUN_140407864(void)

void FUN_140407864(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a398600;
  param_1[2] = &PTR_LAB_14a398680;
  FUN_1404078ee();
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1404078ee FUN_1404078ee body=252 status=ok
// SIG undefined FUN_1404078ee(void)

void FUN_1404078ee(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((*(uint *)(param_1 + 0x58) & 0x7fffffff) != 0) {
    uVar8 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar8 * 8);
      if (lVar4 != 0) {
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
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (*(uint *)(param_1 + 0x58) & 0x7fffffff));
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar4 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001404079d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1404079ea FUN_1404079ea body=22 status=ok
// SIG undefined FUN_1404079ea(void)

undefined8 FUN_1404079ea(undefined8 param_1)

{
  FUN_140407a00();
  return param_1;
}



// FUNCTION 140407a00 FUN_140407a00 body=517 status=ok
// SIG undefined FUN_140407a00(void)

longlong * FUN_140407a00(longlong *param_1,float param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_88 [3];
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  puVar5 = (undefined8 *)*param_4;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(DAT_14c844be0 + 0x38);
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
  lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x80))();
  puVar5 = (undefined8 *)(lVar4 + 0x8c);
  if (param_3 != (undefined8 *)0x0) {
    puVar5 = param_3;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_58 = puVar5[2];
  local_68 = *puVar5;
  uStack_60 = puVar5[1];
  FUN_140235a22(SUB84((double)param_2,0),lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_88[2] = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_68 = CONCAT44(local_68._4_4_,2);
  local_58 = 0;
  local_50 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,param_2);
  local_98 = local_88 + 2;
  FUN_1402349c6(lVar4,local_88,&local_68,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140407c06 FUN_140407c06 body=147 status=ok
// SIG undefined FUN_140407c06(void)

void FUN_140407c06(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      plVar5 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar5 = param_2 + 2;
      }
      uVar4 = (ulonglong)(uVar2 >> 5);
      plVar6 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      if ((*(uint *)((longlong)plVar5 + uVar4 * 4) >> (uVar2 & 0x1f) & 1) == 0) {
        uVar3 = ~uVar3 & *(uint *)((longlong)plVar6 + uVar4 * 4);
      }
      else {
        uVar3 = uVar3 | *(uint *)((longlong)plVar6 + uVar4 * 4);
      }
      *(uint *)((longlong)plVar6 + uVar4 * 4) = uVar3;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 140407ca4 FUN_140407ca4 body=399 status=ok
// SIG undefined FUN_140407ca4(void)

longlong FUN_140407ca4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [128];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(byte *)((longlong)param_1 + 0x66c) = *(byte *)((longlong)param_1 + 0x66c) & 0xf7;
  param_1[0xfd] = 0;
  *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) & 0xdf;
  if ((0 < (int)param_1[0xe5]) || (*DAT_14cae4cf8 != 0)) {
    if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
      iVar1 = *(int *)((longlong)param_1 + 0x7a4);
      while (iVar1 == 0) {
        iVar1 = rand();
        *(int *)((longlong)param_1 + 0x7a4) = iVar1;
      }
    }
    lVar2 = FUN_140408130(param_1);
    if (lVar2 != 0) {
      local_b8 = 2;
      uStack_b4 = 0x7f7fffff;
      uStack_b0 = 0x7f7fffff;
      uStack_ac = 0x7f7fffff;
      local_a8 = &DAT_ff7fffffff7fffff;
      local_a0 = 0xff7fffff;
      local_9c = 0;
      local_98 = DAT_14c84635c;
      local_90 = 0;
      local_88 = 0xffffffffffffffff;
      local_80 = 0;
      local_78 = 0;
      local_68 = (longlong *)0x0;
      (**(code **)(*param_1 + 0xbe8))
                (param_1,*(undefined4 *)(*(longlong *)(lVar2 + 0x210) + 8),local_138);
      FUN_140408498(param_1 + 0x118,local_138,1);
      if (local_78 != 0) {
        plVar3 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar3 = local_58;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      goto LAB_140407ddb;
    }
  }
  lVar2 = 0;
LAB_140407ddb:
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140407e34 FUN_140407e34 body=763 status=ok
// SIG undefined FUN_140407e34(void)

void FUN_140407e34(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144a6c088(param_1,&local_e8,param_2);
  *(undefined4 *)(param_3 + 0x14) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_3 + 0xa4) = local_e8._4_4_;
  *(undefined4 *)(param_3 + 0x15) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_3 + 0xac) = uStack_e0._4_4_;
  if (*(char *)((longlong)param_3 + 0xae) == '\x01') {
    uVar11 = (ushort)((int)param_1[0xf4] != 0) * 2;
  }
  else {
    uVar11 = 0;
  }
  uVar12 = 0;
  if (0 < (int)param_1[0xe7]) {
    uVar12 = (ushort)((int)param_1[0xe7] == (int)param_1[0xe5]) << 2;
  }
  *(ushort *)((longlong)param_3 + 0x9c) =
       (ushort)DAT_14c760e18 << 4 | uVar11 | *(byte *)((longlong)param_3 + 0xaf) | uVar12;
  *(uint *)(param_3 + 0x10) = (uint)*(byte *)((longlong)param_1 + 0x1fb);
  (**(code **)(*param_1 + 0x7a8))(param_1,&local_e8);
  puVar15 = &local_e8;
  puVar16 = param_3;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  lVar13 = param_1[0xcc];
  if ((lVar13 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar13);
  }
  dVar1 = *(double *)(lVar13 + 0x200);
  dVar2 = *(double *)(lVar13 + 0x208);
  dVar3 = *(double *)(lVar13 + 0x210);
  dVar4 = *(double *)(lVar13 + 0x218);
  dVar5 = *(double *)(lVar13 + 0x220);
  dVar6 = *(double *)(lVar13 + 0x228);
  *(float *)((longlong)param_3 + 0x84) = (float)(dVar1 - dVar4);
  *(float *)(param_3 + 0x11) = (float)(dVar2 - dVar5);
  *(float *)((longlong)param_3 + 0x8c) = (float)(dVar3 - dVar6);
  *(float *)(param_3 + 0x12) = (float)(dVar1 + dVar4);
  *(float *)((longlong)param_3 + 0x94) = (float)(dVar2 + dVar5);
  *(float *)(param_3 + 0x13) = (float)(dVar3 + dVar6);
  lVar13 = param_1[0xe5];
  *(int *)(param_3 + 0x16) = (int)lVar13;
  *(int *)((longlong)param_3 + 0xb4) = (int)lVar13;
  *(int *)(param_3 + 0x17) = (int)param_1[0xf4];
  local_128 = param_3[0x18];
  uStack_e0 = param_3[0x19];
  local_118 = (longlong *)param_3[0x1a];
  uStack_d0 = param_3[0x1b];
  local_c8 = param_3[0x1c];
  uStack_c0 = param_3[0x1d];
  local_b8 = param_3[0x1e];
  uStack_b0 = param_3[0x1f];
  uVar9 = local_b8;
  uVar10 = uStack_b0;
  local_d8 = local_118;
  uVar8 = uStack_d0;
  local_e8 = local_128;
  uVar7 = uStack_e0;
  param_3[0x1e] = CONCAT44(uStack_f4,local_f8);
  param_3[0x1f] = CONCAT44(uStack_ec,uStack_f0);
  param_3[0x1c] = &PTR_LAB_14a975200;
  param_3[0x1d] = param_1;
  param_3[0x1a] = 0;
  param_3[0x1b] = CONCAT44(uStack_10c,uStack_110);
  param_3[0x18] = FUN_14354177a;
  param_3[0x19] = CONCAT44(uStack_11c,uStack_120);
  uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
  uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
  local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_f8 = (undefined4)local_b8;
  uStack_f4 = local_b8._4_4_;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  uStack_110 = (undefined4)uStack_d0;
  uStack_10c = uStack_d0._4_4_;
  uStack_120 = (undefined4)uStack_e0;
  uStack_11c = uStack_e0._4_4_;
  uStack_e0 = uVar7;
  uStack_d0 = uVar8;
  local_b8 = uVar9;
  uStack_b0 = uVar10;
  if (local_128 != 0) {
    plVar14 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar14 = &local_108;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140408130 FUN_140408130 body=871 status=ok
// SIG undefined FUN_140408130(void)

ulonglong FUN_140408130(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  longlong local_128 [26];
  longlong local_58;
  undefined8 local_48;
  undefined8 local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(byte *)((longlong)param_1 + 0x66c) = *(byte *)((longlong)param_1 + 0x66c) & 0xf7;
  lVar12 = param_1[0xcc];
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar12);
    lVar12 = param_1[0xcc];
LAB_140408179:
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar12);
      lVar12 = param_1[0xcc];
    }
    if (((DAT_14c950c29 & 1) != 0) && (lVar12 != 0)) {
      FUN_1456cec3c(lVar12);
    }
    if (*(longlong *)(lVar12 + 0xe0) != 0) {
      lVar12 = param_1[0xcc];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      if ((*(char *)(*(longlong *)(lVar12 + 0xe0) + 0x91) == '\x01') &&
         (((cVar4 = FUN_14490dacc(param_1,DAT_14cb09df0 + '\x01'), cVar4 == '\0' ||
           (DAT_14c761950 != 1)) || (DAT_14cafb288 == 1)))) {
        bVar1 = *(byte *)((longlong)param_1 + 0x66c);
        lVar7 = param_1[0x16];
        if ((lVar7 == 0) && (lVar7 = FUN_1448abda6(param_1), lVar7 == 0)) {
          bVar5 = 1;
        }
        else {
          bVar5 = 1;
          if ((*(longlong *)(lVar7 + 0x30) != 0) &&
             (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x2b0), lVar7 != 0)) {
            bVar5 = *(byte *)(lVar7 + 0x470);
          }
        }
        if (DAT_14c761964 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = CONCAT71((int7)((ulonglong)lVar12 >> 8),bVar1 | bVar5);
        }
        local_58 = 0;
        local_48 = 0x400000000;
        local_128[0] = 0;
        local_128[1] = 0;
        local_38 = 0;
        local_30 = 0;
        cVar4 = FUN_1447e525e(param_1);
        if (((cVar4 == '\0') || (param_1[0xe0] != 0)) || (param_1[0xe1] != 0)) {
          cVar4 = (**(code **)(*param_1 + 0xa88))(param_1);
          if (cVar4 == '\0') {
LAB_140408303:
            lVar12 = param_1[0xcc];
            lVar7 = lVar12;
            if ((lVar12 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar12);
              lVar7 = param_1[0xcc];
            }
            plVar3 = *(longlong **)(lVar12 + 0xe0);
            if ((lVar7 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar7);
            }
            if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
              uVar6 = *(uint *)(lVar7 + 0x150);
            }
            else {
              uVar11 = 0;
              if (DAT_14c760db4 != 1) {
                uVar11 = DAT_14c761b9c;
              }
              if (DAT_14c761de0 == 0) {
                uVar11 = DAT_14c761b9c;
              }
              uVar6 = FUN_144b1da20(lVar7 + 0xe8,uVar11);
            }
            if (((*(byte *)((longlong)param_1 + 0x674) & 0x20) != 0) &&
               ((int)uVar6 <= (int)*(uint *)((longlong)param_1 + 0x654))) {
              uVar6 = *(uint *)((longlong)param_1 + 0x654);
            }
            iVar2 = (int)plVar3[1];
            uVar8 = 0;
            uVar11 = 0;
            if (iVar2 != 0) {
              uVar9 = iVar2 - 1;
              if ((int)uVar6 < (int)uVar9) {
                uVar9 = uVar6;
              }
              uVar10 = (ulonglong)uVar9;
              if ((int)uVar9 < 1) {
                uVar10 = uVar8;
              }
              if (*(int *)(*(longlong *)(*plVar3 + uVar10 * 8) + 0x10c) != 0) goto LAB_1404083e5;
            }
          }
          else {
            bVar13 = (local_30 & 5) != 0;
            if ((uVar8 & 1) == 0 && !bVar13) {
              bVar13 = (bool)((local_30 & 2) >> 1);
            }
            if ((bVar13 != false) || (DAT_14cb09e40 == 0)) goto LAB_140408303;
            uVar8 = 0;
          }
        }
        else {
          *(byte *)((longlong)param_1 + 0x66c) = *(byte *)((longlong)param_1 + 0x66c) | 8;
          uVar11 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
LAB_1404083e5:
          uVar8 = (**(code **)(*param_1 + 0xad0))(param_1,local_128,uVar11);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_128[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_1404081f4;
      }
    }
  }
  else if (lVar12 != 0) goto LAB_140408179;
  uVar8 = 0;
LAB_1404081f4:
  if ((local_20 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140408498 FUN_140408498 body=14489 status=ok
// SIG undefined FUN_140408498(void)

ulonglong FUN_140408498(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  DWORD DVar18;
  DWORD DVar19;
  undefined1 auVar20 [8];
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  longlong *plVar24;
  undefined4 *puVar25;
  uint *puVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong *puVar34;
  uint *puVar35;
  undefined *puVar36;
  byte bVar37;
  int iVar38;
  ulonglong uVar39;
  uint uVar40;
  undefined8 unaff_RBP;
  undefined1 **ppuVar41;
  byte bVar42;
  float *pfVar43;
  longlong *plVar44;
  longlong **pplVar45;
  undefined8 *puVar46;
  uint uVar47;
  undefined1 uVar48;
  bool bVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  float fVar56;
  undefined1 auStack_9c8 [32];
  longlong **local_9a8;
  longlong *local_998;
  ulonglong local_990;
  ulonglong local_988;
  longlong *local_980;
  undefined4 local_978;
  undefined4 local_974;
  undefined4 local_970;
  undefined4 local_96c;
  undefined4 local_968;
  undefined4 local_964;
  longlong local_960;
  longlong local_958;
  float local_94c;
  float local_948;
  float local_944;
  float local_940;
  float local_93c;
  float local_938;
  float local_934;
  float local_930;
  float local_92c;
  uint local_928;
  int iStack_924;
  undefined4 local_920;
  undefined1 *local_918 [3];
  double local_900;
  double local_8f8;
  double local_8f0;
  undefined8 local_8e8;
  undefined4 local_8e0;
  double local_8dc;
  undefined4 local_8d4;
  undefined8 local_8d0;
  undefined4 local_8c8;
  double local_8c4;
  undefined4 local_8bc;
  ushort local_8b8;
  float local_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 local_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  uint uStack_878;
  undefined1 local_874;
  undefined4 local_870;
  longlong *local_758;
  longlong *plStack_750;
  uint local_748;
  longlong local_738 [8];
  longlong local_6f8;
  ulonglong uStack_6f0;
  longlong local_6e8;
  longlong lStack_6e0;
  longlong local_6d8;
  longlong local_6d0;
  int local_6c8;
  undefined4 local_6c4;
  int local_6c0;
  int local_6bc;
  longlong local_6b8;
  undefined8 uStack_6b0;
  char local_6a8;
  byte local_6a7;
  ushort local_6a6;
  undefined1 local_6a4;
  undefined1 local_6a3;
  longlong local_6a0;
  undefined8 uStack_698;
  int local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  ushort local_648;
  undefined8 local_640 [3];
  undefined8 *local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined4 local_600;
  double local_5fc;
  undefined4 local_5f4;
  undefined8 local_5f0;
  undefined4 local_5e8;
  double local_5e4;
  undefined4 local_5dc;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  undefined8 local_5c0;
  float local_5b8;
  double local_5b4;
  undefined4 local_5ac;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined1 local_590;
  undefined4 local_58c;
  int local_588;
  uint local_584;
  undefined4 local_580;
  longlong *local_578 [4];
  longlong local_558 [12];
  undefined1 local_4f8 [8];
  longlong *plStack_4f0;
  double local_4e8;
  longlong lStack_4e0;
  undefined1 local_4d8 [16];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  longlong local_478;
  longlong local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_458;
  ulonglong local_450;
  undefined8 local_448;
  uint local_440;
  undefined1 local_43c;
  undefined4 local_438;
  longlong *local_430;
  longlong *plStack_428;
  longlong *local_318;
  longlong *plStack_310;
  uint local_308;
  float local_2f8;
  float fStack_2f4;
  float local_2f0;
  double local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  longlong local_290;
  longlong local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  ulonglong local_268;
  undefined8 uStack_260;
  uint local_258;
  undefined1 local_254;
  undefined4 local_250;
  longlong *local_248;
  longlong *plStack_240;
  longlong *local_138;
  longlong *plStack_130;
  uint local_128;
  undefined8 local_118;
  undefined4 local_110;
  longlong *local_108;
  longlong local_f8 [5];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_9c8;
  if (*(char *)((longlong)param_1 + 0x9d) != '\x02') {
    *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xdf;
    lVar27 = param_1[0x14];
    if (lVar27 != 0) {
      if (param_3 == '\0') {
        local_974 = 0;
      }
      else {
        local_974 = (undefined4)
                    CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(lVar27 + 0x1a8));
      }
      *(undefined1 *)(lVar27 + 0x1a8) = 0;
      bVar37 = *(byte *)((longlong)param_1 + 0x9e);
      if (((((char)bVar37 < '\0') && ((int)param_1[1] == 0)) && ((int)param_1[4] == 0)) &&
         (*(int *)((longlong)param_2 + 0xb4) != 0)) {
        if (*(int *)((longlong)param_1 + 0x1c) < 0) {
          *(undefined4 *)(param_1 + 3) = 0;
          FUN_14481578e(param_1 + 2);
        }
        else {
          *(undefined4 *)(param_1 + 3) = 0;
        }
        *(undefined4 *)(param_1 + 1) = 0;
        if (*(int *)((longlong)param_1 + 0xc) < 0) {
          FUN_14179763c(param_1);
        }
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_2 + 0xb4);
        bVar37 = *(byte *)((longlong)param_1 + 0x9e);
      }
      *(byte *)((longlong)param_1 + 0x9e) = bVar37 & 0x7f;
      fVar56 = -*(float *)(param_2 + 0x14);
      if (-*(float *)(param_2 + 0x14) <= *(float *)((longlong)param_2 + 0xa4)) {
        fVar56 = *(float *)((longlong)param_2 + 0xa4);
      }
      fVar56 = fVar56 + *(float *)(param_2 + 0x15);
      uVar30 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_1[0x17] != 0);
      local_998 = param_1;
      if (param_1[0x17] != 0) {
        *(byte *)((longlong)param_1 + 0x9e) = bVar37 & 0x77;
        plVar21 = param_2;
        plVar24 = param_1 + 0x1a;
        for (lVar27 = 0x10; lVar27 != 0; lVar27 = lVar27 + -1) {
          *plVar24 = *plVar21;
          plVar21 = plVar21 + 1;
          plVar24 = plVar24 + 1;
        }
        *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)((longlong)param_2 + 0x9c);
        uVar23 = *(undefined8 *)((longlong)param_2 + 0x8c);
        *(undefined8 *)((longlong)param_1 + 0x15c) = *(undefined8 *)((longlong)param_2 + 0x84);
        *(undefined8 *)((longlong)param_1 + 0x164) = uVar23;
        *(undefined8 *)((longlong)param_1 + 0x16c) = *(undefined8 *)((longlong)param_2 + 0x94);
        *(int *)((longlong)param_1 + 0x154) = (int)param_2[0x17];
        local_918[0] = (undefined1 *)0x7f7fffff7f7fffff;
        local_918[1] = (undefined1 *)0xff7fffff7f7fffff;
        local_918[2] = &DAT_ff7fffffff7fffff;
        local_8b8 = 0;
        local_870 = 0;
        local_8b4 = 0.0;
        uStack_8b0 = 0;
        uStack_8ac = 0;
        uStack_8a8 = 0;
        uStack_8a4 = 0;
        uStack_8a0 = 0;
        uStack_89c = 0;
        uStack_898 = 0;
        local_894 = 0;
        uStack_890 = 0;
        uStack_88c = 0;
        uStack_888 = 0;
        uStack_884 = 0;
        uStack_880 = 0;
        uStack_87c = 0;
        uStack_878 = 0;
        local_874 = 0;
        local_934 = (float)(double)param_1[0x26];
        local_900 = (double)local_934;
        local_930 = (float)(double)param_1[0x27];
        local_8f8 = (double)local_930;
        local_92c = (float)(double)param_1[0x28];
        local_8f0 = (double)local_92c;
        FUN_144911616(local_4f8);
        local_8e8 = local_4f8;
        local_8e0 = plStack_4f0._0_4_;
        local_8dc = local_4e8;
        local_8d4 = (undefined4)lStack_4e0;
        local_8d0 = local_4d8._0_8_;
        local_8c8 = local_4d8._8_4_;
        local_8c4 = local_4c8;
        local_8bc = (undefined4)uStack_4c0;
        local_918[0] = *(undefined1 **)((longlong)param_2 + 0x84);
        local_918[1] = (undefined1 *)*(undefined8 *)((longlong)param_2 + 0x8c);
        local_918[2] = (undefined1 *)*(undefined8 *)((longlong)param_2 + 0x94);
        local_8b8 = *(ushort *)(param_1 + 0x2a);
        puVar22 = (undefined8 *)param_1[0x17];
        if ((undefined8 *)&uStack_8b0 != puVar22) {
          lVar27 = CONCAT44(uStack_8ac,uStack_8b0);
          uStack_8b0 = (undefined4)*puVar22;
          uStack_8ac = (undefined4)((ulonglong)*puVar22 >> 0x20);
          *puVar22 = 0;
          if (lVar27 != 0) {
            FUN_14006ea12(lVar27);
            FUN_1400020a8(lVar27);
          }
        }
        lVar27 = param_1[0x17];
        local_990 = CONCAT44(local_990._4_4_,(int)uVar30);
        if (&uStack_8a8 != (undefined4 *)(lVar27 + 8)) {
          if (CONCAT44(uStack_8a4,uStack_8a8) != 0) {
            FUN_1400020a8();
          }
          uStack_8a8 = (undefined4)*(undefined8 *)(lVar27 + 8);
          uStack_8a4 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 8) >> 0x20);
          *(undefined8 *)(lVar27 + 8) = 0;
          uStack_8a0 = *(undefined4 *)(lVar27 + 0x10);
          uStack_89c = *(undefined4 *)(lVar27 + 0x14);
          *(undefined8 *)(lVar27 + 0x10) = 0;
          lVar27 = param_1[0x17];
        }
        if (&uStack_898 != (undefined4 *)(lVar27 + 0x18)) {
          if (CONCAT44(local_894,uStack_898) != 0) {
            FUN_1400020a8();
          }
          uStack_898 = (undefined4)*(undefined8 *)(lVar27 + 0x18);
          local_894 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x18) >> 0x20);
          *(undefined8 *)(lVar27 + 0x18) = 0;
          uStack_890 = *(undefined4 *)(lVar27 + 0x20);
          uStack_88c = *(undefined4 *)(lVar27 + 0x24);
          *(undefined8 *)(lVar27 + 0x20) = 0;
          if (CONCAT44(uStack_884,uStack_888) != 0) {
            FUN_1400020a8();
          }
          uStack_888 = (undefined4)*(undefined8 *)(lVar27 + 0x28);
          uStack_884 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x28) >> 0x20);
          *(undefined8 *)(lVar27 + 0x28) = 0;
          uStack_880 = *(undefined4 *)(lVar27 + 0x30);
          uStack_87c = *(undefined4 *)(lVar27 + 0x34);
          *(undefined8 *)(lVar27 + 0x30) = 0;
        }
        uVar14 = uStack_89c;
        uVar13 = uStack_8a0;
        local_874 = *(undefined1 *)(lVar27 + 0x3c);
        local_928 = *(uint *)(lVar27 + 0x38);
        uStack_878 = local_928;
        local_8b4 = fVar56;
        local_958 = CONCAT44(uStack_8ac,uStack_8b0);
        if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)DAT_14ca85550 * 0xf) & 0x40) == 0) {
          uVar31 = ((local_8b8 & 4) >> 2) * 3;
        }
        else {
          uVar31 = local_8b8 >> 1 & 2;
        }
        uVar32 = 2;
        if ((local_8b8 & 0x20) == 0) {
          uVar32 = (uint)((local_8b8 & 0x48) != 0);
        }
        uVar47 = *(int *)((longlong)param_1 + 0x154) + 3U >> 2;
        if ((local_8b8 & 2) == 0) {
          uVar47 = local_8b8 & 2;
        }
        local_118 = (longlong *)
                    CONCAT44(uVar32 + uVar31 +
                             (ushort)((local_8b8 >> 4 & 1) + (ushort)((local_8b8 >> 9 & 1) != 0)) +
                             uVar47,*(undefined4 *)(local_958 + 0x40));
        local_110 = CONCAT22(local_110._2_2_,local_8b8) & 0xfffeffff;
        ppuVar41 = local_918;
        plVar21 = local_738;
        for (lVar27 = 0xd; lVar27 != 0; lVar27 = lVar27 + -1) {
          *plVar21 = (longlong)*ppuVar41;
          ppuVar41 = ppuVar41 + 1;
          plVar21 = plVar21 + 1;
        }
        lVar27 = CONCAT44(uStack_8a4,uStack_8a8);
        uStack_8b0 = 0;
        uStack_8ac = 0;
        uStack_8a8 = 0;
        uStack_8a4 = 0;
        uStack_8a0 = 0;
        uStack_89c = 0;
        lVar33 = CONCAT44(local_894,uStack_898);
        uStack_898 = 0;
        local_894 = 0;
        local_964 = uStack_890;
        local_968 = uStack_88c;
        uStack_890 = 0;
        uStack_88c = 0;
        local_988 = CONCAT44(uStack_884,uStack_888);
        uStack_888 = 0;
        uStack_884 = 0;
        local_96c = uStack_880;
        local_970 = uStack_87c;
        uStack_880 = 0;
        uStack_87c = 0;
        iStack_924 = CONCAT31(iStack_924._1_3_,local_874);
        local_978 = local_870;
        plVar21 = (longlong *)param_1[0x14];
        plVar24 = (longlong *)param_1[0x15];
        plVar28 = plVar21;
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
          UNLOCK();
          plVar28 = (longlong *)param_1[0x14];
        }
        local_980 = param_2;
        auVar20 = (undefined1  [8])(**(code **)(*plVar28 + 0x10))();
        plVar28 = local_738;
        pfVar43 = &local_2f8;
        for (lVar29 = 0xd; lVar29 != 0; lVar29 = lVar29 + -1) {
          *(longlong *)pfVar43 = *plVar28;
          plVar28 = plVar28 + 1;
          pfVar43 = pfVar43 + 2;
        }
        local_290 = local_958;
        local_288 = lVar27;
        uStack_280 = CONCAT44(uVar14,uVar13);
        local_278 = lVar33;
        uStack_270 = CONCAT44(local_968,local_964);
        local_268 = local_988;
        uStack_260 = CONCAT44(local_970,local_96c);
        local_258 = local_928;
        local_254 = (undefined1)iStack_924;
        local_250 = local_978;
        local_248 = plVar21;
        plStack_240 = plVar24;
        if ((char)local_974 == '\0') {
          plStack_4f0 = local_118;
          local_4f8 = auVar20;
          local_4e8 = (double)CONCAT44(local_4e8._4_4_,local_110);
          plVar28 = local_738;
          plVar44 = &lStack_4e0;
          for (lVar29 = 0xd; lVar29 != 0; lVar29 = lVar29 + -1) {
            *plVar44 = *plVar28;
            plVar28 = plVar28 + 1;
            plVar44 = plVar44 + 1;
          }
          local_478 = local_958;
          local_468 = CONCAT44(uVar14,uVar13);
          local_458 = CONCAT44(local_968,local_964);
          local_450 = local_988;
          local_448 = CONCAT44(local_970,local_96c);
          local_440 = local_928;
          local_43c = (undefined1)iStack_924;
          local_438 = local_978;
          local_290 = 0;
          local_288 = 0;
          uStack_280 = 0;
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0;
          uStack_260 = 0;
          local_248 = (longlong *)0x0;
          plStack_240 = (longlong *)0x0;
          lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar17 = *(int *)(lVar29 + 0xc60);
          param_1 = local_998;
          param_2 = local_980;
          local_960 = (longlong)auVar20;
          local_470 = lVar27;
          local_460 = lVar33;
          local_430 = plVar21;
          plStack_428 = plVar24;
          if (DAT_14c86a9fc == 0) {
            if (iVar17 != 2) {
              if (iVar17 != 1) goto joined_r0x000140408d62;
              DVar19 = FUN_140ad26c0();
              DVar18 = GetCurrentThreadId();
              uVar30 = local_990 & 0xffffffff;
              if (DVar19 == DVar18) {
                local_960 = (longlong)local_4f8;
                auVar20 = local_4f8;
                param_2 = local_980;
                param_1 = local_998;
                goto LAB_140408c8f;
              }
              goto LAB_140408d68;
            }
            uVar30 = local_990 & 0xffffffff;
LAB_140408c8f:
            if (auVar20 == (undefined1  [8])0x0) {
              FUN_143542c60(&lStack_4e0);
            }
            else {
              FUN_143542800();
            }
          }
          else {
joined_r0x000140408d62:
            uVar30 = local_990 & 0xffffffff;
            if (iVar17 == 0x10) goto LAB_140408c8f;
LAB_140408d68:
            param_2 = local_980;
            param_1 = local_998;
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar29 + 0xc60), iVar17 == 2)) {
LAB_14040ba02:
                auVar20 = local_4f8;
                goto LAB_140408c8f;
              }
              if (iVar17 == 1) {
                DVar19 = FUN_140ad26c0();
                DVar18 = GetCurrentThreadId();
                if (DVar19 == DVar18) goto LAB_14040ba02;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar22 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar26 = (uint *)*puVar22;
              if (puVar26 != (uint *)0x0) goto LAB_14040a610;
LAB_14040a592:
              uVar31 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar31 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar31 | 1;
                __tlregdtor(&LAB_143541375);
              }
              lVar27 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar25 = *(undefined4 **)(lVar27 + 0x310);
              *(undefined8 *)(lVar27 + 0x310) = 0;
              if (puVar25 == (undefined4 *)0x0) {
                puVar25 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar25 = 0xffffffff;
              *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
              puVar25[0x12] = 0;
              *puVar22 = puVar25;
              FUN_140217a48(puVar22);
              puVar26 = (uint *)*puVar22;
LAB_14040a610:
              uVar39 = *(longlong *)(puVar26 + 0x10) + 7;
              uVar31 = puVar26[0x12];
LAB_14040a62e:
              puVar46 = (undefined8 *)(uVar39 & 0xfffffffffffffff8);
              if (puVar46 + 0x30 <= puVar26 + 0x4000) {
                *(undefined8 **)(puVar26 + 0x10) = puVar46 + 0x30;
                puVar26[0x12] = uVar31 + 1;
                iVar17 = 0;
                FUN_1447247dc(puVar46,0);
                param_2 = local_980;
                *puVar46 = &PTR_FUN_14a9753d0;
                puVar46[0x15] = local_4f8;
                puVar46[0x16] = plStack_4f0;
                *(undefined4 *)(puVar46 + 0x17) = local_4e8._0_4_;
                plVar21 = &lStack_4e0;
                plVar24 = puVar46 + 0x18;
                for (lVar27 = 0xd; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *plVar24 = *plVar21;
                  plVar21 = plVar21 + 1;
                  plVar24 = plVar24 + 1;
                }
                puVar46[0x25] = local_478;
                local_478 = 0;
                puVar46[0x26] = local_470;
                local_470 = 0;
                *(undefined4 *)(puVar46 + 0x27) = (undefined4)local_468;
                *(undefined4 *)((longlong)puVar46 + 0x13c) = local_468._4_4_;
                local_468 = 0;
                puVar46[0x28] = local_460;
                local_460 = 0;
                *(undefined4 *)(puVar46 + 0x29) = (undefined4)local_458;
                *(undefined4 *)((longlong)puVar46 + 0x14c) = local_458._4_4_;
                local_458 = 0;
                puVar46[0x2a] = local_450;
                local_450 = 0;
                *(undefined4 *)(puVar46 + 0x2b) = (undefined4)local_448;
                *(undefined4 *)((longlong)puVar46 + 0x15c) = local_448._4_4_;
                local_448 = 0;
                *(undefined1 *)((longlong)puVar46 + 0x164) = local_43c;
                *(uint *)(puVar46 + 0x2c) = local_440;
                *(undefined4 *)(puVar46 + 0x2d) = local_438;
                puVar46[0x2e] = local_430;
                puVar46[0x2f] = plStack_428;
                local_430 = (longlong *)0x0;
                plStack_428 = (longlong *)0x0;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar31 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar31 < 2) {
                    uVar39 = (ulonglong)(byte)(&DAT_149e38edc)[uVar31];
                  }
                  else {
                    uVar39 = 2;
                  }
                }
                else {
                  iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar39 = 5;
                }
                if (*(code **)(puVar46[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar46[0xe] + 0x18))(puVar46 + 0xe,puVar46 + 9);
                }
                puVar46[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar46[9] = puVar46;
                puVar46[10] = puVar46;
                lVar27 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar27 == 0) {
                  uVar16 = 1;
                  if ((char)uVar39 != '\x06') {
                    uVar16 = uVar39;
                  }
                  uVar39 = uVar16;
                  uVar23 = 0;
                }
                else {
                  if ((char)uVar39 == '\x06') {
                    uVar39 = *(ulonglong *)(lVar27 + 0x38) >> 0x3b;
                  }
                  uVar23 = *(undefined8 *)(lVar27 + 0x30);
                }
                puVar46[0xf] = uVar23;
                puVar46[0x10] = uVar39 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar46 + 0x1c) = iVar17;
                if (puVar46 == (undefined8 *)0x0) {
                  local_578[0] = (longlong *)CONCAT71(local_578[0]._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar46 + 1) = *(int *)(puVar46 + 1) + 1;
                  UNLOCK();
                  local_578[0] = (longlong *)CONCAT71(local_578[0]._1_7_,1);
                  FUN_1447439e4(puVar46);
                  LOCK();
                  piVar1 = (int *)(puVar46 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar46)(puVar46);
                  }
                }
                goto LAB_140408f74;
              }
              *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
              LOCK();
              uVar32 = *puVar26;
              *puVar26 = *puVar26 + uVar31 + 1;
              UNLOCK();
              if ((uVar32 ^ uVar31) == 0xffffffff) goto code_r0x00014040a650;
              goto LAB_14040a592;
            }
            local_578[0] = (longlong *)0x0;
            local_578[2] = (longlong *)0x0;
            local_578[2] = (longlong *)FUN_14001cc68(0xe0,8);
            *local_578[2] = (longlong)&PTR_LAB_14a975380;
            *(undefined4 *)(local_578[2] + 3) = local_4e8._0_4_;
            local_578[2][1] = (longlong)local_4f8;
            local_578[2][2] = (longlong)plStack_4f0;
            plVar21 = &lStack_4e0;
            plVar24 = local_578[2] + 4;
            for (lVar27 = 0xd; lVar27 != 0; lVar27 = lVar27 + -1) {
              *plVar24 = *plVar21;
              plVar21 = plVar21 + 1;
              plVar24 = plVar24 + 1;
            }
            local_578[2][0x11] = local_478;
            local_478 = 0;
            local_578[2][0x12] = local_470;
            local_470 = 0;
            *(undefined4 *)(local_578[2] + 0x13) = (undefined4)local_468;
            *(undefined4 *)((longlong)local_578[2] + 0x9c) = local_468._4_4_;
            local_468 = 0;
            local_578[2][0x14] = local_460;
            local_460 = 0;
            *(undefined4 *)(local_578[2] + 0x15) = (undefined4)local_458;
            *(undefined4 *)((longlong)local_578[2] + 0xac) = local_458._4_4_;
            local_458 = 0;
            local_578[2][0x16] = local_450;
            local_450 = 0;
            *(undefined4 *)(local_578[2] + 0x17) = (undefined4)local_448;
            *(undefined4 *)((longlong)local_578[2] + 0xbc) = local_448._4_4_;
            local_448 = 0;
            *(undefined1 *)((longlong)local_578[2] + 0xc4) = local_43c;
            *(uint *)(local_578[2] + 0x18) = local_440;
            *(undefined4 *)(local_578[2] + 0x19) = local_438;
            local_578[2][0x1a] = (longlong)local_430;
            local_578[2][0x1b] = (longlong)plStack_428;
            local_430 = (longlong *)0x0;
            plStack_428 = (longlong *)0x0;
            if (local_578[2] + 1 != (longlong *)0x0) {
              local_578[0] = (longlong *)&LAB_14354301e;
            }
            local_9a8 = local_578;
            FUN_14005a792(&DAT_14ca9a440);
            param_2 = local_980;
            if (local_578[0] != (longlong *)0x0) {
              plVar21 = local_578[2];
              if (local_578[2] == (longlong *)0x0) {
                plVar21 = local_558;
              }
              (**(code **)(*plVar21 + 0x10))();
            }
          }
LAB_140408f74:
          plVar21 = plStack_428;
          if (plStack_428 != (longlong *)0x0) {
            LOCK();
            plVar24 = plStack_428 + 1;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)*plVar24 == 0) {
              (**(code **)*plStack_428)(plStack_428);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          if (local_450 != 0) {
            FUN_1400020a8();
          }
          if (local_460 != 0) {
            FUN_1400020a8();
          }
          if (local_470 != 0) {
            FUN_1400020a8();
          }
          lVar27 = local_478;
          if (local_478 != 0) {
            FUN_14006ea12(local_478);
            FUN_1400020a8(lVar27);
          }
        }
        else {
          if (auVar20 == (undefined1  [8])0x0) {
            FUN_143542c60(&local_2f8);
          }
          else {
            FUN_143542800(auVar20);
          }
          uVar30 = local_990 & 0xffffffff;
          param_2 = local_980;
          param_1 = local_998;
        }
        plVar21 = plStack_240;
        if (plStack_240 != (longlong *)0x0) {
          LOCK();
          plVar24 = plStack_240 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            (**(code **)*plStack_240)(plStack_240);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        if (local_268 != 0) {
          FUN_1400020a8();
        }
        if (local_278 != 0) {
          FUN_1400020a8();
        }
        if (local_288 != 0) {
          FUN_1400020a8();
        }
        lVar27 = local_290;
        if (local_290 != 0) {
          FUN_14006ea12(local_290);
          FUN_1400020a8(lVar27);
        }
        lVar27 = param_1[0x17];
        if (lVar27 != 0) {
          param_1[0x17] = 0;
          (**(code **)(lVar27 + -0x10))(lVar27 + -0x10);
        }
        if (CONCAT44(uStack_884,uStack_888) != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(local_894,uStack_898) != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_8a4,uStack_8a8) != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_8ac,uStack_8b0) != 0) {
          FUN_14006ea12(CONCAT44(uStack_8ac,uStack_8b0));
          FUN_1400020a8();
        }
      }
      lVar27 = DAT_14cae5038;
      if ((*(byte *)((longlong)param_1 + 0x9d) | 2) == 3) {
        bVar37 = 2;
        if (((*(byte *)((longlong)param_1 + 0x9e) & 0x17) == 0) && ((int)param_1[0xb] < 1)) {
          bVar37 = ((int)param_1[10] != 0) * '\x02';
        }
        plVar21 = param_1 + 0x1a;
        lVar33 = 0;
        plVar24 = param_2;
        do {
          lVar29 = 0;
          do {
            if (9.99999993922529e-09 < ABS((double)plVar24[lVar29] - (double)plVar21[lVar29])) {
              bVar42 = 4;
              goto LAB_140409138;
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 != 4);
          lVar33 = lVar33 + 1;
          plVar21 = plVar21 + 4;
          plVar24 = plVar24 + 4;
        } while (lVar33 != 4);
        bVar42 = 0;
LAB_140409138:
        bVar37 = ((short)param_1[0x2a] != *(short *)((longlong)param_2 + 0x9c)) << 3 |
                 bVar42 | bVar37;
        fVar2 = *(float *)(param_1 + 0x2b);
        bVar42 = (fVar56 != fVar2) << 4 | bVar37;
        if ((fVar2 != fVar56) || (NAN(fVar2) || NAN(fVar56))) {
          iVar17 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
          if (iVar17 == 0x40000002) {
            uVar39 = 0;
          }
          else {
            bVar49 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar17 != 2)) {
              if (iVar17 == 1) {
                DVar19 = FUN_140ad26c0();
                DVar18 = GetCurrentThreadId();
                bVar49 = DVar19 == DVar18;
              }
              else {
                bVar49 = false;
              }
            }
            uVar39 = (ulonglong)(bVar49 ^ 1);
          }
          param_1 = local_998;
          if (*(int *)(lVar27 + uVar39 * 4) == 0) {
            bVar42 = bVar37;
          }
        }
        bVar37 = 0x20;
        if ((((ABS(*(float *)((longlong)param_1 + 0x15c) - *(float *)((longlong)param_2 + 0x84)) <=
               0.0001) && (ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x11)) <= 0.0001))
            && (ABS(*(float *)((longlong)param_1 + 0x164) - *(float *)((longlong)param_2 + 0x8c)) <=
                0.0001)) &&
           (((ABS(*(float *)(param_1 + 0x2d) - *(float *)(param_2 + 0x12)) <= 0.0001 &&
             (ABS(*(float *)((longlong)param_1 + 0x16c) - *(float *)((longlong)param_2 + 0x94)) <=
              0.0001)) && (ABS(*(float *)(param_1 + 0x2e) - *(float *)(param_2 + 0x13)) <= 0.0001)))
           ) {
          bVar37 = 0;
        }
        bVar37 = bVar37 | bVar42;
      }
      else {
        bVar37 = 1;
      }
      if (*(char *)((longlong)param_1 + 0x9c) == '\x02') {
        plVar21 = param_1 + 0x1a;
        lVar27 = 0;
        plVar24 = param_2;
        do {
          lVar33 = 0;
          do {
            if (9.99999993922529e-09 < ABS((double)plVar24[lVar33] - (double)plVar21[lVar33])) {
              bVar37 = bVar37 | 4;
              goto LAB_140409306;
            }
            lVar33 = lVar33 + 1;
          } while (lVar33 != 4);
          lVar27 = lVar27 + 1;
          plVar21 = plVar21 + 4;
          plVar24 = plVar24 + 4;
        } while (lVar27 != 4);
      }
LAB_140409306:
      plVar21 = param_1 + 0x1a;
      plVar24 = plVar21;
      pplVar45 = local_578;
      for (lVar27 = 0x10; lVar27 != 0; lVar27 = lVar27 + -1) {
        *pplVar45 = (longlong *)*plVar24;
        plVar24 = plVar24 + 1;
        pplVar45 = pplVar45 + 1;
      }
      plVar24 = param_2;
      plVar28 = plVar21;
      for (lVar27 = 0x10; lVar27 != 0; lVar27 = lVar27 + -1) {
        *plVar28 = *plVar24;
        plVar24 = plVar24 + 1;
        plVar28 = plVar28 + 1;
      }
      *(float *)(param_1 + 0x2b) = fVar56;
      uVar23 = *(undefined8 *)((longlong)param_2 + 0x8c);
      *(undefined8 *)((longlong)param_1 + 0x15c) = *(undefined8 *)((longlong)param_2 + 0x84);
      *(undefined8 *)((longlong)param_1 + 0x164) = uVar23;
      *(undefined8 *)((longlong)param_1 + 0x16c) = *(undefined8 *)((longlong)param_2 + 0x94);
      *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)((longlong)param_2 + 0x9c);
      *(int *)((longlong)param_1 + 0x154) = (int)param_2[0x17];
      if (bVar37 == 0) goto LAB_140408544;
      if (((bVar37 & 2) == 0) && (*(int *)((longlong)param_2 + 0xb4) == 0)) {
        cVar4 = *(char *)((longlong)param_1 + 0x9d);
        if (((bVar37 & 4) == 0) || ((int)param_2[0x16] == 0)) {
          if (cVar4 != '\x02') {
            *(undefined1 *)((longlong)param_1 + 0x9d) = 0;
            lVar27 = param_1[0x17];
            if (lVar27 != 0) {
              param_1[0x17] = 0;
              (**(code **)(lVar27 + -0x10))(lVar27 + -0x10);
            }
            FUN_147b00ef2(param_1 + 5);
            *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xf0;
          }
          goto LAB_140408544;
        }
      }
      else {
        cVar4 = *(char *)((longlong)param_1 + 0x9d);
      }
      if (cVar4 == '\x03') {
        param_1[0x18] = 0;
        plVar24 = (longlong *)param_1[0x19];
        if (plVar24 != (longlong *)0x0) {
          param_1[0x19] = 0;
          LOCK();
          plVar28 = plVar24 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
      }
      local_6a8 = true;
      if ((bVar37 & 9) == 0) {
        local_6a8 = *(char *)((longlong)param_1 + 0x9d) == '\x03';
      }
      local_738[0] = 0;
      local_738[2] = 0;
      local_6d8 = 0;
      local_6d0 = 0x8000000000;
      local_6f8 = 0;
      uStack_6f0 = 0;
      if (&local_6f8 == param_1 + 5) {
        iVar17 = *(int *)((longlong)param_1 + 0x34);
      }
      else {
        local_6d8 = param_1[9];
        if (local_6d8 == 0) {
          local_6e8 = param_1[7];
          lStack_6e0 = param_1[8];
        }
        param_1[9] = 0;
        local_6d0 = param_1[10];
        iVar17 = 0;
        *(undefined4 *)((longlong)param_1 + 0x54) = 0;
        local_6f8 = param_1[5];
        uStack_6f0 = param_1[6];
        param_1[5] = 0;
        *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      }
      local_6c4 = *(undefined4 *)((longlong)param_1 + 0x5c);
      local_6c8 = (int)param_1[0xb];
      local_6c0 = (int)param_1[0xc];
      local_6bc = *(int *)((longlong)param_1 + 100);
      local_6b8 = param_1[0xd];
      uStack_6b0 = param_1[0xe];
      *(undefined4 *)(param_1 + 10) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      local_978 = CONCAT31(local_978._1_3_,local_6a8);
      if (iVar17 < 0) {
        FUN_14480809c(param_1 + 5,0);
        local_6a8 = (char)local_978;
      }
      param_1[0xb] = 0x7fffffff00000000;
      param_1[0xc] = 0x7fffffff;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      local_628 = (undefined8 *)0x0;
      local_620 = 0x100000000;
      local_6a6 = 0;
      local_6a4 = 0;
      local_6a0 = 0;
      uStack_698 = 0;
      local_690 = 0;
      local_688 = 0;
      uStack_680 = 0;
      local_678 = 0;
      uStack_670 = 0;
      local_668 = 0;
      uStack_660 = 0;
      local_658 = 0;
      uStack_650 = 0;
      local_648 = 0;
      local_590 = 0;
      local_618 = 0;
      uStack_610 = 0;
      local_58c = 0;
      local_6a7 = 1;
      if ((bVar37 & 4) == 0) {
        local_6a7 = *(byte *)((longlong)param_1 + 0x9e) >> 2 & 1;
      }
      local_584 = *(uint *)(param_2 + 0x16);
      local_588 = *(int *)((longlong)param_2 + 0xb4);
      local_6a3 = (int)param_1[1] == 0;
      plVar24 = param_1 + 0x12;
      if ((bool)local_6a3) {
        plVar24 = param_1 + 4;
      }
      local_580 = (undefined4)*plVar24;
      if (!(bool)local_6a3) {
        iVar17 = uStack_6b0._4_4_ + (int)local_6b8;
        if (local_6a8 != '\0') {
          iVar17 = local_588;
        }
        if ((int)param_1[1] == iVar17) {
          FUN_14589f266(&local_6a0,param_1);
        }
        else if (iVar17 == 0) {
          uStack_698 = 0;
        }
        else if (uStack_6b0._4_4_ + (int)local_6b8 != local_588 && local_6a8 == '\0') {
          local_980 = param_2;
          if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar17);
          }
          uStack_698 = 0;
          FUN_14179763c(&local_6a0);
          param_2 = local_980;
          iVar17 = local_6c0;
          if (local_6c8 < local_6c0) {
            iVar17 = local_6c8;
          }
          iVar38 = iVar17 + 7;
          if (-1 < iVar17) {
            iVar38 = iVar17;
          }
          uVar32 = iVar38 >> 3;
          uVar30 = (ulonglong)uVar32;
          uVar47 = iVar17 % 8;
          local_990 = (ulonglong)uVar47;
          local_988._0_4_ = (int)uStack_6f0;
          uVar31 = 0;
          if ((-8 < iVar17) && (uVar31 = 0, (int)uVar32 < (int)local_988)) {
            uVar31 = *(uint *)(local_6f8 + (longlong)(int)uVar32 * 4) & 0x99999999;
          }
          bVar42 = (char)uVar47 * '\x04' & 0x1f;
          uVar40 = uVar31 >> bVar42;
          if ((int)uVar32 < (int)local_988) {
            local_990._0_4_ = uVar47;
            if (uVar31 >> bVar42 == 0) {
              uVar39 = (longlong)(int)uVar32;
              do {
                if ((longlong)(int)local_988 - 1U == uVar39) {
                  uVar40 = 0;
                  local_990 = 0;
                  uVar30 = uStack_6f0 & 0xffffffff;
                  goto LAB_14040b51d;
                }
                uVar30 = uVar39 + 1;
                uVar40 = *(uint *)(local_6f8 + 4 + uVar39 * 4) & 0x99999999;
                uVar39 = uVar30;
              } while (uVar40 == 0);
              local_990._0_4_ = 0;
            }
            uVar31 = 0;
            if (uVar40 != 0) {
              for (; (uVar40 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
              }
            }
            uVar40 = uVar40 >> ((byte)uVar31 & 0x1c);
            local_990 = (ulonglong)((uVar31 >> 2) + (uint)local_990);
          }
LAB_14040b51d:
          local_988 = uVar30;
          iVar38 = (int)local_990 + (int)local_988 * 8;
          iVar17 = local_6bc + 1;
          if (local_6c8 < local_6bc + 1) {
            iVar17 = local_6c8;
          }
          param_1 = local_998;
          if (iVar38 < iVar17) {
            do {
              uVar30 = uStack_698;
              lVar27 = *local_998;
              iVar17 = (int)uStack_698;
              lVar33 = (longlong)(int)uStack_698;
              uStack_698 = CONCAT44(uStack_698._4_4_,(int)uStack_698 + 1);
              if (uStack_698._4_4_ == iVar17) {
                FUN_14067df04(&local_6a0,uVar30 & 0xffffffff);
              }
              *(undefined4 *)(local_6a0 + lVar33 * 4) =
                   *(undefined4 *)(lVar27 + (longlong)iVar38 * 4);
              uVar40 = uVar40 & 0xfffffff6;
              uVar30 = local_988;
              if ((int)local_988 < (int)uStack_6f0) {
                local_988 = (ulonglong)(int)local_988;
                if (uVar40 == 0) {
                  uVar30 = local_988;
                  do {
                    uVar40 = 0;
                    if ((longlong)(int)uStack_6f0 - 1U == uVar30) {
                      local_990 = 0;
                      uVar30 = uStack_6f0 & 0xffffffff;
                      goto LAB_14040b5e6;
                    }
                    local_988 = uVar30 + 1;
                    uVar40 = *(uint *)(local_6f8 + 4 + uVar30 * 4) & 0x99999999;
                    uVar30 = local_988;
                  } while (uVar40 == 0);
                  local_990 = 0;
                }
                uVar31 = 0;
                if (uVar40 != 0) {
                  for (; (uVar40 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                  }
                }
                local_990 = (ulonglong)((uVar31 >> 2) + (uint)local_990);
                uVar40 = uVar40 >> ((byte)uVar31 & 0x1c);
                uVar30 = local_988;
              }
LAB_14040b5e6:
              local_988 = uVar30;
              iVar38 = (int)local_990 + (int)local_988 * 8;
              iVar17 = local_6bc + 1;
              if (local_6c8 < local_6bc + 1) {
                iVar17 = local_6c8;
              }
              param_1 = local_998;
            } while (iVar38 < iVar17);
          }
        }
      }
      bVar42 = *(byte *)((longlong)param_1 + 0x9e);
      local_6a6 = CONCAT11(bVar42 >> 1,bVar42) & 0x101;
      *(byte *)((longlong)param_1 + 0x9e) = bVar42 & 0xe8;
      local_2f8 = (float)(double)param_1[0x26];
      local_5d8 = (double)local_2f8;
      fStack_2f4 = (float)(double)param_1[0x27];
      local_5d0 = (double)fStack_2f4;
      local_2f0 = (float)(double)param_1[0x28];
      local_5c8 = (double)local_2f0;
      FUN_144911616(local_4f8,&local_2f8,plVar21);
      uVar30 = local_620;
      local_608 = local_4f8;
      local_600 = plStack_4f0._0_4_;
      local_5fc = local_4e8;
      local_5f4 = (undefined4)lStack_4e0;
      local_5f0 = local_4d8._0_8_;
      local_5e8 = local_4d8._8_4_;
      local_5e4 = local_4c8;
      local_5dc = (undefined4)uStack_4c0;
      local_648 = *(ushort *)(param_1 + 0x2a);
      local_58c = (undefined4)param_1[0x2b];
      local_690 = *(int *)((longlong)param_1 + 0x154);
      iVar17 = (int)local_620;
      lVar27 = (longlong)(int)local_620;
      if (lVar27 < 1) {
        local_620 = CONCAT44(local_620._4_4_,1);
        uVar31 = 1 - iVar17;
        if ((uint)(local_620._4_4_ - iVar17) < uVar31) {
          FUN_1474bf2b2(local_640,uVar30 & 0xffffffff);
        }
        puVar22 = local_628;
        if (local_628 == (undefined8 *)0x0) {
          puVar22 = local_640;
        }
        FUN_143544cff(puVar22 + lVar27 * 3,uVar31);
      }
      else if ((int)local_620 != 1) {
        local_620 = CONCAT44(local_620._4_4_,1);
        FUN_147b4e002(local_640);
      }
      puVar22 = local_640;
      if (local_628 != (undefined8 *)0x0) {
        puVar22 = local_628;
      }
      puVar22[2] = *(undefined8 *)((longlong)param_2 + 0x94);
      uVar23 = *(undefined8 *)((longlong)param_2 + 0x8c);
      *puVar22 = *(undefined8 *)((longlong)param_2 + 0x84);
      puVar22[1] = uVar23;
      pcVar5 = (code *)param_2[0x18];
      plVar21 = param_2 + 0x1c;
      if ((longlong *)param_2[0x1a] != (longlong *)0x0) {
        plVar21 = (longlong *)param_2[0x1a];
      }
      uVar23 = (**(code **)(*plVar21 + 8))();
      (*pcVar5)(uVar23,local_738);
      if ((local_648 & 4) != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caff428) &&
           (FUN_144b3d300(&DAT_14caff428), DAT_14caff428 == -1)) {
          FUN_145f8e32a(&DAT_14caff3a0);
          atexit((_func_5014 *)&LAB_1436691a2);
          _Init_thread_footer(&DAT_14caff428);
        }
        if (*(int *)((longlong)param_1 + 0xb4) == 0) {
LAB_14040a83f:
          uVar30 = 0;
        }
        else {
          uVar31 = *(uint *)(param_1 + 0x16);
          uVar30 = 0;
          if ((-1 < (int)uVar31) && ((int)uVar31 < DAT_14c9647dc)) {
            puVar34 = (ulonglong *)
                      ((ulonglong)((uVar31 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8));
            if ((puVar34 == (ulonglong *)0x0) ||
               (((int)puVar34[2] != *(int *)((longlong)param_1 + 0xb4) ||
                ((puVar34[1] & 0x10200000) != 0)))) goto LAB_14040a83f;
            uVar30 = *puVar34;
          }
        }
        if (DAT_14caff38c != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
          if (DAT_14caff3e0 != DAT_14caff40c) {
            uVar31 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
            uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
            puVar36 = &DAT_14caff410;
            if (DAT_14caff418 != (undefined *)0x0) {
              puVar36 = DAT_14caff418;
            }
            iVar17 = *(int *)(puVar36 +
                             (ulonglong)(DAT_14caff420 - 1U & (uVar31 >> 0x10 ^ uVar31)) * 4);
            while (iVar17 != -1) {
              lVar27 = DAT_14caff3d8 + (longlong)iVar17 * 0x90;
              if (*(ulonglong *)(DAT_14caff3d8 + (longlong)iVar17 * 0x90) == uVar30) {
                if (((lVar27 + 0x10U & 0xffffffffffffffef) != 0) &&
                   (*(longlong *)(lVar27 + 0x70) == DAT_14c872be0)) {
                  dVar7 = *(double *)(lVar27 + 0x10);
                  dVar8 = *(double *)(lVar27 + 0x18);
                  dVar9 = *(double *)(lVar27 + 0x20);
                  uVar23 = *(undefined8 *)(lVar27 + 0x30);
                  uVar15 = *(undefined8 *)(lVar27 + 0x38);
                  uVar13 = *(undefined4 *)(lVar27 + 0x40);
                  uVar14 = *(undefined4 *)(lVar27 + 0x44);
                  dVar10 = *(double *)(lVar27 + 0x50);
                  dVar11 = *(double *)(lVar27 + 0x58);
                  dVar12 = *(double *)(lVar27 + 0x60);
                  dVar3 = *(double *)(lVar27 + 0x10);
                  dVar50 = *(double *)(lVar27 + 0x28);
                  dVar54 = *(double *)(lVar27 + 0x28);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
                  dVar51 = dVar8 + dVar8;
                  dVar52 = dVar9 + dVar9;
                  dVar53 = dVar7 * (dVar7 + dVar7);
                  dVar6 = (1.0 - (dVar9 * dVar52 + dVar53)) * dVar11;
                  local_4a8 = (1.0 - (dVar53 + dVar8 * dVar51)) * dVar12;
                  dVar3 = dVar3 * dVar52;
                  dVar53 = dVar52 * dVar50;
                  dVar54 = (dVar7 + dVar7) * dVar54;
                  dVar50 = dVar51 * dVar50;
                  dVar55 = (dVar51 * dVar7 + dVar53) * dVar10;
                  local_4c8 = (dVar52 * dVar8 + dVar54) * dVar11;
                  dVar54 = (dVar52 * dVar8 - dVar54) * dVar12;
                  local_4e8 = (dVar3 - dVar50) * dVar10;
                  plStack_4f0._0_4_ = (float)SUB84(dVar55,0);
                  local_4f8 = (undefined1  [8])((1.0 - (dVar9 * dVar52 + dVar8 * dVar51)) * dVar10);
                  plStack_4f0._4_4_ = (int)((ulonglong)dVar55 >> 0x20);
                  lStack_4e0 = 0;
                  local_4d8._8_4_ = SUB84(dVar6,0);
                  local_4d8._0_8_ = (dVar51 * dVar7 - dVar53) * dVar11;
                  local_4d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                  uStack_4c0 = 0;
                  local_4b8._8_4_ = SUB84(dVar54,0);
                  local_4b8._0_8_ = (dVar50 + dVar3) * dVar12;
                  local_4b8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                  uStack_4a0 = 0;
                  local_938 = (float)local_5c8;
                  local_93c = (float)local_5d0;
                  uStack_480 = 0;
                  uStack_47c = 0x3ff00000;
                  local_940 = (float)local_5d8;
                  local_498 = uVar23;
                  uStack_490 = uVar15;
                  local_488 = uVar13;
                  uStack_484 = uVar14;
                  FUN_144911616(&local_2f8);
                  local_5b8 = local_2f0;
                  local_5c0 = CONCAT44(fStack_2f4,local_2f8);
                  local_5ac = local_2e0;
                  local_5b4 = local_2e8;
                  local_5a0 = local_2d0;
                  local_5a8 = local_2d8;
                  local_59c = local_2c8;
                  param_1 = local_998;
                  local_598 = local_2c4;
                  local_594 = local_2c0;
                  goto LAB_140409924;
                }
                break;
              }
              iVar17 = *(int *)(lVar27 + 0x80);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
          param_1 = local_998;
        }
        local_944 = (float)local_5c8;
        local_948 = (float)local_5d0;
        local_94c = (float)local_5d8;
        FUN_144911616(local_4f8,&local_94c,local_578);
        local_5c0 = local_4f8;
        local_5b8 = plStack_4f0._0_4_;
        local_5b4 = local_4e8;
        local_5ac = (undefined4)lStack_4e0;
        local_5a8 = local_4d8._0_8_;
        local_5a0 = local_4d8._8_4_;
        local_59c = (undefined4)local_4c8;
        local_598 = local_4c8._4_4_;
        local_594 = (undefined4)uStack_4c0;
LAB_140409924:
        local_590 = 1;
      }
      uVar30 = (ulonglong)local_584;
      local_928 = local_584;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)DAT_14ca85550 * 0xf) & 0x40) == 0) {
        uVar31 = ((local_648 & 4) >> 2) * 3;
      }
      else {
        uVar31 = local_648 >> 1 & 2;
      }
      uVar32 = 2;
      if ((local_648 & 0x20) == 0) {
        uVar32 = (uint)((local_648 & 0x48) != 0);
      }
      uVar47 = local_690 + 3U >> 2;
      if ((local_648 & 2) == 0) {
        uVar47 = local_648 & 2;
      }
      iStack_924 = uVar47 + uVar31 +
                   (ushort)((local_648 >> 4 & 1) + (ushort)((local_648 >> 9 & 1) != 0)) + uVar32;
      local_920 = CONCAT22(local_920._2_2_,local_648) & 0xfffeffff;
      if (((bVar37 & 4) == 0) || (*(char *)((longlong)param_1 + 0x9c) != '\x02')) {
        if ((char)local_978 == '\0') {
          FUN_144b24618(local_918,local_738);
          local_758 = (longlong *)param_1[0x14];
          plStack_750 = (longlong *)param_1[0x15];
          plVar21 = local_758;
          if (plStack_750 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_750 + 1) = (int)plStack_750[1] + 1;
            UNLOCK();
            uVar30 = (ulonglong)local_928;
            plVar21 = (longlong *)param_1[0x14];
          }
          local_748 = (uint)uVar30;
          lVar27 = (**(code **)(*plVar21 + 0x10))();
          FUN_144b24618(&local_2f8,local_918);
          plVar21 = local_758;
          local_138 = local_758;
          plStack_130 = plStack_750;
          local_758 = (longlong *)0x0;
          plStack_750 = (longlong *)0x0;
          local_128 = local_748;
          if ((char)local_974 == '\0') {
            plStack_4f0._4_4_ = iStack_924;
            plStack_4f0._0_4_ = (float)local_928;
            local_4f8 = (undefined1  [8])lVar27;
            local_4e8 = (double)CONCAT44(local_4e8._4_4_,local_920);
            FUN_144b24618(local_4d8,&local_2f8);
            local_318 = local_138;
            plStack_310 = plStack_130;
            local_138 = (longlong *)0x0;
            plStack_130 = (longlong *)0x0;
            local_308 = local_128;
            lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar17 = *(int *)(lVar27 + 0xc60);
            if (DAT_14c86a9fc == 0) {
              plVar21 = local_998;
              if (iVar17 != 2) {
                if (iVar17 != 1) goto LAB_140409d63;
                uVar31 = FUN_140ad26c0();
                uVar30 = (ulonglong)uVar31;
                DVar19 = GetCurrentThreadId();
                bVar49 = uVar31 == DVar19;
                goto LAB_140409d66;
              }
LAB_140409d71:
              if (local_4f8 == (undefined1  [8])0x0) {
                (**(code **)(*local_318 + 0x28))(local_318,local_4d8);
              }
              else {
                FUN_1435442ee(local_4f8,local_4d8,local_4f8 + 8);
              }
            }
            else {
LAB_140409d63:
              bVar49 = iVar17 == 0x10;
LAB_140409d66:
              plVar21 = local_998;
              if (bVar49) goto LAB_140409d71;
              if (DAT_14ca9a438 == '\0') {
                if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar27 + 0xc60), iVar17 == 2))
                goto LAB_140409d71;
                if (iVar17 == 1) {
                  uVar31 = FUN_140ad26c0();
                  uVar30 = (ulonglong)uVar31;
                  DVar19 = GetCurrentThreadId();
                  if (uVar31 == DVar19) goto LAB_140409d71;
                }
              }
              if (DAT_14ca9a43c == 0) {
                puVar22 = (undefined8 *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x308);
                puVar26 = (uint *)*puVar22;
                if (puVar26 != (uint *)0x0) goto LAB_14040ac6b;
                while( true ) {
                  uVar31 = *(uint *)(*(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8) + 0x318);
                  if ((uVar31 & 1) == 0) {
                    *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318) = uVar31 | 1;
                    __tlregdtor(&LAB_143541375);
                  }
                  lVar27 = *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  puVar25 = *(undefined4 **)(lVar27 + 0x310);
                  *(undefined8 *)(lVar27 + 0x310) = 0;
                  if (puVar25 == (undefined4 *)0x0) {
                    puVar25 = _aligned_malloc(0x10000,0x10000);
                  }
                  *puVar25 = 0xffffffff;
                  *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
                  puVar25[0x12] = 0;
                  *puVar22 = puVar25;
                  FUN_140217a48(puVar22);
                  puVar26 = (uint *)*puVar22;
LAB_14040ac6b:
                  puVar46 = (undefined8 *)
                            (*(longlong *)(puVar26 + 0x10) + 0xfU & 0xfffffffffffffff0);
                  puVar35 = (uint *)(puVar46 + 0x56);
                  uVar31 = puVar26[0x12];
                  if (puVar35 <= puVar26 + 0x4000) break;
                  while( true ) {
                    *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
                    LOCK();
                    uVar32 = *puVar26;
                    *puVar26 = *puVar26 + uVar31 + 1;
                    UNLOCK();
                    if ((uVar32 ^ uVar31) != 0xffffffff) break;
                    puVar26 = (uint *)*puVar22;
                    *puVar26 = 0xffffffff;
                    *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
                    puVar26[0x12] = 0;
                    *puVar22 = puVar26;
                    puVar46 = (undefined8 *)((longlong)puVar26 + 0x67U & 0xfffffffffffffff0);
                    puVar35 = (uint *)(puVar46 + 0x56);
                    uVar31 = 0;
                    if (puVar35 <= puVar26 + 0x4000) {
                      uVar31 = 1;
                      goto LAB_14040aceb;
                    }
                  }
                }
                uVar31 = uVar31 + 1;
LAB_14040aceb:
                *(uint **)(puVar26 + 0x10) = puVar35;
                puVar26[0x12] = uVar31;
                iVar17 = 0;
                FUN_1447247dc(puVar46,0);
                *puVar46 = &PTR_FUN_14a9754c0;
                puVar46[0x16] = local_4f8;
                puVar46[0x17] = plStack_4f0;
                *(undefined4 *)(puVar46 + 0x18) = local_4e8._0_4_;
                FUN_144b24618(puVar46 + 0x1a,local_4d8);
                puVar46[0x52] = local_318;
                puVar46[0x53] = plStack_310;
                local_318 = (longlong *)0x0;
                plStack_310 = (longlong *)0x0;
                *(uint *)(puVar46 + 0x54) = local_308;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar31 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar31 < 2) {
                    uVar39 = (ulonglong)(byte)(&DAT_149e38edc)[uVar31];
                    iVar17 = 0;
                  }
                  else {
                    uVar39 = 2;
                  }
                }
                else {
                  iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar39 = 5;
                }
                if (*(code **)(puVar46[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar46[0xe] + 0x18))(puVar46 + 0xe,puVar46 + 9);
                }
                plVar21 = local_998;
                puVar46[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar46[9] = puVar46;
                puVar46[10] = puVar46;
                lVar27 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar27 == 0) {
                  uVar16 = 1;
                  if ((char)uVar39 != '\x06') {
                    uVar16 = uVar39;
                  }
                  uVar39 = uVar16;
                  uVar23 = 0;
                }
                else {
                  if ((char)uVar39 == '\x06') {
                    uVar39 = *(ulonglong *)(lVar27 + 0x38) >> 0x3b;
                  }
                  uVar23 = *(undefined8 *)(lVar27 + 0x30);
                }
                puVar46[0xf] = uVar23;
                puVar46[0x10] = uVar39 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar46 + 0x1c) = iVar17;
                if (puVar46 == (undefined8 *)0x0) {
                  local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
                  FUN_1447439e4(0);
                  plVar21 = local_998;
                }
                else {
                  LOCK();
                  *(int *)(puVar46 + 1) = *(int *)(puVar46 + 1) + 1;
                  UNLOCK();
                  local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
                  FUN_1447439e4(puVar46);
                  LOCK();
                  piVar1 = (int *)(puVar46 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar46)(puVar46,1);
                  }
                }
              }
              else {
                local_118 = (longlong *)0x0;
                plVar24 = (longlong *)FUN_14001cc68(0x210,0x10);
                *plVar24 = (longlong)&PTR_LAB_14a9754a0;
                *(undefined4 *)(plVar24 + 4) = local_4e8._0_4_;
                plVar24[2] = (longlong)local_4f8;
                plVar24[3] = (longlong)plStack_4f0;
                local_108 = plVar24;
                FUN_144b24618(plVar24 + 6,local_4d8);
                plVar24[0x3e] = (longlong)local_318;
                plVar24[0x3f] = (longlong)plStack_310;
                local_318 = (longlong *)0x0;
                plStack_310 = (longlong *)0x0;
                *(uint *)(plVar24 + 0x40) = local_308;
                if (plVar24 != (longlong *)&DAT_fffffffffffffff0) {
                  local_118 = (longlong *)&LAB_14354484a;
                }
                local_9a8 = (longlong **)&local_118;
                FUN_14005a792(&DAT_14ca9a440,L"UpdateInstanceProxyData",&DAT_14cae708c);
                if (local_118 != (longlong *)0x0) {
                  plVar24 = local_108;
                  if (local_108 == (longlong *)0x0) {
                    plVar24 = local_f8;
                  }
                  (**(code **)(*plVar24 + 0x10))();
                }
              }
            }
            plVar24 = plStack_310;
            if (plStack_310 != (longlong *)0x0) {
              LOCK();
              plVar28 = plStack_310 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plStack_310)(plStack_310);
                LOCK();
                piVar1 = (int *)((longlong)plVar24 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
            FUN_144ae33c0(local_4d8);
          }
          else if (lVar27 == 0) {
            (**(code **)(*plVar21 + 0x28))(plVar21,&local_2f8);
            plVar21 = local_998;
          }
          else {
            FUN_1435442ee(lVar27,&local_2f8,&local_928);
            plVar21 = local_998;
          }
          plVar24 = plStack_130;
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            plVar28 = plStack_130 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plStack_130)(plStack_130);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          FUN_144ae33c0(&local_2f8);
          plVar24 = plStack_750;
          if (plStack_750 != (longlong *)0x0) {
            LOCK();
            plVar28 = plStack_750 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plStack_750)(plStack_750);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          FUN_144ae33c0(local_918);
          uVar48 = 1;
        }
        else {
          if (param_1[0x18] == 0) {
            uVar48 = 1;
          }
          else {
            *(undefined1 *)(param_1[0x14] + 0x1a9) = 1;
            lVar27 = param_1[0x14];
            lVar33 = param_1[0x18];
            lVar29 = param_1[0x19];
            if (lVar29 != 0) {
              LOCK();
              *(int *)(lVar29 + 8) = *(int *)(lVar29 + 8) + 1;
              UNLOCK();
            }
            plVar21 = *(longlong **)(lVar27 + 0x1b8);
            *(longlong *)(lVar27 + 0x1b0) = lVar33;
            *(longlong *)(lVar27 + 0x1b8) = lVar29;
            uVar48 = 3;
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar24 = plVar21 + 1;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)*plVar24 == 0) {
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
          FUN_144b24618(local_918,local_738);
          local_758 = (longlong *)param_1[0x14];
          plStack_750 = (longlong *)param_1[0x15];
          plVar21 = local_758;
          if (plStack_750 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_750 + 1) = (int)plStack_750[1] + 1;
            UNLOCK();
            plVar21 = (longlong *)param_1[0x14];
          }
          local_748 = local_928;
          lVar27 = (**(code **)(*plVar21 + 0x10))();
          FUN_144b24618(&local_2f8,local_918);
          plVar21 = local_758;
          local_138 = local_758;
          plStack_130 = plStack_750;
          local_758 = (longlong *)0x0;
          plStack_750 = (longlong *)0x0;
          local_128 = local_748;
          if ((char)local_974 == '\0') {
            plStack_4f0._4_4_ = iStack_924;
            plStack_4f0._0_4_ = (float)local_928;
            local_4f8 = (undefined1  [8])lVar27;
            local_4e8 = (double)CONCAT44(local_4e8._4_4_,local_920);
            FUN_144b24618(local_4d8,&local_2f8);
            local_318 = local_138;
            plStack_310 = plStack_130;
            local_138 = (longlong *)0x0;
            plStack_130 = (longlong *)0x0;
            local_308 = local_128;
            lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar17 = *(int *)(lVar27 + 0xc60);
            if (DAT_14c86a9fc == 0) {
              plVar21 = local_998;
              if (iVar17 != 2) {
                if (iVar17 != 1) goto LAB_14040a01b;
                uVar31 = FUN_140ad26c0();
                uVar30 = (ulonglong)uVar31;
                DVar19 = GetCurrentThreadId();
                bVar49 = uVar31 == DVar19;
                goto LAB_14040a01e;
              }
LAB_14040a029:
              if (local_4f8 == (undefined1  [8])0x0) {
                (**(code **)(*local_318 + 0x30))(local_318,local_4d8);
              }
              else {
                FUN_143543b08(local_4f8,local_4d8,local_4f8 + 8);
              }
            }
            else {
LAB_14040a01b:
              bVar49 = iVar17 == 0x10;
LAB_14040a01e:
              plVar21 = local_998;
              if (bVar49) goto LAB_14040a029;
              if (DAT_14ca9a438 == '\0') {
                if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar27 + 0xc60), iVar17 == 2))
                goto LAB_14040a029;
                if (iVar17 == 1) {
                  uVar31 = FUN_140ad26c0();
                  uVar30 = (ulonglong)uVar31;
                  DVar19 = GetCurrentThreadId();
                  if (uVar31 == DVar19) goto LAB_14040a029;
                }
              }
              if (DAT_14ca9a43c == 0) {
                puVar22 = (undefined8 *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x308);
                puVar26 = (uint *)*puVar22;
                if (puVar26 != (uint *)0x0) goto LAB_14040ae4c;
                while( true ) {
                  uVar31 = *(uint *)(*(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8) + 0x318);
                  if ((uVar31 & 1) == 0) {
                    *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318) = uVar31 | 1;
                    __tlregdtor(&LAB_143541375);
                  }
                  lVar27 = *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  puVar25 = *(undefined4 **)(lVar27 + 0x310);
                  *(undefined8 *)(lVar27 + 0x310) = 0;
                  if (puVar25 == (undefined4 *)0x0) {
                    puVar25 = _aligned_malloc(0x10000,0x10000);
                  }
                  *puVar25 = 0xffffffff;
                  *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
                  puVar25[0x12] = 0;
                  *puVar22 = puVar25;
                  FUN_140217a48(puVar22);
                  puVar26 = (uint *)*puVar22;
LAB_14040ae4c:
                  puVar46 = (undefined8 *)
                            (*(longlong *)(puVar26 + 0x10) + 0xfU & 0xfffffffffffffff0);
                  puVar35 = (uint *)(puVar46 + 0x56);
                  uVar31 = puVar26[0x12];
                  if (puVar35 <= puVar26 + 0x4000) break;
                  while( true ) {
                    *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
                    LOCK();
                    uVar32 = *puVar26;
                    *puVar26 = *puVar26 + uVar31 + 1;
                    UNLOCK();
                    if ((uVar32 ^ uVar31) != 0xffffffff) break;
                    puVar26 = (uint *)*puVar22;
                    *puVar26 = 0xffffffff;
                    *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
                    puVar26[0x12] = 0;
                    *puVar22 = puVar26;
                    puVar46 = (undefined8 *)((longlong)puVar26 + 0x67U & 0xfffffffffffffff0);
                    puVar35 = (uint *)(puVar46 + 0x56);
                    uVar31 = 0;
                    if (puVar35 <= puVar26 + 0x4000) {
                      uVar31 = 1;
                      goto LAB_14040aecc;
                    }
                  }
                }
                uVar31 = uVar31 + 1;
LAB_14040aecc:
                *(uint **)(puVar26 + 0x10) = puVar35;
                puVar26[0x12] = uVar31;
                iVar17 = 0;
                FUN_1447247dc(puVar46,0);
                *puVar46 = &PTR_FUN_14a975470;
                puVar46[0x16] = local_4f8;
                puVar46[0x17] = plStack_4f0;
                *(undefined4 *)(puVar46 + 0x18) = local_4e8._0_4_;
                FUN_144b24618(puVar46 + 0x1a,local_4d8);
                puVar46[0x52] = local_318;
                puVar46[0x53] = plStack_310;
                local_318 = (longlong *)0x0;
                plStack_310 = (longlong *)0x0;
                *(uint *)(puVar46 + 0x54) = local_308;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar31 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar31 < 2) {
                    uVar39 = (ulonglong)(byte)(&DAT_149e38edc)[uVar31];
                    iVar17 = 0;
                  }
                  else {
                    uVar39 = 2;
                  }
                }
                else {
                  iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar39 = 5;
                }
                if (*(code **)(puVar46[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar46[0xe] + 0x18))(puVar46 + 0xe,puVar46 + 9);
                }
                plVar21 = local_998;
                puVar46[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar46[9] = puVar46;
                puVar46[10] = puVar46;
                lVar27 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar27 == 0) {
                  uVar16 = 1;
                  if ((char)uVar39 != '\x06') {
                    uVar16 = uVar39;
                  }
                  uVar39 = uVar16;
                  uVar23 = 0;
                }
                else {
                  if ((char)uVar39 == '\x06') {
                    uVar39 = *(ulonglong *)(lVar27 + 0x38) >> 0x3b;
                  }
                  uVar23 = *(undefined8 *)(lVar27 + 0x30);
                }
                puVar46[0xf] = uVar23;
                puVar46[0x10] = uVar39 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar46 + 0x1c) = iVar17;
                if (puVar46 == (undefined8 *)0x0) {
                  local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
                  FUN_1447439e4(0);
                  plVar21 = local_998;
                }
                else {
                  LOCK();
                  *(int *)(puVar46 + 1) = *(int *)(puVar46 + 1) + 1;
                  UNLOCK();
                  local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
                  FUN_1447439e4(puVar46);
                  LOCK();
                  piVar1 = (int *)(puVar46 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar46)(puVar46,1);
                  }
                }
              }
              else {
                local_118 = (longlong *)0x0;
                plVar24 = (longlong *)FUN_14001cc68(0x210,0x10);
                *plVar24 = (longlong)&PTR_LAB_14a975450;
                *(undefined4 *)(plVar24 + 4) = local_4e8._0_4_;
                plVar24[2] = (longlong)local_4f8;
                plVar24[3] = (longlong)plStack_4f0;
                local_108 = plVar24;
                FUN_144b24618(plVar24 + 6,local_4d8);
                plVar24[0x3e] = (longlong)local_318;
                plVar24[0x3f] = (longlong)plStack_310;
                local_318 = (longlong *)0x0;
                plStack_310 = (longlong *)0x0;
                *(uint *)(plVar24 + 0x40) = local_308;
                if (plVar24 != (longlong *)&DAT_fffffffffffffff0) {
                  local_118 = (longlong *)&LAB_143544064;
                }
                local_9a8 = (longlong **)&local_118;
                FUN_14005a792(&DAT_14ca9a440,L"UpdateInstanceProxyData",&DAT_14cae7088);
                if (local_118 != (longlong *)0x0) {
                  plVar24 = local_108;
                  if (local_108 == (longlong *)0x0) {
                    plVar24 = local_f8;
                  }
                  (**(code **)(*plVar24 + 0x10))();
                }
              }
            }
            plVar24 = plStack_310;
            if (plStack_310 != (longlong *)0x0) {
              LOCK();
              plVar28 = plStack_310 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plStack_310)(plStack_310);
                LOCK();
                piVar1 = (int *)((longlong)plVar24 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
            FUN_144ae33c0(local_4d8);
          }
          else if (lVar27 == 0) {
            (**(code **)(*plVar21 + 0x30))(plVar21,&local_2f8);
            plVar21 = local_998;
          }
          else {
            FUN_143543b08(lVar27,&local_2f8,&local_928);
            plVar21 = local_998;
          }
          plVar24 = plStack_130;
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            plVar28 = plStack_130 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plStack_130)(plStack_130);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          FUN_144ae33c0(&local_2f8);
          plVar24 = plStack_750;
          if (plStack_750 != (longlong *)0x0) {
            LOCK();
            plVar28 = plStack_750 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plStack_750)(plStack_750);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          FUN_144ae33c0(local_918);
        }
      }
      else {
        FUN_144b24618(local_918,local_738);
        local_758 = (longlong *)param_1[0x14];
        plStack_750 = (longlong *)param_1[0x15];
        plVar21 = local_758;
        if (plStack_750 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_750 + 1) = (int)plStack_750[1] + 1;
          UNLOCK();
          uVar30 = (ulonglong)local_928;
          plVar21 = (longlong *)param_1[0x14];
        }
        local_748 = (uint)uVar30;
        lVar27 = (**(code **)(*plVar21 + 0x10))();
        FUN_144b24618(&local_2f8,local_918);
        plVar21 = local_758;
        local_138 = local_758;
        plStack_130 = plStack_750;
        local_758 = (longlong *)0x0;
        plStack_750 = (longlong *)0x0;
        local_128 = local_748;
        if ((char)local_974 == '\0') {
          plStack_4f0._4_4_ = iStack_924;
          plStack_4f0._0_4_ = (float)local_928;
          local_4f8 = (undefined1  [8])lVar27;
          local_4e8 = (double)CONCAT44(local_4e8._4_4_,local_920);
          FUN_144b24618(local_4d8,&local_2f8);
          local_318 = local_138;
          plStack_310 = plStack_130;
          local_138 = (longlong *)0x0;
          plStack_130 = (longlong *)0x0;
          local_308 = local_128;
          lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar17 = *(int *)(lVar27 + 0xc60);
          if (DAT_14c86a9fc == 0) {
            plVar21 = local_998;
            if (iVar17 != 2) {
              if (iVar17 != 1) goto LAB_140409cb7;
              uVar31 = FUN_140ad26c0();
              uVar30 = (ulonglong)uVar31;
              DVar19 = GetCurrentThreadId();
              bVar49 = uVar31 == DVar19;
              goto LAB_140409cba;
            }
LAB_140409cc5:
            if (local_4f8 == (undefined1  [8])0x0) {
              (**(code **)(*local_318 + 0x40))(local_318,local_4d8);
            }
            else {
              FUN_143543322(local_4f8,local_4d8,local_4f8 + 8);
            }
          }
          else {
LAB_140409cb7:
            bVar49 = iVar17 == 0x10;
LAB_140409cba:
            plVar21 = local_998;
            if (bVar49) goto LAB_140409cc5;
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar27 + 0xc60), iVar17 == 2))
              goto LAB_140409cc5;
              if (iVar17 == 1) {
                uVar31 = FUN_140ad26c0();
                uVar30 = (ulonglong)uVar31;
                DVar19 = GetCurrentThreadId();
                if (uVar31 == DVar19) goto LAB_140409cc5;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar22 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar26 = (uint *)*puVar22;
              if (puVar26 != (uint *)0x0) goto LAB_14040aa8a;
              while( true ) {
                uVar31 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar31 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar31 | 1;
                  __tlregdtor(&LAB_143541375);
                }
                lVar27 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar25 = *(undefined4 **)(lVar27 + 0x310);
                *(undefined8 *)(lVar27 + 0x310) = 0;
                if (puVar25 == (undefined4 *)0x0) {
                  puVar25 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar25 = 0xffffffff;
                *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
                puVar25[0x12] = 0;
                *puVar22 = puVar25;
                FUN_140217a48(puVar22);
                puVar26 = (uint *)*puVar22;
LAB_14040aa8a:
                puVar46 = (undefined8 *)(*(longlong *)(puVar26 + 0x10) + 0xfU & 0xfffffffffffffff0);
                puVar35 = (uint *)(puVar46 + 0x56);
                uVar31 = puVar26[0x12];
                if (puVar35 <= puVar26 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
                  LOCK();
                  uVar32 = *puVar26;
                  *puVar26 = *puVar26 + uVar31 + 1;
                  UNLOCK();
                  if ((uVar32 ^ uVar31) != 0xffffffff) break;
                  puVar26 = (uint *)*puVar22;
                  *puVar26 = 0xffffffff;
                  *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
                  puVar26[0x12] = 0;
                  *puVar22 = puVar26;
                  puVar46 = (undefined8 *)((longlong)puVar26 + 0x67U & 0xfffffffffffffff0);
                  puVar35 = (uint *)(puVar46 + 0x56);
                  uVar31 = 0;
                  if (puVar35 <= puVar26 + 0x4000) {
                    uVar31 = 1;
                    goto LAB_14040ab0a;
                  }
                }
              }
              uVar31 = uVar31 + 1;
LAB_14040ab0a:
              *(uint **)(puVar26 + 0x10) = puVar35;
              puVar26[0x12] = uVar31;
              iVar17 = 0;
              FUN_1447247dc(puVar46,0);
              *puVar46 = &PTR_FUN_14a975420;
              puVar46[0x16] = local_4f8;
              puVar46[0x17] = plStack_4f0;
              *(undefined4 *)(puVar46 + 0x18) = local_4e8._0_4_;
              FUN_144b24618(puVar46 + 0x1a,local_4d8);
              puVar46[0x52] = local_318;
              puVar46[0x53] = plStack_310;
              local_318 = (longlong *)0x0;
              plStack_310 = (longlong *)0x0;
              *(uint *)(puVar46 + 0x54) = local_308;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar31 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar31 < 2) {
                  uVar39 = (ulonglong)(byte)(&DAT_149e38edc)[uVar31];
                  iVar17 = 0;
                }
                else {
                  uVar39 = 2;
                }
              }
              else {
                iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar39 = 5;
              }
              if (*(code **)(puVar46[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar46[0xe] + 0x18))(puVar46 + 0xe,puVar46 + 9);
              }
              plVar21 = local_998;
              puVar46[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar46[9] = puVar46;
              puVar46[10] = puVar46;
              lVar27 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar27 == 0) {
                uVar16 = 1;
                if ((char)uVar39 != '\x06') {
                  uVar16 = uVar39;
                }
                uVar39 = uVar16;
                uVar23 = 0;
              }
              else {
                if ((char)uVar39 == '\x06') {
                  uVar39 = *(ulonglong *)(lVar27 + 0x38) >> 0x3b;
                }
                uVar23 = *(undefined8 *)(lVar27 + 0x30);
              }
              puVar46[0xf] = uVar23;
              puVar46[0x10] = uVar39 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar46 + 0x1c) = iVar17;
              if (puVar46 == (undefined8 *)0x0) {
                local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(0);
                plVar21 = local_998;
              }
              else {
                LOCK();
                *(int *)(puVar46 + 1) = *(int *)(puVar46 + 1) + 1;
                UNLOCK();
                local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar46);
                LOCK();
                piVar1 = (int *)(puVar46 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar46)(puVar46,1);
                }
              }
            }
            else {
              local_118 = (longlong *)0x0;
              plVar24 = (longlong *)FUN_14001cc68(0x210,0x10);
              *plVar24 = (longlong)&PTR_LAB_14a975400;
              *(undefined4 *)(plVar24 + 4) = local_4e8._0_4_;
              plVar24[2] = (longlong)local_4f8;
              plVar24[3] = (longlong)plStack_4f0;
              local_108 = plVar24;
              FUN_144b24618(plVar24 + 6,local_4d8);
              plVar24[0x3e] = (longlong)local_318;
              plVar24[0x3f] = (longlong)plStack_310;
              local_318 = (longlong *)0x0;
              plStack_310 = (longlong *)0x0;
              *(uint *)(plVar24 + 0x40) = local_308;
              if (plVar24 != (longlong *)&DAT_fffffffffffffff0) {
                local_118 = (longlong *)&LAB_14354387e;
              }
              local_9a8 = (longlong **)&local_118;
              FUN_14005a792(&DAT_14ca9a440,L"UpdateInstanceProxyData",&DAT_14cae7084);
              if (local_118 != (longlong *)0x0) {
                plVar24 = local_108;
                if (local_108 == (longlong *)0x0) {
                  plVar24 = local_f8;
                }
                (**(code **)(*plVar24 + 0x10))();
              }
            }
          }
          plVar24 = plStack_310;
          if (plStack_310 != (longlong *)0x0) {
            LOCK();
            plVar28 = plStack_310 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plStack_310)(plStack_310);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          FUN_144ae33c0(local_4d8);
        }
        else if (lVar27 == 0) {
          (**(code **)(*plVar21 + 0x40))(plVar21,&local_2f8);
          plVar21 = local_998;
        }
        else {
          FUN_143543322(lVar27,&local_2f8,&local_928);
          plVar21 = local_998;
        }
        plVar24 = plStack_130;
        if (plStack_130 != (longlong *)0x0) {
          LOCK();
          plVar28 = plStack_130 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*plStack_130)(plStack_130);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
        FUN_144ae33c0(&local_2f8);
        plVar24 = plStack_750;
        if (plStack_750 != (longlong *)0x0) {
          LOCK();
          plVar28 = plStack_750 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*plStack_750)(plStack_750);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
        FUN_144ae33c0(local_918);
        uVar48 = 0;
      }
      FUN_144ae33c0(local_738);
      *(undefined1 *)((longlong)plVar21 + 0x9d) = uVar48;
      uVar30 = CONCAT71((int7)(uVar30 >> 8),1);
      goto LAB_140408544;
    }
  }
  uVar30 = 0;
LAB_140408544:
  if ((local_d0 ^ (ulonglong)auStack_9c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar30 & 0xffffffff;
code_r0x00014040a650:
  puVar26 = (uint *)*puVar22;
  *puVar26 = 0xffffffff;
  *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
  puVar26[0x12] = 0;
  *puVar22 = puVar26;
  uVar39 = (longlong)puVar26 + 0x5f;
  uVar31 = 0;
  goto LAB_14040a62e;
}



// FUNCTION 14040bd40 FUN_14040bd40 body=38 status=ok
// SIG undefined FUN_14040bd40(void)

undefined8 FUN_14040bd40(undefined8 param_1,int param_2)

{
  FUN_14040bd66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14040bd66 FUN_14040bd66 body=216 status=ok
// SIG undefined FUN_14040bd66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14040bd66(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b30c7a0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14040be3e(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014040be12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14040be3e FUN_14040be3e body=73 status=ok
// SIG undefined FUN_14040be3e(void)

void FUN_14040be3e(longlong param_1,int param_2)

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



// FUNCTION 14040be88 FUN_14040be88 body=1030 status=ok
// SIG undefined FUN_14040be88(void)

void FUN_14040be88(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  char cVar7;
  ulonglong uVar8;
  code ****ppppcVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code ***local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined8 *local_78;
  code ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((((lVar2 != 0) && (*(int *)(param_1 + 0x4c) != 0)) &&
      (uVar14 = *(uint *)(param_1 + 0x48), -1 < (int)uVar14)) &&
     ((((int)uVar14 < DAT_14c9647dc &&
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0)) &&
      (((int)plVar11[2] == *(int *)(param_1 + 0x4c) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar3 = *plVar11, lVar3 != 0)))))))) {
    if (DAT_14cac9ca8 == 0) {
      local_d0 = (code ***)local_70;
      local_70[0] = (code ***)FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = &LAB_1417b2375;
      local_e8 = L"Engine";
      local_f0 = 0x1000000000;
      local_f8 = 0x10000004;
      local_100 = 8;
      local_108 = CONCAT44(local_108._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (iVar1 = *(int *)(lVar2 + 0xc0), (longlong)iVar1 != 0)) {
      lVar12 = *(longlong *)(lVar2 + 0xb8);
      lVar2 = param_1 + 0x2f0;
      lVar15 = 0;
      local_98 = param_1 + 0x164;
      local_a8 = param_1 + 0x328;
      local_b0 = lVar2;
      do {
        plVar11 = *(longlong **)(lVar12 + lVar15);
        if (plVar11 != (longlong *)0x0) {
          local_a0 = lVar12;
          (**(code **)(*plVar11 + 0x2b0))(plVar11,local_70,lVar3,local_98);
          (**(code **)(*plVar11 + 0x2a0))(plVar11,&local_90);
          FUN_14040cfbc(lVar2,local_80);
          puVar6 = local_78;
          *local_78 = local_90;
          FUN_14040c290(local_78 + 1,0,local_70);
          *(undefined4 *)(puVar6 + 6) = 0xffffffff;
          local_84 = local_80[0];
          uVar4 = *puVar6;
          uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
          uVar10 = (uint)uVar4 & 0xffff;
          uVar14 = ((uint)uVar4 << 0x10 | uVar10) + (int)((ulonglong)uVar4 >> 0x20) +
                   (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar10 >> 4);
          local_108 = 0;
          cVar7 = FUN_14040c306(lVar2,uVar14,puVar6,&local_84);
          if (cVar7 == '\0') {
            uVar10 = *(int *)(param_1 + 0x2f8) - *(int *)(param_1 + 0x324);
            iVar13 = 1;
            if (3 < uVar10) {
              uVar8 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
              lVar12 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              iVar13 = 1 << ((byte)lVar12 & 0x1f);
            }
            if (((int)uVar10 < 1) || (iVar13 <= *(int *)(param_1 + 0x338))) {
              uVar14 = *(int *)(param_1 + 0x338) - 1U & uVar14;
              *(uint *)((longlong)puVar6 + 0x34) = uVar14;
              lVar12 = *(longlong *)(param_1 + 0x330);
              if (*(longlong *)(param_1 + 0x330) == 0) {
                lVar12 = local_a8;
              }
              *(undefined4 *)(puVar6 + 6) =
                   *(undefined4 *)
                    (lVar12 + ((longlong)*(int *)(param_1 + 0x338) - 1U & (longlong)(int)uVar14) * 4
                    );
              lVar12 = *(longlong *)(param_1 + 0x330);
              if (*(longlong *)(param_1 + 0x330) == 0) {
                lVar12 = local_a8;
              }
              *(undefined4 *)
               (lVar12 + ((longlong)*(int *)(param_1 + 0x338) - 1U & (longlong)(int)uVar14) * 4) =
                   local_84;
            }
            else {
              *(int *)(param_1 + 0x338) = iVar13;
              FUN_140882160(local_b0);
            }
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar5 != (code *)0x0) {
            ppppcVar9 = local_70;
            if (0x18 < local_58) {
              ppppcVar9 = (code ****)local_70[0];
            }
            (*pcVar5)(ppppcVar9);
          }
          lVar12 = local_a0;
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
            lVar12 = local_a0;
          }
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar1 * 8 != lVar15);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14040c290 FUN_14040c290 body=118 status=ok
// SIG undefined FUN_14040c290(void)

undefined8 * FUN_14040c290(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  bVar1 = *(byte *)(param_3 + 4);
  uVar2 = *(ushort *)(param_3 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  _Dst = param_1;
  _Src = param_3;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_1 = _Dst;
    _Src = (undefined8 *)*param_3;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
  return param_1;
}



// FUNCTION 14040c306 FUN_14040c306 body=265 status=ok
// SIG undefined FUN_14040c306(void)

void FUN_14040c306(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar17 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar17 * 0x38) == *param_3) {
          plVar15 = (longlong *)(puVar1 + 2);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)*(byte *)(puVar1 + 10) * 0x120));
          if (pcVar2 != (code *)0x0) {
            plVar16 = plVar15;
            if (0x18 < *(ushort *)(puVar1 + 8)) {
              plVar16 = (longlong *)*plVar15;
            }
            (*pcVar2)(plVar16);
          }
          if (0x18 < *(ushort *)(puVar1 + 8)) {
            FUN_1400020a8(*plVar15);
          }
          lVar9 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar10 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar11 = param_3[2];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar12 = param_3[3];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar7;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar8;
          puVar1[4] = (int)lVar11;
          puVar1[5] = uVar5;
          puVar1[6] = (int)lVar12;
          puVar1[7] = uVar6;
          *puVar1 = (int)lVar9;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar10;
          puVar1[3] = uVar4;
          FUN_14040c410(param_1,*param_4,1);
          *param_4 = iVar17;
          uVar14 = 1;
          goto LAB_14040c3d6;
        }
        iVar17 = puVar1[0xc];
      } while (iVar17 != -1);
    }
  }
  uVar14 = 0;
LAB_14040c3d6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 14040c410 FUN_14040c410 body=138 status=ok
// SIG undefined FUN_14040c410(void)

void FUN_14040c410(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14040c49a FUN_14040c49a body=35 status=ok
// SIG undefined FUN_14040c49a(void)

undefined8 FUN_14040c49a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14040c4bd(param_2,*(undefined1 *)(param_1 + 0x29),*(undefined1 *)(param_1 + 0x28),param_3);
  return param_2;
}



// FUNCTION 14040c4bd FUN_14040c4bd body=698 status=ok
// SIG undefined FUN_14040c4bd(void)

uint * FUN_14040c4bd(uint *param_1,char param_2,undefined4 param_3,longlong *param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
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
  if (param_4 != (longlong *)0x0) {
    if (DAT_14cb22468 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f2c44f;
      local_60 = FUN_146438a21;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    plVar5 = (longlong *)(**(code **)(*param_4 + 0x288))(param_4,DAT_14cb22468);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cb22468 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147f2c44f;
        local_60 = FUN_146438a21;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb22468);
      if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
        lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if (lVar7 != 0) {
          if (param_2 == '\x03') {
            *(undefined2 *)(param_1 + 6) = 8;
            param_1[0] = 0;
            param_1[1] = 0;
            FUN_14485c47a(param_1,lVar7);
            uVar4 = 0xe;
            goto LAB_14040c5c7;
          }
          lVar7 = FUN_14040c778(lVar7,param_3);
          if (param_2 == '\0') {
            *(undefined2 *)(param_1 + 6) = 0x18;
            uVar8 = *(uint *)(lVar7 + 0xac);
            uVar2 = *(uint *)(lVar7 + 0xb0);
            uVar3 = *(uint *)(lVar7 + 0xb4);
            *param_1 = *(uint *)(lVar7 + 0xa8);
            param_1[1] = uVar8;
            param_1[2] = uVar2;
            param_1[3] = uVar3;
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar7 + 0xb8);
            uVar4 = 4;
            goto LAB_14040c5c7;
          }
          if (param_2 == '\x02') {
            fVar1 = *(float *)(lVar7 + 0xc4);
            uVar8 = -(uint)(fVar1 != 3.4028235e+38);
            *(undefined2 *)(param_1 + 6) = 4;
            *param_1 = ~uVar8 & 0x47c35000 | (uint)fVar1 & uVar8;
          }
          else {
            if (param_2 != '\x01') goto LAB_14040c76b;
            uVar8 = *(uint *)(lVar7 + 0xc0);
            *(undefined2 *)(param_1 + 6) = 4;
            *param_1 = uVar8;
          }
          uVar4 = 3;
          goto LAB_14040c5c7;
        }
      }
    }
  }
LAB_14040c76b:
  *(undefined2 *)(param_1 + 6) = 0;
  uVar4 = 0;
LAB_14040c5c7:
  *(undefined1 *)(param_1 + 8) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14040c778 FUN_14040c778 body=1784 status=ok
// SIG undefined FUN_14040c778(void)

float * FUN_14040c778(longlong param_1,char param_2)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  longlong lVar14;
  undefined1 uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == '\x01') {
    lVar11 = 0x878;
    if ((*(char *)(param_1 + 0x999) == '\x01') &&
       (lVar11 = 0x758, *(char *)(param_1 + 0x998) == '\0')) {
      lVar11 = 0x638;
    }
  }
  else {
    lVar11 = 0x638;
    if (param_2 == '\x02') {
      lVar11 = 0x758;
    }
  }
  pfVar2 = (float *)(param_1 + lVar11);
  if (*(char *)(param_1 + 0x113 + lVar11) != '\0') goto LAB_14040c85a;
  bVar8 = 0;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 != 1) goto LAB_14040c85a;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_14040c85a;
    bVar8 = *(byte *)((longlong)pfVar2 + 0x113);
  }
  if ((bVar8 & 1) == 0) {
    dVar6 = *(double *)(param_1 + 0x260);
    dVar7 = *(double *)(param_1 + 0x268);
    dVar3 = *(double *)(param_1 + 0x270);
    if (*(char *)((longlong)pfVar2 + 0x111) == '\0') {
      pfVar1 = pfVar2 + 0x12;
      FUN_14040ce72(pfVar1);
      fVar16 = pfVar2[4];
      if ((longlong)(int)fVar16 != 0) {
        lVar11 = *(longlong *)(pfVar2 + 2);
        lVar14 = 0;
        do {
          if ((*(longlong *)(lVar11 + lVar14) != 0) &&
             (lVar12 = *(longlong *)(*(longlong *)(lVar11 + lVar14) + 0x3a8), lVar12 != 0)) {
            FUN_140ac6e0a(pfVar1,lVar12,1,0);
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)(int)fVar16 * 8 != lVar14);
      }
      if ((longlong)(int)pfVar2[0x10] != 0) {
        lVar11 = *(longlong *)(pfVar2 + 0xe);
        lVar14 = (longlong)(int)pfVar2[0x10] << 3;
        do {
          lVar12 = FUN_14479d2ce(lVar11);
          if (lVar12 != 0) {
            FUN_140ac6e0a(pfVar1,lVar12,1,0);
          }
          lVar11 = lVar11 + 8;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      *(undefined1 *)((longlong)pfVar2 + 0x111) = 1;
    }
    if (*(char *)((longlong)pfVar2 + 0x112) == '\0') {
      FUN_14040ce72(pfVar2 + 0x20);
      fVar16 = pfVar2[0xc];
      if ((longlong)(int)fVar16 == 0) {
        uVar15 = 0;
      }
      else {
        lVar11 = *(longlong *)(pfVar2 + 10);
        lVar14 = 0;
        uVar15 = 0;
        do {
          if ((*(longlong *)(lVar11 + lVar14) != 0) &&
             (lVar12 = *(longlong *)(*(longlong *)(lVar11 + lVar14) + 0x3a8), lVar12 != 0)) {
            uVar15 = 1;
            FUN_140ac6e0a(pfVar2 + 0x20,lVar12,1,0);
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)(int)fVar16 * 8 != lVar14);
      }
      *(undefined1 *)((longlong)pfVar2 + 0x112) = uVar15;
    }
    if (*(char *)(pfVar2 + 0x3a) == '\0') {
      if (*(char *)(pfVar2 + 0x46) == '\0') {
        if (*pfVar2 <= 0.0) {
          cVar13 = '\0';
          dVar26 = DAT_14c8464e0;
          dVar22 = DAT_14c8464e8;
          dVar18 = DAT_14c8464f0;
          dVar23 = DAT_14c8464e0;
          dVar20 = DAT_14c8464e8;
          dVar25 = DAT_14c8464f0;
        }
        else {
          if (*(char *)((longlong)pfVar2 + 0x119) == '\x01') {
            fVar16 = 2.0;
            if (2.0 <= pfVar2[1] * 0.5) {
              fVar16 = pfVar2[1] * 0.5;
            }
            dVar19 = (double)fVar16;
          }
          else {
            dVar19 = 17592186044416.0;
          }
          dVar17 = (double)*pfVar2;
          dVar18 = dVar3 + dVar19;
          dVar22 = dVar7 + dVar17;
          dVar26 = dVar6 + dVar17;
          dVar19 = dVar3 - dVar19;
          dVar21 = dVar7 - dVar17;
          dVar17 = dVar6 - dVar17;
          dVar23 = dVar26;
          if (dVar17 <= dVar26) {
            dVar23 = dVar17;
          }
          dVar20 = dVar22;
          if (dVar21 <= dVar22) {
            dVar20 = dVar21;
          }
          dVar25 = dVar18;
          if (dVar19 <= dVar18) {
            dVar25 = dVar19;
          }
          if (dVar26 <= dVar17) {
            dVar26 = dVar17;
          }
          if (dVar22 <= dVar21) {
            dVar22 = dVar21;
          }
          if (dVar18 <= dVar19) {
            dVar18 = dVar19;
          }
          cVar13 = '\x01';
        }
        fVar16 = pfVar2[4];
        if ((longlong)(int)fVar16 != 0) {
          lVar11 = *(longlong *)(pfVar2 + 2);
          lVar14 = 0;
          dVar19 = dVar22;
          dVar17 = dVar23;
          dVar21 = dVar20;
          dVar24 = dVar25;
          do {
            dVar22 = dVar19;
            dVar25 = dVar24;
            dVar20 = dVar21;
            dVar23 = dVar17;
            if (*(longlong *)(lVar11 + lVar14) != 0) {
              plVar5 = *(longlong **)(*(longlong *)(lVar11 + lVar14) + 0x3a8);
              if (plVar5 == (longlong *)0x0) {
                dVar23 = 0.0;
                local_120 = 0.0;
                uVar29 = 0;
                uVar30 = 0;
                dVar20 = 0.0;
                dVar27 = 0.0;
                dVar25 = 0.0;
              }
              else {
                (**(code **)(*plVar5 + 0x528))(plVar5,&local_118,plVar5 + 0x48);
                local_120 = local_118;
                uVar29 = (undefined4)local_f8;
                uVar30 = (undefined4)((ulonglong)local_f8 >> 0x20);
                dVar20 = local_110;
                dVar23 = local_100;
                dVar25 = local_108;
                dVar27 = local_f0;
              }
              local_128 = dVar27 + dVar25;
              dVar22 = (double)CONCAT44(uVar30,uVar29) + dVar20;
              dVar28 = dVar23 + local_120;
              dVar25 = dVar25 - dVar27;
              dVar20 = dVar20 - (double)CONCAT44(uVar30,uVar29);
              dVar23 = local_120 - dVar23;
              if (cVar13 == '\0') {
                cVar13 = '\x01';
                dVar18 = local_128;
                dVar26 = dVar28;
              }
              else {
                if (dVar23 <= dVar17) {
                  dVar17 = dVar23;
                }
                dVar23 = dVar17;
                if (dVar20 <= dVar21) {
                  dVar21 = dVar20;
                }
                dVar20 = dVar21;
                if (dVar25 <= dVar24) {
                  dVar24 = dVar25;
                }
                dVar25 = dVar24;
                if (dVar26 <= dVar28) {
                  dVar26 = dVar28;
                }
                if (dVar19 <= dVar22) {
                  dVar19 = dVar22;
                }
                dVar22 = dVar19;
                if (dVar18 <= local_128) {
                  dVar18 = local_128;
                }
              }
            }
            lVar14 = lVar14 + 8;
            dVar19 = dVar22;
            dVar17 = dVar23;
            dVar21 = dVar20;
            dVar24 = dVar25;
          } while ((longlong)(int)fVar16 * 8 != lVar14);
        }
        if ((longlong)(int)pfVar2[0x10] != 0) {
          lVar11 = *(longlong *)(pfVar2 + 0xe);
          lVar14 = (longlong)(int)pfVar2[0x10] << 3;
          do {
            lVar12 = FUN_14479d2ce(lVar11);
            if (lVar12 != 0) {
              local_128 = *(double *)(lVar12 + 0x188);
              dVar19 = *(double *)(lVar12 + 0x170) + local_128;
              dVar21 = *(double *)(lVar12 + 0x168) + *(double *)(lVar12 + 0x180);
              dVar27 = *(double *)(lVar12 + 0x160) + *(double *)(lVar12 + 0x178);
              dVar17 = *(double *)(lVar12 + 0x170) - local_128;
              dVar24 = *(double *)(lVar12 + 0x168) - *(double *)(lVar12 + 0x180);
              dVar28 = *(double *)(lVar12 + 0x160) - *(double *)(lVar12 + 0x178);
              if (cVar13 == '\0') {
                cVar13 = '\x01';
                dVar18 = dVar19;
                dVar25 = dVar17;
                dVar22 = dVar21;
                dVar20 = dVar24;
                dVar26 = dVar27;
                dVar23 = dVar28;
              }
              else {
                if (dVar28 <= dVar23) {
                  dVar23 = dVar28;
                }
                if (dVar24 <= dVar20) {
                  dVar20 = dVar24;
                }
                if (dVar17 <= dVar25) {
                  dVar25 = dVar17;
                }
                if (dVar26 <= dVar27) {
                  dVar26 = dVar27;
                }
                if (dVar22 <= dVar21) {
                  dVar22 = dVar21;
                }
                if (dVar18 <= dVar19) {
                  dVar18 = dVar19;
                }
              }
            }
            lVar11 = lVar11 + 8;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
      }
      else {
        cVar13 = '\x01';
        dVar18 = 8796093022208.0;
        dVar25 = -8796093022208.0;
        dVar20 = -8796093022208.0;
        dVar23 = -8796093022208.0;
        dVar22 = 8796093022208.0;
        dVar26 = 8796093022208.0;
      }
      *(double *)(pfVar2 + 0x2e) = dVar23;
      *(double *)(pfVar2 + 0x30) = dVar20;
      *(double *)(pfVar2 + 0x32) = dVar25;
      *(double *)(pfVar2 + 0x34) = dVar26;
      *(double *)(pfVar2 + 0x36) = dVar22;
      *(double *)(pfVar2 + 0x38) = dVar18;
      *(char *)(pfVar2 + 0x3a) = cVar13;
    }
    *(double *)(pfVar2 + 0x3c) = dVar6;
    *(double *)(pfVar2 + 0x3e) = dVar7;
    *(double *)(pfVar2 + 0x40) = dVar3;
    pfVar2[0x42] = *pfVar2;
    if (*(char *)((longlong)pfVar2 + 0x119) == '\x01') {
      fVar16 = pfVar2[1] * 0.5;
    }
    else {
      fVar16 = 3.4028235e+38;
    }
    pfVar2[0x43] = fVar16;
    *(undefined1 *)(pfVar2 + 0x44) = *(undefined1 *)(pfVar2 + 0x46);
  }
LAB_14040c85a:
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pfVar2 + 0x12;
}



// FUNCTION 14040ce72 FUN_14040ce72 body=91 status=ok
// SIG undefined FUN_14040ce72(void)

void FUN_14040ce72(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_144724f11(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14040d5ee(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_14480809c(param_1 + 0x18,0);
  return;
}



// FUNCTION 14040cece FUN_14040cece body=237 status=ok
// SIG undefined FUN_14040cece(void)

undefined8 * FUN_14040cece(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x28);
    FUN_1446dcdd4(local_50);
    lVar1 = FUN_1448fdc6e(local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x38) = lVar1;
    if (lVar1 == 0) {
      *param_2 = 0;
      goto LAB_14040cf25;
    }
  }
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(lVar1 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
LAB_14040cf25:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14040cfbc FUN_14040cfbc body=465 status=ok
// SIG undefined FUN_14040cfbc(void)

int * FUN_14040cfbc(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x38);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14040d18e FUN_14040d18e body=771 status=ok
// SIG undefined FUN_14040d18e(void)

undefined8 FUN_14040d18e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  char local_d0 [16];
  longlong *local_c0;
  int local_a8;
  char local_a0;
  undefined8 local_98;
  longlong *local_90;
  int local_78;
  undefined1 local_70 [24];
  longlong local_58;
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0[0] = '\0';
  local_a8 = 0;
  FUN_1456bb102(local_d0,param_3);
  local_a0 = '\0';
  local_78 = 0;
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    local_d8 = *(undefined8 *)(param_1 + 0x28);
    FUN_1446dcdd4(local_70);
    lVar4 = FUN_1448fdc6e(local_70);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  FUN_1400606f6(local_70,lVar4,local_d0);
  puVar3 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar3 = local_70;
  }
  puVar10 = &DAT_14c9a40e0;
  if (0 < local_38) {
    puVar10 = puVar3;
  }
  FUN_1400603ec(param_2,lVar4,puVar10);
  puVar3 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar3 = local_70;
  }
  FUN_1446fdf58(puVar3,local_38);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_78 != 0) {
    lVar9 = (longlong)local_78 + -1;
    lVar7 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7))
    ;
    if (*(longlong *)(lVar4 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar7) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar7) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    bVar2 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_78 = 0;
  }
  if (local_a0 != '\0') {
    if (local_a0 == '\x01') {
      local_98 = 0;
    }
    else if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    local_a0 = '\0';
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_a8 != 0) {
    lVar9 = (longlong)local_a8 + -1;
    lVar7 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7))
    ;
    if (*(longlong *)(lVar4 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar7) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar7) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    bVar2 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_a8 = 0;
  }
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14040d492 FUN_14040d492 body=232 status=ok
// SIG undefined FUN_14040d492(void)

undefined8 FUN_14040d492(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14040d57b();
  FUN_1401cfad2(uVar2,&local_28,*(undefined1 *)(param_1 + 0x28));
  uVar2 = FUN_14040d5b4();
  FUN_1401cfad2(uVar2,&local_38,*(undefined1 *)(param_1 + 0x29));
  puVar4 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FUN_140002266(&local_48,L"Territory_%s_%s",puVar3,puVar4);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_2,iVar1,local_48,1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14040d57b FUN_14040d57b body=57 status=ok
// SIG undefined FUN_14040d57b(void)

void FUN_14040d57b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22430 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22430 = FUN_14171c317(FUN_146437468,uVar1,L"EGbxTerritoryArea");
  }
  return;
}



// FUNCTION 14040d5b4 FUN_14040d5b4 body=57 status=ok
// SIG undefined FUN_14040d5b4(void)

void FUN_14040d5b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb224d0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb224d0 = FUN_14171c317(FUN_146438bae,uVar1,L"EGpsContextTerritoryValue");
  }
  return;
}



// FUNCTION 14040d5ee FUN_14040d5ee body=116 status=ok
// SIG undefined FUN_14040d5ee(void)

void FUN_14040d5ee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 200)) {
      uVar2 = uVar1 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,200,8);
  }
  return;
}



// FUNCTION 14040d662 FUN_14040d662 body=436 status=ok
// SIG undefined FUN_14040d662(void)

undefined8 FUN_14040d662(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  plVar9 = (longlong *)FUN_14040d818();
  if ((plVar9 != (longlong *)0x0) && ((longlong)(int)plVar9[1] != 0)) {
    plVar13 = (longlong *)*plVar9;
    plVar9 = plVar13 + (longlong)(int)plVar9[1] * 0x14;
    do {
      plVar3 = (longlong *)plVar13[1];
      if (plVar3 != (longlong *)0x0) {
        iVar8 = (int)plVar3[1];
        do {
          if (iVar8 == 0) goto LAB_14040d785;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar15 = iVar8 == iVar6;
          if (bVar15) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar15);
        lVar4 = *plVar13;
        if (lVar4 == 0) {
          bVar15 = false;
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          plVar14 = plVar13 + 2;
          if ((longlong *)plVar13[0x12] != (longlong *)0x0) {
            plVar14 = (longlong *)plVar13[0x12];
          }
          if ((longlong)(int)plVar13[0x13] != 0) {
            lVar11 = (longlong)(int)plVar13[0x13] << 5;
            do {
              iVar8 = (int)plVar14[3];
              if (((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar4 + 0xb0))) &&
                 (lVar12 = (longlong)iVar8 * 0x78 + *(longlong *)(lVar4 + 0xa8), lVar12 != 0)) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
                local_58 = lVar4;
                local_50 = plVar3;
                cVar7 = (*(code *)*local_60)(local_60[1],&local_58,lVar12,plVar14);
                plVar5 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_50 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_50)(local_50);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
                bVar15 = true;
                if (cVar7 != '\0') goto LAB_14040d772;
              }
              plVar14 = plVar14 + 4;
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != 0);
          }
          bVar15 = false;
LAB_14040d772:
          LOCK();
          plVar14 = plVar3 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        LOCK();
        plVar14 = plVar3 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        uVar10 = 1;
        if (bVar15) goto LAB_14040d797;
      }
LAB_14040d785:
      plVar13 = plVar13 + 0x14;
    } while (plVar13 != plVar9);
  }
  uVar10 = 0;
LAB_14040d797:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14040d818 FUN_14040d818 body=199 status=ok
// SIG undefined FUN_14040d818(void)

undefined8 FUN_14040d818(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14040d984(&local_30);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 == 0) {
        uVar5 = 0;
      }
      else {
        FUN_14040dabc(local_30,param_1);
        uVar5 = FUN_14040d8e0(local_30,param_1);
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
      goto LAB_14040d891;
    }
  }
  uVar5 = 0;
LAB_14040d891:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14040d8e0 FUN_14040d8e0 body=163 status=ok
// SIG undefined FUN_14040d8e0(void)

longlong FUN_14040d8e0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x110);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xd0) + (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar4 * 0x20) == param_2)
        goto LAB_14040d969;
        iVar4 = *(int *)(lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar2 = 0;
LAB_14040d969:
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14040d984 FUN_14040d984 body=310 status=ok
// SIG undefined FUN_14040d984(void)

longlong * FUN_14040d984(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cbc3ec8;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
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
      }
    }
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
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14040dabc FUN_14040dabc body=1005 status=ok
// SIG undefined FUN_14040dabc(void)

void FUN_14040dabc(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  ulonglong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar12 = (longlong *)(param_1 + 0xd0);
  local_50 = param_2;
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar11 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x110);
    }
    iVar8 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uVar3 >> 0x10 ^ uVar3))
                              * 4);
    if (iVar8 != -1) {
      do {
        if (*(ulonglong *)(*plVar12 + (longlong)iVar8 * 0x20) == param_2) goto LAB_14040de18;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + *plVar12 + 0x18);
      } while (iVar8 != -1);
    }
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    local_68 = &local_50;
    FUN_14570d9be(plVar12,&local_90);
    if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
      uVar3 = ((uint)(local_50 >> 0x14) & 0xffff ^ (uint)(local_50 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      lVar11 = param_1 + 0x108;
      if (*(longlong *)(param_1 + 0x110) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x110);
      }
      iVar8 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(param_1 + 0x118) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar12 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*plVar12 + (longlong)iVar8 * 0x20) == local_50) {
            if ((lVar11 != 0) && (lVar10 = lVar11 + 8, lVar10 != 0)) {
              local_58 = *(undefined8 *)(local_50 + 0x40);
              local_68 = *(ulonglong **)(local_50 + 0x30);
              uStack_60 = *(undefined4 *)(local_50 + 0x38);
              uStack_5c = *(undefined4 *)(local_50 + 0x3c);
              iVar8 = *(int *)(local_50 + 0x58);
              if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar8);
              }
              if (*(int *)(lVar11 + 0x14) < iVar8) {
                FUN_14570d94e(lVar10);
                iVar8 = *(int *)(local_50 + 0x58);
              }
              if (iVar8 != 0) {
                lVar11 = *(longlong *)(local_50 + 0x50);
                lVar9 = (longlong)iVar8 * 0x30 + lVar11;
                goto LAB_14040dc7b;
              }
            }
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x18);
        } while (iVar8 != -1);
      }
    }
  }
  goto LAB_14040de18;
LAB_14040dc7b:
  do {
    lVar4 = FUN_14040deec(lVar11);
    if (lVar4 != 0) {
      local_78 = 0;
      plVar12 = *(longlong **)(lVar4 + 0x80);
      local_70 = plVar12;
      if (plVar12 == (longlong *)0x0) {
LAB_14040de55:
        plVar12 = (longlong *)0x0;
      }
      else {
        iVar8 = (int)plVar12[1];
        do {
          if (iVar8 == 0) {
            local_70 = (longlong *)0x0;
            goto LAB_14040de55;
          }
          LOCK();
          iVar2 = (int)plVar12[1];
          bVar13 = iVar8 == iVar2;
          if (bVar13) {
            *(int *)(plVar12 + 1) = iVar8 + 1;
            iVar2 = iVar8;
          }
          iVar8 = iVar2;
          UNLOCK();
        } while (!bVar13);
        if (plVar12 == (longlong *)0x0) goto LAB_14040de55;
        local_78 = *(longlong *)(lVar4 + 0x78);
      }
      lVar4 = local_78;
      if ((local_78 != 0) && (lVar5 = FUN_14040deaa(lVar11), lVar5 != 0)) {
        iVar8 = *(int *)(lVar5 + 0x20);
        if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar4 + 0x90))) {
          plVar6 = (longlong *)FUN_14040edfe(lVar10);
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)FUN_14570d8ea(lVar10);
            *plVar6 = lVar4;
            plVar7 = (longlong *)plVar6[1];
            if (plVar7 != plVar12) {
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
                UNLOCK();
                plVar7 = (longlong *)plVar6[1];
              }
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))();
                }
              }
              plVar6[1] = (longlong)plVar12;
            }
          }
          plVar12 = plVar6 + 2;
          plVar7 = (longlong *)plVar6[0x12];
          if ((longlong *)plVar6[0x12] == (longlong *)0x0) {
            plVar7 = plVar12;
          }
          if ((longlong)(int)plVar6[0x13] != 0) {
            lVar4 = 0;
            do {
              if (*(int *)((longlong)plVar7 + lVar4 + 0x18) == iVar8) goto LAB_14040ddf9;
              lVar4 = lVar4 + 0x20;
            } while ((longlong)(int)plVar6[0x13] * 0x20 != lVar4);
          }
          FUN_14040dfde((longlong)iVar8 * 0x78 + *(longlong *)(local_78 + 0xa8),&local_90,&local_68,
                        0);
          iVar2 = (int)plVar6[0x13];
          lVar4 = (longlong)iVar2;
          *(uint *)(plVar6 + 0x13) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar6 + 0x9c) < iVar2 + 1U) {
            FUN_14570de96(plVar12,iVar2);
          }
          if ((longlong *)plVar6[0x12] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar6[0x12];
          }
          plVar12[lVar4 * 4 + 2] = local_80;
          plVar6 = plVar12 + lVar4 * 4;
          *(undefined4 *)plVar6 = local_90;
          *(undefined4 *)((longlong)plVar6 + 4) = uStack_8c;
          *(undefined4 *)(plVar6 + 1) = uStack_88;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uStack_84;
          *(int *)(plVar12 + lVar4 * 4 + 3) = iVar8;
        }
      }
LAB_14040ddf9:
      plVar12 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    lVar11 = lVar11 + 0x30;
  } while (lVar11 != lVar9);
LAB_14040de18:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14040deaa FUN_14040deaa body=65 status=ok
// SIG undefined FUN_14040deaa(void)

longlong FUN_14040deaa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_14040deec();
  if ((lVar2 != 0) && (cVar1 = FUN_14040df6e(lVar2,param_1 + 0x18), cVar1 != '\0')) {
    return (longlong)*(int *)(param_1 + 0x20) * 0x24 + *(longlong *)(lVar2 + 0x28);
  }
  return 0;
}



// FUNCTION 14040deec FUN_14040deec body=130 status=ok
// SIG undefined FUN_14040deec(void)

void FUN_14040deec(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_1402796c0();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 14040df6e FUN_14040df6e body=112 status=ok
// SIG undefined FUN_14040df6e(void)

undefined8 FUN_14040df6e(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x30) <= iVar1)) {
    lVar5 = *param_2;
  }
  else {
    lVar5 = *param_2;
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x24) == lVar5) {
      return CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
    }
  }
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      uVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4) == lVar5) {
          uVar2 = (ulonglong)(uint)((int)(uVar4 >> 2) * 0x38e38e39);
          break;
        }
        uVar4 = uVar4 + 0x24;
      } while ((longlong)*(int *)(param_1 + 0x30) * 0x24 != uVar4);
    }
    *(int *)(param_2 + 1) = (int)uVar2;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(int)uVar2 != -1);
  }
  return uVar3;
}



// FUNCTION 14040dfde FUN_14040dfde body=130 status=ok
// SIG undefined FUN_14040dfde(void)

undefined8 FUN_14040dfde(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x7f7fffff;
  uVar1 = FUN_14040e062(param_1 + 0x30,param_3,&local_30,local_2c);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  FUN_140703ce0(param_1 + 0x30,param_2,uVar1,*(undefined8 *)(param_1 + 0x58));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14040e062 FUN_14040e062 body=344 status=ok
// SIG undefined FUN_14040e062(void)

undefined8 FUN_14040e062(longlong *param_1,double *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = (int)param_1[1];
  if (iVar3 < 2) {
    if (iVar3 == 1) {
      lVar1 = *param_1;
      dVar5 = param_2[2] - *(double *)(lVar1 + 0x18);
      dVar7 = param_2[1] - *(double *)(lVar1 + 0x10);
      dVar6 = *param_2 - *(double *)(lVar1 + 8);
      *param_3 = (float)(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
      *param_4 = 0.0;
      uVar8 = *(undefined4 *)*param_1;
      uVar9 = 0;
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
    }
  }
  else {
    iVar3 = iVar3 - (*(byte *)(param_1 + 2) ^ 1);
    uVar4 = FUN_14040e1bc(param_1,param_2,0,&local_64);
    uVar8 = (undefined4)uVar4;
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar10 = 0.0;
    if (1 < iVar3) {
      iVar2 = 1;
      do {
        uVar4 = FUN_14040e1bc(param_1,param_2,iVar2,&local_68);
        if (local_68 < local_64) {
          fVar10 = (float)iVar2;
          local_64 = local_68;
          uVar8 = (undefined4)uVar4;
          uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
        }
        iVar2 = iVar2 + 1;
      } while (iVar3 != iVar2);
    }
    *param_3 = local_64;
    *param_4 = fVar10;
  }
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar9,uVar8);
}



// FUNCTION 14040e1bc FUN_14040e1bc body=1514 status=ok
// SIG undefined FUN_14040e1bc(void)

void FUN_14040e1bc(longlong *param_1,double *param_2,int param_3,float *param_4)

{
  char cVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 local_218 [32];
  undefined1 **local_1f8;
  undefined4 local_1f0;
  float *local_1e0;
  longlong *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined4 **local_1b8;
  undefined1 *local_1b0;
  undefined4 **local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  longlong *local_190;
  int *local_188;
  int *local_180;
  double *local_178;
  float *local_170;
  undefined8 local_168;
  undefined1 local_159;
  undefined4 *local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  int *local_140;
  undefined8 *local_138;
  undefined4 local_130;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  int local_110;
  int local_10c;
  float local_108 [4];
  float local_f8 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)local_218;
  bVar9 = (int)param_1[1] + -1 == param_3 & *(byte *)(param_1 + 2);
  local_110 = 0;
  if (bVar9 == 0) {
    local_110 = param_3 + 1;
  }
  lVar8 = *param_1;
  if (bVar9 == 1) {
    fVar11 = *(float *)(lVar8 + (longlong)param_3 * 0x58) + *(float *)((longlong)param_1 + 0x14);
  }
  else {
    fVar11 = *(float *)(lVar8 + (longlong)(param_3 + 1) * 0x58);
  }
  lVar5 = (longlong)param_3 * 0x58;
  pfVar6 = (float *)(lVar8 + lVar5);
  cVar1 = *(char *)(lVar8 + 0x50 + lVar5);
  local_1e0 = param_4;
  local_10c = param_3;
  if (cVar1 == '\x02') {
    dVar13 = *(double *)(pfVar6 + 6) - param_2[2];
    dVar16 = *(double *)(pfVar6 + 4) - param_2[1];
    dVar18 = *(double *)(pfVar6 + 2) - *param_2;
    fVar12 = (float)(dVar13 * dVar13 + dVar18 * dVar18 + dVar16 * dVar16);
    lVar7 = (longlong)local_110 * 0x58;
    dVar18 = *(double *)(lVar8 + 0x18 + lVar7) - param_2[2];
    dVar16 = *(double *)(lVar8 + 0x10 + lVar7) - param_2[1];
    dVar13 = *(double *)(lVar8 + 8 + lVar7) - *param_2;
    fVar15 = (float)(dVar18 * dVar18 + dVar13 * dVar13 + dVar16 * dVar16);
    if (fVar15 <= fVar12) {
      *param_4 = fVar15;
    }
    else {
      *param_4 = fVar12;
      fVar11 = *(float *)(*param_1 + lVar5);
    }
  }
  else {
    local_114 = fVar11 - *pfVar6;
    if (cVar1 == '\0') {
      dVar13 = *(double *)(pfVar6 + 6);
      dVar18 = *(double *)(pfVar6 + 2);
      dVar16 = *(double *)(pfVar6 + 4);
      lVar7 = (longlong)local_110 * 0x58;
      dVar14 = *(double *)(lVar8 + 0x18 + lVar7) - dVar13;
      dVar2 = *(double *)(lVar8 + 0x10 + lVar7) - dVar16;
      dVar17 = *(double *)(lVar8 + 8 + lVar7) - dVar18;
      fVar11 = -(float)((dVar13 - param_2[2]) * dVar14 +
                       (dVar18 - *param_2) * dVar17 + (dVar16 - param_2[1]) * dVar2) /
               (float)(dVar14 * dVar14 + dVar17 * dVar17 + dVar2 * dVar2);
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      dVar3 = (double)fVar11;
      dVar14 = (dVar14 * dVar3 + dVar13) - param_2[2];
      dVar13 = (dVar2 * dVar3 + dVar16) - param_2[1];
      dVar18 = (dVar17 * dVar3 + dVar18) - *param_2;
      *param_4 = (float)(dVar14 * dVar14 + dVar18 * dVar18 + dVar13 * dVar13);
      fVar11 = fVar11 * local_114 + *(float *)(*param_1 + lVar5);
    }
    else {
      local_138 = &local_d8;
      local_d8 = 0x3eaaaaab00000000;
      uStack_d0 = 0x3f8000003f2aaaab;
      pfVar6 = local_f8 + 4;
      local_f8[4] = 0.0;
      local_f8[5] = 0.33333334;
      local_f8[6] = 0.6666667;
      local_f8[7] = 1.0;
      pfVar10 = local_f8;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      local_f8[2] = 0.0;
      local_f8[3] = 0.0;
      local_158 = &local_118;
      local_150 = &local_11c;
      local_148 = &local_120;
      local_140 = &local_124;
      local_124 = 1;
      local_130 = 4;
      local_188 = &local_10c;
      local_180 = &local_110;
      local_170 = &local_114;
      local_168 = 0x3eaaaaab00000014;
      lVar8 = 0;
      local_1d8 = param_1;
      local_190 = param_1;
      local_178 = param_2;
      do {
        local_118 = 0x7f7fc99e;
        local_11c = *(undefined4 *)
                     ((longlong)&local_d8 + (ulonglong)((int)lVar8 - (uint)(lVar8 != 0)) * 4);
        iVar4 = local_124;
        if (3 < local_124) {
          iVar4 = (int)lVar8;
        }
        local_120 = *(undefined4 *)((longlong)&local_d8 + (longlong)iVar4 * 4);
        local_1a0 = &LAB_14040ed76;
        local_1b0 = &LAB_14040ed7a;
        local_1f8 = &local_1a0;
        local_1f0 = 0x3c23d70a;
        local_1a8 = &local_158;
        local_198 = &local_159;
        fVar11 = (float)FUN_14040e7a8(&local_190,pfVar6,pfVar10,&local_1b0);
        local_108[lVar8] = fVar11;
        local_118 = 0x7f7fc99e;
        lVar8 = lVar8 + 1;
        pfVar10 = pfVar10 + 1;
        pfVar6 = pfVar6 + 1;
      } while (lVar8 != 4);
      pfVar6 = (float *)0x0;
      lVar8 = 0;
      do {
        pfVar10 = (float *)((longlong)local_108 + lVar8);
        if ((pfVar6 == (float *)0x0) || (*pfVar10 <= *pfVar6 && *pfVar6 != *pfVar10)) {
          pfVar6 = pfVar10;
        }
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x10);
      lVar8 = (longlong)(int)((ulonglong)((longlong)pfVar6 - (longlong)local_108) >> 2);
      if (ABS(local_f8[lVar8]) <= 1e-06) {
        fVar11 = local_108[lVar8];
      }
      else {
        local_11c = 0;
        local_120 = 0x3f800000;
        local_1f8 = &local_1c0;
        local_1c0 = &LAB_14040ed7a;
        local_1d0 = &LAB_14040ed76;
        local_1f0 = 0x3727c5ac;
        local_1c8 = &local_159;
        local_1b8 = &local_158;
        fVar11 = (float)FUN_14040e7a8(&local_190,local_f8 + lVar8 + 4,local_f8 + lVar8);
        local_108[lVar8] = fVar11;
      }
      *local_1e0 = fVar11;
      fVar11 = local_f8[lVar8 + 4] * local_114 + *(float *)(*local_1d8 + (longlong)local_10c * 0x58)
      ;
    }
  }
  if ((local_c0 ^ (ulonglong)local_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar11);
}



// FUNCTION 14040e7a8 FUN_14040e7a8 body=1485 status=ok
// SIG undefined FUN_14040e7a8(void)

void FUN_14040e7a8(undefined8 *param_1,float *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  undefined4 local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar1 = (double *)
           (*(longlong *)*param_1 + 8 +
           (longlong)*(int *)param_1[(ulonglong)(0.5 < *param_2) + 1] * 0x58);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar17 = *(double *)
            (*(longlong *)*param_1 + 0x18 +
            (longlong)*(int *)param_1[(ulonglong)(0.5 < *param_2) + 1] * 0x58);
  fVar13 = *param_2 + *param_3;
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  *param_2 = fVar13;
  local_e4 = param_6;
  cVar9 = (*(code *)*param_4)(param_4[1]);
  if (cVar9 == '\0') {
    iVar12 = 0x14;
    do {
      lVar4 = *(longlong *)*param_1;
      dVar17 = (double)*(float *)param_1[4];
      lVar10 = (longlong)*(int *)param_1[2] * 0x58;
      lVar11 = (longlong)*(int *)param_1[1] * 0x58;
      fVar13 = *param_2;
      fVar26 = fVar13 * fVar13;
      fVar19 = fVar13 * fVar26;
      fVar20 = fVar19 - fVar26;
      fVar27 = ((fVar19 + fVar19) - fVar26 * 3.0) + 1.0;
      fVar13 = (fVar19 - (fVar26 + fVar26)) + fVar13;
      fVar19 = fVar26 * 3.0 - (fVar19 + fVar19);
      pdVar1 = (double *)(lVar4 + 8 + lVar11);
      pdVar2 = (double *)(lVar4 + 8 + lVar10);
      dVar7 = (double)fVar19 * *pdVar2 +
              (double)fVar20 * *(double *)(lVar4 + 0x20 + lVar10) * dVar17 +
              (double)fVar13 * dVar17 * *(double *)(lVar4 + 0x38 + lVar11) +
              (double)fVar27 * *pdVar1;
      dVar8 = (double)fVar19 * pdVar2[1] +
              (double)fVar20 * *(double *)(lVar4 + 0x28 + lVar10) * dVar17 +
              (double)fVar13 * *(double *)(lVar4 + 0x40 + lVar11) * dVar17 +
              (double)fVar27 * pdVar1[1];
      dVar17 = (double)fVar20 * *(double *)(lVar4 + 0x30 + lVar10) * dVar17 +
               (double)fVar19 * *(double *)(lVar4 + 0x18 + lVar10) +
               (double)fVar27 * *(double *)(lVar4 + 0x18 + lVar11) +
               (double)fVar13 * *(double *)(lVar4 + 0x48 + lVar11) * dVar17;
      local_e4 = param_6;
      cVar9 = (*(code *)*param_5)(param_5[1],param_2,&local_e4);
      if (cVar9 != '\0') break;
      lVar4 = *(longlong *)*param_1;
      lVar10 = (longlong)*(int *)param_1[2] * 0x58;
      dVar16 = (double)*(float *)param_1[4];
      dVar5 = *(double *)(lVar4 + 0x30 + lVar10) * dVar16;
      dVar6 = *(double *)(lVar4 + 0x28 + lVar10) * dVar16;
      dVar14 = *(double *)(lVar4 + 0x20 + lVar10) * dVar16;
      lVar11 = (longlong)*(int *)param_1[1] * 0x58;
      local_f0 = *(double *)(lVar4 + 0x48 + lVar11) * dVar16;
      local_f8 = *(double *)(lVar4 + 0x40 + lVar11) * dVar16;
      dVar16 = dVar16 * *(double *)(lVar4 + 0x38 + lVar11);
      dVar15 = *(double *)(lVar4 + 0x18 + lVar11);
      dVar3 = *(double *)(lVar4 + 8 + lVar11);
      dVar18 = *(double *)(lVar4 + 0x10 + lVar11);
      dVar21 = *(double *)(lVar4 + 0x18 + lVar10) * 6.0;
      dVar24 = *(double *)(lVar4 + 0x10 + lVar10) * 6.0;
      dVar22 = *(double *)(lVar4 + 8 + lVar10) * 6.0;
      fVar13 = *param_2;
      dVar25 = (double)(fVar13 * fVar13);
      dVar23 = (double)fVar13;
      dVar15 = (((dVar15 * -6.0 - local_f0 * 4.0) - (dVar5 + dVar5)) + dVar21) * dVar23 +
               ((dVar5 * 3.0 + local_f0 * 3.0 + dVar15 * 6.0) - dVar21) * dVar25 + local_f0;
      dVar18 = (((dVar18 * -6.0 - local_f8 * 4.0) - (dVar6 + dVar6)) + dVar24) * dVar23 +
               ((dVar6 * 3.0 + local_f8 * 3.0 + dVar18 * 6.0) - dVar24) * dVar25 + local_f8;
      dVar16 = (((dVar3 * -6.0 - dVar16 * 4.0) - (dVar14 + dVar14)) + dVar22) * dVar23 +
               ((dVar14 * 3.0 + dVar16 * 3.0 + dVar3 * 6.0) - dVar22) * dVar25 + dVar16;
      pdVar1 = (double *)param_1[3];
      fVar13 = (float)(((pdVar1[2] - dVar17) * dVar15 +
                       (*pdVar1 - dVar7) * dVar16 + (pdVar1[1] - dVar8) * dVar18) /
                      (dVar15 * dVar15 + dVar16 * dVar16 + dVar18 * dVar18));
      *param_3 = fVar13;
      iVar12 = iVar12 + -1;
      if (iVar12 == 0) break;
      fVar13 = fVar13 + *param_2;
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      *param_2 = fVar13;
      local_e4 = param_6;
      cVar9 = (*(code *)*param_4)(param_4[1],param_2,&local_e4);
    } while (cVar9 == '\0');
  }
  pdVar1 = (double *)param_1[3];
  if ((local_e0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)((dVar17 - pdVar1[2]) * (dVar17 - pdVar1[2]) +
                       (dVar7 - *pdVar1) * (dVar7 - *pdVar1) +
                       (dVar8 - pdVar1[1]) * (dVar8 - pdVar1[1])));
}



// FUNCTION 14040edfe FUN_14040edfe body=282 status=ok
// SIG undefined FUN_14040edfe(void)

longlong * FUN_14040edfe(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar9 = (longlong *)*param_1;
    plVar10 = plVar9 + (longlong)(int)param_1[1] * 0x14;
    do {
      lVar8 = *param_2;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)plVar9[1];
      if (plVar6 == (longlong *)0x0) {
LAB_14040eeb7:
        plVar6 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_14040eeb7;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar11 = iVar5 == iVar4;
          if (bVar11) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar11);
      }
      lVar7 = *plVar9;
      bVar11 = true;
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_14040ee7d;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar12 = iVar5 == iVar4;
          if (bVar12) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar12);
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
          bVar11 = false;
        }
        else {
          bVar11 = false;
        }
      }
LAB_14040ee7d:
      if (plVar6 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
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
      if (bVar11) {
        lVar8 = 0;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      if (lVar7 == lVar8) {
        return plVar9;
      }
      plVar9 = plVar9 + 0x14;
    } while (plVar9 != plVar10);
  }
  return (longlong *)0x0;
}



// FUNCTION 14040ef18 FUN_14040ef18 body=40 status=ok
// SIG undefined FUN_14040ef18(void)

undefined8 FUN_14040ef18(undefined8 param_1,int param_2)

{
  FUN_14040ef40();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14040ef40 FUN_14040ef40 body=766 status=ok
// SIG undefined FUN_14040ef40(void)

void FUN_14040ef40(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
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
  *param_1 = &PTR_FUN_14a7c5450;
  param_1[5] = &PTR_FUN_14a7c5840;
  param_1[6] = &PTR_FUN_14a7c5880;
  param_1[7] = &PTR_FUN_14a7c58b0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x35;
  puVar3 = param_1 + 0x37;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar3;
  if (*(int *)(param_1 + 0x3a) != 0) {
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
      lVar2 = *local_78 + (longlong)iStack_5c * 0xf8;
      FUN_1478772b8(lVar2 + 0x40);
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (*(int *)((longlong)param_1 + 0x1b4) != 0) {
    FUN_14579fe3a(plVar1,0);
  }
  param_1[0x3b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1d4)) {
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x25];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d52ba(param_1 + 0x1f);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14040f240(param_1);
  return;
}



// FUNCTION 14040f240 FUN_14040f240 body=136 status=ok
// SIG undefined FUN_14040f240(void)

void FUN_14040f240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5bcf40;
  param_1[5] = &PTR_FUN_14a5bd330;
  param_1[6] = &PTR_FUN_14a5bd370;
  param_1[7] = &PTR_FUN_14a5bd3a0;
  FUN_14040f326(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14499183d(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14040f2c8(param_1);
  return;
}



// FUNCTION 14040f2c8 FUN_14040f2c8 body=94 status=ok
// SIG undefined FUN_14040f2c8(void)

void FUN_14040f2c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7942e0;
  param_1[5] = &PTR_FUN_14a7945b0;
  param_1[6] = &PTR_FUN_14a7945f0;
  param_1[7] = &PTR_FUN_14a794620;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14040f326 FUN_14040f326 body=89 status=ok
// SIG undefined FUN_14040f326(void)

void FUN_14040f326(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14040f37f FUN_14040f37f body=310 status=ok
// SIG undefined FUN_14040f37f(void)

ulonglong FUN_14040f37f(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  code *pcVar6;
  
  pcVar6 = *(code **)(*param_3 + 0x270);
  plVar7 = param_3;
  if (pcVar6 == (code *)&LAB_1447f82f4) {
    plVar7 = (longlong *)param_3[9];
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)param_3[8];
      pcVar6 = *(code **)(*plVar7 + 0x408);
      if (pcVar6 == (code *)&LAB_14470b702) {
        bVar2 = *(byte *)((longlong)plVar7 + 0x129);
        if (bVar2 == 1) {
          bVar2 = ~*(byte *)((longlong)plVar7 + 0x1d6) & 1;
        }
        uVar4 = (uint)bVar2;
        goto LAB_14040f3d6;
      }
    }
    else {
      pcVar6 = *(code **)(*plVar7 + 0x408);
      if (pcVar6 == (code *)&LAB_14497e176) {
        uVar4 = (uint)*(byte *)(plVar7 + 0x2b);
        goto LAB_14040f3d6;
      }
    }
  }
  uVar4 = (*pcVar6)(plVar7);
LAB_14040f3d6:
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if ((((1 < uVar4) && (iVar3 = (**(code **)(*param_3 + 0x30))(param_3), iVar3 == 0)) &&
      ((2 < DAT_14c761ae8 - 1U ||
       (((*(byte *)(param_2 + 0x78) & 0x40) == 0 ||
        (cVar1 = (**(code **)(*param_3 + 0x50))(param_3), cVar1 == '\0')))))) &&
     ((lVar5 = (**(code **)(**(longlong **)(param_2 + 0x210) + 0x3e0))(), lVar5 == 0 ||
      ((cVar1 = FUN_14040f525(lVar5,param_1,param_2,param_3), cVar1 == '\0' &&
       (cVar1 = FUN_14040f4b5(lVar5,param_1,param_2,param_3), cVar1 == '\0')))))) {
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14040f4b5 FUN_14040f4b5 body=112 status=ok
// SIG undefined FUN_14040f4b5(void)

uint FUN_14040f4b5(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = FUN_140444219(**(undefined8 **)(param_2 + 8),0,0,1,0);
  if ((((cVar1 != '\0') && ((*(byte *)(param_3 + 0x6e) & 8) != 0)) &&
      (iVar2 = (**(code **)(*param_4 + 0x30))(param_4), iVar2 != 3)) &&
     (cVar1 = (**(code **)(*param_4 + 0x60))(param_4), cVar1 != '\0')) {
    uVar3 = (**(code **)(*param_4 + 0x318))(param_4);
    return uVar3 ^ 1;
  }
  return 0;
}



// FUNCTION 14040f525 FUN_14040f525 body=230 status=ok
// SIG undefined FUN_14040f525(void)

bool FUN_14040f525(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar8;
  bool bVar9;
  code *pcVar7;
  
  cVar2 = FUN_1449a7bda(param_1,**(undefined8 **)(param_2 + 8),0,0);
  if (cVar2 == '\0') {
    return false;
  }
  bVar1 = *(byte *)(param_3 + 0x6e);
  pcVar7 = *(code **)(*param_4 + 0x270);
  plVar8 = param_4;
  if (pcVar7 == (code *)&LAB_1447f82f4) {
    plVar8 = (longlong *)param_4[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_4[8];
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 == (code *)&LAB_14470b702) {
        bVar3 = *(byte *)((longlong)plVar8 + 0x129);
        if (bVar3 == 1) {
          bVar3 = ~*(byte *)((longlong)plVar8 + 0x1d6) & 1;
        }
        uVar6 = (uint)bVar3;
        goto LAB_14040f58f;
      }
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x408);
      if (pcVar7 == (code *)&LAB_14497e176) {
        uVar6 = (uint)*(byte *)(plVar8 + 0x2b);
        goto LAB_14040f58f;
      }
    }
  }
  uVar6 = (*pcVar7)(plVar8);
LAB_14040f58f:
  uVar4 = (**(code **)(*param_4 + 0x298))(param_4);
  bVar9 = false;
  if ((((bVar1 & 8) != 0) && (1 < uVar6)) && (bVar9 = false, (uVar4 & 0xfffffffe) == 4)) {
    iVar5 = (**(code **)(*param_4 + 0x30))(param_4);
    bVar9 = iVar5 != 3;
  }
  return bVar9;
}



// FUNCTION 14040f60c FUN_14040f60c body=193 status=ok
// SIG undefined FUN_14040f60c(void)

longlong FUN_14040f60c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 == 0) || (lVar4 = (longlong)*(int *)(lVar1 + 0x50), lVar4 == 0)) {
    lVar2 = 0;
  }
  else if (*(char *)(lVar1 + 0x40) == '\0') {
    lVar2 = *(longlong *)(lVar1 + 0x48);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
        *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
      lVar4 = lVar4 * 0x368;
      lVar2 = 0;
      do {
        if ((((*(int *)(lVar3 + 8) == *(int *)(lVar1 + 0x30)) &&
             (*(int *)(lVar3 + 0xc) == *(int *)(lVar1 + 0x34))) &&
            (*(int *)(lVar3 + 0x10) == *(int *)(lVar1 + 0x38))) &&
           (*(int *)(lVar3 + 0x14) == *(int *)(lVar1 + 0x3c))) {
          return lVar3;
        }
        lVar3 = lVar3 + 0x368;
        lVar4 = lVar4 + -0x368;
      } while (lVar4 != 0);
    }
    else {
      lVar4 = lVar4 * 0x368;
      lVar2 = 0;
      do {
        if (((*(int *)(lVar3 + 8) == *(int *)(param_1 + 0x30)) &&
            (*(int *)(lVar3 + 0xc) == *(int *)(param_1 + 0x34))) &&
           ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x38) &&
            (*(int *)(lVar3 + 0x14) == *(int *)(param_1 + 0x3c))))) {
          return lVar3;
        }
        lVar3 = lVar3 + 0x368;
        lVar4 = lVar4 + -0x368;
      } while (lVar4 != 0);
    }
  }
  return lVar2;
}



// FUNCTION 14040f6ce FUN_14040f6ce body=909 status=ok
// SIG undefined FUN_14040f6ce(void)

ulonglong FUN_14040f6ce(longlong param_1,uint *param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint *puVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  uint *local_88;
  undefined4 *local_80;
  undefined8 local_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2[1] == 0) {
LAB_14040f994:
    lVar9 = 0;
  }
  else {
    uVar10 = *param_2;
    lVar9 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_2[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14040f994;
      lVar9 = *plVar4;
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((lVar9 == 0 & (byte)((param_2[0xca] & 4) >> 2)) != 0) goto LAB_14040f95c;
  if (param_2[3] == 0) {
LAB_14040f99c:
    lVar3 = 0;
  }
  else {
    uVar10 = param_2[2];
    lVar3 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_2[3] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14040f99c;
      lVar3 = *plVar4;
    }
  }
  if ((((param_2[0xca] & 8) != 0) && (lVar3 == 0)) ||
     ((param_1 != 0 && (param_2[0xd8] != *(uint *)(param_1 + 0xe8))))) goto LAB_14040f95c;
  local_70 = 0;
  uVar10 = param_2[0xde];
  if ((((ulonglong)uVar10 == 0xffffffff) || ((int)uVar10 < 0)) ||
     (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x48) <= (int)uVar10)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x40) + (ulonglong)uVar10 * 8);
  }
  lVar2 = FUN_14040fc70(param_1,&local_70,param_3,uVar8);
  if ((lVar3 == 0) || (lVar2 != lVar3 || lVar9 != local_70)) {
    if (lVar2 != lVar3 || lVar9 != local_70) goto LAB_14040f95c;
  }
  else {
    local_88 = &local_54;
    local_54 = 0xffffffff;
    local_80 = &local_58;
    local_58 = 0xffffffff;
    cVar1 = FUN_14040fa5c(param_2,param_1,param_3,lVar3);
    if ((cVar1 == '\0') || (local_54 != param_2[0xda])) goto LAB_14040f95c;
  }
  param_2[0xbc] = param_4;
  if (param_2[1] == 0) {
LAB_14040f9a4:
    lVar9 = 0;
  }
  else {
    uVar10 = *param_2;
    lVar9 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_2[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14040f9a4;
      lVar9 = *plVar4;
    }
  }
  uVar10 = param_2[0xca];
  if ((uVar10 & 1) != 0) {
    puVar5 = param_2 + 0x10;
    puVar7 = param_2 + 0x50;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8 *)puVar7 = *(undefined8 *)puVar5;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
    }
    puVar5 = param_2 + 0x30;
    puVar7 = param_2 + 0x70;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8 *)puVar7 = *(undefined8 *)puVar5;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
    }
    param_2[0xb8] = param_2[0xb4];
    param_2[0xb9] = param_2[0xb5];
    param_2[0xba] = param_2[0xb6];
    param_2[0xbb] = param_2[0xb7];
    FUN_1404102d8(param_2,lVar9,param_3);
    uVar10 = param_2[0xca];
  }
  if ((uVar10 & 2) != 0) {
    if (lVar9 == 0) {
LAB_14040f9f6:
      *(undefined8 *)(param_2 + 200) = DAT_14c8464f0;
      uVar10 = (uint)DAT_14c8464e0;
      uVar11 = DAT_14c8464e0._4_4_;
      uStack_68 = (uint)DAT_14c8464e8;
      uStack_64 = DAT_14c8464e8._4_4_;
    }
    else {
      lVar3 = FUN_144a7a726();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_14040f9f6;
      FUN_14083167e(lVar9,&local_70,0);
      *(undefined8 *)(param_2 + 200) = local_60;
      uVar10 = (uint)local_70;
      uVar11 = local_70._4_4_;
    }
    param_2[0xc4] = uVar10;
    param_2[0xc5] = uVar11;
    param_2[0xc6] = uStack_68;
    param_2[199] = uStack_64;
  }
  if ((param_2[0xf6] != 0xffffffff) && (cVar1 = FUN_1480d1c0a(param_2 + 4), cVar1 == '\0')) {
    FUN_1480b4cc8(param_2,param_3);
  }
  uVar6 = 0;
LAB_14040f95c:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14040fa5c FUN_14040fa5c body=532 status=ok
// SIG undefined FUN_14040fa5c(void)

undefined8
FUN_14040fa5c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
             int *param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar9;
  
  plVar11 = *(longlong **)(param_4 + 0xe0);
  *param_5 = -1;
  *param_6 = -1;
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (plVar11 == (longlong *)0x0) {
    return 0;
  }
  *param_6 = *(int *)(param_4 + 0x150);
  if (DAT_14c7627e4 == 2) {
    if (*(char *)(param_2 + 0x8a) == '\0') {
LAB_14040fad6:
      lVar1 = *(longlong *)(param_4 + 0xe0);
      if (lVar1 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(lVar1 + 8);
      }
      *param_6 = iVar8 - (uint)*(byte *)(lVar1 + 0x8e);
    }
  }
  else if (DAT_14c7627e4 == 1) goto LAB_14040fad6;
  piVar5 = *(int **)(param_1 + 0x370);
  if (piVar5 == (int *)0x0) {
    iVar8 = *(int *)(param_2 + 0x8c);
    if ((*(longlong *)(param_2 + 0x90) != 0) &&
       (plVar4 = (longlong *)FUN_144741050(param_2 + 0x98), *plVar4 != 0)) {
      piVar5 = (int *)(**(code **)(*(longlong *)(param_3 + 0x1e8) + 0x58))
                                (param_3 + 0x1e8,param_2 + 0x90,0);
      if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
        *(undefined8 *)(param_1 + 0x370) = 0;
      }
      else {
        piVar5 = (int *)((longlong)*piVar5 + *(longlong *)(param_3 + 0x208));
        *(int **)(param_1 + 0x370) = piVar5;
        if (piVar5 != (int *)0x0) goto LAB_14040fc33;
      }
    }
  }
  else {
LAB_14040fc33:
    iVar8 = *piVar5;
  }
  iVar6 = (int)plVar11[1];
  iVar2 = -1;
  if (0 < iVar6) {
    uVar7 = (uint)*(byte *)((longlong)plVar11 + 0x8f);
    if ((int)(uint)*(byte *)((longlong)plVar11 + 0x8f) < (int)*(uint *)(param_1 + 0x364)) {
      uVar7 = *(uint *)(param_1 + 0x364);
    }
    if (iVar6 - 1U <= uVar7) {
      uVar7 = iVar6 - 1U;
    }
    uVar10 = (ulonglong)uVar7;
    plVar11 = (longlong *)(uVar10 * 8 + *plVar11);
    do {
      if ((*(int *)(*plVar11 + 0x10c) != 0) && (iVar2 = (int)uVar10, *(int *)(*plVar11 + 100) != 0))
      break;
      uVar7 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar7;
      plVar11 = plVar11 + 1;
      iVar2 = -1;
    } while ((int)uVar7 < iVar6);
  }
  if (*(longlong *)(param_4 + 0xe0) == 0) {
    iVar6 = -1;
    if (-1 < iVar8) goto LAB_14040fb89;
    iVar9 = 0;
    iVar6 = -1;
  }
  else {
    iVar9 = *(int *)(*(longlong *)(param_4 + 0xe0) + 8);
    iVar6 = iVar9 + -1;
    if (-1 < iVar8) goto LAB_14040fb89;
  }
  iVar8 = iVar9 + iVar8;
LAB_14040fb89:
  *param_5 = iVar8;
  if (*(int *)(param_1 + 0x368) < iVar6) {
    iVar6 = *(int *)(param_1 + 0x368);
  }
  if (iVar6 < iVar2) {
    iVar6 = iVar2;
  }
  *param_5 = iVar6;
  if (iVar6 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_4 + 0xe0) >> 8),
                     iVar6 < *(int *)(*(longlong *)(param_4 + 0xe0) + 8));
  }
  return uVar3;
}



// FUNCTION 14040fc70 FUN_14040fc70 body=1392 status=ok
// SIG undefined FUN_14040fc70(void)

longlong FUN_14040fc70(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(param_1 + 0x38);
  if (bVar1 < 2) {
    lVar6 = *(longlong *)(param_1 + 0x70);
    local_58 = param_2;
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0)) {
      lVar6 = FUN_1404101e2(param_1 + 0x48);
      param_2 = local_58;
      if (lVar6 == 0) goto LAB_14040fcc2;
      uVar4 = FUN_1404101e2(param_1 + 0x48);
      lVar9 = 0;
      lVar6 = FUN_140410b68(uVar4,0);
      param_2 = local_58;
      if (lVar6 == 0) {
        lVar6 = 0;
        goto LAB_14040fdcf;
      }
      lVar9 = *(longlong *)(lVar6 + 0x660);
joined_r0x00014040fe78:
      if ((DAT_14c950c29 != 1) || (lVar9 == 0)) goto LAB_14040fdcf;
    }
    else {
      lVar9 = *(longlong *)(lVar6 + 0x660);
      if ((DAT_14c950c29 & lVar9 != 0) == 0) goto LAB_14040fdcf;
    }
    FUN_1456cec3c(lVar9);
  }
  else {
LAB_14040fcc2:
    if ((bVar1 == 4 || bVar1 == 0) && param_4 != 0) {
      local_58 = param_2;
      lVar6 = FUN_144a6c4d8();
      iVar3 = *(int *)(lVar6 + 0x38);
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < iVar3) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          != lVar6 + 0x30)) {
        lVar6 = FUN_144a7a726();
        if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
          lVar6 = FUN_1406d0862();
          if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_140410100;
          lVar6 = 0;
          param_2 = local_58;
          lVar9 = param_4;
        }
        else {
          lVar9 = *(longlong *)(param_4 + 0x660);
          lVar6 = param_4;
          param_2 = local_58;
          if ((lVar9 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar9);
            param_2 = local_58;
          }
        }
      }
      else {
        lVar6 = FUN_140410b68(param_4,CONCAT71((int7)(int3)((uint)iVar3 >> 8),1));
        if (lVar6 == 0) {
LAB_140410100:
          lVar6 = 0;
          param_2 = local_58;
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(lVar6 + 0x660);
          param_2 = local_58;
          if ((lVar9 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar9);
            param_2 = local_58;
          }
        }
      }
    }
    else {
      lVar6 = 0;
      lVar9 = 0;
    }
    if (((lVar6 != 0) || (param_3 == 0 || bVar1 != 0 && bVar1 != 2)) || (lVar9 != 0))
    goto LAB_14040fdcf;
    if (*(int *)(param_3 + 0x4c) != 0) {
      uVar2 = *(uint *)(param_3 + 0x48);
      lVar6 = 0;
      if (-1 < (int)uVar2) {
        lVar9 = 0;
        if (DAT_14c9647dc <= (int)uVar2) goto LAB_14040fdcf;
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_3 + 0x4c))) ||
           (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
            (lVar9 = *plVar7, lVar6 = lVar9, lVar8 = DAT_14cad3688, lVar9 == 0))))
        goto LAB_14040ff21;
        do {
          if (lVar8 == 0) {
            local_70 = &local_50;
            local_50 = FUN_144b223ce;
            local_60 = FUN_14081d0ea;
            local_68 = (code *)&LAB_1417963e0;
            local_78 = &LAB_147a2f4c9;
            local_80 = (code *)&LAB_1400ea6f8;
            local_88 = L"Engine";
            local_90 = 0x200000000000;
            local_98 = 0x10000004;
            local_a0 = 0x10;
            local_a8 = 0x720;
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
            lVar8 = DAT_14cad3688;
          }
          if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
             ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) goto LAB_14040fdb6;
          plVar7 = (longlong *)(lVar6 + 0x120);
          lVar6 = *plVar7;
        } while (*plVar7 != 0);
        if (DAT_14c951858 == 0) {
          local_70 = &local_50;
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_78 = &LAB_1468c5283;
          local_80 = FUN_142809da0;
          local_88 = L"Engine";
          local_90 = 0x400000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar5 = *(longlong *)(lVar9 + 0x20);
        if (lVar5 == 0) {
LAB_14040fee2:
          do {
            lVar6 = lVar9;
            lVar9 = *(longlong *)(lVar6 + 0x120);
          } while (lVar9 != 0);
          lVar6 = *(longlong *)(lVar6 + 0xa8);
          if ((lVar6 == 0) || (lVar6 = FUN_140410b68(lVar6,1), lVar6 == 0)) {
            lVar6 = 0;
            lVar9 = 0;
            goto LAB_14040fdcf;
          }
        }
        else {
          do {
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
               (lVar6 = lVar5,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
              lVar6 = 0;
            }
          } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
          if ((lVar6 == 0) || ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0)) goto LAB_14040fee2;
        }
LAB_14040fdb6:
        lVar9 = *(longlong *)(lVar6 + 0x660);
        goto joined_r0x00014040fe78;
      }
    }
LAB_14040ff21:
    lVar6 = 0;
    lVar9 = 0;
  }
LAB_14040fdcf:
  *param_2 = lVar6;
  if (((bVar1 == 0) || (bVar1 == 3)) && (lVar6 == 0 && lVar9 == 0)) {
    lVar9 = *(longlong *)(param_1 + 0x40);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404101e2 FUN_1404101e2 body=246 status=ok
// SIG undefined FUN_1404101e2(void)

longlong FUN_1404101e2(uint *param_1)

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
  lVar4 = FUN_144a6c4d8();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1404102d8 FUN_1404102d8 body=2191 status=ok
// SIG undefined FUN_1404102d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404102d8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar13 = (undefined8 *)(param_3 + 0x50);
  puVar14 = (undefined8 *)(param_1 + 0x250);
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x10);
  *(double *)(param_1 + 0x2b0) = (double)*(float *)(param_3 + 0xc) * -65536.0;
  *(double *)(param_1 + 0x2b8) = (double)fVar3 * -65536.0;
  *(double *)(param_1 + 0x2c0) = (double)fVar2 * -65536.0;
  if (param_2 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
    uVar28 = 0;
    if (*(int *)(param_1 + 0x24c) != 0) {
      lVar11 = param_1 + 0x240;
      FUN_1401a2688(lVar11,0);
      uVar28 = (undefined4)lVar11;
    }
    uVar23 = *(undefined4 *)(param_1 + 0x250);
    uVar24 = *(undefined4 *)(param_1 + 0x254);
    uVar25 = *(undefined4 *)(param_1 + 600);
    uVar26 = *(undefined4 *)(param_1 + 0x25c);
    uVar27 = *(undefined4 *)(param_1 + 0x260);
    uVar29 = *(undefined4 *)(param_1 + 0x264);
    uVar31 = *(undefined4 *)(param_1 + 0x268);
    uVar33 = *(undefined4 *)(param_1 + 0x26c);
    dVar35 = *(double *)(param_1 + 0x270);
    dVar36 = *(double *)(param_1 + 0x278);
    dVar17 = *(double *)(param_1 + 0x280);
    uVar30 = *(undefined4 *)(param_1 + 0x290);
    uVar32 = *(undefined4 *)(param_1 + 0x294);
    uVar34 = *(undefined4 *)(param_1 + 0x298);
    uVar37 = *(undefined4 *)(param_1 + 0x29c);
    auVar20 = *(undefined1 (*) [16])(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x28) = DAT_14c846330;
    iVar9 = DAT_14c846338;
    *(int *)(param_1 + 0x30) = DAT_14c846338;
    goto LAB_140410474;
  }
  uVar23 = (undefined4)param_2[0x48];
  uVar24 = *(undefined4 *)((longlong)param_2 + 0x244);
  uVar25 = (undefined4)param_2[0x49];
  uVar26 = *(undefined4 *)((longlong)param_2 + 0x24c);
  uVar27 = (undefined4)param_2[0x4a];
  uVar29 = *(undefined4 *)((longlong)param_2 + 0x254);
  uVar31 = (undefined4)param_2[0x4b];
  uVar33 = *(undefined4 *)((longlong)param_2 + 0x25c);
  dVar35 = (double)param_2[0x4c];
  dVar36 = (double)param_2[0x4d];
  uVar38 = (undefined4)param_2[0x4e];
  uVar40 = *(undefined4 *)((longlong)param_2 + 0x274);
  uVar30 = (undefined4)param_2[0x50];
  uVar32 = *(undefined4 *)((longlong)param_2 + 0x284);
  uVar34 = (undefined4)param_2[0x51];
  uVar37 = *(undefined4 *)((longlong)param_2 + 0x28c);
  auVar20 = *(undefined1 (*) [16])(param_2 + 0x52);
  if (DAT_14cac1d70 == 0) {
    local_110 = &local_e8;
    local_e8 = FUN_144b223ce;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_1432411d6;
    local_118 = &LAB_147878f54;
    local_120 = &LAB_1417ad3ba;
    local_128 = L"Engine";
    local_130 = 0;
    local_138 = 0x10000004;
    local_140 = 0x10;
    local_148 = 0xb10;
    FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
  }
  plVar12 = (longlong *)param_2[2];
  lVar11 = DAT_14cac1d70;
  if ((int)plVar12[7] < *(int *)(DAT_14cac1d70 + 0x38)) {
LAB_140410408:
    iVar9 = (int)lVar11;
    *(undefined4 *)(param_1 + 0x248) = 0;
    if (*(int *)(param_1 + 0x24c) != 0) {
      plVar12 = (longlong *)(param_1 + 0x240);
      iVar9 = FUN_1401a2688(plVar12,0);
    }
  }
  else {
    lVar11 = DAT_14cac1d70 + 0x30;
    plVar12 = (longlong *)plVar12[6];
    if (plVar12[*(int *)(DAT_14cac1d70 + 0x38)] != lVar11) goto LAB_140410408;
    iVar9 = (int)param_2[0xe5];
    plVar1 = (longlong *)(param_1 + 0x240);
    plVar12 = plVar1;
    FUN_140ee84a4(plVar1,iVar9,1);
    if (0 < (longlong)iVar9) {
      lVar11 = 0;
      uVar15 = 0;
      do {
        plVar12 = param_2;
        FUN_1410499a6(param_2,uVar15 & 0xffffffff,*plVar1 + lVar11,1);
        uVar15 = uVar15 + 1;
        lVar11 = lVar11 + 0x60;
      } while ((longlong)iVar9 != uVar15);
    }
    iVar9 = *(int *)(param_1 + 0x34);
    lVar11 = (longlong)iVar9;
    if ((-1 < lVar11) && (iVar9 < *(int *)(param_1 + 0x248))) {
      plVar12 = (longlong *)*plVar1;
      iVar9 = iVar9 * 0x60;
      plVar1 = plVar12 + lVar11 * 0xc;
      uVar23 = (undefined4)*plVar1;
      uVar24 = *(undefined4 *)((longlong)plVar1 + 4);
      uVar25 = (undefined4)plVar1[1];
      uVar26 = *(undefined4 *)((longlong)plVar1 + 0xc);
      plVar1 = plVar12 + lVar11 * 0xc + 2;
      uVar27 = (undefined4)*plVar1;
      uVar29 = *(undefined4 *)((longlong)plVar1 + 4);
      uVar31 = (undefined4)plVar1[1];
      uVar33 = *(undefined4 *)((longlong)plVar1 + 0xc);
      dVar35 = (double)plVar12[lVar11 * 0xc + 4];
      dVar36 = (double)(plVar12 + lVar11 * 0xc + 4)[1];
      uVar38 = (undefined4)plVar12[lVar11 * 0xc + 6];
      uVar40 = *(undefined4 *)((longlong)(plVar12 + lVar11 * 0xc + 6) + 4);
      plVar1 = plVar12 + lVar11 * 0xc + 8;
      uVar30 = (undefined4)*plVar1;
      uVar32 = *(undefined4 *)((longlong)plVar1 + 4);
      uVar34 = (undefined4)plVar1[1];
      uVar37 = *(undefined4 *)((longlong)plVar1 + 0xc);
      auVar20 = *(undefined1 (*) [16])(plVar12 + lVar11 * 0xc + 10);
    }
  }
  uVar28 = SUB84(plVar12,0);
  *(float *)(param_1 + 0x28) = (float)(dVar35 - *(double *)(param_1 + 0x270));
  *(float *)(param_1 + 0x2c) = (float)(dVar36 - *(double *)(param_1 + 0x278));
  *(float *)(param_1 + 0x30) =
       (float)((double)CONCAT44(uVar40,uVar38) - *(double *)(param_1 + 0x280));
  dVar35 = dVar35 + *(double *)(param_1 + 0x2b0);
  dVar36 = dVar36 + *(double *)(param_1 + 0x2b8);
  dVar17 = *(double *)(param_1 + 0x2c0) + (double)CONCAT44(uVar40,uVar38);
LAB_140410474:
  auVar8 = _DAT_149934d80;
  dVar50 = (double)CONCAT44(uVar24,uVar23) + (double)CONCAT44(uVar24,uVar23);
  dVar39 = (double)CONCAT44(uVar26,uVar25) + (double)CONCAT44(uVar26,uVar25);
  dVar46 = (double)CONCAT44(uVar29,uVar27) + (double)CONCAT44(uVar29,uVar27);
  dVar19 = (double)CONCAT44(uVar24,uVar23) * dVar50;
  dVar16 = (double)CONCAT44(uVar26,uVar25) * dVar39;
  dVar18 = (double)CONCAT44(uVar29,uVar27) * dVar46;
  dVar4 = (double)DAT_149934d80;
  dVar5 = DAT_149934d80._8_8_;
  dVar21 = dVar39 * (double)CONCAT44(uVar24,uVar23);
  dVar22 = dVar46 * (double)CONCAT44(uVar26,uVar25);
  dVar43 = (double)CONCAT44(uVar24,uVar23) * dVar46;
  dVar46 = dVar46 * (double)CONCAT44(uVar33,uVar31);
  dVar50 = dVar50 * (double)CONCAT44(uVar33,uVar31);
  dVar39 = dVar39 * (double)CONCAT44(uVar33,uVar31);
  auVar49._4_4_ = uVar32;
  auVar49._0_4_ = uVar30;
  auVar49._8_4_ = uVar34;
  auVar49._12_4_ = uVar37;
  dVar41 = auVar20._0_8_;
  dVar44 = (dVar21 + dVar46) * (double)CONCAT44(uVar32,uVar30);
  auVar7._8_4_ = SUB84(dVar44,0);
  auVar7._0_8_ = (dVar4 - (dVar18 + dVar16)) * (double)CONCAT44(uVar32,uVar30);
  auVar7._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar7;
  *(double *)(param_1 + 0x50) = (dVar43 - dVar39) * (double)CONCAT44(uVar32,uVar30);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(double *)(param_1 + 0x60) = (dVar21 - dVar46) * auVar49._8_8_;
  *(double *)(param_1 + 0x68) = (dVar5 - (dVar18 + dVar19)) * (double)CONCAT44(uVar37,uVar34);
  *(double *)(param_1 + 0x70) = (dVar22 + dVar50) * (double)CONCAT44(uVar37,uVar34);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(double *)(param_1 + 0x80) = (dVar39 + dVar43) * dVar41;
  *(double *)(param_1 + 0x88) = (dVar22 - dVar50) * dVar41;
  *(double *)(param_1 + 0x90) = (1.0 - (dVar19 + dVar16)) * dVar41;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(double *)(param_1 + 0xa0) = dVar35;
  *(double *)(param_1 + 0xa8) = dVar36;
  *(double *)(param_1 + 0xb0) = dVar17;
  *(undefined8 *)(param_1 + 0xb8) = 0x3ff0000000000000;
  auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar37,uVar34)));
  auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar32,uVar30)));
  iVar9 = movmskpd(iVar9,auVar47);
  auVar48._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar20._8_8_));
  auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar41));
  uVar10 = movmskpd(uVar28,auVar48);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    uVar37 = (undefined4)DAT_14c846498;
    uVar38 = (undefined4)((ulonglong)DAT_14c846498 >> 0x20);
    dVar35 = DAT_14c8464a0;
    dVar36 = DAT_14c8464a8;
    dVar19 = DAT_14c8464c0;
    dVar50 = DAT_14c8464c8;
    uVar28 = (undefined4)DAT_14c846480;
    uVar30 = DAT_14c846480._4_4_;
    uVar32 = (undefined4)DAT_14c846488;
    uVar34 = DAT_14c846488._4_4_;
    dVar39 = DAT_14c846490;
    dVar44 = DAT_14c8464d0;
    dVar17 = DAT_14c8464b0;
  }
  else {
    auVar6._4_4_ = uVar32;
    auVar6._0_4_ = uVar30;
    auVar6._8_4_ = uVar34;
    auVar6._12_4_ = uVar37;
    auVar49 = divpd(auVar8,auVar6);
    auVar20 = divpd(ZEXT816(0x3ff0000000000000),auVar20);
    dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar32,uVar30))) &
                     auVar49._0_8_);
    dVar50 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar37,uVar34))) &
                     auVar49._8_8_);
    dVar44 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar41)) & auVar20._0_8_);
    dVar16 = -(double)CONCAT44(uVar24,uVar23);
    dVar18 = -(double)CONCAT44(uVar26,uVar25);
    dVar39 = (double)CONCAT44(uVar29,uVar27) * -1.0;
    dVar22 = (double)CONCAT44(uVar33,uVar31) * 1.0;
    dVar35 = dVar35 * dVar19;
    dVar36 = dVar36 * dVar50;
    dVar17 = dVar17 * dVar44;
    uVar37 = SUB84(dVar22,0);
    uVar38 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar43 = dVar36 * dVar16 - dVar18 * dVar35;
    dVar46 = dVar17 * dVar18 - dVar39 * dVar36;
    dVar21 = dVar35 * dVar39 - dVar16 * dVar17;
    dVar46 = dVar46 + dVar46;
    dVar21 = dVar21 + dVar21;
    dVar43 = dVar43 + dVar43;
    dVar35 = 0.0 - ((dVar43 * dVar18 - dVar21 * dVar39) + dVar22 * dVar46 + dVar35);
    dVar36 = 0.0 - (dVar43 * (double)CONCAT44(uVar24,uVar23) + dVar39 * dVar46 +
                   dVar22 * dVar21 + dVar36);
    uVar28 = uVar23;
    uVar30 = (int)((ulonglong)dVar16 >> 0x20);
    uVar32 = uVar25;
    uVar34 = (int)((ulonglong)dVar18 >> 0x20);
    dVar17 = 0.0 - (dVar22 * dVar43 + dVar17 + (dVar21 * dVar16 - dVar46 * dVar18));
  }
  dVar22 = (double)CONCAT44(uVar30,uVar28) + (double)CONCAT44(uVar30,uVar28);
  dVar45 = (double)CONCAT44(uVar34,uVar32) + (double)CONCAT44(uVar34,uVar32);
  dVar16 = dVar39 + dVar39;
  dVar41 = (double)CONCAT44(uVar30,uVar28) * dVar22;
  dVar42 = (double)CONCAT44(uVar34,uVar32) * dVar45;
  dVar43 = dVar45 * (double)CONCAT44(uVar30,uVar28);
  dVar46 = dVar16 * (double)CONCAT44(uVar34,uVar32);
  dVar21 = dVar16 * (double)CONCAT44(uVar38,uVar37);
  dVar22 = dVar22 * (double)CONCAT44(uVar38,uVar37);
  dVar18 = dVar16 * (double)CONCAT44(uVar30,uVar28);
  dVar45 = dVar45 * (double)CONCAT44(uVar38,uVar37);
  *(double *)(param_1 + 0xc0) = (dVar4 - (dVar39 * dVar16 + dVar42)) * dVar19;
  *(double *)(param_1 + 200) = (dVar43 - dVar21) * dVar50;
  *(double *)(param_1 + 0xd0) = (dVar18 + dVar45) * dVar44;
  *(double *)(param_1 + 0xd8) = dVar35;
  *(double *)(param_1 + 0xe0) = (dVar43 + dVar21) * dVar19;
  *(double *)(param_1 + 0xe8) = (dVar5 - (dVar39 * dVar16 + dVar41)) * dVar50;
  *(double *)(param_1 + 0xf0) = (dVar46 - dVar22) * dVar44;
  *(double *)(param_1 + 0xf8) = dVar36;
  *(double *)(param_1 + 0x100) = (dVar18 - dVar45) * dVar19;
  *(double *)(param_1 + 0x108) = (dVar46 + dVar22) * dVar50;
  *(double *)(param_1 + 0x110) = (1.0 - (dVar41 + dVar42)) * dVar44;
  *(double *)(param_1 + 0x118) = dVar17;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x3ff0000000000000;
  *(float *)(param_1 + 0x2d0) = (float)(double)CONCAT44(uVar24,uVar23);
  *(float *)(param_1 + 0x2d4) = (float)(double)CONCAT44(uVar26,uVar25);
  *(float *)(param_1 + 0x2d8) = (float)(double)CONCAT44(uVar29,uVar27);
  *(float *)(param_1 + 0x2dc) = (float)(double)CONCAT44(uVar33,uVar31);
  if ((local_e0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
  local_f8 = uVar27;
  uStack_f4 = uVar29;
  uStack_f0 = uVar31;
  uStack_ec = uVar33;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140410b68 FUN_140410b68 body=855 status=ok
// SIG undefined FUN_140410b68(void)

longlong FUN_140410b68(longlong param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
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
  char local_51;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_51 = param_2;
  if (param_1 != 0) {
    lVar5 = FUN_1403126c0();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
        (lVar5 = *(longlong *)(param_1 + 0x390), lVar5 != 0)) &&
       ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) goto LAB_140410e68;
    do {
      iVar2 = *(int *)(param_1 + 0x268);
      if (iVar2 == 0) {
        uVar12 = 1;
        uVar14 = 0;
        iVar4 = 0;
        iVar13 = 0;
      }
      else {
        puVar6 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 0x250);
        }
        uVar10 = *puVar6;
        if (uVar10 == 0) {
          iVar4 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar4 = iVar2 + -1;
          }
          uVar14 = 0;
          uVar12 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar12 = uVar14;
          }
          iVar13 = 0;
          do {
            if (uVar12 == uVar14) goto LAB_140410c46;
            iVar13 = iVar13 + 0x20;
            uVar10 = puVar6[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar14 = 0;
          iVar13 = 0;
        }
        uVar12 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar12 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar4 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar4) {
          iVar4 = iVar2;
        }
      }
      if (iVar4 != iVar2) {
        uVar10 = 0xffffffff;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
          if (lVar5 != 0) {
            if (DAT_14cad3688 == 0) {
              local_50 = FUN_144b223ce;
              local_60 = FUN_14081d0ea;
              local_68 = &LAB_1417963e0;
              local_70 = &local_50;
              local_78 = &LAB_147a2f4c9;
              local_80 = &LAB_1400ea6f8;
              local_88 = L"Engine";
              local_90 = 0x200000000000;
              local_98 = 0x10000004;
              local_a0 = 0x10;
              local_a8 = 0x720;
              FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
            }
            if (((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) &&
               ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
              if ((DAT_14c950c29 == '\x01') && (*(longlong *)(lVar5 + 0x660) != 0)) {
                FUN_1456cec3c();
                goto LAB_140410e68;
              }
              if (*(longlong *)(lVar5 + 0x660) != 0) goto LAB_140410e68;
            }
          }
          uVar10 = uVar10 & ~(uint)uVar12;
          puVar6 = *(uint **)(param_1 + 0x260);
          if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
            puVar6 = (uint *)(param_1 + 0x250);
          }
          iVar3 = *(int *)(param_1 + 0x268);
          iVar4 = (int)uVar14;
          lVar5 = (longlong)iVar4;
          uVar9 = puVar6[lVar5] & uVar10;
          if (uVar9 == 0) {
            iVar7 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar7 = iVar3 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar4) {
              iVar8 = iVar4;
            }
            if (iVar4 < iVar7) {
              lVar11 = 0;
              do {
                uVar9 = puVar6[lVar5 + lVar11 + 1];
                if (uVar9 != 0) {
                  uVar14 = (ulonglong)(iVar4 + (int)lVar11 + 1);
                  uVar10 = 0xffffffff;
                  goto LAB_140410d5f;
                }
                iVar13 = iVar13 + 0x20;
                lVar11 = lVar11 + 1;
              } while (iVar8 - lVar5 != lVar11);
              uVar10 = 0xffffffff;
              iVar4 = iVar8;
            }
            uVar14 = (ulonglong)(iVar4 + 1);
            iVar4 = iVar3;
          }
          else {
LAB_140410d5f:
            uVar12 = (ulonglong)(-uVar9 & uVar9);
            uVar1 = uVar12 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar4 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar4) {
              iVar4 = iVar3;
            }
          }
        } while (iVar4 != iVar2);
      }
LAB_140410c46:
    } while ((local_51 != '\0') && (param_1 = FUN_1433b9ef0(param_1), param_1 != 0));
  }
  lVar5 = 0;
LAB_140410e68:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 140410ec0 FUN_140410ec0 body=1009 status=ok
// SIG undefined FUN_140410ec0(void)

void FUN_140410ec0(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong *param_5
                  )

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  undefined1 auStack_118 [44];
  int local_ec;
  longlong local_e8;
  uint local_e0;
  int local_dc;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = param_2;
  local_c0 = param_4;
  if (*(int *)(param_1 + 0x28) != param_3) {
    FUN_14570e024(param_1 + 0x30,param_3);
    *(int *)(param_1 + 0x28) = param_3;
  }
  local_e8 = param_1 + 0x40;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  lStack_b0 = local_e8;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar9 = 1;
    local_a8._0_4_ = 0xffffffff;
    iVar8 = 0;
    local_a8._4_4_ = 0;
    local_b8._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    uVar9 = local_b8 >> 0x20;
    iVar8 = *(int *)(param_1 + 0x58);
  }
  if (local_a8._4_4_ != iVar8 || lStack_b0 != local_e8) {
    local_d0 = param_5 + 7;
    iVar5 = (int)local_b8;
    uVar12 = (uint)local_a8;
    iVar4 = local_a8._4_4_;
    iVar13 = local_a0;
    local_ec = iVar8;
    local_d8 = lStack_b0;
    do {
      local_e0 = uVar12;
      local_dc = iVar13;
      if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xb0 + (longlong)iVar4 * 0xc0) & 1) == 0) {
        puVar14 = (uint *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 0xc0);
        cVar3 = (*(code *)PTR_FUN_14c760d68)(DAT_14ca80690,*(undefined8 *)(puVar14 + 0x28));
        if ((cVar3 != '\0') && (local_c0 <= *(longlong *)(puVar14 + 0x10))) {
          if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
            plVar6 = (longlong *)param_5[8];
            if ((longlong *)param_5[8] == (longlong *)0x0) {
              plVar6 = local_d0;
            }
            iVar8 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_5[9] - 1U & *puVar14) * 4);
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*param_5 + (longlong)iVar8 * 0xc) == *puVar14) goto LAB_1404110fb;
                iVar8 = *(int *)(*param_5 + (longlong)iVar8 * 0xc + 4);
              } while (iVar8 != -1);
            }
          }
          local_98 = 0;
          local_90 = 0;
          local_b8 = 0;
          lStack_b0 = 0;
          local_8c = 0xffffffff00000080;
          local_84 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = *puVar14;
          FUN_1404114b2(&local_b8,puVar14 + 0x14);
          plVar6 = local_c8;
          iVar8 = (int)local_c8[1];
          *(uint *)(local_c8 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)local_c8 + 0xc) < iVar8 + 1U) {
            FUN_140411646(local_c8,iVar8);
          }
          lVar11 = *plVar6;
          lVar15 = (longlong)iVar8 * 0x58;
          *(undefined8 *)(lVar11 + 0x20 + lVar15) = 0;
          *(undefined4 *)(lVar11 + 0x28 + lVar15) = 0;
          *(undefined8 *)(lVar11 + lVar15) = 0;
          ((undefined8 *)(lVar11 + lVar15))[1] = 0;
          *(undefined8 *)(lVar11 + 0x2c + lVar15) = 0xffffffff00000080;
          *(undefined4 *)(lVar11 + 0x34 + lVar15) = 0;
          *(undefined8 *)(lVar11 + 0x40 + lVar15) = 0;
          *(undefined4 *)(lVar11 + 0x48 + lVar15) = 0;
          FUN_1404114b2(lVar11 + lVar15,&local_b8);
          *(uint *)(lVar11 + 0x50 + lVar15) = local_68;
          local_70 = 0;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          FUN_1404112b2(&local_b8);
        }
      }
LAB_1404110fb:
      uVar12 = local_e0 & ~(uint)uVar9;
      lVar11 = *(longlong *)(local_d8 + 0x10);
      if (*(longlong *)(local_d8 + 0x10) == 0) {
        lVar11 = local_d8;
      }
      iVar8 = *(int *)(local_d8 + 0x18);
      lVar15 = (longlong)iVar5;
      uVar7 = *(uint *)(lVar11 + lVar15 * 4) & uVar12;
      iVar13 = local_dc;
      if (uVar7 == 0) {
        iVar4 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar4 = iVar8 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar13 = local_dc + 0x20;
        iVar2 = iVar4;
        if (iVar4 < iVar5) {
          iVar2 = iVar5;
        }
        if (iVar5 < iVar4) {
          lVar10 = 0;
          do {
            uVar7 = *(uint *)(lVar11 + lVar15 * 4 + 4 + lVar10 * 4);
            if (uVar7 != 0) {
              iVar5 = iVar5 + (int)lVar10 + 1;
              uVar12 = 0xffffffff;
              goto LAB_140411177;
            }
            iVar13 = iVar13 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar2 - lVar15 != lVar10);
          uVar12 = 0xffffffff;
          iVar5 = iVar2;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar8;
      }
      else {
LAB_140411177:
        uVar9 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar9 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar4) {
          iVar4 = iVar8;
        }
      }
    } while (iVar4 != local_ec || local_d8 != local_e8);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404112b2 FUN_1404112b2 body=55 status=ok
// SIG undefined FUN_1404112b2(void)

void FUN_1404112b2(longlong *param_1)

{
  FUN_1404112ea(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404112ea FUN_1404112ea body=121 status=ok
// SIG undefined FUN_1404112ea(void)

void FUN_1404112ea(longlong param_1,int param_2)

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



// FUNCTION 140411364 FUN_140411364 body=334 status=ok
// SIG undefined FUN_140411364(void)

void FUN_140411364(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x1c;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404113ff;
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
LAB_1404113ff:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x1c)) {
      uVar5 = uVar3 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x1c,4);
  }
  return;
}



// FUNCTION 1404114b2 FUN_1404114b2 body=154 status=ok
// SIG undefined FUN_1404114b2(void)

longlong FUN_1404114b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140411507;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140411507:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14041154c(param_1,param_2);
  return param_1;
}



// FUNCTION 14041154c FUN_14041154c body=249 status=ok
// SIG undefined FUN_14041154c(void)

undefined8 * FUN_14041154c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1404112ea(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 140411646 FUN_140411646 body=369 status=ok
// SIG undefined FUN_140411646(void)

void FUN_140411646(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404116cd;
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
LAB_1404116cd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1404117b8 FUN_1404117b8 body=988 status=ok
// SIG undefined FUN_1404117b8(void)

/* WARNING: Removing unreachable block (ram,0x000140411b6d) */
/* WARNING: Removing unreachable block (ram,0x000140411b77) */

void FUN_1404117b8(longlong param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined1 local_80;
  void *local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  undefined4 local_58;
  uint uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x89) = 1;
  }
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  local_d8 = *param_2;
  uStack_d4 = param_2[1];
  uStack_d0 = param_2[2];
  uStack_cc = param_2[3];
  local_c8 = param_2[4];
  uStack_c4 = param_2[5];
  uStack_c0 = param_2[6];
  uStack_bc = param_2[7];
  local_b8 = *(undefined8 *)(param_2 + 8);
  local_b0 = *(undefined8 *)(param_2 + 10);
  local_a8 = param_2[0xc];
  local_a0 = 0;
  iVar2 = param_2[0x10];
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  local_98 = CONCAT44(local_98._4_4_,iVar2);
  if (iVar2 == 0) {
    local_98 = 0;
  }
  else {
    FUN_14753cf4a(&local_a0,iVar2,0);
    FUN_14753cfbd(local_a0,uVar3,iVar2);
  }
  local_90 = (void *)0x0;
  uVar6 = param_2[0x14];
  pvVar4 = *(void **)(param_2 + 0x12);
  local_88 = CONCAT44(local_88._4_4_,uVar6);
  if ((longlong)(int)uVar6 == 0) {
    local_88 = (ulonglong)uVar6;
  }
  else {
    FUN_1456c5740(&local_90,uVar6,0);
    memcpy(local_90,pvVar4,(longlong)(int)uVar6 << 3);
  }
  local_80 = *(undefined1 *)(param_2 + 0x16);
  local_78 = (void *)0x0;
  uVar6 = param_2[0x1a];
  pvVar4 = *(void **)(param_2 + 0x18);
  local_70 = CONCAT44(local_70._4_4_,uVar6);
  if ((longlong)(int)uVar6 == 0) {
    local_70 = (ulonglong)uVar6;
  }
  else {
    FUN_1447bda9e(&local_78,uVar6,0);
    memcpy(local_78,pvVar4,(longlong)(int)uVar6 << 2);
  }
  uStack_60 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x75) >> 0x18);
  uStack_68 = (undefined5)*(undefined8 *)(param_2 + 0x1c);
  local_63 = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x28);
  iVar2 = *(int *)(param_1 + 0x20);
  uVar6 = iVar2 + 1;
  *(uint *)(param_1 + 0x20) = uVar6;
  local_58 = param_3;
  uStack_54 = param_4;
  if (*(uint *)(param_1 + 0x24) < uVar6) {
    FUN_140411b96((longlong *)(param_1 + 0x18));
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar7 = (longlong)iVar2 * 0x98;
  *(undefined8 *)(lVar5 + lVar7) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
  *(undefined8 **)(lVar5 + lVar7) = local_e8;
  *(int *)(lVar5 + 8 + lVar7) = (int)uStack_e0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x30 + lVar7) = local_b8;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar7);
  *puVar1 = local_c8;
  puVar1[1] = uStack_c4;
  puVar1[2] = uStack_c0;
  puVar1[3] = uStack_bc;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar7);
  *puVar1 = local_d8;
  puVar1[1] = uStack_d4;
  puVar1[2] = uStack_d0;
  puVar1[3] = uStack_cc;
  *(undefined8 *)(lVar5 + 0x38 + lVar7) = local_b0;
  *(undefined4 *)(lVar5 + 0x40 + lVar7) = local_a8;
  *(undefined8 *)(lVar5 + 0x48 + lVar7) = 0;
  *(longlong *)(lVar5 + 0x48 + lVar7) = local_a0;
  *(undefined4 *)(lVar5 + 0x50 + lVar7) = (undefined4)local_98;
  *(undefined4 *)(lVar5 + 0x54 + lVar7) = local_98._4_4_;
  *(undefined8 *)(lVar5 + 0x58 + lVar7) = 0;
  *(void **)(lVar5 + 0x58 + lVar7) = local_90;
  *(undefined4 *)(lVar5 + 0x60 + lVar7) = (undefined4)local_88;
  *(undefined4 *)(lVar5 + 100 + lVar7) = local_88._4_4_;
  *(undefined1 *)(lVar5 + 0x68 + lVar7) = local_80;
  *(undefined8 *)(lVar5 + 0x70 + lVar7) = 0;
  *(void **)(lVar5 + 0x70 + lVar7) = local_78;
  *(undefined4 *)(lVar5 + 0x78 + lVar7) = (undefined4)local_70;
  *(undefined4 *)(lVar5 + 0x7c + lVar7) = local_70._4_4_;
  *(ulonglong *)(lVar5 + 0x85 + lVar7) = CONCAT53(uStack_60,local_63);
  *(ulonglong *)(lVar5 + 0x80 + lVar7) = CONCAT35(local_63,uStack_68);
  *(ulonglong *)(lVar5 + 0x90 + lVar7) = CONCAT44(uStack_54,local_58);
  local_70 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  local_90 = (void *)0x0;
  local_98 = 0;
  local_a0 = 0;
  local_e8 = (undefined8 *)0x0;
  FUN_1447bda9c(0,0);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((int)uStack_e0 != 0) {
    if (local_e8 == (undefined8 *)0x0) goto LAB_140411a82;
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
  }
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140411a82:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140411b96 FUN_140411b96 body=369 status=ok
// SIG undefined FUN_140411b96(void)

void FUN_140411b96(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x98;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140411c1e;
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
LAB_140411c1e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x98)) {
    uVar7 = uVar5 / 0x98 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x98,8);
  return;
}



// FUNCTION 140411d08 FUN_140411d08 body=1854 status=ok
// SIG undefined FUN_140411d08(void)

void FUN_140411d08(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (uint *)(param_1 + 0xa8);
  if ((*(byte *)(param_2 + 5) & 4) == 0 || param_4 != '\x01') {
    puVar4 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      }
      else {
        FUN_14572512c(param_2,puVar2);
      }
    }
    else {
      *puVar2 = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    local_38 = *puVar2;
  }
  else {
    local_38 = *puVar2 & 0xfffffffb;
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_38,4);
      }
      else {
        FUN_14572512c(param_2,&local_38);
      }
    }
    else {
      local_38 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
  }
  if ((local_38 & 4) == 0) {
    local_40 = 0;
    local_48 = 1;
    FUN_140430222(param_1 + 0x10,param_2,param_3,0);
  }
  FUN_140077068(param_2,param_1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x70) * 0x14,
             (longlong)*(int *)(param_1 + 0x74) * 0x14);
  local_34 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_1 + 0x70);
  }
  puVar5 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    }
    else {
      FUN_14572512c(param_2,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  plVar1 = (longlong *)(param_1 + 0x68);
  if (local_34 == 0) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x70) = 0, *(int *)(param_1 + 0x74) != 0)) {
      FUN_14041289e(plVar1,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0xccccc < local_34 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(param_1 + 0x70) = local_34;
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_14041245e(param_2,*(longlong *)(param_1 + 0x68) + lVar10);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x14;
    } while (lVar11 < *(int *)(param_1 + 0x70));
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
    if ((*(uint *)(param_1 + 0x74) == local_34) || (FUN_14041289e(plVar1), 0 < (int)local_34)) {
      iVar8 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
          FUN_147cd4148(plVar1,iVar3);
        }
        FUN_14041245e(param_2,(longlong)iVar3 * 0x14 + *plVar1);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_34);
    }
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x50) * 0xd0,
             (longlong)*(int *)(param_1 + 0x54) * 0xd0);
  local_34 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_1 + 0x50);
  }
  puVar5 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    }
    else {
      FUN_14572512c(param_2,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  if (local_34 == 0) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x50) = 0, *(int *)(param_1 + 0x54) != 0)) {
      FUN_1404127be(plVar1,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x13b13 < local_34 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(param_1 + 0x50) = local_34;
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_144991d14(param_2,*(longlong *)(param_1 + 0x48) + lVar10);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xd0;
    } while (lVar11 < *(int *)(param_1 + 0x50));
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((*(uint *)(param_1 + 0x54) == local_34) || (FUN_1404127be(plVar1), 0 < (int)local_34)) {
      iVar8 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x54) < iVar3 + 1U) {
          FUN_147cd41dc(plVar1,iVar3);
        }
        lVar10 = (longlong)iVar3 * 0xd0 + *plVar1;
        FUN_140412447(lVar10);
        FUN_144991d14(param_2,lVar10);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_34);
    }
  }
  FUN_1447a84cc(param_2,param_1 + 0x58);
  FUN_1447a84cc(param_2,param_1 + 0x78);
  FUN_14041268c(param_2,param_1 + 0x38);
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x88),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x8c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x90),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x98),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x9c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x9c) = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar7 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0xa0),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xa0) = *puVar7;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar7 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0xa2),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xa2) = *puVar7;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar9 = (undefined4 *)(param_1 + 0xa4);
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar9,4);
    }
    else {
      FUN_14572512c(param_2,puVar9);
    }
  }
  else {
    *puVar9 = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140412447 FUN_140412447 body=23 status=ok
// SIG undefined FUN_140412447(void)

void FUN_140412447(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 14041245e FUN_14041245e body=558 status=ok
// SIG undefined FUN_14041245e(void)

longlong * FUN_14041245e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x12),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x12) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x13),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x13) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 14041268c FUN_14041268c body=304 status=ok
// SIG undefined FUN_14041268c(void)

longlong * FUN_14041268c(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) * 2,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1448759c8(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x800000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140817052(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 * 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1404127be FUN_1404127be body=223 status=ok
// SIG undefined FUN_1404127be(void)

void FUN_1404127be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (ulonglong)param_2 * 0xd0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x9e) {
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xd0)) {
      uVar2 = uVar1 / 0xd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd0,0x10);
  }
  return;
}



// FUNCTION 14041289e FUN_14041289e body=337 status=ok
// SIG undefined FUN_14041289e(void)

void FUN_14041289e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x666) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14041290b;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14041290b:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x14)) {
      uVar3 = uVar4 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
  }
  return;
}



// FUNCTION 1404129f0 FUN_1404129f0 body=226 status=ok
// SIG undefined FUN_1404129f0(void)

void FUN_1404129f0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140412ad2(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140412ad2 FUN_140412ad2 body=1365 status=ok
// SIG undefined FUN_140412ad2(void)

void FUN_140412ad2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141591838();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f1088);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140413028 FUN_140413028 body=226 status=ok
// SIG undefined FUN_140413028(void)

void FUN_140413028(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14041310a(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14041310a FUN_14041310a body=1365 status=ok
// SIG undefined FUN_14041310a(void)

void FUN_14041310a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14157b146();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f1220);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140413660 FUN_140413660 body=226 status=ok
// SIG undefined FUN_140413660(void)

void FUN_140413660(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140413742(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140413742 FUN_140413742 body=1365 status=ok
// SIG undefined FUN_140413742(void)

void FUN_140413742(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14157d02a();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f12a8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140413c98 FUN_140413c98 body=226 status=ok
// SIG undefined FUN_140413c98(void)

void FUN_140413c98(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140413d7a(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140413d7a FUN_140413d7a body=1365 status=ok
// SIG undefined FUN_140413d7a(void)

void FUN_140413d7a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14158e624();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f1440);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404142d0 FUN_1404142d0 body=176 status=ok
// SIG undefined FUN_1404142d0(void)

void FUN_1404142d0(longlong param_1)

{
  FUN_140414380(param_1 + 0x198,0);
  FUN_140414380(param_1 + 0x90,0);
  FUN_140414380(param_1 + 0x118,0);
  FUN_140414380(param_1 + 0x158,0);
  FUN_140414380(param_1 + 0x1d8,0);
  FUN_140414380(param_1 + 0x268,0);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_140414380(*(longlong *)(param_1 + 0x218),0);
    FUN_140414380(*(longlong *)(param_1 + 0x218) + 0x80,0);
    FUN_140414380(*(longlong *)(param_1 + 0x218) + 0x40,0);
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_140414380(*(longlong *)(param_1 + 0x50),0);
  return;
}



// FUNCTION 140414380 FUN_140414380 body=2160 status=ok
// SIG undefined FUN_140414380(void)

void FUN_140414380(longlong param_1,longlong param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined *puVar13;
  longlong *plVar14;
  uint *puVar15;
  code *pcVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_138 [32];
  code **local_118;
  code *local_108;
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (DAT_14ca96780 == '\x01') {
    if ((DAT_14c86a9f8 != '\x01') ||
       (iVar19 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar19 == 2)) {
LAB_140414b54:
      if (0xf < (int)DAT_14ca96778) {
        FUN_14168c6f8(&DAT_14ca966f0);
      }
      *(undefined1 *)(param_1 + 0xe) = 1;
      uVar7 = DAT_14ca96778;
      lVar18 = (longlong)(int)DAT_14ca96778;
      DAT_14ca96778 = DAT_14ca96778 + 1;
      if (DAT_14ca9677c < DAT_14ca96778) {
        FUN_147434b7a(uVar7);
      }
      puVar13 = &DAT_14ca966f0;
      if (DAT_14ca96770 != (undefined *)0x0) {
        puVar13 = DAT_14ca96770;
      }
      *(longlong *)(puVar13 + lVar18 * 8) = param_1;
      goto LAB_14041477f;
    }
    if (iVar19 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140414b54;
    }
  }
  local_f8 = (longlong *)0x0;
  local_e8 = &PTR_LAB_14a392c70;
  uStack_e0 = param_1;
  local_108 = (code *)&LAB_14322fc28;
  if ((param_2 == 0) || (DAT_14ca9a43c != 2)) {
    local_c8 = (code *)&LAB_14322fc28;
    local_b8 = (longlong *)0x0;
    local_a8 = &PTR_LAB_14a392c70;
    uStack_a0 = param_1;
    local_98 = CONCAT44(uStack_d4,local_d8);
    uStack_90 = CONCAT44(uStack_cc,uStack_d0);
LAB_1404145d4:
    local_108 = (code *)0x0;
    pcVar16 = local_c8;
LAB_1404145dd:
    local_f8 = (longlong *)0x0;
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar19 = *(int *)(lVar18 + 0xc60);
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    if (DAT_14c86a9fc == 0) {
      if (iVar19 != 2) {
        if (iVar19 != 1) goto LAB_140414600;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        pcVar16 = local_c8;
        if (DVar8 == DVar9) goto LAB_140414605;
        goto LAB_14041463f;
      }
LAB_140414605:
      plVar14 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar14 = &local_a8;
      }
      uVar10 = (**(code **)(*plVar14 + 8))();
      (*pcVar16)(uVar10);
    }
    else {
LAB_140414600:
      if (iVar19 == 0x10) goto LAB_140414605;
LAB_14041463f:
      if (DAT_14ca9a438 == '\0') {
        pcVar16 = local_c8;
        if ((DAT_14c86a9f8 != '\x01') || (iVar19 = *(int *)(lVar18 + 0xc60), iVar19 == 2))
        goto LAB_140414605;
        if (iVar19 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          pcVar16 = local_c8;
          if (DVar8 == DVar9) goto LAB_140414605;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar3;
        if (puVar12 != (uint *)0x0) goto LAB_140414848;
        while( true ) {
          uVar7 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar7 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar7 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar3 = puVar11;
          FUN_140217a48(puVar3);
          puVar12 = (uint *)*puVar3;
LAB_140414848:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar7 = puVar12[0x12];
          if (puVar15 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar5 = *puVar12;
            *puVar12 = *puVar12 + uVar7 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar7) != 0xffffffff) break;
            puVar12 = (uint *)*puVar3;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar3 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar17 + 0x1e);
            uVar7 = 0;
            if (puVar15 <= puVar12 + 0x4000) {
              uVar7 = 1;
              goto LAB_1404148c8;
            }
          }
        }
        uVar7 = uVar7 + 1;
LAB_1404148c8:
        *(uint **)(puVar12 + 0x10) = puVar15;
        puVar12[0x12] = uVar7;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a392c60;
        puVar17[0x16] = local_c8;
        puVar17[0x18] = local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(puVar17 + 0x1c) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar17 + 0xe4) = local_98._4_4_;
        *(undefined4 *)(puVar17 + 0x1d) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_90._4_4_;
        *(undefined4 *)(puVar17 + 0x1a) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar17 + 0xd4) = local_a8._4_4_;
        *(undefined4 *)(puVar17 + 0x1b) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar7 = DAT_14c7585c8 >> 10 & 3;
          iVar19 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
            iVar19 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar19 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
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
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar10 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar17[0xf] = uVar10;
        puVar17[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar19;
        if (puVar17 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar2 = (int *)(puVar17 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_78 = (longlong)&PTR_LAB_14a392c40;
        local_78[2] = (longlong)local_c8;
        local_78[4] = (longlong)local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(local_78 + 8) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_78 + 0x44) = local_98._4_4_;
        *(undefined4 *)(local_78 + 9) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_90._4_4_;
        *(undefined4 *)(local_78 + 6) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_78 + 0x34) = local_a8._4_4_;
        *(undefined4 *)(local_78 + 7) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (local_78 != (longlong *)&DAT_fffffffffffffff0) {
          local_88[0] = FUN_14322f9e4;
        }
        local_118 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"ReleaseCommand",&DAT_14ca9a02c);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = (longlong *)&local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    if (local_c8 != (code *)0x0) {
      plVar14 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar14 = local_b8;
      }
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  else {
    pcVar1 = (char *)(param_2 + 8);
    LOCK();
    bVar21 = *(char *)(param_2 + 8) == '\0';
    if (bVar21) {
      *(char *)(param_2 + 8) = '\x01';
    }
    UNLOCK();
    if (!bVar21) {
      FUN_1447d2058(pcVar1);
    }
    if (*(longlong *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        param_2) {
      local_88[0] = local_108;
      local_78 = local_f8;
      local_f8 = (longlong *)0x0;
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = (undefined4)uStack_e0;
      uStack_5c = uStack_e0._4_4_;
      local_58 = local_d8;
      uStack_54 = uStack_d4;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      local_48 = 0;
      FUN_1401a96bc(param_2,local_88);
LAB_14041456a:
      (*(code *)(&PTR_LAB_14a3931f0)[local_48])();
      bVar21 = false;
    }
    else {
      if (*(longlong *)(param_2 + 0x10) != 0) {
        local_88[0] = local_108;
        local_78 = local_f8;
        local_f8 = (longlong *)0x0;
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = (undefined4)uStack_e0;
        uStack_5c = uStack_e0._4_4_;
        local_58 = local_d8;
        uStack_54 = uStack_d4;
        uStack_50 = uStack_d0;
        uStack_4c = uStack_cc;
        if (local_108 != (code *)0x0) {
          local_108 = (code *)0x0;
        }
        local_48 = 0;
        FUN_1401a98c8(param_2,local_88,L"ReleaseCommand",&DAT_14ca9a02c);
        goto LAB_14041456a;
      }
      bVar21 = true;
    }
    LOCK();
    cVar4 = *pcVar1;
    if (cVar4 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar4 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
    if (bVar21) {
      local_c8 = local_108;
      local_b8 = local_f8;
      local_98 = CONCAT44(uStack_d4,local_d8);
      uStack_90 = CONCAT44(uStack_cc,uStack_d0);
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      if (local_108 != (code *)0x0) goto LAB_1404145d4;
      pcVar16 = (code *)0x0;
      goto LAB_1404145dd;
    }
  }
  if (local_108 != (code *)0x0) {
    plVar14 = &local_e8;
    if (local_f8 != (longlong *)0x0) {
      plVar14 = local_f8;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_14041477f:
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140414bf2 FUN_140414bf2 body=354 status=ok
// SIG undefined FUN_140414bf2(void)

undefined8 *
FUN_140414bf2(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  uVar7 = FUN_1447262c2(param_4);
  uVar8 = FUN_140414d56(param_1 + 8);
  FUN_140414de2(&local_40,uVar8,uVar7);
  if (local_38 != (longlong *)0x0) {
    iVar6 = (int)local_38[1];
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_38[1];
      bVar13 = iVar6 == iVar5;
      if (bVar13) {
        *(int *)(local_38 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar12 = local_38;
    } while (!bVar13);
    lVar11 = 0;
    if (plVar12 != (longlong *)0x0) {
      lVar11 = local_40;
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (lVar11 != 0) {
      uVar3 = *(undefined4 *)(lVar11 + 200);
      if (*(byte *)(param_2 + 4) == 3) {
        *(undefined4 *)param_2 = uVar3;
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
        uVar10 = *(ushort *)(param_2 + 3);
        if (pcVar4 != (code *)0x0) {
          puVar9 = param_2;
          if (0x18 < uVar10) {
            puVar9 = (undefined8 *)*param_2;
          }
          (*pcVar4)(puVar9);
          uVar10 = *(ushort *)(param_2 + 3);
        }
        if (0x18 < uVar10) {
          FUN_1400020a8(*param_2);
        }
        *(undefined2 *)(param_2 + 3) = 4;
        *(undefined4 *)param_2 = uVar3;
        *(undefined1 *)(param_2 + 4) = 3;
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140414d56 FUN_140414d56 body=138 status=ok
// SIG undefined FUN_140414d56(void)

longlong FUN_140414d56(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb7d740 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb7d740,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140414de2 FUN_140414de2 body=426 status=ok
// SIG undefined FUN_140414de2(void)

undefined8 * FUN_140414de2(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (param_3 == (longlong *)0x0)) {
LAB_140414e52:
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  uVar2 = FUN_1403c7982();
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_140414e52;
  uVar2 = FUN_1403c7982();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar3 == plVar4 || plVar4 == (longlong *)0x0) goto LAB_140414e52;
  uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_4c = 0xff;
  local_50 = 0;
  local_58 = 0;
  FUN_14488cef8(uVar2,&local_68,param_2,0);
  if ((((plStack_60 != (longlong *)0x0) && (local_68._4_4_ != 0)) && (-1 < (int)(uint)local_68)) &&
     ((int)(uint)local_68 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8);
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == local_68._4_4_)) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plStack_60 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar3 = plStack_60 + 0xd9;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plStack_60 + 0x10))();
      }
      cVar1 = FUN_14486eb0e(plVar3,&local_68);
      if (cVar1 != '\0') {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar5 = *(longlong *)(lVar5 + 0x18);
        *param_1 = *(undefined8 *)(lVar5 + (ulonglong)local_4c * 0x10);
        lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)local_4c * 0x10);
        param_1[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
          UNLOCK();
        }
        goto LAB_140414f6b;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_140414f6b:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140414f8e FUN_140414f8e body=1620 status=ok
// SIG undefined FUN_140414f8e(void)

void FUN_140414f8e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  undefined **ppuVar17;
  longlong lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 auStack_168 [42];
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  param_7[0x2b] = *(longlong *)(param_5 + 8);
  uVar14 = *param_5;
  uVar5 = param_5[1];
  uVar6 = param_5[2];
  uVar7 = param_5[3];
  uVar11 = param_5[5];
  uVar12 = param_5[6];
  uVar13 = param_5[7];
  *(undefined4 *)(param_7 + 0x29) = param_5[4];
  *(undefined4 *)((longlong)param_7 + 0x14c) = uVar11;
  *(undefined4 *)(param_7 + 0x2a) = uVar12;
  *(undefined4 *)((longlong)param_7 + 0x154) = uVar13;
  *(undefined4 *)(param_7 + 0x27) = uVar14;
  *(undefined4 *)((longlong)param_7 + 0x13c) = uVar5;
  *(undefined4 *)(param_7 + 0x28) = uVar6;
  *(undefined4 *)((longlong)param_7 + 0x144) = uVar7;
  param_7[0x2c] = *(longlong *)(param_5 + 10);
  *(undefined4 *)(param_7 + 0x2d) = param_5[0xc];
  plVar1 = param_7 + 0x2e;
  if (plVar1 != (longlong *)(param_5 + 0xe)) {
    FUN_1447bda9c(param_7[0x2e],(int)param_7[0x2f]);
    iVar15 = param_5[0x10];
    uVar9 = *(undefined8 *)(param_5 + 0xe);
    *(int *)(param_7 + 0x2f) = iVar15;
    if (iVar15 == 0 && *(int *)((longlong)param_7 + 0x17c) == 0) {
      *(undefined4 *)((longlong)param_7 + 0x17c) = 0;
    }
    else {
      FUN_14753cf4a(plVar1,iVar15);
      FUN_14753cfbd(*plVar1,uVar9,iVar15);
    }
  }
  FUN_140415652(param_7 + 0x30,param_5 + 0x12);
  uVar9 = *(undefined8 *)((longlong)param_5 + 0x75);
  param_7[0x35] = *(longlong *)(param_5 + 0x1c);
  *(undefined8 *)((longlong)param_7 + 0x1ad) = uVar9;
  lVar16 = FUN_1404155e4(param_7,DAT_14cb39270);
  if (lVar16 != 0) {
    uVar14 = FUN_1447addd0(param_4,0x10);
    iVar15 = FUN_140f5cb3a(lVar16 + 0x10,uVar14,param_4);
    if (iVar15 != -1) goto LAB_14041541e;
  }
  uVar20 = *(undefined1 *)(param_1 + 0x24);
  uVar14 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  local_128 = (undefined4)param_7[0x24];
  local_138 = param_7[0x22];
  lStack_130 = param_7[0x23];
  uStack_124 = (undefined4)*(undefined8 *)((longlong)param_7 + 0x124);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x124) >> 0x20);
  uStack_11c = (undefined4)*(undefined8 *)((longlong)param_7 + 300);
  uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 300) >> 0x20);
  local_110 = (undefined4)param_7[0x27];
  uStack_10c = *(undefined4 *)((longlong)param_7 + 0x13c);
  uStack_108 = (undefined4)param_7[0x28];
  uStack_104 = *(undefined4 *)((longlong)param_7 + 0x144);
  local_100 = (undefined4)param_7[0x29];
  uStack_fc = *(undefined4 *)((longlong)param_7 + 0x14c);
  uStack_f8 = (undefined4)param_7[0x2a];
  uStack_f4 = *(undefined4 *)((longlong)param_7 + 0x154);
  local_f0 = param_7[0x2b];
  local_e0 = (undefined4)param_7[0x2d];
  local_e8 = param_7[0x2c];
  local_d8 = 0;
  iVar15 = (int)param_7[0x2f];
  lVar16 = param_7[0x2e];
  local_d0 = CONCAT44(local_d0._4_4_,iVar15);
  if (iVar15 == 0) {
    local_d0 = 0;
    uStack_78 = *(undefined4 *)(param_1 + 0x20);
    uVar19 = *(undefined1 *)(param_1 + 0x25);
  }
  else {
    local_13e = *(undefined1 *)(param_1 + 0x25);
    local_13c = *(undefined4 *)(param_1 + 0x20);
    FUN_14753cf4a(&local_d8,iVar15,0);
    FUN_14753cfbd(local_d8,lVar16,iVar15);
    uStack_78 = local_13c;
    uVar19 = local_13e;
  }
  local_c8 = (void *)0x0;
  uVar8 = *(uint *)(param_7 + 0x31);
  pvVar10 = (void *)param_7[0x30];
  local_c0 = CONCAT44(local_c0._4_4_,uVar8);
  if ((longlong)(int)uVar8 == 0) {
    local_c0 = (ulonglong)uVar8;
  }
  else {
    local_13e = uVar19;
    local_13c = uStack_78;
    FUN_1456c5740(&local_c8,uVar8,0);
    memcpy(local_c8,pvVar10,(longlong)(int)uVar8 << 3);
    uStack_78 = local_13c;
    uVar19 = local_13e;
  }
  local_b8 = (undefined1)param_7[0x32];
  local_b0 = (void *)0x0;
  uVar8 = *(uint *)(param_7 + 0x34);
  pvVar10 = (void *)param_7[0x33];
  local_a8 = CONCAT44(local_a8._4_4_,uVar8);
  if ((longlong)(int)uVar8 == 0) {
    local_a8 = (ulonglong)uVar8;
  }
  else {
    local_13e = uVar19;
    local_13d = uVar20;
    local_13c = uStack_78;
    FUN_1447bda9e(&local_b0,uVar8,0);
    memcpy(local_b0,pvVar10,(longlong)(int)uVar8 << 2);
    uStack_78 = local_13c;
    uVar19 = local_13e;
    uVar20 = local_13d;
  }
  uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x1ad) >> 0x18);
  uStack_a0 = (undefined5)param_7[0x35];
  local_9b = (undefined3)((ulonglong)param_7[0x35] >> 0x28);
  local_50 = local_50 | 3;
  local_90 = &PTR_FUN_14ad96bc0;
  uStack_88 = uVar6;
  uStack_84 = uVar7;
  local_80 = uVar5;
  uStack_7c = uVar14;
  uStack_74._0_2_ = CONCAT11(uVar19,uVar20);
  iVar15 = (int)param_7[1];
  *(uint *)(param_7 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_7 + 0xc) < iVar15 + 1U) {
    FUN_140ac5684(param_7,iVar15);
  }
  lVar16 = *param_7;
  lVar18 = (longlong)iVar15 * 0xf0;
  *(undefined4 *)(lVar16 + 0x20 + lVar18) = uStack_118;
  puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar18);
  *puVar2 = CONCAT44(uStack_124,local_128);
  puVar2[1] = CONCAT44(uStack_11c,uStack_120);
  *(longlong *)(lVar16 + lVar18) = local_138;
  ((longlong *)(lVar16 + lVar18))[1] = lStack_130;
  *(longlong *)(lVar16 + 0x48 + lVar18) = local_f0;
  puVar3 = (undefined4 *)(lVar16 + 0x38 + lVar18);
  *puVar3 = local_100;
  puVar3[1] = uStack_fc;
  puVar3[2] = uStack_f8;
  puVar3[3] = uStack_f4;
  puVar3 = (undefined4 *)(lVar16 + 0x28 + lVar18);
  *puVar3 = local_110;
  puVar3[1] = uStack_10c;
  puVar3[2] = uStack_108;
  puVar3[3] = uStack_104;
  *(longlong *)(lVar16 + 0x50 + lVar18) = local_e8;
  *(undefined4 *)(lVar16 + 0x58 + lVar18) = local_e0;
  *(undefined8 *)(lVar16 + 0x60 + lVar18) = 0;
  *(longlong *)(lVar16 + 0x60 + lVar18) = local_d8;
  local_d8 = 0;
  *(undefined4 *)(lVar16 + 0x68 + lVar18) = (undefined4)local_d0;
  *(undefined4 *)(lVar16 + 0x6c + lVar18) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined8 *)(lVar16 + 0x70 + lVar18) = 0;
  *(void **)(lVar16 + 0x70 + lVar18) = local_c8;
  local_c8 = (void *)0x0;
  *(undefined4 *)(lVar16 + 0x78 + lVar18) = (undefined4)local_c0;
  *(undefined4 *)(lVar16 + 0x7c + lVar18) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined1 *)(lVar16 + 0x80 + lVar18) = local_b8;
  *(undefined8 *)(lVar16 + 0x88 + lVar18) = 0;
  *(void **)(lVar16 + 0x88 + lVar18) = local_b0;
  local_b0 = (void *)0x0;
  *(undefined4 *)(lVar16 + 0x90 + lVar18) = (undefined4)local_a8;
  *(undefined4 *)(lVar16 + 0x94 + lVar18) = local_a8._4_4_;
  local_a8 = 0;
  *(ulonglong *)(lVar16 + 0x9d + lVar18) = CONCAT53(uStack_98,local_9b);
  *(ulonglong *)(lVar16 + 0x98 + lVar18) = CONCAT35(local_9b,uStack_a0);
  bVar4 = *(byte *)(lVar16 + 0xe8 + lVar18);
  *(byte *)(lVar16 + 0xe8 + lVar18) = bVar4 & 0xfc | 2;
  if ((local_50 & 1) != 0) {
    lVar16 = lVar16 + lVar18;
    *(byte *)(lVar16 + 0xe8) = bVar4 | 3;
    *(byte *)(lVar16 + 0xe8) = *(byte *)(lVar16 + 0xe8) & 0xfd | local_50 & 2;
    *(undefined8 *)(lVar16 + 0xd8) = local_60;
    *(undefined8 *)(lVar16 + 0xe0) = uStack_58;
    *(undefined8 *)(lVar16 + 200) = local_70;
    *(undefined8 *)(lVar16 + 0xd0) = uStack_68;
    *(undefined4 *)(lVar16 + 0xb8) = local_80;
    *(undefined4 *)(lVar16 + 0xbc) = uStack_7c;
    *(undefined4 *)(lVar16 + 0xc0) = uStack_78;
    *(undefined4 *)(lVar16 + 0xc4) = uStack_74;
    *(undefined4 *)(lVar16 + 0xa8) = (undefined4)local_90;
    *(undefined4 *)(lVar16 + 0xac) = local_90._4_4_;
    *(undefined4 *)(lVar16 + 0xb0) = uStack_88;
    *(undefined4 *)(lVar16 + 0xb4) = uStack_84;
    local_50 = local_50 & 0xfe;
  }
  if ((local_50 & 1) != 0) {
    ppuVar17 = (undefined **)&local_90;
    if ((local_50 & 2) == 0) {
      ppuVar17 = local_90;
    }
    local_50 = local_50 & 0xfe;
    (**(code **)*ppuVar17)(ppuVar17,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(local_90);
    }
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_d8,local_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_14041541e:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404155e4 FUN_1404155e4 body=110 status=ok
// SIG undefined FUN_1404155e4(void)

undefined8 * FUN_1404155e4(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x38,
            *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x38) != param_2) {
        iVar2 = *(int *)(lVar1 + 0x30);
        if (iVar2 == -1) {
          return (undefined8 *)0x0;
        }
      }
      if (lVar1 == 0) {
        return (undefined8 *)0x0;
      }
      if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
        if ((*(byte *)(lVar1 + 0x28) & 2) == 0) {
          return *(undefined8 **)(lVar1 + 8);
        }
        return (undefined8 *)(lVar1 + 8);
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140415652 FUN_140415652 body=176 status=ok
// SIG undefined FUN_140415652(void)

undefined8 * FUN_140415652(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1456c5740(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
      }
    }
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    iVar1 = *(int *)(param_2 + 4);
    pvVar2 = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1447bda9e(param_1 + 3,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140415702 FUN_140415702 body=242 status=ok
// SIG undefined FUN_140415702(void)

int FUN_140415702(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 8);
  }
  if ((*(byte *)(lVar4 + 0x20) & 1) == 0) {
    if ((((ABS(*(double *)(lVar4 + 0x60)) <= 9.99999993922529e-09) &&
         (ABS(*(double *)(lVar4 + 0x68)) <= 9.99999993922529e-09)) &&
        (ABS(*(double *)(lVar4 + 0x70)) <= 9.99999993922529e-09)) &&
       ((ABS(*(double *)(lVar4 + 0x48)) <= 9.99999993922529e-09 &&
        (ABS(*(double *)(lVar4 + 0x50)) <= 9.99999993922529e-09)))) {
      bVar2 = ABS(*(double *)(lVar4 + 0x58)) <= 9.99999993922529e-09;
      goto LAB_140415777;
    }
  }
  else {
    bVar2 = true;
LAB_140415777:
    if (((param_2 & 4) == 0) && (iVar3 = 0, bVar2)) goto LAB_140415744;
  }
  iVar3 = ((int)(param_2 << 0x1e) >> 0x1f & 3U) + (param_2 & 1) * 4;
LAB_140415744:
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar4);
      iVar3 = iVar3 + *(int *)(lVar1 + 0x8b8) + *(int *)(lVar1 + 0xff0);
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(param_1 + 0x30) * 8 != lVar4);
  }
  return iVar3;
}



// FUNCTION 1404157f4 FUN_1404157f4 body=247 status=ok
// SIG undefined FUN_1404157f4(void)

int FUN_1404157f4(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = **(longlong **)(param_1 + 8);
  }
  if ((*(byte *)(lVar5 + 0x20) & 1) == 0) {
    if ((((ABS(*(double *)(lVar5 + 0x60)) <= 9.99999993922529e-09) &&
         (ABS(*(double *)(lVar5 + 0x68)) <= 9.99999993922529e-09)) &&
        (ABS(*(double *)(lVar5 + 0x70)) <= 9.99999993922529e-09)) &&
       ((ABS(*(double *)(lVar5 + 0x48)) <= 9.99999993922529e-09 &&
        (ABS(*(double *)(lVar5 + 0x50)) <= 9.99999993922529e-09)))) {
      bVar2 = ABS(*(double *)(lVar5 + 0x58)) <= 9.99999993922529e-09;
      goto LAB_14041586c;
    }
  }
  else {
    bVar2 = true;
LAB_14041586c:
    if (((param_2 & 4) == 0) && (bVar2)) {
      iVar3 = 0;
      goto LAB_14041583a;
    }
  }
  bVar4 = ((byte)param_2 & 2) >> 1;
  iVar3 = (uint)bVar4 + (uint)bVar4 * 2 + (param_2 & 1) * 3;
LAB_14041583a:
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5);
      iVar3 = iVar3 + *(int *)(lVar1 + 0x8b8) + *(int *)(lVar1 + 0xff0);
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x30) * 8 != lVar5);
  }
  return iVar3;
}



// FUNCTION 1404158ec FUN_1404158ec body=387 status=ok
// SIG undefined FUN_1404158ec(void)

undefined8 FUN_1404158ec(longlong *param_1,undefined8 param_2,byte *param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar5 = (float)param_2;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x30) + 0x2b0);
    }
    fVar4 = (float)(**(code **)(*plVar3 + 0x668))();
    if ((fVar4 != *(float *)((longlong)param_1 + 0x494)) ||
       (NAN(fVar4) || NAN(*(float *)((longlong)param_1 + 0x494)))) {
      *(float *)((longlong)param_1 + 0x494) = fVar4;
      FUN_14570e0a8(param_1);
    }
  }
  fVar4 = (float)DAT_14c759090;
  if (0.25 <= fVar4) {
    FUN_14570e0a8(param_1);
  }
  else {
    fVar6 = *(float *)((longlong)param_1 + 0x194) / (float)(int)param_1[0x32];
    lVar1 = (longlong)param_4;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      *(undefined4 *)((longlong)param_1 + lVar1 * 4 + 0x180) = 0;
      fVar7 = *(float *)((longlong)param_1 + lVar1 * 4 + 0x188);
      bVar2 = *param_3;
      if ((fVar7 != 0.0) || (NAN(fVar7))) {
        if ((float)(bVar2 + 1) * fVar6 <= fVar4) {
          bVar2 = (byte)(int)(fVar4 / fVar6);
        }
        else {
          fVar5 = (fVar4 * fVar5) / (fVar6 * (float)bVar2);
          uVar8 = 0;
        }
      }
      if (bVar2 != 0) {
        *(float *)((longlong)param_1 + lVar1 * 4 + 0x188) = fVar5 / (float)bVar2;
        goto LAB_1404159a9;
      }
    }
    else {
      fVar7 = *(float *)((longlong)param_1 + lVar1 * 4 + 0x180) + fVar4;
      *(float *)((longlong)param_1 + lVar1 * 4 + 0x180) = fVar7;
      if (fVar7 < fVar6) {
        fVar5 = (fVar4 * *(float *)((longlong)param_1 + lVar1 * 4 + 0x188)) / fVar6;
        uVar8 = 0;
        goto LAB_1404159a9;
      }
    }
    *(undefined4 *)((longlong)param_1 + lVar1 * 4 + 0x188) = 0;
  }
LAB_1404159a9:
  *param_3 = 0;
  return CONCAT44(uVar8,fVar5);
}



// FUNCTION 140415a70 FUN_140415a70 body=312 status=ok
// SIG undefined FUN_140415a70(void)

void FUN_140415a70(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = &DAT_149e063b2;
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
        DAT_14caf9cd0 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_14475ec7e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140415bba FUN_140415bba body=221 status=ok
// SIG undefined FUN_140415bba(void)

longlong FUN_140415bba(void)

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
  if (DAT_14cb0e480 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d9385c;
    local_40 = &LAB_14640bb7a;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x4a0;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerInput",&DAT_14cb0e480,FUN_14640bb58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0e480;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140415c98 FUN_140415c98 body=189 status=ok
// SIG undefined FUN_140415c98(void)

ulonglong FUN_140415c98(ulonglong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  FUN_1447e761e();
  if (param_1 != 0 && param_2 != 0) {
    piVar3 = (int *)(param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_1427ae0f1);
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



// FUNCTION 140415d56 FUN_140415d56 body=218 status=ok
// SIG undefined FUN_140415d56(void)

void FUN_140415d56(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = (**(code **)(*param_3 + 0x30))(param_3);
  uVar3 = (**(code **)(*param_3 + 0xa8))(param_3);
  lVar4 = (**(code **)(*param_3 + 0xa8))(param_3);
  uVar1 = *(undefined8 *)(lVar4 + 0xf0);
  lVar4 = (**(code **)(*param_3 + 0x10))(param_3);
  local_58 = *(undefined4 *)(lVar4 + 0x100);
  uStack_54 = *(undefined4 *)(lVar4 + 0x104);
  uStack_50 = *(undefined4 *)(lVar4 + 0x108);
  uStack_4c = *(undefined4 *)(lVar4 + 0x10c);
  local_48 = *(undefined8 *)(lVar4 + 0x110);
  lVar4 = (**(code **)(*param_3 + 0x10))(param_3);
  local_78 = *(undefined4 *)(lVar4 + 0xb8);
  uStack_74 = *(undefined4 *)(lVar4 + 0xbc);
  uStack_70 = *(undefined4 *)(lVar4 + 0xc0);
  uStack_6c = *(undefined4 *)(lVar4 + 0xc4);
  local_68 = *(undefined8 *)(lVar4 + 200);
  local_88 = uVar3;
  local_80 = uVar2;
  FUN_140415e32(param_1 + 0x8ac0,&local_78,&local_58,uVar1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140415e32 FUN_140415e32 body=1052 status=ok
// SIG undefined FUN_140415e32(void)

void FUN_140415e32(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,char param_6)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  code *local_120;
  undefined1 local_110 [24];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_6c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_e0 = param_4;
  if ((((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      ((*(byte *)(param_1 + 0x28) & 1) != 0)) &&
     (((*(longlong *)(param_1 + 0x10) != 0 &&
       (*(char *)(*(longlong *)(param_1 + 0x10) + 0x5d30) == '\x02')) &&
      (*(char *)(param_1 + 0xf8) == '\0')))) {
    lVar7 = FUN_1405831b2();
    lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
    if ((lVar8 == 0) ||
       (lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 8)),
       dVar5 = (double)(*(float *)(param_1 + 0x3c) + *(float *)(lVar7 + 0x1178)),
       dVar5 < *(double *)(lVar8 + 0x6d0) || dVar5 == *(double *)(lVar8 + 0x6d0))) {
      iVar3 = *(int *)(param_1 + 0xe0);
      if ((*(longlong *)(param_1 + 200) == 0) ||
         (cVar6 = FUN_140416250(param_5 + 0xd8), cVar6 != '\x01' || param_6 != '\0')) {
        local_e8 = param_3[2];
        local_f8 = *(undefined4 *)param_3;
        uStack_f4 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_f0 = *(undefined4 *)(param_3 + 1);
        uStack_ec = *(undefined4 *)((longlong)param_3 + 0xc);
        puVar9 = &DAT_14cbd3678;
        if (param_6 == '\0') {
          puVar9 = (undefined8 *)(param_5 + 0xf0);
        }
        FUN_140417934(param_1,*puVar9);
        if (((*(longlong *)(param_1 + 0x10) != 0) &&
            (lVar7 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10c8) + 0x10))(),
            lVar7 != 0)) && (lVar7 = FUN_140849bbe(), lVar7 != 0)) {
          if (DAT_14cb63950 == 0) {
            local_130 = &local_d8;
            local_d8 = FUN_144a7958c;
            local_120 = FUN_14081d0ea;
            local_128 = &LAB_1464ec72a;
            local_138 = &LAB_1486f5f75;
            local_140 = &LAB_140945686;
            local_148 = L"Engine";
            local_150 = 0;
            local_158 = CONCAT44(local_158._4_4_,0x10000004);
            local_160 = (undefined8 *)CONCAT44(local_160._4_4_,0x10);
            local_168 = 0x19d0;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                          FUN_1464fe8ee);
          }
          if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
            if (param_6 == '\0') {
              FUN_14570e108(lVar7,(undefined8 *)(param_5 + 0xf0));
            }
            else {
              FUN_14045627c(lVar7,0,1);
            }
          }
        }
      }
      else {
        lVar7 = FUN_1447210f0();
        if (lVar7 != 0) {
          lVar7 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
          if ((double)(*(float *)(param_1 + 0xc0) + *(float *)(*(longlong *)(param_1 + 0x30) + 0xdc)
                      ) < *(double *)(lVar7 + 0x6d0)) {
            lVar7 = *(longlong *)(param_1 + 0xd8);
            iVar4 = *(int *)(param_1 + 0xe0);
            lVar8 = (longlong)iVar4;
            if (lVar8 != 0) {
              lVar10 = lVar8 * 0x38;
              lVar11 = lVar7;
              do {
                if (*(char *)(lVar11 + 0x34) != '\0') {
                  if (lVar11 != 0) goto LAB_140415fec;
                  break;
                }
                lVar11 = lVar11 + 0x38;
                lVar10 = lVar10 + -0x38;
              } while (lVar10 != 0);
            }
            local_c8 = param_2[2];
            local_d8 = (code *)*param_2;
            uStack_d0 = param_2[1];
            uStack_c0 = *param_3;
            local_b8 = param_3[1];
            uStack_b0 = param_3[2];
            fVar2 = *(float *)(*(longlong *)(param_1 + 0x30) + 0xd8);
            fVar12 = *(float *)(param_1 + 0xbc);
            if (fVar2 <= *(float *)(param_1 + 0xbc)) {
              fVar12 = fVar2;
            }
            *(uint *)(param_1 + 0xe0) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0xe4) < iVar4 + 1U) {
              FUN_14041840c((longlong *)(param_1 + 0xd8),iVar4);
              lVar7 = *(longlong *)(param_1 + 0xd8);
            }
            lVar8 = lVar8 * 0x38;
            puVar9 = (undefined8 *)(lVar7 + 0x20 + lVar8);
            *puVar9 = local_b8;
            puVar9[1] = uStack_b0;
            puVar9 = (undefined8 *)(lVar7 + 0x10 + lVar8);
            *puVar9 = local_c8;
            puVar9[1] = uStack_c0;
            puVar1 = (undefined4 *)(lVar7 + lVar8);
            *puVar1 = (undefined4)local_d8;
            puVar1[1] = local_d8._4_4_;
            puVar1[2] = (undefined4)uStack_d0;
            puVar1[3] = uStack_d0._4_4_;
            *(float *)(lVar7 + 0x30 + lVar8) = fVar12;
            *(undefined1 *)(lVar7 + 0x34 + lVar8) = 1;
          }
        }
      }
LAB_140415fec:
      if (iVar3 == 0) {
        FUN_140416838();
      }
      local_160 = &local_d8;
      local_d8 = (code *)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0x3ff0000000000000;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_94 = 0x3ff00000;
      uStack_90 = 0;
      uStack_8c = 0x3ff00000;
      local_88 = 0x3ff0000000000000;
      uStack_80 = 0;
      local_78 = 0x3f800000;
      local_70 = 0;
      local_6c = 0;
      local_158 = 0;
      local_168 = CONCAT31(local_168._1_3_,1);
      FUN_140b3303c(local_110,*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x30) + 0x410,
                    &local_e0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140416250 FUN_140416250 body=311 status=ok
// SIG undefined FUN_140416250(void)

ulonglong FUN_140416250(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
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
      lVar4 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_24 = (uint)uVar3;
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if ((uVar5 == local_28) && (uVar2 == local_24)) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else if (((uVar2 == 0) ||
           ((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
            (lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0))))
          || ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
    uVar3 = FUN_144729dda(&local_28);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140416388 FUN_140416388 body=52 status=ok
// SIG undefined FUN_140416388(void)

undefined8 * FUN_140416388(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  FUN_1404163bc();
  return param_1;
}



// FUNCTION 1404163bc FUN_1404163bc body=176 status=ok
// SIG undefined FUN_1404163bc(void)

void FUN_1404163bc(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (*(float *)(param_1 + 1) <= 0.0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
    fVar1 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)param_1 + 0x24),*param_1);
    fVar2 = (*(float *)(param_1 + 4) - *(float *)((longlong)param_1 + 0x1c)) * fVar1 +
            *(float *)((longlong)param_1 + 0x1c);
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    fVar1 = (float)FUN_14002c5a6(0,*(undefined1 *)((longlong)param_1 + 0x24),*param_1);
    fVar2 = (*(float *)(param_1 + 4) - *(float *)((longlong)param_1 + 0x1c)) * fVar1 +
            *(float *)((longlong)param_1 + 0x1c);
    fVar3 = ABS(1.0 - *(float *)((longlong)param_1 + 0xc)) * *(float *)(param_1 + 1);
  }
  *(float *)(param_1 + 2) = fVar1;
  *(float *)(param_1 + 3) = fVar2;
  *(float *)((longlong)param_1 + 0x14) = fVar3;
  *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  return;
}



// FUNCTION 14041646c FUN_14041646c body=589 status=ok
// SIG undefined FUN_14041646c(void)

void FUN_14041646c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,longlong *param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
                  undefined8 param_13)

{
  undefined8 *_Src;
  longlong lVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = (undefined8 *)0x0;
  local_68 = param_4[2];
  local_78 = *param_4;
  uStack_70 = param_4[1];
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = param_5[2];
  local_b8 = *param_6;
  uStack_b4 = param_6[1];
  uStack_b0 = param_6[2];
  uStack_ac = param_6[3];
  local_a8 = *(undefined8 *)(param_6 + 4);
  uStack_50 = 1;
  FUN_140d1f4ac(&local_58,0);
  *local_58 = param_3;
  local_58[1] = 0xffffffff7fffffff;
  local_58[4] = local_68;
  local_58[2] = local_78;
  local_58[3] = uStack_70;
  local_58[5] = local_98;
  local_58[6] = uStack_90;
  local_58[7] = local_88;
  *(undefined4 *)(local_58 + 8) = local_b8;
  *(undefined4 *)((longlong)local_58 + 0x44) = uStack_b4;
  *(undefined4 *)(local_58 + 9) = uStack_b0;
  *(undefined4 *)((longlong)local_58 + 0x4c) = uStack_ac;
  local_58[10] = local_a8;
  *(undefined4 *)(local_58 + 0xb) = 0x3f800000;
  local_e8 = *param_7;
  if ((local_e8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  _Src = local_58;
  local_c0 = (undefined4)param_7[5];
  local_e0 = (undefined4)param_7[1];
  uStack_dc = *(undefined4 *)((longlong)param_7 + 0xc);
  uStack_d8 = (undefined4)param_7[2];
  uStack_d4 = *(undefined4 *)((longlong)param_7 + 0x14);
  local_d0 = (undefined4)param_7[3];
  uStack_cc = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_c8 = (undefined4)param_7[4];
  uStack_c4 = *(undefined4 *)((longlong)param_7 + 0x24);
  local_f8 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_50;
  local_f0 = (int)uStack_50;
  if (lVar1 == 0) {
    local_ec = 0;
  }
  else {
    FUN_140123d68(&local_f8,uStack_50 & 0xffffffff,0);
    memcpy(local_f8,_Src,lVar1 * 0x60);
  }
  local_100 = param_13;
  local_108 = param_12;
  local_110 = param_11;
  local_118 = param_10;
  local_120 = param_9;
  local_128 = param_8;
  FUN_1404166ba(param_1,param_2,&local_f8,&local_e8);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404166ba FUN_1404166ba body=292 status=ok
// SIG undefined FUN_1404166ba(void)

void FUN_1404166ba(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  iVar8 = FUN_140b2b37a(param_1 + 0x1268);
  lVar1 = *(longlong *)(param_1 + 0x1268) + (longlong)iVar8 * 0x60;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x1268) + (longlong)iVar8 * 0x60);
  *puVar9 = param_2;
  FUN_1404167de(puVar9 + 10,param_3);
  lVar10 = *param_4;
  if (DAT_14c950c29 == '\x01') {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *param_4;
    }
  }
  *(longlong *)(lVar1 + 8) = lVar10;
  uVar2 = *(undefined4 *)((longlong)param_4 + 0xc);
  lVar10 = param_4[2];
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x14);
  lVar6 = param_4[3];
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar7 = param_4[4];
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x24);
  *(int *)(lVar1 + 0x10) = (int)param_4[1];
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  *(int *)(lVar1 + 0x18) = (int)lVar10;
  *(undefined4 *)(lVar1 + 0x1c) = uVar3;
  *(int *)(lVar1 + 0x20) = (int)lVar6;
  *(undefined4 *)(lVar1 + 0x24) = uVar4;
  *(int *)(lVar1 + 0x28) = (int)lVar7;
  *(undefined4 *)(lVar1 + 0x2c) = uVar5;
  *(int *)(lVar1 + 0x30) = (int)param_4[5];
  *(undefined1 *)(lVar1 + 0x38) = param_5;
  *(undefined1 *)(lVar1 + 0x39) = param_6;
  *(undefined1 *)(lVar1 + 0x3a) = param_7;
  *(undefined1 *)(lVar1 + 0x3b) = param_8;
  *(undefined1 *)(lVar1 + 0x3c) = param_9;
  *(undefined8 *)(lVar1 + 0x40) = param_10;
  *(undefined8 *)(lVar1 + 0x48) = 0xffffffff7fffffff;
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1404167de FUN_1404167de body=89 status=ok
// SIG undefined FUN_1404167de(void)

undefined8 * FUN_1404167de(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140123d68(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
    }
  }
  return param_1;
}



// FUNCTION 140416838 FUN_140416838 body=1623 status=ok
// SIG undefined FUN_140416838(void)

void FUN_140416838(longlong param_1)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  uint local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  undefined1 local_140 [8];
  undefined8 *local_138;
  int local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
      (lVar6 = FUN_1447210f0(), lVar6 == 0)) || (*(int *)(param_1 + 0xe0) == 0)) goto LAB_140416c83;
  lVar6 = *(longlong *)(param_1 + 0xd8);
  lVar13 = (longlong)(*(int *)(param_1 + 0xe0) + -1) * 0x38;
  if (*(char *)(lVar6 + 0x34 + lVar13) == '\x01') {
    lVar7 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
    *(float *)(param_1 + 0xc0) = (float)*(double *)(lVar7 + 0x6d0);
  }
  lVar7 = FUN_1403cba6c(*(undefined8 *)(param_1 + 8));
  if (lVar7 == 0) goto LAB_140416c83;
  puVar16 = (undefined4 *)(lVar6 + lVar13);
  local_b0 = 0x3ff0000000000000;
  local_a8 = 0x3ff0000000000000;
  local_a0 = 0x3ff0000000000000;
  dVar21 = *(double *)(puVar16 + 6);
  dVar22 = *(double *)(puVar16 + 8);
  uVar18 = SUB84(dVar22,0);
  uVar20 = (undefined4)((ulonglong)dVar22 >> 0x20);
  local_c0 = 0.0;
  if (((dVar21 != 0.0) || (NAN(dVar21))) || ((dVar22 != 0.0 || (NAN(dVar22))))) {
    local_c0 = atan2(dVar22,dVar21);
    local_c0 = local_c0 * 57.29577951308232;
    dVar21 = *(double *)(puVar16 + 6);
    uVar18 = (undefined4)*(undefined8 *)(puVar16 + 8);
    uVar20 = (undefined4)((ulonglong)*(undefined8 *)(puVar16 + 8) >> 0x20);
  }
  dVar22 = SQRT(dVar21 * dVar21 + (double)CONCAT44(uVar20,uVar18) * (double)CONCAT44(uVar20,uVar18))
  ;
  dVar21 = *(double *)(puVar16 + 10);
  local_c8 = 0.0;
  if (((dVar22 != 0.0) || (NAN(dVar22))) || ((dVar21 != 0.0 || (NAN(dVar21))))) {
    local_c8 = atan2(dVar21,dVar22);
    local_c8 = local_c8 * 57.29577951308232;
  }
  local_b8 = 0;
  local_e8 = *puVar16;
  uStack_e4 = puVar16[1];
  uStack_e0 = puVar16[2];
  uStack_dc = puVar16[3];
  local_d8 = *(undefined8 *)(puVar16 + 4);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x60);
  uVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
  local_178 = (wchar_t *)CONCAT71(local_178._1_7_,1);
  local_180 = CONCAT71(local_180._1_7_,1);
  local_190 = CONCAT31(local_190._1_3_,1);
  local_198 = &local_b0;
  local_188 = local_188 & 0xffffff00;
  plVar9 = (longlong *)FUN_140416e90(uVar8,uVar3,&local_e8,&local_c8);
  if (plVar9 == (longlong *)0x0) goto LAB_140416c83;
  *(byte *)(plVar9 + 0x119) = *(byte *)(plVar9 + 0x119) & 0xfd;
  local_f8 = *(undefined8 *)(puVar16 + 4);
  local_108 = *puVar16;
  uStack_104 = puVar16[1];
  uStack_100 = puVar16[2];
  uStack_fc = puVar16[3];
  FUN_1404e0f62(plVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x68));
  local_118 = *(undefined8 *)(puVar16 + 10);
  local_128 = puVar16[6];
  uStack_124 = puVar16[7];
  uStack_120 = puVar16[8];
  uStack_11c = puVar16[9];
  FUN_1404e0f62(plVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78));
  FUN_140219d5e(plVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x70),puVar16[0xc]);
  (**(code **)(*plVar9 + 0xa08))
            (plVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x50),
             *(undefined4 *)(param_1 + 0xd4));
  plVar10 = (longlong *)FUN_1406c47dc(*(undefined8 *)(param_1 + 8));
  if (plVar10 != (longlong *)0x0) {
    if (DAT_14caf84d0 == (longlong *)0x0) {
      local_160 = &local_98;
      local_98 = FUN_1449e2820;
      local_150 = FUN_14081d0ea;
      local_158 = &LAB_145a62952;
      local_168 = &LAB_147c8cd45;
      local_170 = &LAB_1461468ae;
      local_178 = L"Engine";
      local_180 = 0;
      local_188 = 0x10000006;
      local_190 = 8;
      local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x218);
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    }
    plVar4 = DAT_14caf84d0;
    lVar6 = DAT_14caf84d0[0x22];
    if (lVar6 == 0) {
      (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
      lVar6 = plVar4[0x22];
    }
    fVar1 = *(float *)(lVar6 + 0x38);
    if (0.0001 < ABS(fVar1)) {
      fVar19 = (float)(**(code **)(*plVar10 + 0x478))(plVar10);
      FUN_140219d5e(plVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe0),fVar19 / fVar1);
    }
  }
  (**(code **)(*plVar9 + 0x2a8))(plVar9,1);
  iVar2 = *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0xe0) = iVar2 + -1;
  if (iVar2 < 2) {
    if ((*(char *)(param_1 + 0xf8) == '\x01') && (lVar6 = *(longlong *)(param_1 + 0x10), lVar6 != 0)
       ) {
      (**(code **)(*(longlong *)(lVar6 + 0x3b58) + 0x20))(lVar6 + 0x3b58,1);
      *(undefined1 *)(param_1 + 0xf8) = 0;
    }
    goto LAB_140416c83;
  }
  local_138 = (undefined8 *)0x0;
  local_130 = 0;
  lVar6 = *(longlong *)(param_1 + 8);
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
LAB_140416b44:
    uVar15 = *(uint *)(lVar6 + 0xc);
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar14 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar5 = *(uint *)(lVar6 + 0x10);
      bVar17 = uVar5 == 0;
      if (bVar17) {
        *(uint *)(lVar6 + 0x10) = uVar12;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar5 = uVar12;
      }
      uVar14 = (ulonglong)uVar5;
    }
  }
  else {
    if (lVar6 != 0) goto LAB_140416b44;
    uVar15 = 0;
    uVar14 = 0;
  }
  if (local_130 != 3) {
    FUN_1446efa72(&local_138,0,3,0x10);
    local_130 = 3;
  }
  *local_138 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_138[2] = lVar13;
  *local_138 = &PTR_FUN_14b9a28c0;
  local_138[3] = uVar14 << 0x20 | (ulonglong)uVar15;
  local_138[4] = param_1;
  lVar6 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(lVar6 + 0x1f0) == 0) {
    puVar11 = (undefined8 *)(lVar6 + 0x458);
  }
  else {
    puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar11;
  local_98 = (code *)0x0;
  local_90 = 0;
  FUN_14487d8d8(&local_98,&local_138);
  local_58 = 1;
  FUN_14016fdb0(uVar3,local_140,&local_98);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  if (local_130 != 0) {
    if (local_138 == (undefined8 *)0x0) goto LAB_140416c83;
    (**(code **)*local_138)(local_138,0);
    FUN_1446efa72(&local_138,0,0,0x10);
    local_130 = 0;
  }
  if (local_138 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140416c83:
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140416e90 FUN_140416e90 body=338 status=ok
// SIG undefined FUN_140416e90(void)

void FUN_140416e90(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined1 param_6,undefined1 param_7,char param_8,
                  undefined1 param_9)

{
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  char local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  local_4b = 0;
  if (param_1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  local_b8 = param_1;
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  local_98 = param_3[2];
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_90 = *param_4;
  uStack_88 = param_4[1];
  local_80 = param_4[2];
  local_78 = *param_5;
  uStack_74 = param_5[1];
  uStack_70 = param_5[2];
  uStack_6c = param_5[3];
  local_68 = *(undefined8 *)(param_5 + 4);
  local_4f = param_6;
  local_4e = param_7;
  local_4d = '\x01';
  if (param_8 != '\x01') {
    local_4d = (param_8 == '\x02') * '\x02';
  }
  local_b0 = param_2;
  local_4c = param_9;
  FUN_140416fe4();
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140416fe4 FUN_140416fe4 body=540 status=ok
// SIG undefined FUN_140416fe4(void)

longlong * FUN_140416fe4(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[1] != 0) {
    lVar4 = FUN_14018d992();
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      plVar6 = (longlong *)0x0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1404171b5;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,*param_1,1);
        if (lVar4 != 0) {
          if ((*(char *)((longlong)param_1 + 0x6c) == '\x01') &&
             ((*(char *)((longlong)param_1 + 0x6d) == '\0' || ((*(uint *)(lVar1 + 0x4f8) & 1) != 0))
             )) {
            uVar5 = FUN_1400bd118(lVar4);
            local_48 = *(undefined4 *)(param_1 + 2);
            uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
            uStack_40 = *(undefined4 *)(param_1 + 3);
            uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
            local_38 = param_1[4];
            cVar3 = FUN_140417202(uVar5,lVar1);
            if (cVar3 != '\0') goto LAB_1404171df;
          }
          cVar3 = '\x01';
          if (*(char *)((longlong)param_1 + 0x6b) != '\x01') {
            cVar3 = (*(char *)((longlong)param_1 + 0x6b) == '\x02') * '\x02';
          }
          if (*(longlong *)(lVar4 + 0x30) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x2b0);
          }
          local_b8 = CONCAT71(local_b8._1_7_,cVar3);
          plVar6 = (longlong *)
                   FUN_1404172bd(lVar1,lVar4,uVar5,*(undefined1 *)((longlong)param_1 + 0x69));
          if (plVar6 != (longlong *)0x0) {
            if (*(char *)((longlong)param_1 + 0x6d) == '\x01') {
              *(byte *)((longlong)plVar6 + 0x7cc) = *(byte *)((longlong)plVar6 + 0x7cc) | 0x20;
              FUN_14043807e(plVar6,1);
            }
            if ((*(byte *)((longlong)plVar6 + 0x9c) & 1) == 0) {
              FUN_140b506dc(plVar6,lVar4,0);
            }
            FUN_14057a3b2(plVar6,1,1,1);
            local_58 = param_1[7];
            local_68 = param_1[5];
            uStack_60 = param_1[6];
            local_88 = *(undefined4 *)(param_1 + 2);
            uStack_84 = *(undefined4 *)((longlong)param_1 + 0x14);
            uStack_80 = *(undefined4 *)(param_1 + 3);
            uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
            local_78 = param_1[4];
            local_b0 = 0;
            local_b8 = 0;
            FUN_14084af84(plVar6,&local_88,&local_68,0);
            local_98 = param_1[10];
            local_a8 = *(undefined4 *)(param_1 + 8);
            uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x44);
            uStack_a0 = *(undefined4 *)(param_1 + 9);
            uStack_9c = *(undefined4 *)((longlong)param_1 + 0x4c);
            (**(code **)(*plVar6 + 0x478))(plVar6);
            if (*(char *)((longlong)param_1 + 0x6a) == '\x01') {
              (**(code **)(*plVar6 + 0x2a8))(plVar6,1);
            }
            goto LAB_1404171b5;
          }
        }
      }
    }
  }
LAB_1404171df:
  plVar6 = (longlong *)0x0;
LAB_1404171b5:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140417202 FUN_140417202 body=186 status=ok
// SIG undefined FUN_140417202(void)

undefined8 FUN_140417202(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_1c;
  undefined2 local_14;
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = 0;
  if ((param_2 != 0) && (DAT_14cb444a0 == '\0')) {
    if ((*(longlong *)(param_2 + 0x68) == 0) ||
       (1 < *(uint *)(*(longlong *)(param_2 + 0x68) + 0x30))) {
      uVar1 = 0;
    }
    else {
      local_40 = &local_1c;
      local_1c = 0x3f800000;
      local_14 = 0xffff;
      local_12 = 1;
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      local_58 = &local_38;
      local_28 = *(undefined8 *)(param_3 + 4);
      local_48 = DAT_14caf2f10;
      local_50 = 1;
      uVar1 = FUN_14041760c(DAT_14caf2f10,local_38,*(undefined8 *)(param_2 + 0x4e0));
      uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_12) & 0xffffffffffffff04;
      uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404172bd FUN_1404172bd body=367 status=ok
// SIG undefined FUN_1404172bd(void)

longlong FUN_1404172bd(undefined8 param_1,longlong param_2,longlong param_3,byte param_4,
                      char param_5)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (((DAT_14c872bf0 != '\x01') || (DAT_14c872bf1 == '\x01')) && (DAT_14c8442b8 == '\0')) {
    if (param_5 == '\0') {
      if (param_3 != 0) {
        param_2 = param_3;
      }
      lVar1 = FUN_1404174ad(param_2);
      FUN_1409d23de(lVar1,param_1,1);
      if ((param_4 == 0) || (*(char *)(lVar1 + 0x798) == '\0')) {
        *(uint *)(lVar1 + 0x790) = *(uint *)(lVar1 + 0x790) & 0xfffffffe | (uint)param_4;
      }
      *(byte *)(lVar1 + 0x9e) = *(byte *)(lVar1 + 0x9e) & 0xf3 | 4;
      FUN_14041742c(lVar1,0);
      return lVar1;
    }
    lVar1 = FUN_1400bd118(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_140810734(*(undefined8 *)(lVar1 + 0x1b30),param_1,param_2,
                            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14041742c FUN_14041742c body=129 status=ok
// SIG undefined FUN_14041742c(void)

void FUN_14041742c(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (((*(byte *)(param_1 + 0x2d4) & 8) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x2d4) = *(byte *)(param_1 + 0x2d4) & 0xf7 | param_2 << 3;
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 0x9d);
      if ((bVar2 & 1) == 0) {
LAB_140417489:
        *(byte *)(param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar1 = FUN_1448abda6(param_1);
        if (lVar1 == 0) {
          bVar2 = *(byte *)(param_1 + 0x9d);
          goto LAB_140417489;
        }
      }
    }
  }
  return;
}



// FUNCTION 1404174ad FUN_1404174ad body=349 status=ok
// SIG undefined FUN_1404174ad(void)

undefined8 FUN_1404174ad(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  if (DAT_14cb39ca0 == (code *)0x0) {
    local_d0 = &local_b8;
    local_b8 = FUN_144a7958c;
    local_c0 = FUN_14081d0ea;
    local_c8 = &LAB_14638c6c0;
    local_d8 = &LAB_14811044c;
    local_e0 = &LAB_1407f5cf8;
    local_e8 = L"Engine";
    local_f0 = 0;
    local_f8 = 0x10000004;
    local_100 = 0x10;
    local_108 = 0x8e0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
  }
  local_b8 = DAT_14cb39ca0;
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041760c FUN_14041760c body=807 status=ok
// SIG undefined FUN_14041760c(void)

void FUN_14041760c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  double *param_5,char param_6,float param_7,longlong param_8)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  char local_88;
  longlong local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  cVar1 = DAT_14cb444a0;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb444a0 != '\x02') {
    *(byte *)(param_8 + 10) = *(byte *)(param_8 + 10) & 0xfb;
    if ((cVar1 == '\0') && (0 < (longlong)*(int *)(param_1 + 0x1b20))) {
      lVar3 = param_1 + 0x410;
      if (*(longlong *)(param_1 + 0x1b10) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1b10);
      }
      fVar5 = 3.4028235e+38;
      lVar4 = 0;
      do {
        dVar10 = *param_5 - *(double *)(lVar3 + 0x1e0 + lVar4);
        dVar8 = param_5[1] - *(double *)(lVar3 + 0x1e8 + lVar4);
        dVar6 = param_5[2] - *(double *)(lVar3 + 0x1f0 + lVar4);
        fVar9 = (float)(dVar6 * dVar6 + dVar8 * dVar8 + dVar10 * dVar10);
        if (fVar9 <= fVar5) {
          fVar5 = fVar9;
        }
        lVar4 = lVar4 + 0x2e0;
      } while ((longlong)*(int *)(param_1 + 0x1b20) * 0x2e0 - lVar4 != 0);
      if ((DAT_14c762a34 != 0) && ((*(byte *)(param_3 + 0x30) & 1) != 0)) {
        fVar9 = *(float *)(param_3 + 0x34);
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        bVar2 = fVar9 < fVar5;
        if ((((DAT_14c762a48 != 0) && (DAT_14caf2ef8 == '\x01')) && (fVar5 <= fVar9)) &&
           (DAT_14c76292c != '\0')) {
          if ((*(byte *)(param_3 + 0x5c) & 2) == 0) {
            bVar2 = false;
          }
          else {
            fVar7 = *(float *)(param_3 + 100);
            if (DAT_14caf2f10 <= fVar7) {
              fVar7 = *(float *)(param_3 + 0x68);
            }
            else if (*(float *)(param_3 + 0x6c) <= DAT_14caf2f10) {
              fVar7 = *(float *)(param_3 + 0x70);
            }
            else {
              fVar7 = (*(float *)(param_3 + 0x70) - *(float *)(param_3 + 0x68)) *
                      ((DAT_14caf2f10 - fVar7) / (*(float *)(param_3 + 0x6c) - fVar7)) +
                      *(float *)(param_3 + 0x68);
            }
            bVar2 = fVar9 * fVar7 < fVar5;
          }
        }
        *(byte *)(param_8 + 10) =
             *(byte *)(param_8 + 10) & 0xfb | ((*(byte *)(param_8 + 10) & 4) >> 2 | bVar2) << 2;
      }
    }
    if ((DAT_14c762a30 != 0) && ((*(byte *)(param_2 + 100) & 1) != 0)) {
      dVar8 = (*(double *)(param_2 + 0x438) - *(double *)(param_2 + 0x420)) * 0.5;
      dVar10 = (*(double *)(param_2 + 0x430) - *(double *)(param_2 + 0x418)) * 0.5;
      dVar6 = (*(double *)(param_2 + 0x428) - *(double *)(param_2 + 0x410)) * 0.5;
      local_58 = SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar10 * dVar10);
      local_70 = *(undefined4 *)param_5;
      uStack_6c = *(undefined4 *)((longlong)param_5 + 4);
      uStack_68 = *(undefined4 *)(param_5 + 1);
      uStack_64 = *(undefined4 *)((longlong)param_5 + 0xc);
      local_60 = param_5[2];
      local_80 = param_8;
      local_88 = param_6;
      FUN_143ad12b8(param_1,param_3,&local_70,0);
    }
    if ((param_6 == '\x01' && DAT_14c762a38 != 0) && (*(longlong *)(param_4 + 0x38) == 0)) {
      FUN_143ad14ac(param_4,param_2,param_3,param_8);
    }
    if ((((DAT_14c762a48 != 0) && (DAT_14caf2ef8 == '\x01')) && ((*(byte *)(param_8 + 10) & 4) == 0)
        ) && ((DAT_14c76292c != '\0' && ((*(byte *)(param_3 + 0x5c) & 1) != 0)))) {
      *(byte *)(param_8 + 10) =
           (*(float *)(param_3 + 0x60) <= param_7 && DAT_14cb444a0 == '\0') << 2 |
           *(byte *)(param_8 + 10);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140417934 FUN_140417934 body=1861 status=ok
// SIG undefined FUN_140417934(void)

void FUN_140417934(longlong param_1,code *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  float fVar22;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  code *local_160;
  longlong *local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  code *local_b8;
  undefined8 **local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((((param_2 != (code *)0x0) && (*(char *)(param_1 + 0xf8) == '\0')) &&
      (lVar14 = *(longlong *)(param_1 + 0x10), lVar14 != 0)) &&
     ((lVar14 = (**(code **)(*(longlong *)(lVar14 + 0x10c8) + 0x10))(lVar14 + 0x10c8), lVar14 != 0
      && (plVar15 = (longlong *)FUN_140849bbe(lVar14), plVar15 != (longlong *)0x0)))) {
    if (DAT_14cb63950 == 0) {
      local_170 = &local_128;
      local_128 = FUN_144a7958c;
      local_160 = FUN_14081d0ea;
      local_168 = &LAB_1464ec72a;
      local_178 = &LAB_1486f5f75;
      local_180 = &LAB_140945686;
      local_188 = L"Engine";
      local_190 = 0;
      local_198 = 0x10000004;
      local_1a0 = 0x10;
      local_1a8 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
        DAT_14cb63950 + 0x30)) {
      lVar14 = (**(code **)(*plVar15 + 0xb98))(plVar15);
      if (lVar14 != 0) {
        local_d8 = 0;
        uStack_d0 = 0;
        if (DAT_14cbd3678 == param_2) {
          lVar14 = plVar15[0x1af];
          if ((longlong)(int)lVar14 != 0) {
            lVar17 = plVar15[0x1ae];
            lVar18 = 0;
            do {
              uVar9 = uStack_d0;
              lVar19 = *(longlong *)(lVar17 + lVar18);
              if (lVar19 != 0) {
                lVar20 = (longlong)(int)(uint)uStack_d0;
                uVar10 = (uint)uStack_d0 + 1;
                uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar10);
                if (uStack_d0._4_4_ < uVar10) {
                  FUN_1446f48e2(&local_d8,uVar9 & 0xffffffff);
                }
                *(undefined4 *)(local_d8 + lVar20 * 4) = *(undefined4 *)(lVar19 + 0xc);
              }
              lVar18 = lVar18 + 8;
            } while ((longlong)(int)lVar14 * 8 != lVar18);
          }
        }
        else {
          iVar11 = FUN_144992686(lVar14,param_2);
          if (iVar11 == -1) {
            uVar13 = FUN_144909502(plVar15,param_2);
            uVar16 = FUN_140418574(plVar15);
            uVar10 = FUN_147c7d804(lVar14,uVar16,uVar13);
            if (((-1 < (int)uVar10) && ((int)uVar10 < (int)plVar15[0x1af])) &&
               (lVar17 = *(longlong *)(plVar15[0x1ae] + (ulonglong)uVar10 * 8), lVar17 != 0)) {
              FUN_14041807a(plVar15,&local_128,(int)*(short *)(lVar17 + 0x10));
              param_2 = local_128;
            }
          }
          FUN_140418574(plVar15);
          local_1a8 = CONCAT31(local_1a8._1_3_,1);
          FUN_14041817e(lVar14,&local_d8,param_2);
        }
        if (0 < (int)(uint)uStack_d0) {
          local_150 = (longlong *)(param_1 + 0xe8);
          plVar21 = (longlong *)(param_1 + 0xd8);
          uVar10 = (uint)uStack_d0;
          local_158 = plVar21;
          do {
            plVar8 = local_150;
            iVar11 = *(int *)(local_d8 + -4 + (ulonglong)uVar10 * 4);
            uVar12 = uVar10;
            if ((-1 < (longlong)iVar11) && (iVar11 < (int)plVar15[0x1af])) {
              lVar14 = *(longlong *)(plVar15[0x1ae] + (longlong)iVar11 * 8);
              lVar17 = *(longlong *)(param_1 + 0xe8);
              iVar11 = *(int *)(param_1 + 0xf0);
              lVar18 = (longlong)iVar11;
              if (lVar18 != 0) {
                lVar19 = 0;
                do {
                  if (*(int *)(lVar17 + lVar19) == *(int *)(lVar14 + 0xc)) goto LAB_140417d1e;
                  lVar19 = lVar19 + 4;
                } while (lVar18 * 4 - lVar19 != 0);
              }
              *(uint *)(param_1 + 0xf0) = iVar11 + 1U;
              if (*(uint *)(param_1 + 0xf4) < iVar11 + 1U) {
                FUN_1446f48e2(local_150,iVar11);
                lVar17 = *plVar8;
                plVar21 = local_158;
              }
              *(undefined4 *)(lVar17 + lVar18 * 4) = *(undefined4 *)(lVar14 + 0xc);
              FUN_14041807a(plVar15,&local_e8,(int)*(short *)(lVar14 + 0x10));
              local_128 = (code *)0x0;
              uStack_120 = 0.0;
              local_118 = 0.0;
              uStack_110 = 0.0;
              local_108 = 0.0;
              uStack_100 = 0.0;
              local_f8 = 0;
              local_b0 = &local_e0;
              local_b8 = FUN_1436205a2;
              local_e0 = &local_128;
              FUN_1448e6002(lVar14 + 0x138,&local_b8);
              dVar5 = uStack_100 - local_118;
              dVar6 = local_108 - uStack_120;
              dVar7 = uStack_110 - (double)local_128;
              local_118 = (double)DAT_14c8464f0;
              local_128 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_120 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              FUN_140d93764(plVar15,&local_128,local_e8);
              uStack_100 = (double)param_3[2];
              uStack_110 = (double)*param_3;
              local_108 = (double)param_3[1];
              iVar11 = *(int *)(param_1 + 0xe0);
              *(uint *)(param_1 + 0xe0) = iVar11 + 1U;
              if (*(uint *)(param_1 + 0xe4) < iVar11 + 1U) {
                FUN_14041840c(plVar21,iVar11);
              }
              dVar5 = dVar5 * 0.5;
              dVar6 = dVar6 * 0.5;
              dVar7 = dVar7 * 0.5;
              if (dVar7 <= dVar6) {
                dVar7 = dVar6;
              }
              if (dVar7 <= dVar5) {
                dVar7 = dVar5;
              }
              lVar14 = *plVar21;
              lVar17 = (longlong)iVar11 * 0x38;
              puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar17);
              *puVar1 = local_108;
              puVar1[1] = uStack_100;
              puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar17);
              *puVar1 = local_118;
              puVar1[1] = uStack_110;
              *(longlong *)(lVar14 + lVar17) = (longlong)local_128;
              ((longlong *)(lVar14 + lVar17))[1] = (longlong)uStack_120;
              *(float *)(lVar14 + 0x30 + lVar17) = (float)dVar7;
              *(undefined1 *)(lVar14 + 0x34 + lVar17) = 0;
              uVar12 = (uint)uStack_d0;
            }
LAB_140417d1e:
            uVar10 = uVar12 - 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar10);
          } while (1 < (int)uVar12);
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
      if ((int)plVar15[0x1af] == *(int *)(param_1 + 0xf0)) {
        *(undefined1 *)(param_1 + 0xf8) = 1;
        local_138 = param_3[2];
        local_148 = *(undefined4 *)param_3;
        uStack_144 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_140 = *(undefined4 *)(param_3 + 1);
        uStack_13c = *(undefined4 *)((longlong)param_3 + 0xc);
        if (((*(char *)(param_1 + 0xb8) == '\x01') &&
            (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) &&
           (*(longlong *)(param_1 + 0x30) != 0)) {
          iVar11 = *(int *)(param_1 + 0xe0);
          (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2b0))();
          (**(code **)(**(longlong **)(param_1 + 0x68) + 0x420))(*(longlong **)(param_1 + 0x68),0);
          *(undefined8 *)(param_1 + 0x68) = 0;
          *(undefined1 *)(param_1 + 0xb8) = 0;
          local_118 = *(double *)(param_1 + 0x98);
          local_128 = *(code **)(param_1 + 0x88);
          uStack_120 = *(double *)(param_1 + 0x90);
          uStack_100 = (double)local_138;
          uStack_110 = (double)CONCAT44(uStack_144,local_148);
          local_108 = (double)CONCAT44(uStack_13c,uStack_140);
          plVar15 = *(longlong **)(param_1 + 8);
          if (plVar15 == (longlong *)0x0) {
            fVar22 = 100.0;
          }
          else {
            local_1a8 = local_1a8 & 0xffffff00;
            (**(code **)(*plVar15 + 800))(plVar15,1,&local_b8,&local_d8);
            fVar3 = *(float *)(*(longlong *)(param_1 + 0x30) + 0xd4);
            fVar22 = *(float *)(param_1 + 0xbc);
            if (fVar3 <= *(float *)(param_1 + 0xbc)) {
              fVar22 = fVar3;
            }
          }
          iVar4 = *(int *)(param_1 + 0xe0);
          *(uint *)(param_1 + 0xe0) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0xe4) < iVar4 + 1U) {
            FUN_14041840c((longlong *)(param_1 + 0xd8),iVar4);
          }
          lVar17 = (longlong)iVar4 * 0x38;
          lVar14 = *(longlong *)(param_1 + 0xd8);
          puVar2 = (undefined4 *)(lVar14 + 0x20 + lVar17);
          *puVar2 = (undefined4)local_108;
          puVar2[1] = local_108._4_4_;
          puVar2[2] = (undefined4)uStack_100;
          puVar2[3] = uStack_100._4_4_;
          puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar17);
          *puVar2 = (undefined4)local_118;
          puVar2[1] = local_118._4_4_;
          puVar2[2] = (undefined4)uStack_110;
          puVar2[3] = uStack_110._4_4_;
          puVar2 = (undefined4 *)(lVar14 + lVar17);
          *puVar2 = (undefined4)local_128;
          puVar2[1] = local_128._4_4_;
          puVar2[2] = (undefined4)uStack_120;
          puVar2[3] = uStack_120._4_4_;
          *(float *)(lVar14 + 0x30 + lVar17) = fVar22;
          *(undefined1 *)(lVar14 + 0x34 + lVar17) = 0;
          if (iVar11 == 0) {
            FUN_140416838(param_1);
          }
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14041807a FUN_14041807a body=260 status=ok
// SIG undefined FUN_14041807a(void)

undefined8 * FUN_14041807a(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_140418146;
    if (plVar3 == (longlong *)0x0) {
      uVar2 = 0;
      goto LAB_1404180eb;
    }
LAB_140418117:
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) {
LAB_140418171:
      FUN_1456cec3c(plVar3);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_140418146:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_140418117;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_1404180a5;
    goto LAB_140418171;
  }
LAB_1404180a5:
  lVar1 = (**(code **)(*plVar3 + 0x310))();
  uVar2 = 0;
  if (((int)param_3 < 0) || (*(int *)(lVar1 + 0x28) <= (int)param_3)) goto LAB_1404180eb;
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_140418138;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140418138:
    FUN_1456cec3c(plVar3);
  }
  lVar1 = (**(code **)(*plVar3 + 0x310))(plVar3);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)param_3 * 0xc);
LAB_1404180eb:
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14041817e FUN_14041817e body=66 status=ok
// SIG undefined FUN_14041817e(void)

void FUN_14041817e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (param_4 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_4 + 0x308))(param_4);
    FUN_1404181c0(param_1,param_2,param_3,uVar1);
    return;
  }
  return;
}



// FUNCTION 1404181c0 FUN_1404181c0 body=489 status=ok
// SIG undefined FUN_1404181c0(void)

void FUN_1404181c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,byte param_5
                  )

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if ((param_3 != 0) && (*(int *)(param_4 + 0x98) != *(int *)(param_4 + 0xc4))) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    lVar10 = *(longlong *)(param_4 + 0xd0);
    if (*(longlong *)(param_4 + 0xd0) == 0) {
      lVar10 = param_4 + 200;
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_4 + 0xd8) - 1U &
                              (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x90) + (longlong)iVar6 * 0x14);
        if (*plVar1 == param_3) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return;
          }
          iVar6 = (int)plVar1[1];
          if (iVar6 == -1) {
            return;
          }
          if (*(int *)(param_1 + 0x48) < 1) {
            return;
          }
          lVar10 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar10 * 8);
            if (lVar2 != 0) {
              lVar2 = *(longlong *)(lVar2 + 0x28);
              iVar8 = -1;
              if ((lVar2 != 0) && (*(int *)(param_4 + 0x98) != *(int *)(param_4 + 0xc4))) {
                uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
                uVar5 = (uint)lVar2 & 0xffff;
                lVar7 = *(longlong *)(param_4 + 0xd0);
                if (*(longlong *)(param_4 + 0xd0) == 0) {
                  lVar7 = param_4 + 200;
                }
                iVar9 = *(int *)(lVar7 + (ulonglong)
                                         (*(int *)(param_4 + 0xd8) - 1U &
                                         (int)((ulonglong)lVar2 >> 0x20) +
                                         ((uint)lVar2 << 0x10 | uVar5) +
                                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
                if (iVar9 != -1) {
                  do {
                    plVar1 = (longlong *)(*(longlong *)(param_4 + 0x90) + (longlong)iVar9 * 0x14);
                    if (*plVar1 == lVar2) {
                      if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                        iVar8 = (int)plVar1[1];
                      }
                      break;
                    }
                    iVar9 = *(int *)((longlong)plVar1 + 0xc);
                  } while (iVar9 != -1);
                }
              }
              if (((iVar8 == iVar6 & param_5) != 0) ||
                 (cVar4 = FUN_1404183aa(param_4,iVar8,iVar6), cVar4 != '\0')) {
                iVar8 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                  FUN_1446f48e2(param_2,iVar8);
                }
                *(int *)(*param_2 + (longlong)iVar8 * 4) = (int)lVar10;
              }
            }
            lVar10 = lVar10 + 1;
            if (*(int *)(param_1 + 0x48) <= lVar10) {
              return;
            }
          } while( true );
        }
        iVar6 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 1404183aa FUN_1404183aa body=98 status=ok
// SIG undefined FUN_1404183aa(void)

longlong FUN_1404183aa(longlong param_1,uint param_2,uint param_3)

{
  undefined8 in_RAX;
  longlong lVar1;
  uint uVar2;
  
  lVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),param_3 == 0xffffffff);
  if ((int)param_2 <= (int)param_3 || param_3 == 0xffffffff) {
    lVar1 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x28))) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      uVar2 = *(uint *)(lVar1 + 8 + (ulonglong)param_2 * 0xc);
    }
    do {
      lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),uVar2 == param_3);
      if (uVar2 == param_3) {
        return lVar1;
      }
      if ((int)uVar2 < 0) {
        return lVar1;
      }
      if (*(int *)(param_1 + 0x28) <= (int)uVar2) {
        return lVar1;
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar2 * 0xc);
    } while (uVar2 != 0xffffffff);
  }
  return lVar1;
}



// FUNCTION 14041840c FUN_14041840c body=359 status=ok
// SIG undefined FUN_14041840c(void)

void FUN_14041840c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14041849e;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14041849e:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140418574 FUN_140418574 body=326 status=ok
// SIG undefined FUN_140418574(void)

longlong FUN_140418574(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar1 != 0) != 0) goto LAB_1404186ae;
    if (lVar1 != 0) goto LAB_1404185a4;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1404186ae:
      FUN_1456cec3c(lVar1);
    }
LAB_1404185a4:
    if (DAT_14cb06da8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464003b0;
      local_38 = &LAB_147d17bdf;
      local_40 = &LAB_1417edf22;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) goto LAB_1404185cb;
  }
  lVar1 = 0;
LAB_1404185cb:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404186bc FUN_1404186bc body=231 status=ok
// SIG undefined FUN_1404186bc(void)

void FUN_1404186bc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
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
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1404187a4 FUN_1404187a4 body=1300 status=ok
// SIG undefined FUN_1404187a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1404187a4(longlong param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  undefined1 local_268 [32];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar9 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar15 = param_4 * *(double *)(param_1 + 0x10);
  dVar16 = param_4 * *(double *)(param_1 + 0x18);
  dVar12 = *(double *)(param_1 + 0x20) * param_4;
  auVar18 = *(undefined1 (*) [16])(param_3 + 8);
  dVar13 = auVar18._0_8_;
  dVar2 = auVar18._8_8_;
  auVar14 = *(undefined1 (*) [16])(param_3 + 10);
  dVar17 = auVar14._0_8_;
  auVar18 = minpd(_DAT_149934d80,auVar18);
  auVar22 = minpd(ZEXT816(0x3ff0000000000000),auVar14);
  auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
  iVar10 = movmskpd((int)local_c0,auVar19);
  auVar18._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar18._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  uVar11 = movmskpd((int)param_1,auVar18);
  if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar5 = param_3[2];
    dVar1 = param_3[3];
    dVar13 = dVar13 * dVar15;
    dVar2 = dVar2 * dVar16;
    dVar12 = dVar12 * dVar17;
    dVar15 = dVar2 * dVar3 - dVar13 * dVar4;
    dVar16 = dVar12 * dVar4 - dVar2 * dVar5;
    dVar17 = dVar13 * dVar5 - dVar12 * dVar3;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    dVar15 = dVar15 + dVar15;
    local_e8 = (dVar15 * dVar4 - dVar5 * dVar17) + dVar1 * dVar16 + dVar13 + param_3[4];
    dStack_e0 = (dVar16 * dVar5 - dVar15 * dVar3) + param_3[3] * dVar17 + dVar2 + param_3[5];
    local_d8 = (dVar17 * dVar3 - dVar4 * dVar16) + dVar1 * dVar15 + dVar12 + param_3[6];
  }
  else {
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar8 = param_3[2];
    dVar5 = dVar7 + dVar7;
    dVar20 = dVar8 + dVar8;
    dVar1 = dVar6 * (dVar6 + dVar6);
    dVar3 = dVar7 * dVar5;
    auVar22._8_4_ = SUB84(dVar3,0);
    auVar22._0_8_ = dVar1;
    auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dStack_1a0 = (DAT_149934d80._8_8_ - (dVar8 * dVar20 + dVar1)) * dVar2;
    local_278 = (1.0 - (dVar1 + dVar3)) * dVar17;
    dStack_270 = (0.0 - (dVar1 + auVar22._8_8_)) * auVar14._8_8_;
    dVar1 = param_3[3];
    dVar21 = dVar20 * dVar1;
    dVar23 = (dVar6 + dVar6) * param_3[3];
    dVar1 = dVar5 * dVar1;
    dVar4 = (dVar5 * dVar6 + dVar21) * dVar13;
    local_198 = (dVar20 * dVar7 + dVar23) * dVar2;
    local_188 = (dVar1 + *param_3 * dVar20) * dVar17;
    local_1a8 = (dVar5 * dVar6 - dVar21) * dVar2;
    dStack_180 = (dVar20 * dVar7 - dVar23) * dVar17;
    local_1b8 = (*param_3 * dVar20 - dVar1) * dVar13;
    local_1c8._8_4_ = SUB84(dVar4,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar8 * dVar20 + dVar3)) * dVar13;
    local_1c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_3[4];
    dStack_160 = param_3[5];
    local_158 = param_3[6];
    uStack_150 = 0x3ff0000000000000;
    local_248 = 0x3ff0000000000000;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0x3ff0000000000000;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = 0;
    uStack_1d0 = 0x3ff0000000000000;
    local_1e8 = dVar15;
    dStack_1e0 = dVar16;
    local_1d8 = dVar12;
    local_178 = local_278;
    FUN_1447fea8d(&local_148,&local_248,local_1c8);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar2);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar13);
    auVar18 = blendvpd(_DAT_149936790,auVar9,auVar14);
    dVar13 = (double)(~-(ulonglong)(0.0 <= dVar17) & 0xbff0000000000000 |
                     (ulonglong)((uint)(-(ulonglong)(0.0 <= dVar17) >> 0x20) & 0x3ff00000) << 0x20);
    dVar17 = auVar18._0_8_;
    local_138 = local_138 * dVar17;
    local_140 = local_140 * dVar17;
    local_148 = local_148 * dVar17;
    dVar17 = auVar18._8_8_;
    local_118 = local_118 * dVar17;
    local_120 = local_120 * dVar17;
    local_128 = dVar17 * local_128;
    local_f8 = local_f8 * dVar13;
    local_100 = local_100 * dVar13;
    local_108 = dVar13 * local_108;
    FUN_14481fd10(local_268,&local_148);
  }
  param_4 = param_4 * *(double *)(param_1 + 0x28);
  *param_2 = local_e8 - param_4;
  param_2[1] = dStack_e0 - param_4;
  param_2[2] = local_d8 - param_4;
  param_2[3] = local_e8 + param_4;
  param_2[4] = dStack_e0 + param_4;
  param_2[5] = local_d8 + param_4;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_c0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140418cba FUN_140418cba body=365 status=ok
// SIG undefined FUN_140418cba(void)

void FUN_140418cba(longlong param_1,double *param_2,double param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)(param_1 + 0x40) * *param_2;
  dVar2 = ABS(dVar1);
  if (ABS(dVar1) <= param_3) {
    dVar2 = param_3;
  }
  dVar2 = dVar2 * (double)(-(ulonglong)(0.0 < dVar1) & 0x3ff0000000000000 |
                          (ulonglong)
                          (~(uint)(-(ulonglong)(0.0 < dVar1) >> 0x20) &
                          (uint)(-(ulonglong)(dVar1 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
  *(double *)(param_1 + 0x40) = dVar2;
  dVar3 = *(double *)(param_1 + 0x48) * param_2[1];
  dVar1 = ABS(dVar3);
  if (ABS(dVar3) <= param_3) {
    dVar1 = param_3;
  }
  dVar1 = dVar1 * (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                          (ulonglong)
                          (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                          (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
  *(double *)(param_1 + 0x48) = dVar1;
  dVar4 = *(double *)(param_1 + 0x50) * param_2[2];
  dVar3 = ABS(dVar4);
  if (ABS(dVar4) <= param_3) {
    dVar3 = param_3;
  }
  dVar3 = dVar3 * (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                          ~-(ulonglong)(0.0 < dVar4) &
                          -(ulonglong)(dVar4 < 0.0) & 0xbff0000000000000);
  *(double *)(param_1 + 0x50) = dVar3;
  *(double *)(param_1 + 8) = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  if (param_4 != '\0') {
    *(double *)(param_1 + 0x10) = *param_2 * *(double *)(param_1 + 0x10);
    *(double *)(param_1 + 0x18) = param_2[1] * *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x20) = param_2[2] * *(double *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140418e28 FUN_140418e28 body=328 status=ok
// SIG undefined FUN_140418e28(void)

void FUN_140418e28(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x58;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140418e92;
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
LAB_140418e92:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,8);
  }
  return;
}



// FUNCTION 140418f70 FUN_140418f70 body=353 status=ok
// SIG undefined FUN_140418f70(void)

double FUN_140418f70(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1404190d2(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if ((longlong)(int)uStack_70 < 1) {
    dVar8 = 0.0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10);
    dVar8 = 0.0;
    uVar9 = 0;
    do {
      lVar10 = (longlong)*(int *)(local_78 + uVar9 * 4);
      lVar11 = (longlong)*(int *)(local_78 + 4 + uVar9 * 4);
      lVar12 = (longlong)*(int *)(local_78 + 8 + uVar9 * 4);
      dVar1 = *(double *)(lVar7 + lVar12 * 0x18);
      dVar2 = *(double *)(lVar7 + 8 + lVar12 * 0x18);
      dVar3 = *(double *)(lVar7 + lVar11 * 0x18);
      dVar4 = *(double *)(lVar7 + 8 + lVar11 * 0x18);
      dVar5 = *(double *)(lVar7 + 0x10 + lVar11 * 0x18);
      dVar6 = *(double *)(lVar7 + 0x10 + lVar12 * 0x18);
      dVar8 = dVar8 + ((dVar3 * dVar2 - dVar1 * dVar4) * *(double *)(lVar7 + 0x10 + lVar10 * 0x18) +
                      (dVar4 * dVar6 - dVar2 * dVar5) * *(double *)(lVar7 + lVar10 * 0x18) +
                      (dVar1 * dVar5 - dVar3 * dVar6) * *(double *)(lVar7 + 8 + lVar10 * 0x18)) /
                      6.0;
      uVar9 = uVar9 + 3;
    } while (uVar9 < (ulonglong)(longlong)(int)uStack_70);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return dVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404190d2 FUN_1404190d2 body=5065 status=ok
// SIG undefined FUN_1404190d2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1404190d2(void *param_1,uint param_2,longlong *param_3)

{
  ushort uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  size_t _Size;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  size_t sVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double dVar18;
  longlong lVar19;
  longlong **pplVar20;
  ushort uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  double dVar25;
  ushort uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 auStack_2590 [4];
  undefined8 uStack_2570;
  longlong *local_2568;
  double local_2560 [4];
  double *local_2540;
  double local_2538 [5];
  ushort local_2510;
  ushort local_250e;
  undefined2 local_250c;
  double local_2508;
  double local_2500;
  double local_24f8;
  undefined2 local_24f0;
  undefined2 local_24ee;
  undefined2 local_24ec;
  double local_24e8;
  double local_24e0;
  double local_24d8;
  undefined2 local_24d0;
  undefined2 local_24ce;
  undefined2 local_24cc;
  double local_24c8;
  double local_24c0;
  double local_24b8;
  undefined2 local_24b0;
  undefined2 local_24ae;
  undefined2 local_24ac;
  double local_24a8;
  double local_24a0;
  double local_2498;
  ushort *local_510;
  undefined8 local_508;
  undefined1 local_500 [1024];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1404190e8;
  dVar25 = (double)(ulonglong)param_2;
  local_f0 = DAT_14c707940 ^ (ulonglong)&local_24e8;
  pplVar20 = &local_2568;
  if ((int)param_2 < 4) goto LAB_14041a2d1;
  _Size = (longlong)dVar25 * 0x18;
  sVar14 = 0;
  dVar34 = DAT_14c8464e0;
  dVar2 = DAT_14c8464e8;
  dVar4 = DAT_14c8464f0;
  do {
    dVar34 = dVar34 + *(double *)((longlong)param_1 + sVar14);
    dVar2 = dVar2 + *(double *)((longlong)param_1 + sVar14 + 8);
    dVar4 = dVar4 + *(double *)((longlong)param_1 + sVar14 + 0x10);
    sVar14 = sVar14 + 0x18;
  } while (_Size != sVar14);
  uStack_2570 = 0x1404191c4;
  lVar7 = -((longlong)dVar25 * 0x18 + 0x1eU & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x1404191d9;
  memcpy((void *)((longlong)&local_2568 + lVar7),param_1,_Size);
  dVar27 = 1.0 / (double)(int)param_2;
  sVar14 = 0;
  do {
    *(double *)((longlong)&local_2568 + sVar14 + lVar7) =
         *(double *)((longlong)&local_2568 + sVar14 + lVar7) - dVar34 * dVar27;
    *(double *)((longlong)local_2560 + sVar14 + lVar7) =
         *(double *)((longlong)local_2560 + sVar14 + lVar7) - dVar2 * dVar27;
    *(double *)((longlong)local_2560 + sVar14 + lVar7 + 8) =
         *(double *)((longlong)local_2560 + sVar14 + lVar7 + 8) - dVar27 * dVar4;
    sVar14 = sVar14 + 0x18;
  } while (_Size != sVar14);
  local_2540 = *(double **)((longlong)local_2538 + lVar7 + 0x10);
  dVar34 = *(double *)((longlong)local_2560 + lVar7 + 8);
  dVar2 = *(double *)((longlong)local_2538 + lVar7 + 8);
  local_2538[4] = *(double *)((longlong)&local_2568 + lVar7);
  local_2538[3] = *(double *)((longlong)local_2560 + lVar7);
  dVar4 = *(double *)((longlong)local_2538 + lVar7);
  local_2538[0] = *(double *)((longlong)&local_2540 + lVar7);
  dVar3 = local_2538[0] - dVar34;
  local_2560[2] = *(double *)((longlong)local_2560 + lVar7 + 0x18);
  dVar32 = local_2560[2] - local_2538[3];
  local_2538[1] = *(double *)((longlong)local_2560 + lVar7 + 0x10);
  dVar6 = local_2538[1] - local_2538[4];
  dVar29 = dVar6 * (dVar2 - local_2538[3]) - (dVar4 - local_2538[4]) * dVar32;
  dVar28 = dVar3 * (dVar4 - local_2538[4]) - ((double)local_2540 - dVar34) * dVar6;
  dVar33 = dVar32 * ((double)local_2540 - dVar34) - (dVar2 - local_2538[3]) * dVar3;
  dVar27 = dVar29 * dVar29 + dVar33 * dVar33 + dVar28 * dVar28;
  uVar10 = 0;
  local_100 = (undefined1 *)0x0;
  local_f8 = 0x10000000000;
  local_510 = (ushort *)0x0;
  local_508 = 0x10000000000;
  if (9.99999993922529e-09 < dVar27) {
    dVar27 = 1.0 / SQRT(dVar27);
    dVar33 = dVar33 * dVar27;
    dVar28 = dVar28 * dVar27;
    dVar29 = dVar29 * dVar27;
  }
  dVar27 = local_2538[4] * dVar33 + local_2538[3] * dVar28 + dVar34 * dVar29;
  pdVar17 = (double *)((longlong)&local_2540 + lVar7);
  dVar18 = 4.94065645841247e-324;
  do {
    dVar5 = *pdVar17 * dVar29 + pdVar17[-2] * dVar33 + pdVar17[-1] * dVar28;
    if (dVar27 < dVar5) {
      uVar10 = (ulonglong)dVar18 & 0xffffffff;
      dVar27 = dVar5;
    }
    uVar22 = (uint)uVar10;
    dVar18 = (double)((longlong)dVar18 + 1);
    pdVar17 = pdVar17 + 3;
  } while (dVar25 != dVar18);
  if (uVar22 < 3) {
    dVar27 = (-dVar33 * local_2538[4] - local_2538[3] * dVar28) - dVar34 * dVar29;
    pdVar17 = (double *)((longlong)&local_2540 + lVar7);
    uVar10 = 0;
    dVar18 = 4.94065645841247e-324;
    do {
      dVar5 = *pdVar17 * -dVar29 + pdVar17[-2] * -dVar33 + pdVar17[-1] * -dVar28;
      if (dVar27 < dVar5) {
        uVar10 = (ulonglong)dVar18 & 0xffffffff;
        dVar27 = dVar5;
      }
      uVar22 = (uint)uVar10;
      dVar18 = (double)((longlong)dVar18 + 1);
      pdVar17 = pdVar17 + 3;
    } while (dVar25 != dVar18);
    if (2 < uVar22) goto LAB_1404193d9;
  }
  else {
LAB_1404193d9:
    lVar15 = (longlong)(int)uVar22;
    dVar27 = *(double *)((longlong)local_2560 + lVar15 * 0x18 + lVar7 + 8);
    local_2538[2] = dVar34;
    dVar18 = *(double *)((longlong)&local_2568 + lVar15 * 0x18 + lVar7);
    dVar5 = *(double *)((longlong)local_2560 + lVar15 * 0x18 + lVar7);
    dVar30 = (dVar34 - dVar27) * dVar29 +
             (local_2538[4] - dVar18) * dVar33 + (local_2538[3] - dVar5) * dVar28;
    if (0.0 >= dVar30) {
      dVar29 = -dVar29;
      dVar28 = -dVar28;
      dVar33 = -dVar33;
    }
    local_2510 = (ushort)(dVar30 <= 0.0);
    local_250e = (ushort)(0.0 < dVar30);
    local_250c = 2;
    local_2508 = dVar33;
    local_2500 = dVar28;
    local_24f8 = dVar29;
    dVar33 = dVar34 - (double)local_2540;
    dVar29 = local_2538[3] - dVar2;
    dVar28 = local_2538[4] - dVar4;
    local_24d8 = dVar28 * (dVar5 - dVar2) - (dVar18 - dVar4) * dVar29;
    local_24e0 = dVar33 * (dVar18 - dVar4) - (dVar27 - (double)local_2540) * dVar28;
    local_24e8 = dVar29 * (dVar27 - (double)local_2540) - (dVar5 - dVar2) * dVar33;
    dVar30 = local_24d8 * local_24d8 + local_24e8 * local_24e8 + local_24e0 * local_24e0;
    if (9.99999993922529e-09 < dVar30) {
      dVar30 = 1.0 / SQRT(dVar30);
      local_24e8 = local_24e8 * dVar30;
      local_24e0 = local_24e0 * dVar30;
      local_24d8 = local_24d8 * dVar30;
    }
    if ((dVar34 - local_2538[0]) * local_24d8 +
        (local_2538[4] - local_2538[1]) * local_24e8 + (local_2538[3] - local_2560[2]) * local_24e0
        <= 0.0) {
      local_24e8 = -local_24e8;
      local_24e0 = -local_24e0;
      local_24d8 = -local_24d8;
      local_24ee = 2;
      local_24f0 = 0;
    }
    else {
      local_24ee = 0;
      local_24f0 = 2;
    }
    local_24ec = (undefined2)uVar22;
    local_24b8 = (dVar18 - local_2538[4]) * dVar32 - dVar6 * (dVar5 - local_2538[3]);
    local_24c0 = (dVar27 - dVar34) * dVar6 - dVar3 * (dVar18 - local_2538[4]);
    local_24c8 = (dVar5 - local_2538[3]) * dVar3 - dVar32 * (dVar27 - dVar34);
    dVar34 = local_24b8 * local_24b8 + local_24c8 * local_24c8 + local_24c0 * local_24c0;
    if (9.99999993922529e-09 < dVar34) {
      dVar34 = 1.0 / SQRT(dVar34);
      local_24c8 = local_24c8 * dVar34;
      local_24c0 = local_24c0 * dVar34;
      local_24b8 = local_24b8 * dVar34;
    }
    if (0.0 < dVar33 * local_24b8 + dVar28 * local_24c8 + dVar29 * local_24c0) {
      local_24d0 = 0;
      local_24ce = local_24ec;
    }
    else {
      local_24c8 = -local_24c8;
      local_24c0 = -local_24c0;
      local_24b8 = -local_24b8;
      local_24d0 = local_24ec;
      local_24ce = 0;
    }
    local_24cc = 1;
    local_2498 = (dVar4 - local_2538[1]) * (dVar5 - local_2560[2]) -
                 (dVar18 - local_2538[1]) * (dVar2 - local_2560[2]);
    local_24a0 = ((double)local_2540 - local_2538[0]) * (dVar18 - local_2538[1]) -
                 (dVar27 - local_2538[0]) * (dVar4 - local_2538[1]);
    local_24a8 = (dVar2 - local_2560[2]) * (dVar27 - local_2538[0]) -
                 ((double)local_2540 - local_2538[0]) * (dVar5 - local_2560[2]);
    dVar34 = local_2498 * local_2498 + local_24a8 * local_24a8 + local_24a0 * local_24a0;
    if (9.99999993922529e-09 < dVar34) {
      dVar34 = 1.0 / SQRT(dVar34);
      local_24a8 = local_24a8 * dVar34;
      local_24a0 = local_24a0 * dVar34;
      local_2498 = local_2498 * dVar34;
    }
    local_508 = 0x10000000004;
    if (dVar3 * local_2498 + dVar6 * local_24a8 + dVar32 * local_24a0 <= 0.0) {
      local_24a8 = -local_24a8;
      local_24a0 = -local_24a0;
      local_2498 = -local_2498;
      local_24ae = 1;
      local_24b0 = 2;
    }
    else {
      local_24ae = 2;
      local_24b0 = 1;
    }
    local_24ac = local_24ec;
    local_2560[3] = (double)(ulonglong)uVar22;
    dVar34 = 1.48219693752374e-323;
    local_2568 = param_3;
    local_2560[1] = dVar25;
    do {
      if (dVar34 != local_2560[3]) {
        local_2540 = (double *)((longlong)&local_2568 + (longlong)dVar34 * 0x18 + lVar7);
        local_2538[3] = dVar34;
        if ((ushort)local_508 != 0) {
          dVar25 = local_2540[2];
          local_2538[4] = *local_2540;
          local_2538[2] = local_2540[1];
          uVar21 = (ushort)local_508;
          do {
            uVar10 = local_f8;
            uVar21 = uVar21 - 1;
            puVar11 = local_510;
            if (local_510 == (ushort *)0x0) {
              puVar11 = &local_2510;
            }
            uVar8 = (ulonglong)uVar21;
            uVar1 = puVar11[uVar8 * 0x10];
            uVar13 = (ulonglong)uVar1;
            dVar2 = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7 + 8);
            dVar4 = *(double *)((longlong)&local_2568 + uVar13 * 0x18 + lVar7);
            dVar27 = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7);
            dVar3 = *(double *)(puVar11 + uVar8 * 0x10 + 4);
            dVar6 = *(double *)(puVar11 + uVar8 * 0x10 + 8);
            dVar32 = *(double *)(puVar11 + uVar8 * 0x10 + 0xc);
            dVar28 = (dVar25 - dVar2) * dVar32 +
                     (local_2538[4] - dVar4) * dVar3 + (local_2538[2] - dVar27) * dVar6;
            if (ABS(dVar28) < 9.99999993922529e-09) {
              uVar26 = puVar11[uVar8 * 0x10 + 1];
              uVar13 = (ulonglong)uVar26;
              dVar29 = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7 + 8);
              local_2560[2] = *(double *)((longlong)&local_2568 + uVar13 * 0x18 + lVar7);
              dVar33 = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7);
              local_2538[0] = dVar25;
              local_2538[1] = dVar33;
              if (0.0 <= ((local_2560[2] - dVar4) * dVar6 - dVar3 * (dVar33 - dVar27)) *
                         (dVar25 - dVar2) +
                         ((dVar33 - dVar27) * dVar32 - dVar6 * (dVar29 - dVar2)) *
                         (local_2538[4] - dVar4) +
                         (local_2538[2] - dVar27) *
                         ((dVar29 - dVar2) * dVar3 - dVar32 * (local_2560[2] - dVar4)))
              goto LAB_1404198e2;
              uVar13 = (ulonglong)puVar11[uVar8 * 0x10 + 2];
              local_2560[0] = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7 + 8);
              local_2538[1] = *(double *)((longlong)&local_2568 + uVar13 * 0x18 + lVar7);
              dVar18 = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7);
              if (0.0 <= ((dVar18 - dVar33) * dVar32 - dVar6 * (local_2560[0] - dVar29)) *
                         (local_2538[4] - local_2560[2]) +
                         ((local_2560[0] - dVar29) * dVar3 -
                         dVar32 * (local_2538[1] - local_2560[2])) * (local_2538[2] - dVar33) +
                         ((local_2538[1] - local_2560[2]) * dVar6 - dVar3 * (dVar18 - dVar33)) *
                         (dVar25 - dVar29)) goto LAB_1404198e2;
              if ((-0.10000000149011612 < dVar28) ||
                 (((dVar27 - dVar18) * dVar32 - (dVar2 - local_2560[0]) * dVar6) *
                  (local_2538[4] - local_2538[1]) +
                  ((dVar2 - local_2560[0]) * dVar3 - dVar32 * (dVar4 - local_2538[1])) *
                  (local_2538[2] - dVar18) +
                  ((dVar4 - local_2538[1]) * dVar6 - dVar3 * (dVar27 - dVar18)) *
                  (dVar25 - local_2560[0]) < 0.0)) goto LAB_1404198fb;
            }
            else {
LAB_1404198e2:
              if (-0.10000000149011612 < dVar28) {
                uVar26 = puVar11[uVar8 * 0x10 + 1];
LAB_1404198fb:
                puVar12 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar12 = local_500;
                }
                lVar15 = (longlong)(int)(uint)local_f8;
                if (lVar15 != 0) {
                  iVar23 = 1;
                  lVar19 = 0;
                  lVar16 = 0;
                  do {
                    if (((*(ushort *)(puVar12 + lVar19) == uVar1) &&
                        (*(ushort *)(puVar12 + lVar19 + 2) == uVar26)) ||
                       ((*(ushort *)(puVar12 + lVar19) == uVar26 &&
                        (*(ushort *)(puVar12 + lVar19 + 2) == uVar1)))) {
                      if (iVar23 != 0) {
                        iVar23 = (uint)local_f8 - iVar23;
                        if (iVar23 != 0) {
                          if (0 < iVar23) {
                            iVar23 = 1;
                          }
                          *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419c37;
                          memmove(puVar12 + (lVar16 >> 0x20) * 4,
                                  puVar12 + (longlong)(int)((uint)local_f8 - iVar23) * 4,
                                  (longlong)iVar23 << 2);
                        }
                        local_f8._0_4_ = (uint)local_f8 - 1;
                        goto LAB_1404199bc;
                      }
                      break;
                    }
                    lVar16 = lVar16 + 0x100000000;
                    iVar23 = iVar23 + 1;
                    lVar19 = lVar19 + 4;
                  } while (lVar15 * 4 - lVar19 != 0);
                }
                uVar22 = (uint)local_f8 + 1;
                local_f8._0_4_ = uVar22;
                if (local_f8._4_4_ < uVar22) {
                  *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419992;
                  FUN_14041a5b4(local_500,uVar10 & 0xffffffff);
                }
                puVar12 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar12 = local_500;
                }
                *(uint *)(puVar12 + lVar15 * 4) = CONCAT22(uVar26,uVar1);
LAB_1404199bc:
                uVar22 = (uint)local_f8;
                puVar11 = local_510;
                if (local_510 == (ushort *)0x0) {
                  puVar11 = &local_2510;
                }
                uVar1 = puVar11[(ulonglong)uVar21 * 0x10 + 2];
                uVar26 = puVar11[(ulonglong)uVar21 * 0x10 + 1];
                puVar12 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar12 = local_500;
                }
                lVar15 = (longlong)(int)(uint)local_f8;
                if ((uint)local_f8 != 0) {
                  iVar23 = 1;
                  lVar19 = 0;
                  lVar16 = 0;
                  do {
                    if (((*(ushort *)(puVar12 + lVar19) == uVar26) &&
                        (*(ushort *)(puVar12 + lVar19 + 2) == uVar1)) ||
                       ((*(ushort *)(puVar12 + lVar19) == uVar1 &&
                        (*(ushort *)(puVar12 + lVar19 + 2) == uVar26)))) {
                      if (iVar23 != 0) {
                        iVar23 = (uint)local_f8 - iVar23;
                        if (iVar23 != 0) {
                          if (0 < iVar23) {
                            iVar23 = 1;
                          }
                          *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419c97;
                          memmove(puVar12 + (lVar16 >> 0x20) * 4,
                                  puVar12 + (longlong)(int)((uint)local_f8 - iVar23) * 4,
                                  (longlong)iVar23 << 2);
                        }
                        local_f8._0_4_ = (uint)local_f8 - 1;
                        goto LAB_140419a9c;
                      }
                      break;
                    }
                    lVar16 = lVar16 + 0x100000000;
                    iVar23 = iVar23 + 1;
                    lVar19 = lVar19 + 4;
                  } while (lVar15 * 4 - lVar19 != 0);
                }
                local_f8._0_4_ = (uint)local_f8 + 1;
                if (local_f8._4_4_ < (uint)local_f8) {
                  *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419a6e;
                  FUN_14041a5b4(local_500,uVar22);
                }
                puVar12 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar12 = local_500;
                }
                *(uint *)(puVar12 + lVar15 * 4) = CONCAT22(uVar1,uVar26);
LAB_140419a9c:
                uVar22 = (uint)local_f8;
                puVar11 = local_510;
                if (local_510 == (ushort *)0x0) {
                  puVar11 = &local_2510;
                }
                uVar1 = puVar11[(ulonglong)uVar21 * 0x10];
                uVar26 = puVar11[(ulonglong)uVar21 * 0x10 + 2];
                puVar12 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar12 = local_500;
                }
                lVar15 = (longlong)(int)(uint)local_f8;
                if ((uint)local_f8 != 0) {
                  iVar23 = 1;
                  lVar19 = 0;
                  lVar16 = 0;
                  do {
                    if (((*(ushort *)(puVar12 + lVar19) == uVar26) &&
                        (*(ushort *)(puVar12 + lVar19 + 2) == uVar1)) ||
                       ((*(ushort *)(puVar12 + lVar19) == uVar1 &&
                        (*(ushort *)(puVar12 + lVar19 + 2) == uVar26)))) {
                      if (iVar23 != 0) {
                        iVar23 = (uint)local_f8 - iVar23;
                        if (iVar23 != 0) {
                          if (0 < iVar23) {
                            iVar23 = 1;
                          }
                          *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419cfb;
                          memmove(puVar12 + (lVar16 >> 0x20) * 4,
                                  puVar12 + (longlong)(int)((uint)local_f8 - iVar23) * 4,
                                  (longlong)iVar23 << 2);
                        }
                        local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 - 1);
                        goto LAB_140419b74;
                      }
                      break;
                    }
                    lVar16 = lVar16 + 0x100000000;
                    iVar23 = iVar23 + 1;
                    lVar19 = lVar19 + 4;
                  } while (lVar15 * 4 - lVar19 != 0);
                }
                local_f8._0_4_ = (uint)local_f8 + 1;
                if (local_f8._4_4_ < (uint)local_f8) {
                  *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419b4d;
                  FUN_14041a5b4(local_500,uVar22);
                }
                puVar12 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar12 = local_500;
                }
                *(uint *)(puVar12 + lVar15 * 4) = CONCAT22(uVar1,uVar26);
LAB_140419b74:
                iVar23 = ~(uint)uVar21 + (int)local_508;
                if (iVar23 != 0) {
                  if (0 < iVar23) {
                    iVar23 = 1;
                  }
                  puVar11 = local_510;
                  if (local_510 == (ushort *)0x0) {
                    puVar11 = &local_2510;
                  }
                  *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419bc6;
                  memmove(puVar11 + (ulonglong)uVar21 * 0x10,
                          puVar11 + (longlong)((int)local_508 - iVar23) * 0x10,(longlong)iVar23 << 5
                         );
                }
                local_508 = CONCAT44(local_508._4_4_,(int)local_508 + -1);
                *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x140419be4;
                FUN_14041a4a0(&local_2510);
                dVar34 = local_2538[3];
              }
            }
          } while (uVar21 != 0);
        }
        dVar25 = local_2560[1];
        uVar10 = local_f8 & 0xffffffff;
        if (0 < (int)(uint)local_f8) {
          dVar2 = local_2540[2];
          dVar4 = *local_2540;
          dVar27 = local_2540[1];
          uVar22 = 1;
          do {
            uVar8 = local_508;
            puVar12 = local_100;
            if (local_100 == (undefined1 *)0x0) {
              puVar12 = local_500;
            }
            uVar13 = (ulonglong)(uVar22 - 1 & 0xffff);
            uVar1 = *(ushort *)(puVar12 + uVar13 * 4);
            uVar24 = (ulonglong)uVar1;
            dVar3 = *(double *)((longlong)local_2560 + uVar24 * 0x18 + lVar7 + 8);
            dVar31 = dVar2 - dVar3;
            dVar6 = *(double *)((longlong)&local_2568 + uVar24 * 0x18 + lVar7);
            dVar32 = *(double *)((longlong)local_2560 + uVar24 * 0x18 + lVar7);
            dVar5 = dVar27 - dVar32;
            dVar30 = dVar4 - dVar6;
            uVar21 = *(ushort *)(puVar12 + uVar13 * 4 + 2);
            uVar13 = (ulonglong)uVar21;
            dVar28 = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7 + 8);
            dVar3 = dVar28 - dVar3;
            dVar29 = *(double *)((longlong)&local_2568 + uVar13 * 0x18 + lVar7);
            dVar33 = *(double *)((longlong)local_2560 + uVar13 * 0x18 + lVar7);
            dVar32 = dVar33 - dVar32;
            dVar6 = dVar29 - dVar6;
            dVar18 = dVar6 * dVar5 - dVar30 * dVar32;
            dVar6 = dVar3 * dVar30 - dVar31 * dVar6;
            dVar3 = dVar32 * dVar31 - dVar3 * dVar5;
            dVar32 = dVar18 * dVar18 + dVar3 * dVar3 + dVar6 * dVar6;
            if (9.99999993922529e-09 < dVar32) {
              dVar32 = 1.0 / SQRT(dVar32);
              dVar3 = dVar3 * dVar32;
              dVar6 = dVar6 * dVar32;
              dVar18 = dVar18 * dVar32;
              dVar32 = dVar18 * dVar18 + dVar3 * dVar3 + dVar6 * dVar6;
            }
            if (9.999999747378752e-05 <= dVar32) {
              iVar23 = (int)local_508;
              uVar26 = uVar21;
              if (dVar28 * dVar18 + dVar29 * dVar3 + dVar33 * dVar6 <= -9.999999747378752e-05) {
                dVar18 = -dVar18;
                dVar6 = -dVar6;
                dVar3 = -dVar3;
                uVar26 = uVar1;
                uVar1 = uVar21;
              }
              uVar9 = (int)local_508 + 1;
              local_508 = CONCAT44(local_508._4_4_,(int)local_508 + 1);
              if (local_508._4_4_ < uVar9) {
                *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x14041a458;
                FUN_142b73cf6(&local_2510,uVar8 & 0xffffffff);
                dVar34 = local_2538[3];
              }
              puVar11 = local_510;
              if (local_510 == (ushort *)0x0) {
                puVar11 = &local_2510;
              }
              lVar15 = (longlong)iVar23;
              puVar11[lVar15 * 0x10] = uVar1;
              puVar11[lVar15 * 0x10 + 1] = uVar26;
              puVar11[lVar15 * 0x10 + 2] = SUB82(dVar34,0);
              *(double *)(puVar11 + lVar15 * 0x10 + 4) = dVar3;
              *(double *)(puVar11 + lVar15 * 0x10 + 8) = dVar6;
              *(double *)(puVar11 + lVar15 * 0x10 + 0xc) = dVar18;
              uVar10 = local_f8 & 0xffffffff;
            }
            uVar9 = uVar22 & 0xffff;
            uVar22 = uVar22 + 1;
          } while ((int)uVar9 < (int)uVar10);
        }
        param_3 = local_2568;
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x14041a47c;
          FUN_1456afac4(uVar10);
        }
        uVar8 = local_f8 >> 0x20;
        local_f8 = local_f8 & 0xffffffff00000000;
        if ((int)uVar8 != (int)uVar10) {
          *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x14041a1ed;
          FUN_14041a70e();
          dVar34 = local_2538[3];
        }
      }
      dVar34 = (double)((longlong)dVar34 + 1);
    } while (dVar34 != dVar25);
    lVar15 = param_3[1];
    *(int *)(param_3 + 1) = (int)lVar15 + (int)local_508 * 3;
    if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar15) < (uint)((int)local_508 * 3)) {
      *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x14041a234;
      FUN_1446f48e2();
    }
    if (0 < (int)local_508) {
      lVar15 = 0;
      lVar16 = 0;
      lVar19 = 0;
      do {
        puVar11 = local_510;
        if (local_510 == (ushort *)0x0) {
          puVar11 = &local_2510;
        }
        *(uint *)(*param_3 + lVar15) = (uint)*(ushort *)((longlong)puVar11 + lVar16);
        puVar11 = local_510;
        if (local_510 == (ushort *)0x0) {
          puVar11 = &local_2510;
        }
        *(uint *)(*param_3 + 4 + lVar15) = (uint)*(ushort *)((longlong)puVar11 + lVar16 + 2);
        puVar11 = local_510;
        if (local_510 == (ushort *)0x0) {
          puVar11 = &local_2510;
        }
        *(uint *)(*param_3 + 8 + lVar15) = (uint)*(ushort *)((longlong)puVar11 + lVar16 + 4);
        lVar19 = lVar19 + 1;
        lVar16 = lVar16 + 0x20;
        lVar15 = lVar15 + 0xc;
      } while (lVar19 < (int)local_508);
    }
  }
  if (local_510 != (ushort *)0x0) {
    *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x14041a485;
    FUN_1400020a8();
  }
  pplVar20 = (longlong **)((longlong)&local_2568 + lVar7);
  if (local_100 != (undefined1 *)0x0) {
    *(undefined8 *)((longlong)auStack_2590 + lVar7) = 0x14041a497;
    FUN_1400020a8();
    pplVar20 = (longlong **)((longlong)&local_2568 + lVar7);
  }
LAB_14041a2d1:
  if ((local_f0 ^ (ulonglong)&local_24e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)pplVar20 + -0x28) = &UNK_14041a34f;
  FUN_144d8e3a0();
}



// FUNCTION 14041a4a0 FUN_14041a4a0 body=275 status=ok
// SIG undefined FUN_14041a4a0(void)

void FUN_14041a4a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2008);
  uVar4 = (ulonglong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x200c);
  uVar5 = 0x100;
  if (0x100 < uVar4) {
    iVar3 = uVar2 - uVar1;
    if (((longlong)iVar3 & 0x7fffffffffffe00U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar2 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    uVar5 = uVar1;
    if (0 < (int)uVar1) {
      uVar6 = uVar4 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x400) {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 * 2]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar6 = -uVar4 & (uVar6 + uVar4) - 1;
          }
        }
        else {
          uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
          uVar2 = *(uint *)(param_1 + 0x200c);
        }
      }
      uVar5 = (uint)(uVar6 >> 5);
    }
  }
  if (uVar5 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x200c) = uVar5;
  FUN_142b6cb40(param_1,*(undefined4 *)(param_1 + 0x2008));
  return;
}



// FUNCTION 14041a5b4 FUN_14041a5b4 body=345 status=ok
// SIG undefined FUN_14041a5b4(void)

void FUN_14041a5b4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x408);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar8 = 0x100;
  if (0x100 < uVar3) {
    lVar5 = (longlong)(int)uVar3;
    if (0x100 < *(uint *)(param_1 + 0x40c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14041a652;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_14041a652:
    iVar4 = (int)(uVar6 >> 2);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x40c) = iVar8;
  FUN_142b6cab0(param_1,param_2);
  return;
}



// FUNCTION 14041a70e FUN_14041a70e body=324 status=ok
// SIG undefined FUN_14041a70e(void)

void FUN_14041a70e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0x100;
    if (0x100 < param_2) {
      uVar4 = (ulonglong)param_2 * 4;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar5 = uVar4 + 0xf;
          if (param_2 < 0x1ffd) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            if ((uVar5 & 0x3fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
              uVar6 = 0x32;
              if (0x32 < bVar2) {
                uVar6 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14041a781;
                lVar1 = uVar6 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar4 & ((uVar5 & 0x3fffffff0) + uVar4) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
LAB_14041a781:
      iVar3 = (int)(uVar4 >> 2);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar7 = iVar3;
      }
    }
  }
  if (iVar7 != *(int *)(param_1 + 0x40c)) {
    *(int *)(param_1 + 0x40c) = iVar7;
    FUN_142b6cab0(param_1,*(undefined4 *)(param_1 + 0x408));
    return;
  }
  return;
}



// FUNCTION 14041a852 FUN_14041a852 body=74 status=ok
// SIG undefined FUN_14041a852(void)

void FUN_14041a852(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x308))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 14041a89c FUN_14041a89c body=85 status=ok
// SIG undefined FUN_14041a89c(void)

void FUN_14041a89c(longlong *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x318))();
    if ((char)param_1[0xc] == '\0') {
      if (cVar1 != '\0') goto LAB_14041a8e4;
    }
    else if (cVar1 != (char)param_1[0xb]) goto LAB_14041a8e4;
    cVar1 = (**(code **)(*param_1 + 0x300))(param_1);
    if ((char)param_1[0xc] == '\0') {
      if (cVar1 != '\0') goto LAB_14041a8e4;
    }
    else if (cVar1 != *(char *)((longlong)param_1 + 0x59)) {
LAB_14041a8e4:
      FUN_1402798cc(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14041a8f2 FUN_14041a8f2 body=63 status=ok
// SIG undefined FUN_14041a8f2(void)

undefined8 FUN_14041a8f2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14041acbe();
  plVar2 = (longlong *)FUN_14041a931(uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = FUN_14041aba4(uVar1,*(undefined8 *)(param_1 + 200));
    return uVar1;
  }
  return 0;
}



// FUNCTION 14041a931 FUN_14041a931 body=166 status=ok
// SIG undefined FUN_14041a931(void)

longlong FUN_14041a931(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x180))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x178), lVar2 != 0)) {
    lVar3 = FUN_14041aabe();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) &&
       (((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0 &&
        ((plVar1 = *(longlong **)(lVar2 + 0x488), plVar1 != (longlong *)0x0 &&
         ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)))))) {
      uVar4 = FUN_14041a9d8();
      lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar4);
      if (lVar2 != 0) {
        uVar4 = FUN_14041a9d8();
        lVar3 = FUN_144718840(lVar2,uVar4);
        if (lVar2 != lVar3) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14041a9d8 FUN_14041a9d8 body=228 status=ok
// SIG undefined FUN_14041a9d8(void)

longlong FUN_14041a9d8(void)

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
  if (DAT_14cb5d180 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148692d75;
    local_40 = FUN_1464da1b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryPinningInterface",&DAT_14cb5d180,&DAT_148692d74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041aabe FUN_14041aabe body=228 status=ok
// SIG undefined FUN_14041aabe(void)

longlong FUN_14041aabe(void)

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
  if (DAT_14cb5efa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464e475c;
    local_38 = &LAB_1486b12c6;
    local_40 = &LAB_1464e4761;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x530;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameState",&DAT_14cb5efa0,FUN_1464e4734);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5efa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041aba4 FUN_14041aba4 body=180 status=ok
// SIG undefined FUN_14041aba4(void)

ulonglong FUN_14041aba4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong unaff_RBX;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || (lVar2 = param_1[1], (longlong)(int)lVar2 == 0)) {
    unaff_RBX = 0;
  }
  else {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      if ((*(char *)(lVar1 + 8 + lVar4) == '\x02') && (*(longlong *)(lVar1 + 0x68 + lVar4) != 0)) {
        puVar3 = *(undefined4 **)(param_2 + 8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = &DAT_14c9485f0;
        }
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
        FUN_1447325ac(puVar3,&local_48,1);
        if (*(longlong *)(lVar1 + 0x68 + lVar4) == local_48) break;
      }
      lVar4 = lVar4 + 0x78;
      unaff_RBX = 0;
    } while ((longlong)(int)lVar2 * 0x78 - lVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14041ac5a FUN_14041ac5a body=99 status=ok
// SIG undefined FUN_14041ac5a(void)

undefined8 FUN_14041ac5a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_14041acbe();
  plVar2 = (longlong *)FUN_14041a931(uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = *(undefined8 *)(param_1 + 200);
    lVar4 = FUN_14041acbe(param_1);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + 0x398);
    }
    uVar1 = FUN_14041ad86(uVar3,uVar5,uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14041acbe FUN_14041acbe body=200 status=ok
// SIG undefined FUN_14041acbe(void)

undefined8 FUN_14041acbe(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x2c))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar5;
      }
      else {
        lVar3 = 0;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x138) != (longlong *)0x0)) {
        if ((*(int *)(lVar3 + 0x134) != 0) &&
           ((uVar1 = *(uint *)(lVar3 + 0x130), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((lVar4 != 0) &&
             ((*(int *)(lVar4 + 0x10) == *(int *)(lVar3 + 0x134) &&
              ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014041ad7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (**(code **)(**(longlong **)(lVar3 + 0x138) + 0x10))();
            return uVar2;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14041ad86 FUN_14041ad86 body=192 status=ok
// SIG undefined FUN_14041ad86(void)

undefined8 FUN_14041ad86(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((longlong)(int)param_1[1] == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = *param_1;
      lVar5 = (longlong)(int)param_1[1] * 0x78;
      do {
        if ((*(char *)(lVar4 + 8) == '\x02') && (*(longlong *)(lVar4 + 0x68) != 0)) {
          puVar3 = *(undefined4 **)(param_3 + 8);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = &DAT_14c9485f0;
          }
          FUN_1447325ac(puVar3,&local_40,1);
          if ((*(longlong *)(lVar4 + 0x68) == local_40) &&
             (lVar1 = FUN_14479d2ce(lVar4), lVar1 == param_2)) {
            uVar2 = 1;
            break;
          }
        }
        lVar4 = lVar4 + 0x78;
        uVar2 = 0;
        lVar5 = lVar5 + -0x78;
      } while (lVar5 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14041ae48 FUN_14041ae48 body=472 status=ok
// SIG undefined FUN_14041ae48(void)

bool FUN_14041ae48(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  cVar4 = DAT_14c96b1e1;
  lVar2 = *(longlong *)(param_1 + 0x208);
  cVar1 = *(char *)(lVar2 + 0x39);
  if (cVar1 == DAT_14c96b1e1) goto LAB_14041af11;
  if ((*(uint *)(param_1 + 0x26c) < 2) || (bVar3 = true, *(uint *)(param_1 + 0x26c) - 6 < 3)) {
    if (*(char *)(param_1 + 0x298) != '\x01') {
      bVar3 = false;
      goto LAB_14041af3b;
    }
    if (*(char *)(param_1 + 0x2f0) == '\x01') {
      *(undefined1 *)(param_1 + 0x2f0) = 0;
    }
LAB_14041aea5:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c98f1d8) && (FUN_144b3d300(&DAT_14c98f1d8), DAT_14c98f1d8 == -1)) {
      FUN_14570e3a0(&DAT_14c98f1a0);
      _Init_thread_footer(&DAT_14c98f1d8);
    }
    fVar6 = (float)FUN_14041b020(param_1,&DAT_14c98f1a0);
  }
  else {
LAB_14041af3b:
    *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) | 0x80;
    FUN_1405d299c(lVar2,param_2);
    pfVar5 = (float *)&DAT_14c84635c;
    if ((*(byte *)(lVar2 + 0x31) & 0x20) != 0) {
      pfVar5 = (float *)(lVar2 + 0x168);
    }
    fVar6 = pfVar5[1];
    *(double *)(param_1 + 0x2e0) = (double)*pfVar5;
    *(double *)(param_1 + 0x2e8) = (double)fVar6;
    *(undefined1 *)(param_1 + 0x2f0) = 1;
    if (!bVar3) goto LAB_14041aea5;
    if (*(char *)(param_1 + 0x298) != '\x01') {
      FUN_140163244(lVar2,0x80);
      if (*(char *)(param_1 + 0x2fc) == '\x01') {
        *(undefined1 *)(param_1 + 0x2fc) = 0;
      }
      goto LAB_14041af11;
    }
    fVar6 = (float)FUN_14041b020(param_1,param_1 + 0x2a0);
    FUN_140163244(lVar2,0x80);
  }
  fVar7 = fVar6;
  if (*(char *)(param_1 + 0x274) != '\0') {
    fVar7 = fVar6 / param_2;
  }
  *(uint *)(param_1 + 0x2f8) =
       ~-(uint)(param_2 != 0.0) & (uint)fVar6 | (uint)fVar7 & -(uint)(param_2 != 0.0);
  *(undefined1 *)(param_1 + 0x2fc) = 1;
LAB_14041af11:
  return cVar1 != cVar4;
}



// FUNCTION 14041b020 FUN_14041b020 body=285 status=ok
// SIG undefined FUN_14041b020(void)

float FUN_14041b020(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  
  iVar3 = *(int *)(param_1 + 0x26c);
  if (iVar3 - 7U < 2) {
    return *(float *)(param_1 + 0x270);
  }
  if (iVar3 != 6) {
    pfVar4 = (float *)&DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_1 + 0x208) + 0x31) & 0x20) != 0) {
      pfVar4 = (float *)(*(longlong *)(param_1 + 0x208) + 0x168);
    }
    fVar1 = *pfVar4;
    fVar5 = 1.0;
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      fVar2 = pfVar4[1];
      if ((fVar2 != 0.0) || (NAN(fVar2))) {
        switch(iVar3) {
        case 2:
          fVar5 = *param_2 / fVar1;
          if (param_2[1] / fVar2 <= *param_2 / fVar1) {
            fVar5 = param_2[1] / fVar2;
          }
          break;
        case 3:
          fVar5 = *param_2 / fVar1;
          break;
        case 4:
          fVar5 = param_2[1] / fVar2;
          break;
        case 5:
          fVar5 = *param_2 / fVar1;
          if (*param_2 / fVar1 <= param_2[1] / fVar2) {
            fVar5 = param_2[1] / fVar2;
          }
          break;
        default:
          fVar5 = 1.0;
        }
        if (*(int *)(param_1 + 0x268) == 2) {
          if (fVar5 <= 1.0) {
            fVar5 = 1.0;
          }
        }
        else if (*(int *)(param_1 + 0x268) == 1) {
          if (1.0 <= fVar5) {
            fVar5 = 1.0;
          }
          return fVar5;
        }
      }
    }
    return fVar5;
  }
  return *(float *)(param_1 + 0x278);
}



// FUNCTION 14041b13e FUN_14041b13e body=181 status=ok
// SIG undefined FUN_14041b13e(void)

void FUN_14041b13e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    uVar5 = 0;
    do {
      cVar2 = FUN_1448c4e4a(lVar4 + uVar5,param_2);
      if (cVar2 != '\0') {
        if ((int)(uVar5 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x18;
    } while (lVar3 * 0x18 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14041b1f4(param_1,iVar1);
    lVar4 = *param_1;
  }
  *(undefined8 *)(lVar4 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar4 + lVar3 * 0x18) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar4 + 8 + lVar3 * 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar4 + 0xc + lVar3 * 0x18) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar3 * 0x18) = param_2[2];
  return;
}



// FUNCTION 14041b1f4 FUN_14041b1f4 body=370 status=ok
// SIG undefined FUN_14041b1f4(void)

void FUN_14041b1f4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14041b27d;
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
LAB_14041b27d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14041b366 FUN_14041b366 body=2297 status=ok
// SIG undefined FUN_14041b366(void)

void FUN_14041b366(longlong param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  int *piVar19;
  double *pdVar20;
  double *pdVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  uint *puVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_228 [32];
  longlong *local_208;
  longlong local_1f8;
  double local_1f0 [9];
  double local_1a8;
  longlong local_1a0;
  float *local_198;
  double dStack_190;
  double local_188 [5];
  ulonglong uStack_160;
  undefined4 local_158;
  double local_148 [17];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x198) + (longlong)(param_2 / 0x9249) * 8);
  lVar13 = (longlong)(param_2 % 0x9249) * 0x38;
  if (*(int *)(lVar15 + 0x1c + lVar13) < 0) {
    plVar24 = (longlong *)(lVar15 + lVar13);
    if ((*(byte *)((longlong)plVar24 + 0x34) & 4) == 0) {
      plVar14 = (longlong *)plVar24[1];
      if ((int)plVar24[3] < 0) {
        plVar17 = plVar14;
        if (plVar14 == (longlong *)0x0) {
          plVar17 = plVar24;
        }
        if ((longlong)(int)plVar24[2] != 0) {
          lVar15 = 0;
          uVar12 = 0;
          do {
            uVar12 = uVar12 + *(int *)(*(longlong *)((longlong)plVar17 + lVar15) + 0x208);
            if (1 < uVar12) {
              local_1a0 = (ulonglong)local_1a0._1_7_ << 8;
              local_1f0[3] = 0.0;
              local_1f0[4] = 0.0;
              local_1f0[5] = 0.0;
              local_1f0[6] = 0.0;
              local_1f0[7] = 0.0;
              local_1f0[8] = 0.0;
              local_1a8 = (double)((ulonglong)local_1a8 & 0xffffffffffffff00);
              local_198 = (float *)0x0;
              dStack_190 = 0.0;
              local_188[0] = 0.0;
              local_188[1] = 0.0;
              local_188[2] = 0.0;
              local_188[3] = 0.0;
              local_188[4] = 0.0;
              uStack_160 = 0;
              local_158 = 0;
              FUN_1471dd6c4(plVar24,local_1f0 + 3,local_148);
              local_208 = plVar24;
              FUN_14499c238(param_1,param_2,local_148,local_1f0 + 3);
              FUN_1401edd52(local_188);
              goto LAB_14041bb21;
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)plVar24[2] * 8 != lVar15);
        }
      }
      if (plVar14 == (longlong *)0x0) {
        plVar14 = plVar24;
      }
      lVar15 = *plVar14;
      pdVar20 = (double *)(*(longlong *)(lVar15 + 8) + 0x100);
      pdVar21 = local_1f0 + 3;
      for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar21 = *pdVar20;
        pdVar20 = pdVar20 + 1;
        pdVar21 = pdVar21 + 1;
      }
      lVar13 = FUN_14499c118(lVar15);
      if (lVar13 != 0) {
        piVar19 = (int *)(lVar13 + 0x110);
        if ((*(byte *)(lVar13 + 0x11a) & 1) == 0) {
          piVar19 = (int *)(lVar13 + 0xd8);
        }
        uVar12 = *piVar19 - 1U;
        if ((int)*(uint *)(plVar24 + 3) < (int)(*piVar19 - 1U)) {
          uVar12 = *(uint *)(plVar24 + 3);
        }
        if ((int)uVar12 < 1) {
          uVar12 = 0;
        }
        lVar23 = *(longlong *)(lVar13 + 0xd0);
        lVar22 = (ulonglong)uVar12 * 0x30;
        pfVar1 = (float *)(lVar23 + 0xc + lVar22);
        pfVar2 = (float *)(lVar23 + 0x18 + lVar22);
        local_198 = (float *)(double)*pfVar2;
        local_1f0[3] = (double)*(float *)(lVar23 + lVar22);
        local_1f0[5] = (double)*(float *)(lVar23 + 8 + lVar22);
        local_1f0[4] = (double)((float *)(lVar23 + lVar22))[1];
        local_1f0[7] = (double)*pfVar1;
        local_1f0[8] = (double)pfVar1[1];
        local_1a8 = (double)*(float *)(lVar23 + 0x14 + lVar22);
        local_188[0] = (double)*(float *)(lVar23 + 0x20 + lVar22);
        dStack_190 = (double)pfVar2[1];
        local_1f0[6] = 0.0;
        local_1a0 = 0;
        local_188[1] = 0.0;
        local_188[2] = (double)pfVar2[3] + *(double *)(lVar13 + 0x30);
        local_188[3] = (double)*(float *)(lVar23 + 0x28 + lVar22) + *(double *)(lVar13 + 0x38);
        local_188[4] = (double)*(float *)(lVar23 + 0x2c + lVar22) + *(double *)(lVar13 + 0x40);
        uStack_160 = 0x3ff0000000000000;
      }
      lVar15 = (**(code **)(**(longlong **)(lVar15 + 8) + 0xa8))();
      if (lVar15 != 0) {
        local_208 = plVar24;
        FUN_14499c238(param_1,param_2,local_1f0 + 3,lVar15 + 8);
      }
    }
    else {
      local_1a0 = (ulonglong)local_1a0._1_7_ << 8;
      local_198 = (float *)0x0;
      dStack_190 = 0.0;
      local_188[0] = 0.0;
      local_188[1] = 0.0;
      local_188[2] = 0.0;
      local_188[3] = 0.0;
      local_188[4] = 0.0;
      uStack_160 = 0;
      local_158 = 0;
      plVar14 = (longlong *)plVar24[1];
      if ((longlong *)plVar24[1] == (longlong *)0x0) {
        plVar14 = plVar24;
      }
      lVar15 = *(longlong *)(*plVar14 + 8);
      pdVar20 = (double *)(lVar15 + 0x100);
      pdVar21 = local_148;
      for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar21 = *pdVar20;
        pdVar20 = pdVar20 + 1;
        pdVar21 = pdVar21 + 1;
      }
      fVar3 = *(float *)(DAT_14c9edb88 + 4);
      local_1f0[0] = 1.0;
      local_1f0[1] = 1.0;
      local_1f0[2] = 1.0;
      lVar13 = 0;
      do {
        dVar27 = *(double *)((longlong)local_148 + lVar13 * 4);
        dVar9 = *(double *)((longlong)local_148 + lVar13 * 4 + 8);
        dVar10 = *(double *)((longlong)local_148 + lVar13 * 4 + 0x10);
        dVar27 = dVar10 * dVar10 + dVar27 * dVar27 + dVar9 * dVar9;
        *(ulonglong *)((longlong)local_1f0 + lVar13) =
             -(ulonglong)(9.99999993922529e-09 < dVar27) & (ulonglong)SQRT(dVar27);
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0x18);
      dVar27 = (double)fVar3;
      local_1f0[8] = *(double *)(lVar15 + 0x1c8) + *(double *)(lVar15 + 0x1e0) +
                     dVar27 / local_1f0[2];
      local_1f0[7] = *(double *)(lVar15 + 0x1c0) + *(double *)(lVar15 + 0x1d8) +
                     dVar27 / local_1f0[1];
      local_1f0[6] = *(double *)(lVar15 + 0x1b8) + *(double *)(lVar15 + 0x1d0) +
                     dVar27 / local_1f0[0];
      local_1f0[5] = (*(double *)(lVar15 + 0x1c8) - *(double *)(lVar15 + 0x1e0)) -
                     dVar27 / local_1f0[2];
      local_1f0[4] = (*(double *)(lVar15 + 0x1c0) - *(double *)(lVar15 + 0x1d8)) -
                     dVar27 / local_1f0[1];
      local_1f0[3] = (*(double *)(lVar15 + 0x1b8) - *(double *)(lVar15 + 0x1d0)) -
                     dVar27 / local_1f0[0];
      local_1a8 = (double)CONCAT71(local_1a8._1_7_,1);
      FUN_14041c3f8(&local_198,1,1);
      pfVar1 = local_198;
      local_198[9] = 0.0;
      local_198[10] = 0.0;
      local_198[0xb] = 1.0;
      FUN_14041c796(local_198 + 9,local_198 + 3,local_198 + 6);
      fVar3 = pfVar1[9];
      fVar4 = pfVar1[6];
      fVar5 = pfVar1[7];
      fVar6 = pfVar1[10];
      fVar26 = fVar3 * fVar5 - fVar4 * fVar6;
      fVar7 = pfVar1[0xb];
      fVar8 = pfVar1[8];
      fVar28 = fVar7 * fVar4 - fVar8 * fVar3;
      fVar29 = fVar6 * fVar8 - fVar5 * fVar7;
      pfVar1[3] = fVar29;
      pfVar1[4] = fVar28;
      pfVar1[5] = fVar26;
      fVar30 = fVar26 * fVar26 + fVar29 * fVar29 + fVar28 * fVar28;
      if (1e-08 < fVar30) {
        fVar30 = 1.0 / SQRT(fVar30);
        fVar29 = fVar29 * fVar30;
        pfVar1[3] = fVar29;
        fVar28 = fVar28 * fVar30;
        pfVar1[4] = fVar28;
        fVar26 = fVar26 * fVar30;
        pfVar1[5] = fVar26;
      }
      *pfVar1 = (float)((local_1f0[3] + local_1f0[6]) * 0.5);
      pfVar1[1] = (float)((local_1f0[4] + local_1f0[7]) * 0.5);
      pfVar1[2] = (float)((local_1f0[5] + local_1f0[8]) * 0.5);
      fVar30 = (float)((local_1f0[8] - local_1f0[5]) * 0.5);
      fVar31 = (float)((local_1f0[7] - local_1f0[4]) * 0.5);
      fVar32 = (float)((local_1f0[6] - local_1f0[3]) * 0.5);
      pfVar1[0xc] = ABS(fVar26 * fVar30 + fVar29 * fVar32 + fVar28 * fVar31);
      pfVar1[0xd] = ABS(fVar8 * fVar30 + fVar4 * fVar32 + fVar5 * fVar31);
      pfVar1[0xe] = ABS(fVar7 * fVar30 + fVar3 * fVar32 + fVar6 * fVar31);
      *(undefined1 *)(pfVar1 + 0xf) = 5;
      local_208 = plVar24;
      FUN_14499c238(param_1,param_2,local_148,local_1f0 + 3);
      FUN_1401edd9e(local_188[4],uStack_160 & 0xffffffff);
      if (local_188[4] != 0.0) {
        FUN_1400020a8();
      }
      if (local_188[2] != 0.0) {
        FUN_1400020a8();
      }
      if (local_188[0] != 0.0) {
        FUN_1400020a8();
      }
LAB_14041bb21:
      if (local_198 != (float *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((longlong)(int)plVar24[5] < 0) {
      puVar25 = (uint *)((longlong)*(int *)((longlong)plVar24 + 0x24) * 0x20 +
                        *(longlong *)(param_1 + 0x4a8));
    }
    else {
      puVar25 = (uint *)((longlong)(int)plVar24[5] * 0x20 + *(longlong *)(param_1 + 0x3a0));
    }
    if ((longlong)*(int *)((longlong)plVar24 + 0x1c) < 0) {
      *(byte *)((longlong)plVar24 + 0x34) = *(byte *)((longlong)plVar24 + 0x34) & 0xfe;
      FUN_1447f585c(param_1 + 0x158,param_2);
      uVar12 = *puVar25 & 0xfffffffd;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x298) + (longlong)*(int *)((longlong)plVar24 + 0x1c) * 400;
      lVar13 = lVar15 + 0x170;
      *(undefined4 *)(lVar15 + 0x180) = 0;
      if (*(int *)(lVar15 + 0x184) < 0) {
        FUN_1448aa092(lVar13,0);
      }
      iVar18 = (int)plVar24[2];
      if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar18);
      }
      if (*(int *)(lVar15 + 0x184) < iVar18) {
        FUN_1448aa092(lVar13);
        iVar18 = (int)plVar24[2];
      }
      plVar14 = (longlong *)plVar24[1];
      if ((longlong *)plVar24[1] == (longlong *)0x0) {
        plVar14 = plVar24;
      }
      if (iVar18 != 0) {
        local_1f8 = param_1 + 0x778;
        lVar23 = 0;
        do {
          lVar22 = *(longlong *)((longlong)plVar14 + lVar23);
          uVar12 = *(uint *)(lVar22 + 0x158);
          if ((~uVar12 & 0x7fffffff) != 0) {
            iVar11 = *(int *)(lVar15 + 0x180);
            *(uint *)(lVar15 + 0x180) = iVar11 + 1U;
            if (*(uint *)(lVar15 + 0x184) < iVar11 + 1U) {
              FUN_141733800(lVar13,iVar11);
            }
            lVar16 = *(longlong *)(lVar15 + 0x178);
            if (*(longlong *)(lVar15 + 0x178) == 0) {
              lVar16 = lVar13;
            }
            *(uint *)(lVar16 + (longlong)iVar11 * 4) = uVar12;
            FUN_1447f585c(local_1f8,*(undefined4 *)(lVar22 + 0x158));
          }
          lVar23 = lVar23 + 8;
        } while ((longlong)iVar18 * 8 != lVar23);
      }
      uVar12 = *puVar25 | 1;
    }
    *puVar25 = uVar12;
  }
  if ((local_c0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14041bc60 FUN_14041bc60 body=737 status=ok
// SIG undefined FUN_14041bc60(void)

bool FUN_14041bc60(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  double local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 1.0;
  local_88[1] = 1.0;
  local_88[2] = 1.0;
  lVar6 = 0;
  do {
    dVar9 = *(double *)((longlong)param_1 + lVar6 * 4);
    dVar12 = *(double *)((longlong)param_1 + lVar6 * 4 + 8);
    dVar11 = *(double *)((longlong)param_1 + lVar6 * 4 + 0x10);
    dVar9 = dVar11 * dVar11 + dVar9 * dVar9 + dVar12 * dVar12;
    *(ulonglong *)((longlong)local_88 + lVar6) =
         -(ulonglong)(9.99999993922529e-09 < dVar9) & (ulonglong)SQRT(dVar9);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x18);
  dVar9 = ABS(local_88[0]);
  if (ABS(local_88[1]) <= ABS(local_88[0])) {
    dVar9 = ABS(local_88[1]);
  }
  if (ABS(local_88[2]) <= dVar9) {
    dVar9 = ABS(local_88[2]);
  }
  if (9.999999747378752e-05 <= dVar9) {
    dVar9 = *param_1;
    dVar12 = param_1[1];
    dVar11 = param_1[2];
    dVar8 = param_1[4];
    dVar10 = param_1[5];
    dVar7 = param_1[6];
    dVar3 = dVar11 * dVar11 + dVar9 * dVar9 + dVar12 * dVar12;
    if (9.99999993922529e-09 < dVar3) {
      dVar3 = 1.0 / SQRT(dVar3);
      dVar9 = dVar9 * dVar3;
      dVar12 = dVar12 * dVar3;
      dVar11 = dVar11 * dVar3;
    }
    dVar3 = param_1[8];
    dVar1 = param_1[9];
    dVar2 = param_1[10];
    dVar4 = dVar7 * dVar7 + dVar8 * dVar8 + dVar10 * dVar10;
    if (9.99999993922529e-09 < dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      dVar8 = dVar8 * dVar4;
      dVar10 = dVar10 * dVar4;
      dVar7 = dVar7 * dVar4;
    }
    dVar4 = dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1;
    if (9.99999993922529e-09 < dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      dVar3 = dVar3 * dVar4;
      dVar1 = dVar1 * dVar4;
      dVar2 = dVar2 * dVar4;
    }
    if ((ABS(dVar11 * dVar7 + dVar9 * dVar8 + dVar12 * dVar10) < 9.999999747378752e-05) &&
       (ABS(dVar11 * dVar2 + dVar9 * dVar3 + dVar12 * dVar1) < 9.999999747378752e-05)) {
      bVar5 = ABS(dVar7 * dVar2 + dVar8 * dVar3 + dVar10 * dVar1) < 9.999999747378752e-05;
      goto LAB_14041bef7;
    }
  }
  bVar5 = false;
LAB_14041bef7:
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041bf42 FUN_14041bf42 body=211 status=ok
// SIG undefined FUN_14041bf42(void)

void FUN_14041bf42(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = &DAT_14c846400;
    puVar3 = param_1;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1[0x10] = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
    puVar2 = &DAT_14c846400;
    puVar3 = param_1 + 0x12;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1[0x22] = 0xbff0000000000000;
    param_1[0x23] = 0xbff0000000000000;
    param_1[0x24] = 0xbff0000000000000;
    param_1[0x25] = 0xbff0000000000000;
    param_1[0x26] = 0xbff0000000000000;
    param_1[0x27] = 0xbff0000000000000;
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
    param_1[0x2f] = 0;
    param_1[0x30] = 0x100000000;
    *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
    param_1 = param_1 + 0x32;
  }
  return;
}



// FUNCTION 14041c016 FUN_14041c016 body=973 status=ok
// SIG undefined FUN_14041c016(void)

void FUN_14041c016(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_f8 [32];
  double local_d8 [3];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar17 = param_1;
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar17 = *param_2;
    param_2 = param_2 + 1;
    puVar17 = puVar17 + 1;
  }
  local_d8[0] = 1.0;
  local_d8[1] = 1.0;
  local_d8[2] = 1.0;
  lVar16 = 0;
  do {
    dVar20 = *(double *)((longlong)param_1 + lVar16 * 4);
    dVar1 = *(double *)((longlong)param_1 + lVar16 * 4 + 8);
    dVar2 = *(double *)((longlong)param_1 + lVar16 * 4 + 0x10);
    dVar20 = dVar2 * dVar2 + dVar20 * dVar20 + dVar1 * dVar1;
    *(ulonglong *)((longlong)local_d8 + lVar16) =
         -(ulonglong)(9.99999993922529e-09 < dVar20) & (ulonglong)SQRT(dVar20);
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x18);
  *(float *)(param_1 + 0x10) = (float)local_d8[0];
  *(float *)((longlong)param_1 + 0x84) = (float)local_d8[1];
  *(float *)(param_1 + 0x11) = (float)local_d8[2];
  puVar17 = param_1;
  puVar18 = param_1 + 0x12;
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  dVar20 = (double)param_1[0x12];
  dVar1 = (double)param_1[0x13];
  dVar2 = (double)param_1[0x14];
  dVar21 = dVar2 * dVar2 + dVar20 * dVar20 + dVar1 * dVar1;
  dVar3 = (double)param_1[0x16];
  dVar4 = (double)param_1[0x17];
  dVar5 = (double)param_1[0x18];
  dVar22 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
  dVar6 = (double)param_1[0x1a];
  dVar7 = (double)param_1[0x1b];
  dVar8 = (double)param_1[0x1c];
  dVar12 = dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7;
  uVar19 = -(ulonglong)(0.0 <= dVar21 + -9.99999993922529e-09);
  dVar21 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar21)) & uVar19);
  uVar19 = -(ulonglong)(0.0 <= dVar22 + -9.99999993922529e-09);
  dVar22 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar22)) & uVar19);
  uVar19 = -(ulonglong)(0.0 <= dVar12 + -9.99999993922529e-09);
  dVar12 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar12)) & uVar19);
  param_1[0x12] = dVar20 * dVar21;
  param_1[0x17] = dVar4 * dVar22;
  param_1[0x1c] = dVar12 * dVar8;
  uVar15 = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8;
  uVar13 = DAT_14c8464e0;
  uVar9 = param_1[0x15];
  uVar10 = param_1[0x19];
  uVar11 = param_1[0x1d];
  param_1[0x13] = dVar3 * dVar22;
  param_1[0x14] = dVar6 * dVar12;
  param_1[0x15] = uVar13;
  param_1[0x16] = dVar1 * dVar21;
  param_1[0x18] = dVar7 * dVar12;
  param_1[0x19] = uVar14;
  param_1[0x1a] = dVar21 * dVar2;
  param_1[0x1b] = dVar22 * dVar5;
  param_1[0x1d] = uVar15;
  param_1[0x1e] = uVar9;
  param_1[0x1f] = uVar10;
  param_1[0x20] = uVar11;
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041c3e4 FUN_14041c3e4 body=19 status=ok
// SIG undefined FUN_14041c3e4(void)

void FUN_14041c3e4(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 14041c3f8 FUN_14041c3f8 body=115 status=ok
// SIG undefined FUN_14041c3f8(void)

void FUN_14041c3f8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14041c46e(param_1,iVar1);
    }
    FUN_14041c46c((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1471e88a2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14041c46c FUN_14041c46c body=1 status=ok
// SIG undefined FUN_14041c46c(void)

void FUN_14041c46c(void)

{
  return;
}



// FUNCTION 14041c46e FUN_14041c46e body=255 status=ok
// SIG undefined FUN_14041c46e(void)

void FUN_14041c46e(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14041c56e FUN_14041c56e body=275 status=ok
// SIG undefined FUN_14041c56e(void)

void FUN_14041c56e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x180;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x180)) {
      uVar5 = uVar4 / 0x180 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x180,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14041c682 FUN_14041c682 body=274 status=ok
// SIG undefined FUN_14041c682(void)

void FUN_14041c682(longlong param_1,int param_2)

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
    uVar5 = lVar4 * 400;
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
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xa3d70a3d70a3d71),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,400,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14041c796 FUN_14041c796 body=390 status=ok
// SIG undefined FUN_14041c796(void)

void FUN_14041c796(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((ABS(param_1[2]) <= ABS(*param_1)) || (ABS(param_1[2]) <= ABS(param_1[1]))) {
    fVar1 = 1.0;
    fVar3 = 0.0;
  }
  else {
    fVar1 = 0.0;
    fVar3 = 1.0;
  }
  *param_2 = fVar3;
  param_2[1] = 0.0;
  param_2[2] = fVar1;
  fVar7 = fVar1 * param_1[2] + fVar3 * *param_1 + param_1[1] * 0.0;
  fVar1 = fVar1 - param_1[2] * fVar7;
  fVar5 = 0.0 - param_1[1] * fVar7;
  fVar3 = fVar3 - fVar7 * *param_1;
  fVar7 = fVar1 * fVar1 + fVar3 * fVar3 + fVar5 * fVar5;
  if (((fVar7 != 1.0) || (fVar2 = fVar1, fVar4 = fVar3, fVar6 = fVar5, NAN(fVar7))) &&
     (fVar2 = DAT_14c846338, fVar4 = (float)DAT_14c846330, fVar6 = DAT_14c846330._4_4_,
     1e-08 <= fVar7)) {
    fVar7 = 1.0 / SQRT(fVar7);
    fVar2 = fVar1 * fVar7;
    fVar4 = fVar3 * fVar7;
    fVar6 = fVar5 * fVar7;
  }
  *param_2 = fVar4;
  param_2[1] = fVar6;
  param_2[2] = fVar2;
  fVar1 = *param_1;
  fVar3 = param_1[1];
  fVar5 = param_1[2];
  *param_3 = fVar6 * fVar5 - fVar3 * fVar2;
  param_3[1] = fVar2 * fVar1 - fVar4 * fVar5;
  param_3[2] = fVar4 * fVar3 - fVar1 * fVar6;
  return;
}



// FUNCTION 14041c91c FUN_14041c91c body=353 status=ok
// SIG undefined FUN_14041c91c(void)

void FUN_14041c91c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14041c9a1;
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
LAB_14041c9a1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14041ca7e FUN_14041ca7e body=338 status=ok
// SIG undefined FUN_14041ca7e(void)

undefined4 FUN_14041ca7e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [36];
  undefined1 local_44 [20];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (**(code **)(*param_1 + 0x180))();
  FUN_1402b6034(&local_30,uVar7);
  if (local_28 != (longlong *)0x0) {
    iVar5 = (int)local_28[1];
    do {
      if (iVar5 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar10 = local_28;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar10 != (longlong *)0x0) {
      if (local_30 == 0) {
LAB_14041cb59:
        uVar6 = 0;
      }
      else {
        if (*(int *)(param_2 + 0x1c) == 0) {
LAB_14041cb9e:
          uVar7 = 0;
        }
        else {
          uVar3 = *(uint *)(param_2 + 0x18);
          uVar7 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((puVar9 == (undefined8 *)0x0) ||
               ((*(int *)(puVar9 + 2) != *(int *)(param_2 + 0x1c) ||
                ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_14041cb9e;
            uVar7 = *puVar9;
          }
        }
        FUN_14041cbd2(local_44,uVar7);
        lVar8 = FUN_14041cc7c(local_30,local_44);
        if (lVar8 == 0) goto LAB_14041cb59;
        uVar7 = (**(code **)(*(longlong *)(lVar8 + 8) + 0x10))(lVar8 + 8);
        uVar6 = FUN_14482d262(uVar7,3);
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
      goto LAB_14041cb61;
    }
  }
  uVar6 = 0;
LAB_14041cb61:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14041cbd2 FUN_14041cbd2 body=169 status=ok
// SIG undefined FUN_14041cbd2(void)

undefined8 * FUN_14041cbd2(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  *param_1 = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)((longlong)param_1 + 4) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
    }
  }
  *(int *)(param_1 + 1) = iVar2;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14041cc7c FUN_14041cc7c body=218 status=ok
// SIG undefined FUN_14041cc7c(void)

undefined8 FUN_14041cc7c(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = param_2[2] ^ param_2[1];
  uVar1 = uVar6 >> 0xd ^ *param_2 - uVar6;
  uVar4 = uVar1 << 8 ^ (-0x61c88647 - uVar6) - uVar1;
  uVar8 = uVar4 >> 0xd ^ (uVar6 - uVar1) - uVar4;
  uVar6 = uVar8 >> 0xc ^ (uVar1 - uVar4) - uVar8;
  uVar1 = uVar6 << 0x10 ^ (uVar4 - uVar8) - uVar6;
  uVar4 = uVar1 >> 5 ^ (uVar8 - uVar6) - uVar1;
  uVar6 = uVar4 >> 3 ^ (uVar6 - uVar1) - uVar4;
  uVar1 = uVar6 << 10 ^ (uVar1 - uVar4) - uVar6;
  iVar2 = FUN_14041cd56(param_1 + 0x48,uVar1 >> 0xf ^ uVar4 - (uVar6 + uVar1));
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0xc48) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xc48);
    }
    uVar3 = 0;
    if ((lVar7 + (longlong)iVar2 * 0x30 != 0) &&
       (puVar5 = (undefined8 *)((longlong)iVar2 * 0x30 + lVar7 + 0x18), puVar5 != (undefined8 *)0x0)
       ) {
      uVar3 = *puVar5;
    }
  }
  return uVar3;
}



// FUNCTION 14041cd56 FUN_14041cd56 body=208 status=ok
// SIG undefined FUN_14041cd56(void)

int FUN_14041cd56(longlong param_1,uint param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xc08) != *(int *)(param_1 + 0xc2c)) {
    lVar2 = param_1 + 0xc30;
    if (*(longlong *)(param_1 + 0xcb0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xcb0);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xcb8) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xc00);
      do {
        if (lVar2 == 0) {
          lVar2 = param_1;
        }
        lVar5 = (longlong)iVar4 * 0x30;
        if (*(int *)(lVar2 + lVar5) == *param_3) {
          cVar1 = FUN_14007c268(lVar2 + lVar5 + 4,param_3 + 1);
          if ((cVar1 != '\0') &&
             (cVar1 = FUN_14007c310(lVar2 + lVar5 + 0xc,param_3 + 3), cVar1 != '\0')) {
            return iVar4;
          }
        }
        lVar2 = *(longlong *)(param_1 + 0xc00);
        lVar3 = lVar2;
        if (lVar2 == 0) {
          lVar3 = param_1;
        }
        iVar4 = *(int *)(lVar3 + 0x28 + lVar5);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14041ce26 FUN_14041ce26 body=97 status=ok
// SIG undefined FUN_14041ce26(void)

void FUN_14041ce26(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2 + 0x30;
  local_18 = param_2 + 0x38;
  if (param_4 == '\0') {
    param_1 = param_1 + 0x340;
  }
  else {
    param_1 = param_1 + 0x390;
  }
  FUN_14041ce88(param_1,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041ce88 FUN_14041ce88 body=1132 status=ok
// SIG undefined FUN_14041ce88(void)

int * FUN_14041ce88(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_14482b872(param_1,iVar16);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar5 = iVar10 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar11 = iVar10 + 1;
    iVar17 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar17 = iVar10;
    }
    if (iVar17 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        iVar5 = iVar10;
        if (iVar10 + 0x20U < 0xa0) {
          iVar11 = 0x80;
        }
        else {
          uVar13 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar13) {
              uVar21 = uVar13;
            }
          }
          else {
            uVar21 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar7 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar22 = (uint)(uVar7 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar7 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
              }
              else {
                uVar12 = (ulonglong)(uVar22 & 0xfffffff0);
                if (uVar12 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar22 >> 4];
                  uVar15 = 0x32;
                  if (0x32 < bVar9) {
                    uVar15 = (ulonglong)bVar9;
                  }
                  uVar19 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0) goto LAB_14041d1e1;
                    lVar18 = uVar15 + 1 + uVar19;
                    uVar19 = uVar19 - 1;
                  } while (lVar18 != 0x33);
                }
                uVar7 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar7 = (ulonglong)DAT_14c841df8;
                }
                uVar7 = -uVar7 & (uVar12 + uVar7) - 1;
              }
            }
            else {
              uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
              iVar5 = (int)param_1[5];
            }
          }
LAB_14041d1e1:
          iVar6 = (int)(uVar7 >> 2);
          iVar11 = -0x20;
          if ((int)uVar13 <= iVar6) {
            iVar11 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar8,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar8;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar18 = (longlong)iVar16;
    iVar10 = *(int *)(*param_1 + 4 + lVar18 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  uVar13 = 1 << ((byte)iVar16 & 0x1f);
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  iVar10 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar10 = iVar16;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4);
  *puVar1 = *puVar1 | uVar13;
  iVar5 = 1;
  puVar2 = (ulonglong *)(*param_1 + lVar18 * 0x18);
  puVar4 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *puVar2 = uVar7;
  puVar2[1] = *puVar4;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar21 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
  uVar21 = uVar21 >> 0x10 ^ uVar21;
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & uVar21) * 4);
    if (iVar11 != -1) {
      do {
        puVar4 = (ulonglong *)(*param_1 + (longlong)iVar11 * 0x18);
        if (*puVar4 == uVar7) {
          uVar7 = puVar2[1];
          *puVar4 = *puVar2;
          puVar4[1] = uVar7;
          lVar18 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar18 + (longlong)(int)param_1[6] * 0x18) = iVar16;
          }
          puVar3 = (undefined4 *)(lVar18 + (longlong)iVar16 * 0x18);
          *puVar3 = 0xffffffff;
          uVar20 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar20 = (undefined4)param_1[6];
          }
          puVar3[1] = uVar20;
          *(int *)(param_1 + 6) = iVar16;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar8 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar8 = (longlong *)param_1[4];
          }
          puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4);
          *puVar1 = *puVar1 & ~uVar13;
          iVar16 = iVar11;
          goto LAB_14041d094;
        }
        iVar11 = (int)puVar4[2];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar22) {
    uVar7 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar22 < 1) || (iVar5 <= (int)param_1[9])) {
    uVar21 = (int)param_1[9] - 1U & uVar21;
    *(uint *)((longlong)puVar2 + 0x14) = uVar21;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    FUN_14041d2f4(param_1);
  }
LAB_14041d094:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 14041d2f4 FUN_14041d2f4 body=667 status=ok
// SIG undefined FUN_14041d2f4(void)

void FUN_14041d2f4(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14041d367;
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
LAB_14041d367:
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
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14041d590 FUN_14041d590 body=391 status=ok
// SIG undefined FUN_14041d590(void)

longlong * FUN_14041d590(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x28) * 0x1c,
             (longlong)*(int *)(param_2 + 0x2c) * 0x1c);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x28);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 0x28) = 0, *(int *)(param_2 + 0x2c) != 0)) {
      FUN_14041db9e(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x92492 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x28) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar4 = param_2;
      }
      FUN_14041d78e(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x1c;
    } while (lVar7 < *(int *)(param_2 + 0x28));
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = 0;
    if ((*(uint *)(param_2 + 0x2c) == local_2c) || (FUN_14041db9e(param_2), 0 < (int)local_2c)) {
      iVar5 = 0;
      do {
        uVar3 = FUN_14041d718(param_2);
        FUN_14041d78e(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14041d718 FUN_14041d718 body=84 status=ok
// SIG undefined FUN_14041d718(void)

longlong FUN_14041d718(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_147d59b0a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x1c + lVar2;
  FUN_14041d76c(lVar2,1);
  return lVar2;
}



// FUNCTION 14041d76c FUN_14041d76c body=34 status=ok
// SIG undefined FUN_14041d76c(void)

void FUN_14041d76c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0xd) = 0;
    *(undefined4 *)((longlong)param_1 + 0x15) = 0x10101;
    param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
  }
  return;
}



// FUNCTION 14041d78e FUN_14041d78e body=1039 status=ok
// SIG undefined FUN_14041d78e(void)

longlong * FUN_14041d78e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 5);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 5) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 5) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)((longlong)param_2 + 0x15);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)((longlong)param_2 + 0x15) = local_24 != 0;
  }
  else {
    *(bool *)((longlong)param_2 + 0x15) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_1,&DAT_149e3cb60);
    if (iVar3 < 0x25) goto LAB_14041d8e5;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 6);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 6) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 6) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
LAB_14041d8e5:
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)((longlong)param_2 + 0x16);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)((longlong)param_2 + 0x16) = local_24 != 0;
  }
  else {
    *(bool *)((longlong)param_2 + 0x16) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)((longlong)param_2 + 0x17);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)((longlong)param_2 + 0x17) = local_24 != 0;
  }
  else {
    *(bool *)((longlong)param_2 + 0x17) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041db9e FUN_14041db9e body=323 status=ok
// SIG undefined FUN_14041db9e(void)

void FUN_14041db9e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = param_2;
  if (1 < param_2) {
    uVar4 = (ulonglong)param_2 * 0x1c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x492) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14041dc0b;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14041dc0b:
    uVar5 = (uint)(uVar4 / 0x1c);
    uVar7 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  if (uVar7 == *(uint *)(param_1 + 0x2c)) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar7;
  FUN_14041dce2(param_1,*(undefined4 *)(param_1 + 0x28),uVar7);
  return;
}



// FUNCTION 14041dce2 FUN_14041dce2 body=146 status=ok
// SIG undefined FUN_14041dce2(void)

void FUN_14041dce2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1c);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,0x1c);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 * 0x1c);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,0x1c);
  return;
}



// FUNCTION 14041dd74 FUN_14041dd74 body=510 status=ok
// SIG undefined FUN_14041dd74(void)

undefined8 FUN_14041dd74(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char extraout_AL;
  longlong *plVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  undefined7 extraout_var;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_14041df74();
  if ((cVar3 != '\0') && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = *(uint *)(param_1 + 8);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14041de86;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xc))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar4, lVar2 != 0)) {
      cVar3 = *(char *)(lVar2 + 0x152);
      if (((cVar3 != '\x01') && (cVar3 != '\x06')) &&
         (uVar5 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1), cVar3 != '\x03')) goto LAB_14041de86;
      plVar4 = *(longlong **)(lVar2 + 0x1f0);
      if (plVar4 != (longlong *)0x0) {
        if (DAT_14cb5e538 == 0) {
          local_30 = &local_18;
          local_18 = &LAB_1417c5d06;
          local_20 = FUN_14081d0ea;
          local_28 = &LAB_1417ad04a;
          local_38 = &LAB_1486a7af7;
          local_40 = &LAB_1464e1631;
          local_48 = &DAT_149e063b2;
          local_50 = 0;
          local_58 = 0x1000000c;
          local_60 = 8;
          local_68 = 0x420;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
          plVar4 = *(longlong **)(lVar2 + 0x1f0);
          if (plVar4 == (longlong *)0x0) goto LAB_14041df65;
        }
        uVar5 = 0;
        if ((DAT_14cb5e538 == 0) || (lVar2 = plVar4[2], uVar5 = 0, lVar2 == 0)) goto LAB_14041de86;
        if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
            DAT_14cb5e538 + 0x30)) {
          if (*(code **)(*plVar4 + 0x498) == (code *)&LAB_14015c36e) {
            cVar3 = (char)plVar4[0x42];
            uVar6 = 0x14015c3;
          }
          else {
            (**(code **)(*plVar4 + 0x498))();
            cVar3 = extraout_AL;
            uVar6 = extraout_var;
          }
          uVar5 = CONCAT71(uVar6,cVar3 == '\b');
          goto LAB_14041de86;
        }
      }
    }
  }
LAB_14041df65:
  uVar5 = 0;
LAB_14041de86:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14041df74 FUN_14041df74 body=311 status=ok
// SIG undefined FUN_14041df74(void)

bool FUN_14041df74(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0xc))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar6, lVar2 != 0)) &&
        (((*(longlong *)(lVar2 + 0x30) == 0 ||
          (lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar7 == 0)) ||
         ((*(longlong *)(lVar7 + 0x588) == 0 ||
          (*(double *)(lVar2 + 0x6d0) < *(double *)(lVar2 + 0x708))))))) &&
       (((*(byte *)(lVar2 + 0x154) & 0x40) == 0 || (iVar5 = FUN_14490d72a(lVar2), iVar5 != 3)))) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar7);
          if (*(longlong *)(lVar3 + 0x360) == lVar2) {
            if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x278) & 1) != 0)) {
              return false;
            }
            break;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar7);
      }
      bVar4 = FUN_144a80e00(lVar2);
      if (((*(byte *)(lVar2 + 0x155) & 4) == 0 & (~bVar4 | -1 < (char)*(byte *)(lVar2 + 0x155))) ==
          1) {
        iVar5 = FUN_14490d72a(lVar2);
        return iVar5 != 3;
      }
    }
  }
  return false;
}



// FUNCTION 14041e0ac FUN_14041e0ac body=61 status=ok
// SIG undefined FUN_14041e0ac(void)

void FUN_14041e0ac(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f52ef0;
  lVar1 = param_1[0x13];
  if (lVar1 != 0) {
    FUN_14041e184(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_14041e0ea(param_1);
  return;
}



// FUNCTION 14041e0ea FUN_14041e0ea body=154 status=ok
// SIG undefined FUN_14041e0ea(void)

void FUN_14041e0ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_149e36b00;
  puVar1 = (undefined8 *)param_1[0x12];
  do {
    puVar4 = puVar1;
    puVar1 = (undefined8 *)puVar4[0x11];
  } while (puVar1 != param_1);
  puVar4[0x11] = param_1[0x11];
  param_1[0x11] = 0;
  *param_1 = &PTR__purecall_149e35f70;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  lVar3 = param_1[0xf];
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 14041e184 FUN_14041e184 body=1261 status=ok
// SIG undefined FUN_14041e184(void)

void FUN_14041e184(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 0x17;
  plVar2 = param_1 + 0x19;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar14 = 0;
  local_60 = plVar2;
  if ((int)param_1[0x1c] != 0) {
    FUN_1449c0562(&local_68);
    iVar14 = (int)param_1[0x1c];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_a0 = plVar2;
  local_90 = plVar1;
  if ((iStack_54 != iVar14) || (local_60 != plVar2)) {
    do {
      puVar5 = *(undefined8 **)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar14) || (local_80 != local_a0)) || (local_90 != plVar1));
  }
  plVar2 = param_1 + 0x21;
  puVar3 = (uint *)(param_1 + 0x23);
  iVar14 = (int)param_1[0x26];
  local_98 = plVar1;
  if (iVar14 == 0) {
    uVar12 = 1;
    uVar18 = 0;
    iVar8 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x25];
    if ((uint *)param_1[0x25] == (uint *)0x0) {
      puVar7 = puVar3;
    }
    uVar15 = *puVar7;
    if (uVar15 == 0) {
      iVar8 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar8 = iVar14 + -1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar13 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_14041e39c;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar18 = 0;
      iVar13 = 0;
    }
    uVar12 = (ulonglong)(-uVar15 & uVar15);
    uVar4 = uVar12 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar8) {
      iVar8 = iVar14;
    }
  }
  if (iVar8 != iVar14) {
    uVar15 = 0xffffffff;
    iVar6 = iVar14;
    do {
      puVar5 = *(undefined8 **)(*plVar2 + 8 + (longlong)iVar8 * 0x18);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
        iVar6 = (int)param_1[0x26];
      }
      uVar15 = uVar15 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[0x25];
      if ((uint *)param_1[0x25] == (uint *)0x0) {
        puVar7 = puVar3;
      }
      iVar8 = (int)uVar18;
      lVar16 = (longlong)iVar8;
      uVar9 = puVar7[lVar16] & uVar15;
      if (uVar9 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar17 = 0;
          do {
            uVar9 = puVar7[lVar16 + lVar17 + 1];
            if (uVar9 != 0) {
              uVar18 = (ulonglong)(iVar8 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14041e372;
            }
            iVar13 = iVar13 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar11 - lVar16 != lVar17);
          uVar15 = 0xffffffff;
          lVar16 = (longlong)iVar11;
        }
        uVar18 = lVar16 + 1U & 0xffffffff;
        iVar8 = iVar6;
      }
      else {
LAB_14041e372:
        uVar12 = (ulonglong)(-uVar9 & uVar9);
        uVar4 = uVar12 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar8) {
          iVar8 = iVar6;
        }
      }
    } while (iVar8 != iVar14);
  }
LAB_14041e39c:
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    FUN_144727cd0(plVar2,0);
  }
  param_1[0x27] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x134)) {
    *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  plVar1 = local_98;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0xc4) != 0) {
    FUN_144727cd0(plVar1,0);
  }
  param_1[0x1d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xe4)) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
    FUN_1446efbd8(local_a0,0);
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14041e672(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14041e726(param_1 + 2,0);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14041e672 FUN_14041e672 body=55 status=ok
// SIG undefined FUN_14041e672(void)

void FUN_14041e672(longlong *param_1)

{
  FUN_14041e6aa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14041e6aa FUN_14041e6aa body=123 status=ok
// SIG undefined FUN_14041e6aa(void)

void FUN_14041e6aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14041e726 FUN_14041e726 body=121 status=ok
// SIG undefined FUN_14041e726(void)

void FUN_14041e726(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14041e7a0 FUN_14041e7a0 body=76 status=ok
// SIG undefined FUN_14041e7a0(void)

undefined8 * FUN_14041e7a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f48dd0;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14041e7fb FUN_14041e7fb body=134 status=ok
// SIG undefined FUN_14041e7fb(void)

void FUN_14041e7fb(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x160))();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar2 = FUN_14041e9d4(*(undefined4 *)(param_2 + 8),0);
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  FUN_14041e882(param_2,param_1);
  return;
}



// FUNCTION 14041e882 FUN_14041e882 body=170 status=ok
// SIG undefined FUN_14041e882(void)

longlong * FUN_14041e882(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    FUN_14041ecbc(param_1,&local_28);
    if (local_28 != 0) {
      local_30 = FUN_14041e92e();
      if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_30);
      }
      (**(code **)(*param_2 + 0x210))(param_2,&local_30,&local_28);
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) {
    (**(code **)(*param_2 + 0x250))(param_2,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041e92e FUN_14041e92e body=164 status=ok
// SIG undefined FUN_14041e92e(void)

undefined8 FUN_14041e92e(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9493a8) {
    FUN_144b3d300(&DAT_14c9493a8);
    if (DAT_14c9493a8 == -1) {
      FUN_1446f470e(&local_18,L"GameDataHandle",1);
      DAT_14c9493a0 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c9493a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c9493a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041e9d4 FUN_14041e9d4 body=742 status=ok
// SIG undefined FUN_14041e9d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14041e9d4(uint param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  wchar_t *_Str;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c947d78) && (FUN_144b3d300(&DAT_14c947d78), DAT_14c947d78 == -1)) {
    _DAT_14c947d48 = 0;
    _DAT_14c947d50 = 0;
    DAT_14c947d28 = 0;
    _DAT_14c947d30 = 0;
    _DAT_14c947d54 = 0xffffffff00000080;
    DAT_14c947d5c = 0;
    DAT_14c947d68 = (undefined *)0x0;
    DAT_14c947d70 = 0;
    atexit(FUN_1427b4334);
    _Init_thread_footer(&DAT_14c947d78);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (DAT_14c872ce0 == 0 || (DAT_14c947d20 & 1) != 0) goto LAB_14041ea41;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_98 = &DAT_14c872ce8;
  iVar1 = FUN_14105aa76(DAT_14c872ce0,L"GbxCoreRedirects",L"GameDataCategoryRedirects");
  if (iVar1 == 0) {
LAB_14041ec89:
    plVar5 = (longlong *)0x0;
    uVar2 = 0;
  }
  else {
    if ((longlong)(int)uStack_70 == 0) goto LAB_14041ec89;
    lVar7 = (longlong)(int)uStack_70 << 4;
    lVar6 = local_78;
    do {
      iVar1 = FUN_1403de9f2(lVar6,&local_88,&DAT_149e06196,1);
      if ((iVar1 != 0) && ((int)uStack_80 == 2)) {
        FUN_14033cb48(local_88);
        puVar4 = &DAT_149dfb77a;
        if ((int)local_88[1] != 0) {
          puVar4 = (undefined2 *)*local_88;
        }
        uVar2 = _wcstoui64(puVar4 + 1,(wchar_t **)0x0,0);
        _Str = L"";
        if ((int)local_88[3] != 0) {
          _Str = (wchar_t *)local_88[2];
        }
        local_8c = (int)uVar2;
        uVar2 = _wcstoui64(_Str,(wchar_t **)0x0,0);
        local_60 = &local_8c;
        local_58 = &local_90;
        local_90 = (int)uVar2;
        FUN_14499e2d8(&DAT_14c947d28,local_4c,&local_60,0);
      }
      lVar6 = lVar6 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
    uVar2 = uStack_80 & 0xffffffff;
    plVar5 = local_88;
  }
  DAT_14c947d20 = 1;
  FUN_1447a1747(plVar5,uVar2);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_14041ea41:
  if (DAT_14c947d30 != DAT_14c947d5c) {
    puVar3 = &DAT_14c947d60;
    if (DAT_14c947d68 != (undefined *)0x0) {
      puVar3 = DAT_14c947d68;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c947d70 - 1U & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = DAT_14c947d28 + (longlong)iVar1 * 0x10;
      if (*(uint *)(DAT_14c947d28 + (longlong)iVar1 * 0x10) == param_1) {
        if ((uint *)(lVar6 + 4) != (uint *)0x0 && lVar6 != 0) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          param_1 = *(uint *)(lVar6 + 4);
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14041ecbc FUN_14041ecbc body=534 status=ok
// SIG undefined FUN_14041ecbc(void)

longlong * FUN_14041ecbc(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined2 *local_160;
  int local_158;
  undefined2 *local_150;
  int local_148;
  undefined2 *local_140;
  int local_138;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    *param_2 = 0;
    goto LAB_14041edcf;
  }
  if (((1 < (int)param_1[1] + 1U) && (DAT_14c83bb18 != 0)) && (DAT_14c83bb10 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_14c83bb10 + 0x30))();
    if (cVar1 != '\0') {
      plVar4 = DAT_14c83bb10;
      if (DAT_14c83bb18 == 0) {
        plVar4 = (longlong *)0x0;
      }
      lVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,(int)param_1[1]);
      if (lVar2 == 0) {
        plVar4 = DAT_14c83f368;
        if (DAT_14c83f370 == 0) {
          plVar4 = (longlong *)0x0;
        }
        lVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,(int)param_1[1]);
        lVar2 = *param_1;
        if (lVar3 == 0) goto LAB_14041ee05;
        local_168 = lVar2;
        FUN_1400021e4(&local_168,&local_160);
        puVar5 = local_160;
        if (local_158 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        FUN_144a81018(&local_140,lVar3);
        FUN_140002266(&local_150,L"%s::%s",local_38,puVar5);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        if (local_160 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar5 = local_150;
        if (local_148 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        FUN_1446f470e(param_2,puVar5,1);
        local_140 = local_150;
      }
      else {
        local_160 = (undefined2 *)*param_1;
        FUN_1400021e4(&local_160,&local_150);
        puVar5 = local_150;
        if (local_148 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_140,L"%s::%s",lVar2,puVar5);
        if (local_150 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar5 = local_140;
        if (local_138 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        FUN_1446f470e(param_2,puVar5,1);
      }
      if (local_140 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14041edcf;
    }
    lVar2 = *param_1;
  }
LAB_14041ee05:
  *param_2 = lVar2;
LAB_14041edcf:
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14041eed3 FUN_14041eed3 body=570 status=ok
// SIG undefined FUN_14041eed3(void)

void FUN_14041eed3(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [44];
  uint local_bc;
  undefined1 local_b8 [128];
  undefined1 *local_38;
  longlong local_30;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_bc = 0;
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_bc,4);
    }
    else {
      FUN_14572512c(param_1,&local_bc);
    }
  }
  else {
    local_bc = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar4 = local_bc;
  if ((int)local_bc < 0) {
    local_bc = -local_bc;
  }
  uVar8 = (ulonglong)local_bc;
  if ((param_1[7] < 1) || ((longlong)uVar8 <= param_1[7])) {
    iVar2 = *(int *)(param_2 + 0x108);
    *(uint *)(param_2 + 0x108) = iVar2 + local_bc;
    if ((uint)(*(int *)(param_2 + 0x10c) - iVar2) < local_bc) {
      FUN_1467f0dc2(param_2);
      uVar8 = (ulonglong)local_bc;
    }
    uVar7 = (uint)uVar8;
    if (uVar7 != 0) {
      if ((int)uVar4 < 0) {
        lVar6 = *(longlong *)(param_2 + 0x100);
        if (*(longlong *)(param_2 + 0x100) == 0) {
          lVar6 = param_2;
        }
        (**(code **)(*param_1 + 0x170))(param_1,lVar6,(longlong)(int)uVar7 * 2);
        *(undefined2 *)(lVar6 + -2 + (longlong)(int)local_bc * 2) = 0;
      }
      else {
        local_30 = *(longlong *)(param_2 + 0x100);
        if (*(longlong *)(param_2 + 0x100) == 0) {
          local_30 = param_2;
        }
        local_38 = (undefined1 *)0x0;
        local_28 = uVar7;
        local_24 = uVar7;
        if (0x80 < uVar7) {
          FUN_1446efa72(&local_38,0,uVar8,1);
          uVar7 = local_bc;
        }
        puVar5 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar5 = local_b8;
        }
        (**(code **)(*param_1 + 0x170))(param_1,puVar5,(longlong)(int)uVar7);
        puVar5 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar5 = local_b8;
        }
        puVar5[(longlong)(int)local_bc + -1] = 0;
        puVar5 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar5 = local_b8;
        }
        uVar4 = local_24;
        if ((int)local_28 < (int)local_24) {
          uVar4 = local_28;
        }
        if (0 < (int)uVar4) {
          uVar8 = 0;
          do {
            *(short *)(local_30 + uVar8 * 2) = (short)(char)puVar5[uVar8];
            uVar8 = uVar8 + 1;
          } while (uVar4 != uVar8);
        }
        if (local_38 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    FUN_1468216ba(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14041f10e FUN_14041f10e body=1411 status=ok
// SIG undefined FUN_14041f10e(void)

int * FUN_14041f10e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  void *_Src;
  void *_Dst;
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_14041fbf2(param_1,iVar17);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar19 + 1;
    iVar12 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar12 = iVar19;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar5 = iVar19;
        }
        else {
          uVar16 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar16) {
              uVar6 = uVar16;
            }
          }
          else {
            uVar6 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar10 >> 2);
          iVar7 = -0x20;
          if ((int)uVar16 <= iVar5) {
            iVar7 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar5);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar5 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar5 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar3 = (longlong)iVar17;
    iVar19 = *(int *)(*param_1 + 4 + lVar3 * 0xe0);
    *(int *)(param_1 + 6) = iVar19;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0xe0) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar16 = 1;
  puVar8 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar8 = puVar1;
  }
  iVar19 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar19 = iVar17;
  }
  puVar8[iVar19 >> 5] = puVar8[iVar19 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  _Src = (void *)(*param_1 + lVar3 * 0xe0);
  uVar2 = param_3[1];
  puVar8 = (uint *)(*param_1 + lVar3 * 0xe0);
  *puVar8 = *(uint *)*param_3;
  FUN_14041f70c(puVar8 + 2,uVar2);
  puVar8[0x36] = 0xffffffff;
  uVar6 = *puVar8;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar11 != 0) && (uVar11 != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar6) * 4);
    if (iVar19 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar19 * 0xe0);
        if (*(uint *)(*param_1 + (longlong)iVar19 * 0xe0) == uVar6) {
          FUN_14041f8ca((longlong)_Dst + 8);
          memmove(_Dst,_Src,0xd8);
          FUN_14041f692(param_1,iVar17);
          iVar17 = iVar19;
          goto LAB_14041f2c0;
        }
        iVar19 = *(int *)((longlong)_Dst + 0xd8);
      } while (iVar19 != -1);
    }
  }
  if (3 < uVar11) {
    uVar10 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar11 < 1) || ((int)uVar16 <= (int)param_1[9])) {
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0xdc) = uVar6;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xd8) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar17;
    goto LAB_14041f2c0;
  }
  *(uint *)(param_1 + 9) = uVar16;
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar16 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar16 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_14041f37b:
    uVar6 = 0;
    do {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar14;
      }
      *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
           0xffffffff;
      uVar6 = uVar6 + 1;
    } while (uVar16 != uVar6);
  }
  else {
    if (uVar16 == 0) goto LAB_14041f2c0;
    FUN_1446efa72(plVar9,0,uVar16,4);
    if (0 < (int)uVar16) goto LAB_14041f37b;
  }
  iVar19 = (int)param_1[5];
  if (iVar19 == 0) {
    uVar10 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar16 = *puVar8;
    if (uVar16 == 0) {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      uVar10 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar10;
      }
      iVar7 = 0;
      do {
        if (uVar15 == uVar10) goto LAB_14041f2c0;
        iVar7 = iVar7 + 0x20;
        uVar16 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar10 = 0;
      iVar7 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar20 = uVar15 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = (iVar7 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar5) {
      iVar5 = iVar19;
    }
  }
  if (iVar5 < iVar19) {
    uVar16 = 0xffffffff;
    do {
      lVar3 = *param_1;
      lVar18 = (longlong)iVar5 * 0xe0;
      uVar20 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar18);
      iVar19 = (int)uVar20;
      *(int *)(lVar3 + 0xdc + lVar18) = iVar19;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar14;
      }
      *(undefined4 *)(lVar3 + 0xd8 + lVar18) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar20) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar14;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar19 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar16 = ~(uint)uVar15 & uVar16;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar19 = (int)param_1[5];
      iVar5 = (int)uVar10;
      lVar3 = (longlong)iVar5;
      uVar6 = puVar8[lVar3] & uVar16;
      if (uVar6 == 0) {
        iVar12 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar12 = iVar19 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar5) {
          iVar13 = iVar5;
        }
        if (iVar12 <= iVar5) break;
        lVar18 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar6 = puVar8[lVar3 + lVar18 + 1];
          if (uVar6 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar13 - lVar3 == lVar18) goto LAB_14041f2c0;
        }
        uVar10 = (ulonglong)(iVar5 + (int)lVar18 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar20 = uVar15 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar5 = (iVar7 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar19);
  }
LAB_14041f2c0:
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 14041f692 FUN_14041f692 body=122 status=ok
// SIG undefined FUN_14041f692(void)

void FUN_14041f692(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14041f70c FUN_14041f70c body=170 status=ok
// SIG undefined FUN_14041f70c(void)

undefined4 * FUN_14041f70c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_14041f7b6(param_1 + 4,param_2 + 4);
  FUN_14041f7b6(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x2c) = 0;
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  param_2[2] = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  return param_1;
}



// FUNCTION 14041f7b6 FUN_14041f7b6 body=125 status=ok
// SIG undefined FUN_14041f7b6(void)

undefined8 * FUN_14041f7b6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14041f834();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14041f834 FUN_14041f834 body=150 status=ok
// SIG undefined FUN_14041f834(void)

longlong * FUN_14041f834(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 14041f8ca FUN_14041f8ca body=689 status=ok
// SIG undefined FUN_14041f8ca(void)

void FUN_14041f8ca(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar12 = *(longlong *)(param_1 + 0xc0);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x48) = 0;
    if (*(longlong *)(lVar12 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140441eda(lVar12);
    FUN_1400020a8(lVar12);
  }
  if (((((DAT_14c75f435 == '\x01') && (*(int *)(param_1 + 0xcc) != 0)) &&
       (uVar4 = *(uint *)(param_1 + 200), -1 < (int)uVar4)) &&
      (((int)uVar4 < DAT_14c9647dc &&
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0)))) &&
     (((int)plVar8[2] == *(int *)(param_1 + 0xcc) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
       (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))))) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      uVar14 = 1;
      uVar15 = 0;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x20);
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        uVar15 = 0;
        uVar5 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar5 = uVar15;
        }
        iVar9 = 0;
        do {
          if (uVar5 == uVar15) goto LAB_14041f966;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar3[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar15 = 0;
        iVar9 = 0;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar4 = 0xffffffff;
      do {
        (**(code **)(*plVar8 + 0x300))
                  (plVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar11 * 0x10));
        uVar4 = ~(uint)uVar14 & uVar4;
        puVar3 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar3 = (uint *)(param_1 + 0x20);
        }
        iVar2 = *(int *)(param_1 + 0x38);
        iVar11 = (int)uVar15;
        lVar12 = (longlong)iVar11;
        uVar10 = puVar3[lVar12] & uVar4;
        if (uVar10 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar11 < iVar6) {
            lVar13 = 0;
            do {
              uVar10 = puVar3[lVar12 + lVar13 + 1];
              if (uVar10 != 0) {
                uVar15 = (ulonglong)(iVar11 + (int)lVar13 + 1);
                uVar4 = 0xffffffff;
                goto LAB_14041fad0;
              }
              iVar9 = iVar9 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar7 - lVar12 != lVar13);
            uVar4 = 0xffffffff;
            iVar11 = iVar7;
          }
          uVar15 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_14041fad0:
          uVar14 = (ulonglong)(-uVar10 & uVar10);
          uVar5 = uVar14 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
  }
LAB_14041f966:
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0x10);
  return;
}



// FUNCTION 14041fb7c FUN_14041fb7c body=118 status=ok
// SIG undefined FUN_14041fb7c(void)

void FUN_14041fb7c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 14041fbf2 FUN_14041fbf2 body=274 status=ok
// SIG undefined FUN_14041fbf2(void)

void FUN_14041fbf2(longlong param_1,int param_2)

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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
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
    FUN_1446f8d3c(param_1,param_2,iVar8,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14041fd06 FUN_14041fd06 body=211 status=ok
// SIG undefined FUN_14041fd06(void)

longlong FUN_14041fd06(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  uVar4 = uVar1 >> 0xd ^ *(int *)(param_2 + 0x10) - uVar1;
  uVar6 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - uVar1;
  uVar7 = uVar6 >> 0xd ^ (uVar1 - uVar4) - uVar6;
  uVar1 = uVar7 >> 0xc ^ (uVar4 - uVar6) - uVar7;
  uVar4 = uVar1 << 0x10 ^ (uVar6 - uVar7) - uVar1;
  uVar7 = uVar4 >> 5 ^ (uVar7 - uVar1) - uVar4;
  uVar6 = uVar7 >> 3 ^ (uVar1 - uVar4) - uVar7;
  uVar1 = uVar6 << 10 ^ (uVar4 - uVar7) - uVar6;
  iVar2 = FUN_14041fdda((longlong *)(param_1 + 0x118),uVar1 >> 0xf ^ uVar7 - (uVar6 + uVar1),param_2
                       );
  if (iVar2 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x118);
  }
  lVar3 = lVar5 + 0x14;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14041fdda FUN_14041fdda body=129 status=ok
// SIG undefined FUN_14041fdda(void)

int FUN_14041fdda(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x30;
        if ((((*(int *)(lVar3 + 0x10 + lVar5) == param_3[4]) &&
             (piVar1 = (int *)(lVar3 + lVar5), *piVar1 == *param_3)) && (piVar1[1] == param_3[1]))
           && ((piVar1[2] == param_3[2] && (piVar1[3] == param_3[3])))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x28 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 14041fe5c FUN_14041fe5c body=507 status=ok
// SIG undefined FUN_14041fe5c(void)

void FUN_14041fe5c(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x224) = 1;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x208) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x208) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar7;
      }
    }
  }
  *(int *)(param_1 + 0x20c) = iVar3;
  if ((param_2 != 0) && (plVar2 = *(longlong **)(param_2 + 0x148), plVar2 != (longlong *)0x0)) {
    uVar4 = FUN_140746dd0();
    lVar8 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar4);
    if (lVar8 != 0) {
      uVar4 = FUN_140746dd0();
      lVar5 = FUN_144718840(lVar8,uVar4);
      if ((lVar8 != lVar5) && (lVar5 != 0)) {
        FUN_140420058(&local_38,lVar5);
        *(undefined4 *)(param_1 + 0x210) = local_38;
        *(undefined4 *)(param_1 + 0x214) = uStack_34;
        *(undefined4 *)(param_1 + 0x218) = uStack_30;
        *(undefined4 *)(param_1 + 0x21c) = uStack_2c;
        lVar8 = FUN_14493e20e(param_1);
        if (lVar8 != 0) {
          FUN_1404215e2(param_1 + 0x20,lVar8);
        }
      }
    }
  }
  cVar6 = *(char *)(param_1 + 0x238);
  do {
    if (cVar6 == '\x02') {
      lVar8 = FUN_14493e20e(param_1);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x361) == '\x01')) {
        *(undefined1 *)(param_1 + 0x238) = 0;
      }
    }
    else if (cVar6 == '\x01') {
      lVar8 = *(longlong *)(param_1 + 0x228);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x13) == '\x01') {
          FUN_140420124();
          lVar8 = *(longlong *)(param_1 + 0x228);
          if (lVar8 == 0) goto LAB_14041ffda;
        }
        if (*(char *)(lVar8 + 0x10) != '\x01') goto LAB_14041ff6b;
      }
LAB_14041ffda:
      *(undefined1 *)(param_1 + 0x238) = 2;
      FUN_140422bb6(param_1);
    }
    else if (cVar6 == '\0') {
      FUN_140421054(param_1);
    }
LAB_14041ff6b:
    bVar9 = *(char *)(param_1 + 0x238) == cVar6;
    cVar6 = *(char *)(param_1 + 0x238);
    if (bVar9) {
      if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 140420058 FUN_140420058 body=204 status=ok
// SIG undefined FUN_140420058(void)

uint * FUN_140420058(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140420124 FUN_140420124 body=143 status=ok
// SIG undefined FUN_140420124(void)

void FUN_140420124(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(char *)((longlong)param_1 + 0x13) == '\x01') &&
      (*(char *)((longlong)param_1 + 0x12) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x11) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x13) = 0;
    local_10 = param_1[1];
    uVar2 = param_1[0x13];
    if (local_10 == 0) {
      local_10 = 0;
      local_18 = 0;
    }
    else {
      iVar3 = *(int *)(local_10 + 8);
      local_18 = 0;
      do {
        if (iVar3 == 0) {
          local_10 = 0;
          goto LAB_14042017a;
        }
        LOCK();
        iVar1 = *(int *)(local_10 + 8);
        bVar4 = iVar3 == iVar1;
        if (bVar4) {
          *(int *)(local_10 + 8) = iVar3 + 1;
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        UNLOCK();
      } while (!bVar4);
      local_18 = *param_1;
    }
LAB_14042017a:
    FUN_1404201b4(uVar2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404201b4 FUN_1404201b4 body=3741 status=ok
// SIG undefined FUN_1404201b4(void)

void FUN_1404201b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  DWORD DVar6;
  char cVar7;
  undefined4 uVar8;
  DWORD dwTlsIndex;
  DWORD DVar9;
  longlong lVar10;
  undefined8 *puVar11;
  LPVOID lpTlsValue;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  void *pvVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  undefined2 *puVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  longlong *plVar26;
  bool bVar27;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined8 local_190;
  undefined8 local_188;
  ulonglong local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  code *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  void *local_b8;
  uint local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_108 = 0;
  uStack_100 = 0;
  iVar23 = *(int *)(*param_2 + 0x70);
  if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar23);
  }
  if (iVar23 != 0) {
    FUN_1417f2f92(&local_108);
    lVar12 = *param_2;
    if (0 < *(int *)(lVar12 + 0x70)) {
      plVar26 = (longlong *)(param_1 + 0x10);
      local_118 = param_1 + 0x48;
      lVar24 = 0;
      local_140 = param_1;
      local_138 = plVar26;
      local_128 = param_2;
      do {
        local_130 = (longlong *)param_2[1];
        lVar10 = lVar12;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
          lVar10 = *param_2;
        }
        local_11c = *(undefined4 *)(lVar10 + 0x58);
        local_110 = lVar24;
        FUN_14371b2b6(param_1,&local_88,lVar24 * 0x20 + *(longlong *)(lVar10 + 0x68));
        uVar25 = 0;
        iVar23 = uStack_70 - 1;
        if (uStack_70 == 0) {
          iVar23 = 0;
        }
        if (0 < iVar23) {
          puVar22 = &DAT_149dfb77a;
          if (uStack_70 != 0) {
            puVar22 = (undefined2 *)CONCAT44(uStack_74,local_78);
          }
          lVar24 = 0;
          do {
            uVar18 = ((uint)(0x19 < (ushort)puVar22[lVar24] - 0x61) * 0x20 +
                     (uint)(ushort)puVar22[lVar24]) - 0x20;
            uVar25 = uVar25 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar25 ^ uVar18) & 0xff) * 4);
            uVar25 = uVar25 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar25 & 0xff ^ uVar18 >> 8 & 0xff) * 4)
            ;
            lVar24 = lVar24 + 1;
          } while (iVar23 != (int)lVar24);
        }
        uVar18 = (uint)(CONCAT44(uStack_7c,uStack_80) >> 0x10);
        uVar13 = (uint)(CONCAT44(uStack_84,local_88) >> 0x10);
        uVar13 = (local_88 << 0x10 | local_88 & 0xffff) + uStack_84 +
                 (uVar13 << 0x13 | uVar13 & 0xffff) + ((local_88 & 0xffff) >> 4);
        uVar13 = (uVar13 >> 2) + 0x9e3779b9 +
                 (uStack_80 << 0x10 | uStack_80 & 0xffff) + uStack_7c +
                 (uVar18 << 0x13 | uVar18 & 0xffff) + ((uStack_80 & 0xffff) >> 4) + uVar13 * 0x40 ^
                 uVar13;
        uVar16 = uVar13 >> 0xd ^ -uVar13;
        uVar18 = uVar16 << 8 ^ (-0x61c88647 - uVar13) - uVar16;
        uVar21 = uVar18 >> 0xd ^ (uVar13 - uVar16) - uVar18;
        uVar16 = uVar21 >> 0xc ^ (uVar16 - uVar18) - uVar21;
        uVar13 = uVar16 << 0x10 ^ (uVar18 - uVar21) - uVar16;
        uVar18 = uVar13 >> 5 ^ (uVar21 - uVar16) - uVar13;
        uVar16 = uVar18 >> 3 ^ (uVar16 - uVar13) - uVar18;
        uVar13 = uVar16 << 10 ^ (uVar13 - uVar18) - uVar16;
        uVar18 = uVar25 >> 0xd ^ (uVar13 >> 0xf ^ uVar18 - (uVar16 + uVar13)) - uVar25;
        uVar13 = uVar18 << 8 ^ (-0x61c88647 - uVar25) - uVar18;
        uVar16 = uVar13 >> 0xd ^ (uVar25 - uVar18) - uVar13;
        uVar25 = uVar16 >> 0xc ^ (uVar18 - uVar13) - uVar16;
        uVar18 = uVar25 << 0x10 ^ (uVar13 - uVar16) - uVar25;
        uVar16 = uVar18 >> 5 ^ (uVar16 - uVar25) - uVar18;
        uVar13 = uVar16 >> 3 ^ (uVar25 - uVar18) - uVar16;
        uVar25 = uVar13 << 10 ^ (uVar18 - uVar16) - uVar13;
        iVar23 = FUN_1448b08d8(plVar26,uVar25 >> 0xf ^ uVar16 - (uVar13 + uVar25),&local_88);
        if (((iVar23 == -1) || (lVar24 = (longlong)iVar23 * 0x30 + *plVar26, lVar24 == 0)) ||
           (plVar20 = *(longlong **)(lVar24 + 0x20), plVar20 == (longlong *)0x0)) {
          puVar11 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          puVar11[4] = 0;
          puVar11[5] = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          *(undefined4 *)(puVar11 + 5) = 0xffffffff;
          FUN_1417f2bea(plVar26,&local_a8);
          puVar5 = (uint *)CONCAT44(uStack_9c,uStack_a0);
          *puVar5 = local_88;
          puVar5[1] = uStack_84;
          puVar5[2] = uStack_80;
          puVar5[3] = uStack_7c;
          puVar5[4] = 0;
          puVar5[5] = 0;
          lVar24 = (longlong)(int)uStack_70;
          pvVar15 = (void *)CONCAT44(uStack_74,local_78);
          puVar5[6] = uStack_70;
          if (lVar24 == 0) {
            puVar5[7] = 0;
            uVar25 = 0;
          }
          else {
            FUN_1446dd670(puVar5 + 4,uStack_70,0);
            memcpy(*(void **)(puVar5 + 4),pvVar15,lVar24 * 2);
            uVar25 = puVar5[6];
          }
          *(undefined8 **)(puVar5 + 8) = puVar11;
          puVar5[10] = 0xffffffff;
          local_e8 = (code *)CONCAT44(local_e8._4_4_,local_a8);
          uVar3 = *(undefined8 *)puVar5;
          uVar4 = *(undefined8 *)(puVar5 + 2);
          uVar13 = 0;
          uVar18 = uVar25 - 1;
          if (uVar25 == 0) {
            uVar18 = uVar13;
          }
          if (0 < (int)uVar18) {
            puVar22 = &DAT_149dfb77a;
            if (uVar25 != 0) {
              puVar22 = *(undefined2 **)(puVar5 + 4);
            }
            lVar24 = 0;
            uVar13 = 0;
            do {
              uVar25 = ((uint)(0x19 < (ushort)puVar22[lVar24] - 0x61) * 0x20 +
                       (uint)(ushort)puVar22[lVar24]) - 0x20;
              uVar13 = uVar13 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar25) & 0xff) * 4);
              uVar13 = uVar13 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar13 & 0xff ^ uVar25 >> 8 & 0xff) * 4);
              lVar24 = lVar24 + 1;
            } while (uVar18 != (uint)lVar24);
          }
          uVar25 = (uint)((ulonglong)uVar4 >> 0x10);
          uVar16 = (uint)uVar4 & 0xffff;
          uVar18 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar21 = (uint)uVar3 & 0xffff;
          uVar18 = ((uint)uVar3 << 0x10 | uVar21) + (int)((ulonglong)uVar3 >> 0x20) +
                   (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar21 >> 4);
          uVar18 = (uVar18 >> 2) + 0x9e3779b9 +
                   ((uint)uVar4 << 0x10 | uVar16) + (int)((ulonglong)uVar4 >> 0x20) +
                   (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar16 >> 4) + uVar18 * 0x40 ^ uVar18;
          uVar16 = uVar18 >> 0xd ^ -uVar18;
          uVar25 = uVar16 << 8 ^ (-0x61c88647 - uVar18) - uVar16;
          uVar21 = uVar25 >> 0xd ^ (uVar18 - uVar16) - uVar25;
          uVar16 = uVar21 >> 0xc ^ (uVar16 - uVar25) - uVar21;
          uVar18 = uVar16 << 0x10 ^ (uVar25 - uVar21) - uVar16;
          uVar25 = uVar18 >> 5 ^ (uVar21 - uVar16) - uVar18;
          uVar16 = uVar25 >> 3 ^ (uVar16 - uVar18) - uVar25;
          uVar18 = uVar16 << 10 ^ (uVar18 - uVar25) - uVar16;
          uVar25 = uVar13 >> 0xd ^ (uVar18 >> 0xf ^ uVar25 - (uVar16 + uVar18)) - uVar13;
          uVar18 = uVar25 << 8 ^ (-0x61c88647 - uVar13) - uVar25;
          uVar13 = uVar18 >> 0xd ^ (uVar13 - uVar25) - uVar18;
          uVar25 = uVar13 >> 0xc ^ (uVar25 - uVar18) - uVar13;
          uVar18 = uVar25 << 0x10 ^ (uVar18 - uVar13) - uVar25;
          uVar13 = uVar18 >> 5 ^ (uVar13 - uVar25) - uVar18;
          uVar25 = uVar13 >> 3 ^ (uVar25 - uVar18) - uVar13;
          uVar18 = uVar25 << 10 ^ (uVar18 - uVar13) - uVar25;
          uVar25 = uVar18 >> 0xf ^ uVar13 - (uVar25 + uVar18);
          cVar7 = FUN_1417f2dc8(local_138,uVar25,puVar5,&local_e8);
          param_2 = local_128;
          param_1 = local_140;
          iVar23 = (int)local_e8;
          if (cVar7 == '\0') {
            uVar18 = *(int *)(local_140 + 0x18) - *(int *)(local_140 + 0x44);
            if (uVar18 < 4) {
              iVar17 = 1;
            }
            else {
              uVar14 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
              lVar24 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar17 = 1 << ((byte)lVar24 & 0x1f);
            }
            if (((int)uVar18 < 1) || (iVar17 <= *(int *)(local_140 + 0x58))) {
              uVar25 = *(int *)(local_140 + 0x58) - 1U & uVar25;
              puVar5[0xb] = uVar25;
              lVar24 = *(longlong *)(local_140 + 0x50);
              if (*(longlong *)(local_140 + 0x50) == 0) {
                lVar24 = local_118;
              }
              puVar5[10] = *(uint *)(lVar24 + ((longlong)*(int *)(local_140 + 0x58) - 1U &
                                              (longlong)(int)uVar25) * 4);
              lVar24 = *(longlong *)(local_140 + 0x50);
              if (*(longlong *)(local_140 + 0x50) == 0) {
                lVar24 = local_118;
              }
              *(int *)(lVar24 + ((longlong)*(int *)(local_140 + 0x58) - 1U & (longlong)(int)uVar25)
                                * 4) = (int)local_e8;
            }
            else {
              *(int *)(local_140 + 0x58) = iVar17;
              FUN_1417f273a(local_138);
            }
          }
          plVar20 = *(longlong **)(*local_138 + 0x20 + (longlong)iVar23 * 0x30);
          plVar26 = local_138;
LAB_14042087e:
          plVar19 = local_130;
          if (*(char *)((longlong)plVar20 + 0x2c) == '\0') {
            FUN_14371b5a0(param_1,&local_88,plVar20,0);
          }
          if (*plVar20 == 0) {
            *(undefined1 *)((longlong)plVar20 + 0x2d) = 0;
            dwTlsIndex = DAT_14c75ec34;
            if (DAT_14c75ec34 == 0xffffffff) {
              dwTlsIndex = TlsAlloc();
              DVar9 = 0xffffffff;
              LOCK();
              bVar27 = DAT_14c75ec34 != 0xffffffff;
              DVar6 = dwTlsIndex;
              if (bVar27) {
                DVar9 = DAT_14c75ec34;
                DVar6 = DAT_14c75ec34;
              }
              DAT_14c75ec34 = DVar6;
              UNLOCK();
              plVar19 = local_130;
              param_2 = local_128;
              if (bVar27) {
                TlsFree(dwTlsIndex);
                plVar19 = local_130;
                param_2 = local_128;
                dwTlsIndex = DVar9;
              }
            }
            lpTlsValue = TlsGetValue(dwTlsIndex);
            if (lpTlsValue == (LPVOID)0x0) {
              lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
              FUN_141073f92(lpTlsValue);
              FUN_140fddf04(lpTlsValue);
              TlsSetValue(dwTlsIndex,lpTlsValue);
            }
            if (((DAT_14c75b114 == '\0') && (*(int *)((longlong)lpTlsValue + 0x28) < 1)) &&
               (*(char *)(local_140 + 0xe0) != '\x01')) {
              FUN_14475cc44(&local_88,&local_a8);
              local_190 = CONCAT44(local_190._4_4_,0xffffffff);
              local_198 = (longlong *)((ulonglong)local_198 & 0xffffffff00000000);
              uVar25 = FUN_1447ee042(&local_a8,&DAT_149e0635c,1,0);
              plVar26 = local_138;
              param_1 = local_140;
              if (uVar25 != 0xffffffff) {
                uVar18 = uStack_a0 - 1;
                if (uStack_a0 == 0) {
                  uVar18 = 0;
                }
                if ((int)uVar18 <= (int)uVar25) {
                  uVar25 = uVar18;
                }
                if ((int)uVar25 < 1) {
                  uVar25 = 0;
                }
                uVar18 = uVar18 - uVar25;
                if (0 < (int)uVar18) {
                  iVar23 = uStack_a0 - (uVar18 + uVar25);
                  if (iVar23 != 0) {
                    pvVar15 = (void *)((ulonglong)uVar25 * 2 + CONCAT44(uStack_a4,local_a8));
                    memmove(pvVar15,(void *)((longlong)pvVar15 + (ulonglong)uVar18 * 2),
                            (longlong)iVar23 * 2);
                  }
                  uStack_a0 = uStack_a0 - uVar18;
                }
              }
              local_d0 = 0;
              local_d8 = 0;
              local_e8 = (code *)CONCAT44(uStack_a4,local_a8);
              local_e0 = uStack_a0 - 1;
              if (uStack_a0 == 0) {
                local_e0 = 0;
              }
              cVar7 = FUN_1414176ea(&local_e8,&local_d8);
              plVar19 = local_130;
              if (cVar7 == '\0') {
                *(undefined2 *)((longlong)plVar20 + 0x2c) = 0x100;
              }
              else {
                *(undefined2 *)((longlong)plVar20 + 0x2c) = 1;
                local_f8 = (undefined8 *)0x0;
                local_f0 = 0;
                FUN_1446efa72(&local_f8,0,5,0x10);
                puVar11 = local_f8;
                local_f0 = 5;
                if (plVar19 == (longlong *)0x0) {
                  FUN_14372044c(local_f8,&local_88);
                  *puVar11 = &PTR_FUN_14aac2170;
                  puVar11[6] = lVar12;
                  puVar11[7] = 0;
                  puVar11[8] = FUN_14057c4e2;
                }
                else {
                  LOCK();
                  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                  UNLOCK();
                  FUN_14372044c(local_f8,&local_88);
                  *puVar11 = &PTR_FUN_14aac2170;
                  puVar11[6] = lVar12;
                  puVar11[7] = plVar19;
                  LOCK();
                  *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
                  UNLOCK();
                  puVar11[8] = FUN_14057c4e2;
                  LOCK();
                  plVar1 = plVar19 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                }
                local_190 = CONCAT44(local_190._4_4_,local_11c);
                local_180 = local_180 & 0xffffffff00000000;
                local_188 = 0;
                local_198 = (longlong *)CONCAT44(local_198._4_4_,0xffffffff);
                uVar8 = FUN_140b1a772(&local_d8,0,&local_f8,0);
                *(undefined4 *)(plVar20 + 5) = uVar8;
                param_1 = local_140;
              }
              if (CONCAT44(uStack_a4,local_a8) != 0) {
                FUN_1400020a8();
              }
            }
            else {
              FUN_14475cc44(&local_88,&local_a8);
              puVar22 = &DAT_149dfb77a;
              if (uStack_a0 != 0) {
                puVar22 = (undefined2 *)CONCAT44(uStack_a4,local_a8);
              }
              if (DAT_14c927740 == 0) {
                local_e8 = FUN_1449e2820;
                local_150 = FUN_14081d0ea;
                local_158 = FUN_14081d0ea;
                local_160 = &local_e8;
                local_168 = &LAB_146856450;
                local_170 = FUN_1427b121c;
                local_178 = L"Engine";
                local_180 = 0;
                local_188 = CONCAT44(local_188._4_4_,0x10000021);
                local_190 = CONCAT44(local_190._4_4_,8);
                local_198 = (longlong *)CONCAT44(local_198._4_4_,0x28);
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              }
              local_180 = 0;
              local_190 = 0;
              local_188 = CONCAT71(local_188._1_7_,1);
              local_198 = (longlong *)((ulonglong)local_198 & 0xffffffff00000000);
              lVar12 = FUN_1412ecd05(DAT_14c927740,0,puVar22,0);
              if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar12);
              }
              *plVar20 = lVar12;
              if (CONCAT44(uStack_a4,local_a8) != 0) {
                FUN_1400020a8();
                lVar12 = *plVar20;
              }
              param_1 = local_140;
              if (lVar12 == 0) {
LAB_140420cd4:
                *(undefined1 *)((longlong)plVar20 + 0x2d) = 1;
              }
              else {
                lVar24 = FUN_140007dea();
                lVar12 = *plVar20;
                if (lVar12 == 0) goto LAB_140420cd4;
                if ((((lVar24 != 0) && (lVar10 = *(longlong *)(lVar12 + 0x10), lVar10 != 0)) &&
                    (*(int *)(lVar24 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8) ==
                    lVar24 + 0x30)) {
                  local_c8 = local_88;
                  uStack_c4 = uStack_84;
                  uStack_c0 = uStack_80;
                  uStack_bc = uStack_7c;
                  local_b8 = (void *)0x0;
                  lVar24 = (longlong)(int)uStack_70;
                  pvVar15 = (void *)CONCAT44(uStack_74,local_78);
                  local_b0 = uStack_70;
                  if (lVar24 == 0) {
                    local_ac = 0;
                  }
                  else {
                    FUN_1446dd670(&local_b8,uStack_70,0);
                    memcpy(local_b8,pvVar15,lVar24 * 2);
                  }
                  local_198 = plVar20;
                  FUN_14371ba36(param_1,&local_a8,lVar12,&local_c8);
                  param_2 = local_128;
                  plVar19 = local_130;
                  local_88 = local_a8;
                  uStack_84 = uStack_a4;
                  uStack_80 = uStack_a0;
                  uStack_7c = uStack_9c;
                  if (CONCAT44(uStack_74,local_78) != 0) {
                    FUN_1400020a8();
                  }
                  local_78 = local_98;
                  uStack_74 = uStack_94;
                  uStack_70 = uStack_90;
                  uStack_6c = uStack_8c;
                  if (*plVar20 == 0) goto LAB_140420cd4;
                }
              }
              *(undefined1 *)((longlong)plVar20 + 0x2c) = 0;
              plVar26 = local_138;
            }
          }
        }
        else {
          if (*(char *)((longlong)plVar20 + 0x2c) == '\x01') {
            (*(code *)PTR_FUN_14c75b118)();
          }
          plVar19 = local_130;
          param_2 = local_128;
          if (*plVar20 == 0) goto LAB_14042087e;
        }
        if (CONCAT44(uStack_74,local_78) != 0) {
          FUN_1400020a8();
        }
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar19 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar2 = (int *)((longlong)plVar19 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        uVar14 = uStack_100;
        lVar12 = (longlong)(int)uStack_100;
        uVar25 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar25);
        if (uStack_100._4_4_ < uVar25) {
          FUN_147d6228a(&local_108,uVar14 & 0xffffffff);
        }
        *(longlong **)(local_108 + lVar12 * 8) = plVar20;
        lVar12 = *param_2;
        iVar23 = (int)plVar20[2];
        *(uint *)(plVar20 + 2) = iVar23 + 1U;
        if (*(uint *)((longlong)plVar20 + 0x14) < iVar23 + 1U) {
          FUN_1417f25d8(plVar20 + 1,iVar23);
        }
        *(longlong *)(plVar20[1] + (longlong)iVar23 * 8) = lVar12;
        iVar23 = (int)plVar20[4];
        *(uint *)(plVar20 + 4) = iVar23 + 1U;
        if (*(uint *)((longlong)plVar20 + 0x24) < iVar23 + 1U) {
          FUN_1402a19f0(plVar20 + 3,iVar23);
        }
        lVar12 = plVar20[3];
        *(longlong *)(lVar12 + (longlong)iVar23 * 0x10) = *param_2;
        lVar24 = param_2[1];
        *(longlong *)(lVar12 + 8 + (longlong)iVar23 * 0x10) = lVar24;
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
        }
        *(int *)(*param_2 + 0x5c) = *(int *)(*param_2 + 0x5c) + 1;
        lVar24 = local_110 + 1;
        lVar12 = *param_2;
      } while (lVar24 < *(int *)(lVar12 + 0x70));
      if (0 < *(int *)(lVar12 + 0x70)) {
        lVar24 = 0;
        do {
          plVar26 = *(longlong **)(local_108 + lVar24 * 8);
          if ((plVar26 != (longlong *)0x0) &&
             ((*plVar26 != 0 || (*(char *)((longlong)plVar26 + 0x2d) == '\x01')))) {
            *(undefined1 *)((longlong)plVar26 + 0x2c) = 0;
            FUN_1402a17a8();
            lVar12 = *param_2;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 < *(int *)(lVar12 + 0x70));
      }
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  plVar26 = (longlong *)param_2[1];
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar26 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar2 = (int *)((longlong)plVar26 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140421054 FUN_140421054 body=1420 status=ok
// SIG undefined FUN_140421054(void)

/* WARNING: Removing unreachable block (ram,0x000140421536) */

void FUN_140421054(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *_Src;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  void *local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar4 = *(longlong **)(param_1 + 0x218);
  if ((((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0x214) != 0)) &&
      (uVar7 = *(uint *)(param_1 + 0x210), -1 < (int)uVar7)) &&
     ((((int)uVar7 < DAT_14c9647dc &&
       (lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar12 != 0)) &&
      ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x214) &&
       ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))))) {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1 + 0x200);
  }
  lVar12 = FUN_14493e20e(param_1);
  if (lVar12 != 0) {
    FUN_1404215e2(param_1 + 0x20,lVar12);
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  plVar4 = *(longlong **)(param_1 + 0x230);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x230) = 0;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  *(undefined1 *)(param_1 + 0x238) = 1;
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1404222a6(param_1 + 0x20,&local_58);
  if ((int)uStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_50 & 0xffffffff);
  }
  if ((int)uStack_90._4_4_ < (int)uStack_50) {
    FUN_1403539de(&local_98);
  }
  lVar12 = local_58;
  if ((int)uStack_50 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = (longlong)(int)uStack_50;
    lVar10 = local_58 + 0x20;
    lVar11 = 0;
    uVar6 = local_70;
    do {
      local_70 = uVar6;
      puVar3 = (undefined8 *)(lVar12 + 8 + lVar11);
      local_88 = (undefined8 *)*puVar3;
      iStack_80 = *(int *)(puVar3 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
      local_78 = (void *)0x0;
      uVar7 = *(uint *)(lVar10 + lVar11);
      _Src = *(void **)(lVar12 + 0x18 + lVar11);
      local_70 = CONCAT44(local_70._4_4_,uVar7);
      if ((longlong)(int)uVar7 == 0) {
        local_70 = (ulonglong)uVar7;
      }
      else {
        FUN_1446dd670(&local_78,uVar7,0);
        memcpy(local_78,_Src,(longlong)(int)uVar7 * 2);
      }
      uVar9 = uStack_90;
      lVar13 = (longlong)(int)uStack_90;
      uVar7 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
      if (uStack_90._4_4_ < uVar7) {
        FUN_1406f071e(&local_98,uVar9 & 0xffffffff);
      }
      lVar13 = lVar13 * 0x20;
      puVar2 = (undefined4 *)(local_98 + lVar13);
      *puVar2 = (undefined4)local_88;
      puVar2[1] = local_88._4_4_;
      puVar2[2] = iStack_80;
      puVar2[3] = uStack_7c;
      *(undefined8 *)(local_98 + 0x10 + lVar13) = 0;
      *(void **)(local_98 + 0x10 + lVar13) = local_78;
      *(undefined4 *)(local_98 + 0x18 + lVar13) = (undefined4)local_70;
      *(undefined4 *)(local_98 + 0x1c + lVar13) = local_70._4_4_;
      local_70 = 0;
      uVar6 = local_70;
      local_70 = 0;
      local_78 = (void *)0x0;
      lVar11 = lVar11 + 0x28;
    } while (lVar8 * 0x28 != lVar11);
    uVar9 = uStack_50 & 0xffffffff;
  }
  FUN_140595ef6(local_58,uVar9);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((int)uStack_90 == 0) {
    uVar9 = 0;
    goto LAB_14042142a;
  }
  lVar12 = FUN_14050fd64();
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_88 = (undefined8 *)0x0;
  iStack_80 = 0;
  if (DAT_14cb0a348 == '\x01') {
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    FUN_140056680(&local_58,L"AnimNode_ForwardDynamics");
  }
  uVar9 = uStack_90;
  lVar8 = local_98;
  local_68 = 0;
  local_60 = (int)uStack_90;
  if ((int)uStack_90 == 0) {
    local_5c = 0;
  }
  else {
    FUN_140a1e386(&local_68,uStack_90 & 0xffffffff,0);
    FUN_140a1e307(local_68,lVar8,uVar9 & 0xffffffff);
  }
  local_c0 = &local_58;
  local_c8 = 1;
  local_d0 = 0;
  local_d8 = 0;
  FUN_140421d62(lVar12 + 0x1e8,&local_a8,&local_68,&local_88);
  FUN_140861e20(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (iStack_80 == 0) {
LAB_1404213ad:
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    iStack_80 = 0;
    goto LAB_1404213ad;
  }
  plVar4 = local_a0;
  if ((undefined8 *)(param_1 + 0x228) != &local_a8) {
    *(undefined8 *)(param_1 + 0x228) = local_a8;
    local_a8 = 0;
    plVar5 = *(longlong **)(param_1 + 0x230);
    if (local_a0 != plVar5) {
      local_a0 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x230) = plVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  plVar4 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((int)uStack_b0 == 0) {
LAB_14042141d:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,0);
    FUN_1446efa72(&local_b8,0,0,0x10);
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    goto LAB_14042141d;
  }
  uVar9 = uStack_90 & 0xffffffff;
LAB_14042142a:
  FUN_140861e20(local_98,uVar9);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404215e2 FUN_1404215e2 body=1471 status=ok
// SIG undefined FUN_1404215e2(void)

undefined8 * FUN_1404215e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 4);
    pvVar2 = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 3,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  param_1[6] = param_2[6];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 10);
    pvVar2 = (void *)param_2[9];
    *(int *)(param_1 + 10) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x54) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 9,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x7c);
  uVar3 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar5 = *(undefined4 *)(param_2 + 0x15);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0x15) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar6;
  param_1[0x16] = param_2[0x16];
  if (((*(int *)((longlong)param_1 + 0xc4) < 0) || (*(int *)(param_1 + 0x19) == -1)) ||
     (*(char *)((longlong)param_1 + 0x1dc) == '\0')) {
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc4);
    uVar6 = *(undefined4 *)(param_2 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar5;
    *(undefined4 *)(param_1 + 0x19) = uVar6;
  }
  cVar7 = *(char *)((longlong)param_2 + 0xcc);
  *(char *)((longlong)param_1 + 0xcc) = cVar7;
  if (cVar7 == '\x01') {
    lVar10 = DAT_14c9abbe8;
    if (DAT_14c9abbe8 == 0) {
      lVar9 = FUN_145a10a92();
      lVar10 = *(longlong *)(lVar9 + 0x110);
      if (*(longlong *)(lVar9 + 0x110) == 0) {
        FUN_140aa6c08(lVar9);
        lVar10 = *(longlong *)(lVar9 + 0x110);
      }
    }
    DAT_14c9abbe8 = lVar10;
    lVar10 = DAT_14c9abbe8;
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(DAT_14c9abbe8 + 0x48);
    puVar8 = (undefined4 *)(lVar10 + 0x4c);
  }
  else {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    puVar8 = (undefined4 *)((longlong)param_2 + 0xd4);
  }
  *(undefined4 *)((longlong)param_1 + 0xd4) = *puVar8;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0xdc) = *(undefined1 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0xec) = *(undefined1 *)((longlong)param_2 + 0xec);
  *(undefined1 *)((longlong)param_1 + 0xed) = *(undefined1 *)((longlong)param_2 + 0xed);
  *(undefined1 *)((longlong)param_1 + 0xee) = *(undefined1 *)((longlong)param_2 + 0xee);
  *(undefined1 *)((longlong)param_1 + 0xef) = *(undefined1 *)((longlong)param_2 + 0xef);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
  if ((*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20)) ||
     (cVar7 = FUN_14499ee8f(param_1[0x1f],param_2[0x1f]), cVar7 == '\0')) {
    FUN_140421caa(param_1 + 0x1f,param_2 + 0x1f);
  }
  if ((*(int *)(param_1 + 0x22) != *(int *)(param_2 + 0x22)) ||
     (cVar7 = FUN_140421ba1(param_1[0x21],param_2[0x21]), cVar7 == '\0')) {
    FUN_140421d08(param_1 + 0x21,param_2 + 0x21);
  }
  if (param_1 != param_2) {
    FUN_14499ee64(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
    iVar1 = *(int *)(param_2 + 0x26);
    uVar3 = param_2[0x25];
    *(int *)(param_1 + 0x26) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x134) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    }
    else {
      FUN_1470f3d22(param_1 + 0x25,iVar1);
      FUN_1470f3d94(param_1[0x25],uVar3,iVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  lVar10 = param_2[0x2d];
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar10);
  }
  if (param_1[0x2d] != lVar10) {
    lVar10 = param_2[0x2d];
    if (DAT_14c950c29 == 1) {
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar10 = param_2[0x2d];
      }
    }
    param_1[0x2d] = lVar10;
    *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  }
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x171) = *(undefined1 *)((longlong)param_2 + 0x171);
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined1 *)((longlong)param_1 + 0x179) = *(undefined1 *)((longlong)param_2 + 0x179);
  *(undefined1 *)((longlong)param_1 + 0x17a) = *(undefined1 *)((longlong)param_2 + 0x17a);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x194);
  cVar7 = *(char *)(param_2 + 0x33);
  *(char *)(param_1 + 0x33) = cVar7;
  if (cVar7 == '\x01') {
    param_1[0x36] = param_2[0x36];
    uVar3 = param_2[0x35];
    param_1[0x34] = param_2[0x34];
    param_1[0x35] = uVar3;
  }
  if (*(char *)((longlong)param_1 + 0x1dc) == '\0') {
    *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
  }
  *(undefined1 *)((longlong)param_1 + 0x1b9) = *(undefined1 *)((longlong)param_2 + 0x1b9);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x1bc);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)((longlong)param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  return param_1;
}



// FUNCTION 140421ba1 FUN_140421ba1 body=68 status=ok
// SIG undefined FUN_140421ba1(void)

char FUN_140421ba1(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  while( true ) {
    if (param_3 == 0) {
      return cVar1;
    }
    param_3 = param_3 + -1;
    cVar1 = FUN_1470fb8b2(param_1,param_2);
    if (cVar1 == '\0') break;
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return '\0';
}



// FUNCTION 140421be6 FUN_140421be6 body=195 status=ok
// SIG undefined FUN_140421be6(void)

undefined4 FUN_140421be6(longlong *param_1,longlong *param_2)

{
  return CONCAT31((int3)((uint)(int)param_1[3] >> 8),
                  (*(float *)(param_1 + 6) == *(float *)(param_2 + 6) &&
                  (*(float *)((longlong)param_1 + 0x2c) == *(float *)((longlong)param_2 + 0x2c) &&
                  *(float *)(param_1 + 5) == *(float *)(param_2 + 5))) &&
                  ((*(float *)((longlong)param_1 + 0x24) == *(float *)((longlong)param_2 + 0x24) &&
                   *(float *)(param_1 + 4) == *(float *)(param_2 + 4)) &&
                  (*(float *)((longlong)param_1 + 0x1c) == *(float *)((longlong)param_2 + 0x1c) &&
                  ((int)param_1[3] == (int)param_2[3] &&
                  ((*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14) &&
                   (int)param_1[2] == (int)param_2[2]) &&
                  (*(int *)((longlong)param_1 + 0xc) == *(int *)((longlong)param_2 + 0xc) &&
                  *param_1 == *param_2))))));
}



// FUNCTION 140421caa FUN_140421caa body=93 status=ok
// SIG undefined FUN_140421caa(void)

undefined8 * FUN_140421caa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403c4cde(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1402c904a(param_1,iVar1);
      FUN_1402c8569(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140421d08 FUN_140421d08 body=89 status=ok
// SIG undefined FUN_140421d08(void)

undefined8 * FUN_140421d08(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470f3cae(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 140421d62 FUN_140421d62 body=1346 status=ok
// SIG undefined FUN_140421d62(void)

undefined8 *
FUN_140421d62(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,char param_6,char param_7,undefined8 *param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = param_3;
  puVar7 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  puVar7[3] = 0;
  *(undefined4 *)(puVar7 + 4) = 0;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[7] = 0;
  *(undefined4 *)(puVar7 + 8) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)((longlong)puVar7 + 0xe) = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14aac2250;
  plVar8[2] = (longlong)puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    if (plVar8 == (longlong *)0x0) {
      *puVar7 = puVar7;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *puVar7 = puVar7;
      if ((longlong *)puVar7[1] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar14 = (longlong *)puVar7[1];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
        puVar7[1] = plVar8;
      }
      LOCK();
      plVar14 = plVar8 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
  }
  uVar3 = *param_4;
  *param_4 = 0;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  puVar9 = (undefined8 *)puVar7[3];
  if (*(int *)(puVar7 + 4) == 0) {
LAB_140421eb4:
    if (puVar9 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,0);
    FUN_1446efa72(puVar7 + 3,0,0,0x10);
    *(undefined4 *)(puVar7 + 4) = 0;
    puVar9 = (undefined8 *)puVar7[3];
    goto LAB_140421eb4;
  }
  puVar7[3] = uVar3;
  *(undefined4 *)(puVar7 + 4) = uVar2;
  puVar7[0x13] = local_d8;
  plVar14 = puVar7 + 0xd;
  FUN_14171b3ac(plVar14,local_d0);
  if (puVar7 + 9 != param_8) {
    if (puVar7[9] != 0) {
      FUN_1400020a8();
    }
    puVar7[9] = *param_8;
    *param_8 = 0;
    *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(param_8 + 1);
    *(undefined4 *)((longlong)puVar7 + 0x54) = *(undefined4 *)((longlong)param_8 + 0xc);
    param_8[1] = 0;
  }
  *(undefined4 *)(puVar7 + 0xb) = param_5;
  uVar10 = *(uint *)(puVar7 + 0xe);
  uVar11 = (ulonglong)(int)uVar10;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (uVar11 != 0) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar11);
    }
    FUN_1414db28a(&local_98,uVar10);
    iVar6 = 1;
    if (3 < uVar10) {
      uVar5 = (uVar10 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_1403afb7e();
    }
  }
  if ((longlong)*(int *)(puVar7 + 0xe) != 0) {
    plVar13 = (longlong *)puVar7[0xd];
    lVar12 = (longlong)*(int *)(puVar7 + 0xe) << 5;
    do {
      if (*plVar13 == 0) {
        uVar11 = (ulonglong)((int)uVar11 - 1);
      }
      else {
        cVar4 = FUN_140902d42();
        if (cVar4 != '\0') goto LAB_1404220bd;
        FUN_1449774fc(&local_98,&local_a8,plVar13,0);
      }
      uVar10 = (uint)uVar11;
      plVar13 = plVar13 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  if (uVar10 == 0) {
LAB_1404220bd:
    FUN_140886972(puVar7);
    *local_e0 = 0;
    local_e0[1] = 0;
    goto LAB_1404221e2;
  }
  uVar5 = *(uint *)(puVar7 + 0xe);
  if (uVar5 != uVar10) {
    local_a8 = 0;
    uStack_a0 = 0;
    uVar10 = uVar5;
    if (0 < (int)uVar5) {
      uVar5 = 0;
      do {
        plVar13 = (longlong *)((ulonglong)uVar5 * 0x20 + *plVar14);
        if (1 < (int)uStack_a0) {
          FUN_1400020e8(&local_a8,&DAT_149e19f34,2);
        }
        FUN_14475cc44(plVar13,&local_b8);
        iVar6 = local_b0 + -1;
        if (local_b0 == 0) {
          iVar6 = 0;
        }
        FUN_1400020e8(&local_a8,local_b8,iVar6);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        if (*plVar13 == 0) {
          FUN_147d62230(plVar14,uVar5);
          FUN_14582f954(plVar14);
          uVar5 = uVar5 - 1;
        }
        uVar5 = uVar5 + 1;
        uVar10 = *(uint *)(puVar7 + 0xe);
      } while ((int)uVar5 < (int)uVar10);
      if (local_a8 != 0) {
        FUN_1400020a8();
        uVar10 = *(uint *)(puVar7 + 0xe);
      }
    }
  }
  if ((int)uStack_90 - local_64 != uVar10) {
    FUN_1403b01b4(&local_98,&local_a8);
    FUN_14171b3ac(plVar14,&local_a8);
    FUN_140861e20(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if (param_6 == '\0') {
LAB_14042218b:
    if (param_7 != '\0') goto LAB_140422190;
    local_c0 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
LAB_1404221be:
    local_c8 = puVar7;
    FUN_1404201b4(local_d8,&local_c8);
  }
  else {
    plVar14 = (longlong *)(local_d8 + 0xc0);
    iVar6 = *(int *)(local_d8 + 200);
    *(uint *)(local_d8 + 200) = iVar6 + 1U;
    if (*(uint *)(local_d8 + 0xcc) < iVar6 + 1U) {
      FUN_1402a19f0(plVar14,iVar6);
    }
    lVar12 = *plVar14;
    *(undefined8 **)(lVar12 + (longlong)iVar6 * 0x10) = puVar7;
    *(longlong **)(lVar12 + 8 + (longlong)iVar6 * 0x10) = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      goto LAB_14042218b;
    }
    if (param_7 == '\0') {
      local_c0 = (longlong *)0x0;
      goto LAB_1404221be;
    }
LAB_140422190:
    *(undefined1 *)((longlong)puVar7 + 0x13) = 1;
  }
  *local_e0 = puVar7;
  local_e0[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
LAB_1404221e2:
  puVar7 = local_e0;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(&local_98);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 1404222a6 FUN_1404222a6 body=1222 status=ok
// SIG undefined FUN_1404222a6(void)

/* WARNING: Removing unreachable block (ram,0x000140422557) */
/* WARNING: Removing unreachable block (ram,0x0001404226a8) */
/* WARNING: Removing unreachable block (ram,0x000140422676) */

void FUN_1404222a6(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[1] != 0) {
    local_70 = *param_1;
    uStack_68 = *(undefined4 *)(param_1 + 1);
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_60 = *(undefined4 *)(param_1 + 2);
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x14);
    local_58 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 4);
    pvVar3 = (void *)param_1[3];
    local_50 = CONCAT44(local_50._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_50 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_58,uVar2,0);
      memcpy(local_58,pvVar3,(longlong)(int)uVar2 * 2);
    }
    iVar5 = (int)param_2[1];
    lVar11 = (longlong)iVar5;
    *(uint *)(param_2 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
      FUN_140353c32(param_2,iVar5);
    }
    lVar4 = *param_2;
    *(undefined8 *)(lVar4 + lVar11 * 0x28) = local_70;
    puVar1 = (undefined4 *)(lVar4 + 8 + lVar11 * 0x28);
    *puVar1 = uStack_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(lVar4 + 0x18 + lVar11 * 0x28) = 0;
    *(void **)(lVar4 + 0x18 + lVar11 * 0x28) = local_58;
    local_58 = (void *)0x0;
    *(undefined4 *)(lVar4 + 0x20 + lVar11 * 0x28) = (undefined4)local_50;
    *(undefined4 *)(lVar4 + 0x24 + lVar11 * 0x28) = local_50._4_4_;
    local_50 = 0;
  }
  if (param_1[7] != 0) {
    local_70 = param_1[6];
    uStack_68 = *(undefined4 *)(param_1 + 7);
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x3c);
    uStack_60 = *(undefined4 *)(param_1 + 8);
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x44);
    local_58 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 10);
    pvVar3 = (void *)param_1[9];
    local_50 = CONCAT44(local_50._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_50 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_58,uVar2,0);
      memcpy(local_58,pvVar3,(longlong)(int)uVar2 * 2);
    }
    iVar5 = (int)param_2[1];
    lVar11 = (longlong)iVar5;
    *(uint *)(param_2 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
      FUN_140353c32(param_2,iVar5);
    }
    lVar4 = *param_2;
    *(undefined8 *)(lVar4 + lVar11 * 0x28) = local_70;
    puVar1 = (undefined4 *)(lVar4 + 8 + lVar11 * 0x28);
    *puVar1 = uStack_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(lVar4 + 0x18 + lVar11 * 0x28) = 0;
    *(void **)(lVar4 + 0x18 + lVar11 * 0x28) = local_58;
    local_58 = (void *)0x0;
    *(undefined4 *)(lVar4 + 0x20 + lVar11 * 0x28) = (undefined4)local_50;
    *(undefined4 *)(lVar4 + 0x24 + lVar11 * 0x28) = local_50._4_4_;
    local_50 = 0;
  }
  if (param_1[0x29] != 0) {
    local_70 = param_1[0x28];
    uStack_68 = *(undefined4 *)(param_1 + 0x29);
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14c);
    uStack_60 = *(undefined4 *)(param_1 + 0x2a);
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x154);
    local_58 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 0x2c);
    pvVar3 = (void *)param_1[0x2b];
    local_50 = CONCAT44(local_50._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_50 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_58,uVar2,0);
      memcpy(local_58,pvVar3,(longlong)(int)uVar2 * 2);
    }
    iVar5 = (int)param_2[1];
    lVar11 = (longlong)iVar5;
    *(uint *)(param_2 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
      FUN_140353c32(param_2,iVar5);
    }
    lVar4 = *param_2;
    *(undefined8 *)(lVar4 + lVar11 * 0x28) = local_70;
    puVar1 = (undefined4 *)(lVar4 + 8 + lVar11 * 0x28);
    *puVar1 = uStack_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(lVar4 + 0x18 + lVar11 * 0x28) = 0;
    *(void **)(lVar4 + 0x18 + lVar11 * 0x28) = local_58;
    local_58 = (void *)0x0;
    *(undefined4 *)(lVar4 + 0x20 + lVar11 * 0x28) = (undefined4)local_50;
    *(undefined4 *)(lVar4 + 0x24 + lVar11 * 0x28) = local_50._4_4_;
    local_50 = 0;
  }
  lVar11 = param_1[0x2d];
  if (lVar11 == 0) goto LAB_140422486;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar11);
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_1400bbfc4(&local_70,lVar11);
  local_88 = local_70;
  uStack_80 = CONCAT44(uStack_64,uStack_68);
  uVar6 = CONCAT44(uStack_5c,uStack_60);
  uVar7 = (undefined4)local_58;
  uVar8 = local_58._4_4_;
  cVar9 = (*(code *)PTR_FUN_14c758760)();
  uVar2 = *(uint *)(lVar11 + 0xc);
  if (cVar9 == '\0') {
LAB_1404223ff:
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar10 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar10 = *(uint *)(lVar11 + 0x10);
      bVar15 = uVar10 == 0;
      if (bVar15) {
        *(uint *)(lVar11 + 0x10) = uVar14;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar10 = uVar14;
      }
    }
    uVar12 = (ulonglong)uVar10;
    uVar13 = (ulonglong)uVar2;
  }
  else {
    uVar13 = 0;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar12 = 0;
    if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) goto LAB_1404223ff;
  }
  iVar5 = (int)param_2[1];
  lVar11 = (longlong)iVar5;
  *(uint *)(param_2 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
    FUN_140353c32(param_2,iVar5);
  }
  lVar4 = *param_2;
  *(ulonglong *)(lVar4 + lVar11 * 0x28) = uVar13 | uVar12 << 0x20;
  puVar1 = (undefined4 *)(lVar4 + 8 + lVar11 * 0x28);
  *puVar1 = (undefined4)local_88;
  puVar1[1] = local_88._4_4_;
  puVar1[2] = (undefined4)uStack_80;
  puVar1[3] = uStack_80._4_4_;
  *(undefined8 *)(lVar4 + 0x18 + lVar11 * 0x28) = uVar6;
  *(undefined4 *)(lVar4 + 0x20 + lVar11 * 0x28) = uVar7;
  *(undefined4 *)(lVar4 + 0x24 + lVar11 * 0x28) = uVar8;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x2a0))((longlong *)param_1[0x2d],param_2);
LAB_140422486:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042276e FUN_14042276e body=968 status=ok
// SIG undefined FUN_14042276e(void)

void FUN_14042276e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = *(longlong *)(param_1 + 0x48);
  if (lVar11 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar11);
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_1400bbfc4(&local_68,lVar11);
    uVar7 = local_4c;
    uVar6 = local_50;
    uVar5 = local_58;
    local_78 = CONCAT44(uStack_64,local_68);
    uStack_70 = CONCAT44(uStack_5c,uStack_60);
    cVar8 = (*(code *)PTR_FUN_14c758760)();
    uVar2 = *(uint *)(lVar11 + 0xc);
    if (cVar8 == '\0') {
LAB_1404227f2:
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar9 = *(uint *)(lVar11 + 0x10);
      if (*(uint *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar9 = *(uint *)(lVar11 + 0x10);
        bVar15 = uVar9 == 0;
        if (bVar15) {
          *(uint *)(lVar11 + 0x10) = uVar10;
          uVar9 = 0;
        }
        UNLOCK();
        if (bVar15) {
          uVar9 = uVar10;
        }
      }
      uVar13 = (ulonglong)uVar9;
      uVar12 = (ulonglong)uVar2;
    }
    else {
      uVar12 = 0;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar13 = 0;
      if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) goto LAB_1404227f2;
    }
    iVar3 = (int)param_2[1];
    lVar11 = (longlong)iVar3;
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_140353c32(param_2,iVar3);
    }
    lVar14 = *param_2;
    *(ulonglong *)(lVar14 + lVar11 * 0x28) = uVar12 | uVar13 << 0x20;
    puVar1 = (undefined4 *)(lVar14 + 8 + lVar11 * 0x28);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar14 + 0x18 + lVar11 * 0x28) = uVar5;
    *(undefined4 *)(lVar14 + 0x20 + lVar11 * 0x28) = uVar6;
    *(undefined4 *)(lVar14 + 0x24 + lVar11 * 0x28) = uVar7;
  }
  iVar3 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar3 != 0) {
    lVar11 = *(longlong *)(param_1 + 0xe0);
    lVar14 = 0;
    do {
      uVar2 = *(uint *)(lVar11 + 0x10 + lVar14);
      if (uVar2 != 0) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + uVar2;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar4) < uVar2) {
          FUN_140353c32(param_2,iVar4);
        }
        FUN_140422b37((longlong)iVar4 * 0x28 + *param_2,*(undefined8 *)(lVar11 + 8 + lVar14),uVar2);
      }
      lVar14 = lVar14 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar14);
  }
  lVar11 = *(longlong *)(param_1 + 0xd0);
  if (lVar11 == 0) goto LAB_1404229a3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar11);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_1400bbfc4(&local_68,lVar11);
  local_78 = CONCAT44(uStack_64,local_68);
  uStack_70 = CONCAT44(uStack_5c,uStack_60);
  cVar8 = (*(code *)PTR_FUN_14c758760)();
  uVar2 = *(uint *)(lVar11 + 0xc);
  if (cVar8 == '\0') {
LAB_14042292e:
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar9 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar9 = *(uint *)(lVar11 + 0x10);
      bVar15 = uVar9 == 0;
      if (bVar15) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar9 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar9 = uVar10;
      }
    }
    uVar13 = (ulonglong)uVar9;
    uVar12 = (ulonglong)uVar2;
  }
  else {
    uVar12 = 0;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar13 = 0;
    if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) goto LAB_14042292e;
  }
  iVar3 = (int)param_2[1];
  lVar11 = (longlong)iVar3;
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_140353c32(param_2,iVar3);
  }
  lVar14 = *param_2;
  *(ulonglong *)(lVar14 + lVar11 * 0x28) = uVar12 | uVar13 << 0x20;
  puVar1 = (undefined4 *)(lVar14 + 8 + lVar11 * 0x28);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar14 + 0x18 + lVar11 * 0x28) = local_58;
  *(undefined4 *)(lVar14 + 0x20 + lVar11 * 0x28) = local_50;
  *(undefined4 *)(lVar14 + 0x24 + lVar11 * 0x28) = local_4c;
LAB_1404229a3:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140422b37 FUN_140422b37 body=127 status=ok
// SIG undefined FUN_140422b37(void)

void FUN_140422b37(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0x18);
  do {
    puVar5[-3] = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 2);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
    *(undefined4 *)(puVar5 + -1) = uVar3;
    *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
    *puVar5 = 0;
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(puVar5 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar5,iVar1,0);
      memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
    }
    param_2 = param_2 + 5;
    puVar5 = puVar5 + 5;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140422bb6 FUN_140422bb6 body=2086 status=ok
// SIG undefined FUN_140422bb6(void)

void FUN_140422bb6(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  byte bVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  code *local_80;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = FUN_14493e20e();
  if (lVar8 == 0) goto LAB_1404230e9;
  *(undefined1 *)(lVar8 + 0x361) = 0;
  lVar12 = param_1 + 0x250;
  FUN_1404233de(lVar12,lVar8 + 0x3f0);
  if (*(int *)(param_1 + 0x20c) == 0) {
LAB_14042315b:
    lVar18 = 0;
LAB_14042315e:
    lVar19 = 0;
LAB_140423161:
    plVar17 = (longlong *)0x0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x208);
    lVar18 = 0;
    if ((int)uVar4 < 0) goto LAB_14042315e;
    lVar19 = 0;
    plVar17 = (longlong *)0x0;
    if ((int)uVar4 < DAT_14c9647dc) {
      plVar17 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((((plVar17 == (longlong *)0x0) || ((int)plVar17[2] != *(int *)(param_1 + 0x20c))) ||
          ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) || (lVar18 = *plVar17, lVar18 == 0))
      goto LAB_14042315b;
      lVar19 = *(longlong *)(lVar18 + 0x20);
      if (lVar19 == 0) goto LAB_14042315e;
      plVar17 = *(longlong **)(lVar19 + 0x658);
      if (plVar17 == (longlong *)0x0) {
        plVar17 = *(longlong **)(lVar19 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (plVar17 != (longlong *)0x0)) goto LAB_14042327e;
        if (plVar17 != (longlong *)0x0) goto LAB_140422cae;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_14042327e:
          FUN_1456cec3c(plVar17);
        }
LAB_140422cae:
        if (DAT_14cb06da8 == 0) {
          local_90 = &local_68;
          local_68 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = &LAB_1464003b0;
          local_98 = &LAB_147d17bdf;
          local_a0 = &LAB_1417edf22;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = CONCAT44(local_b8._4_4_,0x10000000);
          local_c0 = 8;
          local_c8 = CONCAT44(local_c8._4_4_,0x588);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
            DAT_14cb06da8 + 0x30)) goto LAB_140422ce1;
      }
      goto LAB_140423161;
    }
  }
LAB_140422ce1:
  local_70 = lVar12;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    lVar12 = FUN_140654c40(param_1 + 0x20);
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x48);
  }
  if ((plVar17 == (longlong *)0x0) || (lVar12 == 0)) goto LAB_1404230e9;
  (**(code **)(*plVar17 + 0x308))(plVar17);
  FUN_1400bbfc4(&local_68,lVar12);
  *(undefined4 *)(param_1 + 0x28) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x2c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x30) = uStack_60;
  *(undefined4 *)(param_1 + 0x34) = uStack_5c;
  if ((undefined8 *)(param_1 + 0x28) == &local_68) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x38) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x40) = local_50;
    *(undefined4 *)(param_1 + 0x44) = local_4c;
  }
  puVar1 = (uint *)(param_1 + 0x20);
  cVar6 = (*(code *)PTR_FUN_14c758760)();
  uVar4 = *(uint *)(lVar12 + 0xc);
  if (cVar6 == '\0') {
LAB_140422d90:
    *puVar1 = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar20) {
        local_74 = iVar15;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
        iVar15 = local_74;
      }
      LOCK();
      iVar7 = *(int *)(lVar13 + 0x10);
      bVar20 = iVar7 == 0;
      if (bVar20) {
        *(int *)(lVar13 + 0x10) = iVar15;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar7 = iVar15;
      }
    }
  }
  else {
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) goto LAB_140422d90;
    *puVar1 = 0;
    iVar7 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar7;
  lVar13 = *(longlong *)(lVar18 + 0x28);
  lVar9 = (**(code **)(*plVar17 + 0x3f0))(plVar17);
  if (lVar13 != lVar9) goto LAB_1404230e9;
  *(undefined1 *)(lVar8 + 0x362) = 1;
  *(undefined1 *)(lVar8 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  if (*(longlong *)(param_1 + 0x240) == 0) {
    plVar17 = (longlong *)FUN_14001cc68(0x820,0x10);
    plVar17[1] = (longlong)&DAT_100000001;
    *plVar17 = (longlong)&PTR_FUN_14a1deb60;
    FUN_140423808(plVar17 + 2);
    if (plVar17 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x240) = 0x10;
      plVar14 = *(longlong **)(param_1 + 0x248);
      if (plVar14 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x248) = 0;
LAB_140423303:
        LOCK();
        plVar2 = plVar14 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        if (plVar17 != (longlong *)0x0) goto LAB_140422e6a;
      }
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x240) = plVar17 + 2;
      plVar14 = *(longlong **)(param_1 + 0x248);
      if (plVar17 == plVar14) {
        LOCK();
        plVar14 = plVar17 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar3 = (int *)((longlong)plVar17 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x248) = plVar17;
        if (plVar14 != (longlong *)0x0) goto LAB_140423303;
      }
LAB_140422e6a:
      LOCK();
      plVar14 = plVar17 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar3 = (int *)((longlong)plVar17 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if (*(longlong *)(lVar19 + 0xa8) == 0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = *(char *)(*(longlong *)(lVar19 + 0xa8) + 0x178);
  }
  local_98 = (undefined1 *)(param_1 + 0x200);
  lVar13 = *(longlong *)(param_1 + 0x200);
  if (lVar13 == DAT_14c9abbf0) {
    bVar16 = (*(byte *)(lVar19 + 1099) & 0x20) >> 5;
  }
  else {
    bVar16 = 0;
  }
  local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,lVar13 == DAT_14c9abbf0);
  local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,lVar13 != DAT_14c9abbf0 || cVar6 == '\x03');
  local_b0 = CONCAT71(local_b0._1_7_,*(undefined1 *)(param_1 + 0x2a0));
  local_b8 = local_70;
  local_c0 = CONCAT31(local_c0._1_3_,bVar16);
  local_c8 = lVar12;
  FUN_140423bba(*(undefined8 *)(param_1 + 0x240),puVar1,lVar19,lVar18);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar10 = FUN_14042356a(lVar18);
  FUN_14499eed2(uVar5,puVar1,uVar10);
  lVar12 = *(longlong *)(param_1 + 0x240);
  if (*(char *)(lVar8 + 0xcc) == '\x01') {
    lVar18 = DAT_14c9abbe8;
    if (DAT_14c9abbe8 == 0) {
      lVar19 = FUN_145a10a92();
      lVar18 = *(longlong *)(lVar19 + 0x110);
      if (*(longlong *)(lVar19 + 0x110) == 0) {
        FUN_140aa6c08(lVar19);
        lVar18 = *(longlong *)(lVar19 + 0x110);
      }
    }
    DAT_14c9abbe8 = lVar18;
    lVar18 = DAT_14c9abbe8;
    if ((undefined4 *)(DAT_14c9abbe8 + 0x48) != (undefined4 *)(lVar8 + 0x36c)) {
      *(undefined4 *)(lVar8 + 0x36c) = *(undefined4 *)(DAT_14c9abbe8 + 0x48);
      *(undefined1 *)(lVar8 + 0x370) = 1;
    }
    puVar11 = (undefined4 *)(lVar18 + 0x4c);
    if (puVar11 != (undefined4 *)(lVar8 + 0x374)) goto LAB_140422f83;
  }
  else {
    *(undefined4 *)(lVar8 + 0x36c) = *(undefined4 *)(lVar8 + 0xd0);
    *(undefined1 *)(lVar8 + 0x370) = 1;
    puVar11 = (undefined4 *)(lVar8 + 0xd4);
LAB_140422f83:
    *(undefined4 *)(lVar8 + 0x374) = *puVar11;
    *(undefined1 *)(lVar8 + 0x378) = 1;
  }
  *(undefined1 *)(lVar8 + 0x37c) = *(undefined1 *)(lVar8 + 0xec);
  *(undefined1 *)(lVar8 + 0x37d) = 1;
  *(undefined1 *)(lVar8 + 0x37e) = *(undefined1 *)(lVar8 + 0x1b8);
  *(undefined1 *)(lVar8 + 0x37f) = 1;
  *(undefined1 *)(lVar8 + 0x380) = *(undefined1 *)(lVar8 + 0x1b9);
  *(undefined1 *)(lVar8 + 0x381) = 1;
  *(undefined1 *)(lVar8 + 0x382) = *(undefined1 *)(lVar8 + 0x1c0);
  *(undefined1 *)(lVar8 + 899) = 1;
  *(undefined1 *)(lVar8 + 900) = *(undefined1 *)(lVar8 + 0xed);
  *(undefined1 *)(lVar8 + 0x385) = 1;
  *(undefined8 *)(lVar8 + 0x388) = 0;
  *(undefined8 *)(lVar8 + 0x390) = 0;
  *(undefined1 *)(lVar8 + 0x398) = *(undefined1 *)(lVar12 + 0x400);
  *(undefined1 *)(lVar8 + 0x399) = 1;
  *(undefined1 *)(lVar8 + 0x39a) = *(undefined1 *)(lVar12 + 0x401);
  *(undefined1 *)(lVar8 + 0x39b) = 1;
  if (*(char *)(lVar8 + 0x3e0) == '\x01') {
    if (*(char *)(lVar8 + 0x3df) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3df) = 0;
    }
    if (*(char *)(lVar8 + 0x3dd) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3dd) = 0;
    }
    if (*(int *)(lVar8 + 0x3d4) != -1) {
      *(undefined8 *)(lVar8 + 0x3d4) = 0xffffffff;
    }
    if (*(int *)(lVar8 + 0x3cc) != -1) {
      *(undefined8 *)(lVar8 + 0x3cc) = 0xffffffff;
    }
    if (*(char *)(lVar8 + 0x3c9) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3c9) = 0;
    }
    if (*(char *)(lVar8 + 0x3c7) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3c7) = 0;
    }
    if (*(char *)(lVar8 + 0x3c5) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3c5) = 0;
    }
    if (*(char *)(lVar8 + 0x3c3) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3c3) = 0;
    }
    if (*(char *)(lVar8 + 0x3c1) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3c1) = 0;
    }
    if (*(char *)(lVar8 + 0x3bc) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3bc) = 0;
    }
    if (*(char *)(lVar8 + 0x3b4) == '\x01') {
      *(undefined1 *)(lVar8 + 0x3b4) = 0;
    }
    *(undefined1 *)(lVar8 + 0x3e0) = 0;
  }
LAB_1404230e9:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404233de FUN_1404233de body=154 status=ok
// SIG undefined FUN_1404233de(void)

longlong FUN_1404233de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14042340a;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14042340a:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140423478(param_1,param_2);
  return param_1;
}



// FUNCTION 140423478 FUN_140423478 body=241 status=ok
// SIG undefined FUN_140423478(void)

undefined8 * FUN_140423478(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14090bc06(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14045f6dc(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 7);
    }
  }
  return param_1;
}



// FUNCTION 14042356a FUN_14042356a body=338 status=ok
// SIG undefined FUN_14042356a(void)

undefined8 FUN_14042356a(longlong *param_1)

{
  int iVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
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
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(DAT_14cad2858 + 0x38);
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30)) {
      FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
    }
  }
  lVar2 = param_1[0x7c];
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return *(undefined8 *)(lVar2 + 0x6a0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404236bd FUN_1404236bd body=8 status=ok
// SIG undefined FUN_1404236bd(void)

void FUN_1404236bd(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return;
}



// FUNCTION 1404236c6 FUN_1404236c6 body=321 status=ok
// SIG undefined FUN_1404236c6(void)

void FUN_1404236c6(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14042372f;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14042372f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 140423808 FUN_140423808 body=946 status=ok
// SIG undefined FUN_140423808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140423808(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[7] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_1[5] = DAT_14c846510;
  param_1[6] = uVar1;
  uVar1 = DAT_14c846518;
  param_1[8] = DAT_14c846510;
  param_1[9] = uVar1;
  param_1[10] = DAT_14c846520;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0x16;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0x22;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0x2e;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0x3a;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0x46;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x6f] = DAT_14c8464e0;
  param_1[0x70] = uVar1;
  param_1[0x71] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x72] = DAT_14c8464e0;
  param_1[0x73] = uVar1;
  param_1[0x74] = DAT_14c8464f0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined2 *)(param_1 + 0x80) = 1;
  *(undefined1 *)((longlong)param_1 + 0x402) = 1;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined2 *)(param_1 + 0x85) = 0x203;
  param_1[0x86] = 0;
  param_1[0x87] = 0xffffffff7fffffff;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  memset(param_1 + 0xae,0,0x98);
  param_1[0xc1] = 0xffffffffff7fffff;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x625) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0xffffffffff7fffff;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x715) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c4) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x7dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7e4) = 0;
  param_1[0xfd] = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x7f4) = 0;
  param_1[0xff] = 0xffffffff;
  param_1[0x100] = 0;
  uVar2 = DAT_14c9abab8;
  if (((DAT_14c9abab0 != 0x400) || (DAT_14c7585d8 != 0)) &&
     ((DAT_14c9abab0 != 0x800 || (DAT_14c7585dc != 0)))) {
    uVar2 = DAT_14c9abab0 | _DAT_14c9abab4;
  }
  *(uint *)(param_1 + 1) = uVar2 | 0xff;
  return param_1;
}



// FUNCTION 140423bba FUN_140423bba body=4929 status=ok
// SIG undefined FUN_140423bba(void)

void FUN_140423bba(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  code *param_5,undefined1 param_6,undefined8 param_7,char param_8,
                  undefined1 param_9,undefined1 param_10)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *_Src;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong *plVar16;
  code *pcVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  int iVar24;
  undefined8 *puVar25;
  code **ppcVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined4 uVar33;
  double dVar34;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  undefined4 local_114;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  code **local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulonglong uStack_b0;
  code *local_a8;
  longlong local_a0;
  longlong *plStack_98;
  ulonglong local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar15 = 0;
  uVar33 = 0;
  local_128 = param_2;
  if ((param_3 != (longlong *)0x0) &&
     (lVar28 = *(longlong *)(param_1 + 0x3f0 + (ulonglong)(*(char *)(param_1 + 0xac) == '\0') * 8),
     lVar28 != 0)) {
    if (0 < *(int *)(lVar28 + 0x10)) {
      lVar21 = 0;
      do {
        lVar29 = *(longlong *)(*(longlong *)(lVar28 + 8) + lVar21 * 8);
        if ((lVar29 == 0) ||
           (iVar14 = FUN_144909502(param_3,*(undefined8 *)(lVar29 + 0x1f0)),
           iVar14 != *(int *)(lVar29 + 0x1f8))) {
          uVar33 = 0;
          goto LAB_140423db4;
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(lVar28 + 0x10));
    }
    if ((void **)(param_3 + (longlong)(int)param_3[0xe3] * 2 + 0xda) != &local_b8) {
      uVar19 = *(uint *)(param_3 + (longlong)(int)param_3[0xe3] * 2 + 0xdb);
      _Src = (void *)param_3[(longlong)(int)param_3[0xe3] * 2 + 0xda];
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
      if ((longlong)(int)uVar19 == 0) {
        uStack_b0 = (ulonglong)uVar19;
      }
      else {
        FUN_144756262(&local_b8,uVar19,0);
        memcpy(local_b8,_Src,(longlong)(int)uVar19 * 0x60);
      }
    }
    uVar31 = uStack_c0;
    iVar14 = (int)uStack_c0;
    lVar21 = (longlong)(int)uStack_c0;
    if ((int)uStack_c0 < (int)uStack_b0) {
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_b0);
      uVar19 = (int)uStack_b0 - iVar14;
      if ((uint)(uStack_c0._4_4_ - iVar14) < uVar19) {
        FUN_141744636(&local_c8,uVar31 & 0xffffffff);
      }
      FUN_142b5c6e4(lVar21 * 0x30 + local_c8,uVar19);
    }
    else {
      iVar14 = (int)uStack_b0;
      if ((int)uStack_b0 < 0) goto LAB_140424e78;
      if ((int)uStack_b0 < (int)uStack_c0) {
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_b0);
        FUN_147102d84();
      }
    }
    uVar33 = (undefined4)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
    if (0 < *(int *)(lVar28 + 0x10)) {
      lVar21 = 0;
      do {
        lVar29 = *(longlong *)(*(longlong *)(lVar28 + 8) + lVar21 * 8);
        puVar22 = (undefined8 *)(lVar29 + 0x130);
        puVar25 = (undefined8 *)((longlong)*(int *)(lVar29 + 0x1f8) * 0x60 + (longlong)local_b8);
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar25 = *puVar22;
          puVar22 = puVar22 + 1;
          puVar25 = puVar25 + 1;
        }
        uVar15 = *(undefined8 *)(lVar29 + 0x378);
        uVar9 = *(undefined8 *)(lVar29 + 0x380);
        lVar18 = (longlong)*(int *)(lVar29 + 0x1f8) * 0x30;
        uVar10 = *(undefined8 *)(lVar29 + 0x388);
        uVar11 = *(undefined8 *)(lVar29 + 0x390);
        uVar12 = *(undefined8 *)(lVar29 + 0x3a0);
        puVar22 = (undefined8 *)(local_c8 + 0x20 + lVar18);
        *puVar22 = *(undefined8 *)(lVar29 + 0x398);
        puVar22[1] = uVar12;
        puVar22 = (undefined8 *)(local_c8 + 0x10 + lVar18);
        *puVar22 = uVar10;
        puVar22[1] = uVar11;
        *(undefined8 *)(local_c8 + lVar18) = uVar15;
        ((undefined8 *)(local_c8 + lVar18))[1] = uVar9;
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(lVar28 + 0x10));
    }
  }
LAB_140423db4:
  local_114 = uVar33;
  FUN_1408969b2(param_1);
  if (param_3 == (longlong *)0x0) goto LAB_140424c34;
  local_130 = (longlong *)param_3[0xcb];
  if (local_130 == (longlong *)0x0) {
    local_130 = (longlong *)param_3[0xcc];
    if ((DAT_14c950c29 & local_130 != (longlong *)0x0) != 0) goto LAB_140424e40;
    if (local_130 == (longlong *)0x0) goto LAB_140424c34;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140424e40:
    FUN_1456cec3c(local_130);
  }
  if (DAT_14cb06da8 == 0) {
    local_150 = &local_a8;
    local_a8 = FUN_1449e2820;
    local_140 = FUN_14081d0ea;
    local_148 = &LAB_1464003b0;
    local_158 = &LAB_147d17bdf;
    local_160 = &LAB_1417edf22;
    local_168 = L"Engine";
    local_170 = 0;
    local_178 = 0x10000000;
    local_180 = 8;
    local_188 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  lVar28 = local_128;
  if (((*(int *)(local_130[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) || (param_5 == (code *)0x0))
     || (*(longlong *)
          (*(longlong *)(local_130[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
         DAT_14cb06da8 + 0x30)) goto LAB_140424c34;
  FUN_1402c73be(param_1 + 0x5a0,local_128 + 0x118);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar28 + 0x58);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(lVar28 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar28 + 0xe4);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(lVar28 + 0xef);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar28 + 0xe8);
  if (*(char *)(lVar28 + 0xdc) == '\x01') {
    uVar33 = *(undefined4 *)(lVar28 + 0xe0);
  }
  else {
    uVar33 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar33;
  FUN_140421caa(param_1 + 0x78,lVar28 + 0xf8);
  FUN_140421d08(param_1 + 0x88,lVar28 + 0x108);
  plVar23 = local_130;
  uVar19 = *(uint *)(param_5 + 0xc);
  *(uint *)(param_1 + 0x70) = uVar19;
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar28 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
  }
  else {
    lVar28 = 0;
  }
  iVar14 = *(int *)(lVar28 + 0x10);
  if (*(int *)(lVar28 + 0x10) == 0) {
    LOCK();
    iVar14 = DAT_14c964868 + 1;
    UNLOCK();
    iVar24 = DAT_14c964868 + 1;
    bVar32 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar14;
    if (bVar32) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar24);
    }
    LOCK();
    iVar14 = *(int *)(lVar28 + 0x10);
    bVar32 = iVar14 == 0;
    if (bVar32) {
      *(int *)(lVar28 + 0x10) = iVar24;
      iVar14 = 0;
    }
    UNLOCK();
    if (bVar32) {
      iVar14 = iVar24;
    }
  }
  *(int *)(param_1 + 0x74) = iVar14;
  *(undefined1 *)(param_1 + 0x400) = param_9;
  *(undefined1 *)(param_1 + 0x401) = param_10;
  local_120 = (**(code **)(*plVar23 + 0x308))(plVar23);
  plVar23 = local_130;
  if (0 < (longlong)*(int *)(param_5 + 0x48)) {
    lVar28 = local_120 + 200;
    if (*(longlong *)(local_120 + 0xd0) != 0) {
      lVar28 = *(longlong *)(local_120 + 0xd0);
    }
    lVar21 = 0;
    do {
      lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(param_5 + 0x40) + lVar21 * 8) + 0x28);
      if ((lVar29 == 0) || (*(int *)(local_120 + 0x98) == *(int *)(local_120 + 0xc4)))
      goto LAB_140424c34;
      uVar19 = (uint)((ulonglong)lVar29 >> 0x10);
      uVar27 = (uint)lVar29 & 0xffff;
      iVar14 = *(int *)(lVar28 + (ulonglong)
                                 ((int)((ulonglong)lVar29 >> 0x20) + ((uint)lVar29 << 0x10 | uVar27)
                                  + (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar27 >> 4) &
                                 *(int *)(local_120 + 0xd8) - 1U) * 4);
      while( true ) {
        if (iVar14 == -1) goto LAB_140424c34;
        plVar16 = (longlong *)(*(longlong *)(local_120 + 0x90) + (longlong)iVar14 * 0x14);
        if (*plVar16 == lVar29) break;
        iVar14 = *(int *)((longlong)plVar16 + 0xc);
      }
      if (((plVar16 == (longlong *)0x0) || (plVar16 + 1 == (longlong *)0x0)) ||
         ((int)plVar16[1] == -1)) goto LAB_140424c34;
      lVar21 = lVar21 + 1;
    } while (lVar21 != *(int *)(param_5 + 0x48));
  }
  if (0 < (longlong)*(int *)(param_5 + 0x58)) {
    local_110 = *(longlong *)(param_5 + 0x50);
    lVar28 = local_120 + 200;
    if (*(longlong *)(local_120 + 0xd0) != 0) {
      lVar28 = *(longlong *)(local_120 + 0xd0);
    }
    uVar19 = *(int *)(local_120 + 0xd8) - 1;
    lVar21 = 0;
    do {
      lVar29 = *(longlong *)(local_110 + lVar21 * 8);
      lVar18 = *(longlong *)(lVar29 + 0x78);
      if ((lVar18 == 0) || (*(int *)(local_120 + 0x98) == *(int *)(local_120 + 0xc4)))
      goto LAB_140424c34;
      uVar27 = (uint)((ulonglong)lVar18 >> 0x10);
      uVar20 = (uint)lVar18 & 0xffff;
      iVar14 = *(int *)(lVar28 + (ulonglong)
                                 ((int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar20)
                                  + (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar20 >> 4) & uVar19) * 4
                       );
      while( true ) {
        if (iVar14 == -1) goto LAB_140424c34;
        plVar16 = (longlong *)(*(longlong *)(local_120 + 0x90) + (longlong)iVar14 * 0x14);
        if (*plVar16 == lVar18) break;
        iVar14 = *(int *)((longlong)plVar16 + 0xc);
      }
      if ((((plVar16 == (longlong *)0x0) || (plVar16 + 1 == (longlong *)0x0)) ||
          ((int)plVar16[1] == -1)) || (lVar29 = *(longlong *)(lVar29 + 0x80), lVar29 == 0))
      goto LAB_140424c34;
      uVar27 = (uint)((ulonglong)lVar29 >> 0x10);
      uVar20 = (uint)lVar29 & 0xffff;
      iVar14 = *(int *)(lVar28 + (ulonglong)
                                 ((int)((ulonglong)lVar29 >> 0x20) + ((uint)lVar29 << 0x10 | uVar20)
                                  + (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar20 >> 4) & uVar19) * 4
                       );
      while( true ) {
        if (iVar14 == -1) goto LAB_140424c34;
        plVar16 = (longlong *)(*(longlong *)(local_120 + 0x90) + (longlong)iVar14 * 0x14);
        if (*plVar16 == lVar29) break;
        iVar14 = *(int *)((longlong)plVar16 + 0xc);
      }
      if (((plVar16 == (longlong *)0x0) || (plVar16 + 1 == (longlong *)0x0)) ||
         ((int)plVar16[1] == -1)) goto LAB_140424c34;
      lVar21 = lVar21 + 1;
    } while (lVar21 != *(int *)(param_5 + 0x58));
  }
  uVar15 = (**(code **)(*local_130 + 0x3f0))(local_130);
  uVar33 = (**(code **)(*param_3 + 0xc00))(param_3);
  lVar28 = FUN_140f76254(uVar15,plVar23,uVar33);
  if (0 < (longlong)*(int *)(param_5 + 0x48)) {
    local_110 = *(longlong *)(param_5 + 0x40);
    lVar21 = local_120 + 200;
    if (*(longlong *)(local_120 + 0xd0) != 0) {
      lVar21 = *(longlong *)(local_120 + 0xd0);
    }
    lVar29 = 0;
    do {
      lVar18 = *(longlong *)(*(longlong *)(local_110 + lVar29 * 8) + 0x28);
      if ((lVar18 == 0) || (*(int *)(local_120 + 0x98) == *(int *)(local_120 + 0xc4)))
      goto LAB_140424c34;
      uVar19 = (uint)((ulonglong)lVar18 >> 0x10);
      uVar27 = (uint)lVar18 & 0xffff;
      iVar14 = *(int *)(lVar21 + (ulonglong)
                                 ((int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar27)
                                  + (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar27 >> 4) &
                                 *(int *)(local_120 + 0xd8) - 1U) * 4);
      while( true ) {
        if (iVar14 == -1) goto LAB_140424c34;
        plVar23 = (longlong *)(*(longlong *)(local_120 + 0x90) + (longlong)iVar14 * 0x14);
        if (*plVar23 == lVar18) break;
        iVar14 = *(int *)((longlong)plVar23 + 0xc);
      }
      if ((((plVar23 == (longlong *)0x0) || (plVar23 + 1 == (longlong *)0x0)) ||
          (iVar14 = (int)plVar23[1], iVar14 < 0)) || (*(int *)(lVar28 + 0x18) <= iVar14))
      goto LAB_140424c34;
      lVar29 = lVar29 + 1;
    } while (lVar29 != *(int *)(param_5 + 0x48));
  }
  plStack_98 = (longlong *)0x40a7700000000000;
  local_90 = 0x401921fb60000000;
  local_a8 = (code *)(CONCAT44(*(undefined4 *)(local_128 + 0x60),
                               (int)CONCAT71((int7)((ulonglong)local_a8 >> 8),param_6)) &
                     0xffffffffffff00ff);
  local_a0 = *(undefined8 *)(local_128 + 100);
  local_88 = (double)*(float *)(local_128 + 0x6c);
  local_80 = (double)*(float *)(local_128 + 0x70);
  local_78 = (double)*(float *)(local_128 + 0x74);
  local_70 = (double)*(float *)(local_128 + 0xd8);
  uStack_68 = (double)*(float *)(local_128 + 0x78);
  lVar28 = param_3[0x16];
  if (lVar28 == 0) {
    lVar28 = FUN_1448abda6(param_3);
  }
  plVar16 = (longlong *)FUN_14001cc68(0x460,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14a1e13e0;
  FUN_141744d98(plVar16 + 2,lVar28,&local_a8);
  plVar23 = local_130;
  if (plVar16 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3a8) = 0x10;
    plVar30 = *(longlong **)(param_1 + 0x3b0);
    if (plVar30 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3b0) = 0;
LAB_14042448b:
      LOCK();
      plVar1 = plVar30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar2 = (int *)((longlong)plVar30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
        }
      }
      if (plVar16 != (longlong *)0x0) goto LAB_1404244d5;
    }
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x3a8) = plVar16 + 2;
    plVar30 = *(longlong **)(param_1 + 0x3b0);
    if (plVar16 == plVar30) {
      LOCK();
      plVar30 = plVar16 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x3b0) = plVar16;
      if (plVar30 != (longlong *)0x0) goto LAB_14042448b;
    }
LAB_1404244d5:
    LOCK();
    plVar30 = plVar16 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (param_3[0x15] != 0) {
    FUN_140d6470a(*(undefined8 *)(param_1 + 0x3a8));
  }
  lVar28 = 0;
  *(undefined1 *)(param_1 + 1000) = 0;
  local_88 = 0.0;
  local_80 = (double)((ulonglong)local_80 & 0xffffffffffffff00);
  local_78 = 0.0;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  local_90 = local_90 & 0xffffffff00000000;
  local_60 = DAT_14c846520;
  local_70 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
  uStack_68 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
  local_58 = 0;
  lStack_50 = 0;
  local_a8 = param_5;
  if ((*(longlong *)(local_128 + 0x168) != 0) &&
     (lVar28 = *(longlong *)(*(longlong *)(local_128 + 0x168) + 0x30),
     (lVar28 != 0 & DAT_14c950c29) == 1)) {
    FUN_1456cec3c(lVar28);
  }
  local_a0 = local_120;
  plStack_98 = plVar23;
  local_88 = (double)lVar28;
  uVar33 = (**(code **)(*param_3 + 0xc00))(param_3);
  local_90 = CONCAT44(local_90._4_4_,uVar33);
  local_80 = (double)CONCAT71(local_80._1_7_,*(undefined1 *)(local_128 + 0x179));
  local_70 = (double)param_3[0x50];
  uStack_68 = (double)param_3[0x51];
  local_60 = (double)param_3[0x52];
  local_58 = param_7;
  lStack_50 = param_1 + 0x520;
  uVar15 = *(undefined8 *)(param_1 + 0x3a8);
  lVar28 = FUN_14149c938(&local_a8);
  if (lVar28 == 0) {
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    plVar23 = *(longlong **)(param_1 + 0x3b0);
    if (plVar23 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3b0) = 0;
      LOCK();
      plVar16 = plVar23 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
  }
  else {
    FUN_140c1e570(uVar15,lVar28);
    *(longlong *)(param_1 + 0x3f0) = lVar28;
    if (param_8 == '\0') {
      local_58 = 0;
    }
    lVar21 = FUN_14149c938(&local_a8);
    uVar33 = local_114;
    lVar28 = local_128;
    *(longlong *)(param_1 + 0x3f8) = lVar21;
    pcVar17 = *(code **)(param_1 + 0x3f0);
    if (*(int *)(pcVar17 + 0x10) != *(int *)(lVar21 + 0x10)) {
      FUN_1470fbd3a(lVar21);
      pcVar17 = *(code **)(param_1 + 0x3f0);
    }
    *(undefined8 *)(param_1 + 0x50) = DAT_14c8464f0;
    uVar13 = DAT_14c8464e8._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 0x48) = uVar8;
    *(undefined4 *)(param_1 + 0x4c) = uVar13;
    uVar19 = *(uint *)(pcVar17 + 0x10);
    if (0 < (int)uVar19) {
      lVar21 = 0;
      do {
        lVar29 = *(longlong *)(*(longlong *)(pcVar17 + 8) + lVar21 * 8);
        if (*(char *)(lVar28 + 0x188) == '\x01') {
          *(double *)(lVar29 + 0x110) = (double)*(float *)(lVar28 + 0x18c);
        }
        if (*(char *)(lVar28 + 400) == '\x01') {
          *(double *)(lVar29 + 0x108) = (double)*(float *)(lVar28 + 0x194);
        }
        *(double *)(param_1 + 0x40) = *(double *)(lVar29 + 0x60) + *(double *)(param_1 + 0x40);
        *(double *)(param_1 + 0x48) = *(double *)(lVar29 + 0x68) + *(double *)(param_1 + 0x48);
        *(double *)(param_1 + 0x50) = *(double *)(lVar29 + 0x70) + *(double *)(param_1 + 0x50);
        lVar21 = lVar21 + 1;
        pcVar17 = *(code **)(param_1 + 0x3f0);
        uVar19 = *(uint *)(pcVar17 + 0x10);
      } while (lVar21 < (int)uVar19);
    }
    if ((char)uVar33 == '\0') {
      *(undefined1 *)(param_1 + 0x480) = 2;
    }
    else {
      local_a8 = pcVar17;
      local_a0 = *(longlong *)(param_1 + 0x3f8);
      if (pcVar17 == (code *)0x0) {
        pcVar17 = (code *)0x0;
      }
      else if (((local_a0 != 0) && (*(uint *)(local_a0 + 0x10) == uVar19)) && (0 < (int)uVar19)) {
        uVar31 = 0;
        do {
          lVar28 = 0;
          do {
            lVar21 = local_c8;
            plVar23 = *(longlong **)
                       (*(longlong *)(*(longlong *)((longlong)&local_a8 + lVar28) + 8) + uVar31 * 8)
            ;
            iVar14 = (int)plVar23[0x3f];
            lVar29 = (longlong)iVar14;
            if (((-1 < lVar29) && (iVar14 < (int)uStack_b0)) && (iVar14 < (int)uStack_c0)) {
              lVar18 = lVar29 * 0x30;
              (**(code **)(*plVar23 + 0x48))(plVar23,(void *)(lVar29 * 0x60 + (longlong)local_b8));
              plVar23[0x1d] = *(longlong *)(lVar21 + 0x10 + lVar18);
              lVar29 = ((longlong *)(lVar21 + lVar18))[1];
              plVar23[0x1b] = *(longlong *)(lVar21 + lVar18);
              plVar23[0x1c] = lVar29;
              puVar3 = (undefined4 *)(lVar21 + 0x18 + lVar18);
              uVar33 = puVar3[1];
              uVar7 = puVar3[2];
              uVar8 = puVar3[3];
              *(undefined4 *)(plVar23 + 0x1e) = *puVar3;
              *(undefined4 *)((longlong)plVar23 + 0xf4) = uVar33;
              *(undefined4 *)(plVar23 + 0x1f) = uVar7;
              *(undefined4 *)((longlong)plVar23 + 0xfc) = uVar8;
              plVar23[0x20] = *(longlong *)(lVar21 + 0x28 + lVar18);
              FUN_1449e8d62(plVar23);
            }
            lVar28 = lVar28 + 8;
          } while (lVar28 != 0x10);
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar19);
        pcVar17 = *(code **)(param_1 + 0x3f0);
      }
    }
    if (0 < *(int *)(pcVar17 + 0x10)) {
      lVar28 = 0;
      do {
        lVar21 = *(longlong *)(*(longlong *)(pcVar17 + 8) + lVar28 * 8);
        *(undefined4 *)(lVar21 + 0x5b8) = *(undefined4 *)(lVar21 + 0x108);
        *(undefined4 *)(lVar21 + 0x5bc) = *(undefined4 *)(lVar21 + 0x10c);
        *(undefined4 *)(lVar21 + 0x5c0) = *(undefined4 *)(lVar21 + 0x110);
        *(undefined4 *)(lVar21 + 0x5c4) = *(undefined4 *)(lVar21 + 0x114);
        lVar28 = lVar28 + 1;
      } while (lVar28 < *(int *)(pcVar17 + 0x10));
      pcVar17 = *(code **)(param_1 + 0x3f0);
    }
    iVar14 = *(int *)(pcVar17 + 0x20);
    if ((longlong)iVar14 != 0) {
      lVar28 = *(longlong *)(pcVar17 + 0x18);
      lVar21 = 0;
      do {
        uVar15 = *(undefined8 *)(lVar28 + lVar21);
        FUN_144912200(uVar15,0);
        FUN_14499301a(uVar15);
        lVar21 = lVar21 + 8;
      } while ((longlong)iVar14 * 8 != lVar21);
    }
    lVar28 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f8) + 0x20);
    if (lVar28 != 0) {
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x18);
      lVar29 = 0;
      do {
        uVar15 = *(undefined8 *)(lVar21 + lVar29);
        FUN_144912200(uVar15,0);
        FUN_14499301a(uVar15);
        lVar29 = lVar29 + 8;
      } while (lVar28 * 8 != lVar29);
    }
    uVar33 = local_114;
    lVar28 = local_128;
    if (*(char *)(local_128 + 0x198) == '\x01') {
      dVar5 = *(double *)(param_1 + 0x48) / *(double *)(local_128 + 0x1a8);
      dVar34 = *(double *)(param_1 + 0x40) / *(double *)(local_128 + 0x1a0);
      dVar6 = *(double *)(param_1 + 0x50) / *(double *)(local_128 + 0x1b0);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      dVar34 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      dVar6 = DAT_14c846520;
    }
    *(double *)(param_1 + 0x28) = dVar34 * 100.0;
    *(double *)(param_1 + 0x30) = dVar5 * 100.0;
    *(double *)(param_1 + 0x38) = dVar6 * 100.0;
    iVar14 = *(int *)(local_120 + 0x28);
    if (iVar14 < 0) {
LAB_140424e78:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    *(undefined4 *)(param_1 + 0x458) = 0;
    if (*(int *)(param_1 + 0x45c) < iVar14) {
      FUN_14481578e(param_1 + 0x450,iVar14);
    }
    local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffffffff);
    FUN_1448156a8(param_1 + 0x450,&local_a8,iVar14);
    lVar21 = *(longlong *)(param_1 + 0x3f0);
    if (0 < *(int *)(lVar21 + 0x10)) {
      lVar29 = 0;
      do {
        iVar14 = *(int *)(*(longlong *)(*(longlong *)(lVar21 + 8) + lVar29 * 8) + 0x1f8);
        if ((-1 < (longlong)iVar14) && (iVar14 < *(int *)(param_1 + 0x458))) {
          *(int *)(*(longlong *)(param_1 + 0x450) + (longlong)iVar14 * 4) = (int)lVar29;
          lVar21 = *(longlong *)(param_1 + 0x3f0);
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 < *(int *)(lVar21 + 0x10));
    }
    local_e8 = param_3[0x50];
    lStack_e0 = param_3[0x51];
    local_f0 = &local_e8;
    local_d8 = param_3[0x52];
    plVar23 = param_3 + 0x48;
    ppcVar26 = &local_a8;
    for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
      *ppcVar26 = (code *)*plVar23;
      plVar23 = plVar23 + 1;
      ppcVar26 = ppcVar26 + 1;
    }
    local_108 = local_120;
    local_100 = param_1;
    local_f8 = &local_a8;
    FUN_140654c40(lVar28 + 0x30);
    FUN_142b52688(&local_108);
    if ((*(char *)(lVar28 + 0x29) != '\0') &&
       (pcVar17 = (code *)(**(code **)(*param_3 + 0xb98))(param_3), pcVar17 != param_5)) {
      (**(code **)(*param_3 + 0xb98))(param_3);
      FUN_142b52688(&local_108);
    }
    if (*(char *)(lVar28 + 0x17a) == '\x01') {
      lVar21 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
      if (lVar21 != 0) {
        dVar5 = (double)*(float *)(lVar28 + 0x17c);
        lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8);
        if (1.0 <= dVar5) {
          dVar5 = 1.0;
        }
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        lVar18 = 0;
        do {
          lVar4 = *(longlong *)(lVar29 + lVar18);
          if (lVar4 != 0) {
            *(double *)(lVar4 + 0x120) = dVar5;
          }
          lVar18 = lVar18 + 8;
        } while (lVar21 * 8 != lVar18);
      }
    }
    if (*(char *)(lVar28 + 0x180) == '\x01') {
      lVar21 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
      if (lVar21 != 0) {
        dVar5 = (double)*(float *)(lVar28 + 0x184);
        lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8);
        if (1.0 <= dVar5) {
          dVar5 = 1.0;
        }
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        lVar18 = 0;
        do {
          lVar4 = *(longlong *)(lVar29 + lVar18);
          if (lVar4 != 0) {
            *(double *)(lVar4 + 0x118) = dVar5;
          }
          lVar18 = lVar18 + 8;
        } while (lVar21 * 8 != lVar18);
      }
    }
    if ((char)uVar33 == '\0') {
      FUN_140b7c1ce(param_1,1);
    }
    else {
      FUN_140af3470();
    }
    FUN_142b528ba(param_1,param_3,1);
    FUN_140af3470(param_1);
    if (*(char *)(lVar28 + 0x138) == '\0') {
      *(undefined8 *)(param_1 + 0x800) = 0;
    }
    else {
      lVar21 = *(longlong *)(lVar28 + 0x168);
      if (DAT_14c950c29 == 1) {
        if (lVar21 == 0) {
          lVar21 = 0;
          lVar28 = local_128;
        }
        else {
          FUN_1456cec3c();
          lVar21 = *(longlong *)(local_128 + 0x168);
          lVar28 = local_128;
        }
      }
      *(longlong *)(param_1 + 0x6d0) = lVar21;
      *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(param_1 + 0x3f0);
      lVar28 = FUN_140257036(lVar28);
      if (lVar28 != 0) {
        FUN_140e0e570(lVar28,param_1 + 0x6d0);
        uVar19 = *(uint *)(lVar28 + 0xc);
        *(uint *)(param_1 + 0x800) = uVar19;
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar28 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar28 = 0;
        }
        iVar14 = *(int *)(lVar28 + 0x10);
        if (*(int *)(lVar28 + 0x10) == 0) {
          LOCK();
          iVar14 = DAT_14c964868 + 1;
          UNLOCK();
          iVar24 = DAT_14c964868 + 1;
          bVar32 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar14;
          if (bVar32) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar24);
          }
          LOCK();
          iVar14 = *(int *)(lVar28 + 0x10);
          bVar32 = iVar14 == 0;
          if (bVar32) {
            *(int *)(lVar28 + 0x10) = iVar24;
            iVar14 = 0;
          }
          UNLOCK();
          if (bVar32) {
            iVar14 = iVar24;
          }
        }
        *(int *)(param_1 + 0x804) = iVar14;
      }
      FUN_14174344a(param_1 + 0x5e0,param_1 + 0x6d0);
      *(undefined8 *)(param_1 + 0x5e8) = 0;
    }
  }
LAB_140424c34:
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140424efc FUN_140424efc body=1997 status=ok
// SIG undefined FUN_140424efc(void)

void FUN_140424efc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar8 + 0x10;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x90);
    puVar8 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar8 + 0x10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar8 = &PTR_FUN_14a2409f8;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar8;
  uVar6 = 0;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 5) = 0;
  puVar8[6] = 0;
  *(undefined4 *)(puVar8 + 7) = 0;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) != 0) {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  lVar2 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[9] = puVar7;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,4);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[10] = puVar7;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,4);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[0xb] = puVar7;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[0xc] = puVar7;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[0xd] = puVar7;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[0xe] = puVar7;
  *(undefined8 *)((longlong)puVar8 + 0x3c) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x44) = 0;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[0xf] = puVar7;
  local_50 = puVar8 + 2;
  FUN_1404256ca();
  local_58 = DAT_14c9e28a0;
  FUN_140425872(param_1 + 0x1a8,plVar1,&local_50);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404256ca FUN_1404256ca body=423 status=ok
// SIG undefined FUN_1404256ca(void)

undefined * FUN_1404256ca(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e2908) {
    FUN_144b3d300(&DAT_14c9e2908);
    if (DAT_14c9e2908 == -1) {
      FUN_14570e45c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"OrthoGridUniformBuffer";
      local_78 = L"FOrthoVoxelGridUniformBufferParameters";
      local_50 = 0x70;
      local_58 = 0xf4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e2888,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cad7e3);
      _Init_thread_footer(&DAT_14c9e2908);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e2888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140425872 FUN_140425872 body=242 status=ok
// SIG undefined FUN_140425872(void)

undefined8 *
FUN_140425872(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_1404256ca();
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9e28d0;
  puVar6[4] = DAT_14c9e28d0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9e2888;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a240a00;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 140425971 FUN_140425971 body=445 status=ok
// SIG undefined FUN_140425971(void)

void FUN_140425971(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_68 [35];
  undefined1 local_45;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447be468(param_1,&local_44,&local_45);
  uVar4 = DAT_14c9c4540;
  uVar3 = DAT_14c9c0ea0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_1404259e4;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_1404259e4:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x12 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x12 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_140425a60;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_140425a60:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x13;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x90;
  *(undefined4 *)(puVar5 + 1) = (&DAT_14ca11f20)[(ulonglong)(2 < (int)param_1) * 0x3a];
  *(undefined2 *)(puVar5 + 2) = 0;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = (int)param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a204b90;
  *(undefined1 *)(puVar5 + 0x10) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x84) = local_44;
  *(undefined1 *)(puVar5 + 0x11) = local_45;
  *(undefined4 *)((longlong)puVar5 + 0x89) = 0;
  puVar5[8] = uVar4;
  puVar5[9] = uVar3;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140425b2f FUN_140425b2f body=106 status=ok
// SIG undefined FUN_140425b2f(void)

longlong FUN_140425b2f(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x170) != 0)) {
    lVar3 = FUN_140425b9a();
    lVar2 = *(longlong *)(lVar2 + 0x170);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140425b9a FUN_140425b9a body=228 status=ok
// SIG undefined FUN_140425b9a(void)

longlong FUN_140425b9a(void)

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
  if (DAT_14cbaaa20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464e18a8;
    local_38 = &LAB_148c14bef;
    local_40 = &LAB_14621c730;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 2000;
    FUN_14081cfa3(L"/Script/OakGame",L"OakGameMode",&DAT_14cbaaa20,FUN_1465d95c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaaa20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140425c80 FUN_140425c80 body=175 status=ok
// SIG undefined FUN_140425c80(void)

undefined4 FUN_140425c80(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  
  lVar2 = FUN_140944864(param_2);
  if (((lVar2 != 0) && (lVar2 = FUN_140307b1c(lVar2), lVar2 != 0)) &&
     (*(int *)(param_1 + 0x758) != *(int *)(param_1 + 0x784))) {
    puVar3 = &DAT_14c9485f0;
    if (*(uint **)(lVar2 + 8) != (uint *)0x0) {
      puVar3 = *(uint **)(lVar2 + 8);
    }
    uVar1 = *puVar3;
    lVar2 = param_1 + 0x788;
    if (*(longlong *)(param_1 + 0x790) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x790);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x798) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x750) + (longlong)iVar4 * 0x40;
        if (*(uint *)(*(longlong *)(param_1 + 0x750) + (longlong)iVar4 * 0x40) == uVar1) {
          if (lVar2 == -0x28 || lVar2 == 0) {
            return 0;
          }
          return CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)(lVar2 + 0x30));
        }
        iVar4 = *(int *)(lVar2 + 0x38);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 140425d30 FUN_140425d30 body=40 status=ok
// SIG undefined FUN_140425d30(void)

undefined8 FUN_140425d30(undefined8 param_1,int param_2)

{
  FUN_140425d58();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140425d58 FUN_140425d58 body=60 status=ok
// SIG undefined FUN_140425d58(void)

void FUN_140425d58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca3ae0;
  if ((param_1[0xd] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd] + 0x50));
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140425d94 FUN_140425d94 body=1534 status=ok
// SIG undefined FUN_140425d94(void)

/* WARNING: Removing unreachable block (ram,0x000140425faa) */

void FUN_140425d94(longlong *param_1,float param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  ushort *puVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  size_t sVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStack_288 [40];
  longlong *local_260;
  longlong *local_258;
  undefined1 *local_250;
  char local_248;
  longlong local_240 [32];
  undefined1 local_140 [128];
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [88];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_1[0x51] == 0) goto LAB_140425f5d;
  *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
  (**(code **)(*param_1 + 0x60))(param_1);
  lVar5 = param_1[0x51];
  if (lVar5 == 0) goto LAB_140425f5d;
  puVar1 = (uint *)(param_1 + 6);
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_140425faf:
    lVar15 = 0;
  }
  else {
    uVar4 = *puVar1;
    lVar15 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar16 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar16 == (longlong *)0x0) ||
         (((int)plVar16[2] != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_140425faf;
      lVar15 = *plVar16;
    }
  }
  cVar8 = FUN_140426394(lVar15 + 0x3c0,&DAT_14cbd92d8);
  cVar9 = *(char *)(lVar5 + 0x1d0);
  if (cVar8 == '\0') {
    if (cVar9 != '\0') {
      iVar11 = *(int *)(lVar5 + 0x1d4);
      uVar10 = 0;
      if (cVar9 == '\0') {
        if (iVar11 == 0) {
          iVar11 = 0;
          uVar10 = 0;
          goto LAB_140426101;
        }
      }
      else {
LAB_140426101:
        *(undefined1 *)(lVar5 + 0x1d0) = uVar10;
        *(int *)(lVar5 + 0x1d4) = iVar11 + 1;
      }
      puVar6 = *(ushort **)(lVar5 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
  }
  else if (cVar9 == '\0') {
    iVar11 = *(int *)(lVar5 + 0x1d4);
    uVar10 = 1;
    goto LAB_140426101;
  }
  FUN_1448d5e3c(&local_260,param_1 + 0x41);
  lVar15 = local_260[0x30];
  AcquireSRWLockShared((PSRWLOCK)(lVar15 + 0x138));
  plVar16 = local_258;
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_258 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar3 = (int *)((longlong)plVar16 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_140425fb6:
    lVar18 = 0;
  }
  else {
    uVar4 = *puVar1;
    lVar18 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar16 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar16 == (longlong *)0x0) ||
         (((int)plVar16[2] != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_140425fb6;
      lVar18 = *plVar16;
    }
  }
  cVar9 = FUN_140426394(lVar18 + 0x3c0,&DAT_14cbd9318);
  if (cVar9 == '\0') {
    if (*(char *)(lVar5 + 0x1d8) == '\x01') {
      *(int *)(lVar5 + 0x138) = *(int *)(lVar5 + 0x138) + 1;
      fVar19 = *(float *)(lVar5 + 0x124) + param_2;
      *(float *)(lVar5 + 0x124) = fVar19;
      if (*(float *)(lVar5 + 0x110) <= fVar19) {
        if (*(int *)(lVar5 + 0xb8) == 0) {
          uVar12 = FUN_14479d2ce(puVar1);
          local_260 = local_240;
          local_248 = '\0';
          local_250 = local_140;
          local_258 = local_260;
          pwVar13 = (wchar_t *)FUN_140c7f682(param_1,L"HideSubtitleDisplay",&local_260);
          local_c0 = 0;
          if (pwVar13 == (wchar_t *)0x0) {
            local_b8 = 0;
            local_b0 = 0;
          }
          else {
            sVar14 = wcslen(pwVar13);
            FUN_1446fe5a4(local_140,pwVar13,sVar14 & 0xffffffff,1);
          }
          FUN_1412a486e(uVar12,local_b8);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          if (local_248 == '\x01') {
            FUN_1400020a8(local_260);
          }
          if (*(char *)(lVar5 + 0x1d8) == '\0') {
            if (*(int *)(lVar5 + 0x1dc) != 0) goto LAB_1404260c9;
            iVar11 = 1;
          }
          else {
            iVar11 = *(int *)(lVar5 + 0x1dc) + 1;
          }
          *(undefined1 *)(lVar5 + 0x1d8) = 0;
          *(int *)(lVar5 + 0x1dc) = iVar11;
        }
        else {
          *(int *)(lVar5 + 0xc0) = *(int *)(lVar5 + 0xc0) + 1;
          FUN_145a1d564(lVar5 + 0xb0,local_a8);
          FUN_145a1d726(lVar5 + 0xe0,local_a8);
          if (*(int *)(lVar5 + 0x134) == -1) {
            if (*(int *)(lVar5 + 0x1a0) != *(int *)(lVar15 + 0xe0)) {
              FUN_144a787a6(lVar5 + 400,lVar15 + 0xd0);
              *(undefined4 *)(lVar5 + 0x1a0) = *(undefined4 *)(lVar15 + 0xe0);
            }
          }
          else {
            FUN_140775496(lVar5 + 400,lVar5 + 0x128);
          }
          uVar12 = FUN_14479d2ce(puVar1);
          local_260 = local_240;
          local_248 = '\0';
          local_250 = local_140;
          local_258 = local_260;
          pwVar13 = (wchar_t *)FUN_140c7f682(param_1,L"PlayNextSubtitle",&local_260);
          local_c0 = 0;
          if (pwVar13 == (wchar_t *)0x0) {
            local_b8 = 0;
            local_b0 = 0;
          }
          else {
            sVar14 = wcslen(pwVar13);
            FUN_1446fe5a4(local_140,pwVar13,sVar14 & 0xffffffff,1);
          }
          FUN_1412a486e(uVar12,local_b8);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          if (local_248 == '\x01') {
            FUN_1400020a8(local_260);
          }
          FUN_145a1d468(local_a8);
        }
LAB_1404260c9:
        puVar6 = *(ushort **)(lVar5 + 0x80);
        if (puVar6 != (ushort *)0x0) {
          *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
        }
      }
    }
    *(int *)(lVar5 + 0xd8) = *(int *)(lVar5 + 0xd8) + 1;
    uVar17 = (ulonglong)*(int *)(lVar5 + 0xd0);
    if (0 < (longlong)uVar17) {
      plVar16 = (longlong *)(lVar5 + 200);
      lVar18 = uVar17 * 0x58 + -0x14;
      do {
        if (((longlong)uVar17 <= (longlong)*(int *)(lVar5 + 0xd0)) &&
           (*(float *)(*plVar16 + lVar18) = *(float *)(*plVar16 + lVar18) + param_2,
           *(float *)(*plVar16 + -0x14 + lVar18) <= *(float *)(*plVar16 + lVar18))) {
          FUN_148e75cee(plVar16,(int)uVar17 + -1);
        }
        puVar6 = *(ushort **)(lVar5 + 0x80);
        if (puVar6 != (ushort *)0x0) {
          *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
        }
        lVar18 = lVar18 + -0x58;
        bVar7 = 1 < uVar17;
        uVar17 = uVar17 - 1;
      } while (bVar7);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar15 + 0x138));
LAB_140425f5d:
  if ((local_50 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140426394 FUN_140426394 body=49 status=ok
// SIG undefined FUN_140426394(void)

undefined8 FUN_140426394(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      uVar2 = FUN_14010f8fc(lVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1404263c6 FUN_1404263c6 body=148 status=ok
// SIG undefined FUN_1404263c6(void)

undefined4 * FUN_1404263c6(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x148) & 1) == 0) || (*(longlong *)(param_1 + 200) == 0)) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    local_24 = 0;
    local_1c = 1;
    cVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x80))();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
                        (*(longlong **)(param_1 + 200),&local_24);
      *param_2 = uVar2;
    }
    *(bool *)(param_2 + 1) = cVar1 != '\0';
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14042648c FUN_14042648c body=342 status=ok
// SIG undefined FUN_14042648c(void)

void FUN_14042648c(longlong param_1,uint param_2)

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
  else if (param_2 < 0x41) {
    uVar5 = 0x40;
  }
  else {
    uVar3 = (longlong)(int)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404264ff;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_1404264ff:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = (int)uVar5;
  FUN_1404265e2(param_1,*(undefined4 *)(param_1 + 0x208),uVar5,8);
  return;
}



// FUNCTION 1404265e2 FUN_1404265e2 body=142 status=ok
// SIG undefined FUN_1404265e2(void)

void FUN_1404265e2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 140426670 FUN_140426670 body=928 status=ok
// SIG undefined FUN_140426670(void)

void FUN_140426670(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8080) {
    FUN_144b3d300(&DAT_14c9e8080);
    if (DAT_14c9e8080 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar15 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MinResolution",1);
      if (plVar15 == (longlong *)0x0) {
        DAT_14c9e8078 = 0;
      }
      else {
        DAT_14c9e8078 = (**(code **)(*plVar15 + 0x68))(plVar15);
      }
      _Init_thread_footer(&DAT_14c9e8080);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8090) {
    FUN_144b3d300(&DAT_14c9e8090);
    if (DAT_14c9e8090 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar15 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.FadeResolution",1);
      if (plVar15 == (longlong *)0x0) {
        DAT_14c9e8088 = 0;
      }
      else {
        DAT_14c9e8088 = (**(code **)(*plVar15 + 0x68))(plVar15);
      }
      _Init_thread_footer(&DAT_14c9e8090);
    }
  }
  iVar4 = *(int *)(DAT_14c9e8078 + 4);
  iVar16 = *(int *)(DAT_14c9e8088 + 4);
  dVar9 = *param_2;
  dVar10 = param_2[1];
  dVar11 = param_2[2];
  dVar12 = *(double *)(param_1 + 0xac8);
  dVar13 = *(double *)(param_1 + 0xae8);
  dVar14 = *(double *)(param_1 + 0xb08);
  dVar8 = *(double *)(param_1 + 0xb28);
  iVar17 = *(int *)(param_1 + 0x3100);
  iVar5 = *(int *)(param_1 + 0x30f8);
  iVar6 = *(int *)(param_1 + 0x3104);
  iVar7 = *(int *)(param_1 + 0x30fc);
  dVar1 = *(double *)(param_1 + 0x830);
  dVar2 = *(double *)(param_1 + 0x858);
  dVar3 = param_2[3];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e80a0) {
    FUN_144b3d300(&DAT_14c9e80a0);
    if (DAT_14c9e80a0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar15 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.TexelsPerPixel",1);
      if (plVar15 == (longlong *)0x0) {
        DAT_14c9e8098 = 0;
      }
      else {
        DAT_14c9e8098 = (**(code **)(*plVar15 + 0x70))(plVar15);
      }
      _Init_thread_footer(&DAT_14c9e80a0);
    }
  }
  dVar8 = dVar14 * dVar11 + dVar13 * dVar10 + dVar9 * dVar12 + dVar8;
  if (dVar8 <= 1.0) {
    dVar8 = 1.0;
  }
  dVar2 = dVar2 * (double)((float)(iVar6 - iVar7) * 0.5);
  dVar1 = dVar1 * (double)((float)(iVar17 - iVar5) * 0.5);
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  if (iVar16 < 1) {
    iVar16 = 0;
  }
  iVar17 = 0;
  if (0 < iVar4) {
    iVar17 = iVar4;
  }
  FUN_140426a10((float)((dVar3 * dVar1) / dVar8) * *(float *)(DAT_14c9e8098 + 4),iVar16,iVar17);
  return;
}



// FUNCTION 140426a10 FUN_140426a10 body=272 status=ok
// SIG undefined FUN_140426a10(void)

undefined8 FUN_140426a10(float param_1,uint param_2,uint param_3)

{
  float _Y;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Db;
  float _X;
  
  if (param_1 <= (float)param_2) {
    fVar1 = (float)param_3;
    if (param_1 <= fVar1) {
      fVar1 = 0.0;
      uVar3 = 0;
    }
    else {
      _Y = *(float *)(DAT_14ca5b130 + 4);
      if (param_2 < param_3 || param_2 - param_3 == 0) {
        fVar1 = powf(param_1 - fVar1,_Y);
        uVar3 = 0;
        fVar1 = 1.0 - fVar1;
      }
      else {
        _X = 1.0 / (float)(param_2 - param_3);
        fVar2 = powf(_X,_Y);
        fVar1 = powf((param_1 - fVar1) * _X,_Y);
        fVar1 = (fVar1 - fVar2) / (1.0 - fVar2);
        uVar3 = extraout_XMM0_Db;
      }
    }
  }
  else {
    fVar1 = 1.0;
    uVar3 = 0;
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 140426b20 FUN_140426b20 body=14 status=ok
// SIG undefined FUN_140426b20(void)

void FUN_140426b20(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140426b2e();
    return;
  }
  return;
}



// FUNCTION 140426b2e FUN_140426b2e body=453 status=ok
// SIG undefined FUN_140426b2e(void)

void FUN_140426b2e(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0xc);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140426c4c:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140426c89:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xc;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140426b87;
LAB_140426b7c:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140426b87:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x154e) goto code_r0x000140426bb3;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140426c09:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140426c89;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140426c4c;
code_r0x000140426bb3:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140426c09;
    }
  }
  goto LAB_140426b7c;
}



// FUNCTION 140426cf4 FUN_140426cf4 body=300 status=ok
// SIG undefined FUN_140426cf4(void)

/* WARNING: Removing unreachable block (ram,0x000140426e03) */

void FUN_140426cf4(undefined8 param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 4) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    local_28 = 3;
    *local_30 = &PTR_LAB_14afc8a70;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14afc8a00;
    local_30[3] = param_1;
    local_30[4] = FUN_1409a150e;
    *(undefined4 *)(local_30 + 5) = 0;
    iVar1 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
      FUN_14499f1cc(param_4,iVar1);
    }
    lVar2 = *param_4;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    *(undefined8 **)(lVar2 + lVar3) = local_30;
    local_30 = (undefined8 *)0x0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = local_28;
    local_28 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140426e22 FUN_140426e22 body=361 status=ok
// SIG undefined FUN_140426e22(void)

void FUN_140426e22(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar6 = *(longlong *)(param_1 + 0x40);
  if ((lVar6 == 0) || (*(byte *)(lVar6 + 0x90) < 2)) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (plVar8 == (longlong *)0x0) {
    param_2[1] = lVar7;
    plVar9 = (longlong *)param_2[2];
    if (plVar9 == (longlong *)0x0) goto LAB_140426e6d;
    param_2[2] = 0;
LAB_140426ecb:
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_140426e6d;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar9;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_2[1] = lVar7;
    plVar9 = (longlong *)param_2[2];
    if (plVar8 != plVar9) {
      param_2[2] = (longlong)plVar8;
      if (plVar9 == (longlong *)0x0) goto LAB_140426e6d;
      goto LAB_140426ecb;
    }
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_140426e6d;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_140426e6d:
  *param_2 = param_1;
  param_2[5] = *(longlong *)(lVar6 + 0x30);
  lVar7 = *(longlong *)(lVar6 + 0x28);
  param_2[3] = *(longlong *)(lVar6 + 0x20);
  param_2[4] = lVar7;
  fVar3 = *(float *)(lVar6 + 0x4c);
  fVar4 = *(float *)(lVar6 + 0x48);
  fVar5 = *(float *)(lVar6 + 0x44);
  param_2[6] = (longlong)(double)*(float *)(lVar6 + 0x40);
  param_2[7] = (longlong)(double)fVar5;
  param_2[8] = (longlong)(double)fVar4;
  param_2[9] = (longlong)(double)fVar3;
  fVar3 = *(float *)(lVar6 + 0xa0);
  fVar4 = *(float *)(lVar6 + 0x9c);
  param_2[10] = (longlong)(double)*(float *)(lVar6 + 0x98);
  param_2[0xb] = (longlong)(double)fVar4;
  param_2[0xc] = (longlong)(double)fVar3;
  fVar3 = *(float *)(lVar6 + 0xac);
  fVar4 = *(float *)(lVar6 + 0xa8);
  param_2[0xd] = (longlong)(double)*(float *)(lVar6 + 0xa4);
  param_2[0xe] = (longlong)(double)fVar4;
  param_2[0xf] = (longlong)(double)fVar3;
  *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(lVar6 + 0x1ac);
  return;
}


