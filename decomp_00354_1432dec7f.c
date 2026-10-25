// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432dec7f FUN_1432dec7f body=69 status=ok
// SIG undefined FUN_1432dec7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432dec7f(void)

{
  _DAT_14cab3b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432decc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3b60,1);
  return;
}



// FUNCTION 1432dee24 FUN_1432dee24 body=586 status=ok
// SIG undefined FUN_1432dee24(void)

void FUN_1432dee24(longlong *param_1,uint param_2,ushort *param_3,byte param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ushort *puVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar6 = *param_1;
  plVar7 = (longlong *)param_1[1];
  if (*(byte *)plVar7[2] != param_4) {
    lVar12 = *plVar7;
    piVar11 = (int *)plVar7[1];
    if ((longlong)*piVar11 != -1) {
      *(undefined2 *)(*(longlong *)(lVar12 + 0xa0) + (longlong)*piVar11 * 0x10) =
           *(undefined2 *)(lVar12 + 0xa8);
      piVar11 = (int *)plVar7[1];
    }
    iVar3 = *(int *)(lVar12 + 0xa8);
    *piVar11 = iVar3;
    *(uint *)(lVar12 + 0xa8) = iVar3 + 1U;
    if (*(uint *)(lVar12 + 0xac) < iVar3 + 1U) {
      FUN_146342366((longlong *)(lVar12 + 0xa0),iVar3);
    }
    lVar12 = *(longlong *)(lVar12 + 0xa0);
    *(uint *)(lVar12 + (longlong)iVar3 * 0x10) = (uint)param_4 << 0x10;
    *(undefined4 *)(lVar12 + 8 + (longlong)iVar3 * 0x10) = 1;
    *(byte *)plVar7[2] = param_4;
  }
  iVar3 = *(int *)(param_3 + 8);
  iVar4 = *(int *)(param_3 + 0x10);
  plVar7 = (longlong *)(lVar6 + 0xa0);
  iVar5 = *(int *)(lVar6 + 0xa8);
  if (iVar3 == 1 && iVar4 == 0) {
    puVar10 = *(ushort **)(param_3 + 4);
    if (*(ushort **)(param_3 + 4) == (ushort *)0x0) {
      puVar10 = param_3;
    }
    uVar1 = *puVar10;
    *(uint *)(lVar6 + 0xa8) = iVar5 + 1U;
    if (*(uint *)(lVar6 + 0xac) < iVar5 + 1U) {
      FUN_146342366(plVar7,iVar5);
    }
    lVar6 = *plVar7;
    lVar12 = (longlong)iVar5 * 0x10;
    *(uint *)(lVar6 + lVar12) = param_2 & 0xffff | (uint)uVar1 << 0x10;
    *(undefined4 *)(lVar6 + 8 + lVar12) = 0;
  }
  else {
    *(uint *)(lVar6 + 0xa8) = iVar5 + 1U;
    if (*(uint *)(lVar6 + 0xac) < iVar5 + 1U) {
      FUN_146342366(plVar7,iVar5);
    }
    lVar12 = *plVar7;
    lVar13 = (longlong)iVar5 * 0x10;
    *(uint *)(lVar12 + lVar13) = param_2 & 0xffff | (iVar5 + iVar4 + iVar3 + 1) * 0x10000;
    *(undefined4 *)(lVar12 + 8 + lVar13) = 3;
    puVar10 = *(ushort **)(param_3 + 4);
    if (*(ushort **)(param_3 + 4) == (ushort *)0x0) {
      puVar10 = param_3;
    }
    iVar3 = *(int *)(param_3 + 8);
    if ((longlong)iVar3 != 0) {
      lVar12 = 0;
      do {
        uVar2 = *(undefined2 *)((longlong)puVar10 + lVar12);
        iVar4 = *(int *)(lVar6 + 0xa8);
        *(uint *)(lVar6 + 0xa8) = iVar4 + 1U;
        if (*(uint *)(lVar6 + 0xac) < iVar4 + 1U) {
          FUN_146342366(plVar7,iVar4);
        }
        lVar13 = *plVar7;
        *(undefined2 *)(lVar13 + (longlong)iVar4 * 0x10) = uVar2;
        *(undefined4 *)(lVar13 + 8 + (longlong)iVar4 * 0x10) = 5;
        lVar12 = lVar12 + 2;
      } while ((longlong)iVar3 * 2 != lVar12);
    }
    iVar3 = *(int *)(param_3 + 0x10);
    if ((longlong)iVar3 != 0) {
      lVar12 = *(longlong *)(param_3 + 0xc);
      lVar13 = 0;
      do {
        uVar8 = *(undefined8 *)(lVar12 + lVar13);
        iVar4 = *(int *)(lVar6 + 0xa8);
        *(uint *)(lVar6 + 0xa8) = iVar4 + 1U;
        if (*(uint *)(lVar6 + 0xac) < iVar4 + 1U) {
          FUN_146342366(plVar7,iVar4);
        }
        lVar9 = *plVar7;
        *(undefined8 *)(lVar9 + (longlong)iVar4 * 0x10) = uVar8;
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar4 * 0x10) = 6;
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar3 * 8 != lVar13);
    }
  }
  return;
}



// FUNCTION 1432df06e FUN_1432df06e body=1380 status=ok
// SIG undefined FUN_1432df06e(void)

void FUN_1432df06e(longlong *param_1,uint *param_2,longlong param_3,byte param_4)

{
  ulonglong uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  short sVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  
  lVar6 = *param_1;
  plVar7 = (longlong *)param_1[1];
  if (*(byte *)plVar7[2] != param_4) {
    lVar19 = *plVar7;
    piVar12 = (int *)plVar7[1];
    if ((longlong)*piVar12 != -1) {
      *(undefined2 *)(*(longlong *)(lVar19 + 0xa0) + (longlong)*piVar12 * 0x10) =
           *(undefined2 *)(lVar19 + 0xa8);
      piVar12 = (int *)plVar7[1];
    }
    iVar3 = *(int *)(lVar19 + 0xa8);
    *piVar12 = iVar3;
    *(uint *)(lVar19 + 0xa8) = iVar3 + 1U;
    if (*(uint *)(lVar19 + 0xac) < iVar3 + 1U) {
      FUN_146342366((longlong *)(lVar19 + 0xa0),iVar3);
    }
    lVar19 = *(longlong *)(lVar19 + 0xa0);
    *(uint *)(lVar19 + (longlong)iVar3 * 0x10) = (uint)param_4 << 0x10;
    *(undefined4 *)(lVar19 + 8 + (longlong)iVar3 * 0x10) = 1;
    *(byte *)plVar7[2] = param_4;
  }
  uVar17 = 0;
  iVar11 = FUN_14055dcee(param_2,0,0xffffffff);
  iVar3 = *(int *)(param_3 + 0x20);
  plVar7 = (longlong *)(lVar6 + 0xa0);
  iVar21 = *(int *)(lVar6 + 0xa8);
  if (param_2[10] == 1) {
    sVar10 = (short)iVar21;
    uVar4 = *(undefined4 *)(param_3 + 0x10);
    uVar18 = param_2[8];
    if (uVar18 == 0) {
      uVar17 = 1;
      uVar24 = 0;
      iVar15 = 0;
      uVar22 = 0;
    }
    else {
      uVar22 = *param_2;
      uVar24 = 0;
      iVar15 = 0;
      if (uVar22 == 0) {
        iVar15 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar15 = uVar18 - 1;
        }
        uVar24 = 0;
        uVar17 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar17 = uVar24;
        }
        iVar15 = 0;
        do {
          if (uVar17 == uVar24) goto LAB_1432df37f;
          iVar15 = iVar15 + 0x20;
          uVar22 = param_2[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar22 == 0);
      }
      uVar17 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar17 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar22 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar18 <= (int)uVar22) {
        uVar22 = uVar18;
      }
    }
    if ((int)uVar22 < (int)uVar18) {
      uVar18 = 0xffffffff;
      do {
        iVar16 = *(int *)(lVar6 + 0xa8);
        *(uint *)(lVar6 + 0xa8) = iVar16 + 1U;
        if (*(uint *)(lVar6 + 0xac) < iVar16 + 1U) {
          FUN_146342366(plVar7,iVar16);
        }
        lVar19 = *plVar7;
        uVar5 = param_2[10];
        *(uint *)(lVar19 + (longlong)iVar16 * 0x10) =
             uVar22 & 0xffff | (iVar21 + iVar11 + 1) * 0x10000;
        *(uint *)(lVar19 + 8 + (longlong)iVar16 * 0x10) = (uVar5 == 0) + 2;
        uVar18 = uVar18 & ~(uint)uVar17;
        uVar5 = param_2[8];
        iVar16 = (int)uVar24;
        lVar19 = (longlong)iVar16;
        uVar22 = param_2[lVar19] & uVar18;
        if (uVar22 == 0) {
          iVar23 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar23 = uVar5 - 1;
          }
          iVar13 = iVar23 >> 5;
          if (iVar23 >> 5 < iVar16) {
            iVar13 = iVar16;
          }
          lVar20 = 0;
          do {
            if (iVar13 - lVar19 == lVar20) goto LAB_1432df372;
            iVar15 = iVar15 + 0x20;
            uVar22 = param_2[lVar19 + lVar20 + 1];
            lVar20 = lVar20 + 1;
          } while (uVar22 == 0);
          uVar24 = (ulonglong)(uint)(iVar16 + (int)lVar20);
          uVar18 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar17 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar22 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      } while ((int)uVar22 < (int)uVar5);
LAB_1432df372:
      iVar21 = *(int *)(lVar6 + 0xa8);
    }
LAB_1432df37f:
    *(uint *)(lVar6 + 0xa8) = iVar21 + 1U;
    if (*(uint *)(lVar6 + 0xac) < iVar21 + 1U) {
      FUN_146342366(plVar7,iVar21);
    }
    lVar19 = *plVar7;
    *(short *)(lVar19 + (longlong)iVar21 * 0x10) =
         (short)iVar3 + sVar10 + (short)iVar11 + 1 + (short)uVar4;
    *(undefined4 *)(lVar19 + 8 + (longlong)iVar21 * 0x10) = 4;
  }
  else {
    iVar15 = *(int *)(param_3 + 0x10);
    uVar18 = param_2[8];
    if (uVar18 == 0) {
      uVar24 = 1;
      iVar16 = 0;
      uVar22 = 0;
    }
    else {
      uVar22 = *param_2;
      uVar17 = 0;
      iVar16 = 0;
      if (uVar22 == 0) {
        iVar16 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar16 = uVar18 - 1;
        }
        uVar17 = 0;
        uVar24 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar24 = uVar17;
        }
        iVar16 = 0;
        do {
          if (uVar24 == uVar17) goto LAB_1432df4c0;
          iVar16 = iVar16 + 0x20;
          uVar22 = param_2[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar22 == 0);
      }
      uVar24 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar24 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar22 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar18 <= (int)uVar22) {
        uVar22 = uVar18;
      }
    }
    if ((int)uVar22 < (int)uVar18) {
      uVar18 = 0xffffffff;
      do {
        iVar23 = *(int *)(lVar6 + 0xa8);
        *(uint *)(lVar6 + 0xa8) = iVar23 + 1U;
        if (*(uint *)(lVar6 + 0xac) < iVar23 + 1U) {
          FUN_146342366(plVar7,iVar23);
        }
        lVar19 = *plVar7;
        uVar5 = param_2[10];
        *(uint *)(lVar19 + (longlong)iVar23 * 0x10) =
             uVar22 & 0xffff | (iVar21 + iVar11 + iVar3 + iVar15) * 0x10000;
        *(uint *)(lVar19 + 8 + (longlong)iVar23 * 0x10) = (uVar5 == 0) + 2;
        uVar18 = uVar18 & ~(uint)uVar24;
        uVar5 = param_2[8];
        iVar23 = (int)uVar17;
        lVar19 = (longlong)iVar23;
        uVar22 = param_2[lVar19] & uVar18;
        if (uVar22 == 0) {
          iVar13 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar13 = uVar5 - 1;
          }
          iVar14 = iVar13 >> 5;
          if (iVar13 >> 5 < iVar23) {
            iVar14 = iVar23;
          }
          lVar20 = 0;
          do {
            if (iVar14 - lVar19 == lVar20) goto LAB_1432df4c0;
            iVar16 = iVar16 + 0x20;
            uVar22 = param_2[lVar19 + lVar20 + 1];
            lVar20 = lVar20 + 1;
          } while (uVar22 == 0);
          uVar17 = (ulonglong)(uint)(iVar23 + (int)lVar20);
          uVar18 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar24 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar22 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      } while ((int)uVar22 < (int)uVar5);
    }
  }
LAB_1432df4c0:
  lVar19 = *(longlong *)(param_3 + 8);
  if (*(longlong *)(param_3 + 8) == 0) {
    lVar19 = param_3;
  }
  iVar3 = *(int *)(param_3 + 0x10);
  if ((longlong)iVar3 != 0) {
    lVar20 = 0;
    do {
      uVar2 = *(undefined2 *)(lVar19 + lVar20);
      iVar21 = *(int *)(lVar6 + 0xa8);
      *(uint *)(lVar6 + 0xa8) = iVar21 + 1U;
      if (*(uint *)(lVar6 + 0xac) < iVar21 + 1U) {
        FUN_146342366(plVar7,iVar21);
      }
      lVar8 = *plVar7;
      *(undefined2 *)(lVar8 + (longlong)iVar21 * 0x10) = uVar2;
      *(undefined4 *)(lVar8 + 8 + (longlong)iVar21 * 0x10) = 5;
      lVar20 = lVar20 + 2;
    } while ((longlong)iVar3 * 2 != lVar20);
  }
  iVar3 = *(int *)(param_3 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar19 = *(longlong *)(param_3 + 0x18);
    lVar20 = 0;
    do {
      uVar9 = *(undefined8 *)(lVar19 + lVar20);
      iVar21 = *(int *)(lVar6 + 0xa8);
      *(uint *)(lVar6 + 0xa8) = iVar21 + 1U;
      if (*(uint *)(lVar6 + 0xac) < iVar21 + 1U) {
        FUN_146342366(plVar7,iVar21);
      }
      lVar8 = *plVar7;
      *(undefined8 *)(lVar8 + (longlong)iVar21 * 0x10) = uVar9;
      *(undefined4 *)(lVar8 + 8 + (longlong)iVar21 * 0x10) = 6;
      lVar20 = lVar20 + 8;
    } while ((longlong)iVar3 * 8 != lVar20);
  }
  return;
}



// FUNCTION 1432df6f8 FUN_1432df6f8 body=329 status=ok
// SIG undefined FUN_1432df6f8(void)

bool FUN_1432df6f8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (lVar4 = FUN_145909298(), lVar4 != 0)) &&
     (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) {
    if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30) {
      return false;
    }
    if (*param_1 == 0) {
      return false;
    }
    lVar1 = *param_2;
    if (((lVar1 != 0) && (lVar4 = FUN_145909298(), lVar4 != 0)) &&
       (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30) {
        return false;
      }
      if (*param_2 != 0) {
        lVar1 = *param_1;
        if (((lVar1 == 0) || (lVar4 = FUN_145909298(), lVar4 == 0)) ||
           ((*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
             lVar4 + 0x30)))) {
          param_1 = (longlong *)0x0;
        }
        else {
          param_1 = (longlong *)*param_1;
        }
        plVar5 = (longlong *)param_1[0x22];
        if (plVar5 == (longlong *)0x0) {
          (**(code **)(*param_1 + 1000))(param_1);
          plVar5 = (longlong *)param_1[0x22];
        }
        iVar2 = (**(code **)(*plVar5 + 0x2b0))();
        lVar1 = *param_2;
        if ((((lVar1 == 0) || (lVar4 = FUN_145909298(), lVar4 == 0)) ||
            (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          param_2 = (longlong *)0x0;
        }
        else {
          param_2 = (longlong *)*param_2;
        }
        plVar5 = (longlong *)param_2[0x22];
        if (plVar5 == (longlong *)0x0) {
          (**(code **)(*param_2 + 1000))(param_2);
          plVar5 = (longlong *)param_2[0x22];
        }
        iVar3 = (**(code **)(*plVar5 + 0x2b0))();
        return iVar3 < iVar2;
      }
      return false;
    }
  }
  return false;
}



// FUNCTION 1432df864 FUN_1432df864 body=117 status=ok
// SIG undefined FUN_1432df864(void)

undefined8 * FUN_1432df864(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a490a70;
  if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4e) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432df8da FUN_1432df8da body=29 status=ok
// SIG undefined FUN_1432df8da(void)

undefined8 FUN_1432df8da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432dfa76 FUN_1432dfa76 body=93 status=ok
// SIG undefined FUN_1432dfa76(void)

void FUN_1432dfa76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a4917c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1432dfad4 FUN_1432dfad4 body=93 status=ok
// SIG undefined FUN_1432dfad4(void)

void FUN_1432dfad4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a4917c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1432dfb32 FUN_1432dfb32 body=126 status=ok
// SIG undefined FUN_1432dfb32(void)

void FUN_1432dfb32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a4917c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432dfba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1432dfbb0 FUN_1432dfbb0 body=181 status=ok
// SIG undefined FUN_1432dfbb0(void)

void FUN_1432dfbb0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x20);
  FUN_140de91b2(plVar1);
  cVar2 = FUN_1402d76c0(plVar1);
  if (cVar2 != '\0') {
    *(undefined8 *)((longlong)plVar1 + 0x38c) = *(undefined8 *)((longlong)plVar1 + 0x31c);
    *(char *)((longlong)plVar1 + 0x394) = (char)plVar1[0x52];
    plVar1[0x73] = *(longlong *)((longlong)plVar1 + 0x2ac);
  }
  FUN_14179f158(plVar1,local_20,1);
  (**(code **)(*plVar1 + 0x2e8))(plVar1);
  if (0 < (int)plVar1[0x4d]) {
    FUN_1447cd2ec(plVar1 + 0x4c,0);
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dfc66 FUN_1432dfc66 body=401 status=ok
// SIG undefined FUN_1432dfc66(void)

undefined8 FUN_1432dfc66(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1432dfdf1;
    if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1432dfdf1;
    }
    FUN_140192332(param_1 + 0x18,local_30,0);
    lVar9 = local_30[0];
  }
  else {
LAB_1432dfdf1:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1432dfda5;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      FUN_140de91b2(plVar3);
      cVar4 = FUN_1402d76c0(plVar3);
      if (cVar4 != '\0') {
        *(undefined8 *)((longlong)plVar3 + 0x38c) = *(undefined8 *)((longlong)plVar3 + 0x31c);
        *(char *)((longlong)plVar3 + 0x394) = (char)plVar3[0x52];
        plVar3[0x73] = *(longlong *)((longlong)plVar3 + 0x2ac);
      }
      FUN_14179f158(plVar3,local_30,1);
      (**(code **)(*plVar3 + 0x2e8))(plVar3);
      if (0 < (int)plVar3[0x4d]) {
        FUN_1447cd2ec(plVar3 + 0x4c,0);
      }
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      uVar8 = 1;
      goto LAB_1432dfda5;
    }
  }
  uVar8 = 0;
LAB_1432dfda5:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432dfdf8 FUN_1432dfdf8 body=29 status=ok
// SIG undefined FUN_1432dfdf8(void)

undefined8 FUN_1432dfdf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432dff94 FUN_1432dff94 body=101 status=ok
// SIG undefined FUN_1432dff94(void)

void FUN_1432dff94(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a491910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1432dfffa FUN_1432dfffa body=101 status=ok
// SIG undefined FUN_1432dfffa(void)

void FUN_1432dfffa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a491910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1432e0060 FUN_1432e0060 body=134 status=ok
// SIG undefined FUN_1432e0060(void)

void FUN_1432e0060(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a491910;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432e00d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1432e00f0 FUN_1432e00f0 body=269 status=ok
// SIG undefined FUN_1432e00f0(void)

undefined8 FUN_1432e00f0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1432e01f7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1432e01f7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1432e01f7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1432e01ab;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1432e01fe(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1432e01ab;
    }
  }
  uVar6 = 0;
LAB_1432e01ab:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e01fe FUN_1432e01fe body=481 status=ok
// SIG undefined FUN_1432e01fe(void)

void FUN_1432e01fe(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  if ((char)plVar1[0x85] == '\x01') {
    (**(code **)(*DAT_14cb0d2b0 + 0x308))(DAT_14cb0d2b0,(float)(double)plVar1[0x84]);
    if ((char)plVar1[0x85] == '\x01') {
      *(undefined1 *)(plVar1 + 0x85) = 0;
    }
  }
  if ((char)plVar1[0x86] == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab3b70) {
      FUN_144b3d300(&DAT_14cab3b70);
      if (DAT_14cab3b70 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cab3b68 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DynamicRes.FrameTimeBudget",1);
        _Init_thread_footer(&DAT_14cab3b70);
      }
    }
    (**(code **)(*DAT_14cab3b68 + 0xa0))(DAT_14cab3b68,0xd000000,0);
    *(undefined1 *)(plVar1 + 0x86) = 0;
  }
  cVar2 = FUN_1402d76c0(plVar1);
  if (cVar2 != '\0') {
    *(undefined8 *)((longlong)plVar1 + 0x38c) = *(undefined8 *)((longlong)plVar1 + 0x31c);
    *(char *)((longlong)plVar1 + 0x394) = (char)plVar1[0x52];
    plVar1[0x73] = *(longlong *)((longlong)plVar1 + 0x2ac);
  }
  FUN_14179f158(plVar1,local_38,1);
  cVar2 = FUN_1402d76c0(plVar1);
  if (cVar2 != '\0') {
    local_20 = (int)plVar1[0x56] + 1;
    local_28 = param_1[1];
    uVar3 = FUN_14477b072(plVar1,DAT_14cab39b8);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar3,&local_28);
  }
  (**(code **)(*plVar1 + 0x2f0))(plVar1);
  if (0 < (int)plVar1[0x4b]) {
    FUN_1447cd2ec(plVar1 + 0x4a,0);
  }
  FUN_1447f69b6(plVar1 + 0x91);
  FUN_140de91b2(plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e03e0 FUN_1432e03e0 body=31 status=ok
// SIG undefined FUN_1432e03e0(void)

undefined8 FUN_1432e03e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e0432 FUN_1432e0432 body=1716 status=ok
// SIG undefined FUN_1432e0432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e0432(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14cab3298 = 0xffffffff;
  DAT_14cab329c = 0;
  _DAT_14cab3b78 = DAT_14cab2e38;
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a481d50;
  local_88 = 0;
  DAT_14cab2e38 = DAT_14cab2e38 + 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a481d70,2,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4820f0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a483bf0,3,&PTR_FUN_14a483b20);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a483e30);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a484060);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a484610,1,&PTR_FUN_14a4845e0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a484750);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a484c90);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a485910,1,&PTR_FUN_14a485840);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a485e80,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a485f20);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a486800,1,0);
  local_68 = "MovieSceneMetaData_Author";
  local_60 = 0x19;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cab35d0 = (ulonglong)uVar1;
  local_68 = "MovieSceneMetaData_Created";
  local_60 = 0x1a;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cab35d8 = (ulonglong)uVar1;
  local_68 = "MovieSceneMetaData_Notes";
  local_60 = 0x18;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cab35e0 = (ulonglong)uVar1;
  FUN_140056680(&local_68,L"60000fps");
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cab35e8,L"MovieScene.LegacyConversionFrameRate",&local_68,
                L"Specifies default tick resolution for UMovieScene data saved before 4.20 (default: 60000fps). Examples: 60000 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
               );
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1432dd794);
  local_68 = (char *)0x8000000149e86e34;
  local_54 = 10;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_1463405dc(&local_68);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a486e00,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a487020;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a487040);
  InitializeSRWLock((PSRWLOCK)&DAT_14cab3658);
  DAT_14cab3680 = 0;
  DAT_14cab3688 = 0;
  DAT_14cab3660 = 0;
  _DAT_14cab3668 = 0;
  _DAT_14cab368c = 0xffffffff00000080;
  DAT_14cab3694 = 0;
  atexit((_func_5014 *)&LAB_1432dd810);
  DAT_14cab36a8 = 0;
  _DAT_14cab36b0 = 0x8000000000;
  atexit((_func_5014 *)&LAB_1432dd815);
  DAT_14cab3b74 = DAT_14cab2e38 + 1;
  DAT_14cab36b8 = DAT_14cab2e38;
  DAT_14cab2e38 = DAT_14cab2e38 + 2;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a487410);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4891d0,1,&PTR_FUN_14a489150);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a489bb0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a489db0);
  FUN_1446f470e(&DAT_14cab3998,L"RPC_ExplicitServerUpdateEvent",1);
  FUN_1446f470e(&DAT_14cab39a8,L"RPC_OnFinishPlaybackEvent",1);
  FUN_1446f470e(&DAT_14cab39b8,L"RPC_OnStopEvent",1);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14a48d3c0;
  local_88 = 3;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a48d480,1,&PTR_FUN_14a48d400);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cab3aa0,L"Sequencer.NetSyncThreshold",&DAT_14c760ff4,
                L"(Default: 200ms. Defines the threshold at which clients and servers must be forcibly re-synced during playback."
               );
  atexit(FUN_1432ddf0b);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab3ab0,L"Sequencer.SmoothedMaxNetSyncSampleAge",&DAT_14c760ff8,
                L"(Default: 5000. Defines the range of samples (in milliseconds) required to perform smoothed net sync. Use 0 to disable smoothing."
               );
  atexit(FUN_1432ddf50);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab3ac0,L"Sequencer.SmoothedMaxNetSyncSampleCount",&DAT_14c760ffc,
                L"(Default: 50. The maximum number of samples to keep in memory.");
  atexit(FUN_1432ddf95);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cab3ad0,L"Sequencer.SmoothedNetSyncDeviationThreshold",&DAT_14c761000,
                L"(Default: 200ms. Defines the acceptable deviation for smoothed net sync samples. Samples outside this deviation will be discarded."
               );
  atexit(FUN_1432ddfda);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab3ae8,L"Sequencer.ApplyDisplayRateToDynamicResolutionFrameTimeBudget",
                &DAT_14cab3ae0,
                L"(Whether to override r.DynamicRes.FrameTimeBudget based on sequence display rate when using \'Lock to Display Rate at Runtime\'."
               );
  atexit(FUN_1432de01f);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a48dea0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab3b30,L"Sequencer.TickIntervalGroupingResolutionMs",&DAT_14c761004,
                L"Defines the maximum resolution for actor tick interval groupings. Bigger numbers will group more actors together when they have custom tick intervals, but will lead to less accurate intervals.\n"
               );
  atexit(FUN_1432dea81);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a48e3e0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab3b58,L"Sequencer.MaxLatentActionLoops",&DAT_14c761008,
                L"Defines the maximum number of latent action loops that can be run in one frame.\n"
               );
  atexit(FUN_1432dec7f);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e0ae8 FUN_1432e0ae8 body=47 status=ok
// SIG undefined FUN_1432e0ae8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e0ae8(void)

{
  _DAT_14cab3be8 = 0;
  if (DAT_14cab3be0 != 0) {
    FUN_1400020a8();
  }
  FUN_146155fde(&DAT_14cab3ba0);
  return;
}



// FUNCTION 1432e0b31 FUN_1432e0b31 body=55 status=ok
// SIG undefined FUN_1432e0b31(void)

void FUN_1432e0b31(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3c08 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3c08 = FUN_14171c317(FUN_14634299d,uVar1,L"ESpawnOwnership");
  }
  return;
}



// FUNCTION 1432e0b80 FUN_1432e0b80 body=69 status=ok
// SIG undefined FUN_1432e0b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e0b80(void)

{
  _DAT_14cab3d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e0bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3d70,1);
  return;
}



// FUNCTION 1432e0bc5 FUN_1432e0bc5 body=69 status=ok
// SIG undefined FUN_1432e0bc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e0bc5(void)

{
  _DAT_14cab3d80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e0c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3d88,1);
  return;
}



// FUNCTION 1432e0c0a FUN_1432e0c0a body=658 status=ok
// SIG undefined FUN_1432e0c0a(void)

int * FUN_1432e0c0a(longlong *param_1,int *param_2,undefined8 *param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  
  if ((char)param_1[3] == '\0') {
    *(undefined8 *)param_2 = *param_3;
  }
  else {
    lVar4 = param_1[1];
    lVar1 = param_1[2];
    dVar10 = (double)param_1[6];
    dVar7 = (double)(**(code **)(*param_1 + 0x28))();
    dVar9 = (dVar7 - (double)param_1[8]) * ((double)param_4 + -1.0) + (double)param_1[5];
    param_1[5] = (longlong)dVar9;
    param_1[8] = (longlong)dVar7;
    *(undefined1 *)(param_1 + 9) = 1;
    lVar3 = param_3[1];
    fVar6 = (float)((ulonglong)lVar4 >> 0x20);
    if (lVar1 != lVar3) {
      lVar5 = (lVar1 >> 0x20) * (longlong)(int)lVar3;
      lVar3 = (longlong)(int)lVar1 * (lVar3 >> 0x20);
      lVar1 = (lVar5 * (int)lVar4) / lVar3;
      dVar8 = ((double)fVar6 * (double)lVar5) / (double)lVar3 +
              (((double)lVar5 * (double)(int)lVar4) / (double)lVar3 - (double)lVar1);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar8;
      auVar12 = roundpd(auVar12,auVar12,1);
      lVar1 = (longlong)auVar12._0_8_ + lVar1;
      fVar11 = (float)(dVar8 - auVar12._0_8_);
      fVar6 = fVar11;
      if (0.99999994 <= fVar11) {
        fVar6 = 0.99999994;
      }
      if (0x7ffffffe < lVar1) {
        lVar1 = 0x7fffffff;
      }
      lVar4 = -0x80000000;
      if (-0x80000000 < lVar1) {
        lVar4 = lVar1;
      }
      fVar6 = (float)(~-(uint)(0.0 < fVar11) & (uint)fVar11 | (uint)fVar6 & -(uint)(0.0 < fVar11)) +
              0.5 + -0.5;
      if (0.99999994 <= fVar6) {
        fVar6 = 0.99999994;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      lVar1 = param_3[1];
    }
    dVar10 = ((dVar9 + (dVar7 - dVar10)) * (double)(int)lVar1) /
             (double)(int)((ulonglong)lVar1 >> 0x20);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar10;
    auVar12 = roundpd(auVar13,auVar13,1);
    dVar7 = auVar12._0_8_;
    dVar10 = dVar10 - dVar7;
    if (2147483647.0 <= dVar7) {
      dVar7 = 2147483647.0;
    }
    if (dVar7 <= -2147483648.0) {
      dVar7 = -2147483648.0;
    }
    iVar2 = (int)dVar10;
    fVar14 = (float)dVar10 - (float)iVar2;
    fVar11 = fVar14;
    if (0.99999994 <= fVar14) {
      fVar11 = 0.99999994;
    }
    fVar11 = (float)(~-(uint)(0.0 < fVar14) & (uint)fVar14 | (uint)fVar11 & -(uint)(0.0 < fVar14)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar11) {
      fVar11 = 0.99999994;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar11 = fVar11 + fVar6;
    auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar11),9);
    *param_2 = (int)lVar4 + iVar2 + (int)dVar7 + ((int)ROUND(fVar11 + fVar11 + -0.5) >> 1);
    fVar6 = (fVar11 - auVar12._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar6) {
      fVar6 = 0.99999994;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    param_2[1] = (int)fVar6;
  }
  return param_2;
}



// FUNCTION 1432e0ea6 FUN_1432e0ea6 body=8 status=ok
// SIG undefined FUN_1432e0ea6(void)

undefined8 FUN_1432e0ea6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x7d8);
}



// FUNCTION 1432e0eae FUN_1432e0eae body=69 status=ok
// SIG undefined FUN_1432e0eae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e0eae(void)

{
  _DAT_14cab3e00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab3e08,1);
  return;
}



// FUNCTION 1432e0f08 FUN_1432e0f08 body=6 status=ok
// SIG undefined FUN_1432e0f08(void)

byte FUN_1432e0f08(longlong param_1)

{
  return *(byte *)(param_1 + 6) & 7;
}



// FUNCTION 1432e0f0e FUN_1432e0f0e body=11 status=ok
// SIG undefined FUN_1432e0f0e(void)

undefined8 * FUN_1432e0f0e(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1432e0f1a FUN_1432e0f1a body=8 status=ok
// SIG undefined FUN_1432e0f1a(void)

undefined8 * FUN_1432e0f1a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1432e0f22 FUN_1432e0f22 body=46 status=ok
// SIG undefined FUN_1432e0f22(void)

void FUN_1432e0f22(ulonglong *param_1,double param_2)

{
  *param_1 = ~-(ulonglong)(1e-08 < ABS(param_2)) & 0xfff9000000000000 |
             (ulonglong)param_2 & -(ulonglong)(1e-08 < ABS(param_2));
  return;
}



// FUNCTION 1432e0f50 FUN_1432e0f50 body=25 status=ok
// SIG undefined FUN_1432e0f50(void)

undefined8 FUN_1432e0f50(double *param_1)

{
  double dVar1;
  
  dVar1 = *param_1;
  if (3.4028234663852886e+38 <= dVar1) {
    dVar1 = 3.4028234663852886e+38;
  }
  if (dVar1 <= -3.4028234663852886e+38) {
    dVar1 = -3.4028234663852886e+38;
  }
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}



// FUNCTION 1432e1072 FUN_1432e1072 body=67 status=ok
// SIG undefined FUN_1432e1072(void)

void FUN_1432e1072(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = *param_3;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e10ba FUN_1432e10ba body=53 status=ok
// SIG undefined FUN_1432e10ba(void)

undefined8 * FUN_1432e10ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a498f50;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e10f0 FUN_1432e10f0 body=85 status=ok
// SIG undefined FUN_1432e10f0(void)

undefined8 FUN_1432e10f0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14753e8f2(param_1,iVar1);
  }
  iVar3 = (uint)(0.5 <= (float)((ulonglong)uVar2 >> 0x20)) + (int)uVar2;
  *(int *)(*param_1 + (longlong)iVar1 * 4) = iVar3;
  return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
}



// FUNCTION 1432e1146 FUN_1432e1146 body=259 status=ok
// SIG undefined FUN_1432e1146(void)

void FUN_1432e1146(undefined8 *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [47];
  char local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined4 *)*param_4;
  puVar3 = (ulonglong *)*param_1;
  local_39 = '\0';
  puVar4 = (ulonglong *)param_2[1];
  pcVar1 = (char *)*puVar4 + 1;
  if ((char *)puVar4[1] < pcVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_39,1);
  }
  else {
    local_39 = *(char *)*puVar4;
    *puVar4 = (ulonglong)pcVar1;
  }
  if (local_39 == '\0') {
    local_38 = 0;
    (**(code **)(*param_2 + 0x150))(param_2,&local_38);
    uVar5 = local_38;
    if (local_38 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(local_38);
      }
      *(ulonglong *)(uVar5 + 0x58) = uVar5;
    }
    *puVar3 = uVar5 | 0xfff8000000000000;
  }
  else {
    (**(code **)(*param_2 + 0x170))(param_2,&local_38,6);
    *(undefined2 *)(puVar2 + 1) = local_38._4_2_;
    *puVar2 = (undefined4)local_38;
    *param_3 = local_39;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e124a FUN_1432e124a body=211 status=ok
// SIG undefined FUN_1432e124a(void)

void FUN_1432e124a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined1 auStack_58 [39];
  byte local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined4 *)*param_4;
  puVar3 = (ulonglong *)*param_1;
  local_31 = *(byte *)((longlong)puVar3 + 6) & 7;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    puVar4 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_31,1);
    }
    else {
      local_31 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar1;
    }
  }
  if (local_31 == 0) {
    local_30 = *puVar3 & 0xffffffffffff;
    (**(code **)(*param_2 + 0x150))(param_2);
  }
  else {
    local_30 = CONCAT44(CONCAT22(local_30._6_2_,*(undefined2 *)(puVar2 + 1)),*puVar2);
    (**(code **)(*param_2 + 0x170))(param_2,&local_30,6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e131e FUN_1432e131e body=550 status=ok
// SIG undefined FUN_1432e131e(void)

void FUN_1432e131e(undefined8 *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  byte *pbVar1;
  int3 *piVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar8 = (ulonglong *)*param_4;
  puVar4 = (ulonglong *)*param_1;
  bVar3 = *(byte *)(param_2 + 5);
  local_39 = ((byte)(*puVar4 >> 0x30) & 7) + 1;
  if ((uint)(*puVar4 >> 0x33) < 0x1fff) {
    local_39 = 0;
  }
  puVar5 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar5 + 1;
  if ((byte *)puVar5[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_39,1);
  }
  else {
    local_39 = *(byte *)*puVar5;
    *puVar5 = (ulonglong)pbVar1;
  }
  if ((bVar3 & 1) != 0) {
    *param_3 = local_39 - 1;
  }
  switch(local_39) {
  case 1:
    if ((bVar3 & 1) == 0) {
      local_48 = *puVar4 & 0xffffffffffff;
      (**(code **)(*param_2 + 0x150))(param_2);
    }
    else {
      local_48 = 0;
      (**(code **)(*param_2 + 0x150))(param_2,&local_48);
      uVar6 = local_48;
      if (local_48 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(local_48);
        }
        *(ulonglong *)(uVar6 + 0x58) = uVar6;
      }
      *puVar4 = uVar6 | 0xfff8000000000000;
    }
    goto switchD_1432e13cd_default;
  case 2:
    uVar7 = FUN_14633aa60();
    break;
  case 3:
    if ((bVar3 & 1) != 0) {
      local_48 = 0x10000ea60;
      uVar7 = FUN_146892096();
      FUN_14047320e(uVar7,param_2,&local_48,0);
      *(short *)puVar8 = (short)local_48;
      *(byte *)((longlong)puVar8 + 2) = (byte)(local_48 >> 0x18) & 0x80 | (byte)(local_48 >> 0x10);
      *(short *)((longlong)puVar8 + 3) = (short)(local_48 >> 0x20);
      *(byte *)((longlong)puVar8 + 5) = (byte)(local_48 >> 0x38) & 0x80 | (byte)(local_48 >> 0x30);
      goto switchD_1432e13cd_default;
    }
    uVar6 = *puVar8;
    piVar2 = (int3 *)((longlong)puVar8 + 3);
    puVar8 = &local_48;
    local_48 = CONCAT44((int)*piVar2,(int)(int3)uVar6) & 0x807fffff807fffff;
    uVar7 = FUN_146892096();
    break;
  case 4:
    uVar7 = FUN_14633ac22();
    break;
  case 5:
    uVar7 = FUN_14633acb8();
    break;
  case 6:
    uVar7 = FUN_14633ad4e();
    break;
  case 7:
    uVar7 = FUN_14633ade4();
    break;
  default:
    goto switchD_1432e13cd_default;
  }
  FUN_14047320e(uVar7,param_2,puVar8,0);
switchD_1432e13cd_default:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432e1546 FUN_1432e1546 body=79 status=ok
// SIG undefined FUN_1432e1546(void)

undefined8 FUN_1432e1546(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633aaf6();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e1596 FUN_1432e1596 body=79 status=ok
// SIG undefined FUN_1432e1596(void)

undefined8 FUN_1432e1596(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633ab8c();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e15e6 FUN_1432e15e6 body=79 status=ok
// SIG undefined FUN_1432e15e6(void)

undefined8 FUN_1432e15e6(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633aa60();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e1636 FUN_1432e1636 body=79 status=ok
// SIG undefined FUN_1432e1636(void)

undefined8 FUN_1432e1636(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633ae7a();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e1686 FUN_1432e1686 body=79 status=ok
// SIG undefined FUN_1432e1686(void)

undefined8 FUN_1432e1686(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633ac22();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e16d6 FUN_1432e16d6 body=79 status=ok
// SIG undefined FUN_1432e16d6(void)

undefined8 FUN_1432e16d6(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633acb8();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e1726 FUN_1432e1726 body=79 status=ok
// SIG undefined FUN_1432e1726(void)

undefined8 FUN_1432e1726(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633ad4e();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e1776 FUN_1432e1776 body=79 status=ok
// SIG undefined FUN_1432e1776(void)

undefined8 FUN_1432e1776(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14633ade4();
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e17c6 FUN_1432e17c6 body=989 status=ok
// SIG undefined FUN_1432e17c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e17c6(void)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cab3b7c = 0xffffffff;
  _DAT_14cab3b80 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4924a0,1,0);
  _DAT_14cab3bc0 = 0;
  _DAT_14cab3bc8 = 0;
  DAT_14cab3ba0 = 0;
  DAT_14cab3ba8 = 0;
  _DAT_14cab3bcc = 0xffffffff00000080;
  _DAT_14cab3bd4 = 0;
  DAT_14cab3be0 = 0;
  _DAT_14cab3be8 = 0;
  atexit(FUN_1432e0ae8);
  DAT_14cab3bf0 = 0;
  DAT_14cab3bf8 = 0;
  atexit((_func_5014 *)&LAB_1432e0b17);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a4929d0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a4929f0);
  _DAT_14cab3c30 = &PTR_FUN_14a499390;
  DAT_14cab3c58 = 0;
  _DAT_14cab3c60 = 0;
  DAT_14cab3c38 = 0;
  _DAT_14cab3c40 = 0;
  _DAT_14cab3c64 = 0xffffffff00000080;
  DAT_14cab3c6c = 0;
  DAT_14cab3c78 = 0;
  DAT_14cab3c80 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3c88);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cab3c88,4000);
  _DAT_14cab3cb0 = 0;
  DAT_14cab3cb8 = 0;
  atexit((_func_5014 *)&LAB_1432e0b68);
  FUN_14758298c();
  atexit((_func_5014 *)&LAB_1432e0b74);
  _DAT_14cab3ff8 = DAT_14cab2e38;
  local_44 = 1;
  local_68 = local_68 & 0xffffffff00000000;
  DAT_14cab2e38 = DAT_14cab2e38 + 1;
  FUN_14078dbce(&DAT_14cab3d68,L"Sequencer.RelativeTimecodeSmoothing",&local_44,
                L"If nonzero, accumulate with platform time since when the timecodes were equal.");
  atexit(FUN_1432e0b80);
  local_44 = 0x3f800000;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cab3d80,L"Sequencer.SecondsPerFrame",&local_44,
                L"Seconds per frame to wait when in play every frame mode.");
  atexit(FUN_1432e0bc5);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4934f0,1,&PTR_FUN_14a493470);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab3e00,L"MovieScene.RemoveMutedTracksOnCook",&DAT_14cab3df8,
                L"If 1 remove muted tracks on cook, otherwise leave as is.");
  atexit(FUN_1432e0eae);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MovieScene",0,0,&PTR_FUN_14a493970);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a493e20,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4942e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a494870,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a494ce0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a495670,1,&PTR_FUN_14a495640);
  FUN_14633cd78(&DAT_14cab3ee0);
  FUN_14633cd78(&DAT_14cab3ee8);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a497650,7,&PTR_FUN_14a497620);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a497c40,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a498120,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieScene",&PTR_FUN_14a4985c0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e1ba4 FUN_1432e1ba4 body=69 status=ok
// SIG undefined FUN_1432e1ba4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e1ba4(void)

{
  _DAT_14cab40a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e1be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab40b0,1);
  return;
}



// FUNCTION 1432e1be9 FUN_1432e1be9 body=69 status=ok
// SIG undefined FUN_1432e1be9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e1be9(void)

{
  _DAT_14cab40b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e1c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab40c0,1);
  return;
}



// FUNCTION 1432e1c2e FUN_1432e1c2e body=104 status=ok
// SIG undefined FUN_1432e1c2e(void)

void FUN_1432e1c2e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x28) != 3)) &&
     ((longlong)*(int *)(param_1 + 0x18) != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 3;
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = (longlong)*(int *)(param_1 + 0x18) * 200;
    do {
      if (*(char *)(lVar2 + 0xc0) == '\x01') {
        FUN_1475923d8(param_1,lVar2);
      }
      lVar2 = lVar2 + 200;
      lVar1 = lVar1 + -200;
    } while (lVar1 != 0);
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1432e1c96 FUN_1432e1c96 body=108 status=ok
// SIG undefined FUN_1432e1c96(void)

void FUN_1432e1c96(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_14cab40c8 == '\x01') &&
     (lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x10), 0 < lVar1)) {
    lVar2 = 0;
    do {
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 1432e1d02 FUN_1432e1d02 body=82 status=ok
// SIG undefined FUN_1432e1d02(void)

void FUN_1432e1d02(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    FUN_14759258e(param_1);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (iVar1 != 3) {
    lVar2 = FUN_147592328(param_1,param_2);
    if ((lVar2 != 0) && (*(undefined1 *)(lVar2 + 0xc0) = 1, *(int *)(param_1 + 0x28) == 1)) {
      *(undefined4 *)(param_1 + 0x28) = 2;
    }
  }
  return;
}



// FUNCTION 1432e1d8c FUN_1432e1d8c body=263 status=ok
// SIG undefined FUN_1432e1d8c(void)

undefined8
FUN_1432e1d8c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined1 param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  
  if (param_4 != (longlong *)0x0 && param_1 != 0) {
    if (param_2 == (longlong *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (**(code **)(*param_2 + 0x2a0))(param_2,1);
    }
    if ((param_3 != (longlong *)0x0) &&
       (bVar2 = (**(code **)(*param_3 + 0x2a0))(param_3,1), (bVar1 & bVar2) == 1)) {
      if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      bVar1 = DAT_14c950c29;
      param_4[0x12] = (longlong)param_2;
      if ((bVar1 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      param_4[0x13] = (longlong)param_3;
      FUN_14759215a(param_1);
      cVar3 = FUN_147592202(&DAT_14cab4128,param_4);
      if (cVar3 != '\0') {
        *(undefined1 *)(param_4 + 0x14) = param_5;
        FUN_147596db4(param_4);
        (**(code **)(*param_4 + 0x2f0))(param_4,param_1);
        FUN_14759215a(param_1);
        FUN_1475936ac(param_4);
        return 1;
      }
      param_4[0x12] = 0;
      param_4[0x13] = 0;
    }
  }
  return 0;
}



// FUNCTION 1432e1e94 FUN_1432e1e94 body=180 status=ok
// SIG undefined FUN_1432e1e94(void)

undefined8 FUN_1432e1e94(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    FUN_1459c92ae();
    FUN_1475953ea(local_68,*(undefined8 *)(param_1 + 0x10));
    pcVar1 = local_68[0];
    if (local_68[0] != (code *)0x0) {
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar3 = local_48;
      }
      local_70 = param_1;
      uVar2 = (**(code **)(*plVar3 + 8))();
      uVar2 = (*pcVar1)(uVar2,&local_70,param_2);
      if (local_68[0] != (code *)0x0) {
        plVar3 = local_48;
        if (local_58 != (longlong *)0x0) {
          plVar3 = local_58;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      goto LAB_1432e1eb3;
    }
  }
  uVar2 = 0;
LAB_1432e1eb3:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e1f4a FUN_1432e1f4a body=368 status=ok
// SIG undefined FUN_1432e1f4a(void)

undefined8 FUN_1432e1f4a(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar2 = FUN_14690cc55();
    uVar4 = (ulonglong)*(int *)(lVar2 + 0x48);
    if (0 < (longlong)uVar4) {
      uVar6 = (ulonglong)param_2;
      if (*(ulonglong *)(*(longlong *)(lVar2 + 0x40) + 8) != uVar6) {
        uVar3 = 0;
        uVar8 = 0;
        puVar5 = (ulonglong *)(*(longlong *)(lVar2 + 0x40) + 0x18);
        do {
          if (uVar4 - 1 == uVar8) goto LAB_1432e1f6c;
          uVar8 = uVar8 + 1;
          uVar1 = *puVar5;
          puVar5 = puVar5 + 2;
        } while (uVar1 != uVar6);
        if (uVar4 <= uVar8) goto LAB_1432e1f69;
      }
      FUN_1401cfad2(lVar2,&local_40,uVar6);
      puVar7 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar7 = local_40;
      }
      FUN_140002266(&local_58,L"%sConstraint",puVar7);
      puVar7 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar7 = local_58;
      }
      FUN_1446f470e(local_48,puVar7,1);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14759215a(param_1);
      switch(uVar6) {
      case 0:
        uVar3 = FUN_14759a3c4(local_48);
        break;
      case 1:
        uVar3 = FUN_14759a50e(local_48);
        break;
      case 2:
        uVar3 = FUN_14759a658(local_48);
        break;
      case 3:
        uVar3 = FUN_14759a7a2(local_48);
        break;
      case 4:
        uVar3 = FUN_14759a8ec(local_48);
        break;
      default:
        uVar3 = 0;
      }
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432e1f6c;
    }
  }
LAB_1432e1f69:
  uVar3 = 0;
LAB_1432e1f6c:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1432e20dd FUN_1432e20dd body=55 status=ok
// SIG undefined FUN_1432e20dd(void)

void FUN_1432e20dd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4260 == 0) {
    uVar1 = FUN_14132558e();
    DAT_14cab4260 = FUN_14171c317(FUN_1463443a7,uVar1,L"EHandleEvent");
  }
  return;
}



// FUNCTION 1432e2114 FUN_1432e2114 body=1305 status=ok
// SIG undefined FUN_1432e2114(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1432e2114(uint *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong local_60;
  int local_58;
  uint local_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab4448) && (FUN_144b3d300(&DAT_14cab4448), DAT_14cab4448 == -1)) {
    _DAT_14cab4438 = 0;
    uRam000000014cab4440 = 0;
    _Init_thread_footer(&DAT_14cab4448);
  }
  if (param_2 == 0) {
    uVar4 = DAT_14cab4438_4;
    uVar7 = (uint)uRam000000014cab4440;
    uVar3 = uRam000000014cab4440._4_4_;
    *param_1 = _DAT_14cab4438;
    param_1[1] = uVar4;
    param_1[2] = uVar7;
    param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  if (((*(byte *)(param_2 + 0x4a) & 2) == 0) &&
     ((*(byte **)(param_2 + 0x60) == (byte *)0x0 || ((**(byte **)(param_2 + 0x60) & 1) == 0)))) {
    lVar5 = *(longlong *)(param_2 + 0xb0);
    if ((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_2), lVar5 != 0)) {
      FUN_14759215a(lVar5);
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      bVar12 = true;
      FUN_147593e2e(&local_60,uVar4 >> 0x10 ^ uVar4,1);
      if (0 < (longlong)local_58) {
        uVar9 = (longlong)local_58 + 1;
        do {
          iVar2 = *(int *)(local_60 + -0xc + uVar9 * 8);
          if (((((iVar2 != 0) && (uVar4 = *(uint *)(local_60 + -0x10 + uVar9 * 8), -1 < (int)uVar4))
               && ((int)uVar4 < DAT_14c9647dc)) &&
              ((plVar8 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar2)))) &&
             (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar1 = *plVar8, lVar1 != 0)))) {
            uStack_4c = 0;
            if (*(longlong *)(lVar5 + 0x30) == 0) {
              local_50 = 0;
              uVar4 = 0;
            }
            else {
              local_50 = *(uint *)(*(longlong *)(lVar5 + 0x30) + 0xc);
              if ((int)local_50 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              uVar4 = *(uint *)(lVar10 + 0x10);
              if (*(uint *)(lVar10 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar7 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar11) {
                  local_64 = uVar7;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar7);
                  uVar7 = local_64;
                }
                LOCK();
                uVar4 = *(uint *)(lVar10 + 0x10);
                bVar11 = uVar4 == 0;
                if (bVar11) {
                  *(uint *)(lVar10 + 0x10) = uVar7;
                  uVar4 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  uVar4 = uVar7;
                }
              }
            }
            uStack_4c = uVar4;
            lVar10 = FUN_14759e65e(lVar1 + 0x40,uVar4 ^ local_50,&local_50);
            if ((lVar10 != 0) &&
               (((*(byte *)(lVar10 + 10) & 2) != 0 ||
                ((*(byte **)(lVar10 + 0x20) != (byte *)0x0 &&
                 ((**(byte **)(lVar10 + 0x20) & 1) != 0)))))) {
              uStack_4c = 0;
              if (*(longlong *)(lVar5 + 0x30) == 0) {
                local_50 = 0;
                uVar4 = 0;
              }
              else {
                local_50 = *(uint *)(*(longlong *)(lVar5 + 0x30) + 0xc);
                if ((int)local_50 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                uVar4 = *(uint *)(lVar5 + 0x10);
                if (*(uint *)(lVar5 + 0x10) == 0) {
                  LOCK();
                  iVar2 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar7 = DAT_14c964868 + 1;
                  bVar12 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar2;
                  if (bVar12) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar7);
                  }
                  LOCK();
                  uVar4 = *(uint *)(lVar5 + 0x10);
                  bVar12 = uVar4 == 0;
                  if (bVar12) {
                    *(uint *)(lVar5 + 0x10) = uVar7;
                    uVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar12) {
                    uVar4 = uVar7;
                  }
                }
              }
              uStack_4c = uVar4;
              uVar6 = FUN_14759e65e(lVar1 + 0x40,uVar4 ^ local_50);
              lVar5 = *(longlong *)(lVar1 + 0x20);
              param_1[1] = 0;
              if (lVar5 == 0) {
                *param_1 = 0;
                uVar4 = 0;
              }
              else {
                uVar4 = *(uint *)(lVar5 + 0xc);
                *param_1 = uVar4;
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                uVar4 = *(uint *)(lVar5 + 0x10);
                if (*(uint *)(lVar5 + 0x10) == 0) {
                  LOCK();
                  iVar2 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar7 = DAT_14c964868 + 1;
                  bVar12 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar2;
                  if (bVar12) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar7);
                  }
                  LOCK();
                  uVar4 = *(uint *)(lVar5 + 0x10);
                  bVar12 = uVar4 == 0;
                  if (bVar12) {
                    *(uint *)(lVar5 + 0x10) = uVar7;
                    uVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar12) {
                    uVar4 = uVar7;
                  }
                }
              }
              param_1[1] = uVar4;
              *(undefined8 *)(param_1 + 2) = uVar6;
              bVar12 = false;
              break;
            }
          }
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (!bVar12) goto LAB_1432e2210;
    }
    param_2 = *(ulonglong *)(param_2 + 0x120);
    if (param_2 == 0) {
      uVar4 = DAT_14cab4438_4;
      uVar7 = (uint)uRam000000014cab4440;
      uVar3 = uRam000000014cab4440._4_4_;
      *param_1 = _DAT_14cab4438;
      param_1[1] = uVar4;
      param_1[2] = uVar7;
      param_1[3] = uVar3;
      goto LAB_1432e2210;
    }
    if (((*(byte *)(param_2 + 0x4a) & 2) == 0) &&
       ((*(byte **)(param_2 + 0x60) == (byte *)0x0 || ((**(byte **)(param_2 + 0x60) & 1) == 0)))) {
      FUN_1432e2114(param_1,param_2);
      goto LAB_1432e2210;
    }
  }
  param_1[1] = 0;
  uVar4 = *(uint *)(param_2 + 0xc);
  *param_1 = uVar4;
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  uVar4 = *(uint *)(lVar5 + 0x10);
  if (*(uint *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    uVar7 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar7);
    }
    LOCK();
    uVar4 = *(uint *)(lVar5 + 0x10);
    bVar12 = uVar4 == 0;
    if (bVar12) {
      *(uint *)(lVar5 + 0x10) = uVar7;
      uVar4 = 0;
    }
    UNLOCK();
    if (bVar12) {
      uVar4 = uVar7;
    }
  }
  param_1[1] = uVar4;
  *(ulonglong *)(param_1 + 2) = param_2 + 0x40;
LAB_1432e2210:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e262e FUN_1432e262e body=41 status=ok
// SIG undefined FUN_1432e262e(void)

void FUN_1432e262e(void)

{
  DAT_14cab4330 = 0;
  if (DAT_14cab4328 != 0) {
    FUN_1400020a8();
  }
  FUN_1461a3562();
  return;
}



// FUNCTION 1432e2657 FUN_1432e2657 body=69 status=ok
// SIG undefined FUN_1432e2657(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e2657(void)

{
  _DAT_14cab43d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e2699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab43d8,1);
  return;
}



// FUNCTION 1432e269c FUN_1432e269c body=69 status=ok
// SIG undefined FUN_1432e269c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e269c(void)

{
  _DAT_14cab43e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e26de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab43e8,1);
  return;
}



// FUNCTION 1432e26e1 FUN_1432e26e1 body=69 status=ok
// SIG undefined FUN_1432e26e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e26e1(void)

{
  _DAT_14cab43f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e2723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab4400,1);
  return;
}



// FUNCTION 1432e2726 FUN_1432e2726 body=69 status=ok
// SIG undefined FUN_1432e2726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e2726(void)

{
  _DAT_14cab4410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e2768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab4418,1);
  return;
}



// FUNCTION 1432e276b FUN_1432e276b body=69 status=ok
// SIG undefined FUN_1432e276b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e276b(void)

{
  _DAT_14cab4420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432e27ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab4428,1);
  return;
}



// FUNCTION 1432e27b0 FUN_1432e27b0 body=5362 status=ok
// SIG undefined FUN_1432e27b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e27b0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  void *pvVar21;
  longlong lVar22;
  ulonglong uVar23;
  byte bVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_168 [40];
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f0;
  int local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  int local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_2 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*param_2 + 0x2b0))(param_2,1), cVar4 == '\0')) goto LAB_1432e27fa;
  plVar16 = (longlong *)param_2[0x12];
  plVar12 = (longlong *)param_2[0x13];
  FUN_14759215a(param_1);
  uVar5 = (**(code **)(*plVar12 + 0x318))(plVar12);
  FUN_147593e2e(&local_f0,uVar5,1);
  uVar20 = *(uint *)((longlong)param_2 + 0xc);
  local_d8 = (void *)(ulonglong)uVar20;
  if ((int)uVar20 < DAT_14c9647dc) {
    lVar26 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
  }
  else {
    lVar26 = 0;
  }
  iVar6 = *(int *)(lVar26 + 0x10);
  if (*(int *)(lVar26 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar19 = DAT_14c964868 + 1;
    bVar28 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar28) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).");
    }
    LOCK();
    iVar6 = *(int *)(lVar26 + 0x10);
    bVar28 = iVar6 == 0;
    if (bVar28) {
      *(int *)(lVar26 + 0x10) = iVar19;
      iVar6 = 0;
    }
    UNLOCK();
    uVar20 = (uint)local_d8;
    if (bVar28) {
      iVar6 = iVar19;
    }
  }
  local_d8._0_4_ = uVar20;
  local_b8 = &local_d8;
  local_d8 = (void *)CONCAT44(iVar6,(uint)local_d8);
  FUN_14759fb36(&local_f0);
  if (local_e8 != 0) {
    iVar6 = *(int *)(local_f0 + 4 + (longlong)(local_e8 + -1) * 8);
    if (iVar6 == 0) {
LAB_1432e395f:
      lVar26 = 0;
    }
    else {
      uVar20 = *(uint *)(local_f0 + (longlong)(local_e8 + -1) * 8);
      lVar26 = 0;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != iVar6 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
        goto LAB_1432e395f;
        lVar26 = *plVar10;
      }
    }
    local_b8 = *(undefined8 **)(lVar26 + 0x2c);
    uStack_b0 = *(undefined8 *)(lVar26 + 0x34);
    FUN_1475943ac(&local_b8,(longlong)param_2 + 0x2c);
  }
  (**(code **)(*plVar16 + 800))(plVar16,&local_b8);
  if (local_b8._4_4_ == 0) {
LAB_1432e392d:
    uVar25 = 0;
  }
  else {
    uVar25 = 0;
    if ((-1 < (int)(uint)local_b8) && ((int)(uint)local_b8 < DAT_14c9647dc)) {
      puVar13 = (ulonglong *)
                ((ulonglong)(((uint)local_b8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_b8 >> 0x10) * 8));
      if ((puVar13 == (ulonglong *)0x0) ||
         (((int)puVar13[2] != local_b8._4_4_ || ((puVar13[1] & 0x10200000) != 0))))
      goto LAB_1432e392d;
      uVar25 = *puVar13;
    }
  }
  (**(code **)(*plVar12 + 800))(plVar12);
  if (local_b8._4_4_ == 0) {
LAB_1432e3935:
    local_140 = 0;
  }
  else {
    local_140 = 0;
    if ((-1 < (int)(uint)local_b8) && ((int)(uint)local_b8 < DAT_14c9647dc)) {
      puVar13 = (ulonglong *)
                ((ulonglong)(((uint)local_b8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_b8 >> 0x10) * 8));
      if ((puVar13 == (ulonglong *)0x0) ||
         (((int)puVar13[2] != local_b8._4_4_ || ((puVar13[1] & 0x10200000) != 0))))
      goto LAB_1432e3935;
      local_140 = *puVar13;
    }
  }
  bVar24 = uVar25 != local_140 || uVar25 == 0;
  local_138 = CONCAT71(local_138._1_7_,bVar24);
  local_130 = param_1;
  if ((uVar25 == local_140 && uVar25 != 0) && (DAT_14c761012 == 1)) {
    if ((DAT_14cb0d2b0 == (longlong *)0x0) ||
       ((cVar4 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar4 == '\0' ||
        (lVar26 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar26 == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cab44d0) && (FUN_144b3d300(&DAT_14cab44d0), DAT_14cab44d0 == -1))
      {
        DAT_14cab44c0 = (void *)0x0;
        _DAT_14cab44c8 = 0;
        atexit((_func_5014 *)&LAB_1432e769b);
        _Init_thread_footer(&DAT_14cab44d0);
      }
      pvVar21 = DAT_14cab44c0;
      local_d8 = (void *)0x0;
      lVar26 = (longlong)DAT_14cab44c8;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,DAT_14cab44c8);
      if (lVar26 == 0) {
        uStack_d0 = _DAT_14cab44c8 & 0xffffffff;
      }
      else {
        FUN_14759ba5a(&local_d8,_DAT_14cab44c8 & 0xffffffff,0);
        memcpy(local_d8,pvVar21,lVar26 << 3);
      }
    }
    else {
      FUN_147593a3e(lVar26,&local_b8,DAT_14cab4158);
      puVar11 = local_b8;
      local_d8 = (void *)0x0;
      uStack_d0 = 0;
      lVar26 = (longlong)(int)uStack_b0;
      if (lVar26 != 0) {
        lVar27 = 0;
        do {
          iVar6 = *(int *)((longlong)puVar11 + lVar27 + 4);
          if ((((iVar6 != 0) && (uVar20 = *(uint *)((longlong)puVar11 + lVar27), -1 < (int)uVar20))
              && ((int)uVar20 < DAT_14c9647dc)) &&
             (((puVar14 = (undefined8 *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
               puVar14 != (undefined8 *)0x0 && (*(int *)(puVar14 + 2) == iVar6)) &&
              (((*(uint *)(puVar14 + 1) & 0x10200000) == 0 &&
               (plVar10 = (longlong *)*puVar14, plVar10 != (longlong *)0x0)))))) {
            lVar22 = FUN_1458989be();
            if (((*(int *)(lVar22 + 0x38) <= *(int *)(plVar10[2] + 0x38)) && (plVar10 != param_2))
               && (*(longlong *)
                    (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) ==
                   lVar22 + 0x30)) {
              plVar2 = (longlong *)plVar10[0x12];
              if ((plVar2 == (longlong *)0x0) || ((*(uint *)(plVar2 + 1) >> 0x1e & 1) != 0)) {
LAB_1432e382b:
                uVar23 = 0;
              }
              else {
                (**(code **)(*plVar2 + 800))();
                if ((local_108._4_4_ == 0) || ((int)(uint)local_108 < 0)) goto LAB_1432e382b;
                uVar23 = 0;
                if ((int)(uint)local_108 < DAT_14c9647dc) {
                  puVar13 = (ulonglong *)
                            ((ulonglong)(((uint)local_108 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_108 >> 0x10) * 8))
                  ;
                  if (((puVar13 == (ulonglong *)0x0) || ((int)puVar13[2] != local_108._4_4_)) ||
                     ((puVar13[1] & 0x10200000) != 0)) goto LAB_1432e382b;
                  uVar23 = *puVar13;
                }
              }
              plVar10 = (longlong *)plVar10[0x13];
              if ((plVar10 == (longlong *)0x0) || ((*(uint *)(plVar10 + 1) >> 0x1e & 1) != 0)) {
LAB_1432e38a6:
                uVar15 = 0;
              }
              else {
                (**(code **)(*plVar10 + 800))();
                if (local_108._4_4_ == 0) {
                  uVar15 = 0;
                }
                else {
                  if ((int)(uint)local_108 < 0) goto LAB_1432e38a6;
                  uVar15 = 0;
                  if ((int)(uint)local_108 < DAT_14c9647dc) {
                    puVar13 = (ulonglong *)
                              ((ulonglong)(((uint)local_108 & 0xffff) * 0x18) +
                              *(longlong *)
                               (DAT_14c9647c8 + (ulonglong)((uint)local_108 >> 0x10) * 8));
                    if (((puVar13 == (ulonglong *)0x0) || ((int)puVar13[2] != local_108._4_4_)) ||
                       ((puVar13[1] & 0x10200000) != 0)) goto LAB_1432e38a6;
                    uVar15 = *puVar13;
                  }
                }
              }
              uVar3 = uStack_d0;
              if ((uVar23 == uVar25) && (uVar15 == uVar25)) {
                lVar22 = (longlong)(int)uStack_d0;
                uVar20 = (int)uStack_d0 + 1;
                uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar20);
                if (uStack_d0._4_4_ < uVar20) {
                  FUN_14759e5d8(&local_d8,uVar3 & 0xffffffff);
                }
                *(undefined8 *)((longlong)local_d8 + lVar22 * 8) =
                     *(undefined8 *)((longlong)puVar11 + lVar27);
              }
            }
          }
          lVar27 = lVar27 + 8;
        } while (lVar26 * 8 != lVar27);
      }
      bVar24 = (byte)local_138;
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8(local_b8);
      }
    }
    pvVar21 = local_d8;
    lVar26 = (longlong)(int)uStack_d0;
    if (lVar26 != 0) {
      lVar27 = 0;
      do {
        iVar6 = *(int *)((longlong)pvVar21 + lVar27 + 4);
        if (((((iVar6 == 0) || (uVar20 = *(uint *)((longlong)pvVar21 + lVar27), (int)uVar20 < 0)) ||
             (DAT_14c9647dc <= (int)uVar20)) ||
            ((plVar10 = (longlong *)
                        ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
             plVar10 == (longlong *)0x0 || ((int)plVar10[2] != iVar6)))) ||
           (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar22 = *plVar10, lVar22 == 0)))) {
LAB_1432e2b79:
          lVar22 = 0;
        }
        else {
          lVar8 = FUN_1458989be();
          if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_1432e2b79;
        }
        cVar4 = (**(code **)(*plVar16 + 0x328))(plVar16,*(undefined8 *)(lVar22 + 0x98));
        if ((cVar4 != '\0') ||
           (cVar4 = (**(code **)(*plVar12 + 0x328))(plVar12,*(undefined8 *)(lVar22 + 0x98)),
           cVar4 != '\0')) {
          FUN_1475943ac(lVar22 + 0x2c,(longlong)param_2 + 0x2c);
          FUN_140056680(&local_b8,L"Self Dependency");
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        cVar4 = (**(code **)(**(longlong **)(lVar22 + 0x90) + 0x328))
                          (*(longlong **)(lVar22 + 0x90),plVar12);
        if ((cVar4 != '\0') ||
           (cVar4 = (**(code **)(**(longlong **)(lVar22 + 0x98) + 0x328))
                              (*(longlong **)(lVar22 + 0x98),plVar12), cVar4 != '\0')) {
          FUN_1475943ac((longlong)param_2 + 0x2c,lVar22 + 0x2c);
          FUN_140056680(&local_b8,L"Self Dependency");
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar27 = lVar27 + 8;
      } while (lVar26 * 8 != lVar27);
      bVar24 = (byte)local_138;
    }
    param_1 = local_130;
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8(local_d8);
    }
  }
  FUN_147597062(param_2,param_1);
  local_108 = 0;
  uStack_100 = 0;
  FUN_14759aa36(param_1,param_2,&local_108,DAT_14c761012 & bVar24);
  lVar26 = local_108;
  lVar27 = (longlong)(int)uStack_100;
  if (lVar27 != 0) {
    lVar22 = 0;
    do {
      iVar6 = *(int *)(lVar26 + 4 + lVar22);
      if ((iVar6 == 0) || (uVar20 = *(uint *)(lVar26 + lVar22), (int)uVar20 < 0)) {
LAB_1432e2ea9:
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if ((int)uVar20 < DAT_14c9647dc) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar6)) ||
             ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_1432e2ea9;
          lVar8 = *plVar10;
        }
      }
      FUN_1475943ac((longlong)param_2 + 0x2c,lVar8 + 0x2c);
      iVar6 = *(int *)(lVar26 + 4 + lVar22);
      if (((((iVar6 != 0) && (uVar20 = *(uint *)(lVar26 + lVar22), -1 < (int)uVar20)) &&
           (((int)uVar20 < DAT_14c9647dc &&
            ((plVar10 = (longlong *)
                        ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar6)))))) &&
          ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar8 = *plVar10, lVar8 != 0)) {
        lVar7 = FUN_1458989be();
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) && (FUN_140056680(&local_b8), local_b8 != (undefined8 *)0x0)) {
          FUN_1400020a8();
        }
      }
      lVar22 = lVar22 + 8;
    } while (lVar27 * 8 != lVar22);
  }
  lVar26 = local_130;
  FUN_14759ae1a(local_130,param_2);
  if ((DAT_14c761012 & (byte)local_138) != 0) {
    if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
        (cVar4 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar4 == '\0')) ||
       (lVar27 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar27 == 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cab44e8) && (FUN_144b3d300(&DAT_14cab44e8), DAT_14cab44e8 == -1))
      {
        DAT_14cab44d8 = (void *)0x0;
        _DAT_14cab44e0 = 0;
        atexit((_func_5014 *)&LAB_1432e76ac);
        _Init_thread_footer(&DAT_14cab44e8);
      }
      pvVar21 = DAT_14cab44d8;
      local_118 = (void *)0x0;
      lVar27 = (longlong)DAT_14cab44e0;
      uStack_110 = CONCAT44(uStack_110._4_4_,DAT_14cab44e0);
      if (lVar27 == 0) {
        uStack_110 = _DAT_14cab44e0 & 0xffffffff;
      }
      else {
        FUN_14759ba5a(&local_118,_DAT_14cab44e0 & 0xffffffff,0);
        memcpy(local_118,pvVar21,lVar27 << 3);
      }
    }
    else {
      FUN_147593a3e(lVar27,&local_b8,DAT_14cab4158);
      puVar11 = local_b8;
      local_118 = (void *)0x0;
      uStack_110 = 0;
      lVar26 = (longlong)(int)uStack_b0;
      if (lVar26 != 0) {
        lVar27 = 0;
        do {
          iVar6 = *(int *)((longlong)puVar11 + lVar27 + 4);
          if ((((((iVar6 != 0) && (uVar20 = *(uint *)((longlong)puVar11 + lVar27), -1 < (int)uVar20)
                 ) && ((int)uVar20 < DAT_14c9647dc)) &&
               ((plVar10 = (longlong *)
                           ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar6)))) &&
              ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar22 = *plVar10, lVar22 != 0)) {
            lVar8 = FUN_1458989be();
            if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
               ((plVar10 = *(longlong **)(lVar22 + 0x98), plVar10 != (longlong *)0x0 &&
                ((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0)))) {
              (**(code **)(*plVar10 + 800))();
              if (((((local_d8._4_4_ != 0) && (-1 < (int)(uint)local_d8)) &&
                   ((int)(uint)local_d8 < DAT_14c9647dc)) &&
                  ((puVar13 = (ulonglong *)
                              ((ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8)
                              ), puVar13 != (ulonglong *)0x0 && ((int)puVar13[2] == local_d8._4_4_))
                  )) && (((puVar13[1] & 0x10200000) == 0 &&
                         ((*puVar13 != 0 && (*puVar13 == local_140)))))) {
                lVar22 = (longlong)(int)uStack_110;
                uVar20 = (int)uStack_110 + 1;
                uStack_110 = CONCAT44(uStack_110._4_4_,uVar20);
                if (uStack_110._4_4_ < uVar20) {
                  FUN_14759e5d8(&local_118);
                }
                *(undefined8 *)((longlong)local_118 + lVar22 * 8) =
                     *(undefined8 *)((longlong)puVar11 + lVar27);
              }
            }
          }
          lVar27 = lVar27 + 8;
        } while (lVar26 * 8 != lVar27);
      }
      lVar26 = local_130;
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8(local_b8);
      }
    }
    puVar11 = &local_d8;
    local_140 = CONCAT44(local_140._4_4_,0xffffffff);
    if ((longlong)(int)uStack_110 != 0) {
      lVar27 = (longlong)(int)uStack_110 << 3;
      uVar20 = 0;
      pvVar21 = local_118;
      do {
        cVar4 = FUN_1475a18cc(pvVar21);
        if (cVar4 != '\0') {
          if ((int)uVar20 < 0 || (int)uStack_110 <= (int)uVar20) {
            local_140 = CONCAT44(local_140._4_4_,uVar20);
            goto LAB_1432e2f7d;
          }
          if ((int)uStack_110 - 1U != uVar20) {
            memmove((void *)((longlong)local_118 + (ulonglong)(uVar20 & 0x7fffffff) * 8),
                    (void *)((longlong)local_118 + (ulonglong)(uVar20 & 0x7fffffff) * 8 + 8),
                    (longlong)(int)(((int)uStack_110 - 1U) - uVar20) << 3);
          }
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + -1);
          FUN_14759ff18();
          local_140 = CONCAT44(local_140._4_4_,uVar20);
          break;
        }
        pvVar21 = (void *)((longlong)pvVar21 + 8);
        uVar20 = uVar20 + 1;
        lVar27 = lVar27 + -8;
      } while (lVar27 != 0);
    }
LAB_1432e2f7d:
    if ((int)uStack_110 != 0) {
      local_c8 = (undefined8 *)0x0;
      local_bc = 0x80;
      uVar20 = (int)uStack_110 + 0x1f;
      local_c0 = (int)uStack_110;
      if (0x1f < uVar20) {
        if (uVar20 < 0xa0) {
LAB_1432e300c:
          uVar20 = uVar20 >> 3 & 0xfffffffc;
        }
        else {
          FUN_1446efa72(&local_c8,0,uVar20 >> 5,4);
          local_bc = uVar20 & 0xffffffe0;
          puVar11 = &local_d8;
          if (local_c8 != (undefined8 *)0x0) {
            puVar11 = local_c8;
          }
          if (uVar20 < 0x120) goto LAB_1432e300c;
          uVar20 = (uVar20 >> 5) << 2;
        }
        memset(puVar11,0,(ulonglong)uVar20);
        iVar6 = local_c0 + 0x1f;
        if (-1 < local_c0) {
          iVar6 = local_c0;
        }
        if (local_c0 % 0x20 != 0) {
          puVar11 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar11 = &local_d8;
          }
          bVar24 = -(char)(local_c0 % 0x20);
          *(uint *)((longlong)puVar11 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)((longlong)puVar11 + (longlong)(iVar6 >> 5) * 4) << (bVar24 & 0x1f))
               >> (bVar24 & 0x1f);
        }
      }
      if (*(longlong *)(lVar26 + 0x30) == 0) {
        local_b8._0_4_ = 0;
        uVar20 = 0;
        uVar17 = (uint)local_b8;
      }
      else {
        uVar17 = *(uint *)(*(longlong *)(lVar26 + 0x30) + 0xc);
        local_b8 = (undefined8 *)(ulonglong)uVar17;
        if ((int)uVar17 < DAT_14c9647dc) {
          lVar26 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
        }
        else {
          lVar26 = 0;
        }
        uVar20 = *(uint *)(lVar26 + 0x10);
        if (*(uint *)(lVar26 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          uVar18 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar18);
          }
          LOCK();
          uVar20 = *(uint *)(lVar26 + 0x10);
          bVar28 = uVar20 == 0;
          if (bVar28) {
            *(uint *)(lVar26 + 0x10) = uVar18;
            uVar20 = 0;
          }
          UNLOCK();
          uVar17 = (uint)local_b8;
          if (bVar28) {
            uVar20 = uVar18;
          }
        }
      }
      local_b8._0_4_ = uVar17;
      local_b8 = (undefined8 *)CONCAT44(uVar20,(uint)local_b8);
      local_138 = FUN_14759e65e(param_2 + 8,uVar20 ^ (uint)local_b8);
      local_128 = (void *)0x0;
      local_120 = *(int *)(local_138 + 0x18);
      lVar26 = (longlong)local_120;
      pvVar21 = *(void **)(local_138 + 0x10);
      if (lVar26 == 0) {
        local_11c = 0;
      }
      else {
        FUN_1475a1944(&local_128,local_120);
        memcpy(local_128,pvVar21,lVar26 << 4);
      }
      if (0 < (int)uStack_110) {
        uVar25 = 0;
        do {
          iVar6 = *(int *)((longlong)local_118 + uVar25 * 8 + 4);
          if ((((iVar6 == 0) ||
               (uVar20 = *(uint *)((longlong)local_118 + uVar25 * 8), (int)uVar20 < 0)) ||
              (DAT_14c9647dc <= (int)uVar20)) ||
             (((plVar10 = (longlong *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
               plVar10 == (longlong *)0x0 || ((int)plVar10[2] != iVar6)) ||
              (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar26 = *plVar10, lVar26 == 0))))))
          {
LAB_1432e3193:
            lVar26 = 0;
          }
          else {
            lVar27 = FUN_1458989be();
            if ((*(int *)(*(longlong *)(lVar26 + 0x10) + 0x38) < *(int *)(lVar27 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar27 + 0x38) * 8) != lVar27 + 0x30)) goto LAB_1432e3193;
          }
          cVar4 = (**(code **)(*plVar16 + 0x328))(plVar16,*(undefined8 *)(lVar26 + 0x98));
          if ((cVar4 != '\0') ||
             (cVar4 = (**(code **)(*plVar12 + 0x328))(plVar12,*(undefined8 *)(lVar26 + 0x98)),
             cVar4 != '\0')) {
            FUN_1475943ac(lVar26 + 0x2c,(longlong)param_2 + 0x2c);
            puVar11 = local_c8;
            if (local_c8 == (undefined8 *)0x0) {
              puVar11 = &local_d8;
            }
            puVar1 = (uint *)((longlong)puVar11 + (uVar25 >> 5 & 0x7ffffff) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar25 & 0x1f);
            FUN_140056680(&local_b8,L"External Dependency");
            if (local_b8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          cVar4 = (**(code **)(**(longlong **)(lVar26 + 0x90) + 0x328))
                            (*(longlong **)(lVar26 + 0x90),plVar12);
          if ((cVar4 != '\0') ||
             (cVar4 = (**(code **)(**(longlong **)(lVar26 + 0x98) + 0x328))
                                (*(longlong **)(lVar26 + 0x98),plVar12), cVar4 != '\0')) {
            FUN_1475943ac((longlong)param_2 + 0x2c,lVar26 + 0x2c);
            puVar11 = local_c8;
            if (local_c8 == (undefined8 *)0x0) {
              puVar11 = &local_d8;
            }
            puVar1 = (uint *)((longlong)puVar11 + (uVar25 >> 5 & 0x7ffffff) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar25 & 0x1f);
            FUN_140056680(&local_b8,L"External Dependency");
            if (local_b8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          uVar25 = uVar25 + 1;
        } while ((longlong)uVar25 < (longlong)(int)uStack_110);
      }
      if ((((*(int *)(local_138 + 0x18) == local_120) &&
           (cVar4 = FUN_1475a199c(*(undefined8 *)(local_138 + 0x10),local_128), cVar4 != '\0')) &&
          (0 < (int)local_140)) && ((int)local_140 <= local_c0)) {
        uVar25 = local_140 & 0xffffffff;
        do {
          uVar23 = uVar25 - 1;
          puVar11 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar11 = &local_d8;
          }
          if ((*(uint *)((longlong)puVar11 + (uVar23 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar23 & 0x1f)
              & 1) == 0) {
            iVar6 = *(int *)((longlong)local_118 + uVar25 * 8 + -4);
            if (((((iVar6 == 0) ||
                  (uVar20 = *(uint *)((longlong)local_118 + uVar25 * 8 + -8), (int)uVar20 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar20 ||
                  ((plVar16 = (longlong *)
                              ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                   plVar16 == (longlong *)0x0 || ((int)plVar16[2] != iVar6)))))) ||
                ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (lVar26 = *plVar16, lVar26 == 0)) {
LAB_1432e33f8:
              lVar26 = 0;
            }
            else {
              lVar27 = FUN_1458989be();
              if ((*(int *)(*(longlong *)(lVar26 + 0x10) + 0x38) < *(int *)(lVar27 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar27 + 0x38) * 8) != lVar27 + 0x30)) goto LAB_1432e33f8;
            }
            local_98 = 0;
            local_90 = 0;
            local_b8 = (undefined8 *)0x0;
            uStack_b0 = 0;
            local_8c = 0xffffffff00000080;
            local_84 = 0;
            local_78 = 0;
            local_70 = 0;
            uStack_dc = 0;
            if (*(longlong *)(local_130 + 0x30) == 0) {
              local_e0 = 0;
              uVar20 = 0;
            }
            else {
              local_e0 = *(uint *)(*(longlong *)(local_130 + 0x30) + 0xc);
              if ((int)local_e0 < DAT_14c9647dc) {
                lVar27 = (ulonglong)((local_e0 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_e0 >> 0x10) * 8);
              }
              else {
                lVar27 = 0;
              }
              uVar20 = *(uint *)(lVar27 + 0x10);
              if (*(uint *)(lVar27 + 0x10) == 0) {
                LOCK();
                iVar6 = DAT_14c964868 + 1;
                UNLOCK();
                uVar17 = DAT_14c964868 + 1;
                bVar28 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar6;
                if (bVar28) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar17);
                }
                LOCK();
                uVar20 = *(uint *)(lVar27 + 0x10);
                bVar28 = uVar20 == 0;
                if (bVar28) {
                  *(uint *)(lVar27 + 0x10) = uVar17;
                  uVar20 = 0;
                }
                UNLOCK();
                if (bVar28) {
                  uVar20 = uVar17;
                }
              }
            }
            uStack_dc = uVar20;
            uVar9 = FUN_14759e65e(lVar26 + 0x40,uVar20 ^ local_e0,&local_e0);
            lVar27 = local_138;
            cVar4 = FUN_1432e3edc(local_138,uVar9,&local_b8);
            if ((cVar4 == '\0') && (cVar4 = FUN_1432e3edc(uVar9,lVar27,&local_b8), cVar4 == '\0')) {
              FUN_1475943ac(lVar26 + 0x2c,(longlong)param_2 + 0x2c);
              local_70 = 0;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_1475a0f96(&local_b8);
              break;
            }
            local_70 = 0;
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            FUN_1475a0f96(&local_b8);
          }
          bVar28 = 1 < uVar25;
          uVar25 = uVar23;
        } while (bVar28);
      }
      if (local_128 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar26 = param_2[0x13];
  if ((lVar26 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar26);
LAB_1432e39fa:
    uVar20 = *(uint *)(lVar26 + 0xc);
    if ((int)uVar20 < DAT_14c9647dc) {
      lVar26 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
    }
    else {
      lVar26 = 0;
    }
    iVar6 = *(int *)(lVar26 + 0x10);
    if (iVar6 == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar28 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar28) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar6 = *(int *)(lVar26 + 0x10);
      bVar28 = iVar6 == 0;
      if (bVar28) {
        *(int *)(lVar26 + 0x10) = iVar19;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar28) {
        iVar6 = iVar19;
      }
      if (iVar6 == 0) goto LAB_1432e3af8;
    }
    if ((((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) &&
        (plVar16 = (longlong *)
                   ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
        plVar16 != (longlong *)0x0)) &&
       ((((int)plVar16[2] == iVar6 && ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) &&
        ((plVar12 = (longlong *)*plVar16, plVar12 != (longlong *)0x0 &&
         ((*(uint *)(plVar12 + 1) >> 0x1e & 1) == 0)))))) {
      local_98 = 0;
      local_90 = 0;
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((*(uint *)(plVar16 + 1) & 0x10200000) != 0) {
        plVar12 = (longlong *)0x0;
      }
      uVar9 = (**(code **)(*plVar12 + 0x310))();
      FUN_1432e3edc(uVar9,uVar9,&local_b8);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1475a0f96(&local_b8);
    }
  }
  else if (lVar26 != 0) goto LAB_1432e39fa;
LAB_1432e3af8:
  FUN_147594356();
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
LAB_1432e27fa:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432e3ca4 FUN_1432e3ca4 body=354 status=ok
// SIG undefined FUN_1432e3ca4(void)

void FUN_1432e3ca4(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  if (*(longlong *)(param_1[1] + 0x30) == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = *(uint *)(*(longlong *)(param_1[1] + 0x30) + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar4 = *(uint *)(lVar8 + 0x10);
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
      uVar4 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar4 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar5;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar4 = uVar5;
      }
    }
  }
  local_38 = CONCAT44(uVar4,uVar7);
  iVar3 = FUN_14759dd50(plVar1 + 8,uVar4 ^ uVar7);
  if (iVar3 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar3 * 0x50 + plVar1[8];
  }
  lVar6 = lVar8 + 8;
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  cVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
  if ((((cVar2 != '\0') && (*(byte **)(lVar6 + 0x20) != (byte *)0x0)) &&
      ((**(byte **)(lVar6 + 0x20) & 1) != 0)) && (*(char *)(lVar6 + 0xb) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432e3e1d FUN_1432e3e1d body=189 status=ok
// SIG undefined FUN_1432e3e1d(void)

undefined4 FUN_1432e3e1d(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1459c92ae();
  FUN_1475968f4(local_78,*(undefined8 *)(param_1 + 0x10));
  pcVar1 = local_78[0];
  if (local_78[0] == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    local_88 = 0;
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    local_80 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    uVar2 = (*pcVar1)(uVar3,&local_80,&local_88);
    if (local_78[0] != (code *)0x0) {
      plVar4 = local_58;
      if (local_68 != (longlong *)0x0) {
        plVar4 = local_68;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e3edc FUN_1432e3edc body=475 status=ok
// SIG undefined FUN_1432e3edc(void)

undefined8 FUN_1432e3edc(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  if (param_2 != 0 && param_1 != 0) {
    if ((longlong)*(int *)(param_2 + 0x18) != 0) {
      puVar6 = *(uint **)(param_2 + 0x10);
      lVar3 = (longlong)*(int *)(param_2 + 0x18) << 4;
      do {
        if ((((puVar6[1] != 0) && (uVar2 = *puVar6, -1 < (int)uVar2)) &&
            ((int)uVar2 < DAT_14c9647dc)) &&
           (((lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0 &&
             (*(uint *)(lVar9 + 0x10) == puVar6[1])) &&
            (((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0 && (*(longlong *)(puVar6 + 2) == param_1))))))
        {
          uVar7 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          if (puVar6 != (uint *)0x0) goto LAB_1432e4095;
          break;
        }
        puVar6 = puVar6 + 4;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar4 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_3[8];
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar5 * 0x10) == param_2) goto LAB_1432e4093;
          iVar5 = *(int *)((longlong)iVar5 * 0x10 + *param_3 + 8);
        } while (iVar5 != -1);
      }
    }
    FUN_14759de0e(param_3,local_3c,&local_38);
    iVar5 = *(int *)(param_2 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x10);
      lVar9 = 0;
      do {
        iVar1 = *(int *)(lVar3 + 4 + lVar9);
        if ((iVar1 == 0) || (uVar2 = *(uint *)(lVar3 + lVar9), (int)uVar2 < 0)) {
LAB_1432e4074:
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if (((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != iVar1)) ||
               ((*(uint *)(lVar8 + 8) >> 0x1c & 1) != 0)) goto LAB_1432e4074;
            uVar7 = *(undefined8 *)(lVar3 + 8 + lVar9);
          }
        }
        uVar7 = FUN_1432e3edc(param_1,uVar7,param_3);
      } while (((char)uVar7 == '\0') &&
              (bVar10 = (longlong)iVar5 * 0x10 + -0x10 != lVar9, lVar9 = lVar9 + 0x10, bVar10));
      goto LAB_1432e4095;
    }
  }
LAB_1432e4093:
  uVar7 = 0;
LAB_1432e4095:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1432e40b8 FUN_1432e40b8 body=530 status=ok
// SIG undefined FUN_1432e40b8(void)

ulonglong FUN_1432e40b8(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14759215a();
  uVar3 = (**(code **)(*param_2 + 0x318))(param_2);
  FUN_147593e2e(&local_58,uVar3,0);
  lVar12 = local_58;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if ((longlong)local_50 != 0) {
    lVar10 = 0;
    do {
      iVar4 = *(int *)(lVar12 + 4 + lVar10);
      if (((((iVar4 != 0) && (uVar6 = *(uint *)(lVar12 + lVar10), -1 < (int)uVar6)) &&
           ((int)uVar6 < DAT_14c9647dc)) &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar4)))) &&
         (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar1 = *plVar8, lVar1 != 0)))) {
        lVar7 = FUN_1458989be();
        uVar9 = uStack_60;
        if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
            (lVar7 = *(longlong *)(lVar1 + 0x90), lVar7 != 0)) &&
           ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) {
          lVar11 = (longlong)(int)uStack_60;
          uVar6 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
          if (uStack_60._4_4_ < uVar6) {
            FUN_14759e2fa(&local_68,uVar9 & 0xffffffff);
            lVar7 = *(longlong *)(lVar1 + 0x90);
          }
          local_68[lVar11] = lVar7;
          if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) {
            FUN_1456cec3c();
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)local_50 * 8 != lVar10);
  }
  iVar4 = (**(code **)(*param_3 + 0x318))(param_3);
  if ((longlong)(int)uStack_60 == 0) {
    uVar9 = 0;
  }
  else {
    lVar12 = (longlong)(int)uStack_60 << 3;
    puVar13 = local_68;
    do {
      iVar5 = (**(code **)(*(longlong *)*puVar13 + 0x318))();
      puVar2 = local_68;
      if (iVar5 == iVar4) {
        uVar9 = CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
        if (puVar13 != (undefined8 *)0x0) goto LAB_1432e4281;
        break;
      }
      puVar13 = puVar13 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
    lVar12 = (longlong)(int)uStack_60;
    if (lVar12 == 0) {
      uVar9 = 0;
    }
    else {
      lVar10 = 0;
      do {
        uVar6 = FUN_1432e40b8(param_1,*(undefined8 *)((longlong)puVar2 + lVar10),param_3);
        uVar9 = (ulonglong)uVar6;
        if ((char)uVar6 != '\0') break;
        bVar14 = lVar12 * 8 + -8 != lVar10;
        lVar10 = lVar10 + 8;
      } while (bVar14);
    }
  }
LAB_1432e4281:
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1432e42f6 FUN_1432e42f6 body=1303 status=ok
// SIG undefined FUN_1432e42f6(void)

void FUN_1432e42f6(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void *_Src;
  byte bVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  int local_f0;
  int local_ec;
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  undefined8 uStack_c0;
  int *local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 8);
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 != 0) {
    FUN_14481578e(&local_c8,uVar2);
    lVar16 = (longlong)(int)(*(longlong **)(param_1 + 0x10))[1];
    if (lVar16 != 0) {
      lVar18 = **(longlong **)(param_1 + 0x10);
      lVar20 = 0;
      do {
        uVar17 = uStack_c0;
        uVar3 = *(undefined4 *)(lVar18 + 0x18 + lVar20);
        lVar21 = (longlong)(int)uStack_c0;
        uVar15 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar15);
        if (uStack_c0._4_4_ < uVar15) {
          FUN_1446f48e2(&local_c8,uVar17 & 0xffffffff);
        }
        *(undefined4 *)((longlong)local_c8 + lVar21 * 4) = uVar3;
        lVar20 = lVar20 + 200;
      } while (lVar16 * 200 - lVar20 != 0);
    }
  }
  _Src = local_c8;
  local_d8 = (void *)0x0;
  lVar16 = (longlong)(int)uStack_c0;
  local_d0 = (int)uStack_c0;
  if (lVar16 == 0) {
    local_cc = 0;
  }
  else {
    FUN_144a06ca8(&local_d8,uStack_c0 & 0xffffffff,0);
    memcpy(local_d8,_Src,lVar16 << 2);
  }
  local_e8 = 0;
  iVar4 = *(int *)(*(undefined8 **)(param_1 + 0x10) + 1);
  uVar5 = **(undefined8 **)(param_1 + 0x10);
  local_e0 = iVar4;
  if (iVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_14759c964(&local_e8,iVar4);
    FUN_14759c9cd(local_e8,uVar5,iVar4);
  }
  cVar14 = FUN_14759ca04(&local_c8,param_1);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (cVar14 == '\0') {
    FUN_14759d4b3(**(undefined8 **)(param_1 + 0x10));
    local_ec = 0;
    if (uVar2 == 0) goto LAB_1432e46d9;
    bVar13 = 0;
    do {
      bVar6 = bVar13;
      local_f0 = -1;
      if ((longlong)local_d0 != 0) {
        lVar16 = (longlong)local_d0 << 2;
        lVar18 = 0;
        do {
          if (*(int *)((longlong)local_d8 + lVar18 * 4) ==
              *(int *)(**(longlong **)(param_1 + 0x10) + 0x18 + (longlong)local_ec * 200)) {
            local_f0 = (int)lVar18;
            break;
          }
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + -4;
        } while (lVar16 != 0);
      }
      local_b0 = &local_f0;
      local_a8 = &local_ec;
      FUN_14179ff92(&local_98,local_9c,&local_b0,0);
      bVar22 = local_f0 != local_ec;
      local_ec = local_ec + 1;
      bVar13 = bVar6 | bVar22;
    } while (local_ec < (int)uVar2);
    if (!(bool)(bVar6 | bVar22)) goto LAB_1432e46d9;
  }
  else {
    local_ec = 0;
    if (uVar2 == 0) goto LAB_1432e46d9;
    bVar13 = 0;
    do {
      bVar6 = bVar13;
      local_f0 = -1;
      if ((longlong)local_d0 != 0) {
        lVar16 = (longlong)local_d0 << 2;
        lVar18 = 0;
        do {
          if (*(int *)((longlong)local_d8 + lVar18 * 4) ==
              *(int *)((longlong)local_c8 + (longlong)local_ec * 4)) {
            local_f0 = (int)lVar18;
            break;
          }
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + -4;
        } while (lVar16 != 0);
      }
      local_b0 = &local_f0;
      local_a8 = &local_ec;
      FUN_14179ff92(&local_98,local_9c,&local_b0,0);
      bVar22 = local_f0 != local_ec;
      local_ec = local_ec + 1;
      bVar13 = bVar6 | bVar22;
    } while (local_ec < (int)uVar2);
    if (!(bool)(bVar6 | bVar22)) goto LAB_1432e46d9;
    local_f8 = 1;
    if (1 < (int)uVar2) {
      local_f8 = (ulonglong)uVar2;
    }
    lVar16 = 0x70;
    uVar17 = 0;
    do {
      lVar21 = local_e8;
      lVar19 = (longlong)*(int *)((longlong)local_c8 + uVar17 * 4) * 200;
      lVar20 = **(longlong **)(param_1 + 0x10);
      puVar1 = (undefined4 *)(local_e8 + lVar19);
      uVar3 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      uVar10 = puVar1[5];
      uVar11 = puVar1[6];
      uVar12 = puVar1[7];
      lVar18 = lVar20 + lVar16;
      *(undefined4 *)(lVar18 + -0x60) = puVar1[4];
      *(undefined4 *)(lVar18 + -0x5c) = uVar10;
      *(undefined4 *)(lVar18 + -0x58) = uVar11;
      *(undefined4 *)(lVar18 + -0x54) = uVar12;
      *(undefined4 *)(lVar18 + -0x70) = uVar3;
      *(undefined4 *)(lVar18 + -0x6c) = uVar7;
      *(undefined4 *)(lVar18 + -0x68) = uVar8;
      *(undefined4 *)(lVar18 + -100) = uVar9;
      FUN_146b7a2e2(lVar18 + -0x50);
      lVar21 = lVar21 + lVar19;
      FUN_146b7a2e2(lVar20 + lVar16,lVar21 + 0x70);
      *(undefined1 *)(lVar18 + 0x50) = *(undefined1 *)(lVar21 + 0xc0);
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 200;
    } while (local_f8 != uVar17);
  }
  if ((uVar2 != 0) && ((int)uStack_90 - local_64 == uVar2)) {
    uVar17 = 1;
    if (1 < (int)uVar2) {
      uVar17 = (ulonglong)uVar2;
    }
    lVar16 = 0;
    do {
      FUN_14759c43a(**(longlong **)(param_1 + 0x10) + lVar16,&local_98);
      lVar16 = lVar16 + 200;
    } while (uVar17 * 200 - lVar16 != 0);
  }
LAB_1432e46d9:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar17 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_14759c129(local_e8,local_e0);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432e483e FUN_1432e483e body=715 status=ok
// SIG undefined FUN_1432e483e(void)

bool FUN_1432e483e(longlong *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3[1] == 0) {
LAB_1432e4a64:
    lVar7 = 0;
  }
  else {
    uVar2 = *param_3;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         ((*(uint *)(plVar6 + 2) != param_3[1] || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1432e4a64;
      lVar7 = *plVar6;
    }
  }
  if (param_2[1] != 0) {
    uVar2 = *param_2;
    lVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1432e490b;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       ((*(uint *)(plVar6 + 2) == param_2[1] && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar6;
      goto LAB_1432e490b;
    }
  }
  lVar3 = 0;
LAB_1432e490b:
  lVar4 = *param_1;
  lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x30);
  uStack_34 = 0;
  if (lVar8 == 0) {
    local_38 = 0;
    uVar2 = 0;
  }
  else {
    local_38 = *(uint *)(lVar8 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar2 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar5;
      }
    }
  }
  uStack_34 = uVar2;
  lVar8 = FUN_14759e65e(lVar7 + 0x40,uVar2 ^ local_38,&local_38);
  lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x30);
  uStack_34 = 0;
  if (lVar7 == 0) {
    local_38 = 0;
    uVar2 = 0;
  }
  else {
    local_38 = *(uint *)(lVar7 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar2 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar7 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar5;
      }
    }
  }
  uStack_34 = uVar2;
  lVar7 = FUN_14759e65e(lVar3 + 0x40,uVar2 ^ local_38);
  if ((longlong)*(int *)(lVar8 + 0x18) == 0) {
    bVar9 = false;
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x10);
    lVar4 = (longlong)*(int *)(lVar8 + 0x18) << 4;
    do {
      if (*(longlong *)(lVar3 + 8) == lVar7) goto LAB_1432e4a19;
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    lVar3 = 0;
LAB_1432e4a19:
    bVar9 = lVar3 != 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 1432e4b0a FUN_1432e4b0a body=715 status=ok
// SIG undefined FUN_1432e4b0a(void)

bool FUN_1432e4b0a(longlong *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3[1] == 0) {
LAB_1432e4d30:
    lVar7 = 0;
  }
  else {
    uVar2 = *param_3;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         ((*(uint *)(plVar6 + 2) != param_3[1] || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1432e4d30;
      lVar7 = *plVar6;
    }
  }
  if (param_2[1] != 0) {
    uVar2 = *param_2;
    lVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1432e4bd7;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       ((*(uint *)(plVar6 + 2) == param_2[1] && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar6;
      goto LAB_1432e4bd7;
    }
  }
  lVar3 = 0;
LAB_1432e4bd7:
  lVar4 = *param_1;
  lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x30);
  uStack_34 = 0;
  if (lVar8 == 0) {
    local_38 = 0;
    uVar2 = 0;
  }
  else {
    local_38 = *(uint *)(lVar8 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar2 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar5;
      }
    }
  }
  uStack_34 = uVar2;
  lVar8 = FUN_14759e65e(lVar7 + 0x40,uVar2 ^ local_38,&local_38);
  lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x30);
  uStack_34 = 0;
  if (lVar7 == 0) {
    local_38 = 0;
    uVar2 = 0;
  }
  else {
    local_38 = *(uint *)(lVar7 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar2 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar7 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar5;
      }
    }
  }
  uStack_34 = uVar2;
  lVar7 = FUN_14759e65e(lVar3 + 0x40,uVar2 ^ local_38);
  if ((longlong)*(int *)(lVar8 + 0x18) == 0) {
    bVar9 = false;
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x10);
    lVar4 = (longlong)*(int *)(lVar8 + 0x18) << 4;
    do {
      if (*(longlong *)(lVar3 + 8) == lVar7) goto LAB_1432e4ce5;
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    lVar3 = 0;
LAB_1432e4ce5:
    bVar9 = lVar3 != 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 1432e4dd6 FUN_1432e4dd6 body=294 status=ok
// SIG undefined FUN_1432e4dd6(void)

undefined8 FUN_1432e4dd6(longlong param_1)

{
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
  if (param_1 != 0) {
    if (DAT_14cac7648 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_143242436;
      local_48 = &LAB_14789ef1f;
      local_50 = &LAB_1417b008f;
      local_58 = L"Engine";
      local_60 = 0x8000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e4f12 FUN_1432e4f12 body=314 status=ok
// SIG undefined FUN_1432e4f12(void)

uint FUN_1432e4f12(ulonglong param_1)

{
  uint uVar1;
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
  uVar1 = 0;
  if (param_1 != 0) {
    if (DAT_14cac7648 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_143242436;
      local_48 = &LAB_14789ef1f;
      local_50 = &LAB_1417b008f;
      local_58 = L"Engine";
      local_60 = 0x8000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    uVar1 = 0;
    if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      uVar1 = uVar1 >> 0x10 ^ uVar1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e504e FUN_1432e504e body=506 status=ok
// SIG undefined FUN_1432e504e(void)

undefined8 FUN_1432e504e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
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
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x1c8), lVar1 != 0)) {
      if (DAT_14cac7648 == 0) {
        local_40 = &local_20;
        local_20 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_143242436;
        local_48 = &LAB_14789ef1f;
        local_50 = &LAB_1417b008f;
        local_58 = L"Engine";
        local_60 = 0x8000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x2b0;
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      }
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8)
          == DAT_14cac7648 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e5286 FUN_1432e5286 body=29 status=ok
// SIG undefined FUN_1432e5286(void)

undefined8 FUN_1432e5286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e52a4 FUN_1432e52a4 body=528 status=ok
// SIG undefined FUN_1432e52a4(void)

uint FUN_1432e52a4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
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
  lVar1 = *param_2;
  uVar3 = 0;
  uVar4 = 0;
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (uVar2 = *(ulonglong *)(lVar1 + 0x1c8), uVar3 = uVar4, uVar2 != 0)) {
      if (DAT_14cac7648 == 0) {
        local_40 = &local_20;
        local_20 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_143242436;
        local_48 = &LAB_14789ef1f;
        local_50 = &LAB_1417b008f;
        local_58 = L"Engine";
        local_60 = 0x8000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x2b0;
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      }
      if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(uVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
        uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar3 = uVar3 >> 0x10 ^ uVar3;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e54de FUN_1432e54de body=29 status=ok
// SIG undefined FUN_1432e54de(void)

undefined8 FUN_1432e54de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e54fc FUN_1432e54fc body=661 status=ok
// SIG undefined FUN_1432e54fc(void)

void FUN_1432e54fc(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [4];
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1 = (longlong *)*param_1;
  cVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (cVar3 == '\0') goto LAB_1432e5754;
  fVar10 = *(float *)((longlong)param_1 + 0xa4);
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar10 < 0.0001) goto LAB_1432e5754;
  if ((((DAT_14c761011 != '\0') || (DAT_14cab43f0 == '\x01')) &&
      (plVar1 = (longlong *)param_1[0x13], plVar1 != (longlong *)0x0)) &&
     ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,DAT_14cab43f0);
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 == (longlong *)0x0) {
LAB_1432e55da:
    puVar5 = &DAT_14c846480;
    puVar6 = local_b8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 == '\0') goto LAB_1432e55da;
    (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_b8);
  }
  dVar2 = local_88;
  dVar7 = (double)local_98._0_8_;
  dVar8 = (double)local_98._8_8_;
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 == (longlong *)0x0) {
LAB_1432e562d:
    puVar5 = &DAT_14c846480;
    puVar6 = local_b8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 == '\0') goto LAB_1432e562d;
    (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_b8);
  }
  if ((char)param_1[0x14] == '\x01') {
    dVar2 = dVar2 + (double)param_1[0x19];
    dVar8 = dVar8 + (double)param_1[0x18];
    dVar7 = dVar7 + (double)param_1[0x17];
  }
  if (fVar10 < 0.9999) {
    dVar9 = (double)fVar10;
    dVar2 = (dVar2 - local_88) * dVar9 + local_88;
    dVar8 = (dVar8 - (double)local_98._8_8_) * dVar9 + (double)local_98._8_8_;
    dVar7 = (dVar7 - (double)local_98._0_8_) * dVar9 + (double)local_98._0_8_;
  }
  if ((char)param_1[0x1a] == '\0') {
    dVar7 = (double)local_98._0_8_;
  }
  dVar9 = (double)local_98._8_8_;
  if (*(char *)((longlong)param_1 + 0xd1) != '\0') {
    dVar9 = dVar8;
  }
  if (*(char *)((longlong)param_1 + 0xd2) == '\0') {
    dVar2 = local_88;
  }
  local_98._8_4_ = SUB84(dVar9,0);
  local_98._0_8_ = dVar7;
  local_98._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uStack_80 = 0;
  plVar1 = (longlong *)param_1[0x13];
  local_88 = dVar2;
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2a8))((longlong *)param_1[0x13],local_b8);
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2e0))();
    }
  }
LAB_1432e5754:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e57bc FUN_1432e57bc body=29 status=ok
// SIG undefined FUN_1432e57bc(void)

undefined8 FUN_1432e57bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e57da FUN_1432e57da body=1361 status=ok
// SIG undefined FUN_1432e57da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e57da(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128 [13];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_1 = (longlong *)*param_1;
  cVar6 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (cVar6 == '\0') goto LAB_1432e588e;
  fVar25 = *(float *)((longlong)param_1 + 0xa4);
  if (1.0 <= fVar25) {
    fVar25 = 1.0;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar25 < 0.0001) goto LAB_1432e588e;
  if ((((DAT_14c761011 != '\0') || (DAT_14cab43f0 == '\x01')) &&
      (plVar1 = (longlong *)param_1[0x13], plVar1 != (longlong *)0x0)) &&
     ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,DAT_14cab43f0);
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 == (longlong *)0x0) {
LAB_1432e5976:
    pdVar8 = (double *)&DAT_14c846480;
    pdVar9 = local_128;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
  }
  else {
    cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar6 == '\0') goto LAB_1432e5976;
    (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_128);
  }
  dVar22 = local_128[3];
  dVar20 = local_128[2];
  dVar17 = local_128[1];
  dVar14 = local_128[0];
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 == (longlong *)0x0) {
LAB_1432e59d6:
    pdVar8 = (double *)&DAT_14c846480;
    pdVar9 = local_128;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
  }
  else {
    cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar6 == '\0') goto LAB_1432e59d6;
    (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_128);
  }
  local_148 = local_128[0];
  dStack_140 = local_128[1];
  local_138 = local_128[2];
  dStack_130 = local_128[3];
  if ((char)param_1[0x14] == '\x01') {
    dVar19 = (double)param_1[0x18];
    dVar3 = (double)param_1[0x19];
    dVar4 = (double)param_1[0x1a];
    dVar5 = (double)param_1[0x1b];
    dVar12 = dVar17 * dVar19;
    dVar11 = dVar17 * dVar3;
    dVar10 = dVar14 * dVar4;
    dVar23 = dVar14 * dVar3;
    dVar24 = dVar14 * dVar19;
    dVar21 = dVar4 * dVar20;
    dVar14 = dVar3 * dVar20 * -1.0 + dVar4 * dVar17 + dVar14 * dVar5 * 1.0 + dVar22 * dVar19;
    dVar17 = dVar19 * dVar20 * 1.0 + dVar5 * dVar17 + dVar10 * -1.0 + dVar22 * dVar3;
    dVar20 = dVar5 * dVar20 * 1.0 + ((dVar23 * 1.0 + dVar22 * dVar4) - dVar12);
    dVar22 = dVar21 * -1.0 + ((dVar24 * -1.0 + dVar22 * dVar5) - dVar11);
  }
  local_168._8_4_ = SUB84(dVar17,0);
  local_168._0_8_ = dVar14;
  local_168._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_158._8_4_ = SUB84(dVar22,0);
  local_158._0_8_ = dVar20;
  local_158._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  if (fVar25 < 0.9999) {
    dVar10 = local_128[3] * dVar22 +
             local_128[2] * dVar20 + local_128[0] * dVar14 + local_128[1] * dVar17;
    dVar11 = dVar10 * (double)(&DAT_149931160)[0.0 <= dVar10];
    dVar12 = 1.0 - (double)fVar25;
    dVar10 = (double)(&DAT_149931160)[0.0 <= dVar10] * (double)fVar25;
    if (dVar11 < 0.9999) {
      dVar19 = dVar11;
      if (1.0 <= dVar11) {
        dVar19 = 1.0;
      }
      local_178 = local_128[2];
      dStack_170 = local_128[3];
      local_180 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                               ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar19));
      dVar11 = sin(local_180);
      dVar12 = sin(dVar12 * local_180);
      dVar12 = dVar12 * (1.0 / dVar11);
      dVar10 = sin(dVar10 * local_180);
      dVar10 = dVar10 * (1.0 / dVar11);
      local_128[2] = local_178;
    }
    dVar11 = local_128[3] * dVar12 + dVar22 * dVar10;
    dVar19 = local_128[2] * dVar12 + dVar20 * dVar10;
    dVar22 = local_128[1] * dVar12 + dVar17 * dVar10;
    dVar20 = local_128[0] * dVar12 + dVar10 * dVar14;
    dVar14 = dVar19 * dVar19 + dVar20 * dVar20;
    dVar17 = dVar11 * dVar11 + dVar22 * dVar22;
    auVar15._0_8_ = dVar14 + dVar17;
    auVar15._8_8_ = dVar14 + dVar17;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
    auVar16 = sqrtpd(auVar15,auVar15);
    auVar16 = divpd(_DAT_149934d80,auVar16);
    auVar18._0_8_ = auVar16._0_8_ * dVar19;
    auVar18._8_8_ = auVar16._8_8_ * dVar11;
    uVar2 = (ulonglong)(dVar22 * auVar16._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
    local_158 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar13);
    local_168._8_4_ = (int)uVar2;
    local_168._0_8_ =
         (ulonglong)(dVar20 * auVar16._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
    local_168._12_4_ = (int)(uVar2 >> 0x20);
  }
  FUN_14690e3f2(param_1 + 0x1c,local_168,&local_148);
  local_128[0] = (double)local_168._0_8_;
  local_128[1] = (double)local_168._8_8_;
  local_128[2] = (double)local_158._0_8_;
  local_128[3] = (double)local_158._8_8_;
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar6 != '\0') {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2a8))((longlong *)param_1[0x13],local_128);
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2e0))();
    }
  }
LAB_1432e588e:
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e5d56 FUN_1432e5d56 body=29 status=ok
// SIG undefined FUN_1432e5d56(void)

undefined8 FUN_1432e5d56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e5d74 FUN_1432e5d74 body=661 status=ok
// SIG undefined FUN_1432e5d74(void)

void FUN_1432e5d74(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [8];
  undefined1 local_78 [16];
  double local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1 = (longlong *)*param_1;
  cVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (cVar3 == '\0') goto LAB_1432e5fcc;
  fVar10 = *(float *)((longlong)param_1 + 0xa4);
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar10 < 0.0001) goto LAB_1432e5fcc;
  if ((((DAT_14c761011 != '\0') || (DAT_14cab43f0 == '\x01')) &&
      (plVar1 = (longlong *)param_1[0x13], plVar1 != (longlong *)0x0)) &&
     ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,DAT_14cab43f0);
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 == (longlong *)0x0) {
LAB_1432e5e52:
    puVar5 = &DAT_14c846480;
    puVar6 = local_b8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 == '\0') goto LAB_1432e5e52;
    (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_b8);
  }
  dVar2 = local_68;
  dVar7 = (double)local_78._0_8_;
  dVar8 = (double)local_78._8_8_;
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 == (longlong *)0x0) {
LAB_1432e5ea5:
    puVar5 = &DAT_14c846480;
    puVar6 = local_b8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 == '\0') goto LAB_1432e5ea5;
    (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_b8);
  }
  if ((char)param_1[0x14] == '\x01') {
    dVar2 = dVar2 * (double)param_1[0x19];
    dVar8 = dVar8 * (double)param_1[0x18];
    dVar7 = dVar7 * (double)param_1[0x17];
  }
  if (fVar10 < 0.9999) {
    dVar9 = (double)fVar10;
    dVar2 = (dVar2 - local_68) * dVar9 + local_68;
    dVar8 = (dVar8 - (double)local_78._8_8_) * dVar9 + (double)local_78._8_8_;
    dVar7 = (dVar7 - (double)local_78._0_8_) * dVar9 + (double)local_78._0_8_;
  }
  if ((char)param_1[0x1a] == '\0') {
    dVar7 = (double)local_78._0_8_;
  }
  dVar9 = (double)local_78._8_8_;
  if (*(char *)((longlong)param_1 + 0xd1) != '\0') {
    dVar9 = dVar8;
  }
  if (*(char *)((longlong)param_1 + 0xd2) == '\0') {
    dVar2 = local_68;
  }
  local_78._8_4_ = SUB84(dVar9,0);
  local_78._0_8_ = dVar7;
  local_78._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uStack_60 = 0;
  plVar1 = (longlong *)param_1[0x13];
  local_68 = dVar2;
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2a8))((longlong *)param_1[0x13],local_b8);
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2e0))();
    }
  }
LAB_1432e5fcc:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e6034 FUN_1432e6034 body=29 status=ok
// SIG undefined FUN_1432e6034(void)

undefined8 FUN_1432e6034(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e6052 FUN_1432e6052 body=3909 status=ok
// SIG undefined FUN_1432e6052(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e6052(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar18;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_3f8 [32];
  undefined1 local_3d8 [24];
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328 [2];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8 [4];
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
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
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  param_1 = (longlong *)*param_1;
  uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if ((char)uVar4 == '\0') goto LAB_1432e6106;
  fVar26 = *(float *)((longlong)param_1 + 0xa4);
  if (1.0 <= fVar26) {
    fVar26 = 1.0;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (fVar26 < 0.0001) goto LAB_1432e6106;
  if ((((DAT_14c761011 != '\0') || (DAT_14cab43f0 == '\x01')) &&
      (plVar6 = (longlong *)param_1[0x13], plVar6 != (longlong *)0x0)) &&
     (uVar4 = *(uint *)(plVar6 + 1), (uVar4 >> 0x1e & 1) == 0)) {
    uVar4 = (**(code **)(*plVar6 + 0x2e8))(plVar6,DAT_14cab43f0);
  }
  plVar6 = (longlong *)param_1[0x12];
  if (plVar6 == (longlong *)0x0) {
LAB_1432e61ee:
    pdVar8 = (double *)&DAT_14c846480;
    pdVar9 = local_2c8;
    for (lVar7 = 0xc; uVar27 = 0, lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
  }
  else {
    uVar4 = (**(code **)(*plVar6 + 0x2a0))(plVar6,1);
    if ((char)uVar4 == '\0') goto LAB_1432e61ee;
    plVar6 = (longlong *)param_1[0x12];
    uVar4 = (**(code **)(*plVar6 + 0x2b8))(plVar6,local_2c8);
    uVar27 = SUB84(plVar6,0);
  }
  if ((char)param_1[0x14] == '\0') {
    pdVar8 = local_2c8;
    pdVar9 = local_328;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
  }
  else {
    local_2f8 = 0.0;
    dStack_2f0 = 0.0;
    local_308 = 0.0;
    dStack_300 = 0.0;
    dVar11 = local_288._0_8_;
    dVar32 = local_288._8_8_;
    dVar16 = local_278._0_8_;
    dStack_2d0 = local_278._8_8_;
    auVar21 = *(undefined1 (*) [16])(param_1 + 0x20);
    local_2e8 = auVar21._0_8_;
    dStack_2e0 = auVar21._8_8_;
    local_3d8._0_16_ = *(undefined1 (*) [16])(param_1 + 0x22);
    local_2d8 = local_3d8._0_8_;
    auVar21 = minpd(auVar21,local_288);
    auVar24 = minpd(local_3d8._0_16_,local_278);
    auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
    iVar5 = movmskpd(uVar4,auVar22);
    auVar21._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar21._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    uVar4 = movmskpd(uVar27,auVar21);
    if ((uVar4 & 0x3fffffff) == 0 && iVar5 == 0) {
      dVar15 = (double)param_1[0x18];
      dVar18 = (double)param_1[0x19];
      dVar29 = (double)param_1[0x1a];
      dVar31 = (double)param_1[0x1b];
      local_328[0] = dVar18 * local_2c8[2] * -1.0 +
                     dVar29 * local_2c8[1] + dVar31 * local_2c8[0] * 1.0 + dVar15 * local_2c8[3];
      local_328[1] = dVar15 * local_2c8[2] * 1.0 +
                     dVar31 * local_2c8[1] + dVar29 * local_2c8[0] * -1.0 + dVar18 * local_2c8[3];
      dVar33 = (double)param_1[0x1c] * dVar11;
      dVar34 = (double)param_1[0x1d] * dVar32;
      dVar35 = (double)param_1[0x1e] * dVar16;
      dVar19 = (double)param_1[0x1f] * dStack_2d0;
      local_318._8_8_ =
           dVar29 * local_2c8[2] * -1.0 +
           ((local_2c8[0] * dVar15 * -1.0 + dVar31 * local_2c8[3]) - dVar18 * local_2c8[1]);
      local_318._0_8_ =
           dVar31 * local_2c8[2] * 1.0 +
           ((local_2c8[0] * dVar18 * 1.0 + dVar29 * local_2c8[3]) - dVar15 * local_2c8[1]);
      dVar29 = dVar34 * local_2c8[0] - local_2c8[1] * dVar33;
      dVar31 = dVar35 * local_2c8[1] - local_2c8[2] * dVar34;
      dVar15 = dVar33 * local_2c8[2] - local_2c8[0] * dVar35;
      dVar18 = dVar19 * local_2c8[3] - local_2c8[3] * dVar19;
      dVar31 = dVar31 + dVar31;
      dVar15 = dVar15 + dVar15;
      dVar29 = dVar29 + dVar29;
      dVar18 = dVar18 + dVar18;
      local_308 = (dVar29 * local_2c8[1] - local_2c8[2] * dVar15) + local_2c8[3] * dVar31 + dVar33 +
                  local_2a8;
      dStack_300 = (dVar31 * local_2c8[2] - dVar29 * local_2c8[0]) + local_2c8[3] * dVar15 + dVar34
                   + dStack_2a0;
      local_2f8 = (dVar15 * local_2c8[0] - local_2c8[1] * dVar31) + local_2c8[3] * dVar29 + dVar35 +
                  (double)CONCAT44(uStack_294,local_298);
      dStack_2f0 = (dVar18 * local_2c8[3] - dVar18 * local_2c8[3]) + local_2c8[3] * dVar18 + dVar19
                   + dStack_290;
      local_2e8 = local_2e8 * dVar11;
      dStack_2e0 = dStack_2e0 * dVar32;
      local_2d8 = local_2d8 * dVar16;
      dStack_2d0 = local_3d8._8_8_ * dStack_2d0;
    }
    else {
      dVar15 = local_2c8[1] + local_2c8[1];
      dVar35 = local_2c8[2] + local_2c8[2];
      dVar18 = local_2c8[0] * (local_2c8[0] + local_2c8[0]);
      local_178 = (1.0 - (dVar18 + local_2c8[1] * dVar15)) * dVar16;
      dVar19 = (local_2c8[0] + local_2c8[0]) * local_2c8[3];
      local_188 = (dVar15 * local_2c8[3] + local_2c8[0] * dVar35) * dVar16;
      dStack_2d0 = dStack_2d0 * local_3d8._8_8_;
      local_3a8._8_4_ = SUB84(dStack_2d0,0);
      local_3a8._0_8_ = dVar16 * local_2d8;
      local_3a8._12_4_ = (int)((ulonglong)dStack_2d0 >> 0x20);
      local_1a8 = (dVar15 * local_2c8[0] - dVar35 * local_2c8[3]) * dVar32;
      dStack_180 = (dVar35 * local_2c8[1] - dVar19) * dVar16;
      local_1c8 = (1.0 - (local_2c8[2] * dVar35 + local_2c8[1] * dVar15)) * dVar11;
      dStack_1a0 = (1.0 - (local_2c8[2] * dVar35 + dVar18)) * dVar32;
      dStack_1c0 = (dVar15 * local_2c8[0] + dVar35 * local_2c8[3]) * dVar11;
      local_198 = (dVar35 * local_2c8[1] + dVar19) * dVar32;
      local_1b8 = (local_2c8[0] * dVar35 - dVar15 * local_2c8[3]) * dVar11;
      dStack_1b0 = 0.0;
      uStack_190 = 0;
      uStack_170 = 0;
      local_168 = local_2a8;
      dStack_160 = dStack_2a0;
      local_158 = local_298;
      uStack_154 = uStack_294;
      uStack_150 = 0;
      uStack_14c = 0x3ff00000;
      dVar18 = (double)param_1[0x18];
      dVar29 = (double)param_1[0x19];
      dVar31 = (double)param_1[0x1a];
      dVar33 = dVar29 + dVar29;
      dVar35 = dVar31 + dVar31;
      dVar34 = dVar18 * (dVar18 + dVar18);
      local_1f8 = (1.0 - (dVar34 + dVar29 * dVar33)) * local_2d8;
      dVar16 = (double)param_1[0x1b];
      dVar19 = dVar35 * dVar16;
      dVar15 = (dVar18 + dVar18) * (double)param_1[0x1b];
      dVar16 = dVar33 * dVar16;
      local_208 = (dVar16 + (double)param_1[0x18] * dVar35) * local_2d8;
      local_228 = (dVar33 * dVar18 - dVar19) * dStack_2e0;
      dStack_200 = (dVar35 * dVar29 - dVar15) * local_2d8;
      local_3d8._8_4_ = SUB84(dVar32 * dStack_2e0,0);
      local_3d8._0_8_ = dVar11 * local_2e8;
      local_3d8._12_4_ = (int)((ulonglong)(dVar32 * dStack_2e0) >> 0x20);
      local_248 = (1.0 - (dVar31 * dVar35 + dVar29 * dVar33)) * local_2e8;
      dStack_220 = (1.0 - (dVar31 * dVar35 + dVar34)) * dStack_2e0;
      dStack_240 = (dVar33 * dVar18 + dVar19) * local_2e8;
      local_218 = (dVar35 * dVar29 + dVar15) * dStack_2e0;
      local_238._8_8_ = 0;
      local_238._0_8_ = ((double)param_1[0x18] * dVar35 - dVar16) * local_2e8;
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1e8 = param_1[0x1c];
      lStack_1e0 = param_1[0x1d];
      local_1d8 = param_1[0x1e];
      uStack_1d0 = 0x3ff0000000000000;
      FUN_1447fea8d(local_148);
      local_3b8 = local_148[2];
      dVar11 = local_148[2] * local_148[2] +
               local_148[0] * local_148[0] + local_148[1] * local_148[1];
      local_398._0_8_ = local_118;
      dVar35 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
      dVar16 = local_f8 * local_f8 + local_108 * local_108 + dStack_100 * dStack_100;
      uVar10 = -(ulonglong)(0.0 <= dVar11 + -9.99999993922529e-09);
      dVar32 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar11)) & uVar10);
      uVar10 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
      dVar11 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar10);
      uVar10 = -(ulonglong)(0.0 <= dVar16 + -9.99999993922529e-09);
      dVar16 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar16)) & uVar10);
      auVar24._8_8_ = -(ulonglong)(0.0 <= (double)local_3d8._8_8_);
      auVar24._0_8_ = -(ulonglong)(0.0 <= (double)local_3d8._0_8_);
      auVar21 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
      uVar1 = local_3a8._0_8_;
      uVar2 = local_3a8._8_8_;
      dVar35 = (double)(~-(ulonglong)(0.0 <= (double)local_3a8._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_3a8._0_8_) & 0x3ff0000000000000);
      dVar19 = auVar21._0_8_;
      local_148[0] = local_148[0] * dVar32 * dVar19;
      local_148[1] = local_148[1] * dVar32 * dVar19;
      local_148[2] = dVar32 * local_148[2] * dVar19;
      dVar32 = auVar21._8_8_;
      local_118 = dVar11 * local_118 * dVar32;
      dStack_120 = dStack_120 * dVar11 * dVar32;
      local_128 = dVar32 * local_128 * dVar11;
      local_f8 = dVar16 * local_f8 * dVar35;
      dStack_100 = dStack_100 * dVar16 * dVar35;
      local_108 = dVar35 * local_108 * dVar16;
      FUN_14481fd10(&local_268,local_148);
      dVar11 = local_258 * local_258 + local_268 * local_268;
      dVar16 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar23._0_8_ = dVar11 + dVar16;
      auVar23._8_8_ = dVar11 + dVar16;
      auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
      auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
      auVar21 = sqrtpd(auVar23,auVar23);
      auVar21 = divpd(_DAT_149934d80,auVar21);
      auVar25._0_8_ = auVar21._0_8_ * local_258;
      auVar25._8_8_ = auVar21._8_8_ * dStack_250;
      local_328[0] = (double)((ulonglong)(local_268 * auVar21._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
      local_328[1] = (double)((ulonglong)(dStack_260 * auVar21._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
      local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar13);
      local_2e8 = (double)local_3d8._0_8_;
      dStack_2e0 = (double)local_3d8._8_8_;
      local_2d8 = (double)uVar1;
      dStack_2d0 = (double)uVar2;
      local_308 = local_e8;
      dStack_300 = dStack_e0;
      local_2f8 = local_d8;
      dStack_2f0 = 0.0;
    }
  }
  plVar6 = (longlong *)param_1[0x13];
  if ((plVar6 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar6 + 0x2a0))(plVar6,1), cVar3 == '\0')) {
    pdVar8 = (double *)&DAT_14c846480;
    pdVar9 = local_148;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_148);
  }
  dVar15 = local_148[2];
  dVar19 = local_148[0];
  dVar35 = dStack_2e0;
  dVar32 = local_2e8;
  dVar16 = local_328[0];
  auVar30._8_8_ = dStack_120;
  auVar30._0_8_ = local_128;
  local_3d8._8_8_ = uStack_110;
  local_3d8._0_8_ = local_118;
  local_1c8 = local_148[0];
  dStack_1c0 = local_148[1];
  local_1b8 = local_148[2];
  dStack_1b0 = local_148[3];
  local_3a8._8_8_ = uStack_f0;
  local_3a8._0_8_ = local_f8;
  local_248 = local_328[0];
  dStack_240 = local_328[1];
  uVar1 = local_318._0_8_;
  local_238 = local_318;
  local_3b8 = local_2d8;
  dStack_3b0 = dStack_2d0;
  dVar18 = local_308;
  dVar29 = dStack_300;
  dVar31 = local_2f8;
  dVar11 = local_2d8;
  dVar33 = local_108;
  dVar34 = dStack_100;
  if (fVar26 < 0.9999) {
    local_338 = local_108;
    dStack_330 = dStack_100;
    dStack_340 = dStack_300 - dStack_120;
    dVar11 = (double)fVar26;
    dVar31 = (local_2f8 - local_118) * dVar11;
    local_348 = dStack_340 * dVar11 + dStack_120;
    local_358 = local_148[1];
    uStack_350 = 0;
    local_370 = local_328[1];
    local_378 = (double)local_318._8_8_;
    dVar29 = local_148[3] * (double)local_318._8_8_ +
             local_148[2] * (double)local_318._0_8_ +
             local_148[0] * local_328[0] + local_148[1] * local_328[1];
    dVar18 = (local_308 - local_128) * dVar11 + local_128;
    dVar33 = dVar29 * (double)(&DAT_149931160)[0.0 <= dVar29];
    dVar34 = 1.0 - dVar11;
    dVar29 = (double)(&DAT_149931160)[0.0 <= dVar29] * dVar11;
    local_398 = auVar30;
    if (dVar33 < 0.9999) {
      dVar12 = dVar33;
      if (1.0 <= dVar33) {
        dVar12 = 1.0;
      }
      dStack_360 = dStack_2f0;
      local_380 = dVar11;
      local_368 = dVar31;
      local_3c0 = acos((double)(-(ulonglong)(dVar33 < -1.0) & 0xbff0000000000000 |
                               ~-(ulonglong)(dVar33 < -1.0) & (ulonglong)dVar12));
      dVar11 = sin(local_3c0);
      dVar34 = sin(dVar34 * local_3c0);
      dVar34 = dVar34 * (1.0 / dVar11);
      dVar29 = sin(dVar29 * local_3c0);
      dVar29 = dVar29 * (1.0 / dVar11);
      dVar11 = local_380;
      dVar31 = local_368;
    }
    dVar33 = local_148[3] * dVar34 + local_378 * dVar29;
    dVar15 = dVar15 * dVar34 + (double)uVar1 * dVar29;
    dVar12 = local_358 * dVar34 + local_370 * dVar29;
    dVar29 = dVar19 * dVar34 + dVar16 * dVar29;
    dVar16 = dVar15 * dVar15 + dVar29 * dVar29;
    dVar19 = dVar33 * dVar33 + dVar12 * dVar12;
    auVar17._0_8_ = dVar16 + dVar19;
    auVar17._8_8_ = dVar16 + dVar19;
    auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
    auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
    auVar21 = sqrtpd(auVar17,auVar17);
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar20._0_8_ = auVar21._0_8_ * dVar15;
    auVar20._8_8_ = auVar21._8_8_ * dVar33;
    local_238 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar14);
    local_248 = (double)((ulonglong)(dVar29 * auVar21._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
    dStack_240 = (double)((ulonglong)(dVar12 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_));
    auVar30 = local_398;
    dVar29 = local_348;
    dVar31 = dVar31 + (double)local_3d8._0_8_;
    dVar32 = (dVar32 - local_338) * dVar11 + local_338;
    dVar35 = (dVar35 - dStack_330) * dVar11 + dStack_330;
    dVar11 = (local_3b8 - (double)local_3a8._0_8_) * dVar11 + (double)local_3a8._0_8_;
    dVar33 = local_338;
    dVar34 = dStack_330;
  }
  uVar27 = SUB84(dVar18,0);
  uVar28 = (undefined4)((ulonglong)dVar18 >> 0x20);
  if (*(char *)((longlong)param_1 + 0x121) == '\0') {
    uVar27 = auVar30._0_4_;
    uVar28 = auVar30._4_4_;
  }
  if (*(char *)((longlong)param_1 + 0x122) != '\0') {
    auVar30._4_4_ = uVar28;
    auVar30._0_4_ = uVar27;
    auVar30._8_8_ = dVar29;
  }
  if (*(char *)((longlong)param_1 + 0x123) == '\0') {
    dVar31 = (double)local_3d8._0_8_;
  }
  FUN_14690e3f2((longlong)param_1 + 0x124,&local_248,&local_1c8);
  local_2e8 = dVar32;
  if (*(char *)((longlong)param_1 + 0x127) == '\0') {
    local_2e8 = dVar33;
  }
  dStack_2e0 = dVar34;
  if ((char)param_1[0x25] != '\0') {
    dStack_2e0 = dVar35;
  }
  local_308 = (double)CONCAT44(uVar28,uVar27);
  dStack_300 = auVar30._8_8_;
  local_2d8 = dVar11;
  if (*(char *)((longlong)param_1 + 0x129) == '\0') {
    local_2d8 = (double)local_3a8._0_8_;
  }
  dStack_2f0 = 0.0;
  local_328[0] = local_248;
  local_328[1] = dStack_240;
  local_318 = local_238;
  if ((char)param_1[0x24] == '\0') {
    local_2e8 = local_108;
    dStack_2e0 = dStack_100;
    local_2d8 = local_f8;
  }
  dStack_2d0 = 0.0;
  plVar6 = (longlong *)param_1[0x13];
  local_2f8 = dVar31;
  if (plVar6 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar6 + 0x2a0))(plVar6,1);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2a8))((longlong *)param_1[0x13],local_328);
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x2e0))();
    }
  }
LAB_1432e6106:
  if ((local_c0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432e6fc2 FUN_1432e6fc2 body=29 status=ok
// SIG undefined FUN_1432e6fc2(void)

undefined8 FUN_1432e6fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e6fe0 FUN_1432e6fe0 body=1650 status=ok
// SIG undefined FUN_1432e6fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e6fe0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double *pdVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_228 [32];
  double local_208;
  ulonglong uStack_200;
  undefined1 local_1f8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_e8 [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  param_1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (cVar5 == '\0') goto LAB_1432e726b;
  if ((((DAT_14c761011 != '\0') || (DAT_14cab43f0 == '\x01')) &&
      (plVar1 = (longlong *)param_1[0x13], plVar1 != (longlong *)0x0)) &&
     ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,DAT_14cab43f0);
  }
  plVar1 = (longlong *)param_1[0x12];
  if (plVar1 == (longlong *)0x0) {
LAB_1432e70b8:
    puVar11 = &DAT_14c846480;
    puVar12 = local_e8;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  else {
    cVar5 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    if (cVar5 == '\0') goto LAB_1432e70b8;
    (**(code **)(*(longlong *)param_1[0x12] + 0x2b8))((longlong *)param_1[0x12],local_e8);
  }
  plVar1 = (longlong *)param_1[0x13];
  if ((plVar1 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1), cVar5 == '\0')) {
    pdVar10 = (double *)&DAT_14c846480;
    pdVar13 = local_148;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *pdVar13 = *pdVar10;
      pdVar10 = pdVar10 + 1;
      pdVar13 = pdVar13 + 1;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[0x13] + 0x2b8))((longlong *)param_1[0x13],local_148);
  }
  local_158 = local_b8 - local_118;
  local_168 = local_c8 - local_128;
  dStack_160 = dStack_c0 - dStack_120;
  dVar22 = local_158 * local_158 + local_168 * local_168 + dStack_160 * dStack_160;
  if ((dVar22 != 1.0) || (NAN(dVar22))) {
    if (9.99999993922529e-09 <= dVar22) {
      dVar22 = 1.0 / SQRT(dVar22);
      local_158 = local_158 * dVar22;
      dStack_160 = dStack_160 * dVar22;
      local_168 = local_168 * dVar22;
    }
    else {
      local_168 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dStack_160 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_158 = DAT_14c8464f0;
    }
  }
  if ((((9.999999747378752e-05 < ABS(local_168)) || (9.999999747378752e-05 < ABS(dStack_160))) ||
      (9.999999747378752e-05 < ABS(local_158))) &&
     (((9.999999747378752e-05 < ABS((double)param_1[0x16]) ||
       (9.999999747378752e-05 < ABS((double)param_1[0x17]))) ||
      (9.999999747378752e-05 < ABS((double)param_1[0x18]))))) {
    dVar23 = (double)param_1[0x16];
    dVar24 = (double)param_1[0x17];
    dVar22 = dVar24 * local_148[0] - dVar23 * local_148[1];
    dVar20 = (double)param_1[0x18] * local_148[1] - dVar24 * local_148[2];
    dVar25 = dVar23 * local_148[2] - local_148[0] * (double)param_1[0x18];
    dVar20 = dVar20 + dVar20;
    dVar25 = dVar25 + dVar25;
    dVar22 = dVar22 + dVar22;
    local_178 = dVar22 * local_148[3] + (double)param_1[0x18] +
                (dVar25 * local_148[0] - dVar20 * local_148[1]);
    local_188 = (dVar22 * local_148[1] - dVar25 * local_148[2]) + local_148[3] * dVar20 + dVar23;
    uStack_180 = (local_148[2] * dVar20 - local_148[0] * dVar22) + local_148[3] * dVar25 + dVar24;
    dVar22 = local_178 * local_178 + local_188 * local_188 + uStack_180 * uStack_180;
    if ((dVar22 != 1.0) || (NAN(dVar22))) {
      if (9.99999993922529e-09 <= dVar22) {
        dVar22 = 1.0 / SQRT(dVar22);
        local_178 = local_178 * dVar22;
        uStack_180 = uStack_180 * dVar22;
        local_188 = dVar22 * local_188;
      }
      else {
        local_178 = DAT_14c8464f0;
        local_188 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_180 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
    }
    pdVar10 = &local_1a8;
    uVar6 = FUN_147599fcc(pdVar10,&local_188,&local_168);
    lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_1a0 - DAT_14c8463d8));
    auVar4._8_4_ = (int)lVar14;
    auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_1a8 - DAT_14c8463d0));
    auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar7 = movmskpd(uVar6,auVar4);
    lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_190 - DAT_14c8463e8));
    auVar17._8_4_ = (int)lVar14;
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_198 - DAT_14c8463e0));
    auVar17._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar8 = movmskpd((int)pdVar10,auVar17);
    uVar9 = iVar8 << 2 | uVar7;
    if (uVar9 != 0) {
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + dStack_1a0));
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + local_1a8));
      iVar8 = movmskpd(uVar7,auVar26);
      auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + dStack_190));
      auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + local_198));
      uVar7 = movmskpd(uVar9,auVar3);
      if ((uVar7 & 0x3fffffff) != 0 || iVar8 != 0) {
        dVar22 = local_148[1] * local_198 * -1.0 +
                 local_148[2] * dStack_1a0 +
                 local_148[3] * local_1a8 * 1.0 + local_148[0] * dStack_190;
        dVar23 = local_148[0] * local_198 * 1.0 +
                 local_148[3] * dStack_1a0 +
                 local_148[2] * local_1a8 * -1.0 + local_148[1] * dStack_190;
        dVar24 = local_148[3] * local_198 * 1.0 +
                 ((local_1a8 * local_148[1] * 1.0 + dStack_190 * local_148[2]) -
                 dStack_1a0 * local_148[0]);
        dVar20 = local_148[2] * local_198 * -1.0 +
                 ((local_1a8 * local_148[0] * -1.0 + dStack_190 * local_148[3]) -
                 dStack_1a0 * local_148[1]);
        pdVar10 = local_148;
        pdVar13 = &local_208;
        for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
          *pdVar13 = *pdVar10;
          pdVar10 = pdVar10 + 1;
          pdVar13 = pdVar13 + 1;
        }
        auVar16._0_8_ = dVar22 * dVar22;
        auVar16._8_8_ = dVar23 * dVar23;
        dVar25 = dVar24 * dVar24 + auVar16._0_8_;
        dVar21 = dVar20 * dVar20 + auVar16._8_8_;
        auVar18._0_8_ = dVar25 + dVar21;
        auVar18._8_8_ = dVar25 + dVar21;
        uVar15 = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
        auVar17 = sqrtpd(auVar16,auVar18);
        auVar17 = divpd(_DAT_149934d80,auVar17);
        auVar19._0_8_ = auVar17._0_8_ * dVar24;
        auVar19._8_8_ = auVar17._8_8_ * dVar20;
        local_208 = (double)((ulonglong)(dVar22 * auVar17._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
        uStack_200 = (ulonglong)(dVar23 * auVar17._8_8_) & uVar15;
        auVar2._8_4_ = (int)uVar15;
        auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
        auVar2._12_4_ = (int)(uVar15 >> 0x20);
        local_1f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar2);
        plVar1 = (longlong *)param_1[0x13];
        if (plVar1 != (longlong *)0x0) {
          cVar5 = (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
          if (cVar5 != '\0') {
            (**(code **)(*(longlong *)param_1[0x13] + 0x2a8))((longlong *)param_1[0x13],&local_208);
          }
          if ((longlong *)param_1[0x13] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x13] + 0x2e0))();
          }
        }
      }
    }
  }
LAB_1432e726b:
  if ((local_80 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432e767e FUN_1432e767e body=29 status=ok
// SIG undefined FUN_1432e767e(void)

undefined8 FUN_1432e767e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432e76df FUN_1432e76df body=884 status=ok
// SIG undefined FUN_1432e76df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e76df(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cab4018 = 0xffffffff;
  DAT_14cab401c = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Constraints",&PTR_FUN_14a49a010,1,&PTR_FUN_14a499fe0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Constraints",0,0,&PTR_FUN_14a49a220);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Constraints",&PTR_FUN_14a49a990,1,0);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab40a8,L"Constraints.UseEvaluationGraph",&DAT_14c761010,
                L"Use Evaluation Graph to update constraints when manipulating.");
  atexit(FUN_1432e1ba4);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab40b8,L"Constraints.DebugEvaluationGraph",&DAT_14cab40c8,
                L"Print debug info about constraitns evaluation graph.");
  atexit(FUN_1432e1be9);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Constraints",&PTR_FUN_14a49b6d0,2,&PTR_FUN_14a49b6a0);
  local_40 = (undefined *)0x800000014a4a0022;
  local_44 = 0xb;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_146344006(&local_40);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Constraints",&PTR_FUN_14a49c690,1,0);
  DAT_14cab4200 = 0;
  DAT_14cab4208 = 0;
  DAT_14cab4210 = 0;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cab4244);
  if (cVar1 == '\0') {
    _DAT_14cab4244 = 0;
    uRam000000014cab424c = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  ppuStack_60 = &PTR_FUN_14a49cfe0;
  local_68 = 0;
  uStack_58 = 1;
  FUN_14282b410(L"/Script/Constraints",&PTR_FUN_14a49d000,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Constraints",&PTR_FUN_14a49ec20,6,0);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab43d0,L"Constraints.PreEvaluateChild",&DAT_14c761011,
                L"Force child evaluation before constraint computation.");
  atexit(FUN_1432e2657);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab43e0,L"Constraints.PreTickChild",&DAT_14cab43f0,
                L"Force child ticking before constraint computation.");
  atexit(FUN_1432e269c);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab43f8,L"Constraints.ForceChildDependency",&DAT_14cab4408,
                L"Force child dependency on the current constraint.");
  atexit(FUN_1432e26e1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab4410,L"Constraints.IncludeTarget",&DAT_14c761012,
                L"Include target when getting child\'s existing constraints.");
  atexit(FUN_1432e2726);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab4420,L"Constraints.DebugDependencies",&DAT_14cab4430,
                L"Print debug info about dependencies when creating a new constraint.");
  atexit(FUN_1432e276b);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432e7a54 FUN_1432e7a54 body=55 status=ok
// SIG undefined FUN_1432e7a54(void)

void FUN_1432e7a54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4780 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4780 = FUN_14171c317(FUN_1463453b0,uVar1,L"EMovieSceneScalabilityConditionGroup");
  }
  return;
}



// FUNCTION 1432e7a8b FUN_1432e7a8b body=55 status=ok
// SIG undefined FUN_1432e7a8b(void)

void FUN_1432e7a8b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4798 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4798 = FUN_14171c317(FUN_1463453df,uVar1,L"EMovieSceneScalabilityConditionOperator");
  }
  return;
}



// FUNCTION 1432e7ac2 FUN_1432e7ac2 body=55 status=ok
// SIG undefined FUN_1432e7ac2(void)

void FUN_1432e7ac2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab47b0 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab47b0 = FUN_14171c317(FUN_14634540e,uVar1,L"EMovieSceneScalabilityConditionLevel");
  }
  return;
}



// FUNCTION 1432e7afa FUN_1432e7afa body=992 status=ok
// SIG undefined FUN_1432e7afa(void)

ulonglong FUN_1432e7afa(uint *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong ***ppplVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong ****pppplVar12;
  bool bVar13;
  undefined1 auStack_e8 [40];
  uint *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong ***local_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  local_4c = param_2;
  if (*param_4 != 0) {
    ppplVar5 = (longlong ***)FUN_1432dc9cc(*param_3 + 0x38);
    if (ppplVar5 == (longlong ***)0x0) {
      lVar6 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      FUN_14179f446(lVar6 + 0x38,&local_a8,1 << (DAT_14cab3b78 & 0x1f));
      if (((local_a0 & 0xff) == 2) || (pppplVar12 = &local_a8, (local_a0 & 0xff) == 1)) {
        pppplVar12 = (longlong ****)local_a8;
      }
      ppplVar5 = *pppplVar12;
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
    }
    local_60 = *param_3;
    local_58 = param_3[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    lVar6 = FUN_141493450(ppplVar5,&local_60,&local_4c);
    if (lVar6 != 0) {
      local_78 = 0;
      uStack_70 = 0;
      local_c0 = param_1;
      local_b8 = lVar6;
      local_b0 = param_4;
      FUN_1405e06c2(*param_3,&local_a8,param_1,&local_4c);
      if ((longlong)(int)local_a0 != 0) {
        lVar6 = 0;
        do {
          uVar8 = *(ulonglong *)((longlong)local_a8 + lVar6);
          if (uVar8 >> 0x20 == 0) {
LAB_1432e7e12:
            bVar13 = false;
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            bVar13 = false;
            uVar4 = (uint)uVar8;
            if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
              plVar7 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8)));
              if ((plVar7 == (longlong *)0x0) ||
                 (((int)plVar7[2] != (int)(uVar8 >> 0x20) ||
                  ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_1432e7e12;
              lVar10 = *plVar7;
              bVar13 = lVar10 != 0;
              if ((bVar13) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar10);
                bVar13 = true;
              }
            }
          }
          uVar8 = uStack_70;
          lVar11 = (longlong)(int)uStack_70;
          uVar4 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if (uStack_70._4_4_ < uVar4) {
            FUN_140845902(&local_78,uVar8 & 0xffffffff);
          }
          *(longlong *)(local_78 + lVar11 * 8) = lVar10;
          if ((bVar13 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar10);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)local_a0 * 8 != lVar6);
      }
      puVar3 = local_c0;
      lVar6 = *param_3;
      if (((((*(int *)(lVar6 + 0x1c) == 0) || (uVar4 = *(uint *)(lVar6 + 0x18), (int)uVar4 < 0)) ||
           (DAT_14c9647dc <= (int)uVar4)) ||
          ((puVar9 = (undefined8 *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           puVar9 == (undefined8 *)0x0 || (*(int *)(puVar9 + 2) != *(int *)(lVar6 + 0x1c))))) ||
         ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) {
        local_a8 = (longlong ***)0x0;
      }
      else {
        local_a8 = (longlong ***)*puVar9;
        if (((longlong ****)local_a8 != (longlong ****)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(local_a8);
          lVar6 = *param_3;
        }
      }
      local_90 = FUN_1400d1226(lVar6,&local_4c);
      local_a0 = *puVar3;
      uStack_9c = puVar3[1];
      uStack_98 = puVar3[2];
      uStack_94 = puVar3[3];
      if ((local_90 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_90);
      }
      uVar8 = uStack_70;
      lVar6 = local_78;
      local_88 = 0;
      local_80 = (int)uStack_70;
      if ((int)uStack_70 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1402ae8a8(&local_88,uStack_70 & 0xffffffff,0);
        FUN_140160884(local_88,lVar6,uVar8 & 0xffffffff);
      }
      uVar4 = FUN_1475a595c(local_b8,local_b0,&local_a8);
      uVar8 = (ulonglong)uVar4;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar7 = (longlong *)param_3[1];
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
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1432e7edc FUN_1432e7edc body=22883 status=ok
// SIG undefined FUN_1432e7edc(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432e7edc(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  void *_Src;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  code *pcVar30;
  char cVar31;
  uint *puVar32;
  double *pdVar33;
  undefined8 *puVar34;
  undefined1 *puVar35;
  byte bVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  longlong lVar41;
  code **ppcVar42;
  longlong *plVar43;
  longlong lVar44;
  code *pcVar45;
  uint uVar46;
  undefined8 *puVar47;
  code *pcVar48;
  undefined8 *puVar49;
  code *pcVar50;
  longlong *plVar51;
  ulonglong uVar52;
  undefined2 *puVar53;
  code *pcVar54;
  longlong *plVar55;
  undefined8 *puVar56;
  code *pcVar57;
  longlong lVar58;
  code *pcVar59;
  int iVar60;
  code *pcVar61;
  uint uVar62;
  ulonglong uVar63;
  longlong lVar64;
  undefined8 *puVar65;
  code *pcVar66;
  uint uVar67;
  int iVar68;
  code *pcVar69;
  bool bVar70;
  ulonglong uVar71;
  float fVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  undefined8 *puVar76;
  undefined8 *puVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 *extraout_XMM0_Qb;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 *puVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar109;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  double dVar124;
  undefined1 auVar123 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  double dVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  double dVar138;
  undefined1 auVar137 [16];
  double dVar139;
  double dVar140;
  double dVar141;
  undefined1 auVar142 [16];
  double dVar145;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  double dVar146;
  double dVar147;
  double dVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  double dVar152;
  undefined1 auVar151 [16];
  double dVar153;
  undefined1 auVar154 [16];
  double dVar155;
  double dVar156;
  double dVar157;
  double dVar158;
  undefined1 auVar159 [16];
  double dVar160;
  double dVar161;
  double dVar163;
  undefined1 auVar162 [16];
  double dVar164;
  undefined4 uVar165;
  undefined4 uVar166;
  undefined4 uVar167;
  undefined4 uVar168;
  undefined4 uVar169;
  undefined4 uVar170;
  undefined4 uVar171;
  undefined4 uVar172;
  undefined1 auStack_8d8 [32];
  undefined4 local_8b8;
  undefined4 local_8b0;
  undefined4 local_8a8;
  undefined8 local_8a0;
  wchar_t *local_898;
  undefined1 *local_890;
  undefined1 *local_888;
  code **local_880;
  code *local_878;
  code *local_870;
  undefined1 local_868 [16];
  undefined1 local_858 [16];
  undefined8 *local_848;
  double dStack_840;
  longlong local_830;
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  undefined8 *local_7e8;
  undefined8 *puStack_7e0;
  undefined1 local_7d8 [16];
  undefined8 *local_7c8;
  undefined8 *puStack_7c0;
  undefined8 *local_7b8;
  undefined8 *puStack_7b0;
  undefined8 *local_7a8;
  undefined8 *puStack_7a0;
  int local_798;
  undefined4 uStack_794;
  undefined8 *puStack_790;
  undefined8 *local_788;
  undefined8 *puStack_780;
  undefined8 *local_778;
  undefined8 *puStack_770;
  int local_768;
  undefined4 uStack_764;
  undefined8 *puStack_760;
  undefined8 *local_758;
  undefined8 *puStack_750;
  undefined8 *local_748;
  undefined8 *puStack_740;
  undefined8 *local_738;
  undefined8 *puStack_730;
  undefined8 *local_728;
  undefined8 *puStack_720;
  undefined8 *local_718;
  undefined8 *puStack_710;
  longlong local_700;
  longlong local_6f8;
  longlong local_6f0;
  code *local_6e8;
  code *local_6e0;
  undefined8 *local_6d8;
  undefined8 *puStack_6d0;
  longlong local_6c0;
  undefined8 *local_6b8;
  longlong local_6b0;
  undefined2 local_6a8 [2];
  undefined1 local_6a3;
  undefined4 local_6a0;
  undefined1 local_69c;
  undefined2 *local_698;
  undefined2 *local_690;
  void *local_688;
  ulonglong uStack_680;
  undefined8 *local_670;
  longlong local_668;
  int local_660;
  code *local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  double dStack_630;
  double local_628;
  undefined8 local_618;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined2 uStack_606;
  undefined1 uStack_604;
  undefined1 uStack_603;
  undefined2 uStack_602;
  undefined4 uStack_600;
  uint uStack_5fc;
  undefined8 local_5f8;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 *puStack_5d0;
  undefined1 local_5c8 [16];
  undefined8 local_5b8;
  undefined8 *puStack_5b0;
  undefined8 *local_5a8;
  undefined8 *puStack_5a0;
  undefined8 *local_598;
  undefined8 *puStack_590;
  undefined8 *local_588;
  double dStack_580;
  undefined8 *local_578;
  undefined8 *puStack_570;
  uint local_518 [4];
  uint *local_508;
  uint local_500;
  uint local_4fc;
  longlong local_4f8 [2];
  undefined1 local_4e8 [16];
  undefined1 *local_4d8;
  int local_4d0;
  undefined8 local_4cc;
  undefined4 local_4c4;
  longlong local_4b8 [2];
  undefined1 local_4a8 [16];
  undefined1 *local_498;
  int local_490;
  undefined1 local_48c [8];
  undefined4 local_484;
  code *local_478;
  double *pdStack_470;
  undefined8 *local_468 [2];
  double local_458;
  double local_450;
  undefined8 *local_448;
  undefined4 local_440;
  double local_438;
  undefined8 *local_430;
  double local_428;
  longlong local_420;
  undefined8 *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  double local_408;
  undefined8 *local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  undefined8 *local_3e8;
  undefined4 local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  int local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined4 local_3b0;
  undefined8 *local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 *local_390;
  longlong *local_178;
  double dStack_170;
  double dStack_168;
  double *local_160;
  double dStack_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  uVar62 = *(uint *)(param_1 + 0x78);
  local_858._0_4_ = *(undefined4 *)(param_1 + 0x88);
  local_498 = (undefined1 *)0x0;
  local_490 = 0;
  local_4b8[0] = 0;
  local_4b8[1] = 0;
  local_48c = (undefined1  [8])0xffffffff00000080;
  local_484 = 0;
  local_4d8 = (undefined1 *)0x0;
  local_4d0 = 0;
  local_4f8[0] = 0;
  local_4f8[1] = 0;
  local_4cc = 0xffffffff00000080;
  local_4c4 = 0;
  local_508 = (uint *)0x0;
  local_4fc = 0x80;
  uVar67 = uVar62 + 0x1f;
  local_830 = param_1;
  local_6c0 = param_2;
  local_6b8 = param_4;
  local_500 = uVar62;
  if (uVar67 < 0x20) {
    local_688 = (void *)0x0;
    uStack_680 = 0;
    if ((int)uVar62 < 0) goto LAB_1432e952b;
    goto LAB_1432e8021;
  }
  if (uVar67 < 0xa0) {
    puVar32 = local_518;
LAB_1432e94ca:
    uVar67 = uVar67 >> 3 & 0xfffffffc;
  }
  else {
    FUN_1446efa72(&local_508,0,uVar67 >> 5,4);
    local_4fc = uVar67 & 0xffffffe0;
    puVar32 = local_518;
    if (local_508 != (uint *)0x0) {
      puVar32 = local_508;
    }
    if (uVar67 < 0x120) goto LAB_1432e94ca;
    uVar67 = (uVar67 >> 5) << 2;
  }
  memset(puVar32,0,(ulonglong)uVar67);
  uVar67 = local_500 + 0x1f;
  if (-1 < (int)local_500) {
    uVar67 = local_500;
  }
  if ((int)local_500 % 0x20 != 0) {
    puVar32 = local_508;
    if (local_508 == (uint *)0x0) {
      puVar32 = local_518;
    }
    bVar36 = -(char)((int)local_500 % 0x20);
    puVar32[(int)uVar67 >> 5] = (puVar32[(int)uVar67 >> 5] << (bVar36 & 0x1f)) >> (bVar36 & 0x1f);
  }
  local_688 = (void *)0x0;
  if ((int)uVar62 < 1) {
LAB_1432e952b:
    uStack_680 = 0;
    local_688 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar62);
  }
  uStack_680 = (ulonglong)uVar62;
  FUN_1446f48e2(&local_688);
  memset(local_688,0,(ulonglong)uVar62 * 4);
LAB_1432e8021:
  uVar62 = param_3[6];
  if (uVar62 == 0) {
    uVar52 = 1;
    uVar71 = 0;
    uVar63 = 0;
    iVar68 = 0;
  }
  else {
    puVar32 = *(uint **)(param_3 + 4);
    if (*(uint **)(param_3 + 4) == (uint *)0x0) {
      puVar32 = param_3;
    }
    uVar67 = *puVar32;
    if (uVar67 == 0) {
      iVar68 = uVar62 + 0x1e;
      if (-1 < (int)(uVar62 - 1)) {
        iVar68 = uVar62 - 1;
      }
      uVar71 = 0;
      uVar63 = (ulonglong)(uint)(iVar68 >> 5);
      if (iVar68 >> 5 < 1) {
        uVar63 = uVar71;
      }
      iVar68 = 0;
      do {
        if (uVar63 == uVar71) goto LAB_1432e88a7;
        iVar68 = iVar68 + 0x20;
        uVar67 = puVar32[uVar71 + 1];
        uVar71 = uVar71 + 1;
      } while (uVar67 == 0);
    }
    else {
      uVar71 = 0;
      iVar68 = 0;
    }
    uVar52 = (ulonglong)(-uVar67 & uVar67);
    uVar63 = uVar52 * 2 + 1;
    lVar64 = 0x3f;
    if (uVar63 != 0) {
      for (; uVar63 >> lVar64 == 0; lVar64 = lVar64 + -1) {
      }
    }
    uVar67 = (iVar68 - ((uint)lVar64 ^ 0x3f)) + 0x3e;
    uVar63 = (ulonglong)uVar67;
    if ((int)uVar62 <= (int)uVar67) {
      uVar63 = (ulonglong)uVar62;
    }
  }
  if ((int)uVar63 < (int)uVar62) {
    local_848 = (undefined8 *)(local_830 + 0x60);
    local_818._0_8_ = local_830 + 0x50;
    uVar62 = 0xffffffff;
    local_868._0_8_ = param_3;
    do {
      local_808._0_4_ = uVar62;
      local_828._0_4_ = iVar68;
      local_7f8._0_8_ = uVar71;
      puVar97 = *(undefined8 **)(local_830 + 0x70);
      if (*(undefined8 **)(local_830 + 0x70) == (undefined8 *)0x0) {
        puVar97 = local_848;
      }
      uVar62 = (uint)uVar63;
      uVar67 = uVar62 + 0x1f;
      if (-1 < (int)uVar62) {
        uVar67 = uVar62;
      }
      if ((*(uint *)((longlong)puVar97 + (longlong)((int)uVar67 >> 5) * 4) >> (uVar62 & 0x1f) & 1)
          == 0) {
        lVar64 = FUN_1475b4386(local_818._0_8_,uVar63);
        if (lVar64 != 0) goto LAB_1432e8191;
      }
      else {
LAB_1432e8191:
        FUN_140ee84a4(*local_6b8,local_858._0_4_,1);
        if (uVar62 != 0xffffffff) {
          iVar68 = 0;
          do {
            iVar40 = (int)uVar63;
            uVar62 = 1 << ((byte)uVar63 & 0x1f);
            puVar32 = local_508;
            if (local_508 == (uint *)0x0) {
              puVar32 = local_518;
            }
            iVar39 = iVar40 + 0x1f;
            if (-1 < iVar40) {
              iVar39 = iVar40;
            }
            puVar32[iVar39 >> 5] = puVar32[iVar39 >> 5] | uVar62;
            lVar64 = (longlong)iVar40;
            iVar37 = *(int *)((longlong)local_688 + lVar64 * 4);
            if (iVar37 < iVar68) {
              iVar37 = iVar68;
            }
            *(int *)((longlong)local_688 + lVar64 * 4) = iVar37;
            dVar152 = dRam000000014c8464d8;
            puVar97 = DAT_14c8464d0;
            uVar171 = DAT_14c8464c8._4_4_;
            uVar170 = (undefined4)DAT_14c8464c8;
            uVar168 = DAT_14c8464c0._4_4_;
            uVar166 = (undefined4)DAT_14c8464c0;
            dVar146 = DAT_14c8464b8;
            dVar73 = DAT_14c8464b0;
            uVar172 = DAT_14c8464a8._4_4_;
            uVar165 = (undefined4)DAT_14c8464a8;
            uVar169 = DAT_14c8464a0._4_4_;
            uVar167 = (undefined4)DAT_14c8464a0;
            dVar75 = DAT_14c846488;
            dVar74 = DAT_14c846480;
            auVar80._8_8_ = (double)DAT_14c846498;
            auVar80._0_8_ = (double)DAT_14c846490;
            puVar32 = (uint *)FUN_1475b443c(local_818._0_8_,uVar63);
            if ((((((puVar32 != (uint *)0x0) && (puVar32[1] != 0)) &&
                  (uVar67 = *puVar32, -1 < (int)uVar67)) &&
                 (((int)uVar67 < DAT_14c9647dc &&
                  (plVar43 = (longlong *)
                             ((ulonglong)((uVar67 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar67 >> 0x10) * 8)),
                  plVar43 != (longlong *)0x0)))) && (*(uint *)(plVar43 + 2) == puVar32[1])) &&
               (((*(uint *)(plVar43 + 1) & 0x10200000) == 0 && (lVar58 = *plVar43, lVar58 != 0)))) {
              if (DAT_14cac7648 == 0) {
                local_478 = FUN_144a7958c;
                local_870 = FUN_14081d0ea;
                local_878 = FUN_143242436;
                local_880 = &local_478;
                local_888 = &LAB_14789ef1f;
                local_890 = &LAB_1417b008f;
                local_898 = L"Engine";
                local_8a0 = 0x8000000000;
                local_8a8 = 0x10000004;
                local_8b0 = 0x10;
                local_8b8 = 0x2b0;
                FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
              }
              if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar58 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar58 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
                uVar166 = (undefined4)*(undefined8 *)(lVar58 + 0x1c8);
                uVar168 = (undefined4)((ulonglong)*(undefined8 *)(lVar58 + 0x1c8) >> 0x20);
                uVar71 = *(ulonglong *)(lVar58 + 0x1d0);
                puVar97 = *(undefined8 **)(lVar58 + 0x1d8);
                uVar167 = (undefined4)*(undefined8 *)(lVar58 + 0x198);
                uVar169 = (undefined4)((ulonglong)*(undefined8 *)(lVar58 + 0x198) >> 0x20);
                puVar34 = *(undefined8 **)(lVar58 + 0x1a0);
                dVar73 = *(double *)(lVar58 + 0x1a8);
                auVar80 = *(undefined1 (*) [16])(lVar58 + 0x1b0);
                dVar75 = auVar80._0_8_;
                dVar146 = auVar80._8_8_;
                dVar74 = *(double *)(lVar58 + 0x1c0);
                pdVar33 = *(double **)(lVar58 + 0x230);
                if (pdVar33 == (double *)0x0) {
                  pdVar33 = (double *)FUN_14001cc68(0x40,0x10);
                  dVar152 = DAT_14c8463d8;
                  *pdVar33 = DAT_14c8463d0;
                  pdVar33[1] = dVar152;
                  dVar152 = DAT_14c8463e8;
                  pdVar33[2] = DAT_14c8463e0;
                  pdVar33[3] = dVar152;
                  dVar152 = DAT_14c846500;
                  pdVar33[4] = DAT_14c8464f8;
                  pdVar33[5] = dVar152;
                  pdVar33[6] = DAT_14c846508;
                  *(double **)(lVar58 + 0x230) = pdVar33;
                }
                auVar99 = _DAT_1499387d0;
                if ((((pdVar33[4] != dVar75) || (NAN(pdVar33[4]) || NAN(dVar75))) ||
                    (pdVar33[5] != dVar146)) ||
                   (((NAN(pdVar33[5]) || NAN(dVar146) || (pdVar33[6] != dVar74)) ||
                    (NAN(pdVar33[6]) || NAN(dVar74))))) {
                  auVar111._8_8_ = 0;
                  auVar111._0_8_ = dVar74;
                  dVar152 = (double)DAT_1499387d0;
                  dVar141 = DAT_1499387d0._8_8_;
                  auVar80 = divpd(auVar80,_DAT_1499387d0);
                  auVar107 = divpd(auVar111,_DAT_1499387d0);
                  auVar80 = roundpd(auVar80,auVar80,3);
                  auVar107 = roundpd(auVar107,auVar107,3);
                  auVar149._0_8_ = dVar75 - auVar80._0_8_ * dVar152;
                  auVar149._8_8_ = dVar146 - auVar80._8_8_ * dVar141;
                  auVar112._0_8_ = dVar74 - auVar107._0_8_ * dVar152;
                  auVar112._8_8_ = 0.0 - auVar107._8_8_ * dVar141;
                  auVar142._0_8_ = auVar149._0_8_ + dVar152;
                  auVar142._8_8_ = auVar149._8_8_ + dVar141;
                  auVar125._0_8_ = auVar112._0_8_ + dVar152;
                  auVar125._8_8_ = auVar112._8_8_ + dVar141;
                  auVar107._8_8_ = -(ulonglong)(0.0 <= auVar149._8_8_);
                  auVar107._0_8_ = -(ulonglong)(0.0 <= auVar149._0_8_);
                  auVar107 = blendvpd(auVar142,auVar149,auVar107);
                  auVar102._8_8_ = -(ulonglong)(0.0 <= auVar112._8_8_);
                  auVar102._0_8_ = -(ulonglong)(0.0 <= auVar112._0_8_);
                  auVar80 = blendvpd(auVar125,auVar112,auVar102);
                  auVar113._0_8_ = auVar107._0_8_ + -360.0;
                  auVar113._8_8_ = auVar107._8_8_ + -360.0;
                  auVar134._0_8_ = auVar80._0_8_ + -360.0;
                  auVar134._8_8_ = auVar80._8_8_ + 0.0;
                  auVar78._8_8_ = -(ulonglong)(180.0 < auVar107._8_8_);
                  auVar78._0_8_ = -(ulonglong)(180.0 < auVar107._0_8_);
                  auVar107 = blendvpd(auVar107,auVar113,auVar78);
                  auVar79._8_8_ = -(ulonglong)(180.0 < auVar80._8_8_);
                  auVar79._0_8_ = -(ulonglong)(180.0 < auVar80._0_8_);
                  auVar80 = blendvpd(auVar80,auVar134,auVar79);
                  *(undefined1 (*) [16])(pdVar33 + 4) = auVar107;
                  dVar74 = auVar80._0_8_;
                  pdVar33[6] = dVar74;
                  auVar150._8_8_ = 0;
                  auVar150._0_8_ = dVar74;
                  auVar80 = divpd(auVar107,auVar99);
                  auVar99 = divpd(auVar150,auVar99);
                  auVar80 = roundpd(auVar80,auVar80,3);
                  auVar99 = roundpd(auVar99,auVar99,3);
                  dVar145 = (auVar107._0_8_ - auVar80._0_8_ * dVar152) * 0.008726646259971648;
                  dVar110 = (auVar107._8_8_ - auVar80._8_8_ * dVar141) * 0.008726646259971648;
                  dVar74 = (dVar74 - auVar99._0_8_ * dVar152) * 0.008726646259971648;
                  dVar147 = (0.0 - auVar99._8_8_ * dVar141) * 0.008726646259971648;
                  local_7c8 = (undefined8 *)sin(dVar145);
                  puStack_7c0 = extraout_XMM0_Qb;
                  dVar75 = sin(dVar110);
                  local_7d8._8_8_ = 0;
                  local_7d8._0_8_ = uVar71;
                  dVar146 = sin(dVar74);
                  puStack_7e0 = (undefined8 *)0x0;
                  puStack_7b0 = (undefined8 *)0x0;
                  local_7e8 = puVar34;
                  local_7b8 = puVar97;
                  sin(dVar147);
                  dVar152 = cos(dVar145);
                  dVar141 = cos(dVar110);
                  dVar145 = cos(dVar74);
                  cos(dVar147);
                  auVar80._0_8_ =
                       -(dVar141 * (double)local_7c8 * dVar146) + dVar75 * dVar152 * dVar145;
                  auVar80._8_8_ = dVar75 * (double)local_7c8 * dVar146 + dVar141 * dVar152 * dVar145
                  ;
                  dVar74 = (double)local_7c8 * dVar75 * dVar145 - dVar152 * dVar141 * dVar146;
                  dVar75 = -((double)local_7c8 * dVar141 * dVar145) - dVar152 * dVar75 * dVar146;
                  *pdVar33 = dVar74;
                  pdVar33[1] = dVar75;
                  *(undefined1 (*) [16])(pdVar33 + 2) = auVar80;
                  puVar34 = local_7e8;
                  uVar71 = local_7d8._0_8_;
                  puVar97 = local_7b8;
                }
                else {
                  dVar74 = *pdVar33;
                  dVar75 = pdVar33[1];
                  auVar80 = *(undefined1 (*) [16])(pdVar33 + 2);
                }
                uVar165 = SUB84(puVar34,0);
                uVar172 = (undefined4)((ulonglong)puVar34 >> 0x20);
                dVar146 = 0.0;
                uVar170 = (undefined4)uVar71;
                uVar171 = (undefined4)(uVar71 >> 0x20);
                dVar152 = 0.0;
              }
            }
            if ((iVar40 < 0) || (local_4d0 <= iVar40)) {
LAB_1432e85ec:
              FUN_1401280b4(local_4f8,&local_478,uVar63);
              *pdStack_470 = dVar74;
              pdStack_470[1] = dVar75;
              *(undefined1 (*) [16])(pdStack_470 + 2) = auVar80;
              *(undefined4 *)(pdStack_470 + 4) = uVar167;
              *(undefined4 *)((longlong)pdStack_470 + 0x24) = uVar169;
              *(undefined4 *)(pdStack_470 + 5) = uVar165;
              *(undefined4 *)((longlong)pdStack_470 + 0x2c) = uVar172;
              pdStack_470[6] = dVar73;
              pdStack_470[7] = dVar146;
              *(undefined4 *)(pdStack_470 + 8) = uVar166;
              *(undefined4 *)((longlong)pdStack_470 + 0x44) = uVar168;
              *(undefined4 *)(pdStack_470 + 9) = uVar170;
              *(undefined4 *)((longlong)pdStack_470 + 0x4c) = uVar171;
              pdStack_470[10] = (double)puVar97;
              pdStack_470[0xb] = dVar152;
            }
            else {
              puVar35 = local_4d8;
              if (local_4d8 == (undefined1 *)0x0) {
                puVar35 = local_4e8;
              }
              if ((*(uint *)(puVar35 + (uVar63 >> 5) * 4) & uVar62) == 0) goto LAB_1432e85ec;
            }
            puVar97 = *(undefined8 **)(local_830 + 0x70);
            if (*(undefined8 **)(local_830 + 0x70) == (undefined8 *)0x0) {
              puVar97 = local_848;
            }
            if ((*(uint *)((longlong)puVar97 + (longlong)(iVar39 >> 5) * 4) & uVar62) != 0) {
              if ((-1 < iVar40) && (iVar40 < local_490)) {
                puVar35 = local_498;
                if (local_498 == (undefined1 *)0x0) {
                  puVar35 = local_4a8;
                }
                if ((*(uint *)(puVar35 + (uVar63 >> 5) * 4) & uVar62) != 0) goto LAB_1432e867a;
              }
              local_478 = (code *)0x0;
              pdStack_470 = (double *)0x0;
              FUN_1475a8054(local_4b8,uVar63,&local_478);
              FUN_140ee84a4(lVar64 * 0x10 + local_4b8[0],*(undefined4 *)(local_830 + 0x88),1);
            }
LAB_1432e867a:
            if (puVar32 == (uint *)0x0) break;
            uVar63 = (ulonglong)puVar32[7];
            iVar68 = iVar68 + 1;
          } while (puVar32[7] != 0xffffffff);
        }
      }
      uVar62 = local_808._0_4_ & ~(uint)uVar52;
      lVar64 = *(longlong *)(local_868._0_8_ + 0x10);
      if (*(longlong *)(local_868._0_8_ + 0x10) == 0) {
        lVar64 = local_868._0_8_;
      }
      uVar67 = *(uint *)(local_868._0_8_ + 0x18);
      iVar40 = local_7f8._0_4_;
      lVar58 = (longlong)iVar40;
      uVar38 = *(uint *)(lVar64 + lVar58 * 4) & uVar62;
      uVar71 = local_7f8._0_8_;
      iVar68 = local_828._0_4_;
      if (uVar38 == 0) {
        iVar39 = uVar67 + 0x1e;
        if (-1 < (int)(uVar67 - 1)) {
          iVar39 = uVar67 - 1;
        }
        iVar39 = iVar39 >> 5;
        iVar37 = iVar39;
        if (iVar39 < iVar40) {
          iVar37 = iVar40;
        }
        if (iVar39 <= iVar40) break;
        lVar44 = 0;
        while( true ) {
          iVar68 = iVar68 + 0x20;
          uVar38 = *(uint *)(lVar64 + lVar58 * 4 + 4 + lVar44 * 4);
          if (uVar38 != 0) break;
          lVar44 = lVar44 + 1;
          if (iVar37 - lVar58 == lVar44) goto LAB_1432e88a7;
        }
        uVar62 = 0xffffffff;
        uVar71 = (ulonglong)(iVar40 + (int)lVar44 + 1);
      }
      uVar52 = (ulonglong)(-uVar38 & uVar38);
      uVar63 = uVar52 * 2 + 1;
      lVar64 = 0x3f;
      if (uVar63 != 0) {
        for (; uVar63 >> lVar64 == 0; lVar64 = lVar64 + -1) {
        }
      }
      uVar46 = (iVar68 - ((uint)lVar64 ^ 0x3f)) + 0x3e;
      uVar38 = uVar46;
      if ((int)uVar67 <= (int)uVar46) {
        uVar38 = uVar67;
      }
      uVar63 = (ulonglong)uVar38;
    } while ((int)uVar46 < (int)uVar67);
  }
LAB_1432e88a7:
  local_6f8 = FUN_14009d2a0();
  lVar64 = FUN_14038fb82();
  local_178 = local_4b8;
  local_160 = (double *)0x0;
  dStack_158 = 0.0;
  uVar62 = local_500 + 0x1f & 0xffffffe0;
  if (0 < (int)uVar62) {
    uVar67 = 0x80;
    if (0x80 < uVar62) {
      uVar67 = uVar62;
    }
    dStack_158 = (double)((ulonglong)uVar67 << 0x20);
    FUN_1446efbd8(&dStack_170,0);
  }
  dStack_158 = (double)CONCAT44(dStack_158._4_4_,local_500);
  if (local_500 != 0) {
    puVar32 = local_508;
    if (local_508 == (uint *)0x0) {
      puVar32 = local_518;
    }
    pdVar33 = local_160;
    if (local_160 == (double *)0x0) {
      pdVar33 = &dStack_170;
    }
    memcpy(pdVar33,puVar32,(ulonglong)(local_500 + 0x1f >> 3 & 0xfffffffc));
  }
  local_618._0_2_ = *(undefined2 *)(local_6f8 + 0x13e);
  uStack_606 = *(undefined2 *)(local_6f8 + 0xcc);
  local_618._2_6_ = (undefined6)*(undefined8 *)(local_6f8 + 0xbc);
  uStack_610 = (undefined2)((ulonglong)*(undefined8 *)(local_6f8 + 0xbc) >> 0x30);
  uStack_60e = (undefined6)*(undefined8 *)(local_6f8 + 0xc4);
  uStack_608 = (undefined2)((ulonglong)*(undefined8 *)(local_6f8 + 0xc4) >> 0x30);
  uStack_603 = 0;
  uStack_600 = 0x6ff;
  uStack_5fc = uStack_5fc & 0xffffff00;
  local_638._0_2_ = *(undefined2 *)(lVar64 + 0x84);
  local_698 = (undefined2 *)&local_638;
  local_690 = (undefined2 *)((longlong)&local_638 + 2);
  local_6b0 = lVar64;
  FUN_1475b449a(&local_618,&local_5e8);
  lVar64 = local_6c0;
  local_700 = local_6c0 + 0x28;
  if ((((((short)local_5e8 != -1) && (local_5e8._2_2_ != -1)) && (local_5e8._4_2_ != -1)) &&
      (((local_5e8._6_2_ != -1 && ((short)uStack_5e0 != -1)) &&
       ((uStack_5e0._2_2_ != -1 && ((uStack_5e0._4_2_ != -1 && (uStack_5e0._6_2_ != -1)))))))) &&
     (((short)local_5d8 != -1 && (local_5d8._2_2_ != -1)))) {
    local_658 = (code *)local_5c8;
    local_6e8 = (code *)CONCAT71(local_6e8._1_7_,*(char *)(local_6c0 + 0x298));
    if (*(char *)(local_6c0 + 0x298) == '\0') {
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
      UNLOCK();
    }
    uStack_650 = local_700;
    iVar68 = FUN_1403b8464(&local_658,0);
    local_648 = CONCAT44(local_648._4_4_,iVar68);
    local_6f0 = CONCAT44(local_6f0._4_4_,*(int *)(lVar64 + 0x38));
    if (iVar68 != *(int *)(lVar64 + 0x38)) {
      do {
        puVar97 = *(undefined8 **)(*(longlong *)(uStack_650 + 0x60) + (longlong)iVar68 * 8);
        if ((char)local_6e8 == '\0') {
          *(undefined4 *)((longlong)puVar97 + 0x14) = 0;
          local_7e8 = puVar97;
        }
        else {
          local_7e8 = (undefined8 *)0x0;
        }
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar34 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar34 + 0x1e) == local_5d8._2_2_) goto LAB_1432e8af5;
            puVar34 = puVar34 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar34 = (undefined8 *)0x0;
LAB_1432e8af5:
        local_738 = (undefined8 *)CONCAT44(local_738._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar34 + 1));
        }
        LOCK();
        *(int *)(puVar34 + 3) = *(int *)(puVar34 + 3) + 1;
        UNLOCK();
        local_7f8._0_8_ = puVar34;
        puVar34 = (undefined8 *)*puVar34;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar76 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar76 + 0x1e) == (short)local_5d8) goto LAB_1432e8b44;
            puVar76 = puVar76 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar76 = (undefined8 *)0x0;
LAB_1432e8b44:
        local_758 = (undefined8 *)CONCAT44(local_758._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar76 + 1));
        }
        LOCK();
        *(int *)(puVar76 + 3) = *(int *)(puVar76 + 3) + 1;
        UNLOCK();
        local_7c8 = (undefined8 *)*puVar76;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar77 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar77 + 0x1e) == uStack_5e0._6_2_) goto LAB_1432e8b96;
            puVar77 = puVar77 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar77 = (undefined8 *)0x0;
LAB_1432e8b96:
        local_768 = *(int *)((longlong)puVar97 + 0x14);
        if (local_768 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar77 + 1));
        }
        LOCK();
        *(int *)(puVar77 + 3) = *(int *)(puVar77 + 3) + 1;
        UNLOCK();
        local_718 = (undefined8 *)*puVar77;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar65 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar65 + 0x1e) == uStack_5e0._4_2_) goto LAB_1432e8beb;
            puVar65 = puVar65 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar65 = (undefined8 *)0x0;
LAB_1432e8beb:
        local_778 = (undefined8 *)CONCAT44(local_778._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar65 + 1));
        }
        LOCK();
        *(int *)(puVar65 + 3) = *(int *)(puVar65 + 3) + 1;
        UNLOCK();
        puVar56 = (undefined8 *)*puVar65;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar47 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar47 + 0x1e) == uStack_5e0._2_2_) goto LAB_1432e8c3c;
            puVar47 = puVar47 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar47 = (undefined8 *)0x0;
LAB_1432e8c3c:
        local_788 = (undefined8 *)CONCAT44(local_788._4_4_,*(int *)((longlong)puVar97 + 0x14));
        local_748 = puVar76;
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar47 + 1));
        }
        LOCK();
        *(int *)(puVar47 + 3) = *(int *)(puVar47 + 3) + 1;
        UNLOCK();
        local_808._0_8_ = *puVar47;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar76 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar76 + 0x1e) == (short)uStack_5e0) goto LAB_1432e8c95;
            puVar76 = puVar76 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar76 = (undefined8 *)0x0;
LAB_1432e8c95:
        local_798 = *(int *)((longlong)puVar97 + 0x14);
        local_7b8 = puVar34;
        if (local_798 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar76 + 1));
        }
        LOCK();
        *(int *)(puVar76 + 3) = *(int *)(puVar76 + 3) + 1;
        UNLOCK();
        local_818._0_8_ = *puVar76;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar34 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar34 + 0x1e) == local_5e8._6_2_) goto LAB_1432e8ce5;
            puVar34 = puVar34 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar34 = (undefined8 *)0x0;
LAB_1432e8ce5:
        local_7a8 = (undefined8 *)CONCAT44(local_7a8._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar34 + 1));
        }
        LOCK();
        *(int *)(puVar34 + 3) = *(int *)(puVar34 + 3) + 1;
        UNLOCK();
        local_868._0_8_ = *puVar34;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar49 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar49 + 0x1e) == local_5e8._4_2_) goto LAB_1432e8d39;
            puVar49 = puVar49 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar49 = (undefined8 *)0x0;
LAB_1432e8d39:
        local_6d8 = (undefined8 *)CONCAT44(local_6d8._4_4_,*(int *)((longlong)puVar97 + 0x14));
        local_728 = puVar56;
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar49 + 1));
        }
        LOCK();
        *(int *)(puVar49 + 3) = *(int *)(puVar49 + 3) + 1;
        UNLOCK();
        local_858._0_8_ = *puVar49;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar56 = (undefined8 *)puVar97[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar56 + 0x1e) == local_5e8._2_2_) goto LAB_1432e8d91;
            puVar56 = puVar56 + 4;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        puVar56 = (undefined8 *)0x0;
LAB_1432e8d91:
        local_6e0 = (code *)CONCAT44(local_6e0._4_4_,*(int *)((longlong)puVar97 + 0x14));
        local_848 = puVar97;
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar56 + 1));
        }
        LOCK();
        *(int *)(puVar56 + 3) = *(int *)(puVar56 + 3) + 1;
        UNLOCK();
        local_7d8._0_8_ = *puVar56;
        if (*(ushort *)((longlong)local_848 + 0xc) != 0) {
          pcVar50 = (code *)local_848[5];
          lVar64 = (ulonglong)*(ushort *)((longlong)local_848 + 0xc) << 5;
          do {
            if (*(short *)(pcVar50 + 0x1e) == (short)local_5e8) goto LAB_1432e8df2;
            pcVar50 = pcVar50 + 0x20;
            lVar64 = lVar64 + -0x20;
          } while (lVar64 != 0);
        }
        pcVar50 = (code *)0x0;
LAB_1432e8df2:
        iVar68 = *(int *)((longlong)local_848 + 0x14);
        if (*(int *)((longlong)local_848 + 0x14) == 1) {
          local_828._0_4_ = 1;
          AcquireSRWLockShared((PSRWLOCK)(pcVar50 + 8));
          iVar68 = local_828._0_4_;
        }
        puVar29 = local_718;
        puVar28 = local_728;
        puVar27 = local_7b8;
        puVar97 = local_7c8;
        LOCK();
        *(uint *)(pcVar50 + 0x18) = *(uint *)(pcVar50 + 0x18) + 1;
        UNLOCK();
        local_478 = pcVar50;
        pdStack_470 = (double *)CONCAT44(pdStack_470._4_4_,iVar68);
        local_828._0_8_ = *(undefined8 **)pcVar50;
        local_468[0] = *(undefined8 **)pcVar50;
        local_468[1] = puVar56;
        local_458 = (double)CONCAT44(local_458._4_4_,local_6e0._0_4_);
        local_450 = (double)local_7d8._0_8_;
        local_448 = puVar49;
        local_440 = local_6d8._0_4_;
        local_438 = (double)local_858._0_8_;
        local_430 = puVar34;
        local_428 = (double)CONCAT44(local_428._4_4_,local_7a8._0_4_);
        local_420 = local_868._0_8_;
        local_418 = puVar76;
        iStack_410 = local_798;
        local_408 = (double)local_818._0_8_;
        local_400 = puVar47;
        local_3f8 = local_788._0_4_;
        local_3f0 = local_808._0_8_;
        local_3e8 = puVar65;
        local_3e0 = local_778._0_4_;
        local_3d8 = local_728;
        local_3d0 = puVar77;
        local_3c8 = local_768;
        local_3c0 = local_718;
        local_3b8 = local_748;
        local_3b0 = local_758._0_4_;
        local_3a8 = local_7c8;
        local_3a0 = local_7f8._0_8_;
        local_398 = local_738._0_4_;
        local_390 = local_7b8;
        uVar6 = *(ushort *)((longlong)local_848 + 0xe);
        if (uVar6 != 0) {
          lVar64 = 0;
          do {
            lVar58 = *(longlong *)(local_828._0_8_ + lVar64);
            pdVar33 = local_160;
            if (local_160 == (double *)0x0) {
              pdVar33 = &dStack_170;
            }
            uVar62 = (uint)lVar58;
            uVar67 = uVar62 + 0x1f;
            if (-1 < (int)uVar62) {
              uVar67 = uVar62;
            }
            if ((*(uint *)((longlong)pdVar33 + (longlong)((int)uVar67 >> 5) * 4) >> (uVar62 & 0x1f)
                & 1) != 0) {
              auVar99._8_8_ = *(double *)((longlong)puVar28 + lVar64);
              auVar99._0_8_ = *(double *)(local_808._0_8_ + lVar64);
              auVar80 = divpd(auVar99,_DAT_1499387d0);
              auVar98._8_8_ = 0;
              auVar98._0_8_ = *(double *)(local_818._0_8_ + lVar64);
              auVar99 = divpd(auVar98,_DAT_1499387d0);
              auVar80 = roundpd(auVar80,auVar80,3);
              auVar99 = roundpd(auVar99,auVar99,3);
              dVar146 = (*(double *)(local_808._0_8_ + lVar64) -
                        auVar80._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar152 = (*(double *)((longlong)puVar28 + lVar64) -
                        auVar80._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar141 = (*(double *)(local_818._0_8_ + lVar64) -
                        auVar99._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar145 = (0.0 - auVar99._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              uVar165 = *(undefined4 *)(local_7d8._0_8_ + lVar64);
              uVar172 = ((undefined4 *)(local_7d8._0_8_ + lVar64))[1];
              uVar4 = *(undefined8 *)(local_858._0_8_ + lVar64);
              local_848 = *(undefined8 **)(local_868._0_8_ + lVar64);
              dStack_840 = 0.0;
              uVar167 = *(undefined4 *)((longlong)puVar29 + lVar64);
              uVar169 = ((undefined4 *)((longlong)puVar29 + lVar64))[1];
              uVar5 = *(undefined8 *)((longlong)puVar97 + lVar64);
              local_7f8._8_8_ = 0;
              local_7f8._0_8_ = *(ulonglong *)((longlong)puVar27 + lVar64);
              dVar73 = sin(dVar146);
              dVar74 = sin(dVar152);
              dVar75 = sin(dVar141);
              sin(dVar145);
              dVar146 = cos(dVar146);
              dVar152 = cos(dVar152);
              dVar141 = cos(dVar141);
              cos(dVar145);
              lVar44 = *(longlong *)(*local_178 + (longlong)(int)uVar62 * 0x10);
              lVar58 = (lVar58 >> 0x20) * 0x60;
              *(double *)(lVar44 + lVar58) = dVar73 * dVar74 * dVar141 - dVar146 * dVar152 * dVar75;
              ((double *)(lVar44 + lVar58))[1] =
                   -(dVar73 * dVar152 * dVar141) - dVar146 * dVar74 * dVar75;
              pdVar33 = (double *)(lVar44 + 0x10 + lVar58);
              *pdVar33 = -(dVar152 * dVar73 * dVar75) + dVar74 * dVar146 * dVar141;
              pdVar33[1] = dVar74 * dVar73 * dVar75 + dVar152 * dVar146 * dVar141;
              puVar2 = (undefined4 *)(lVar44 + 0x20 + lVar58);
              *puVar2 = uVar165;
              puVar2[1] = uVar172;
              puVar2[2] = (int)uVar4;
              puVar2[3] = (int)((ulonglong)uVar4 >> 0x20);
              plVar43 = (longlong *)(lVar44 + 0x30 + lVar58);
              *plVar43 = (longlong)local_848;
              plVar43[1] = (longlong)dStack_840;
              puVar2 = (undefined4 *)(lVar44 + 0x40 + lVar58);
              *puVar2 = uVar167;
              puVar2[1] = uVar169;
              puVar2[2] = (int)uVar5;
              puVar2[3] = (int)((ulonglong)uVar5 >> 0x20);
              puVar34 = (undefined8 *)(lVar44 + 0x50 + lVar58);
              *puVar34 = local_7f8._0_8_;
              puVar34[1] = local_7f8._8_8_;
            }
            lVar64 = lVar64 + 8;
          } while ((ulonglong)uVar6 * 8 != lVar64);
        }
        FUN_1475b47f4(&local_478);
        if (local_7e8 != (undefined8 *)0x0) {
          *(undefined4 *)((longlong)local_7e8 + 0x14) = 1;
        }
        iVar68 = FUN_1403b8464(&local_658,(int)local_648 + 1);
        local_648 = CONCAT44(local_648._4_4_,iVar68);
      } while (iVar68 != (int)local_6f0);
    }
    if (local_658 != (code *)0x0) {
      if (*(char *)(uStack_650 + 0x270) == '\0') {
        *(int *)(uStack_650 + 0x264) = *(int *)(uStack_650 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(uStack_650 + 0x264) = *(int *)(uStack_650 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_578 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_160 != (double *)0x0) {
    FUN_1400020a8();
  }
  lVar58 = local_6f8 + 0xbc;
  local_5f8 = 0x10000000000;
  lVar64 = 0;
  iVar68 = 0;
  do {
    uVar6 = *(ushort *)(lVar58 + lVar64 * 2);
    iVar40 = uVar6 + 1;
    iVar39 = iVar40 - iVar68;
    if (iVar39 != 0 && iVar68 <= iVar40) {
      if (iVar68 == 0) {
LAB_1432e92db:
        if (local_5f8._4_4_ <= (int)(uint)uVar6) {
          local_5f8 = CONCAT44(0x100,(int)local_5f8);
          FUN_14497ddce(&local_618,iVar68);
          iVar40 = (int)local_5f8 + iVar39;
        }
        iVar37 = iVar40 + 0x1f;
        if (-1 < iVar40) {
          iVar37 = iVar40;
        }
        local_5f8 = CONCAT44(local_5f8._4_4_,iVar40);
        if (iVar40 % 0x20 != 0) {
          bVar36 = -(char)(iVar40 % 0x20);
          *(uint *)((longlong)&local_618 + (longlong)(iVar37 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_618 + (longlong)(iVar37 >> 5) * 4) <<
                     (bVar36 & 0x1f)) >> (bVar36 & 0x1f);
        }
      }
      else {
        iVar37 = iVar68 + 0x1e;
        if (-1 < iVar68 + -1) {
          iVar37 = iVar68 + -1;
        }
        if (iVar37 >> 5 != (uint)(uVar6 >> 5)) goto LAB_1432e92db;
        local_5f8 = CONCAT44(local_5f8._4_4_,iVar40);
      }
      FUN_1447c45ca(&local_618,iVar68,iVar39,0);
    }
    puVar32 = (uint *)((longlong)&local_618 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar32 = *puVar32 | 1 << ((byte)uVar6 & 0x1f);
    if (lVar64 == 8) goto LAB_1432e9380;
    lVar64 = lVar64 + 1;
    iVar68 = (int)local_5f8;
  } while( true );
LAB_1432e9e26:
  iVar40 = *(int *)pcVar57;
  *(int *)pcVar57 = *(int *)pcVar61;
  *(int *)pcVar61 = iVar40;
  iVar68 = iVar68 + -1;
  pcVar59 = pcVar59 + -8;
  if ((longlong)pcVar66 - (longlong)pcVar48 < (longlong)pcVar54 - (longlong)pcVar69) {
    if (pcVar45 < pcVar50) {
      *ppcVar42 = pcVar45;
      ppcVar42[1] = pcVar50;
      *(int *)(ppcVar42 + 2) = iVar68;
      ppcVar42 = ppcVar42 + 3;
    }
    pcVar45 = pcVar57;
    pcVar54 = pcVar66;
    if (pcVar61 <= pcVar57 + 4) goto LAB_1432ea06d;
  }
  else {
    if (pcVar57 + 4 < pcVar61) {
      *ppcVar42 = pcVar57;
      ppcVar42[1] = pcVar59;
      *(int *)(ppcVar42 + 2) = iVar68;
      ppcVar42 = ppcVar42 + 3;
    }
    pcVar57 = pcVar69;
    pcVar59 = pcVar50;
    pcVar54 = pcVar50;
    if (pcVar50 <= pcVar45) goto LAB_1432ea06d;
  }
  iVar40 = (int)((ulonglong)((longlong)pcVar54 - (longlong)pcVar57) >> 2);
  uVar71 = (ulonglong)(iVar40 + 1);
  pcVar48 = pcVar57;
  pcVar57 = pcVar45;
  pcVar50 = pcVar59;
  if (iVar68 == 0) goto LAB_1432e9eb9;
  goto LAB_1432e9d90;
LAB_1432ea250:
  lVar58 = (longlong)(int)uVar67 * 0x60;
  pdVar33 = (double *)(local_4f8[0] + lVar58);
  local_868 = *(undefined1 (*) [16])(local_4f8[0] + 0x40 + lVar58);
  dVar146 = local_868._0_8_;
  local_858 = *(undefined1 (*) [16])(local_4f8[0] + 0x50 + lVar58);
  dVar152 = local_858._0_8_;
  auVar16._8_4_ = SUB84(dVar75,0);
  auVar16._0_8_ = dVar74;
  auVar16._12_4_ = uVar172;
  auVar80 = minpd(local_868,auVar16);
  auVar9._8_4_ = SUB84(dVar73,0);
  auVar9._0_8_ = puVar97;
  auVar9._12_4_ = uVar165;
  auVar99 = minpd(local_858,auVar9);
  auVar81._8_8_ = -(ulonglong)(auVar80._8_8_ < 0.0);
  auVar81._0_8_ = -(ulonglong)(auVar80._0_8_ < 0.0);
  iVar68 = movmskpd((int)local_4f8[0],auVar81);
  auVar101._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
  auVar101._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
  uVar38 = movmskpd((int)lVar58,auVar101);
  if ((uVar38 & 0x3fffffff) == 0 && iVar68 == 0) {
    dVar145 = *pdVar33;
    dVar110 = pdVar33[1];
    dVar147 = pdVar33[2];
    dVar124 = pdVar33[3];
    dVar139 = pdVar33[4] * dVar74;
    dVar75 = pdVar33[5] * dVar75;
    dVar140 = pdVar33[6] * (double)puVar97;
    dVar163 = pdVar33[7] * (double)local_7f8._8_8_;
    dVar73 = dVar75 * (double)local_818._0_8_ - (double)local_818._8_8_ * dVar139;
    dVar133 = dVar140 * (double)local_818._8_8_ - (double)local_808._0_8_ * dVar75;
    local_7e8 = (undefined8 *)local_818._0_8_;
    puStack_7e0 = (undefined8 *)local_808._8_8_;
    dVar148 = dVar139 * (double)local_808._0_8_ - (double)local_818._0_8_ * dVar140;
    dVar141 = dVar163 * (double)local_808._8_8_ - (double)local_808._8_8_ * dVar163;
    dVar133 = dVar133 + dVar133;
    dVar148 = dVar148 + dVar148;
    dVar73 = dVar73 + dVar73;
    dVar141 = dVar141 + dVar141;
    dVar138 = dVar147 * (double)local_818._8_8_;
    auVar115._0_8_ =
         dVar124 * (double)local_808._0_8_ * 1.0 +
         (((double)local_818._0_8_ * dVar110 * 1.0 + (double)local_808._8_8_ * dVar147) -
         (double)local_818._8_8_ * dVar145);
    auVar115._8_8_ =
         dVar147 * (double)local_808._0_8_ * -1.0 +
         (((double)local_818._0_8_ * dVar145 * -1.0 + (double)local_808._8_8_ * dVar124) -
         (double)local_818._8_8_ * dVar110);
    local_848 = (undefined8 *)
                ((double)local_848 +
                (dVar73 * (double)local_818._8_8_ - (double)local_808._0_8_ * dVar148) +
                (double)local_808._8_8_ * dVar133 + dVar139);
    dStack_840 = dStack_840 +
                 (dVar133 * (double)local_808._0_8_ - dVar73 * (double)local_818._0_8_) +
                 (double)local_808._8_8_ * dVar148 + dVar75;
    local_828._0_8_ =
         (double)local_828._0_8_ +
         (dVar148 * (double)local_818._0_8_ - (double)local_818._8_8_ * dVar133) +
         (double)local_808._8_8_ * dVar73 + dVar140;
    local_828._8_8_ =
         (double)local_828._8_8_ +
         (dVar141 * (double)local_808._8_8_ - dVar141 * (double)local_808._8_8_) +
         (double)local_808._8_8_ * dVar141 + dVar163;
    puVar97 = (undefined8 *)((double)puVar97 * dVar152);
    dVar73 = (double)local_7f8._8_8_ * local_858._8_8_;
    local_818._8_8_ =
         dVar145 * (double)local_808._0_8_ * 1.0 +
         dVar124 * (double)local_818._8_8_ +
         (double)local_818._0_8_ * dVar147 * -1.0 + (double)local_808._8_8_ * dVar110;
    local_818._0_8_ =
         dVar110 * (double)local_808._0_8_ * -1.0 +
         dVar138 + (double)local_818._0_8_ * dVar124 * 1.0 + (double)local_808._8_8_ * dVar145;
    dVar74 = dVar74 * dVar146;
    dVar75 = (double)local_7d8._8_8_ * local_868._8_8_;
    local_808 = auVar115;
  }
  else {
    local_858._8_8_ = local_858._8_8_ * dVar73;
    local_858._0_8_ = dVar152 * (double)puVar97;
    dVar73 = (double)local_818._8_8_ + (double)local_818._8_8_;
    dVar141 = (double)local_808._0_8_ + (double)local_808._0_8_;
    dVar152 = (double)local_818._0_8_ * ((double)local_818._0_8_ + (double)local_818._0_8_);
    local_598 = (undefined8 *)
                ((1.0 - (dVar152 + (double)local_818._8_8_ * dVar73)) * (double)puVar97);
    dVar145 = ((double)local_818._0_8_ + (double)local_818._0_8_) * (double)local_808._8_8_;
    local_5a8 = (undefined8 *)
                ((dVar73 * (double)local_808._8_8_ + (double)local_818._0_8_ * dVar141) *
                (double)puVar97);
    puStack_5a0 = (undefined8 *)((dVar141 * (double)local_818._8_8_ - dVar145) * (double)puVar97);
    local_868._8_8_ = local_868._8_8_ * dVar75;
    local_868._0_8_ = dVar146 * dVar74;
    local_5e8 = (undefined8 *)
                ((1.0 - ((double)local_808._0_8_ * dVar141 + (double)local_818._8_8_ * dVar73)) *
                dVar74);
    uStack_5e0 = (undefined8 *)
                 ((dVar73 * (double)local_818._0_8_ + dVar141 * (double)local_808._8_8_) * dVar74);
    local_5b8 = (undefined8 *)((dVar141 * (double)local_818._8_8_ + dVar145) * dVar75);
    local_5d8 = (undefined8 *)
                (((double)local_818._0_8_ * dVar141 - dVar73 * (double)local_808._8_8_) * dVar74);
    puStack_5d0 = (undefined8 *)0x0;
    local_5c8._8_8_ = (1.0 - ((double)local_808._0_8_ * dVar141 + dVar152)) * dVar75;
    local_5c8._0_8_ =
         (dVar73 * (double)local_818._0_8_ - dVar141 * (double)local_808._8_8_) * dVar75;
    puStack_5b0 = (undefined8 *)0x0;
    puStack_590 = (undefined8 *)0x0;
    local_588 = local_848;
    dStack_580 = dStack_840;
    local_578 = (undefined8 *)local_828._0_8_;
    puStack_570 = (undefined8 *)&DAT_3ff0000000000000;
    dVar74 = *pdVar33;
    dVar75 = pdVar33[1];
    dVar73 = pdVar33[2];
    dStack_168 = pdVar33[8];
    dStack_158 = pdVar33[9];
    dStack_130 = pdVar33[10];
    dVar145 = dVar75 + dVar75;
    dVar146 = dVar73 + dVar73;
    dVar152 = dVar74 * (dVar74 + dVar74);
    local_178 = (longlong *)((1.0 - (dVar73 * dVar146 + dVar75 * dVar145)) * dStack_168);
    dStack_150 = (1.0 - (dVar73 * dVar146 + dVar152)) * dStack_158;
    local_128 = (1.0 - (dVar152 + dVar75 * dVar145)) * dStack_130;
    dVar73 = pdVar33[3];
    dVar152 = dVar146 * dVar73;
    dVar141 = (dVar74 + dVar74) * pdVar33[3];
    dVar73 = dVar145 * dVar73;
    dStack_170 = (dVar145 * dVar74 + dVar152) * dStack_168;
    local_148 = (dVar146 * dVar75 + dVar141) * dStack_158;
    local_138 = (dVar73 + *pdVar33 * dVar146) * dStack_130;
    dStack_168 = (*pdVar33 * dVar146 - dVar73) * dStack_168;
    dStack_158 = (dVar145 * dVar74 - dVar152) * dStack_158;
    dStack_130 = (dVar146 * dVar75 - dVar141) * dStack_130;
    local_160 = (double *)0x0;
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = (undefined8 *)pdVar33[4];
    dStack_110 = pdVar33[5];
    local_108 = pdVar33[6];
    uStack_100 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_478,&local_178,&local_5e8);
    auVar80 = _DAT_149934d80;
    local_848 = local_468[0];
    dVar74 = (double)local_468[0] * (double)local_468[0] +
             (double)local_478 * (double)local_478 + (double)pdStack_470 * (double)pdStack_470;
    dVar75 = (double)local_448 * (double)local_448 + local_458 * local_458 + local_450 * local_450;
    dVar73 = local_428 * local_428 + local_438 * local_438 + (double)local_430 * (double)local_430;
    uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
    dVar74 = (double)(~uVar71 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
    uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
    dVar75 = (double)(~uVar71 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
    uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
    dVar146 = (double)(~uVar71 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
    auVar82._8_8_ = -(ulonglong)(0.0 <= (double)local_868._8_8_);
    auVar82._0_8_ = -(ulonglong)(0.0 <= (double)local_868._0_8_);
    auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar82);
    puVar97 = (undefined8 *)local_858._0_8_;
    dVar73 = (double)local_858._8_8_;
    dVar152 = (double)(~-(ulonglong)(0.0 <= (double)local_858._0_8_) & 0xbff0000000000000 |
                      -(ulonglong)(0.0 <= (double)local_858._0_8_) & 0x3ff0000000000000);
    dVar141 = auVar99._0_8_;
    local_478 = (code *)((double)local_478 * dVar74 * dVar141);
    pdStack_470 = (double *)((double)pdStack_470 * dVar74 * dVar141);
    local_468[0] = (undefined8 *)(dVar74 * (double)local_468[0] * dVar141);
    dVar74 = auVar99._8_8_;
    local_448 = (undefined8 *)(dVar75 * (double)local_448 * dVar74);
    local_450 = local_450 * dVar75 * dVar74;
    local_458 = dVar74 * local_458 * dVar75;
    local_428 = dVar146 * local_428 * dVar152;
    local_430 = (undefined8 *)((double)local_430 * dVar146 * dVar152);
    local_438 = dVar152 * local_438 * dVar146;
    FUN_14481fd10(&local_618,&local_478);
    dVar74 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
    dVar75 = (double)CONCAT62(uStack_60e,uStack_610);
    dVar146 = (double)CONCAT26(uStack_602,
                               CONCAT15(uStack_603,
                                        CONCAT14(uStack_604,CONCAT22(uStack_606,uStack_608))));
    dVar152 = (double)CONCAT44(uStack_5fc,uStack_600);
    dVar141 = dVar146 * dVar146 + dVar74 * dVar74;
    dVar145 = dVar152 * dVar152 + dVar75 * dVar75;
    auVar116._0_8_ = dVar141 + dVar145;
    auVar116._8_8_ = dVar141 + dVar145;
    auVar83._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar116._8_8_);
    auVar83._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar116._0_8_);
    auVar99 = sqrtpd(auVar116,auVar116);
    auVar80 = divpd(auVar80,auVar99);
    auVar126._0_8_ = auVar80._0_8_ * dVar146;
    auVar126._8_8_ = auVar80._8_8_ * dVar152;
    local_808 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar126,auVar83);
    dStack_840 = (double)CONCAT44(uStack_40c,iStack_410);
    local_848 = local_418;
    local_818._0_8_ =
         (ulonglong)(dVar74 * auVar80._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar116._0_8_);
    local_818._8_8_ =
         (ulonglong)(dVar75 * auVar80._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar116._8_8_);
    local_828._8_8_ = 0;
    local_828._0_8_ = local_408;
    dVar74 = (double)local_868._0_8_;
    dVar75 = (double)local_868._8_8_;
  }
  ppcVar42 = &local_478;
  FUN_1475b45d2(lVar64,&local_478,uVar67);
  uVar67 = (uint)local_478;
  if ((uint)local_478 == 0xffffffff) goto code_r0x0001432eaac0;
  goto LAB_1432ea201;
code_r0x0001432eaac0:
  local_638._0_2_ = 0xffff;
  local_638._2_2_ = 0xffff;
LAB_1432ea163:
  uVar172 = (undefined4)((ulonglong)dVar75 >> 0x20);
  uVar165 = (undefined4)((ulonglong)dVar73 >> 0x20);
  iVar68 = local_798;
  uVar167 = uStack_794;
  iVar40 = local_768;
  uVar169 = uStack_764;
  if ((-1 < (int)uVar62) && ((int)uVar62 < local_490)) {
    puVar35 = local_498;
    if (local_498 == (undefined1 *)0x0) {
      puVar35 = local_4a8;
    }
    puVar34 = (undefined8 *)(ulonglong)(uVar62 >> 5);
    if ((*(uint *)(puVar35 + (longlong)puVar34 * 4) >> (uVar62 & 0x1f) & 1) != 0) {
      if (0 < *(int *)(local_830 + 0x88)) {
        plVar55 = (longlong *)((ulonglong)uVar62 * 0x10 + local_4b8[0]);
        dVar146 = (double)local_818._8_8_ + (double)local_818._8_8_;
        dVar152 = (double)local_808._0_8_ + (double)local_808._0_8_;
        dVar141 = (double)local_818._0_8_ * ((double)local_818._0_8_ + (double)local_818._0_8_);
        local_738 = (undefined8 *)
                    ((1.0 - ((double)local_808._0_8_ * dVar152 + (double)local_818._8_8_ * dVar146))
                    * dVar74);
        puStack_7e0 = (undefined8 *)((1.0 - ((double)local_808._0_8_ * dVar152 + dVar141)) * dVar75)
        ;
        local_718 = (undefined8 *)
                    ((1.0 - (dVar141 + (double)local_818._8_8_ * dVar146)) * (double)puVar97);
        local_758 = (undefined8 *)local_818._0_8_;
        puStack_750 = (undefined8 *)local_818._0_8_;
        dVar141 = ((double)local_818._0_8_ + (double)local_818._0_8_) * (double)local_808._8_8_;
        local_768 = local_808._8_4_;
        uStack_764 = local_808._12_4_;
        puStack_760 = (undefined8 *)local_808._8_8_;
        puStack_730 = (undefined8 *)
                      ((dVar146 * (double)local_818._0_8_ + dVar152 * (double)local_808._8_8_) *
                      dVar74);
        local_7c8 = (undefined8 *)((dVar152 * (double)local_818._8_8_ + dVar141) * dVar75);
        local_7b8 = (undefined8 *)
                    (((double)local_818._0_8_ * dVar152 + dVar146 * (double)local_808._8_8_) *
                    (double)puVar97);
        local_7e8 = (undefined8 *)
                    ((dVar146 * (double)local_818._0_8_ - dVar152 * (double)local_808._8_8_) *
                    dVar75);
        puStack_7b0 = (undefined8 *)
                      ((dVar152 * (double)local_818._8_8_ - dVar141) * (double)puVar97);
        local_728 = (undefined8 *)
                    (((double)local_818._0_8_ * dVar152 - dVar146 * (double)local_808._8_8_) *
                    dVar74);
        puStack_710 = (undefined8 *)0x0;
        puStack_720 = (undefined8 *)0x0;
        puStack_7c0 = (undefined8 *)0x0;
        local_748 = (undefined8 *)local_828._0_8_;
        puStack_740 = (undefined8 *)&DAT_3ff0000000000000;
        local_778 = (undefined8 *)local_818._8_8_;
        puStack_770 = (undefined8 *)local_818._8_8_;
        local_788 = (undefined8 *)local_808._0_8_;
        puStack_780 = (undefined8 *)local_808._0_8_;
        local_798 = local_818._0_4_;
        uStack_794 = local_818._4_4_;
        puStack_790 = (undefined8 *)local_808._8_8_;
        local_7a8 = (undefined8 *)local_818._8_8_;
        puStack_7a0 = (undefined8 *)local_808._0_8_;
        lVar64 = 0x50;
        lVar58 = 0;
        local_7f8._8_4_ = SUB84(dVar73,0);
        local_7f8._0_8_ = puVar97;
        local_7f8._12_4_ = uVar165;
        local_7d8._8_4_ = SUB84(dVar75,0);
        local_7d8._0_8_ = dVar74;
        local_7d8._12_4_ = uVar172;
        do {
          lVar44 = *plVar55;
          local_868 = *(undefined1 (*) [16])(lVar44 + -0x10 + lVar64);
          dVar146 = local_868._0_8_;
          auVar80 = *(undefined1 (*) [16])(lVar44 + lVar64);
          auVar15._8_4_ = SUB84(dVar75,0);
          auVar15._0_8_ = dVar74;
          auVar15._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
          auVar99 = minpd(local_868,auVar15);
          auVar8._8_4_ = SUB84(dVar73,0);
          auVar8._0_8_ = puVar97;
          auVar8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          auVar107 = minpd(auVar80,auVar8);
          auVar94._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
          auVar94._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
          uVar62 = movmskpd((int)puVar34,auVar94);
          puVar34 = (undefined8 *)(ulonglong)uVar62;
          auVar108._8_8_ = -(ulonglong)(auVar107._8_8_ < 0.0);
          auVar108._0_8_ = -(ulonglong)(auVar107._0_8_ < 0.0);
          uVar67 = movmskpd((int)ppcVar42,auVar108);
          if ((uVar67 & 0x3fffffff) == 0 && uVar62 == 0) {
            pdVar33 = (double *)(lVar44 + -0x50 + lVar64);
            dVar152 = *pdVar33;
            dVar141 = pdVar33[1];
            pdVar33 = (double *)(lVar44 + -0x40 + lVar64);
            dVar145 = *pdVar33;
            dVar110 = pdVar33[1];
            dVar147 = (double)CONCAT44(uStack_764,local_768);
            dVar124 = dVar141 * (double)local_788 * -1.0 +
                      (double)local_758 * dVar110 * 1.0 + dVar147 * dVar152 +
                      (double)local_778 * dVar145;
            dVar138 = dVar152 * (double)puStack_780 * 1.0 +
                      (double)puStack_750 * dVar145 * -1.0 + (double)puStack_760 * dVar141 +
                      (double)puStack_770 * dVar110;
            auVar123._0_8_ =
                 dVar110 * (double)local_788 * 1.0 +
                 (((double)local_758 * dVar141 * 1.0 + dVar147 * dVar145) -
                 (double)local_778 * dVar152);
            auVar123._8_8_ =
                 dVar145 * (double)puStack_780 * -1.0 +
                 (((double)puStack_750 * dVar152 * -1.0 + (double)puStack_760 * dVar110) -
                 (double)puStack_770 * dVar141);
            pdVar33 = (double *)(lVar44 + -0x30 + lVar64);
            dVar141 = *pdVar33 * dVar74;
            dVar148 = pdVar33[1] * dVar75;
            pdVar33 = (double *)(lVar44 + -0x20 + lVar64);
            dVar133 = *pdVar33 * (double)puVar97;
            dVar139 = pdVar33[1] * dVar73;
            dVar152 = dVar148 * (double)local_818._0_8_ - (double)local_7a8 * dVar141;
            dVar145 = dVar133 * (double)local_818._8_8_ - (double)puStack_7a0 * dVar148;
            dVar110 = dVar141 * (double)local_808._0_8_ -
                      (double)CONCAT44(uStack_794,local_798) * dVar133;
            dVar140 = dVar139 * (double)local_808._8_8_ - (double)puStack_790 * dVar139;
            dVar145 = dVar145 + dVar145;
            dVar110 = dVar110 + dVar110;
            dVar152 = dVar152 + dVar152;
            dVar140 = dVar140 + dVar140;
            puVar77 = (undefined8 *)
                      ((dVar152 * (double)local_818._8_8_ - (double)puStack_7a0 * dVar110) +
                       dVar147 * dVar145 + dVar141 + (double)local_848);
            dVar141 = (dVar145 * (double)local_808._0_8_ -
                      dVar152 * (double)CONCAT44(uStack_794,local_798)) +
                      (double)puStack_760 * dVar110 + dVar148 + dStack_840;
            auVar132._0_8_ =
                 (dVar110 * (double)local_818._0_8_ - (double)local_7a8 * dVar145) +
                 dVar147 * dVar152 + dVar133 + (double)local_828._0_8_;
            auVar132._8_8_ =
                 (dVar140 * (double)local_808._8_8_ - dVar140 * (double)puStack_790) +
                 (double)puStack_760 * dVar140 + dVar139 + (double)local_828._8_8_;
            dVar146 = dVar146 * dVar74;
            dVar145 = local_868._8_8_ * dVar75;
            ppcVar42 = (code **)0x0;
            puVar76 = puVar97;
            dVar152 = dVar73;
            local_858 = auVar80;
          }
          else {
            local_5e8 = local_738;
            uStack_5e0 = puStack_730;
            local_5d8 = local_728;
            puStack_5d0 = puStack_720;
            local_5c8._8_8_ = puStack_7e0;
            local_5c8._0_8_ = local_7e8;
            local_5b8 = local_7c8;
            puStack_5b0 = puStack_7c0;
            local_5a8 = local_7b8;
            puStack_5a0 = puStack_7b0;
            local_598 = local_718;
            puStack_590 = puStack_710;
            local_588 = local_848;
            dStack_580 = dStack_840;
            local_578 = local_748;
            puStack_570 = puStack_740;
            pdVar33 = (double *)(lVar44 + -0x50 + lVar64);
            dVar141 = *pdVar33;
            dVar145 = pdVar33[1];
            dVar152 = *(double *)(lVar44 + -0x40 + lVar64);
            pdVar33 = (double *)(lVar44 + -0x10 + lVar64);
            dStack_168 = *pdVar33;
            dStack_158 = pdVar33[1];
            dStack_130 = *(double *)(lVar44 + lVar64);
            dVar138 = dVar145 + dVar145;
            dVar110 = dVar152 + dVar152;
            dVar147 = dVar141 * (dVar141 + dVar141);
            local_178 = (longlong *)((1.0 - (dVar152 * dVar110 + dVar145 * dVar138)) * dStack_168);
            dStack_150 = (1.0 - (dVar152 * dVar110 + dVar147)) * dStack_158;
            local_128 = (1.0 - (dVar147 + dVar145 * dVar138)) * dStack_130;
            dVar148 = *(double *)(lVar44 + -0x50 + lVar64) * dVar110;
            pdVar33 = (double *)(lVar44 + -0x38 + lVar64);
            dVar152 = *pdVar33;
            dVar147 = dVar110 * dVar152;
            dVar124 = (dVar141 + dVar141) * *pdVar33;
            dVar152 = dVar138 * dVar152;
            dStack_170 = (dVar138 * dVar141 + dVar147) * dStack_168;
            local_148 = (dVar110 * dVar145 + dVar124) * dStack_158;
            local_138 = (dVar152 + dVar148) * dStack_130;
            dStack_168 = (dVar148 - dVar152) * dStack_168;
            dStack_158 = (dVar138 * dVar141 - dVar147) * dStack_158;
            dStack_130 = (dVar110 * dVar145 - dVar124) * dStack_130;
            local_160 = (double *)0x0;
            uStack_140 = 0;
            uStack_120 = 0;
            pdVar33 = (double *)(lVar44 + -0x30 + lVar64);
            local_118 = (undefined8 *)*pdVar33;
            dStack_110 = pdVar33[1];
            local_108 = *(double *)(lVar44 + -0x20 + lVar64);
            uStack_100 = 0x3ff0000000000000;
            local_868._8_8_ = local_868._8_8_ * dVar75;
            local_868._0_8_ = dVar146 * dVar74;
            FUN_1447fea8d(&local_478,&local_178,&local_5e8);
            local_858._0_8_ = local_468[0];
            dVar74 = (double)local_468[0] * (double)local_468[0] +
                     (double)local_478 * (double)local_478 +
                     (double)pdStack_470 * (double)pdStack_470;
            dVar75 = (double)local_448 * (double)local_448 +
                     local_458 * local_458 + local_450 * local_450;
            dVar146 = local_428 * local_428 +
                      local_438 * local_438 + (double)local_430 * (double)local_430;
            uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
            dVar141 = (double)(~uVar71 & 0x3ff0000000000000 |
                              (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
            uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
            dVar110 = (double)(~uVar71 & 0x3ff0000000000000 |
                              (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
            uVar71 = -(ulonglong)(0.0 <= dVar146 + -9.99999993922529e-09);
            dVar74 = (double)local_7d8._0_8_;
            dVar75 = (double)local_7d8._8_8_;
            dVar147 = (double)(~uVar71 & 0x3ff0000000000000 |
                              (ulonglong)(1.0 / SQRT(dVar146)) & uVar71);
            dVar146 = (double)local_868._0_8_;
            dVar145 = (double)local_868._8_8_;
            auVar95._8_8_ = -(ulonglong)(0.0 <= (double)local_868._8_8_);
            auVar95._0_8_ = -(ulonglong)(0.0 <= (double)local_868._0_8_);
            auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar95);
            uVar71 = -(ulonglong)(0.0 <= auVar80._0_8_ * (double)puVar97);
            puVar76 = (undefined8 *)local_7f8._0_8_;
            dVar152 = (double)local_7f8._8_8_;
            dVar124 = (double)(~uVar71 & 0xbff0000000000000 | uVar71 & 0x3ff0000000000000);
            dVar138 = auVar99._0_8_;
            local_478 = (code *)((double)local_478 * dVar141 * dVar138);
            pdStack_470 = (double *)((double)pdStack_470 * dVar141 * dVar138);
            local_468[0] = (undefined8 *)(dVar141 * (double)local_468[0] * dVar138);
            dVar141 = auVar99._8_8_;
            local_448 = (undefined8 *)(dVar110 * (double)local_448 * dVar141);
            local_450 = local_450 * dVar110 * dVar141;
            local_458 = dVar141 * local_458 * dVar110;
            local_428 = dVar147 * local_428 * dVar124;
            local_430 = (undefined8 *)((double)local_430 * dVar147 * dVar124);
            local_438 = dVar124 * local_438 * dVar147;
            puVar34 = &local_618;
            ppcVar42 = &local_478;
            FUN_14481fd10();
            dVar141 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
            dVar110 = (double)CONCAT62(uStack_60e,uStack_610);
            dVar147 = (double)CONCAT26(uStack_602,
                                       CONCAT15(uStack_603,
                                                CONCAT14(uStack_604,CONCAT22(uStack_606,uStack_608))
                                               ));
            dVar124 = (double)CONCAT44(uStack_5fc,uStack_600);
            dVar138 = dVar147 * dVar147 + dVar141 * dVar141;
            dVar148 = dVar124 * dVar124 + dVar110 * dVar110;
            auVar131._0_8_ = dVar138 + dVar148;
            auVar131._8_8_ = dVar138 + dVar148;
            auVar96._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar131._8_8_);
            auVar96._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar131._0_8_);
            auVar99 = sqrtpd(auVar131,auVar131);
            auVar99 = divpd(_DAT_149934d80,auVar99);
            auVar137._0_8_ = auVar99._0_8_ * dVar147;
            auVar137._8_8_ = auVar99._8_8_ * dVar124;
            dVar124 = (double)((ulonglong)(dVar141 * auVar99._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar131._0_8_));
            dVar138 = (double)((ulonglong)(dVar110 * auVar99._8_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar131._8_8_));
            auVar123 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar137,auVar96);
            dVar141 = (double)CONCAT44(uStack_40c,iStack_410);
            auVar132._8_8_ = 0.0;
            auVar132._0_8_ = local_408;
            puVar77 = local_418;
          }
          dVar73 = auVar80._8_8_ * dVar73;
          lVar44 = *plVar43;
          pdVar33 = (double *)(lVar44 + -0x50 + lVar64);
          *pdVar33 = dVar124;
          pdVar33[1] = dVar138;
          *(undefined1 (*) [16])(lVar44 + -0x40 + lVar64) = auVar123;
          plVar51 = (longlong *)(lVar44 + -0x30 + lVar64);
          *plVar51 = (longlong)puVar77;
          plVar51[1] = (longlong)dVar141;
          *(undefined1 (*) [16])(lVar44 + -0x20 + lVar64) = auVar132;
          pdVar33 = (double *)(lVar44 + -0x10 + lVar64);
          *pdVar33 = dVar146;
          pdVar33[1] = dVar145;
          auVar21._8_4_ = SUB84(dVar73,0);
          auVar21._0_8_ = auVar80._0_8_ * (double)puVar97;
          auVar21._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          *(undefined1 (*) [16])(lVar44 + lVar64) = auVar21;
          lVar58 = lVar58 + 1;
          lVar64 = lVar64 + 0x60;
          puVar97 = puVar76;
          dVar73 = dVar152;
          iVar68 = local_798;
          uVar167 = uStack_794;
          iVar40 = local_768;
          uVar169 = uStack_764;
        } while (lVar58 < *(int *)(local_830 + 0x88));
      }
      goto LAB_1432ed6a8;
    }
  }
  if ((longlong)(int)plVar43[1] != 0) {
    puVar34 = (undefined8 *)*plVar43;
    puVar76 = puVar34 + (longlong)(int)plVar43[1] * 0xc;
    do {
      *puVar34 = local_818._0_8_;
      puVar34[1] = local_818._8_8_;
      puVar34[2] = local_808._0_8_;
      puVar34[3] = local_808._8_8_;
      puVar34[4] = local_848;
      puVar34[5] = dStack_840;
      puVar34[6] = local_828._0_8_;
      puVar34[7] = local_828._8_8_;
      auVar14._8_4_ = SUB84(dVar75,0);
      auVar14._0_8_ = dVar74;
      auVar14._12_4_ = uVar172;
      *(undefined1 (*) [16])(puVar34 + 8) = auVar14;
      auVar7._8_4_ = SUB84(dVar73,0);
      auVar7._0_8_ = puVar97;
      auVar7._12_4_ = uVar165;
      *(undefined1 (*) [16])(puVar34 + 10) = auVar7;
      puVar34 = puVar34 + 0xc;
    } while (puVar34 != puVar76);
  }
LAB_1432ed6a8:
  uStack_764 = uVar169;
  local_768 = iVar40;
  uStack_794 = uVar167;
  local_798 = iVar68;
  pcVar50 = local_6e0 + 4;
  if (pcVar50 == local_6e8) goto LAB_1432ed6dd;
  goto LAB_1432ea0d8;
LAB_1432e9380:
  dStack_158 = 5.4323092248711e-312;
  dStack_130 = 5.4323092248711e-312;
  local_128 = 0.0;
  uStack_120 = 0;
  FUN_140dad9c2(&local_178,&local_618,2);
  FUN_140dad9c2(&local_178,&local_618,0x84);
  cVar31 = FUN_14050a5e0(local_700,&local_178);
  if (cVar31 == '\0') goto LAB_1432e9b53;
  local_818._0_8_ = lVar58;
  local_6a8[0] = *(undefined2 *)(local_6f8 + 0x13e);
  local_6a3 = 0;
  local_6a0 = 0x6ff;
  local_69c = 0;
  FUN_1475b4530(local_6a8,&local_5e8,&local_618);
  FUN_140dad9c2(&local_5d8,&local_618,0x84);
  puVar97 = local_5b8;
  uVar6 = *(ushort *)(local_6b0 + 0x84);
  iVar68 = uVar6 + 1;
  iVar40 = iVar68 - (int)local_5b8;
  if (iVar40 != 0 && (int)local_5b8 <= iVar68) {
    if ((int)local_5b8 == 0) {
LAB_1432e947a:
      if (local_5b8._4_4_ <= (int)(uint)uVar6) {
        local_5b8 = (undefined8 *)CONCAT44(0x100,(int)local_5b8);
        FUN_14497ddce(&local_5d8,(ulonglong)puVar97 & 0xffffffff);
        iVar68 = (int)local_5b8 + iVar40;
      }
      iVar39 = iVar68 + 0x1f;
      if (-1 < iVar68) {
        iVar39 = iVar68;
      }
      local_5b8 = (undefined8 *)CONCAT44(local_5b8._4_4_,iVar68);
      if (iVar68 % 0x20 != 0) {
        bVar36 = -(char)(iVar68 % 0x20);
        *(uint *)((longlong)&local_5d8 + (longlong)(iVar39 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_5d8 + (longlong)(iVar39 >> 5) * 4) << (bVar36 & 0x1f))
             >> (bVar36 & 0x1f);
      }
    }
    else {
      iVar39 = (int)local_5b8 + 0x1e;
      if (-1 < (int)local_5b8 + -1) {
        iVar39 = (int)local_5b8 + -1;
      }
      if (iVar39 >> 5 != (uint)(uVar6 >> 5)) goto LAB_1432e947a;
      local_5b8 = (undefined8 *)CONCAT44(local_5b8._4_4_,iVar68);
    }
    FUN_1447c45ca(&local_5d8,(ulonglong)puVar97 & 0xffffffff,iVar40,0);
  }
  lVar64 = local_6c0;
  puVar32 = (uint *)((longlong)&local_5d8 + (ulonglong)(uVar6 >> 5) * 4);
  *puVar32 = *puVar32 | 1 << ((byte)uVar6 & 0x1f);
  if ((short)local_5e8 != -1) {
    local_668 = local_700;
    local_868[0] = *(char *)(local_6c0 + 0x298);
    if (*(char *)(local_6c0 + 0x298) == '\0') {
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
      UNLOCK();
    }
    local_670 = &local_5d8;
    local_660 = FUN_1403b8464(&local_670,0);
    local_858._0_4_ = *(int *)(lVar64 + 0x38);
    if (local_660 != *(int *)(lVar64 + 0x38)) {
      do {
        lVar58 = local_668;
        lVar44 = (longlong)local_660;
        lVar64 = *(longlong *)(*(longlong *)(local_668 + 0x60) + lVar44 * 8);
        if (local_868[0] == '\0') {
          *(undefined4 *)(lVar64 + 0x14) = 0;
          local_828._0_8_ = lVar64;
        }
        else {
          auVar26._8_8_ = 0;
          auVar26._0_8_ = local_828._8_8_;
          local_828 = auVar26 << 0x40;
        }
        if (*(ushort *)(lVar64 + 0xc) != 0) {
          plVar43 = *(longlong **)(lVar64 + 0x28);
          lVar41 = (ulonglong)*(ushort *)(lVar64 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar43 + 0x1e) == (short)local_5e8) goto LAB_1432e96a1;
            plVar43 = plVar43 + 4;
            lVar41 = lVar41 + -0x20;
          } while (lVar41 != 0);
        }
        plVar43 = (longlong *)0x0;
LAB_1432e96a1:
        local_808._0_4_ = *(int *)(lVar64 + 0x14);
        if (*(int *)(lVar64 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar43 + 1));
        }
        LOCK();
        *(int *)(plVar43 + 3) = (int)plVar43[3] + 1;
        UNLOCK();
        lVar64 = *plVar43;
        lVar58 = *(longlong *)(*(longlong *)(lVar58 + 0x60) + lVar44 * 8);
        uVar71 = (ulonglong)*(ushort *)(lVar58 + 0xe);
        lVar44 = 0x10;
        do {
          *(undefined8 *)(local_48c + lVar44 + 4) = 0;
          *(undefined8 *)((longlong)&local_478 + lVar44) = 0;
          lVar44 = lVar44 + 0x18;
        } while (lVar44 != 0xe8);
        lVar44 = 0;
        puVar53 = (undefined2 *)local_818._0_8_;
        do {
          FUN_1475b4978(lVar58,&local_658,*puVar53);
          lVar41 = *(longlong *)((longlong)&local_478 + lVar44 * 2);
          if (lVar41 != 0) {
            LOCK();
            piVar1 = (int *)(lVar41 + 0x18);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            if (*(int *)((longlong)&pdStack_470 + lVar44 * 2) == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)((longlong)&local_478 + lVar44 * 2) + 8))
              ;
            }
          }
          *(code **)((longlong)&local_478 + lVar44 * 2) = local_658;
          *(int *)((longlong)&pdStack_470 + lVar44 * 2) = (int)uStack_650;
          *(undefined8 *)((longlong)local_468 + lVar44 * 2) = local_648;
          lVar44 = lVar44 + 0xc;
          puVar53 = puVar53 + 1;
        } while (lVar44 != 0x6c);
        if (uVar71 != 0) {
          uVar63 = 0;
          do {
            lVar58 = *(longlong *)(lVar64 + uVar63 * 8);
            puVar32 = local_508;
            if (local_508 == (uint *)0x0) {
              puVar32 = local_518;
            }
            uVar62 = (uint)lVar58;
            uVar67 = uVar62 + 0x1f;
            if (-1 < (int)uVar62) {
              uVar67 = uVar62;
            }
            if ((puVar32[(int)uVar67 >> 5] >> (uVar62 & 0x1f) & 1) != 0) {
              lVar44 = (longlong)(int)uVar62 * 0x60;
              local_658 = *(code **)(local_4f8[0] + lVar44);
              uStack_650 = ((undefined8 *)(local_4f8[0] + lVar44))[1];
              puVar97 = (undefined8 *)(local_4f8[0] + 0x10 + lVar44);
              local_648 = *puVar97;
              uStack_640 = puVar97[1];
              puVar2 = (undefined4 *)(local_4f8[0] + 0x20 + lVar44);
              uVar167 = *puVar2;
              uVar169 = puVar2[1];
              uVar165 = puVar2[2];
              uVar172 = puVar2[3];
              puVar2 = (undefined4 *)(local_4f8[0] + 0x40 + lVar44);
              uVar166 = *puVar2;
              uVar168 = puVar2[1];
              uVar170 = puVar2[2];
              uVar171 = puVar2[3];
              puVar97 = *(undefined8 **)(local_4f8[0] + 0x30 + lVar44);
              uVar52 = *(ulonglong *)(local_4f8[0] + 0x50 + lVar44);
              FUN_1448052ee(&local_658,&local_638);
              if (local_468[0] != (undefined8 *)0x0) {
                uVar167 = (undefined4)local_468[0][uVar63];
                uVar169 = (undefined4)((ulonglong)local_468[0][uVar63] >> 0x20);
              }
              if (local_450 != 0.0) {
                uVar4 = *(undefined8 *)((longlong)local_450 + uVar63 * 8);
                uVar165 = (undefined4)uVar4;
                uVar172 = (undefined4)((ulonglong)uVar4 >> 0x20);
              }
              if (local_438 != 0.0) {
                puVar97 = *(undefined8 **)((longlong)local_438 + uVar63 * 8);
              }
              if (local_420 != 0) {
                local_628 = *(double *)(local_420 + uVar63 * 8);
              }
              if (local_408 != 0.0) {
                uVar4 = *(undefined8 *)((longlong)local_408 + uVar63 * 8);
                local_638._0_2_ = (undefined2)uVar4;
                local_638._2_2_ = (undefined2)((ulonglong)uVar4 >> 0x10);
                local_638._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
              }
              if (local_3f0 != 0) {
                dStack_630 = *(double *)(local_3f0 + uVar63 * 8);
              }
              if (local_3d8 != (undefined8 *)0x0) {
                uVar166 = (undefined4)local_3d8[uVar63];
                uVar168 = (undefined4)((ulonglong)local_3d8[uVar63] >> 0x20);
              }
              if (local_3c0 != (undefined8 *)0x0) {
                uVar170 = (undefined4)local_3c0[uVar63];
                uVar171 = (undefined4)((ulonglong)local_3c0[uVar63] >> 0x20);
              }
              dStack_840 = 0.0;
              if (local_3a8 != (undefined8 *)0x0) {
                uVar52 = local_3a8[uVar63];
              }
              local_7f8._8_8_ = 0;
              local_7f8._0_8_ = uVar52;
              auVar25._2_2_ = local_638._2_2_;
              auVar25._0_2_ = (undefined2)local_638;
              auVar25._4_4_ = local_638._4_4_;
              auVar25._8_8_ = dStack_630;
              auVar80 = divpd(auVar25,_DAT_1499387d0);
              auVar100._8_8_ = 0;
              auVar100._0_8_ = local_628;
              auVar99 = divpd(auVar100,_DAT_1499387d0);
              auVar80 = roundpd(auVar80,auVar80,3);
              auVar99 = roundpd(auVar99,auVar99,3);
              dVar146 = ((double)CONCAT44(local_638._4_4_,
                                          CONCAT22(local_638._2_2_,(undefined2)local_638)) -
                        auVar80._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar152 = (dStack_630 - auVar80._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar141 = (local_628 - auVar99._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar145 = (0.0 - auVar99._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              local_848 = puVar97;
              dVar73 = sin(dVar146);
              dVar74 = sin(dVar152);
              dVar75 = sin(dVar141);
              sin(dVar145);
              dVar146 = cos(dVar146);
              dVar152 = cos(dVar152);
              dVar141 = cos(dVar141);
              cos(dVar145);
              auVar114._8_8_ = 0;
              auVar114._0_8_ = local_7f8._0_8_;
              lVar44 = *(longlong *)(local_4b8[0] + (longlong)(int)uVar62 * 0x10);
              lVar58 = (lVar58 >> 0x20) * 0x60;
              *(double *)(lVar44 + lVar58) = dVar73 * dVar74 * dVar141 - dVar146 * dVar152 * dVar75;
              ((double *)(lVar44 + lVar58))[1] =
                   -(dVar73 * dVar152 * dVar141) - dVar146 * dVar74 * dVar75;
              pdVar33 = (double *)(lVar44 + 0x10 + lVar58);
              *pdVar33 = -(dVar152 * dVar73 * dVar75) + dVar74 * dVar146 * dVar141;
              pdVar33[1] = dVar74 * dVar73 * dVar75 + dVar152 * dVar146 * dVar141;
              puVar2 = (undefined4 *)(lVar44 + 0x20 + lVar58);
              *puVar2 = uVar167;
              puVar2[1] = uVar169;
              puVar2[2] = uVar165;
              puVar2[3] = uVar172;
              plVar55 = (longlong *)(lVar44 + 0x30 + lVar58);
              *plVar55 = (longlong)local_848;
              plVar55[1] = 0;
              puVar2 = (undefined4 *)(lVar44 + 0x40 + lVar58);
              *puVar2 = uVar166;
              puVar2[1] = uVar168;
              puVar2[2] = uVar170;
              puVar2[3] = uVar171;
              *(undefined1 (*) [16])(lVar44 + 0x50 + lVar58) = auVar114;
            }
            uVar63 = uVar63 + 1;
          } while (uVar71 != uVar63);
        }
        lVar64 = 0xc0;
        do {
          if (*(longlong *)((longlong)&local_478 + lVar64) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)((longlong)&local_478 + lVar64) + 0x18);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*(int *)((longlong)&pdStack_470 + lVar64) == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)((longlong)&local_478 + lVar64) + 8));
            }
          }
          lVar64 = lVar64 + -0x18;
        } while (lVar64 != -0x18);
        if (plVar43 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar43 + 3) = (int)plVar43[3] + -1;
          UNLOCK();
          if (local_808._0_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar43 + 1));
          }
        }
        if (local_828._0_8_ != 0) {
          *(undefined4 *)(local_828._0_8_ + 0x14) = 1;
        }
        local_660 = FUN_1403b8464(&local_670,local_660 + 1);
      } while (local_660 != local_858._0_4_);
    }
    if (local_670 != (undefined8 *)0x0) {
      if (*(char *)(local_668 + 0x270) == '\0') {
        *(int *)(local_668 + 0x264) = *(int *)(local_668 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_668 + 0x264) = *(int *)(local_668 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_588 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1432e9b53:
  if (local_128 != 0.0) {
    FUN_1400020a8();
  }
  local_658 = (code *)0x0;
  uStack_650 = 0;
  if (local_500 == 0) {
    uVar52 = 1;
    iVar68 = 0;
    uVar71 = 0;
    uVar62 = 0;
  }
  else {
    puVar32 = local_508;
    if (local_508 == (uint *)0x0) {
      puVar32 = local_518;
    }
    uVar62 = *puVar32;
    if (uVar62 == 0) {
      iVar68 = local_500 + 0x1e;
      if (-1 < (int)(local_500 - 1)) {
        iVar68 = local_500 - 1;
      }
      uVar71 = 0;
      uVar63 = (ulonglong)(uint)(iVar68 >> 5);
      if (iVar68 >> 5 < 1) {
        uVar63 = uVar71;
      }
      iVar68 = 0;
      do {
        if (uVar63 == uVar71) goto LAB_1432ed6ea;
        iVar68 = iVar68 + 0x20;
        uVar62 = puVar32[uVar71 + 1];
        uVar71 = uVar71 + 1;
      } while (uVar62 == 0);
    }
    else {
      iVar68 = 0;
      uVar71 = 0;
    }
    uVar52 = (ulonglong)(-uVar62 & uVar62);
    uVar63 = uVar52 * 2 + 1;
    lVar64 = 0x3f;
    if (uVar63 != 0) {
      for (; uVar63 >> lVar64 == 0; lVar64 = lVar64 + -1) {
      }
    }
    uVar62 = (iVar68 - ((uint)lVar64 ^ 0x3f)) + 0x3e;
    if ((int)local_500 <= (int)uVar62) {
      uVar62 = local_500;
    }
  }
  if ((int)uVar62 < (int)local_500) {
    uVar67 = 0xffffffff;
    do {
      uVar63 = uStack_650;
      lVar64 = (longlong)(int)uStack_650;
      uVar38 = (int)uStack_650 + 1;
      uStack_650 = CONCAT44(uStack_650._4_4_,uVar38);
      if (uStack_650._4_4_ < uVar38) {
        FUN_1475b4a46(&local_658,uVar63 & 0xffffffff);
      }
      pcVar50 = local_658;
      *(uint *)(local_658 + lVar64 * 4) = uVar62;
      uVar67 = uVar67 & ~(uint)uVar52;
      puVar32 = local_508;
      if (local_508 == (uint *)0x0) {
        puVar32 = local_518;
      }
      iVar40 = (int)uVar71;
      lVar64 = (longlong)iVar40;
      uVar62 = puVar32[lVar64] & uVar67;
      if (uVar62 == 0) {
        iVar39 = local_500 + 0x1e;
        if (-1 < (int)(local_500 - 1)) {
          iVar39 = local_500 - 1;
        }
        iVar39 = iVar39 >> 5;
        iVar37 = iVar39;
        if (iVar39 < iVar40) {
          iVar37 = iVar40;
        }
        if (iVar39 <= iVar40) break;
        lVar58 = 0;
        while( true ) {
          iVar68 = iVar68 + 0x20;
          uVar62 = puVar32[lVar64 + lVar58 + 1];
          if (uVar62 != 0) break;
          lVar58 = lVar58 + 1;
          if (iVar37 - lVar64 == lVar58) goto LAB_1432e9d03;
        }
        uVar71 = (ulonglong)(iVar40 + (int)lVar58 + 1);
        uVar67 = 0xffffffff;
      }
      uVar52 = (ulonglong)(-uVar62 & uVar62);
      uVar63 = uVar52 * 2 + 1;
      lVar64 = 0x3f;
      if (uVar63 != 0) {
        for (; uVar63 >> lVar64 == 0; lVar64 = lVar64 + -1) {
        }
      }
      uVar62 = (iVar68 - ((uint)lVar64 ^ 0x3f)) + 0x3e;
    } while ((int)uVar62 < (int)local_500);
LAB_1432e9d03:
    iVar68 = (int)uStack_650;
    lVar64 = (longlong)(int)uStack_650;
    if (1 < lVar64) {
      memset(local_468,0,0x2f0);
      local_478 = pcVar50;
      pdStack_470 = (double *)(pcVar50 + (lVar64 + -1) * 4);
      fVar72 = logf((float)iVar68);
      local_468[0] = (undefined8 *)CONCAT44(local_468[0]._4_4_,(int)(longlong)(fVar72 + fVar72));
      ppcVar42 = &local_478;
      do {
        pcVar45 = *ppcVar42;
        pcVar54 = ppcVar42[1];
        iVar68 = *(int *)(ppcVar42 + 2);
        iVar40 = (int)((ulonglong)((longlong)pcVar54 - (longlong)pcVar45) >> 2);
        uVar71 = (ulonglong)(iVar40 + 1);
        pcVar48 = pcVar45;
        pcVar57 = pcVar45;
        pcVar50 = pcVar54;
        if (iVar68 != 0) {
LAB_1432e9d90:
          if (8 < (int)(uint)uVar71) {
            uVar71 = (ulonglong)((uint)uVar71 >> 1);
            iVar40 = *(int *)(pcVar57 + uVar71 * 4);
            *(int *)(pcVar57 + uVar71 * 4) = *(int *)pcVar57;
            *(int *)pcVar57 = iVar40;
            pcVar61 = pcVar50 + 4;
            pcVar45 = pcVar57;
            do {
              pcVar30 = pcVar45 + 4;
              pcVar59 = pcVar45 + 4;
              do {
                pcVar69 = pcVar59;
                pcVar45 = pcVar30;
                if (pcVar50 < pcVar45) break;
                pcVar30 = pcVar45 + 4;
                pcVar59 = pcVar69 + 4;
              } while (*(int *)((longlong)local_688 + (longlong)*(int *)pcVar57 * 4) <=
                       *(int *)((longlong)local_688 + (longlong)*(int *)pcVar45 * 4));
              pcVar30 = pcVar61 + -8;
              do {
                pcVar59 = pcVar61;
                pcVar66 = pcVar30;
                pcVar61 = pcVar59 + -4;
                if (pcVar61 <= pcVar57) break;
                pcVar30 = pcVar66 + -4;
              } while (*(int *)((longlong)local_688 + (longlong)*(int *)pcVar61 * 4) <=
                       *(int *)((longlong)local_688 + (longlong)*(int *)pcVar57 * 4));
              if (pcVar61 < pcVar45) goto LAB_1432e9e26;
              iVar40 = *(int *)pcVar45;
              *(int *)pcVar45 = *(int *)pcVar61;
              *(int *)pcVar61 = iVar40;
            } while( true );
          }
          if (pcVar57 < pcVar50) {
            do {
              pcVar45 = pcVar57;
              if (pcVar57 + 4 <= pcVar50) {
                iVar68 = *(int *)pcVar57;
                pcVar54 = pcVar57 + 4;
                do {
                  pcVar48 = pcVar54;
                  iVar40 = *(int *)pcVar54;
                  if (*(int *)((longlong)local_688 + (longlong)iVar68 * 4) <=
                      *(int *)((longlong)local_688 + (longlong)*(int *)pcVar54 * 4)) {
                    pcVar48 = pcVar45;
                    iVar40 = iVar68;
                  }
                  iVar68 = iVar40;
                  pcVar45 = pcVar48;
                  pcVar54 = pcVar54 + 4;
                } while (pcVar54 <= pcVar50);
              }
              iVar68 = *(int *)pcVar45;
              *(int *)pcVar45 = *(int *)pcVar50;
              *(int *)pcVar50 = iVar68;
              pcVar50 = pcVar50 + -4;
            } while (pcVar57 < pcVar50);
          }
          goto LAB_1432ea06d;
        }
LAB_1432e9eb9:
        iVar68 = (int)uVar71;
        if (iVar68 != 0) {
          iVar40 = (iVar40 - (iVar40 + -1 >> 0x1f)) + -1 >> 1;
          iVar39 = iVar40;
joined_r0x0001432e9ee0:
          do {
            iVar37 = iVar40 * 2 + 1;
            if (iVar37 < iVar68) {
              iVar60 = iVar40 * 2 + 2;
              if ((iVar60 < iVar68) &&
                 (*(int *)((longlong)local_688 +
                          (longlong)*(int *)(pcVar45 + (longlong)iVar60 * 4) * 4) <=
                  *(int *)((longlong)local_688 +
                          (longlong)*(int *)(pcVar45 + (longlong)iVar37 * 4) * 4))) {
                iVar37 = iVar60;
              }
              iVar60 = *(int *)(pcVar45 + (longlong)iVar40 * 4);
              if (*(int *)((longlong)local_688 +
                          (longlong)*(int *)(pcVar45 + (longlong)iVar37 * 4) * 4) <
                  *(int *)((longlong)local_688 + (longlong)iVar60 * 4)) {
                *(int *)(pcVar45 + (longlong)iVar40 * 4) = *(int *)(pcVar45 + (longlong)iVar37 * 4);
                *(int *)(pcVar45 + (longlong)iVar37 * 4) = iVar60;
                iVar40 = iVar37;
                goto joined_r0x0001432e9ee0;
              }
            }
            bVar70 = iVar39 != 0;
            iVar40 = iVar39 + -1;
            iVar39 = iVar40;
          } while (bVar70);
          if (1 < iVar68) {
            iVar40 = *(int *)pcVar45;
            *(int *)pcVar45 = *(int *)(pcVar45 + (uVar71 - 1) * 4);
            *(int *)(pcVar45 + (uVar71 - 1) * 4) = iVar40;
            if (iVar68 != 2) {
              do {
                uVar63 = uVar71 - 1;
                iVar68 = 0;
                iVar39 = 1;
                iVar40 = 0;
                do {
                  iVar68 = iVar68 + 2;
                  iVar37 = iVar39;
                  if (((longlong)iVar68 < (longlong)uVar63) &&
                     (*(int *)((longlong)local_688 +
                              (longlong)*(int *)(pcVar45 + (longlong)iVar68 * 4) * 4) <=
                      *(int *)((longlong)local_688 +
                              (longlong)*(int *)(pcVar45 + (longlong)iVar39 * 4) * 4))) {
                    iVar37 = iVar68;
                  }
                  iVar68 = *(int *)(pcVar45 + (longlong)iVar40 * 4);
                  if (*(int *)((longlong)local_688 + (longlong)iVar68 * 4) <=
                      *(int *)((longlong)local_688 +
                              (longlong)*(int *)(pcVar45 + (longlong)iVar37 * 4) * 4)) break;
                  *(int *)(pcVar45 + (longlong)iVar40 * 4) =
                       *(int *)(pcVar45 + (longlong)iVar37 * 4);
                  *(int *)(pcVar45 + (longlong)iVar37 * 4) = iVar68;
                  iVar68 = iVar37 * 2;
                  iVar39 = iVar37 * 2 + 1;
                  iVar40 = iVar37;
                } while ((longlong)iVar39 < (longlong)uVar63);
                iVar68 = *(int *)pcVar45;
                *(int *)pcVar45 = *(int *)(pcVar45 + (uVar71 - 2) * 4);
                *(int *)(pcVar45 + (uVar71 - 2) * 4) = iVar68;
                uVar71 = uVar63;
              } while (2 < uVar63);
            }
          }
        }
LAB_1432ea06d:
        ppcVar42 = ppcVar42 + -3;
      } while (&local_478 <= ppcVar42);
    }
    if ((int)uStack_650 != 0) {
      local_6e8 = local_658 + (longlong)(int)uStack_650 * 4;
      local_6f0 = local_830 + 0x50;
      pcVar50 = local_658;
LAB_1432ea0d8:
      lVar64 = local_6f0;
      uVar62 = *(uint *)pcVar50;
      plVar43 = (longlong *)*local_6b8;
      ppcVar42 = (code **)&local_638;
      FUN_1475b45d2(local_6f0,ppcVar42,uVar62);
      local_818._8_8_ = DAT_14c846488;
      local_818._0_8_ = DAT_14c846480;
      local_808._8_8_ = DAT_14c846498;
      local_808._0_8_ = DAT_14c846490;
      local_848 = (undefined8 *)CONCAT44(DAT_14c8464a0._4_4_,(undefined4)DAT_14c8464a0);
      dStack_840 = (double)CONCAT44(DAT_14c8464a8._4_4_,(undefined4)DAT_14c8464a8);
      local_828._8_8_ = DAT_14c8464b8;
      local_828._0_8_ = DAT_14c8464b0;
      dVar74 = (double)CONCAT44(DAT_14c8464c0._4_4_,(undefined4)DAT_14c8464c0);
      dVar75 = (double)CONCAT44(DAT_14c8464c8._4_4_,(undefined4)DAT_14c8464c8);
      puVar97 = DAT_14c8464d0;
      dVar73 = dRam000000014c8464d8;
      local_6e0 = pcVar50;
      if (CONCAT22(local_638._2_2_,(undefined2)local_638) != 0xffffffff) {
        uVar67 = CONCAT22(local_638._2_2_,(undefined2)local_638);
LAB_1432ea201:
        uVar169 = uStack_764;
        iVar40 = local_768;
        uVar167 = uStack_794;
        iVar68 = local_798;
        uVar172 = (undefined4)((ulonglong)dVar75 >> 0x20);
        uVar165 = (undefined4)((ulonglong)dVar73 >> 0x20);
        local_7d8._8_4_ = SUB84(dVar75,0);
        local_7d8._0_8_ = dVar74;
        local_7d8._12_4_ = uVar172;
        local_7f8._8_4_ = SUB84(dVar73,0);
        local_7f8._0_8_ = puVar97;
        local_7f8._12_4_ = uVar165;
        if (((int)uVar67 < 0) || (local_490 <= (int)uVar67)) goto LAB_1432ea250;
        puVar35 = local_498;
        if (local_498 == (undefined1 *)0x0) {
          puVar35 = local_4a8;
        }
        if ((*(uint *)(puVar35 + (ulonglong)(uVar67 >> 5) * 4) >> (uVar67 & 0x1f) & 1) == 0)
        goto LAB_1432ea250;
        local_638._0_2_ = (undefined2)uVar67;
        local_638._2_2_ = (undefined2)(uVar67 >> 0x10);
        plVar55 = (longlong *)((ulonglong)uVar67 * 0x10 + local_4b8[0]);
        ppcVar42 = (code **)(ulonglong)
                            CONCAT31((int3)(*(uint *)(puVar35 + (ulonglong)(uVar67 >> 5) * 4) >> 8),
                                     -1 < (int)uVar62);
        local_768 = local_818._0_4_;
        uStack_764 = local_818._4_4_;
        local_798 = local_808._0_4_;
        uStack_794 = local_808._4_4_;
        if (-1 < (int)uVar62 && (int)uVar62 < local_490) {
          puVar34 = (undefined8 *)(ulonglong)(uVar62 >> 5);
          iVar39 = *(int *)(local_830 + 0x88);
          if ((*(uint *)(puVar35 + (longlong)puVar34 * 4) >> (uVar62 & 0x1f) & 1) == 0)
          goto LAB_1432ebc77;
          plVar51 = (longlong *)(local_4b8[0] + (ulonglong)uVar62 * 0x10);
          if (0 < iVar39) {
            dVar146 = (double)local_818._8_8_ + (double)local_818._8_8_;
            dVar152 = (double)local_808._0_8_ + (double)local_808._0_8_;
            dVar141 = (double)local_818._0_8_ * ((double)local_818._0_8_ + (double)local_818._0_8_);
            local_748 = (undefined8 *)
                        ((1.0 - ((double)local_808._0_8_ * dVar152 +
                                (double)local_818._8_8_ * dVar146)) * dVar74);
            puStack_7b0 = (undefined8 *)
                          ((1.0 - ((double)local_808._0_8_ * dVar152 + dVar141)) * dVar75);
            local_728 = (undefined8 *)
                        ((1.0 - (dVar141 + (double)local_818._8_8_ * dVar146)) * (double)puVar97);
            puStack_760 = (undefined8 *)local_818._0_8_;
            dVar141 = ((double)local_818._0_8_ + (double)local_818._0_8_) * (double)local_808._8_8_;
            local_778 = (undefined8 *)local_808._8_8_;
            puStack_770 = (undefined8 *)local_808._8_8_;
            puStack_740 = (undefined8 *)
                          ((dVar146 * (double)local_818._0_8_ + dVar152 * (double)local_808._8_8_) *
                          dVar74);
            local_718 = (undefined8 *)((dVar152 * (double)local_818._8_8_ + dVar141) * dVar75);
            local_7c8 = (undefined8 *)
                        ((dVar146 * (double)local_808._8_8_ + (double)local_818._0_8_ * dVar152) *
                        (double)puVar97);
            local_7b8 = (undefined8 *)
                        ((dVar146 * (double)local_818._0_8_ - dVar152 * (double)local_808._8_8_) *
                        dVar75);
            puStack_7c0 = (undefined8 *)
                          ((dVar152 * (double)local_818._8_8_ - dVar141) * (double)puVar97);
            local_738 = (undefined8 *)
                        (((double)local_818._0_8_ * dVar152 - dVar146 * (double)local_808._8_8_) *
                        dVar74);
            puStack_720 = (undefined8 *)0x0;
            puStack_730 = (undefined8 *)0x0;
            puStack_710 = (undefined8 *)0x0;
            local_758 = (undefined8 *)local_828._0_8_;
            puStack_750 = (undefined8 *)&DAT_3ff0000000000000;
            local_788 = (undefined8 *)local_818._8_8_;
            puStack_780 = (undefined8 *)local_818._8_8_;
            puStack_790 = (undefined8 *)local_808._0_8_;
            local_7a8 = (undefined8 *)local_818._0_8_;
            puStack_7a0 = (undefined8 *)local_808._8_8_;
            local_6d8 = (undefined8 *)local_818._8_8_;
            puStack_6d0 = (undefined8 *)local_808._0_8_;
            lVar64 = 0;
            lVar58 = 0;
            do {
              lVar44 = *plVar51;
              auVar80 = *(undefined1 (*) [16])(lVar44 + 0x40 + lVar64);
              auVar99 = *(undefined1 (*) [16])(lVar44 + 0x50 + lVar64);
              auVar17._8_4_ = SUB84(dVar75,0);
              auVar17._0_8_ = dVar74;
              auVar17._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              auVar107 = minpd(auVar80,auVar17);
              auVar10._8_4_ = SUB84(dVar73,0);
              auVar10._0_8_ = puVar97;
              auVar10._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              auVar102 = minpd(auVar99,auVar10);
              auVar84._8_8_ = -(ulonglong)(auVar107._8_8_ < 0.0);
              auVar84._0_8_ = -(ulonglong)(auVar107._0_8_ < 0.0);
              iVar68 = movmskpd((int)puVar34,auVar84);
              auVar103._8_8_ = -(ulonglong)(auVar102._8_8_ < 0.0);
              auVar103._0_8_ = -(ulonglong)(auVar102._0_8_ < 0.0);
              uVar62 = movmskpd((int)ppcVar42,auVar103);
              local_868._0_8_ = auVar80._0_8_;
              local_868._8_8_ = auVar80._8_8_;
              if ((uVar62 & 0x3fffffff) == 0 && iVar68 == 0) {
                dVar146 = *(double *)(lVar44 + lVar64);
                dVar152 = ((double *)(lVar44 + lVar64))[1];
                pdVar33 = (double *)(lVar44 + 0x10 + lVar64);
                dVar141 = *pdVar33;
                dVar145 = pdVar33[1];
                dVar110 = dVar152 * (double)CONCAT44(uStack_794,local_798) * -1.0 +
                          (double)CONCAT44(uStack_764,local_768) * dVar145 * 1.0 +
                          (double)local_778 * dVar146 + (double)local_788 * dVar141;
                dVar147 = dVar146 * (double)puStack_790 * 1.0 +
                          (double)puStack_760 * dVar141 * -1.0 + (double)puStack_770 * dVar152 +
                          (double)puStack_780 * dVar145;
                auVar117._0_8_ =
                     dVar145 * (double)CONCAT44(uStack_794,local_798) * 1.0 +
                     (((double)CONCAT44(uStack_764,local_768) * dVar152 * 1.0 +
                      (double)local_778 * dVar141) - (double)local_788 * dVar146);
                auVar117._8_8_ =
                     dVar141 * (double)puStack_790 * -1.0 +
                     (((double)puStack_760 * dVar146 * -1.0 + (double)puStack_770 * dVar145) -
                     (double)puStack_780 * dVar152);
                pdVar33 = (double *)(lVar44 + 0x20 + lVar64);
                dVar146 = *pdVar33 * dVar74;
                dVar124 = pdVar33[1] * dVar75;
                pdVar33 = (double *)(lVar44 + 0x30 + lVar64);
                dVar138 = *pdVar33 * (double)puVar97;
                dVar148 = pdVar33[1] * dVar73;
                dVar152 = dVar124 * (double)local_818._0_8_ - (double)local_6d8 * dVar146;
                dVar141 = dVar138 * (double)local_818._8_8_ - (double)puStack_6d0 * dVar124;
                dVar145 = dVar146 * (double)local_808._0_8_ - (double)local_7a8 * dVar138;
                dVar133 = dVar148 * (double)local_808._8_8_ - (double)puStack_7a0 * dVar148;
                dVar141 = dVar141 + dVar141;
                dVar145 = dVar145 + dVar145;
                dVar152 = dVar152 + dVar152;
                dVar133 = dVar133 + dVar133;
                puVar76 = (undefined8 *)
                          ((dVar152 * (double)local_818._8_8_ - (double)puStack_6d0 * dVar145) +
                           (double)local_778 * dVar141 + dVar146 + (double)local_848);
                dVar146 = (dVar141 * (double)local_808._0_8_ - dVar152 * (double)local_7a8) +
                          (double)puStack_770 * dVar145 + dVar124 + dStack_840;
                dVar152 = (dVar145 * (double)local_818._0_8_ - (double)local_6d8 * dVar141) +
                          (double)local_778 * dVar152 + dVar138 + (double)local_828._0_8_;
                dVar141 = (dVar133 * (double)local_808._8_8_ - dVar133 * (double)puStack_7a0) +
                          (double)puStack_770 * dVar133 + dVar148 + (double)local_828._8_8_;
                dVar74 = (double)local_868._0_8_ * dVar74;
                dVar75 = (double)local_868._8_8_ * dVar75;
                auVar159._0_8_ = auVar99._0_8_ * (double)puVar97;
                auVar159._8_8_ = auVar99._8_8_ * dVar73;
                uVar167 = 0;
              }
              else {
                local_5e8 = local_748;
                uStack_5e0 = puStack_740;
                local_5d8 = local_738;
                puStack_5d0 = puStack_730;
                local_5c8._8_8_ = puStack_7b0;
                local_5c8._0_8_ = local_7b8;
                local_5b8 = local_718;
                puStack_5b0 = puStack_710;
                local_5a8 = local_7c8;
                puStack_5a0 = puStack_7c0;
                local_598 = local_728;
                puStack_590 = puStack_720;
                local_588 = local_848;
                dStack_580 = dStack_840;
                local_578 = local_758;
                puStack_570 = puStack_750;
                dVar152 = *(double *)(lVar44 + lVar64);
                dVar141 = ((double *)(lVar44 + lVar64))[1];
                dVar146 = *(double *)(lVar44 + 0x10 + lVar64);
                pdVar33 = (double *)(lVar44 + 0x40 + lVar64);
                dStack_168 = *pdVar33;
                dStack_158 = pdVar33[1];
                dStack_130 = *(double *)(lVar44 + 0x50 + lVar64);
                dVar124 = dVar141 + dVar141;
                dVar145 = dVar146 + dVar146;
                dVar110 = dVar152 * (dVar152 + dVar152);
                local_178 = (longlong *)
                            ((1.0 - (dVar146 * dVar145 + dVar141 * dVar124)) * dStack_168);
                dStack_150 = (1.0 - (dVar146 * dVar145 + dVar110)) * dStack_158;
                local_128 = (1.0 - (dVar110 + dVar141 * dVar124)) * dStack_130;
                dVar138 = *(double *)(lVar44 + lVar64) * dVar145;
                pdVar33 = (double *)(lVar44 + 0x18 + lVar64);
                dVar146 = *pdVar33;
                dVar110 = dVar145 * dVar146;
                dVar147 = (dVar152 + dVar152) * *pdVar33;
                dVar146 = dVar124 * dVar146;
                dStack_170 = (dVar124 * dVar152 + dVar110) * dStack_168;
                local_148 = (dVar145 * dVar141 + dVar147) * dStack_158;
                local_138 = (dVar146 + dVar138) * dStack_130;
                dStack_168 = (dVar138 - dVar146) * dStack_168;
                dStack_158 = (dVar124 * dVar152 - dVar110) * dStack_158;
                dStack_130 = (dVar145 * dVar141 - dVar147) * dStack_130;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                pdVar33 = (double *)(lVar44 + 0x20 + lVar64);
                local_118 = (undefined8 *)*pdVar33;
                dStack_110 = pdVar33[1];
                local_108 = *(double *)(lVar44 + 0x30 + lVar64);
                uStack_100 = 0x3ff0000000000000;
                local_868._0_8_ = (double)local_868._0_8_ * dVar74;
                local_868._8_8_ = (double)local_868._8_8_ * dVar75;
                local_858._8_8_ = auVar99._8_8_ * dVar73;
                local_858._0_8_ = auVar99._0_8_ * (double)puVar97;
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar159 = local_858;
                dVar75 = (double)local_868._8_8_;
                dVar74 = (double)local_868._0_8_;
                auVar80 = _DAT_149934d80;
                dVar146 = (double)local_468[0] * (double)local_468[0] +
                          (double)local_478 * (double)local_478 +
                          (double)pdStack_470 * (double)pdStack_470;
                dVar152 = (double)local_448 * (double)local_448 +
                          local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar146 + -9.99999993922529e-09);
                dVar146 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar146)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar152 + -9.99999993922529e-09);
                dVar152 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar152)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar73 = (double)(~uVar71 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                auVar85._8_8_ = -(ulonglong)(0.0 <= (double)local_868._8_8_);
                auVar85._0_8_ = -(ulonglong)(0.0 <= (double)local_868._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar85);
                dVar141 = (double)(~-(ulonglong)(0.0 <= (double)local_858._0_8_) &
                                   0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= (double)local_858._0_8_) & 0x3ff0000000000000)
                ;
                dVar145 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar146 * dVar145);
                pdStack_470 = (double *)((double)pdStack_470 * dVar146 * dVar145);
                local_468[0] = (undefined8 *)(dVar146 * (double)local_468[0] * dVar145);
                dVar146 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar152 * (double)local_448 * dVar146);
                local_450 = local_450 * dVar152 * dVar146;
                local_458 = dVar146 * local_458 * dVar152;
                local_428 = dVar73 * local_428 * dVar141;
                local_430 = (undefined8 *)((double)local_430 * dVar73 * dVar141);
                local_438 = dVar141 * local_438 * dVar73;
                puVar97 = &local_618;
                ppcVar42 = &local_478;
                FUN_14481fd10();
                uVar167 = SUB84(ppcVar42,0);
                iVar68 = (int)puVar97;
                dVar73 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar146 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar152 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar141 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar145 = dVar152 * dVar152 + dVar73 * dVar73;
                dVar110 = dVar141 * dVar141 + dVar146 * dVar146;
                auVar127._0_8_ = dVar145 + dVar110;
                auVar127._8_8_ = dVar145 + dVar110;
                auVar86._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar127._8_8_);
                auVar86._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar127._0_8_);
                auVar99 = sqrtpd(auVar127,auVar127);
                auVar80 = divpd(auVar80,auVar99);
                auVar135._0_8_ = auVar80._0_8_ * dVar152;
                auVar135._8_8_ = auVar80._8_8_ * dVar141;
                dVar110 = (double)((ulonglong)(dVar73 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar127._0_8_));
                dVar147 = (double)((ulonglong)(dVar146 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar127._8_8_));
                auVar117 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar135,auVar86);
                dVar146 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar141 = 0.0;
                dVar152 = local_408;
                puVar76 = local_418;
              }
              lVar44 = *plVar55;
              auVar80 = *(undefined1 (*) [16])(lVar44 + 0x40 + lVar64);
              dVar73 = auVar80._0_8_;
              dVar124 = auVar80._8_8_;
              auVar99 = *(undefined1 (*) [16])(lVar44 + 0x50 + lVar64);
              dVar145 = auVar99._0_8_;
              dVar138 = auVar99._8_8_;
              auVar143._8_8_ = dVar75;
              auVar143._0_8_ = dVar74;
              auVar80 = minpd(auVar143,auVar80);
              dVar148 = auVar159._0_8_;
              auVar99 = minpd(auVar159,auVar99);
              auVar144._8_8_ = -(ulonglong)(auVar80._8_8_ < 0.0);
              auVar144._0_8_ = -(ulonglong)(auVar80._0_8_ < 0.0);
              uVar62 = movmskpd(iVar68,auVar144);
              puVar34 = (undefined8 *)(ulonglong)uVar62;
              auVar151._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
              auVar151._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
              uVar67 = movmskpd(uVar167,auVar151);
              dVar133 = auVar117._0_8_;
              dVar139 = auVar117._8_8_;
              if ((uVar67 & 0x3fffffff) == 0 && uVar62 == 0) {
                dVar164 = *(double *)(lVar44 + lVar64);
                dVar22 = ((double *)(lVar44 + lVar64))[1];
                pdVar33 = (double *)(lVar44 + 0x10 + lVar64);
                dVar23 = *pdVar33;
                dVar24 = pdVar33[1];
                pdVar33 = (double *)(lVar44 + 0x18 + lVar64);
                dVar163 = *pdVar33;
                dVar140 = *pdVar33;
                dVar155 = *(double *)(lVar44 + lVar64);
                dVar153 = *(double *)(lVar44 + lVar64);
                local_868._8_4_ = SUB84(dVar75,0);
                local_868._0_8_ = dVar74;
                local_868._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
                pdVar33 = (double *)(lVar44 + 8 + lVar64);
                dVar75 = *pdVar33;
                dVar156 = *pdVar33;
                pdVar33 = (double *)(lVar44 + 0x10 + lVar64);
                dVar157 = *pdVar33;
                dVar160 = *pdVar33;
                dVar158 = dVar147 * dVar157 * -1.0 +
                          dVar133 * dVar75 + dVar139 * dVar155 * 1.0 + dVar110 * dVar163;
                dVar161 = dVar110 * dVar160 * 1.0 +
                          dVar139 * dVar156 + dVar133 * dVar153 * -1.0 + dVar147 * dVar140;
                auVar162._0_8_ =
                     dVar139 * dVar157 * 1.0 +
                     ((dVar155 * dVar147 * 1.0 + dVar133 * dVar163) - dVar110 * dVar75);
                auVar162._8_8_ =
                     dVar133 * dVar160 * -1.0 +
                     ((dVar153 * dVar110 * -1.0 + dVar139 * dVar140) - dVar147 * dVar156);
                dVar147 = (double)puVar76 * dVar73;
                dVar146 = dVar146 * dVar124;
                dVar152 = dVar152 * dVar145;
                dVar141 = dVar141 * dVar138;
                dVar75 = dVar146 * dVar164 - dVar147 * dVar22;
                dVar133 = dVar152 * dVar22 - dVar146 * dVar23;
                dVar139 = dVar147 * dVar23 - dVar152 * dVar164;
                dVar110 = dVar141 * dVar24 - dVar141 * dVar24;
                dVar133 = dVar133 + dVar133;
                dVar139 = dVar139 + dVar139;
                dVar75 = dVar75 + dVar75;
                dVar110 = dVar110 + dVar110;
                dVar74 = dVar74 * dVar73;
                dVar124 = (double)local_868._8_8_ * dVar124;
                dVar148 = dVar148 * dVar145;
                dVar138 = auVar159._8_8_ * dVar138;
                pdVar33 = (double *)(lVar44 + 0x20 + lVar64);
                puVar97 = (undefined8 *)
                          ((dVar75 * dVar22 - dVar23 * dVar139) + dVar163 * dVar133 + dVar147 +
                          *pdVar33);
                dVar73 = (dVar133 * dVar23 - dVar75 * dVar164) + dVar140 * dVar139 + dVar146 +
                         pdVar33[1];
                pdVar33 = (double *)(lVar44 + 0x30 + lVar64);
                dVar75 = (dVar139 * dVar164 - dVar22 * dVar133) + dVar163 * dVar75 + dVar152 +
                         *pdVar33;
                dVar146 = (dVar110 * dVar24 - dVar110 * dVar24) + dVar140 * dVar110 + dVar141 +
                          pdVar33[1];
                ppcVar42 = (code **)0x0;
                local_858 = auVar159;
              }
              else {
                local_868._8_8_ = auVar159._8_8_ * dVar138;
                local_868._0_8_ = dVar148 * dVar145;
                dVar140 = *(double *)(lVar44 + lVar64);
                dVar163 = ((double *)(lVar44 + lVar64))[1];
                dVar155 = *(double *)(lVar44 + 0x10 + lVar64);
                dVar153 = dVar163 + dVar163;
                dVar156 = dVar155 + dVar155;
                dVar164 = dVar140 * (dVar140 + dVar140);
                local_598 = (undefined8 *)((1.0 - (dVar164 + dVar163 * dVar153)) * dVar145);
                dVar138 = *(double *)(lVar44 + lVar64) * dVar156;
                pdVar33 = (double *)(lVar44 + 0x18 + lVar64);
                dVar141 = *pdVar33;
                dVar157 = dVar156 * dVar141;
                dVar160 = (dVar140 + dVar140) * *pdVar33;
                dVar141 = dVar153 * dVar141;
                local_5a8 = (undefined8 *)((dVar141 + dVar138) * dVar145);
                puStack_5a0 = (undefined8 *)((dVar156 * dVar163 - dVar160) * dVar145);
                local_858._8_8_ = dVar75 * dVar124;
                local_858._0_8_ = dVar74 * dVar73;
                local_5e8 = (undefined8 *)((1.0 - (dVar155 * dVar156 + dVar163 * dVar153)) * dVar73)
                ;
                uStack_5e0 = (undefined8 *)((dVar153 * dVar140 + dVar157) * dVar73);
                local_5b8 = (undefined8 *)((dVar156 * dVar163 + dVar160) * dVar124);
                local_5d8 = (undefined8 *)((dVar138 - dVar141) * dVar73);
                puStack_5d0 = (undefined8 *)0x0;
                local_5c8._8_8_ = (1.0 - (dVar155 * dVar156 + dVar164)) * dVar124;
                local_5c8._0_8_ = (dVar153 * dVar140 - dVar157) * dVar124;
                puStack_5b0 = (undefined8 *)0x0;
                puStack_590 = (undefined8 *)0x0;
                puVar97 = (undefined8 *)(lVar44 + 0x20 + lVar64);
                local_588 = (undefined8 *)*puVar97;
                dStack_580 = (double)puVar97[1];
                local_578 = *(undefined8 **)(lVar44 + 0x30 + lVar64);
                puStack_570 = (undefined8 *)&DAT_3ff0000000000000;
                dVar73 = dVar147 + dVar147;
                dVar145 = dVar133 + dVar133;
                dVar141 = dVar110 * (dVar110 + dVar110);
                local_128 = (1.0 - (dVar141 + dVar147 * dVar73)) * dVar148;
                dVar124 = (dVar110 + dVar110) * dVar139;
                local_138 = (dVar110 * dVar145 + dVar73 * dVar139) * dVar148;
                dStack_158 = (dVar73 * dVar110 - dVar145 * dVar139) * dVar75;
                dStack_130 = (dVar145 * dVar147 - dVar124) * dVar148;
                local_178 = (longlong *)((1.0 - (dVar133 * dVar145 + dVar147 * dVar73)) * dVar74);
                dStack_150 = (1.0 - (dVar133 * dVar145 + dVar141)) * dVar75;
                dStack_170 = (dVar73 * dVar110 + dVar145 * dVar139) * dVar74;
                local_148 = (dVar145 * dVar147 + dVar124) * dVar75;
                dStack_168 = (dVar110 * dVar145 - dVar73 * dVar139) * dVar74;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                uStack_100 = 0x3ff0000000000000;
                local_118 = puVar76;
                dStack_110 = dVar146;
                local_108 = dVar152;
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar80 = _DAT_149934d80;
                local_7e8 = local_468[0];
                dVar74 = (double)local_468[0] * (double)local_468[0] +
                         (double)local_478 * (double)local_478 +
                         (double)pdStack_470 * (double)pdStack_470;
                dVar146 = (double)local_448 * (double)local_448 +
                          local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
                dVar75 = (double)(~uVar71 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar146 + -9.99999993922529e-09);
                dVar146 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar146)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar74 = (double)local_858._0_8_;
                dVar124 = (double)local_858._8_8_;
                dVar73 = (double)(~uVar71 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                dVar148 = (double)local_868._0_8_;
                dVar138 = (double)local_868._8_8_;
                auVar87._8_8_ = -(ulonglong)(0.0 <= (double)local_858._8_8_);
                auVar87._0_8_ = -(ulonglong)(0.0 <= (double)local_858._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar87);
                dVar152 = (double)(~-(ulonglong)(0.0 <= (double)local_868._0_8_) &
                                   0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= (double)local_868._0_8_) & 0x3ff0000000000000)
                ;
                dVar141 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar75 * dVar141);
                pdStack_470 = (double *)((double)pdStack_470 * dVar75 * dVar141);
                local_468[0] = (undefined8 *)(dVar75 * (double)local_468[0] * dVar141);
                dVar75 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar146 * (double)local_448 * dVar75);
                local_450 = local_450 * dVar146 * dVar75;
                local_458 = dVar75 * local_458 * dVar146;
                local_428 = dVar73 * local_428 * dVar152;
                local_430 = (undefined8 *)((double)local_430 * dVar73 * dVar152);
                local_438 = dVar152 * local_438 * dVar73;
                puVar34 = &local_618;
                ppcVar42 = &local_478;
                FUN_14481fd10();
                dVar73 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar75 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar146 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar152 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar141 = dVar146 * dVar146 + dVar73 * dVar73;
                dVar145 = dVar152 * dVar152 + dVar75 * dVar75;
                auVar118._0_8_ = dVar141 + dVar145;
                auVar118._8_8_ = dVar141 + dVar145;
                auVar88._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar118._8_8_);
                auVar88._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar118._0_8_);
                auVar99 = sqrtpd(auVar118,auVar118);
                auVar80 = divpd(auVar80,auVar99);
                auVar128._0_8_ = auVar80._0_8_ * dVar146;
                auVar128._8_8_ = auVar80._8_8_ * dVar152;
                dVar158 = (double)((ulonglong)(dVar73 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar118._0_8_));
                dVar161 = (double)((ulonglong)(dVar75 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar118._8_8_));
                auVar162 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar128,auVar88);
                dVar73 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar146 = 0.0;
                dVar75 = local_408;
                puVar97 = local_418;
              }
              lVar44 = *plVar51;
              *(double *)(lVar44 + lVar64) = dVar158;
              ((double *)(lVar44 + lVar64))[1] = dVar161;
              *(undefined1 (*) [16])(lVar44 + 0x10 + lVar64) = auVar162;
              plVar3 = (longlong *)(lVar44 + 0x20 + lVar64);
              *plVar3 = (longlong)puVar97;
              plVar3[1] = (longlong)dVar73;
              pdVar33 = (double *)(lVar44 + 0x30 + lVar64);
              *pdVar33 = dVar75;
              pdVar33[1] = dVar146;
              auVar18._8_4_ = SUB84(dVar124,0);
              auVar18._0_8_ = dVar74;
              auVar18._12_4_ = (int)((ulonglong)dVar124 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x40 + lVar64) = auVar18;
              auVar11._8_4_ = SUB84(dVar138,0);
              auVar11._0_8_ = dVar148;
              auVar11._12_4_ = (int)((ulonglong)dVar138 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x50 + lVar64) = auVar11;
              lVar58 = lVar58 + 1;
              lVar64 = lVar64 + 0x60;
              puVar97 = (undefined8 *)local_7f8._0_8_;
              dVar73 = (double)local_7f8._8_8_;
              dVar74 = (double)local_7d8._0_8_;
              dVar75 = (double)local_7d8._8_8_;
              iVar68 = local_798;
              uVar167 = uStack_794;
              iVar40 = local_768;
              uVar169 = uStack_764;
            } while (lVar58 < *(int *)(local_830 + 0x88));
          }
          uStack_764 = uVar169;
          local_768 = iVar40;
          uStack_794 = uVar167;
          local_798 = iVar68;
          iVar68 = local_798;
          uVar167 = uStack_794;
          iVar40 = local_768;
          uVar169 = uStack_764;
          if (plVar43 != plVar51) {
            iVar39 = (int)plVar51[1];
            _Src = (void *)*plVar51;
            *(int *)(plVar43 + 1) = iVar39;
            if (iVar39 == 0 && *(int *)((longlong)plVar43 + 0xc) == 0) {
              *(undefined4 *)((longlong)plVar43 + 0xc) = 0;
            }
            else {
              FUN_144756262(plVar43,iVar39);
              iVar68 = local_798;
              uVar167 = uStack_794;
              iVar40 = local_768;
              uVar169 = uStack_764;
              if (iVar39 != 0) {
                memcpy((void *)*plVar43,_Src,(longlong)iVar39 * 0x60);
                iVar68 = local_798;
                uVar167 = uStack_794;
                iVar40 = local_768;
                uVar169 = uStack_764;
              }
            }
          }
        }
        else {
          iVar39 = *(int *)(local_830 + 0x88);
LAB_1432ebc77:
          if (0 < iVar39) {
            dVar146 = (double)local_818._8_8_ + (double)local_818._8_8_;
            dVar152 = (double)local_808._0_8_ + (double)local_808._0_8_;
            dVar141 = (double)local_818._0_8_ * ((double)local_818._0_8_ + (double)local_818._0_8_);
            local_748 = (undefined8 *)
                        ((1.0 - ((double)local_808._0_8_ * dVar152 +
                                (double)local_818._8_8_ * dVar146)) * dVar74);
            puStack_7b0 = (undefined8 *)
                          ((1.0 - ((double)local_808._0_8_ * dVar152 + dVar141)) * dVar75);
            local_728 = (undefined8 *)
                        ((1.0 - (dVar141 + (double)local_818._8_8_ * dVar146)) * (double)puVar97);
            puStack_760 = (undefined8 *)local_818._0_8_;
            dVar141 = ((double)local_818._0_8_ + (double)local_818._0_8_) * (double)local_808._8_8_;
            local_778 = (undefined8 *)local_808._8_8_;
            puStack_770 = (undefined8 *)local_808._8_8_;
            puStack_740 = (undefined8 *)
                          ((dVar146 * (double)local_818._0_8_ + dVar152 * (double)local_808._8_8_) *
                          dVar74);
            local_718 = (undefined8 *)((dVar152 * (double)local_818._8_8_ + dVar141) * dVar75);
            local_7c8 = (undefined8 *)
                        ((dVar146 * (double)local_808._8_8_ + (double)local_818._0_8_ * dVar152) *
                        (double)puVar97);
            local_7b8 = (undefined8 *)
                        ((dVar146 * (double)local_818._0_8_ - dVar152 * (double)local_808._8_8_) *
                        dVar75);
            puStack_7c0 = (undefined8 *)
                          ((dVar152 * (double)local_818._8_8_ - dVar141) * (double)puVar97);
            local_738 = (undefined8 *)
                        (((double)local_818._0_8_ * dVar152 - dVar146 * (double)local_808._8_8_) *
                        dVar74);
            puStack_720 = (undefined8 *)0x0;
            puStack_730 = (undefined8 *)0x0;
            puStack_710 = (undefined8 *)0x0;
            local_758 = (undefined8 *)local_828._0_8_;
            puStack_750 = (undefined8 *)&DAT_3ff0000000000000;
            local_788 = (undefined8 *)local_818._8_8_;
            puStack_780 = (undefined8 *)local_818._8_8_;
            puStack_790 = (undefined8 *)local_808._0_8_;
            local_7a8 = (undefined8 *)local_818._0_8_;
            puStack_7a0 = (undefined8 *)local_808._8_8_;
            local_6d8 = (undefined8 *)local_818._8_8_;
            puStack_6d0 = (undefined8 *)local_808._0_8_;
            lVar58 = 0;
            lVar64 = 0;
            do {
              lVar44 = (longlong)(int)uVar62 * 0x60;
              pdVar33 = (double *)(local_4f8[0] + lVar44);
              auVar80 = *(undefined1 (*) [16])(local_4f8[0] + 0x40 + lVar44);
              auVar99 = *(undefined1 (*) [16])(local_4f8[0] + 0x50 + lVar44);
              auVar19._8_4_ = SUB84(dVar75,0);
              auVar19._0_8_ = dVar74;
              auVar19._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              auVar107 = minpd(auVar80,auVar19);
              auVar12._8_4_ = SUB84(dVar73,0);
              auVar12._0_8_ = puVar97;
              auVar12._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              auVar102 = minpd(auVar99,auVar12);
              auVar89._8_8_ = -(ulonglong)(auVar107._8_8_ < 0.0);
              auVar89._0_8_ = -(ulonglong)(auVar107._0_8_ < 0.0);
              iVar68 = movmskpd((int)local_4f8[0],auVar89);
              auVar104._8_8_ = -(ulonglong)(auVar102._8_8_ < 0.0);
              auVar104._0_8_ = -(ulonglong)(auVar102._0_8_ < 0.0);
              uVar67 = movmskpd((int)lVar44,auVar104);
              if ((uVar67 & 0x3fffffff) == 0 && iVar68 == 0) {
                dVar146 = *pdVar33;
                dVar152 = pdVar33[1];
                dVar141 = pdVar33[2];
                dVar145 = pdVar33[3];
                dVar138 = dVar152 * (double)CONCAT44(uStack_794,local_798) * -1.0 +
                          (double)CONCAT44(uStack_764,local_768) * dVar145 * 1.0 +
                          (double)local_778 * dVar146 + (double)local_788 * dVar141;
                dVar148 = dVar146 * (double)puStack_790 * 1.0 +
                          (double)puStack_760 * dVar141 * -1.0 + (double)puStack_770 * dVar152 +
                          (double)puStack_780 * dVar145;
                auVar154._0_8_ =
                     dVar145 * (double)CONCAT44(uStack_794,local_798) * 1.0 +
                     (((double)CONCAT44(uStack_764,local_768) * dVar152 * 1.0 +
                      (double)local_778 * dVar141) - (double)local_788 * dVar146);
                auVar154._8_8_ =
                     dVar141 * (double)puStack_790 * -1.0 +
                     (((double)puStack_760 * dVar146 * -1.0 + (double)puStack_770 * dVar145) -
                     (double)puStack_780 * dVar152);
                dVar152 = pdVar33[4] * dVar74;
                dVar110 = pdVar33[5] * dVar75;
                dVar147 = pdVar33[6] * (double)puVar97;
                dVar73 = pdVar33[7] * dVar73;
                dVar146 = dVar110 * (double)local_818._0_8_ - (double)local_6d8 * dVar152;
                dVar141 = dVar147 * (double)local_818._8_8_ - (double)puStack_6d0 * dVar110;
                dVar145 = dVar152 * (double)local_808._0_8_ - (double)local_7a8 * dVar147;
                dVar124 = dVar73 * (double)local_808._8_8_ - (double)puStack_7a0 * dVar73;
                dVar141 = dVar141 + dVar141;
                dVar145 = dVar145 + dVar145;
                dVar146 = dVar146 + dVar146;
                dVar124 = dVar124 + dVar124;
                puVar97 = (undefined8 *)
                          ((dVar146 * (double)local_818._8_8_ - (double)puStack_6d0 * dVar145) +
                           (double)local_778 * dVar141 + dVar152 + (double)local_848);
                dVar152 = (dVar141 * (double)local_808._0_8_ - dVar146 * (double)local_7a8) +
                          (double)puStack_770 * dVar145 + dVar110 + dStack_840;
                dVar141 = (dVar145 * (double)local_818._0_8_ - (double)local_6d8 * dVar141) +
                          (double)local_778 * dVar146 + dVar147 + (double)local_828._0_8_;
                dVar145 = (dVar124 * (double)local_808._8_8_ - dVar124 * (double)puStack_7a0) +
                          (double)puStack_770 * dVar124 + dVar73 + (double)local_828._8_8_;
                dVar74 = auVar80._0_8_ * dVar74;
                dVar75 = auVar80._8_8_ * dVar75;
                dVar73 = auVar99._0_8_ * (double)local_7f8._0_8_;
                dVar146 = auVar99._8_8_ * (double)local_7f8._8_8_;
                uVar167 = 0;
              }
              else {
                local_5e8 = local_748;
                uStack_5e0 = puStack_740;
                local_5d8 = local_738;
                puStack_5d0 = puStack_730;
                local_5c8._8_8_ = puStack_7b0;
                local_5c8._0_8_ = local_7b8;
                local_5b8 = local_718;
                puStack_5b0 = puStack_710;
                local_5a8 = local_7c8;
                puStack_5a0 = puStack_7c0;
                local_598 = local_728;
                puStack_590 = puStack_720;
                local_588 = local_848;
                dStack_580 = dStack_840;
                local_578 = local_758;
                puStack_570 = puStack_750;
                dVar152 = *pdVar33;
                dVar141 = pdVar33[1];
                dVar146 = pdVar33[2];
                dStack_168 = pdVar33[8];
                dStack_158 = pdVar33[9];
                dStack_130 = pdVar33[10];
                dVar124 = dVar141 + dVar141;
                dVar145 = dVar146 + dVar146;
                dVar110 = dVar152 * (dVar152 + dVar152);
                local_178 = (longlong *)
                            ((1.0 - (dVar146 * dVar145 + dVar141 * dVar124)) * dStack_168);
                dStack_150 = (1.0 - (dVar146 * dVar145 + dVar110)) * dStack_158;
                local_128 = (1.0 - (dVar110 + dVar141 * dVar124)) * dStack_130;
                dVar146 = pdVar33[3];
                dVar110 = dVar145 * dVar146;
                dVar147 = (dVar152 + dVar152) * pdVar33[3];
                dVar146 = dVar124 * dVar146;
                dStack_170 = (dVar124 * dVar152 + dVar110) * dStack_168;
                local_148 = (dVar145 * dVar141 + dVar147) * dStack_158;
                local_138 = (dVar146 + *pdVar33 * dVar145) * dStack_130;
                dStack_168 = (*pdVar33 * dVar145 - dVar146) * dStack_168;
                dStack_158 = (dVar124 * dVar152 - dVar110) * dStack_158;
                dStack_130 = (dVar145 * dVar141 - dVar147) * dStack_130;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                local_118 = (undefined8 *)pdVar33[4];
                dStack_110 = pdVar33[5];
                local_108 = pdVar33[6];
                uStack_100 = 0x3ff0000000000000;
                local_858._8_8_ = auVar80._8_8_ * dVar75;
                local_858._0_8_ = auVar80._0_8_ * dVar74;
                dVar73 = auVar99._8_8_ * dVar73;
                local_868._8_4_ = SUB84(dVar73,0);
                local_868._0_8_ = auVar99._0_8_ * (double)puVar97;
                local_868._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar80 = _DAT_149934d80;
                dVar74 = (double)local_468[0] * (double)local_468[0] +
                         (double)local_478 * (double)local_478 +
                         (double)pdStack_470 * (double)pdStack_470;
                dVar75 = (double)local_448 * (double)local_448 +
                         local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
                dVar152 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
                dVar141 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar145 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                dVar73 = (double)local_868._0_8_;
                dVar146 = (double)local_868._8_8_;
                dVar74 = (double)local_858._0_8_;
                dVar75 = (double)local_858._8_8_;
                auVar90._8_8_ = -(ulonglong)(0.0 <= (double)local_858._8_8_);
                auVar90._0_8_ = -(ulonglong)(0.0 <= (double)local_858._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar90);
                dVar110 = (double)(~-(ulonglong)(0.0 <= (double)local_868._0_8_) &
                                   0xbff0000000000000 |
                                  (ulonglong)
                                  ((uint)(-(ulonglong)(0.0 <= (double)local_868._0_8_) >> 0x20) &
                                  0x3ff00000) << 0x20);
                dVar147 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar152 * dVar147);
                pdStack_470 = (double *)((double)pdStack_470 * dVar152 * dVar147);
                local_468[0] = (undefined8 *)(dVar152 * (double)local_468[0] * dVar147);
                dVar152 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar141 * (double)local_448 * dVar152);
                local_450 = local_450 * dVar141 * dVar152;
                local_458 = dVar152 * local_458 * dVar141;
                local_428 = dVar145 * local_428 * dVar110;
                local_430 = (undefined8 *)((double)local_430 * dVar145 * dVar110);
                local_438 = dVar110 * local_438 * dVar145;
                puVar97 = &local_618;
                ppcVar42 = &local_478;
                FUN_14481fd10();
                uVar167 = SUB84(ppcVar42,0);
                iVar68 = (int)puVar97;
                dVar152 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar141 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar145 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar110 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar147 = dVar145 * dVar145 + dVar152 * dVar152;
                dVar124 = dVar110 * dVar110 + dVar141 * dVar141;
                auVar119._0_8_ = dVar147 + dVar124;
                auVar119._8_8_ = dVar147 + dVar124;
                auVar91._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar119._8_8_);
                auVar91._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar119._0_8_);
                auVar99 = sqrtpd(auVar119,auVar119);
                auVar80 = divpd(auVar80,auVar99);
                auVar129._0_8_ = auVar80._0_8_ * dVar145;
                auVar129._8_8_ = auVar80._8_8_ * dVar110;
                dVar138 = (double)((ulonglong)(dVar152 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar119._0_8_));
                dVar148 = (double)((ulonglong)(dVar141 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar119._8_8_));
                auVar154 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar129,auVar91);
                dVar152 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar145 = 0.0;
                dVar141 = local_408;
                puVar97 = local_418;
              }
              lVar44 = *plVar55;
              auVar80 = *(undefined1 (*) [16])(lVar44 + 0x40 + lVar58);
              dVar110 = auVar80._0_8_;
              dVar124 = auVar80._8_8_;
              auVar99 = *(undefined1 (*) [16])(lVar44 + 0x50 + lVar58);
              dVar147 = auVar99._0_8_;
              dVar133 = auVar99._8_8_;
              auVar105._8_8_ = dVar75;
              auVar105._0_8_ = dVar74;
              auVar80 = minpd(auVar105,auVar80);
              auVar120._8_8_ = dVar146;
              auVar120._0_8_ = dVar73;
              auVar99 = minpd(auVar120,auVar99);
              auVar106._8_8_ = -(ulonglong)(auVar80._8_8_ < 0.0);
              auVar106._0_8_ = -(ulonglong)(auVar80._0_8_ < 0.0);
              iVar68 = movmskpd(iVar68,auVar106);
              auVar121._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
              auVar121._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
              uVar67 = movmskpd(uVar167,auVar121);
              dVar139 = auVar154._0_8_;
              dVar140 = auVar154._8_8_;
              if ((uVar67 & 0x3fffffff) == 0 && iVar68 == 0) {
                local_868._8_4_ = SUB84(dVar146,0);
                local_868._0_8_ = dVar73;
                local_868._12_4_ = (int)((ulonglong)dVar146 >> 0x20);
                dVar22 = *(double *)(lVar44 + lVar58);
                dVar23 = ((double *)(lVar44 + lVar58))[1];
                pdVar33 = (double *)(lVar44 + 0x10 + lVar58);
                dVar24 = *pdVar33;
                dVar158 = pdVar33[1];
                pdVar33 = (double *)(lVar44 + 0x18 + lVar58);
                dVar163 = *pdVar33;
                dVar146 = *pdVar33;
                dVar153 = *(double *)(lVar44 + lVar58);
                dVar155 = *(double *)(lVar44 + lVar58);
                pdVar33 = (double *)(lVar44 + 8 + lVar58);
                dVar156 = *pdVar33;
                dVar157 = *pdVar33;
                pdVar33 = (double *)(lVar44 + 0x10 + lVar58);
                dVar160 = *pdVar33;
                dVar164 = *pdVar33;
                dVar161 = dVar148 * dVar160 * -1.0 +
                          dVar139 * dVar156 + dVar140 * dVar153 * 1.0 + dVar138 * dVar163;
                dVar109 = dVar138 * dVar164 * 1.0 +
                          dVar140 * dVar157 + dVar139 * dVar155 * -1.0 + dVar148 * dVar146;
                auVar122._0_8_ =
                     dVar140 * dVar160 * 1.0 +
                     ((dVar153 * dVar148 * 1.0 + dVar139 * dVar163) - dVar138 * dVar156);
                auVar122._8_8_ =
                     dVar139 * dVar164 * -1.0 +
                     ((dVar155 * dVar138 * -1.0 + dVar140 * dVar146) - dVar148 * dVar157);
                dVar138 = (double)puVar97 * dVar110;
                dVar152 = dVar152 * dVar124;
                dVar141 = dVar141 * dVar147;
                dVar145 = dVar145 * dVar133;
                dVar140 = dVar152 * dVar22 - dVar138 * dVar23;
                dVar155 = dVar141 * dVar23 - dVar152 * dVar24;
                dVar148 = dVar138 * dVar24 - dVar141 * dVar22;
                dVar139 = dVar145 * dVar158 - dVar145 * dVar158;
                dVar155 = dVar155 + dVar155;
                dVar148 = dVar148 + dVar148;
                dVar140 = dVar140 + dVar140;
                dVar139 = dVar139 + dVar139;
                dVar74 = dVar74 * dVar110;
                dVar75 = dVar75 * dVar124;
                dVar73 = dVar73 * dVar147;
                dVar133 = (double)local_868._8_8_ * dVar133;
                pdVar33 = (double *)(lVar44 + 0x20 + lVar58);
                puVar97 = (undefined8 *)
                          ((dVar140 * dVar23 - dVar24 * dVar148) + dVar163 * dVar155 + dVar138 +
                          *pdVar33);
                dVar152 = (dVar155 * dVar24 - dVar140 * dVar22) + dVar146 * dVar148 + dVar152 +
                          pdVar33[1];
                pdVar33 = (double *)(lVar44 + 0x30 + lVar58);
                dVar141 = (dVar148 * dVar22 - dVar23 * dVar155) + dVar163 * dVar140 + dVar141 +
                          *pdVar33;
                dVar146 = (dVar139 * dVar158 - dVar139 * dVar158) + dVar146 * dVar139 + dVar145 +
                          pdVar33[1];
              }
              else {
                local_868._8_8_ = dVar146 * dVar133;
                local_868._0_8_ = dVar73 * dVar147;
                dVar163 = *(double *)(lVar44 + lVar58);
                dVar155 = ((double *)(lVar44 + lVar58))[1];
                dVar145 = *(double *)(lVar44 + 0x10 + lVar58);
                dVar153 = dVar155 + dVar155;
                dVar156 = dVar145 + dVar145;
                dVar164 = dVar163 * (dVar163 + dVar163);
                local_598 = (undefined8 *)((1.0 - (dVar164 + dVar155 * dVar153)) * dVar147);
                dVar133 = *(double *)(lVar44 + lVar58) * dVar156;
                pdVar33 = (double *)(lVar44 + 0x18 + lVar58);
                dVar146 = *pdVar33;
                dVar157 = dVar156 * dVar146;
                dVar160 = (dVar163 + dVar163) * *pdVar33;
                dVar146 = dVar153 * dVar146;
                local_5a8 = (undefined8 *)((dVar146 + dVar133) * dVar147);
                puStack_5a0 = (undefined8 *)((dVar156 * dVar155 - dVar160) * dVar147);
                local_858._8_8_ = dVar75 * dVar124;
                local_858._0_8_ = dVar74 * dVar110;
                local_5e8 = (undefined8 *)
                            ((1.0 - (dVar145 * dVar156 + dVar155 * dVar153)) * dVar110);
                dVar145 = (1.0 - (dVar145 * dVar156 + dVar164)) * dVar124;
                uStack_5e0 = (undefined8 *)((dVar153 * dVar163 + dVar157) * dVar110);
                local_5b8 = (undefined8 *)((dVar156 * dVar155 + dVar160) * dVar124);
                local_5d8 = (undefined8 *)((dVar133 - dVar146) * dVar110);
                puStack_5d0 = (undefined8 *)0x0;
                local_5c8._8_4_ = SUB84(dVar145,0);
                local_5c8._0_8_ = (dVar153 * dVar163 - dVar157) * dVar124;
                local_5c8._12_4_ = (int)((ulonglong)dVar145 >> 0x20);
                puStack_5b0 = (undefined8 *)0x0;
                puStack_590 = (undefined8 *)0x0;
                puVar34 = (undefined8 *)(lVar44 + 0x20 + lVar58);
                local_588 = (undefined8 *)*puVar34;
                dStack_580 = (double)puVar34[1];
                local_578 = *(undefined8 **)(lVar44 + 0x30 + lVar58);
                puStack_570 = (undefined8 *)&DAT_3ff0000000000000;
                dVar110 = dVar148 + dVar148;
                dVar146 = dVar139 + dVar139;
                dVar147 = dVar138 * (dVar138 + dVar138);
                local_128 = (1.0 - (dVar147 + dVar148 * dVar110)) * dVar73;
                dVar145 = (dVar138 + dVar138) * dVar140;
                local_138 = (dVar138 * dVar146 + dVar110 * dVar140) * dVar73;
                dStack_158 = (dVar110 * dVar138 - dVar146 * dVar140) * dVar75;
                dStack_130 = (dVar146 * dVar148 - dVar145) * dVar73;
                local_178 = (longlong *)((1.0 - (dVar139 * dVar146 + dVar148 * dVar110)) * dVar74);
                dStack_150 = (1.0 - (dVar139 * dVar146 + dVar147)) * dVar75;
                dStack_170 = (dVar110 * dVar138 + dVar146 * dVar140) * dVar74;
                local_148 = (dVar146 * dVar148 + dVar145) * dVar75;
                dStack_168 = (dVar138 * dVar146 - dVar110 * dVar140) * dVar74;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                uStack_100 = 0x3ff0000000000000;
                local_118 = puVar97;
                dStack_110 = dVar152;
                local_108 = dVar141;
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar80 = _DAT_149934d80;
                local_7e8 = local_468[0];
                dVar74 = (double)local_468[0] * (double)local_468[0] +
                         (double)local_478 * (double)local_478 +
                         (double)pdStack_470 * (double)pdStack_470;
                dVar75 = (double)local_448 * (double)local_448 +
                         local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
                dVar146 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
                dVar152 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar74 = (double)local_858._0_8_;
                dVar75 = (double)local_858._8_8_;
                dVar141 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                dVar73 = (double)local_868._0_8_;
                dVar133 = (double)local_868._8_8_;
                auVar92._8_8_ = -(ulonglong)(0.0 <= (double)local_858._8_8_);
                auVar92._0_8_ = -(ulonglong)(0.0 <= (double)local_858._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar92);
                dVar145 = (double)(~-(ulonglong)(0.0 <= (double)local_868._0_8_) &
                                   0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= (double)local_868._0_8_) & 0x3ff0000000000000)
                ;
                dVar110 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar146 * dVar110);
                pdStack_470 = (double *)((double)pdStack_470 * dVar146 * dVar110);
                local_468[0] = (undefined8 *)(dVar146 * (double)local_468[0] * dVar110);
                dVar146 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar152 * (double)local_448 * dVar146);
                local_450 = local_450 * dVar152 * dVar146;
                local_458 = dVar146 * local_458 * dVar152;
                local_428 = dVar141 * local_428 * dVar145;
                local_430 = (undefined8 *)((double)local_430 * dVar141 * dVar145);
                local_438 = dVar145 * local_438 * dVar141;
                FUN_14481fd10(&local_618,&local_478);
                dVar146 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar152 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar141 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar145 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar110 = dVar141 * dVar141 + dVar146 * dVar146;
                dVar147 = dVar145 * dVar145 + dVar152 * dVar152;
                auVar130._0_8_ = dVar110 + dVar147;
                auVar130._8_8_ = dVar110 + dVar147;
                auVar93._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar130._8_8_);
                auVar93._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar130._0_8_);
                auVar99 = sqrtpd(auVar130,auVar130);
                auVar80 = divpd(auVar80,auVar99);
                auVar136._0_8_ = auVar80._0_8_ * dVar141;
                auVar136._8_8_ = auVar80._8_8_ * dVar145;
                dVar161 = (double)((ulonglong)(dVar146 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar130._0_8_));
                dVar109 = (double)((ulonglong)(dVar152 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar130._8_8_));
                auVar122 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar136,auVar93);
                dVar152 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar146 = 0.0;
                puVar97 = local_418;
                dVar141 = local_408;
              }
              lVar44 = *plVar43;
              *(double *)(lVar44 + lVar58) = dVar161;
              ((double *)(lVar44 + lVar58))[1] = dVar109;
              *(undefined1 (*) [16])(lVar44 + 0x10 + lVar58) = auVar122;
              plVar51 = (longlong *)(lVar44 + 0x20 + lVar58);
              *plVar51 = (longlong)puVar97;
              plVar51[1] = (longlong)dVar152;
              pdVar33 = (double *)(lVar44 + 0x30 + lVar58);
              *pdVar33 = dVar141;
              pdVar33[1] = dVar146;
              auVar20._8_4_ = SUB84(dVar75,0);
              auVar20._0_8_ = dVar74;
              auVar20._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x40 + lVar58) = auVar20;
              auVar13._8_4_ = SUB84(dVar133,0);
              auVar13._0_8_ = dVar73;
              auVar13._12_4_ = (int)((ulonglong)dVar133 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x50 + lVar58) = auVar13;
              lVar64 = lVar64 + 1;
              lVar58 = lVar58 + 0x60;
              puVar97 = (undefined8 *)local_7f8._0_8_;
              dVar73 = (double)local_7f8._8_8_;
              dVar74 = (double)local_7d8._0_8_;
              dVar75 = (double)local_7d8._8_8_;
              iVar68 = local_798;
              uVar167 = uStack_794;
              iVar40 = local_768;
              uVar169 = uStack_764;
            } while (lVar64 < *(int *)(local_830 + 0x88));
          }
        }
        goto LAB_1432ed6a8;
      }
      goto LAB_1432ea163;
    }
LAB_1432ed6dd:
    if (local_658 != (code *)0x0) {
      FUN_1400020a8(local_658);
    }
  }
LAB_1432ed6ea:
  if (local_688 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_508 != (uint *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408fc0a6(local_4f8);
  FUN_1475b463e(local_4b8);
  if ((local_f0 ^ (ulonglong)auStack_8d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ed840 FUN_1432ed840 body=22918 status=ok
// SIG undefined FUN_1432ed840(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432ed840(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  void *_Src;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  code *pcVar30;
  char cVar31;
  uint *puVar32;
  double *pdVar33;
  undefined8 *puVar34;
  undefined1 *puVar35;
  byte bVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  longlong lVar41;
  code **ppcVar42;
  longlong *plVar43;
  longlong lVar44;
  code *pcVar45;
  uint uVar46;
  undefined8 *puVar47;
  code *pcVar48;
  undefined8 *puVar49;
  code *pcVar50;
  ulonglong uVar51;
  undefined2 *puVar52;
  code *pcVar53;
  code *pcVar54;
  longlong lVar55;
  code *pcVar56;
  int iVar57;
  code *pcVar58;
  uint uVar59;
  ulonglong uVar60;
  longlong lVar61;
  undefined8 *puVar62;
  code *pcVar63;
  longlong *plVar64;
  longlong *plVar65;
  uint uVar66;
  int iVar67;
  undefined8 *puVar68;
  code *pcVar69;
  bool bVar70;
  ulonglong uVar71;
  float fVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  undefined8 *puVar76;
  undefined8 *puVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 *extraout_XMM0_Qb;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 *puVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar109;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  double dVar124;
  undefined1 auVar123 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  double dVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  double dVar138;
  undefined1 auVar137 [16];
  double dVar139;
  double dVar140;
  double dVar141;
  undefined1 auVar142 [16];
  double dVar145;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  double dVar146;
  double dVar147;
  double dVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  double dVar152;
  undefined1 auVar151 [16];
  double dVar153;
  undefined1 auVar154 [16];
  double dVar155;
  double dVar156;
  double dVar157;
  double dVar158;
  undefined1 auVar159 [16];
  double dVar160;
  double dVar161;
  double dVar163;
  undefined1 auVar162 [16];
  double dVar164;
  undefined4 uVar165;
  undefined4 uVar166;
  undefined4 uVar167;
  undefined4 uVar168;
  undefined4 uVar169;
  undefined4 uVar170;
  undefined4 uVar171;
  undefined4 uVar172;
  undefined1 auStack_8e8 [32];
  undefined4 local_8c8;
  undefined4 local_8c0;
  undefined4 local_8b8;
  undefined8 local_8b0;
  wchar_t *local_8a8;
  undefined1 *local_8a0;
  undefined1 *local_898;
  code **local_890;
  code *local_888;
  code *local_880;
  undefined1 local_878 [16];
  undefined1 local_868 [16];
  undefined8 *local_858;
  double dStack_850;
  longlong local_840;
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  undefined1 local_808 [16];
  undefined8 *local_7f8;
  undefined8 *puStack_7f0;
  code *local_7e0;
  undefined1 local_7d8 [16];
  undefined8 *local_7c8;
  undefined8 *puStack_7c0;
  undefined8 *local_7b8;
  undefined8 *puStack_7b0;
  longlong local_7a0;
  undefined8 *local_798;
  undefined8 *puStack_790;
  int local_788;
  undefined4 uStack_784;
  undefined8 *puStack_780;
  undefined8 *local_778;
  undefined8 *puStack_770;
  undefined8 *local_768;
  undefined8 *puStack_760;
  int local_758;
  undefined4 uStack_754;
  undefined8 *puStack_750;
  undefined8 *local_748;
  undefined8 *puStack_740;
  undefined8 *local_738;
  undefined8 *puStack_730;
  undefined8 *local_728;
  undefined8 *puStack_720;
  undefined8 *local_718;
  undefined8 *puStack_710;
  undefined8 *local_708;
  undefined8 *puStack_700;
  longlong local_6f0;
  longlong local_6e8;
  code *local_6e0;
  undefined8 *local_6d8;
  undefined8 *puStack_6d0;
  longlong local_6c0;
  undefined8 *local_6b8;
  longlong local_6b0;
  undefined2 local_6a8 [2];
  undefined1 local_6a3;
  undefined4 local_6a0;
  undefined1 local_69c;
  undefined2 *local_698;
  undefined2 *local_690;
  void *local_688;
  ulonglong uStack_680;
  undefined8 *local_670;
  longlong local_668;
  int local_660;
  code *local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  double dStack_630;
  double local_628;
  undefined8 local_618;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined2 uStack_606;
  undefined1 uStack_604;
  undefined1 uStack_603;
  undefined2 uStack_602;
  undefined4 uStack_600;
  uint uStack_5fc;
  undefined8 local_5f8;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 *puStack_5d0;
  undefined1 local_5c8 [16];
  undefined8 local_5b8;
  undefined8 *puStack_5b0;
  undefined8 *local_5a8;
  undefined8 *puStack_5a0;
  undefined8 *local_598;
  undefined8 *puStack_590;
  undefined8 *local_588;
  double dStack_580;
  undefined8 *local_578;
  undefined8 *puStack_570;
  uint local_518 [4];
  uint *local_508;
  uint local_500;
  uint local_4fc;
  longlong local_4f8 [2];
  undefined1 local_4e8 [16];
  undefined1 *local_4d8;
  int local_4d0;
  undefined8 local_4cc;
  undefined4 local_4c4;
  longlong local_4b8 [2];
  undefined1 local_4a8 [16];
  undefined1 *local_498;
  int local_490;
  undefined1 local_48c [8];
  undefined4 local_484;
  code *local_478;
  double *pdStack_470;
  undefined8 *local_468 [2];
  double local_458;
  double local_450;
  undefined8 *local_448;
  undefined4 local_440;
  double local_438;
  undefined8 *local_430;
  double local_428;
  longlong local_420;
  undefined8 *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  double local_408;
  undefined8 *local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  undefined8 *local_3e8;
  undefined4 local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  int local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined4 local_3b0;
  undefined8 *local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 *local_390;
  longlong *local_178;
  double dStack_170;
  double dStack_168;
  double *local_160;
  double dStack_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  uVar59 = *(uint *)(param_1 + 0x78);
  local_868._0_4_ = *(undefined4 *)(param_1 + 0x88);
  local_498 = (undefined1 *)0x0;
  local_490 = 0;
  local_4b8[0] = 0;
  local_4b8[1] = 0;
  local_48c = (undefined1  [8])0xffffffff00000080;
  local_484 = 0;
  local_4d8 = (undefined1 *)0x0;
  local_4d0 = 0;
  local_4f8[0] = 0;
  local_4f8[1] = 0;
  local_4cc = 0xffffffff00000080;
  local_4c4 = 0;
  local_508 = (uint *)0x0;
  local_4fc = 0x80;
  uVar66 = uVar59 + 0x1f;
  local_840 = param_1;
  local_6c0 = param_2;
  local_6b8 = param_4;
  local_500 = uVar59;
  if (uVar66 < 0x20) {
    local_688 = (void *)0x0;
    uStack_680 = 0;
    if ((int)uVar59 < 0) goto LAB_1432eee93;
    goto LAB_1432ed985;
  }
  if (uVar66 < 0xa0) {
    puVar32 = local_518;
LAB_1432eee32:
    uVar66 = uVar66 >> 3 & 0xfffffffc;
  }
  else {
    FUN_1446efa72(&local_508,0,uVar66 >> 5,4);
    local_4fc = uVar66 & 0xffffffe0;
    puVar32 = local_518;
    if (local_508 != (uint *)0x0) {
      puVar32 = local_508;
    }
    if (uVar66 < 0x120) goto LAB_1432eee32;
    uVar66 = (uVar66 >> 5) << 2;
  }
  memset(puVar32,0,(ulonglong)uVar66);
  uVar66 = local_500 + 0x1f;
  if (-1 < (int)local_500) {
    uVar66 = local_500;
  }
  if ((int)local_500 % 0x20 != 0) {
    puVar32 = local_508;
    if (local_508 == (uint *)0x0) {
      puVar32 = local_518;
    }
    bVar36 = -(char)((int)local_500 % 0x20);
    puVar32[(int)uVar66 >> 5] = (puVar32[(int)uVar66 >> 5] << (bVar36 & 0x1f)) >> (bVar36 & 0x1f);
  }
  local_688 = (void *)0x0;
  if ((int)uVar59 < 1) {
LAB_1432eee93:
    uStack_680 = 0;
    local_688 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar59);
  }
  uStack_680 = (ulonglong)uVar59;
  FUN_1446f48e2(&local_688);
  memset(local_688,0,(ulonglong)uVar59 * 4);
LAB_1432ed985:
  uVar59 = param_3[6];
  if (uVar59 == 0) {
    uVar51 = 1;
    uVar71 = 0;
    uVar60 = 0;
    iVar67 = 0;
  }
  else {
    puVar32 = *(uint **)(param_3 + 4);
    if (*(uint **)(param_3 + 4) == (uint *)0x0) {
      puVar32 = param_3;
    }
    uVar66 = *puVar32;
    if (uVar66 == 0) {
      iVar67 = uVar59 + 0x1e;
      if (-1 < (int)(uVar59 - 1)) {
        iVar67 = uVar59 - 1;
      }
      uVar71 = 0;
      uVar60 = (ulonglong)(uint)(iVar67 >> 5);
      if (iVar67 >> 5 < 1) {
        uVar60 = uVar71;
      }
      iVar67 = 0;
      do {
        if (uVar60 == uVar71) goto LAB_1432ee215;
        iVar67 = iVar67 + 0x20;
        uVar66 = puVar32[uVar71 + 1];
        uVar71 = uVar71 + 1;
      } while (uVar66 == 0);
    }
    else {
      uVar71 = 0;
      iVar67 = 0;
    }
    uVar51 = (ulonglong)(-uVar66 & uVar66);
    uVar60 = uVar51 * 2 + 1;
    lVar61 = 0x3f;
    if (uVar60 != 0) {
      for (; uVar60 >> lVar61 == 0; lVar61 = lVar61 + -1) {
      }
    }
    uVar66 = (iVar67 - ((uint)lVar61 ^ 0x3f)) + 0x3e;
    uVar60 = (ulonglong)uVar66;
    if ((int)uVar59 <= (int)uVar66) {
      uVar60 = (ulonglong)uVar59;
    }
  }
  if ((int)uVar60 < (int)uVar59) {
    local_858 = (undefined8 *)(local_840 + 0x60);
    local_828._0_8_ = local_840 + 0x50;
    uVar59 = 0xffffffff;
    local_878._0_8_ = param_3;
    do {
      local_818._0_4_ = uVar59;
      local_838._0_4_ = iVar67;
      local_808._0_8_ = uVar71;
      puVar97 = *(undefined8 **)(local_840 + 0x70);
      if (*(undefined8 **)(local_840 + 0x70) == (undefined8 *)0x0) {
        puVar97 = local_858;
      }
      uVar59 = (uint)uVar60;
      uVar66 = uVar59 + 0x1f;
      if (-1 < (int)uVar59) {
        uVar66 = uVar59;
      }
      if ((*(uint *)((longlong)puVar97 + (longlong)((int)uVar66 >> 5) * 4) >> (uVar59 & 0x1f) & 1)
          == 0) {
        lVar61 = FUN_1475b4386(local_828._0_8_,uVar60);
        if (lVar61 != 0) goto LAB_1432edaf5;
      }
      else {
LAB_1432edaf5:
        FUN_140ee84a4((longlong)(int)uVar59 * 0x10 + *(longlong *)*local_6b8,local_868._0_4_,1);
        if (uVar59 != 0xffffffff) {
          iVar67 = 0;
          do {
            iVar40 = (int)uVar60;
            uVar59 = 1 << ((byte)uVar60 & 0x1f);
            puVar32 = local_508;
            if (local_508 == (uint *)0x0) {
              puVar32 = local_518;
            }
            iVar39 = iVar40 + 0x1f;
            if (-1 < iVar40) {
              iVar39 = iVar40;
            }
            puVar32[iVar39 >> 5] = puVar32[iVar39 >> 5] | uVar59;
            lVar61 = (longlong)iVar40;
            iVar37 = *(int *)((longlong)local_688 + lVar61 * 4);
            if (iVar37 < iVar67) {
              iVar37 = iVar67;
            }
            *(int *)((longlong)local_688 + lVar61 * 4) = iVar37;
            dVar152 = dRam000000014c8464d8;
            puVar97 = DAT_14c8464d0;
            uVar171 = DAT_14c8464c8._4_4_;
            uVar170 = (undefined4)DAT_14c8464c8;
            uVar168 = DAT_14c8464c0._4_4_;
            uVar166 = (undefined4)DAT_14c8464c0;
            dVar146 = DAT_14c8464b8;
            dVar73 = DAT_14c8464b0;
            uVar172 = DAT_14c8464a8._4_4_;
            uVar165 = (undefined4)DAT_14c8464a8;
            uVar169 = DAT_14c8464a0._4_4_;
            uVar167 = (undefined4)DAT_14c8464a0;
            dVar75 = DAT_14c846488;
            dVar74 = DAT_14c846480;
            auVar80._8_8_ = (double)DAT_14c846498;
            auVar80._0_8_ = (double)DAT_14c846490;
            puVar32 = (uint *)FUN_1475b443c(local_828._0_8_,uVar60);
            if ((((((puVar32 != (uint *)0x0) && (puVar32[1] != 0)) &&
                  (uVar66 = *puVar32, -1 < (int)uVar66)) &&
                 (((int)uVar66 < DAT_14c9647dc &&
                  (plVar43 = (longlong *)
                             ((ulonglong)((uVar66 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar66 >> 0x10) * 8)),
                  plVar43 != (longlong *)0x0)))) && (*(uint *)(plVar43 + 2) == puVar32[1])) &&
               (((*(uint *)(plVar43 + 1) & 0x10200000) == 0 && (lVar55 = *plVar43, lVar55 != 0)))) {
              if (DAT_14cac7648 == 0) {
                local_478 = FUN_144a7958c;
                local_880 = FUN_14081d0ea;
                local_888 = FUN_143242436;
                local_890 = &local_478;
                local_898 = &LAB_14789ef1f;
                local_8a0 = &LAB_1417b008f;
                local_8a8 = L"Engine";
                local_8b0 = 0x8000000000;
                local_8b8 = 0x10000004;
                local_8c0 = 0x10;
                local_8c8 = 0x2b0;
                FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
              }
              if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar55 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar55 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
                uVar166 = (undefined4)*(undefined8 *)(lVar55 + 0x1c8);
                uVar168 = (undefined4)((ulonglong)*(undefined8 *)(lVar55 + 0x1c8) >> 0x20);
                uVar71 = *(ulonglong *)(lVar55 + 0x1d0);
                puVar97 = *(undefined8 **)(lVar55 + 0x1d8);
                uVar167 = (undefined4)*(undefined8 *)(lVar55 + 0x198);
                uVar169 = (undefined4)((ulonglong)*(undefined8 *)(lVar55 + 0x198) >> 0x20);
                puVar34 = *(undefined8 **)(lVar55 + 0x1a0);
                dVar73 = *(double *)(lVar55 + 0x1a8);
                auVar80 = *(undefined1 (*) [16])(lVar55 + 0x1b0);
                dVar75 = auVar80._0_8_;
                dVar146 = auVar80._8_8_;
                dVar74 = *(double *)(lVar55 + 0x1c0);
                pdVar33 = *(double **)(lVar55 + 0x230);
                if (pdVar33 == (double *)0x0) {
                  pdVar33 = (double *)FUN_14001cc68(0x40,0x10);
                  dVar152 = DAT_14c8463d8;
                  *pdVar33 = DAT_14c8463d0;
                  pdVar33[1] = dVar152;
                  dVar152 = DAT_14c8463e8;
                  pdVar33[2] = DAT_14c8463e0;
                  pdVar33[3] = dVar152;
                  dVar152 = DAT_14c846500;
                  pdVar33[4] = DAT_14c8464f8;
                  pdVar33[5] = dVar152;
                  pdVar33[6] = DAT_14c846508;
                  *(double **)(lVar55 + 0x230) = pdVar33;
                }
                auVar99 = _DAT_1499387d0;
                if ((((pdVar33[4] != dVar75) || (NAN(pdVar33[4]) || NAN(dVar75))) ||
                    (pdVar33[5] != dVar146)) ||
                   (((NAN(pdVar33[5]) || NAN(dVar146) || (pdVar33[6] != dVar74)) ||
                    (NAN(pdVar33[6]) || NAN(dVar74))))) {
                  auVar111._8_8_ = 0;
                  auVar111._0_8_ = dVar74;
                  dVar152 = (double)DAT_1499387d0;
                  dVar141 = DAT_1499387d0._8_8_;
                  auVar80 = divpd(auVar80,_DAT_1499387d0);
                  auVar107 = divpd(auVar111,_DAT_1499387d0);
                  auVar80 = roundpd(auVar80,auVar80,3);
                  auVar107 = roundpd(auVar107,auVar107,3);
                  auVar149._0_8_ = dVar75 - auVar80._0_8_ * dVar152;
                  auVar149._8_8_ = dVar146 - auVar80._8_8_ * dVar141;
                  auVar112._0_8_ = dVar74 - auVar107._0_8_ * dVar152;
                  auVar112._8_8_ = 0.0 - auVar107._8_8_ * dVar141;
                  auVar142._0_8_ = auVar149._0_8_ + dVar152;
                  auVar142._8_8_ = auVar149._8_8_ + dVar141;
                  auVar125._0_8_ = auVar112._0_8_ + dVar152;
                  auVar125._8_8_ = auVar112._8_8_ + dVar141;
                  auVar107._8_8_ = -(ulonglong)(0.0 <= auVar149._8_8_);
                  auVar107._0_8_ = -(ulonglong)(0.0 <= auVar149._0_8_);
                  auVar107 = blendvpd(auVar142,auVar149,auVar107);
                  auVar102._8_8_ = -(ulonglong)(0.0 <= auVar112._8_8_);
                  auVar102._0_8_ = -(ulonglong)(0.0 <= auVar112._0_8_);
                  auVar80 = blendvpd(auVar125,auVar112,auVar102);
                  auVar113._0_8_ = auVar107._0_8_ + -360.0;
                  auVar113._8_8_ = auVar107._8_8_ + -360.0;
                  auVar134._0_8_ = auVar80._0_8_ + -360.0;
                  auVar134._8_8_ = auVar80._8_8_ + 0.0;
                  auVar78._8_8_ = -(ulonglong)(180.0 < auVar107._8_8_);
                  auVar78._0_8_ = -(ulonglong)(180.0 < auVar107._0_8_);
                  auVar107 = blendvpd(auVar107,auVar113,auVar78);
                  auVar79._8_8_ = -(ulonglong)(180.0 < auVar80._8_8_);
                  auVar79._0_8_ = -(ulonglong)(180.0 < auVar80._0_8_);
                  auVar80 = blendvpd(auVar80,auVar134,auVar79);
                  *(undefined1 (*) [16])(pdVar33 + 4) = auVar107;
                  dVar74 = auVar80._0_8_;
                  pdVar33[6] = dVar74;
                  auVar150._8_8_ = 0;
                  auVar150._0_8_ = dVar74;
                  auVar80 = divpd(auVar107,auVar99);
                  auVar99 = divpd(auVar150,auVar99);
                  auVar80 = roundpd(auVar80,auVar80,3);
                  auVar99 = roundpd(auVar99,auVar99,3);
                  dVar145 = (auVar107._0_8_ - auVar80._0_8_ * dVar152) * 0.008726646259971648;
                  dVar110 = (auVar107._8_8_ - auVar80._8_8_ * dVar141) * 0.008726646259971648;
                  dVar74 = (dVar74 - auVar99._0_8_ * dVar152) * 0.008726646259971648;
                  dVar147 = (0.0 - auVar99._8_8_ * dVar141) * 0.008726646259971648;
                  local_7c8 = (undefined8 *)sin(dVar145);
                  puStack_7c0 = extraout_XMM0_Qb;
                  dVar75 = sin(dVar110);
                  local_7d8._8_8_ = 0;
                  local_7d8._0_8_ = uVar71;
                  dVar146 = sin(dVar74);
                  puStack_7f0 = (undefined8 *)0x0;
                  puStack_7b0 = (undefined8 *)0x0;
                  local_7f8 = puVar34;
                  local_7b8 = puVar97;
                  sin(dVar147);
                  dVar152 = cos(dVar145);
                  dVar141 = cos(dVar110);
                  dVar145 = cos(dVar74);
                  cos(dVar147);
                  auVar80._0_8_ =
                       -(dVar141 * (double)local_7c8 * dVar146) + dVar75 * dVar152 * dVar145;
                  auVar80._8_8_ = dVar75 * (double)local_7c8 * dVar146 + dVar141 * dVar152 * dVar145
                  ;
                  dVar74 = (double)local_7c8 * dVar75 * dVar145 - dVar152 * dVar141 * dVar146;
                  dVar75 = -((double)local_7c8 * dVar141 * dVar145) - dVar152 * dVar75 * dVar146;
                  *pdVar33 = dVar74;
                  pdVar33[1] = dVar75;
                  *(undefined1 (*) [16])(pdVar33 + 2) = auVar80;
                  puVar34 = local_7f8;
                  uVar71 = local_7d8._0_8_;
                  puVar97 = local_7b8;
                }
                else {
                  dVar74 = *pdVar33;
                  dVar75 = pdVar33[1];
                  auVar80 = *(undefined1 (*) [16])(pdVar33 + 2);
                }
                uVar165 = SUB84(puVar34,0);
                uVar172 = (undefined4)((ulonglong)puVar34 >> 0x20);
                dVar146 = 0.0;
                uVar170 = (undefined4)uVar71;
                uVar171 = (undefined4)(uVar71 >> 0x20);
                dVar152 = 0.0;
              }
            }
            if ((iVar40 < 0) || (local_4d0 <= iVar40)) {
LAB_1432edf5a:
              FUN_1401280b4(local_4f8,&local_478,uVar60);
              *pdStack_470 = dVar74;
              pdStack_470[1] = dVar75;
              *(undefined1 (*) [16])(pdStack_470 + 2) = auVar80;
              *(undefined4 *)(pdStack_470 + 4) = uVar167;
              *(undefined4 *)((longlong)pdStack_470 + 0x24) = uVar169;
              *(undefined4 *)(pdStack_470 + 5) = uVar165;
              *(undefined4 *)((longlong)pdStack_470 + 0x2c) = uVar172;
              pdStack_470[6] = dVar73;
              pdStack_470[7] = dVar146;
              *(undefined4 *)(pdStack_470 + 8) = uVar166;
              *(undefined4 *)((longlong)pdStack_470 + 0x44) = uVar168;
              *(undefined4 *)(pdStack_470 + 9) = uVar170;
              *(undefined4 *)((longlong)pdStack_470 + 0x4c) = uVar171;
              pdStack_470[10] = (double)puVar97;
              pdStack_470[0xb] = dVar152;
            }
            else {
              puVar35 = local_4d8;
              if (local_4d8 == (undefined1 *)0x0) {
                puVar35 = local_4e8;
              }
              if ((*(uint *)(puVar35 + (uVar60 >> 5) * 4) & uVar59) == 0) goto LAB_1432edf5a;
            }
            puVar97 = *(undefined8 **)(local_840 + 0x70);
            if (*(undefined8 **)(local_840 + 0x70) == (undefined8 *)0x0) {
              puVar97 = local_858;
            }
            if ((*(uint *)((longlong)puVar97 + (longlong)(iVar39 >> 5) * 4) & uVar59) != 0) {
              if ((-1 < iVar40) && (iVar40 < local_490)) {
                puVar35 = local_498;
                if (local_498 == (undefined1 *)0x0) {
                  puVar35 = local_4a8;
                }
                if ((*(uint *)(puVar35 + (uVar60 >> 5) * 4) & uVar59) != 0) goto LAB_1432edfe8;
              }
              local_478 = (code *)0x0;
              pdStack_470 = (double *)0x0;
              FUN_1475a8054(local_4b8,uVar60,&local_478);
              FUN_140ee84a4(lVar61 * 0x10 + local_4b8[0],*(undefined4 *)(local_840 + 0x88),1);
            }
LAB_1432edfe8:
            if (puVar32 == (uint *)0x0) break;
            uVar60 = (ulonglong)puVar32[7];
            iVar67 = iVar67 + 1;
          } while (puVar32[7] != 0xffffffff);
        }
      }
      uVar59 = local_818._0_4_ & ~(uint)uVar51;
      lVar61 = *(longlong *)(local_878._0_8_ + 0x10);
      if (*(longlong *)(local_878._0_8_ + 0x10) == 0) {
        lVar61 = local_878._0_8_;
      }
      uVar66 = *(uint *)(local_878._0_8_ + 0x18);
      iVar40 = local_808._0_4_;
      lVar55 = (longlong)iVar40;
      uVar38 = *(uint *)(lVar61 + lVar55 * 4) & uVar59;
      uVar71 = local_808._0_8_;
      iVar67 = local_838._0_4_;
      if (uVar38 == 0) {
        iVar39 = uVar66 + 0x1e;
        if (-1 < (int)(uVar66 - 1)) {
          iVar39 = uVar66 - 1;
        }
        iVar39 = iVar39 >> 5;
        iVar37 = iVar39;
        if (iVar39 < iVar40) {
          iVar37 = iVar40;
        }
        if (iVar39 <= iVar40) break;
        lVar44 = 0;
        while( true ) {
          iVar67 = iVar67 + 0x20;
          uVar38 = *(uint *)(lVar61 + lVar55 * 4 + 4 + lVar44 * 4);
          if (uVar38 != 0) break;
          lVar44 = lVar44 + 1;
          if (iVar37 - lVar55 == lVar44) goto LAB_1432ee215;
        }
        uVar59 = 0xffffffff;
        uVar71 = (ulonglong)(iVar40 + (int)lVar44 + 1);
      }
      uVar51 = (ulonglong)(-uVar38 & uVar38);
      uVar60 = uVar51 * 2 + 1;
      lVar61 = 0x3f;
      if (uVar60 != 0) {
        for (; uVar60 >> lVar61 == 0; lVar61 = lVar61 + -1) {
        }
      }
      uVar46 = (iVar67 - ((uint)lVar61 ^ 0x3f)) + 0x3e;
      uVar38 = uVar46;
      if ((int)uVar66 <= (int)uVar46) {
        uVar38 = uVar66;
      }
      uVar60 = (ulonglong)uVar38;
    } while ((int)uVar46 < (int)uVar66);
  }
LAB_1432ee215:
  local_7e0 = (code *)FUN_14009d2a0();
  lVar61 = FUN_14038fb82();
  local_178 = local_4b8;
  local_160 = (double *)0x0;
  dStack_158 = 0.0;
  uVar59 = local_500 + 0x1f & 0xffffffe0;
  if (0 < (int)uVar59) {
    uVar66 = 0x80;
    if (0x80 < uVar59) {
      uVar66 = uVar59;
    }
    dStack_158 = (double)((ulonglong)uVar66 << 0x20);
    FUN_1446efbd8(&dStack_170,0);
  }
  dStack_158 = (double)CONCAT44(dStack_158._4_4_,local_500);
  if (local_500 != 0) {
    puVar32 = local_508;
    if (local_508 == (uint *)0x0) {
      puVar32 = local_518;
    }
    pdVar33 = local_160;
    if (local_160 == (double *)0x0) {
      pdVar33 = &dStack_170;
    }
    memcpy(pdVar33,puVar32,(ulonglong)(local_500 + 0x1f >> 3 & 0xfffffffc));
  }
  local_618._0_2_ = *(undefined2 *)(local_7e0 + 0x13e);
  uStack_606 = *(undefined2 *)(local_7e0 + 0xcc);
  local_618._2_6_ = (undefined6)*(undefined8 *)(local_7e0 + 0xbc);
  uStack_610 = (undefined2)((ulonglong)*(undefined8 *)(local_7e0 + 0xbc) >> 0x30);
  uStack_60e = (undefined6)*(undefined8 *)(local_7e0 + 0xc4);
  uStack_608 = (undefined2)((ulonglong)*(undefined8 *)(local_7e0 + 0xc4) >> 0x30);
  uStack_603 = 0;
  uStack_600 = 0x6ff;
  uStack_5fc = uStack_5fc & 0xffffff00;
  local_638._0_2_ = *(undefined2 *)(lVar61 + 0x84);
  local_698 = (undefined2 *)&local_638;
  local_690 = (undefined2 *)((longlong)&local_638 + 2);
  local_6b0 = lVar61;
  FUN_1475b449a(&local_618,&local_5e8);
  lVar61 = local_6c0;
  local_6f0 = local_6c0 + 0x28;
  if ((((((short)local_5e8 != -1) && (local_5e8._2_2_ != -1)) && (local_5e8._4_2_ != -1)) &&
      (((local_5e8._6_2_ != -1 && ((short)uStack_5e0 != -1)) &&
       ((uStack_5e0._2_2_ != -1 && ((uStack_5e0._4_2_ != -1 && (uStack_5e0._6_2_ != -1)))))))) &&
     (((short)local_5d8 != -1 && (local_5d8._2_2_ != -1)))) {
    local_658 = (code *)local_5c8;
    local_6e0 = (code *)CONCAT71(local_6e0._1_7_,*(char *)(local_6c0 + 0x298));
    if (*(char *)(local_6c0 + 0x298) == '\0') {
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
      UNLOCK();
    }
    uStack_650 = local_6f0;
    iVar67 = FUN_1403b8464(&local_658,0);
    local_648 = CONCAT44(local_648._4_4_,iVar67);
    local_6e8 = CONCAT44(local_6e8._4_4_,*(int *)(lVar61 + 0x38));
    if (iVar67 != *(int *)(lVar61 + 0x38)) {
      do {
        puVar97 = *(undefined8 **)(*(longlong *)(uStack_650 + 0x60) + (longlong)iVar67 * 8);
        if ((char)local_6e0 == '\0') {
          *(undefined4 *)((longlong)puVar97 + 0x14) = 0;
          local_7f8 = puVar97;
        }
        else {
          local_7f8 = (undefined8 *)0x0;
        }
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar34 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar34 + 0x1e) == local_5d8._2_2_) goto LAB_1432ee463;
            puVar34 = puVar34 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar34 = (undefined8 *)0x0;
LAB_1432ee463:
        local_728 = (undefined8 *)CONCAT44(local_728._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar34 + 1));
        }
        LOCK();
        *(int *)(puVar34 + 3) = *(int *)(puVar34 + 3) + 1;
        UNLOCK();
        local_808._0_8_ = puVar34;
        puVar34 = (undefined8 *)*puVar34;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar76 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar76 + 0x1e) == (short)local_5d8) goto LAB_1432ee4b3;
            puVar76 = puVar76 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar76 = (undefined8 *)0x0;
LAB_1432ee4b3:
        local_748 = (undefined8 *)CONCAT44(local_748._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar76 + 1));
        }
        LOCK();
        *(int *)(puVar76 + 3) = *(int *)(puVar76 + 3) + 1;
        UNLOCK();
        local_7c8 = (undefined8 *)*puVar76;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar77 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar77 + 0x1e) == uStack_5e0._6_2_) goto LAB_1432ee505;
            puVar77 = puVar77 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar77 = (undefined8 *)0x0;
LAB_1432ee505:
        local_758 = *(int *)((longlong)puVar97 + 0x14);
        if (local_758 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar77 + 1));
        }
        LOCK();
        *(int *)(puVar77 + 3) = *(int *)(puVar77 + 3) + 1;
        UNLOCK();
        local_708 = (undefined8 *)*puVar77;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar62 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar62 + 0x1e) == uStack_5e0._4_2_) goto LAB_1432ee559;
            puVar62 = puVar62 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar62 = (undefined8 *)0x0;
LAB_1432ee559:
        local_768 = (undefined8 *)CONCAT44(local_768._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar62 + 1));
        }
        LOCK();
        *(int *)(puVar62 + 3) = *(int *)(puVar62 + 3) + 1;
        UNLOCK();
        puVar47 = (undefined8 *)*puVar62;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar68 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar68 + 0x1e) == uStack_5e0._2_2_) goto LAB_1432ee5ab;
            puVar68 = puVar68 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar68 = (undefined8 *)0x0;
LAB_1432ee5ab:
        local_778 = (undefined8 *)CONCAT44(local_778._4_4_,*(int *)((longlong)puVar97 + 0x14));
        local_738 = puVar76;
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar68 + 1));
        }
        LOCK();
        *(int *)(puVar68 + 3) = *(int *)(puVar68 + 3) + 1;
        UNLOCK();
        local_818._0_8_ = *puVar68;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar76 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar76 + 0x1e) == (short)uStack_5e0) goto LAB_1432ee604;
            puVar76 = puVar76 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar76 = (undefined8 *)0x0;
LAB_1432ee604:
        local_788 = *(int *)((longlong)puVar97 + 0x14);
        local_7b8 = puVar34;
        if (local_788 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar76 + 1));
        }
        LOCK();
        *(int *)(puVar76 + 3) = *(int *)(puVar76 + 3) + 1;
        UNLOCK();
        local_828._0_8_ = *puVar76;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar34 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar34 + 0x1e) == local_5e8._6_2_) goto LAB_1432ee653;
            puVar34 = puVar34 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar34 = (undefined8 *)0x0;
LAB_1432ee653:
        local_798 = (undefined8 *)CONCAT44(local_798._4_4_,*(int *)((longlong)puVar97 + 0x14));
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar34 + 1));
        }
        LOCK();
        *(int *)(puVar34 + 3) = *(int *)(puVar34 + 3) + 1;
        UNLOCK();
        local_878._0_8_ = *puVar34;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar49 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar49 + 0x1e) == local_5e8._4_2_) goto LAB_1432ee6a6;
            puVar49 = puVar49 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar49 = (undefined8 *)0x0;
LAB_1432ee6a6:
        local_6d8 = (undefined8 *)CONCAT44(local_6d8._4_4_,*(int *)((longlong)puVar97 + 0x14));
        local_718 = puVar47;
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar49 + 1));
        }
        LOCK();
        *(int *)(puVar49 + 3) = *(int *)(puVar49 + 3) + 1;
        UNLOCK();
        local_868._0_8_ = *puVar49;
        if (*(ushort *)((longlong)puVar97 + 0xc) != 0) {
          puVar47 = (undefined8 *)puVar97[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)puVar97 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar47 + 0x1e) == local_5e8._2_2_) goto LAB_1432ee6fd;
            puVar47 = puVar47 + 4;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        puVar47 = (undefined8 *)0x0;
LAB_1432ee6fd:
        local_7a0 = CONCAT44(local_7a0._4_4_,*(int *)((longlong)puVar97 + 0x14));
        local_858 = puVar97;
        if (*(int *)((longlong)puVar97 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar47 + 1));
        }
        LOCK();
        *(int *)(puVar47 + 3) = *(int *)(puVar47 + 3) + 1;
        UNLOCK();
        local_7d8._0_8_ = *puVar47;
        if (*(ushort *)((longlong)local_858 + 0xc) != 0) {
          pcVar50 = (code *)local_858[5];
          lVar61 = (ulonglong)*(ushort *)((longlong)local_858 + 0xc) << 5;
          do {
            if (*(short *)(pcVar50 + 0x1e) == (short)local_5e8) goto LAB_1432ee75b;
            pcVar50 = pcVar50 + 0x20;
            lVar61 = lVar61 + -0x20;
          } while (lVar61 != 0);
        }
        pcVar50 = (code *)0x0;
LAB_1432ee75b:
        iVar67 = *(int *)((longlong)local_858 + 0x14);
        if (*(int *)((longlong)local_858 + 0x14) == 1) {
          local_838._0_4_ = 1;
          AcquireSRWLockShared((PSRWLOCK)(pcVar50 + 8));
          iVar67 = local_838._0_4_;
        }
        puVar29 = local_708;
        puVar28 = local_718;
        puVar27 = local_7b8;
        puVar97 = local_7c8;
        LOCK();
        *(uint *)(pcVar50 + 0x18) = *(uint *)(pcVar50 + 0x18) + 1;
        UNLOCK();
        local_478 = pcVar50;
        pdStack_470 = (double *)CONCAT44(pdStack_470._4_4_,iVar67);
        local_838._0_8_ = *(undefined8 **)pcVar50;
        local_468[0] = *(undefined8 **)pcVar50;
        local_468[1] = puVar47;
        local_458 = (double)CONCAT44(local_458._4_4_,(undefined4)local_7a0);
        local_450 = (double)local_7d8._0_8_;
        local_448 = puVar49;
        local_440 = local_6d8._0_4_;
        local_438 = (double)local_868._0_8_;
        local_430 = puVar34;
        local_428 = (double)CONCAT44(local_428._4_4_,local_798._0_4_);
        local_420 = local_878._0_8_;
        local_418 = puVar76;
        iStack_410 = local_788;
        local_408 = (double)local_828._0_8_;
        local_400 = puVar68;
        local_3f8 = local_778._0_4_;
        local_3f0 = local_818._0_8_;
        local_3e8 = puVar62;
        local_3e0 = local_768._0_4_;
        local_3d8 = local_718;
        local_3d0 = puVar77;
        local_3c8 = local_758;
        local_3c0 = local_708;
        local_3b8 = local_738;
        local_3b0 = local_748._0_4_;
        local_3a8 = local_7c8;
        local_3a0 = local_808._0_8_;
        local_398 = local_728._0_4_;
        local_390 = local_7b8;
        uVar6 = *(ushort *)((longlong)local_858 + 0xe);
        if (uVar6 != 0) {
          lVar61 = 0;
          do {
            lVar55 = *(longlong *)(local_838._0_8_ + lVar61);
            pdVar33 = local_160;
            if (local_160 == (double *)0x0) {
              pdVar33 = &dStack_170;
            }
            uVar59 = (uint)lVar55;
            uVar66 = uVar59 + 0x1f;
            if (-1 < (int)uVar59) {
              uVar66 = uVar59;
            }
            if ((*(uint *)((longlong)pdVar33 + (longlong)((int)uVar66 >> 5) * 4) >> (uVar59 & 0x1f)
                & 1) != 0) {
              auVar99._8_8_ = *(double *)((longlong)puVar28 + lVar61);
              auVar99._0_8_ = *(double *)(local_818._0_8_ + lVar61);
              auVar80 = divpd(auVar99,_DAT_1499387d0);
              auVar98._8_8_ = 0;
              auVar98._0_8_ = *(double *)(local_828._0_8_ + lVar61);
              auVar99 = divpd(auVar98,_DAT_1499387d0);
              auVar80 = roundpd(auVar80,auVar80,3);
              auVar99 = roundpd(auVar99,auVar99,3);
              dVar146 = (*(double *)(local_818._0_8_ + lVar61) -
                        auVar80._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar152 = (*(double *)((longlong)puVar28 + lVar61) -
                        auVar80._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar141 = (*(double *)(local_828._0_8_ + lVar61) -
                        auVar99._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar145 = (0.0 - auVar99._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              uVar165 = *(undefined4 *)(local_7d8._0_8_ + lVar61);
              uVar172 = ((undefined4 *)(local_7d8._0_8_ + lVar61))[1];
              uVar4 = *(undefined8 *)(local_868._0_8_ + lVar61);
              local_858 = *(undefined8 **)(local_878._0_8_ + lVar61);
              dStack_850 = 0.0;
              uVar167 = *(undefined4 *)((longlong)puVar29 + lVar61);
              uVar169 = ((undefined4 *)((longlong)puVar29 + lVar61))[1];
              uVar5 = *(undefined8 *)((longlong)puVar97 + lVar61);
              local_808._8_8_ = 0;
              local_808._0_8_ = *(ulonglong *)((longlong)puVar27 + lVar61);
              dVar73 = sin(dVar146);
              dVar74 = sin(dVar152);
              dVar75 = sin(dVar141);
              sin(dVar145);
              dVar146 = cos(dVar146);
              dVar152 = cos(dVar152);
              dVar141 = cos(dVar141);
              cos(dVar145);
              lVar44 = *(longlong *)(*local_178 + (longlong)(int)uVar59 * 0x10);
              lVar55 = (lVar55 >> 0x20) * 0x60;
              *(double *)(lVar44 + lVar55) = dVar73 * dVar74 * dVar141 - dVar146 * dVar152 * dVar75;
              ((double *)(lVar44 + lVar55))[1] =
                   -(dVar73 * dVar152 * dVar141) - dVar146 * dVar74 * dVar75;
              pdVar33 = (double *)(lVar44 + 0x10 + lVar55);
              *pdVar33 = -(dVar152 * dVar73 * dVar75) + dVar74 * dVar146 * dVar141;
              pdVar33[1] = dVar74 * dVar73 * dVar75 + dVar152 * dVar146 * dVar141;
              puVar2 = (undefined4 *)(lVar44 + 0x20 + lVar55);
              *puVar2 = uVar165;
              puVar2[1] = uVar172;
              puVar2[2] = (int)uVar4;
              puVar2[3] = (int)((ulonglong)uVar4 >> 0x20);
              plVar43 = (longlong *)(lVar44 + 0x30 + lVar55);
              *plVar43 = (longlong)local_858;
              plVar43[1] = (longlong)dStack_850;
              puVar2 = (undefined4 *)(lVar44 + 0x40 + lVar55);
              *puVar2 = uVar167;
              puVar2[1] = uVar169;
              puVar2[2] = (int)uVar5;
              puVar2[3] = (int)((ulonglong)uVar5 >> 0x20);
              puVar34 = (undefined8 *)(lVar44 + 0x50 + lVar55);
              *puVar34 = local_808._0_8_;
              puVar34[1] = local_808._8_8_;
            }
            lVar61 = lVar61 + 8;
          } while ((ulonglong)uVar6 * 8 != lVar61);
        }
        FUN_1475b47f4(&local_478);
        if (local_7f8 != (undefined8 *)0x0) {
          *(undefined4 *)((longlong)local_7f8 + 0x14) = 1;
        }
        iVar67 = FUN_1403b8464(&local_658,(int)local_648 + 1);
        local_648 = CONCAT44(local_648._4_4_,iVar67);
      } while (iVar67 != (int)local_6e8);
    }
    if (local_658 != (code *)0x0) {
      if (*(char *)(uStack_650 + 0x270) == '\0') {
        *(int *)(uStack_650 + 0x264) = *(int *)(uStack_650 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(uStack_650 + 0x264) = *(int *)(uStack_650 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_578 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_160 != (double *)0x0) {
    FUN_1400020a8();
  }
  pcVar50 = local_7e0 + 0xbc;
  local_5f8 = 0x10000000000;
  lVar61 = 0;
  iVar67 = 0;
  do {
    uVar6 = *(ushort *)(pcVar50 + lVar61 * 2);
    iVar40 = uVar6 + 1;
    iVar39 = iVar40 - iVar67;
    if (iVar39 != 0 && iVar67 <= iVar40) {
      if (iVar67 == 0) {
LAB_1432eec43:
        if (local_5f8._4_4_ <= (int)(uint)uVar6) {
          local_5f8 = CONCAT44(0x100,(int)local_5f8);
          FUN_14497ddce(&local_618,iVar67);
          iVar40 = (int)local_5f8 + iVar39;
        }
        iVar37 = iVar40 + 0x1f;
        if (-1 < iVar40) {
          iVar37 = iVar40;
        }
        local_5f8 = CONCAT44(local_5f8._4_4_,iVar40);
        if (iVar40 % 0x20 != 0) {
          bVar36 = -(char)(iVar40 % 0x20);
          *(uint *)((longlong)&local_618 + (longlong)(iVar37 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_618 + (longlong)(iVar37 >> 5) * 4) <<
                     (bVar36 & 0x1f)) >> (bVar36 & 0x1f);
        }
      }
      else {
        iVar37 = iVar67 + 0x1e;
        if (-1 < iVar67 + -1) {
          iVar37 = iVar67 + -1;
        }
        if (iVar37 >> 5 != (uint)(uVar6 >> 5)) goto LAB_1432eec43;
        local_5f8 = CONCAT44(local_5f8._4_4_,iVar40);
      }
      FUN_1447c45ca(&local_618,iVar67,iVar39,0);
    }
    puVar32 = (uint *)((longlong)&local_618 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar32 = *puVar32 | 1 << ((byte)uVar6 & 0x1f);
    if (lVar61 == 8) goto LAB_1432eece8;
    lVar61 = lVar61 + 1;
    iVar67 = (int)local_5f8;
  } while( true );
LAB_1432ef78e:
  iVar40 = *(int *)pcVar54;
  *(int *)pcVar54 = *(int *)pcVar58;
  *(int *)pcVar58 = iVar40;
  iVar67 = iVar67 + -1;
  pcVar56 = pcVar56 + -8;
  if ((longlong)pcVar63 - (longlong)pcVar48 < (longlong)pcVar53 - (longlong)pcVar69) {
    if (pcVar45 < pcVar50) {
      *ppcVar42 = pcVar45;
      ppcVar42[1] = pcVar50;
      *(int *)(ppcVar42 + 2) = iVar67;
      ppcVar42 = ppcVar42 + 3;
    }
    pcVar45 = pcVar54;
    pcVar53 = pcVar63;
    if (pcVar58 <= pcVar54 + 4) goto LAB_1432ef9d5;
  }
  else {
    if (pcVar54 + 4 < pcVar58) {
      *ppcVar42 = pcVar54;
      ppcVar42[1] = pcVar56;
      *(int *)(ppcVar42 + 2) = iVar67;
      ppcVar42 = ppcVar42 + 3;
    }
    pcVar54 = pcVar69;
    pcVar56 = pcVar50;
    pcVar53 = pcVar50;
    if (pcVar50 <= pcVar45) goto LAB_1432ef9d5;
  }
  iVar40 = (int)((ulonglong)((longlong)pcVar53 - (longlong)pcVar54) >> 2);
  uVar71 = (ulonglong)(iVar40 + 1);
  pcVar48 = pcVar54;
  pcVar54 = pcVar45;
  pcVar50 = pcVar56;
  if (iVar67 == 0) goto LAB_1432ef821;
  goto LAB_1432ef6f8;
LAB_1432efbd3:
  lVar55 = (longlong)(int)uVar66 * 0x60;
  pdVar33 = (double *)(local_4f8[0] + lVar55);
  local_878 = *(undefined1 (*) [16])(local_4f8[0] + 0x40 + lVar55);
  dVar146 = local_878._0_8_;
  local_868 = *(undefined1 (*) [16])(local_4f8[0] + 0x50 + lVar55);
  dVar152 = local_868._0_8_;
  auVar16._8_4_ = SUB84(dVar75,0);
  auVar16._0_8_ = dVar74;
  auVar16._12_4_ = uVar172;
  auVar80 = minpd(local_878,auVar16);
  auVar9._8_4_ = SUB84(dVar73,0);
  auVar9._0_8_ = puVar97;
  auVar9._12_4_ = uVar165;
  auVar99 = minpd(local_868,auVar9);
  auVar81._8_8_ = -(ulonglong)(auVar80._8_8_ < 0.0);
  auVar81._0_8_ = -(ulonglong)(auVar80._0_8_ < 0.0);
  iVar67 = movmskpd((int)local_4f8[0],auVar81);
  auVar101._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
  auVar101._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
  uVar38 = movmskpd((int)lVar55,auVar101);
  if ((uVar38 & 0x3fffffff) == 0 && iVar67 == 0) {
    dVar145 = *pdVar33;
    dVar110 = pdVar33[1];
    dVar147 = pdVar33[2];
    dVar124 = pdVar33[3];
    dVar139 = pdVar33[4] * dVar74;
    dVar75 = pdVar33[5] * dVar75;
    dVar140 = pdVar33[6] * (double)puVar97;
    dVar163 = pdVar33[7] * (double)local_808._8_8_;
    dVar73 = dVar75 * (double)local_828._0_8_ - (double)local_828._8_8_ * dVar139;
    dVar133 = dVar140 * (double)local_828._8_8_ - (double)local_818._0_8_ * dVar75;
    local_7f8 = (undefined8 *)local_828._0_8_;
    puStack_7f0 = (undefined8 *)local_818._8_8_;
    dVar148 = dVar139 * (double)local_818._0_8_ - (double)local_828._0_8_ * dVar140;
    dVar141 = dVar163 * (double)local_818._8_8_ - (double)local_818._8_8_ * dVar163;
    dVar133 = dVar133 + dVar133;
    dVar148 = dVar148 + dVar148;
    dVar73 = dVar73 + dVar73;
    dVar141 = dVar141 + dVar141;
    dVar138 = dVar147 * (double)local_828._8_8_;
    auVar115._0_8_ =
         dVar124 * (double)local_818._0_8_ * 1.0 +
         (((double)local_828._0_8_ * dVar110 * 1.0 + (double)local_818._8_8_ * dVar147) -
         (double)local_828._8_8_ * dVar145);
    auVar115._8_8_ =
         dVar147 * (double)local_818._0_8_ * -1.0 +
         (((double)local_828._0_8_ * dVar145 * -1.0 + (double)local_818._8_8_ * dVar124) -
         (double)local_828._8_8_ * dVar110);
    local_858 = (undefined8 *)
                ((double)local_858 +
                (dVar73 * (double)local_828._8_8_ - (double)local_818._0_8_ * dVar148) +
                (double)local_818._8_8_ * dVar133 + dVar139);
    dStack_850 = dStack_850 +
                 (dVar133 * (double)local_818._0_8_ - dVar73 * (double)local_828._0_8_) +
                 (double)local_818._8_8_ * dVar148 + dVar75;
    local_838._0_8_ =
         (double)local_838._0_8_ +
         (dVar148 * (double)local_828._0_8_ - (double)local_828._8_8_ * dVar133) +
         (double)local_818._8_8_ * dVar73 + dVar140;
    local_838._8_8_ =
         (double)local_838._8_8_ +
         (dVar141 * (double)local_818._8_8_ - dVar141 * (double)local_818._8_8_) +
         (double)local_818._8_8_ * dVar141 + dVar163;
    puVar97 = (undefined8 *)((double)puVar97 * dVar152);
    dVar73 = (double)local_808._8_8_ * local_868._8_8_;
    local_828._8_8_ =
         dVar145 * (double)local_818._0_8_ * 1.0 +
         dVar124 * (double)local_828._8_8_ +
         (double)local_828._0_8_ * dVar147 * -1.0 + (double)local_818._8_8_ * dVar110;
    local_828._0_8_ =
         dVar110 * (double)local_818._0_8_ * -1.0 +
         dVar138 + (double)local_828._0_8_ * dVar124 * 1.0 + (double)local_818._8_8_ * dVar145;
    dVar74 = dVar74 * dVar146;
    dVar75 = (double)local_7d8._8_8_ * local_878._8_8_;
    local_818 = auVar115;
  }
  else {
    local_868._8_8_ = local_868._8_8_ * dVar73;
    local_868._0_8_ = dVar152 * (double)puVar97;
    dVar73 = (double)local_828._8_8_ + (double)local_828._8_8_;
    dVar141 = (double)local_818._0_8_ + (double)local_818._0_8_;
    dVar152 = (double)local_828._0_8_ * ((double)local_828._0_8_ + (double)local_828._0_8_);
    local_598 = (undefined8 *)
                ((1.0 - (dVar152 + (double)local_828._8_8_ * dVar73)) * (double)puVar97);
    dVar145 = ((double)local_828._0_8_ + (double)local_828._0_8_) * (double)local_818._8_8_;
    local_5a8 = (undefined8 *)
                ((dVar73 * (double)local_818._8_8_ + (double)local_828._0_8_ * dVar141) *
                (double)puVar97);
    puStack_5a0 = (undefined8 *)((dVar141 * (double)local_828._8_8_ - dVar145) * (double)puVar97);
    local_878._8_8_ = local_878._8_8_ * dVar75;
    local_878._0_8_ = dVar146 * dVar74;
    local_5e8 = (undefined8 *)
                ((1.0 - ((double)local_818._0_8_ * dVar141 + (double)local_828._8_8_ * dVar73)) *
                dVar74);
    uStack_5e0 = (undefined8 *)
                 ((dVar73 * (double)local_828._0_8_ + dVar141 * (double)local_818._8_8_) * dVar74);
    local_5b8 = (undefined8 *)((dVar141 * (double)local_828._8_8_ + dVar145) * dVar75);
    local_5d8 = (undefined8 *)
                (((double)local_828._0_8_ * dVar141 - dVar73 * (double)local_818._8_8_) * dVar74);
    puStack_5d0 = (undefined8 *)0x0;
    local_5c8._8_8_ = (1.0 - ((double)local_818._0_8_ * dVar141 + dVar152)) * dVar75;
    local_5c8._0_8_ =
         (dVar73 * (double)local_828._0_8_ - dVar141 * (double)local_818._8_8_) * dVar75;
    puStack_5b0 = (undefined8 *)0x0;
    puStack_590 = (undefined8 *)0x0;
    local_588 = local_858;
    dStack_580 = dStack_850;
    local_578 = (undefined8 *)local_838._0_8_;
    puStack_570 = (undefined8 *)&DAT_3ff0000000000000;
    dVar74 = *pdVar33;
    dVar75 = pdVar33[1];
    dVar73 = pdVar33[2];
    dStack_168 = pdVar33[8];
    dStack_158 = pdVar33[9];
    dStack_130 = pdVar33[10];
    dVar145 = dVar75 + dVar75;
    dVar146 = dVar73 + dVar73;
    dVar152 = dVar74 * (dVar74 + dVar74);
    local_178 = (longlong *)((1.0 - (dVar73 * dVar146 + dVar75 * dVar145)) * dStack_168);
    dStack_150 = (1.0 - (dVar73 * dVar146 + dVar152)) * dStack_158;
    local_128 = (1.0 - (dVar152 + dVar75 * dVar145)) * dStack_130;
    dVar73 = pdVar33[3];
    dVar152 = dVar146 * dVar73;
    dVar141 = (dVar74 + dVar74) * pdVar33[3];
    dVar73 = dVar145 * dVar73;
    dStack_170 = (dVar145 * dVar74 + dVar152) * dStack_168;
    local_148 = (dVar146 * dVar75 + dVar141) * dStack_158;
    local_138 = (dVar73 + *pdVar33 * dVar146) * dStack_130;
    dStack_168 = (*pdVar33 * dVar146 - dVar73) * dStack_168;
    dStack_158 = (dVar145 * dVar74 - dVar152) * dStack_158;
    dStack_130 = (dVar146 * dVar75 - dVar141) * dStack_130;
    local_160 = (double *)0x0;
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = (undefined8 *)pdVar33[4];
    dStack_110 = pdVar33[5];
    local_108 = pdVar33[6];
    uStack_100 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_478,&local_178,&local_5e8);
    auVar80 = _DAT_149934d80;
    local_858 = local_468[0];
    dVar74 = (double)local_468[0] * (double)local_468[0] +
             (double)local_478 * (double)local_478 + (double)pdStack_470 * (double)pdStack_470;
    dVar75 = (double)local_448 * (double)local_448 + local_458 * local_458 + local_450 * local_450;
    dVar73 = local_428 * local_428 + local_438 * local_438 + (double)local_430 * (double)local_430;
    uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
    dVar74 = (double)(~uVar71 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
    uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
    dVar75 = (double)(~uVar71 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
    uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
    dVar146 = (double)(~uVar71 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
    auVar82._8_8_ = -(ulonglong)(0.0 <= (double)local_878._8_8_);
    auVar82._0_8_ = -(ulonglong)(0.0 <= (double)local_878._0_8_);
    auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar82);
    puVar97 = (undefined8 *)local_868._0_8_;
    dVar73 = (double)local_868._8_8_;
    dVar152 = (double)(~-(ulonglong)(0.0 <= (double)local_868._0_8_) & 0xbff0000000000000 |
                      -(ulonglong)(0.0 <= (double)local_868._0_8_) & 0x3ff0000000000000);
    dVar141 = auVar99._0_8_;
    local_478 = (code *)((double)local_478 * dVar74 * dVar141);
    pdStack_470 = (double *)((double)pdStack_470 * dVar74 * dVar141);
    local_468[0] = (undefined8 *)(dVar74 * (double)local_468[0] * dVar141);
    dVar74 = auVar99._8_8_;
    local_448 = (undefined8 *)(dVar75 * (double)local_448 * dVar74);
    local_450 = local_450 * dVar75 * dVar74;
    local_458 = dVar74 * local_458 * dVar75;
    local_428 = dVar146 * local_428 * dVar152;
    local_430 = (undefined8 *)((double)local_430 * dVar146 * dVar152);
    local_438 = dVar152 * local_438 * dVar146;
    FUN_14481fd10(&local_618,&local_478);
    dVar74 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
    dVar75 = (double)CONCAT62(uStack_60e,uStack_610);
    dVar146 = (double)CONCAT26(uStack_602,
                               CONCAT15(uStack_603,
                                        CONCAT14(uStack_604,CONCAT22(uStack_606,uStack_608))));
    dVar152 = (double)CONCAT44(uStack_5fc,uStack_600);
    dVar141 = dVar146 * dVar146 + dVar74 * dVar74;
    dVar145 = dVar152 * dVar152 + dVar75 * dVar75;
    auVar116._0_8_ = dVar141 + dVar145;
    auVar116._8_8_ = dVar141 + dVar145;
    auVar83._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar116._8_8_);
    auVar83._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar116._0_8_);
    auVar99 = sqrtpd(auVar116,auVar116);
    auVar80 = divpd(auVar80,auVar99);
    auVar126._0_8_ = auVar80._0_8_ * dVar146;
    auVar126._8_8_ = auVar80._8_8_ * dVar152;
    local_818 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar126,auVar83);
    dStack_850 = (double)CONCAT44(uStack_40c,iStack_410);
    local_858 = local_418;
    local_828._0_8_ =
         (ulonglong)(dVar74 * auVar80._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar116._0_8_);
    local_828._8_8_ =
         (ulonglong)(dVar75 * auVar80._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar116._8_8_);
    local_838._8_8_ = 0;
    local_838._0_8_ = local_408;
    dVar74 = (double)local_878._0_8_;
    dVar75 = (double)local_878._8_8_;
  }
  ppcVar42 = &local_478;
  FUN_1475b45d2(local_7a0,&local_478,uVar66);
  uVar66 = (uint)local_478;
  if ((uint)local_478 == 0xffffffff) goto code_r0x0001432f0448;
  goto LAB_1432efb84;
code_r0x0001432f0448:
  local_638._0_2_ = 0xffff;
  local_638._2_2_ = 0xffff;
LAB_1432efae9:
  uVar172 = (undefined4)((ulonglong)dVar75 >> 0x20);
  uVar165 = (undefined4)((ulonglong)dVar73 >> 0x20);
  iVar67 = local_788;
  uVar167 = uStack_784;
  iVar40 = local_758;
  uVar169 = uStack_754;
  if ((-1 < (int)uVar59) && ((int)uVar59 < local_490)) {
    puVar35 = local_498;
    if (local_498 == (undefined1 *)0x0) {
      puVar35 = local_4a8;
    }
    puVar34 = (undefined8 *)(ulonglong)(uVar59 >> 5);
    if ((*(uint *)(puVar35 + (longlong)puVar34 * 4) >> (uVar59 & 0x1f) & 1) != 0) {
      if (0 < *(int *)(local_840 + 0x88)) {
        plVar65 = (longlong *)(lVar61 + local_4b8[0]);
        dVar146 = (double)local_828._8_8_ + (double)local_828._8_8_;
        dVar152 = (double)local_818._0_8_ + (double)local_818._0_8_;
        dVar141 = (double)local_828._0_8_ * ((double)local_828._0_8_ + (double)local_828._0_8_);
        local_728 = (undefined8 *)
                    ((1.0 - ((double)local_818._0_8_ * dVar152 + (double)local_828._8_8_ * dVar146))
                    * dVar74);
        puStack_7f0 = (undefined8 *)((1.0 - ((double)local_818._0_8_ * dVar152 + dVar141)) * dVar75)
        ;
        local_708 = (undefined8 *)
                    ((1.0 - (dVar141 + (double)local_828._8_8_ * dVar146)) * (double)puVar97);
        local_748 = (undefined8 *)local_828._0_8_;
        puStack_740 = (undefined8 *)local_828._0_8_;
        dVar141 = ((double)local_828._0_8_ + (double)local_828._0_8_) * (double)local_818._8_8_;
        local_758 = local_818._8_4_;
        uStack_754 = local_818._12_4_;
        puStack_750 = (undefined8 *)local_818._8_8_;
        puStack_720 = (undefined8 *)
                      ((dVar146 * (double)local_828._0_8_ + dVar152 * (double)local_818._8_8_) *
                      dVar74);
        local_7c8 = (undefined8 *)((dVar152 * (double)local_828._8_8_ + dVar141) * dVar75);
        local_7b8 = (undefined8 *)
                    (((double)local_828._0_8_ * dVar152 + dVar146 * (double)local_818._8_8_) *
                    (double)puVar97);
        local_7f8 = (undefined8 *)
                    ((dVar146 * (double)local_828._0_8_ - dVar152 * (double)local_818._8_8_) *
                    dVar75);
        puStack_7b0 = (undefined8 *)
                      ((dVar152 * (double)local_828._8_8_ - dVar141) * (double)puVar97);
        local_718 = (undefined8 *)
                    (((double)local_828._0_8_ * dVar152 - dVar146 * (double)local_818._8_8_) *
                    dVar74);
        puStack_700 = (undefined8 *)0x0;
        puStack_710 = (undefined8 *)0x0;
        puStack_7c0 = (undefined8 *)0x0;
        local_738 = (undefined8 *)local_838._0_8_;
        puStack_730 = (undefined8 *)&DAT_3ff0000000000000;
        local_768 = (undefined8 *)local_828._8_8_;
        puStack_760 = (undefined8 *)local_828._8_8_;
        local_778 = (undefined8 *)local_818._0_8_;
        puStack_770 = (undefined8 *)local_818._0_8_;
        local_788 = local_828._0_4_;
        uStack_784 = local_828._4_4_;
        puStack_780 = (undefined8 *)local_818._8_8_;
        local_798 = (undefined8 *)local_828._8_8_;
        puStack_790 = (undefined8 *)local_818._0_8_;
        lVar61 = 0x50;
        lVar55 = 0;
        local_808._8_4_ = SUB84(dVar73,0);
        local_808._0_8_ = puVar97;
        local_808._12_4_ = uVar165;
        local_7d8._8_4_ = SUB84(dVar75,0);
        local_7d8._0_8_ = dVar74;
        local_7d8._12_4_ = uVar172;
        do {
          lVar44 = *plVar65;
          local_878 = *(undefined1 (*) [16])(lVar44 + -0x10 + lVar61);
          dVar146 = local_878._0_8_;
          auVar80 = *(undefined1 (*) [16])(lVar44 + lVar61);
          auVar15._8_4_ = SUB84(dVar75,0);
          auVar15._0_8_ = dVar74;
          auVar15._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
          auVar99 = minpd(local_878,auVar15);
          auVar8._8_4_ = SUB84(dVar73,0);
          auVar8._0_8_ = puVar97;
          auVar8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          auVar107 = minpd(auVar80,auVar8);
          auVar94._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
          auVar94._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
          uVar59 = movmskpd((int)puVar34,auVar94);
          puVar34 = (undefined8 *)(ulonglong)uVar59;
          auVar108._8_8_ = -(ulonglong)(auVar107._8_8_ < 0.0);
          auVar108._0_8_ = -(ulonglong)(auVar107._0_8_ < 0.0);
          uVar66 = movmskpd((int)ppcVar42,auVar108);
          if ((uVar66 & 0x3fffffff) == 0 && uVar59 == 0) {
            pdVar33 = (double *)(lVar44 + -0x50 + lVar61);
            dVar152 = *pdVar33;
            dVar141 = pdVar33[1];
            pdVar33 = (double *)(lVar44 + -0x40 + lVar61);
            dVar145 = *pdVar33;
            dVar110 = pdVar33[1];
            dVar147 = (double)CONCAT44(uStack_754,local_758);
            dVar124 = dVar141 * (double)local_778 * -1.0 +
                      (double)local_748 * dVar110 * 1.0 + dVar147 * dVar152 +
                      (double)local_768 * dVar145;
            dVar138 = dVar152 * (double)puStack_770 * 1.0 +
                      (double)puStack_740 * dVar145 * -1.0 + (double)puStack_750 * dVar141 +
                      (double)puStack_760 * dVar110;
            auVar123._0_8_ =
                 dVar110 * (double)local_778 * 1.0 +
                 (((double)local_748 * dVar141 * 1.0 + dVar147 * dVar145) -
                 (double)local_768 * dVar152);
            auVar123._8_8_ =
                 dVar145 * (double)puStack_770 * -1.0 +
                 (((double)puStack_740 * dVar152 * -1.0 + (double)puStack_750 * dVar110) -
                 (double)puStack_760 * dVar141);
            pdVar33 = (double *)(lVar44 + -0x30 + lVar61);
            dVar141 = *pdVar33 * dVar74;
            dVar148 = pdVar33[1] * dVar75;
            pdVar33 = (double *)(lVar44 + -0x20 + lVar61);
            dVar133 = *pdVar33 * (double)puVar97;
            dVar139 = pdVar33[1] * dVar73;
            dVar152 = dVar148 * (double)local_828._0_8_ - (double)local_798 * dVar141;
            dVar145 = dVar133 * (double)local_828._8_8_ - (double)puStack_790 * dVar148;
            dVar110 = dVar141 * (double)local_818._0_8_ -
                      (double)CONCAT44(uStack_784,local_788) * dVar133;
            dVar140 = dVar139 * (double)local_818._8_8_ - (double)puStack_780 * dVar139;
            dVar145 = dVar145 + dVar145;
            dVar110 = dVar110 + dVar110;
            dVar152 = dVar152 + dVar152;
            dVar140 = dVar140 + dVar140;
            puVar77 = (undefined8 *)
                      ((dVar152 * (double)local_828._8_8_ - (double)puStack_790 * dVar110) +
                       dVar147 * dVar145 + dVar141 + (double)local_858);
            dVar141 = (dVar145 * (double)local_818._0_8_ -
                      dVar152 * (double)CONCAT44(uStack_784,local_788)) +
                      (double)puStack_750 * dVar110 + dVar148 + dStack_850;
            auVar132._0_8_ =
                 (dVar110 * (double)local_828._0_8_ - (double)local_798 * dVar145) +
                 dVar147 * dVar152 + dVar133 + (double)local_838._0_8_;
            auVar132._8_8_ =
                 (dVar140 * (double)local_818._8_8_ - dVar140 * (double)puStack_780) +
                 (double)puStack_750 * dVar140 + dVar139 + (double)local_838._8_8_;
            dVar146 = dVar146 * dVar74;
            dVar145 = local_878._8_8_ * dVar75;
            ppcVar42 = (code **)0x0;
            puVar76 = puVar97;
            dVar152 = dVar73;
            local_868 = auVar80;
          }
          else {
            local_5e8 = local_728;
            uStack_5e0 = puStack_720;
            local_5d8 = local_718;
            puStack_5d0 = puStack_710;
            local_5c8._8_8_ = puStack_7f0;
            local_5c8._0_8_ = local_7f8;
            local_5b8 = local_7c8;
            puStack_5b0 = puStack_7c0;
            local_5a8 = local_7b8;
            puStack_5a0 = puStack_7b0;
            local_598 = local_708;
            puStack_590 = puStack_700;
            local_588 = local_858;
            dStack_580 = dStack_850;
            local_578 = local_738;
            puStack_570 = puStack_730;
            pdVar33 = (double *)(lVar44 + -0x50 + lVar61);
            dVar141 = *pdVar33;
            dVar145 = pdVar33[1];
            dVar152 = *(double *)(lVar44 + -0x40 + lVar61);
            pdVar33 = (double *)(lVar44 + -0x10 + lVar61);
            dStack_168 = *pdVar33;
            dStack_158 = pdVar33[1];
            dStack_130 = *(double *)(lVar44 + lVar61);
            dVar138 = dVar145 + dVar145;
            dVar110 = dVar152 + dVar152;
            dVar147 = dVar141 * (dVar141 + dVar141);
            local_178 = (longlong *)((1.0 - (dVar152 * dVar110 + dVar145 * dVar138)) * dStack_168);
            dStack_150 = (1.0 - (dVar152 * dVar110 + dVar147)) * dStack_158;
            local_128 = (1.0 - (dVar147 + dVar145 * dVar138)) * dStack_130;
            dVar148 = *(double *)(lVar44 + -0x50 + lVar61) * dVar110;
            pdVar33 = (double *)(lVar44 + -0x38 + lVar61);
            dVar152 = *pdVar33;
            dVar147 = dVar110 * dVar152;
            dVar124 = (dVar141 + dVar141) * *pdVar33;
            dVar152 = dVar138 * dVar152;
            dStack_170 = (dVar138 * dVar141 + dVar147) * dStack_168;
            local_148 = (dVar110 * dVar145 + dVar124) * dStack_158;
            local_138 = (dVar152 + dVar148) * dStack_130;
            dStack_168 = (dVar148 - dVar152) * dStack_168;
            dStack_158 = (dVar138 * dVar141 - dVar147) * dStack_158;
            dStack_130 = (dVar110 * dVar145 - dVar124) * dStack_130;
            local_160 = (double *)0x0;
            uStack_140 = 0;
            uStack_120 = 0;
            pdVar33 = (double *)(lVar44 + -0x30 + lVar61);
            local_118 = (undefined8 *)*pdVar33;
            dStack_110 = pdVar33[1];
            local_108 = *(double *)(lVar44 + -0x20 + lVar61);
            uStack_100 = 0x3ff0000000000000;
            local_878._8_8_ = local_878._8_8_ * dVar75;
            local_878._0_8_ = dVar146 * dVar74;
            FUN_1447fea8d(&local_478,&local_178,&local_5e8);
            local_868._0_8_ = local_468[0];
            dVar74 = (double)local_468[0] * (double)local_468[0] +
                     (double)local_478 * (double)local_478 +
                     (double)pdStack_470 * (double)pdStack_470;
            dVar75 = (double)local_448 * (double)local_448 +
                     local_458 * local_458 + local_450 * local_450;
            dVar146 = local_428 * local_428 +
                      local_438 * local_438 + (double)local_430 * (double)local_430;
            uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
            dVar141 = (double)(~uVar71 & 0x3ff0000000000000 |
                              (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
            uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
            dVar110 = (double)(~uVar71 & 0x3ff0000000000000 |
                              (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
            uVar71 = -(ulonglong)(0.0 <= dVar146 + -9.99999993922529e-09);
            dVar74 = (double)local_7d8._0_8_;
            dVar75 = (double)local_7d8._8_8_;
            dVar147 = (double)(~uVar71 & 0x3ff0000000000000 |
                              (ulonglong)(1.0 / SQRT(dVar146)) & uVar71);
            dVar146 = (double)local_878._0_8_;
            dVar145 = (double)local_878._8_8_;
            auVar95._8_8_ = -(ulonglong)(0.0 <= (double)local_878._8_8_);
            auVar95._0_8_ = -(ulonglong)(0.0 <= (double)local_878._0_8_);
            auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar95);
            uVar71 = -(ulonglong)(0.0 <= auVar80._0_8_ * (double)puVar97);
            puVar76 = (undefined8 *)local_808._0_8_;
            dVar152 = (double)local_808._8_8_;
            dVar124 = (double)(~uVar71 & 0xbff0000000000000 | uVar71 & 0x3ff0000000000000);
            dVar138 = auVar99._0_8_;
            local_478 = (code *)((double)local_478 * dVar141 * dVar138);
            pdStack_470 = (double *)((double)pdStack_470 * dVar141 * dVar138);
            local_468[0] = (undefined8 *)(dVar141 * (double)local_468[0] * dVar138);
            dVar141 = auVar99._8_8_;
            local_448 = (undefined8 *)(dVar110 * (double)local_448 * dVar141);
            local_450 = local_450 * dVar110 * dVar141;
            local_458 = dVar141 * local_458 * dVar110;
            local_428 = dVar147 * local_428 * dVar124;
            local_430 = (undefined8 *)((double)local_430 * dVar147 * dVar124);
            local_438 = dVar124 * local_438 * dVar147;
            puVar34 = &local_618;
            ppcVar42 = &local_478;
            FUN_14481fd10();
            dVar141 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
            dVar110 = (double)CONCAT62(uStack_60e,uStack_610);
            dVar147 = (double)CONCAT26(uStack_602,
                                       CONCAT15(uStack_603,
                                                CONCAT14(uStack_604,CONCAT22(uStack_606,uStack_608))
                                               ));
            dVar124 = (double)CONCAT44(uStack_5fc,uStack_600);
            dVar138 = dVar147 * dVar147 + dVar141 * dVar141;
            dVar148 = dVar124 * dVar124 + dVar110 * dVar110;
            auVar131._0_8_ = dVar138 + dVar148;
            auVar131._8_8_ = dVar138 + dVar148;
            auVar96._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar131._8_8_);
            auVar96._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar131._0_8_);
            auVar99 = sqrtpd(auVar131,auVar131);
            auVar99 = divpd(_DAT_149934d80,auVar99);
            auVar137._0_8_ = auVar99._0_8_ * dVar147;
            auVar137._8_8_ = auVar99._8_8_ * dVar124;
            dVar124 = (double)((ulonglong)(dVar141 * auVar99._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar131._0_8_));
            dVar138 = (double)((ulonglong)(dVar110 * auVar99._8_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar131._8_8_));
            auVar123 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar137,auVar96);
            dVar141 = (double)CONCAT44(uStack_40c,iStack_410);
            auVar132._8_8_ = 0.0;
            auVar132._0_8_ = local_408;
            puVar77 = local_418;
          }
          dVar73 = auVar80._8_8_ * dVar73;
          lVar44 = *plVar43;
          pdVar33 = (double *)(lVar44 + -0x50 + lVar61);
          *pdVar33 = dVar124;
          pdVar33[1] = dVar138;
          *(undefined1 (*) [16])(lVar44 + -0x40 + lVar61) = auVar123;
          plVar64 = (longlong *)(lVar44 + -0x30 + lVar61);
          *plVar64 = (longlong)puVar77;
          plVar64[1] = (longlong)dVar141;
          *(undefined1 (*) [16])(lVar44 + -0x20 + lVar61) = auVar132;
          pdVar33 = (double *)(lVar44 + -0x10 + lVar61);
          *pdVar33 = dVar146;
          pdVar33[1] = dVar145;
          auVar21._8_4_ = SUB84(dVar73,0);
          auVar21._0_8_ = auVar80._0_8_ * (double)puVar97;
          auVar21._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          *(undefined1 (*) [16])(lVar44 + lVar61) = auVar21;
          lVar55 = lVar55 + 1;
          lVar61 = lVar61 + 0x60;
          puVar97 = puVar76;
          dVar73 = dVar152;
          iVar67 = local_788;
          uVar167 = uStack_784;
          iVar40 = local_758;
          uVar169 = uStack_754;
        } while (lVar55 < *(int *)(local_840 + 0x88));
      }
      goto LAB_1432f3037;
    }
  }
  if ((longlong)(int)plVar43[1] != 0) {
    puVar34 = (undefined8 *)*plVar43;
    puVar76 = puVar34 + (longlong)(int)plVar43[1] * 0xc;
    do {
      *puVar34 = local_828._0_8_;
      puVar34[1] = local_828._8_8_;
      puVar34[2] = local_818._0_8_;
      puVar34[3] = local_818._8_8_;
      puVar34[4] = local_858;
      puVar34[5] = dStack_850;
      puVar34[6] = local_838._0_8_;
      puVar34[7] = local_838._8_8_;
      auVar14._8_4_ = SUB84(dVar75,0);
      auVar14._0_8_ = dVar74;
      auVar14._12_4_ = uVar172;
      *(undefined1 (*) [16])(puVar34 + 8) = auVar14;
      auVar7._8_4_ = SUB84(dVar73,0);
      auVar7._0_8_ = puVar97;
      auVar7._12_4_ = uVar165;
      *(undefined1 (*) [16])(puVar34 + 10) = auVar7;
      puVar34 = puVar34 + 0xc;
    } while (puVar34 != puVar76);
  }
LAB_1432f3037:
  uStack_754 = uVar169;
  local_758 = iVar40;
  uStack_784 = uVar167;
  local_788 = iVar67;
  pcVar50 = local_6e0 + 4;
  if (pcVar50 == local_7e0) goto LAB_1432f3064;
  goto LAB_1432efa40;
LAB_1432eece8:
  dStack_158 = 5.4323092248711e-312;
  dStack_130 = 5.4323092248711e-312;
  local_128 = 0.0;
  uStack_120 = 0;
  FUN_140dad9c2(&local_178,&local_618,2);
  FUN_140dad9c2(&local_178,&local_618,0x84);
  cVar31 = FUN_14050a5e0(local_6f0,&local_178);
  if (cVar31 == '\0') goto LAB_1432ef4bb;
  local_828._0_8_ = pcVar50;
  local_6a8[0] = *(undefined2 *)(local_7e0 + 0x13e);
  local_6a3 = 0;
  local_6a0 = 0x6ff;
  local_69c = 0;
  FUN_1475b4530(local_6a8,&local_5e8,&local_618);
  FUN_140dad9c2(&local_5d8,&local_618,0x84);
  puVar97 = local_5b8;
  uVar6 = *(ushort *)(local_6b0 + 0x84);
  iVar67 = uVar6 + 1;
  iVar40 = iVar67 - (int)local_5b8;
  if (iVar40 != 0 && (int)local_5b8 <= iVar67) {
    if ((int)local_5b8 == 0) {
LAB_1432eede2:
      if (local_5b8._4_4_ <= (int)(uint)uVar6) {
        local_5b8 = (undefined8 *)CONCAT44(0x100,(int)local_5b8);
        FUN_14497ddce(&local_5d8,(ulonglong)puVar97 & 0xffffffff);
        iVar67 = (int)local_5b8 + iVar40;
      }
      iVar39 = iVar67 + 0x1f;
      if (-1 < iVar67) {
        iVar39 = iVar67;
      }
      local_5b8 = (undefined8 *)CONCAT44(local_5b8._4_4_,iVar67);
      if (iVar67 % 0x20 != 0) {
        bVar36 = -(char)(iVar67 % 0x20);
        *(uint *)((longlong)&local_5d8 + (longlong)(iVar39 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_5d8 + (longlong)(iVar39 >> 5) * 4) << (bVar36 & 0x1f))
             >> (bVar36 & 0x1f);
      }
    }
    else {
      iVar39 = (int)local_5b8 + 0x1e;
      if (-1 < (int)local_5b8 + -1) {
        iVar39 = (int)local_5b8 + -1;
      }
      if (iVar39 >> 5 != (uint)(uVar6 >> 5)) goto LAB_1432eede2;
      local_5b8 = (undefined8 *)CONCAT44(local_5b8._4_4_,iVar67);
    }
    FUN_1447c45ca(&local_5d8,(ulonglong)puVar97 & 0xffffffff,iVar40,0);
  }
  lVar61 = local_6c0;
  puVar32 = (uint *)((longlong)&local_5d8 + (ulonglong)(uVar6 >> 5) * 4);
  *puVar32 = *puVar32 | 1 << ((byte)uVar6 & 0x1f);
  if ((short)local_5e8 != -1) {
    local_668 = local_6f0;
    local_878[0] = *(char *)(local_6c0 + 0x298);
    if (*(char *)(local_6c0 + 0x298) == '\0') {
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(local_6c0 + 0x28c) = *(int *)(local_6c0 + 0x28c) + 1;
      UNLOCK();
    }
    local_670 = &local_5d8;
    local_660 = FUN_1403b8464(&local_670,0);
    local_868._0_4_ = *(int *)(lVar61 + 0x38);
    if (local_660 != *(int *)(lVar61 + 0x38)) {
      do {
        lVar55 = local_668;
        lVar44 = (longlong)local_660;
        lVar61 = *(longlong *)(*(longlong *)(local_668 + 0x60) + lVar44 * 8);
        if (local_878[0] == '\0') {
          *(undefined4 *)(lVar61 + 0x14) = 0;
          local_838._0_8_ = lVar61;
        }
        else {
          auVar26._8_8_ = 0;
          auVar26._0_8_ = local_838._8_8_;
          local_838 = auVar26 << 0x40;
        }
        if (*(ushort *)(lVar61 + 0xc) != 0) {
          plVar43 = *(longlong **)(lVar61 + 0x28);
          lVar41 = (ulonglong)*(ushort *)(lVar61 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar43 + 0x1e) == (short)local_5e8) goto LAB_1432ef009;
            plVar43 = plVar43 + 4;
            lVar41 = lVar41 + -0x20;
          } while (lVar41 != 0);
        }
        plVar43 = (longlong *)0x0;
LAB_1432ef009:
        local_818._0_4_ = *(int *)(lVar61 + 0x14);
        if (*(int *)(lVar61 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar43 + 1));
        }
        LOCK();
        *(int *)(plVar43 + 3) = (int)plVar43[3] + 1;
        UNLOCK();
        lVar61 = *plVar43;
        lVar55 = *(longlong *)(*(longlong *)(lVar55 + 0x60) + lVar44 * 8);
        uVar71 = (ulonglong)*(ushort *)(lVar55 + 0xe);
        lVar44 = 0x10;
        do {
          *(undefined8 *)(local_48c + lVar44 + 4) = 0;
          *(undefined8 *)((longlong)&local_478 + lVar44) = 0;
          lVar44 = lVar44 + 0x18;
        } while (lVar44 != 0xe8);
        lVar44 = 0;
        puVar52 = (undefined2 *)local_828._0_8_;
        do {
          FUN_1475b4978(lVar55,&local_658,*puVar52);
          lVar41 = *(longlong *)((longlong)&local_478 + lVar44 * 2);
          if (lVar41 != 0) {
            LOCK();
            piVar1 = (int *)(lVar41 + 0x18);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            if (*(int *)((longlong)&pdStack_470 + lVar44 * 2) == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)((longlong)&local_478 + lVar44 * 2) + 8))
              ;
            }
          }
          *(code **)((longlong)&local_478 + lVar44 * 2) = local_658;
          *(int *)((longlong)&pdStack_470 + lVar44 * 2) = (int)uStack_650;
          *(undefined8 *)((longlong)local_468 + lVar44 * 2) = local_648;
          lVar44 = lVar44 + 0xc;
          puVar52 = puVar52 + 1;
        } while (lVar44 != 0x6c);
        if (uVar71 != 0) {
          uVar60 = 0;
          do {
            lVar55 = *(longlong *)(lVar61 + uVar60 * 8);
            puVar32 = local_508;
            if (local_508 == (uint *)0x0) {
              puVar32 = local_518;
            }
            uVar59 = (uint)lVar55;
            uVar66 = uVar59 + 0x1f;
            if (-1 < (int)uVar59) {
              uVar66 = uVar59;
            }
            if ((puVar32[(int)uVar66 >> 5] >> (uVar59 & 0x1f) & 1) != 0) {
              lVar44 = (longlong)(int)uVar59 * 0x60;
              local_658 = *(code **)(local_4f8[0] + lVar44);
              uStack_650 = ((undefined8 *)(local_4f8[0] + lVar44))[1];
              puVar97 = (undefined8 *)(local_4f8[0] + 0x10 + lVar44);
              local_648 = *puVar97;
              uStack_640 = puVar97[1];
              puVar2 = (undefined4 *)(local_4f8[0] + 0x20 + lVar44);
              uVar167 = *puVar2;
              uVar169 = puVar2[1];
              uVar165 = puVar2[2];
              uVar172 = puVar2[3];
              puVar2 = (undefined4 *)(local_4f8[0] + 0x40 + lVar44);
              uVar166 = *puVar2;
              uVar168 = puVar2[1];
              uVar170 = puVar2[2];
              uVar171 = puVar2[3];
              puVar97 = *(undefined8 **)(local_4f8[0] + 0x30 + lVar44);
              uVar51 = *(ulonglong *)(local_4f8[0] + 0x50 + lVar44);
              FUN_1448052ee(&local_658,&local_638);
              if (local_468[0] != (undefined8 *)0x0) {
                uVar167 = (undefined4)local_468[0][uVar60];
                uVar169 = (undefined4)((ulonglong)local_468[0][uVar60] >> 0x20);
              }
              if (local_450 != 0.0) {
                uVar4 = *(undefined8 *)((longlong)local_450 + uVar60 * 8);
                uVar165 = (undefined4)uVar4;
                uVar172 = (undefined4)((ulonglong)uVar4 >> 0x20);
              }
              if (local_438 != 0.0) {
                puVar97 = *(undefined8 **)((longlong)local_438 + uVar60 * 8);
              }
              if (local_420 != 0) {
                local_628 = *(double *)(local_420 + uVar60 * 8);
              }
              if (local_408 != 0.0) {
                uVar4 = *(undefined8 *)((longlong)local_408 + uVar60 * 8);
                local_638._0_2_ = (undefined2)uVar4;
                local_638._2_2_ = (undefined2)((ulonglong)uVar4 >> 0x10);
                local_638._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
              }
              if (local_3f0 != 0) {
                dStack_630 = *(double *)(local_3f0 + uVar60 * 8);
              }
              if (local_3d8 != (undefined8 *)0x0) {
                uVar166 = (undefined4)local_3d8[uVar60];
                uVar168 = (undefined4)((ulonglong)local_3d8[uVar60] >> 0x20);
              }
              if (local_3c0 != (undefined8 *)0x0) {
                uVar170 = (undefined4)local_3c0[uVar60];
                uVar171 = (undefined4)((ulonglong)local_3c0[uVar60] >> 0x20);
              }
              dStack_850 = 0.0;
              if (local_3a8 != (undefined8 *)0x0) {
                uVar51 = local_3a8[uVar60];
              }
              local_808._8_8_ = 0;
              local_808._0_8_ = uVar51;
              auVar25._2_2_ = local_638._2_2_;
              auVar25._0_2_ = (undefined2)local_638;
              auVar25._4_4_ = local_638._4_4_;
              auVar25._8_8_ = dStack_630;
              auVar80 = divpd(auVar25,_DAT_1499387d0);
              auVar100._8_8_ = 0;
              auVar100._0_8_ = local_628;
              auVar99 = divpd(auVar100,_DAT_1499387d0);
              auVar80 = roundpd(auVar80,auVar80,3);
              auVar99 = roundpd(auVar99,auVar99,3);
              dVar146 = ((double)CONCAT44(local_638._4_4_,
                                          CONCAT22(local_638._2_2_,(undefined2)local_638)) -
                        auVar80._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar152 = (dStack_630 - auVar80._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar141 = (local_628 - auVar99._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar145 = (0.0 - auVar99._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              local_858 = puVar97;
              dVar73 = sin(dVar146);
              dVar74 = sin(dVar152);
              dVar75 = sin(dVar141);
              sin(dVar145);
              dVar146 = cos(dVar146);
              dVar152 = cos(dVar152);
              dVar141 = cos(dVar141);
              cos(dVar145);
              auVar114._8_8_ = 0;
              auVar114._0_8_ = local_808._0_8_;
              lVar44 = *(longlong *)(local_4b8[0] + (longlong)(int)uVar59 * 0x10);
              lVar55 = (lVar55 >> 0x20) * 0x60;
              *(double *)(lVar44 + lVar55) = dVar73 * dVar74 * dVar141 - dVar146 * dVar152 * dVar75;
              ((double *)(lVar44 + lVar55))[1] =
                   -(dVar73 * dVar152 * dVar141) - dVar146 * dVar74 * dVar75;
              pdVar33 = (double *)(lVar44 + 0x10 + lVar55);
              *pdVar33 = -(dVar152 * dVar73 * dVar75) + dVar74 * dVar146 * dVar141;
              pdVar33[1] = dVar74 * dVar73 * dVar75 + dVar152 * dVar146 * dVar141;
              puVar2 = (undefined4 *)(lVar44 + 0x20 + lVar55);
              *puVar2 = uVar167;
              puVar2[1] = uVar169;
              puVar2[2] = uVar165;
              puVar2[3] = uVar172;
              plVar65 = (longlong *)(lVar44 + 0x30 + lVar55);
              *plVar65 = (longlong)local_858;
              plVar65[1] = 0;
              puVar2 = (undefined4 *)(lVar44 + 0x40 + lVar55);
              *puVar2 = uVar166;
              puVar2[1] = uVar168;
              puVar2[2] = uVar170;
              puVar2[3] = uVar171;
              *(undefined1 (*) [16])(lVar44 + 0x50 + lVar55) = auVar114;
            }
            uVar60 = uVar60 + 1;
          } while (uVar71 != uVar60);
        }
        lVar61 = 0xc0;
        do {
          if (*(longlong *)((longlong)&local_478 + lVar61) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)((longlong)&local_478 + lVar61) + 0x18);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*(int *)((longlong)&pdStack_470 + lVar61) == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)((longlong)&local_478 + lVar61) + 8));
            }
          }
          lVar61 = lVar61 + -0x18;
        } while (lVar61 != -0x18);
        if (plVar43 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar43 + 3) = (int)plVar43[3] + -1;
          UNLOCK();
          if (local_818._0_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar43 + 1));
          }
        }
        if (local_838._0_8_ != 0) {
          *(undefined4 *)(local_838._0_8_ + 0x14) = 1;
        }
        local_660 = FUN_1403b8464(&local_670,local_660 + 1);
      } while (local_660 != local_868._0_4_);
    }
    if (local_670 != (undefined8 *)0x0) {
      if (*(char *)(local_668 + 0x270) == '\0') {
        *(int *)(local_668 + 0x264) = *(int *)(local_668 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_668 + 0x264) = *(int *)(local_668 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_588 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1432ef4bb:
  if (local_128 != 0.0) {
    FUN_1400020a8();
  }
  local_658 = (code *)0x0;
  uStack_650 = 0;
  if (local_500 == 0) {
    uVar51 = 1;
    iVar67 = 0;
    uVar71 = 0;
    uVar59 = 0;
  }
  else {
    puVar32 = local_508;
    if (local_508 == (uint *)0x0) {
      puVar32 = local_518;
    }
    uVar59 = *puVar32;
    if (uVar59 == 0) {
      iVar67 = local_500 + 0x1e;
      if (-1 < (int)(local_500 - 1)) {
        iVar67 = local_500 - 1;
      }
      uVar71 = 0;
      uVar60 = (ulonglong)(uint)(iVar67 >> 5);
      if (iVar67 >> 5 < 1) {
        uVar60 = uVar71;
      }
      iVar67 = 0;
      do {
        if (uVar60 == uVar71) goto LAB_1432f3071;
        iVar67 = iVar67 + 0x20;
        uVar59 = puVar32[uVar71 + 1];
        uVar71 = uVar71 + 1;
      } while (uVar59 == 0);
    }
    else {
      iVar67 = 0;
      uVar71 = 0;
    }
    uVar51 = (ulonglong)(-uVar59 & uVar59);
    uVar60 = uVar51 * 2 + 1;
    lVar61 = 0x3f;
    if (uVar60 != 0) {
      for (; uVar60 >> lVar61 == 0; lVar61 = lVar61 + -1) {
      }
    }
    uVar59 = (iVar67 - ((uint)lVar61 ^ 0x3f)) + 0x3e;
    if ((int)local_500 <= (int)uVar59) {
      uVar59 = local_500;
    }
  }
  if ((int)uVar59 < (int)local_500) {
    uVar66 = 0xffffffff;
    do {
      uVar60 = uStack_650;
      lVar61 = (longlong)(int)uStack_650;
      uVar38 = (int)uStack_650 + 1;
      uStack_650 = CONCAT44(uStack_650._4_4_,uVar38);
      if (uStack_650._4_4_ < uVar38) {
        FUN_1475b4a46(&local_658,uVar60 & 0xffffffff);
      }
      pcVar50 = local_658;
      *(uint *)(local_658 + lVar61 * 4) = uVar59;
      uVar66 = uVar66 & ~(uint)uVar51;
      puVar32 = local_508;
      if (local_508 == (uint *)0x0) {
        puVar32 = local_518;
      }
      iVar40 = (int)uVar71;
      lVar61 = (longlong)iVar40;
      uVar59 = puVar32[lVar61] & uVar66;
      if (uVar59 == 0) {
        iVar39 = local_500 + 0x1e;
        if (-1 < (int)(local_500 - 1)) {
          iVar39 = local_500 - 1;
        }
        iVar39 = iVar39 >> 5;
        iVar37 = iVar39;
        if (iVar39 < iVar40) {
          iVar37 = iVar40;
        }
        if (iVar39 <= iVar40) break;
        lVar55 = 0;
        while( true ) {
          iVar67 = iVar67 + 0x20;
          uVar59 = puVar32[lVar61 + lVar55 + 1];
          if (uVar59 != 0) break;
          lVar55 = lVar55 + 1;
          if (iVar37 - lVar61 == lVar55) goto LAB_1432ef66b;
        }
        uVar71 = (ulonglong)(iVar40 + (int)lVar55 + 1);
        uVar66 = 0xffffffff;
      }
      uVar51 = (ulonglong)(-uVar59 & uVar59);
      uVar60 = uVar51 * 2 + 1;
      lVar61 = 0x3f;
      if (uVar60 != 0) {
        for (; uVar60 >> lVar61 == 0; lVar61 = lVar61 + -1) {
        }
      }
      uVar59 = (iVar67 - ((uint)lVar61 ^ 0x3f)) + 0x3e;
    } while ((int)uVar59 < (int)local_500);
LAB_1432ef66b:
    iVar67 = (int)uStack_650;
    lVar61 = (longlong)(int)uStack_650;
    if (1 < lVar61) {
      memset(local_468,0,0x2f0);
      local_478 = pcVar50;
      pdStack_470 = (double *)(pcVar50 + (lVar61 + -1) * 4);
      fVar72 = logf((float)iVar67);
      local_468[0] = (undefined8 *)CONCAT44(local_468[0]._4_4_,(int)(longlong)(fVar72 + fVar72));
      ppcVar42 = &local_478;
      do {
        pcVar45 = *ppcVar42;
        pcVar53 = ppcVar42[1];
        iVar67 = *(int *)(ppcVar42 + 2);
        iVar40 = (int)((ulonglong)((longlong)pcVar53 - (longlong)pcVar45) >> 2);
        uVar71 = (ulonglong)(iVar40 + 1);
        pcVar48 = pcVar45;
        pcVar54 = pcVar45;
        pcVar50 = pcVar53;
        if (iVar67 != 0) {
LAB_1432ef6f8:
          if (8 < (int)(uint)uVar71) {
            uVar71 = (ulonglong)((uint)uVar71 >> 1);
            iVar40 = *(int *)(pcVar54 + uVar71 * 4);
            *(int *)(pcVar54 + uVar71 * 4) = *(int *)pcVar54;
            *(int *)pcVar54 = iVar40;
            pcVar58 = pcVar50 + 4;
            pcVar45 = pcVar54;
            do {
              pcVar30 = pcVar45 + 4;
              pcVar56 = pcVar45 + 4;
              do {
                pcVar69 = pcVar56;
                pcVar45 = pcVar30;
                if (pcVar50 < pcVar45) break;
                pcVar30 = pcVar45 + 4;
                pcVar56 = pcVar69 + 4;
              } while (*(int *)((longlong)local_688 + (longlong)*(int *)pcVar54 * 4) <=
                       *(int *)((longlong)local_688 + (longlong)*(int *)pcVar45 * 4));
              pcVar30 = pcVar58 + -8;
              do {
                pcVar56 = pcVar58;
                pcVar63 = pcVar30;
                pcVar58 = pcVar56 + -4;
                if (pcVar58 <= pcVar54) break;
                pcVar30 = pcVar63 + -4;
              } while (*(int *)((longlong)local_688 + (longlong)*(int *)pcVar58 * 4) <=
                       *(int *)((longlong)local_688 + (longlong)*(int *)pcVar54 * 4));
              if (pcVar58 < pcVar45) goto LAB_1432ef78e;
              iVar40 = *(int *)pcVar45;
              *(int *)pcVar45 = *(int *)pcVar58;
              *(int *)pcVar58 = iVar40;
            } while( true );
          }
          if (pcVar54 < pcVar50) {
            do {
              pcVar45 = pcVar54;
              if (pcVar54 + 4 <= pcVar50) {
                iVar67 = *(int *)pcVar54;
                pcVar53 = pcVar54 + 4;
                do {
                  pcVar48 = pcVar53;
                  iVar40 = *(int *)pcVar53;
                  if (*(int *)((longlong)local_688 + (longlong)iVar67 * 4) <=
                      *(int *)((longlong)local_688 + (longlong)*(int *)pcVar53 * 4)) {
                    pcVar48 = pcVar45;
                    iVar40 = iVar67;
                  }
                  iVar67 = iVar40;
                  pcVar45 = pcVar48;
                  pcVar53 = pcVar53 + 4;
                } while (pcVar53 <= pcVar50);
              }
              iVar67 = *(int *)pcVar45;
              *(int *)pcVar45 = *(int *)pcVar50;
              *(int *)pcVar50 = iVar67;
              pcVar50 = pcVar50 + -4;
            } while (pcVar54 < pcVar50);
          }
          goto LAB_1432ef9d5;
        }
LAB_1432ef821:
        iVar67 = (int)uVar71;
        if (iVar67 != 0) {
          iVar40 = (iVar40 - (iVar40 + -1 >> 0x1f)) + -1 >> 1;
          iVar39 = iVar40;
joined_r0x0001432ef848:
          do {
            iVar37 = iVar40 * 2 + 1;
            if (iVar37 < iVar67) {
              iVar57 = iVar40 * 2 + 2;
              if ((iVar57 < iVar67) &&
                 (*(int *)((longlong)local_688 +
                          (longlong)*(int *)(pcVar45 + (longlong)iVar57 * 4) * 4) <=
                  *(int *)((longlong)local_688 +
                          (longlong)*(int *)(pcVar45 + (longlong)iVar37 * 4) * 4))) {
                iVar37 = iVar57;
              }
              iVar57 = *(int *)(pcVar45 + (longlong)iVar40 * 4);
              if (*(int *)((longlong)local_688 +
                          (longlong)*(int *)(pcVar45 + (longlong)iVar37 * 4) * 4) <
                  *(int *)((longlong)local_688 + (longlong)iVar57 * 4)) {
                *(int *)(pcVar45 + (longlong)iVar40 * 4) = *(int *)(pcVar45 + (longlong)iVar37 * 4);
                *(int *)(pcVar45 + (longlong)iVar37 * 4) = iVar57;
                iVar40 = iVar37;
                goto joined_r0x0001432ef848;
              }
            }
            bVar70 = iVar39 != 0;
            iVar40 = iVar39 + -1;
            iVar39 = iVar40;
          } while (bVar70);
          if (1 < iVar67) {
            iVar40 = *(int *)pcVar45;
            *(int *)pcVar45 = *(int *)(pcVar45 + (uVar71 - 1) * 4);
            *(int *)(pcVar45 + (uVar71 - 1) * 4) = iVar40;
            if (iVar67 != 2) {
              do {
                uVar60 = uVar71 - 1;
                iVar67 = 0;
                iVar39 = 1;
                iVar40 = 0;
                do {
                  iVar67 = iVar67 + 2;
                  iVar37 = iVar39;
                  if (((longlong)iVar67 < (longlong)uVar60) &&
                     (*(int *)((longlong)local_688 +
                              (longlong)*(int *)(pcVar45 + (longlong)iVar67 * 4) * 4) <=
                      *(int *)((longlong)local_688 +
                              (longlong)*(int *)(pcVar45 + (longlong)iVar39 * 4) * 4))) {
                    iVar37 = iVar67;
                  }
                  iVar67 = *(int *)(pcVar45 + (longlong)iVar40 * 4);
                  if (*(int *)((longlong)local_688 + (longlong)iVar67 * 4) <=
                      *(int *)((longlong)local_688 +
                              (longlong)*(int *)(pcVar45 + (longlong)iVar37 * 4) * 4)) break;
                  *(int *)(pcVar45 + (longlong)iVar40 * 4) =
                       *(int *)(pcVar45 + (longlong)iVar37 * 4);
                  *(int *)(pcVar45 + (longlong)iVar37 * 4) = iVar67;
                  iVar67 = iVar37 * 2;
                  iVar39 = iVar37 * 2 + 1;
                  iVar40 = iVar37;
                } while ((longlong)iVar39 < (longlong)uVar60);
                iVar67 = *(int *)pcVar45;
                *(int *)pcVar45 = *(int *)(pcVar45 + (uVar71 - 2) * 4);
                *(int *)(pcVar45 + (uVar71 - 2) * 4) = iVar67;
                uVar71 = uVar60;
              } while (2 < uVar60);
            }
          }
        }
LAB_1432ef9d5:
        ppcVar42 = ppcVar42 + -3;
      } while (&local_478 <= ppcVar42);
    }
    if ((int)uStack_650 != 0) {
      local_7e0 = local_658 + (longlong)(int)uStack_650 * 4;
      local_7a0 = local_840 + 0x50;
      pcVar50 = local_658;
LAB_1432efa40:
      uVar59 = *(uint *)pcVar50;
      local_6e8 = *(longlong *)*local_6b8;
      lVar61 = (longlong)(int)uVar59 * 0x10;
      plVar43 = (longlong *)(local_6e8 + lVar61);
      ppcVar42 = (code **)&local_638;
      FUN_1475b45d2(local_7a0,ppcVar42,uVar59);
      local_828._8_8_ = DAT_14c846488;
      local_828._0_8_ = DAT_14c846480;
      local_818._8_8_ = DAT_14c846498;
      local_818._0_8_ = DAT_14c846490;
      local_858 = (undefined8 *)CONCAT44(DAT_14c8464a0._4_4_,(undefined4)DAT_14c8464a0);
      dStack_850 = (double)CONCAT44(DAT_14c8464a8._4_4_,(undefined4)DAT_14c8464a8);
      local_838._8_8_ = DAT_14c8464b8;
      local_838._0_8_ = DAT_14c8464b0;
      dVar74 = (double)CONCAT44(DAT_14c8464c0._4_4_,(undefined4)DAT_14c8464c0);
      dVar75 = (double)CONCAT44(DAT_14c8464c8._4_4_,(undefined4)DAT_14c8464c8);
      uVar66 = CONCAT22(local_638._2_2_,(undefined2)local_638);
      puVar97 = DAT_14c8464d0;
      dVar73 = dRam000000014c8464d8;
      local_6e0 = pcVar50;
      if (CONCAT22(local_638._2_2_,(undefined2)local_638) != 0xffffffff) {
LAB_1432efb84:
        lVar55 = local_4b8[0];
        uVar169 = uStack_754;
        iVar40 = local_758;
        uVar167 = uStack_784;
        iVar67 = local_788;
        uVar172 = (undefined4)((ulonglong)dVar75 >> 0x20);
        uVar165 = (undefined4)((ulonglong)dVar73 >> 0x20);
        local_7d8._8_4_ = SUB84(dVar75,0);
        local_7d8._0_8_ = dVar74;
        local_7d8._12_4_ = uVar172;
        local_808._8_4_ = SUB84(dVar73,0);
        local_808._0_8_ = puVar97;
        local_808._12_4_ = uVar165;
        if (((int)uVar66 < 0) || (local_490 <= (int)uVar66)) goto LAB_1432efbd3;
        puVar35 = local_498;
        if (local_498 == (undefined1 *)0x0) {
          puVar35 = local_4a8;
        }
        if ((*(uint *)(puVar35 + (ulonglong)(uVar66 >> 5) * 4) >> (uVar66 & 0x1f) & 1) == 0)
        goto LAB_1432efbd3;
        local_638._0_2_ = (undefined2)uVar66;
        local_638._2_2_ = (undefined2)(uVar66 >> 0x10);
        plVar65 = (longlong *)((ulonglong)uVar66 * 0x10 + local_4b8[0]);
        ppcVar42 = (code **)CONCAT71((int7)((ulonglong)local_4b8[0] >> 8),-1 < (int)uVar59);
        local_758 = local_828._0_4_;
        uStack_754 = local_828._4_4_;
        local_788 = local_818._0_4_;
        uStack_784 = local_818._4_4_;
        if (-1 < (int)uVar59 && (int)uVar59 < local_490) {
          puVar34 = (undefined8 *)(ulonglong)(uVar59 >> 5);
          iVar39 = *(int *)(local_840 + 0x88);
          if ((*(uint *)(puVar35 + (longlong)puVar34 * 4) >> (uVar59 & 0x1f) & 1) == 0)
          goto LAB_1432f1605;
          plVar64 = (longlong *)(lVar61 + local_4b8[0]);
          if (0 < iVar39) {
            dVar146 = (double)local_828._8_8_ + (double)local_828._8_8_;
            dVar152 = (double)local_818._0_8_ + (double)local_818._0_8_;
            dVar141 = (double)local_828._0_8_ * ((double)local_828._0_8_ + (double)local_828._0_8_);
            local_738 = (undefined8 *)
                        ((1.0 - ((double)local_818._0_8_ * dVar152 +
                                (double)local_828._8_8_ * dVar146)) * dVar74);
            puStack_7b0 = (undefined8 *)
                          ((1.0 - ((double)local_818._0_8_ * dVar152 + dVar141)) * dVar75);
            local_718 = (undefined8 *)
                        ((1.0 - (dVar141 + (double)local_828._8_8_ * dVar146)) * (double)puVar97);
            puStack_750 = (undefined8 *)local_828._0_8_;
            dVar141 = ((double)local_828._0_8_ + (double)local_828._0_8_) * (double)local_818._8_8_;
            local_768 = (undefined8 *)local_818._8_8_;
            puStack_760 = (undefined8 *)local_818._8_8_;
            puStack_730 = (undefined8 *)
                          ((dVar146 * (double)local_828._0_8_ + dVar152 * (double)local_818._8_8_) *
                          dVar74);
            local_708 = (undefined8 *)((dVar152 * (double)local_828._8_8_ + dVar141) * dVar75);
            local_7c8 = (undefined8 *)
                        ((dVar146 * (double)local_818._8_8_ + (double)local_828._0_8_ * dVar152) *
                        (double)puVar97);
            local_7b8 = (undefined8 *)
                        ((dVar146 * (double)local_828._0_8_ - dVar152 * (double)local_818._8_8_) *
                        dVar75);
            puStack_7c0 = (undefined8 *)
                          ((dVar152 * (double)local_828._8_8_ - dVar141) * (double)puVar97);
            local_728 = (undefined8 *)
                        (((double)local_828._0_8_ * dVar152 - dVar146 * (double)local_818._8_8_) *
                        dVar74);
            puStack_710 = (undefined8 *)0x0;
            puStack_720 = (undefined8 *)0x0;
            puStack_700 = (undefined8 *)0x0;
            local_748 = (undefined8 *)local_838._0_8_;
            puStack_740 = (undefined8 *)&DAT_3ff0000000000000;
            local_778 = (undefined8 *)local_828._8_8_;
            puStack_770 = (undefined8 *)local_828._8_8_;
            puStack_780 = (undefined8 *)local_818._0_8_;
            local_798 = (undefined8 *)local_828._0_8_;
            puStack_790 = (undefined8 *)local_818._8_8_;
            local_6d8 = (undefined8 *)local_828._8_8_;
            puStack_6d0 = (undefined8 *)local_818._0_8_;
            lVar44 = 0;
            lVar61 = 0;
            do {
              lVar41 = *plVar64;
              auVar80 = *(undefined1 (*) [16])(lVar41 + 0x40 + lVar44);
              auVar99 = *(undefined1 (*) [16])(lVar41 + 0x50 + lVar44);
              auVar17._8_4_ = SUB84(dVar75,0);
              auVar17._0_8_ = dVar74;
              auVar17._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              auVar107 = minpd(auVar80,auVar17);
              auVar10._8_4_ = SUB84(dVar73,0);
              auVar10._0_8_ = puVar97;
              auVar10._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              auVar102 = minpd(auVar99,auVar10);
              auVar84._8_8_ = -(ulonglong)(auVar107._8_8_ < 0.0);
              auVar84._0_8_ = -(ulonglong)(auVar107._0_8_ < 0.0);
              iVar67 = movmskpd((int)puVar34,auVar84);
              auVar103._8_8_ = -(ulonglong)(auVar102._8_8_ < 0.0);
              auVar103._0_8_ = -(ulonglong)(auVar102._0_8_ < 0.0);
              uVar59 = movmskpd((int)ppcVar42,auVar103);
              local_878._0_8_ = auVar80._0_8_;
              local_878._8_8_ = auVar80._8_8_;
              if ((uVar59 & 0x3fffffff) == 0 && iVar67 == 0) {
                dVar146 = *(double *)(lVar41 + lVar44);
                dVar152 = ((double *)(lVar41 + lVar44))[1];
                pdVar33 = (double *)(lVar41 + 0x10 + lVar44);
                dVar141 = *pdVar33;
                dVar145 = pdVar33[1];
                dVar110 = dVar152 * (double)CONCAT44(uStack_784,local_788) * -1.0 +
                          (double)CONCAT44(uStack_754,local_758) * dVar145 * 1.0 +
                          (double)local_768 * dVar146 + (double)local_778 * dVar141;
                dVar147 = dVar146 * (double)puStack_780 * 1.0 +
                          (double)puStack_750 * dVar141 * -1.0 + (double)puStack_760 * dVar152 +
                          (double)puStack_770 * dVar145;
                auVar117._0_8_ =
                     dVar145 * (double)CONCAT44(uStack_784,local_788) * 1.0 +
                     (((double)CONCAT44(uStack_754,local_758) * dVar152 * 1.0 +
                      (double)local_768 * dVar141) - (double)local_778 * dVar146);
                auVar117._8_8_ =
                     dVar141 * (double)puStack_780 * -1.0 +
                     (((double)puStack_750 * dVar146 * -1.0 + (double)puStack_760 * dVar145) -
                     (double)puStack_770 * dVar152);
                pdVar33 = (double *)(lVar41 + 0x20 + lVar44);
                dVar146 = *pdVar33 * dVar74;
                dVar124 = pdVar33[1] * dVar75;
                pdVar33 = (double *)(lVar41 + 0x30 + lVar44);
                dVar138 = *pdVar33 * (double)puVar97;
                dVar148 = pdVar33[1] * dVar73;
                dVar152 = dVar124 * (double)local_828._0_8_ - (double)local_6d8 * dVar146;
                dVar141 = dVar138 * (double)local_828._8_8_ - (double)puStack_6d0 * dVar124;
                dVar145 = dVar146 * (double)local_818._0_8_ - (double)local_798 * dVar138;
                dVar133 = dVar148 * (double)local_818._8_8_ - (double)puStack_790 * dVar148;
                dVar141 = dVar141 + dVar141;
                dVar145 = dVar145 + dVar145;
                dVar152 = dVar152 + dVar152;
                dVar133 = dVar133 + dVar133;
                puVar76 = (undefined8 *)
                          ((dVar152 * (double)local_828._8_8_ - (double)puStack_6d0 * dVar145) +
                           (double)local_768 * dVar141 + dVar146 + (double)local_858);
                dVar146 = (dVar141 * (double)local_818._0_8_ - dVar152 * (double)local_798) +
                          (double)puStack_760 * dVar145 + dVar124 + dStack_850;
                dVar152 = (dVar145 * (double)local_828._0_8_ - (double)local_6d8 * dVar141) +
                          (double)local_768 * dVar152 + dVar138 + (double)local_838._0_8_;
                dVar141 = (dVar133 * (double)local_818._8_8_ - dVar133 * (double)puStack_790) +
                          (double)puStack_760 * dVar133 + dVar148 + (double)local_838._8_8_;
                dVar74 = (double)local_878._0_8_ * dVar74;
                dVar75 = (double)local_878._8_8_ * dVar75;
                auVar159._0_8_ = auVar99._0_8_ * (double)puVar97;
                auVar159._8_8_ = auVar99._8_8_ * dVar73;
                uVar167 = 0;
              }
              else {
                local_5e8 = local_738;
                uStack_5e0 = puStack_730;
                local_5d8 = local_728;
                puStack_5d0 = puStack_720;
                local_5c8._8_8_ = puStack_7b0;
                local_5c8._0_8_ = local_7b8;
                local_5b8 = local_708;
                puStack_5b0 = puStack_700;
                local_5a8 = local_7c8;
                puStack_5a0 = puStack_7c0;
                local_598 = local_718;
                puStack_590 = puStack_710;
                local_588 = local_858;
                dStack_580 = dStack_850;
                local_578 = local_748;
                puStack_570 = puStack_740;
                dVar152 = *(double *)(lVar41 + lVar44);
                dVar141 = ((double *)(lVar41 + lVar44))[1];
                dVar146 = *(double *)(lVar41 + 0x10 + lVar44);
                pdVar33 = (double *)(lVar41 + 0x40 + lVar44);
                dStack_168 = *pdVar33;
                dStack_158 = pdVar33[1];
                dStack_130 = *(double *)(lVar41 + 0x50 + lVar44);
                dVar124 = dVar141 + dVar141;
                dVar145 = dVar146 + dVar146;
                dVar110 = dVar152 * (dVar152 + dVar152);
                local_178 = (longlong *)
                            ((1.0 - (dVar146 * dVar145 + dVar141 * dVar124)) * dStack_168);
                dStack_150 = (1.0 - (dVar146 * dVar145 + dVar110)) * dStack_158;
                local_128 = (1.0 - (dVar110 + dVar141 * dVar124)) * dStack_130;
                dVar138 = *(double *)(lVar41 + lVar44) * dVar145;
                pdVar33 = (double *)(lVar41 + 0x18 + lVar44);
                dVar146 = *pdVar33;
                dVar110 = dVar145 * dVar146;
                dVar147 = (dVar152 + dVar152) * *pdVar33;
                dVar146 = dVar124 * dVar146;
                dStack_170 = (dVar124 * dVar152 + dVar110) * dStack_168;
                local_148 = (dVar145 * dVar141 + dVar147) * dStack_158;
                local_138 = (dVar146 + dVar138) * dStack_130;
                dStack_168 = (dVar138 - dVar146) * dStack_168;
                dStack_158 = (dVar124 * dVar152 - dVar110) * dStack_158;
                dStack_130 = (dVar145 * dVar141 - dVar147) * dStack_130;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                pdVar33 = (double *)(lVar41 + 0x20 + lVar44);
                local_118 = (undefined8 *)*pdVar33;
                dStack_110 = pdVar33[1];
                local_108 = *(double *)(lVar41 + 0x30 + lVar44);
                uStack_100 = 0x3ff0000000000000;
                local_878._0_8_ = (double)local_878._0_8_ * dVar74;
                local_878._8_8_ = (double)local_878._8_8_ * dVar75;
                local_868._8_8_ = auVar99._8_8_ * dVar73;
                local_868._0_8_ = auVar99._0_8_ * (double)puVar97;
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar159 = local_868;
                dVar75 = (double)local_878._8_8_;
                dVar74 = (double)local_878._0_8_;
                auVar80 = _DAT_149934d80;
                dVar146 = (double)local_468[0] * (double)local_468[0] +
                          (double)local_478 * (double)local_478 +
                          (double)pdStack_470 * (double)pdStack_470;
                dVar152 = (double)local_448 * (double)local_448 +
                          local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar146 + -9.99999993922529e-09);
                dVar146 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar146)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar152 + -9.99999993922529e-09);
                dVar152 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar152)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar73 = (double)(~uVar71 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                auVar85._8_8_ = -(ulonglong)(0.0 <= (double)local_878._8_8_);
                auVar85._0_8_ = -(ulonglong)(0.0 <= (double)local_878._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar85);
                dVar141 = (double)(~-(ulonglong)(0.0 <= (double)local_868._0_8_) &
                                   0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= (double)local_868._0_8_) & 0x3ff0000000000000)
                ;
                dVar145 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar146 * dVar145);
                pdStack_470 = (double *)((double)pdStack_470 * dVar146 * dVar145);
                local_468[0] = (undefined8 *)(dVar146 * (double)local_468[0] * dVar145);
                dVar146 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar152 * (double)local_448 * dVar146);
                local_450 = local_450 * dVar152 * dVar146;
                local_458 = dVar146 * local_458 * dVar152;
                local_428 = dVar73 * local_428 * dVar141;
                local_430 = (undefined8 *)((double)local_430 * dVar73 * dVar141);
                local_438 = dVar141 * local_438 * dVar73;
                puVar97 = &local_618;
                ppcVar42 = &local_478;
                FUN_14481fd10();
                uVar167 = SUB84(ppcVar42,0);
                iVar67 = (int)puVar97;
                dVar73 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar146 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar152 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar141 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar145 = dVar152 * dVar152 + dVar73 * dVar73;
                dVar110 = dVar141 * dVar141 + dVar146 * dVar146;
                auVar127._0_8_ = dVar145 + dVar110;
                auVar127._8_8_ = dVar145 + dVar110;
                auVar86._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar127._8_8_);
                auVar86._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar127._0_8_);
                auVar99 = sqrtpd(auVar127,auVar127);
                auVar80 = divpd(auVar80,auVar99);
                auVar135._0_8_ = auVar80._0_8_ * dVar152;
                auVar135._8_8_ = auVar80._8_8_ * dVar141;
                dVar110 = (double)((ulonglong)(dVar73 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar127._0_8_));
                dVar147 = (double)((ulonglong)(dVar146 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar127._8_8_));
                auVar117 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar135,auVar86);
                dVar146 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar141 = 0.0;
                dVar152 = local_408;
                puVar76 = local_418;
              }
              lVar41 = *plVar65;
              auVar80 = *(undefined1 (*) [16])(lVar41 + 0x40 + lVar44);
              dVar73 = auVar80._0_8_;
              dVar124 = auVar80._8_8_;
              auVar99 = *(undefined1 (*) [16])(lVar41 + 0x50 + lVar44);
              dVar145 = auVar99._0_8_;
              dVar138 = auVar99._8_8_;
              auVar143._8_8_ = dVar75;
              auVar143._0_8_ = dVar74;
              auVar80 = minpd(auVar143,auVar80);
              dVar148 = auVar159._0_8_;
              auVar99 = minpd(auVar159,auVar99);
              auVar144._8_8_ = -(ulonglong)(auVar80._8_8_ < 0.0);
              auVar144._0_8_ = -(ulonglong)(auVar80._0_8_ < 0.0);
              uVar59 = movmskpd(iVar67,auVar144);
              puVar34 = (undefined8 *)(ulonglong)uVar59;
              auVar151._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
              auVar151._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
              uVar66 = movmskpd(uVar167,auVar151);
              dVar133 = auVar117._0_8_;
              dVar139 = auVar117._8_8_;
              if ((uVar66 & 0x3fffffff) == 0 && uVar59 == 0) {
                dVar164 = *(double *)(lVar41 + lVar44);
                dVar22 = ((double *)(lVar41 + lVar44))[1];
                pdVar33 = (double *)(lVar41 + 0x10 + lVar44);
                dVar23 = *pdVar33;
                dVar24 = pdVar33[1];
                pdVar33 = (double *)(lVar41 + 0x18 + lVar44);
                dVar163 = *pdVar33;
                dVar140 = *pdVar33;
                dVar155 = *(double *)(lVar41 + lVar44);
                dVar153 = *(double *)(lVar41 + lVar44);
                local_878._8_4_ = SUB84(dVar75,0);
                local_878._0_8_ = dVar74;
                local_878._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
                pdVar33 = (double *)(lVar41 + 8 + lVar44);
                dVar75 = *pdVar33;
                dVar156 = *pdVar33;
                pdVar33 = (double *)(lVar41 + 0x10 + lVar44);
                dVar157 = *pdVar33;
                dVar160 = *pdVar33;
                dVar158 = dVar147 * dVar157 * -1.0 +
                          dVar133 * dVar75 + dVar139 * dVar155 * 1.0 + dVar110 * dVar163;
                dVar161 = dVar110 * dVar160 * 1.0 +
                          dVar139 * dVar156 + dVar133 * dVar153 * -1.0 + dVar147 * dVar140;
                auVar162._0_8_ =
                     dVar139 * dVar157 * 1.0 +
                     ((dVar155 * dVar147 * 1.0 + dVar133 * dVar163) - dVar110 * dVar75);
                auVar162._8_8_ =
                     dVar133 * dVar160 * -1.0 +
                     ((dVar153 * dVar110 * -1.0 + dVar139 * dVar140) - dVar147 * dVar156);
                dVar147 = (double)puVar76 * dVar73;
                dVar146 = dVar146 * dVar124;
                dVar152 = dVar152 * dVar145;
                dVar141 = dVar141 * dVar138;
                dVar75 = dVar146 * dVar164 - dVar147 * dVar22;
                dVar133 = dVar152 * dVar22 - dVar146 * dVar23;
                dVar139 = dVar147 * dVar23 - dVar152 * dVar164;
                dVar110 = dVar141 * dVar24 - dVar141 * dVar24;
                dVar133 = dVar133 + dVar133;
                dVar139 = dVar139 + dVar139;
                dVar75 = dVar75 + dVar75;
                dVar110 = dVar110 + dVar110;
                dVar74 = dVar74 * dVar73;
                dVar124 = (double)local_878._8_8_ * dVar124;
                dVar148 = dVar148 * dVar145;
                dVar138 = auVar159._8_8_ * dVar138;
                pdVar33 = (double *)(lVar41 + 0x20 + lVar44);
                puVar97 = (undefined8 *)
                          ((dVar75 * dVar22 - dVar23 * dVar139) + dVar163 * dVar133 + dVar147 +
                          *pdVar33);
                dVar73 = (dVar133 * dVar23 - dVar75 * dVar164) + dVar140 * dVar139 + dVar146 +
                         pdVar33[1];
                pdVar33 = (double *)(lVar41 + 0x30 + lVar44);
                dVar75 = (dVar139 * dVar164 - dVar22 * dVar133) + dVar163 * dVar75 + dVar152 +
                         *pdVar33;
                dVar146 = (dVar110 * dVar24 - dVar110 * dVar24) + dVar140 * dVar110 + dVar141 +
                          pdVar33[1];
                ppcVar42 = (code **)0x0;
                local_868 = auVar159;
              }
              else {
                local_878._8_8_ = auVar159._8_8_ * dVar138;
                local_878._0_8_ = dVar148 * dVar145;
                dVar140 = *(double *)(lVar41 + lVar44);
                dVar163 = ((double *)(lVar41 + lVar44))[1];
                dVar155 = *(double *)(lVar41 + 0x10 + lVar44);
                dVar153 = dVar163 + dVar163;
                dVar156 = dVar155 + dVar155;
                dVar164 = dVar140 * (dVar140 + dVar140);
                local_598 = (undefined8 *)((1.0 - (dVar164 + dVar163 * dVar153)) * dVar145);
                dVar138 = *(double *)(lVar41 + lVar44) * dVar156;
                pdVar33 = (double *)(lVar41 + 0x18 + lVar44);
                dVar141 = *pdVar33;
                dVar157 = dVar156 * dVar141;
                dVar160 = (dVar140 + dVar140) * *pdVar33;
                dVar141 = dVar153 * dVar141;
                local_5a8 = (undefined8 *)((dVar141 + dVar138) * dVar145);
                puStack_5a0 = (undefined8 *)((dVar156 * dVar163 - dVar160) * dVar145);
                local_868._8_8_ = dVar75 * dVar124;
                local_868._0_8_ = dVar74 * dVar73;
                local_5e8 = (undefined8 *)((1.0 - (dVar155 * dVar156 + dVar163 * dVar153)) * dVar73)
                ;
                uStack_5e0 = (undefined8 *)((dVar153 * dVar140 + dVar157) * dVar73);
                local_5b8 = (undefined8 *)((dVar156 * dVar163 + dVar160) * dVar124);
                local_5d8 = (undefined8 *)((dVar138 - dVar141) * dVar73);
                puStack_5d0 = (undefined8 *)0x0;
                local_5c8._8_8_ = (1.0 - (dVar155 * dVar156 + dVar164)) * dVar124;
                local_5c8._0_8_ = (dVar153 * dVar140 - dVar157) * dVar124;
                puStack_5b0 = (undefined8 *)0x0;
                puStack_590 = (undefined8 *)0x0;
                puVar97 = (undefined8 *)(lVar41 + 0x20 + lVar44);
                local_588 = (undefined8 *)*puVar97;
                dStack_580 = (double)puVar97[1];
                local_578 = *(undefined8 **)(lVar41 + 0x30 + lVar44);
                puStack_570 = (undefined8 *)&DAT_3ff0000000000000;
                dVar73 = dVar147 + dVar147;
                dVar145 = dVar133 + dVar133;
                dVar141 = dVar110 * (dVar110 + dVar110);
                local_128 = (1.0 - (dVar141 + dVar147 * dVar73)) * dVar148;
                dVar124 = (dVar110 + dVar110) * dVar139;
                local_138 = (dVar110 * dVar145 + dVar73 * dVar139) * dVar148;
                dStack_158 = (dVar73 * dVar110 - dVar145 * dVar139) * dVar75;
                dStack_130 = (dVar145 * dVar147 - dVar124) * dVar148;
                local_178 = (longlong *)((1.0 - (dVar133 * dVar145 + dVar147 * dVar73)) * dVar74);
                dStack_150 = (1.0 - (dVar133 * dVar145 + dVar141)) * dVar75;
                dStack_170 = (dVar73 * dVar110 + dVar145 * dVar139) * dVar74;
                local_148 = (dVar145 * dVar147 + dVar124) * dVar75;
                dStack_168 = (dVar110 * dVar145 - dVar73 * dVar139) * dVar74;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                uStack_100 = 0x3ff0000000000000;
                local_118 = puVar76;
                dStack_110 = dVar146;
                local_108 = dVar152;
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar80 = _DAT_149934d80;
                local_7f8 = local_468[0];
                dVar74 = (double)local_468[0] * (double)local_468[0] +
                         (double)local_478 * (double)local_478 +
                         (double)pdStack_470 * (double)pdStack_470;
                dVar146 = (double)local_448 * (double)local_448 +
                          local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
                dVar75 = (double)(~uVar71 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar146 + -9.99999993922529e-09);
                dVar146 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar146)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar74 = (double)local_868._0_8_;
                dVar124 = (double)local_868._8_8_;
                dVar73 = (double)(~uVar71 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                dVar148 = (double)local_878._0_8_;
                dVar138 = (double)local_878._8_8_;
                auVar87._8_8_ = -(ulonglong)(0.0 <= (double)local_868._8_8_);
                auVar87._0_8_ = -(ulonglong)(0.0 <= (double)local_868._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar87);
                dVar152 = (double)(~-(ulonglong)(0.0 <= (double)local_878._0_8_) &
                                   0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= (double)local_878._0_8_) & 0x3ff0000000000000)
                ;
                dVar141 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar75 * dVar141);
                pdStack_470 = (double *)((double)pdStack_470 * dVar75 * dVar141);
                local_468[0] = (undefined8 *)(dVar75 * (double)local_468[0] * dVar141);
                dVar75 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar146 * (double)local_448 * dVar75);
                local_450 = local_450 * dVar146 * dVar75;
                local_458 = dVar75 * local_458 * dVar146;
                local_428 = dVar73 * local_428 * dVar152;
                local_430 = (undefined8 *)((double)local_430 * dVar73 * dVar152);
                local_438 = dVar152 * local_438 * dVar73;
                puVar34 = &local_618;
                ppcVar42 = &local_478;
                FUN_14481fd10();
                dVar73 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar75 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar146 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar152 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar141 = dVar146 * dVar146 + dVar73 * dVar73;
                dVar145 = dVar152 * dVar152 + dVar75 * dVar75;
                auVar118._0_8_ = dVar141 + dVar145;
                auVar118._8_8_ = dVar141 + dVar145;
                auVar88._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar118._8_8_);
                auVar88._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar118._0_8_);
                auVar99 = sqrtpd(auVar118,auVar118);
                auVar80 = divpd(auVar80,auVar99);
                auVar128._0_8_ = auVar80._0_8_ * dVar146;
                auVar128._8_8_ = auVar80._8_8_ * dVar152;
                dVar158 = (double)((ulonglong)(dVar73 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar118._0_8_));
                dVar161 = (double)((ulonglong)(dVar75 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar118._8_8_));
                auVar162 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar128,auVar88);
                dVar73 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar146 = 0.0;
                dVar75 = local_408;
                puVar97 = local_418;
              }
              lVar41 = *plVar64;
              *(double *)(lVar41 + lVar44) = dVar158;
              ((double *)(lVar41 + lVar44))[1] = dVar161;
              *(undefined1 (*) [16])(lVar41 + 0x10 + lVar44) = auVar162;
              plVar3 = (longlong *)(lVar41 + 0x20 + lVar44);
              *plVar3 = (longlong)puVar97;
              plVar3[1] = (longlong)dVar73;
              pdVar33 = (double *)(lVar41 + 0x30 + lVar44);
              *pdVar33 = dVar75;
              pdVar33[1] = dVar146;
              auVar18._8_4_ = SUB84(dVar124,0);
              auVar18._0_8_ = dVar74;
              auVar18._12_4_ = (int)((ulonglong)dVar124 >> 0x20);
              *(undefined1 (*) [16])(lVar41 + 0x40 + lVar44) = auVar18;
              auVar11._8_4_ = SUB84(dVar138,0);
              auVar11._0_8_ = dVar148;
              auVar11._12_4_ = (int)((ulonglong)dVar138 >> 0x20);
              *(undefined1 (*) [16])(lVar41 + 0x50 + lVar44) = auVar11;
              lVar61 = lVar61 + 1;
              lVar44 = lVar44 + 0x60;
              puVar97 = (undefined8 *)local_808._0_8_;
              dVar73 = (double)local_808._8_8_;
              dVar74 = (double)local_7d8._0_8_;
              dVar75 = (double)local_7d8._8_8_;
              iVar67 = local_788;
              uVar167 = uStack_784;
              iVar40 = local_758;
              uVar169 = uStack_754;
            } while (lVar61 < *(int *)(local_840 + 0x88));
          }
          uStack_754 = uVar169;
          local_758 = iVar40;
          uStack_784 = uVar167;
          local_788 = iVar67;
          iVar67 = local_788;
          uVar167 = uStack_784;
          iVar40 = local_758;
          uVar169 = uStack_754;
          if (local_6e8 != lVar55) {
            iVar39 = (int)plVar64[1];
            _Src = (void *)*plVar64;
            *(int *)(plVar43 + 1) = iVar39;
            if (iVar39 == 0 && *(int *)((longlong)plVar43 + 0xc) == 0) {
              *(undefined4 *)((longlong)plVar43 + 0xc) = 0;
            }
            else {
              FUN_144756262(plVar43,iVar39);
              iVar67 = local_788;
              uVar167 = uStack_784;
              iVar40 = local_758;
              uVar169 = uStack_754;
              if (iVar39 != 0) {
                memcpy((void *)*plVar43,_Src,(longlong)iVar39 * 0x60);
                iVar67 = local_788;
                uVar167 = uStack_784;
                iVar40 = local_758;
                uVar169 = uStack_754;
              }
            }
          }
        }
        else {
          iVar39 = *(int *)(local_840 + 0x88);
LAB_1432f1605:
          if (0 < iVar39) {
            dVar146 = (double)local_828._8_8_ + (double)local_828._8_8_;
            dVar152 = (double)local_818._0_8_ + (double)local_818._0_8_;
            dVar141 = (double)local_828._0_8_ * ((double)local_828._0_8_ + (double)local_828._0_8_);
            local_738 = (undefined8 *)
                        ((1.0 - ((double)local_818._0_8_ * dVar152 +
                                (double)local_828._8_8_ * dVar146)) * dVar74);
            puStack_7b0 = (undefined8 *)
                          ((1.0 - ((double)local_818._0_8_ * dVar152 + dVar141)) * dVar75);
            local_718 = (undefined8 *)
                        ((1.0 - (dVar141 + (double)local_828._8_8_ * dVar146)) * (double)puVar97);
            puStack_750 = (undefined8 *)local_828._0_8_;
            dVar141 = ((double)local_828._0_8_ + (double)local_828._0_8_) * (double)local_818._8_8_;
            local_768 = (undefined8 *)local_818._8_8_;
            puStack_760 = (undefined8 *)local_818._8_8_;
            puStack_730 = (undefined8 *)
                          ((dVar146 * (double)local_828._0_8_ + dVar152 * (double)local_818._8_8_) *
                          dVar74);
            local_708 = (undefined8 *)((dVar152 * (double)local_828._8_8_ + dVar141) * dVar75);
            local_7c8 = (undefined8 *)
                        ((dVar146 * (double)local_818._8_8_ + (double)local_828._0_8_ * dVar152) *
                        (double)puVar97);
            local_7b8 = (undefined8 *)
                        ((dVar146 * (double)local_828._0_8_ - dVar152 * (double)local_818._8_8_) *
                        dVar75);
            puStack_7c0 = (undefined8 *)
                          ((dVar152 * (double)local_828._8_8_ - dVar141) * (double)puVar97);
            local_728 = (undefined8 *)
                        (((double)local_828._0_8_ * dVar152 - dVar146 * (double)local_818._8_8_) *
                        dVar74);
            puStack_710 = (undefined8 *)0x0;
            puStack_720 = (undefined8 *)0x0;
            puStack_700 = (undefined8 *)0x0;
            local_748 = (undefined8 *)local_838._0_8_;
            puStack_740 = (undefined8 *)&DAT_3ff0000000000000;
            local_778 = (undefined8 *)local_828._8_8_;
            puStack_770 = (undefined8 *)local_828._8_8_;
            puStack_780 = (undefined8 *)local_818._0_8_;
            local_798 = (undefined8 *)local_828._0_8_;
            puStack_790 = (undefined8 *)local_818._8_8_;
            local_6d8 = (undefined8 *)local_828._8_8_;
            puStack_6d0 = (undefined8 *)local_818._0_8_;
            lVar55 = 0;
            lVar61 = 0;
            do {
              lVar44 = (longlong)(int)uVar59 * 0x60;
              pdVar33 = (double *)(local_4f8[0] + lVar44);
              auVar80 = *(undefined1 (*) [16])(local_4f8[0] + 0x40 + lVar44);
              auVar99 = *(undefined1 (*) [16])(local_4f8[0] + 0x50 + lVar44);
              auVar19._8_4_ = SUB84(dVar75,0);
              auVar19._0_8_ = dVar74;
              auVar19._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              auVar107 = minpd(auVar80,auVar19);
              auVar12._8_4_ = SUB84(dVar73,0);
              auVar12._0_8_ = puVar97;
              auVar12._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              auVar102 = minpd(auVar99,auVar12);
              auVar89._8_8_ = -(ulonglong)(auVar107._8_8_ < 0.0);
              auVar89._0_8_ = -(ulonglong)(auVar107._0_8_ < 0.0);
              iVar67 = movmskpd((int)local_4f8[0],auVar89);
              auVar104._8_8_ = -(ulonglong)(auVar102._8_8_ < 0.0);
              auVar104._0_8_ = -(ulonglong)(auVar102._0_8_ < 0.0);
              uVar66 = movmskpd((int)lVar44,auVar104);
              if ((uVar66 & 0x3fffffff) == 0 && iVar67 == 0) {
                dVar146 = *pdVar33;
                dVar152 = pdVar33[1];
                dVar141 = pdVar33[2];
                dVar145 = pdVar33[3];
                dVar138 = dVar152 * (double)CONCAT44(uStack_784,local_788) * -1.0 +
                          (double)CONCAT44(uStack_754,local_758) * dVar145 * 1.0 +
                          (double)local_768 * dVar146 + (double)local_778 * dVar141;
                dVar148 = dVar146 * (double)puStack_780 * 1.0 +
                          (double)puStack_750 * dVar141 * -1.0 + (double)puStack_760 * dVar152 +
                          (double)puStack_770 * dVar145;
                auVar154._0_8_ =
                     dVar145 * (double)CONCAT44(uStack_784,local_788) * 1.0 +
                     (((double)CONCAT44(uStack_754,local_758) * dVar152 * 1.0 +
                      (double)local_768 * dVar141) - (double)local_778 * dVar146);
                auVar154._8_8_ =
                     dVar141 * (double)puStack_780 * -1.0 +
                     (((double)puStack_750 * dVar146 * -1.0 + (double)puStack_760 * dVar145) -
                     (double)puStack_770 * dVar152);
                dVar152 = pdVar33[4] * dVar74;
                dVar110 = pdVar33[5] * dVar75;
                dVar147 = pdVar33[6] * (double)puVar97;
                dVar73 = pdVar33[7] * dVar73;
                dVar146 = dVar110 * (double)local_828._0_8_ - (double)local_6d8 * dVar152;
                dVar141 = dVar147 * (double)local_828._8_8_ - (double)puStack_6d0 * dVar110;
                dVar145 = dVar152 * (double)local_818._0_8_ - (double)local_798 * dVar147;
                dVar124 = dVar73 * (double)local_818._8_8_ - (double)puStack_790 * dVar73;
                dVar141 = dVar141 + dVar141;
                dVar145 = dVar145 + dVar145;
                dVar146 = dVar146 + dVar146;
                dVar124 = dVar124 + dVar124;
                puVar97 = (undefined8 *)
                          ((dVar146 * (double)local_828._8_8_ - (double)puStack_6d0 * dVar145) +
                           (double)local_768 * dVar141 + dVar152 + (double)local_858);
                dVar152 = (dVar141 * (double)local_818._0_8_ - dVar146 * (double)local_798) +
                          (double)puStack_760 * dVar145 + dVar110 + dStack_850;
                dVar141 = (dVar145 * (double)local_828._0_8_ - (double)local_6d8 * dVar141) +
                          (double)local_768 * dVar146 + dVar147 + (double)local_838._0_8_;
                dVar145 = (dVar124 * (double)local_818._8_8_ - dVar124 * (double)puStack_790) +
                          (double)puStack_760 * dVar124 + dVar73 + (double)local_838._8_8_;
                dVar74 = auVar80._0_8_ * dVar74;
                dVar75 = auVar80._8_8_ * dVar75;
                dVar73 = auVar99._0_8_ * (double)local_808._0_8_;
                dVar146 = auVar99._8_8_ * (double)local_808._8_8_;
                uVar167 = 0;
              }
              else {
                local_5e8 = local_738;
                uStack_5e0 = puStack_730;
                local_5d8 = local_728;
                puStack_5d0 = puStack_720;
                local_5c8._8_8_ = puStack_7b0;
                local_5c8._0_8_ = local_7b8;
                local_5b8 = local_708;
                puStack_5b0 = puStack_700;
                local_5a8 = local_7c8;
                puStack_5a0 = puStack_7c0;
                local_598 = local_718;
                puStack_590 = puStack_710;
                local_588 = local_858;
                dStack_580 = dStack_850;
                local_578 = local_748;
                puStack_570 = puStack_740;
                dVar152 = *pdVar33;
                dVar141 = pdVar33[1];
                dVar146 = pdVar33[2];
                dStack_168 = pdVar33[8];
                dStack_158 = pdVar33[9];
                dStack_130 = pdVar33[10];
                dVar124 = dVar141 + dVar141;
                dVar145 = dVar146 + dVar146;
                dVar110 = dVar152 * (dVar152 + dVar152);
                local_178 = (longlong *)
                            ((1.0 - (dVar146 * dVar145 + dVar141 * dVar124)) * dStack_168);
                dStack_150 = (1.0 - (dVar146 * dVar145 + dVar110)) * dStack_158;
                local_128 = (1.0 - (dVar110 + dVar141 * dVar124)) * dStack_130;
                dVar146 = pdVar33[3];
                dVar110 = dVar145 * dVar146;
                dVar147 = (dVar152 + dVar152) * pdVar33[3];
                dVar146 = dVar124 * dVar146;
                dStack_170 = (dVar124 * dVar152 + dVar110) * dStack_168;
                local_148 = (dVar145 * dVar141 + dVar147) * dStack_158;
                local_138 = (dVar146 + *pdVar33 * dVar145) * dStack_130;
                dStack_168 = (*pdVar33 * dVar145 - dVar146) * dStack_168;
                dStack_158 = (dVar124 * dVar152 - dVar110) * dStack_158;
                dStack_130 = (dVar145 * dVar141 - dVar147) * dStack_130;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                local_118 = (undefined8 *)pdVar33[4];
                dStack_110 = pdVar33[5];
                local_108 = pdVar33[6];
                uStack_100 = 0x3ff0000000000000;
                local_868._8_8_ = auVar80._8_8_ * dVar75;
                local_868._0_8_ = auVar80._0_8_ * dVar74;
                dVar73 = auVar99._8_8_ * dVar73;
                local_878._8_4_ = SUB84(dVar73,0);
                local_878._0_8_ = auVar99._0_8_ * (double)puVar97;
                local_878._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar80 = _DAT_149934d80;
                dVar74 = (double)local_468[0] * (double)local_468[0] +
                         (double)local_478 * (double)local_478 +
                         (double)pdStack_470 * (double)pdStack_470;
                dVar75 = (double)local_448 * (double)local_448 +
                         local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
                dVar152 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
                dVar141 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar145 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                dVar73 = (double)local_878._0_8_;
                dVar146 = (double)local_878._8_8_;
                dVar74 = (double)local_868._0_8_;
                dVar75 = (double)local_868._8_8_;
                auVar90._8_8_ = -(ulonglong)(0.0 <= (double)local_868._8_8_);
                auVar90._0_8_ = -(ulonglong)(0.0 <= (double)local_868._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar90);
                dVar110 = (double)(~-(ulonglong)(0.0 <= (double)local_878._0_8_) &
                                   0xbff0000000000000 |
                                  (ulonglong)
                                  ((uint)(-(ulonglong)(0.0 <= (double)local_878._0_8_) >> 0x20) &
                                  0x3ff00000) << 0x20);
                dVar147 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar152 * dVar147);
                pdStack_470 = (double *)((double)pdStack_470 * dVar152 * dVar147);
                local_468[0] = (undefined8 *)(dVar152 * (double)local_468[0] * dVar147);
                dVar152 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar141 * (double)local_448 * dVar152);
                local_450 = local_450 * dVar141 * dVar152;
                local_458 = dVar152 * local_458 * dVar141;
                local_428 = dVar145 * local_428 * dVar110;
                local_430 = (undefined8 *)((double)local_430 * dVar145 * dVar110);
                local_438 = dVar110 * local_438 * dVar145;
                puVar97 = &local_618;
                ppcVar42 = &local_478;
                FUN_14481fd10();
                uVar167 = SUB84(ppcVar42,0);
                iVar67 = (int)puVar97;
                dVar152 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar141 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar145 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar110 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar147 = dVar145 * dVar145 + dVar152 * dVar152;
                dVar124 = dVar110 * dVar110 + dVar141 * dVar141;
                auVar119._0_8_ = dVar147 + dVar124;
                auVar119._8_8_ = dVar147 + dVar124;
                auVar91._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar119._8_8_);
                auVar91._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar119._0_8_);
                auVar99 = sqrtpd(auVar119,auVar119);
                auVar80 = divpd(auVar80,auVar99);
                auVar129._0_8_ = auVar80._0_8_ * dVar145;
                auVar129._8_8_ = auVar80._8_8_ * dVar110;
                dVar138 = (double)((ulonglong)(dVar152 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar119._0_8_));
                dVar148 = (double)((ulonglong)(dVar141 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar119._8_8_));
                auVar154 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar129,auVar91);
                dVar152 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar145 = 0.0;
                dVar141 = local_408;
                puVar97 = local_418;
              }
              lVar44 = *plVar65;
              auVar80 = *(undefined1 (*) [16])(lVar44 + 0x40 + lVar55);
              dVar110 = auVar80._0_8_;
              dVar124 = auVar80._8_8_;
              auVar99 = *(undefined1 (*) [16])(lVar44 + 0x50 + lVar55);
              dVar147 = auVar99._0_8_;
              dVar133 = auVar99._8_8_;
              auVar105._8_8_ = dVar75;
              auVar105._0_8_ = dVar74;
              auVar80 = minpd(auVar105,auVar80);
              auVar120._8_8_ = dVar146;
              auVar120._0_8_ = dVar73;
              auVar99 = minpd(auVar120,auVar99);
              auVar106._8_8_ = -(ulonglong)(auVar80._8_8_ < 0.0);
              auVar106._0_8_ = -(ulonglong)(auVar80._0_8_ < 0.0);
              iVar67 = movmskpd(iVar67,auVar106);
              auVar121._8_8_ = -(ulonglong)(auVar99._8_8_ < 0.0);
              auVar121._0_8_ = -(ulonglong)(auVar99._0_8_ < 0.0);
              uVar66 = movmskpd(uVar167,auVar121);
              dVar139 = auVar154._0_8_;
              dVar140 = auVar154._8_8_;
              if ((uVar66 & 0x3fffffff) == 0 && iVar67 == 0) {
                local_878._8_4_ = SUB84(dVar146,0);
                local_878._0_8_ = dVar73;
                local_878._12_4_ = (int)((ulonglong)dVar146 >> 0x20);
                dVar22 = *(double *)(lVar44 + lVar55);
                dVar23 = ((double *)(lVar44 + lVar55))[1];
                pdVar33 = (double *)(lVar44 + 0x10 + lVar55);
                dVar24 = *pdVar33;
                dVar158 = pdVar33[1];
                pdVar33 = (double *)(lVar44 + 0x18 + lVar55);
                dVar163 = *pdVar33;
                dVar146 = *pdVar33;
                dVar153 = *(double *)(lVar44 + lVar55);
                dVar155 = *(double *)(lVar44 + lVar55);
                pdVar33 = (double *)(lVar44 + 8 + lVar55);
                dVar156 = *pdVar33;
                dVar157 = *pdVar33;
                pdVar33 = (double *)(lVar44 + 0x10 + lVar55);
                dVar160 = *pdVar33;
                dVar164 = *pdVar33;
                dVar161 = dVar148 * dVar160 * -1.0 +
                          dVar139 * dVar156 + dVar140 * dVar153 * 1.0 + dVar138 * dVar163;
                dVar109 = dVar138 * dVar164 * 1.0 +
                          dVar140 * dVar157 + dVar139 * dVar155 * -1.0 + dVar148 * dVar146;
                auVar122._0_8_ =
                     dVar140 * dVar160 * 1.0 +
                     ((dVar153 * dVar148 * 1.0 + dVar139 * dVar163) - dVar138 * dVar156);
                auVar122._8_8_ =
                     dVar139 * dVar164 * -1.0 +
                     ((dVar155 * dVar138 * -1.0 + dVar140 * dVar146) - dVar148 * dVar157);
                dVar138 = (double)puVar97 * dVar110;
                dVar152 = dVar152 * dVar124;
                dVar141 = dVar141 * dVar147;
                dVar145 = dVar145 * dVar133;
                dVar140 = dVar152 * dVar22 - dVar138 * dVar23;
                dVar155 = dVar141 * dVar23 - dVar152 * dVar24;
                dVar148 = dVar138 * dVar24 - dVar141 * dVar22;
                dVar139 = dVar145 * dVar158 - dVar145 * dVar158;
                dVar155 = dVar155 + dVar155;
                dVar148 = dVar148 + dVar148;
                dVar140 = dVar140 + dVar140;
                dVar139 = dVar139 + dVar139;
                dVar74 = dVar74 * dVar110;
                dVar75 = dVar75 * dVar124;
                dVar73 = dVar73 * dVar147;
                dVar133 = (double)local_878._8_8_ * dVar133;
                pdVar33 = (double *)(lVar44 + 0x20 + lVar55);
                puVar97 = (undefined8 *)
                          ((dVar140 * dVar23 - dVar24 * dVar148) + dVar163 * dVar155 + dVar138 +
                          *pdVar33);
                dVar152 = (dVar155 * dVar24 - dVar140 * dVar22) + dVar146 * dVar148 + dVar152 +
                          pdVar33[1];
                pdVar33 = (double *)(lVar44 + 0x30 + lVar55);
                dVar141 = (dVar148 * dVar22 - dVar23 * dVar155) + dVar163 * dVar140 + dVar141 +
                          *pdVar33;
                dVar146 = (dVar139 * dVar158 - dVar139 * dVar158) + dVar146 * dVar139 + dVar145 +
                          pdVar33[1];
              }
              else {
                local_878._8_8_ = dVar146 * dVar133;
                local_878._0_8_ = dVar73 * dVar147;
                dVar163 = *(double *)(lVar44 + lVar55);
                dVar155 = ((double *)(lVar44 + lVar55))[1];
                dVar145 = *(double *)(lVar44 + 0x10 + lVar55);
                dVar153 = dVar155 + dVar155;
                dVar156 = dVar145 + dVar145;
                dVar164 = dVar163 * (dVar163 + dVar163);
                local_598 = (undefined8 *)((1.0 - (dVar164 + dVar155 * dVar153)) * dVar147);
                dVar133 = *(double *)(lVar44 + lVar55) * dVar156;
                pdVar33 = (double *)(lVar44 + 0x18 + lVar55);
                dVar146 = *pdVar33;
                dVar157 = dVar156 * dVar146;
                dVar160 = (dVar163 + dVar163) * *pdVar33;
                dVar146 = dVar153 * dVar146;
                local_5a8 = (undefined8 *)((dVar146 + dVar133) * dVar147);
                puStack_5a0 = (undefined8 *)((dVar156 * dVar155 - dVar160) * dVar147);
                local_868._8_8_ = dVar75 * dVar124;
                local_868._0_8_ = dVar74 * dVar110;
                local_5e8 = (undefined8 *)
                            ((1.0 - (dVar145 * dVar156 + dVar155 * dVar153)) * dVar110);
                dVar145 = (1.0 - (dVar145 * dVar156 + dVar164)) * dVar124;
                uStack_5e0 = (undefined8 *)((dVar153 * dVar163 + dVar157) * dVar110);
                local_5b8 = (undefined8 *)((dVar156 * dVar155 + dVar160) * dVar124);
                local_5d8 = (undefined8 *)((dVar133 - dVar146) * dVar110);
                puStack_5d0 = (undefined8 *)0x0;
                local_5c8._8_4_ = SUB84(dVar145,0);
                local_5c8._0_8_ = (dVar153 * dVar163 - dVar157) * dVar124;
                local_5c8._12_4_ = (int)((ulonglong)dVar145 >> 0x20);
                puStack_5b0 = (undefined8 *)0x0;
                puStack_590 = (undefined8 *)0x0;
                puVar34 = (undefined8 *)(lVar44 + 0x20 + lVar55);
                local_588 = (undefined8 *)*puVar34;
                dStack_580 = (double)puVar34[1];
                local_578 = *(undefined8 **)(lVar44 + 0x30 + lVar55);
                puStack_570 = (undefined8 *)&DAT_3ff0000000000000;
                dVar110 = dVar148 + dVar148;
                dVar146 = dVar139 + dVar139;
                dVar147 = dVar138 * (dVar138 + dVar138);
                local_128 = (1.0 - (dVar147 + dVar148 * dVar110)) * dVar73;
                dVar145 = (dVar138 + dVar138) * dVar140;
                local_138 = (dVar138 * dVar146 + dVar110 * dVar140) * dVar73;
                dStack_158 = (dVar110 * dVar138 - dVar146 * dVar140) * dVar75;
                dStack_130 = (dVar146 * dVar148 - dVar145) * dVar73;
                local_178 = (longlong *)((1.0 - (dVar139 * dVar146 + dVar148 * dVar110)) * dVar74);
                dStack_150 = (1.0 - (dVar139 * dVar146 + dVar147)) * dVar75;
                dStack_170 = (dVar110 * dVar138 + dVar146 * dVar140) * dVar74;
                local_148 = (dVar146 * dVar148 + dVar145) * dVar75;
                dStack_168 = (dVar138 * dVar146 - dVar110 * dVar140) * dVar74;
                local_160 = (double *)0x0;
                uStack_140 = 0;
                uStack_120 = 0;
                uStack_100 = 0x3ff0000000000000;
                local_118 = puVar97;
                dStack_110 = dVar152;
                local_108 = dVar141;
                FUN_1447fea8d(&local_478,&local_178,&local_5e8);
                auVar80 = _DAT_149934d80;
                local_7f8 = local_468[0];
                dVar74 = (double)local_468[0] * (double)local_468[0] +
                         (double)local_478 * (double)local_478 +
                         (double)pdStack_470 * (double)pdStack_470;
                dVar75 = (double)local_448 * (double)local_448 +
                         local_458 * local_458 + local_450 * local_450;
                dVar73 = local_428 * local_428 +
                         local_438 * local_438 + (double)local_430 * (double)local_430;
                uVar71 = -(ulonglong)(0.0 <= dVar74 + -9.99999993922529e-09);
                dVar146 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar74)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
                dVar152 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar75)) & uVar71);
                uVar71 = -(ulonglong)(0.0 <= dVar73 + -9.99999993922529e-09);
                dVar74 = (double)local_868._0_8_;
                dVar75 = (double)local_868._8_8_;
                dVar141 = (double)(~uVar71 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar73)) & uVar71);
                dVar73 = (double)local_878._0_8_;
                dVar133 = (double)local_878._8_8_;
                auVar92._8_8_ = -(ulonglong)(0.0 <= (double)local_868._8_8_);
                auVar92._0_8_ = -(ulonglong)(0.0 <= (double)local_868._0_8_);
                auVar99 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar92);
                dVar145 = (double)(~-(ulonglong)(0.0 <= (double)local_878._0_8_) &
                                   0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= (double)local_878._0_8_) & 0x3ff0000000000000)
                ;
                dVar110 = auVar99._0_8_;
                local_478 = (code *)((double)local_478 * dVar146 * dVar110);
                pdStack_470 = (double *)((double)pdStack_470 * dVar146 * dVar110);
                local_468[0] = (undefined8 *)(dVar146 * (double)local_468[0] * dVar110);
                dVar146 = auVar99._8_8_;
                local_448 = (undefined8 *)(dVar152 * (double)local_448 * dVar146);
                local_450 = local_450 * dVar152 * dVar146;
                local_458 = dVar146 * local_458 * dVar152;
                local_428 = dVar141 * local_428 * dVar145;
                local_430 = (undefined8 *)((double)local_430 * dVar141 * dVar145);
                local_438 = dVar145 * local_438 * dVar141;
                FUN_14481fd10(&local_618,&local_478);
                dVar146 = (double)CONCAT62(local_618._2_6_,(undefined2)local_618);
                dVar152 = (double)CONCAT62(uStack_60e,uStack_610);
                dVar141 = (double)CONCAT26(uStack_602,
                                           CONCAT15(uStack_603,
                                                    CONCAT14(uStack_604,
                                                             CONCAT22(uStack_606,uStack_608))));
                dVar145 = (double)CONCAT44(uStack_5fc,uStack_600);
                dVar110 = dVar141 * dVar141 + dVar146 * dVar146;
                dVar147 = dVar145 * dVar145 + dVar152 * dVar152;
                auVar130._0_8_ = dVar110 + dVar147;
                auVar130._8_8_ = dVar110 + dVar147;
                auVar93._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar130._8_8_);
                auVar93._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar130._0_8_);
                auVar99 = sqrtpd(auVar130,auVar130);
                auVar80 = divpd(auVar80,auVar99);
                auVar136._0_8_ = auVar80._0_8_ * dVar141;
                auVar136._8_8_ = auVar80._8_8_ * dVar145;
                dVar161 = (double)((ulonglong)(dVar146 * auVar80._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar130._0_8_));
                dVar109 = (double)((ulonglong)(dVar152 * auVar80._8_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar130._8_8_));
                auVar122 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar136,auVar93);
                dVar152 = (double)CONCAT44(uStack_40c,iStack_410);
                dVar146 = 0.0;
                puVar97 = local_418;
                dVar141 = local_408;
              }
              lVar44 = *plVar43;
              *(double *)(lVar44 + lVar55) = dVar161;
              ((double *)(lVar44 + lVar55))[1] = dVar109;
              *(undefined1 (*) [16])(lVar44 + 0x10 + lVar55) = auVar122;
              plVar64 = (longlong *)(lVar44 + 0x20 + lVar55);
              *plVar64 = (longlong)puVar97;
              plVar64[1] = (longlong)dVar152;
              pdVar33 = (double *)(lVar44 + 0x30 + lVar55);
              *pdVar33 = dVar141;
              pdVar33[1] = dVar146;
              auVar20._8_4_ = SUB84(dVar75,0);
              auVar20._0_8_ = dVar74;
              auVar20._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x40 + lVar55) = auVar20;
              auVar13._8_4_ = SUB84(dVar133,0);
              auVar13._0_8_ = dVar73;
              auVar13._12_4_ = (int)((ulonglong)dVar133 >> 0x20);
              *(undefined1 (*) [16])(lVar44 + 0x50 + lVar55) = auVar13;
              lVar61 = lVar61 + 1;
              lVar55 = lVar55 + 0x60;
              puVar97 = (undefined8 *)local_808._0_8_;
              dVar73 = (double)local_808._8_8_;
              dVar74 = (double)local_7d8._0_8_;
              dVar75 = (double)local_7d8._8_8_;
              iVar67 = local_788;
              uVar167 = uStack_784;
              iVar40 = local_758;
              uVar169 = uStack_754;
            } while (lVar61 < *(int *)(local_840 + 0x88));
          }
        }
        goto LAB_1432f3037;
      }
      goto LAB_1432efae9;
    }
LAB_1432f3064:
    if (local_658 != (code *)0x0) {
      FUN_1400020a8(local_658);
    }
  }
LAB_1432f3071:
  if (local_688 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_508 != (uint *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408fc0a6(local_4f8);
  FUN_1475b463e(local_4b8);
  if ((local_f0 ^ (ulonglong)auStack_8e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f31c8 FUN_1432f31c8 body=1389 status=ok
// SIG undefined FUN_1432f31c8(void)

void FUN_1432f31c8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  undefined **ppuVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_1a8 [44];
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 local_bb;
  undefined5 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  byte bStack_8a;
  byte bStack_89;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_17c = 0;
  uVar10 = *(uint *)(param_3 + 0x24);
  if (SBORROW4(0,uVar10)) {
    puVar13 = (uint *)(param_3 + 4);
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar13 = (uint *)(param_3 + 0x10);
    }
    uVar10 = *puVar13;
    uVar14 = (ulonglong)puVar13[1] << 0x20;
  }
  else {
    uVar14 = 0;
  }
  cVar9 = FUN_1400f0204(param_1 + 0x38,0,uVar10 | uVar14,&local_17c);
  uVar8 = local_17c;
  if (cVar9 != '\0') {
    bVar3 = *(byte *)(param_1 + 0x14c);
    uVar4 = *(undefined1 *)(param_1 + 0x148);
    uVar5 = *(undefined1 *)(param_1 + 0x149);
    local_168 = *(undefined8 *)(param_1 + 0x30);
    local_178 = *(undefined8 *)(param_1 + 0x20);
    uStack_170 = *(undefined8 *)(param_1 + 0x28);
    local_148 = (undefined4)param_5[0x24];
    local_158 = param_5[0x22];
    lStack_150 = param_5[0x23];
    uStack_144 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
    uStack_140 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
    uStack_13c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
    uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
    local_130 = (undefined4)param_5[0x27];
    uStack_12c = *(undefined4 *)((longlong)param_5 + 0x13c);
    uStack_128 = (undefined4)param_5[0x28];
    uStack_124 = *(undefined4 *)((longlong)param_5 + 0x144);
    local_120 = (undefined4)param_5[0x29];
    uStack_11c = *(undefined4 *)((longlong)param_5 + 0x14c);
    uStack_118 = (undefined4)param_5[0x2a];
    uStack_114 = *(undefined4 *)((longlong)param_5 + 0x154);
    local_110 = param_5[0x2b];
    local_100 = (undefined4)param_5[0x2d];
    local_108 = param_5[0x2c];
    local_f8 = 0;
    iVar6 = (int)param_5[0x2f];
    lVar11 = param_5[0x2e];
    local_f0 = CONCAT44(local_f0._4_4_,iVar6);
    if (iVar6 == 0) {
      local_f0 = 0;
    }
    else {
      FUN_14753cf4a(&local_f8,iVar6,0);
      FUN_14753cfbd(local_f8,lVar11,iVar6);
    }
    local_e8 = (void *)0x0;
    uVar10 = *(uint *)(param_5 + 0x31);
    pvVar7 = (void *)param_5[0x30];
    local_e0 = CONCAT44(local_e0._4_4_,uVar10);
    if ((longlong)(int)uVar10 == 0) {
      local_e0 = (ulonglong)uVar10;
    }
    else {
      FUN_1456c5740(&local_e8,uVar10,0);
      memcpy(local_e8,pvVar7,(longlong)(int)uVar10 << 3);
    }
    local_d8 = (undefined1)param_5[0x32];
    local_d0 = (void *)0x0;
    uVar10 = *(uint *)(param_5 + 0x34);
    pvVar7 = (void *)param_5[0x33];
    local_c8 = CONCAT44(local_c8._4_4_,uVar10);
    if ((longlong)(int)uVar10 == 0) {
      local_c8 = (ulonglong)uVar10;
    }
    else {
      FUN_1447bda9e(&local_d0,uVar10,0);
      memcpy(local_d0,pvVar7,(longlong)(int)uVar10 << 2);
    }
    uStack_b8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
    uStack_c0 = (undefined5)param_5[0x35];
    local_bb = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
    local_70 = local_70 | 3;
    local_b0 = &PTR_FUN_14a4aa650;
    uStack_a8 = (undefined4)local_178;
    uStack_a4 = local_178._4_4_;
    uStack_a0 = (undefined4)uStack_170;
    uStack_9c = uStack_170._4_4_;
    uStack_98 = local_168;
    local_90 = uVar8;
    uStack_8c = uVar4;
    uStack_8b = uVar5;
    bStack_8a = bVar3 & 1;
    bStack_89 = bVar3 >> 1 & 1;
    bStack_88 = bVar3 >> 2 & 1;
    iVar6 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
      FUN_140ac5684(param_5,iVar6);
    }
    lVar11 = *param_5;
    lVar15 = (longlong)iVar6 * 0xf0;
    *(undefined4 *)(lVar11 + 0x20 + lVar15) = uStack_138;
    puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar15);
    *puVar1 = CONCAT44(uStack_144,local_148);
    puVar1[1] = CONCAT44(uStack_13c,uStack_140);
    *(longlong *)(lVar11 + lVar15) = local_158;
    ((longlong *)(lVar11 + lVar15))[1] = lStack_150;
    *(longlong *)(lVar11 + 0x48 + lVar15) = local_110;
    puVar2 = (undefined4 *)(lVar11 + 0x38 + lVar15);
    *puVar2 = local_120;
    puVar2[1] = uStack_11c;
    puVar2[2] = uStack_118;
    puVar2[3] = uStack_114;
    puVar2 = (undefined4 *)(lVar11 + 0x28 + lVar15);
    *puVar2 = local_130;
    puVar2[1] = uStack_12c;
    puVar2[2] = uStack_128;
    puVar2[3] = uStack_124;
    *(longlong *)(lVar11 + 0x50 + lVar15) = local_108;
    *(undefined4 *)(lVar11 + 0x58 + lVar15) = local_100;
    *(undefined8 *)(lVar11 + 0x60 + lVar15) = 0;
    *(longlong *)(lVar11 + 0x60 + lVar15) = local_f8;
    local_f8 = 0;
    *(undefined4 *)(lVar11 + 0x68 + lVar15) = (undefined4)local_f0;
    *(undefined4 *)(lVar11 + 0x6c + lVar15) = local_f0._4_4_;
    local_f0 = 0;
    *(undefined8 *)(lVar11 + 0x70 + lVar15) = 0;
    *(void **)(lVar11 + 0x70 + lVar15) = local_e8;
    local_e8 = (void *)0x0;
    *(undefined4 *)(lVar11 + 0x78 + lVar15) = (undefined4)local_e0;
    *(undefined4 *)(lVar11 + 0x7c + lVar15) = local_e0._4_4_;
    local_e0 = 0;
    *(undefined1 *)(lVar11 + 0x80 + lVar15) = local_d8;
    *(undefined8 *)(lVar11 + 0x88 + lVar15) = 0;
    *(void **)(lVar11 + 0x88 + lVar15) = local_d0;
    local_d0 = (void *)0x0;
    *(undefined4 *)(lVar11 + 0x90 + lVar15) = (undefined4)local_c8;
    *(undefined4 *)(lVar11 + 0x94 + lVar15) = local_c8._4_4_;
    local_c8 = 0;
    *(ulonglong *)(lVar11 + 0x9d + lVar15) = CONCAT53(uStack_b8,local_bb);
    *(ulonglong *)(lVar11 + 0x98 + lVar15) = CONCAT35(local_bb,uStack_c0);
    bVar3 = *(byte *)(lVar11 + 0xe8 + lVar15);
    *(byte *)(lVar11 + 0xe8 + lVar15) = bVar3 & 0xfc | 2;
    if ((local_70 & 1) != 0) {
      lVar11 = lVar11 + lVar15;
      *(byte *)(lVar11 + 0xe8) = bVar3 | 3;
      *(byte *)(lVar11 + 0xe8) = *(byte *)(lVar11 + 0xe8) & 0xfd | local_70 & 2;
      *(undefined8 *)(lVar11 + 0xd8) = local_80;
      *(undefined8 *)(lVar11 + 0xe0) = uStack_78;
      *(ulonglong *)(lVar11 + 200) =
           CONCAT17(bStack_89,CONCAT16(bStack_8a,CONCAT15(uStack_8b,CONCAT14(uStack_8c,local_90))));
      *(ulonglong *)(lVar11 + 0xd0) = CONCAT71(uStack_87,bStack_88);
      *(undefined4 *)(lVar11 + 0xb8) = uStack_a0;
      *(undefined4 *)(lVar11 + 0xbc) = uStack_9c;
      *(undefined4 *)(lVar11 + 0xc0) = (undefined4)uStack_98;
      *(undefined4 *)(lVar11 + 0xc4) = uStack_98._4_4_;
      *(undefined4 *)(lVar11 + 0xa8) = (undefined4)local_b0;
      *(undefined4 *)(lVar11 + 0xac) = local_b0._4_4_;
      *(undefined4 *)(lVar11 + 0xb0) = uStack_a8;
      *(undefined4 *)(lVar11 + 0xb4) = uStack_a4;
      local_70 = local_70 & 0xfe;
    }
    if ((local_70 & 1) != 0) {
      ppuVar12 = (undefined **)&local_b0;
      if ((local_70 & 2) == 0) {
        ppuVar12 = local_b0;
      }
      local_70 = local_70 & 0xfe;
      (**(code **)*ppuVar12)(ppuVar12,0);
      if ((local_70 & 2) == 0) {
        FUN_1400020a8(local_b0);
      }
    }
    if (local_d0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447bda9c(local_f8,local_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f373e FUN_1432f373e body=45 status=ok
// SIG undefined FUN_1432f373e(void)

longlong FUN_1432f373e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432f3828 FUN_1432f3828 body=157 status=ok
// SIG undefined FUN_1432f3828(void)

void FUN_1432f3828(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a4ab330;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 1432f38f0 FUN_1432f38f0 body=977 status=ok
// SIG undefined FUN_1432f38f0(void)

void FUN_1432f38f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined ***local_f0;
  code *local_e8;
  code *local_e0;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1475741e2(param_1 + 8,&local_d0,*(undefined4 *)(param_3 + 0x10),param_5);
  ppuVar2 = local_d0;
  lVar8 = (longlong)(int)local_c8;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      uVar1 = *(ulonglong *)((longlong)ppuVar2 + lVar7);
      if (((((uVar1 >> 0x20 != 0) && (uVar5 = (uint)uVar1, -1 < (int)uVar5)) &&
           ((int)uVar5 < DAT_14c9647dc)) &&
          ((plVar6 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8))),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == (int)(uVar1 >> 0x20))))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))) {
        if (DAT_14cac9ca8 == 0) {
          local_70 = (undefined **)FUN_141030f22;
          local_e0 = FUN_14081d0ea;
          local_e8 = FUN_14081d0ea;
          local_f0 = &local_70;
          local_f8 = &LAB_1478c0a72;
          local_100 = &LAB_1417b2375;
          local_108 = L"Engine";
          local_110 = 0x1000000000;
          local_118 = 0x10000004;
          local_120 = 8;
          local_128 = (undefined4 *)CONCAT44(local_128._4_4_,0x390);
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
           (lVar3 = FUN_1475b00a8(lVar3), lVar3 != 0)) {
          FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 0x10);
          if ((longlong)local_50 != 0) {
            lVar8 = 0;
            do {
              uVar1 = *(ulonglong *)(local_58 + lVar8);
              if ((((uVar1 >> 0x20 != 0) && (uVar5 = (uint)uVar1, -1 < (int)uVar5)) &&
                  ((int)uVar5 < DAT_14c9647dc)) &&
                 (((plVar6 = (longlong *)
                             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8))),
                   plVar6 != (longlong *)0x0 && ((int)plVar6[2] == (int)(uVar1 >> 0x20))) &&
                  (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
                   ((*plVar6 != 0 &&
                    (plVar6 = (longlong *)FUN_140aa1c40(), plVar6 != (longlong *)0x0)))))))) {
                local_d0 = &PTR_FUN_14a4aa660;
                lVar7 = DAT_14cab5630;
                if (DAT_14cab5630 == 0) {
                  lVar7 = FUN_14570767c(&DAT_14cab5630,0);
                }
                lVar4 = FUN_14027385c(param_5 + 0x110);
                if (lVar4 != 0) {
                  FUN_14027378e(lVar4,plVar6,lVar7,&local_d0);
                }
                local_d0 = &PTR_FUN_14a4aa680;
                lVar7 = DAT_14cab5638;
                if (DAT_14cab5638 == 0) {
                  lVar7 = FUN_14570767c(&DAT_14cab5638,0);
                }
                lVar4 = FUN_14027385c(param_5 + 0x110);
                if (lVar4 != 0) {
                  FUN_14027378e(lVar4,plVar6,lVar7,&local_d0);
                }
                local_128 = &local_88;
                FUN_1475b0110(param_1,plVar6,lVar3,&local_70);
                (**(code **)(*plVar6 + 0x588))(plVar6,2);
                local_d0 = local_70;
                local_c8 = local_68;
                local_c0 = local_60;
                local_b8 = local_78;
                local_b0 = local_88;
                uStack_ac = uStack_84;
                uStack_a8 = uStack_80;
                uStack_a4 = uStack_7c;
                local_a0 = 0x3ff0000000000000;
                local_98 = 0x3ff0000000000000;
                local_90 = 0x3ff0000000000000;
                FUN_1475b889c(plVar6,&local_d0);
              }
              lVar8 = lVar8 + 8;
            } while ((longlong)local_50 * 8 != lVar8);
          }
          break;
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432f3cec FUN_1432f3cec body=881 status=ok
// SIG undefined FUN_1432f3cec(void)

void FUN_1432f3cec(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *in_stack_00000028;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  int local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = param_1;
  (**(code **)(*in_stack_00000028 + 0x80))(in_stack_00000028,&local_98);
  if ((longlong)local_90 != 0) {
    local_a8 = local_98 + local_90;
    plVar5 = local_98;
    do {
      plVar1 = (longlong *)*plVar5;
      if ((plVar1 != (longlong *)0x0) && ((longlong)*(int *)(local_b8 + 0x10) != 0)) {
        puVar9 = *(undefined8 **)(local_b8 + 8);
        puVar8 = puVar9 + (longlong)*(int *)(local_b8 + 0x10) * 10;
        local_a0 = plVar5;
LAB_1432f3d8c:
        plVar3 = (longlong *)FUN_1400796d0(plVar1[2],*puVar9,1);
        if (plVar3 != (longlong *)0x0) {
          local_88 = &PTR_FUN_149eacb10;
          uStack_70 = 0;
          uStack_6f = 0;
          local_80 = 0;
          uStack_78 = 0;
          uStack_77 = 0;
          FUN_1475c8a3a(puVar9 + 1);
          local_b0 = CONCAT71(uStack_77,uStack_78);
          if ((local_80._4_4_ == 0) || ((int)(uint)local_80 < 0)) {
LAB_1432f4003:
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)0x0;
            if ((int)(uint)local_80 < DAT_14c9647dc) {
              puVar6 = (undefined8 *)
                       ((ulonglong)(((uint)local_80 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_80 >> 0x10) * 8));
              if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != local_80._4_4_)) ||
                 ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_1432f4003;
              plVar5 = (longlong *)*puVar6;
            }
          }
          plVar4 = plVar3;
          if ((short)plVar3[0x17] == -1) {
            do {
              for (lVar7 = plVar4[10]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18)) {
                if ((~*(uint *)(*(longlong *)(lVar7 + 8) + 0x18) & 0x8001) == 0)
                goto joined_r0x0001432f3ea6;
              }
              plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4);
            } while (plVar4 != (longlong *)0x0);
            plVar4 = (longlong *)0x0;
            lVar7 = 0;
joined_r0x0001432f3ea6:
            do {
              if (plVar5 == (longlong *)0x0) goto LAB_1432f3edd;
              for (plVar10 = (longlong *)plVar5[10]; plVar10 != (longlong *)0x0;
                  plVar10 = (longlong *)plVar10[3]) {
                if ((~*(uint *)(plVar10[1] + 0x18) & 0x8001) == 0) goto LAB_1432f3eeb;
              }
              plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
            } while( true );
          }
          goto LAB_1432f3e4a;
        }
        goto LAB_1432f3da3;
      }
LAB_1432f400a:
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_a8);
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8(local_98);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1432f3edd:
  if (lVar7 != 0) {
    plVar5 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
LAB_1432f3eeb:
    do {
      if (((plVar10 == (longlong *)0x0) || (lVar7 == 0)) ||
         ((cVar2 = (**(code **)(*plVar10 + 0x1b0))(plVar10,lVar7), cVar2 == '\0' ||
          ((*(int *)((longlong)plVar10 + 0x44) != *(int *)(lVar7 + 0x44) ||
           (*(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6] !=
            *(int *)(lVar7 + 0x34) * *(int *)(lVar7 + 0x30))))))) goto LAB_1432f3e4a;
      lVar7 = *(longlong *)(lVar7 + 0x18);
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        while( true ) {
          for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18)) {
            if ((~*(uint *)(*(longlong *)(lVar7 + 8) + 0x18) & 0x8001) == 0) goto LAB_1432f3f88;
          }
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4);
          if (plVar4 == (longlong *)0x0) break;
          lVar7 = plVar4[10];
        }
        plVar4 = (longlong *)0x0;
        lVar7 = 0;
      }
LAB_1432f3f88:
      plVar10 = (longlong *)plVar10[3];
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        while( true ) {
          for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[3]) {
            if ((~*(uint *)(plVar10[1] + 0x18) & 0x8001) == 0) goto LAB_1432f3fcb;
          }
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
          if (plVar5 == (longlong *)0x0) break;
          plVar10 = (longlong *)plVar5[10];
        }
        plVar5 = (longlong *)0x0;
        plVar10 = (longlong *)0x0;
      }
LAB_1432f3fcb:
    } while (lVar7 != 0 || plVar10 != (longlong *)0x0);
  }
  (**(code **)(*plVar1 + 0x248))(plVar1,plVar3,local_b0);
LAB_1432f3e4a:
  FUN_1448eac94(&local_88);
  plVar5 = local_a0;
LAB_1432f3da3:
  puVar9 = puVar9 + 10;
  if (puVar9 == puVar8) goto LAB_1432f400a;
  goto LAB_1432f3d8c;
}



// FUNCTION 1432f406c FUN_1432f406c body=352 status=ok
// SIG undefined FUN_1432f406c(void)

void FUN_1432f406c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_1432f41ce(param_4,param_4 + 0x24);
  uVar1 = *(undefined8 *)(lVar5 + 8);
  local_70 = FUN_1475aae5c(param_1 + 8,param_3,param_5);
  FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 0x10);
  if ((longlong)local_50 != 0) {
    lVar9 = 0;
    do {
      uVar2 = *(ulonglong *)(local_58 + lVar9);
      if (((uVar2 >> 0x20 != 0) && (uVar7 = (uint)uVar2, -1 < (int)uVar7)) &&
         ((int)uVar7 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8)));
        if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == (int)(uVar2 >> 0x20))) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar3 = *plVar8, lVar3 != 0)))) {
          local_68 = &PTR_FUN_14a4aad10;
          uVar4 = *(undefined8 *)(lVar5 + 0x18);
          local_60 = uVar1;
          lVar6 = FUN_14027385c(param_5 + 0x110);
          if (lVar6 != 0) {
            FUN_14027378e(lVar6,lVar3,uVar4,&local_68);
          }
          FUN_140f5dbda(uVar1,lVar3,local_70);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)local_50 * 8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f41ce FUN_1432f41ce body=73 status=ok
// SIG undefined FUN_1432f41ce(void)

undefined8 FUN_1432f41ce(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]));
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1432f4217 FUN_1432f4217 body=1456 status=ok
// SIG undefined FUN_1432f4217(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432f4217(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cab451c = 0xffffffff;
  DAT_14cab4520 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a0d60,1,&PTR_FUN_14a4a0d10);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a11e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a1620,1,0);
  FUN_1446f470e(&DAT_14cab45c0,L"BP_GetTransformOrigin",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a1a60,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a1de0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a2190,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a2a20,1,&PTR_FUN_14a4a29d0);
  FUN_1400b22c2(local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_50,&DAT_14cab4660);
  if (cVar1 == '\0') {
    _DAT_14cab4660 = 0;
    uRam000000014cab4668 = 0;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a2bc0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a2fc0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a3400,1,0);
  FUN_1446f470e(&DAT_14cab46d0,L"BP_InitReplaceableBinding",1);
  FUN_1446f470e(&DAT_14cab46e0,L"BP_ResolveRuntimeBinding",1);
  FUN_1446f470e(&DAT_14cab46f0,L"BP_SupportsBindingCreationFromObject",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a4090,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a4540,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a4610,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a4730,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a47f0,1,0);
  uStack_58 = 3;
  ppuStack_60 = &PTR_FUN_14a4a4fb0;
  local_68 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a5010,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a5910,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a5db0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a6350,1,0);
  FUN_1446f470e(&DAT_14cab4850,L"SequencerActor",1);
  FUN_1446f470e(&DAT_14cab4858,L"SequencerPreviewActor",1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a6810);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a6950);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a6df0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a7110);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a7370);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a7490);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a7920,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a7bb0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4a7f80,1,0);
  _DAT_14cab4a20 = DAT_14cab2e38;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  DAT_14cab2e38 = DAT_14cab2e38 + 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a8340);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a84b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a8640);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a87e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4a8c10);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f47c8 FUN_1432f47c8 body=48 status=ok
// SIG undefined FUN_1432f47c8(void)

void FUN_1432f47c8(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cab4b60;
  if (DAT_14cab4b60 == 0) {
    return;
  }
  FUN_145ec5ad4(DAT_14cab4b60 + 0x110);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1432f47f8 FUN_1432f47f8 body=69 status=ok
// SIG undefined FUN_1432f47f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432f47f8(void)

{
  _DAT_14cab4b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432f483a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab4b98,1);
  return;
}



// FUNCTION 1432f483d FUN_1432f483d body=55 status=ok
// SIG undefined FUN_1432f483d(void)

void FUN_1432f483d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4c00 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4c00 = FUN_14171c317(FUN_146346d2d,uVar1,L"MovieScene3DPathSection_Axis");
  }
  return;
}



// FUNCTION 1432f4885 FUN_1432f4885 body=49 status=ok
// SIG undefined FUN_1432f4885(void)

void FUN_1432f4885(void)

{
  FUN_145a00245(DAT_14cab4ce8,DAT_14cab4cf0);
  if (DAT_14cab4ce8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1432f48b6 FUN_1432f48b6 body=355 status=ok
// SIG undefined FUN_1432f48b6(void)

undefined8 * FUN_1432f48b6(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  wchar_t *_Str;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  wchar_t *local_60;
  int local_58;
  undefined8 local_50;
  undefined2 auStack_48 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_2;
  if (param_3 == 0) {
    *param_1 = param_2;
  }
  else {
    FUN_1400021e4(&local_50,&local_60);
    _Str = local_60;
    if (local_58 == 0) {
      _Str = L"";
    }
    iVar1 = _wtoi(_Str);
    local_78 = 0;
    uStack_70 = 0;
    lVar3 = 0xf;
    lVar2 = 0x1000000000;
    iVar5 = 0x10;
    iVar6 = iVar1 + (uint)param_3;
    do {
      lVar2 = lVar2 + -0x100000000;
      auStack_48[lVar3] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar6 % 10) * 2);
      uVar4 = iVar6 + 9;
      lVar3 = lVar3 + -1;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 / 10;
    } while (0x12 < uVar4);
    if ((int)(iVar1 + (uint)param_3) < 0) {
      iVar5 = (int)lVar3;
      lVar2 = (longlong)iVar5;
      auStack_48[lVar2] = 0x2d;
    }
    else {
      lVar2 = lVar2 >> 0x20;
    }
    FUN_1400020e8(&local_78,auStack_48 + lVar2,0x10 - iVar5);
    iVar6 = (int)uStack_70 + -1;
    if ((int)uStack_70 == 0) {
      iVar6 = 0;
    }
    FUN_1446f82e2(param_1,iVar6,local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1432f4a1a FUN_1432f4a1a body=546 status=ok
// SIG undefined FUN_1432f4a1a(void)

void FUN_1432f4a1a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_7c [4];
  undefined *local_78;
  undefined *puStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14587c8aa(param_1);
    FUN_145da4014(param_1);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1403de9f2(param_2,&local_a8,&DAT_149e02010,1);
  local_b8 = 0;
  uStack_b0 = 0;
  uVar1 = 0;
  if ((longlong)(int)uStack_a0 != 0) {
    lVar3 = (longlong)(int)uStack_a0 << 4;
    lVar2 = local_a8;
    do {
      local_98 = 0;
      uStack_90 = 0;
      FUN_1403de9f2(lVar2,&local_98,&DAT_149e06196,1);
      FUN_140b7fa3a(&local_b8,&local_98);
      FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar1 = 0;
    if ((longlong)(int)uStack_b0 != 0) {
      lVar3 = (longlong)(int)uStack_b0 << 4;
      lVar2 = local_b8;
      do {
        local_c8 = 0;
        uStack_c0 = 0;
        local_78 = &DAT_149e06196;
        puStack_70 = &DAT_149e001d8;
        local_d8 = 1;
        FUN_144a38a52(lVar2,&local_c8,&local_78,2);
        if ((int)uStack_c0 == 2) {
          local_98 = local_c8;
          uStack_90 = local_c8 + 0x10;
          FUN_140ac5c08(param_1,local_7c,&local_98,0);
        }
        FUN_1447a1747(local_c8,(int)uStack_c0);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
      uVar1 = (int)uStack_b0;
    }
  }
  FUN_1447a1747(local_b8,uVar1);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432f4c49 FUN_1432f4c49 body=55 status=ok
// SIG undefined FUN_1432f4c49(void)

void FUN_1432f4c49(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab5180 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab5180 = FUN_14171c317(FUN_1463485d7,uVar1,L"ELevelVisibility");
  }
  return;
}



// FUNCTION 1432f4c80 FUN_1432f4c80 body=175 status=ok
// SIG undefined FUN_1432f4c80(void)

void FUN_1432f4c80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_145957ea2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = *(longlong *)(lVar1 + 0x128);
      lVar2 = *(longlong *)(param_1 + 0x150);
      if (lVar2 == 0 && lVar3 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar3);
        }
        *(longlong *)(param_1 + 0x150) = lVar3;
      }
      else if (lVar3 == 0 && lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        *(longlong *)(lVar1 + 0x128) = lVar2;
      }
    }
  }
  FUN_140836bcc(param_1);
  return;
}



// FUNCTION 1432f4d2f FUN_1432f4d2f body=55 status=ok
// SIG undefined FUN_1432f4d2f(void)

void FUN_1432f4d2f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab5310 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab5310 = FUN_14171c317(FUN_146348df6,uVar1,L"EParticleKey");
  }
  return;
}



// FUNCTION 1432f4d66 FUN_1432f4d66 body=69 status=ok
// SIG undefined FUN_1432f4d66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432f4d66(void)

{
  _DAT_14cab5398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432f4da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab53a0,1);
  return;
}



// FUNCTION 1432f4dd6 FUN_1432f4dd6 body=806 status=ok
// SIG undefined FUN_1432f4dd6(void)

void FUN_1432f4dd6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  uint *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined **local_60;
  uint *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_5;
  FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 0x10);
  if ((longlong)local_50 != 0) {
    local_90 = local_58 + (longlong)local_50 * 2;
    local_b0 = local_b0 + 0x110;
    local_98 = param_1 + 8;
    local_a0 = param_1 + 0x98;
    local_a8 = param_1 + 0xe8;
    puVar7 = local_58;
    do {
      if (puVar7[1] != 0) {
        uVar2 = *puVar7;
        if ((((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 == (longlong *)0x0)) ||
            ((*(uint *)(plVar6 + 2) != puVar7[1] || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
           || (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)) {
LAB_1432f4edf:
          if (((puVar7[1] != 0) &&
              (((uVar2 = *puVar7, -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
               (plVar6 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0)))) &&
             (((*(uint *)(plVar6 + 2) == puVar7[1] && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))
              && (lVar4 = *plVar6, lVar4 != 0)))) {
            lVar5 = FUN_14143eef4();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (plVar6 = *(longlong **)(lVar4 + 0x390), plVar6 != (longlong *)0x0))
            goto LAB_1432f4f79;
          }
        }
        else {
          lVar4 = FUN_140791f3e();
          if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              != lVar4 + 0x30)) goto LAB_1432f4edf;
LAB_1432f4f79:
          local_60 = &PTR_FUN_14a4c06c0;
          lVar4 = DAT_14cab53b8;
          if (DAT_14cab53b8 == 0) {
            lVar4 = FUN_14570767c(&DAT_14cab53b8,0);
          }
          lVar5 = FUN_14027385c(local_b0);
          if (lVar5 != 0) {
            FUN_14027378e(lVar5,plVar6,lVar4,&local_60);
          }
          lVar4 = *(longlong *)(param_1 + 0x20);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar4 = local_98;
          }
          iVar3 = *(int *)(param_1 + 0x28);
          if ((longlong)iVar3 != 0) {
            lVar5 = 0;
            do {
              (**(code **)(*plVar6 + 0xa08))
                        (plVar6,*(undefined8 *)(lVar4 + lVar5),*(undefined4 *)(lVar4 + 8 + lVar5));
              lVar5 = lVar5 + 0xc;
            } while ((longlong)iVar3 * 0xc != lVar5);
          }
          lVar4 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar4 = local_a0;
          }
          iVar3 = *(int *)(param_1 + 0xe0);
          if ((longlong)iVar3 != 0) {
            lVar5 = 0;
            do {
              local_68 = *(undefined8 *)(lVar4 + 0x18 + lVar5);
              puVar1 = (undefined4 *)(lVar4 + 8 + lVar5);
              local_78 = *puVar1;
              uStack_74 = puVar1[1];
              uStack_70 = puVar1[2];
              uStack_6c = puVar1[3];
              (**(code **)(*plVar6 + 0xa10))(plVar6,*(undefined8 *)(lVar4 + lVar5),&local_78);
              lVar5 = lVar5 + 0x20;
            } while ((longlong)iVar3 * 0x20 != lVar5);
          }
          lVar4 = *(longlong *)(param_1 + 0x118);
          if (*(longlong *)(param_1 + 0x118) == 0) {
            lVar4 = local_a8;
          }
          iVar3 = *(int *)(param_1 + 0x120);
          if ((longlong)iVar3 != 0) {
            lVar5 = 0;
            do {
              puVar1 = (undefined4 *)(lVar4 + 8 + lVar5);
              local_88 = *puVar1;
              uStack_84 = puVar1[1];
              uStack_80 = puVar1[2];
              uStack_7c = puVar1[3];
              (**(code **)(*plVar6 + 0xa18))(plVar6,*(undefined8 *)(lVar4 + lVar5),&local_88);
              lVar5 = lVar5 + 0x18;
            } while ((longlong)iVar3 * 0x18 != lVar5);
          }
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432f510c FUN_1432f510c body=53 status=ok
// SIG undefined FUN_1432f510c(void)

undefined8 * FUN_1432f510c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0850;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432f5142 FUN_1432f5142 body=426 status=ok
// SIG undefined FUN_1432f5142(void)

void FUN_1432f5142(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined **local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 0x10);
  if ((longlong)local_50 != 0) {
    lVar9 = 0;
    do {
      uVar2 = *(ulonglong *)(local_58 + lVar9);
      if ((uVar2 >> 0x20 == 0) || (uVar6 = (uint)uVar2, (int)uVar6 < 0)) {
LAB_1432f52bd:
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if ((int)uVar6 < DAT_14c9647dc) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8)));
          if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != (int)(uVar2 >> 0x20))) ||
             ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_1432f52bd;
          uVar8 = *puVar7;
        }
      }
      plVar3 = (longlong *)FUN_1432f52ed(uVar8);
      if (plVar3 != (longlong *)0x0) {
        local_60 = &PTR_FUN_14a4c0860;
        lVar5 = DAT_14cab53c0;
        if (DAT_14cab53c0 == 0) {
          lVar5 = FUN_14570767c(&DAT_14cab53c0,0);
        }
        lVar4 = FUN_14027385c(param_5 + 0x110);
        if (lVar4 != 0) {
          FUN_14027378e(lVar4,uVar8,lVar5,&local_60);
        }
        cVar1 = *(char *)(param_1 + 8);
        if (cVar1 == '\x02') {
          (**(code **)(*plVar3 + 0xa60))(plVar3);
        }
        else {
          if (cVar1 == '\x01') {
            lVar5 = *plVar3;
            uVar8 = 0;
          }
          else {
            if ((cVar1 != '\0') || ((*(byte *)((longlong)plVar3 + 0x9e) & 0x10) != 0))
            goto LAB_1432f5298;
            lVar5 = *plVar3;
            uVar8 = 1;
          }
          (**(code **)(lVar5 + 0x2b8))(plVar3,uVar8,1);
        }
      }
LAB_1432f5298:
      lVar9 = lVar9 + 8;
    } while ((longlong)local_50 * 8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432f52ed FUN_1432f52ed body=97 status=ok
// SIG undefined FUN_1432f52ed(void)

longlong FUN_1432f52ed(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_14143eef4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(longlong *)(param_1 + 0x390);
    }
    lVar1 = FUN_140288b94();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_1;
    }
  }
  return 0;
}



// FUNCTION 1432f53da FUN_1432f53da body=1193 status=ok
// SIG undefined FUN_1432f53da(void)

undefined8 *
FUN_1432f53da(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
     (cVar4 = FUN_1461c5012(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_1475d6d1a(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f55aa;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f55aa:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f562c;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f562c:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c1870;
      FUN_1475d71b4(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f5421;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_1475d6c9a(local_120,param_3,param_1);
    FUN_1432f5884(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f5421:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f5884 FUN_1432f5884 body=306 status=ok
// SIG undefined FUN_1432f5884(void)

void FUN_1432f5884(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475d6e2c(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f59b8 FUN_1432f59b8 body=121 status=ok
// SIG undefined FUN_1432f59b8(void)

void FUN_1432f59b8(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432f59f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1432f5a58 FUN_1432f5a58 body=282 status=ok
// SIG undefined FUN_1432f5a58(void)

undefined8 * FUN_1432f5a58(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f5b72 FUN_1432f5b72 body=93 status=ok
// SIG undefined FUN_1432f5b72(void)

void FUN_1432f5b72(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f5884(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f5bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f5bee FUN_1432f5bee body=1185 status=ok
// SIG undefined FUN_1432f5bee(void)

undefined8 *
FUN_1432f5bee(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_14612201a(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_1475dabbe(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f5db6;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f5db6:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f5e38;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f5e38:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c1a10;
      FUN_1475daf7c(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f5c2d;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_1475dab3e(local_120,param_3,param_1);
    FUN_1432f6090(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f5c2d:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f6090 FUN_1432f6090 body=306 status=ok
// SIG undefined FUN_1432f6090(void)

void FUN_1432f6090(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475dacae(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f61c4 FUN_1432f61c4 body=282 status=ok
// SIG undefined FUN_1432f61c4(void)

undefined8 * FUN_1432f61c4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f62de FUN_1432f62de body=93 status=ok
// SIG undefined FUN_1432f62de(void)

void FUN_1432f62de(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f6090(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f6331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f6370 FUN_1432f6370 body=57 status=ok
// SIG undefined FUN_1432f6370(void)

void FUN_1432f6370(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1475ddae4(param_1 + 8,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1432f63aa FUN_1432f63aa body=1217 status=ok
// SIG undefined FUN_1432f63aa(void)

undefined8 *
FUN_1432f63aa(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
      ((param_1[6] != -1 && (param_1[7] != -1)))) &&
     ((param_1[8] != -1 && (cVar4 = FUN_1461cbc7a(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475e0134(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f6592;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f6592:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x34);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x34);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f6614;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f6614:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c1bc0;
      FUN_1475e08b4(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x18);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_140 = (longlong *)CONCAT71(local_140._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_140 = plVar12;
        FUN_1432da764(param_5,&local_140);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f6409;
    }
    local_140 = (longlong *)*param_6;
    local_138 = 0;
    uStack_130 = 0;
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 8))(local_140,&local_138);
    }
    FUN_1475e00ac(local_128,param_3,param_1);
    FUN_1432f6d2a(local_128,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f6409:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f686c FUN_1432f686c body=1212 status=ok
// SIG undefined FUN_1432f686c(void)

undefined8 *
FUN_1432f686c(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_1475df194(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475e09b4(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f6a45;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f6a45:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x36);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x36);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f6ac7;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f6ac7:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c1bd0;
      local_158 = param_7;
      FUN_1475e1116(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x18);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_150 = (longlong *)CONCAT71(local_150._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_150 = plVar12;
        FUN_1432da764(param_5,&local_150);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f68ab;
    }
    local_150 = (longlong *)*param_6;
    local_138 = *param_7;
    uStack_130 = param_7[1];
    local_148 = 0;
    uStack_140 = 0;
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 8))(local_150,&local_148);
    }
    FUN_1475e092c(local_128,param_3,param_1);
    FUN_1432f6fd6(local_128,&local_150);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f68ab:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f6d2a FUN_1432f6d2a body=306 status=ok
// SIG undefined FUN_1432f6d2a(void)

void FUN_1432f6d2a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475e02b0(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f6e5e FUN_1432f6e5e body=282 status=ok
// SIG undefined FUN_1432f6e5e(void)

undefined8 * FUN_1432f6e5e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f6f78 FUN_1432f6f78 body=93 status=ok
// SIG undefined FUN_1432f6f78(void)

void FUN_1432f6f78(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f6d2a(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f6fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f6fd6 FUN_1432f6fd6 body=306 status=ok
// SIG undefined FUN_1432f6fd6(void)

void FUN_1432f6fd6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475e0b3c(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f710a FUN_1432f710a body=282 status=ok
// SIG undefined FUN_1432f710a(void)

undefined8 * FUN_1432f710a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f7224 FUN_1432f7224 body=93 status=ok
// SIG undefined FUN_1432f7224(void)

void FUN_1432f7224(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f6fd6(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f7277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f72a0 FUN_1432f72a0 body=1193 status=ok
// SIG undefined FUN_1432f72a0(void)

undefined8 *
FUN_1432f72a0(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
     (cVar4 = FUN_145c4f82e(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_1475e4bdc(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f7470;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f7470:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f74f2;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f74f2:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c1d70;
      FUN_1475e5076(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f72e7;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_1475e4b5c(local_120,param_3,param_1);
    FUN_1432f774a(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f72e7:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f774a FUN_1432f774a body=306 status=ok
// SIG undefined FUN_1432f774a(void)

void FUN_1432f774a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475e4cee(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f787e FUN_1432f787e body=282 status=ok
// SIG undefined FUN_1432f787e(void)

undefined8 * FUN_1432f787e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f7998 FUN_1432f7998 body=93 status=ok
// SIG undefined FUN_1432f7998(void)

void FUN_1432f7998(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f774a(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f79eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f7a18 FUN_1432f7a18 body=1185 status=ok
// SIG undefined FUN_1432f7a18(void)

undefined8 *
FUN_1432f7a18(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_14612201a(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_1475dabbe(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f7be0;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f7be0:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f7c62;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f7c62:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c1f10;
      FUN_1475e9478(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f7a57;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_1475e9188(local_120,param_3,param_1);
    FUN_1432f7eba(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f7a57:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f7eba FUN_1432f7eba body=306 status=ok
// SIG undefined FUN_1432f7eba(void)

void FUN_1432f7eba(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475e9208(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f7fee FUN_1432f7fee body=282 status=ok
// SIG undefined FUN_1432f7fee(void)

undefined8 * FUN_1432f7fee(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f8108 FUN_1432f8108 body=93 status=ok
// SIG undefined FUN_1432f8108(void)

void FUN_1432f8108(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f7eba(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f815b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f816a FUN_1432f816a body=1206 status=ok
// SIG undefined FUN_1432f816a(void)

undefined8 *
FUN_1432f816a(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
      ((param_1[6] != -1 && (param_1[7] != -1)))) &&
     (cVar4 = FUN_1475ec19e(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475ed76e(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f834a;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f834a:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x34);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x34);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f83cc;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f83cc:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c2080;
      FUN_1475eddfa(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xbc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_140 = (longlong *)CONCAT71(local_140._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_140 = plVar12;
        FUN_1432da764(param_5,&local_140);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f81c1;
    }
    local_140 = (longlong *)*param_6;
    local_138 = 0;
    uStack_130 = 0;
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 8))(local_140,&local_138);
    }
    FUN_1475ed6e6(local_128,param_3,param_1);
    FUN_1432f8ad6(local_128,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f81c1:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f8622 FUN_1432f8622 body=1202 status=ok
// SIG undefined FUN_1432f8622(void)

undefined8 *
FUN_1432f8622(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*param_1 != -1) && (cVar4 = FUN_1475ecc38(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475edefa(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f87f1;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f87f1:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x36);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x36);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f8873;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f8873:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c2090;
      local_158 = param_7;
      FUN_1475ee586(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xbc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_150 = (longlong *)CONCAT71(local_150._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_150 = plVar12;
        FUN_1432da764(param_5,&local_150);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f8657;
    }
    local_150 = (longlong *)*param_6;
    local_138 = *param_7;
    uStack_130 = param_7[1];
    local_148 = 0;
    uStack_140 = 0;
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 8))(local_150,&local_148);
    }
    FUN_1475ede72(local_128,param_3,param_1);
    FUN_1432f8d82(local_128,&local_150);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f8657:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f8ad6 FUN_1432f8ad6 body=306 status=ok
// SIG undefined FUN_1432f8ad6(void)

void FUN_1432f8ad6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475ed8c6(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f8c0a FUN_1432f8c0a body=282 status=ok
// SIG undefined FUN_1432f8c0a(void)

undefined8 * FUN_1432f8c0a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f8d24 FUN_1432f8d24 body=93 status=ok
// SIG undefined FUN_1432f8d24(void)

void FUN_1432f8d24(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f8ad6(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f8d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f8d82 FUN_1432f8d82 body=306 status=ok
// SIG undefined FUN_1432f8d82(void)

void FUN_1432f8d82(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475ee062(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f8eb6 FUN_1432f8eb6 body=282 status=ok
// SIG undefined FUN_1432f8eb6(void)

undefined8 * FUN_1432f8eb6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f8fd0 FUN_1432f8fd0 body=93 status=ok
// SIG undefined FUN_1432f8fd0(void)

void FUN_1432f8fd0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f8d82(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f9023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f902e FUN_1432f902e body=1217 status=ok
// SIG undefined FUN_1432f902e(void)

undefined8 *
FUN_1432f902e(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
      ((param_1[6] != -1 && (param_1[7] != -1)))) &&
     ((param_1[8] != -1 && (cVar4 = FUN_1475f1940(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475f3d40(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f9216;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f9216:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x34);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x34);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f9298;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f9298:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c2200;
      FUN_1475f44c0(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x18);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_140 = (longlong *)CONCAT71(local_140._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_140 = plVar12;
        FUN_1432da764(param_5,&local_140);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f908d;
    }
    local_140 = (longlong *)*param_6;
    local_138 = 0;
    uStack_130 = 0;
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 8))(local_140,&local_138);
    }
    FUN_1475f3cb8(local_128,param_3,param_1);
    FUN_1432f99ae(local_128,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f908d:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f94f0 FUN_1432f94f0 body=1212 status=ok
// SIG undefined FUN_1432f94f0(void)

undefined8 *
FUN_1432f94f0(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_1475f2e68(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475f45c0(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432f96c9;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432f96c9:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x36);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x36);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432f974b;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432f974b:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c2210;
      local_158 = param_7;
      FUN_1475f4d22(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x18);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_150 = (longlong *)CONCAT71(local_150._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_150 = plVar12;
        FUN_1432da764(param_5,&local_150);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f952f;
    }
    local_150 = (longlong *)*param_6;
    local_138 = *param_7;
    uStack_130 = param_7[1];
    local_148 = 0;
    uStack_140 = 0;
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 8))(local_150,&local_148);
    }
    FUN_1475f4538(local_128,param_3,param_1);
    FUN_1432f9c5a(local_128,&local_150);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f952f:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f99ae FUN_1432f99ae body=306 status=ok
// SIG undefined FUN_1432f99ae(void)

void FUN_1432f99ae(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475f3ebc(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f9ae2 FUN_1432f9ae2 body=282 status=ok
// SIG undefined FUN_1432f9ae2(void)

undefined8 * FUN_1432f9ae2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f9bfc FUN_1432f9bfc body=93 status=ok
// SIG undefined FUN_1432f9bfc(void)

void FUN_1432f9bfc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f99ae(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f9c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f9c5a FUN_1432f9c5a body=306 status=ok
// SIG undefined FUN_1432f9c5a(void)

void FUN_1432f9c5a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475f4748(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432f9d8e FUN_1432f9d8e body=282 status=ok
// SIG undefined FUN_1432f9d8e(void)

undefined8 * FUN_1432f9d8e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432f9ea8 FUN_1432f9ea8 body=93 status=ok
// SIG undefined FUN_1432f9ea8(void)

void FUN_1432f9ea8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432f9c5a(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432f9efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432f9f24 FUN_1432f9f24 body=55 status=ok
// SIG undefined FUN_1432f9f24(void)

void FUN_1432f9f24(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1475f9f94(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1432f9f5c FUN_1432f9f5c body=1217 status=ok
// SIG undefined FUN_1432f9f5c(void)

undefined8 *
FUN_1432f9f5c(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
      ((param_1[6] != -1 && (param_1[7] != -1)))) &&
     ((param_1[8] != -1 && (cVar4 = FUN_1475f1940(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475f3d40(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fa144;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fa144:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x34);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x34);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fa1c6;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fa1c6:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c23d0;
      FUN_1475fd1b4(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x18);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_140 = (longlong *)CONCAT71(local_140._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_140 = plVar12;
        FUN_1432da764(param_5,&local_140);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432f9fbb;
    }
    local_140 = (longlong *)*param_6;
    local_138 = 0;
    uStack_130 = 0;
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 8))(local_140,&local_138);
    }
    FUN_1475fcc28(local_128,param_3,param_1);
    FUN_1432fa8dc(local_128,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432f9fbb:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fa41e FUN_1432fa41e body=1212 status=ok
// SIG undefined FUN_1432fa41e(void)

undefined8 *
FUN_1432fa41e(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_1475f2e68(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475f45c0(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fa5f7;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fa5f7:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x36);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x36);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fa679;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fa679:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c23e0;
      local_158 = param_7;
      FUN_1475fd78e(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x18);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_150 = (longlong *)CONCAT71(local_150._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_150 = plVar12;
        FUN_1432da764(param_5,&local_150);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fa45d;
    }
    local_150 = (longlong *)*param_6;
    local_138 = *param_7;
    uStack_130 = param_7[1];
    local_148 = 0;
    uStack_140 = 0;
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 8))(local_150,&local_148);
    }
    FUN_1475fd22c(local_128,param_3,param_1);
    FUN_1432fab88(local_128,&local_150);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fa45d:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fa8dc FUN_1432fa8dc body=306 status=ok
// SIG undefined FUN_1432fa8dc(void)

void FUN_1432fa8dc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475fccb0(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432faa10 FUN_1432faa10 body=282 status=ok
// SIG undefined FUN_1432faa10(void)

undefined8 * FUN_1432faa10(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fab2a FUN_1432fab2a body=93 status=ok
// SIG undefined FUN_1432fab2a(void)

void FUN_1432fab2a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fa8dc(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fab7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fab88 FUN_1432fab88 body=306 status=ok
// SIG undefined FUN_1432fab88(void)

void FUN_1432fab88(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1475fd2b4(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432facbc FUN_1432facbc body=282 status=ok
// SIG undefined FUN_1432facbc(void)

undefined8 * FUN_1432facbc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fadd6 FUN_1432fadd6 body=93 status=ok
// SIG undefined FUN_1432fadd6(void)

void FUN_1432fadd6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fab88(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fae29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fae52 FUN_1432fae52 body=1 status=ok
// SIG undefined FUN_1432fae52(void)

void FUN_1432fae52(void)

{
  return;
}



// FUNCTION 1432fae54 FUN_1432fae54 body=1 status=ok
// SIG undefined FUN_1432fae54(void)

void FUN_1432fae54(void)

{
  return;
}



// FUNCTION 1432fae56 FUN_1432fae56 body=1181 status=ok
// SIG undefined FUN_1432fae56(void)

undefined8 *
FUN_1432fae56(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar4 = FUN_14760384a();
  if ((cVar4 != '\0') && (cVar4 = FUN_140dac6d2(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_147603e5c(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fb01a;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fb01a:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x35);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x35);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fb09c;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fb09c:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c25a0;
      FUN_1476049fc(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x19);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_148 = (longlong *)CONCAT71(local_148._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_148 = plVar12;
        FUN_1432da764(param_5,&local_148);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432faea6;
    }
    local_148 = (longlong *)*param_6;
    local_140 = 0;
    uStack_138 = 0;
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))(local_148,&local_140);
    }
    FUN_147603dcc(local_130,param_3,param_1);
    FUN_1432fb7aa(local_130,&local_148);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432faea6:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fb2f4 FUN_1432fb2f4 body=1205 status=ok
// SIG undefined FUN_1432fb2f4(void)

undefined8 *
FUN_1432fb2f4(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*param_1 != -1) && (cVar4 = FUN_140dac69c(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_147604b04(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fb4c3;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fb4c3:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x37);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x37);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fb545;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fb545:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c25b0;
      local_168 = param_7;
      FUN_147605634(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x19);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_158 = (longlong *)CONCAT71(local_158._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_158 = plVar12;
        FUN_1432da764(param_5,&local_158);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fb33e;
    }
    local_158 = (longlong *)*param_6;
    local_140 = *param_7;
    uStack_138 = param_7[1];
    local_150 = 0;
    uStack_148 = 0;
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 8))(local_158,&local_150);
    }
    FUN_147604a74(local_130,param_3,param_1);
    FUN_1432fba56(local_130,&local_158);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fb33e:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fb7aa FUN_1432fb7aa body=306 status=ok
// SIG undefined FUN_1432fb7aa(void)

void FUN_1432fb7aa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147604064(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fb8de FUN_1432fb8de body=282 status=ok
// SIG undefined FUN_1432fb8de(void)

undefined8 * FUN_1432fb8de(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fb9f8 FUN_1432fb9f8 body=93 status=ok
// SIG undefined FUN_1432fb9f8(void)

void FUN_1432fb9f8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fb7aa(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fba4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fba56 FUN_1432fba56 body=306 status=ok
// SIG undefined FUN_1432fba56(void)

void FUN_1432fba56(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147604d2a(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fbb8a FUN_1432fbb8a body=282 status=ok
// SIG undefined FUN_1432fbb8a(void)

undefined8 * FUN_1432fbb8a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fbca4 FUN_1432fbca4 body=93 status=ok
// SIG undefined FUN_1432fbca4(void)

void FUN_1432fbca4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fba56(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fbcf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fbd20 FUN_1432fbd20 body=57 status=ok
// SIG undefined FUN_1432fbd20(void)

void FUN_1432fbd20(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_147607e22(param_1 + 8,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1432fbda0 FUN_1432fbda0 body=29 status=ok
// SIG undefined FUN_1432fbda0(void)

undefined8 FUN_1432fbda0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432fbdbe FUN_1432fbdbe body=61 status=ok
// SIG undefined FUN_1432fbdbe(void)

undefined8 * FUN_1432fbdbe(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1402ca054(param_3,L"Weight",6);
  if (cVar1 == '\0') {
    lVar2 = FUN_145b24df8();
  }
  else {
    lVar2 = FUN_140f938fc();
  }
  *param_2 = *(undefined8 *)(lVar2 + 0x18);
  return param_2;
}



// FUNCTION 1432fbf82 FUN_1432fbf82 body=31 status=ok
// SIG undefined FUN_1432fbf82(void)

undefined8 FUN_1432fbf82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432fbfa2 FUN_1432fbfa2 body=335 status=ok
// SIG undefined FUN_1432fbfa2(void)

void FUN_1432fbfa2(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_1432f41ce(param_4,param_4 + 0x24);
  uVar1 = *(undefined8 *)(lVar5 + 8);
  local_69 = *(undefined1 *)(param_1 + 8);
  FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 0x10);
  if ((longlong)local_50 != 0) {
    lVar9 = 0;
    do {
      uVar2 = *(ulonglong *)(local_58 + lVar9);
      if (((uVar2 >> 0x20 != 0) && (uVar7 = (uint)uVar2, -1 < (int)uVar7)) &&
         ((int)uVar7 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8)));
        if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == (int)(uVar2 >> 0x20))) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar3 = *plVar8, lVar3 != 0)))) {
          local_68 = &PTR_FUN_14a4c5360;
          uVar4 = *(undefined8 *)(lVar5 + 0x18);
          local_60 = uVar1;
          lVar6 = FUN_14027385c(param_5 + 0x110);
          if (lVar6 != 0) {
            FUN_14027378e(lVar6,lVar3,uVar4,&local_68);
          }
          FUN_14158feea(uVar1,lVar3,local_69);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)local_50 * 8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fc0f2 FUN_1432fc0f2 body=312 status=ok
// SIG undefined FUN_1432fc0f2(void)

void FUN_1432fc0f2(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc131;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1432fc131:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc174;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1432fc174:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x18 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(lVar9 + 0x10 + lVar10 * 0x18);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x18);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 6;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432fc213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432fc22a FUN_1432fc22a body=312 status=ok
// SIG undefined FUN_1432fc22a(void)

void FUN_1432fc22a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc269;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1432fc269:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc2ac;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1432fc2ac:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x18 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(lVar9 + 0x10 + lVar10 * 0x18);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x18);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 6;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432fc34b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432fc362 FUN_1432fc362 body=89 status=ok
// SIG undefined FUN_1432fc362(void)

void FUN_1432fc362(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 1432fc3bc FUN_1432fc3bc body=337 status=ok
// SIG undefined FUN_1432fc3bc(void)

void FUN_1432fc3bc(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc3fc;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1432fc3fc:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc440;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1432fc440:
  lVar6 = *plVar10;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar5 = *plVar8;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar11 * 4);
      lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)(int)lVar3 * 8 + lVar5 + lVar11 * 8) = lVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432fc4d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432fc50e FUN_1432fc50e body=299 status=ok
// SIG undefined FUN_1432fc50e(void)

void FUN_1432fc50e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc54d;
      plVar10 = plVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1432fc54d:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar11 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc590;
      plVar11 = plVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1432fc590:
  lVar9 = *plVar10;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *plVar11);
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(lVar9 + (longlong)*(int *)(*param_4 + lVar7 * 4) * 0x10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 4;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432fc622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432fc63a FUN_1432fc63a body=299 status=ok
// SIG undefined FUN_1432fc63a(void)

void FUN_1432fc63a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc679;
      plVar10 = plVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1432fc679:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar11 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1432fc6bc;
      plVar11 = plVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1432fc6bc:
  lVar9 = *plVar10;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *plVar11);
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(lVar9 + (longlong)*(int *)(*param_4 + lVar7 * 4) * 0x10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 4;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001432fc74e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1432fc766 FUN_1432fc766 body=1181 status=ok
// SIG undefined FUN_1432fc766(void)

undefined8 *
FUN_1432fc766(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar4 = FUN_14760384a();
  if ((cVar4 != '\0') && (cVar4 = FUN_140dac6d2(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_147603e5c(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fc92a;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fc92a:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x35);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x35);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fc9ac;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fc9ac:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6140;
      FUN_14761ac24(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x19);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_148 = (longlong *)CONCAT71(local_148._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_148 = plVar12;
        FUN_1432da764(param_5,&local_148);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fc7b6;
    }
    local_148 = (longlong *)*param_6;
    local_140 = 0;
    uStack_138 = 0;
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))(local_148,&local_140);
    }
    FUN_14761a3a4(local_130,param_3,param_1);
    FUN_1432fd0ba(local_130,&local_148);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fc7b6:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fcc04 FUN_1432fcc04 body=1205 status=ok
// SIG undefined FUN_1432fcc04(void)

undefined8 *
FUN_1432fcc04(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*param_1 != -1) && (cVar4 = FUN_140dac69c(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_147604b04(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fcdd3;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fcdd3:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x37);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x37);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fce55;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fce55:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6150;
      local_168 = param_7;
      FUN_14761b48e(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x19);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_158 = (longlong *)CONCAT71(local_158._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_158 = plVar12;
        FUN_1432da764(param_5,&local_158);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fcc4e;
    }
    local_158 = (longlong *)*param_6;
    local_140 = *param_7;
    uStack_138 = param_7[1];
    local_150 = 0;
    uStack_148 = 0;
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 8))(local_158,&local_150);
    }
    FUN_14761ac9c(local_130,param_3,param_1);
    FUN_1432fd366(local_130,&local_158);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fcc4e:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fd0ba FUN_1432fd0ba body=306 status=ok
// SIG undefined FUN_1432fd0ba(void)

void FUN_1432fd0ba(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14761a434(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fd1ee FUN_1432fd1ee body=282 status=ok
// SIG undefined FUN_1432fd1ee(void)

undefined8 * FUN_1432fd1ee(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fd308 FUN_1432fd308 body=93 status=ok
// SIG undefined FUN_1432fd308(void)

void FUN_1432fd308(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fd0ba(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fd35b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fd366 FUN_1432fd366 body=306 status=ok
// SIG undefined FUN_1432fd366(void)

void FUN_1432fd366(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14761ad2c(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fd49a FUN_1432fd49a body=282 status=ok
// SIG undefined FUN_1432fd49a(void)

undefined8 * FUN_1432fd49a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fd5b4 FUN_1432fd5b4 body=93 status=ok
// SIG undefined FUN_1432fd5b4(void)

void FUN_1432fd5b4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fd366(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fd607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fd630 FUN_1432fd630 body=1198 status=ok
// SIG undefined FUN_1432fd630(void)

undefined8 *
FUN_1432fd630(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
     ((param_1[6] != -1 && (cVar4 = FUN_147620b2e(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1476220e8(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fd808;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fd808:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x34);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x34);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fd88a;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fd88a:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6310;
      FUN_147622670(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xbc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_140 = (longlong *)CONCAT71(local_140._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_140 = plVar12;
        FUN_1432da764(param_5,&local_140);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fd67f;
    }
    local_140 = (longlong *)*param_6;
    local_138 = 0;
    uStack_130 = 0;
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 8))(local_140,&local_138);
    }
    FUN_147622060(local_128,param_3,param_1);
    FUN_1432fdf94(local_128,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fd67f:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fdae0 FUN_1432fdae0 body=1202 status=ok
// SIG undefined FUN_1432fdae0(void)

undefined8 *
FUN_1432fdae0(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*param_1 != -1) && (cVar4 = FUN_14762175a(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_147622770(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fdcaf;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fdcaf:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x36);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x36);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fdd31;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fdd31:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6320;
      local_158 = param_7;
      FUN_147622d12(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xbc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_150 = (longlong *)CONCAT71(local_150._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_150 = plVar12;
        FUN_1432da764(param_5,&local_150);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fdb15;
    }
    local_150 = (longlong *)*param_6;
    local_138 = *param_7;
    uStack_130 = param_7[1];
    local_148 = 0;
    uStack_140 = 0;
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 8))(local_150,&local_148);
    }
    FUN_1476226e8(local_128,param_3,param_1);
    FUN_1432fe240(local_128,&local_150);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fdb15:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fdf94 FUN_1432fdf94 body=306 status=ok
// SIG undefined FUN_1432fdf94(void)

void FUN_1432fdf94(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14762221e(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fe0c8 FUN_1432fe0c8 body=282 status=ok
// SIG undefined FUN_1432fe0c8(void)

undefined8 * FUN_1432fe0c8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fe1e2 FUN_1432fe1e2 body=93 status=ok
// SIG undefined FUN_1432fe1e2(void)

void FUN_1432fe1e2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fdf94(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fe235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fe240 FUN_1432fe240 body=306 status=ok
// SIG undefined FUN_1432fe240(void)

void FUN_1432fe240(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476228b2(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fe374 FUN_1432fe374 body=282 status=ok
// SIG undefined FUN_1432fe374(void)

undefined8 * FUN_1432fe374(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432fe48e FUN_1432fe48e body=93 status=ok
// SIG undefined FUN_1432fe48e(void)

void FUN_1432fe48e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fe240(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fe4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fe50a FUN_1432fe50a body=1 status=ok
// SIG undefined FUN_1432fe50a(void)

void FUN_1432fe50a(void)

{
  return;
}



// FUNCTION 1432fe50c FUN_1432fe50c body=1185 status=ok
// SIG undefined FUN_1432fe50c(void)

undefined8 *
FUN_1432fe50c(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_14110e0b0(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_147627ccc(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fe6d4;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fe6d4:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432fe756;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432fe756:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c64c0;
      FUN_14762808a(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fe560;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_147627c4c(local_120,param_3,param_1);
    FUN_1432fe9ae(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fe560:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432fe9ae FUN_1432fe9ae body=306 status=ok
// SIG undefined FUN_1432fe9ae(void)

void FUN_1432fe9ae(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147627dbc(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432feae2 FUN_1432feae2 body=282 status=ok
// SIG undefined FUN_1432feae2(void)

undefined8 * FUN_1432feae2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432febfc FUN_1432febfc body=93 status=ok
// SIG undefined FUN_1432febfc(void)

void FUN_1432febfc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432fe9ae(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432fec4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432fec78 FUN_1432fec78 body=57 status=ok
// SIG undefined FUN_1432fec78(void)

void FUN_1432fec78(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_14762c0f8(param_1 + 8,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1432fecb2 FUN_1432fecb2 body=1185 status=ok
// SIG undefined FUN_1432fecb2(void)

undefined8 *
FUN_1432fecb2(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_14762cb80(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_14762d2e4(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432fee7a;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432fee7a:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432feefc;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432feefc:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6660;
      FUN_14762d6a2(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432fecf1;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_14762d264(local_120,param_3,param_1);
    FUN_1432ff154(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432fecf1:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ff154 FUN_1432ff154 body=306 status=ok
// SIG undefined FUN_1432ff154(void)

void FUN_1432ff154(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14762d3d4(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ff288 FUN_1432ff288 body=282 status=ok
// SIG undefined FUN_1432ff288(void)

undefined8 * FUN_1432ff288(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432ff3a2 FUN_1432ff3a2 body=93 status=ok
// SIG undefined FUN_1432ff3a2(void)

void FUN_1432ff3a2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432ff154(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ff3f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432ff41e FUN_1432ff41e body=1185 status=ok
// SIG undefined FUN_1432ff41e(void)

undefined8 *
FUN_1432ff41e(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_14612201a(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_1475dabbe(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432ff5e6;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432ff5e6:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432ff668;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432ff668:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6800;
      FUN_147632814(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432ff45d;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_147632524(local_120,param_3,param_1);
    FUN_1432ff8c0(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432ff45d:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ff8c0 FUN_1432ff8c0 body=306 status=ok
// SIG undefined FUN_1432ff8c0(void)

void FUN_1432ff8c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476325a4(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432ff9f4 FUN_1432ff9f4 body=282 status=ok
// SIG undefined FUN_1432ff9f4(void)

undefined8 * FUN_1432ff9f4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1432ffb0e FUN_1432ffb0e body=93 status=ok
// SIG undefined FUN_1432ffb0e(void)

void FUN_1432ffb0e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1432ff8c0(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ffb61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1432ffb8a FUN_1432ffb8a body=1185 status=ok
// SIG undefined FUN_1432ffb8a(void)

undefined8 *
FUN_1432ffb8a(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_1 != -1) && (param_1[4] != -1)) &&
     (cVar4 = FUN_147637504(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_147638a22(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1432ffd52;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1432ffd52:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1432ffdd4;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1432ffdd4:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c69c0;
      FUN_147638de0(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_138 = plVar12;
        FUN_1432da764(param_5,&local_138);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1432ffbc9;
    }
    local_138 = (longlong *)*param_6;
    local_130 = 0;
    uStack_128 = 0;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,&local_130);
    }
    FUN_1476389a2(local_120,param_3,param_1);
    FUN_1433004e2(local_120,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1432ffbc9:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330002c FUN_14330002c body=1205 status=ok
// SIG undefined FUN_14330002c(void)

undefined8 *
FUN_14330002c(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*param_1 != -1) && (cVar4 = FUN_14763816a(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_147638ed8(param_1,param_4,local_120);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar13 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1433001fb;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1433001fb:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x35);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x35);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14330027d;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14330027d:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c69d0;
      local_158 = param_7;
      FUN_14763938a(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x17);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_148 = (longlong *)CONCAT71(local_148._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_148 = plVar12;
        FUN_1432da764(param_5,&local_148);
      }
      puVar13 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar13 = local_100;
      }
      FUN_144717c65(puVar13,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143300061;
    }
    local_148 = (longlong *)*param_6;
    local_130 = *param_7;
    uStack_128 = param_7[1];
    local_140 = 0;
    uStack_138 = 0;
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))(local_148,&local_140);
    }
    FUN_147638e58(local_120,param_3,param_1);
    FUN_14330078e(local_120,&local_148);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143300061:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433004e2 FUN_1433004e2 body=306 status=ok
// SIG undefined FUN_1433004e2(void)

void FUN_1433004e2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147638b12(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143300616 FUN_143300616 body=282 status=ok
// SIG undefined FUN_143300616(void)

undefined8 * FUN_143300616(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 143300730 FUN_143300730 body=93 status=ok
// SIG undefined FUN_143300730(void)

void FUN_143300730(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433004e2(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143300783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14330078e FUN_14330078e body=306 status=ok
// SIG undefined FUN_14330078e(void)

void FUN_14330078e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147638fce(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433008c2 FUN_1433008c2 body=282 status=ok
// SIG undefined FUN_1433008c2(void)

undefined8 * FUN_1433008c2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1433009dc FUN_1433009dc body=93 status=ok
// SIG undefined FUN_1433009dc(void)

void FUN_1433009dc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14330078e(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143300a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143300a39 FUN_143300a39 body=63 status=ok
// SIG undefined FUN_143300a39(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143300a39(void)

{
  _DAT_14cab57f8 = &PTR_FUN_14a4c6ad0;
  FUN_14763b62f(DAT_14cab5800,DAT_14cab5808);
  if (DAT_14cab5800 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143300a78 FUN_143300a78 body=1181 status=ok
// SIG undefined FUN_143300a78(void)

undefined8 *
FUN_143300a78(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar4 = FUN_14760384a();
  if ((cVar4 != '\0') && (cVar4 = FUN_140dac6d2(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_147603e5c(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_143300c3c;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_143300c3c:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x35);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x35);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_143300cbe;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143300cbe:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6b90;
      FUN_14764157a(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x19);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_148 = (longlong *)CONCAT71(local_148._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_148 = plVar12;
        FUN_1432da764(param_5,&local_148);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143300ac8;
    }
    local_148 = (longlong *)*param_6;
    local_140 = 0;
    uStack_138 = 0;
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))(local_148,&local_140);
    }
    FUN_147640cfa(local_130,param_3,param_1);
    FUN_1433013cc(local_130,&local_148);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143300ac8:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143300f16 FUN_143300f16 body=1205 status=ok
// SIG undefined FUN_143300f16(void)

undefined8 *
FUN_143300f16(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*param_1 != -1) && (cVar4 = FUN_140dac69c(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_147604b04(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1433010e5;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1432f5a31);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1433010e5:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x37);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x37);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_143301167;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143301167:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a4c6ba0;
      local_168 = param_7;
      FUN_147641de4(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)(puVar14 + 0x19);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_158 = (longlong *)CONCAT71(local_158._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_158 = plVar12;
        FUN_1432da764(param_5,&local_158);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143300f60;
    }
    local_158 = (longlong *)*param_6;
    local_140 = *param_7;
    uStack_138 = param_7[1];
    local_150 = 0;
    uStack_148 = 0;
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 8))(local_158,&local_150);
    }
    FUN_1476415f2(local_130,param_3,param_1);
    FUN_143301678(local_130,&local_158);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143300f60:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433013cc FUN_1433013cc body=306 status=ok
// SIG undefined FUN_1433013cc(void)

void FUN_1433013cc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147640d8a(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143301500 FUN_143301500 body=282 status=ok
// SIG undefined FUN_143301500(void)

undefined8 * FUN_143301500(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 14330161a FUN_14330161a body=93 status=ok
// SIG undefined FUN_14330161a(void)

void FUN_14330161a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433013cc(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014330166d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143301678 FUN_143301678 body=306 status=ok
// SIG undefined FUN_143301678(void)

void FUN_143301678(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147641682(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433017ac FUN_1433017ac body=282 status=ok
// SIG undefined FUN_1433017ac(void)

undefined8 * FUN_1433017ac(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1432f5a31);
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



// FUNCTION 1433018c6 FUN_1433018c6 body=93 status=ok
// SIG undefined FUN_1433018c6(void)

void FUN_1433018c6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143301678(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143301919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143301944 FUN_143301944 body=89 status=ok
// SIG undefined FUN_143301944(void)

undefined8 * FUN_143301944(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2610;
  if (*(char *)((longlong)param_1 + 0x74) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14330199e FUN_14330199e body=249 status=ok
// SIG undefined FUN_14330199e(void)

undefined8 * FUN_14330199e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6ea0;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  if (*(char *)(param_1 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)(param_1 + 0x16) == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143301a98 FUN_143301a98 body=89 status=ok
// SIG undefined FUN_143301a98(void)

undefined8 * FUN_143301a98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c72e0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143301af2 FUN_143301af2 body=105 status=ok
// SIG undefined FUN_143301af2(void)

undefined8 * FUN_143301af2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7d40;
  if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143301b5c FUN_143301b5c body=89 status=ok
// SIG undefined FUN_143301b5c(void)

undefined8 * FUN_143301b5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3a20;
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143301bb6 FUN_143301bb6 body=65 status=ok
// SIG undefined FUN_143301bb6(void)

undefined8 * FUN_143301bb6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7640;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143301bf8 FUN_143301bf8 body=77 status=ok
// SIG undefined FUN_143301bf8(void)

undefined8 * FUN_143301bf8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c5180;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143301c46 FUN_143301c46 body=85 status=ok
// SIG undefined FUN_143301c46(void)

undefined8 FUN_143301c46(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14753e8f2(param_1,iVar1);
  }
  iVar3 = (uint)(0.5 <= (float)((ulonglong)uVar2 >> 0x20)) + (int)uVar2;
  *(int *)(*param_1 + (longlong)iVar1 * 4) = iVar3;
  return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
}



// FUNCTION 143301c9c FUN_143301c9c body=89 status=ok
// SIG undefined FUN_143301c9c(void)

undefined8 * FUN_143301c9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c5330;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143301cf5 FUN_143301cf5 body=2258 status=ok
// SIG undefined FUN_143301cf5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143301cf5(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined4 local_bc;
  char *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  _DAT_14cab4a24 = 0xffffffff;
  DAT_14cab4a28 = 0;
  FUN_1400b22c2(&local_b8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_b8,&DAT_14cab4a2c);
  if (cVar1 == '\0') {
    _DAT_14cab4a2c = 0;
    uRam000000014cab4a34 = 0;
  }
  if (local_b8 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4abf60);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4ac090);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4ac1b0);
  DAT_14cab58a8 = DAT_14cab2e38;
  local_b8 = "bone";
  uStack_b0 = 4;
  uStack_ac = uStack_ac & 0xffffff00;
  DAT_14cab2e38 = DAT_14cab2e38 + 1;
  FUN_14001a6c0(&local_b8,1);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 9;
  FUN_14282b410(L"/Script/MovieSceneTracks",0,0,&PTR_FUN_14a4acd00);
  DAT_14cab4b60 = 0;
  atexit(FUN_1432f47c8);
  local_b8 = (char *)0x800000014a4ad3d8;
  local_bc = 0x10;
  uStack_b0 = FUN_14577453c();
  uStack_ac = CONCAT31(uStack_ac._1_3_,1);
  FUN_146346b3a(&local_b8);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_d8 = local_d8 & 0xffffffff00000000;
  DAT_14cab58a4 = DAT_14cab3268;
  FUN_141471170(&DAT_14cab4b90,L"MovieScene.ResetComponentVelocity",&DAT_14c761014,
                L"If 1 set component velocity to 0 on restore state, otherwise don\'t do anything (previous behavior)."
               );
  atexit(FUN_1432f47f8);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ade40,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ae4b0,1,0);
  uStack_c8 = 1;
  ppuStack_d0 = &PTR_FUN_14a4aebe0;
  local_d8 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4aec00,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 5;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4afe80,2,&PTR_FUN_14a4afdb0);
  FUN_1446f470e(&local_b8,L"Location.X",1);
  FUN_1446f470e(&uStack_b0,L"Location.Y",1);
  FUN_1446f470e(local_a8,L"Location.Z",1);
  FUN_1446f470e(local_a0,L"Rotation.X",1);
  FUN_1446f470e(local_98,L"Rotation.Y",1);
  FUN_1446f470e(local_90,L"Rotation.Z",1);
  FUN_1446f470e(local_88,L"Scale.X",1);
  FUN_1446f470e(local_80,L"Scale.Y",1);
  FUN_1446f470e(local_78,L"Scale.Z",1);
  FUN_1446f470e(local_70,L"Weight",1);
  DAT_14cab4cd0 = (void *)0x0;
  DAT_14cab4cd8 = 10;
  FUN_1401b309e(&DAT_14cab4cd0,10,0);
  memcpy(DAT_14cab4cd0,&local_b8,0x50);
  DAT_14cab4ce0 = 10;
  atexit((_func_5014 *)&LAB_1432f4874);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 2;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b08d0,1,&PTR_FUN_14a4b0880);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b1f40,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b25a0,1,&PTR_FUN_14a4b2570);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b2a70,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b3260,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b3ad0,1,&PTR_FUN_14a4b3aa0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b3fb0,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b4490,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b4b10,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b51f0,1,&PTR_FUN_14a4b51c0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 2;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b61c0,1,&PTR_FUN_14a4b6170);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b6530,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b6a00,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 2;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b7400,1,&PTR_FUN_14a4b73b0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b8530,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b89f0,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b8eb0,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b9370,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 3;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4b9c10,1,&PTR_FUN_14a4b9b90);
  local_b8 = (char *)0xf6e6492f509d354f;
  uStack_b0 = 0xa74985b2;
  uStack_ac = 0x73c631c;
  _DAT_14cab50f0 = 0x509d354f;
  uRam000000014cab50f4 = 0xf6e6492f;
  uRam000000014cab50f8 = 0xa74985b2;
  uRam000000014cab50fc = 0x73c631c;
  FUN_141005458(&local_b8,0,L"EventParameter");
  atexit((_func_5014 *)&LAB_1432f4c3d);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ba070,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ba550,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4baab0,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4baff0,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4bb4c0,1,0);
  uStack_c8 = 1;
  ppuStack_d0 = &PTR_FUN_14a4bbec0;
  local_d8 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4bbee0,1,0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4bc3b0,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 6;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4be7f0,2,&PTR_FUN_14a4be700);
  uStack_c8 = 1;
  ppuStack_d0 = &PTR_FUN_14a4bed90;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4bede0,1,&PTR_FUN_14a4bedb0);
  uStack_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4bf2c0,1,0);
  ppuStack_d0 = (undefined **)0x0;
  uStack_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4c03b0,1,&PTR_FUN_14a4c0380);
  local_b8 = (char *)CONCAT71(local_b8._1_7_,1);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cab5398,L"Sequencer.StartTransformOffsetInBoneSpace",&local_b8,
                L"When true we offset the start offsets for skeletal animation matching in bone space, if false we do it in root space, by default true"
               );
  atexit(FUN_1432f4d66);
  local_b8 = "DefaultSlot";
  uStack_b0 = 0xb;
  uStack_ac = uStack_ac & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cab53b0 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433025c8 FUN_1433025c8 body=257 status=ok
// SIG undefined FUN_1433025c8(void)

void FUN_1433025c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  ushort *local_138;
  code **local_130;
  undefined1 local_124 [4];
  undefined2 *local_120;
  undefined1 *local_118;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined1 local_107;
  undefined4 local_104;
  undefined1 local_100;
  ushort local_fc;
  undefined2 local_fa;
  undefined1 local_f8 [8];
  ushort local_f0;
  longlong local_90;
  code *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar1 + 0x7c);
  local_10e = *(undefined2 *)(lVar1 + 0x54);
  local_10c = *(undefined2 *)(lVar1 + 0x6e);
  local_107 = 0;
  local_104 = 0x6ff;
  local_100 = 0;
  local_fa = *(undefined2 *)(lVar1 + 0x130);
  local_120 = &local_fa;
  local_118 = local_f8;
  FUN_147655dd8(&local_110,local_f8);
  local_138 = &local_fc;
  local_fc = local_f0 & 0xfdff;
  local_130 = &local_30;
  local_30 = FUN_147666e60;
  local_28 = 3;
  FUN_147666c1a(local_f8,local_124,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433026ca FUN_1433026ca body=1291 status=ok
// SIG undefined FUN_1433026ca(void)

void FUN_1433026ca(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_238 [40];
  undefined2 *local_210;
  short *local_208;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 *local_1e8;
  undefined1 local_1db;
  undefined2 local_1da;
  short local_1d8;
  short local_1d6;
  short local_1d4;
  longlong local_170;
  undefined1 local_110 [32];
  undefined1 *local_f0;
  ulonglong local_e8;
  longlong local_a8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar7 = FUN_14009d2a0();
  local_1fc = *(undefined2 *)(lVar7 + 0x7c);
  local_1fa = *(undefined2 *)(lVar7 + 0x54);
  local_1f8 = *(undefined2 *)(lVar7 + 0x6e);
  local_1f3 = 0;
  local_1f0 = 0x6ff;
  local_1ec = 0;
  local_1da = *(undefined2 *)(lVar7 + 0x130);
  local_210 = &local_1da;
  local_208 = &local_1d8;
  FUN_147655dd8(&local_1fc,&local_1d8);
  if (((local_1d8 != -1) && (local_1d6 != -1)) && (local_1d4 != -1)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = lVar3 + 0x28;
    cVar5 = FUN_147666ef6(&local_1d8,lVar7);
    if (cVar5 != '\0') {
      if ((*(int *)(lVar3 + 0x29c) == 0) && (*(char *)(lVar3 + 0x298) != '\0')) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = 0x400000000;
        FUN_1476671c2(&local_1d8,param_2,local_110);
        puVar14 = (undefined1 *)0x0;
        if ((int)local_e8 != 0) {
          puVar14 = local_110;
        }
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_1433028e8;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_143311b0b);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_1433028e8:
          puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar13 + 0x31);
          uVar11 = puVar9[0x12];
          if (puVar12 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar6 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar12 = (uint *)(puVar13 + 0x31);
            uVar11 = 0;
            if (puVar12 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_14330296a;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_14330296a:
        *(uint **)(puVar9 + 0x10) = puVar12;
        puVar9[0x12] = uVar11;
        FUN_1447247dc(puVar13,puVar14);
        *puVar13 = &PTR_FUN_14a4d6f40;
        FUN_147667144(puVar13 + 0x15,lVar7,&local_1d8);
        uVar11 = *(uint *)((longlong)puVar13 + 0xb4);
        if (((ulonglong)uVar11 & 0xff) == 0xff) {
          uVar6 = uVar11 >> 10 & 3;
          iVar15 = 0;
          if ((uVar11 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar15 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar15 = (uVar11 >> 7 & 2 | uVar11 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar11 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar13[0xf] = uVar10;
        puVar13[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar13 + 0x1c) = iVar15;
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
          UNLOCK();
        }
        local_1db = 1;
        local_1e8 = puVar13;
        FUN_1447439e4(puVar13);
        if (param_3 != 0) {
          FUN_14766729e(&local_1d8,&local_1e8,param_3);
        }
        puVar14 = local_110;
        if (local_f0 != (undefined1 *)0x0) {
          puVar14 = local_f0;
        }
        FUN_144717c65(puVar14,local_e8 & 0xffffffff);
        if (local_f0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
      }
      else {
        FUN_147667144(local_110,lVar7,&local_1d8);
        FUN_1433119de(local_110);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143302bd6 FUN_143302bd6 body=1916 status=ok
// SIG undefined FUN_143302bd6(void)

void FUN_143302bd6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  code **local_210;
  undefined1 *local_208;
  uint *local_200;
  uint *local_1f8;
  int local_1e4;
  undefined2 *local_1e0;
  undefined4 *local_1d8;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined1 local_1c3;
  undefined4 local_1c0;
  undefined1 local_1bc;
  ushort local_1b6;
  int local_1b4;
  longlong *local_1b0;
  longlong *local_1a8;
  code *local_1a0;
  undefined4 **local_198;
  undefined4 *local_190;
  undefined2 local_182;
  undefined4 local_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined1 local_168 [80];
  longlong local_118;
  undefined1 local_108 [32];
  int local_e8;
  undefined1 local_e0 [32];
  int local_c0;
  code *local_b8;
  byte local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  uint local_98 [8];
  undefined8 local_78;
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar7 = FUN_14009d2a0();
  local_1ca = *(undefined2 *)(lVar7 + 0x54);
  local_1cc = *(undefined2 *)(lVar7 + 0x70);
  local_1c8 = *(undefined2 *)(lVar7 + 0x72);
  local_1c3 = 0;
  local_1c0 = 0x6ff;
  local_1bc = 0;
  local_182 = *(undefined2 *)(lVar7 + 0x130);
  local_1e0 = &local_182;
  local_1d8 = &local_180;
  FUN_141104270(&local_1cc,&local_180);
  local_1b6 = (ushort)uStack_178 & 0xfdff;
  local_b8 = FUN_141067638;
  local_b0 = 3;
  if ((((ushort)local_180 == -1) || (local_180._2_2_ == -1)) || ((ushort)uStack_17c == -1))
  goto LAB_1433031fd;
  cVar5 = FUN_1417a563a(&local_180,*(longlong *)(param_1 + 0x28) + 0x28);
  if (cVar5 == '\0') goto LAB_1433031fd;
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d6f50;
  plVar8[2] = (longlong)&PTR_FUN_14a4d6f68;
  *(uint *)((longlong)plVar8 + 0x1c) = local_180;
  *(uint *)(plVar8 + 4) = uStack_17c;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_178;
  *(undefined4 *)(plVar8 + 5) = uStack_174;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = local_170;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  uVar6 = local_e8 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar6) {
    uVar13 = 0x100;
    if (0x100 < uVar6) {
      uVar13 = uVar6;
    }
    local_50 = (ulonglong)uVar13 << 0x20;
    FUN_14497ddce(local_70,0);
  }
  local_50 = CONCAT44(local_50._4_4_,local_e8);
  if (local_e8 != 0) {
    memcpy(local_70,local_108,(ulonglong)(local_e8 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_78 = 0;
  uVar6 = local_c0 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar6) {
    uVar13 = 0x100;
    if (0x100 < uVar6) {
      uVar13 = uVar6;
    }
    local_78 = (ulonglong)uVar13 << 0x20;
    FUN_14497ddce(local_98,0);
  }
  local_78 = CONCAT44(local_78._4_4_,local_c0);
  if (local_c0 != 0) {
    memcpy(local_98,local_e0,(ulonglong)(local_c0 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar4 = local_50;
  uVar6 = local_180;
  uVar3 = (ushort)local_180;
  iVar10 = (local_180 & 0xffff) + 1;
  iVar12 = iVar10 - (int)local_50;
  if (iVar12 != 0 && (int)local_50 <= iVar10) {
    if ((int)local_50 == 0) {
LAB_143302e5f:
      if (local_50._4_4_ <= (int)(local_180 & 0xffff)) {
        local_50 = CONCAT44(0x100,(int)local_50);
        FUN_14497ddce(local_70,uVar4 & 0xffffffff);
        iVar10 = (int)local_50 + iVar12;
      }
      iVar11 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (iVar10 % 0x20 != 0) {
        bVar9 = -(char)(iVar10 % 0x20);
        local_70[iVar11 >> 5] = (local_70[iVar11 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = (int)local_50 + 0x1e;
      if (-1 < (int)local_50 + -1) {
        iVar11 = (int)local_50 + -1;
      }
      if (iVar11 >> 5 != (uint)((ushort)local_180 >> 5)) goto LAB_143302e5f;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
    }
    FUN_1447c45ca(local_70,uVar4 & 0xffffffff,iVar12,0);
  }
  local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar6 & 0x1f);
  uVar4 = local_50;
  iVar10 = local_180._2_2_ + 1;
  iVar12 = iVar10 - (int)local_50;
  if (iVar12 != 0 && (int)local_50 <= iVar10) {
    if ((int)local_50 == 0) {
LAB_143302f14:
      if (local_50._4_4_ <= (int)(uint)local_180._2_2_) {
        local_50 = CONCAT44(0x100,(int)local_50);
        FUN_14497ddce(local_70,uVar4 & 0xffffffff);
        iVar10 = (int)local_50 + iVar12;
      }
      iVar11 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (iVar10 % 0x20 != 0) {
        bVar9 = -(char)(iVar10 % 0x20);
        local_70[iVar11 >> 5] = (local_70[iVar11 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = (int)local_50 + 0x1e;
      if (-1 < (int)local_50 + -1) {
        iVar11 = (int)local_50 + -1;
      }
      if (iVar11 >> 5 != (uint)(local_180._2_2_ >> 5)) goto LAB_143302f14;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
    }
    FUN_1447c45ca(local_70,uVar4 & 0xffffffff,iVar12,0);
  }
  uVar6 = uStack_17c;
  local_70[local_180._2_2_ >> 5] =
       local_70[local_180._2_2_ >> 5] | 1 << ((byte)(local_180 >> 0x10) & 0x1f);
  uVar4 = local_50;
  uVar3 = (ushort)uStack_17c;
  uVar13 = uStack_17c & 0xffff;
  iVar10 = (uStack_17c & 0xffff) + 1;
  iVar12 = iVar10 - (int)local_50;
  if (iVar12 != 0 && (int)local_50 <= iVar10) {
    if ((int)local_50 == 0) {
LAB_143302fc2:
      if (local_50._4_4_ <= (int)uVar13) {
        local_50 = CONCAT44(0x100,(int)local_50);
        FUN_14497ddce(local_70,uVar4 & 0xffffffff);
        iVar10 = (int)local_50 + iVar12;
      }
      iVar11 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (iVar10 % 0x20 != 0) {
        bVar9 = -(char)(iVar10 % 0x20);
        local_70[iVar11 >> 5] = (local_70[iVar11 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = (int)local_50 + 0x1e;
      if (-1 < (int)local_50 + -1) {
        iVar11 = (int)local_50 + -1;
      }
      if (iVar11 >> 5 != (uint)((ushort)uStack_17c >> 5)) goto LAB_143302fc2;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
    }
    FUN_1447c45ca(local_70,uVar4 & 0xffffffff,iVar12,0);
    uVar13 = (uint)(ushort)uStack_17c;
    iVar10 = (ushort)uStack_17c + 1;
  }
  uVar4 = local_78;
  local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar6 & 0x1f);
  iVar12 = iVar10 - (int)local_78;
  if (iVar12 != 0 && (int)local_78 <= iVar10) {
    if ((int)local_78 == 0) {
LAB_143303093:
      if (local_78._4_4_ <= (int)uVar13) {
        local_78 = CONCAT44(0x100,(int)local_78);
        FUN_14497ddce(local_98,uVar4 & 0xffffffff);
        iVar10 = (int)local_78 + iVar12;
      }
      iVar11 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      local_78 = CONCAT44(local_78._4_4_,iVar10);
      if (iVar10 % 0x20 != 0) {
        bVar9 = -(char)(iVar10 % 0x20);
        local_98[iVar11 >> 5] = (local_98[iVar11 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = (int)local_78 + 0x1e;
      if (-1 < (int)local_78 + -1) {
        iVar11 = (int)local_78 + -1;
      }
      if (iVar11 >> 5 != (uint)((ushort)uStack_17c >> 5)) goto LAB_143303093;
      local_78 = CONCAT44(local_78._4_4_,iVar10);
    }
    FUN_1447c45ca(local_98,uVar4 & 0xffffffff,iVar12,0);
  }
  local_98[uVar13 >> 5] = local_98[uVar13 >> 5] | 1 << ((byte)uVar13 & 0x1f);
  local_198 = &local_190;
  local_1a0 = FUN_1417a5702;
  local_a0 = local_b0;
  local_190 = &local_180;
  (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(local_a8);
  local_208 = local_168;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_1f8 = local_98;
  local_200 = local_70;
  local_210 = &local_1a0;
  local_218 = local_a8;
  local_1b0 = plVar8 + 2;
  local_1a8 = plVar8;
  FUN_1406ac01c(param_2,&local_1e4,&local_1b6,&local_1b0);
  if (local_1e4 == -1) {
    if ((local_1b6 & 0x400) != 0) {
      FUN_145c71394(param_2,&local_1b4);
      local_1e4 = local_1b4;
      if (local_1b4 != -1) goto LAB_1433031ce;
    }
  }
  else {
LAB_1433031ce:
    FUN_1407ce0e2(param_2,local_1e4,0xffffffff);
    FUN_1407cdf34(param_2,local_1e4,0xffffffff);
  }
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
LAB_1433031fd:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143303354 FUN_143303354 body=1284 status=ok
// SIG undefined FUN_143303354(void)

void FUN_143303354(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_238 [40];
  undefined2 *local_210;
  short *local_208;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 *local_1e8;
  undefined1 local_1db;
  undefined2 local_1da;
  short local_1d8;
  short local_1d6;
  short local_1d4;
  longlong local_170;
  undefined1 local_110 [32];
  undefined1 *local_f0;
  ulonglong local_e8;
  longlong local_a8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar7 = FUN_14009d2a0();
  local_1fa = *(undefined2 *)(lVar7 + 0x54);
  local_1fc = *(undefined2 *)(lVar7 + 0x70);
  local_1f8 = *(undefined2 *)(lVar7 + 0x72);
  local_1f3 = 0;
  local_1f0 = 0x6ff;
  local_1ec = 0;
  local_1da = *(undefined2 *)(lVar7 + 0x130);
  local_210 = &local_1da;
  local_208 = &local_1d8;
  FUN_141104270(&local_1fc,&local_1d8);
  if (((local_1d8 != -1) && (local_1d6 != -1)) && (local_1d4 != -1)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = lVar3 + 0x28;
    cVar5 = FUN_1417a563a(&local_1d8,lVar7);
    if (cVar5 != '\0') {
      if ((*(int *)(lVar3 + 0x29c) == 0) && (*(char *)(lVar3 + 0x298) != '\0')) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = 0x400000000;
        FUN_14766761e(&local_1d8,param_2,local_110);
        puVar14 = (undefined1 *)0x0;
        if ((int)local_e8 != 0) {
          puVar14 = local_110;
        }
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_14330356b;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_143311b0b);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_14330356b:
          puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar13 + 0x31);
          uVar11 = puVar9[0x12];
          if (puVar12 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar6 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar12 = (uint *)(puVar13 + 0x31);
            uVar11 = 0;
            if (puVar12 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_1433035ed;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_1433035ed:
        *(uint **)(puVar9 + 0x10) = puVar12;
        puVar9[0x12] = uVar11;
        FUN_1447247dc(puVar13,puVar14);
        *puVar13 = &PTR_FUN_14a4d6f70;
        FUN_1476675a0(puVar13 + 0x15,lVar7,&local_1d8);
        uVar11 = *(uint *)((longlong)puVar13 + 0xb4);
        if (((ulonglong)uVar11 & 0xff) == 0xff) {
          uVar6 = uVar11 >> 10 & 3;
          iVar15 = 0;
          if ((uVar11 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar15 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar15 = (uVar11 >> 7 & 2 | uVar11 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar11 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar13[0xf] = uVar10;
        puVar13[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar13 + 0x1c) = iVar15;
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
          UNLOCK();
        }
        local_1db = 1;
        local_1e8 = puVar13;
        FUN_1447439e4(puVar13);
        if (param_3 != 0) {
          FUN_1476676fa(&local_1d8,&local_1e8,param_3);
        }
        puVar14 = local_110;
        if (local_f0 != (undefined1 *)0x0) {
          puVar14 = local_f0;
        }
        FUN_144717c65(puVar14,local_e8 & 0xffffffff);
        if (local_f0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
      }
      else {
        FUN_1476675a0(local_110,lVar7,&local_1d8);
        FUN_143311ca4(local_110);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330386a FUN_14330386a body=2525 status=ok
// SIG undefined FUN_14330386a(void)

void FUN_14330386a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 **local_220;
  undefined1 *local_218;
  uint *local_210;
  uint *local_208;
  undefined2 *local_200;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e4;
  undefined2 *local_1e0;
  undefined4 *local_1d8;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined4 local_1c8;
  undefined1 local_1c3;
  undefined4 local_1c0;
  undefined1 local_1bc;
  ushort local_1b6;
  int local_1b4;
  longlong *local_1b0;
  longlong *local_1a8;
  undefined1 *local_1a0;
  undefined4 **local_198;
  undefined4 *local_190;
  undefined2 local_182;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined1 local_168 [80];
  longlong local_118;
  undefined1 local_108 [32];
  int local_e8;
  undefined1 local_e0 [32];
  int local_c0;
  code *local_b8;
  byte local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  uint local_98 [8];
  undefined8 local_78;
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1f0 = param_1;
  local_1f8 = FUN_14009d2a0();
  puVar13 = &DAT_14cab5a38;
  if (DAT_14cab5a50 != (undefined2 *)0x0) {
    puVar13 = DAT_14cab5a50;
  }
  if ((longlong)DAT_14cab5a58 != 0) {
    local_200 = puVar13 + (longlong)DAT_14cab5a58 * 3;
    do {
      local_1cc = *puVar13;
      local_1ca = *(undefined2 *)(local_1f8 + 0x54);
      local_1c8 = *(undefined4 *)(puVar13 + 1);
      local_1c3 = 0;
      local_1c0 = 0x6ff;
      local_1bc = 0;
      local_182 = *(undefined2 *)(local_1f8 + 0x130);
      local_1e0 = &local_182;
      local_1d8 = &local_180;
      FUN_1417a2e78(&local_1cc,&local_180,&local_1e0);
      local_1b6 = (ushort)uStack_178 & 0xfdff;
      local_b8 = FUN_144adeb86;
      local_b0 = 3;
      if (((((ushort)local_180 != -1) && (local_180._2_2_ != -1)) && ((ushort)uStack_17c != -1)) &&
         ((uStack_17c._2_2_ != -1 &&
          (cVar5 = FUN_1417a581c(&local_180,*(longlong *)(local_1f0 + 0x28) + 0x28), cVar5 != '\0'))
         )) {
        plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14a4d6f80;
        plVar7[2] = (longlong)&PTR_FUN_14a4d6f98;
        *(uint *)((longlong)plVar7 + 0x1c) = local_180;
        *(uint *)(plVar7 + 4) = uStack_17c;
        *(undefined4 *)((longlong)plVar7 + 0x24) = uStack_178;
        *(undefined4 *)(plVar7 + 5) = uStack_174;
        *(undefined4 *)((longlong)plVar7 + 0x2c) = local_170;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
        local_50 = 0;
        uVar6 = local_e8 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar6) {
          if (uVar6 < 0x101) {
            uVar6 = 0x100;
          }
          local_50 = (ulonglong)uVar6 << 0x20;
          FUN_14497ddce(local_70,0);
        }
        local_50 = CONCAT44(local_50._4_4_,local_e8);
        if (local_e8 != 0) {
          memcpy(local_70,local_108,(ulonglong)(local_e8 + 0x1fU >> 3 & 0xfffffffc));
        }
        local_78 = 0;
        uVar6 = local_c0 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar6) {
          if (uVar6 < 0x101) {
            uVar6 = 0x100;
          }
          local_78 = (ulonglong)uVar6 << 0x20;
          FUN_14497ddce(local_98,0);
        }
        local_78 = CONCAT44(local_78._4_4_,local_c0);
        if (local_c0 != 0) {
          memcpy(local_98,local_e0,(ulonglong)(local_c0 + 0x1fU >> 3 & 0xfffffffc));
        }
        uVar4 = local_50;
        uVar6 = local_180;
        uVar3 = (ushort)local_180;
        iVar9 = (local_180 & 0xffff) + 1;
        iVar12 = iVar9 - (int)local_50;
        if (iVar12 != 0 && (int)local_50 <= iVar9) {
          if ((int)local_50 == 0) {
LAB_143303b70:
            if (local_50._4_4_ <= (int)(local_180 & 0xffff)) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar4 & 0xffffffff);
              iVar9 = (int)local_50 + iVar12;
            }
            iVar10 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar9);
            if (iVar9 % 0x20 != 0) {
              bVar8 = -(char)(iVar9 % 0x20);
              local_70[iVar10 >> 5] = (local_70[iVar10 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            }
          }
          else {
            iVar10 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar10 = (int)local_50 + -1;
            }
            if (iVar10 >> 5 != (uint)((ushort)local_180 >> 5)) goto LAB_143303b70;
            local_50 = CONCAT44(local_50._4_4_,iVar9);
          }
          FUN_1447c45ca(local_70,uVar4 & 0xffffffff,iVar12,0);
        }
        uVar11 = local_180;
        local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar6 & 0x1f);
        uVar4 = local_50;
        uVar3 = local_180._2_2_;
        iVar9 = local_180._2_2_ + 1;
        iVar12 = iVar9 - (int)local_50;
        if (iVar12 != 0 && (int)local_50 <= iVar9) {
          if ((int)local_50 == 0) {
LAB_143303c19:
            if (local_50._4_4_ <= (int)(uint)local_180._2_2_) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar4 & 0xffffffff);
              iVar9 = (int)local_50 + iVar12;
            }
            iVar10 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar9);
            if (iVar9 % 0x20 != 0) {
              bVar8 = -(char)(iVar9 % 0x20);
              local_70[iVar10 >> 5] = (local_70[iVar10 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            }
          }
          else {
            iVar10 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar10 = (int)local_50 + -1;
            }
            if (iVar10 >> 5 != (uint)(local_180._2_2_ >> 5)) goto LAB_143303c19;
            local_50 = CONCAT44(local_50._4_4_,iVar9);
          }
          FUN_1447c45ca(local_70,uVar4 & 0xffffffff,iVar12,0);
        }
        uVar6 = uStack_17c;
        local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)(uVar11 >> 0x10) & 0x1f);
        uVar4 = local_50;
        uVar3 = (ushort)uStack_17c;
        uVar11 = uStack_17c & 0xffff;
        iVar9 = (uStack_17c & 0xffff) + 1;
        iVar12 = iVar9 - (int)local_50;
        if (iVar12 != 0 && (int)local_50 <= iVar9) {
          if ((int)local_50 == 0) {
LAB_143303cc8:
            if (local_50._4_4_ <= (int)uVar11) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar4 & 0xffffffff);
              iVar9 = (int)local_50 + iVar12;
            }
            iVar10 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar9);
            if (iVar9 % 0x20 != 0) {
              bVar8 = -(char)(iVar9 % 0x20);
              local_70[iVar10 >> 5] = (local_70[iVar10 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            }
          }
          else {
            iVar10 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar10 = (int)local_50 + -1;
            }
            if (iVar10 >> 5 != (uint)((ushort)uStack_17c >> 5)) goto LAB_143303cc8;
            local_50 = CONCAT44(local_50._4_4_,iVar9);
          }
          FUN_1447c45ca(local_70,uVar4 & 0xffffffff,iVar12,0);
          uVar11 = uStack_17c & 0xffff;
          iVar9 = (uStack_17c & 0xffff) + 1;
        }
        uVar4 = local_78;
        local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar6 & 0x1f);
        iVar12 = iVar9 - (int)local_78;
        if (iVar12 != 0 && (int)local_78 <= iVar9) {
          if ((int)local_78 == 0) {
LAB_143303d8e:
            if (local_78._4_4_ <= (int)uVar11) {
              local_78 = CONCAT44(0x100,(int)local_78);
              FUN_14497ddce(local_98,uVar4 & 0xffffffff);
              iVar9 = (int)local_78 + iVar12;
            }
            iVar10 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            local_78 = CONCAT44(local_78._4_4_,iVar9);
            if (iVar9 % 0x20 != 0) {
              bVar8 = -(char)(iVar9 % 0x20);
              local_98[iVar10 >> 5] = (local_98[iVar10 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            }
          }
          else {
            iVar10 = (int)local_78 + 0x1e;
            if (-1 < (int)local_78 + -1) {
              iVar10 = (int)local_78 + -1;
            }
            if (iVar10 >> 5 != (uint)((ushort)uStack_17c >> 5)) goto LAB_143303d8e;
            local_78 = CONCAT44(local_78._4_4_,iVar9);
          }
          FUN_1447c45ca(local_98,uVar4 & 0xffffffff,iVar12,0);
        }
        uVar6 = uStack_17c;
        local_98[uVar11 >> 5] = local_98[uVar11 >> 5] | 1 << ((byte)uVar11 & 0x1f);
        uVar4 = local_50;
        uVar3 = uStack_17c._2_2_;
        uVar11 = (uint)uStack_17c._2_2_;
        iVar9 = uStack_17c._2_2_ + 1;
        iVar12 = iVar9 - (int)local_50;
        if (iVar12 != 0 && (int)local_50 <= iVar9) {
          if ((int)local_50 == 0) {
LAB_143303e41:
            if (local_50._4_4_ <= (int)uVar11) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar4 & 0xffffffff);
              iVar9 = (int)local_50 + iVar12;
            }
            iVar10 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar9);
            if (iVar9 % 0x20 != 0) {
              bVar8 = -(char)(iVar9 % 0x20);
              local_70[iVar10 >> 5] = (local_70[iVar10 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            }
          }
          else {
            iVar10 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar10 = (int)local_50 + -1;
            }
            if (iVar10 >> 5 != (uint)(uStack_17c._2_2_ >> 5)) goto LAB_143303e41;
            local_50 = CONCAT44(local_50._4_4_,iVar9);
          }
          FUN_1447c45ca(local_70,uVar4 & 0xffffffff,iVar12,0);
          uVar11 = (uint)uStack_17c._2_2_;
          iVar9 = uStack_17c._2_2_ + 1;
        }
        uVar4 = local_78;
        local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)(uVar6 >> 0x10) & 0x1f);
        iVar12 = iVar9 - (int)local_78;
        if (iVar12 != 0 && (int)local_78 <= iVar9) {
          if ((int)local_78 == 0) {
LAB_143303f06:
            if (local_78._4_4_ <= (int)uVar11) {
              local_78 = CONCAT44(0x100,(int)local_78);
              FUN_14497ddce(local_98,uVar4 & 0xffffffff);
              iVar9 = (int)local_78 + iVar12;
            }
            iVar10 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar10 = iVar9;
            }
            local_78 = CONCAT44(local_78._4_4_,iVar9);
            if (iVar9 % 0x20 != 0) {
              bVar8 = -(char)(iVar9 % 0x20);
              local_98[iVar10 >> 5] = (local_98[iVar10 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            }
          }
          else {
            iVar10 = (int)local_78 + 0x1e;
            if (-1 < (int)local_78 + -1) {
              iVar10 = (int)local_78 + -1;
            }
            if (iVar10 >> 5 != (uint)(uStack_17c._2_2_ >> 5)) goto LAB_143303f06;
            local_78 = CONCAT44(local_78._4_4_,iVar9);
          }
          FUN_1447c45ca(local_98,uVar4 & 0xffffffff,iVar12,0);
        }
        local_98[uVar11 >> 5] = local_98[uVar11 >> 5] | 1 << ((byte)uVar11 & 0x1f);
        local_198 = &local_190;
        local_1a0 = &LAB_1403f9508;
        local_a0 = local_b0;
        local_190 = &local_180;
        (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(local_a8,&local_b8);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        local_208 = local_98;
        local_210 = local_70;
        local_218 = local_168;
        local_220 = &local_1a0;
        local_228 = local_a8;
        local_1b0 = plVar7 + 2;
        local_1a8 = plVar7;
        FUN_1406ac01c(param_2,&local_1e4,&local_1b6);
        if (local_1e4 == -1) {
          if ((local_1b6 & 0x400) != 0) {
            FUN_145c71394(param_2,&local_1b4);
            local_1e4 = local_1b4;
            if (local_1b4 != -1) goto LAB_143304050;
          }
        }
        else {
LAB_143304050:
          FUN_1407ce0e2(param_2,local_1e4,0xffffffff);
          FUN_1407cdf34(param_2,local_1e4,0xffffffff);
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
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      puVar13 = puVar13 + 3;
    } while (puVar13 != local_200);
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143304248 FUN_143304248 body=2237 status=ok
// SIG undefined FUN_143304248(void)

void FUN_143304248(longlong param_1,undefined8 param_2,ushort *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ushort uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  ushort *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined1 auStack_288 [32];
  ushort *local_268;
  undefined8 *local_260;
  longlong local_258;
  longlong local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined2 *local_230;
  ushort *local_228;
  undefined8 *local_220;
  undefined1 local_217;
  undefined2 local_216;
  ushort local_214 [2];
  undefined4 local_210;
  undefined1 local_20b;
  undefined4 local_208;
  undefined1 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  ushort local_1f4;
  longlong local_198;
  uint local_138 [8];
  undefined8 local_118;
  ulonglong local_110 [4];
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  local_238 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (local_238 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_238 + 1) = (int)local_238[1] + 1;
    UNLOCK();
  }
  local_258 = param_1;
  lVar10 = FUN_14009d2a0();
  cVar8 = *(char *)(lVar22 + 0x7c);
  if (cVar8 == '\x10') {
    puVar21 = &DAT_14cab5a38;
    if (DAT_14cab5a50 != (ushort *)0x0) {
      puVar21 = DAT_14cab5a50;
    }
    local_268 = param_3;
    local_240 = param_2;
    if ((longlong)DAT_14cab5a58 != 0) {
      puVar4 = puVar21 + (longlong)DAT_14cab5a58 * 3;
      lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar3 = (undefined8 *)(lVar22 + 0x308);
      local_260 = (undefined8 *)(lVar22 + 0x310);
      local_248 = (longlong *)(lVar22 + 0x2b8);
      local_250 = 0x527800b400;
      do {
        local_214[0] = *puVar21;
        local_214[1] = *(ushort *)(lVar10 + 0x54);
        local_210 = *(undefined4 *)(puVar21 + 1);
        local_20b = 0;
        local_208 = 0x6ff;
        local_204 = 0;
        local_216 = *(undefined2 *)(lVar10 + 0x130);
        local_230 = &local_216;
        local_228 = local_214;
        FUN_1417a2e78(local_214,&local_200,&local_230);
        if (((((short)local_200 == -1) || (local_200._2_2_ == -1)) || (local_200._4_2_ == -1)) ||
           (local_200._6_2_ == -1)) {
          local_220 = (undefined8 *)0x0;
        }
        else {
          lVar6 = *(longlong *)(local_258 + 0x28);
          lVar22 = lVar6 + 0x28;
          cVar8 = FUN_1417a581c(&local_200,lVar22);
          if (cVar8 != '\0') {
            if ((*(int *)(lVar6 + 0x29c) == 0) && (*(char *)(lVar6 + 0x298) != '\0')) {
              local_118 = (uint *)0x0;
              local_110[0] = 0x400000000;
              FUN_147667b5e(&local_200,local_240,local_138);
              puVar17 = local_138;
              if ((int)local_110[0] == 0) {
                puVar17 = (uint *)0x0;
              }
              puVar12 = (uint *)*puVar3;
              if (puVar12 != (uint *)0x0) goto LAB_1433047d2;
              while( true ) {
                uVar16 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar16 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar16 | 1;
                  __tlregdtor(&LAB_143311b0b);
                }
                puVar11 = (undefined4 *)*local_260;
                *local_260 = 0;
                if (puVar11 == (undefined4 *)0x0) {
                  puVar11 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar11 = 0xffffffff;
                *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                puVar11[0x12] = 0;
                *puVar3 = puVar11;
                FUN_140217a48(puVar3);
                puVar12 = (uint *)*puVar3;
LAB_1433047d2:
                puVar24 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar19 = (uint *)(puVar24 + 0x31);
                uVar16 = puVar12[0x12];
                if (puVar19 <= puVar12 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                  LOCK();
                  uVar9 = *puVar12;
                  *puVar12 = *puVar12 + uVar16 + 1;
                  UNLOCK();
                  if ((uVar9 ^ uVar16) != 0xffffffff) break;
                  puVar12 = (uint *)*puVar3;
                  *puVar12 = 0xffffffff;
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                  puVar12[0x12] = 0;
                  *puVar3 = puVar12;
                  puVar24 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                  puVar19 = (uint *)(puVar24 + 0x31);
                  uVar16 = 0;
                  if (puVar19 <= puVar12 + 0x4000) {
                    uVar16 = 1;
                    goto LAB_143304854;
                  }
                }
              }
              uVar16 = uVar16 + 1;
LAB_143304854:
              *(uint **)(puVar12 + 0x10) = puVar19;
              puVar12[0x12] = uVar16;
              FUN_1447247dc(puVar24,puVar17);
              *puVar24 = &PTR_FUN_14a4d6fa0;
              FUN_147667ae0(puVar24 + 0x15,lVar22,&local_200);
              uVar16 = *(uint *)((longlong)puVar24 + 0xb4);
              if (((ulonglong)uVar16 & 0xff) == 0xff) {
                uVar9 = uVar16 >> 10 & 3;
                iVar15 = 0;
                if ((uVar16 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
                  iVar15 = 0;
                }
                else {
                  uVar23 = 2;
                }
              }
              else {
                iVar15 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
                uVar23 = 5;
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
              lVar22 = *local_248;
              if (lVar22 == 0) {
                if ((char)uVar23 == '\x06') {
                  uVar23 = 1;
                }
                uVar13 = 0;
              }
              else {
                if ((char)uVar23 == '\x06') {
                  uVar23 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
                }
                uVar13 = *(undefined8 *)(lVar22 + 0x30);
              }
              puVar24[0xf] = uVar13;
              puVar24[0x10] = (uVar23 << 0x3b) + local_250 | 0xc000000000000000;
              *(int *)((longlong)puVar24 + 0x1c) = iVar15;
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                UNLOCK();
              }
              local_217 = 1;
              local_220 = puVar24;
              FUN_1447439e4(puVar24,&local_217);
              if (local_268 != (ushort *)0x0) {
                FUN_147667c5e(&local_200,&local_220,local_268);
              }
              puVar17 = local_118;
              if (local_118 == (uint *)0x0) {
                puVar17 = local_138;
              }
              FUN_144717c65(puVar17,local_110[0] & 0xffffffff);
              if (local_118 != (uint *)0x0) {
                FUN_1400020a8();
              }
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(puVar24 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar24)(puVar24,1);
                }
              }
              goto LAB_1433046a3;
            }
            FUN_147667ae0(local_138,lVar22,&local_200);
            FUN_143311f44(local_138);
            if (local_d0 != 0) {
              FUN_1400020a8();
            }
          }
          local_220 = (undefined8 *)0x0;
        }
LAB_1433046a3:
        if (local_198 != 0) {
          FUN_1400020a8();
        }
        puVar21 = puVar21 + 3;
      } while (puVar21 != puVar4);
    }
  }
  else if (cVar8 == '\x04') {
    puVar21 = &DAT_14cab5a38;
    if (DAT_14cab5a50 != (ushort *)0x0) {
      puVar21 = DAT_14cab5a50;
    }
    if ((longlong)DAT_14cab5a58 != 0) {
      local_268 = puVar21 + (longlong)DAT_14cab5a58 * 3;
      do {
        local_200 = &PTR_FUN_14a4d6b00;
        local_1f4 = puVar21[2];
        local_1f8 = *(undefined4 *)puVar21;
        local_118 = (uint *)0x10000000000;
        local_f0 = 0x10000000000;
        local_e8 = 0;
        uStack_e0 = 0;
        local_214[0] = *puVar21;
        local_214[1] = puVar21[2];
        local_210 = CONCAT22(local_210._2_2_,*(undefined2 *)(lVar10 + 0x11a));
        lVar22 = 0;
        do {
          puVar17 = local_118;
          uVar5 = *(ushort *)((longlong)local_214 + lVar22);
          iVar15 = uVar5 + 1;
          iVar20 = iVar15 - (int)local_118;
          if (iVar20 != 0 && (int)local_118 <= iVar15) {
            if ((int)local_118 == 0) {
LAB_14330439a:
              if (local_118._4_4_ <= (int)(uint)uVar5) {
                local_118 = (uint *)CONCAT44(0x100,(int)local_118);
                FUN_14497ddce(local_138,(ulonglong)puVar17 & 0xffffffff);
                iVar15 = (int)local_118 + iVar20;
              }
              iVar18 = iVar15 + 0x1f;
              if (-1 < iVar15) {
                iVar18 = iVar15;
              }
              local_118 = (uint *)CONCAT44(local_118._4_4_,iVar15);
              if (iVar15 % 0x20 != 0) {
                bVar14 = -(char)(iVar15 % 0x20);
                local_138[iVar18 >> 5] =
                     (local_138[iVar18 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
              }
            }
            else {
              iVar18 = (int)local_118 + 0x1e;
              if (-1 < (int)local_118 + -1) {
                iVar18 = (int)local_118 + -1;
              }
              if (iVar18 >> 5 != (uint)(uVar5 >> 5)) goto LAB_14330439a;
              local_118 = (uint *)CONCAT44(local_118._4_4_,iVar15);
            }
            FUN_1447c45ca(local_138,(ulonglong)puVar17 & 0xffffffff,iVar20,0);
          }
          local_138[uVar5 >> 5] = local_138[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
          uVar23 = local_f0;
          lVar22 = lVar22 + 2;
        } while (lVar22 != 6);
        uVar5 = *(ushort *)(lVar10 + 0x134);
        iVar15 = uVar5 + 1;
        iVar20 = iVar15 - (int)local_f0;
        if (iVar20 != 0 && (int)local_f0 <= iVar15) {
          if ((int)local_f0 == 0) {
LAB_14330446b:
            if (local_f0._4_4_ <= (int)(uint)uVar5) {
              local_f0 = CONCAT44(0x100,(int)local_f0);
              FUN_14497ddce(local_110,uVar23 & 0xffffffff);
              iVar15 = (int)local_f0 + iVar20;
            }
            iVar18 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar18 = iVar15;
            }
            local_f0 = CONCAT44(local_f0._4_4_,iVar15);
            if (iVar15 % 0x20 != 0) {
              bVar14 = -(char)(iVar15 % 0x20);
              *(uint *)((longlong)local_110 + (longlong)(iVar18 >> 5) * 4) =
                   (uint)(*(int *)((longlong)local_110 + (longlong)(iVar18 >> 5) * 4) <<
                         (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            }
          }
          else {
            iVar18 = (int)local_f0 + 0x1e;
            if (-1 < (int)local_f0 + -1) {
              iVar18 = (int)local_f0 + -1;
            }
            if (iVar18 >> 5 != (uint)(uVar5 >> 5)) goto LAB_14330446b;
            local_f0 = CONCAT44(local_f0._4_4_,iVar15);
          }
          FUN_1447c45ca(local_110,uVar23 & 0xffffffff,iVar20,0);
        }
        puVar17 = (uint *)((longlong)local_110 + (ulonglong)(uVar5 >> 5) * 4);
        *puVar17 = *puVar17 | 1 << ((byte)uVar5 & 0x1f);
        FUN_1410fbbac(*(longlong *)(local_258 + 0x28) + 0x28,local_138,&local_200);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        puVar21 = puVar21 + 3;
      } while (puVar21 != local_268);
    }
  }
  plVar7 = local_238;
  if (local_238 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_238 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_238)(local_238);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


