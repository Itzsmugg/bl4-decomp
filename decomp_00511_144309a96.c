// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144309a96 FUN_144309a96 body=12 status=ok
// SIG undefined FUN_144309a96(void)

void FUN_144309a96(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144309a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144309aa2 FUN_144309aa2 body=29 status=ok
// SIG undefined FUN_144309aa2(void)

undefined8 FUN_144309aa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144309ac0 FUN_144309ac0 body=492 status=ok
// SIG undefined FUN_144309ac0(void)

undefined4 * FUN_144309ac0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  char cVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144309cae(param_1,local_58);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_50 = 0;
  iVar8 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_50 + 1) = iVar8;
  if ((longlong)iVar8 == 0) {
    *(undefined4 *)((longlong)local_50 + 0xc) = 0;
    puVar5 = (undefined2 *)0x0;
    iVar8 = 0;
  }
  else {
    FUN_1446dd670(local_50,iVar8,0);
    memcpy((void *)*local_50,_Src,(longlong)iVar8 * 2);
    iVar8 = *(int *)(local_50 + 1);
    puVar5 = (undefined2 *)*local_50;
  }
  *(undefined4 *)(local_50 + 3) = *(undefined4 *)(puVar2 + 1);
  local_50[2] = *puVar2;
  *(undefined4 *)(local_50 + 4) = 0xffffffff;
  local_5c = local_58[0];
  uVar11 = 0;
  iVar7 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar8 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    lVar9 = 0;
    uVar11 = 0;
    do {
      uVar10 = ((uint)(0x19 < (ushort)puVar5[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar9]) -
               0x20;
      uVar11 = uVar11 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar11 ^ uVar10) & 0xff) * 4);
      uVar11 = uVar11 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar10 >> 8 & 0xff) * 4);
      lVar9 = lVar9 + 1;
    } while (iVar7 != (int)lVar9);
  }
  cVar4 = FUN_144309f66(param_1,uVar11,local_50,&local_5c);
  uVar3 = local_5c;
  if (cVar4 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar10) {
      uVar6 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_50 + 0x24) = uVar11;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14430a0f8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144309cae FUN_144309cae body=696 status=ok
// SIG undefined FUN_144309cae(void)

int * FUN_144309cae(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
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
      FUN_140549c28(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar7 = iVar8;
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
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_144309e91;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar10 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = (int)param_1[5];
            }
          }
LAB_144309e91:
          iVar3 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar9 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar4 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar4 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 144309f66 FUN_144309f66 body=215 status=ok
// SIG undefined FUN_144309f66(void)

undefined8 FUN_144309f66(longlong *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 uVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_14430a03e(), iVar8 != -1)) {
    plVar9 = (longlong *)(*param_1 + (longlong)iVar8 * 0x28);
    if (*plVar9 != 0) {
      FUN_1400020a8();
    }
    lVar4 = *param_3;
    lVar6 = param_3[1];
    lVar7 = param_3[3];
    plVar9[2] = param_3[2];
    plVar9[3] = lVar7;
    *plVar9 = lVar4;
    plVar9[1] = lVar6;
    iVar3 = *param_4;
    lVar4 = *param_1;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x28) = iVar3;
    }
    puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x28);
    *puVar1 = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0x34) < 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (undefined4)param_1[6];
    }
    puVar1[1] = uVar10;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    plVar9 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    iVar11 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar11 = iVar3;
    }
    bVar5 = (byte)iVar3 & 0x1f;
    puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    *param_4 = iVar8;
    return CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
  }
  return 0;
}



// FUNCTION 14430a03e FUN_14430a03e body=186 status=ok
// SIG undefined FUN_14430a03e(void)

int FUN_14430a03e(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14430a081:
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
            if (0x7f < (uVar6 | uVar8)) goto LAB_14430a0d3;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_14430a0d3;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14430a0e4;
    }
  }
  return -1;
LAB_14430a0d3:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_14430a0e4:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar11 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14430a081;
}



// FUNCTION 14430a0f8 FUN_14430a0f8 body=797 status=ok
// SIG undefined FUN_14430a0f8(void)

void FUN_14430a0f8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_14430a175;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_14430a175:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar7 = 0;
    uVar11 = 1;
    iVar18 = 0;
    iVar10 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      iVar18 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar18 = iVar6 + -1;
      }
      uVar7 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar7;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar7) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar9 = puVar14[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar7 = 0;
      iVar18 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar8 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 < iVar6) {
    uVar9 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x28);
      iVar6 = *(int *)(puVar2 + 1);
      iVar12 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar17 = (undefined2 *)*puVar2;
        }
        lVar15 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar17[lVar15] +
                  (uint)(0x19 < (ushort)puVar17[lVar15] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar15 = lVar15 + 1;
        } while (iVar12 != (int)lVar15);
      }
      uVar8 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar8;
      *(int *)((longlong)puVar2 + 0x24) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 4) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar9 = uVar9 & ~(uint)uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar10 = (int)uVar7;
      lVar15 = (longlong)iVar10;
      uVar3 = puVar14[lVar15] & uVar9;
      if (uVar3 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar3 = puVar14[lVar15 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar15 == lVar16) {
            return;
          }
        }
        uVar7 = (ulonglong)(iVar10 + (int)lVar16 + 1);
        uVar9 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar6);
  }
  return;
}



// FUNCTION 14430a416 FUN_14430a416 body=30 status=ok
// SIG undefined FUN_14430a416(void)

void * FUN_14430a416(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14430a434 FUN_14430a434 body=37 status=ok
// SIG undefined FUN_14430a434(void)

void FUN_14430a434(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014430a455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 14430a466 FUN_14430a466 body=30 status=ok
// SIG undefined FUN_14430a466(void)

void * FUN_14430a466(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14430a484 FUN_14430a484 body=122 status=ok
// SIG undefined FUN_14430a484(void)

void FUN_14430a484(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430a50c FUN_14430a50c body=64 status=ok
// SIG undefined FUN_14430a50c(void)

undefined8 * FUN_14430a50c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3ce0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 14430a550 FUN_14430a550 body=81 status=ok
// SIG undefined FUN_14430a550(void)

undefined8 FUN_14430a550(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14430a5a8 FUN_14430a5a8 body=89 status=ok
// SIG undefined FUN_14430a5a8(void)

bool FUN_14430a5a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14430a5f3;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14430a5f3:
  return lVar6 == param_2;
}



// FUNCTION 14430a61e FUN_14430a61e body=118 status=ok
// SIG undefined FUN_14430a61e(void)

void FUN_14430a61e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14430a694 FUN_14430a694 body=118 status=ok
// SIG undefined FUN_14430a694(void)

void FUN_14430a694(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14430a70a FUN_14430a70a body=156 status=ok
// SIG undefined FUN_14430a70a(void)

void FUN_14430a70a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3ce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014430a796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14430a7a6 FUN_14430a7a6 body=100 status=ok
// SIG undefined FUN_14430a7a6(void)

void FUN_14430a7a6(longlong param_1)

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
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014430a7f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014430a7ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14430a80a FUN_14430a80a body=100 status=ok
// SIG undefined FUN_14430a80a(void)

ulonglong FUN_14430a80a(longlong param_1)

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
LAB_14430a863:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14430a863;
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



// FUNCTION 14430a86e FUN_14430a86e body=716 status=ok
// SIG undefined FUN_14430a86e(void)

void FUN_14430a86e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8;
  int local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong local_a8 [3];
  char local_90;
  undefined7 uStack_8f;
  longlong *local_80;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a8[0] = 0;
  local_a8[1] = 0;
  lVar6 = (longlong)*(int *)(param_1[1] + 0x50);
  if (lVar6 != 0) {
    lVar11 = *(longlong *)(param_1[1] + 0x48);
    lVar6 = lVar6 * 0x18;
    do {
      local_c8 = (longlong *)0x0;
      plStack_c0 = (longlong *)0x0;
      local_b8 = 0;
      FUN_1401f3db8(&local_c8,lVar11);
      plVar5 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        local_90 = '\0';
        local_68 = 0;
        FUN_1456bb102(&local_90,*param_1);
        (**(code **)(*plVar5 + 0x18))(plVar5,local_e8,&local_90);
        FUN_1400b22c2(local_f8,"[newline]");
        FUN_1401c7f3e(&local_d8,local_f8,local_e8);
        iVar9 = local_d0 + -1;
        if (local_d0 == 0) {
          iVar9 = 0;
        }
        FUN_1400020e8(local_a8,local_d8,iVar9);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
        lVar4 = DAT_14c9a3da0;
        if ((longlong)local_68 != 0) {
          lVar10 = (longlong)local_68 + -1;
          lVar12 = lVar10 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
          if (*(longlong *)(lVar4 + lVar12) != 0) {
            FUN_1400020a8();
          }
          lVar4 = DAT_14c9a3da0;
          iVar9 = (int)lVar10;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
          }
          *(undefined4 *)(lVar4 + lVar12) = 0xffffffff;
          iVar8 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar8 = DAT_14c9a3dd0;
          }
          *(int *)(lVar4 + 4 + lVar12) = iVar8;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar7 = DAT_14c9a3dc0;
          if (DAT_14c9a3dc0 == (undefined *)0x0) {
            puVar7 = &DAT_14c9a3db0;
          }
          iVar8 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar8 = iVar9;
          }
          bVar3 = (byte)lVar10 & 0x1f;
          DAT_14c9a3dd0 = iVar9;
          *(uint *)(puVar7 + (longlong)(iVar8 >> 5) * 4) =
               *(uint *)(puVar7 + (longlong)(iVar8 >> 5) * 4) &
               (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          local_68 = 0;
        }
        if ((local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
      }
      plVar5 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar11 = lVar11 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  FUN_140009b9a(&local_90,local_a8);
  FUN_140008f88(param_1[2] + 0x150,&local_90);
  if ((longlong *)CONCAT71(uStack_8f,local_90) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT71(uStack_8f,local_90) + 0x10))();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14430ab6e FUN_14430ab6e body=29 status=ok
// SIG undefined FUN_14430ab6e(void)

undefined8 FUN_14430ab6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430ab8c FUN_14430ab8c body=48 status=ok
// SIG undefined FUN_14430ab8c(void)

void FUN_14430ab8c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14430abbc FUN_14430abbc body=262 status=ok
// SIG undefined FUN_14430abbc(void)

void FUN_14430abbc(longlong param_1,int param_2)

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



// FUNCTION 14430acc2 FUN_14430acc2 body=68 status=ok
// SIG undefined FUN_14430acc2(void)

undefined8 * FUN_14430acc2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3d70;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 14430ad60 FUN_14430ad60 body=12 status=ok
// SIG undefined FUN_14430ad60(void)

void FUN_14430ad60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014430ad69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14430ad6c FUN_14430ad6c body=29 status=ok
// SIG undefined FUN_14430ad6c(void)

undefined8 FUN_14430ad6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430ad8a FUN_14430ad8a body=130 status=ok
// SIG undefined FUN_14430ad8a(void)

undefined4
FUN_14430ad8a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148edb2e6(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430ae2c FUN_14430ae2c body=12 status=ok
// SIG undefined FUN_14430ae2c(void)

void FUN_14430ae2c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014430ae35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14430ae38 FUN_14430ae38 body=29 status=ok
// SIG undefined FUN_14430ae38(void)

undefined8 FUN_14430ae38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430ae80 FUN_14430ae80 body=29 status=ok
// SIG undefined FUN_14430ae80(void)

undefined8 FUN_14430ae80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430ae9e FUN_14430ae9e body=342 status=ok
// SIG undefined FUN_14430ae9e(void)

void FUN_14430ae9e(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14135375c(param_3,&local_38);
  iVar4 = (int)param_1[1];
  if (iVar4 == local_30) {
    bVar9 = true;
    if (1 < iVar4) {
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_1 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(local_38 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14430af07;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_14430af41;
        }
        if (uVar1 == 0) break;
LAB_14430af07:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_14430af41:
      bVar9 = iVar4 == 0;
    }
  }
  else {
    bVar9 = local_30 + iVar4 == 1;
  }
  *(byte *)(param_2 + 0x9d) =
       *(byte *)(param_2 + 0x9d) & 0xfb | ((*(byte *)(param_2 + 0x9d) & 4) >> 2 | bVar9) << 2;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  lVar7 = FUN_140b47a16(param_3 + 0x218,&DAT_14cbcb7b0);
  if ((lVar7 == 0) || (*(char *)(lVar7 + 8) != '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = *(longlong *)(lVar7 + 0x28) != 0;
  }
  bVar6 = (*(byte *)(param_2 + 0x9d) & 4) >> 2 | bVar9;
  bVar5 = *(byte *)(param_2 + 0x9d) & 0xfb;
  *(byte *)(param_2 + 0x9d) = bVar6 * '\x04' | bVar5;
  *(byte *)(param_2 + 0x9d) = ((*(byte *)(param_3 + 0x18) & 2) >> 1 | bVar6) << 2 | bVar5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430aff6 FUN_14430aff6 body=96 status=ok
// SIG undefined FUN_14430aff6(void)

undefined8 * FUN_14430aff6(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9d4030;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 14430b068 FUN_14430b068 body=57 status=ok
// SIG undefined FUN_14430b068(void)

undefined8 * FUN_14430b068(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d4030;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430b0a2 FUN_14430b0a2 body=248 status=ok
// SIG undefined FUN_14430b0a2(void)

void FUN_14430b0a2(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14135375c(param_3,&local_30);
  iVar1 = (int)param_1[1];
  if (iVar1 == local_28) {
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_1 + lVar6);
        uVar5 = (ulonglong)uVar4;
        uVar7 = *(ushort *)(local_30 + lVar6);
        if (uVar4 != uVar7) {
          if ((uVar7 | uVar4) < 0x80) {
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar8 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar8]) goto LAB_14430b103;
          }
          bVar2 = *(byte *)(param_2 + 0x9d);
          if (uVar4 == uVar7) goto LAB_14430b165;
          goto LAB_14430b151;
        }
        if (uVar4 == 0) break;
LAB_14430b103:
        lVar6 = lVar6 + 2;
      }
    }
    bVar2 = *(byte *)(param_2 + 0x9d);
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x9d);
    if (local_28 + iVar1 != 1) {
LAB_14430b151:
      bVar3 = 0;
      goto LAB_14430b167;
    }
  }
LAB_14430b165:
  bVar3 = 4;
LAB_14430b167:
  *(byte *)(param_2 + 0x9d) = bVar2 & 0xfb | bVar3;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14430b19c FUN_14430b19c body=96 status=ok
// SIG undefined FUN_14430b19c(void)

undefined8 * FUN_14430b19c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9d4050;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 14430b20e FUN_14430b20e body=57 status=ok
// SIG undefined FUN_14430b20e(void)

undefined8 * FUN_14430b20e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d4050;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430b248 FUN_14430b248 body=135 status=ok
// SIG undefined FUN_14430b248(void)

undefined8 FUN_14430b248(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  cVar3 = FUN_1413536d2();
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xf8) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(param_1 + 0xf0);
    }
    lVar8 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar4 + lVar8);
      uVar6 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)L"weapon" + lVar8);
      uVar9 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14430b299;
        }
        iVar7 = uVar6 - uVar9;
        goto LAB_14430b2c4;
      }
      if (uVar1 == 0) break;
LAB_14430b299:
      lVar8 = lVar8 + 2;
    }
    iVar7 = 0;
LAB_14430b2c4:
    uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),iVar7 != 0);
  }
  return uVar5;
}



// FUNCTION 14430b2d0 FUN_14430b2d0 body=141 status=ok
// SIG undefined FUN_14430b2d0(void)

undefined4 FUN_14430b2d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(param_2 + 0xf8);
  iVar2 = *(int *)(*param_1 + 0x2e8);
  if (iVar1 == iVar2) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*(longlong *)(param_2 + 0xf0) + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(*(longlong *)(*param_1 + 0x2e0) + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_14430b351;
LAB_14430b31b:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_14430b31b;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
  }
  else if (iVar2 + iVar1 != 1) {
    return 0;
  }
LAB_14430b351:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),*(int *)(param_2 + 8) != (int)param_1[1])
  ;
}



// FUNCTION 14430b35e FUN_14430b35e body=145 status=ok
// SIG undefined FUN_14430b35e(void)

undefined8 * FUN_14430b35e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b9d4090;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  return puVar2 + 1;
}



// FUNCTION 14430b3f6 FUN_14430b3f6 body=29 status=ok
// SIG undefined FUN_14430b3f6(void)

void FUN_14430b3f6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14430b414 FUN_14430b414 body=57 status=ok
// SIG undefined FUN_14430b414(void)

undefined8 * FUN_14430b414(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d4090;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430b466 FUN_14430b466 body=130 status=ok
// SIG undefined FUN_14430b466(void)

undefined4
FUN_14430b466(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148edc402(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430b4ea FUN_14430b4ea body=134 status=ok
// SIG undefined FUN_14430b4ea(void)

undefined4 FUN_14430b4ea(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = DAT_14cbc9d40;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148edc9da(param_1,lVar4,param_2);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430b572 FUN_14430b572 body=160 status=ok
// SIG undefined FUN_14430b572(void)

undefined4 FUN_14430b572(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cbc9dc8;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148edcfb8(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430b614 FUN_14430b614 body=64 status=ok
// SIG undefined FUN_14430b614(void)

undefined8 * FUN_14430b614(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d42a0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 14430b658 FUN_14430b658 body=81 status=ok
// SIG undefined FUN_14430b658(void)

undefined8 FUN_14430b658(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14430b6ae FUN_14430b6ae body=89 status=ok
// SIG undefined FUN_14430b6ae(void)

bool FUN_14430b6ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14430b6f9;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14430b6f9:
  return lVar6 == param_2;
}



// FUNCTION 14430b724 FUN_14430b724 body=126 status=ok
// SIG undefined FUN_14430b724(void)

void FUN_14430b724(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d42a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14430b7a2 FUN_14430b7a2 body=126 status=ok
// SIG undefined FUN_14430b7a2(void)

void FUN_14430b7a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d42a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14430b820 FUN_14430b820 body=164 status=ok
// SIG undefined FUN_14430b820(void)

void FUN_14430b820(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b40e8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d42a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014430b8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14430b8c4 FUN_14430b8c4 body=66 status=ok
// SIG undefined FUN_14430b8c4(void)

void FUN_14430b8c4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14430b966(param_1 + 0x28,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430b908 FUN_14430b908 body=93 status=ok
// SIG undefined FUN_14430b908(void)

undefined8 FUN_14430b908(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_14430b966(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430b966 FUN_14430b966 body=193 status=ok
// SIG undefined FUN_14430b966(void)

void FUN_14430b966(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 2);
  FUN_148ed1a3a(lVar3,local_38,*param_1);
  *(undefined1 *)(lVar2 + 0xae8) = 0;
  FUN_1487bb7e8(lVar2 + 0xad0,local_38);
  if (((char)param_1[4] == '\x01') && (lVar2 = *(longlong *)(lVar3 + 0x288), lVar2 != 0)) {
    uVar1 = *param_1;
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x300))) {
      FUN_148ec967a(lVar3,*(longlong *)(lVar2 + 0x2f8) + (ulonglong)uVar1 * 0x208 + 0x28);
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430ba28 FUN_14430ba28 body=31357 status=FAIL
// SIG undefined FUN_14430ba28(void)
/* DECOMPILE FAILED */

// FUNCTION 144313ede FUN_144313ede body=450 status=ok
// SIG undefined FUN_144313ede(void)

longlong * FUN_144313ede(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14135388e(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)(param_1 + 0x338);
  iVar3 = *(int *)(param_1 + 0x340);
  if ((longlong)iVar3 < 2) {
    *param_2 = 0;
    pvVar6 = (void *)*puVar1;
    *(int *)(param_2 + 1) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_144314027;
    }
  }
  else {
    if (1 < *(int *)(param_1 + 0x388)) {
      FUN_1400b22c2(local_60,L"_Common");
      FUN_1407ec8fc(&local_50,puVar1,local_60);
      iVar3 = (int)local_48;
      if ((int)local_48 < 2) {
        *param_2 = 0;
        iVar3 = *(int *)(param_1 + 0x388);
        pvVar6 = *(void **)(param_1 + 0x380);
        *(int *)(param_2 + 1) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar3,0);
          memcpy((void *)*param_2,pvVar6,(longlong)iVar3 * 2);
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0x388) + -1;
        if (*(int *)(param_1 + 0x388) == 0) {
          iVar5 = 0;
        }
        *param_2 = local_50;
        local_50 = 0;
        *(int *)(param_2 + 1) = (int)local_48;
        iVar4 = local_48._4_4_;
        *(int *)((longlong)param_2 + 0xc) = local_48._4_4_;
        local_48 = 0;
        iVar2 = iVar5 + iVar3;
        if (iVar2 < iVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar5);
        }
        if (iVar4 < iVar2) {
          FUN_1446f8c06(param_2);
        }
        FUN_1400020e8(param_2,*(undefined8 *)(param_1 + 0x380),iVar5);
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_144314027;
    }
    *param_2 = 0;
    pvVar6 = (void *)*puVar1;
    *(int *)(param_2 + 1) = iVar3;
  }
  FUN_1446dd670(param_2,iVar3,0);
  memcpy((void *)*param_2,pvVar6,(longlong)iVar3 * 2);
LAB_144314027:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443140a2 FUN_1443140a2 body=1195 status=ok
// SIG undefined FUN_1443140a2(void)

ulonglong FUN_1443140a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  void *pvVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  undefined8 unaff_RBX;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  PSRWLOCK SRWLock;
  int iVar19;
  bool bVar20;
  undefined1 auStack_f8 [44];
  int local_cc;
  int local_c8;
  int local_c4;
  void *local_c0;
  PSRWLOCK local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar18 = *param_2;
  SRWLock = (PSRWLOCK)(lVar18 + 0x1f0);
  AcquireSRWLockShared(SRWLock);
  iVar4 = *(int *)(param_1 + 0xba4);
  iVar19 = *(int *)(param_1 + 0xc0c);
  iVar17 = *(int *)(lVar18 + 0xe0);
  iVar15 = *(int *)(lVar18 + 0x1e8);
  uVar16 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar4 != iVar17);
  iVar14 = iVar15;
  if (iVar4 != iVar17) {
    *(int *)(param_1 + 0xba4) = iVar17;
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x80;
    iVar14 = *(int *)(lVar18 + 0x1e8);
  }
  if (iVar19 != iVar14) {
    *(int *)(param_1 + 0xc0c) = iVar14;
    local_cc = iVar15;
    if ((*(char *)(param_1 + 0xb50) == '\0') &&
       (*(int *)(param_1 + 0xb60) != *(int *)(lVar18 + 0x8c))) {
      iVar15 = *(int *)(lVar18 + 0x88);
      *(int *)(param_1 + 0xb5c) = iVar15;
      *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(lVar18 + 0x8c);
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      local_b0 = (longlong)((iVar15 % 0xe10) % 0x3c) * 10000000 +
                 (longlong)((iVar15 % 0xe10) / 0x3c) * 600000000 +
                 (longlong)(iVar15 / 0xe10) * 36000000000;
      FUN_1467d0cb4(local_98);
      FUN_140008f88(param_1 + 0x3c0,local_98);
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      plVar11 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      plVar11 = *(longlong **)(param_1 + 0x68);
      if (plVar11 != (longlong *)0x0) {
        iVar15 = (int)plVar11[1];
        do {
          if (iVar15 == 0) goto LAB_1443142a6;
          LOCK();
          iVar14 = (int)plVar11[1];
          bVar20 = iVar15 == iVar14;
          if (bVar20) {
            *(int *)(plVar11 + 1) = iVar15 + 1;
            iVar14 = iVar15;
          }
          iVar15 = iVar14;
          UNLOCK();
        } while (!bVar20);
        if (*(longlong *)(param_1 + 0x60) != 0) {
          local_78 = 0;
          local_68 = &PTR_LAB_14b9d8710;
          local_88 = &LAB_1443220c4;
          local_60 = param_1;
          FUN_1403911de();
        }
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
LAB_1443142a6:
      bVar20 = *(int *)(param_1 + 0xb5c) == 0;
      *(byte *)(param_1 + 0x8f9) = *(byte *)(param_1 + 0x8f9) & 0xf7 | bVar20 * '\b';
      uVar16 = CONCAT71((int7)((ulonglong)plVar11 >> 8),iVar4 != iVar17 || bVar20);
    }
    bVar20 = *(int *)(param_1 + 0xc00) != *(int *)(lVar18 + 0x48) || *(int *)(param_1 + 0xc00) == 0;
    local_c4 = iVar17;
    if (bVar20) {
      *(int *)(param_1 + 0xc00) = *(int *)(lVar18 + 0x48);
      FUN_148c813ae(param_1 + 0xbf0,lVar18 + 0x38);
    }
    iVar15 = *(int *)(param_1 + 0xb58);
    iVar14 = *(int *)(lVar18 + 0x34);
    if (iVar15 != iVar14) {
      *(undefined1 *)(param_1 + 0xb54) = *(undefined1 *)(lVar18 + 0x30);
      *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(lVar18 + 0x34);
    }
    iVar5 = *(int *)(param_1 + 0xb8c);
    iVar6 = *(int *)(lVar18 + 0x84);
    if (iVar5 != iVar6) {
      *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(lVar18 + 0x80);
      *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(lVar18 + 0x84);
    }
    iVar7 = *(int *)(param_1 + 0xb78);
    iVar8 = *(int *)(lVar18 + 200);
    if (iVar7 != iVar8) {
      puVar3 = (undefined8 *)(param_1 + 0xb68);
      local_c8 = iVar19;
      local_b8 = SRWLock;
      if (puVar3 != (undefined8 *)(lVar18 + 0xb8)) {
        iVar19 = *(int *)(lVar18 + 0xc0);
        pvVar12 = *(void **)(lVar18 + 0xb8);
        *(int *)(param_1 + 0xb70) = iVar19;
        if (iVar19 == 0 && *(int *)(param_1 + 0xb74) == 0) {
          *(undefined4 *)(param_1 + 0xb74) = 0;
        }
        else {
          local_c0 = pvVar12;
          FUN_1446dd670(puVar3,iVar19);
          if (iVar19 != 0) {
            memcpy((void *)*puVar3,local_c0,(longlong)iVar19 * 2);
          }
        }
      }
      *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(lVar18 + 200);
      SRWLock = local_b8;
      iVar19 = local_c8;
    }
    iVar17 = local_c4;
    iVar9 = *(int *)(param_1 + 0xb84);
    iVar10 = *(int *)(lVar18 + 0x9c);
    if (iVar9 != iVar10) {
      *(undefined1 *)(param_1 + 0xb80) = *(undefined1 *)(lVar18 + 0x98);
      *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(lVar18 + 0x9c);
    }
    uVar16 = CONCAT71((int7)(uVar16 >> 8),
                      (byte)uVar16 | bVar20 | iVar15 != iVar14 | iVar5 != iVar6 | iVar7 != iVar8 |
                      iVar9 != iVar10);
    *(byte *)(param_1 + 0x8f9) = *(byte *)(param_1 + 0x8f9) & 0xef | *(char *)(lVar18 + 0xf8) << 4;
    iVar15 = local_cc;
    if (*(int *)(param_1 + 0xb58) != *(int *)(lVar18 + 0x34)) {
      *(undefined1 *)(param_1 + 0xb54) = *(undefined1 *)(lVar18 + 0x30);
      *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(lVar18 + 0x34);
      FUN_14431454e(param_1);
      iVar15 = local_cc;
    }
  }
  if (iVar4 != iVar17 || iVar19 != iVar15) {
    bVar13 = *(byte *)(param_1 + 0x8f9) & 0xfd;
    *(byte *)(param_1 + 0x8f9) = bVar13;
    if ((longlong)*(int *)(param_1 + 0xbf8) != 0) {
      lVar18 = 0;
      do {
        bVar13 = *(char *)(*(longlong *)(param_1 + 0xbf0) + 0x438 + lVar18) * '\x02' | bVar13;
        *(byte *)(param_1 + 0x8f9) = bVar13;
        if (*(char *)(*(longlong *)(param_1 + 0xbf0) + 0x438 + lVar18) != '\0') break;
        bVar20 = (longlong)*(int *)(param_1 + 0xbf8) * 0x448 + -0x448 != lVar18;
        lVar18 = lVar18 + 0x448;
      } while (bVar20);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 14431454e FUN_14431454e body=768 status=ok
// SIG undefined FUN_14431454e(void)

/* WARNING: Removing unreachable block (ram,0x0001443147ac) */
/* WARNING: Removing unreachable block (ram,0x0001443147bb) */
/* WARNING: Removing unreachable block (ram,0x0001443147bf) */

ulonglong FUN_14431454e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  void *_Src;
  undefined2 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 uStack_1a0;
  short *local_198;
  undefined2 *local_190;
  undefined8 *local_188;
  char local_180;
  short local_178 [6];
  undefined1 local_16c [244];
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar4 = *(longlong **)(param_1 + 0x68);
  uVar8 = local_38;
  if (plVar4 == (longlong *)0x0) goto LAB_1443147f8;
  uVar8 = (ulonglong)*(uint *)(plVar4 + 1);
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 == 0) goto LAB_1443147f8;
    LOCK();
    uVar2 = *(uint *)(plVar4 + 1);
    if (uVar6 == uVar2) {
      *(uint *)(plVar4 + 1) = uVar6 + 1;
    }
    else {
      uVar8 = (ulonglong)uVar2;
    }
    UNLOCK();
  } while (uVar6 != uVar2);
  uVar8 = *(ulonglong *)(param_1 + 0x60);
  if (((((uVar8 != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
       (uVar6 = *(uint *)(param_1 + 0x54), -1 < (int)uVar6)) &&
      (((int)uVar6 < DAT_14c9647dc &&
       (lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar11 != 0)))) &&
     ((*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x58) &&
      ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
    local_198 = local_178;
    local_180 = '\0';
    local_188 = local_78;
    lVar11 = 0;
    do {
      local_178[lVar11] = (short)"Event_"[lVar11];
      lVar11 = lVar11 + 1;
    } while (lVar11 != 6);
    local_190 = (undefined2 *)local_16c;
    _Src = *(void **)(uVar8 + 0x20);
    uVar6 = *(uint *)(uVar8 + 0x28);
    iVar9 = uVar6 - 1;
    if (uVar6 == 0) {
      iVar9 = 0;
    }
    lVar11 = (longlong)iVar9;
    if (0x79 < iVar9) {
      FUN_140213274(&local_198,lVar11);
    }
    puVar5 = local_190;
    if (1 < uVar6) {
      memcpy(local_190,_Src,lVar11 * 2);
      local_190 = (undefined2 *)((longlong)puVar5 + lVar11 * 2);
    }
    if (local_188 <= (undefined8 *)((longlong)local_190 + 0x28)) {
      FUN_140213274(&local_198,0x14);
    }
    lVar11 = 0;
    do {
      *(short *)((longlong)local_190 + lVar11 * 2) = (short)"_ResetScrollPosition"[lVar11];
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x14);
    local_190 = (undefined2 *)((longlong)local_190 + 0x28);
    if (*(int *)(param_1 + 0x58) == 0) {
LAB_144314822:
      lVar11 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x54);
      lVar11 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(param_1 + 0x58) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_144314822;
        lVar11 = *plVar10;
      }
    }
    *local_190 = 0;
    FUN_140056680(&local_1a8,local_198);
    local_58 = &PTR_FUN_14b9d8a60;
    uStack_50 = local_1a8;
    uStack_48 = uStack_1a0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar7 = 0;
    puVar7[2] = FUN_144324052;
    puVar7[4] = 0;
    local_68 = 0;
    *(undefined4 *)(puVar7 + 6) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar7 + 0x34) = local_58._4_4_;
    *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_50._4_4_;
    *(undefined4 *)(puVar7 + 8) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_48._4_4_;
    *(undefined4 *)(puVar7 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_3c;
    local_78[0] = 0;
    uVar8 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      puVar3 = *(ulonglong **)(lVar11 + 0x30);
      *(undefined8 **)(lVar11 + 0x30) = puVar7;
      UNLOCK();
      LOCK();
      uVar8 = *puVar3;
      *puVar3 = (ulonglong)puVar7;
      UNLOCK();
    }
    if (local_1a8 != 0) {
      uVar8 = FUN_1400020a8();
    }
    if (local_180 == '\x01') {
      uVar8 = FUN_1400020a8(local_198);
    }
  }
  LOCK();
  plVar10 = plVar4 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    uVar8 = (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar8 = (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1443147f8:
  if ((local_38 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 144314850 FUN_144314850 body=5708 status=ok
// SIG undefined FUN_144314850(void)

/* WARNING: Removing unreachable block (ram,0x0001443151b5) */
/* WARNING: Removing unreachable block (ram,0x0001443151c7) */

void FUN_144314850(void *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  code *pcVar5;
  void *pvVar6;
  ushort *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  void *local_380;
  longlong local_378;
  longlong local_370;
  void *local_368;
  uint local_360;
  void *local_358;
  uint local_350;
  longlong local_348;
  ulonglong uStack_340;
  longlong local_338;
  ulonglong uStack_330;
  longlong local_328;
  ulonglong uStack_320;
  longlong local_318;
  ulonglong uStack_310;
  longlong local_308;
  ulonglong uStack_300;
  longlong local_2f8;
  ulonglong uStack_2f0;
  longlong local_2e8;
  ulonglong uStack_2e0;
  longlong local_2d8;
  ulonglong uStack_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  longlong *local_2b8;
  uint local_2b0;
  undefined4 local_2ac;
  void *local_2a8;
  undefined1 *local_2a0;
  void *local_298;
  undefined8 uStack_290;
  void *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270 [512];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (*(int *)((longlong)param_1 + 0xacc) != 0) {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x2000000000;
    local_378 = (longlong)param_1 + 0x208;
    iVar17 = *(int *)((longlong)param_1 + 0x210);
    local_388 = param_2;
    local_380 = param_1;
    if ((longlong)iVar17 != 0) {
      lVar15 = *(longlong *)((longlong)param_1 + 0x208);
      lVar20 = 0;
      do {
        uVar8 = local_68;
        if (*(char *)(lVar15 + 0x88 + lVar20) < '\0') {
          lVar18 = (longlong)(int)local_68;
          uVar9 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar9);
          if (local_68._4_4_ < uVar9) {
            FUN_148eb81ba(local_270,uVar8 & 0xffffffff);
          }
          puVar10 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar10 = local_270;
          }
          lVar18 = lVar18 * 0x10;
          puVar1 = (undefined8 *)(puVar10 + lVar18);
          *(undefined8 *)(puVar10 + lVar18) = 0;
          iVar16 = *(int *)(lVar15 + 8 + lVar20);
          pvVar6 = *(void **)(lVar15 + lVar20);
          *(int *)(puVar10 + lVar18 + 8) = iVar16;
          if ((longlong)iVar16 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar16,0);
            memcpy((void *)*puVar1,pvVar6,(longlong)iVar16 * 2);
          }
        }
        lVar20 = lVar20 + 0x90;
      } while ((longlong)iVar17 * 0x90 != lVar20);
    }
    local_298 = local_380;
    FUN_148eec636(local_378);
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_348 = 0;
    uStack_340 = 0;
    if ((longlong)(int)local_388[1] != 0) {
      lVar15 = *local_388;
      local_370 = (longlong)(int)local_388[1] * 0x430 + lVar15;
      do {
        if (((1 < *(int *)(lVar15 + 0xf8)) && (1 < *(int *)(lVar15 + 0x88))) &&
           ((longlong)*(int *)(lVar15 + 0x418) != 0)) {
          plVar11 = *(longlong **)(lVar15 + 0x410);
          plVar19 = plVar11 + (longlong)*(int *)(lVar15 + 0x418) * 3;
          local_388 = plVar19;
          do {
            if ((longlong)(int)plVar11[2] != 0) {
              lVar20 = plVar11[1];
              lVar18 = (longlong)(int)plVar11[2] * 0x60 + lVar20;
LAB_1443149e7:
              if (*(char *)(lVar20 + 0x5c) == '\x01') {
                FUN_144245b52(lVar15,&local_358,lVar20,plVar11);
                if (1 < (int)local_350) {
                  FUN_1442454d4(lVar15,&local_368,lVar20,plVar11);
                  pvVar6 = local_358;
                  if (1 < (int)local_360) {
                    iVar17 = *(int *)(lVar15 + 0xf8);
                    puVar12 = &DAT_149dfb77a;
                    if (iVar17 != 0) {
                      puVar12 = *(undefined2 **)(lVar15 + 0xf0);
                    }
                    lVar13 = 0;
                    local_378 = CONCAT71(local_378._1_7_,*(undefined1 *)(*plVar11 + 0x18));
                    do {
                      uVar3 = puVar12[lVar13];
                      bVar2 = "weapon"[lVar13];
                      iVar16 = (uint)uVar3 - (uint)bVar2;
                      if (iVar16 == 0) {
                        if (uVar3 == 0) {
                          plVar14 = &local_2c8;
                          goto LAB_144314b4f;
                        }
                      }
                      else {
                        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_144314ac8;
                        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144314ac5;
                      }
                      lVar13 = lVar13 + 1;
                    } while( true );
                  }
                  goto LAB_144314a1e;
                }
                goto LAB_144314a2d;
              }
              goto LAB_144314a3c;
            }
LAB_1443152a0:
            plVar11 = plVar11 + 3;
          } while (plVar11 != plVar19);
        }
        lVar15 = lVar15 + 0x430;
      } while (lVar15 != local_370);
    }
    local_2a8 = local_380;
    local_2a0 = local_270;
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"WeaponSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"weapon_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_2c8);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"ShieldSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"shield_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_2d8);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"GadgetSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"gadget_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_2e8);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"GrenadeSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"grenade_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_2f8);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"HeavyWeaponSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"heavy_weapon_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_308);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"RepKitSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"repkit_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_318);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"EnhancementSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"enhancement_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_328);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"ClassModSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"classmod_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_338);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    local_298 = (void *)0x0;
    uStack_290 = 0;
    local_288 = (void *)((ulonglong)local_288 & 0xffffffff00000000);
    local_280 = 0;
    uStack_278 = 0;
    FUN_1446ddda2(&local_298,"UnsortedStatSortsLabel",0);
    FUN_1410d1eba(&local_2b8,&local_298);
    plVar19 = local_2b8;
    plVar11 = local_2b8;
    if (*(code **)(*local_2b8 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_2b8 + 0x50))(local_2b8);
    }
    FUN_1447a1fc0(plVar11);
    pcVar5 = *(code **)(*plVar19 + 0x28);
    if (pcVar5 == FUN_14482841c) {
      plVar11 = (longlong *)(plVar19[5] + 8);
      if (plVar19[5] == 0) {
        plVar11 = plVar19 + 3;
      }
    }
    else if (pcVar5 == (code *)&LAB_14010c34c) {
      plVar11 = plVar19 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar5)(plVar19);
    }
    FUN_1400b22c2(&local_358,"unsorted_sorts");
    FUN_148eec796(&local_2a8,&local_358,plVar11,&local_348);
    if (local_358 != (void *)0x0) {
      FUN_1400020a8();
    }
    pvVar6 = local_380;
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    *(byte *)((longlong)pvVar6 + 0x330) = *(byte *)((longlong)pvVar6 + 0x330) & 0x7f;
    puVar7 = *(ushort **)((longlong)pvVar6 + 0x80);
    if (puVar7 != (ushort *)0x0) {
      *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)((longlong)pvVar6 + 0x78) & 0x3f));
    }
    FUN_148eecbb3(local_348,uStack_340 & 0xffffffff);
    if (local_348 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_338,uStack_330 & 0xffffffff);
    if (local_338 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_328,uStack_320 & 0xffffffff);
    if (local_328 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_318,uStack_310 & 0xffffffff);
    if (local_318 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_308,uStack_300 & 0xffffffff);
    if (local_308 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_2f8,uStack_2f0 & 0xffffffff);
    if (local_2f8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_2e8,uStack_2e0 & 0xffffffff);
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_2d8,uStack_2d0 & 0xffffffff);
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eecbb3(local_2c8,uStack_2c0 & 0xffffffff);
    if (local_2c8 != 0) {
      FUN_1400020a8();
    }
    FUN_148eb817c(local_270);
  }
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144314ac5:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144314ac8:
  plVar14 = &local_2c8;
  if (iVar16 != 0) {
    puVar12 = &DAT_149dfb77a;
    if (iVar17 != 0) {
      puVar12 = *(undefined2 **)(lVar15 + 0xf0);
    }
    lVar13 = 0;
    do {
      uVar3 = puVar12[lVar13];
      bVar2 = "shield"[lVar13];
      iVar16 = (uint)uVar3 - (uint)bVar2;
      if (iVar16 == 0) {
        if (uVar3 == 0) {
          plVar14 = &local_2d8;
          break;
        }
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_144314b3e;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144314b3b;
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
  goto LAB_144314b4f;
LAB_144314b3b:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144314b3e:
  plVar14 = &local_2d8;
  if (iVar16 != 0) {
    puVar12 = &DAT_149dfb77a;
    if (iVar17 != 0) {
      puVar12 = *(undefined2 **)(lVar15 + 0xf0);
    }
    lVar13 = 0;
    do {
      uVar3 = puVar12[lVar13];
      bVar2 = "gadget"[lVar13];
      iVar16 = (uint)uVar3 - (uint)bVar2;
      if (iVar16 == 0) {
        if (uVar3 == 0) goto LAB_144314df1;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_144314de8;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144314de5;
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
  goto LAB_144314b4f;
LAB_144314de5:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144314de8:
  if (iVar16 != 0) {
    puVar12 = &DAT_149dfb77a;
    if (iVar17 != 0) {
      puVar12 = *(undefined2 **)(lVar15 + 0xf0);
    }
    lVar13 = 0;
    do {
      uVar3 = puVar12[lVar13];
      bVar2 = "repair_kit"[lVar13];
      iVar16 = (uint)uVar3 - (uint)bVar2;
      if (iVar16 == 0) {
        if (uVar3 == 0) {
          plVar14 = &local_318;
          goto LAB_144314b4f;
        }
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_144314f4a;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144314f47;
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
LAB_144314df1:
  puVar12 = &DAT_149dfb77a;
  if (*(int *)(lVar15 + 0x88) != 0) {
    puVar12 = *(undefined2 **)(lVar15 + 0x80);
  }
  lVar13 = 0;
  do {
    uVar3 = puVar12[lVar13];
    bVar2 = "grenade_gadget"[lVar13];
    iVar17 = (uint)uVar3 - (uint)bVar2;
    if (iVar17 == 0) {
      if (uVar3 == 0) {
        plVar14 = &local_2f8;
        goto LAB_144314b4f;
      }
    }
    else {
      if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_144314e63;
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144314e60;
    }
    lVar13 = lVar13 + 1;
  } while( true );
LAB_144314f47:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144314f4a:
  plVar14 = &local_318;
  if (iVar16 != 0) {
    puVar12 = &DAT_149dfb77a;
    if (iVar17 != 0) {
      puVar12 = *(undefined2 **)(lVar15 + 0xf0);
    }
    lVar13 = 0;
    do {
      uVar3 = puVar12[lVar13];
      bVar2 = "enhancement"[lVar13];
      iVar16 = (uint)uVar3 - (uint)bVar2;
      if (iVar16 == 0) {
        if (uVar3 == 0) {
          plVar14 = &local_328;
          break;
        }
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1443151f9;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1443151f6;
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
  goto LAB_144314b4f;
LAB_1443151f6:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1443151f9:
  plVar14 = &local_328;
  if (iVar16 != 0) {
    puVar12 = &DAT_149dfb77a;
    if (iVar17 != 0) {
      puVar12 = *(undefined2 **)(lVar15 + 0xf0);
    }
    lVar13 = 0;
    do {
      uVar3 = puVar12[lVar13];
      bVar2 = "classmod"[lVar13];
      iVar17 = (uint)uVar3 - (uint)bVar2;
      if (iVar17 == 0) {
        if (uVar3 == 0) goto LAB_144315278;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_14431526b;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144315268;
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
  goto LAB_144314b4f;
LAB_144315268:
  iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_14431526b:
  plVar14 = &local_348;
  if (iVar17 == 0) {
LAB_144315278:
    plVar14 = &local_338;
  }
  goto LAB_144314b4f;
LAB_144314e60:
  iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144314e63:
  plVar14 = &local_2f8;
  if (iVar17 != 0) {
    puVar12 = &DAT_149dfb77a;
    if (*(int *)(lVar15 + 0x88) != 0) {
      puVar12 = *(undefined2 **)(lVar15 + 0x80);
    }
    lVar13 = 0;
    do {
      uVar3 = puVar12[lVar13];
      bVar2 = "heavy_weapon_gadget"[lVar13];
      iVar17 = (uint)uVar3 - (uint)bVar2;
      if (iVar17 == 0) {
        if (uVar3 == 0) goto LAB_1443151e9;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1443151d9;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1443151d6;
      }
      lVar13 = lVar13 + 1;
    } while( true );
  }
LAB_144314b4f:
  local_2b8 = (longlong *)0x0;
  lVar13 = (longlong)(int)local_350;
  local_2b0 = local_350;
  if (lVar13 == 0) {
    local_2ac = 0;
    local_2a0 = (undefined1 *)0x0;
LAB_144314be3:
    local_2a8 = (void *)0x0;
    local_2a0 = (undefined1 *)((ulonglong)local_2a0 & 0xffffffff);
    uStack_290 = 0;
  }
  else {
    FUN_1446dd670(&local_2b8,local_350,0);
    memcpy(local_2b8,pvVar6,lVar13 * 2);
    plVar19 = local_2b8;
    lVar13 = (longlong)(int)local_2b0;
    local_2a8 = (void *)0x0;
    local_2a0 = (undefined1 *)CONCAT44(local_2a0._4_4_,local_2b0);
    if (lVar13 == 0) goto LAB_144314be3;
    FUN_1446dd670(&local_2a8,local_2b0,0);
    memcpy(local_2a8,plVar19,lVar13 * 2);
    pvVar6 = local_2a8;
    lVar13 = (longlong)(int)local_2a0;
    local_298 = (void *)0x0;
    uStack_290 = CONCAT44(uStack_290._4_4_,(int)local_2a0);
    if (lVar13 != 0) {
      FUN_1446dd670(&local_298,(ulonglong)local_2a0 & 0xffffffff,0);
      memcpy(local_298,pvVar6,lVar13 * 2);
      goto LAB_144314c0a;
    }
  }
  local_298 = (void *)0x0;
  uStack_290 = uStack_290 & 0xffffffff;
LAB_144314c0a:
  lVar13 = FUN_148eeca84(plVar14);
  if (local_2a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pvVar6 = local_358;
  plVar19 = local_388;
  if (lVar13 == 0) {
    if ((char)local_378 == '\a') {
      local_298 = (void *)0x0;
      lVar13 = (longlong)(int)local_350;
      uStack_290 = CONCAT44(uStack_290._4_4_,local_350);
      if (lVar13 == 0) {
        uStack_290 = (ulonglong)local_350;
      }
      else {
        FUN_1446dd670(&local_298,local_350,0);
        memcpy(local_298,pvVar6,lVar13 * 2);
      }
      pvVar6 = local_368;
      local_288 = (void *)0x0;
      lVar13 = (longlong)(int)local_360;
      local_280 = CONCAT44(local_280._4_4_,local_360);
      if (lVar13 == 0) {
        local_280 = (ulonglong)local_360;
      }
      else {
        FUN_1446dd670(&local_288,local_360,0);
        memcpy(local_288,pvVar6,lVar13 * 2);
      }
      plVar19 = local_388;
      uVar9 = *(uint *)(plVar14 + 1);
      *(uint *)(plVar14 + 1) = uVar9 + 1;
      if (*(uint *)((longlong)plVar14 + 0xc) < uVar9 + 1) {
        FUN_148eecb2e(plVar14,(ulonglong)uVar9);
      }
      plVar14 = (longlong *)*plVar14;
      memmove(plVar14 + 4,plVar14,(ulonglong)uVar9 << 5);
      *plVar14 = 0;
      *plVar14 = (longlong)local_298;
      *(undefined4 *)(plVar14 + 1) = (undefined4)uStack_290;
      *(undefined4 *)((longlong)plVar14 + 0xc) = uStack_290._4_4_;
      plVar14[2] = 0;
      plVar14[2] = (longlong)local_288;
      *(undefined4 *)(plVar14 + 3) = (undefined4)local_280;
      *(undefined4 *)((longlong)plVar14 + 0x1c) = local_280._4_4_;
    }
    else {
      local_298 = (void *)0x0;
      lVar13 = (longlong)(int)local_350;
      uStack_290 = CONCAT44(uStack_290._4_4_,local_350);
      if (lVar13 == 0) {
        uStack_290 = (ulonglong)local_350;
      }
      else {
        FUN_1446dd670(&local_298,local_350,0);
        memcpy(local_298,pvVar6,lVar13 * 2);
      }
      pvVar6 = local_368;
      local_288 = (void *)0x0;
      lVar13 = (longlong)(int)local_360;
      local_280 = CONCAT44(local_280._4_4_,local_360);
      if (lVar13 == 0) {
        local_280 = (ulonglong)local_360;
      }
      else {
        FUN_1446dd670(&local_288,local_360,0);
        memcpy(local_288,pvVar6,lVar13 * 2);
      }
      plVar19 = local_388;
      lVar13 = plVar14[1];
      uVar9 = (int)lVar13 + 1;
      *(uint *)(plVar14 + 1) = uVar9;
      if (*(uint *)((longlong)plVar14 + 0xc) < uVar9) {
        FUN_148eecb2e(plVar14);
      }
      lVar4 = *plVar14;
      lVar13 = (longlong)(int)lVar13 * 0x20;
      *(undefined8 *)(lVar4 + lVar13) = 0;
      *(void **)(lVar4 + lVar13) = local_298;
      *(undefined4 *)(lVar4 + 8 + lVar13) = (undefined4)uStack_290;
      *(undefined4 *)(lVar4 + 0xc + lVar13) = uStack_290._4_4_;
      *(undefined8 *)(lVar4 + 0x10 + lVar13) = 0;
      *(void **)(lVar4 + 0x10 + lVar13) = local_288;
      *(undefined4 *)(lVar4 + 0x18 + lVar13) = (undefined4)local_280;
      *(undefined4 *)(lVar4 + 0x1c + lVar13) = local_280._4_4_;
      local_280 = 0;
      local_288 = (void *)0x0;
      uStack_290 = 0;
      local_298 = (void *)0x0;
    }
  }
LAB_144314a1e:
  if (local_368 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_144314a2d:
  if (local_358 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_144314a3c:
  lVar20 = lVar20 + 0x60;
  if (lVar20 == lVar18) goto LAB_1443152a0;
  goto LAB_1443149e7;
LAB_1443151d6:
  iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1443151d9:
  plVar14 = &local_2e8;
  if (iVar17 == 0) {
LAB_1443151e9:
    plVar14 = &local_308;
  }
  goto LAB_144314b4f;
}



// FUNCTION 144315e9e FUN_144315e9e body=1030 status=ok
// SIG undefined FUN_144315e9e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001443161a1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_144315e9e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  void *_Src;
  undefined8 uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  short *local_1a8;
  undefined2 *local_1a0;
  code **local_198;
  char local_190;
  short local_188 [6];
  undefined1 local_17c [244];
  code *local_88 [2];
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 == (longlong *)0x0) goto LAB_1443161fb;
  iVar9 = (int)plVar3[1];
  do {
    if (iVar9 == 0) goto LAB_1443161fb;
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar14 = iVar9 == iVar6;
    if (bVar14) {
      *(int *)(plVar3 + 1) = iVar9 + 1;
      iVar6 = iVar9;
    }
    iVar9 = iVar6;
    UNLOCK();
  } while (!bVar14);
  lVar13 = *(longlong *)(param_1 + 0x60);
  if (((((lVar13 != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
       (uVar2 = *(uint *)(param_1 + 0x54), -1 < (int)uVar2)) &&
      (((int)uVar2 < DAT_14c9647dc &&
       (lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar12 != 0)))) &&
     ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x58) &&
      ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))) {
    local_1a8 = local_188;
    local_190 = '\0';
    local_198 = local_88;
    lVar12 = 0;
    do {
      local_188[lVar12] = (short)"Event_"[lVar12];
      lVar12 = lVar12 + 1;
    } while (lVar12 != 6);
    local_1a0 = (undefined2 *)local_17c;
    _Src = *(void **)(lVar13 + 0x20);
    uVar2 = *(uint *)(lVar13 + 0x28);
    iVar9 = uVar2 - 1;
    if (uVar2 == 0) {
      iVar9 = 0;
    }
    lVar13 = (longlong)iVar9;
    if (0x79 < iVar9) {
      FUN_140213274(&local_1a8,lVar13);
    }
    puVar5 = local_1a0;
    if (1 < uVar2) {
      memcpy(local_1a0,_Src,lVar13 * 2);
      local_1a0 = (undefined2 *)((longlong)puVar5 + lVar13 * 2);
    }
    if (local_198 <= (code **)((longlong)local_1a0 + 0x2c)) {
      FUN_140213274(&local_1a8,0x16);
    }
    lVar13 = 0;
    do {
      *(short *)((longlong)local_1a0 + lVar13 * 2) = (short)"_SetHintBarWithPrompts"[lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x16);
    local_1a0 = (undefined2 *)((longlong)local_1a0 + 0x2c);
    if (*(int *)(param_1 + 0x58) == 0) {
LAB_144316275:
      lVar13 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x54);
      lVar13 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(param_1 + 0x58) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_144316275;
        lVar13 = *plVar10;
      }
    }
    *local_1a0 = 0;
    FUN_140056680(&local_1c8,local_1a8);
    local_1b8 = 0;
    iVar9 = *(int *)(param_1 + 0x2b8);
    uVar4 = *(undefined8 *)(param_1 + 0x2b0);
    local_1b0 = iVar9;
    if (iVar9 == 0) {
      local_1ac = 0;
    }
    else {
      FUN_148c566f2(&local_1b8,iVar9,0);
      FUN_148c56754(local_1b8,uVar4,iVar9);
    }
    local_88[0] = (code *)0x0;
    puVar7 = (undefined8 *)FUN_14001cc68(0x28,8);
    iVar9 = local_1b0;
    lVar12 = local_1b8;
    *puVar7 = &PTR_FUN_14b9d8a40;
    puVar7[1] = local_1c8;
    local_1c8 = 0;
    *(undefined4 *)(puVar7 + 2) = (undefined4)local_1c0;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_1c0._4_4_;
    local_1c0 = 0;
    puVar7[3] = 0;
    *(int *)(puVar7 + 4) = local_1b0;
    if (local_1b0 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
    }
    else {
      FUN_148c566f2(puVar7 + 3,local_1b0,0);
      FUN_148c56754(puVar7[3],lVar12,iVar9);
    }
    if (puVar7 == (undefined8 *)&DAT_fffffffffffffff8) {
      pcVar11 = (code *)0x0;
    }
    else {
      pcVar11 = FUN_144323c92;
      local_88[0] = FUN_144323c92;
    }
    puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar8 = 0;
    puVar8[2] = pcVar11;
    puVar8[4] = puVar7;
    local_78 = 0;
    *(undefined4 *)(puVar8 + 8) = local_58;
    *(undefined4 *)((longlong)puVar8 + 0x44) = uStack_54;
    *(undefined4 *)(puVar8 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_4c;
    *(undefined4 *)(puVar8 + 6) = local_68;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_64;
    *(undefined4 *)(puVar8 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_5c;
    if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88[0] = (code *)0x0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      puVar7 = *(undefined8 **)(lVar13 + 0x30);
      *(undefined8 **)(lVar13 + 0x30) = puVar8;
      UNLOCK();
      LOCK();
      *puVar7 = puVar8;
      UNLOCK();
      if (local_88[0] != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
      }
    }
    FUN_145a5bc9c(local_1b8,local_1b0);
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
    if (local_190 == '\x01') {
      FUN_1400020a8(local_1a8);
    }
  }
  LOCK();
  plVar10 = plVar3 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1443161fb:
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443162a6 FUN_1443162a6 body=760 status=ok
// SIG undefined FUN_1443162a6(void)

void FUN_1443162a6(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    plVar7 = (longlong *)FUN_148e861a2();
    lVar8 = *plVar7;
    pRVar1 = (PSRWLOCK)(lVar8 + 0x58);
    AcquireSRWLockShared(pRVar1);
    FUN_148edddde(lVar3,&local_48);
    lVar8 = FUN_148e1b2aa(lVar8,&local_48);
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(pRVar1);
    if (((*(byte *)(lVar3 + 0x1c0) | *(byte *)(lVar3 + 0xc0)) & 1) == 0) {
      if (*(char *)(lVar3 + 0x928) == '\0') {
        plVar7 = (longlong *)FUN_1408cbae2(param_1);
        lVar8 = *plVar7;
        pRVar1 = (PSRWLOCK)(lVar8 + 0xb0);
        AcquireSRWLockShared(pRVar1);
        if (*(int *)(lVar8 + 0x60) == -1) {
          iVar2 = *(int *)(lVar8 + 0x68);
          ReleaseSRWLockShared(pRVar1);
          if (iVar2 == 0) {
            lVar8 = FUN_148e84d1e(param_1);
            if (lVar8 != 0) {
              puVar9 = (undefined8 *)FUN_14001cc68(0x48,0x10);
              *puVar9 = &PTR_FUN_14b9c13e0;
              local_48 = "AddState";
              local_40 = 8;
              local_3c = 0;
              uVar6 = FUN_14001a6c0(&local_48,1);
              FUN_14039176c(puVar9,*(undefined8 *)(param_1 + 0x30),uVar6,1);
              *puVar9 = &PTR_FUN_14b9c13e0;
              puVar9[7] = DAT_14cbd93e8;
              *(undefined1 *)(puVar9 + 8) = 0;
              FUN_140391314(param_1,puVar9);
              plVar7 = (longlong *)FUN_1408cbae2(param_1);
              lVar4 = *plVar7;
              AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
              *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
              FUN_148e1ce8a(lVar4,lVar8,1);
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
              FUN_148ee29c4(lVar3,*(undefined4 *)(lVar3 + 0x328));
              iVar2 = *(int *)(lVar8 + 0x254);
              if (iVar2 == -1) {
                iVar2 = *(int *)(lVar8 + 600);
                if (iVar2 == 0) {
                  uVar10 = FUN_14001cc68(0x40,0x10);
                  FUN_148e83602(uVar10,*(undefined8 *)(param_1 + 0x30),1);
                }
                else {
                  uVar10 = FUN_14001cc68(0x148,0x10);
                  FUN_148eaaef0(uVar10,*(undefined8 *)(param_1 + 0x30),1,iVar2);
                }
              }
              else {
                uVar10 = FUN_14001cc68(0x148,0x10);
                local_70 = &local_68;
                local_68 = (undefined4)DAT_14c8464e0;
                uStack_64 = DAT_14c8464e0._4_4_;
                uStack_60 = (undefined4)DAT_14c8464e8;
                uStack_5c = DAT_14c8464e8._4_4_;
                local_58 = DAT_14c8464f0;
                local_78 = iVar2;
                FUN_14664e342(uVar10,*(undefined8 *)(param_1 + 0x30),1,
                              *(undefined8 *)(lVar8 + 0x25c));
              }
              FUN_140391314(param_1,uVar10);
              FUN_140de1078(param_1,&DAT_14cbe31d0,0,0);
              puVar5 = *(ushort **)(lVar3 + 0x80);
              if (puVar5 != (ushort *)0x0) {
                *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
              }
            }
            goto LAB_1443162cd;
          }
        }
        else {
          ReleaseSRWLockShared(pRVar1);
        }
        FUN_148ee0f70(param_1);
      }
    }
    else if (((lVar8 != 0) && (((*(byte *)(lVar3 + 0x1c0) ^ 1 | *(byte *)(lVar3 + 0xc0)) & 1) != 0))
            && (*(int *)(lVar8 + 0x30) != 0)) {
      FUN_148e84c06(param_1);
    }
  }
LAB_1443162cd:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443165a0 FUN_1443165a0 body=447 status=ok
// SIG undefined FUN_1443165a0(void)

void FUN_1443165a0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  
  if (*(longlong *)(param_1 + 0x288) == 0) {
    return;
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x288) + 0xb00);
  *pbVar1 = *pbVar1 & 0xdf;
  lVar4 = *param_2;
  if (lVar4 == DAT_14cbe3940) {
    uVar2 = FUN_14001cc68(0x70,0x10);
    plVar3 = (longlong *)FUN_148e87bf8(param_1);
    lVar4 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar4 + 0x1f0);
    AcquireSRWLockShared(SRWLock);
    lVar4 = lVar4 + 0x68;
  }
  else {
    if (lVar4 != DAT_14cbe3948) {
      if (lVar4 == DAT_14cbe3938) {
        FUN_140de1078(param_1,&DAT_14cbe3270,0,0);
      }
      goto LAB_144316690;
    }
    uVar2 = FUN_14001cc68(0x70,0x10);
    plVar3 = (longlong *)FUN_148e87bf8(param_1);
    lVar4 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar4 + 0x1f0);
    AcquireSRWLockShared(SRWLock);
    lVar4 = lVar4 + 0x50;
  }
  FUN_148e70a92(uVar2,*(undefined8 *)(param_1 + 0x30),lVar4,0);
  FUN_140391314(param_1,uVar2);
  ReleaseSRWLockShared(SRWLock);
  FUN_140de1078(param_1,&DAT_14cbe3828,0,0);
  FUN_1457d7894(param_1,param_1 + 0x370);
LAB_144316690:
  plVar3 = (longlong *)FUN_148e87bf8(param_1);
  lVar4 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1f0));
  *(int *)(lVar4 + 0x1e8) = *(int *)(lVar4 + 0x1e8) + 1;
  if (*(int *)(lVar4 + 0x74) < 0) {
    *(undefined4 *)(lVar4 + 0x70) = 0;
    FUN_148e9a5d8(lVar4 + 0x68,0);
  }
  else {
    *(undefined4 *)(lVar4 + 0x70) = 0;
  }
  *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1f0));
  plVar3 = (longlong *)FUN_148e87bf8(param_1);
  lVar4 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1f0));
  *(int *)(lVar4 + 0x1e8) = *(int *)(lVar4 + 0x1e8) + 1;
  if (*(int *)(lVar4 + 0x5c) < 0) {
    *(undefined4 *)(lVar4 + 0x58) = 0;
    FUN_148e9a5d8(lVar4 + 0x50,0);
  }
  else {
    *(undefined4 *)(lVar4 + 0x58) = 0;
  }
  *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1f0));
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) | 2;
  return;
}



// FUNCTION 144316760 FUN_144316760 body=1730 status=ok
// SIG undefined FUN_144316760(void)

void FUN_144316760(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong local_168;
  code *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  longlong local_108;
  uint local_100;
  uint local_fc;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_d8;
  undefined1 local_cc;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar11 = *(longlong *)(param_1 + 0x288);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xb00) & 0x20) != 0)) goto LAB_14431679e;
  *(byte *)(lVar11 + 0xb00) = *(byte *)(lVar11 + 0xb00) | 0x20;
  *(undefined1 *)(lVar11 + 0x1c0) = 0;
  *(undefined1 *)(lVar11 + 0xc0) = 0;
  *(undefined1 *)(lVar11 + 0x928) = 0;
  local_170 = lVar11;
  plVar7 = (longlong *)FUN_148e87bf8(param_1);
  lVar11 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x1f0));
  *(int *)(lVar11 + 0x1e8) = *(int *)(lVar11 + 0x1e8) + 1;
  plVar7 = (longlong *)(lVar11 + 0x50);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x1f0));
  local_168 = param_1;
  plVar8 = (longlong *)FUN_148e87bf8(param_1);
  lVar12 = *plVar8;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x1f0));
  *(int *)(lVar12 + 0x1e8) = *(int *)(lVar12 + 0x1e8) + 1;
  plVar8 = (longlong *)(lVar12 + 0x68);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x1f0));
  *(undefined4 *)(lVar12 + 0x70) = 0;
  if (*(int *)(lVar12 + 0x74) < 0) {
    FUN_148e9a5d8(plVar8,0);
  }
  *(int *)(lVar12 + 0x78) = *(int *)(lVar12 + 0x78) + 1;
  FUN_148e9a5ae(plVar7,(int)param_2[1]);
  *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + 1;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar10 = 0;
    do {
      iVar1 = *(int *)(lVar11 + 0x58);
      *(uint *)(lVar11 + 0x58) = iVar1 + 1U;
      if (*(uint *)(lVar11 + 0x5c) < iVar1 + 1U) {
        FUN_148d699d4(plVar7,iVar1);
        *(undefined4 *)(*plVar7 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0x254 + lVar10);
LAB_144316c6a:
        *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + 1;
      }
      else {
        *(undefined4 *)(*plVar7 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0x254 + lVar10);
        if (iVar1 != -1) goto LAB_144316c6a;
      }
      if ((*(byte *)(lVar2 + 0x9c + lVar10) & 2) == 0) {
        iVar1 = *(int *)(lVar12 + 0x70);
        *(uint *)(lVar12 + 0x70) = iVar1 + 1U;
        if (*(uint *)(lVar12 + 0x74) < iVar1 + 1U) {
          FUN_148d699d4(plVar8,iVar1);
          *(undefined4 *)(*plVar8 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0x254 + lVar10);
        }
        else {
          *(undefined4 *)(*plVar8 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0x254 + lVar10);
          if (iVar1 == -1) goto LAB_144316ca3;
        }
        *(int *)(lVar12 + 0x78) = *(int *)(lVar12 + 0x78) + 1;
      }
LAB_144316ca3:
      lVar10 = lVar10 + 0x268;
    } while ((longlong)(int)lVar4 * 0x268 - lVar10 != 0);
  }
  FUN_145be44b4(local_140);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"SellEquippedItemTitle",0);
  FUN_1410d1eba(&local_160,&local_78);
  FUN_140008f88(local_138,&local_160);
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"SellEquippedItemDescription",0);
  FUN_1410d1eba(&local_160,&local_78);
  FUN_140008f88(local_128,&local_160);
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"SellEquippedItemConfirm",0);
  FUN_1410d1eba(&local_160,&local_78);
  uVar5 = local_100;
  local_150 = DAT_14cbe3948;
  local_148 = 1;
  lVar11 = (longlong)(int)local_100;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    FUN_145da4fc8(&local_108,uVar5);
  }
  lVar4 = local_108;
  lVar11 = lVar11 * 0x20;
  FUN_14023423e(local_108 + lVar11,&local_160);
  *(undefined1 *)(lVar4 + 0x18 + lVar11) = local_148;
  *(undefined8 *)(lVar4 + 0x10 + lVar11) = local_150;
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  lVar11 = local_168;
  if (*(int *)(lVar12 + 0x70) != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"SellEquippedItemOnlyUnequipped",0);
    FUN_1410d1eba(&local_160,&local_78);
    uVar5 = local_100;
    local_150 = DAT_14cbe3940;
    local_148 = 1;
    lVar12 = (longlong)(int)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      FUN_145da4fc8(&local_108,uVar5);
    }
    lVar4 = local_108;
    lVar12 = lVar12 * 0x20;
    FUN_14023423e(local_108 + lVar12,&local_160);
    *(undefined1 *)(lVar4 + 0x18 + lVar12) = local_148;
    *(undefined8 *)(lVar4 + 0x10 + lVar12) = local_150;
    if (local_160 != (code *)0x0) {
      (**(code **)(*(longlong *)local_160 + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"SellEquippedItemCancel",0);
  FUN_1410d1eba(&local_160,&local_78);
  uVar5 = local_100;
  local_150 = DAT_14cbe3938;
  local_148 = 1;
  lVar12 = (longlong)(int)local_100;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    FUN_145da4fc8(&local_108,uVar5);
  }
  lVar12 = lVar12 * 0x20;
  FUN_14023423e(local_108 + lVar12,&local_160);
  *(undefined1 *)(local_108 + 0x18 + lVar12) = local_148;
  *(undefined8 *)(local_108 + 0x10 + lVar12) = local_150;
  if (local_160 != (code *)0x0) {
    (**(code **)(*(longlong *)local_160 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_160 = FUN_1443165a0;
  local_158 = 0;
  FUN_148ee2af6(&local_78,lVar11);
  puVar6 = local_78;
  local_78 = (undefined8 *)0x0;
  iVar1 = (int)uStack_70;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (local_f0 == 0) {
LAB_144316bf8:
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f8 != (undefined8 *)0x0) {
    (**(code **)*local_f8)(local_f8,0);
    FUN_1446efa72(&local_f8,0,0,0x10);
    local_f0 = 0;
    goto LAB_144316bf8;
  }
  lVar12 = local_170;
  local_f8 = puVar6;
  local_f0 = iVar1;
  if ((int)uStack_70 == 0) {
LAB_144316d22:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70 = uStack_70 & 0xffffffff00000000;
    goto LAB_144316d22;
  }
  local_d8 = DAT_14cbe3940;
  local_cc = 1;
  *(byte *)(lVar11 + 0x8e) = *(byte *)(lVar11 + 0x8e) & 0xfd;
  uVar9 = FUN_14001cc68(0x100,0x10);
  FUN_148e875c4(uVar9,lVar11 + 0x30,local_140);
  FUN_140391314(lVar11,uVar9);
  puVar3 = *(ushort **)(lVar12 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar12 + 0x78) & 0x3f));
  }
  FUN_1459ddea2(local_140);
LAB_14431679e:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144316e62 FUN_144316e62 body=69 status=ok
// SIG undefined FUN_144316e62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144316e62(void)

{
  _DAT_14cbe3a30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144316ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3a38,1);
  return;
}



// FUNCTION 144316ea7 FUN_144316ea7 body=69 status=ok
// SIG undefined FUN_144316ea7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144316ea7(void)

{
  _DAT_14cbe3a48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144316ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3a50,1);
  return;
}



// FUNCTION 144316eec FUN_144316eec body=69 status=ok
// SIG undefined FUN_144316eec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144316eec(void)

{
  _DAT_14cbe3a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144316f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3a60,1);
  return;
}



// FUNCTION 144316f31 FUN_144316f31 body=69 status=ok
// SIG undefined FUN_144316f31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144316f31(void)

{
  _DAT_14cbe3a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144316f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3a70,1);
  return;
}



// FUNCTION 144317031 FUN_144317031 body=69 status=ok
// SIG undefined FUN_144317031(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144317031(void)

{
  _DAT_14cbe3b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144317073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3b30,1);
  return;
}



// FUNCTION 144317076 FUN_144317076 body=69 status=ok
// SIG undefined FUN_144317076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144317076(void)

{
  _DAT_14cbe3b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443170b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3b48,1);
  return;
}



// FUNCTION 1443170bb FUN_1443170bb body=69 status=ok
// SIG undefined FUN_1443170bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443170bb(void)

{
  _DAT_14cbe3b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443170fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3b60,1);
  return;
}



// FUNCTION 144317100 FUN_144317100 body=69 status=ok
// SIG undefined FUN_144317100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144317100(void)

{
  _DAT_14cbe3b70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144317142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3b78,1);
  return;
}



// FUNCTION 144317145 FUN_144317145 body=69 status=ok
// SIG undefined FUN_144317145(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144317145(void)

{
  _DAT_14cbe3b88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144317187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3b90,1);
  return;
}



// FUNCTION 14431718a FUN_14431718a body=69 status=ok
// SIG undefined FUN_14431718a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431718a(void)

{
  _DAT_14cbe3b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443171cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3ba0,1);
  return;
}



// FUNCTION 1443171cf FUN_1443171cf body=69 status=ok
// SIG undefined FUN_1443171cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443171cf(void)

{
  _DAT_14cbe3ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144317211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3bb0,1);
  return;
}



// FUNCTION 144317214 FUN_144317214 body=69 status=ok
// SIG undefined FUN_144317214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144317214(void)

{
  _DAT_14cbe3bb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144317256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3bc0,1);
  return;
}



// FUNCTION 14431725a FUN_14431725a body=5665 status=ok
// SIG undefined FUN_14431725a(void)

void FUN_14431725a(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  void *_Src;
  ushort *puVar6;
  byte bVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  char *pcVar13;
  ulonglong uVar14;
  ushort uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ushort uVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined1 auStack_308 [32];
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  uint local_2bc;
  ulonglong local_2b8;
  ulonglong local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  longlong *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *plStack_220;
  longlong *local_218 [2];
  undefined8 local_208;
  longlong *plStack_200;
  longlong local_1f8 [2];
  longlong *local_1e8 [2];
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  longlong *local_1b8 [2];
  longlong *local_1a8 [2];
  undefined **local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined ***local_108;
  undefined8 *local_100;
  undefined **local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78 [2];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_190 = 0;
  uStack_188 = 0;
  local_198 = &PTR_FUN_14b895f80;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = '\0';
  plVar9 = (longlong *)FUN_145917192();
  lVar10 = *plVar9;
  SRWLock = (PSRWLOCK)(lVar10 + 0x58);
  AcquireSRWLockShared(SRWLock);
  (**(code **)(*param_1 + 0xa8))(param_1,&local_f8);
  lVar10 = FUN_148e1b2aa(lVar10,&local_f8);
  if (local_f8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  if (lVar10 != 0) {
    FUN_148eddec8(&local_198,lVar10);
  }
  local_2d8 = param_1 + 0x16;
  local_2e0 = param_1;
  if ((longlong)(int)param_1[0x22] != 0) {
    plVar9 = (longlong *)param_1[0x21];
    local_240 = plVar9 + (longlong)(int)param_1[0x22] * 0x12;
    local_248 = param_1 + 0x26;
    local_290 = param_1 + 0x24;
    do {
      iVar18 = FUN_145c4ace0(local_248,plVar9);
      lVar10 = (longlong)iVar18 * 0x90 + param_1[0x31];
      if (DAT_14c76409a == '\x01') {
        if ((*(byte *)(lVar10 + 0x89) & 2) == 0) {
          FUN_148e6a174(local_2d8,plVar9);
        }
        else {
          FUN_1412fabe8(local_290,plVar9);
          FUN_1410d0f68(local_2d8);
        }
      }
      if ((*(byte *)((longlong)plVar9 + 0x89) & 1) == 0) {
        if ((longlong)(int)param_1[0x81] == 0) {
          uVar25 = 0;
          iVar18 = 0;
        }
        else {
          uVar11 = param_1[0x80];
          local_2d0 = (longlong)(int)param_1[0x81] * 0x268 + uVar11;
          local_2c8 = (ulonglong)DAT_14cbe3a80;
          local_258 = DAT_14cbe3a78;
          local_298 = (ulonglong)DAT_14cbe3a90;
          local_260 = DAT_14cbe3a88;
          local_2a0 = (ulonglong)DAT_14cbe3aa0;
          local_268 = DAT_14cbe3a98;
          local_2a8 = (ulonglong)DAT_14cbe3ab0;
          local_270 = DAT_14cbe3aa8;
          local_2b0 = (ulonglong)DAT_14cbe3ac0;
          local_278 = DAT_14cbe3ab8;
          local_2b8 = (ulonglong)DAT_14cbe3ad0;
          local_280 = DAT_14cbe3ac8;
          local_2bc = DAT_14cbe3ae0;
          iVar18 = 0;
          local_288 = DAT_14cbe3ad8;
          uVar25 = 0;
          do {
            bVar7 = *(byte *)(uVar11 + 0x9d);
            if ((-1 < (char)bVar7) || ((DAT_14cbe3a40 & 1) != 0)) {
              uVar3 = *(uint *)(uVar11 + 0x48);
              uVar4 = *(uint *)(plVar9 + 1);
              plVar12 = (longlong *)(ulonglong)uVar4;
              if (uVar3 == uVar4) {
                if (1 < (int)uVar3) {
                  lVar17 = 0;
                  while( true ) {
                    uVar21 = *(ushort *)(*(longlong *)(uVar11 + 0x40) + lVar17);
                    uVar15 = *(ushort *)(*plVar9 + lVar17);
                    if (uVar21 != uVar15) break;
                    if (uVar21 == 0) goto LAB_14431784c;
LAB_1443177dd:
                    lVar17 = lVar17 + 2;
                  }
                  if ((uVar15 | uVar21) < 0x80) {
                    if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                    goto LAB_1443177dd;
                    iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                  }
                  else {
                    iVar16 = (uint)uVar21 - (uint)uVar15;
                  }
                  if (iVar16 != 0) goto LAB_144317869;
                }
              }
              else if (uVar3 + uVar4 != 1) {
LAB_144317869:
                if ((longlong)*(int *)(uVar11 + 0x78) != 0) {
                  plVar26 = *(longlong **)(uVar11 + 0x70);
                  plVar22 = plVar26 + (longlong)*(int *)(uVar11 + 0x78) * 2;
LAB_144317886:
                  if (*(uint *)(plVar26 + 1) != uVar4) {
                    if (*(uint *)(plVar26 + 1) + uVar4 == 1) goto LAB_144317918;
                    goto LAB_1443178f9;
                  }
                  if (1 < (int)uVar4) {
                    lVar17 = 0;
                    do {
                      uVar21 = *(ushort *)(*plVar26 + lVar17);
                      uVar15 = *(ushort *)(*plVar9 + lVar17);
                      if (uVar21 == uVar15) {
                        if (uVar21 == 0) break;
                      }
                      else {
                        if (0x7f < (uVar15 | uVar21)) {
                          iVar16 = (uint)uVar21 - (uint)uVar15;
                          goto LAB_1443178e6;
                        }
                        if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[(uint)uVar15])
                        goto code_r0x0001443178e3;
                      }
                      lVar17 = lVar17 + 2;
                    } while( true );
                  }
                  goto LAB_144317918;
                }
LAB_144317938:
                if (*(uint *)(uVar11 + 0x28) == uVar4) {
                  if (1 < (int)uVar4) {
                    lVar17 = 0;
                    while( true ) {
                      uVar21 = *(ushort *)(*(longlong *)(uVar11 + 0x20) + lVar17);
                      uVar15 = *(ushort *)(*plVar9 + lVar17);
                      if (uVar21 != uVar15) break;
                      if (uVar21 == 0) goto LAB_14431784c;
LAB_144317975:
                      lVar17 = lVar17 + 2;
                    }
                    if ((uVar15 | uVar21) < 0x80) {
                      local_2e8 = plVar12;
                      if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                      goto LAB_144317975;
                      iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                               (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                    }
                    else {
                      iVar16 = (uint)uVar21 - (uint)uVar15;
                    }
                    local_2e8 = plVar12;
                    if (iVar16 != 0) goto LAB_1443179cc;
                  }
                }
                else if (*(uint *)(uVar11 + 0x28) + uVar4 != 1) {
LAB_1443179cc:
                  if (*(uint *)(uVar11 + 0x38) == uVar4) {
                    if (1 < (int)uVar4) {
                      lVar17 = 0;
                      while( true ) {
                        uVar21 = *(ushort *)(*(longlong *)(uVar11 + 0x30) + lVar17);
                        uVar15 = *(ushort *)(*plVar9 + lVar17);
                        if (uVar21 != uVar15) break;
                        if (uVar21 == 0) goto LAB_14431784c;
LAB_1443179ff:
                        lVar17 = lVar17 + 2;
                      }
                      if ((uVar15 | uVar21) < 0x80) {
                        local_2e8 = plVar12;
                        if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                        goto LAB_1443179ff;
                        iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                                 (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                      }
                      else {
                        iVar16 = (uint)uVar21 - (uint)uVar15;
                      }
                      local_2e8 = plVar12;
                      if (iVar16 != 0) goto LAB_144317a4c;
                    }
                  }
                  else if (*(uint *)(uVar11 + 0x38) + uVar4 != 1) {
LAB_144317a4c:
                    if (*(uint *)(uVar11 + 0xc0) == uVar4) {
                      if (1 < (int)uVar4) {
                        lVar17 = 0;
                        while( true ) {
                          uVar21 = *(ushort *)(*(longlong *)(uVar11 + 0xb8) + lVar17);
                          uVar15 = *(ushort *)(*plVar9 + lVar17);
                          if (uVar21 != uVar15) break;
                          if (uVar21 == 0) goto LAB_14431784c;
LAB_144317a85:
                          lVar17 = lVar17 + 2;
                        }
                        if ((uVar15 | uVar21) < 0x80) {
                          local_2e8 = plVar12;
                          if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                          goto LAB_144317a85;
                          iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                                   (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                        }
                        else {
                          iVar16 = (uint)uVar21 - (uint)uVar15;
                        }
                        local_2e8 = plVar12;
                        if (iVar16 != 0) goto LAB_144317ad2;
                      }
                    }
                    else if (*(uint *)(uVar11 + 0xc0) + uVar4 != 1) {
LAB_144317ad2:
                      if (*(uint *)(uVar11 + 0xd0) == uVar4) {
                        if (1 < (int)uVar4) {
                          lVar17 = 0;
                          while( true ) {
                            uVar21 = *(ushort *)(*(longlong *)(uVar11 + 200) + lVar17);
                            uVar15 = *(ushort *)(*plVar9 + lVar17);
                            if (uVar21 != uVar15) break;
                            if (uVar21 == 0) goto LAB_14431784c;
LAB_144317b0b:
                            lVar17 = lVar17 + 2;
                          }
                          if ((uVar15 | uVar21) < 0x80) {
                            local_2e8 = plVar12;
                            if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                            goto LAB_144317b0b;
                            iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                                     (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                          }
                          else {
                            iVar16 = (uint)uVar21 - (uint)uVar15;
                          }
                          local_2e8 = plVar12;
                          if (iVar16 != 0) goto LAB_144317b58;
                        }
                      }
                      else if (*(uint *)(uVar11 + 0xd0) + uVar4 != 1) {
LAB_144317b58:
                        if (*(uint *)(uVar11 + 0xf0) == uVar4) {
                          if (1 < (int)uVar4) {
                            lVar17 = 0;
                            while( true ) {
                              uVar21 = *(ushort *)(*(longlong *)(uVar11 + 0xe8) + lVar17);
                              uVar15 = *(ushort *)(*plVar9 + lVar17);
                              if (uVar21 != uVar15) break;
                              if (uVar21 == 0) goto LAB_14431784c;
LAB_144317b91:
                              lVar17 = lVar17 + 2;
                            }
                            if ((uVar15 | uVar21) < 0x80) {
                              local_2e8 = plVar12;
                              if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                              goto LAB_144317b91;
                              iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                                       (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                            }
                            else {
                              iVar16 = (uint)uVar21 - (uint)uVar15;
                            }
                            local_2e8 = plVar12;
                            if (iVar16 != 0) goto LAB_144317bde;
                          }
                        }
                        else if (*(uint *)(uVar11 + 0xf0) + uVar4 != 1) {
LAB_144317bde:
                          bVar2 = *(byte *)(uVar11 + 0x9c);
                          if (DAT_14cbe3a80 == uVar4) {
                            if (1 < (int)DAT_14cbe3a80) {
                              lVar17 = 0;
                              while( true ) {
                                uVar21 = *(ushort *)(DAT_14cbe3a78 + lVar17);
                                uVar15 = *(ushort *)(*plVar9 + lVar17);
                                if (uVar21 != uVar15) break;
                                if (uVar21 == 0) goto LAB_144317c96;
LAB_144317c1f:
                                lVar17 = lVar17 + 2;
                              }
                              local_2e8 = (longlong *)CONCAT71(local_2e8._1_7_,bVar2);
                              if ((uVar15 | uVar21) < 0x80) {
                                if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                                goto LAB_144317c1f;
                                iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                              }
                              else {
                                iVar16 = (uint)uVar21 - (uint)uVar15;
                              }
                              if (iVar16 != 0) goto LAB_144317ca0;
                            }
LAB_144317c96:
                            if ((bVar2 & 0x10) != 0) goto LAB_14431784c;
                          }
                          else if (uVar4 + DAT_14cbe3a80 == 1) goto LAB_144317c96;
LAB_144317ca0:
                          if (DAT_14cbe3a90 == uVar4) {
                            if (1 < (int)DAT_14cbe3a90) {
                              lVar17 = 0;
                              while( true ) {
                                uVar21 = *(ushort *)(DAT_14cbe3a88 + lVar17);
                                uVar15 = *(ushort *)(*plVar9 + lVar17);
                                if (uVar21 != uVar15) break;
                                if (uVar21 == 0) goto LAB_144317d50;
LAB_144317cdf:
                                lVar17 = lVar17 + 2;
                              }
                              local_2e8 = (longlong *)CONCAT71(local_2e8._1_7_,bVar2);
                              if ((uVar15 | uVar21) < 0x80) {
                                if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                                goto LAB_144317cdf;
                                iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                              }
                              else {
                                iVar16 = (uint)uVar21 - (uint)uVar15;
                              }
                              if (iVar16 != 0) goto LAB_144317d5a;
                            }
LAB_144317d50:
                            if ((bVar2 & 0x20) != 0) goto LAB_14431784c;
                          }
                          else if (DAT_14cbe3a90 + uVar4 == 1) goto LAB_144317d50;
LAB_144317d5a:
                          if (DAT_14cbe3aa0 == uVar4) {
                            if (1 < (int)DAT_14cbe3aa0) {
                              lVar17 = 0;
                              while( true ) {
                                uVar21 = *(ushort *)(DAT_14cbe3a98 + lVar17);
                                uVar15 = *(ushort *)(*plVar9 + lVar17);
                                if (uVar21 != uVar15) break;
                                if (uVar21 == 0) goto LAB_144317de6;
LAB_144317d91:
                                lVar17 = lVar17 + 2;
                              }
                              local_2e8 = plVar9;
                              if ((uVar15 | uVar21) < 0x80) {
                                if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar15])
                                goto LAB_144317d91;
                                iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] -
                                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
                              }
                              else {
                                iVar16 = (uint)uVar21 - (uint)uVar15;
                              }
                              if (iVar16 != 0) goto LAB_144317df0;
                            }
LAB_144317de6:
                            if ((bVar2 & 0x40) != 0) goto LAB_14431784c;
                          }
                          else if (DAT_14cbe3aa0 + uVar4 == 1) goto LAB_144317de6;
LAB_144317df0:
                          if (DAT_14cbe3ab0 == uVar4) {
                            if (1 < (int)DAT_14cbe3ab0) {
                              lVar17 = 0;
                              while( true ) {
                                uVar21 = *(ushort *)(DAT_14cbe3aa8 + lVar17);
                                uVar19 = (ulonglong)uVar21;
                                uVar15 = *(ushort *)(*plVar9 + lVar17);
                                if (uVar21 != uVar15) break;
                                if (uVar21 == 0) goto LAB_144317e6f;
LAB_144317e27:
                                lVar17 = lVar17 + 2;
                              }
                              if ((uVar15 | uVar21) < 0x80) {
                                uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                                uVar14 = (ulonglong)uVar15;
                                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                                if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar14])
                                goto LAB_144317e27;
                              }
                              if (uVar21 != uVar15) goto LAB_144317e79;
                            }
LAB_144317e6f:
                            if ((bVar2 & 8) != 0) goto LAB_14431784c;
                          }
                          else if (DAT_14cbe3ab0 + uVar4 == 1) goto LAB_144317e6f;
LAB_144317e79:
                          if (DAT_14cbe3ac0 == uVar4) {
                            if (1 < (int)DAT_14cbe3ac0) {
                              lVar17 = 0;
                              while( true ) {
                                uVar21 = *(ushort *)(DAT_14cbe3ab8 + lVar17);
                                uVar19 = (ulonglong)uVar21;
                                uVar15 = *(ushort *)(*plVar9 + lVar17);
                                if (uVar21 != uVar15) break;
                                if (uVar21 == 0) goto LAB_144317ef8;
LAB_144317eb0:
                                lVar17 = lVar17 + 2;
                              }
                              if ((uVar15 | uVar21) < 0x80) {
                                uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                                uVar14 = (ulonglong)uVar15;
                                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                                if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar14])
                                goto LAB_144317eb0;
                              }
                              if (uVar21 != uVar15) goto LAB_144317f02;
                            }
LAB_144317ef8:
                            if ((bVar7 & 0x20) != 0) goto LAB_14431784c;
                          }
                          else if (DAT_14cbe3ac0 + uVar4 == 1) goto LAB_144317ef8;
LAB_144317f02:
                          if (DAT_14cbe3ad0 == uVar4) {
                            if (1 < (int)DAT_14cbe3ad0) {
                              lVar17 = 0;
                              while( true ) {
                                uVar21 = *(ushort *)(DAT_14cbe3ac8 + lVar17);
                                uVar19 = (ulonglong)uVar21;
                                uVar15 = *(ushort *)(*plVar9 + lVar17);
                                if (uVar21 != uVar15) break;
                                if (uVar21 == 0) goto LAB_144317f81;
LAB_144317f39:
                                lVar17 = lVar17 + 2;
                              }
                              if ((uVar15 | uVar21) < 0x80) {
                                uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                                uVar14 = (ulonglong)uVar15;
                                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                                if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar14])
                                goto LAB_144317f39;
                              }
                              if (uVar21 != uVar15) goto LAB_144317f8b;
                            }
LAB_144317f81:
                            if ((bVar2 & 2) != 0) goto LAB_14431784c;
                          }
                          else if (DAT_14cbe3ad0 + uVar4 == 1) goto LAB_144317f81;
LAB_144317f8b:
                          if (DAT_14cbe3ae0 == uVar4) {
                            if (1 < (int)DAT_14cbe3ae0) {
                              lVar17 = 0;
                              while( true ) {
                                uVar21 = *(ushort *)(DAT_14cbe3ad8 + lVar17);
                                uVar19 = (ulonglong)uVar21;
                                uVar15 = *(ushort *)(*plVar9 + lVar17);
                                if (uVar21 != uVar15) break;
                                if (uVar21 == 0) goto LAB_144318002;
LAB_144317fbf:
                                lVar17 = lVar17 + 2;
                              }
                              if ((uVar15 | uVar21) < 0x80) {
                                uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                                uVar14 = (ulonglong)uVar15;
                                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                                if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar14])
                                goto LAB_144317fbf;
                              }
                              if (uVar21 != uVar15) goto LAB_144317855;
                            }
                          }
                          else if (uVar4 + DAT_14cbe3ae0 != 1) goto LAB_144317855;
LAB_144318002:
                          if ((bVar2 & 2) != 0) goto LAB_144317855;
                        }
                      }
                    }
                  }
                }
              }
LAB_14431784c:
              uVar25 = (ulonglong)(byte)((byte)uVar25 | bVar7 & 1);
              iVar18 = iVar18 + 1;
            }
LAB_144317855:
            uVar11 = uVar11 + 0x268;
          } while (uVar11 != local_2d0);
        }
        local_250 = lVar10;
        if ((DAT_14c764098 == '\x01') && (iVar18 == 0)) {
          local_2d0 = CONCAT44(local_2d0._4_4_,(int)uVar25);
          FUN_148ee467c(&local_f8,&local_198);
          FUN_148ee4800(&local_f8,plVar9);
          if ((longlong)(int)local_2e0[0x81] == 0) {
            iVar16 = 0;
LAB_1443182da:
            iVar23 = 0;
          }
          else {
            lVar10 = local_2e0[0x80];
            lVar17 = (longlong)(int)local_2e0[0x81] * 0x268;
            iVar16 = 0;
            do {
              bVar7 = (*(code *)*local_f8)(&local_f8,lVar10);
              iVar16 = iVar16 + (uint)bVar7;
              lVar10 = lVar10 + 0x268;
              lVar17 = lVar17 + -0x268;
            } while (lVar17 != 0);
            if ((longlong)(int)local_2e0[0x81] == 0) goto LAB_1443182da;
            lVar10 = local_2e0[0x80];
            lVar17 = (longlong)(int)local_2e0[0x81] * 0x268;
            iVar23 = 0;
            do {
              bVar7 = (*(code *)*local_198)(&local_198,lVar10);
              iVar23 = iVar23 + (uint)bVar7;
              lVar10 = lVar10 + 0x268;
              lVar17 = lVar17 + -0x268;
            } while (lVar17 != 0);
          }
          iVar24 = iVar16 - iVar23;
          if (iVar24 == 0 || iVar16 < iVar23) {
            local_208 = 0;
            plStack_200 = (longlong *)0x0;
            FUN_1413a454c(local_1a8,0,0);
          }
          else {
            local_1c8 = 0;
            plStack_1c0 = (longlong *)0x0;
            FUN_1413a454c(local_1b8,iVar24,0);
            FUN_140056680(local_1f8,L"({0})");
            FUN_140233b1a(local_1e8,local_1f8);
            FUN_14023409e(&local_1d8,local_1e8,1);
            local_88 = CONCAT44(local_88._4_4_,4);
            FUN_14023423e(local_78,local_1b8);
            local_118 = &local_88;
            local_110 = (longlong *)local_68;
            FUN_14010d304(&local_108,&local_118);
            local_128 = local_1d8;
            local_120 = local_1d0;
            if (local_1d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_1a8,&local_128);
            FUN_14007f2db(local_108,(ulonglong)local_100 & 0xffffffff);
            if (local_108 != (undefined ***)0x0) {
              FUN_1400020a8();
            }
            if (local_78[0] != (longlong *)0x0) {
              (**(code **)(*local_78[0] + 0x10))();
            }
            plVar12 = local_1d0;
            if (local_1d0 != (longlong *)0x0) {
              LOCK();
              plVar26 = local_1d0 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*local_1d0)(local_1d0,local_1a8);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12,local_1a8);
                }
              }
            }
            if (local_1b8[0] != (longlong *)0x0) {
              (**(code **)(*local_1b8[0] + 0x10))(local_1b8[0],local_1a8);
            }
          }
          FUN_140008f88(plVar9 + 0xc,local_1a8);
          if (local_1a8[0] != (longlong *)0x0) {
            (**(code **)(*local_1a8[0] + 0x10))();
          }
          plVar12 = plStack_200;
          if (0 < iVar24) {
            if (local_1e8[0] != (longlong *)0x0) {
              (**(code **)(*local_1e8[0] + 0x10))();
            }
            plVar12 = plStack_1c0;
            if (local_1f8[0] != 0) {
              FUN_1400020a8();
              plVar12 = plStack_1c0;
            }
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar26 = plVar12 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
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
          *(byte *)(plVar9 + 0x11) =
               *(byte *)(plVar9 + 0x11) & 0xf7 | (iVar24 < 1 & DAT_14c764099) << 3;
          FUN_14591706c(&local_f8);
          uVar25 = local_2d0 & 0xffffffff;
        }
        else {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_1413a454c(&local_f8,iVar18,0);
          FUN_140008f88(plVar9 + 0xc,&local_f8);
          if (local_f8 != (undefined **)0x0) {
            (**(code **)(*local_f8 + 0x10))();
          }
          plVar12 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar26 = plStack_80 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          *(byte *)(plVar9 + 0x11) =
               *(byte *)(plVar9 + 0x11) & 0xf7 | (iVar18 == 0 & DAT_14c764099) << 3;
        }
        plVar12 = local_2e0;
        if (DAT_14cbe3bc8 == '\x01') {
          cVar8 = (char)uVar25;
          if ((int)plVar9[9] < 2) {
            cVar8 = '\0';
          }
        }
        else {
          cVar8 = '\0';
        }
        *(byte *)((longlong)plVar9 + 0x89) =
             (*(byte *)((longlong)plVar9 + 0x89) & 0xef) + cVar8 * '\x10';
        *(byte *)(plVar9 + 0x11) = *(byte *)(plVar9 + 0x11) | 2;
        if ((DAT_14c76409a == '\x01') && ((*(byte *)(local_250 + 0x89) & 2) == 0)) {
          uStack_f0 = 0;
          local_e8 = (longlong *)0x0;
          local_f8 = &PTR_FUN_14b895f80;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_90 = 0;
          FUN_148ee4800(&local_f8,plVar9);
          iVar16 = 0;
          if ((longlong)(int)plVar12[0x81] != 0) {
            lVar10 = local_2e0[0x80];
            lVar17 = (longlong)(int)plVar12[0x81] * 0x268;
            iVar16 = 0;
            do {
              bVar7 = (*(code *)*local_f8)(&local_f8,lVar10);
              iVar16 = iVar16 + (uint)bVar7;
              lVar10 = lVar10 + 0x268;
              lVar17 = lVar17 + -0x268;
            } while (lVar17 != 0);
          }
          FUN_14591706c(&local_f8);
          if (iVar16 == 0 && iVar18 == 0) {
            FUN_1412fabe8(local_290,plVar9);
            FUN_1410d0f68(local_2d8);
          }
          else {
            FUN_148e6a174(local_2d8,plVar9);
          }
        }
        param_1 = local_2e0;
        if ((~*(byte *)(plVar9 + 0x11) & 0x48) == 0) {
          *(byte *)(plVar9 + 0x11) = *(byte *)(plVar9 + 0x11) & 0xbf;
          plVar12 = (longlong *)FUN_145917192(local_2e0);
          lVar10 = *plVar12;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x58));
          *(int *)(lVar10 + 0x50) = *(int *)(lVar10 + 0x50) + 1;
          (**(code **)(*param_1 + 0xa8))(param_1,&local_f8);
          FUN_148e1b412(lVar10,&local_f8);
          if (local_f8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x58));
        }
      }
      plVar9 = plVar9 + 0x12;
    } while (plVar9 != local_240);
  }
  if ((DAT_14c76409a != '\0') && ((longlong)(int)local_2e0[0x22] != 0)) {
    lVar10 = local_2e0[0x21];
    lVar17 = (longlong)(int)local_2e0[0x22] * 0x90 + lVar10;
    plVar9 = local_2e0 + 0x26;
    plVar12 = local_2e0 + 0x24;
    do {
      if (((*(byte *)(lVar10 + 0x89) & 1) != 0) &&
         (iVar18 = FUN_145c4ace0(plVar9,lVar10),
         (*(byte *)(local_2e0[0x31] + 0x89 + (longlong)iVar18 * 0x90) & 2) == 0)) {
        if ((longlong)*(int *)(lVar10 + 0x78) != 0) {
          bVar7 = 1;
          lVar20 = 0;
          do {
            bVar7 = bVar7 & (*(byte *)(local_2e0[0x21] + 0x89 +
                                      (longlong)*(int *)(*(longlong *)(lVar10 + 0x70) + lVar20) *
                                      0x90) & 2) >> 1;
            lVar20 = lVar20 + 8;
          } while ((longlong)*(int *)(lVar10 + 0x78) * 8 != lVar20);
          if (bVar7 == 0) {
            FUN_148e6a174(local_2d8,lVar10);
            goto LAB_144318837;
          }
        }
        FUN_1412fabe8(plVar12,lVar10);
        FUN_1410d0f68(local_2d8);
      }
LAB_144318837:
      lVar10 = lVar10 + 0x90;
    } while (lVar10 != lVar17);
  }
  if (((((int)uStack_178 == 0) && ((int)uStack_168 == 0)) && ((int)uStack_158 == 0)) &&
     ((((int)uStack_148 == 0 && ((int)uStack_138 == 0)) && (local_130 == '\0')))) {
    pcVar13 = "FilterHeaderText";
  }
  else {
    pcVar13 = "CustomFilterHeaderText";
  }
  uStack_d8 = 0;
  local_e0 = 0;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
  uStack_f0 = 0;
  local_f8 = (undefined **)0x0;
  FUN_1446ddda2(&local_f8,pcVar13,0);
  FUN_1410d1eba(&local_128,&local_f8);
  plVar9 = local_2e0;
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  local_228 = 0;
  plStack_220 = (longlong *)0x0;
  iVar18 = 0;
  if ((longlong)(int)plVar9[0x81] != 0) {
    lVar10 = local_2e0[0x80];
    lVar17 = (longlong)(int)plVar9[0x81] * 0x268;
    iVar18 = 0;
    do {
      bVar7 = (*(code *)*local_198)(&local_198,lVar10);
      iVar18 = iVar18 + (uint)bVar7;
      lVar10 = lVar10 + 0x268;
      lVar17 = lVar17 + -0x268;
    } while (lVar17 != 0);
  }
  FUN_1413a454c(local_218,iVar18,0,&local_228);
  FUN_14023409e(&local_238,&local_128,1);
  local_f8 = (undefined **)CONCAT44(local_f8._4_4_,4);
  FUN_14023423e(&local_e8,local_218);
  local_108 = &local_f8;
  local_100 = &uStack_d8;
  FUN_14010d304(&local_88);
  local_118 = local_238;
  local_110 = local_230;
  if (local_230 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_230 + 1) = (int)local_230[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_1a8,&local_118,&local_88);
  FUN_14007f2db(local_88,(ulonglong)plStack_80 & 0xffffffff);
  plVar9 = local_2e0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_230 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar1 = (int *)((longlong)local_230 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_230 + 0x10))(local_230);
      }
    }
  }
  if (local_218[0] != (longlong *)0x0) {
    (**(code **)(*local_218[0] + 0x10))();
  }
  plVar12 = local_1a8[0];
  if (*(code **)(*local_1a8[0] + 0x50) != FUN_144828418) {
    plVar12 = (longlong *)(**(code **)(*local_1a8[0] + 0x50))(local_1a8[0]);
  }
  FUN_1447a1fc0(plVar12);
  pcVar5 = *(code **)(*local_1a8[0] + 0x28);
  if (pcVar5 == FUN_14482841c) {
    plVar12 = (longlong *)(local_1a8[0][5] + 8);
    if (local_1a8[0][5] == 0) {
      plVar12 = local_1a8[0] + 3;
    }
  }
  else if (pcVar5 == (code *)&LAB_14010c34c) {
    plVar12 = local_1a8[0] + 2;
  }
  else {
    plVar12 = (longlong *)(*pcVar5)(local_1a8[0]);
  }
  plVar26 = plVar9 + 0x19;
  if (plVar26 != plVar12) {
    iVar18 = (int)plVar12[1];
    _Src = (void *)*plVar12;
    *(int *)(plVar9 + 0x1a) = iVar18;
    if (iVar18 == 0 && *(int *)((longlong)plVar9 + 0xd4) == 0) {
      *(undefined4 *)((longlong)plVar9 + 0xd4) = 0;
    }
    else {
      FUN_1446dd670(plVar26,iVar18);
      if (iVar18 != 0) {
        memcpy((void *)*plVar26,_Src,(longlong)iVar18 * 2);
      }
    }
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))(local_1a8[0]);
  }
  plVar12 = plStack_220;
  if (plStack_220 != (longlong *)0x0) {
    LOCK();
    plVar26 = plStack_220 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*plStack_220)(plStack_220);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  puVar6 = (ushort *)plVar9[0x10];
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(plVar9 + 0xf) & 0x3f));
  }
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))();
  }
  FUN_14591706c(&local_198);
  if ((local_60 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001443178e3:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar15];
LAB_1443178e6:
  if (iVar16 == 0) {
LAB_144317918:
    uVar25 = (ulonglong)(byte)((byte)uVar25 | bVar7 & 1);
    iVar18 = iVar18 + 1;
    goto LAB_144317855;
  }
LAB_1443178f9:
  plVar26 = plVar26 + 2;
  if (plVar26 == plVar22) goto LAB_144317938;
  goto LAB_144317886;
}



// FUNCTION 14431887c FUN_14431887c body=4058 status=ok
// SIG undefined FUN_14431887c(void)

/* WARNING: Removing unreachable block (ram,0x000144319526) */
/* WARNING: Removing unreachable block (ram,0x0001443192f1) */
/* WARNING: Removing unreachable block (ram,0x0001443190b4) */
/* WARNING: Removing unreachable block (ram,0x000144318fc6) */
/* WARNING: Removing unreachable block (ram,0x0001443191a2) */
/* WARNING: Removing unreachable block (ram,0x000144319437) */
/* WARNING: Removing unreachable block (ram,0x00014431960b) */
/* WARNING: Removing unreachable block (ram,0x000144319538) */
/* WARNING: Removing unreachable block (ram,0x000144319303) */
/* WARNING: Removing unreachable block (ram,0x0001443190c6) */
/* WARNING: Removing unreachable block (ram,0x000144318fd8) */
/* WARNING: Removing unreachable block (ram,0x0001443191b4) */
/* WARNING: Removing unreachable block (ram,0x000144319449) */
/* WARNING: Removing unreachable block (ram,0x00014431961d) */

void FUN_14431887c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  undefined1 auStack_1c8 [47];
  byte local_199;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188 [2];
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *plStack_150;
  longlong *local_148 [2];
  longlong *local_138;
  undefined4 local_130;
  longlong *local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  char local_f9;
  undefined8 local_f8;
  longlong *local_f0;
  undefined4 *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 local_b0;
  undefined **ppuStack_a8;
  char *local_a0;
  longlong *local_98;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_f9 = '\0';
  if (((*(byte *)(param_1 + 0x330) & 0x40) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xa98), iVar2 - 1U < 2)) {
    local_118 = 0;
    uStack_110 = 0;
    iVar13 = 0;
    cVar6 = '\0';
    bVar4 = false;
    bVar14 = false;
    if (*(char *)(param_1 + 0x928) == '\0') {
      bVar15 = *(byte *)(param_1 + 0x8f8);
      if ((((bVar15 & 4) == 0) ||
          (((*(int *)(param_1 + 0x67c) == -1 && (*(int *)(param_1 + 0x680) == 0)) &&
           ((*(byte *)(param_1 + 0x4c7) & 0x20) == 0)))) || ((*(byte *)(param_1 + 0x4c4) & 2) == 0))
      {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(param_1 + 0x3d0) < *(int *)(param_1 + 0x3d8);
      }
      if (((bVar15 & 1) == 0) ||
         (((*(int *)(param_1 + 0x67c) == -1 && (*(int *)(param_1 + 0x680) == 0)) &&
          ((*(byte *)(param_1 + 0x4c7) & 0x20) == 0)))) {
        cVar6 = '\0';
      }
      else {
        cVar6 = FUN_148ee4610(param_1 + 0x428);
      }
      if (((bVar15 & 0x10) == 0) ||
         ((((*(int *)(param_1 + 0x67c) == -1 && (*(int *)(param_1 + 0x680) == 0)) &&
           ((*(byte *)(param_1 + 0x4c7) & 0x20) == 0)) ||
          (((*(byte *)(param_1 + 0x4c6) & 0x40) != 0 || ((*(byte *)(param_1 + 0x4c4) & 1) != 0))))))
      {
        bVar14 = false;
      }
      else {
        bVar14 = (char)*(byte *)(param_1 + 0x4c6) < '\0' && (*(byte *)(param_1 + 0x4c7) & 0x20) == 0
        ;
      }
    }
    if ((longlong)*(int *)(param_1 + 0x408) != 0) {
      lVar12 = 0;
      iVar13 = 0;
      do {
        iVar13 = iVar13 + (uint)((*(byte *)(*(longlong *)(param_1 + 0x400) + 0x9c + lVar12) & 0x41)
                                == 0x40);
        lVar12 = lVar12 + 0x268;
      } while ((longlong)*(int *)(param_1 + 0x408) * 0x268 - lVar12 != 0);
    }
    bVar15 = *(byte *)(param_1 + 0x8f8);
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
    bVar15 = 0 < iVar13 & (bVar15 & 0x40) >> 6;
    local_128 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    local_120 = DAT_14c844848;
    if (bVar15 != 0) {
      local_158 = 0;
      plStack_150 = (longlong *)0x0;
      local_199 = bVar15;
      FUN_1413a454c(local_148,iVar13,0);
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      local_b8 = (undefined ***)((ulonglong)local_b8 & 0xffffffff00000000);
      local_b0 = 0;
      ppuStack_a8 = (undefined **)0x0;
      FUN_1446ddda2(&local_c8,"BankDepositCountFormatText",0);
      FUN_1410d1eba(local_178,&local_c8);
      FUN_14023409e(&local_168,local_178,1);
      local_80[0] = 4;
      FUN_14023423e(local_70,local_148);
      local_e8 = local_80;
      local_e0 = local_60;
      FUN_14010d304(&local_d8);
      local_f8 = local_168;
      local_f0 = local_160;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_160 + 1) = (int)local_160[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_138,&local_f8);
      FUN_14007f2db(local_d8,local_d0);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_160 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_160 + 0x10))(local_160);
          }
        }
      }
      if (local_148[0] != (longlong *)0x0) {
        (**(code **)(*local_148[0] + 0x10))();
      }
      FUN_140008f88(&local_128);
      bVar15 = local_199;
      if (local_138 != (longlong *)0x0) {
        (**(code **)(*local_138 + 0x10))();
      }
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      plVar9 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_150 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plStack_150)(plStack_150);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    iVar13 = 0;
    if ((longlong)*(int *)(param_1 + 0x408) != 0) {
      lVar12 = 0;
      iVar13 = 0;
      do {
        if ((*(byte *)(*(longlong *)(param_1 + 0x400) + 0x9c + lVar12) & 0xf1) == 0) {
          bVar16 = -1 < *(char *)(*(longlong *)(param_1 + 0x400) + 0x9d + lVar12);
        }
        else {
          bVar16 = false;
        }
        iVar13 = iVar13 + (uint)bVar16;
        lVar12 = lVar12 + 0x268;
      } while ((longlong)*(int *)(param_1 + 0x408) * 0x268 - lVar12 != 0);
    }
    if ((((*(byte *)(param_1 + 0x8f8) & 0x20) == 0) || (*(char *)(param_1 + 0x928) != '\0')) ||
       (iVar13 < 1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      local_138 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_130 = DAT_14c844848;
      bVar16 = false;
    }
    else {
      local_158 = 0;
      plStack_150 = (longlong *)0x0;
      local_199 = bVar15;
      FUN_1413a454c(local_188,iVar13,0);
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      local_b8 = (undefined ***)((ulonglong)local_b8 & 0xffffffff00000000);
      local_b0 = 0;
      ppuStack_a8 = (undefined **)0x0;
      FUN_1446ddda2(&local_c8,"MarkAllFilteredHint",0);
      FUN_1410d1eba(local_178,&local_c8);
      FUN_14023409e(&local_198,local_178,1);
      local_80[0] = 4;
      FUN_14023423e(local_70,local_188);
      local_e8 = local_80;
      local_e0 = local_60;
      FUN_14010d304(&local_d8);
      local_f8 = local_198;
      local_f0 = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_190 + 1) = (int)local_190[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_138,&local_f8,&local_d8);
      FUN_14007f2db(local_d8,local_d0);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_190 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)local_190 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_190 + 0x10))(local_190);
          }
        }
      }
      if (local_188[0] != (longlong *)0x0) {
        (**(code **)(*local_188[0] + 0x10))();
      }
      bVar15 = local_199;
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      plVar9 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_150 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plStack_150)(plStack_150);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      bVar16 = true;
    }
    if (bVar14) {
      FUN_146637162(&local_c8,&DAT_14cbe2f28,&DAT_14cbe3038);
      uVar5 = uStack_110;
      lVar12 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar5 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(undefined8 *)(local_118 + lVar12) = 0;
      *(code **)(local_118 + lVar12) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar12) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar12) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar12) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar12) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar12) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar12) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if (bVar4) {
      FUN_146637162(&local_c8,&DAT_14cbe2ea8,&DAT_14cbe3008);
      uVar5 = uStack_110;
      lVar12 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar5 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(undefined8 *)(local_118 + lVar12) = 0;
      *(code **)(local_118 + lVar12) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar12) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar12) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar12) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar12) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar12) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar12) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if (cVar6 != '\0') {
      FUN_146637162(&local_c8,&DAT_14cbe2e88,&DAT_14cbe3018);
      uVar5 = uStack_110;
      lVar12 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar5 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(undefined8 *)(local_118 + lVar12) = 0;
      *(code **)(local_118 + lVar12) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar12) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar12) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar12) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar12) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar12) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar12) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if (bVar15 != 0) {
      plVar9 = local_128;
      if (*(code **)(*local_128 + 0x50) != FUN_144828418) {
        plVar9 = (longlong *)(**(code **)(*local_128 + 0x50))();
      }
      FUN_1447a1fc0(plVar9);
      pcVar3 = *(code **)(*local_128 + 0x28);
      if (pcVar3 == FUN_14482841c) {
        plVar9 = local_128 + 3;
        if (local_128[5] != 0) {
          plVar9 = (longlong *)(local_128[5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar9 = local_128 + 2;
      }
      else {
        plVar9 = (longlong *)(*pcVar3)(local_128);
      }
      FUN_146637162(&local_c8,&DAT_14cbe2ee8,plVar9);
      uVar5 = uStack_110;
      lVar12 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar5 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(undefined8 *)(local_118 + lVar12) = 0;
      *(code **)(local_118 + lVar12) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar12) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar12) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar12) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar12) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar12) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar12) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    plVar9 = local_138;
    if (bVar16) {
      plVar10 = local_138;
      if (*(code **)(*local_138 + 0x50) != FUN_144828418) {
        plVar10 = (longlong *)(**(code **)(*local_138 + 0x50))(local_138);
      }
      FUN_1447a1fc0(plVar10);
      pcVar3 = *(code **)(*plVar9 + 0x28);
      if (pcVar3 == FUN_14482841c) {
        plVar10 = plVar9 + 3;
        if (plVar9[5] != 0) {
          plVar10 = (longlong *)(plVar9[5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar10 = plVar9 + 2;
      }
      else {
        plVar10 = (longlong *)(*pcVar3)(plVar9);
      }
      FUN_146637162(&local_c8,&DAT_14cbe2ef8,plVar10);
      uVar5 = uStack_110;
      lVar12 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar5 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(undefined8 *)(local_118 + lVar12) = 0;
      *(code **)(local_118 + lVar12) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar12) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar12) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar12) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar12) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar12) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar12) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    if (iVar2 == 1) {
      FUN_146637162(&local_c8,&DAT_14cbe2f98,&DAT_14cbe30a8);
      uVar5 = uStack_110;
      lVar12 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_146638242(&local_118,uVar5 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(undefined8 *)(local_118 + lVar12) = 0;
      *(code **)(local_118 + lVar12) = local_c8;
      *(undefined4 *)(local_118 + 8 + lVar12) = (undefined4)uStack_c0;
      *(undefined4 *)(local_118 + 0xc + lVar12) = uStack_c0._4_4_;
      *(undefined8 *)(local_118 + 0x10 + lVar12) = 0;
      *(undefined ****)(local_118 + 0x10 + lVar12) = local_b8;
      *(undefined4 *)(local_118 + 0x18 + lVar12) = (undefined4)local_b0;
      *(undefined4 *)(local_118 + 0x1c + lVar12) = local_b0._4_4_;
      local_b0 = 0;
      local_b8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_c8 = (code *)0x0;
    }
    FUN_146637162(&local_c8,&DAT_14cbe2f08,&DAT_14cbe3078);
    uVar5 = uStack_110;
    lVar12 = (longlong)(int)uStack_110;
    uVar7 = (int)uStack_110 + 1;
    uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
    if (uStack_110._4_4_ < uVar7) {
      FUN_146638242(&local_118,uVar5 & 0xffffffff);
    }
    lVar12 = lVar12 * 0x20;
    *(undefined8 *)(local_118 + lVar12) = 0;
    *(code **)(local_118 + lVar12) = local_c8;
    *(undefined4 *)(local_118 + 8 + lVar12) = (undefined4)uStack_c0;
    *(undefined4 *)(local_118 + 0xc + lVar12) = uStack_c0._4_4_;
    *(undefined8 *)(local_118 + 0x10 + lVar12) = 0;
    *(undefined ****)(local_118 + 0x10 + lVar12) = local_b8;
    *(undefined4 *)(local_118 + 0x18 + lVar12) = (undefined4)local_b0;
    *(undefined4 *)(local_118 + 0x1c + lVar12) = local_b0._4_4_;
    local_b0 = 0;
    local_b8 = (undefined ***)0x0;
    uStack_c0 = 0;
    local_c8 = (code *)0x0;
    puVar8 = (undefined8 *)FUN_14135056a(param_1);
    local_b8 = (undefined ***)0x0;
    ppuStack_a8 = &PTR_LAB_14b9d89c0;
    local_a0 = &local_f9;
    local_98 = &local_118;
    local_c8 = FUN_1443237d0;
    FUN_148e57a3a(*puVar8,&local_c8);
    if (local_c8 != (code *)0x0) {
      pppuVar11 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar11 = &ppuStack_a8;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    if (local_f9 == '\x01') {
      FUN_148c56694(param_1 + 0x2b0,&local_118);
      FUN_144315e9e(param_1);
    }
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x10))();
    }
    if (local_128 != (longlong *)0x0) {
      (**(code **)(*local_128 + 0x10))();
    }
    FUN_145a5bc9c(local_118,uStack_110 & 0xffffffff);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144319857 FUN_144319857 body=69 status=ok
// SIG undefined FUN_144319857(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144319857(void)

{
  _DAT_14cbe3bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144319899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3bd8,1);
  return;
}



// FUNCTION 14431989c FUN_14431989c body=1501 status=ok
// SIG undefined FUN_14431989c(void)

void FUN_14431989c(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78 [2];
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar9 = param_1 + 0x6b;
  if ((int)param_1[0x6c] < 2) {
    plVar10 = (longlong *)FUN_145917192(param_1);
    lVar4 = *plVar10;
    SRWLock = (PSRWLOCK)(lVar4 + 0x58);
    AcquireSRWLockShared(SRWLock);
    (**(code **)(*param_1 + 0xa8))(param_1,local_78);
    plVar10 = (longlong *)FUN_148e1b2aa(lVar4,local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(SRWLock);
    if (plVar10 != (longlong *)0x0) {
      uVar3 = *(uint *)(plVar10 + 1);
      if (1 < (int)uVar3) {
        if (plVar9 != plVar10) {
          pvVar6 = (void *)*plVar10;
          *(uint *)(param_1 + 0x6c) = uVar3;
          FUN_1446dd670(plVar9,(ulonglong)uVar3,*(undefined4 *)((longlong)param_1 + 0x364));
          memcpy((void *)param_1[0x6b],pvVar6,(ulonglong)uVar3 * 2);
        }
        goto LAB_1443198d3;
      }
    }
    iVar8 = (int)param_1[0x6a] + -1;
    if ((int)param_1[0x6a] == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(plVar9,param_1[0x69],iVar8);
    *(byte *)((longlong)param_1 + 0x331) = *(byte *)((longlong)param_1 + 0x331) | 1;
  }
LAB_1443198d3:
  plVar10 = param_1 + 0x36;
  iVar8 = FUN_145c4ace0(plVar10,plVar9);
  if (iVar8 < 0) {
    bVar7 = false;
  }
  else {
    bVar7 = iVar8 < (int)param_1[0x42];
  }
  *(byte *)((longlong)param_1 + 0x331) = *(byte *)((longlong)param_1 + 0x331) | bVar7 ^ 1U;
  iVar8 = FUN_145c4ace0(plVar10,plVar9);
  if (iVar8 < 0) {
    bVar2 = *(byte *)((longlong)param_1 + 0x331);
joined_r0x000144319b65:
    if ((bVar2 & 1) == 0) {
      if ((int)param_1[0x3a] < 2) {
        local_78[0] = 0;
        local_78[1] = 0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        FUN_1446ddda2(local_78,"UnknownSortHeaderText",0);
        FUN_1410d1eba(&local_50,local_78);
        plVar9 = (longlong *)CONCAT44(uStack_4c,local_50);
        plVar10 = plVar9;
        if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x50))(plVar9);
        }
        plVar12 = param_1 + 0x39;
        FUN_1447a1fc0(plVar10);
        pcVar5 = *(code **)(*plVar9 + 0x28);
        if (pcVar5 == FUN_14482841c) {
          plVar10 = (longlong *)(plVar9[5] + 8);
          if (plVar9[5] == 0) {
            plVar10 = plVar9 + 3;
          }
        }
        else if (pcVar5 == (code *)&LAB_14010c34c) {
          plVar10 = plVar9 + 2;
        }
        else {
          plVar10 = (longlong *)(*pcVar5)(plVar9);
        }
        if (plVar12 != plVar10) {
          iVar8 = (int)plVar10[1];
          pvVar6 = (void *)*plVar10;
          *(int *)(param_1 + 0x3a) = iVar8;
          if (iVar8 == 0 && *(int *)((longlong)param_1 + 0x1d4) == 0) {
            *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
          }
          else {
            FUN_1446dd670(plVar12,iVar8);
            if (iVar8 != 0) {
              memcpy((void *)*plVar12,pvVar6,(longlong)iVar8 * 2);
            }
          }
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_144319e0b;
    }
LAB_144319b6b:
    pcVar11 = "SortHeaderText";
  }
  else {
    bVar2 = *(byte *)((longlong)param_1 + 0x331);
    if ((int)param_1[0x42] <= iVar8) goto joined_r0x000144319b65;
    if ((bVar2 & 1) != 0) goto LAB_144319b6b;
    pcVar11 = "CustomSortHeaderText";
  }
  uStack_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_78[1] = 0;
  local_78[0] = 0;
  FUN_1446ddda2(local_78,pcVar11,0);
  FUN_1410d1eba(local_b8,local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  plVar12 = param_1 + 0x69;
  if ((*(byte *)((longlong)param_1 + 0x331) & 1) == 0) {
    plVar12 = plVar9;
  }
  iVar8 = FUN_145c4ace0(plVar10,plVar12);
  FUN_140009b9a(local_d8,param_1[0x41] + (longlong)iVar8 * 0x90 + 0x10);
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(local_78,"SortHeaderText",0);
  FUN_1410d1eba(local_f8,local_78);
  FUN_14023409e(&local_e8,local_f8,1);
  local_50 = 4;
  FUN_14023423e(local_40,local_d8);
  local_98 = &local_50;
  local_90 = &local_30;
  FUN_14010d304(&local_88);
  local_a8 = local_e8;
  local_a0 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_c8,&local_a8,&local_88);
  FUN_14007f2db(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar9 = local_c8[0];
  if (*(code **)(*local_c8[0] + 0x50) != FUN_144828418) {
    plVar9 = (longlong *)(**(code **)(*local_c8[0] + 0x50))(local_c8[0]);
  }
  FUN_1447a1fc0(plVar9);
  pcVar5 = *(code **)(*local_c8[0] + 0x28);
  if (pcVar5 == FUN_14482841c) {
    plVar9 = (longlong *)(local_c8[0][5] + 8);
    if (local_c8[0][5] == 0) {
      plVar9 = local_c8[0] + 3;
    }
  }
  else if (pcVar5 == (code *)&LAB_14010c34c) {
    plVar9 = local_c8[0] + 2;
  }
  else {
    plVar9 = (longlong *)(*pcVar5)(local_c8[0]);
  }
  plVar10 = param_1 + 0x39;
  if (plVar10 != plVar9) {
    iVar8 = (int)plVar9[1];
    pvVar6 = (void *)*plVar9;
    *(int *)(param_1 + 0x3a) = iVar8;
    if (iVar8 == 0 && *(int *)((longlong)param_1 + 0x1d4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
    }
    else {
      FUN_1446dd670(plVar10,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*plVar10,pvVar6,(longlong)iVar8 * 2);
      }
    }
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))(local_c8[0]);
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
LAB_144319e0b:
  *(undefined1 *)((longlong)param_1 + 0x399) = 0;
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144319f24 FUN_144319f24 body=264 status=ok
// SIG undefined FUN_144319f24(void)

undefined8 FUN_144319f24(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  plVar3 = (longlong *)*param_1;
  iVar1 = (int)param_2[1];
  iVar2 = (int)plVar3[1];
  if (iVar1 == iVar2) {
    if (1 < iVar1) {
      lVar7 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar7);
        uVar6 = (ulonglong)uVar5;
        uVar8 = *(ushort *)(*plVar3 + lVar7);
        if (uVar5 != uVar8) break;
        if (uVar5 == 0) goto LAB_144319f95;
LAB_144319f61:
        lVar7 = lVar7 + 2;
      }
      if ((uVar8 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_144319f61;
      }
      if (uVar5 != uVar8) goto LAB_144319fa4;
    }
  }
  else if (iVar2 + iVar1 != 1) {
LAB_144319fa4:
    if (1 < iVar1 || param_3 != '\0') {
      return 0;
    }
    if (iVar2 == DAT_14cbe3be8) {
      if (1 < iVar2) {
        lVar7 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*plVar3 + lVar7);
          uVar6 = (ulonglong)uVar5;
          uVar8 = *(ushort *)(DAT_14cbe3be0 + lVar7);
          if (uVar5 != uVar8) break;
          if (uVar5 == 0) goto LAB_144319f95;
LAB_144319fee:
          lVar7 = lVar7 + 2;
        }
        if ((uVar8 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_144319fee;
        }
        if (uVar5 != uVar8) {
          return 0;
        }
      }
    }
    else if (DAT_14cbe3be8 + iVar2 != 1) {
      return 0;
    }
  }
LAB_144319f95:
  piVar4 = (int *)param_1[1];
  *piVar4 = *piVar4 + 1;
  return CONCAT71((int7)((ulonglong)piVar4 >> 8),1);
}



// FUNCTION 14431a02c FUN_14431a02c body=1445 status=ok
// SIG undefined FUN_14431a02c(void)

void FUN_14431a02c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  void *_Src;
  ushort *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_178 [32];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 *local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70 [4];
  longlong *local_60 [2];
  ulonglong local_50 [3];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_100 = 0;
  uStack_f8 = 0;
  local_108 = &PTR_FUN_14b9d8630;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  plVar7 = (longlong *)FUN_145917192();
  lVar4 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x58));
  *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + 1;
  FUN_14135388e(param_1,&local_98);
  lVar8 = FUN_145917130(lVar4,&local_98);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x58));
  if (lVar8 != 0) {
    FUN_144245026(&local_108,lVar8);
  }
  lVar4 = param_1 + 0x440;
  FUN_148ca848e(lVar4);
  *(undefined4 *)(param_1 + 0x460) = 0;
  iVar10 = 0;
  if ((longlong)*(int *)(param_1 + 0x448) != 0) {
    lVar8 = 0;
    iVar10 = 0;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x440) + 0xc0 + lVar8) & 1) != 0) {
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 0x460) = iVar10;
      }
      lVar8 = lVar8 + 0x110;
    } while ((longlong)*(int *)(param_1 + 0x448) * 0x110 - lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x108);
    lVar9 = (longlong)*(int *)(param_1 + 0x110) * 0x90 + lVar8;
    do {
      if ((*(byte *)(lVar8 + 0x89) & 1) != 0) {
        *(byte *)(lVar8 + 0x88) = *(byte *)(lVar8 + 0x88) & 0xbf;
        if ((longlong)*(int *)(lVar8 + 0x78) != 0) {
          puVar11 = *(undefined8 **)(lVar8 + 0x70);
          puVar3 = puVar11 + *(int *)(lVar8 + 0x78);
          do {
            uVar13 = (uint)*puVar11;
            if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(param_1 + 0x110))) {
              lVar14 = *(longlong *)(param_1 + 0x108);
              lVar15 = (ulonglong)(uVar13 & 0x7fffffff) * 0x90;
              bVar12 = *(byte *)(lVar14 + 0x88 + lVar15);
              if ((*(byte *)(lVar14 + 0x89 + lVar15) & 1) != 0) {
                lVar14 = lVar14 + lVar15;
                bVar12 = bVar12 & 0xbf;
                *(byte *)(lVar14 + 0x88) = bVar12;
                if ((longlong)*(int *)(lVar14 + 0x78) != 0) {
                  lVar15 = 0;
                  do {
                    uVar13 = (uint)*(undefined8 *)(*(longlong *)(lVar14 + 0x70) + lVar15);
                    if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(param_1 + 0x110))) {
                      bVar12 = bVar12 | *(byte *)(*(longlong *)(param_1 + 0x108) + 0x88 +
                                                 (ulonglong)(uVar13 & 0x7fffffff) * 0x90) & 0x40;
                      *(byte *)(lVar14 + 0x88) = bVar12;
                    }
                    lVar15 = lVar15 + 8;
                  } while ((longlong)*(int *)(lVar14 + 0x78) * 8 != lVar15);
                }
              }
              *(byte *)(lVar8 + 0x88) = *(byte *)(lVar8 + 0x88) | bVar12 & 0x40;
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar3);
        }
      }
      lVar8 = lVar8 + 0x90;
    } while (lVar8 != lVar9);
    iVar10 = *(int *)(param_1 + 0x460);
  }
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  FUN_145c561ae(local_128,iVar10,0);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1446ddda2(&local_98,"FilterHeaderText",0);
  FUN_1410d1eba(local_158,&local_98);
  FUN_14023409e(&local_148,local_158,1);
  local_70[0] = 4;
  FUN_14023423e(local_60,local_128);
  local_b8 = local_70;
  local_b0 = local_50;
  FUN_14010d304(&local_a8);
  local_c8 = local_148;
  local_c0 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_118,&local_c8,&local_a8);
  FUN_14007f2db(local_a8,local_a0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_140 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  plVar7 = local_118[0];
  if (*(code **)(*local_118[0] + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*local_118[0] + 0x50))(local_118[0]);
  }
  FUN_1447a1fc0(plVar7);
  pcVar5 = *(code **)(*local_118[0] + 0x28);
  if (pcVar5 == FUN_14482841c) {
    plVar7 = (longlong *)(local_118[0][5] + 8);
    if (local_118[0][5] == 0) {
      plVar7 = local_118[0] + 3;
    }
  }
  else if (pcVar5 == (code *)&LAB_14010c34c) {
    plVar7 = local_118[0] + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar5)(local_118[0]);
  }
  plVar2 = (longlong *)(param_1 + 200);
  if (plVar2 != plVar7) {
    iVar10 = (int)plVar7[1];
    _Src = (void *)*plVar7;
    *(int *)(param_1 + 0xd0) = iVar10;
    if (iVar10 == 0 && *(int *)(param_1 + 0xd4) == 0) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      FUN_1446dd670(plVar2,iVar10);
      if (iVar10 != 0) {
        memcpy((void *)*plVar2,_Src,(longlong)iVar10 * 2);
      }
    }
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))(local_118[0]);
  }
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  plVar7 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_130 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x448) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x440);
    lVar9 = (longlong)*(int *)(param_1 + 0x448) * 0x110 + lVar8;
    do {
      bVar12 = FUN_144244e1c(&local_108,lVar8);
      *(byte *)(lVar8 + 0xc0) = *(byte *)(lVar8 + 0xc0) & 0xfd | (bVar12 ^ 1) * '\x02';
      lVar8 = lVar8 + 0x110;
    } while (lVar8 != lVar9);
  }
  *(undefined1 *)(param_1 + 0x398) = 1;
  FUN_148eee03e(lVar4,&local_98,&local_108);
  FUN_148ee77cc(lVar4,&local_98);
  FUN_1418d3311(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  puVar6 = *(ushort **)(param_1 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  FUN_1461edcda(&local_108);
  if ((local_50[0] ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431a5d2 FUN_14431a5d2 body=4460 status=ok
// SIG undefined FUN_14431a5d2(void)

void FUN_14431a5d2(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  code *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  code **ppcVar11;
  undefined8 uVar12;
  longlong *plVar13;
  code *pcVar14;
  void **ppvVar15;
  undefined ****ppppuVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined8 *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 *local_130;
  longlong *local_128 [2];
  void *local_118;
  int local_110;
  undefined4 local_10c;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  code *local_d8;
  undefined8 uStack_d0;
  undefined ***local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  code *local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar20 = param_1 + 0xb0;
  FUN_1400b22c2(&local_d8,&DAT_149e377fe);
  iVar8 = FUN_145c4ace0(lVar20,&local_d8);
  if (iVar8 < 0) {
    bVar26 = false;
  }
  else {
    bVar26 = iVar8 < *(int *)(param_1 + 0x110);
  }
  if (local_d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar26) {
    FUN_1400b22c2(&local_d8,&DAT_149e377fe);
    iVar8 = FUN_145c4ace0(lVar20,&local_d8);
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x78 + (longlong)iVar8 * 0x90) + 1;
    if (iVar8 <= *(int *)(param_1 + 0x418)) {
      iVar8 = *(int *)(param_1 + 0x418);
    }
    local_158 = (longlong *)(param_1 + 0x410);
    FUN_148ee7910((longlong *)(param_1 + 0x410),iVar8);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_d8,&DAT_149e377fe);
    iVar8 = FUN_145c4ace0(lVar20,&local_d8);
    lVar20 = (longlong)iVar8 * 0x90 + *(longlong *)(param_1 + 0x108);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar10 = (longlong)*(int *)(lVar20 + 0x78);
    if (lVar10 != 0) {
      puVar23 = *(undefined8 **)(lVar20 + 0x70);
      puVar24 = puVar23 + lVar10;
      local_150 = puVar24;
      local_148 = param_1;
      do {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = (void *)0x0;
        uStack_80 = 0;
        local_98 = (code *)0x0;
        uStack_90 = 0;
        uVar9 = (uint)*puVar23;
        if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(param_1 + 0x110))) {
          local_138 = *(longlong *)(param_1 + 0x108);
          local_140 = (ulonglong)(uVar9 & 0x7fffffff) * 0x90;
          local_118 = (void *)0x0;
          local_110 = *(int *)(local_138 + 8 + local_140);
          lVar20 = (longlong)local_110;
          pvVar3 = *(void **)(local_138 + local_140);
          local_130 = puVar23;
          if (lVar20 == 0) {
            local_10c = 0;
          }
          else {
            FUN_1446dd670(&local_118,local_110,0);
            memcpy(local_118,pvVar3,lVar20 * 2);
          }
          local_108 = (code *)0x0;
          uStack_100 = 0;
          if ((longlong)*(int *)(param_1 + 0x448) != 0) {
            lVar20 = *(longlong *)(local_148 + 0x440);
            lVar10 = (longlong)*(int *)(param_1 + 0x448) * 0x110 + lVar20;
            do {
              if ((*(byte *)(lVar20 + 0xc0) & 0x81) == 1) {
                lVar25 = *(longlong *)(lVar20 + 0xd0);
                if (lVar25 == 0) {
                  uVar12 = FUN_140b7bb2c();
                  lVar25 = FUN_14477b664(uVar12);
                  *(longlong *)(lVar20 + 0xd0) = lVar25;
                }
                plVar13 = (longlong *)(lVar20 + 200);
                lVar22 = *(longlong *)(lVar20 + 0xd8);
                if (lVar22 == 0) {
                  if ((lVar25 != 0) && (*plVar13 != 0)) {
                    plVar5 = *(longlong **)(lVar25 + 0xb8);
                    if ((plVar5 == (longlong *)0x0) ||
                       (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                      *(undefined8 *)(lVar20 + 0xd8) = 0;
                    }
                    else {
                      uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                      lVar22 = FUN_144aff482(uVar12,plVar13);
                      *(longlong *)(lVar20 + 0xd8) = lVar22;
                      if (lVar22 != 0) {
                        lVar25 = *(longlong *)(lVar20 + 0xd0);
                        goto LAB_14431a9ab;
                      }
                    }
                  }
                }
                else {
LAB_14431a9ab:
                  if (lVar25 == 0) {
                    uVar12 = FUN_140b7bb2c();
                    lVar25 = FUN_14477b664(uVar12);
                    *(longlong *)(lVar20 + 0xd0) = lVar25;
                    lVar22 = *(longlong *)(lVar20 + 0xd8);
                    if (lVar22 == 0) {
                      if (lVar25 == 0) {
                        lVar22 = 0;
                      }
                      else {
                        lVar22 = 0;
                        if (*plVar13 != 0) {
                          plVar5 = *(longlong **)(lVar25 + 0xb8);
                          if ((plVar5 == (longlong *)0x0) ||
                             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                            lVar22 = 0;
                          }
                          else {
                            uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                            lVar22 = FUN_144aff482(uVar12,plVar13);
                          }
                          *(longlong *)(lVar20 + 0xd8) = lVar22;
                        }
                      }
                    }
                  }
                  lVar25 = *(longlong *)(lVar22 + 0x20);
                  if (lVar25 == 0) {
                    uVar12 = FUN_1418c9e66();
                    lVar25 = FUN_14477b664(uVar12);
                    *(longlong *)(lVar22 + 0x20) = lVar25;
                  }
                  if (*(longlong *)(lVar22 + 0x28) == 0) {
                    if ((lVar25 != 0) && (*(longlong *)(lVar22 + 0x18) != 0)) {
                      plVar5 = *(longlong **)(lVar25 + 0xb8);
                      if ((plVar5 == (longlong *)0x0) ||
                         (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                        *(undefined8 *)(lVar22 + 0x28) = 0;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                        lVar25 = FUN_144aff482(uVar12,(longlong *)(lVar22 + 0x18));
                        *(longlong *)(lVar22 + 0x28) = lVar25;
                        if (lVar25 != 0) goto LAB_14431aacd;
                      }
                    }
                  }
                  else {
LAB_14431aacd:
                    lVar25 = *(longlong *)(lVar20 + 0xd0);
                    if (lVar25 == 0) {
                      uVar12 = FUN_140b7bb2c();
                      lVar25 = FUN_14477b664(uVar12);
                      *(longlong *)(lVar20 + 0xd0) = lVar25;
                    }
                    lVar22 = *(longlong *)(lVar20 + 0xd8);
                    if (lVar22 == 0) {
                      if (lVar25 == 0) {
                        lVar22 = 0;
                      }
                      else {
                        lVar22 = 0;
                        if (*plVar13 != 0) {
                          plVar5 = *(longlong **)(lVar25 + 0xb8);
                          if ((plVar5 == (longlong *)0x0) ||
                             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                            lVar22 = 0;
                          }
                          else {
                            uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                            lVar22 = FUN_144aff482(uVar12,plVar13);
                          }
                          *(longlong *)(lVar20 + 0xd8) = lVar22;
                        }
                      }
                    }
                    lVar25 = *(longlong *)(lVar22 + 0x20);
                    if (lVar25 == 0) {
                      uVar12 = FUN_1418c9e66();
                      lVar25 = FUN_14477b664(uVar12);
                      *(longlong *)(lVar22 + 0x20) = lVar25;
                    }
                    lVar18 = *(longlong *)(lVar22 + 0x28);
                    if (lVar18 == 0) {
                      if (lVar25 == 0) {
                        lVar18 = 0;
                      }
                      else {
                        lVar18 = 0;
                        if (*(longlong *)(lVar22 + 0x18) != 0) {
                          plVar13 = *(longlong **)(lVar25 + 0xb8);
                          if ((plVar13 == (longlong *)0x0) ||
                             (cVar7 = (**(code **)(*plVar13 + 0x108))(), cVar7 == '\0')) {
                            lVar18 = 0;
                          }
                          else {
                            uVar12 = (**(code **)(*plVar13 + 0x110))(plVar13);
                            lVar18 = FUN_144aff482(uVar12,(longlong *)(lVar22 + 0x18));
                          }
                          *(longlong *)(lVar22 + 0x28) = lVar18;
                        }
                      }
                    }
                    puVar19 = *(undefined4 **)(lVar18 + 8);
                    if (puVar19 == (undefined4 *)0x0) {
                      puVar19 = &DAT_14c9485f0;
                    }
                    local_d8 = (code *)0x0;
                    uStack_d0 = 0;
                    FUN_1400b2348(puVar19,&local_d8);
                    if ((int)uStack_d0 == local_110) {
                      bVar26 = true;
                      if (1 < (int)uStack_d0) {
                        lVar25 = 0;
                        while( true ) {
                          uVar1 = *(ushort *)(local_d8 + lVar25);
                          uVar9 = (uint)uVar1;
                          uVar2 = *(ushort *)((longlong)local_118 + lVar25);
                          uVar21 = (uint)uVar2;
                          if (uVar1 != uVar2) {
                            if ((uVar2 | uVar1) < 0x80) {
                              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                              uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                              goto LAB_14431ac99;
                            }
                            iVar8 = uVar9 - uVar21;
                            goto LAB_14431acde;
                          }
                          if (uVar1 == 0) break;
LAB_14431ac99:
                          lVar25 = lVar25 + 2;
                        }
                        iVar8 = 0;
LAB_14431acde:
                        bVar26 = iVar8 == 0;
                      }
                    }
                    else {
                      bVar26 = local_110 + (int)uStack_d0 == 1;
                    }
                    if (local_d8 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    uVar6 = uStack_100;
                    if (bVar26) {
                      lVar25 = (longlong)(int)uStack_100;
                      uVar9 = (int)uStack_100 + 1;
                      uStack_100 = CONCAT44(uStack_100._4_4_,uVar9);
                      if (uStack_100._4_4_ < uVar9) {
                        FUN_148e3c462(&local_108,uVar6 & 0xffffffff);
                      }
                      FUN_148ca859a(local_108 + lVar25 * 0x110,lVar20);
                    }
                  }
                }
              }
              lVar20 = lVar20 + 0x110;
            } while (lVar20 != lVar10);
          }
          if (local_118 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_148ee77cc(&local_78,&local_108);
          FUN_1418d3311(local_108,uStack_100 & 0xffffffff);
          puVar23 = local_130;
          param_1 = local_148;
          puVar24 = local_150;
          if (local_108 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_c8 = (undefined ***)0x0;
          local_b8 = &PTR_LAB_14b9d8aa0;
          uStack_b0 = param_1;
          local_d8 = FUN_1443254ea;
          FUN_148eee172(local_78,uStack_70 & 0xffffffff);
          if (local_d8 != (code *)0x0) {
            pppuVar17 = local_c8;
            if (local_c8 == (undefined ***)0x0) {
              pppuVar17 = &local_b8;
            }
            (*(code *)(*pppuVar17)[2])();
          }
          if ((int)uStack_70 != 0) {
            ppcVar11 = (code **)(local_138 + local_140);
            if (&local_98 != ppcVar11) {
              uVar9 = *(uint *)(ppcVar11 + 1);
              pcVar4 = *ppcVar11;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
              if (uVar9 == 0 && uStack_90._4_4_ == 0) {
                uStack_90 = (ulonglong)uVar9;
              }
              else {
                FUN_1446dd670(&local_98,uVar9);
                if (uVar9 != 0) {
                  memcpy(local_98,pcVar4,(longlong)(int)uVar9 * 2);
                }
              }
              uVar9 = *(uint *)(ppcVar11 + 3);
              pcVar4 = ppcVar11[2];
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
              if (uVar9 == 0 && uStack_80._4_4_ == 0) {
                uStack_80 = (ulonglong)uVar9;
                puVar24 = local_150;
              }
              else {
                FUN_1446dd670(&local_88,uVar9);
                puVar24 = local_150;
                if (uVar9 != 0) {
                  memcpy(local_88,pcVar4,(longlong)(int)uVar9 * 2);
                }
              }
            }
            if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
              iVar8 = *(int *)(param_1 + 0x418);
              *(uint *)(param_1 + 0x418) = iVar8 + 1U;
              if (*(uint *)(param_1 + 0x41c) < iVar8 + 1U) {
                FUN_148eee542(local_158,iVar8);
              }
              lVar20 = *local_158;
              lVar10 = (longlong)iVar8 * 0x30;
              *(undefined8 *)(lVar20 + lVar10) = 0;
              *(code **)(lVar20 + lVar10) = local_98;
              local_98 = (code *)0x0;
              *(int *)(lVar20 + 8 + lVar10) = (int)uStack_90;
              *(uint *)(lVar20 + 0xc + lVar10) = uStack_90._4_4_;
              uStack_90 = 0;
              *(undefined8 *)(lVar20 + 0x10 + lVar10) = 0;
              *(void **)(lVar20 + 0x10 + lVar10) = local_88;
              local_88 = (void *)0x0;
              *(undefined4 *)(lVar20 + 0x18 + lVar10) = (undefined4)uStack_80;
              *(int *)(lVar20 + 0x1c + lVar10) = uStack_80._4_4_;
              uStack_80 = 0;
              *(undefined8 *)(lVar20 + 0x20 + lVar10) = 0;
              *(undefined8 *)(lVar20 + 0x20 + lVar10) = local_78;
              local_78 = 0;
              *(int *)(lVar20 + 0x28 + lVar10) = (int)uStack_70;
              *(undefined4 *)(lVar20 + 0x2c + lVar10) = uStack_70._4_4_;
              uStack_70 = 0;
            }
            else {
              FUN_14431c11e(local_158,&local_98);
            }
          }
        }
        FUN_148ca8444(&local_98);
        puVar23 = puVar23 + 1;
      } while (puVar23 != puVar24);
    }
    local_b8 = (undefined **)0x0;
    uStack_b0 = 0;
    local_c8 = (undefined ***)0x0;
    uStack_c0 = 0;
    local_d8 = (code *)0x0;
    uStack_d0 = 0;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    if ((longlong)*(int *)(param_1 + 0x448) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x440);
      lVar10 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
      do {
        if ((*(byte *)(lVar20 + 0xc0) & 0x81) == 1) {
          lVar25 = *(longlong *)(lVar20 + 0xd0);
          if (lVar25 == 0) {
            uVar12 = FUN_140b7bb2c();
            lVar25 = FUN_14477b664(uVar12);
            *(longlong *)(lVar20 + 0xd0) = lVar25;
          }
          plVar13 = (longlong *)(lVar20 + 200);
          lVar22 = *(longlong *)(lVar20 + 0xd8);
          if (lVar22 == 0) {
            if ((lVar25 != 0) && (*plVar13 != 0)) {
              plVar5 = *(longlong **)(lVar25 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                *(undefined8 *)(lVar20 + 0xd8) = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar22 = FUN_144aff482(uVar12,plVar13);
                *(longlong *)(lVar20 + 0xd8) = lVar22;
                if (lVar22 != 0) {
                  lVar25 = *(longlong *)(lVar20 + 0xd0);
                  goto LAB_14431b069;
                }
              }
            }
          }
          else {
LAB_14431b069:
            if (lVar25 == 0) {
              uVar12 = FUN_140b7bb2c();
              lVar25 = FUN_14477b664(uVar12);
              *(longlong *)(lVar20 + 0xd0) = lVar25;
              lVar22 = *(longlong *)(lVar20 + 0xd8);
              if (lVar22 == 0) {
                if (lVar25 == 0) {
                  lVar22 = 0;
                }
                else {
                  lVar22 = 0;
                  if (*plVar13 != 0) {
                    plVar5 = *(longlong **)(lVar25 + 0xb8);
                    if ((plVar5 == (longlong *)0x0) ||
                       (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                      lVar22 = 0;
                    }
                    else {
                      uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                      lVar22 = FUN_144aff482(uVar12,plVar13);
                    }
                    *(longlong *)(lVar20 + 0xd8) = lVar22;
                  }
                }
              }
            }
            lVar25 = *(longlong *)(lVar22 + 0x20);
            if (lVar25 == 0) {
              uVar12 = FUN_1418c9e66();
              lVar25 = FUN_14477b664(uVar12);
              *(longlong *)(lVar22 + 0x20) = lVar25;
            }
            if (*(longlong *)(lVar22 + 0x28) == 0) {
              if ((lVar25 != 0) && (*(longlong *)(lVar22 + 0x18) != 0)) {
                plVar13 = *(longlong **)(lVar25 + 0xb8);
                if ((plVar13 == (longlong *)0x0) ||
                   (cVar7 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar7 == '\0')) {
                  *(undefined8 *)(lVar22 + 0x28) = 0;
                }
                else {
                  uVar12 = (**(code **)(*plVar13 + 0x110))(plVar13);
                  lVar25 = FUN_144aff482(uVar12,(longlong *)(lVar22 + 0x18));
                  *(longlong *)(lVar22 + 0x28) = lVar25;
                  if (lVar25 != 0) goto LAB_14431b1d6;
                }
              }
              uVar6 = uStack_90;
              lVar25 = (longlong)(int)uStack_90;
              uVar9 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
              if (uStack_90._4_4_ < uVar9) {
                FUN_148e3c462(&local_98,uVar6 & 0xffffffff);
              }
              FUN_148ca859a(local_98 + lVar25 * 0x110,lVar20);
            }
          }
        }
LAB_14431b1d6:
        lVar20 = lVar20 + 0x110;
        lVar10 = lVar10 + -0x110;
      } while (lVar10 != 0);
    }
    FUN_148ee77cc(&local_b8,&local_98);
    FUN_1418d3311(local_98,uStack_90 & 0xffffffff);
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_b0 != 0) {
      FUN_1400b22c2(&local_98,"unknown");
      if (local_d8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_d8 = local_98;
      uStack_d0 = uStack_90;
      local_98 = (code *)0x0;
      uStack_90 = 0;
      local_88 = (void *)((ulonglong)local_88 & 0xffffffff00000000);
      uStack_80 = 0;
      local_78 = 0;
      FUN_1446ddda2(&local_98,"UnknownText",0);
      FUN_1410d1eba(&local_108,&local_98);
      pcVar4 = local_108;
      pcVar14 = local_108;
      if (*(code **)(*(longlong *)local_108 + 0x50) != FUN_144828418) {
        pcVar14 = (code *)(**(code **)(*(longlong *)local_108 + 0x50))(local_108);
      }
      FUN_1447a1fc0(pcVar14);
      pcVar14 = *(code **)(*(longlong *)pcVar4 + 0x28);
      if (pcVar14 == FUN_14482841c) {
        ppppuVar16 = (undefined ****)(*(longlong *)(pcVar4 + 0x28) + 8);
        if (*(longlong *)(pcVar4 + 0x28) == 0) {
          ppppuVar16 = (undefined ****)(pcVar4 + 0x18);
        }
      }
      else if (pcVar14 == (code *)&LAB_14010c34c) {
        ppppuVar16 = (undefined ****)(pcVar4 + 0x10);
      }
      else {
        ppppuVar16 = (undefined ****)(*pcVar14)(pcVar4);
      }
      if (&local_c8 != ppppuVar16) {
        uVar9 = *(uint *)(ppppuVar16 + 1);
        pppuVar17 = *ppppuVar16;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
        if (uVar9 == 0 && uStack_c0._4_4_ == 0) {
          uStack_c0 = (ulonglong)uVar9;
        }
        else {
          FUN_1446dd670(&local_c8);
          if (uVar9 != 0) {
            memcpy(local_c8,pppuVar17,(longlong)(int)uVar9 * 2);
          }
        }
      }
      if (pcVar4 != (code *)0x0) {
        (**(code **)(*(longlong *)pcVar4 + 0x10))(pcVar4);
      }
      if (uStack_80 != 0) {
        FUN_1400020a8();
      }
      if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
        iVar8 = *(int *)(param_1 + 0x418);
        uVar9 = iVar8 + 1;
        *(uint *)(param_1 + 0x418) = uVar9;
        if (*(uint *)(param_1 + 0x41c) < uVar9) {
          FUN_148eee542(local_158);
        }
        lVar20 = *local_158;
        lVar10 = (longlong)iVar8 * 0x30;
        *(undefined8 *)(lVar20 + lVar10) = 0;
        *(code **)(lVar20 + lVar10) = local_d8;
        local_d8 = (code *)0x0;
        *(int *)(lVar20 + 8 + lVar10) = (int)uStack_d0;
        *(undefined4 *)(lVar20 + 0xc + lVar10) = uStack_d0._4_4_;
        uStack_d0 = 0;
        *(undefined8 *)(lVar20 + 0x10 + lVar10) = 0;
        *(undefined ****)(lVar20 + 0x10 + lVar10) = local_c8;
        local_c8 = (undefined ***)0x0;
        *(undefined4 *)(lVar20 + 0x18 + lVar10) = (undefined4)uStack_c0;
        *(int *)(lVar20 + 0x1c + lVar10) = uStack_c0._4_4_;
        uStack_c0 = 0;
        *(undefined8 *)(lVar20 + 0x20 + lVar10) = 0;
        *(undefined ***)(lVar20 + 0x20 + lVar10) = local_b8;
        local_b8 = (undefined **)0x0;
        *(int *)(lVar20 + 0x28 + lVar10) = (int)uStack_b0;
        *(undefined4 *)(lVar20 + 0x2c + lVar10) = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      else {
        FUN_14431c11e(local_158,&local_d8);
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    FUN_1400b22c2(&local_108,"undiscovered");
    local_98 = local_108;
    uStack_90 = uStack_100;
    local_108 = (code *)0x0;
    uStack_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    FUN_1446ddda2(&local_108,"EchoLogCategory_Undiscovered_TypeTitle",0);
    FUN_1410d1eba(local_128,&local_108);
    plVar13 = local_128[0];
    if (*(code **)(*local_128[0] + 0x50) != FUN_144828418) {
      plVar13 = (longlong *)(**(code **)(*local_128[0] + 0x50))(local_128[0]);
    }
    FUN_1447a1fc0(plVar13);
    pcVar4 = *(code **)(*local_128[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar15 = (void **)(local_128[0][5] + 8);
      if (local_128[0][5] == 0) {
        ppvVar15 = (void **)(local_128[0] + 3);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar15 = (void **)(local_128[0] + 2);
    }
    else {
      ppvVar15 = (void **)(*pcVar4)(local_128[0]);
    }
    if (&local_88 != ppvVar15) {
      uVar9 = *(uint *)(ppvVar15 + 1);
      pvVar3 = *ppvVar15;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
      if ((longlong)(int)uVar9 == 0) {
        uStack_80 = (ulonglong)uVar9;
      }
      else {
        FUN_1446dd670(&local_88,uVar9,0);
        memcpy(local_88,pvVar3,(longlong)(int)uVar9 * 2);
      }
    }
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))(local_128[0]);
    }
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    local_108 = (code *)0x0;
    uStack_100 = 0;
    if ((longlong)*(int *)(param_1 + 0x448) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x440);
      lVar10 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
      do {
        uVar6 = uStack_100;
        if ((*(byte *)(lVar20 + 0xc0) & 1) == 0) {
          lVar25 = (longlong)(int)uStack_100;
          uVar9 = (int)uStack_100 + 1;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar9);
          if (uStack_100._4_4_ < uVar9) {
            FUN_148e3c462(&local_108,uVar6 & 0xffffffff);
          }
          FUN_148ca859a(local_108 + lVar25 * 0x110,lVar20);
        }
        lVar20 = lVar20 + 0x110;
        lVar10 = lVar10 + -0x110;
      } while (lVar10 != 0);
    }
    FUN_148ee77cc(&local_78,&local_108);
    FUN_1418d3311(local_108);
    if (local_108 != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_70 != 0) {
      if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
        iVar8 = *(int *)(param_1 + 0x418);
        uVar9 = iVar8 + 1;
        *(uint *)(param_1 + 0x418) = uVar9;
        if (*(uint *)(param_1 + 0x41c) < uVar9) {
          FUN_148eee542(local_158);
        }
        lVar20 = *local_158;
        lVar10 = (longlong)iVar8 * 0x30;
        *(undefined8 *)(lVar20 + lVar10) = 0;
        *(code **)(lVar20 + lVar10) = local_98;
        local_98 = (code *)0x0;
        *(int *)(lVar20 + 8 + lVar10) = (int)uStack_90;
        *(uint *)(lVar20 + 0xc + lVar10) = uStack_90._4_4_;
        uStack_90 = 0;
        *(undefined8 *)(lVar20 + 0x10 + lVar10) = 0;
        *(void **)(lVar20 + 0x10 + lVar10) = local_88;
        local_88 = (void *)0x0;
        *(undefined4 *)(lVar20 + 0x18 + lVar10) = (undefined4)uStack_80;
        *(int *)(lVar20 + 0x1c + lVar10) = uStack_80._4_4_;
        uStack_80 = 0;
        *(undefined8 *)(lVar20 + 0x20 + lVar10) = 0;
        *(undefined8 *)(lVar20 + 0x20 + lVar10) = local_78;
        local_78 = 0;
        *(int *)(lVar20 + 0x28 + lVar10) = (int)uStack_70;
        *(undefined4 *)(lVar20 + 0x2c + lVar10) = uStack_70._4_4_;
        uStack_70 = 0;
      }
      else {
        FUN_14431c11e(local_158,&local_98);
      }
    }
    FUN_148ca8444(&local_98);
    FUN_148ca8444(&local_d8);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431b740 FUN_14431b740 body=2524 status=ok
// SIG undefined FUN_14431b740(void)

void FUN_14431b740(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  void *pvVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  void **ppvVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_128 [32];
  longlong *local_108 [2];
  longlong *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)(param_1 + 0x410);
  iVar8 = *(int *)(param_1 + 0x41c);
  FUN_148ca88bf(*(undefined8 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x418));
  *(undefined4 *)(param_1 + 0x418) = 0;
  if ((iVar8 < 0) && (*(int *)(param_1 + 0x41c) != 0)) {
    FUN_148eee102(plVar1,0);
  }
  FUN_1400b22c2(&local_f8,"region");
  iVar8 = FUN_145c4ace0(param_1 + 0xb0,&local_f8);
  if (iVar8 < 0) {
    bVar5 = false;
  }
  else {
    bVar5 = iVar8 < *(int *)(param_1 + 0x110);
  }
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (bVar5) {
    FUN_1400b22c2(&local_f8,"region");
    iVar8 = FUN_145c4ace0(param_1 + 0xb0,&local_f8);
    lVar13 = (longlong)iVar8 * 0x90 + *(longlong *)(param_1 + 0x108);
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar16 = (longlong)*(int *)(lVar13 + 0x78);
    if (lVar16 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x70);
      lVar14 = 0;
      do {
        uVar9 = (uint)*(undefined8 *)(lVar13 + lVar14);
        if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(param_1 + 0x110))) {
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = (void *)0x0;
          uStack_e0 = 0;
          local_f8 = (longlong *)0x0;
          uStack_f0 = 0;
          FUN_14431c1c6(param_1,(ulonglong)(uVar9 & 0x7fffffff) * 0x90 +
                                *(longlong *)(param_1 + 0x108),&local_f8);
          FUN_148ca8444(&local_f8);
        }
        lVar14 = lVar14 + 8;
      } while (lVar16 * 8 != lVar14);
    }
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    if ((longlong)*(int *)(param_1 + 0x448) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x440);
      lVar16 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
      do {
        if ((*(byte *)(lVar13 + 0xc0) & 0x81) == 1) {
          lVar14 = *(longlong *)(lVar13 + 0xd0);
          if (lVar14 == 0) {
            uVar10 = FUN_140b7bb2c();
            lVar14 = FUN_14477b664(uVar10);
            *(longlong *)(lVar13 + 0xd0) = lVar14;
          }
          plVar12 = (longlong *)(lVar13 + 200);
          lVar15 = *(longlong *)(lVar13 + 0xd8);
          if (lVar15 == 0) {
            if ((lVar14 != 0) && (*plVar12 != 0)) {
              plVar3 = *(longlong **)(lVar14 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar7 == '\0')) {
                *(undefined8 *)(lVar13 + 0xd8) = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar15 = FUN_144aff482(uVar10,plVar12);
                *(longlong *)(lVar13 + 0xd8) = lVar15;
                if (lVar15 != 0) {
                  lVar14 = *(longlong *)(lVar13 + 0xd0);
                  goto LAB_14431ba53;
                }
              }
            }
          }
          else {
LAB_14431ba53:
            if (lVar14 == 0) {
              uVar10 = FUN_140b7bb2c();
              lVar14 = FUN_14477b664(uVar10);
              *(longlong *)(lVar13 + 0xd0) = lVar14;
              lVar15 = *(longlong *)(lVar13 + 0xd8);
              if (lVar15 == 0) {
                if (lVar14 == 0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = 0;
                  if (*plVar12 != 0) {
                    plVar3 = *(longlong **)(lVar14 + 0xb8);
                    if ((plVar3 == (longlong *)0x0) ||
                       (cVar7 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar7 == '\0')) {
                      lVar15 = 0;
                    }
                    else {
                      uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                      lVar15 = FUN_144aff482(uVar10,plVar12);
                    }
                    *(longlong *)(lVar13 + 0xd8) = lVar15;
                  }
                }
              }
            }
            lVar14 = *(longlong *)(lVar15 + 0xa8);
            if (lVar14 == 0) {
              uVar10 = FUN_14086ad12();
              lVar14 = FUN_14477b664(uVar10);
              *(longlong *)(lVar15 + 0xa8) = lVar14;
            }
            if (*(longlong *)(lVar15 + 0xb0) == 0) {
              if ((lVar14 != 0) && (*(longlong *)(lVar15 + 0xa0) != 0)) {
                plVar12 = *(longlong **)(lVar14 + 0xb8);
                if ((plVar12 == (longlong *)0x0) ||
                   (cVar7 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar7 == '\0')) {
                  *(undefined8 *)(lVar15 + 0xb0) = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar12 + 0x110))(plVar12);
                  lVar14 = FUN_144aff482(uVar10,(longlong *)(lVar15 + 0xa0));
                  *(longlong *)(lVar15 + 0xb0) = lVar14;
                  if (lVar14 != 0) goto LAB_14431bbd4;
                }
              }
              uVar6 = uStack_90;
              lVar14 = (longlong)(int)uStack_90;
              uVar9 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
              if (uStack_90._4_4_ < uVar9) {
                FUN_148e3c462(&local_98,uVar6 & 0xffffffff);
              }
              FUN_148ca859a(local_98 + lVar14 * 0x22,lVar13);
            }
          }
        }
LAB_14431bbd4:
        lVar13 = lVar13 + 0x110;
        lVar16 = lVar16 + -0x110;
      } while (lVar16 != 0);
    }
    FUN_148ee77cc(&local_d8,&local_98);
    FUN_1418d3311(local_98,uStack_90 & 0xffffffff);
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_d0 != 0) {
      FUN_1400b22c2(&local_98,"unknown");
      if (local_f8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_f8 = local_98;
      uStack_f0 = uStack_90;
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_88 = (void *)((ulonglong)local_88._4_4_ << 0x20);
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_1446ddda2(&local_98,"UnknownText",0);
      FUN_1410d1eba(&local_c8,&local_98);
      plVar12 = local_c8;
      if (*(code **)(*local_c8 + 0x50) != FUN_144828418) {
        plVar12 = (longlong *)(**(code **)(*local_c8 + 0x50))(local_c8);
      }
      FUN_1447a1fc0(plVar12);
      pcVar2 = *(code **)(*local_c8 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        ppvVar11 = (void **)(local_c8[5] + 8);
        if (local_c8[5] == 0) {
          ppvVar11 = (void **)(local_c8 + 3);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        ppvVar11 = (void **)(local_c8 + 2);
      }
      else {
        ppvVar11 = (void **)(*pcVar2)(local_c8);
      }
      if (&local_e8 != ppvVar11) {
        uVar9 = *(uint *)(ppvVar11 + 1);
        pvVar4 = *ppvVar11;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
        if (uVar9 == 0 && uStack_e0._4_4_ == 0) {
          uStack_e0 = (ulonglong)uVar9;
        }
        else {
          FUN_1446dd670(&local_e8);
          if (uVar9 != 0) {
            memcpy(local_e8,pvVar4,(longlong)(int)uVar9 * 2);
          }
        }
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
      }
      if (uStack_80 != 0) {
        FUN_1400020a8();
      }
      if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
        iVar8 = *(int *)(param_1 + 0x418);
        uVar9 = iVar8 + 1;
        *(uint *)(param_1 + 0x418) = uVar9;
        if (*(uint *)(param_1 + 0x41c) < uVar9) {
          FUN_148eee542(plVar1);
        }
        lVar13 = *plVar1;
        lVar16 = (longlong)iVar8 * 0x30;
        *(undefined8 *)(lVar13 + lVar16) = 0;
        *(longlong **)(lVar13 + lVar16) = local_f8;
        local_f8 = (longlong *)0x0;
        *(undefined4 *)(lVar13 + 8 + lVar16) = (undefined4)uStack_f0;
        *(undefined4 *)(lVar13 + 0xc + lVar16) = uStack_f0._4_4_;
        uStack_f0 = 0;
        *(undefined8 *)(lVar13 + 0x10 + lVar16) = 0;
        *(void **)(lVar13 + 0x10 + lVar16) = local_e8;
        local_e8 = (void *)0x0;
        *(undefined4 *)(lVar13 + 0x18 + lVar16) = (undefined4)uStack_e0;
        *(int *)(lVar13 + 0x1c + lVar16) = uStack_e0._4_4_;
        uStack_e0 = 0;
        *(undefined8 *)(lVar13 + 0x20 + lVar16) = 0;
        *(undefined8 *)(lVar13 + 0x20 + lVar16) = local_d8;
        local_d8 = 0;
        *(int *)(lVar13 + 0x28 + lVar16) = (int)uStack_d0;
        *(undefined4 *)(lVar13 + 0x2c + lVar16) = uStack_d0._4_4_;
        uStack_d0 = 0;
      }
      else {
        FUN_14431c11e(plVar1,&local_f8);
      }
    }
    uStack_78 = 0;
    uStack_70 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    if ((longlong)*(int *)(param_1 + 0x448) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x440);
      lVar16 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
      do {
        uVar6 = uStack_c0;
        if ((*(byte *)(lVar13 + 0xc0) & 1) == 0) {
          lVar14 = (longlong)(int)uStack_c0;
          uVar9 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
          if (uStack_c0._4_4_ < uVar9) {
            FUN_148e3c462(&local_c8,uVar6 & 0xffffffff);
          }
          FUN_148ca859a(local_c8 + lVar14 * 0x22,lVar13);
        }
        lVar13 = lVar13 + 0x110;
        lVar16 = lVar16 + -0x110;
      } while (lVar16 != 0);
    }
    FUN_148ee77cc(&uStack_78,&local_c8);
    FUN_1418d3311(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_70 != 0) {
      FUN_1400b22c2(&local_c8,"undiscovered");
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_98 = local_c8;
      uStack_90 = uStack_c0;
      local_c8 = (longlong *)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      FUN_1446ddda2(&local_c8,"EchoLogCategory_Undiscovered_TypeTitle",0);
      FUN_1410d1eba(local_108,&local_c8);
      plVar12 = local_108[0];
      if (*(code **)(*local_108[0] + 0x50) != FUN_144828418) {
        plVar12 = (longlong *)(**(code **)(*local_108[0] + 0x50))(local_108[0]);
      }
      FUN_1447a1fc0(plVar12);
      pcVar2 = *(code **)(*local_108[0] + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar12 = (longlong *)(local_108[0][5] + 8);
        if (local_108[0][5] == 0) {
          plVar12 = local_108[0] + 3;
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar12 = local_108[0] + 2;
      }
      else {
        plVar12 = (longlong *)(*pcVar2)(local_108[0]);
      }
      if (&local_88 != plVar12) {
        uVar9 = *(uint *)(plVar12 + 1);
        pvVar4 = (void *)*plVar12;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
        if (uVar9 == 0 && uStack_80._4_4_ == 0) {
          uStack_80 = (ulonglong)uVar9;
        }
        else {
          FUN_1446dd670(&local_88);
          if (uVar9 != 0) {
            memcpy(local_88,pvVar4,(longlong)(int)uVar9 * 2);
          }
        }
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))(local_108[0]);
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
        iVar8 = *(int *)(param_1 + 0x418);
        uVar9 = iVar8 + 1;
        *(uint *)(param_1 + 0x418) = uVar9;
        if (*(uint *)(param_1 + 0x41c) < uVar9) {
          FUN_148eee542(plVar1);
        }
        lVar13 = *plVar1;
        lVar16 = (longlong)iVar8 * 0x30;
        *(undefined8 *)(lVar13 + lVar16) = 0;
        *(longlong **)(lVar13 + lVar16) = local_98;
        local_98 = (longlong *)0x0;
        *(int *)(lVar13 + 8 + lVar16) = (int)uStack_90;
        *(uint *)(lVar13 + 0xc + lVar16) = uStack_90._4_4_;
        uStack_90 = 0;
        *(undefined8 *)(lVar13 + 0x10 + lVar16) = 0;
        *(void **)(lVar13 + 0x10 + lVar16) = local_88;
        local_88 = (void *)0x0;
        *(undefined4 *)(lVar13 + 0x18 + lVar16) = (undefined4)uStack_80;
        *(int *)(lVar13 + 0x1c + lVar16) = uStack_80._4_4_;
        uStack_80 = 0;
        *(undefined8 *)(lVar13 + 0x20 + lVar16) = 0;
        *(undefined8 *)(lVar13 + 0x20 + lVar16) = uStack_78;
        uStack_78 = 0;
        *(int *)(lVar13 + 0x28 + lVar16) = (int)uStack_70;
        *(undefined4 *)(lVar13 + 0x2c + lVar16) = uStack_70._4_4_;
        uStack_70 = 0;
      }
      else {
        FUN_14431c11e(plVar1,&local_98);
      }
    }
    FUN_148ca8444(&local_98);
    FUN_148ca8444(&local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431c11e FUN_14431c11e body=167 status=ok
// SIG undefined FUN_14431c11e(void)

void FUN_14431c11e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_148eee542(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 0x30),(void *)*param_1,(ulonglong)uVar1 * 0x30);
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  return;
}



// FUNCTION 14431c1c6 FUN_14431c1c6 body=1952 status=ok
// SIG undefined FUN_14431c1c6(void)

void FUN_14431c1c6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != (undefined8 *)0x0) {
    lVar12 = (longlong)*(int *)(param_2 + 0xf);
    if (lVar12 == 0) {
      local_c8 = (void *)0x0;
      local_c0 = *(int *)(param_2 + 1);
      lVar12 = (longlong)local_c0;
      pvVar5 = (void *)*param_2;
      local_d0 = param_2;
      if (lVar12 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_c0,0);
        memcpy(local_c8,pvVar5,lVar12 * 2);
      }
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      if ((longlong)*(int *)(param_1 + 0x448) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x440);
        lVar18 = (longlong)*(int *)(param_1 + 0x448) * 0x110 + lVar12;
        do {
          if ((*(byte *)(lVar12 + 0xc0) & 0x81) == 1) {
            lVar14 = *(longlong *)(lVar12 + 0xd0);
            if (lVar14 == 0) {
              uVar13 = FUN_140b7bb2c();
              lVar14 = FUN_14477b664(uVar13);
              *(longlong *)(lVar12 + 0xd0) = lVar14;
            }
            plVar1 = (longlong *)(lVar12 + 200);
            lVar20 = *(longlong *)(lVar12 + 0xd8);
            if (lVar20 == 0) {
              if ((lVar14 != 0) && (*plVar1 != 0)) {
                plVar6 = *(longlong **)(lVar14 + 0xb8);
                if ((plVar6 == (longlong *)0x0) ||
                   (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
                  *(undefined8 *)(lVar12 + 0xd8) = 0;
                }
                else {
                  uVar13 = (**(code **)(*plVar6 + 0x110))(plVar6);
                  lVar20 = FUN_144aff482(uVar13,plVar1);
                  *(longlong *)(lVar12 + 0xd8) = lVar20;
                  if (lVar20 != 0) {
                    lVar14 = *(longlong *)(lVar12 + 0xd0);
                    goto LAB_14431c459;
                  }
                }
              }
            }
            else {
LAB_14431c459:
              if (lVar14 == 0) {
                uVar13 = FUN_140b7bb2c();
                lVar14 = FUN_14477b664(uVar13);
                *(longlong *)(lVar12 + 0xd0) = lVar14;
                lVar20 = *(longlong *)(lVar12 + 0xd8);
                if (lVar20 == 0) {
                  if (lVar14 == 0) {
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = 0;
                    if (*plVar1 != 0) {
                      plVar6 = *(longlong **)(lVar14 + 0xb8);
                      if ((plVar6 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
                        lVar20 = 0;
                      }
                      else {
                        uVar13 = (**(code **)(*plVar6 + 0x110))(plVar6);
                        lVar20 = FUN_144aff482(uVar13,plVar1);
                      }
                      *(longlong *)(lVar12 + 0xd8) = lVar20;
                    }
                  }
                }
              }
              lVar14 = *(longlong *)(lVar20 + 0xa8);
              if (lVar14 == 0) {
                uVar13 = FUN_14086ad12();
                lVar14 = FUN_14477b664(uVar13);
                *(longlong *)(lVar20 + 0xa8) = lVar14;
              }
              if (*(longlong *)(lVar20 + 0xb0) == 0) {
                if ((lVar14 != 0) && (*(longlong *)(lVar20 + 0xa0) != 0)) {
                  plVar6 = *(longlong **)(lVar14 + 0xb8);
                  if ((plVar6 == (longlong *)0x0) ||
                     (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
                    *(undefined8 *)(lVar20 + 0xb0) = 0;
                  }
                  else {
                    uVar13 = (**(code **)(*plVar6 + 0x110))(plVar6);
                    lVar14 = FUN_144aff482(uVar13,(longlong *)(lVar20 + 0xa0));
                    *(longlong *)(lVar20 + 0xb0) = lVar14;
                    if (lVar14 != 0) goto LAB_14431c586;
                  }
                }
              }
              else {
LAB_14431c586:
                lVar14 = *(longlong *)(lVar12 + 0xd0);
                if (lVar14 == 0) {
                  uVar13 = FUN_140b7bb2c();
                  lVar14 = FUN_14477b664(uVar13);
                  *(longlong *)(lVar12 + 0xd0) = lVar14;
                }
                lVar20 = *(longlong *)(lVar12 + 0xd8);
                if (lVar20 == 0) {
                  if (lVar14 == 0) {
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = 0;
                    if (*plVar1 != 0) {
                      plVar6 = *(longlong **)(lVar14 + 0xb8);
                      if ((plVar6 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
                        lVar20 = 0;
                      }
                      else {
                        uVar13 = (**(code **)(*plVar6 + 0x110))(plVar6);
                        lVar20 = FUN_144aff482(uVar13,plVar1);
                      }
                      *(longlong *)(lVar12 + 0xd8) = lVar20;
                    }
                  }
                }
                lVar14 = *(longlong *)(lVar20 + 0xa8);
                if (lVar14 == 0) {
                  uVar13 = FUN_14086ad12();
                  lVar14 = FUN_14477b664(uVar13);
                  *(longlong *)(lVar20 + 0xa8) = lVar14;
                }
                lVar16 = *(longlong *)(lVar20 + 0xb0);
                if (lVar16 == 0) {
                  if (lVar14 == 0) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = 0;
                    if (*(longlong *)(lVar20 + 0xa0) != 0) {
                      plVar1 = *(longlong **)(lVar14 + 0xb8);
                      if ((plVar1 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar1 + 0x108))(), cVar9 == '\0')) {
                        lVar16 = 0;
                      }
                      else {
                        uVar13 = (**(code **)(*plVar1 + 0x110))(plVar1);
                        lVar16 = FUN_144aff482(uVar13,(longlong *)(lVar20 + 0xa0));
                      }
                      *(longlong *)(lVar20 + 0xb0) = lVar16;
                    }
                  }
                }
                puVar17 = *(undefined4 **)(lVar16 + 8);
                if (puVar17 == (undefined4 *)0x0) {
                  puVar17 = &DAT_14c9485f0;
                }
                local_a8 = (code *)0x0;
                uStack_a0 = 0;
                FUN_1400b2348(puVar17,&local_a8);
                if ((int)uStack_a0 == local_c0) {
                  bVar22 = true;
                  if (1 < (int)uStack_a0) {
                    lVar14 = 0;
                    while( true ) {
                      uVar3 = *(ushort *)(local_a8 + lVar14);
                      uVar11 = (uint)uVar3;
                      uVar4 = *(ushort *)((longlong)local_c8 + lVar14);
                      uVar21 = (uint)uVar4;
                      if (uVar3 != uVar4) {
                        if ((uVar4 | uVar3) < 0x80) {
                          uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                          uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                          goto LAB_14431c769;
                        }
                        iVar10 = uVar11 - uVar21;
                        goto LAB_14431c7ab;
                      }
                      if (uVar3 == 0) break;
LAB_14431c769:
                      lVar14 = lVar14 + 2;
                    }
                    iVar10 = 0;
LAB_14431c7ab:
                    bVar22 = iVar10 == 0;
                  }
                }
                else {
                  bVar22 = local_c0 + (int)uStack_a0 == 1;
                }
                if (local_a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                uVar8 = uStack_b0;
                if (bVar22) {
                  lVar14 = (longlong)(int)(uint)uStack_b0;
                  uVar11 = (uint)uStack_b0 + 1;
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
                  if (uStack_b0._4_4_ < uVar11) {
                    FUN_148e3c462(&local_b8,uVar8 & 0xffffffff);
                  }
                  FUN_148ca859a((void *)(lVar14 * 0x110 + (longlong)local_b8),lVar12);
                }
              }
            }
          }
          lVar12 = lVar12 + 0x110;
        } while (lVar12 != lVar18);
      }
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar12 = (longlong)(int)(uint)uStack_b0;
      if (lVar12 != 0) {
        iVar10 = *(int *)(param_3 + 5);
        *(uint *)(param_3 + 5) = iVar10 + (uint)uStack_b0;
        if ((uint)(*(int *)((longlong)param_3 + 0x2c) - iVar10) < (uint)uStack_b0) {
          FUN_148e3c462(param_3 + 4,iVar10);
        }
        memmove((void *)((longlong)iVar10 * 0x110 + param_3[4]),local_b8,lVar12 * 0x110);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
      }
      FUN_1418d3311(local_b8,0);
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_LAB_14b9d8a80;
      local_a8 = FUN_14432436e;
      local_80 = param_1;
      FUN_148eee172(param_3[4],*(undefined4 *)(param_3 + 5),&local_a8);
      puVar7 = local_d0;
      if (local_a8 != (code *)0x0) {
        pppuVar15 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar15 = &local_88;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      if (*(int *)(param_3 + 5) != 0) {
        if (param_3 != puVar7) {
          iVar10 = *(int *)(puVar7 + 3);
          pvVar5 = (void *)puVar7[2];
          *(int *)(param_3 + 3) = iVar10;
          if (iVar10 == 0 && *(int *)((longlong)param_3 + 0x1c) == 0) {
            *(undefined4 *)((longlong)param_3 + 0x1c) = 0;
          }
          else {
            FUN_1446dd670(param_3 + 2);
            if (iVar10 != 0) {
              memcpy((void *)param_3[2],pvVar5,(longlong)iVar10 * 2);
            }
          }
          iVar10 = *(int *)(puVar7 + 1);
          pvVar5 = (void *)*puVar7;
          *(int *)(param_3 + 1) = iVar10;
          if (iVar10 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_3);
            if (iVar10 != 0) {
              memcpy((void *)*param_3,pvVar5,(longlong)iVar10 * 2);
            }
          }
        }
        plVar1 = (longlong *)(param_1 + 0x410);
        if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
          iVar10 = *(int *)(param_1 + 0x418);
          uVar11 = iVar10 + 1;
          *(uint *)(param_1 + 0x418) = uVar11;
          if (*(uint *)(param_1 + 0x41c) < uVar11) {
            FUN_148eee542(plVar1);
          }
          lVar12 = *plVar1;
          lVar18 = (longlong)iVar10 * 0x30;
          *(undefined8 *)(lVar12 + lVar18) = 0;
          *(undefined8 *)(lVar12 + lVar18) = *param_3;
          *param_3 = 0;
          *(undefined4 *)(lVar12 + 8 + lVar18) = *(undefined4 *)(param_3 + 1);
          *(undefined4 *)(lVar12 + 0xc + lVar18) = *(undefined4 *)((longlong)param_3 + 0xc);
          param_3[1] = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar18) = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar18) = param_3[2];
          param_3[2] = 0;
          *(undefined4 *)(lVar12 + 0x18 + lVar18) = *(undefined4 *)(param_3 + 3);
          *(undefined4 *)(lVar12 + 0x1c + lVar18) = *(undefined4 *)((longlong)param_3 + 0x1c);
          param_3[3] = 0;
          *(undefined8 *)(lVar12 + 0x20 + lVar18) = 0;
          *(undefined8 *)(lVar12 + 0x20 + lVar18) = param_3[4];
          param_3[4] = 0;
          *(undefined4 *)(lVar12 + 0x28 + lVar18) = *(undefined4 *)(param_3 + 5);
          *(undefined4 *)(lVar12 + 0x2c + lVar18) = *(undefined4 *)((longlong)param_3 + 0x2c);
          param_3[5] = 0;
        }
        else {
          FUN_14431c11e(plVar1,param_3);
        }
      }
      lVar12 = (longlong)*(int *)(puVar7 + 0xf);
      if (lVar12 == 0) goto LAB_14431c235;
      piVar19 = (int *)puVar7[0xe];
    }
    else {
      piVar19 = (int *)param_2[0xe];
    }
    piVar2 = piVar19 + lVar12 * 2;
    do {
      FUN_14431c1c6(param_1,(longlong)*piVar19 * 0x90 + *(longlong *)(param_1 + 0x108),param_3);
      piVar19 = piVar19 + 2;
    } while (piVar19 != piVar2);
  }
LAB_14431c235:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431c968 FUN_14431c968 body=165 status=ok
// SIG undefined FUN_14431c968(void)

void FUN_14431c968(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) ^ 1;
  *(byte *)(param_1 + 0x331) = *(byte *)(param_1 + 0x331) | 2;
  plVar2 = (longlong *)FUN_145917192();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
  *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
  FUN_14135388e(param_1,local_38);
  lVar3 = FUN_145917130(lVar1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x10) = *(byte *)(param_1 + 0x330) & 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14431ca0e FUN_14431ca0e body=69 status=ok
// SIG undefined FUN_14431ca0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431ca0e(void)

{
  _DAT_14cbe3c88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3c90,1);
  return;
}



// FUNCTION 14431ca53 FUN_14431ca53 body=69 status=ok
// SIG undefined FUN_14431ca53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431ca53(void)

{
  _DAT_14cbe3ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431ca95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe3ca8,1);
  return;
}



// FUNCTION 14431cc1f FUN_14431cc1f body=69 status=ok
// SIG undefined FUN_14431cc1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431cc1f(void)

{
  _DAT_14cbe4060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431cc61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4068,1);
  return;
}



// FUNCTION 14431cc64 FUN_14431cc64 body=966 status=ok
// SIG undefined FUN_14431cc64(void)

/* WARNING: Removing unreachable block (ram,0x00014431cea2) */
/* WARNING: Removing unreachable block (ram,0x00014431cd37) */
/* WARNING: Removing unreachable block (ram,0x00014431cdf3) */
/* WARNING: Removing unreachable block (ram,0x00014431cf51) */
/* WARNING: Removing unreachable block (ram,0x00014431ceb1) */
/* WARNING: Removing unreachable block (ram,0x00014431cd46) */
/* WARNING: Removing unreachable block (ram,0x00014431ce02) */
/* WARNING: Removing unreachable block (ram,0x00014431cf60) */

void FUN_14431cc64(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  char local_59;
  code *local_58;
  undefined8 local_50;
  undefined ***local_48;
  undefined8 local_40;
  undefined **local_38;
  char *local_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_59 = '\0';
  local_78 = 0;
  uStack_70 = 0;
  if ((*(byte *)(param_1 + 0x330) & 0x10) != 0) {
    FUN_146637162(&local_58,&DAT_14cbe2ec8,&DAT_14cbe2fd8);
    uVar1 = uStack_70;
    lVar5 = (longlong)(int)uStack_70;
    uVar2 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
    if (uStack_70._4_4_ < uVar2) {
      FUN_146638242(&local_78,uVar1 & 0xffffffff);
    }
    lVar5 = lVar5 * 0x20;
    *(undefined8 *)(local_78 + lVar5) = 0;
    *(code **)(local_78 + lVar5) = local_58;
    *(undefined4 *)(local_78 + 8 + lVar5) = (undefined4)local_50;
    *(undefined4 *)(local_78 + 0xc + lVar5) = local_50._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar5) = 0;
    *(undefined ****)(local_78 + 0x10 + lVar5) = local_48;
    *(undefined4 *)(local_78 + 0x18 + lVar5) = (undefined4)local_40;
    *(undefined4 *)(local_78 + 0x1c + lVar5) = local_40._4_4_;
    local_40 = 0;
    local_48 = (undefined ***)0x0;
    local_50 = 0;
    local_58 = (code *)0x0;
  }
  if (1 < *(int *)(param_1 + 0x4d8)) {
    FUN_146637162(&local_58,&DAT_14cbe2fc8,&DAT_14cbe30b8);
    uVar1 = uStack_70;
    lVar5 = (longlong)(int)uStack_70;
    uVar2 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
    if (uStack_70._4_4_ < uVar2) {
      FUN_146638242(&local_78,uVar1 & 0xffffffff);
    }
    lVar5 = lVar5 * 0x20;
    *(undefined8 *)(local_78 + lVar5) = 0;
    *(code **)(local_78 + lVar5) = local_58;
    *(undefined4 *)(local_78 + 8 + lVar5) = (undefined4)local_50;
    *(undefined4 *)(local_78 + 0xc + lVar5) = local_50._4_4_;
    *(undefined8 *)(local_78 + 0x10 + lVar5) = 0;
    *(undefined ****)(local_78 + 0x10 + lVar5) = local_48;
    *(undefined4 *)(local_78 + 0x18 + lVar5) = (undefined4)local_40;
    *(undefined4 *)(local_78 + 0x1c + lVar5) = local_40._4_4_;
    local_40 = 0;
    local_48 = (undefined ***)0x0;
    local_50 = 0;
    local_58 = (code *)0x0;
  }
  FUN_146637162(&local_58,&DAT_14cbe2f98,&DAT_14cbe30a8);
  uVar1 = uStack_70;
  lVar5 = (longlong)(int)uStack_70;
  uVar2 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
  if (uStack_70._4_4_ < uVar2) {
    FUN_146638242(&local_78,uVar1 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined8 *)(local_78 + lVar5) = 0;
  *(code **)(local_78 + lVar5) = local_58;
  *(undefined4 *)(local_78 + 8 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(local_78 + 0xc + lVar5) = local_50._4_4_;
  *(undefined8 *)(local_78 + 0x10 + lVar5) = 0;
  *(undefined ****)(local_78 + 0x10 + lVar5) = local_48;
  *(undefined4 *)(local_78 + 0x18 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(local_78 + 0x1c + lVar5) = local_40._4_4_;
  local_40 = 0;
  local_48 = (undefined ***)0x0;
  local_50 = 0;
  local_58 = (code *)0x0;
  FUN_146637162(&local_58,&DAT_14cbe2f08,&DAT_14cbe3078);
  uVar1 = uStack_70;
  lVar5 = (longlong)(int)uStack_70;
  uVar2 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
  if (uStack_70._4_4_ < uVar2) {
    FUN_146638242(&local_78,uVar1 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined8 *)(local_78 + lVar5) = 0;
  *(code **)(local_78 + lVar5) = local_58;
  *(undefined4 *)(local_78 + 8 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(local_78 + 0xc + lVar5) = local_50._4_4_;
  *(undefined8 *)(local_78 + 0x10 + lVar5) = 0;
  *(undefined ****)(local_78 + 0x10 + lVar5) = local_48;
  *(undefined4 *)(local_78 + 0x18 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(local_78 + 0x1c + lVar5) = local_40._4_4_;
  local_40 = 0;
  local_48 = (undefined ***)0x0;
  local_50 = 0;
  local_58 = (code *)0x0;
  puVar3 = (undefined8 *)FUN_14135056a(param_1);
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b9d8ae0;
  local_30 = &local_59;
  local_28 = &local_78;
  local_58 = FUN_1443266d6;
  FUN_148e57a3a(*puVar3,&local_58);
  if (local_58 != (code *)0x0) {
    pppuVar4 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar4 = &local_38;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if (local_59 == '\x01') {
    FUN_148c56694(param_1 + 0x2b0,&local_78);
    FUN_144315e9e(param_1);
  }
  FUN_145a5bc9c(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14431d02c FUN_14431d02c body=694 status=ok
// SIG undefined FUN_14431d02c(void)

ulonglong FUN_14431d02c(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  longlong local_178 [2];
  undefined2 *local_168;
  undefined2 *local_160;
  ulonglong *local_158;
  char local_150;
  undefined2 local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar8 = (longlong *)FUN_148ee662c();
  lVar9 = *plVar8;
  SRWLock = (PSRWLOCK)(lVar9 + 0x88);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0x52c);
  iVar2 = *(int *)(lVar9 + 0x80);
  if (iVar1 != iVar2) {
    *(int *)(param_1 + 0x52c) = iVar2;
    if (*(int *)(param_1 + 0x520) != *(int *)(lVar9 + 0x78)) {
      puVar10 = (undefined8 *)(param_1 + 0x510);
      if (puVar10 != (undefined8 *)(lVar9 + 0x68)) {
        iVar7 = *(int *)(lVar9 + 0x70);
        pvVar4 = *(void **)(lVar9 + 0x68);
        *(int *)(param_1 + 0x518) = iVar7;
        if (iVar7 == 0 && *(int *)(param_1 + 0x51c) == 0) {
          *(undefined4 *)(param_1 + 0x51c) = 0;
        }
        else {
          FUN_1446dd670(puVar10,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar10,pvVar4,(longlong)iVar7 * 2);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(lVar9 + 0x78);
      *(uint *)(param_1 + 0x4c) =
           (*(uint *)(param_1 + 0x4c) & 0xfffffffb) + (uint)(1 < *(int *)(param_1 + 0x518)) * 4;
      puVar5 = *(ushort **)(param_1 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
      }
    }
    if ((*(int *)(param_1 + 0x4f0) == 0) || (*(int *)(param_1 + 0x4f0) != *(int *)(lVar9 + 0x10))) {
      *(int *)(param_1 + 0x4f0) = *(int *)(lVar9 + 0x10);
      FUN_148cab796(param_1 + 0x4e0,lVar9);
      local_188 = param_1 + 0x2c0;
      FUN_14579b5c4();
      if ((longlong)*(int *)(param_1 + 0x4e8) != 0) {
        lVar9 = (longlong)*(int *)(param_1 + 0x4e8) * 0xe8;
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x4e0) + 0x40);
        do {
          local_150 = '\0';
          local_168 = local_148;
          local_158 = &local_48;
          local_180 = lVar9;
          local_160 = local_168;
          FUN_148ee9110(&local_168);
          pvVar4 = (void *)*puVar10;
          uVar3 = *(uint *)(puVar10 + 1);
          iVar7 = uVar3 - 1;
          if (uVar3 == 0) {
            iVar7 = 0;
          }
          lVar9 = (longlong)iVar7;
          if (local_158 <= local_160 + lVar9) {
            FUN_140213274(&local_168,lVar9);
          }
          puVar6 = local_160;
          if (1 < uVar3) {
            memcpy(local_160,pvVar4,lVar9 * 2);
            local_160 = puVar6 + lVar9;
          }
          *local_160 = 0;
          FUN_140056680(local_178,local_168);
          FUN_140d07d58(local_188,puVar10,local_178);
          if (local_178[0] != 0) {
            FUN_1400020a8();
          }
          lVar9 = local_180;
          if (local_150 == '\x01') {
            FUN_1400020a8(local_168);
          }
          puVar10 = puVar10 + 0x1d;
          lVar9 = lVar9 + -0xe8;
        } while (lVar9 != 0);
        lVar9 = 0;
      }
      puVar5 = *(ushort **)(param_1 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
      }
    }
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x20;
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar9 >> 8),iVar1 != iVar2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14431d2e4 FUN_14431d2e4 body=354 status=ok
// SIG undefined FUN_14431d2e4(void)

ulonglong FUN_14431d2e4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar7 = (longlong *)FUN_148ee662c();
  lVar2 = *plVar7;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x88));
  if (*(int *)(param_1 + 0xb88) == *(int *)(lVar2 + 0x80)) {
LAB_14431d3b2:
    uVar10 = 0;
  }
  else {
    *(int *)(param_1 + 0xb88) = *(int *)(lVar2 + 0x80);
    iVar1 = *(int *)(lVar2 + 0x48);
    if (iVar1 == *(int *)(param_1 + 0x3d0)) {
      if (*(int *)(param_1 + 0x3d4) == 0) {
        iVar6 = 1;
        goto LAB_14431d344;
      }
      bVar3 = false;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x3d4) + 1;
LAB_14431d344:
      *(int *)(param_1 + 0x3d0) = iVar1;
      *(int *)(param_1 + 0x3d4) = iVar6;
      bVar3 = true;
    }
    if (iVar1 == *(int *)(param_1 + 0x3d8)) {
      if (*(int *)(param_1 + 0x3dc) == 0) {
        iVar6 = 1;
        goto LAB_14431d372;
      }
      bVar4 = false;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x3dc) + 1;
LAB_14431d372:
      *(int *)(param_1 + 0x3d8) = iVar1;
      *(int *)(param_1 + 0x3dc) = iVar6;
      bVar4 = true;
    }
    if ((*(int *)(param_1 + 0x420) == 0) || (*(int *)(param_1 + 0x420) != *(int *)(lVar2 + 0x50))) {
      *(int *)(param_1 + 0x420) = *(int *)(lVar2 + 0x50);
      FUN_145916980(param_1 + 0x410,lVar2 + 0x40);
      FUN_1449a0272(param_1 + 0xaa8,lVar2 + 0x68);
    }
    else {
      cVar5 = FUN_1449a0272(param_1 + 0xaa8,lVar2 + 0x68);
      if ((!bVar3 && !bVar4) && (cVar5 == '\0')) goto LAB_14431d3b2;
    }
    if (iVar1 < *(int *)(param_1 + 0xb84)) {
      lVar8 = (ulonglong)(*(int *)(param_1 + 0xb80) <= iVar1) * 0x10;
      lVar9 = lVar8 + 0xb50;
      lVar8 = lVar8 + 0xb58;
    }
    else {
      lVar8 = 0xb78;
      lVar9 = 0xb70;
    }
    iVar1 = *(int *)(param_1 + lVar8) + -1;
    if (*(int *)(param_1 + lVar8) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0x380,*(undefined8 *)(param_1 + lVar9),iVar1);
    uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x88));
  return uVar10 & 0xffffffff;
}



// FUNCTION 14431d4aa FUN_14431d4aa body=1076 status=ok
// SIG undefined FUN_14431d4aa(void)

undefined8 * FUN_14431d4aa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_14007ca06();
  FUN_140c6b9f8(param_1,uVar6);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *param_1 = &PTR_FUN_14b6b17e0;
  *(undefined4 *)(param_1 + 0x16) = 0x262a2345;
  param_1[0x17] = "slide_show_manager";
  FUN_1400b22c2(local_58,"UI.SlideShowManager");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 0x5a);
  lVar7 = FUN_14406c078();
  if (lVar7 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar7);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar7 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14431d6da;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar8;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_14431d6da:
  lVar7 = FUN_14406c078();
  puVar1 = (uint *)(param_1 + 0x5f);
  if (lVar7 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar3 = (undefined2 *)param_1[0x62];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar7);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar7 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_14431d82a;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar8;
      }
    }
    *(int *)((longlong)param_1 + 0x2fc) = iVar5;
  }
LAB_14431d82a:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14431d918 FUN_14431d918 body=41 status=ok
// SIG undefined FUN_14431d918(void)

void FUN_14431d918(void)

{
  DAT_14cbe4108 = 0;
  if (DAT_14cbe4100 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69916();
  return;
}



// FUNCTION 14431d946 FUN_14431d946 body=41 status=ok
// SIG undefined FUN_14431d946(void)

void FUN_14431d946(void)

{
  DAT_14cbe4228 = 0;
  if (DAT_14cbe4220 != 0) {
    FUN_1400020a8();
  }
  FUN_145d699b4();
  return;
}



// FUNCTION 14431d9e6 FUN_14431d9e6 body=41 status=ok
// SIG undefined FUN_14431d9e6(void)

void FUN_14431d9e6(void)

{
  DAT_14cbe4368 = 0;
  if (DAT_14cbe4360 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69a52();
  return;
}



// FUNCTION 14431da14 FUN_14431da14 body=41 status=ok
// SIG undefined FUN_14431da14(void)

void FUN_14431da14(void)

{
  DAT_14cbe4460 = 0;
  if (DAT_14cbe4458 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69af0();
  return;
}



// FUNCTION 14431da7c FUN_14431da7c body=1170 status=ok
// SIG undefined FUN_14431da7c(void)

longlong FUN_14431da7c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  undefined1 *local_f8;
  longlong **local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  longlong local_a8;
  undefined1 **local_a0;
  code *local_98;
  undefined1 ***local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  uVar6 = DAT_14cb8d358;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a8 = 0;
  local_b0 = 0;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  FUN_1449f3ff4(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 != 0) {
    local_110 = uVar6;
    plVar1 = local_c8 + (int)uStack_c0;
    plVar12 = local_c8;
    do {
      if (*(int *)(param_1 + 0xd48) != *(int *)(param_1 + 0xd74)) {
        lVar7 = *plVar12;
        uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
        uVar9 = (uint)lVar7 & 0xffff;
        lVar8 = *(longlong *)(param_1 + 0xd80);
        if (*(longlong *)(param_1 + 0xd80) == 0) {
          lVar8 = param_1 + 0xd78;
        }
        iVar10 = *(int *)(lVar8 + (ulonglong)
                                  (*(int *)(param_1 + 0xd88) - 1U &
                                  (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                                  (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0xd40) + (longlong)iVar10 * 0x28);
            if (*plVar2 == lVar7) {
              plVar11 = plVar2 + 1;
              if (plVar11 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
                lVar7 = plVar2[2];
                if (local_b0 == 0) {
                  if (lVar7 == 0) {
                    uVar6 = FUN_145ce1a14();
                    lVar7 = FUN_14477b664(uVar6);
                    plVar2[2] = lVar7;
                  }
                  lVar8 = plVar2[3];
                  if (lVar8 == 0) {
                    if (lVar7 == 0 || *plVar11 == 0) {
                      lVar8 = 0;
                    }
                    else {
                      plVar3 = *(longlong **)(lVar7 + 0xb8);
                      if ((plVar3 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar3 + 0x108))(), cVar4 == '\0')) {
                        lVar8 = 0;
                      }
                      else {
                        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
                        lVar8 = FUN_144aff482(uVar6,plVar11);
                      }
                      plVar2[3] = lVar8;
                    }
                  }
                  local_b0 = *(longlong *)(lVar8 + 0x18);
                  local_a8 = lVar8;
                }
                else {
                  if (lVar7 == 0) {
                    uVar6 = FUN_145ce1a14();
                    lVar7 = FUN_14477b664(uVar6);
                    plVar2[2] = lVar7;
                  }
                  lVar8 = plVar2[3];
                  if (lVar8 == 0) {
                    if (lVar7 == 0 || *plVar11 == 0) {
                      lVar8 = 0;
                    }
                    else {
                      plVar3 = *(longlong **)(lVar7 + 0xb8);
                      if ((plVar3 == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                        lVar8 = 0;
                      }
                      else {
                        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
                        lVar8 = FUN_144aff482(uVar6,plVar11);
                      }
                      plVar2[3] = lVar8;
                    }
                  }
                  uVar5 = FUN_14474cf0e(lVar8 + 0x18,&local_b0);
                  local_d8 = 0;
                  uStack_d0 = 0;
                  if (DAT_14caa8580 == 0) {
                    FUN_140608a9e();
                  }
                  FUN_140c54370(DAT_14caa8580,lVar8 + 0x18,&local_d8);
                  if ((0 < (int)uVar5) && ((int)uVar5 <= (int)uStack_d0)) {
                    local_88 = 0;
                    uStack_80 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    uStack_68 = 0;
                    uVar13 = 0;
                    do {
                      FUN_1402b5374(&local_88,uVar13 & 0xffffffff,
                                    *(undefined8 *)(local_d8 + uVar13 * 8));
                      uVar13 = uVar13 + 1;
                    } while (uVar5 != uVar13);
                    if (DAT_14caa8580 == 0) {
                      FUN_140608a9e();
                    }
                    lVar7 = DAT_14caa8580;
                    if (DAT_14c947fe0 == 0) {
                      lVar8 = FUN_14001cc68(0x140,0x10);
                      FUN_1456b2032(lVar8);
                      DAT_14c947fe0 = lVar8;
                    }
                    FUN_140045924(DAT_14c947fe0,&local_e8,&local_88,1);
                    FUN_1400702d4(lVar7,&local_e0,local_e8,0);
                    if (local_e0 != 0) {
                      local_b0 = local_e0;
                      local_108 = &local_b0;
                      local_100 = &local_a8;
                      local_f0 = &local_108;
                      local_f8 = &LAB_144327066;
                      local_a0 = &local_f8;
                      local_90 = &local_a0;
                      local_98 = FUN_148dd2668;
                      FUN_148dd23a8(local_110,&local_98,0);
                    }
                    if (local_70 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  if (local_d8 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
              break;
            }
            iVar10 = (int)plVar2[4];
          } while (iVar10 != -1);
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_a8;
}



// FUNCTION 14431df10 FUN_14431df10 body=590 status=ok
// SIG undefined FUN_14431df10(void)

undefined8 * FUN_14431df10(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_1449f3ff4(param_3,&local_58);
  if ((longlong)(int)uStack_50 == 0) {
    puVar16 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
  }
  else {
    plVar1 = local_58 + (int)uStack_50;
    puVar15 = (undefined8 *)0x0;
    puVar16 = (undefined8 *)0x0;
    plVar14 = local_58;
    do {
      if (*(int *)(param_1 + 0xd98) != *(int *)(param_1 + 0xdc4)) {
        lVar8 = *plVar14;
        uVar5 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar11 = (uint)lVar8 & 0xffff;
        lVar10 = *(longlong *)(param_1 + 0xdd0);
        if (*(longlong *)(param_1 + 0xdd0) == 0) {
          lVar10 = param_1 + 0xdc8;
        }
        iVar12 = *(int *)(lVar10 + (ulonglong)
                                   (*(int *)(param_1 + 0xdd8) - 1U &
                                   (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar11)
                                   + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar12 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0xd90) + (longlong)iVar12 * 0x28);
            if (*plVar2 == lVar8) {
              plVar13 = plVar2 + 1;
              if (plVar13 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
                lVar8 = plVar2[2];
                puVar17 = puVar15;
                if (lVar8 == 0) {
                  local_68 = puVar15;
                  uVar7 = FUN_140c5407a();
                  lVar8 = FUN_14477b664(uVar7);
                  plVar2[2] = lVar8;
                  puVar17 = local_68;
                }
                puVar9 = (undefined8 *)plVar2[3];
                if (puVar9 == (undefined8 *)0x0) {
                  if (lVar8 == 0) {
                    puVar9 = (undefined8 *)0x0;
                  }
                  else {
                    puVar9 = (undefined8 *)0x0;
                    if (*plVar13 != 0) {
                      plVar4 = *(longlong **)(lVar8 + 0xb8);
                      local_68 = param_2;
                      local_60 = puVar16;
                      if ((plVar4 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                        puVar9 = (undefined8 *)0x0;
                      }
                      else {
                        uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
                        puVar9 = (undefined8 *)FUN_144aff482(uVar7,plVar13);
                      }
                      plVar2[3] = (longlong)puVar9;
                      puVar16 = local_60;
                      param_2 = local_68;
                    }
                  }
                }
                puVar15 = puVar9;
                if (puVar17 != (undefined8 *)0x0) {
                  iVar12 = *(int *)(puVar9 + 3);
                  iVar3 = *(int *)(puVar17 + 3);
                  if (puVar16 == (undefined8 *)0x0) {
                    if (iVar12 == iVar3) {
                      puVar16 = (undefined8 *)0x0;
                      puVar15 = puVar17;
                    }
                    else {
                      puVar16 = puVar9;
                      puVar15 = puVar17;
                      if (iVar12 < iVar3) {
                        puVar16 = puVar17;
                        puVar15 = puVar9;
                      }
                    }
                  }
                  else if (((iVar12 < iVar3) || (puVar15 = puVar17, *(int *)(puVar16 + 3) < iVar12))
                          && (puVar16 = puVar17, iVar3 < iVar12)) {
                    puVar16 = puVar9;
                  }
                }
              }
              break;
            }
            iVar12 = (int)plVar2[4];
          } while (iVar12 != -1);
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar1);
  }
  *param_2 = puVar15;
  param_2[1] = puVar16;
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14431e173 FUN_14431e173 body=69 status=ok
// SIG undefined FUN_14431e173(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e173(void)

{
  _DAT_14cbe4640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4648,1);
  return;
}



// FUNCTION 14431e1b8 FUN_14431e1b8 body=69 status=ok
// SIG undefined FUN_14431e1b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e1b8(void)

{
  _DAT_14cbe4650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e1fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4658,1);
  return;
}



// FUNCTION 14431e1fd FUN_14431e1fd body=69 status=ok
// SIG undefined FUN_14431e1fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e1fd(void)

{
  _DAT_14cbe4668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e23f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4670,1);
  return;
}



// FUNCTION 14431e242 FUN_14431e242 body=69 status=ok
// SIG undefined FUN_14431e242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e242(void)

{
  _DAT_14cbe4678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4680,1);
  return;
}



// FUNCTION 14431e287 FUN_14431e287 body=69 status=ok
// SIG undefined FUN_14431e287(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e287(void)

{
  _DAT_14cbe4688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e2c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4690,1);
  return;
}



// FUNCTION 14431e2cc FUN_14431e2cc body=69 status=ok
// SIG undefined FUN_14431e2cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e2cc(void)

{
  _DAT_14cbe4698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e30e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe46a0,1);
  return;
}



// FUNCTION 14431e311 FUN_14431e311 body=69 status=ok
// SIG undefined FUN_14431e311(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e311(void)

{
  _DAT_14cbe46a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe46b0,1);
  return;
}



// FUNCTION 14431e356 FUN_14431e356 body=69 status=ok
// SIG undefined FUN_14431e356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e356(void)

{
  _DAT_14cbe46b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe46c0,1);
  return;
}



// FUNCTION 14431e39b FUN_14431e39b body=69 status=ok
// SIG undefined FUN_14431e39b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e39b(void)

{
  _DAT_14cbe46c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe46d0,1);
  return;
}



// FUNCTION 14431e3e0 FUN_14431e3e0 body=69 status=ok
// SIG undefined FUN_14431e3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e3e0(void)

{
  _DAT_14cbe46d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe46e0,1);
  return;
}



// FUNCTION 14431e425 FUN_14431e425 body=69 status=ok
// SIG undefined FUN_14431e425(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e425(void)

{
  _DAT_14cbe46e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe46f0,1);
  return;
}



// FUNCTION 14431e46a FUN_14431e46a body=69 status=ok
// SIG undefined FUN_14431e46a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e46a(void)

{
  _DAT_14cbe46f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4700,1);
  return;
}



// FUNCTION 14431e4af FUN_14431e4af body=69 status=ok
// SIG undefined FUN_14431e4af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e4af(void)

{
  _DAT_14cbe4708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e4f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4710,1);
  return;
}



// FUNCTION 14431e504 FUN_14431e504 body=1058 status=ok
// SIG undefined FUN_14431e504(void)

ulonglong FUN_14431e504(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  ushort uVar15;
  ulonglong uVar16;
  ushort uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_2 + 0x30) != 0) &&
     (FUN_14132b09a(&local_78,param_1[6]), local_70 != (longlong *)0x0)) {
    iVar5 = (int)local_70[1];
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_70[1];
      bVar19 = iVar5 == iVar4;
      if (bVar19) {
        *(int *)(local_70 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar9 = local_70;
    } while (!bVar19);
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    plVar2 = local_78;
    if (plVar9 != (longlong *)0x0) {
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_78 != (longlong *)0x0);
      if (local_78 != (longlong *)0x0) {
        plVar13 = param_1 + 0x2c;
        if ((longlong *)(param_2 + 0xd0) != plVar13) {
          plVar11 = (longlong *)(param_2 + 0xd0);
          plVar12 = plVar13;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *plVar12 = *plVar11;
            plVar11 = plVar11 + 1;
            plVar12 = plVar12 + 1;
          }
          *(undefined1 *)(param_1 + 0x38) = 1;
        }
        *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x13c);
        if ((param_4 != 0) && ((longlong)*(int *)(param_2 + 0xa08) != 0)) {
          plVar11 = (longlong *)(*(longlong *)(param_2 + 0xa00) + 0x10);
          lVar7 = 0;
          do {
            if (plVar11[0xc] == param_4) {
              lVar7 = *(longlong *)(param_2 + 0xa00) - lVar7;
              if (lVar7 != 0) {
                if (plVar11 != plVar13) {
                  plVar12 = plVar11;
                  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *plVar13 = *plVar12;
                    plVar12 = plVar12 + 1;
                    plVar13 = plVar13 + 1;
                  }
                  *(undefined1 *)(param_1 + 0x38) = 1;
                }
                puVar14 = (undefined4 *)(param_2 + 0x13c);
                if ((char)plVar11[0xd] != '\0') {
                  puVar14 = (undefined4 *)(lVar7 + 0x7c);
                }
                *(undefined4 *)(param_1 + 0x3a) = *puVar14;
              }
              break;
            }
            plVar11 = plVar11 + 0x10;
            lVar7 = lVar7 + -0x80;
          } while (-lVar7 != (longlong)*(int *)(param_2 + 0xa08) * 0x80);
        }
        if (((((*(int *)((longlong)param_1 + 0xe4) == 0) ||
              (uVar3 = *(uint *)(param_1 + 0x1c), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
            || ((lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 == 0
                || (*(int *)(lVar7 + 0x10) != *(int *)((longlong)param_1 + 0xe4))))) ||
           (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
            ((param_1[0x1d] != param_2 || (param_1[0x1e] != param_3)))))) {
LAB_14431e6f7:
          local_70 = local_78;
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          local_50 = param_5;
          local_78 = param_1;
          local_68 = plVar9;
          local_60 = param_2;
          local_58 = param_3;
          if (param_1[0x1d] == param_2) {
            if (param_1[0x1e] == param_3) {
              FUN_1488aeb8c(plVar2,*(longlong *)(param_2 + 0x28) + 0x70,param_5);
              plVar2 = param_1 + 0x1f;
              if (plVar2 != param_5) {
                iVar5 = (int)param_5[1];
                _Src = (void *)*param_5;
                *(int *)(param_1 + 0x20) = iVar5;
                if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x104) == 0) {
                  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
                }
                else {
                  FUN_1446dd670(plVar2,iVar5);
                  if (iVar5 != 0) {
                    memcpy((void *)*plVar2,_Src,(longlong)iVar5 * 2);
                  }
                }
              }
            }
            else {
              FUN_14431ea80(&local_78);
            }
          }
          else {
            if (param_1[0x16] != 0) {
              FUN_140aeefbc(param_1[0x16],0,1);
              param_1[0x16] = 0;
              param_1[0x17] = 0;
              param_1[0x18] = 0;
            }
            FUN_1458f5ab4(param_1,param_2,0);
            FUN_14431ea80(&local_78);
            if (param_1[0x19] == 0) {
              FUN_1458f5b84(param_1);
            }
            FUN_14132b1d2(param_1);
            param_1[0x1d] = param_2;
          }
          uVar6 = (**(code **)(*DAT_14cbe4768 + 0xb0))();
          plVar2 = local_68;
          *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar6;
          *(undefined2 *)(param_1 + 0x3b) = 1;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_68 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*local_68)(local_68);
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
        else {
          iVar5 = (int)param_5[1];
          if (iVar5 == (int)param_1[0x20]) {
            if (1 < iVar5) {
              lVar7 = 0;
              while( true ) {
                uVar15 = *(ushort *)(*param_5 + lVar7);
                uVar16 = (ulonglong)uVar15;
                uVar17 = *(ushort *)(param_1[0x1f] + lVar7);
                if (uVar15 != uVar17) break;
                if (uVar15 == 0) goto LAB_14431e785;
LAB_14431e8c6:
                lVar7 = lVar7 + 2;
              }
              if ((uVar17 | uVar15) < 0x80) {
                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                uVar18 = (ulonglong)uVar17;
                uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar18]) goto LAB_14431e8c6;
              }
              if (uVar15 != uVar17) goto LAB_14431e6f7;
            }
          }
          else if ((int)param_1[0x20] + iVar5 != 1) goto LAB_14431e6f7;
        }
      }
LAB_14431e785:
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      goto LAB_14431e62a;
    }
  }
  uVar10 = 0;
LAB_14431e62a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14431e927 FUN_14431e927 body=69 status=ok
// SIG undefined FUN_14431e927(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e927(void)

{
  _DAT_14cbe4718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4720,1);
  return;
}



// FUNCTION 14431e96c FUN_14431e96c body=69 status=ok
// SIG undefined FUN_14431e96c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e96c(void)

{
  _DAT_14cbe4728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e9ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4730,1);
  return;
}



// FUNCTION 14431e9b1 FUN_14431e9b1 body=69 status=ok
// SIG undefined FUN_14431e9b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e9b1(void)

{
  _DAT_14cbe4738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431e9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4740,1);
  return;
}



// FUNCTION 14431e9f6 FUN_14431e9f6 body=69 status=ok
// SIG undefined FUN_14431e9f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431e9f6(void)

{
  _DAT_14cbe4748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431ea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4750,1);
  return;
}



// FUNCTION 14431ea3b FUN_14431ea3b body=69 status=ok
// SIG undefined FUN_14431ea3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431ea3b(void)

{
  _DAT_14cbe4760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431ea7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4768,1);
  return;
}



// FUNCTION 14431ea80 FUN_14431ea80 body=572 status=ok
// SIG undefined FUN_14431ea80(void)

void FUN_14431ea80(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  void **ppvVar4;
  void *pvVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined8 local_d8 [12];
  void *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *param_1;
  FUN_14132cab0(param_1[1]);
  uVar3 = *(undefined8 *)(param_1[3] + 0x28);
  local_f8 = DAT_14caa8578;
  local_f0 = 0;
  lStack_e8 = 0;
  local_e0 = 0;
  puVar9 = &DAT_14c846480;
  puVar10 = local_d8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_146207f10(uVar3,0,&local_f8);
  lStack_e8 = param_1[4];
  ppvVar4 = (void **)param_1[5];
  if (&local_78 != ppvVar4) {
    uVar1 = *(uint *)(ppvVar4 + 1);
    pvVar5 = *ppvVar4;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
    if (uVar1 == 0 && uStack_70._4_4_ == 0) {
      uStack_70 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_78,uVar1);
      if (uVar1 != 0) {
        memcpy(local_78,pvVar5,(longlong)(int)uVar1 * 2);
      }
    }
  }
  local_68 = 1;
  lVar7 = FUN_14144ff90(param_1[1]);
  if (lVar7 == 0) {
    *(undefined4 *)(lVar2 + 0xe0) = 0;
    iVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0xc);
    *(uint *)(lVar2 + 0xe0) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
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
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(lVar2 + 0xe4) = iVar6;
  puVar10 = (undefined8 *)param_1[5];
  puVar9 = (undefined8 *)(lVar2 + 0xf8);
  if (puVar9 != puVar10) {
    iVar6 = *(int *)(puVar10 + 1);
    pvVar5 = (void *)*puVar10;
    *(int *)(lVar2 + 0x100) = iVar6;
    if (iVar6 == 0 && *(int *)(lVar2 + 0x104) == 0) {
      *(undefined4 *)(lVar2 + 0x104) = 0;
    }
    else {
      FUN_1446dd670(puVar9,iVar6);
      if (iVar6 != 0) {
        memcpy((void *)*puVar9,pvVar5,(longlong)iVar6 * 2);
      }
    }
  }
  *(longlong *)(lVar2 + 0xf0) = param_1[4];
  FUN_145a1457c(&local_f8);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431ecbe FUN_14431ecbe body=926 status=ok
// SIG undefined FUN_14431ecbe(void)

undefined8 FUN_14431ecbe(longlong *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  lVar6 = param_1[2];
  iVar8 = *(int *)(lVar6 + 0x38);
  if ((iVar8 < *(int *)(DAT_14cad2858 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
      DAT_14cad2858 + 0x30)) {
    if (DAT_14cad3688 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144b223ce;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417963e0;
      local_48 = &LAB_147a2f4c9;
      local_50 = &LAB_1400ea6f8;
      local_58 = L"Engine";
      local_60 = 0x200000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
      lVar6 = param_1[2];
      iVar8 = *(int *)(lVar6 + 0x38);
    }
    if ((*(int *)(DAT_14cad3688 + 0x38) <= iVar8) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) ==
        DAT_14cad3688 + 0x30)) {
      cVar3 = (**(code **)(*param_1 + 0x4e8))(param_1);
      if (cVar3 == '\0') {
LAB_14431eec9:
        uVar7 = 1;
        goto LAB_14431ed35;
      }
      lVar6 = param_1[0xcc];
      if ((lVar6 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar6);
      }
      else if (lVar6 == 0) goto LAB_14431ed33;
      uVar1 = *(ulonglong *)(lVar6 + 0xc0);
      if (((uVar1 & 1) == 0) ||
         ((int)(((uint)(uVar1 >> 0x18) & 0xff) - *(int *)(lVar6 + 0x48)) <=
          (int)((uint)(uVar1 >> 0x28) & 0xff))) {
        if (*(longlong *)(lVar6 + 0xe0) == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)*(byte *)(*(longlong *)(lVar6 + 0xe0) + 0x8f);
        }
        if (*(uint *)(lVar6 + 0x150) == uVar9) goto LAB_14431eec9;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if (cVar3 == '\0') goto LAB_14431eec9;
    plVar10 = (longlong *)param_1[0xcb];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0xcc];
      if ((DAT_14c950c29 & plVar10 != (longlong *)0x0) != 0) goto LAB_14431f050;
      if (plVar10 == (longlong *)0x0) goto LAB_14431ed33;
    }
    else if (DAT_14c950c29 == 1) {
LAB_14431f050:
      FUN_1456cec3c(plVar10);
    }
    uVar1 = plVar10[0x18];
    if (((uVar1 & 1) == 0) ||
       ((int)(((uint)(uVar1 >> 0x18) & 0xff) - (int)plVar10[9]) <=
        (int)((uint)(uVar1 >> 0x28) & 0xff))) {
      piVar5 = (int *)(**(code **)(*plVar10 + 0x398))(plVar10);
      iVar8 = *piVar5;
      (**(code **)(*plVar10 + 0x4a8))(plVar10,&local_28);
      if ((longlong *)param_1[0x115] != (longlong *)0x0) {
        if (local_28._4_1_ != '\0') {
          iVar8 = (int)local_28;
        }
        iVar4 = (**(code **)(*(longlong *)param_1[0x115] + 0x90))();
        if (iVar4 == iVar8) goto LAB_14431eec9;
      }
      if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
        bVar2 = *(byte *)((longlong)param_1 + 0x9d);
        if ((bVar2 & 1) != 0) {
          if ((param_1[0x16] != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0))
          goto LAB_14431ed33;
          bVar2 = *(byte *)((longlong)param_1 + 0x9d);
        }
        *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
    }
  }
LAB_14431ed33:
  uVar7 = 0;
LAB_14431ed35:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14431f05e FUN_14431f05e body=204 status=ok
// SIG undefined FUN_14431f05e(void)

void FUN_14431f05e(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xb0,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xa8,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xb8,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xc0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014431f127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 200,0,0);
  return;
}



// FUNCTION 14431f163 FUN_14431f163 body=41 status=ok
// SIG undefined FUN_14431f163(void)

void FUN_14431f163(void)

{
  DAT_14cbe47f0 = 0;
  if (DAT_14cbe47e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69b8e();
  return;
}



// FUNCTION 14431f192 FUN_14431f192 body=494 status=ok
// SIG undefined FUN_14431f192(void)

undefined8 * FUN_14431f192(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0xc))) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
       ((*plVar7 != 0 && (lVar5 = FUN_140391a3c(), lVar5 != 0)))))))) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_14b9d4390;
    puVar6[4] = *(undefined8 *)(param_1 + 0x10);
    puVar6[5] = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(puVar6 + 6) = 1;
    FUN_14039144e(lVar5,puVar6);
    if (*(char *)(param_1 + 0x20) == '\x03') {
      lVar9 = *(longlong *)(param_1 + 0x38);
      if ((lVar9 != 0) &&
         ((*(int *)(param_1 + 0x18) != (int)lVar9 ||
          (*(int *)(param_1 + 0x1c) != (int)((ulonglong)lVar9 >> 0x20))))) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
        puVar6[3] = 0;
        *puVar6 = &PTR_FUN_14b9d4390;
        puVar6[4] = *(undefined8 *)(param_1 + 0x10);
        puVar6[5] = *(undefined8 *)(param_1 + 0x38);
        *(undefined1 *)(puVar6 + 6) = 1;
        FUN_14039144e(lVar5,puVar6);
      }
      iVar4 = 0;
      if ((longlong)*(int *)(param_1 + 0x30) == 0) {
        lVar9 = 0;
      }
      else {
        lVar8 = 0;
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar8);
          if ((lVar3 != 0) &&
             (((*(int *)(param_1 + 0x18) != (int)lVar3 ||
               (*(int *)(param_1 + 0x1c) != (int)((ulonglong)lVar3 >> 0x20))) &&
              (iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x94 + lVar8), iVar4 < iVar2)))) {
            lVar9 = lVar3;
            iVar4 = iVar2;
          }
          lVar8 = lVar8 + 200;
        } while ((longlong)*(int *)(param_1 + 0x30) * 200 - lVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_14b9d4390;
      puVar6[4] = *(undefined8 *)(param_1 + 0x10);
      puVar6[5] = lVar9;
      *(undefined1 *)(puVar6 + 6) = 0;
      FUN_14039144e(lVar5,puVar6);
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x100 + (ulonglong)(*(char *)(param_1 + 0x20) != '\x02') * 8)
  ;
  return param_2;
}



// FUNCTION 14431f380 FUN_14431f380 body=69 status=ok
// SIG undefined FUN_14431f380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431f380(void)

{
  _DAT_14cbe4938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431f3c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4940,1);
  return;
}



// FUNCTION 14431f3c6 FUN_14431f3c6 body=828 status=ok
// SIG undefined FUN_14431f3c6(void)

void FUN_14431f3c6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  undefined2 *puVar6;
  code *_Str_00;
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
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_14431f5f0;
  if (DAT_14cbadd90 == 0) {
    local_70 = &local_50;
    local_50 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1459f2e4c;
    local_78 = &LAB_148c39de3;
    local_80 = &LAB_1457a9eb2;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     ((int)param_1[1] < 1)) goto LAB_14431f5f0;
  local_40 = 0;
  lVar1 = *param_1;
  FUN_1400b22c2(&local_50,L".Preview");
  puVar6 = &DAT_149dfb77a;
  _Str_00 = local_50;
  if ((int)local_48 == 0) {
    _Str_00 = (code *)&DAT_149dfb77a;
  }
  if (_Str_00 == (code *)0x0) {
    bVar7 = false;
  }
  else {
    sVar4 = wcslen((wchar_t *)_Str_00);
    local_a0 = 0xffffffff;
    local_a8 = 0;
    iVar3 = FUN_1447ee042(lVar1,_Str_00,sVar4 & 0xffffffff,1);
    bVar7 = iVar3 != -1;
  }
  if (local_50 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar7) {
    iVar3 = *(int *)((undefined8 *)*param_1 + 1);
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_50,iVar2,*(undefined8 *)*param_1,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_50,1);
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      puVar6 = *(undefined2 **)*param_1;
    }
    FUN_140002266(&local_50,L"UI.State.%s",puVar6);
    iVar3 = (int)local_48 + -1;
    if ((int)local_48 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_58,iVar3,local_50,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_58,1);
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)param_1[1] < 2) {
LAB_14431f5b5:
    local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 0xd98));
    lVar1 = *(longlong *)(param_2 + 0xda0);
    if (DAT_14c950c29 == '\x01') {
      if (*(longlong *)(param_2 + 0xda0) == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_2 + 0xda0);
      }
    }
  }
  else {
    if (*(int *)(*param_1 + 0x18) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(*param_1 + 0x10);
    }
    iVar3 = _wtoi(_Str);
    local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
    local_48 = 0;
    if (iVar3 == -1) goto LAB_14431f5b5;
    uVar5 = FUN_1447210f0(param_2);
    FUN_148eeaf72(iVar3,uVar5,&local_50);
    lVar1 = local_48;
  }
  local_48 = lVar1;
  FUN_1403ca8ec(&local_50,&local_40);
LAB_14431f5f0:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431f703 FUN_14431f703 body=69 status=ok
// SIG undefined FUN_14431f703(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431f703(void)

{
  _DAT_14cbe4948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431f745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4950,1);
  return;
}



// FUNCTION 14431f748 FUN_14431f748 body=910 status=ok
// SIG undefined FUN_14431f748(void)

void FUN_14431f748(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *_Str;
  undefined2 *puVar7;
  code *_Str_00;
  bool bVar8;
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
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_14431f79f;
  if (DAT_14cbadd90 == 0) {
    local_70 = &local_50;
    local_50 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1459f2e4c;
    local_78 = &LAB_148c39de3;
    local_80 = &LAB_1457a9eb2;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     ((int)param_1[1] < 1)) goto LAB_14431f79f;
  local_40 = 0;
  lVar4 = *param_1;
  FUN_1400b22c2(&local_50,L".Preview");
  puVar7 = &DAT_149dfb77a;
  _Str_00 = local_50;
  if ((int)local_48 == 0) {
    _Str_00 = (code *)&DAT_149dfb77a;
  }
  if (_Str_00 == (code *)0x0) {
    bVar8 = false;
  }
  else {
    sVar3 = wcslen((wchar_t *)_Str_00);
    local_a0 = 0xffffffff;
    local_a8 = 0;
    iVar2 = FUN_1447ee042(lVar4,_Str_00,sVar3 & 0xffffffff,1);
    bVar8 = iVar2 != -1;
  }
  if (local_50 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar8) {
    iVar2 = *(int *)((undefined8 *)*param_1 + 1);
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_50,iVar1,*(undefined8 *)*param_1,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_50,1);
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      puVar7 = *(undefined2 **)*param_1;
    }
    FUN_140002266(&local_50,L"UI.State.%s",puVar7);
    iVar2 = (int)local_48 + -1;
    if ((int)local_48 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_58,iVar2,local_50,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_58,1);
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)param_1[1] < 2) {
LAB_14431f955:
    local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 0xd98));
    lVar4 = *(longlong *)(param_2 + 0xda0);
    if (DAT_14c950c29 == '\x01') {
      if (*(longlong *)(param_2 + 0xda0) == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0xda0);
      }
    }
  }
  else {
    if (*(int *)(*param_1 + 0x18) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(*param_1 + 0x10);
    }
    iVar2 = _wtoi(_Str);
    local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
    local_48 = 0;
    if (iVar2 == -1) goto LAB_14431f955;
    uVar6 = FUN_1447210f0(param_2);
    FUN_148eeaf72(iVar2,uVar6,&local_50);
    lVar4 = local_48;
  }
  local_48 = lVar4;
  if ((local_48 != 0) && (lVar4 = FUN_144a8c772(&local_50), lVar4 != 0)) {
    lVar5 = FUN_140ade7fe();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_148ef0788(lVar4,&local_40,0);
    }
  }
LAB_14431f79f:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431fad7 FUN_14431fad7 body=69 status=ok
// SIG undefined FUN_14431fad7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431fad7(void)

{
  _DAT_14cbe4958 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431fb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4960,1);
  return;
}



// FUNCTION 14431fb1c FUN_14431fb1c body=828 status=ok
// SIG undefined FUN_14431fb1c(void)

void FUN_14431fb1c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  undefined2 *puVar6;
  code *_Str_00;
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
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_14431fd46;
  if (DAT_14cbadd90 == 0) {
    local_70 = &local_50;
    local_50 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1459f2e4c;
    local_78 = &LAB_148c39de3;
    local_80 = &LAB_1457a9eb2;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     ((int)param_1[1] < 1)) goto LAB_14431fd46;
  local_40 = 0;
  lVar1 = *param_1;
  FUN_1400b22c2(&local_50,L".Preview");
  puVar6 = &DAT_149dfb77a;
  _Str_00 = local_50;
  if ((int)local_48 == 0) {
    _Str_00 = (code *)&DAT_149dfb77a;
  }
  if (_Str_00 == (code *)0x0) {
    bVar7 = false;
  }
  else {
    sVar4 = wcslen((wchar_t *)_Str_00);
    local_a0 = 0xffffffff;
    local_a8 = 0;
    iVar3 = FUN_1447ee042(lVar1,_Str_00,sVar4 & 0xffffffff,1);
    bVar7 = iVar3 != -1;
  }
  if (local_50 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar7) {
    iVar3 = *(int *)((undefined8 *)*param_1 + 1);
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_50,iVar2,*(undefined8 *)*param_1,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_50,1);
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      puVar6 = *(undefined2 **)*param_1;
    }
    FUN_140002266(&local_50,L"UI.State.%s",puVar6);
    iVar3 = (int)local_48 + -1;
    if ((int)local_48 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_58,iVar3,local_50,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_58,1);
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)param_1[1] < 2) {
LAB_14431fd0b:
    local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 0xd98));
    lVar1 = *(longlong *)(param_2 + 0xda0);
    if (DAT_14c950c29 == '\x01') {
      if (*(longlong *)(param_2 + 0xda0) == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_2 + 0xda0);
      }
    }
  }
  else {
    if (*(int *)(*param_1 + 0x18) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(*param_1 + 0x10);
    }
    iVar3 = _wtoi(_Str);
    local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
    local_48 = 0;
    if (iVar3 == -1) goto LAB_14431fd0b;
    uVar5 = FUN_1447210f0(param_2);
    FUN_148eeaf72(iVar3,uVar5,&local_50);
    lVar1 = local_48;
  }
  local_48 = lVar1;
  FUN_140c125e6(&local_50,&local_40);
LAB_14431fd46:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14431fe59 FUN_14431fe59 body=69 status=ok
// SIG undefined FUN_14431fe59(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14431fe59(void)

{
  _DAT_14cbe4968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014431fe9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4970,1);
  return;
}



// FUNCTION 14431fe9e FUN_14431fe9e body=831 status=ok
// SIG undefined FUN_14431fe9e(void)

void FUN_14431fe9e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  undefined2 *puVar6;
  code *_Str_00;
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
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_1443200cb;
  if (DAT_14cbadd90 == 0) {
    local_70 = &local_50;
    local_50 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1459f2e4c;
    local_78 = &LAB_148c39de3;
    local_80 = &LAB_1457a9eb2;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     ((int)param_1[1] < 1)) goto LAB_1443200cb;
  local_40 = 0;
  lVar1 = *param_1;
  FUN_1400b22c2(&local_50,L".Preview");
  puVar6 = &DAT_149dfb77a;
  _Str_00 = local_50;
  if ((int)local_48 == 0) {
    _Str_00 = (code *)&DAT_149dfb77a;
  }
  if (_Str_00 == (code *)0x0) {
    bVar7 = false;
  }
  else {
    sVar4 = wcslen((wchar_t *)_Str_00);
    local_a0 = 0xffffffff;
    local_a8 = 0;
    iVar3 = FUN_1447ee042(lVar1,_Str_00,sVar4 & 0xffffffff,1);
    bVar7 = iVar3 != -1;
  }
  if (local_50 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar7) {
    iVar3 = *(int *)((undefined8 *)*param_1 + 1);
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_50,iVar2,*(undefined8 *)*param_1,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_50,1);
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      puVar6 = *(undefined2 **)*param_1;
    }
    FUN_140002266(&local_50,L"UI.State.%s",puVar6);
    iVar3 = (int)local_48 + -1;
    if ((int)local_48 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_58,iVar3,local_50,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_58,1);
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)param_1[1] < 2) {
LAB_14432008d:
    local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 0xd98));
    lVar1 = *(longlong *)(param_2 + 0xda0);
    if (DAT_14c950c29 == '\x01') {
      if (*(longlong *)(param_2 + 0xda0) == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_2 + 0xda0);
      }
    }
  }
  else {
    if (*(int *)(*param_1 + 0x18) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(*param_1 + 0x10);
    }
    iVar3 = _wtoi(_Str);
    local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
    local_48 = 0;
    if (iVar3 == -1) goto LAB_14432008d;
    uVar5 = FUN_1447210f0(param_2);
    FUN_148eeaf72(iVar3,uVar5,&local_50);
    lVar1 = local_48;
  }
  local_48 = lVar1;
  FUN_140b45d22(&local_50,&local_40,0);
LAB_1443200cb:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443201de FUN_1443201de body=69 status=ok
// SIG undefined FUN_1443201de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443201de(void)

{
  _DAT_14cbe4978 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4980,1);
  return;
}



// FUNCTION 144320224 FUN_144320224 body=502 status=ok
// SIG undefined FUN_144320224(void)

void FUN_144320224(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *_Str;
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
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
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
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (0 < (int)param_1[1])) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_1;
      }
      iVar2 = _wtoi(_Str);
      uVar1 = (ulonglong)local_28 >> 0x20;
      local_28 = (code *)((ulonglong)local_28 & 0xffffffff00000000);
      local_20 = 0;
      if (iVar2 == -1) {
        local_28 = (code *)CONCAT44((int)uVar1,*(undefined4 *)(param_2 + 0xd98));
        lVar3 = *(longlong *)(param_2 + 0xda0);
        if (DAT_14c950c29 == '\x01') {
          if (*(longlong *)(param_2 + 0xda0) == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar3 = *(longlong *)(param_2 + 0xda0);
          }
        }
      }
      else {
        uVar5 = FUN_1447210f0(param_2);
        FUN_148eeaf72(iVar2,uVar5,&local_28);
        lVar3 = local_20;
      }
      local_20 = lVar3;
      if ((local_20 != 0) && (lVar3 = FUN_144a8c772(&local_28), lVar3 != 0)) {
        lVar4 = FUN_140ade7fe();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_148ef080c(lVar3);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14432041b FUN_14432041b body=69 status=ok
// SIG undefined FUN_14432041b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14432041b(void)

{
  _DAT_14cbe4988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014432045d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4990,1);
  return;
}



// FUNCTION 144320460 FUN_144320460 body=69 status=ok
// SIG undefined FUN_144320460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320460(void)

{
  _DAT_14cbe4998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443204a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe49a0,1);
  return;
}



// FUNCTION 1443204a6 FUN_1443204a6 body=217 status=ok
// SIG undefined FUN_1443204a6(void)

void FUN_1443204a6(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  double dVar4;
  
  if (((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1f0), lVar3 != 0)) &&
       (lVar2 = FUN_140dbac94(lVar3), lVar2 != 0)) &&
      ((lVar2 = FUN_140dbafcc(lVar3), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)))) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar4 = _wtof(_Str);
    if (0 < *(int *)(lVar3 + 0x40)) {
      lVar3 = **(longlong **)(lVar3 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0xe0);
      lVar3 = FUN_1411c6420(lVar2,uVar1);
      if (lVar3 != 0) {
        *(float *)(lVar3 + 4) = (float)dVar4;
        FUN_148eebeb2(lVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14432057f FUN_14432057f body=69 status=ok
// SIG undefined FUN_14432057f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14432057f(void)

{
  _DAT_14cbe49a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443205c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe49b0,1);
  return;
}



// FUNCTION 1443205c4 FUN_1443205c4 body=190 status=ok
// SIG undefined FUN_1443205c4(void)

void FUN_1443205c4(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  
  if (((((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0x1f0), lVar2 != 0)) &&
       (lVar4 = FUN_140dbac94(lVar2), lVar4 != 0)) &&
      ((lVar4 = FUN_140dbafcc(lVar2), lVar4 != 0 &&
       (lVar4 = *(longlong *)(lVar4 + 0x48), lVar4 != 0)))) && (0 < *(int *)(param_1 + 1))) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)*param_1;
    }
    uVar3 = FUN_14052c20c(puVar6);
    if (0 < *(int *)(lVar2 + 0x40)) {
      lVar2 = **(longlong **)(lVar2 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      else if (lVar2 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar2 + 0xe0);
      puVar5 = (undefined1 *)FUN_1411c6420(lVar4,uVar1);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = uVar3;
        FUN_148eebeb2(lVar4,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144320682 FUN_144320682 body=69 status=ok
// SIG undefined FUN_144320682(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320682(void)

{
  _DAT_14cbe49b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443206c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe49c0,1);
  return;
}



// FUNCTION 1443206c8 FUN_1443206c8 body=191 status=ok
// SIG undefined FUN_1443206c8(void)

void FUN_1443206c8(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  if (((((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x1f0), lVar4 != 0)) &&
       (lVar3 = FUN_140dbac94(lVar4), lVar3 != 0)) &&
      ((lVar3 = FUN_140dbafcc(lVar4), lVar3 != 0 &&
       (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)))) && (0 < *(int *)(param_1 + 1))) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)*param_1;
    }
    uVar2 = FUN_14052c20c(puVar5);
    if (0 < *(int *)(lVar4 + 0x40)) {
      lVar4 = **(longlong **)(lVar4 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      else if (lVar4 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar4 + 0xe0);
      lVar4 = FUN_1411c6420(lVar3,uVar1);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 1) = uVar2;
        FUN_148eebeb2(lVar3,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144320787 FUN_144320787 body=69 status=ok
// SIG undefined FUN_144320787(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320787(void)

{
  _DAT_14cbe49c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443207c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe49d0,1);
  return;
}



// FUNCTION 1443207cc FUN_1443207cc body=217 status=ok
// SIG undefined FUN_1443207cc(void)

void FUN_1443207cc(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  double dVar4;
  
  if (((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1f0), lVar3 != 0)) &&
       (lVar2 = FUN_140dbac94(lVar3), lVar2 != 0)) &&
      ((lVar2 = FUN_140dbafcc(lVar3), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)))) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar4 = _wtof(_Str);
    if (0 < *(int *)(lVar3 + 0x40)) {
      lVar3 = **(longlong **)(lVar3 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0xe0);
      lVar3 = FUN_1411c6420(lVar2,uVar1);
      if (lVar3 != 0) {
        *(float *)(lVar3 + 8) = (float)dVar4;
        FUN_148eebeb2(lVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443208a5 FUN_1443208a5 body=69 status=ok
// SIG undefined FUN_1443208a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443208a5(void)

{
  _DAT_14cbe49d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443208e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe49e0,1);
  return;
}



// FUNCTION 1443208ea FUN_1443208ea body=69 status=ok
// SIG undefined FUN_1443208ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443208ea(void)

{
  _DAT_14cbe49e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014432092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe49f0,1);
  return;
}



// FUNCTION 14432092f FUN_14432092f body=69 status=ok
// SIG undefined FUN_14432092f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14432092f(void)

{
  _DAT_14cbe49f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a00,1);
  return;
}



// FUNCTION 144320974 FUN_144320974 body=69 status=ok
// SIG undefined FUN_144320974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320974(void)

{
  _DAT_14cbe4a08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443209b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a10,1);
  return;
}



// FUNCTION 1443209b9 FUN_1443209b9 body=69 status=ok
// SIG undefined FUN_1443209b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443209b9(void)

{
  _DAT_14cbe4a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443209fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a20,1);
  return;
}



// FUNCTION 1443209fe FUN_1443209fe body=69 status=ok
// SIG undefined FUN_1443209fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443209fe(void)

{
  _DAT_14cbe4a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a30,1);
  return;
}



// FUNCTION 144320a43 FUN_144320a43 body=69 status=ok
// SIG undefined FUN_144320a43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320a43(void)

{
  _DAT_14cbe4a38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a40,1);
  return;
}



// FUNCTION 144320a88 FUN_144320a88 body=217 status=ok
// SIG undefined FUN_144320a88(void)

void FUN_144320a88(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  double dVar4;
  
  if (((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1f0), lVar3 != 0)) &&
       (lVar2 = FUN_140dbac94(lVar3), lVar2 != 0)) &&
      ((lVar2 = FUN_140dbafcc(lVar3), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)))) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar4 = _wtof(_Str);
    if (0 < *(int *)(lVar3 + 0x40)) {
      lVar3 = **(longlong **)(lVar3 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0xe0);
      lVar3 = FUN_1411c6420(lVar2,uVar1);
      if (lVar3 != 0) {
        *(float *)(lVar3 + 0x18) = (float)dVar4;
        FUN_148eebeb2(lVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144320b61 FUN_144320b61 body=69 status=ok
// SIG undefined FUN_144320b61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320b61(void)

{
  _DAT_14cbe4a48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a50,1);
  return;
}



// FUNCTION 144320ba6 FUN_144320ba6 body=217 status=ok
// SIG undefined FUN_144320ba6(void)

void FUN_144320ba6(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  double dVar4;
  
  if (((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1f0), lVar3 != 0)) &&
       (lVar2 = FUN_140dbac94(lVar3), lVar2 != 0)) &&
      ((lVar2 = FUN_140dbafcc(lVar3), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)))) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar4 = _wtof(_Str);
    if (0 < *(int *)(lVar3 + 0x40)) {
      lVar3 = **(longlong **)(lVar3 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0xe0);
      lVar3 = FUN_1411c6420(lVar2,uVar1);
      if (lVar3 != 0) {
        *(float *)(lVar3 + 0xc) = (float)dVar4;
        FUN_148eebeb2(lVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144320c7f FUN_144320c7f body=69 status=ok
// SIG undefined FUN_144320c7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320c7f(void)

{
  _DAT_14cbe4a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a60,1);
  return;
}



// FUNCTION 144320cc4 FUN_144320cc4 body=217 status=ok
// SIG undefined FUN_144320cc4(void)

void FUN_144320cc4(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  double dVar4;
  
  if (((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1f0), lVar3 != 0)) &&
       (lVar2 = FUN_140dbac94(lVar3), lVar2 != 0)) &&
      ((lVar2 = FUN_140dbafcc(lVar3), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)))) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar4 = _wtof(_Str);
    if (0 < *(int *)(lVar3 + 0x40)) {
      lVar3 = **(longlong **)(lVar3 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0xe0);
      lVar3 = FUN_1411c6420(lVar2,uVar1);
      if (lVar3 != 0) {
        *(float *)(lVar3 + 0x10) = (float)dVar4;
        FUN_148eebeb2(lVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144320d9d FUN_144320d9d body=69 status=ok
// SIG undefined FUN_144320d9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320d9d(void)

{
  _DAT_14cbe4a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a70,1);
  return;
}



// FUNCTION 144320de2 FUN_144320de2 body=169 status=ok
// SIG undefined FUN_144320de2(void)

void FUN_144320de2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str;
  
  if (((((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x1f0), lVar1 != 0)) &&
       (lVar3 = FUN_140dbac94(lVar1), lVar3 != 0)) &&
      ((lVar3 = FUN_140dbafcc(lVar1), lVar3 != 0 &&
       (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)))) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar2 = _wtoi(_Str);
    if (0 < *(int *)(lVar1 + 0x40)) {
      lVar1 = **(longlong **)(lVar1 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) {
        return;
      }
      FUN_148eeb86a(lVar3,*(undefined4 *)(lVar1 + 0xe0),iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 144320e8b FUN_144320e8b body=69 status=ok
// SIG undefined FUN_144320e8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320e8b(void)

{
  _DAT_14cbe4a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a80,1);
  return;
}



// FUNCTION 144320ed0 FUN_144320ed0 body=217 status=ok
// SIG undefined FUN_144320ed0(void)

void FUN_144320ed0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  double dVar4;
  
  if (((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1f0), lVar3 != 0)) &&
       (lVar2 = FUN_140dbac94(lVar3), lVar2 != 0)) &&
      ((lVar2 = FUN_140dbafcc(lVar3), lVar2 != 0 &&
       (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)))) && (0 < (int)param_1[1])) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar4 = _wtof(_Str);
    if (0 < *(int *)(lVar3 + 0x40)) {
      lVar3 = **(longlong **)(lVar3 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0xe0);
      lVar3 = FUN_1411c6420(lVar2,uVar1);
      if (lVar3 != 0) {
        *(float *)(lVar3 + 0x1c) = (float)dVar4;
        FUN_148eebeb2(lVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144320fa9 FUN_144320fa9 body=69 status=ok
// SIG undefined FUN_144320fa9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144320fa9(void)

{
  _DAT_14cbe4a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144320feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4a90,1);
  return;
}



// FUNCTION 144320fee FUN_144320fee body=191 status=ok
// SIG undefined FUN_144320fee(void)

void FUN_144320fee(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  if (((((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x1f0), lVar4 != 0)) &&
       (lVar3 = FUN_140dbac94(lVar4), lVar3 != 0)) &&
      ((lVar3 = FUN_140dbafcc(lVar4), lVar3 != 0 &&
       (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)))) && (0 < *(int *)(param_1 + 1))) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)*param_1;
    }
    uVar2 = FUN_14052c20c(puVar5);
    if (0 < *(int *)(lVar4 + 0x40)) {
      lVar4 = **(longlong **)(lVar4 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      else if (lVar4 == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar4 + 0xe0);
      lVar4 = FUN_1411c6420(lVar3,uVar1);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x20) = uVar2;
        FUN_148eebeb2(lVar3,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443210ad FUN_1443210ad body=69 status=ok
// SIG undefined FUN_1443210ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443210ad(void)

{
  _DAT_14cbe4a98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443210ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4aa0,1);
  return;
}



// FUNCTION 1443210f2 FUN_1443210f2 body=660 status=ok
// SIG undefined FUN_1443210f2(void)

void FUN_1443210f2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
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
  code *local_48;
  code *local_40 [3];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_14432120d;
  if (DAT_14cbadd90 == 0) {
    local_60 = local_40;
    local_40[0] = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1459f2e4c;
    local_68 = &LAB_148c39de3;
    local_70 = &LAB_1457a9eb2;
    local_78 = L"Game";
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (*(int *)(param_1 + 1) < 1)) goto LAB_14432120d;
  FUN_14000bbd8(local_40,*param_1,0);
  lVar2 = *(longlong *)(param_2 + 0x430);
  lVar4 = 0;
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1417de738;
      local_50 = (code *)&LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_2 + 0x430);
      if (lVar2 != 0) goto LAB_144321187;
LAB_144321380:
      lVar4 = 0;
    }
    else {
LAB_144321187:
      lVar4 = 0;
      if ((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_144321380;
        lVar4 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30) {
          lVar4 = lVar2;
        }
      }
    }
  }
  lVar2 = FUN_1404960a8(lVar4);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar3 = &PTR_FUN_14b9b5de8;
    FUN_1447a97f4(puVar3 + 1,local_40);
    *(undefined1 *)(puVar3 + 6) = 0;
    FUN_14039144e(lVar2,puVar3);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
LAB_14432120d:
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144321387 FUN_144321387 body=69 status=ok
// SIG undefined FUN_144321387(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144321387(void)

{
  _DAT_14cbe4aa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443213c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4ab0,1);
  return;
}



// FUNCTION 1443213cc FUN_1443213cc body=749 status=ok
// SIG undefined FUN_1443213cc(void)

void FUN_1443213cc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  float local_74;
  code *local_70;
  undefined1 local_68 [24];
  longlong local_50;
  code *local_40 [3];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) goto LAB_1443214f7;
  if (DAT_14cbadd90 == 0) {
    local_90 = local_40;
    local_40[0] = FUN_141030f22;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1459f2e4c;
    local_98 = &LAB_148c39de3;
    local_a0 = &LAB_1457a9eb2;
    local_a8 = L"Game";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     ((int)param_1[1] < 3)) goto LAB_1443214f7;
  FUN_14000bbd8(local_40,*param_1,0);
  FUN_14000bbd8(local_68,*param_1 + 0x10,0);
  if (*(int *)(*param_1 + 0x28) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(*param_1 + 0x20);
  }
  dVar5 = _wtof(_Str);
  local_74 = (float)dVar5;
  lVar2 = *(longlong *)(param_2 + 0x430);
  if (lVar2 == 0) {
LAB_1443216b3:
    lVar4 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_90 = &local_70;
      local_70 = FUN_1417de738;
      local_80 = (code *)&LAB_145893408;
      local_88 = &LAB_1458cbbd2;
      local_98 = &LAB_147ba21f1;
      local_a0 = &LAB_1463e9233;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x1000000c;
      local_c0 = 8;
      local_c8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_2 + 0x430);
      if (lVar2 == 0) goto LAB_1443216b3;
    }
    lVar4 = 0;
    if ((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_1443216b3;
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar4 = lVar2;
      }
    }
  }
  lVar2 = FUN_1404960a8(lVar4);
  if (lVar2 != 0) {
    uVar3 = FUN_14001cc68(0x108,0x10);
    FUN_148eeb954(uVar3,local_40,local_68,&local_74);
    FUN_14039144e(lVar2,uVar3);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
LAB_1443214f7:
  if ((local_18 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443216ba FUN_1443216ba body=69 status=ok
// SIG undefined FUN_1443216ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443216ba(void)

{
  _DAT_14cbe4ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443216fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe4ac0,1);
  return;
}



// FUNCTION 14432176c FUN_14432176c body=199 status=ok
// SIG undefined FUN_14432176c(void)

undefined8 FUN_14432176c(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(param_1,&DAT_149dfb77a);
  uVar1 = DAT_14cb1aeb8;
  if (*param_2 != 0) {
    FUN_1446dcdd4(local_50,param_2);
    plVar2 = (longlong *)FUN_144837462(uVar1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar4 = FUN_1401548e0();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        FUN_145d0a8d0(plVar2,param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144321880 FUN_144321880 body=29 status=ok
// SIG undefined FUN_144321880(void)

undefined8 FUN_144321880(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443218a2 FUN_1443218a2 body=140 status=ok
// SIG undefined FUN_1443218a2(void)

bool FUN_1443218a2(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "GbxStandInManager";
  local_18 = 0x11;
  local_14 = 0;
  uVar2 = FUN_14001a6c0(&local_20,1);
  bVar3 = true;
  if (*param_2 != (uVar2 & 0xffffffff)) {
    local_20 = "AnimManager";
    local_18 = 0xb;
    local_14 = 0;
    uVar1 = FUN_14001a6c0(&local_20,1);
    bVar3 = *param_2 == (ulonglong)uVar1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144321930 FUN_144321930 body=1938 status=ok
// SIG undefined FUN_144321930(void)

longlong * FUN_144321930(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  void *_Src;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  longlong *local_148 [2];
  longlong *local_138 [2];
  longlong local_128;
  int local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int aiStack_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = (longlong)*(int *)(*(longlong *)*param_1 + 0x418);
  if (lVar10 != 0) {
    plVar14 = *(longlong **)(*(longlong *)*param_1 + 0x410);
    local_180 = plVar14 + lVar10 * 3;
    lVar10 = param_1[1];
    local_190 = lVar10;
    local_188 = param_2;
    do {
      if ((longlong)(int)plVar14[2] != 0) {
        plVar18 = (longlong *)plVar14[1];
        plVar19 = plVar18 + (longlong)(int)plVar14[2] * 0xc;
        do {
          if ((((*(char *)((longlong)plVar18 + 0x5c) == '\x01') && (lVar15 = *plVar18, lVar15 != 0))
              && (*(longlong *)(lVar15 + 0x68) != 0)) && (*(int *)(lVar15 + 0x70) - 1U < 0xfffffffe)
             ) {
            FUN_144245a52(*(undefined8 *)*param_1,&local_108,plVar18,plVar14);
            FUN_1442454d4(*(undefined8 *)*param_1,&local_118,plVar18,plVar14);
            FUN_144245b52(*(undefined8 *)*param_1,&local_128,plVar18,plVar14);
            if (local_120 == *(int *)(lVar10 + 0x360)) {
              if (1 < local_120) {
                lVar15 = 0;
                while( true ) {
                  uVar12 = *(ushort *)(local_128 + lVar15);
                  uVar11 = (ulonglong)uVar12;
                  uVar16 = *(ushort *)(*(longlong *)(lVar10 + 0x358) + lVar15);
                  if (uVar12 != uVar16) break;
                  if (uVar12 == 0) goto LAB_144321abe;
LAB_144321a75:
                  lVar15 = lVar15 + 2;
                }
                if ((uVar16 | uVar12) < 0x80) {
                  uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  uVar17 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                  if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar17]) goto LAB_144321a75;
                }
                bVar5 = true;
                if (uVar12 != uVar16) goto LAB_14432200d;
              }
LAB_144321abe:
              bVar5 = true;
              if (1 < (int)local_100) {
                bVar2 = *(byte *)((longlong)plVar18 + 0x5e);
                lVar10 = FUN_140e6367b();
                if ((longlong)*(int *)(lVar10 + 0x48) != 0) {
                  lVar15 = 0;
                  do {
                    if (*(ulonglong *)(*(longlong *)(lVar10 + 0x40) + 8 + lVar15) ==
                        (ulonglong)bVar2) {
                      local_c8 = *(undefined8 *)(*(longlong *)(lVar10 + 0x40) + lVar15);
                      goto LAB_144321b04;
                    }
                    lVar15 = lVar15 + 0x10;
                  } while ((longlong)*(int *)(lVar10 + 0x48) * 0x10 != lVar15);
                }
                local_c8 = 0;
LAB_144321b04:
                FUN_1400021e4(&local_c8,&local_a0);
                puVar13 = local_a0;
                iVar4 = aiStack_98[0];
                uVar8 = aiStack_98[0] - 1;
                if (aiStack_98[0] == 0) {
                  uVar8 = 0;
                }
                if (0 < (int)uVar8) {
                  uVar11 = 0;
                  do {
                    local_a0[uVar11] =
                         (ushort)((ushort)local_a0[uVar11] - 0x41 < 0x1a) * 0x20 + local_a0[uVar11];
                    uVar11 = uVar11 + 1;
                  } while (uVar8 != uVar11);
                }
                iVar7 = aiStack_98[1];
                local_a0 = (undefined2 *)0x0;
                aiStack_98[0] = 0;
                aiStack_98[1] = 0;
                lVar10 = param_1[2];
                if (*(longlong *)(lVar10 + 0x148) == 0) {
                  *(undefined2 **)(lVar10 + 0x148) = puVar13;
                  *(int *)(lVar10 + 0x150) = iVar4;
                  *(int *)(lVar10 + 0x154) = iVar7;
                }
                else {
                  FUN_1400020a8();
                  *(undefined2 **)(lVar10 + 0x148) = puVar13;
                  *(int *)(lVar10 + 0x150) = iVar4;
                  *(int *)(lVar10 + 0x154) = iVar7;
                  if (local_a0 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                lVar15 = param_1[2];
                FUN_1400b22c2(&local_a0,"eitemcomparisonresult::");
                param_2 = local_188;
                lVar10 = local_190;
                iVar4 = aiStack_98[0] + -1;
                if (aiStack_98[0] == 0) {
                  iVar4 = 0;
                }
                puVar13 = &DAT_149dfb77a;
                if (aiStack_98[0] != 0) {
                  puVar13 = local_a0;
                }
                FUN_140c540b4(lVar15 + 0x148,puVar13,iVar4,1);
                if (local_a0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                lVar15 = param_1[2];
                FUN_1400b22c2(&local_a0,"item_card_compare_");
                FUN_140e63652(lVar15 + 0x148,0,&local_a0);
                if (local_a0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                *(int *)(param_1[2] + 0x170) = (int)plVar18[0xb];
                FUN_140390f7a(*plVar18 + 0x90,param_1[2] + 0x138);
                if (*(int *)(param_1[2] + 0x140) < 2) {
                  if ((*plVar14 != 0) && (*(char *)(*plVar14 + 0x18) == '\x06')) {
                    FUN_144245fa2(*(undefined8 *)*param_1,&local_a0,plVar18);
                    if (CONCAT44(uStack_114,local_118) != 0) {
                      FUN_1400020a8();
                    }
                    local_118 = (undefined4)local_a0;
                    uStack_114 = local_a0._4_4_;
                    uStack_110 = aiStack_98[0];
                    uStack_10c = aiStack_98[1];
                  }
                  FUN_140009b9a(local_148,&local_108);
                  FUN_140009b9a(local_158,&local_118);
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_b8 = 0;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  FUN_1446ddda2(&local_c8,"StatIconMissingSortText",0);
                  FUN_1410d1eba(local_178,&local_c8);
                  FUN_14023409e(&local_168,local_178,1);
                  local_a0 = (undefined2 *)CONCAT44(local_a0._4_4_,4);
                  FUN_14023423e(local_90,local_158);
                  local_80 = 4;
                  FUN_14023423e(local_70,local_148);
                  local_e8 = &local_a0;
                  local_e0 = local_60;
                  FUN_14010d304(&local_d8,&local_e8);
                  local_f8 = local_168;
                  local_f0 = local_160;
                  if (local_160 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_160 + 1) = (int)local_160[1] + 1;
                    UNLOCK();
                  }
                  FUN_14010c016(local_138,&local_f8,&local_d8);
                  FUN_14007f2db(local_d8,local_d0);
                  if (local_d8 != 0) {
                    FUN_1400020a8();
                  }
                  param_2 = local_188;
                  lVar10 = 0x30;
                  do {
                    if (*(longlong **)((longlong)&local_a0 + lVar10) != (longlong *)0x0) {
                      (**(code **)(**(longlong **)((longlong)&local_a0 + lVar10) + 0x10))();
                      *(undefined8 *)((longlong)&local_a0 + lVar10) = 0;
                      *(undefined4 *)(local_90 + lVar10 + -8) = 0;
                    }
                    plVar6 = local_160;
                    lVar10 = lVar10 + -0x20;
                  } while (lVar10 != -0x10);
                  if (local_160 != (longlong *)0x0) {
                    LOCK();
                    plVar9 = local_160 + 1;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)*plVar9 == 0) {
                      (**(code **)*local_160)(local_160);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar6 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                  if (local_158[0] != (longlong *)0x0) {
                    (**(code **)(*local_158[0] + 0x10))();
                  }
                  if (local_148[0] != (longlong *)0x0) {
                    (**(code **)(*local_148[0] + 0x10))();
                  }
                  plVar6 = local_138[0];
                  plVar9 = local_138[0];
                  if (*(code **)(*local_138[0] + 0x50) != FUN_144828418) {
                    plVar9 = (longlong *)(**(code **)(*local_138[0] + 0x50))(local_138[0]);
                  }
                  FUN_1447a1fc0(plVar9);
                  pcVar3 = *(code **)(*plVar6 + 0x28);
                  if (pcVar3 == FUN_14482841c) {
                    plVar9 = (longlong *)(plVar6[5] + 8);
                    if (plVar6[5] == 0) {
                      plVar9 = plVar6 + 3;
                    }
                  }
                  else if (pcVar3 == (code *)&LAB_14010c34c) {
                    plVar9 = plVar6 + 2;
                  }
                  else {
                    plVar9 = (longlong *)(*pcVar3)(plVar6);
                  }
                  *param_2 = 0;
                  iVar4 = (int)plVar9[1];
                  _Src = (void *)*plVar9;
                  *(int *)(param_2 + 1) = iVar4;
                  if ((longlong)iVar4 == 0) {
                    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(param_2,iVar4,0);
                    memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
                  }
                  lVar10 = local_190;
                  if (plVar6 != (longlong *)0x0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                  if (local_178[0] != (longlong *)0x0) {
                    (**(code **)(*local_178[0] + 0x10))();
                  }
                  if (local_b0 != 0) {
                    FUN_1400020a8();
                  }
                  bVar5 = false;
                }
                else {
                  *param_2 = local_108;
                  bVar5 = false;
                  local_108 = 0;
                  *(int *)(param_2 + 1) = (int)local_100;
                  *(undefined4 *)((longlong)param_2 + 0xc) = local_100._4_4_;
                  local_100 = 0;
                }
              }
            }
            else {
              bVar5 = true;
              if (*(int *)(lVar10 + 0x360) + local_120 == 1) goto LAB_144321abe;
            }
LAB_14432200d:
            if (local_128 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_114,local_118) != 0) {
              FUN_1400020a8();
            }
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            if (!bVar5) goto LAB_14432208a;
          }
          plVar18 = plVar18 + 0xc;
        } while (plVar18 != plVar19);
      }
      plVar14 = plVar14 + 3;
    } while (plVar14 != local_180);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14432208a:
  if ((local_60[0] ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1443220f6 FUN_1443220f6 body=29 status=ok
// SIG undefined FUN_1443220f6(void)

undefined8 FUN_1443220f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144322114 FUN_144322114 body=164 status=ok
// SIG undefined FUN_144322114(void)

undefined4
FUN_144322114(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148eecd32(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443221ba FUN_1443221ba body=130 status=ok
// SIG undefined FUN_1443221ba(void)

undefined4
FUN_1443221ba(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148eed31e(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144322274 FUN_144322274 body=29 status=ok
// SIG undefined FUN_144322274(void)

undefined8 FUN_144322274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144322354 FUN_144322354 body=12 status=ok
// SIG undefined FUN_144322354(void)

void FUN_144322354(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014432235d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144322360 FUN_144322360 body=29 status=ok
// SIG undefined FUN_144322360(void)

undefined8 FUN_144322360(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14432237e FUN_14432237e body=499 status=ok
// SIG undefined FUN_14432237e(void)

uint FUN_14432237e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  
  if (((*(byte *)((longlong)param_2 + 0x9c) & 1) == 0) ||
     ((*(byte *)((longlong)param_3 + 0x9c) & 1) != 0)) {
    bVar2 = *(byte *)((longlong)param_2 + 0x9e) >> 4;
    if ((bool)(bVar2 & 1) != ((*(byte *)((longlong)param_3 + 0x9e) >> 4 & 1) != 0)) {
      return bVar2 & 0xffffff01;
    }
    if ((char)(*(byte *)((longlong)param_2 + 0x9d) ^ *(byte *)((longlong)param_3 + 0x9d)) < '\0') {
      return (uint)(*(byte *)((longlong)param_3 + 0x9d) >> 7);
    }
    if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
      if ((*(byte *)((longlong)param_2 + 0x9c) & 2) == 0) {
        if ((*(byte *)((longlong)param_3 + 0x9c) & 2) != 0) {
          return 1;
        }
      }
      else if ((*(byte *)((longlong)param_3 + 0x9c) & 2) == 0) goto LAB_1443223ff;
    }
    if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
      iVar3 = FUN_148ee5650(param_2,param_3);
    }
    else {
      iVar3 = FUN_148ee54a8(param_2,param_3);
    }
    uVar4 = (uint)(iVar3 == 1);
    if (iVar3 == 2) {
      iVar3 = *(int *)((longlong)param_3 + 0x8c);
      iVar1 = *(int *)((longlong)param_2 + 0x8c);
      bVar14 = SBORROW4(iVar1,iVar3);
      bVar13 = iVar1 - iVar3 < 0;
      if (iVar1 == iVar3) {
        if (*(int *)((longlong)param_2 + 0x94) != *(int *)((longlong)param_3 + 0x94)) {
          return (uint)(*(int *)((longlong)param_2 + 0x94) < *(int *)((longlong)param_3 + 0x94));
        }
        iVar3 = *(int *)((longlong)param_3 + 0x84);
        iVar1 = *(int *)((longlong)param_2 + 0x84);
        bVar14 = SBORROW4(iVar1,iVar3);
        bVar13 = iVar1 - iVar3 < 0;
        if (iVar1 == iVar3) {
          iVar3 = *(int *)(param_3 + 0x11);
          iVar1 = *(int *)(param_2 + 0x11);
          bVar14 = SBORROW4(iVar1,iVar3);
          bVar13 = iVar1 - iVar3 < 0;
          if (iVar1 == iVar3) {
            iVar3 = *(int *)(param_2 + 1);
            iVar1 = *(int *)(param_3 + 1);
            if (iVar3 == iVar1) {
              if (iVar3 < 2) {
                return 1;
              }
              puVar5 = (undefined2 *)*param_3;
              puVar6 = (undefined2 *)*param_2;
              lVar10 = 0;
              while( true ) {
                uVar11 = *(ushort *)((longlong)puVar6 + lVar10);
                uVar12 = (ulonglong)uVar11;
                uVar7 = *(ushort *)((longlong)puVar5 + lVar10);
                if (uVar11 != uVar7) break;
                if (uVar11 == 0) {
                  return 1;
                }
LAB_1443224b9:
                lVar10 = lVar10 + 2;
              }
              if ((uVar7 | uVar11) < 0x80) {
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                uVar8 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar8]) goto LAB_1443224b9;
              }
              if (uVar11 == uVar7) {
                return 1;
              }
            }
            else {
              if (iVar1 + iVar3 == 1) {
                return 1;
              }
              puVar5 = (undefined2 *)*param_3;
              puVar6 = (undefined2 *)*param_2;
            }
            if (iVar1 == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            if (iVar3 == 0) {
              puVar6 = &DAT_149dfb77a;
            }
            lVar10 = 0;
            while( true ) {
              uVar11 = *(ushort *)((longlong)puVar6 + lVar10);
              uVar4 = (uint)uVar11;
              uVar7 = *(ushort *)((longlong)puVar5 + lVar10);
              uVar9 = (uint)uVar7;
              if (uVar11 != uVar7) {
                if ((uVar7 | uVar11) < 0x80) {
                  uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                  uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar7];
                  if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar7]) goto LAB_14432253e;
                }
                uVar4 = uVar4 - uVar9;
                goto LAB_144322569;
              }
              if (uVar11 == 0) break;
LAB_14432253e:
              lVar10 = lVar10 + 2;
            }
            uVar4 = 0;
LAB_144322569:
            return uVar4 >> 0x1f;
          }
        }
      }
      uVar4 = (uint)(bVar14 == bVar13);
    }
  }
  else {
LAB_1443223ff:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144322590 FUN_144322590 body=12 status=ok
// SIG undefined FUN_144322590(void)

void FUN_144322590(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144322599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14432259c FUN_14432259c body=29 status=ok
// SIG undefined FUN_14432259c(void)

undefined8 FUN_14432259c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443225ba FUN_1443225ba body=751 status=ok
// SIG undefined FUN_1443225ba(void)

uint FUN_1443225ba(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  if (((*(byte *)(param_2 + 0x9c) & 1) != 0) && ((*(byte *)(param_3 + 0x9c) & 1) == 0)) {
    return 0;
  }
  bVar2 = *(byte *)(param_2 + 0x9e) >> 4;
  if ((bool)(bVar2 & 1) != ((*(byte *)(param_3 + 0x9e) >> 4 & 1) != 0)) {
    return bVar2 & 0xffffff01;
  }
  if ((char)(*(byte *)(param_2 + 0x9d) ^ *(byte *)(param_3 + 0x9d)) < '\0') {
    return (uint)(*(byte *)(param_3 + 0x9d) >> 7);
  }
  if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
    if ((*(byte *)(param_2 + 0x9c) & 2) == 0) {
      if ((*(byte *)(param_3 + 0x9c) & 2) != 0) {
        return 1;
      }
    }
    else if ((*(byte *)(param_3 + 0x9c) & 2) == 0) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_2 + 0x18);
  iVar1 = *(int *)(param_3 + 0x18);
  if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
    if (iVar4 == iVar1) {
      if (1 < iVar4) {
        puVar5 = *(undefined2 **)(param_3 + 0x10);
        puVar8 = *(undefined2 **)(param_2 + 0x10);
        lVar9 = 0;
        while( true ) {
          uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
          uVar12 = (ulonglong)uVar11;
          uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
          if (uVar11 != uVar6) break;
          if (uVar11 == 0) goto LAB_1443227c9;
LAB_14432267d:
          lVar9 = lVar9 + 2;
        }
        if ((uVar6 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_14432267d;
        }
        if (uVar11 != uVar6) goto LAB_144322761;
      }
    }
    else if (iVar1 + iVar4 != 1) {
      puVar5 = *(undefined2 **)(param_3 + 0x10);
      puVar8 = *(undefined2 **)(param_2 + 0x10);
LAB_144322761:
      if (iVar1 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      if (iVar4 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      lVar9 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
        uVar3 = (uint)uVar11;
        uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
        uVar10 = (uint)uVar6;
        if (uVar11 != uVar6) {
          if ((uVar6 | uVar11) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar11];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar6]) goto LAB_144322795;
          }
          iVar4 = uVar3 - uVar10;
          goto LAB_144322846;
        }
        if (uVar11 == 0) break;
LAB_144322795:
        lVar9 = lVar9 + 2;
      }
      iVar4 = 0;
LAB_144322846:
      bVar15 = false;
      bVar14 = iVar4 < 0;
      bVar13 = iVar4 == 0;
      goto LAB_1443227d7;
    }
  }
  else if (iVar4 == iVar1) {
    if (1 < iVar4) {
      puVar5 = *(undefined2 **)(param_3 + 0x10);
      puVar8 = *(undefined2 **)(param_2 + 0x10);
      lVar9 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
        uVar12 = (ulonglong)uVar11;
        uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
        if (uVar11 != uVar6) break;
        if (uVar11 == 0) goto LAB_1443227c9;
LAB_144322710:
        lVar9 = lVar9 + 2;
      }
      if ((uVar6 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_144322710;
      }
      if (uVar11 != uVar6) goto LAB_1443227eb;
    }
  }
  else if (iVar1 + iVar4 != 1) {
    puVar5 = *(undefined2 **)(param_3 + 0x10);
    puVar8 = *(undefined2 **)(param_2 + 0x10);
LAB_1443227eb:
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    if (iVar4 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    lVar9 = 0;
    while( true ) {
      uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
      uVar3 = (uint)uVar11;
      uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
      uVar10 = (uint)uVar6;
      if (uVar11 != uVar6) {
        if ((uVar6 | uVar11) < 0x80) {
          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar11];
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar6]) goto LAB_14432281b;
        }
        uVar3 = uVar3 - uVar10;
        goto LAB_14432284c;
      }
      if (uVar11 == 0) break;
LAB_14432281b:
      lVar9 = lVar9 + 2;
    }
    uVar3 = 0;
LAB_14432284c:
    return uVar3 >> 0x1f;
  }
LAB_1443227c9:
  iVar4 = *(int *)(param_3 + 0x8c);
  iVar1 = *(int *)(param_2 + 0x8c);
  bVar15 = SBORROW4(iVar1,iVar4);
  bVar14 = iVar1 - iVar4 < 0;
  bVar13 = false;
  if (iVar1 == iVar4) {
    iVar4 = FUN_148ee54a8(param_2,param_3);
    if (iVar4 != 2) {
      return (uint)(iVar4 == 1);
    }
    if (*(int *)(param_2 + 0x94) != *(int *)(param_3 + 0x94)) {
      return (uint)(*(int *)(param_2 + 0x94) < *(int *)(param_3 + 0x94));
    }
    iVar4 = *(int *)(param_3 + 0x84);
    iVar1 = *(int *)(param_2 + 0x84);
    bVar15 = SBORROW4(iVar1,iVar4);
    bVar14 = iVar1 - iVar4 < 0;
    bVar13 = false;
    if (iVar1 == iVar4) {
      return (uint)(*(int *)(param_3 + 0x88) <= *(int *)(param_2 + 0x88));
    }
  }
LAB_1443227d7:
  return (uint)(!bVar13 && bVar15 == bVar14);
}



// FUNCTION 1443228c8 FUN_1443228c8 body=12 status=ok
// SIG undefined FUN_1443228c8(void)

void FUN_1443228c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443228d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443228d4 FUN_1443228d4 body=29 status=ok
// SIG undefined FUN_1443228d4(void)

undefined8 FUN_1443228d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443228f2 FUN_1443228f2 body=743 status=ok
// SIG undefined FUN_1443228f2(void)

uint FUN_1443228f2(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  if (((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) &&
     ((*(byte *)((longlong)param_3 + 0x9c) & 1) == 0)) {
    return 0;
  }
  bVar2 = *(byte *)((longlong)param_2 + 0x9e) >> 4;
  if ((bool)(bVar2 & 1) != ((*(byte *)((longlong)param_3 + 0x9e) >> 4 & 1) != 0)) {
    return bVar2 & 0xffffff01;
  }
  if ((char)(*(byte *)((longlong)param_2 + 0x9d) ^ *(byte *)((longlong)param_3 + 0x9d)) < '\0') {
    return (uint)(*(byte *)((longlong)param_3 + 0x9d) >> 7);
  }
  if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
    if ((*(byte *)((longlong)param_2 + 0x9c) & 2) == 0) {
      if ((*(byte *)((longlong)param_3 + 0x9c) & 2) != 0) {
        return 1;
      }
    }
    else if ((*(byte *)((longlong)param_3 + 0x9c) & 2) == 0) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_2 + 1);
  iVar1 = *(int *)(param_3 + 1);
  if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
    if (iVar4 == iVar1) {
      if (1 < iVar4) {
        puVar5 = (undefined2 *)*param_3;
        puVar8 = (undefined2 *)*param_2;
        lVar9 = 0;
        while( true ) {
          uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
          uVar12 = (ulonglong)uVar11;
          uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
          if (uVar11 != uVar6) break;
          if (uVar11 == 0) goto LAB_144322afb;
LAB_1443229b3:
          lVar9 = lVar9 + 2;
        }
        if ((uVar6 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_1443229b3;
        }
        if (uVar11 != uVar6) goto LAB_144322a93;
      }
    }
    else if (iVar1 + iVar4 != 1) {
      puVar5 = (undefined2 *)*param_3;
      puVar8 = (undefined2 *)*param_2;
LAB_144322a93:
      if (iVar1 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      if (iVar4 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      lVar9 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
        uVar3 = (uint)uVar11;
        uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
        uVar10 = (uint)uVar6;
        if (uVar11 != uVar6) {
          if ((uVar6 | uVar11) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar11];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar6]) goto LAB_144322ac7;
          }
          iVar4 = uVar3 - uVar10;
          goto LAB_144322b76;
        }
        if (uVar11 == 0) break;
LAB_144322ac7:
        lVar9 = lVar9 + 2;
      }
      iVar4 = 0;
LAB_144322b76:
      bVar15 = false;
      bVar14 = iVar4 < 0;
      bVar13 = iVar4 == 0;
      goto LAB_144322b09;
    }
  }
  else if (iVar4 == iVar1) {
    if (1 < iVar4) {
      puVar5 = (undefined2 *)*param_3;
      puVar8 = (undefined2 *)*param_2;
      lVar9 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
        uVar12 = (ulonglong)uVar11;
        uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
        if (uVar11 != uVar6) break;
        if (uVar11 == 0) goto LAB_144322afb;
LAB_144322a44:
        lVar9 = lVar9 + 2;
      }
      if ((uVar6 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_144322a44;
      }
      if (uVar11 != uVar6) goto LAB_144322b1b;
    }
  }
  else if (iVar1 + iVar4 != 1) {
    puVar5 = (undefined2 *)*param_3;
    puVar8 = (undefined2 *)*param_2;
LAB_144322b1b:
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    if (iVar4 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    lVar9 = 0;
    while( true ) {
      uVar11 = *(ushort *)((longlong)puVar8 + lVar9);
      uVar3 = (uint)uVar11;
      uVar6 = *(ushort *)((longlong)puVar5 + lVar9);
      uVar10 = (uint)uVar6;
      if (uVar11 != uVar6) {
        if ((uVar6 | uVar11) < 0x80) {
          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar11];
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar6]) goto LAB_144322b4b;
        }
        uVar3 = uVar3 - uVar10;
        goto LAB_144322b7c;
      }
      if (uVar11 == 0) break;
LAB_144322b4b:
      lVar9 = lVar9 + 2;
    }
    uVar3 = 0;
LAB_144322b7c:
    return uVar3 >> 0x1f;
  }
LAB_144322afb:
  iVar4 = *(int *)((longlong)param_3 + 0x8c);
  iVar1 = *(int *)((longlong)param_2 + 0x8c);
  bVar15 = SBORROW4(iVar1,iVar4);
  bVar14 = iVar1 - iVar4 < 0;
  bVar13 = false;
  if (iVar1 == iVar4) {
    iVar4 = FUN_148ee54a8(param_2,param_3);
    if (iVar4 != 2) {
      return (uint)(iVar4 == 1);
    }
    if (*(int *)((longlong)param_2 + 0x94) != *(int *)((longlong)param_3 + 0x94)) {
      return (uint)(*(int *)((longlong)param_2 + 0x94) < *(int *)((longlong)param_3 + 0x94));
    }
    iVar4 = *(int *)((longlong)param_3 + 0x84);
    iVar1 = *(int *)((longlong)param_2 + 0x84);
    bVar15 = SBORROW4(iVar1,iVar4);
    bVar14 = iVar1 - iVar4 < 0;
    bVar13 = false;
    if (iVar1 == iVar4) {
      return (uint)(*(int *)(param_3 + 0x11) <= *(int *)(param_2 + 0x11));
    }
  }
LAB_144322b09:
  return (uint)(!bVar13 && bVar15 == bVar14);
}



// FUNCTION 144322bf8 FUN_144322bf8 body=12 status=ok
// SIG undefined FUN_144322bf8(void)

void FUN_144322bf8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144322c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144322c04 FUN_144322c04 body=29 status=ok
// SIG undefined FUN_144322c04(void)

undefined8 FUN_144322c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144322c22 FUN_144322c22 body=492 status=ok
// SIG undefined FUN_144322c22(void)

uint FUN_144322c22(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  
  if (((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) &&
     ((*(byte *)((longlong)param_3 + 0x9c) & 1) == 0)) {
    return 0;
  }
  bVar3 = *(byte *)((longlong)param_2 + 0x9e) >> 4;
  if ((bool)(bVar3 & 1) != ((*(byte *)((longlong)param_3 + 0x9e) >> 4 & 1) != 0)) {
    return bVar3 & 0xffffff01;
  }
  if ((char)(*(byte *)((longlong)param_2 + 0x9d) ^ *(byte *)((longlong)param_3 + 0x9d)) < '\0') {
    return (uint)(*(byte *)((longlong)param_3 + 0x9d) >> 7);
  }
  iVar4 = *(int *)((longlong)param_2 + 0x84);
  iVar1 = *(int *)((longlong)param_3 + 0x84);
  if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
    bVar15 = SBORROW4(iVar4,iVar1);
    bVar14 = iVar4 - iVar1 < 0;
    if (iVar4 == iVar1) {
LAB_144322cb2:
      if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
        if ((*(byte *)((longlong)param_2 + 0x9c) & 2) == 0) {
          if ((*(byte *)((longlong)param_3 + 0x9c) & 2) != 0) {
            return 1;
          }
        }
        else if ((*(byte *)((longlong)param_3 + 0x9c) & 2) == 0) {
          return 0;
        }
      }
      iVar4 = *(int *)((longlong)param_3 + 0x8c);
      iVar1 = *(int *)((longlong)param_2 + 0x8c);
      bVar15 = SBORROW4(iVar1,iVar4);
      bVar14 = iVar1 - iVar4 < 0;
      if (iVar1 == iVar4) {
        iVar4 = FUN_148ee54a8(param_2,param_3);
        if (iVar4 != 2) {
          return (uint)(iVar4 == 1);
        }
        iVar4 = *(int *)((longlong)param_3 + 0x94);
        iVar1 = *(int *)((longlong)param_2 + 0x94);
        bVar14 = SBORROW4(iVar1,iVar4);
        iVar2 = iVar1 - iVar4;
        if (iVar1 != iVar4) goto LAB_144322d8f;
        iVar4 = *(int *)(param_3 + 0x11);
        iVar1 = *(int *)(param_2 + 0x11);
        bVar15 = SBORROW4(iVar1,iVar4);
        bVar14 = iVar1 - iVar4 < 0;
        if (iVar1 == iVar4) {
          iVar4 = *(int *)(param_2 + 1);
          iVar1 = *(int *)(param_3 + 1);
          if (iVar4 == iVar1) {
            if (iVar4 < 2) {
              return 1;
            }
            puVar6 = (undefined2 *)*param_3;
            puVar7 = (undefined2 *)*param_2;
            lVar11 = 0;
            while( true ) {
              uVar12 = *(ushort *)((longlong)puVar7 + lVar11);
              uVar13 = (ulonglong)uVar12;
              uVar8 = *(ushort *)((longlong)puVar6 + lVar11);
              if (uVar12 != uVar8) break;
              if (uVar12 == 0) {
                return 1;
              }
LAB_144322d65:
              lVar11 = lVar11 + 2;
            }
            if ((uVar8 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar9 = (ulonglong)uVar8;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar9]) goto LAB_144322d65;
            }
            if (uVar12 == uVar8) {
              return 1;
            }
          }
          else {
            if (iVar1 + iVar4 == 1) {
              return 1;
            }
            puVar6 = (undefined2 *)*param_3;
            puVar7 = (undefined2 *)*param_2;
          }
          if (iVar1 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          if (iVar4 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          lVar11 = 0;
          while( true ) {
            uVar12 = *(ushort *)((longlong)puVar7 + lVar11);
            uVar5 = (uint)uVar12;
            uVar8 = *(ushort *)((longlong)puVar6 + lVar11);
            uVar10 = (uint)uVar8;
            if (uVar12 != uVar8) {
              if ((uVar8 | uVar12) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar8]) goto LAB_144322dde;
              }
              uVar5 = uVar5 - uVar10;
              goto LAB_144322e09;
            }
            if (uVar12 == 0) break;
LAB_144322dde:
            lVar11 = lVar11 + 2;
          }
          uVar5 = 0;
LAB_144322e09:
          return uVar5 >> 0x1f;
        }
      }
    }
    bVar14 = bVar15 == bVar14;
  }
  else {
    bVar14 = SBORROW4(iVar4,iVar1);
    iVar2 = iVar4 - iVar1;
    if (iVar4 == iVar1) goto LAB_144322cb2;
LAB_144322d8f:
    bVar14 = bVar14 != iVar2 < 0;
  }
  return (uint)bVar14;
}



// FUNCTION 144322e2c FUN_144322e2c body=12 status=ok
// SIG undefined FUN_144322e2c(void)

void FUN_144322e2c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144322e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144322e38 FUN_144322e38 body=29 status=ok
// SIG undefined FUN_144322e38(void)

undefined8 FUN_144322e38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144322e56 FUN_144322e56 body=497 status=ok
// SIG undefined FUN_144322e56(void)

uint FUN_144322e56(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  
  if (((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) &&
     ((*(byte *)((longlong)param_3 + 0x9c) & 1) == 0)) {
    return 0;
  }
  bVar3 = *(byte *)((longlong)param_2 + 0x9e) >> 4;
  if ((bool)(bVar3 & 1) != ((*(byte *)((longlong)param_3 + 0x9e) >> 4 & 1) != 0)) {
    return bVar3 & 0xffffff01;
  }
  if ((char)(*(byte *)((longlong)param_2 + 0x9d) ^ *(byte *)((longlong)param_3 + 0x9d)) < '\0') {
    return (uint)(*(byte *)((longlong)param_3 + 0x9d) >> 7);
  }
  iVar4 = *(int *)((longlong)param_2 + 0x8c);
  iVar1 = *(int *)((longlong)param_3 + 0x8c);
  if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
    bVar15 = SBORROW4(iVar4,iVar1);
    bVar14 = iVar4 - iVar1 < 0;
    if (iVar4 == iVar1) {
LAB_144322eec:
      if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
        if ((*(byte *)((longlong)param_2 + 0x9c) & 2) == 0) {
          if ((*(byte *)((longlong)param_3 + 0x9c) & 2) != 0) {
            return 1;
          }
        }
        else if ((*(byte *)((longlong)param_3 + 0x9c) & 2) == 0) {
          return 0;
        }
      }
      iVar4 = FUN_148ee54a8(param_2,param_3);
      if (iVar4 != 2) {
        return (uint)(iVar4 == 1);
      }
      iVar4 = *(int *)((longlong)param_3 + 0x94);
      iVar1 = *(int *)((longlong)param_2 + 0x94);
      bVar14 = SBORROW4(iVar1,iVar4);
      iVar2 = iVar1 - iVar4;
      if (iVar1 != iVar4) goto LAB_144322fc8;
      iVar4 = *(int *)((longlong)param_3 + 0x84);
      iVar1 = *(int *)((longlong)param_2 + 0x84);
      bVar15 = SBORROW4(iVar1,iVar4);
      bVar14 = iVar1 - iVar4 < 0;
      if (iVar1 == iVar4) {
        iVar4 = *(int *)(param_3 + 0x11);
        iVar1 = *(int *)(param_2 + 0x11);
        bVar15 = SBORROW4(iVar1,iVar4);
        bVar14 = iVar1 - iVar4 < 0;
        if (iVar1 == iVar4) {
          iVar4 = *(int *)(param_2 + 1);
          iVar1 = *(int *)(param_3 + 1);
          if (iVar4 == iVar1) {
            if (iVar4 < 2) {
              return 1;
            }
            puVar6 = (undefined2 *)*param_3;
            puVar7 = (undefined2 *)*param_2;
            lVar11 = 0;
            while( true ) {
              uVar12 = *(ushort *)((longlong)puVar7 + lVar11);
              uVar13 = (ulonglong)uVar12;
              uVar8 = *(ushort *)((longlong)puVar6 + lVar11);
              if (uVar12 != uVar8) break;
              if (uVar12 == 0) {
                return 1;
              }
LAB_144322f9e:
              lVar11 = lVar11 + 2;
            }
            if ((uVar8 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar9 = (ulonglong)uVar8;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar9]) goto LAB_144322f9e;
            }
            if (uVar12 == uVar8) {
              return 1;
            }
          }
          else {
            if (iVar1 + iVar4 == 1) {
              return 1;
            }
            puVar6 = (undefined2 *)*param_3;
            puVar7 = (undefined2 *)*param_2;
          }
          if (iVar1 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          if (iVar4 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          lVar11 = 0;
          while( true ) {
            uVar12 = *(ushort *)((longlong)puVar7 + lVar11);
            uVar5 = (uint)uVar12;
            uVar8 = *(ushort *)((longlong)puVar6 + lVar11);
            uVar10 = (uint)uVar8;
            if (uVar12 != uVar8) {
              if ((uVar8 | uVar12) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar8]) goto LAB_144323017;
              }
              uVar5 = uVar5 - uVar10;
              goto LAB_144323042;
            }
            if (uVar12 == 0) break;
LAB_144323017:
            lVar11 = lVar11 + 2;
          }
          uVar5 = 0;
LAB_144323042:
          return uVar5 >> 0x1f;
        }
      }
    }
    bVar14 = bVar15 == bVar14;
  }
  else {
    bVar14 = SBORROW4(iVar4,iVar1);
    iVar2 = iVar4 - iVar1;
    if (iVar4 == iVar1) goto LAB_144322eec;
LAB_144322fc8:
    bVar14 = bVar14 != iVar2 < 0;
  }
  return (uint)bVar14;
}



// FUNCTION 144323066 FUN_144323066 body=12 status=ok
// SIG undefined FUN_144323066(void)

void FUN_144323066(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014432306f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144323072 FUN_144323072 body=29 status=ok
// SIG undefined FUN_144323072(void)

undefined8 FUN_144323072(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144323090 FUN_144323090 body=492 status=ok
// SIG undefined FUN_144323090(void)

uint FUN_144323090(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  
  if (((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) &&
     ((*(byte *)((longlong)param_3 + 0x9c) & 1) == 0)) {
    return 0;
  }
  bVar3 = *(byte *)((longlong)param_2 + 0x9e) >> 4;
  if ((bool)(bVar3 & 1) != ((*(byte *)((longlong)param_3 + 0x9e) >> 4 & 1) != 0)) {
    return bVar3 & 0xffffff01;
  }
  if ((char)(*(byte *)((longlong)param_2 + 0x9d) ^ *(byte *)((longlong)param_3 + 0x9d)) < '\0') {
    return (uint)(*(byte *)((longlong)param_3 + 0x9d) >> 7);
  }
  iVar4 = *(int *)(param_2 + 0x11);
  iVar1 = *(int *)(param_3 + 0x11);
  if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
    bVar15 = SBORROW4(iVar4,iVar1);
    bVar14 = iVar4 - iVar1 < 0;
    if (iVar4 == iVar1) {
LAB_144323120:
      if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
        if ((*(byte *)((longlong)param_2 + 0x9c) & 2) == 0) {
          if ((*(byte *)((longlong)param_3 + 0x9c) & 2) != 0) {
            return 1;
          }
        }
        else if ((*(byte *)((longlong)param_3 + 0x9c) & 2) == 0) {
          return 0;
        }
      }
      iVar4 = *(int *)((longlong)param_3 + 0x8c);
      iVar1 = *(int *)((longlong)param_2 + 0x8c);
      bVar15 = SBORROW4(iVar1,iVar4);
      bVar14 = iVar1 - iVar4 < 0;
      if (iVar1 == iVar4) {
        iVar4 = FUN_148ee54a8(param_2,param_3);
        if (iVar4 != 2) {
          return (uint)(iVar4 == 1);
        }
        iVar4 = *(int *)((longlong)param_3 + 0x94);
        iVar1 = *(int *)((longlong)param_2 + 0x94);
        bVar14 = SBORROW4(iVar1,iVar4);
        iVar2 = iVar1 - iVar4;
        if (iVar1 != iVar4) goto LAB_1443231fd;
        iVar4 = *(int *)((longlong)param_3 + 0x84);
        iVar1 = *(int *)((longlong)param_2 + 0x84);
        bVar15 = SBORROW4(iVar1,iVar4);
        bVar14 = iVar1 - iVar4 < 0;
        if (iVar1 == iVar4) {
          iVar4 = *(int *)(param_2 + 1);
          iVar1 = *(int *)(param_3 + 1);
          if (iVar4 == iVar1) {
            if (iVar4 < 2) {
              return 1;
            }
            puVar6 = (undefined2 *)*param_3;
            puVar7 = (undefined2 *)*param_2;
            lVar11 = 0;
            while( true ) {
              uVar12 = *(ushort *)((longlong)puVar7 + lVar11);
              uVar13 = (ulonglong)uVar12;
              uVar8 = *(ushort *)((longlong)puVar6 + lVar11);
              if (uVar12 != uVar8) break;
              if (uVar12 == 0) {
                return 1;
              }
LAB_1443231d3:
              lVar11 = lVar11 + 2;
            }
            if ((uVar8 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar9 = (ulonglong)uVar8;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar9]) goto LAB_1443231d3;
            }
            if (uVar12 == uVar8) {
              return 1;
            }
          }
          else {
            if (iVar1 + iVar4 == 1) {
              return 1;
            }
            puVar6 = (undefined2 *)*param_3;
            puVar7 = (undefined2 *)*param_2;
          }
          if (iVar1 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          if (iVar4 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          lVar11 = 0;
          while( true ) {
            uVar12 = *(ushort *)((longlong)puVar7 + lVar11);
            uVar5 = (uint)uVar12;
            uVar8 = *(ushort *)((longlong)puVar6 + lVar11);
            uVar10 = (uint)uVar8;
            if (uVar12 != uVar8) {
              if ((uVar8 | uVar12) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar8]) goto LAB_14432324c;
              }
              uVar5 = uVar5 - uVar10;
              goto LAB_144323277;
            }
            if (uVar12 == 0) break;
LAB_14432324c:
            lVar11 = lVar11 + 2;
          }
          uVar5 = 0;
LAB_144323277:
          return uVar5 >> 0x1f;
        }
      }
    }
    bVar14 = bVar15 == bVar14;
  }
  else {
    bVar14 = SBORROW4(iVar4,iVar1);
    iVar2 = iVar4 - iVar1;
    if (iVar4 == iVar1) goto LAB_144323120;
LAB_1443231fd:
    bVar14 = bVar14 != iVar2 < 0;
  }
  return (uint)bVar14;
}



// FUNCTION 14432329a FUN_14432329a body=12 status=ok
// SIG undefined FUN_14432329a(void)

void FUN_14432329a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443232a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443232a6 FUN_1443232a6 body=29 status=ok
// SIG undefined FUN_1443232a6(void)

undefined8 FUN_1443232a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443232c4 FUN_1443232c4 body=482 status=ok
// SIG undefined FUN_1443232c4(void)

uint FUN_1443232c4(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  
  if (((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) &&
     ((*(byte *)((longlong)param_3 + 0x9c) & 1) == 0)) {
    return 0;
  }
  bVar2 = *(byte *)((longlong)param_2 + 0x9e) >> 4;
  if ((bool)(bVar2 & 1) != ((*(byte *)((longlong)param_3 + 0x9e) >> 4 & 1) != 0)) {
    return bVar2 & 0xffffff01;
  }
  if ((char)(*(byte *)((longlong)param_2 + 0x9d) ^ *(byte *)((longlong)param_3 + 0x9d)) < '\0') {
    return (uint)(*(byte *)((longlong)param_3 + 0x9d) >> 7);
  }
  iVar3 = *(int *)((longlong)param_2 + 0x94);
  iVar1 = *(int *)((longlong)param_3 + 0x94);
  if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
    bVar14 = SBORROW4(iVar3,iVar1);
    bVar13 = iVar3 - iVar1 < 0;
    if (iVar3 != iVar1) goto LAB_14432333a;
  }
  else if (iVar3 != iVar1) {
    return (uint)(iVar3 < iVar1);
  }
  if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
    if ((*(byte *)((longlong)param_2 + 0x9c) & 2) == 0) {
      if ((*(byte *)((longlong)param_3 + 0x9c) & 2) != 0) {
        return 1;
      }
    }
    else if ((*(byte *)((longlong)param_3 + 0x9c) & 2) == 0) {
      return 0;
    }
  }
  iVar3 = FUN_148ee54a8(param_2,param_3);
  if (iVar3 != 2) {
    return (uint)(iVar3 == 1);
  }
  iVar3 = *(int *)((longlong)param_3 + 0x8c);
  iVar1 = *(int *)((longlong)param_2 + 0x8c);
  bVar14 = SBORROW4(iVar1,iVar3);
  bVar13 = iVar1 - iVar3 < 0;
  if (iVar1 == iVar3) {
    iVar3 = *(int *)((longlong)param_3 + 0x84);
    iVar1 = *(int *)((longlong)param_2 + 0x84);
    bVar14 = SBORROW4(iVar1,iVar3);
    bVar13 = iVar1 - iVar3 < 0;
    if (iVar1 == iVar3) {
      iVar3 = *(int *)(param_3 + 0x11);
      iVar1 = *(int *)(param_2 + 0x11);
      bVar14 = SBORROW4(iVar1,iVar3);
      bVar13 = iVar1 - iVar3 < 0;
      if (iVar1 == iVar3) {
        iVar3 = *(int *)(param_2 + 1);
        iVar1 = *(int *)(param_3 + 1);
        if (iVar3 == iVar1) {
          if (iVar3 < 2) {
            return 1;
          }
          puVar5 = (undefined2 *)*param_3;
          puVar6 = (undefined2 *)*param_2;
          lVar10 = 0;
          while( true ) {
            uVar11 = *(ushort *)((longlong)puVar6 + lVar10);
            uVar12 = (ulonglong)uVar11;
            uVar7 = *(ushort *)((longlong)puVar5 + lVar10);
            if (uVar11 != uVar7) break;
            if (uVar11 == 0) {
              return 1;
            }
LAB_1443233fe:
            lVar10 = lVar10 + 2;
          }
          if ((uVar7 | uVar11) < 0x80) {
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar8 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar8]) goto LAB_1443233fe;
          }
          if (uVar11 == uVar7) {
            return 1;
          }
        }
        else {
          if (iVar1 + iVar3 == 1) {
            return 1;
          }
          puVar5 = (undefined2 *)*param_3;
          puVar6 = (undefined2 *)*param_2;
        }
        if (iVar1 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        if (iVar3 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar10 = 0;
        while( true ) {
          uVar11 = *(ushort *)((longlong)puVar6 + lVar10);
          uVar4 = (uint)uVar11;
          uVar7 = *(ushort *)((longlong)puVar5 + lVar10);
          uVar9 = (uint)uVar7;
          if (uVar11 != uVar7) {
            if ((uVar7 | uVar11) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar11];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar7];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar7]) goto LAB_144323473;
            }
            uVar4 = uVar4 - uVar9;
            goto LAB_14432349e;
          }
          if (uVar11 == 0) break;
LAB_144323473:
          lVar10 = lVar10 + 2;
        }
        uVar4 = 0;
LAB_14432349e:
        return uVar4 >> 0x1f;
      }
    }
  }
LAB_14432333a:
  return (uint)(bVar14 == bVar13);
}



// FUNCTION 1443234c4 FUN_1443234c4 body=12 status=ok
// SIG undefined FUN_1443234c4(void)

void FUN_1443234c4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443234cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443234d0 FUN_1443234d0 body=29 status=ok
// SIG undefined FUN_1443234d0(void)

undefined8 FUN_1443234d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443234ee FUN_1443234ee body=665 status=ok
// SIG undefined FUN_1443234ee(void)

uint FUN_1443234ee(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  bool bVar17;
  
  if (((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) &&
     ((*(byte *)((longlong)param_3 + 0x9c) & 1) == 0)) {
    return 0;
  }
  bVar5 = *(byte *)((longlong)param_2 + 0x9e) >> 4;
  if ((bool)(bVar5 & 1) != ((*(byte *)((longlong)param_3 + 0x9e) >> 4 & 1) != 0)) {
    return bVar5 & 0xffffff01;
  }
  if ((char)(*(byte *)((longlong)param_2 + 0x9d) ^ *(byte *)((longlong)param_3 + 0x9d)) < '\0') {
    return (uint)(*(byte *)((longlong)param_3 + 0x9d) >> 7);
  }
  iVar6 = *(int *)(param_2 + 0x24);
  iVar4 = *(int *)(param_3 + 0x24);
  bVar12 = iVar4 < 2 && 1 < iVar6;
  if ((*(byte *)(*param_1 + 0x330) & 1) == 0) {
    if (bVar12) {
      return 1;
    }
    if (iVar6 < 2 && 1 < iVar4) {
      return 0;
    }
    fVar2 = *(float *)(param_2 + 0x2e);
    pfVar1 = (float *)(param_3 + 0x2e);
    bVar12 = fVar2 == *pfVar1;
    bVar17 = fVar2 < *pfVar1;
    if ((!bVar12) || (NAN(fVar2) || NAN(*pfVar1))) {
LAB_1443236fb:
      return (uint)(!bVar17 && !bVar12);
    }
  }
  else {
    if (bVar12) {
      return 1;
    }
    if (iVar6 < 2 && 1 < iVar4) {
      return 0;
    }
    fVar2 = *(float *)(param_2 + 0x2e);
    fVar3 = *(float *)(param_3 + 0x2e);
    if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
      bVar12 = fVar3 == fVar2;
      bVar17 = fVar3 < fVar2;
      goto LAB_1443236fb;
    }
  }
  if ((*(byte *)(*param_1 + 0xb00) & 8) != 0) {
    if ((*(byte *)((longlong)param_2 + 0x9c) & 2) == 0) {
      if ((*(byte *)((longlong)param_3 + 0x9c) & 2) != 0) {
        return 1;
      }
    }
    else if ((*(byte *)((longlong)param_3 + 0x9c) & 2) == 0) {
      return 0;
    }
  }
  iVar6 = FUN_148ee54a8(param_2,param_3);
  if (iVar6 != 2) {
    return (uint)(iVar6 == 1);
  }
  iVar6 = *(int *)((longlong)param_3 + 0x8c);
  iVar4 = *(int *)((longlong)param_2 + 0x8c);
  bVar17 = SBORROW4(iVar4,iVar6);
  bVar12 = iVar4 - iVar6 < 0;
  if (iVar4 == iVar6) {
    if (*(int *)((longlong)param_2 + 0x94) != *(int *)((longlong)param_3 + 0x94)) {
      return (uint)(*(int *)((longlong)param_2 + 0x94) < *(int *)((longlong)param_3 + 0x94));
    }
    iVar6 = *(int *)((longlong)param_3 + 0x84);
    iVar4 = *(int *)((longlong)param_2 + 0x84);
    bVar17 = SBORROW4(iVar4,iVar6);
    bVar12 = iVar4 - iVar6 < 0;
    if (iVar4 == iVar6) {
      iVar6 = *(int *)(param_3 + 0x11);
      iVar4 = *(int *)(param_2 + 0x11);
      bVar17 = SBORROW4(iVar4,iVar6);
      bVar12 = iVar4 - iVar6 < 0;
      if (iVar4 == iVar6) {
        iVar6 = *(int *)(param_2 + 1);
        iVar4 = *(int *)(param_3 + 1);
        if (iVar6 == iVar4) {
          if (iVar6 < 2) {
            return 1;
          }
          puVar8 = (undefined2 *)*param_3;
          puVar9 = (undefined2 *)*param_2;
          lVar14 = 0;
          while( true ) {
            uVar15 = *(ushort *)((longlong)puVar9 + lVar14);
            uVar16 = (ulonglong)uVar15;
            uVar10 = *(ushort *)((longlong)puVar8 + lVar14);
            if (uVar15 != uVar10) break;
            if (uVar15 == 0) {
              return 1;
            }
LAB_1443236ce:
            lVar14 = lVar14 + 2;
          }
          if ((uVar10 | uVar15) < 0x80) {
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            uVar11 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar11]) goto LAB_1443236ce;
          }
          if (uVar15 == uVar10) {
            return 1;
          }
        }
        else {
          if (iVar4 + iVar6 == 1) {
            return 1;
          }
          puVar8 = (undefined2 *)*param_3;
          puVar9 = (undefined2 *)*param_2;
        }
        if (iVar4 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        if (iVar6 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        lVar14 = 0;
        while( true ) {
          uVar15 = *(ushort *)((longlong)puVar9 + lVar14);
          uVar7 = (uint)uVar15;
          uVar10 = *(ushort *)((longlong)puVar8 + lVar14);
          uVar13 = (uint)uVar10;
          if (uVar15 != uVar10) {
            if ((uVar10 | uVar15) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar15];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar10]) goto LAB_144323754;
            }
            uVar7 = uVar7 - uVar13;
            goto LAB_14432377f;
          }
          if (uVar15 == 0) break;
LAB_144323754:
          lVar14 = lVar14 + 2;
        }
        uVar7 = 0;
LAB_14432377f:
        return uVar7 >> 0x1f;
      }
    }
  }
  return (uint)(bVar17 == bVar12);
}



// FUNCTION 1443237a6 FUN_1443237a6 body=12 status=ok
// SIG undefined FUN_1443237a6(void)

void FUN_1443237a6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443237af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443237b2 FUN_1443237b2 body=29 status=ok
// SIG undefined FUN_1443237b2(void)

undefined8 FUN_1443237b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443237d0 FUN_1443237d0 body=40 status=ok
// SIG undefined FUN_1443237d0(void)

undefined8 FUN_1443237d0(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144323840(param_2 + 0x88,param_1[1]);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1);
}



// FUNCTION 144323816 FUN_144323816 body=12 status=ok
// SIG undefined FUN_144323816(void)

void FUN_144323816(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014432381f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144323822 FUN_144323822 body=29 status=ok
// SIG undefined FUN_144323822(void)

undefined8 FUN_144323822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144323840 FUN_144323840 body=70 status=ok
// SIG undefined FUN_144323840(void)

undefined8 FUN_144323840(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 2) != 0) && (*(int *)(param_1 + 1) == *(int *)(param_2 + 1))) &&
     (cVar1 = FUN_148eedc5d(*param_1,*param_2), cVar1 != '\0')) {
    return 0;
  }
  FUN_148c56694(param_1,param_2);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return 1;
}



// FUNCTION 1443238aa FUN_1443238aa body=166 status=ok
// SIG undefined FUN_1443238aa(void)

undefined8 FUN_1443238aa(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  lVar4 = (longlong)*(int *)(*param_1 + 0x30);
  if (lVar4 == 0) {
    return 0;
  }
  plVar10 = *(longlong **)(*param_1 + 0x28);
  plVar5 = plVar10 + lVar4 * 2;
  iVar1 = *(int *)(param_2 + 0xf0);
LAB_1443238e1:
  iVar2 = (int)plVar10[1];
  if (iVar2 == iVar1) {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    if (iVar1 < 2) {
      return uVar3;
    }
    lVar4 = 0;
    do {
      uVar8 = *(ushort *)(*plVar10 + lVar4);
      uVar9 = (ulonglong)uVar8;
      uVar6 = *(ushort *)(*(longlong *)(param_2 + 0xe8) + lVar4);
      if (uVar8 == uVar6) {
        if (uVar8 == 0) {
          return uVar3;
        }
      }
      else {
        if (0x7f < (uVar6 | uVar8)) goto LAB_14432393e;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_14432393e;
      }
      lVar4 = lVar4 + 2;
    } while( true );
  }
  if (iVar2 + iVar1 == 1) {
    return 1;
  }
  goto LAB_1443238f2;
LAB_14432393e:
  if (uVar8 == uVar6) {
    return uVar3;
  }
LAB_1443238f2:
  plVar10 = plVar10 + 2;
  if (plVar10 == plVar5) {
    return 0;
  }
  goto LAB_1443238e1;
}



// FUNCTION 14432397a FUN_14432397a body=29 status=ok
// SIG undefined FUN_14432397a(void)

undefined8 FUN_14432397a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144323998 FUN_144323998 body=384 status=ok
// SIG undefined FUN_144323998(void)

void FUN_144323998(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  if (*param_3 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1408db3b0(*param_3,&DAT_14b9d548c);
  }
  cVar3 = DAT_14cbe3bc8;
  if ((byte *)*puVar4 == (byte *)0x0) {
    bVar5 = *(byte *)(param_2 + 0x89);
  }
  else {
    bVar5 = *(byte *)(param_2 + 0x89);
    if ((*(byte *)*puVar4 & 3) != 0) {
      *(byte *)(param_2 + 0x89) = bVar5 & 0xef | DAT_14cbe3bc8 << 4;
      if (cVar3 != '\0') {
        pbVar2 = (byte *)*puVar4;
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(pbVar2 + 8);
        }
        FUN_1400b22c2(&local_50,uVar6);
        if ((longlong *)(param_2 + 0x40) == &local_50) {
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_2 + 0x40) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0x40) = local_50;
          local_50 = 0;
          *(undefined4 *)(param_2 + 0x48) = local_48;
          *(undefined4 *)(param_2 + 0x4c) = local_44;
        }
        FUN_14000bbd8(&local_50,(longlong *)(param_2 + 0x40),0);
        FUN_14000bbd8(local_78,param_2,0);
        FUN_1407cbbb2(lVar1 + 0x2c0,local_78,&local_50);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_144323ade;
    }
  }
  *(byte *)(param_2 + 0x89) = bVar5 & 0xef;
LAB_144323ade:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144323b38 FUN_144323b38 body=12 status=ok
// SIG undefined FUN_144323b38(void)

void FUN_144323b38(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144323b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144323b44 FUN_144323b44 body=29 status=ok
// SIG undefined FUN_144323b44(void)

undefined8 FUN_144323b44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144323b62 FUN_144323b62 body=230 status=ok
// SIG undefined FUN_144323b62(void)

void FUN_144323b62(longlong *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *param_2;
  iVar3 = *(int *)(*param_1 + 0x210);
  if (iVar3 != 0 && (longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(*param_1 + 0x208);
    uVar9 = iVar3 - 1;
    if (iVar2 - 1U < uVar9) {
      uVar9 = iVar2 - 1U;
    }
    uVar12 = 0;
    do {
      lVar10 = uVar12 * 0x90;
      lVar13 = (longlong)*(int *)(lVar4 + 0x78 + lVar10);
      if (lVar13 != 0) {
        lVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0x70 + lVar10) + lVar11) == (longlong)iVar2) {
            pbVar1 = (byte *)(lVar4 + lVar10 + 0x88);
            *pbVar1 = *pbVar1 | 0x40;
            if (0 < *(longlong *)(lVar4 + lVar10 + 0x80)) {
              puVar5 = (undefined8 *)param_1[1];
              local_1c = (undefined4)uVar12;
              pcVar6 = (code *)*puVar5;
              plVar8 = puVar5 + 4;
              if ((longlong *)puVar5[2] != (longlong *)0x0) {
                plVar8 = (longlong *)puVar5[2];
              }
              uVar7 = (**(code **)(*plVar8 + 8))();
              (*pcVar6)(uVar7,&local_1c);
            }
            goto LAB_144323c2b;
          }
          lVar11 = lVar11 + 8;
        } while (lVar13 * 8 != lVar11);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar9 + 1);
  }
LAB_144323c2b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144323c74 FUN_144323c74 body=29 status=ok
// SIG undefined FUN_144323c74(void)

undefined8 FUN_144323c74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144323c92 FUN_144323c92 body=643 status=ok
// SIG undefined FUN_144323c92(void)

void FUN_144323c92(longlong *param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  size_t sVar5;
  uint uVar6;
  ulonglong uVar7;
  wchar_t *_Str;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = *param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      plVar11 = param_1 + 2;
      goto LAB_144323ece;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_f8 = param_1 + 2;
  sVar5 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar7 = sVar5 & 0xffffffff;
  pwVar10 = _Str;
  do {
    iVar12 = (int)uVar7;
    if (iVar12 < 1) {
LAB_144323ddb:
      local_50 = local_e4;
      uVar6 = local_e4 + 1;
      if (uVar6 < 0x81) goto LAB_144323df8;
      FUN_1446efa72(&local_60,0,uVar6,1);
      local_f0 = local_60;
      goto LAB_144323dfa;
    }
    wVar1 = *pwVar10;
    uVar6 = (uint)(ushort)wVar1;
    pwVar8 = pwVar10 + 1;
    uVar9 = iVar12 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar12 == 1) {
        cVar4 = FUN_140024707(uVar6,&local_e4,&local_f0);
        if (cVar4 != '\0') goto LAB_144323ddb;
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = pwVar10 + 2;
        uVar9 = iVar12 - 2;
      }
    }
    cVar4 = FUN_140024707(uVar6,&local_e4,&local_f0);
    uVar7 = (ulonglong)uVar9;
    pwVar10 = pwVar8;
  } while (cVar4 != '\0');
  local_50 = 0xffffffff;
  uVar6 = 0;
LAB_144323df8:
  local_f0 = (undefined1 *)0x0;
LAB_144323dfa:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar12 = (int)sVar5 + 1;
  local_e4 = uVar6;
  local_58 = local_f0;
  do {
    plVar11 = local_f8;
    if (iVar12 < 1) break;
    wVar1 = *_Str;
    uVar6 = (uint)(ushort)wVar1;
    pwVar10 = _Str + 1;
    iVar3 = iVar12 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar12 == 1) {
        FUN_1400247af(uVar6,&local_f0,&local_e4);
        plVar11 = local_f8;
        break;
      }
      if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
        pwVar10 = _Str + 2;
        iVar3 = iVar12 + -2;
      }
    }
    iVar12 = iVar3;
    _Str = pwVar10;
    cVar4 = FUN_1400247af(uVar6,&local_f0,&local_e4);
    plVar11 = local_f8;
  } while (cVar4 != '\0');
LAB_144323ece:
  FUN_148eede8c(uVar2,local_58,plVar11);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144323f16 FUN_144323f16 body=196 status=ok
// SIG undefined FUN_144323f16(void)

undefined8 * FUN_144323f16(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b9d8a40;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  puVar4[3] = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar4 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
  }
  else {
    FUN_148c566f2(puVar4 + 3,iVar2,0);
    FUN_148c56754(puVar4[3],uVar3,iVar2);
  }
  return puVar1;
}



// FUNCTION 144323fe0 FUN_144323fe0 body=29 status=ok
// SIG undefined FUN_144323fe0(void)

void FUN_144323fe0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144323ffe FUN_144323ffe body=83 status=ok
// SIG undefined FUN_144323ffe(void)

undefined8 * FUN_144323ffe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d8a40;
  FUN_145a5bc9c(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144324052 FUN_144324052 body=623 status=ok
// SIG undefined FUN_144324052(void)

void FUN_144324052(longlong *param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  size_t sVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  wchar_t *_Str;
  wchar_t *pwVar11;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar2 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_144324276;
    }
  }
  local_60 = (undefined1 *)0x0;
  sVar6 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar8 = sVar6 & 0xffffffff;
  pwVar11 = _Str;
  do {
    iVar9 = (int)uVar8;
    if (iVar9 < 1) {
LAB_144324190:
      local_50 = local_e4;
      uVar7 = local_e4 + 1;
      if (uVar7 < 0x81) goto LAB_1443241ad;
      FUN_1446efa72(&local_60,0,uVar7,1);
      local_f0 = local_60;
      goto LAB_1443241af;
    }
    wVar1 = *pwVar11;
    uVar7 = (uint)(ushort)wVar1;
    pwVar3 = pwVar11 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar5 = FUN_140024707(uVar7,&local_e4,&local_f0);
        if (cVar5 != '\0') goto LAB_144324190;
        break;
      }
      if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
        uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
        uVar10 = iVar9 - 2;
        pwVar3 = pwVar11 + 2;
      }
    }
    pwVar11 = pwVar3;
    cVar5 = FUN_140024707(uVar7,&local_e4,&local_f0);
    uVar8 = (ulonglong)uVar10;
  } while (cVar5 != '\0');
  local_50 = 0xffffffff;
  uVar7 = 0;
LAB_1443241ad:
  local_f0 = (undefined1 *)0x0;
LAB_1443241af:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar6 + 1;
  local_e4 = uVar7;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar7 = (uint)(ushort)wVar1;
    pwVar11 = _Str + 1;
    iVar4 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar7,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
        uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
        pwVar11 = _Str + 2;
        iVar4 = iVar9 + -2;
      }
    }
    iVar9 = iVar4;
    _Str = pwVar11;
    cVar5 = FUN_1400247af(uVar7,&local_f0,&local_e4);
  } while (cVar5 != '\0');
LAB_144324276:
  (**(code **)(*plVar2 + 600))(plVar2,local_58);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443242c2 FUN_1443242c2 body=96 status=ok
// SIG undefined FUN_1443242c2(void)

undefined8 * FUN_1443242c2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9d8a60;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 144324328 FUN_144324328 body=12 status=ok
// SIG undefined FUN_144324328(void)

void FUN_144324328(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144324331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144324334 FUN_144324334 body=57 status=ok
// SIG undefined FUN_144324334(void)

undefined8 * FUN_144324334(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d8a60;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14432436e FUN_14432436e body=4404 status=ok
// SIG undefined FUN_14432436e(void)

ulonglong FUN_14432436e(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  longlong lVar20;
  longlong lVar21;
  undefined **ppuVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined7 uVar26;
  uint uVar27;
  longlong *plVar28;
  bool bVar29;
  bool bVar30;
  
  lVar18 = *param_1;
  lVar14 = *(longlong *)(param_2 + 0x100);
  if (lVar14 == 0) {
    param_1 = (longlong *)FUN_1465f9294();
    lVar14 = FUN_14477b664(param_1);
    *(longlong *)(param_2 + 0x100) = lVar14;
  }
  plVar1 = (longlong *)(param_2 + 0xf8);
  plVar28 = (longlong *)(param_2 + 0x108);
  if (*(longlong *)(param_2 + 0x108) == 0) {
    if ((lVar14 != 0) && (*plVar1 != 0)) {
      plVar25 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar25 == (longlong *)0x0) ||
         (param_1 = plVar25, cVar10 = (**(code **)(*plVar25 + 0x108))(plVar25), cVar10 == '\0')) {
        *plVar28 = 0;
      }
      else {
        param_1 = (longlong *)(**(code **)(*plVar25 + 0x110))(plVar25);
        lVar14 = FUN_144aff482(param_1,plVar1);
        *plVar28 = lVar14;
        if (lVar14 != 0) goto LAB_1443243b8;
      }
    }
    lVar14 = *(longlong *)(param_3 + 0x100);
    if (lVar14 == 0) {
      param_1 = (longlong *)FUN_1465f9294();
      lVar14 = FUN_14477b664(param_1);
      *(longlong *)(param_3 + 0x100) = lVar14;
    }
    if (*(longlong *)(param_3 + 0x108) != 0) {
LAB_1443246db:
      plVar25 = (longlong *)0x0;
      goto LAB_144325209;
    }
    if ((lVar14 != 0) && (*(longlong *)(param_3 + 0xf8) != 0)) {
      plVar25 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar25 == (longlong *)0x0) ||
         (param_1 = plVar25, lVar14 = (**(code **)(*plVar25 + 0x108))(plVar25), (char)lVar14 == '\0'
         )) {
        *(undefined8 *)(param_3 + 0x108) = 0;
      }
      else {
        param_1 = (longlong *)(**(code **)(*plVar25 + 0x110))(plVar25);
        lVar14 = FUN_144aff482(param_1,(longlong *)(param_3 + 0xf8));
        *(longlong *)(param_3 + 0x108) = lVar14;
        if (lVar14 != 0) goto LAB_1443246db;
        lVar14 = 0;
      }
    }
  }
LAB_1443243b8:
  bVar5 = *(byte *)(param_2 + 0xc0);
  uVar24 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(byte *)(param_3 + 0xc0)) & 0xffffffff;
  plVar25 = (longlong *)(CONCAT71((int7)(uVar24 >> 8),(byte)uVar24 >> 1) & 0xffffffffffffff01);
  if ((bVar5 >> 1 & 1) != (byte)plVar25) goto LAB_144325209;
  if ((bVar5 & 1) != (*(byte *)(param_3 + 0xc0) & 1)) {
    plVar25 = (longlong *)(CONCAT71((int7)((ulonglong)lVar14 >> 8),bVar5) & 0xffffff01);
    goto LAB_144325209;
  }
  lVar14 = *(longlong *)(param_2 + 0x100);
  if ((*(byte *)(lVar18 + 0x330) & 1) == 0) {
    if (lVar14 == 0) {
      uVar15 = FUN_1465f9294();
      lVar14 = FUN_14477b664(uVar15);
      *(longlong *)(param_2 + 0x100) = lVar14;
    }
    if (*plVar28 == 0) {
      if (lVar14 != 0 && *plVar1 != 0) {
        plVar2 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) {
LAB_14432544b:
          *plVar28 = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar14 = FUN_144aff482(uVar15,plVar1);
          *plVar28 = lVar14;
          if (lVar14 != 0) goto LAB_144324413;
        }
      }
    }
    else {
LAB_144324413:
      lVar14 = *(longlong *)(param_3 + 0x100);
      if (lVar14 == 0) {
        uVar15 = FUN_1465f9294();
        lVar14 = FUN_14477b664(uVar15);
        *(longlong *)(param_3 + 0x100) = lVar14;
      }
      plVar2 = (longlong *)(param_3 + 0xf8);
      plVar3 = (longlong *)(param_3 + 0x108);
      if (*(longlong *)(param_3 + 0x108) != 0) {
LAB_144324444:
        if (*(longlong *)(param_2 + 0x100) == 0) {
          uVar15 = FUN_1465f9294();
          uVar15 = FUN_14477b664(uVar15);
          *(undefined8 *)(param_2 + 0x100) = uVar15;
        }
        lVar14 = *(longlong *)(param_3 + 0x100);
        if (lVar14 == 0) {
          lVar14 = FUN_1465f9294();
        }
        lVar20 = *plVar2;
        lVar14 = FUN_14477b664(lVar14);
        iVar12 = 0;
        iVar11 = 0;
        if ((lVar14 != 0) && (plVar25 = *(longlong **)(lVar14 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar16 = *plVar25;
          pcVar8 = *(code **)(lVar16 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            iVar11 = 0;
            if (cVar10 == '\0') goto LAB_1443244f4;
            lVar16 = *plVar25;
          }
          pcVar8 = *(code **)(lVar16 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar11 = FUN_144aff48c(ppuVar22);
        }
LAB_1443244f4:
        lVar16 = *(longlong *)(param_2 + 0xf8);
        lVar21 = *(longlong *)(param_2 + 0x100);
        if ((lVar21 != 0) && (plVar25 = *(longlong **)(lVar21 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar17 = *plVar25;
          pcVar8 = *(code **)(lVar17 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            if (cVar10 == '\0') goto LAB_14432456c;
            lVar17 = *plVar25;
          }
          pcVar8 = *(code **)(lVar17 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar12 = FUN_144aff48c(ppuVar22);
        }
LAB_14432456c:
        if ((iVar12 == iVar11) && (lVar16 == lVar20)) {
          plVar25 = plVar3;
          if (lVar21 == lVar14) goto LAB_144324e1c;
          if ((lVar14 != 0) && (lVar21 != 0)) {
            iVar11 = *(int *)(lVar14 + 0x38);
            iVar12 = *(int *)(lVar21 + 0x38);
            if (((iVar11 <= iVar12) &&
                (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar11 * 8) == lVar14 + 0x30
                )) || ((iVar12 <= iVar11 &&
                       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) ==
                        lVar21 + 0x30)))) goto LAB_144324e1c;
          }
        }
        lVar18 = *(longlong *)(param_2 + 0x100);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_2 + 0x100) = lVar18;
        }
        lVar14 = *plVar28;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar1 != 0)) {
          plVar25 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar25 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar25 + 0x108))(plVar25), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar25 + 0x110))(plVar25);
            lVar14 = FUN_144aff482(uVar15,plVar1);
          }
          *plVar28 = lVar14;
        }
        fVar4 = *(float *)(lVar14 + 0x48);
        lVar18 = *(longlong *)(param_3 + 0x100);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_3 + 0x100) = lVar18;
        }
        lVar14 = *plVar3;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar2 != 0)) {
          plVar1 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar14 = FUN_144aff482(uVar15,plVar2);
          }
          *plVar3 = lVar14;
        }
        bVar30 = fVar4 == *(float *)(lVar14 + 0x48);
        bVar29 = fVar4 < *(float *)(lVar14 + 0x48);
LAB_144324953:
        plVar25 = (longlong *)CONCAT71((int7)((ulonglong)(param_3 + 0x108) >> 8),!bVar29 && !bVar30)
        ;
        goto LAB_144325209;
      }
      if ((lVar14 != 0) && (*plVar2 != 0)) {
        plVar9 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar10 == '\0')) {
LAB_144325448:
          plVar28 = (longlong *)(param_3 + 0x108);
          goto LAB_14432544b;
        }
        uVar15 = (**(code **)(*plVar9 + 0x110))(plVar9);
        lVar14 = FUN_144aff482(uVar15,plVar2);
        *plVar3 = lVar14;
        if (lVar14 != 0) goto LAB_144324444;
      }
    }
  }
  else {
    if (lVar14 == 0) {
      uVar15 = FUN_1465f9294();
      lVar14 = FUN_14477b664(uVar15);
      *(longlong *)(param_2 + 0x100) = lVar14;
    }
    if (*plVar28 == 0) {
      if (lVar14 != 0 && *plVar1 != 0) {
        plVar2 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) goto LAB_14432544b;
        uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar14 = FUN_144aff482(uVar15,plVar1);
        *plVar28 = lVar14;
        if (lVar14 != 0) goto LAB_1443246fd;
      }
    }
    else {
LAB_1443246fd:
      lVar14 = *(longlong *)(param_3 + 0x100);
      if (lVar14 == 0) {
        uVar15 = FUN_1465f9294();
        lVar14 = FUN_14477b664(uVar15);
        *(longlong *)(param_3 + 0x100) = lVar14;
      }
      plVar2 = (longlong *)(param_3 + 0xf8);
      plVar3 = (longlong *)(param_3 + 0x108);
      if (*(longlong *)(param_3 + 0x108) != 0) {
LAB_14432472e:
        if (*(longlong *)(param_2 + 0x100) == 0) {
          uVar15 = FUN_1465f9294();
          uVar15 = FUN_14477b664(uVar15);
          *(undefined8 *)(param_2 + 0x100) = uVar15;
        }
        lVar14 = *(longlong *)(param_3 + 0x100);
        if (lVar14 == 0) {
          lVar14 = FUN_1465f9294();
        }
        lVar20 = *plVar2;
        lVar14 = FUN_14477b664(lVar14);
        iVar12 = 0;
        iVar11 = 0;
        if ((lVar14 != 0) && (plVar25 = *(longlong **)(lVar14 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar16 = *plVar25;
          pcVar8 = *(code **)(lVar16 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            iVar11 = 0;
            if (cVar10 == '\0') goto LAB_1443247de;
            lVar16 = *plVar25;
          }
          pcVar8 = *(code **)(lVar16 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar11 = FUN_144aff48c(ppuVar22);
        }
LAB_1443247de:
        lVar16 = *(longlong *)(param_2 + 0xf8);
        lVar21 = *(longlong *)(param_2 + 0x100);
        if ((lVar21 != 0) && (plVar25 = *(longlong **)(lVar21 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar17 = *plVar25;
          pcVar8 = *(code **)(lVar17 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            if (cVar10 == '\0') goto LAB_144324856;
            lVar17 = *plVar25;
          }
          pcVar8 = *(code **)(lVar17 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar12 = FUN_144aff48c(ppuVar22);
        }
LAB_144324856:
        if ((iVar12 == iVar11) && (lVar16 == lVar20)) {
          plVar25 = plVar3;
          if (lVar21 == lVar14) goto LAB_144324e1c;
          if ((lVar14 != 0) && (lVar21 != 0)) {
            iVar11 = *(int *)(lVar14 + 0x38);
            iVar12 = *(int *)(lVar21 + 0x38);
            if (((iVar11 <= iVar12) &&
                (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar11 * 8) == lVar14 + 0x30
                )) || ((iVar12 <= iVar11 &&
                       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) ==
                        lVar21 + 0x30)))) goto LAB_144324e1c;
          }
        }
        lVar18 = *(longlong *)(param_2 + 0x100);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_2 + 0x100) = lVar18;
        }
        lVar14 = *plVar28;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar1 != 0)) {
          plVar25 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar25 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar25 + 0x108))(plVar25), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar25 + 0x110))(plVar25);
            lVar14 = FUN_144aff482(uVar15,plVar1);
          }
          *plVar28 = lVar14;
        }
        fVar4 = *(float *)(lVar14 + 0x48);
        lVar18 = *(longlong *)(param_3 + 0x100);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_3 + 0x100) = lVar18;
        }
        lVar14 = *plVar3;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar2 != 0)) {
          plVar1 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar14 = FUN_144aff482(uVar15,plVar2);
          }
          *plVar3 = lVar14;
        }
        bVar30 = *(float *)(lVar14 + 0x48) == fVar4;
        bVar29 = *(float *)(lVar14 + 0x48) < fVar4;
        goto LAB_144324953;
      }
      if ((lVar14 != 0) && (*plVar2 != 0)) {
        plVar9 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar10 == '\0')) goto LAB_144325448;
        uVar15 = (**(code **)(*plVar9 + 0x110))(plVar9);
        lVar14 = FUN_144aff482(uVar15,plVar2);
        *plVar3 = lVar14;
        if (lVar14 != 0) goto LAB_14432472e;
      }
    }
  }
LAB_144324e1c:
  puVar19 = &DAT_149dfb77a;
  puVar23 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 0xa8) != 0) {
    puVar23 = *(undefined2 **)(param_3 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    puVar19 = *(undefined2 **)(param_2 + 0xa0);
  }
  bVar5 = *(byte *)(lVar18 + 0x330);
  lVar18 = 0;
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar19 + lVar18);
    uVar13 = (uint)uVar6;
    uVar7 = *(ushort *)((longlong)puVar23 + lVar18);
    uVar27 = (uint)uVar7;
    if (uVar6 != uVar7) {
      if ((uVar7 | uVar6) < 0x80) {
        uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar6];
        uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_144324e6c;
      }
      uVar26 = (undefined7)((ulonglong)plVar25 >> 8);
      if ((bVar5 & 1) == 0) {
        plVar25 = (longlong *)CONCAT71(uVar26,1);
        if ((int)(uVar13 - uVar27) < 1) goto LAB_144324eac;
      }
      else {
        if (-1 < (int)(uVar13 - uVar27)) goto LAB_144324f02;
        plVar25 = (longlong *)CONCAT71(uVar26,1);
      }
      goto LAB_144325209;
    }
    if (uVar6 == 0) break;
LAB_144324e6c:
    lVar18 = lVar18 + 2;
  }
  if ((bVar5 & 1) == 0) {
LAB_144324eac:
    lVar18 = 0;
    while( true ) {
      uVar6 = *(ushort *)((longlong)puVar19 + lVar18);
      uVar13 = (uint)uVar6;
      uVar7 = *(ushort *)((longlong)puVar23 + lVar18);
      uVar27 = (uint)uVar7;
      if (uVar6 != uVar7) break;
      if (uVar6 == 0) goto LAB_144324f4a;
LAB_144324ec8:
      lVar18 = lVar18 + 2;
    }
    if ((uVar7 | uVar6) < 0x80) {
      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar6];
      uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_144324ec8;
    }
    if ((int)(uVar13 - uVar27) < 0) goto LAB_1443246db;
  }
  else {
LAB_144324f02:
    lVar18 = 0;
    while( true ) {
      uVar6 = *(ushort *)((longlong)puVar19 + lVar18);
      uVar13 = (uint)uVar6;
      uVar7 = *(ushort *)((longlong)puVar23 + lVar18);
      uVar27 = (uint)uVar7;
      if (uVar6 != uVar7) break;
      if (uVar6 == 0) goto LAB_144324f4a;
LAB_144324f1a:
      lVar18 = lVar18 + 2;
    }
    if ((uVar7 | uVar6) < 0x80) {
      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar6];
      uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_144324f1a;
    }
    if (0 < (int)(uVar13 - uVar27)) goto LAB_1443246db;
  }
LAB_144324f4a:
  lVar18 = *(longlong *)(param_2 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_2 + 0xd0) = lVar18;
  }
  plVar1 = (longlong *)(param_2 + 200);
  if (*(longlong *)(param_2 + 0xd8) == 0) {
    plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),1);
    if ((lVar18 == 0) || (*plVar1 == 0)) goto LAB_144325209;
    plVar28 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar28 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar28 + 0x108))(plVar28), cVar10 == '\0')) {
      *(undefined8 *)(param_2 + 0xd8) = 0;
      goto LAB_144325209;
    }
    uVar15 = (**(code **)(*plVar28 + 0x110))(plVar28);
    lVar18 = FUN_144aff482(uVar15,plVar1);
    *(longlong *)(param_2 + 0xd8) = lVar18;
    if (lVar18 == 0) goto LAB_144325209;
  }
  lVar18 = *(longlong *)(param_3 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_3 + 0xd0) = lVar18;
  }
  plVar28 = (longlong *)(param_3 + 200);
  if (*(longlong *)(param_3 + 0xd8) == 0) {
    plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),1);
    if ((lVar18 == 0) || (*plVar28 == 0)) goto LAB_144325209;
    plVar2 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) {
      *(undefined8 *)(param_3 + 0xd8) = 0;
      goto LAB_144325209;
    }
    uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar18 = FUN_144aff482(uVar15,plVar28);
    *(longlong *)(param_3 + 0xd8) = lVar18;
    if (lVar18 == 0) goto LAB_144325209;
  }
  if (*(longlong *)(param_2 + 0xd0) == 0) {
    uVar15 = FUN_140b7bb2c();
    uVar15 = FUN_14477b664(uVar15);
    *(undefined8 *)(param_2 + 0xd0) = uVar15;
  }
  lVar18 = *(longlong *)(param_3 + 0xd0);
  if (lVar18 == 0) {
    lVar18 = FUN_140b7bb2c();
  }
  lVar14 = *plVar28;
  lVar18 = FUN_14477b664(lVar18);
  iVar11 = 0;
  if ((lVar18 != 0) && (plVar25 = *(longlong **)(lVar18 + 0xb8), plVar25 != (longlong *)0x0)) {
    lVar20 = *plVar25;
    pcVar8 = *(code **)(lVar20 + 0x108);
    if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
      cVar10 = (*pcVar8)(plVar25);
      iVar11 = 0;
      if (cVar10 == '\0') goto LAB_14432506e;
      lVar20 = *plVar25;
    }
    pcVar8 = *(code **)(lVar20 + 0x110);
    if (pcVar8 == (code *)&LAB_144783426) {
      ppuVar22 = &PTR_PTR_14c763408;
    }
    else if (pcVar8 == (code *)&LAB_144783432) {
      ppuVar22 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar22 = (undefined **)(*pcVar8)(plVar25);
    }
    iVar11 = FUN_144aff48c(ppuVar22);
  }
LAB_14432506e:
  lVar20 = *(longlong *)(param_2 + 200);
  lVar16 = *(longlong *)(param_2 + 0xd0);
  plVar25 = (longlong *)0x0;
  if ((lVar16 != 0) && (plVar2 = *(longlong **)(lVar16 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar21 = *plVar2;
    pcVar8 = *(code **)(lVar21 + 0x108);
    if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
      cVar10 = (*pcVar8)(plVar2);
      plVar25 = (longlong *)0x0;
      if (cVar10 == '\0') goto LAB_1443250e1;
      lVar21 = *plVar2;
    }
    pcVar8 = *(code **)(lVar21 + 0x110);
    if (pcVar8 == (code *)&LAB_144783426) {
      ppuVar22 = &PTR_PTR_14c763408;
    }
    else if (pcVar8 == (code *)&LAB_144783432) {
      ppuVar22 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar22 = (undefined **)(*pcVar8)(plVar2);
    }
    uVar13 = FUN_144aff48c(ppuVar22);
    plVar25 = (longlong *)(ulonglong)uVar13;
  }
LAB_1443250e1:
  if (((int)plVar25 == iVar11) && (lVar20 == lVar14)) {
    plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),1);
    if (lVar16 == lVar18) goto LAB_144325209;
    if ((lVar18 != 0) && (lVar16 != 0)) {
      iVar11 = *(int *)(lVar18 + 0x38);
      iVar12 = *(int *)(lVar16 + 0x38);
      if (((iVar11 <= iVar12) &&
          (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar11 * 8) == lVar18 + 0x30)) ||
         ((iVar12 <= iVar11 &&
          (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar12 * 8) == lVar16 + 0x30))))
      goto LAB_144325209;
    }
  }
  lVar18 = *(longlong *)(param_2 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_2 + 0xd0) = lVar18;
  }
  lVar14 = *(longlong *)(param_2 + 0xd8);
  if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) {
      lVar14 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar14 = FUN_144aff482(uVar15,plVar1);
    }
    *(longlong *)(param_2 + 0xd8) = lVar14;
  }
  iVar11 = *(int *)(lVar14 + 0x98);
  lVar18 = *(longlong *)(param_3 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_3 + 0xd0) = lVar18;
  }
  lVar14 = *(longlong *)(param_3 + 0xd8);
  if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar28 != 0)) {
    plVar1 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
      lVar14 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar14 = FUN_144aff482(uVar15,plVar28);
    }
    *(longlong *)(param_3 + 0xd8) = lVar14;
  }
  plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),iVar11 < *(int *)(lVar14 + 0x98));
LAB_144325209:
  return (ulonglong)plVar25 & 0xffffffff;
}



// FUNCTION 1443254c0 FUN_1443254c0 body=12 status=ok
// SIG undefined FUN_1443254c0(void)

void FUN_1443254c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443254c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443254cc FUN_1443254cc body=29 status=ok
// SIG undefined FUN_1443254cc(void)

undefined8 FUN_1443254cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443254ea FUN_1443254ea body=4404 status=ok
// SIG undefined FUN_1443254ea(void)

ulonglong FUN_1443254ea(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  longlong lVar20;
  longlong lVar21;
  undefined **ppuVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined7 uVar26;
  uint uVar27;
  longlong *plVar28;
  bool bVar29;
  bool bVar30;
  
  lVar18 = *param_1;
  lVar14 = *(longlong *)(param_2 + 0xe8);
  if (lVar14 == 0) {
    param_1 = (longlong *)FUN_1465f9294();
    lVar14 = FUN_14477b664(param_1);
    *(longlong *)(param_2 + 0xe8) = lVar14;
  }
  plVar1 = (longlong *)(param_2 + 0xe0);
  plVar28 = (longlong *)(param_2 + 0xf0);
  if (*(longlong *)(param_2 + 0xf0) == 0) {
    if ((lVar14 != 0) && (*plVar1 != 0)) {
      plVar25 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar25 == (longlong *)0x0) ||
         (param_1 = plVar25, cVar10 = (**(code **)(*plVar25 + 0x108))(plVar25), cVar10 == '\0')) {
        *plVar28 = 0;
      }
      else {
        param_1 = (longlong *)(**(code **)(*plVar25 + 0x110))(plVar25);
        lVar14 = FUN_144aff482(param_1,plVar1);
        *plVar28 = lVar14;
        if (lVar14 != 0) goto LAB_144325534;
      }
    }
    lVar14 = *(longlong *)(param_3 + 0xe8);
    if (lVar14 == 0) {
      param_1 = (longlong *)FUN_1465f9294();
      lVar14 = FUN_14477b664(param_1);
      *(longlong *)(param_3 + 0xe8) = lVar14;
    }
    if (*(longlong *)(param_3 + 0xf0) != 0) {
LAB_144325857:
      plVar25 = (longlong *)0x0;
      goto LAB_144326385;
    }
    if ((lVar14 != 0) && (*(longlong *)(param_3 + 0xe0) != 0)) {
      plVar25 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar25 == (longlong *)0x0) ||
         (param_1 = plVar25, lVar14 = (**(code **)(*plVar25 + 0x108))(plVar25), (char)lVar14 == '\0'
         )) {
        *(undefined8 *)(param_3 + 0xf0) = 0;
      }
      else {
        param_1 = (longlong *)(**(code **)(*plVar25 + 0x110))(plVar25);
        lVar14 = FUN_144aff482(param_1,(longlong *)(param_3 + 0xe0));
        *(longlong *)(param_3 + 0xf0) = lVar14;
        if (lVar14 != 0) goto LAB_144325857;
        lVar14 = 0;
      }
    }
  }
LAB_144325534:
  bVar5 = *(byte *)(param_2 + 0xc0);
  uVar24 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(byte *)(param_3 + 0xc0)) & 0xffffffff;
  plVar25 = (longlong *)(CONCAT71((int7)(uVar24 >> 8),(byte)uVar24 >> 1) & 0xffffffffffffff01);
  if ((bVar5 >> 1 & 1) != (byte)plVar25) goto LAB_144326385;
  if ((bVar5 & 1) != (*(byte *)(param_3 + 0xc0) & 1)) {
    plVar25 = (longlong *)(CONCAT71((int7)((ulonglong)lVar14 >> 8),bVar5) & 0xffffff01);
    goto LAB_144326385;
  }
  lVar14 = *(longlong *)(param_2 + 0xe8);
  if ((*(byte *)(lVar18 + 0x330) & 1) == 0) {
    if (lVar14 == 0) {
      uVar15 = FUN_1465f9294();
      lVar14 = FUN_14477b664(uVar15);
      *(longlong *)(param_2 + 0xe8) = lVar14;
    }
    if (*plVar28 == 0) {
      if (lVar14 != 0 && *plVar1 != 0) {
        plVar2 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) {
LAB_1443265c7:
          *plVar28 = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar14 = FUN_144aff482(uVar15,plVar1);
          *plVar28 = lVar14;
          if (lVar14 != 0) goto LAB_14432558f;
        }
      }
    }
    else {
LAB_14432558f:
      lVar14 = *(longlong *)(param_3 + 0xe8);
      if (lVar14 == 0) {
        uVar15 = FUN_1465f9294();
        lVar14 = FUN_14477b664(uVar15);
        *(longlong *)(param_3 + 0xe8) = lVar14;
      }
      plVar2 = (longlong *)(param_3 + 0xe0);
      plVar3 = (longlong *)(param_3 + 0xf0);
      if (*(longlong *)(param_3 + 0xf0) != 0) {
LAB_1443255c0:
        if (*(longlong *)(param_2 + 0xe8) == 0) {
          uVar15 = FUN_1465f9294();
          uVar15 = FUN_14477b664(uVar15);
          *(undefined8 *)(param_2 + 0xe8) = uVar15;
        }
        lVar14 = *(longlong *)(param_3 + 0xe8);
        if (lVar14 == 0) {
          lVar14 = FUN_1465f9294();
        }
        lVar20 = *plVar2;
        lVar14 = FUN_14477b664(lVar14);
        iVar12 = 0;
        iVar11 = 0;
        if ((lVar14 != 0) && (plVar25 = *(longlong **)(lVar14 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar16 = *plVar25;
          pcVar8 = *(code **)(lVar16 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            iVar11 = 0;
            if (cVar10 == '\0') goto LAB_144325670;
            lVar16 = *plVar25;
          }
          pcVar8 = *(code **)(lVar16 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar11 = FUN_144aff48c(ppuVar22);
        }
LAB_144325670:
        lVar16 = *(longlong *)(param_2 + 0xe0);
        lVar21 = *(longlong *)(param_2 + 0xe8);
        if ((lVar21 != 0) && (plVar25 = *(longlong **)(lVar21 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar17 = *plVar25;
          pcVar8 = *(code **)(lVar17 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            if (cVar10 == '\0') goto LAB_1443256e8;
            lVar17 = *plVar25;
          }
          pcVar8 = *(code **)(lVar17 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar12 = FUN_144aff48c(ppuVar22);
        }
LAB_1443256e8:
        if ((iVar12 == iVar11) && (lVar16 == lVar20)) {
          plVar25 = plVar3;
          if (lVar21 == lVar14) goto LAB_144325f98;
          if ((lVar14 != 0) && (lVar21 != 0)) {
            iVar11 = *(int *)(lVar14 + 0x38);
            iVar12 = *(int *)(lVar21 + 0x38);
            if (((iVar11 <= iVar12) &&
                (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar11 * 8) == lVar14 + 0x30
                )) || ((iVar12 <= iVar11 &&
                       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) ==
                        lVar21 + 0x30)))) goto LAB_144325f98;
          }
        }
        lVar18 = *(longlong *)(param_2 + 0xe8);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_2 + 0xe8) = lVar18;
        }
        lVar14 = *plVar28;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar1 != 0)) {
          plVar25 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar25 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar25 + 0x108))(plVar25), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar25 + 0x110))(plVar25);
            lVar14 = FUN_144aff482(uVar15,plVar1);
          }
          *plVar28 = lVar14;
        }
        fVar4 = *(float *)(lVar14 + 0x48);
        lVar18 = *(longlong *)(param_3 + 0xe8);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_3 + 0xe8) = lVar18;
        }
        lVar14 = *plVar3;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar2 != 0)) {
          plVar1 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar14 = FUN_144aff482(uVar15,plVar2);
          }
          *plVar3 = lVar14;
        }
        bVar30 = fVar4 == *(float *)(lVar14 + 0x48);
        bVar29 = fVar4 < *(float *)(lVar14 + 0x48);
LAB_144325acf:
        plVar25 = (longlong *)CONCAT71((int7)((ulonglong)(param_3 + 0xf0) >> 8),!bVar29 && !bVar30);
        goto LAB_144326385;
      }
      if ((lVar14 != 0) && (*plVar2 != 0)) {
        plVar9 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar10 == '\0')) {
LAB_1443265c4:
          plVar28 = (longlong *)(param_3 + 0xf0);
          goto LAB_1443265c7;
        }
        uVar15 = (**(code **)(*plVar9 + 0x110))(plVar9);
        lVar14 = FUN_144aff482(uVar15,plVar2);
        *plVar3 = lVar14;
        if (lVar14 != 0) goto LAB_1443255c0;
      }
    }
  }
  else {
    if (lVar14 == 0) {
      uVar15 = FUN_1465f9294();
      lVar14 = FUN_14477b664(uVar15);
      *(longlong *)(param_2 + 0xe8) = lVar14;
    }
    if (*plVar28 == 0) {
      if (lVar14 != 0 && *plVar1 != 0) {
        plVar2 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) goto LAB_1443265c7;
        uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar14 = FUN_144aff482(uVar15,plVar1);
        *plVar28 = lVar14;
        if (lVar14 != 0) goto LAB_144325879;
      }
    }
    else {
LAB_144325879:
      lVar14 = *(longlong *)(param_3 + 0xe8);
      if (lVar14 == 0) {
        uVar15 = FUN_1465f9294();
        lVar14 = FUN_14477b664(uVar15);
        *(longlong *)(param_3 + 0xe8) = lVar14;
      }
      plVar2 = (longlong *)(param_3 + 0xe0);
      plVar3 = (longlong *)(param_3 + 0xf0);
      if (*(longlong *)(param_3 + 0xf0) != 0) {
LAB_1443258aa:
        if (*(longlong *)(param_2 + 0xe8) == 0) {
          uVar15 = FUN_1465f9294();
          uVar15 = FUN_14477b664(uVar15);
          *(undefined8 *)(param_2 + 0xe8) = uVar15;
        }
        lVar14 = *(longlong *)(param_3 + 0xe8);
        if (lVar14 == 0) {
          lVar14 = FUN_1465f9294();
        }
        lVar20 = *plVar2;
        lVar14 = FUN_14477b664(lVar14);
        iVar12 = 0;
        iVar11 = 0;
        if ((lVar14 != 0) && (plVar25 = *(longlong **)(lVar14 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar16 = *plVar25;
          pcVar8 = *(code **)(lVar16 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            iVar11 = 0;
            if (cVar10 == '\0') goto LAB_14432595a;
            lVar16 = *plVar25;
          }
          pcVar8 = *(code **)(lVar16 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar11 = FUN_144aff48c(ppuVar22);
        }
LAB_14432595a:
        lVar16 = *(longlong *)(param_2 + 0xe0);
        lVar21 = *(longlong *)(param_2 + 0xe8);
        if ((lVar21 != 0) && (plVar25 = *(longlong **)(lVar21 + 0xb8), plVar25 != (longlong *)0x0))
        {
          lVar17 = *plVar25;
          pcVar8 = *(code **)(lVar17 + 0x108);
          if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar8)(plVar25);
            if (cVar10 == '\0') goto LAB_1443259d2;
            lVar17 = *plVar25;
          }
          pcVar8 = *(code **)(lVar17 + 0x110);
          if (pcVar8 == (code *)&LAB_144783426) {
            ppuVar22 = &PTR_PTR_14c763408;
          }
          else if (pcVar8 == (code *)&LAB_144783432) {
            ppuVar22 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar22 = (undefined **)(*pcVar8)(plVar25);
          }
          iVar12 = FUN_144aff48c(ppuVar22);
        }
LAB_1443259d2:
        if ((iVar12 == iVar11) && (lVar16 == lVar20)) {
          plVar25 = plVar3;
          if (lVar21 == lVar14) goto LAB_144325f98;
          if ((lVar14 != 0) && (lVar21 != 0)) {
            iVar11 = *(int *)(lVar14 + 0x38);
            iVar12 = *(int *)(lVar21 + 0x38);
            if (((iVar11 <= iVar12) &&
                (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar11 * 8) == lVar14 + 0x30
                )) || ((iVar12 <= iVar11 &&
                       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) ==
                        lVar21 + 0x30)))) goto LAB_144325f98;
          }
        }
        lVar18 = *(longlong *)(param_2 + 0xe8);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_2 + 0xe8) = lVar18;
        }
        lVar14 = *plVar28;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar1 != 0)) {
          plVar25 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar25 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar25 + 0x108))(plVar25), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar25 + 0x110))(plVar25);
            lVar14 = FUN_144aff482(uVar15,plVar1);
          }
          *plVar28 = lVar14;
        }
        fVar4 = *(float *)(lVar14 + 0x48);
        lVar18 = *(longlong *)(param_3 + 0xe8);
        if (lVar18 == 0) {
          uVar15 = FUN_1465f9294();
          lVar18 = FUN_14477b664(uVar15);
          *(longlong *)(param_3 + 0xe8) = lVar18;
        }
        lVar14 = *plVar3;
        if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar2 != 0)) {
          plVar1 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar14 = FUN_144aff482(uVar15,plVar2);
          }
          *plVar3 = lVar14;
        }
        bVar30 = *(float *)(lVar14 + 0x48) == fVar4;
        bVar29 = *(float *)(lVar14 + 0x48) < fVar4;
        goto LAB_144325acf;
      }
      if ((lVar14 != 0) && (*plVar2 != 0)) {
        plVar9 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar10 == '\0')) goto LAB_1443265c4;
        uVar15 = (**(code **)(*plVar9 + 0x110))(plVar9);
        lVar14 = FUN_144aff482(uVar15,plVar2);
        *plVar3 = lVar14;
        if (lVar14 != 0) goto LAB_1443258aa;
      }
    }
  }
LAB_144325f98:
  puVar19 = &DAT_149dfb77a;
  puVar23 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 0x90) != 0) {
    puVar23 = *(undefined2 **)(param_3 + 0x88);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    puVar19 = *(undefined2 **)(param_2 + 0x88);
  }
  bVar5 = *(byte *)(lVar18 + 0x330);
  lVar18 = 0;
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar19 + lVar18);
    uVar13 = (uint)uVar6;
    uVar7 = *(ushort *)((longlong)puVar23 + lVar18);
    uVar27 = (uint)uVar7;
    if (uVar6 != uVar7) {
      if ((uVar7 | uVar6) < 0x80) {
        uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar6];
        uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_144325fe8;
      }
      uVar26 = (undefined7)((ulonglong)plVar25 >> 8);
      if ((bVar5 & 1) == 0) {
        plVar25 = (longlong *)CONCAT71(uVar26,1);
        if ((int)(uVar13 - uVar27) < 1) goto LAB_144326028;
      }
      else {
        if (-1 < (int)(uVar13 - uVar27)) goto LAB_14432607e;
        plVar25 = (longlong *)CONCAT71(uVar26,1);
      }
      goto LAB_144326385;
    }
    if (uVar6 == 0) break;
LAB_144325fe8:
    lVar18 = lVar18 + 2;
  }
  if ((bVar5 & 1) == 0) {
LAB_144326028:
    lVar18 = 0;
    while( true ) {
      uVar6 = *(ushort *)((longlong)puVar19 + lVar18);
      uVar13 = (uint)uVar6;
      uVar7 = *(ushort *)((longlong)puVar23 + lVar18);
      uVar27 = (uint)uVar7;
      if (uVar6 != uVar7) break;
      if (uVar6 == 0) goto LAB_1443260c6;
LAB_144326044:
      lVar18 = lVar18 + 2;
    }
    if ((uVar7 | uVar6) < 0x80) {
      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar6];
      uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_144326044;
    }
    if ((int)(uVar13 - uVar27) < 0) goto LAB_144325857;
  }
  else {
LAB_14432607e:
    lVar18 = 0;
    while( true ) {
      uVar6 = *(ushort *)((longlong)puVar19 + lVar18);
      uVar13 = (uint)uVar6;
      uVar7 = *(ushort *)((longlong)puVar23 + lVar18);
      uVar27 = (uint)uVar7;
      if (uVar6 != uVar7) break;
      if (uVar6 == 0) goto LAB_1443260c6;
LAB_144326096:
      lVar18 = lVar18 + 2;
    }
    if ((uVar7 | uVar6) < 0x80) {
      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar6];
      uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_144326096;
    }
    if (0 < (int)(uVar13 - uVar27)) goto LAB_144325857;
  }
LAB_1443260c6:
  lVar18 = *(longlong *)(param_2 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_2 + 0xd0) = lVar18;
  }
  plVar1 = (longlong *)(param_2 + 200);
  if (*(longlong *)(param_2 + 0xd8) == 0) {
    plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),1);
    if ((lVar18 == 0) || (*plVar1 == 0)) goto LAB_144326385;
    plVar28 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar28 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar28 + 0x108))(plVar28), cVar10 == '\0')) {
      *(undefined8 *)(param_2 + 0xd8) = 0;
      goto LAB_144326385;
    }
    uVar15 = (**(code **)(*plVar28 + 0x110))(plVar28);
    lVar18 = FUN_144aff482(uVar15,plVar1);
    *(longlong *)(param_2 + 0xd8) = lVar18;
    if (lVar18 == 0) goto LAB_144326385;
  }
  lVar18 = *(longlong *)(param_3 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_3 + 0xd0) = lVar18;
  }
  plVar28 = (longlong *)(param_3 + 200);
  if (*(longlong *)(param_3 + 0xd8) == 0) {
    plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),1);
    if ((lVar18 == 0) || (*plVar28 == 0)) goto LAB_144326385;
    plVar2 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) {
      *(undefined8 *)(param_3 + 0xd8) = 0;
      goto LAB_144326385;
    }
    uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar18 = FUN_144aff482(uVar15,plVar28);
    *(longlong *)(param_3 + 0xd8) = lVar18;
    if (lVar18 == 0) goto LAB_144326385;
  }
  if (*(longlong *)(param_2 + 0xd0) == 0) {
    uVar15 = FUN_140b7bb2c();
    uVar15 = FUN_14477b664(uVar15);
    *(undefined8 *)(param_2 + 0xd0) = uVar15;
  }
  lVar18 = *(longlong *)(param_3 + 0xd0);
  if (lVar18 == 0) {
    lVar18 = FUN_140b7bb2c();
  }
  lVar14 = *plVar28;
  lVar18 = FUN_14477b664(lVar18);
  iVar11 = 0;
  if ((lVar18 != 0) && (plVar25 = *(longlong **)(lVar18 + 0xb8), plVar25 != (longlong *)0x0)) {
    lVar20 = *plVar25;
    pcVar8 = *(code **)(lVar20 + 0x108);
    if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
      cVar10 = (*pcVar8)(plVar25);
      iVar11 = 0;
      if (cVar10 == '\0') goto LAB_1443261ea;
      lVar20 = *plVar25;
    }
    pcVar8 = *(code **)(lVar20 + 0x110);
    if (pcVar8 == (code *)&LAB_144783426) {
      ppuVar22 = &PTR_PTR_14c763408;
    }
    else if (pcVar8 == (code *)&LAB_144783432) {
      ppuVar22 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar22 = (undefined **)(*pcVar8)(plVar25);
    }
    iVar11 = FUN_144aff48c(ppuVar22);
  }
LAB_1443261ea:
  lVar20 = *(longlong *)(param_2 + 200);
  lVar16 = *(longlong *)(param_2 + 0xd0);
  plVar25 = (longlong *)0x0;
  if ((lVar16 != 0) && (plVar2 = *(longlong **)(lVar16 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar21 = *plVar2;
    pcVar8 = *(code **)(lVar21 + 0x108);
    if (pcVar8 != (code *)&LAB_14478342e && pcVar8 != (code *)&LAB_144783422) {
      cVar10 = (*pcVar8)(plVar2);
      plVar25 = (longlong *)0x0;
      if (cVar10 == '\0') goto LAB_14432625d;
      lVar21 = *plVar2;
    }
    pcVar8 = *(code **)(lVar21 + 0x110);
    if (pcVar8 == (code *)&LAB_144783426) {
      ppuVar22 = &PTR_PTR_14c763408;
    }
    else if (pcVar8 == (code *)&LAB_144783432) {
      ppuVar22 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar22 = (undefined **)(*pcVar8)(plVar2);
    }
    uVar13 = FUN_144aff48c(ppuVar22);
    plVar25 = (longlong *)(ulonglong)uVar13;
  }
LAB_14432625d:
  if (((int)plVar25 == iVar11) && (lVar20 == lVar14)) {
    plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),1);
    if (lVar16 == lVar18) goto LAB_144326385;
    if ((lVar18 != 0) && (lVar16 != 0)) {
      iVar11 = *(int *)(lVar18 + 0x38);
      iVar12 = *(int *)(lVar16 + 0x38);
      if (((iVar11 <= iVar12) &&
          (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar11 * 8) == lVar18 + 0x30)) ||
         ((iVar12 <= iVar11 &&
          (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar12 * 8) == lVar16 + 0x30))))
      goto LAB_144326385;
    }
  }
  lVar18 = *(longlong *)(param_2 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_2 + 0xd0) = lVar18;
  }
  lVar14 = *(longlong *)(param_2 + 0xd8);
  if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) {
      lVar14 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar14 = FUN_144aff482(uVar15,plVar1);
    }
    *(longlong *)(param_2 + 0xd8) = lVar14;
  }
  iVar11 = *(int *)(lVar14 + 0x98);
  lVar18 = *(longlong *)(param_3 + 0xd0);
  if (lVar18 == 0) {
    uVar15 = FUN_140b7bb2c();
    lVar18 = FUN_14477b664(uVar15);
    *(longlong *)(param_3 + 0xd0) = lVar18;
  }
  lVar14 = *(longlong *)(param_3 + 0xd8);
  if (((lVar14 == 0) && (lVar14 = 0, lVar18 != 0)) && (*plVar28 != 0)) {
    plVar1 = *(longlong **)(lVar18 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
      lVar14 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar14 = FUN_144aff482(uVar15,plVar28);
    }
    *(longlong *)(param_3 + 0xd8) = lVar14;
  }
  plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),iVar11 < *(int *)(lVar14 + 0x98));
LAB_144326385:
  return (ulonglong)plVar25 & 0xffffffff;
}



// FUNCTION 14432663c FUN_14432663c body=12 status=ok
// SIG undefined FUN_14432663c(void)

void FUN_14432663c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144326645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144326648 FUN_144326648 body=29 status=ok
// SIG undefined FUN_144326648(void)

undefined8 FUN_144326648(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144326666 FUN_144326666 body=40 status=ok
// SIG undefined FUN_144326666(void)

undefined8 FUN_144326666(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144323840(param_2 + 0x88,param_1[1]);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1);
}



// FUNCTION 1443266ac FUN_1443266ac body=12 status=ok
// SIG undefined FUN_1443266ac(void)

void FUN_1443266ac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001443266b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1443266b8 FUN_1443266b8 body=29 status=ok
// SIG undefined FUN_1443266b8(void)

undefined8 FUN_1443266b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443266d6 FUN_1443266d6 body=40 status=ok
// SIG undefined FUN_1443266d6(void)

undefined8 FUN_1443266d6(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144323840(param_2 + 0x88,param_1[1]);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1);
}



// FUNCTION 14432671c FUN_14432671c body=12 status=ok
// SIG undefined FUN_14432671c(void)

void FUN_14432671c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144326725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144326728 FUN_144326728 body=29 status=ok
// SIG undefined FUN_144326728(void)

undefined8 FUN_144326728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14432674e FUN_14432674e body=1060 status=ok
// SIG undefined FUN_14432674e(void)

undefined8 FUN_14432674e(longlong *param_1,undefined8 *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    iVar2 = (int)param_1[0x54];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar15 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x51);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar15;
        }
        iVar14 = 0;
        do {
          if (uVar13 == uVar15) {
            return 0;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar15 = 0;
        iVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = param_1[0x4f];
        lVar9 = *(longlong *)(lVar8 + 0x10 + (longlong)iVar6 * 0x20);
        if (lVar9 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar9,0);
            lVar9 = *(longlong *)(lVar8 + (longlong)iVar6 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar9 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar9 + 0x48) & 0x6b) == 3)) &&
             (plVar4 = *(longlong **)(lVar9 + 0x30), plVar4 != (longlong *)0x0)) {
            lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar9 = FUN_14406c078();
            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
               ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 == lVar9 + 0x30 && (cVar5 = (*(code *)*param_2)(param_2[1],plVar4), cVar5 != '\0'))
               )) {
              return 1;
            }
          }
        }
        uVar16 = uVar16 & ~(uint)uVar13;
        puVar7 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x51);
        }
        iVar3 = (int)param_1[0x54];
        iVar6 = (int)uVar15;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar9 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar9 + 1];
              if (uVar12 != 0) {
                uVar15 = (ulonglong)(iVar6 + (int)lVar9 + 1);
                uVar16 = 0xffffffff;
                goto LAB_144326b18;
              }
              iVar14 = iVar14 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar11 - lVar8 != lVar9);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar15 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_144326b18:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  else {
    iVar2 = (int)param_1[0x3e];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar15 = 0;
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x3b);
      }
      uVar16 = *puVar7;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar15;
        }
        iVar14 = 0;
        do {
          if (uVar13 == uVar15) {
            return 0;
          }
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar7[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar15 = 0;
        iVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar6 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar9 = FUN_14406c078();
          if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
               lVar9 + 0x30 && (cVar5 = (*(code *)*param_2)(param_2[1],plVar4), cVar5 != '\0')))) {
            return 1;
          }
        }
        uVar16 = uVar16 & ~(uint)uVar13;
        puVar7 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x3b);
        }
        iVar3 = (int)param_1[0x3e];
        iVar6 = (int)uVar15;
        lVar8 = (longlong)iVar6;
        uVar12 = puVar7[lVar8] & uVar16;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar9 = 0;
            do {
              uVar12 = puVar7[lVar8 + lVar9 + 1];
              if (uVar12 != 0) {
                uVar15 = (ulonglong)(iVar6 + (int)lVar9 + 1);
                uVar16 = 0xffffffff;
                goto LAB_144326991;
              }
              iVar14 = iVar14 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar11 - lVar8 != lVar9);
            uVar16 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar15 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_144326991:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  return 0;
}



// FUNCTION 144326b72 FUN_144326b72 body=67 status=ok
// SIG undefined FUN_144326b72(void)

void FUN_144326b72(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144326be2 FUN_144326be2 body=53 status=ok
// SIG undefined FUN_144326be2(void)

void FUN_144326be2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1418feb4e(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 144326c24 FUN_144326c24 body=55 status=ok
// SIG undefined FUN_144326c24(void)

void FUN_144326c24(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14665aa4e(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 144326c5c FUN_144326c5c body=29 status=ok
// SIG undefined FUN_144326c5c(void)

undefined8 FUN_144326c5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144326df8 FUN_144326df8 body=93 status=ok
// SIG undefined FUN_144326df8(void)

void FUN_144326df8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d8b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144326e56 FUN_144326e56 body=93 status=ok
// SIG undefined FUN_144326e56(void)

void FUN_144326e56(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d8b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144326eb4 FUN_144326eb4 body=126 status=ok
// SIG undefined FUN_144326eb4(void)

void FUN_144326eb4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d8b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144326f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144326f32 FUN_144326f32 body=30 status=ok
// SIG undefined FUN_144326f32(void)

void FUN_144326f32(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_148eea0f2(uVar1);
  FUN_148eea1e2(uVar1);
  return;
}



// FUNCTION 144326f50 FUN_144326f50 body=277 status=ok
// SIG undefined FUN_144326f50(void)

undefined8 FUN_144326f50(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14432705f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14432705f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14432705f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144326ffb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      FUN_148eea0f2(uVar6);
      FUN_148eea1e2(uVar6);
      uVar6 = 1;
      goto LAB_144326ffb;
    }
  }
  uVar6 = 0;
LAB_144326ffb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144327088 FUN_144327088 body=173 status=ok
// SIG undefined FUN_144327088(void)

void FUN_144327088(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14432711f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14432711f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 144327136 FUN_144327136 body=57 status=ok
// SIG undefined FUN_144327136(void)

undefined8 * FUN_144327136(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d8c00;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443272ee FUN_1443272ee body=205 status=ok
// SIG undefined FUN_1443272ee(void)

void FUN_1443272ee(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d8c00;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  puVar2[10] = uVar5;
  puVar2[7] = uVar3;
  puVar2[8] = uVar4;
  return;
}



// FUNCTION 1443273bc FUN_1443273bc body=205 status=ok
// SIG undefined FUN_1443273bc(void)

void FUN_1443273bc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d8c00;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  puVar2[10] = uVar5;
  puVar2[7] = uVar3;
  puVar2[8] = uVar4;
  return;
}



// FUNCTION 14432748a FUN_14432748a body=263 status=ok
// SIG undefined FUN_14432748a(void)

void FUN_14432748a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9d8c00;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].Flags = *(DWORD *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  DVar9 = *(DWORD *)(param_1 + 0x50);
  DVar10 = *(DWORD *)(param_1 + 0x54);
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = uVar8;
  p_Var2[1].EntryCount = DVar9;
  p_Var2[1].ContentionCount = DVar10;
  *(undefined4 *)&p_Var2[1].CriticalSection = uVar4;
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar5;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = uVar6;
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014432757b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14432759c FUN_14432759c body=269 status=ok
// SIG undefined FUN_14432759c(void)

undefined8 FUN_14432759c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1443276a3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443276a3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443276a3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144327657;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1443276aa(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144327657;
    }
  }
  uVar6 = 0;
LAB_144327657:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443276aa FUN_1443276aa body=264 status=ok
// SIG undefined FUN_1443276aa(void)

void FUN_1443276aa(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  lVar3 = *param_1;
  lVar12 = (longlong)*(int *)(lVar3 + 0x108);
  if (0 < lVar12) {
    puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x100) + 0x18);
    do {
      cVar11 = FUN_140c3e654(param_1 + 1,puVar13);
      if (cVar11 != '\0') {
        iVar2 = *(int *)(lVar3 + 0x118);
        *(uint *)(lVar3 + 0x118) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0x11c) < iVar2 + 1U) {
          FUN_141306894((longlong *)(lVar3 + 0x110),iVar2);
        }
        lVar3 = *(longlong *)(lVar3 + 0x110);
        lVar12 = (longlong)iVar2 * 0x38;
        puVar1 = (undefined8 *)(lVar3 + lVar12);
        *(undefined8 *)(lVar3 + lVar12) = 0;
        iVar2 = *(int *)(puVar13 + 1);
        _Src = (void *)*puVar13;
        *(int *)(lVar3 + 8 + lVar12) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
        *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar13 + 6);
        uVar4 = *(undefined4 *)(puVar13 + 2);
        uVar5 = *(undefined4 *)((longlong)puVar13 + 0x14);
        uVar6 = *(undefined4 *)(puVar13 + 3);
        uVar7 = *(undefined4 *)((longlong)puVar13 + 0x1c);
        uVar8 = *(undefined4 *)((longlong)puVar13 + 0x24);
        uVar9 = *(undefined4 *)(puVar13 + 5);
        uVar10 = *(undefined4 *)((longlong)puVar13 + 0x2c);
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar13 + 4);
        *(undefined4 *)((longlong)puVar1 + 0x24) = uVar8;
        *(undefined4 *)(puVar1 + 5) = uVar9;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar10;
        *(undefined4 *)(puVar1 + 2) = uVar4;
        *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
        *(undefined4 *)(puVar1 + 3) = uVar6;
        *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar7;
        if (puVar13[-2] == 0) {
          return;
        }
        if (puVar13[-3] == 0) {
          return;
        }
        FUN_14480f766(puVar13[-2] + 0xf8);
        return;
      }
      puVar13 = puVar13 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1443277b2 FUN_1443277b2 body=57 status=ok
// SIG undefined FUN_1443277b2(void)

undefined8 * FUN_1443277b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d8c70;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14432796a FUN_14432796a body=205 status=ok
// SIG undefined FUN_14432796a(void)

void FUN_14432796a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d8c70;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  puVar2[10] = uVar5;
  puVar2[7] = uVar3;
  puVar2[8] = uVar4;
  return;
}



// FUNCTION 144327a38 FUN_144327a38 body=205 status=ok
// SIG undefined FUN_144327a38(void)

void FUN_144327a38(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d8c70;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  puVar2[10] = uVar5;
  puVar2[7] = uVar3;
  puVar2[8] = uVar4;
  return;
}



// FUNCTION 144327b06 FUN_144327b06 body=263 status=ok
// SIG undefined FUN_144327b06(void)

void FUN_144327b06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9d8c70;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].Flags = *(DWORD *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  DVar9 = *(DWORD *)(param_1 + 0x50);
  DVar10 = *(DWORD *)(param_1 + 0x54);
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = uVar8;
  p_Var2[1].EntryCount = DVar9;
  p_Var2[1].ContentionCount = DVar10;
  *(undefined4 *)&p_Var2[1].CriticalSection = uVar4;
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar5;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = uVar6;
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144327bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


