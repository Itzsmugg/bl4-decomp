// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406b60b4 FUN_1406b60b4 body=64 status=ok
// SIG undefined FUN_1406b60b4(void)

void FUN_1406b60b4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1406b63a2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1406b60f4 FUN_1406b60f4 body=315 status=ok
// SIG undefined FUN_1406b60f4(void)

void FUN_1406b60f4(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1406b615e;
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
LAB_1406b615e:
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



// FUNCTION 1406b6230 FUN_1406b6230 body=370 status=ok
// SIG undefined FUN_1406b6230(void)

void FUN_1406b6230(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b62b9;
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
LAB_1406b62b9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1406b63a2 FUN_1406b63a2 body=308 status=ok
// SIG undefined FUN_1406b63a2(void)

ulonglong FUN_1406b63a2(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
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
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1406b6439;
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
LAB_1406b6439:
      uVar3 = uVar3 >> 3;
    }
  }
  return uVar3;
}



// FUNCTION 1406b64d6 FUN_1406b64d6 body=373 status=ok
// SIG undefined FUN_1406b64d6(void)

void FUN_1406b64d6(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b655f;
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
LAB_1406b655f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 1406b664c FUN_1406b664c body=628 status=ok
// SIG undefined FUN_1406b664c(void)

void FUN_1406b664c(longlong *param_1)

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
  int iVar12;
  longlong lVar13;
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
    if ((int)uVar7 < 1) goto LAB_1406b66be;
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
LAB_1406b66be:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
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
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1406b68c0 FUN_1406b68c0 body=154 status=ok
// SIG undefined FUN_1406b68c0(void)

longlong FUN_1406b68c0(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_1406b6915;
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
LAB_1406b6915:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140ab2276(param_1,param_2);
  return param_1;
}



// FUNCTION 1406b695a FUN_1406b695a body=12 status=ok
// SIG undefined FUN_1406b695a(void)

void FUN_1406b695a(longlong param_1)

{
  FUN_1406b6966(param_1 + 0x28,param_1);
  return;
}



// FUNCTION 1406b6966 FUN_1406b6966 body=162 status=ok
// SIG undefined FUN_1406b6966(void)

void FUN_1406b6966(longlong *param_1,undefined8 param_2)

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
        goto LAB_1406b69f3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1406b69f3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1406b6a08 FUN_1406b6a08 body=804 status=ok
// SIG undefined FUN_1406b6a08(void)

int * FUN_1406b6a08(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1447711aa(param_1,iVar17);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar7 = iVar18 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar12 = iVar18 + 1;
    iVar16 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar16 = iVar18;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar7 = iVar18;
        }
        else {
          uVar11 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar11) {
              uVar8 = uVar11;
            }
          }
          else {
            uVar8 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar8 << 2,0);
          iVar7 = (int)(uVar14 >> 2);
          iVar12 = -0x20;
          if ((int)uVar11 <= iVar7) {
            iVar12 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar13,iVar7);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar7 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar7 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar13;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar7 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar9 = (longlong)iVar17;
    iVar18 = *(int *)(*param_1 + 4 + lVar9 * 0x20);
    *(int *)(param_1 + 6) = iVar18;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar18 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar18 = iVar17;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar18 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
  lVar2 = *param_1;
  lVar9 = lVar9 * 0x20;
  puVar1 = (uint *)(lVar2 + lVar9);
  puVar3 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  iVar18 = *(int *)(puVar3 + 1);
  *(int *)(lVar2 + 8 + lVar9) = iVar18;
  *(undefined8 *)(lVar2 + lVar9) = *puVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar9) = *puVar4;
  *(undefined4 *)(lVar2 + 0x18 + lVar9) = 0xffffffff;
  if (iVar18 == 0) {
    uVar11 = *puVar1;
  }
  else {
    uVar11 = FUN_144a78877(*puVar1,iVar18);
  }
  iVar18 = 1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar8 = 1;
  }
  else {
    iVar7 = FUN_1406b6d2c(param_1,uVar11,puVar1);
    if (iVar7 != -1) {
      lVar9 = *param_1;
      uVar11 = *puVar1;
      uVar8 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined8 *)(lVar9 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(puVar1 + 4);
      puVar1 = (uint *)(lVar9 + (longlong)iVar7 * 0x20);
      *puVar1 = uVar11;
      puVar1[1] = uVar8;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_148922b2c(param_1,iVar17);
      goto LAB_1406b6bad;
    }
    uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (3 < uVar8) {
      uVar14 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar9 & 0x1f);
    }
  }
  iVar7 = iVar17;
  if (((int)uVar8 < 1) || (iVar18 <= (int)param_1[9])) {
    uVar11 = (int)param_1[9] - 1U & uVar11;
    puVar1[7] = uVar11;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar1[6] = *(uint *)((longlong)plVar13 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar18;
    FUN_1406b6d8c(param_1);
  }
LAB_1406b6bad:
  *param_2 = iVar7;
  return param_2;
}



// FUNCTION 1406b6d2c FUN_1406b6d2c body=95 status=ok
// SIG undefined FUN_1406b6d2c(void)

int FUN_1406b6d2c(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 1406b6d8c FUN_1406b6d8c body=703 status=ok
// SIG undefined FUN_1406b6d8c(void)

void FUN_1406b6d8c(longlong *param_1)

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
    if ((int)uVar15 < 1) goto LAB_1406b6df2;
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
LAB_1406b6df2:
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
      iVar11 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar11 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
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
      piVar2 = (int *)(*param_1 + (longlong)iVar12 * 0x20);
      iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar12 * 0x20);
      if (iVar4 == 0) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = FUN_144a78877(*piVar2,iVar4);
      }
      uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar5;
      piVar2[7] = iVar4;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      piVar2[6] = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
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



// FUNCTION 1406b704c FUN_1406b704c body=353 status=ok
// SIG undefined FUN_1406b704c(void)

void FUN_1406b704c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b70d1;
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
LAB_1406b70d1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1406b71ae FUN_1406b71ae body=353 status=ok
// SIG undefined FUN_1406b71ae(void)

void FUN_1406b71ae(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b7233;
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
LAB_1406b7233:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406b7310 FUN_1406b7310 body=804 status=ok
// SIG undefined FUN_1406b7310(void)

void FUN_1406b7310(longlong *param_1)

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
    if ((int)uVar12 < 1) goto LAB_1406b7376;
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
LAB_1406b7376:
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
      lVar8 = (longlong)iVar15 * 0x20;
      uVar2 = *(uint *)(lVar9 + lVar8);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8);
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
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + lVar8 + 0x1c) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + lVar8 + 0x18) =
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



// FUNCTION 1406b7634 FUN_1406b7634 body=353 status=ok
// SIG undefined FUN_1406b7634(void)

void FUN_1406b7634(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b76bb;
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
LAB_1406b76bb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406b7796 FUN_1406b7796 body=691 status=ok
// SIG undefined FUN_1406b7796(void)

void FUN_1406b7796(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1406b77fc;
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
  } while (uVar10 != uVar3);
LAB_1406b77fc:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 1406b7a4a FUN_1406b7a4a body=353 status=ok
// SIG undefined FUN_1406b7a4a(void)

void FUN_1406b7a4a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b7acf;
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
LAB_1406b7acf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406b7cc4 FUN_1406b7cc4 body=308 status=ok
// SIG undefined FUN_1406b7cc4(void)

void FUN_1406b7cc4(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (uint *)*param_2;
  local_68 = *param_1;
  local_50 = (int)param_1[1];
  local_70 = (longlong)local_50;
  lVar3 = *(longlong *)(*(longlong *)(local_68 + 0x60) + local_70 * 8);
  lVar2 = *(longlong *)(lVar3 + 0x20);
  local_78 = (ulonglong)puVar1[6];
  local_80 = (ulonglong)puVar1[5];
  lVar5 = 0;
  lVar3 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar5;
  }
  lVar4 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_a8 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_a8 = lVar5;
  }
  local_a0 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_a0 = lVar5;
  }
  local_98 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_98 = lVar5;
  }
  local_90 = lVar2 + local_80;
  if (local_80 == 0xffffffff) {
    local_90 = lVar5;
  }
  local_4c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_88 = lVar2 + local_78;
  if (local_78 == 0xffffffff) {
    local_88 = lVar5;
  }
  local_60 = param_1;
  local_58 = local_68;
  FUN_1406b7dfa(param_3 + 8,&local_58,lVar3,lVar4);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b7dfa FUN_1406b7dfa body=4739 status=ok
// SIG undefined FUN_1406b7dfa(void)

void FUN_1406b7dfa(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  byte bVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  void *pvVar27;
  undefined8 *puVar28;
  longlong lVar29;
  undefined8 *puVar30;
  int iVar31;
  ulonglong uVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  longlong lVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_5a8 [47];
  bool local_579;
  uint local_578;
  undefined2 local_572;
  longlong *local_570;
  longlong local_568;
  ulonglong local_560;
  longlong *local_558;
  longlong local_550;
  ulonglong local_548;
  longlong *local_540;
  ulonglong local_538;
  uint local_52c;
  uint *local_528;
  undefined4 *local_520;
  longlong local_518;
  longlong *local_510;
  ulonglong local_508;
  longlong local_500;
  longlong *local_4f8;
  longlong local_4f0;
  ulonglong local_4e8;
  float local_4dc;
  longlong *local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  longlong local_4c0;
  longlong lStack_4b8;
  longlong local_4b0;
  longlong lStack_4a8;
  undefined4 local_4a0;
  longlong local_498;
  undefined8 uStack_490;
  void *local_488;
  ulonglong uStack_480;
  undefined1 local_478;
  void *local_470;
  ulonglong uStack_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  byte bStack_454;
  undefined8 local_450;
  undefined2 uStack_448;
  undefined2 uStack_446;
  undefined2 uStack_444;
  undefined2 uStack_442;
  double local_440;
  float fStack_438;
  float fStack_434;
  int iStack_430;
  byte bStack_42c;
  undefined4 local_36c;
  undefined1 local_368 [364];
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined3 local_100;
  undefined5 uStack_fd;
  undefined4 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  local_518 = param_4;
  local_4f0 = param_3;
  local_500 = FUN_14009d2a0();
  local_508 = (ulonglong)
              *(ushort *)
               (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0xe)
  ;
  local_4f8 = param_2;
  if (local_508 != 0) {
    uVar32 = 0;
    local_510 = param_1;
    do {
      uVar40 = 0;
      uVar41 = 0x3ff00000;
      if (param_9 != 0) {
        uVar2 = *(undefined8 *)(param_9 + uVar32 * 8);
        uVar40 = (undefined4)uVar2;
        uVar41 = (undefined4)((ulonglong)uVar2 >> 0x20);
      }
      uVar3 = *(ushort *)(local_500 + 0x10a);
      if (uVar3 == 0xffff) {
LAB_1406b8d06:
        local_578 = 0;
      }
      else {
        lVar20 = (longlong)(int)local_4f8[1] * 0x28 + *(longlong *)(*local_4f8 + 8);
        uVar12 = *(uint *)(lVar20 + 0x20);
        if (uVar12 == uVar3 || (int)uVar12 < (int)(uint)uVar3) goto LAB_1406b8d06;
        local_578 = (uint)CONCAT11((char)(uVar3 >> 8),
                                   (*(uint *)(lVar20 + (ulonglong)(uVar3 >> 5) * 4) >>
                                    (uVar3 & 0x1f) & 1) != 0);
      }
      lVar35 = (ulonglong)*(ushort *)(param_5 + uVar32 * 4) * 0x128;
      lVar29 = *(longlong *)(*param_1 + 8);
      lVar20 = lVar29 + lVar35;
      if (param_8 == 0) {
        uVar12 = *(uint *)(lVar29 + 0x8c + lVar35);
        uVar16 = 0;
        if (SBORROW4(0,uVar12)) {
          puVar15 = (uint *)(lVar20 + 0x6c);
          if (*(int *)(lVar29 + 0x88 + lVar35) == 0) {
            puVar15 = (uint *)(lVar20 + 0x78);
          }
          goto LAB_1406b7fb2;
        }
      }
      else {
        puVar15 = (uint *)(param_8 + uVar32 * 8);
LAB_1406b7fb2:
        uVar12 = *puVar15;
        uVar16 = (ulonglong)puVar15[1];
      }
      plVar21 = *(longlong **)(param_6 + uVar32 * 8);
      if (plVar21 != (longlong *)0x0) {
        local_572 = *(undefined2 *)(local_4f0 + uVar32 * 2);
        plVar33 = *(longlong **)(param_7 + uVar32 * 8);
        if (((*(uint *)(plVar21 + 1) >> 0x1e & 1) == 0) && (plVar33[0x20] != 0)) {
          local_52c = uVar12;
          local_4e8 = uVar16;
          dVar8 = (double)(**(code **)(*plVar33 + 0x368))
                                    (plVar33,(ulonglong)uVar12 | uVar16 << 0x20,
                                     *(undefined8 *)(lVar29 + 0x80 + lVar35));
          puVar34 = (undefined8 *)(lVar20 + 0x78);
          if (*(int *)(lVar29 + 0x88 + lVar35) == 0) {
            puVar34 = (undefined8 *)(lVar20 + 0x6c);
          }
          dVar9 = (double)(**(code **)(*plVar33 + 0x368))
                                    (plVar33,*puVar34,*(undefined8 *)(lVar29 + 0x80 + lVar35));
          lVar5 = *(longlong *)(*param_1 + 8);
          lVar24 = (ulonglong)*(ushort *)(local_518 + uVar32 * 4) * 0x128;
          if ((*(byte *)(lVar5 + 0xe4 + lVar24) & 1) == 0) {
            fVar37 = *(float *)(lVar5 + 0x7c + lVar24) - *(float *)(lVar5 + 0x70 + lVar24);
            auVar39 = roundps(ZEXT416((uint)fVar37),ZEXT416((uint)fVar37),1);
            iVar11 = (int)auVar39._0_4_ +
                     (*(int *)(lVar5 + 0x78 + lVar24) - *(int *)(lVar5 + 0x6c + lVar24));
            fVar37 = (fVar37 - auVar39._0_4_) + 0.5 + -0.5;
            if (0.99999994 <= fVar37) {
              fVar37 = 0.99999994;
            }
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
          }
          else {
            fVar37 = 0.0;
            iVar11 = 0;
          }
          uVar12 = *(uint *)(lVar29 + 0xd8 + lVar35);
          local_548 = (ulonglong)uVar12;
          if (uVar12 - 2 < 3) {
            local_579 = true;
          }
          else {
            lVar5 = *(longlong *)(lVar5 + 0x80 + lVar24);
            local_579 = uVar12 != 0 &&
                        ((float)((longlong)iVar11 * (lVar5 >> 0x20)) +
                        (float)(int)((ulonglong)lVar5 >> 0x20) * fVar37) / (float)(int)lVar5 == 0.0;
          }
          local_550 = lVar29;
          local_520 = (undefined4 *)(lVar20 + 0x68);
          lVar20 = (**(code **)(*plVar21 + 0x180))(plVar21);
          if (lVar20 != 0) {
            (**(code **)(*plVar21 + 0x180))(plVar21);
          }
          plVar6 = (longlong *)param_1[1];
          uVar12 = ((uint)((ulonglong)plVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar21 >> 4)) *
                   -0x7a143595;
          uVar13 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar13 = uVar13 >> 0x10 ^ uVar13;
          local_570 = (longlong *)CONCAT44(local_570._4_4_,uVar13);
          uVar12 = *(uint *)(plVar6 + 1);
          uVar16 = (ulonglong)uVar12;
          uVar26 = *(uint *)((longlong)plVar6 + 0x34);
          local_568 = lVar35;
          local_558 = plVar33;
          if (uVar12 != uVar26) {
            plVar17 = plVar6 + 7;
            if ((longlong *)plVar6[8] != (longlong *)0x0) {
              plVar17 = (longlong *)plVar6[8];
            }
            iVar11 = *(int *)((longlong)plVar17 + (ulonglong)((int)plVar6[9] - 1U & uVar13) * 4);
            if (iVar11 != -1) {
              do {
                lVar20 = *plVar6 + (longlong)iVar11 * 0x3f0;
                if (*(longlong **)(*plVar6 + (longlong)iVar11 * 0x3f0) == plVar21) {
                  if (lVar20 != 0) goto LAB_1406b8445;
                  break;
                }
                iVar11 = *(int *)(lVar20 + 0x3e0);
              } while (iVar11 != -1);
            }
          }
          local_538 = uVar32;
          if (uVar26 == 0) {
            *(uint *)(plVar6 + 1) = uVar12 + 1;
            if (*(uint *)((longlong)plVar6 + 0xc) == uVar12) {
              FUN_1406b911c(plVar6,uVar12);
            }
            iVar11 = (int)plVar6[5];
            if (iVar11 == 0) {
              iVar14 = -1;
            }
            else {
              iVar14 = iVar11 + 0x1e;
              if (-1 < iVar11 + -1) {
                iVar14 = iVar11 + -1;
              }
              iVar14 = iVar14 >> 5;
            }
            plVar33 = plVar6 + 2;
            iVar31 = iVar11 + 1;
            iVar19 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar19 = iVar11;
            }
            if (iVar19 >> 5 == iVar14) {
              *(int *)(plVar6 + 5) = iVar31;
            }
            else {
              if (*(int *)((longlong)plVar6 + 0x2c) <= iVar11) {
                if (iVar11 + 0x20U < 0xa0) {
                  iVar31 = 0x80;
                  iVar14 = iVar11;
                }
                else {
                  uVar26 = iVar11 + 0x20U >> 5;
                  if (*(int *)((longlong)plVar6 + 0x2c) + 0x1fU < 0xa0) {
                    uVar13 = 4;
                    if (4 < uVar26) {
                      uVar13 = uVar26;
                    }
                  }
                  else {
                    uVar13 = (uVar26 * 3 >> 3) + uVar26 + 0x10;
                  }
                  uVar32 = FUN_144a3809e(uVar13 << 2,0);
                  iVar14 = (int)(uVar32 >> 2);
                  iVar31 = -0x20;
                  if ((int)uVar26 <= iVar14) {
                    iVar31 = iVar14 << 5;
                  }
                  iVar14 = (int)plVar6[5];
                }
                *(int *)((longlong)plVar6 + 0x2c) = iVar31;
                FUN_1446efbd8(plVar33,iVar14);
                iVar31 = (int)plVar6[5] + 1;
              }
              iVar14 = iVar31 + 0x1f;
              if (-1 < iVar31) {
                iVar14 = iVar31;
              }
              *(int *)(plVar6 + 5) = iVar31;
              if (iVar31 % 0x20 != 0) {
                plVar17 = (longlong *)plVar6[4];
                if ((longlong *)plVar6[4] == (longlong *)0x0) {
                  plVar17 = plVar33;
                }
                bVar18 = -(char)(iVar31 % 0x20);
                *(uint *)((longlong)plVar17 + (longlong)(iVar14 >> 5) * 4) =
                     (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar14 >> 5) * 4) <<
                           (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
              }
            }
            lVar20 = (longlong)(int)uVar12;
            if ((longlong *)plVar6[4] != (longlong *)0x0) {
              plVar33 = (longlong *)plVar6[4];
            }
            bVar18 = (byte)iVar11 & 0x1f;
            puVar15 = (uint *)((longlong)plVar33 + (longlong)(iVar19 >> 5) * 4);
            *puVar15 = *puVar15 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
          }
          else {
            uVar16 = (ulonglong)*(uint *)(plVar6 + 6);
            lVar20 = (longlong)(int)*(uint *)(plVar6 + 6);
            iVar11 = *(int *)(*plVar6 + 4 + lVar20 * 0x3f0);
            *(int *)(plVar6 + 6) = iVar11;
            *(uint *)((longlong)plVar6 + 0x34) = uVar26 - 1;
            if (uVar26 - 1 != 0) {
              *(undefined4 *)(*plVar6 + (longlong)iVar11 * 0x3f0) = 0xffffffff;
            }
          }
          local_528 = (uint *)(plVar6 + 2);
          iVar11 = (int)uVar16;
          puVar15 = (uint *)plVar6[4];
          if ((uint *)plVar6[4] == (uint *)0x0) {
            puVar15 = local_528;
          }
          iVar14 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar14 = iVar11;
          }
          puVar15[iVar14 >> 5] = puVar15[iVar14 >> 5] | 1 << ((byte)uVar16 & 0x1f);
          lVar29 = *plVar6;
          lVar20 = lVar20 * 0x3f0;
          local_540 = (longlong *)(lVar29 + lVar20);
          local_560 = uVar16;
          memset(&local_4d8,0,0x3d0);
          local_1f0 = 2;
          local_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0x3ff00000;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0x3ff0000000000000;
          uStack_1a0 = 0x3ff0000000000000;
          local_198 = 0x3ff0000000000000;
          uStack_190 = 0;
          pvVar27 = (void *)(lVar29 + 0x10 + lVar20);
          *(longlong **)((longlong)pvVar27 + -0x10) = plVar21;
          memset(pvVar27,0,0x16c);
          *(undefined4 *)((longlong)pvVar27 + 0x16c) = 2;
          local_36c = 2;
          pvVar27 = (void *)(lVar20 + 0x180 + lVar29);
          memcpy(pvVar27,local_368,0x160);
          *(undefined8 *)((longlong)pvVar27 + 0x160) = 0;
          *(undefined8 *)((longlong)pvVar27 + 0x168) = 0x200000000;
          local_1fc = 2;
          puVar34 = (undefined8 *)(lVar29 + 0x2f0 + lVar20);
          puVar28 = &local_1f8;
          puVar30 = puVar34;
          for (lVar20 = 0xe; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar30 = *puVar28;
            puVar28 = puVar28 + 1;
            puVar30 = puVar30 + 1;
          }
          *(undefined1 *)(puVar34 + 0x1a) = 0;
          puVar34[0x1c] = 0;
          FUN_1406b907e(local_368);
          FUN_1406b907e(&local_4d8);
          uVar32 = local_538;
          plVar33 = local_558;
          lVar35 = local_568;
          *(undefined4 *)(puVar34 + 0x1e) = 0xffffffff;
          uVar12 = (int)plVar6[1] - *(int *)((longlong)plVar6 + 0x34);
          iVar11 = (int)local_560;
          if (uVar12 == 1) {
            uVar26 = 1;
          }
          else {
            if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
              plVar21 = plVar6 + 7;
              if ((longlong *)plVar6[8] != (longlong *)0x0) {
                plVar21 = (longlong *)plVar6[8];
              }
              iVar14 = *(int *)((longlong)plVar21 +
                               (ulonglong)((int)plVar6[9] - 1U & (uint)local_570) * 4);
              if (iVar14 != -1) {
                do {
                  pvVar27 = (void *)(*plVar6 + (longlong)iVar14 * 0x3f0);
                  if (*(longlong *)(*plVar6 + (longlong)iVar14 * 0x3f0) == *local_540) {
                    if (*(char *)((longlong)pvVar27 + 0x3c0) == '\x01') {
                      *(undefined1 *)((longlong)pvVar27 + 0x3c0) = 0;
                    }
                    FUN_1406b907e((longlong)pvVar27 + 0x180);
                    FUN_1406b907e((longlong)pvVar27 + 0x10);
                    memmove(pvVar27,local_540,0x3e0);
                    iVar11 = (int)local_560;
                    FUN_1476af156(plVar6);
                    uVar32 = local_538;
                    plVar33 = local_558;
                    lVar35 = local_568;
                    goto LAB_1406b842b;
                  }
                  iVar14 = *(int *)((longlong)pvVar27 + 0x3e0);
                } while (iVar14 != -1);
              }
            }
            uVar26 = 1;
            if (3 < uVar12) {
              uVar16 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
              lVar20 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar26 = 1 << ((byte)lVar20 & 0x1f);
            }
          }
          if (((int)uVar12 < 1) || ((int)uVar26 <= (int)plVar6[9])) {
            uVar12 = (int)plVar6[9] - 1U & (uint)local_570;
            *(uint *)((longlong)local_540 + 0x3e4) = uVar12;
            plVar21 = (longlong *)plVar6[8];
            if ((longlong *)plVar6[8] == (longlong *)0x0) {
              plVar21 = plVar6 + 7;
            }
            *(undefined4 *)(local_540 + 0x7c) =
                 *(undefined4 *)
                  ((longlong)plVar21 + ((longlong)(int)plVar6[9] - 1U & (longlong)(int)uVar12) * 4);
            plVar21 = (longlong *)plVar6[8];
            if ((longlong *)plVar6[8] == (longlong *)0x0) {
              plVar21 = plVar6 + 7;
            }
            *(int *)((longlong)plVar21 + ((longlong)(int)plVar6[9] - 1U & (longlong)(int)uVar12) * 4
                    ) = iVar11;
          }
          else {
            *(uint *)(plVar6 + 9) = uVar26;
            plVar21 = plVar6 + 8;
            if (plVar6[8] != 0) {
              FUN_1446efa72(plVar21,0,0,4);
              uVar26 = *(uint *)(plVar6 + 9);
            }
            local_570 = plVar6 + 7;
            if (uVar26 == 1) {
              if (*plVar21 != 0) {
                FUN_1446efa72(plVar21,0,0,4);
              }
LAB_1406b8923:
              uVar12 = 0;
              do {
                plVar21 = (longlong *)plVar6[8];
                if ((longlong *)plVar6[8] == (longlong *)0x0) {
                  plVar21 = local_570;
                }
                *(undefined4 *)
                 ((longlong)plVar21 + (ulonglong)((int)plVar6[9] + 0x7fffffffU & uVar12) * 4) =
                     0xffffffff;
                uVar12 = uVar12 + 1;
              } while (uVar26 != uVar12);
            }
            else {
              if (uVar26 == 0) goto LAB_1406b842b;
              FUN_1446efa72(plVar21,0,uVar26,4);
              if (0 < (int)uVar26) goto LAB_1406b8923;
            }
            iVar14 = (int)plVar6[5];
            if (iVar14 == 0) {
              uVar16 = 0;
              uVar25 = 1;
              iVar31 = 0;
              iVar19 = 0;
            }
            else {
              puVar15 = (uint *)plVar6[4];
              if ((uint *)plVar6[4] == (uint *)0x0) {
                puVar15 = local_528;
              }
              uVar12 = *puVar15;
              if (uVar12 == 0) {
                iVar31 = iVar14 + 0x1e;
                if (-1 < iVar14 + -1) {
                  iVar31 = iVar14 + -1;
                }
                uVar16 = 0;
                uVar25 = (ulonglong)(uint)(iVar31 >> 5);
                if (iVar31 >> 5 < 1) {
                  uVar25 = uVar16;
                }
                iVar19 = 0;
                do {
                  if (uVar25 == uVar16) goto LAB_1406b842b;
                  iVar19 = iVar19 + 0x20;
                  uVar12 = puVar15[uVar16 + 1];
                  uVar16 = uVar16 + 1;
                } while (uVar12 == 0);
              }
              else {
                uVar16 = 0;
                iVar19 = 0;
              }
              uVar25 = (ulonglong)(-uVar12 & uVar12);
              uVar36 = uVar25 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar31 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar14 <= iVar31) {
                iVar31 = iVar14;
              }
            }
            if (iVar31 < iVar14) {
              uVar12 = 0xffffffff;
              do {
                lVar20 = *plVar6;
                lVar29 = (longlong)iVar31 * 0x3f0;
                uVar26 = ((uint)(*(ulonglong *)(lVar20 + lVar29) >> 0x14) & 0xffff ^
                         (uint)(*(ulonglong *)(lVar20 + lVar29) >> 4)) * -0x7a143595;
                uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                uVar36 = (longlong)(int)(uVar26 >> 0x10 ^ uVar26) & (longlong)(int)plVar6[9] - 1U;
                iVar11 = (int)uVar36;
                *(int *)(lVar20 + 0x3e4 + lVar29) = iVar11;
                plVar21 = (longlong *)plVar6[8];
                if ((longlong *)plVar6[8] == (longlong *)0x0) {
                  plVar21 = local_570;
                }
                *(undefined4 *)(lVar20 + 0x3e0 + lVar29) =
                     *(undefined4 *)
                      ((longlong)plVar21 + ((longlong)(int)plVar6[9] - 1U & uVar36) * 4);
                plVar21 = (longlong *)plVar6[8];
                if ((longlong *)plVar6[8] == (longlong *)0x0) {
                  plVar21 = local_570;
                }
                *(int *)((longlong)plVar21 + ((longlong)iVar11 & (longlong)(int)plVar6[9] - 1U) * 4)
                     = iVar31;
                uVar12 = ~(uint)uVar25 & uVar12;
                puVar15 = (uint *)plVar6[4];
                if ((uint *)plVar6[4] == (uint *)0x0) {
                  puVar15 = local_528;
                }
                iVar14 = (int)plVar6[5];
                iVar31 = (int)uVar16;
                lVar20 = (longlong)iVar31;
                uVar26 = puVar15[lVar20] & uVar12;
                iVar11 = (int)local_560;
                lVar35 = local_568;
                if (uVar26 == 0) {
                  iVar22 = iVar14 + 0x1e;
                  if (-1 < iVar14 + -1) {
                    iVar22 = iVar14 + -1;
                  }
                  iVar22 = iVar22 >> 5;
                  iVar23 = iVar22;
                  if (iVar22 < iVar31) {
                    iVar23 = iVar31;
                  }
                  if (iVar22 <= iVar31) break;
                  lVar29 = 0;
                  while( true ) {
                    iVar19 = iVar19 + 0x20;
                    uVar26 = puVar15[lVar20 + lVar29 + 1];
                    if (uVar26 != 0) break;
                    lVar29 = lVar29 + 1;
                    if (iVar23 - lVar20 == lVar29) goto LAB_1406b842b;
                  }
                  uVar16 = (ulonglong)(iVar31 + (int)lVar29 + 1);
                  uVar12 = 0xffffffff;
                }
                uVar25 = (ulonglong)(-uVar26 & uVar26);
                uVar36 = uVar25 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar36 != 0) {
                  for (; uVar36 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                iVar31 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              } while (iVar31 < iVar14);
            }
          }
LAB_1406b842b:
          lVar20 = *plVar6 + (longlong)iVar11 * 0x3f0;
LAB_1406b8445:
          lVar29 = local_550;
          uStack_fd = 0;
          uStack_f8 = 0;
          local_478 = 0;
          local_488 = (void *)0x0;
          uStack_480 = 0;
          local_498 = 0;
          uStack_490 = 0;
          local_460 = 0;
          local_470 = (void *)0x0;
          uStack_468 = 0;
          uStack_45c = 0x80000000;
          uStack_458 = 0;
          bStack_454 = bStack_454 & 0xc0;
          local_450 = 0;
          uStack_448 = 0xffff;
          uStack_446 = 0xffff;
          uStack_444 = 0;
          local_4b0 = *(longlong *)(local_520 + 8);
          local_4d0 = *local_520;
          uStack_4cc = local_520[1];
          uStack_4c8 = local_520[2];
          uStack_4c4 = local_520[3];
          local_4c0 = *(longlong *)(local_520 + 4);
          lStack_4b8 = *(longlong *)(local_520 + 6);
          plVar21 = (longlong *)(local_550 + 0xa0 + lVar35);
          local_4a0 = (undefined4)plVar21[-1];
          lStack_4a8 = plVar21[-2];
          local_4d8 = plVar33;
          if (&local_498 != plVar21) {
            FUN_1447bda9c(0,0);
            uVar12 = *(uint *)(lVar29 + 0xa8 + lVar35);
            lVar29 = *plVar21;
            uStack_490 = CONCAT44(uStack_490._4_4_,uVar12);
            if (uVar12 == 0 && uStack_490._4_4_ == 0) {
              uStack_490 = (ulonglong)uVar12;
            }
            else {
              FUN_14753cf4a(&local_498,uVar12);
              FUN_14753cfbd(local_498,lVar29,uVar12);
            }
          }
          fVar37 = (float)dVar8;
          lVar29 = lVar35 + local_550;
          iVar14 = (int)local_548;
          FUN_140415652(&local_488,lVar35 + local_550 + 0xb0);
          uVar2 = *(undefined8 *)(lVar29 + 0xd8);
          uVar7 = *(undefined8 *)(lVar29 + 0xdd);
          local_460 = (undefined4)uVar2;
          uStack_45c._0_1_ = (undefined1)((ulonglong)uVar2 >> 0x20);
          uStack_45c._1_3_ = (undefined3)uVar7;
          uStack_458 = (undefined4)((ulonglong)uVar7 >> 0x18);
          bStack_454 = (byte)((ulonglong)uVar7 >> 0x38);
          local_450 = CONCAT44((int)local_4e8,local_52c);
          uStack_448 = local_572;
          uVar4 = *(undefined4 *)(local_518 + uVar32 * 4);
          uStack_446 = (undefined2)uVar4;
          uStack_444 = (undefined2)((uint)uVar4 >> 0x10);
          local_440 = (double)CONCAT44(uVar41,uVar40);
          bStack_42c = ((char)local_578 << 3 | (iVar14 == 1) * '\x02' | local_579 << 2 |
                       bStack_42c & 0xe0) + 1;
          iVar11 = *(int *)(lVar20 + 0x178);
          *(uint *)(lVar20 + 0x178) = iVar11 + 1U;
          fStack_438 = (float)dVar9;
          fStack_434 = fVar37;
          iStack_430 = iVar14;
          if (*(uint *)(lVar20 + 0x17c) < iVar11 + 1U) {
            FUN_1476af1d0(lVar20 + 0x10,iVar11);
          }
          uVar16 = uStack_490;
          lVar29 = local_498;
          lVar35 = *(longlong *)(lVar20 + 0x170);
          if (*(longlong *)(lVar20 + 0x170) == 0) {
            lVar35 = lVar20 + 0x10;
          }
          lVar24 = (longlong)iVar11 * 0xb0;
          lVar5 = lVar35 + lVar24;
          *(longlong **)(lVar35 + lVar24) = local_4d8;
          puVar1 = (undefined4 *)(lVar35 + 8 + lVar24);
          *puVar1 = local_4d0;
          puVar1[1] = uStack_4cc;
          puVar1[2] = uStack_4c8;
          puVar1[3] = uStack_4c4;
          plVar21 = (longlong *)(lVar35 + 0x18 + lVar24);
          *plVar21 = local_4c0;
          plVar21[1] = lStack_4b8;
          *(longlong *)(lVar35 + 0x28 + lVar24) = local_4b0;
          *(longlong *)(lVar35 + 0x30 + lVar24) = lStack_4a8;
          *(undefined4 *)(lVar35 + 0x38 + lVar24) = local_4a0;
          *(undefined8 *)(lVar35 + 0x40 + lVar24) = 0;
          *(int *)(lVar35 + 0x48 + lVar24) = (int)uStack_490;
          if ((int)uStack_490 == 0) {
            *(undefined4 *)(lVar5 + 0x4c) = 0;
          }
          else {
            puVar34 = (undefined8 *)(lVar35 + lVar24 + 0x40);
            FUN_14753cf4a(puVar34,uStack_490 & 0xffffffff,0);
            FUN_14753cfbd(*puVar34,lVar29,uVar16 & 0xffffffff);
          }
          pvVar27 = local_488;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          lVar29 = (longlong)(int)uStack_480;
          *(int *)(lVar5 + 0x58) = (int)uStack_480;
          if (lVar29 == 0) {
            *(undefined4 *)(lVar5 + 0x5c) = 0;
          }
          else {
            FUN_1456c5740((undefined8 *)(lVar5 + 0x50),uStack_480 & 0xffffffff,0);
            memcpy(*(void **)(lVar5 + 0x50),pvVar27,lVar29 << 3);
          }
          pvVar27 = local_470;
          *(undefined1 *)(lVar5 + 0x60) = local_478;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          lVar29 = (longlong)(int)uStack_468;
          *(int *)(lVar5 + 0x70) = (int)uStack_468;
          if (lVar29 == 0) {
            *(undefined4 *)(lVar5 + 0x74) = 0;
          }
          else {
            FUN_1447bda9e((undefined8 *)(lVar5 + 0x68),uStack_468 & 0xffffffff,0);
            memcpy(*(void **)(lVar5 + 0x68),pvVar27,lVar29 << 2);
          }
          *(ulonglong *)(lVar5 + 0x7d) = CONCAT17(bStack_454,CONCAT43(uStack_458,uStack_45c._1_3_));
          *(ulonglong *)(lVar5 + 0x78) = CONCAT44(uStack_45c,local_460);
          *(ulonglong *)(lVar5 + 0xa5) = CONCAT17(bStack_42c,CONCAT43(iStack_430,fStack_434._1_3_));
          *(double *)(lVar5 + 0x98) = local_440;
          *(ulonglong *)(lVar5 + 0xa0) = CONCAT44(fStack_434,fStack_438);
          *(undefined4 *)(lVar5 + 0x88) = (undefined4)local_450;
          *(undefined4 *)(lVar5 + 0x8c) = local_450._4_4_;
          *(uint *)(lVar5 + 0x90) = CONCAT22(uStack_446,uStack_448);
          *(uint *)(lVar5 + 0x94) = CONCAT22(uStack_442,uStack_444);
          if (DAT_14caff38c != 0) {
            lVar29 = local_550 + local_568;
            FUN_14765ea16(&local_100,local_520);
            plVar21 = local_558;
            dVar8 = (double)(**(code **)(*local_558 + 0x368))
                                      (local_558,CONCAT53(uStack_fd,local_100),
                                       *(undefined8 *)(lVar29 + 0x80));
            local_4dc = 1.0;
            FUN_1400f01f6(plVar21 + 0x27,CONCAT53(uStack_fd,local_100),&local_4dc);
            fVar10 = local_4dc;
            fVar38 = (float)FUN_140cf0978(plVar21,CONCAT53(uStack_fd,local_100));
            local_440 = (double)(fVar38 * fVar10);
            iVar11 = *(int *)(lVar20 + 0x2e8);
            *(uint *)(lVar20 + 0x2e8) = iVar11 + 1U;
            fStack_438 = fVar37;
            fStack_434 = (float)dVar8;
            if (*(uint *)(lVar20 + 0x2ec) < iVar11 + 1U) {
              FUN_1476af1d0(lVar20 + 0x180,iVar11);
            }
            lVar29 = lVar20 + 0x180;
            if (*(longlong *)(lVar20 + 0x2e0) != 0) {
              lVar29 = *(longlong *)(lVar20 + 0x2e0);
            }
            plVar21 = (longlong *)(lVar29 + (longlong)iVar11 * 0xb0);
            *plVar21 = (longlong)local_4d8;
            *(undefined4 *)(plVar21 + 1) = local_4d0;
            *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_4cc;
            *(undefined4 *)(plVar21 + 2) = uStack_4c8;
            *(undefined4 *)((longlong)plVar21 + 0x14) = uStack_4c4;
            plVar21[3] = local_4c0;
            plVar21[4] = lStack_4b8;
            plVar21[5] = local_4b0;
            FUN_144a3f8b4(plVar21 + 6,&lStack_4a8);
            lVar29 = lVar29 + (longlong)iVar11 * 0xb0;
            FUN_144b1f2a6(lVar29 + 0x50,&local_488);
            *(ulonglong *)(lVar29 + 0x78) = CONCAT44(uStack_45c,local_460);
            *(ulonglong *)(lVar29 + 0x7d) =
                 CONCAT17(bStack_454,CONCAT43(uStack_458,uStack_45c._1_3_));
            *(undefined4 *)(lVar29 + 0x88) = (undefined4)local_450;
            *(undefined4 *)(lVar29 + 0x8c) = local_450._4_4_;
            *(uint *)(lVar29 + 0x90) = CONCAT22(uStack_446,uStack_448);
            *(uint *)(lVar29 + 0x94) = CONCAT22(uStack_442,uStack_444);
            *(double *)(lVar29 + 0x98) = local_440;
            *(ulonglong *)(lVar29 + 0xa0) = CONCAT44(fStack_434,fStack_438);
            *(ulonglong *)(lVar29 + 0xa5) =
                 CONCAT17(bStack_42c,CONCAT43(iStack_430,fStack_434._1_3_));
          }
          if (local_470 != (void *)0x0) {
            FUN_1400020a8();
          }
          param_1 = local_510;
          if (local_488 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447bda9c(local_498);
          if (local_498 != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != local_508);
  }
  if ((local_f0 ^ (ulonglong)auStack_5a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b907e FUN_1406b907e body=61 status=ok
// SIG undefined FUN_1406b907e(void)

void FUN_1406b907e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x160);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    lVar1 = param_1;
  }
  FUN_1406b90bb(lVar1,*(undefined4 *)(param_1 + 0x168));
  if (*(longlong *)(param_1 + 0x160) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406b90bb FUN_1406b90bb body=97 status=ok
// SIG undefined FUN_1406b90bb(void)

void FUN_1406b90bb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar1[5] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_1447bda9c(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1406b911c FUN_1406b911c body=277 status=ok
// SIG undefined FUN_1406b911c(void)

void FUN_1406b911c(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x3f0;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x3f0)) {
      uVar5 = uVar4 / 0x3f0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x3f0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406b9232 FUN_1406b9232 body=742 status=ok
// SIG undefined FUN_1406b9232(void)

void FUN_1406b9232(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406b9600();
  if (((((param_2 == 0) || (*(longlong *)(param_1 + 0x168) == 0)) || (*(int *)(param_1 + 0x30) == 0)
       ) || ((uVar1 = *(uint *)(param_1 + 0x2c), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))))
     || ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 == 0 ||
         ((*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x30) ||
          ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) goto LAB_1406b9435;
  lVar6 = *(longlong *)(param_2 + 0x20);
  if (lVar6 == 0) {
LAB_1406b94c9:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_1406b951a();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1406b94c9;
  }
  if ((((*(int *)(param_1 + 0x30) == 0) || (uVar1 = *(uint *)(param_1 + 0x2c), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x30))) ||
      (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar4 = *plVar7, lVar4 == 0)))))) {
LAB_1406b9464:
    *(undefined4 *)(param_1 + 0x178) = 0;
    iVar3 = 0;
  }
  else {
    lVar5 = FUN_1406b951a();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1406b9464;
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(param_1 + 0x178) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar4 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x17c) = iVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  local_34 = 0;
  if (lVar6 == 0) {
    local_38 = 0;
    iVar3 = 0;
  }
  else {
    local_38 = *(uint *)(lVar6 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar6 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar8;
      }
    }
  }
  local_40 = *(undefined8 *)(param_1 + 0x178);
  local_34 = iVar3;
  FUN_144877af8(uVar2,&local_40,&local_38,1);
LAB_1406b9435:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406b951a FUN_1406b951a body=228 status=ok
// SIG undefined FUN_1406b951a(void)

longlong FUN_1406b951a(void)

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
  if (DAT_14cb604f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b32f24;
    local_38 = &LAB_1486c5328;
    local_40 = &LAB_1464ec72f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1240;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxManagedSkeletalMeshComponent",&DAT_14cb604f0,FUN_1464ec708
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb604f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b9600 FUN_1406b9600 body=3002 status=ok
// SIG undefined FUN_1406b9600(void)

void FUN_1406b9600(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  bool bVar23;
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
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  uint *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar19 = *(longlong *)(param_2 + 0x20);
  local_58 = param_1;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x1c))))) ||
     ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) {
    if (((*(byte *)(param_1 + 0x20) & 1) != 0) && (lVar19 != 0)) {
      lVar7 = DAT_14cad2858;
      for (lVar13 = *(longlong *)(lVar19 + 0x120); lVar13 != 0;
          lVar13 = *(longlong *)(lVar13 + 0x120)) {
        if (lVar7 == 0) {
          local_50 = FUN_144a7958c;
          local_80 = FUN_14081d0ea;
          local_88 = &LAB_146395584;
          local_90 = &local_50;
          local_98 = &LAB_147a0ba80;
          local_a0 = &LAB_14575ccce;
          local_a8 = L"Engine";
          local_b0 = 0x40000000000;
          local_b8 = 0x10000004;
          local_c0 = 0x10;
          local_c8 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          lVar7 = DAT_14cad2858;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) goto LAB_1406b97cb;
      }
    }
    *(undefined8 *)(param_1 + 0x2c) = 0;
  }
  else {
    if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
      lVar13 = *plVar12;
    }
    else {
      lVar13 = 0;
    }
LAB_1406b97cb:
    FUN_1432846c0(&local_58,lVar13,lVar19);
  }
  if ((((*(int *)(param_1 + 0x30) == 0) || (uVar3 = *(uint *)(param_1 + 0x2c), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x30))) ||
      (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 ||
       (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar19 = *plVar12, lVar19 == 0))))))))
  goto LAB_1406b9812;
  lVar13 = *(longlong *)(lVar19 + 0x658);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(lVar19 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) goto LAB_1406ba100;
    if (lVar13 == 0) goto LAB_1406b9812;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_1406ba100:
    FUN_1456cec3c(lVar13);
  }
  if (DAT_14cb06da8 == 0) {
    local_90 = &local_50;
    local_50 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464003b0;
    local_98 = &LAB_147d17bdf;
    local_a0 = &LAB_1417edf22;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000000;
    local_c0 = 8;
    local_c8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) ||
     ((*(byte *)(lVar19 + 0x9c) & 1) == 0)) goto LAB_1406b9812;
  if (((((*(int *)(lVar19 + 0x66c) == 0) || (uVar3 = *(uint *)(lVar19 + 0x668), (int)uVar3 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar3 ||
        ((plVar12 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(lVar19 + 0x66c))))))) ||
      ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar13 = *plVar12, lVar13 == 0)) {
LAB_1406b9926:
    lVar13 = 0;
  }
  else {
    if (DAT_14cad2858 == 0) {
      local_90 = &local_50;
      local_50 = FUN_144a7958c;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_146395584;
      local_98 = &LAB_147a0ba80;
      local_a0 = &LAB_14575ccce;
      local_a8 = L"Engine";
      local_b0 = 0x40000000000;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_1406b9926;
  }
  if (lVar13 != 0) {
    lVar19 = lVar13;
  }
  lVar13 = *(longlong *)(lVar19 + 0x658);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(lVar19 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) goto LAB_1406ba10d;
    if (lVar13 != 0) goto LAB_1406b994c;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
LAB_1406ba10d:
      FUN_1456cec3c(lVar13);
    }
LAB_1406b994c:
    if (DAT_14cb06da8 == 0) {
      local_90 = &local_50;
      local_50 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1464003b0;
      local_98 = &LAB_147d17bdf;
      local_a0 = &LAB_1417edf22;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000000;
      local_c0 = 8;
      local_c8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    lVar7 = DAT_14cad29d8;
    if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
       ((*(byte *)(lVar19 + 0x9c) & 1) != 0)) {
      if ((*(byte *)(lVar19 + 0x8a0) & 8) == 0) {
LAB_1406b999c:
        bVar23 = false;
      }
      else {
        cVar4 = FUN_144a8728e();
        if (cVar4 == '\0') {
          bVar23 = true;
          if ((DAT_14c86a9f8 == '\x01') &&
             (iVar11 = *(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0xc60), iVar11 != 2)) {
            if (iVar11 == 1) {
              DVar5 = FUN_140ad26c0();
              DVar6 = GetCurrentThreadId();
              bVar23 = DVar5 == DVar6;
            }
            else {
              bVar23 = false;
            }
          }
          uVar14 = (ulonglong)(bVar23 ^ 1);
        }
        else {
          uVar14 = 0;
        }
        if ((*(int *)(lVar7 + uVar14 * 4) < 1) || (*(longlong *)(lVar19 + 0x9c0) == 0))
        goto LAB_1406b999c;
        bVar23 = *(longlong *)(lVar19 + 0x9c0) ==
                 *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x9c0);
      }
      if ((*(byte *)(lVar19 + 0x8a1) & 0x40) == 0) {
        bVar15 = 0;
      }
      else {
        bVar15 = *(byte *)(lVar19 + 0x8a2) & 1;
      }
      iVar11 = *(int *)(lVar19 + 0xbb0);
      iVar16 = *(int *)(lVar19 + 0x6d8 + (longlong)*(int *)(lVar19 + 0x718) * 0x10);
      *(undefined4 *)(param_1 + 0xf8) = 0;
      if (*(int *)(param_1 + 0xfc) < 0) {
        FUN_1401a2688(param_1 + 0xf0,0);
      }
      if (((bVar23 | bVar15) == 1) && (iVar11 == iVar16)) {
        lVar13 = lVar19 + 0xba8;
      }
      else {
        lVar13 = (longlong)*(int *)(lVar19 + 0x718) * 0x10 + lVar19 + 0x6d0;
      }
      FUN_1406f47cc(param_1 + 0xf0,lVar13);
      lVar13 = *(longlong *)(lVar19 + 0x658);
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(lVar19 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) goto LAB_1406ba12e;
        if (lVar13 != 0) goto LAB_1406b9a45;
LAB_1406b9e54:
        *(undefined4 *)(param_1 + 0x3c) = 0;
        iVar11 = 0;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_1406ba12e:
          FUN_1456cec3c(lVar13);
        }
LAB_1406b9a45:
        if (DAT_14cb06da8 == 0) {
          local_90 = &local_50;
          local_50 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = &LAB_1464003b0;
          local_98 = &LAB_147d17bdf;
          local_a0 = &LAB_1417edf22;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10000000;
          local_c0 = 8;
          local_c8 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
        goto LAB_1406b9e54;
        uVar3 = *(uint *)(lVar13 + 0xc);
        *(uint *)(param_1 + 0x3c) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar11 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar23 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar23) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar16);
          }
          LOCK();
          iVar11 = *(int *)(lVar13 + 0x10);
          bVar23 = iVar11 == 0;
          if (bVar23) {
            *(int *)(lVar13 + 0x10) = iVar16;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar23) {
            iVar11 = iVar16;
          }
        }
      }
      *(int *)(param_1 + 0x40) = iVar11;
      if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
        if (*(longlong *)(lVar19 + 0xae8) == 0) {
          if (*(int *)(param_1 + 0x10c) < 0) {
            *(undefined4 *)(param_1 + 0x108) = 0;
            FUN_140507fc4(param_1 + 0x100,0);
          }
          else {
            *(undefined4 *)(param_1 + 0x108) = 0;
          }
          *(undefined1 *)(param_1 + 0x110) = 0;
        }
        else {
          plVar12 = (longlong *)FUN_1478f6c60(*(longlong *)(lVar19 + 0xae8),0);
          local_70 = (longlong *)(param_1 + 0x100);
          *(undefined4 *)(param_1 + 0x108) = 0;
          local_78 = plVar12;
          if (*(int *)(param_1 + 0x10c) < 0) {
            FUN_140507fc4(local_70,0);
          }
          *(undefined1 *)(param_1 + 0x110) = 0;
          iVar11 = (int)local_78[1] - *(int *)((longlong)local_78 + 0x34);
          if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar11);
          }
          if (*(int *)(param_1 + 0x10c) < iVar11) {
            FUN_140507fc4(local_70);
          }
          puVar8 = (uint *)(plVar12 + 2);
          uVar3 = *(uint *)(local_78 + 5);
          if (uVar3 == 0) {
            uVar17 = 1;
            uVar14 = 0;
            iVar11 = 0;
            uVar20 = 0;
          }
          else {
            puVar18 = (uint *)local_78[4];
            if ((uint *)local_78[4] == (uint *)0x0) {
              puVar18 = puVar8;
            }
            uVar20 = *puVar18;
            if (uVar20 == 0) {
              iVar11 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar11 = uVar3 - 1;
              }
              uVar14 = 0;
              uVar17 = (ulonglong)(uint)(iVar11 >> 5);
              if (iVar11 >> 5 < 1) {
                uVar17 = uVar14;
              }
              iVar11 = 0;
              do {
                if (uVar17 == uVar14) goto LAB_1406b9afa;
                iVar11 = iVar11 + 0x20;
                uVar20 = puVar18[uVar14 + 1];
                uVar14 = uVar14 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar14 = 0;
              iVar11 = 0;
            }
            uVar17 = (ulonglong)(-uVar20 & uVar20);
            uVar1 = uVar17 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar20 = (iVar11 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar20) {
              uVar20 = uVar3;
            }
          }
          if (uVar20 != uVar3) {
            uVar22 = 0xffffffff;
            plVar12 = local_78;
            local_68 = (ulonglong)uVar3;
            local_60 = puVar8;
            do {
              puVar21 = (undefined8 *)((longlong)(int)uVar20 * 0x14 + *plVar12);
              iVar16 = *(int *)(param_1 + 0x108);
              *(uint *)(param_1 + 0x108) = iVar16 + 1U;
              if (*(uint *)(param_1 + 0x10c) < iVar16 + 1U) {
                FUN_14571eb8e(local_70,iVar16);
                puVar8 = local_60;
                plVar12 = local_78;
              }
              lVar19 = *local_70;
              lVar13 = (longlong)iVar16 * 0x10;
              uVar2 = *(undefined4 *)(puVar21 + 1);
              *(undefined8 *)(lVar19 + lVar13) = *puVar21;
              *(undefined4 *)(lVar19 + 8 + lVar13) = uVar2;
              *(undefined1 *)(lVar19 + 0xc + lVar13) = 0;
              uVar22 = uVar22 & ~(uint)uVar17;
              puVar18 = (uint *)plVar12[4];
              if ((uint *)plVar12[4] == (uint *)0x0) {
                puVar18 = puVar8;
              }
              uVar3 = *(uint *)(plVar12 + 5);
              iVar16 = (int)uVar14;
              lVar19 = (longlong)iVar16;
              uVar20 = puVar18[lVar19] & uVar22;
              if (uVar20 == 0) {
                iVar9 = uVar3 + 0x1e;
                if (-1 < (int)(uVar3 - 1)) {
                  iVar9 = uVar3 - 1;
                }
                iVar9 = iVar9 >> 5;
                iVar11 = iVar11 + 0x20;
                iVar10 = iVar9;
                if (iVar9 < iVar16) {
                  iVar10 = iVar16;
                }
                plVar12 = local_78;
                if (iVar16 < iVar9) {
                  lVar13 = 0;
                  do {
                    uVar20 = puVar18[lVar19 + lVar13 + 1];
                    if (uVar20 != 0) {
                      uVar14 = (ulonglong)(iVar16 + (int)lVar13 + 1);
                      uVar22 = 0xffffffff;
                      goto LAB_1406b9d40;
                    }
                    iVar11 = iVar11 + 0x20;
                    lVar13 = lVar13 + 1;
                  } while (iVar10 - lVar19 != lVar13);
                  uVar22 = 0xffffffff;
                  iVar16 = iVar10;
                }
                uVar14 = (ulonglong)(iVar16 + 1);
                uVar20 = uVar3;
              }
              else {
LAB_1406b9d40:
                uVar17 = (ulonglong)(-uVar20 & uVar20);
                uVar1 = uVar17 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                uVar20 = (iVar11 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if ((int)uVar3 <= (int)uVar20) {
                  uVar20 = uVar3;
                }
              }
            } while (uVar20 != (uint)local_68);
          }
        }
      }
LAB_1406b9afa:
      if (*(char *)(param_1 + 0x21) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
      }
      goto LAB_1406b9812;
    }
  }
  *(undefined8 *)(param_1 + 0x3c) = 0;
LAB_1406b9812:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ba1e6 FUN_1406ba1e6 body=90 status=ok
// SIG undefined FUN_1406ba1e6(void)

void FUN_1406ba1e6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x420))(param_1,0);
  if (((*(byte *)(param_1 + 0x59) & 1) != 0) &&
     (((0.0 < *(float *)((longlong)param_1 + 700) || (0.0 < *(float *)(param_1 + 0x57))) &&
      (param_1[0x15] != 0)))) {
    FUN_140aeefbc(param_1[0x15],0,1);
    return;
  }
  return;
}



// FUNCTION 1406ba240 FUN_1406ba240 body=339 status=ok
// SIG undefined FUN_1406ba240(void)

undefined8
FUN_1406ba240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1406ba38c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1406ba38c;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1406ba38c:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1406ba335;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_48 = param_7;
      local_50 = param_6;
      local_58 = param_5;
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1406ba335;
    }
  }
  uVar6 = 0;
LAB_1406ba335:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ba394 FUN_1406ba394 body=456 status=ok
// SIG undefined FUN_1406ba394(void)

void FUN_1406ba394(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6,char param_7)

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
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_60 = &local_48;
      local_48 = FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_1406ba411;
  }
  lVar1 = 0;
LAB_1406ba411:
  if (lVar1 == param_2) {
    if (param_7 == '\x03') {
      if (param_5 == '\x05') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
      if (param_5 == '\a') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
    else if (param_7 == '\x02') {
      if (param_5 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
      if (param_5 == '\a') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
      if (param_5 == '\x05') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ba616 FUN_1406ba616 body=113 status=ok
// SIG undefined FUN_1406ba616(void)

void FUN_1406ba616(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb7bde0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb7bde8;
  bVar1 = *(byte *)(param_1 + -0x1d8);
  *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  *(uint *)(puVar2 + 3) = (uint)bVar1;
  puVar3 = &DAT_14cb7c580;
  if (bVar1 != 0) {
    puVar3 = &DAT_14cb7c588;
  }
  puVar2[2] = *puVar3;
  return;
}



// FUNCTION 1406ba688 FUN_1406ba688 body=214 status=ok
// SIG undefined FUN_1406ba688(void)

void FUN_1406ba688(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 1406ba75e FUN_1406ba75e body=262 status=ok
// SIG undefined FUN_1406ba75e(void)

undefined8 FUN_1406ba75e(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_2[1];
    uVar4 = uVar1 >> 0xd ^ *param_2 - uVar1;
    uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar1) - uVar4;
    uVar8 = uVar7 >> 0xd ^ (uVar1 - uVar4) - uVar7;
    uVar6 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
    uVar4 = uVar6 << 0x10 ^ (uVar7 - uVar8) - uVar6;
    uVar7 = uVar4 >> 5 ^ (uVar8 - uVar6) - uVar4;
    uVar6 = uVar7 >> 3 ^ (uVar6 - uVar4) - uVar7;
    uVar4 = uVar6 << 10 ^ (uVar4 - uVar7) - uVar6;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar4 >> 0xf ^ uVar7 - (uVar6 + uVar4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar9 = (longlong)iVar2 * 0x50;
        if ((*(int *)(lVar3 + lVar9) == *param_2) && (*(uint *)(lVar3 + 4 + lVar9) == uVar1)) {
          FUN_145737176();
          return 1;
        }
        iVar2 = *(int *)(lVar9 + lVar3 + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1406ba864 FUN_1406ba864 body=464 status=ok
// SIG undefined FUN_1406ba864(void)

int FUN_1406ba864(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = 1;
  if (param_3 < 2) {
    lVar6 = FUN_140279ac4(param_2);
    if ((lVar6 == 0) || (lVar6 = FUN_140279ac4(param_2), *(longlong *)(lVar6 + 0x228) == 0)) {
      cVar1 = FUN_1402799c0(param_1);
      uVar3 = FUN_14027a0c2(param_2);
      if (cVar1 == '\0') {
        plVar11 = (longlong *)(param_1 + 0x270);
        iVar2 = FUN_140279a58(plVar11,uVar3,param_2);
        iVar5 = 0;
        iVar4 = 0;
        if (iVar2 != -1) {
          uVar3 = FUN_14027a0c2(param_2);
          iVar4 = FUN_140279a58(plVar11,uVar3,param_2);
          if (iVar4 == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (longlong)iVar4 * 0x40 + *plVar11;
          }
          iVar4 = *(int *)(lVar6 + 0x30);
        }
        plVar8 = (longlong *)FUN_140caa0c0(param_1);
        if (plVar8 != (longlong *)0x0) {
          uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
          uVar9 = FUN_140279ac4(param_2);
          iVar5 = FUN_143d1d48e(uVar7,uVar9);
        }
        if (iVar4 < iVar5) {
          uVar3 = FUN_14027a0c2(param_2);
          piVar10 = (int *)FUN_140ebd788(plVar11,uVar3,param_2);
          *piVar10 = iVar5;
          *(undefined1 *)(param_1 + 0x1b8) = 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
      plVar11 = (longlong *)(param_1 + 0x1d0);
      iVar4 = FUN_140279a58(plVar11,uVar3,param_2);
      if (iVar4 == -1) {
        iVar4 = 0;
      }
      else {
        uVar3 = FUN_14027a0c2(param_2);
        iVar4 = FUN_140279a58(plVar11,uVar3,param_2);
        if (iVar4 == -1) {
          lVar6 = 0;
        }
        else {
          lVar6 = (longlong)iVar4 * 0x40 + *plVar11;
        }
        iVar4 = *(int *)(lVar6 + 0x30);
      }
    }
    else {
      uVar7 = FUN_140279ac4(param_2);
      uVar7 = FUN_1414bd494(uVar7);
      FUN_14073f620(local_68,uVar7);
      iVar2 = FUN_1406ba864(param_1,local_68,param_3 + 1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      iVar4 = 0;
      if (1 < iVar2) {
        iVar4 = iVar2;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1406baa38 FUN_1406baa38 body=375 status=ok
// SIG undefined FUN_1406baa38(void)

undefined8 * FUN_1406baa38(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1406babbc FUN_1406babbc body=372 status=ok
// SIG undefined FUN_1406babbc(void)

longlong * FUN_1406babbc(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar2 = *(int *)(param_2 + 0x1c8);
  pvVar3 = *(void **)(param_2 + 0x1c0);
  *(int *)(param_1 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar2,0);
    memcpy((void *)param_1[1],pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x1d0);
  puVar5 = (undefined8 *)FUN_1406bad30(param_3);
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + 0x1c0);
  if (puVar1 != puVar5) {
    iVar2 = *(int *)(puVar5 + 1);
    pvVar3 = (void *)*puVar5;
    *(int *)(lVar4 + 0x1c8) = iVar2;
    if (iVar2 == 0 && *(int *)(lVar4 + 0x1cc) == 0) {
      *(undefined4 *)(lVar4 + 0x1cc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
      }
    }
  }
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x1c8);
  uVar9 = 0;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar2 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(lVar4 + 0x1c0);
    }
    lVar10 = 0;
    uVar9 = 0;
    do {
      uVar8 = ((uint)(0x19 < (ushort)puVar6[lVar10] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar10]) -
              0x20;
      uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar9 ^ uVar8) & 0xff) * 4);
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
      lVar10 = lVar10 + 1;
    } while (iVar7 != (int)lVar10);
  }
  *(uint *)(lVar4 + 0x1d0) = uVar9;
  return param_1;
}



// FUNCTION 1406bad30 FUN_1406bad30 body=517 status=ok
// SIG undefined FUN_1406bad30(void)

undefined2 ** FUN_1406bad30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 **ppuVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140124256();
  if (*(int *)(lVar1 + 8) < 2) {
    ppuVar4 = (undefined2 **)&DAT_14cc06b30;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc06b40) && (FUN_144b3d300(&DAT_14cc06b40), DAT_14cc06b40 == -1)) {
      DAT_14cc06b30 = 0;
      uRam000000014cc06b38 = 0;
      atexit((_func_5014 *)&LAB_14448af6e);
      _Init_thread_footer(&DAT_14cc06b40);
    }
  }
  else {
    uVar2 = FUN_1401242c6();
    lVar1 = FUN_144a78ede(param_1,uVar2);
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)FUN_140124256(param_1);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*puVar3;
      }
      FUN_140002266(&local_30,&DAT_14bb60c3c,puVar5);
      ppuVar4 = (undefined2 **)(param_1 + 0xac0);
      local_40 = local_30;
      if (ppuVar4 != &local_30) {
        if (*(longlong *)(param_1 + 0xac0) != 0) {
          FUN_1400020a8();
        }
        *(undefined2 **)(param_1 + 0xac0) = local_30;
        *(undefined4 *)(param_1 + 0xac8) = (undefined4)local_28;
        *(undefined4 *)(param_1 + 0xacc) = local_28._4_4_;
        goto LAB_1406bad80;
      }
    }
    else {
      puVar3 = (undefined8 *)FUN_1406bad30(lVar1);
      local_48 = *(undefined8 *)(param_1 + 0x18);
      FUN_1400021e4(&local_48,&local_40);
      puVar5 = &DAT_149dfb77a;
      puVar6 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar6 = local_40;
      }
      if (*(int *)(puVar3 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar3;
      }
      FUN_140002266(&local_30,L"%s%s:",puVar5,puVar6);
      if ((undefined2 **)(param_1 + 0xac0) == &local_30) {
        if (local_30 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xac0) != 0) {
          FUN_1400020a8();
        }
        *(undefined2 **)(param_1 + 0xac0) = local_30;
        local_30 = (undefined2 *)0x0;
        *(undefined4 *)(param_1 + 0xac8) = (undefined4)local_28;
        *(undefined4 *)(param_1 + 0xacc) = local_28._4_4_;
        local_28 = 0;
      }
    }
    ppuVar4 = (undefined2 **)(param_1 + 0xac0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1406bad80:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ppuVar4;
}



// FUNCTION 1406baf36 FUN_1406baf36 body=172 status=ok
// SIG undefined FUN_1406baf36(void)

void FUN_1406baf36(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = (**(code **)(*param_1 + 0x2f0))();
  for (plVar1 = param_1; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
    if ((*(uint *)(plVar1 + 1) & 0x30) != 0) goto LAB_1406baf6c;
  }
  if (((*(byte *)(param_1 + 0x18) & 1) != 0) &&
     (*(byte *)((longlong)param_1 + 0xc1) < *(byte *)((longlong)param_1 + 0xc3))) {
    uVar4 = FUN_140083894();
    cVar2 = FUN_1406bafe2(uVar4,uVar3);
    if (cVar2 != '\0') {
      if ((int)param_1[0x17] != -1) {
        return;
      }
      lVar5 = FUN_140083894();
      if ((char)uVar3 != '\x05') {
                    /* WARNING: Could not recover jumptable at 0x0001406bafc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar5 + 0x30) + 0xb8))(*(longlong **)(lVar5 + 0x30),param_1);
        return;
      }
      FUN_14366923c(*(undefined8 *)(lVar5 + 0x50),param_1);
      return;
    }
  }
LAB_1406baf6c:
  FUN_1402bfe62(param_1);
  return;
}



// FUNCTION 1406bafe2 FUN_1406bafe2 body=154 status=ok
// SIG undefined FUN_1406bafe2(void)

bool FUN_1406bafe2(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  bool bVar6;
  
  lVar2 = DAT_14cad3958;
  if (*(longlong *)(param_1 + 0x30) == 0) {
LAB_1406bb062:
    bVar6 = false;
  }
  else {
    if (param_2 < 2) {
      return true;
    }
    if (param_2 - 2 < 2) {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar5 = 0;
      }
      else if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar5 = (ulonglong)(DVar3 != DVar4);
      }
      else {
        uVar5 = 1;
      }
      iVar1 = *(int *)(lVar2 + uVar5 * 4);
    }
    else {
      iVar1 = DAT_14cad3970;
      if (param_2 != 5) goto LAB_1406bb062;
    }
    bVar6 = iVar1 != 0;
  }
  return bVar6;
}



// FUNCTION 1406bb07c FUN_1406bb07c body=211 status=ok
// SIG undefined FUN_1406bb07c(void)

void FUN_1406bb07c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  iVar1 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x31c) < iVar1 + 1U) {
    FUN_1457372d6(param_1 + 0x310,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar1 * 8) = param_2;
  *(int *)(param_2 + 0xb8) = iVar1;
  *(byte *)(param_2 + 0xbc) =
       (*(byte *)(param_2 + 0xbc) & 0xfb | *(char *)(param_1 + 0x440) << 2) ^ 4;
  FUN_1406bb150(param_1 + 0x20,local_3c,&local_38,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406bb150 FUN_1406bb150 body=833 status=ok
// SIG undefined FUN_1406bb150(void)

int * FUN_1406bb150(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_1446efaca(param_1,iVar13);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar9 = iVar15 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar11 = iVar15 + 1;
    iVar17 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar17 = iVar15;
    }
    if (iVar17 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar9 = iVar15;
        }
        else {
          uVar10 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar10) {
              uVar5 = uVar10;
            }
          }
          else {
            uVar5 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar5 << 2,0);
          iVar9 = (int)(uVar12 >> 2);
          iVar11 = -0x20;
          if ((int)uVar10 <= iVar9) {
            iVar11 = iVar9 << 5;
          }
          iVar9 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar6,iVar9);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar9 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar9 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar6;
        }
        bVar8 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar9 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar16 = (longlong)iVar13;
    iVar15 = *(int *)(*param_1 + 4 + lVar16 * 0x10);
    *(int *)(param_1 + 6) = iVar15;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x10) = 0xffffffff;
    }
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar15 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar15 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar15 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  lVar3 = *param_1;
  lVar16 = lVar16 * 0x10;
  uVar12 = *param_3;
  *(ulonglong *)(lVar3 + lVar16) = uVar12;
  *(undefined4 *)(lVar3 + 8 + lVar16) = 0xffffffff;
  uVar10 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  cVar7 = '\0';
  iVar15 = iVar13;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar10) * 4);
    if (iVar15 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar15 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar15 * 0x10) == uVar12) {
          *puVar2 = uVar12;
          FUN_1402c0af4(param_1,iVar13);
          cVar7 = '\x01';
          goto LAB_1406bb25d;
        }
        iVar15 = (int)puVar2[1];
      } while (iVar15 != -1);
    }
    cVar7 = '\0';
    iVar15 = iVar13;
  }
LAB_1406bb25d:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar5 < 4) {
      iVar13 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar13 <= (int)param_1[9])) {
      uVar10 = (int)param_1[9] - 1U & uVar10;
      *(uint *)(lVar3 + lVar16 + 0xc) = uVar10;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(undefined4 *)(lVar3 + lVar16 + 8) =
           *(undefined4 *)
            ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
           iVar15;
    }
    else {
      *(int *)(param_1 + 9) = iVar13;
      FUN_1406bb492(param_1);
    }
  }
  *param_2 = iVar15;
  return param_2;
}



// FUNCTION 1406bb492 FUN_1406bb492 body=590 status=ok
// SIG undefined FUN_1406bb492(void)

void FUN_1406bb492(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1406bb69b;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1406bb69b:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406bb6e2 FUN_1406bb6e2 body=10545 status=ok
// SIG undefined FUN_1406bb6e2(void)

void FUN_1406bb6e2(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined2 uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  bool bVar30;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  ulonglong *local_1a0;
  longlong local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  int local_17c;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  uint local_14c;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  undefined1 local_119;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 *puStack_c0;
  undefined4 local_b8;
  longlong local_a8;
  longlong *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  undefined6 uVar22;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar10 = -1;
  if (0 < (longlong)*(int *)(param_1 + 0x410)) {
    lVar13 = 0;
    do {
      lVar10 = lVar13;
      if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar10 * 8) == param_3) break;
      lVar13 = lVar10 + 1;
      lVar10 = -1;
    } while (*(int *)(param_1 + 0x410) != lVar13);
  }
  lVar13 = param_1 + 0xe38;
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    lVar13 = *(longlong *)(param_1 + 0xe58);
  }
  lVar10 = (longlong)(int)lVar10 * 0x20;
  local_160 = param_1;
  local_d8 = (undefined8 **)CONCAT44(local_d8._4_4_,(int)local_d8);
  if ((*(int *)(lVar13 + 0xc + lVar10) == 2 || *(int *)(lVar13 + lVar10) == 2) &&
     (local_d8 = (undefined8 **)CONCAT44(local_d8._4_4_,(int)local_d8), DAT_14c760804 != 0)) {
    lVar10 = *(longlong *)(param_3 + 0x13ad8);
    if (lVar10 == 0) {
      uVar17 = *(uint *)(param_3 + 0x1de0);
      if (uVar17 == 0) {
        iVar25 = 0x20;
      }
      else {
        iVar25 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> iVar25 & 1) == 0; iVar25 = iVar25 + 1) {
          }
        }
      }
      if (*(longlong *)(param_3 + 0x3108) == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined4 *)(*(longlong *)(param_3 + 0x3108) + 0x24);
      }
      lVar10 = FUN_140c6b718(*(undefined8 *)(param_1 + 8),uVar19,iVar25);
    }
    if (param_4[2] != 0) {
      if (*(int *)(lVar10 + 0x8c4) != *(int *)(lVar10 + 0x8bc)) {
        iVar25 = 0x4000;
        if (DAT_14c7607b4 < 0x4000) {
          iVar25 = DAT_14c7607b4;
        }
        if (iVar25 < 2) {
          iVar25 = 1;
        }
        uVar11 = (ulonglong)(iVar25 - 1) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_14c = 1 << ((byte)lVar13 & 0x1f);
        local_188 = *(undefined8 **)(local_160 + 1000);
        uVar24 = 2 << ((byte)lVar13 & 0x1f);
        uVar17 = 8;
        if (DAT_14ca84e48 < 8) {
          uVar17 = DAT_14ca84e48;
        }
        uStack_d0._0_4_ = 0x10129;
        local_d8._0_4_ = uVar17 + (uVar17 == 0);
        local_c8 = (undefined *)0x0;
        uVar17 = DAT_14ca84e48;
        if (local_14c < DAT_14ca84e48) {
          uVar17 = local_14c;
        }
        local_d8._4_4_ = uVar17 + (uVar17 == 0);
        puVar1 = (ulonglong *)(param_2 + 0x70);
        uVar27 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar11 = uVar27 + 0x150;
        local_1a0 = puVar1;
        local_158 = lVar10;
        local_128 = param_3;
        if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
          FUN_140023dd8(puVar1,0x160);
          uVar27 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar11 = uVar27 + 0x150;
        }
        lVar10 = param_2 + 0x188;
        *(ulonglong *)(param_2 + 0x70) = uVar11;
        FUN_1456bd266(uVar27,L"Lumen.CompactedFeedback",&local_d8,0);
        iVar25 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar25 + 1U) {
          FUN_144737178(lVar10,iVar25);
        }
        puVar1 = local_1a0;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar25 * 8) = uVar27;
        *(int *)(uVar27 + 0x7c) = *(int *)(param_2 + 400) + -1;
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar18 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 8;
        }
        local_198 = param_2 + 0x198;
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar18[1] = *(undefined8 *)(uVar27 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 2;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar18 + 5) = 0;
        *puVar18 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar18 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
        puVar18[7] = uVar27;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        local_138 = uVar27;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        FUN_1405bfba3(param_2,puVar18,0,2);
        puVar1 = local_1a0;
        uVar17 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar17 = DAT_14ca84e48;
        }
        local_d8._0_4_ = uVar17 + (uVar17 == 0);
        uStack_d0._0_4_ = 0x10109;
        uVar17 = DAT_14ca84e48;
        if (uVar24 < DAT_14ca84e48) {
          uVar17 = uVar24;
        }
        local_c8 = (undefined *)0x0;
        local_d8._4_4_ = uVar17 + (uVar17 == 0);
        uVar27 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar11 = uVar27 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
          FUN_140023dd8(local_1a0,0x160);
          uVar27 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar11 = uVar27 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar11;
        FUN_1456bd266(uVar27,L"Lumen.HashTableKeys",&local_d8,0);
        iVar25 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar25 + 1U) {
          FUN_144737178(lVar10,iVar25);
        }
        puVar1 = local_1a0;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar25 * 8) = uVar27;
        *(int *)(uVar27 + 0x7c) = *(int *)(param_2 + 400) + -1;
        uVar17 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar17 = DAT_14ca84e48;
        }
        local_d8._0_4_ = uVar17 + (uVar17 == 0);
        uStack_d0._0_4_ = 0x10109;
        uVar17 = DAT_14ca84e48;
        if (uVar24 < DAT_14ca84e48) {
          uVar17 = uVar24;
        }
        local_c8 = (undefined *)0x0;
        local_d8._4_4_ = uVar17 + (uVar17 == 0);
        uVar20 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar11 = uVar20 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
          FUN_140023dd8(local_1a0,0x160);
          uVar20 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar11 = uVar20 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar11;
        FUN_1456bd266(uVar20,L"Lumen.HashTableElementIndices",&local_d8,0);
        iVar25 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar25 + 1U) {
          FUN_144737178(lVar10,iVar25);
        }
        puVar1 = local_1a0;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar25 * 8) = uVar20;
        *(int *)(uVar20 + 0x7c) = *(int *)(param_2 + 400) + -1;
        uVar17 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar17 = DAT_14ca84e48;
        }
        local_d8._0_4_ = uVar17 + (uVar17 == 0);
        uStack_d0._0_4_ = 0x10109;
        uVar17 = DAT_14ca84e48;
        if (uVar24 < DAT_14ca84e48) {
          uVar17 = uVar24;
        }
        local_c8 = (undefined *)0x0;
        local_d8._4_4_ = uVar17 + (uVar17 == 0);
        uVar26 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar11 = uVar26 + 0x150;
        local_178 = lVar10;
        if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
          FUN_140023dd8(local_1a0,0x160);
          uVar26 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar11 = uVar26 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar11;
        FUN_1456bd266(uVar26,L"Lumen.HashTableElementCounts",&local_d8,0);
        iVar25 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar25 + 1U) {
          FUN_144737178(local_178,iVar25);
        }
        puVar1 = local_1a0;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar25 * 8) = uVar26;
        *(int *)(uVar26 + 0x7c) = *(int *)(param_2 + 400) + -1;
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar18 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar18[1] = *(undefined8 *)(uVar27 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 2;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar18 + 5) = 0;
        *puVar18 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar18 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
        puVar18[7] = uVar27;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        local_190 = (undefined8 *)uVar27;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        FUN_1405bfba3(param_2,puVar18,0,2);
        puVar1 = local_1a0;
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar18 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar18[1] = *(undefined8 *)(uVar26 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 2;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar18 + 5) = 0;
        *puVar18 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar18 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
        puVar18[7] = uVar26;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        local_148 = uVar26;
        local_140 = (ulonglong)uVar24;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        FUN_1405bfba3(param_2,puVar18,0,2);
        puVar1 = local_1a0;
        local_c8 = (undefined *)0x0;
        uVar17 = 0xc;
        if (DAT_14ca84e48 < 0xc) {
          uVar17 = DAT_14ca84e48;
        }
        local_d8._0_4_ = uVar17 + (uVar17 == 0);
        local_d8._4_4_ = 1;
        uStack_d0._0_4_ = 0x4189;
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar18 + 0x2a;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x160);
          puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar18 + 0x2a;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        FUN_1456bd266(puVar18,L"Lumen.BuildHashTableIndirectArgs",&local_d8,0);
        iVar25 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar25 + 1U) {
          FUN_144737178(local_178,iVar25);
        }
        puVar1 = local_1a0;
        *(undefined8 **)(*(longlong *)(param_2 + 0x188) + (longlong)iVar25 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x7c) = *(int *)(param_2 + 400) + -1;
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar28 + 6;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x40);
          puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar28 + 6;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        *puVar28 = &PTR_FUN_14a288c88;
        local_168 = param_2 + 0x98;
        puVar28[2] = 0;
        puVar28[3] = 0;
        puVar28[4] = 0;
        iVar25 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar25 + 1U;
        local_178 = uVar20;
        if (*(uint *)(param_2 + 0xa4) < iVar25 + 1U) {
          FUN_1448cfae8(local_168,iVar25);
        }
        puVar1 = local_1a0;
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar25 * 8) = puVar28;
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar21 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar21 + 8;
        }
        puVar29 = puVar28 + 2;
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar21[1] = puVar18[1];
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 2;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar21 + 5) = 0;
        *puVar21 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar21 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar21 + 0x32) = 0;
        puVar21[7] = puVar18;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar28[2] = puVar21;
        puVar28[3] = param_4[1];
        puVar28[4] = param_4[3];
        *(undefined4 *)(puVar28 + 5) = *(undefined4 *)(param_4 + 4);
        uVar5 = *(undefined8 *)((longlong)local_188 + 0x13818);
        FUN_1406be014();
        FUN_1406be014();
        FUN_1448e935e(uVar5,&local_d8,&DAT_14ca02188,0);
        FUN_1406be014();
        uVar5 = CONCAT44(local_d8._4_4_,(int)local_d8);
        uVar8 = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        FUN_1406be702();
        local_d8._0_4_ = 0;
        local_d8._4_4_ = 0;
        uStack_d0._0_4_ = 0;
        uStack_d0._4_4_ = 0;
        FUN_1448f70da(uVar5,&DAT_14ca061a8,puVar29,&local_d8);
        FUN_140069376(param_2);
        puVar1 = local_1a0;
        uVar23 = 2;
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar23 = 4;
        }
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar28 + 0x3d;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          local_17c = CONCAT22(local_17c._2_2_,uVar23);
          FUN_140023dd8(local_1a0,0x1f0);
          puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar28 + 0x3d;
          uVar23 = (undefined2)local_17c;
        }
        *local_1a0 = (ulonglong)puVar12;
        uStack_d0._0_4_ = (undefined4)DAT_14ca061f0;
        uStack_d0._4_4_ = (undefined4)((ulonglong)DAT_14ca061f0 >> 0x20);
        if (DAT_14ca061f0 != 0) {
          LOCK();
          *(int *)(DAT_14ca061f0 + 8) = *(int *)(DAT_14ca061f0 + 8) + 1;
          UNLOCK();
        }
        local_c8 = &DAT_14ca061a8;
        local_1a8 = 2;
        local_d8 = (undefined8 **)puVar29;
        FUN_140068f1a(puVar28,local_118,&local_d8,uVar23);
        *puVar28 = &PTR_FUN_14a288c90;
        puVar28[0x37] = &DAT_14ca061a8;
        puVar28[0x38] = puVar29;
        puVar28[0x39] = uVar5;
        puVar28[0x3a] = uVar8;
        puVar28[0x3b] = &DAT_100000001;
        *(undefined4 *)(puVar28 + 0x3c) = 1;
        local_170 = param_2 + 0x168;
        iVar25 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar25 + 1U) {
          FUN_14470e57a(local_170,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar25 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar28);
        puVar1 = local_1a0;
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar28 + 0xe;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x80);
          puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar28 + 0xe;
        }
        puVar21 = local_190;
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        *puVar28 = &PTR_FUN_14a288ca8;
        puVar28[2] = 0;
        *(undefined1 *)(puVar28 + 3) = 1;
        puVar28[4] = 0;
        *(undefined4 *)(puVar28 + 5) = 4;
        puVar28[6] = 0;
        puVar28[7] = 0;
        puVar28[8] = 0;
        puVar28[10] = 0;
        puVar28[0xb] = 0;
        iVar25 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar25 + 1U) {
          FUN_1448cfae8(local_168,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar25 * 8) = puVar28;
        lVar10 = FUN_1447e4f80();
        puVar1 = local_1a0;
        cVar14 = '\x02';
        if (*(char *)(lVar10 + 0x41) != '\x03') {
          cVar14 = *(char *)(lVar10 + 0x41);
        }
        puVar28[2] = *(undefined8 *)((longlong)local_188 + 0x18);
        *(char *)(puVar28 + 3) = cVar14;
        puVar28[4] = puVar18;
        *(undefined4 *)(puVar28 + 5) = 4;
        cVar14 = *(char *)((longlong)puVar21 + 0x68);
        puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar29 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar29 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar29[1] = *(undefined8 *)((longlong)puVar21 + 8);
        puVar29[2] = 0;
        *(undefined1 *)(puVar29 + 3) = 2;
        *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar29 + 5) = 0;
        *puVar29 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar29 + 6) = cVar14 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar29 + 0x31) = 0;
        puVar29[7] = puVar21;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        uVar11 = local_178;
        puVar1 = local_1a0;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar29;
        *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar28[6] = puVar29;
        cVar14 = *(char *)(local_178 + 0x68);
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar21 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar21 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar21[1] = *(undefined8 *)(uVar11 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 2;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar21 + 5) = 0;
        *puVar21 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar21 + 6) = cVar14 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar21 + 0x31) = 0;
        puVar21[7] = uVar11;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        uVar11 = local_148;
        puVar1 = local_1a0;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar28[7] = puVar21;
        cVar14 = *(char *)(local_148 + 0x68);
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar21 + 8;
        local_130 = puVar18;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar21 + 8;
        }
        iVar9 = (int)local_140;
        iVar15 = iVar9 + -1;
        puVar18 = puVar28 + 2;
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar21[1] = *(undefined8 *)(uVar11 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 2;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar21 + 5) = 0;
        *puVar21 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar21 + 6) = cVar14 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar21 + 0x31) = 0;
        puVar21[7] = uVar11;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar28[8] = puVar21;
        *(int *)(puVar28 + 9) = iVar9;
        *(int *)((longlong)puVar28 + 0x4c) = iVar15;
        puVar28[10] = param_4[1];
        puVar28[0xb] = param_4[3];
        *(undefined4 *)(puVar28 + 0xc) = *(undefined4 *)(param_4 + 4);
        uVar5 = *(undefined8 *)((longlong)local_188 + 0x13818);
        local_190 = param_4;
        local_17c = iVar15;
        FUN_1406be136();
        FUN_1406be136();
        FUN_1448e935e(uVar5,&local_d8,&DAT_14ca022b0,0);
        FUN_1406be136();
        puVar28 = local_d8;
        puVar12 = local_130;
        uVar5 = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        local_118[0] = 0;
        local_108 = (longlong *)0x0;
        local_60 = local_130;
        FUN_1406be37a();
        local_d8 = &local_60;
        uStack_d0 = &local_58;
        FUN_1448f70da(puVar28,&DAT_14ca06230,puVar18,&local_d8);
        puStack_c0 = puVar12;
        local_b8 = 0;
        local_a8 = local_118[0];
        local_98 = local_108;
        local_108 = (longlong *)0x0;
        local_88 = local_f8;
        uStack_80 = uStack_f0;
        local_78 = local_e8;
        uStack_74 = uStack_e4;
        uStack_70 = uStack_e0;
        uStack_6c = uStack_dc;
        if (local_118[0] != 0) {
          local_118[0] = 0;
        }
        local_c8 = (undefined *)uVar5;
        local_d8 = (undefined8 **)puVar18;
        uStack_d0 = puVar28;
        FUN_1406be37a();
        FUN_140069376(param_2);
        uVar11 = local_138;
        param_4 = local_190;
        puVar1 = local_1a0;
        uVar22 = (undefined6)((ulonglong)&local_d8 >> 0x10);
        uVar19 = (undefined4)CONCAT62(uVar22,2);
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
          uVar19 = (undefined4)CONCAT62(uVar22,4);
        }
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar28 + 0x46;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x240);
          puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar28 + 0x46;
        }
        *local_1a0 = (ulonglong)puVar12;
        local_58 = DAT_14ca06278;
        if (DAT_14ca06278 != 0) {
          LOCK();
          *(int *)(DAT_14ca06278 + 8) = *(int *)(DAT_14ca06278 + 8) + 1;
          UNLOCK();
        }
        local_50 = &DAT_14ca06230;
        local_1a8 = 2;
        local_60 = puVar18;
        FUN_140068f1a(puVar28,&local_119,&local_60,uVar19);
        *puVar28 = &PTR_FUN_14a288cb0;
        puVar28[0x38] = local_d8;
        puVar28[0x39] = uStack_d0;
        puVar28[0x3a] = local_c8;
        puVar28[0x3b] = puStack_c0;
        *(undefined4 *)(puVar28 + 0x3c) = local_b8;
        puVar28[0x3e] = local_a8;
        puVar28[0x40] = local_98;
        local_98 = (longlong *)0x0;
        *(undefined4 *)(puVar28 + 0x44) = local_78;
        *(undefined4 *)((longlong)puVar28 + 0x224) = uStack_74;
        *(undefined4 *)(puVar28 + 0x45) = uStack_70;
        *(undefined4 *)((longlong)puVar28 + 0x22c) = uStack_6c;
        *(undefined4 *)(puVar28 + 0x42) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar28 + 0x214) = local_88._4_4_;
        *(undefined4 *)(puVar28 + 0x43) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar28 + 0x21c) = uStack_80._4_4_;
        if (local_a8 != 0) {
          local_a8 = 0;
        }
        iVar25 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar25 + 1U) {
          FUN_14470e57a(local_170,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar25 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar28);
        if (local_a8 != 0) {
          plVar16 = &local_88;
          if (local_98 != (longlong *)0x0) {
            plVar16 = local_98;
          }
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        if (local_118[0] != 0) {
          plVar16 = local_108;
          if (local_108 == (longlong *)0x0) {
            plVar16 = &local_f8;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        puVar1 = local_1a0;
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar18 + 0xc;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x70);
          puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar18 + 0xc;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        *puVar18 = &PTR_FUN_14a288cc8;
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 1;
        puVar18[4] = 0;
        puVar18[6] = 0;
        puVar18[7] = 0;
        puVar18[9] = 0;
        puVar18[10] = 0;
        iVar25 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar25 + 1U) {
          FUN_1448cfae8(local_168,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar25 * 8) = puVar18;
        lVar10 = FUN_1447e4f80();
        puVar1 = local_1a0;
        cVar14 = '\x02';
        if (*(char *)(lVar10 + 0x41) != '\x03') {
          cVar14 = *(char *)(lVar10 + 0x41);
        }
        puVar18[2] = *(undefined8 *)((longlong)local_188 + 0x18);
        *(char *)(puVar18 + 3) = cVar14;
        cVar14 = *(char *)(uVar11 + 0x68);
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar28 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x48);
          puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar28 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar28[1] = *(undefined8 *)(uVar11 + 8);
        puVar28[2] = 0;
        *(undefined1 *)(puVar28 + 3) = 2;
        *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar28 + 5) = 0;
        *puVar28 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar28 + 6) = cVar14 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar28 + 0x31) = 0;
        puVar28[7] = uVar11;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        puVar1 = local_1a0;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar18[4] = puVar28;
        *(uint *)(puVar18 + 5) = local_14c;
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar28 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x50);
          puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar28 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar28[1] = *(undefined8 *)(local_178 + 8);
        puVar28[2] = 0;
        *(undefined1 *)(puVar28 + 3) = 3;
        *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
        *puVar28 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar28 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
        puVar28[7] = 0;
        puVar28[8] = local_178;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        puVar1 = local_1a0;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar18[6] = puVar28;
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar28 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x50);
          puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar28 + 9;
        }
        puVar21 = puVar18 + 2;
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        puVar28[1] = *(undefined8 *)(local_148 + 8);
        puVar28[2] = 0;
        *(undefined1 *)(puVar28 + 3) = 3;
        *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
        *puVar28 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar28 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
        puVar28[7] = 0;
        puVar28[8] = local_148;
        iVar25 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar25 + 1U) {
          FUN_1447568fc(local_198,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar25 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar18[7] = puVar28;
        iVar25 = (int)local_140;
        *(int *)(puVar18 + 8) = iVar25;
        *(int *)((longlong)puVar18 + 0x44) = local_17c;
        puVar18[9] = param_4[1];
        puVar18[10] = param_4[3];
        *(undefined4 *)(puVar18 + 0xb) = *(undefined4 *)(param_4 + 4);
        uVar5 = *(undefined8 *)((longlong)local_188 + 0x13818);
        FUN_1406be258();
        FUN_1406be258();
        FUN_1448e935e(uVar5,&local_d8,&DAT_14ca023d8,0);
        FUN_1406be258();
        puVar12 = local_d8;
        local_188 = uStack_d0;
        FUN_1406be806();
        local_d8._0_4_ = 0;
        local_d8._4_4_ = 0;
        uStack_d0._0_4_ = 0;
        uStack_d0._4_4_ = 0;
        FUN_1448f70da(puVar12,&DAT_14ca062b8,puVar21,&local_d8);
        FUN_140069376(param_2);
        puVar1 = local_1a0;
        uVar22 = (undefined6)((ulonglong)puVar28 >> 0x10);
        uVar19 = (undefined4)CONCAT62(uVar22,2);
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar19 = (undefined4)CONCAT62(uVar22,4);
        }
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar28 + 0x3d;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_1a0,0x1f0);
          puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar28 + 0x3d;
        }
        *local_1a0 = (ulonglong)puVar18;
        uStack_d0._0_4_ = (undefined4)DAT_14ca06300;
        uStack_d0._4_4_ = (undefined4)((ulonglong)DAT_14ca06300 >> 0x20);
        if (DAT_14ca06300 != 0) {
          LOCK();
          *(int *)(DAT_14ca06300 + 8) = *(int *)(DAT_14ca06300 + 8) + 1;
          UNLOCK();
        }
        local_c8 = &DAT_14ca062b8;
        local_1a8 = 2;
        local_d8 = (undefined8 **)puVar21;
        FUN_140068f1a(puVar28,local_118,&local_d8,uVar19);
        *puVar28 = &PTR_FUN_14a288cd0;
        puVar28[0x37] = &DAT_14ca062b8;
        puVar28[0x38] = puVar21;
        puVar28[0x39] = puVar12;
        puVar28[0x3a] = local_188;
        *(uint *)(puVar28 + 0x3b) = iVar25 + 0x3fU >> 6;
        *(undefined1 **)((longlong)puVar28 + 0x1dc) = &DAT_100000001;
        iVar25 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar25 + 1U) {
          FUN_14470e57a(local_170,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar25 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar28);
        uVar11 = local_138;
        lVar10 = *(longlong *)
                  (*(longlong *)(local_158 + 0x8c8) + (longlong)*(int *)(local_158 + 0x8c0) * 8);
        if (lVar10 == 0) {
          puVar12 = (undefined8 *)FUN_14001cc68(0x58,0x10);
          FUN_1446f470e(local_118,L"Lumen.SurfaceCacheFeedbackBuffer",1);
          FUN_14047abb0(puVar12,local_118[0]);
          *puVar12 = &PTR_FUN_14a37f800;
          puVar12[3] = 0;
          puVar12[4] = 0;
          puVar12[5] = 0;
          puVar12[6] = 0;
          puVar12[7] = 0;
          puVar12[8] = 0;
          puVar12[9] = 0;
          puVar12[10] = 0;
          *(undefined8 **)
           (*(longlong *)(local_158 + 0x8c8) + (longlong)*(int *)(local_158 + 0x8c0) * 8) = puVar12;
          lVar10 = *(longlong *)
                    (*(longlong *)(local_158 + 0x8c8) + (longlong)*(int *)(local_158 + 0x8c0) * 8);
        }
        puVar1 = local_1a0;
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar18 + 4;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x30);
          puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar18 + 4;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar12;
        *puVar18 = &PTR_FUN_14a20c998;
        puVar18[2] = 0;
        *(undefined4 *)(puVar18 + 3) = 0x80;
        iVar25 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar25 + 1U) {
          FUN_1448cfae8(local_168,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar25 * 8) = puVar18;
        puVar18[2] = uVar11;
        *(undefined4 *)(puVar18 + 3) = 0x80;
        lVar13 = FUN_1406be90a();
        FUN_140069376(param_2);
        puVar1 = local_1a0;
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar28 + 0x39;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_1a0,0x1d0);
          puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar28 + 0x39;
        }
        *local_1a0 = (ulonglong)puVar12;
        lVar6 = *(longlong *)(lVar13 + 0x48);
        uStack_d0._0_4_ = (undefined4)lVar6;
        uStack_d0._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        local_1a8 = 2;
        local_c8 = (undefined *)lVar13;
        local_d8 = (undefined8 **)(puVar18 + 2);
        FUN_140068f1a(puVar28,&local_60,&local_d8,0x18);
        *puVar28 = &PTR_FUN_14a288cf0;
        puVar28[0x37] = lVar10;
        puVar28[0x38] = uVar11;
        iVar25 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar25 + 1U) {
          FUN_14470e57a(local_170,iVar25);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar25 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar28);
        iVar25 = *(int *)(local_158 + 0x8bc);
        *(int *)(local_158 + 0x8c0) = (*(int *)(local_158 + 0x8c0) + 1) % iVar25;
        iVar9 = *(int *)(local_158 + 0x8c4) + 1;
        if (iVar25 <= iVar9) {
          iVar9 = iVar25;
        }
        *(int *)(local_158 + 0x8c4) = iVar9;
        *(int *)(local_158 + 0x8b8) = *(int *)(local_158 + 0x8b8) + 1;
        param_3 = local_128;
        lVar10 = local_158;
      }
      param_4[2] = 0;
      param_4[3] = 0;
      *param_4 = 0;
      param_4[1] = 0;
      *(undefined4 *)(param_4 + 4) = 0;
    }
    if ((param_4[0x19] != 0) && (param_4[0x1b] != 0)) {
      lVar13 = *(longlong *)(param_4[0x19] + 0x38);
      puVar12 = *(undefined8 **)(lVar10 + 0x7d8);
      if (puVar12 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar10 + 0x7d8) = 0;
        LOCK();
        piVar2 = (int *)(puVar12 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      bVar4 = *(byte *)(lVar13 + 0x24);
      *(byte *)(lVar13 + 0x24) = bVar4 | 0x12;
      plVar16 = (longlong *)(param_2 + 0x1c8);
      iVar25 = *(int *)(param_2 + 0x1d0);
      *(uint *)(param_2 + 0x1d0) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x1d4) < iVar25 + 1U) {
        local_190 = param_4;
        FUN_14010a38e(plVar16,iVar25);
        param_4 = local_190;
      }
      lVar6 = *plVar16;
      *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
      *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x7d8);
      if ((bVar4 & 2) == 0) {
        pcVar3 = (char *)(param_2 + 0x4a8);
        LOCK();
        bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
        if (bVar30) {
          *(char *)(param_2 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar30) {
          FUN_1447d2058();
        }
        iVar25 = *(int *)(param_2 + 0x4b8);
        *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
          local_190 = param_4;
          FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
          param_4 = local_190;
        }
        lVar6 = *(longlong *)(param_2 + 0x4b0);
        *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 1;
        *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
        LOCK();
        cVar14 = *pcVar3;
        if (cVar14 == '\x01') {
          *pcVar3 = '\0';
        }
        UNLOCK();
        if (cVar14 != '\x01') {
          FUN_14008cdb0(pcVar3);
        }
      }
      lVar13 = *(longlong *)(param_4[0x1b] + 0x38);
      puVar12 = *(undefined8 **)(lVar10 + 0x7e0);
      if (puVar12 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar10 + 0x7e0) = 0;
        LOCK();
        piVar2 = (int *)(puVar12 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      bVar4 = *(byte *)(lVar13 + 0x24);
      *(byte *)(lVar13 + 0x24) = bVar4 | 0x12;
      iVar25 = *(int *)(param_2 + 0x1d0);
      *(uint *)(param_2 + 0x1d0) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x1d4) < iVar25 + 1U) {
        FUN_14010a38e(plVar16,iVar25);
      }
      lVar6 = *plVar16;
      *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
      *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x7e0);
      if ((bVar4 & 2) == 0) {
        pcVar3 = (char *)(param_2 + 0x4a8);
        LOCK();
        bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
        if (bVar30) {
          *(char *)(param_2 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar30) {
          FUN_1447d2058();
        }
        iVar25 = *(int *)(param_2 + 0x4b8);
        *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
        if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
          FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
        }
        lVar10 = *(longlong *)(param_2 + 0x4b0);
        *(undefined8 *)(lVar10 + (longlong)iVar25 * 0x10) = 1;
        *(longlong *)(lVar10 + 8 + (longlong)iVar25 * 0x10) = lVar13;
        LOCK();
        cVar14 = *pcVar3;
        if (cVar14 == '\x01') {
          *pcVar3 = '\0';
        }
        UNLOCK();
        if (cVar14 != '\x01') {
          FUN_14008cdb0(pcVar3);
        }
      }
    }
  }
  if (param_4[5] != 0) {
    lVar10 = *(longlong *)(param_3 + 0x13ad8);
    if (lVar10 == 0) {
      uVar17 = *(uint *)(param_3 + 0x1de0);
      if (uVar17 == 0) {
        iVar25 = 0x20;
      }
      else {
        iVar25 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> iVar25 & 1) == 0; iVar25 = iVar25 + 1) {
          }
        }
      }
      if (*(longlong *)(param_3 + 0x3108) == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined4 *)(*(longlong *)(param_3 + 0x3108) + 0x24);
      }
      lVar10 = FUN_140c6b718(*(undefined8 *)(local_160 + 8),uVar19,iVar25);
    }
    lVar13 = param_4[9];
    plVar16 = *(longlong **)(lVar10 + 0x808);
    if (plVar16 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x808) = 0;
      (**(code **)(*plVar16 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    plVar16 = (longlong *)(param_2 + 0x1b8);
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x808);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[5];
    plVar7 = *(longlong **)(lVar10 + 0x7e8);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x7e8) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x7e8);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[6];
    plVar7 = *(longlong **)(lVar10 + 0x7f0);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x7f0) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x7f0);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[7];
    plVar7 = *(longlong **)(lVar10 + 0x7f8);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x7f8) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x7f8);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[8];
    plVar7 = *(longlong **)(lVar10 + 0x800);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x800) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x800);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[10];
    plVar7 = *(longlong **)(lVar10 + 0x810);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x810) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x810);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[0xb];
    plVar7 = *(longlong **)(lVar10 + 0x818);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x818) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x818);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[0xc];
    plVar7 = *(longlong **)(lVar10 + 0x820);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x820) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x820);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[0xd];
    plVar7 = *(longlong **)(lVar10 + 0x828);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar10 + 0x828) = 0;
      (**(code **)(*plVar7 + 0x38))();
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 2;
    *(undefined1 *)(lVar13 + 0x26) = 1;
    iVar25 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar16,iVar25);
    }
    lVar6 = *plVar16;
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x828);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[0xe];
    puVar12 = *(undefined8 **)(lVar10 + 0x830);
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar10 + 0x830) = 0;
      LOCK();
      piVar2 = (int *)(puVar12 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar12)(puVar12,1);
      }
    }
    bVar4 = *(byte *)(lVar13 + 0x24);
    *(byte *)(lVar13 + 0x24) = bVar4 | 0x12;
    iVar25 = *(int *)(param_2 + 0x1d0);
    *(uint *)(param_2 + 0x1d0) = iVar25 + 1U;
    if (*(uint *)(param_2 + 0x1d4) < iVar25 + 1U) {
      FUN_14010a38e((longlong *)(param_2 + 0x1c8),iVar25);
    }
    lVar6 = *(longlong *)(param_2 + 0x1c8);
    *(longlong *)(lVar6 + (longlong)iVar25 * 0x10) = lVar13;
    *(undefined8 **)(lVar6 + 8 + (longlong)iVar25 * 0x10) = (undefined8 *)(lVar10 + 0x830);
    if ((bVar4 & 2) == 0) {
      pcVar3 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar30 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar30) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar30) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar25);
      }
      lVar6 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar6 + (longlong)iVar25 * 0x10) = 1;
      *(longlong *)(lVar6 + 8 + (longlong)iVar25 * 0x10) = lVar13;
      LOCK();
      cVar14 = *pcVar3;
      if (cVar14 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    lVar13 = param_4[0xf];
    if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x24) & 4) != 0)) {
      FUN_144885680(param_2,lVar13,lVar10 + 0x860,0);
    }
    lVar13 = param_4[0x10];
    if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x24) & 4) != 0)) {
      FUN_144885680(param_2,lVar13,lVar10 + 0x868,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1406be47e(local_160,param_2,param_4);
  return;
}



// FUNCTION 1406be014 FUN_1406be014 body=289 status=ok
// SIG undefined FUN_1406be014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1406be014(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02230) {
    FUN_144b3d300(&DAT_14ca02230);
    if (DAT_14ca02230 == -1) {
      FUN_1406be702();
      FUN_14573735c();
      FUN_140db5666(&DAT_14ca02188,0,&DAT_14ca02120,L"FBuildFeedbackHashTableIndirectArgsCS",
                    L"/Engine/Private/Lumen/SurfaceCache/LumenSurfaceCacheFeedback.usf",
                    L"BuildFeedbackHashTableIndirectArgsCS",5,1,FUN_147221a8a,FUN_147221a2a,
                    &LAB_1462e73ba,&LAB_147221a26,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca061a8)
      ;
      _DAT_14ca02188 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db8eba);
      _Init_thread_footer(&DAT_14ca02230);
    }
  }
  return &DAT_14ca02188;
}



// FUNCTION 1406be136 FUN_1406be136 body=289 status=ok
// SIG undefined FUN_1406be136(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1406be136(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02358) {
    FUN_144b3d300(&DAT_14ca02358);
    if (DAT_14ca02358 == -1) {
      FUN_1406be37a();
      FUN_1457374a6();
      FUN_140db5666(&DAT_14ca022b0,0,&DAT_14ca02248,L"FBuildFeedbackHashTableCS",
                    L"/Engine/Private/Lumen/SurfaceCache/LumenSurfaceCacheFeedback.usf",
                    L"BuildFeedbackHashTableCS",5,1,FUN_147221b50,FUN_147221af0,&LAB_1462e73c4,
                    &LAB_147221aec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06230);
      _DAT_14ca022b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db8ec6);
      _Init_thread_footer(&DAT_14ca02358);
    }
  }
  return &DAT_14ca022b0;
}



// FUNCTION 1406be258 FUN_1406be258 body=289 status=ok
// SIG undefined FUN_1406be258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1406be258(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02480) {
    FUN_144b3d300(&DAT_14ca02480);
    if (DAT_14ca02480 == -1) {
      FUN_1406be806();
      FUN_1457375f0();
      FUN_140db5666(&DAT_14ca023d8,0,&DAT_14ca02370,L"FCompactFeedbackHashTableCS",
                    L"/Engine/Private/Lumen/SurfaceCache/LumenSurfaceCacheFeedback.usf",
                    L"CompactFeedbackHashTableCS",5,1,FUN_147221c16,FUN_147221bb6,&LAB_1462e73ce,
                    &LAB_147221bb2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca062b8);
      _DAT_14ca023d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db8ed2);
      _Init_thread_footer(&DAT_14ca02480);
    }
  }
  return &DAT_14ca023d8;
}



// FUNCTION 1406be37a FUN_1406be37a body=258 status=ok
// SIG undefined FUN_1406be37a(void)

void FUN_1406be37a(void)

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
              0x110) < DAT_14ca062b0) {
    FUN_144b3d300(&DAT_14ca062b0);
    if (DAT_14ca062b0 == -1) {
      FUN_145737936(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0xab;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06230,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3417);
      _Init_thread_footer(&DAT_14ca062b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406be47e FUN_1406be47e body=644 status=ok
// SIG undefined FUN_1406be47e(void)

void FUN_1406be47e(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  
  if (0 < *(int *)(param_1 + 0x3f0)) {
    lVar10 = 0x3108;
    pcVar1 = (char *)(param_2 + 0x4a8);
    lVar12 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 1000);
      lVar7 = *(longlong *)(lVar6 + lVar10);
      if ((lVar7 != 0) && ((*(byte *)(lVar6 + 0xf4a8 + lVar10) & 1) == 0)) {
        lVar8 = *(longlong *)(param_3 + 0x338);
        puVar2 = (undefined8 *)(lVar7 + 0x1c40);
        plVar11 = *(longlong **)(lVar7 + 0x1c40);
        if (lVar8 == 0) {
          if (plVar11 != (longlong *)0x0) {
            *puVar2 = 0;
            (**(code **)(*plVar11 + 0x38))();
          }
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            *puVar2 = 0;
            (**(code **)(*plVar11 + 0x38))();
          }
          bVar4 = *(byte *)(lVar8 + 0x24);
          *(byte *)(lVar8 + 0x24) = bVar4 | 2;
          *(undefined1 *)(lVar8 + 0x26) = 1;
          iVar5 = *(int *)(param_2 + 0x1c0);
          *(uint *)(param_2 + 0x1c0) = iVar5 + 1U;
          if (*(uint *)(param_2 + 0x1c4) < iVar5 + 1U) {
            FUN_14017e38e((longlong *)(param_2 + 0x1b8),iVar5);
          }
          lVar7 = *(longlong *)(param_2 + 0x1b8);
          *(longlong *)(lVar7 + (longlong)iVar5 * 0x10) = lVar8;
          *(undefined8 **)(lVar7 + 8 + (longlong)iVar5 * 0x10) = puVar2;
          if ((bVar4 & 2) == 0) {
            LOCK();
            bVar13 = *(char *)(param_2 + 0x4a8) == '\0';
            if (bVar13) {
              *(char *)(param_2 + 0x4a8) = '\x01';
            }
            UNLOCK();
            if (!bVar13) {
              FUN_1447d2058(pcVar1);
            }
            iVar5 = *(int *)(param_2 + 0x4b8);
            *(uint *)(param_2 + 0x4b8) = iVar5 + 1U;
            if (*(uint *)(param_2 + 0x4bc) < iVar5 + 1U) {
              FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar5);
            }
            lVar7 = *(longlong *)(param_2 + 0x4b0);
            *(undefined8 *)(lVar7 + (longlong)iVar5 * 0x10) = 2;
            *(longlong *)(lVar7 + 8 + (longlong)iVar5 * 0x10) = lVar8;
            LOCK();
            cVar3 = *pcVar1;
            if (cVar3 == '\x01') {
              *pcVar1 = '\0';
            }
            UNLOCK();
            if (cVar3 != '\x01') {
              FUN_14008cdb0(pcVar1);
            }
          }
        }
        plVar11 = (longlong *)(*(longlong *)(lVar6 + lVar10) + 0x1c48);
        if (*(longlong *)(param_3 + 0x340) == 0) {
          plVar9 = (longlong *)*plVar11;
          if (plVar9 != (longlong *)0x0) {
            *plVar11 = 0;
            (**(code **)(*plVar9 + 0x38))();
          }
        }
        else {
          FUN_144885680(param_2,*(longlong *)(param_3 + 0x340),plVar11,0);
        }
      }
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x13c10;
    } while (lVar12 < *(int *)(param_1 + 0x3f0));
  }
  return;
}



// FUNCTION 1406be702 FUN_1406be702 body=258 status=ok
// SIG undefined FUN_1406be702(void)

void FUN_1406be702(void)

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
              0x110) < DAT_14ca06228) {
    FUN_144b3d300(&DAT_14ca06228);
    if (DAT_14ca06228 == -1) {
      FUN_14573773a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x8f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca061a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd340b);
      _Init_thread_footer(&DAT_14ca06228);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406be806 FUN_1406be806 body=258 status=ok
// SIG undefined FUN_1406be806(void)

void FUN_1406be806(void)

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
              0x110) < DAT_14ca06338) {
    FUN_144b3d300(&DAT_14ca06338);
    if (DAT_14ca06338 == -1) {
      FUN_145737b32(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xd1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca062b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3423);
      _Init_thread_footer(&DAT_14ca06338);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406be90a FUN_1406be90a body=265 status=ok
// SIG undefined FUN_1406be90a(void)

undefined * FUN_1406be90a(void)

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
              0x110) < DAT_14c9c9d18) {
    FUN_144b3d300(&DAT_14c9c9d18);
    if (DAT_14c9c9d18 == -1) {
      FUN_145737db4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FReadbackBufferParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x4bd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c9c98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bf4cca);
      _Init_thread_footer(&DAT_14c9c9d18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c9c98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406bea14 caseD_26 body=27 status=ok
// SIG undefined caseD_26(void)

byte switchD_143c3d4dc::caseD_26(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_1406bea30(&DAT_14c9514d0,*(undefined8 *)(param_1 + 0x10));
  return bVar1 ^ 1;
}



// FUNCTION 1406bea30 FUN_1406bea30 body=801 status=ok
// SIG undefined FUN_1406bea30(void)

ulonglong FUN_1406bea30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x18);
  local_50 = lVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar8 = (uint)lVar1;
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
  if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
    plVar4 = param_1 + 0x1b;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1c];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x1d] - 1U &
                    iVar6 + (uVar8 << 0x10 | uVar8 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar8 & 0xffff) >> 4)) * 4);
    if (iVar5 != -1) {
      lVar2 = param_1[0x14];
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x10) == lVar1) goto LAB_1406becff;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar2 + 8);
      } while (iVar5 != -1);
    }
  }
  if ((int)param_1[0x1f] != *(int *)((longlong)param_1 + 0x124)) {
    plVar4 = param_1 + 0x25;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x26];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x27] - 1U &
                    iVar6 + (uVar8 << 0x10 | uVar8 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar8 & 0xffff) >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = param_1[0x1e];
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x10) == lVar1) {
          uVar7 = 0;
          goto LAB_1406bed1f;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar2 + 8);
      } while (iVar6 != -1);
    }
  }
  if (param_2 != 0) {
    iVar6 = (int)param_1[0xb];
    iVar5 = *(int *)((longlong)param_1 + 0x84);
    do {
      bVar11 = iVar6 != iVar5;
      iVar6 = iVar5;
      if (bVar11) {
        FUN_1468c0060(&local_58,param_2);
        iVar6 = (int)param_1[0xb];
        iVar9 = *(int *)((longlong)param_1 + 0x84);
        iVar5 = iVar6;
        if (iVar6 != iVar9) {
          uVar3 = (uint)((ulonglong)local_58 >> 0x10);
          uVar8 = (uint)local_58 & 0xffff;
          plVar4 = (longlong *)param_1[0x12];
          if ((longlong *)param_1[0x12] == (longlong *)0x0) {
            plVar4 = param_1 + 0x11;
          }
          iVar10 = *(int *)((longlong)plVar4 +
                           (ulonglong)
                           ((int)param_1[0x13] - 1U &
                           (int)((ulonglong)local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar8) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
          iVar5 = iVar9;
          if (iVar10 != -1) {
            do {
              if (*(longlong *)(param_1[10] + (longlong)iVar10 * 0x10) == local_58)
              goto LAB_1406becea;
              iVar10 = *(int *)((longlong)iVar10 * 0x10 + param_1[10] + 8);
            } while (iVar10 != -1);
          }
        }
      }
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar1 = *(longlong *)(param_2 + 0x18);
        uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar8 = (uint)lVar1 & 0xffff;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = param_1 + 7;
        }
        iVar9 = *(int *)((longlong)plVar4 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar8) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x10) == lVar1) goto LAB_1406becea;
            iVar9 = *(int *)((longlong)iVar9 * 0x10 + *param_1 + 8);
          } while (iVar9 != -1);
        }
      }
      param_2 = *(longlong *)(param_2 + 0x40);
    } while (param_2 != 0);
  }
  uVar7 = 0;
  FUN_144a13f80(param_1 + 0x1e,local_5c,&local_50,0);
LAB_1406bed1f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
LAB_1406becea:
  FUN_144a13f80(param_1 + 0x14,local_5c,&local_50,0);
LAB_1406becff:
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  goto LAB_1406bed1f;
}



// FUNCTION 1406bed5c FUN_1406bed5c body=692 status=ok
// SIG undefined FUN_1406bed5c(void)

void FUN_1406bed5c(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  PSRWLOCK SRWLock;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  char *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406bf012(local_50);
  if (*param_2 == 1) {
    iVar12 = *(int *)(param_2 + 0x30);
    uVar11 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar12);
    *(int *)(param_2 + 0x30) = iVar12 + 1;
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar12 * 8);
    iVar12 = *(int *)(param_2 + 0x44) * uVar11;
    bVar7 = 1;
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar15 = uVar3 & 0x7fff;
    uVar11 = (uint)(uVar3 >> 0xf);
    lVar6 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar3 < 0) {
      lVar8 = (ulonglong)(uVar15 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70);
    }
    else {
      iVar12 = **(int **)(lVar6 + 0x20);
      lVar8 = 0;
      if (iVar12 <= (int)uVar15) {
        do {
          uVar15 = uVar15 - iVar12;
          iVar12 = (*(int **)(lVar6 + 0x20))[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (iVar12 <= (int)uVar15);
      }
      lVar8 = (longlong)(int)uVar15 + *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar8 * 8);
    }
    iVar12 = *(int *)(lVar6 + 0x4c) * uVar11;
    bVar7 = *param_2;
  }
  if ((bVar7 & 1) == 0) {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar15 = uVar3 & 0x7fff;
    if (uVar15 == 0x7fff) {
      local_60 = &local_54;
      local_58 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x80);
      local_58 = 1;
      local_60 = (undefined4 *)
                 ((ulonglong)(uVar15 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x30);
    bVar7 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar4);
    local_58 = (uint)bVar7;
    *(int *)(param_2 + 0x30) = iVar4 + 1;
    local_60 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar7 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar4 * 8));
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_48 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_48 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_48 == '\x01') {
      plVar14 = (longlong *)(local_48 + 0x10);
      goto LAB_1406bee7d;
    }
  }
  plVar14 = (longlong *)(lVar6 + 0x50);
LAB_1406bee7d:
  pbVar1 = param_2 + 0x3c;
  pbVar10 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar10 = pbVar1;
  }
  if ((int)plVar14[1] < 1) {
    if (0 < *(int *)pbVar10) {
      iVar12 = 0;
      do {
        puVar2 = local_60 + (int)local_58;
        *local_60 = 0;
        iVar12 = iVar12 + 1;
        pbVar10 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != 0) {
          pbVar10 = pbVar1;
        }
        local_60 = puVar2;
      } while (iVar12 < *(int *)pbVar10);
    }
  }
  else if (0 < *(int *)pbVar10) {
    puVar9 = (uint *)(lVar8 + (longlong)iVar12 * 4);
    uVar15 = (int)plVar14[1] - 1;
    iVar12 = 0;
    do {
      uVar13 = *puVar9;
      if ((int)uVar15 <= (int)*puVar9) {
        uVar13 = uVar15;
      }
      if ((int)uVar13 < 1) {
        uVar13 = 0;
      }
      puVar2 = local_60 + (int)local_58;
      *local_60 = *(undefined4 *)(*plVar14 + (ulonglong)uVar13 * 4);
      iVar12 = iVar12 + 1;
      pbVar10 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar10 = pbVar1;
      }
      puVar9 = (uint *)((longlong)puVar9 + (ulonglong)(uVar11 << 2));
      local_60 = puVar2;
    } while (iVar12 < *(int *)pbVar10);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406bf012 FUN_1406bf012 body=148 status=ok
// SIG undefined FUN_1406bf012(void)

void FUN_1406bf012(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 1406bf0a6 FUN_1406bf0a6 body=1013 status=ok
// SIG undefined FUN_1406bf0a6(void)

longlong * FUN_1406bf0a6(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  uint *local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined1 local_108 [48];
  longlong local_d8;
  longlong *local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar6 = FUN_1401f66f6(param_2,DAT_14c9974a8);
  FUN_1406bf76c(local_108,param_2);
  if ((local_d8 == 0) || (local_a0 == (longlong *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_118 = 0;
    uStack_110 = 0;
    if (0 < (int)uVar6) {
      uVar16 = 0;
      cVar5 = DAT_14c75f3b2;
      do {
        uVar13 = uStack_110;
        if (*(int *)(*(longlong *)(local_d8 + 0x10) + uVar16 * 4) == (int)cVar5) {
          lVar12 = (longlong)(int)uStack_110;
          uVar8 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
          if (uStack_110._4_4_ < uVar8) {
            FUN_1406bf612(&local_118,uVar13 & 0xffffffff);
            cVar5 = DAT_14c75f3b2;
          }
          *(int *)(local_118 + lVar12 * 8) = (int)uVar16;
          *(undefined4 *)(local_118 + 4 + lVar12 * 8) = 0;
        }
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
    }
    *param_1 = 0;
    param_1[1] = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    if (uVar6 != 0) {
      FUN_14481578e(param_1,uVar6);
    }
LAB_1406bf19c:
    if ((int)uStack_110 != 0) {
      uVar4 = *(undefined8 *)(local_118 + -8 + (longlong)(int)uStack_110 * 8);
      uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + -1);
      FUN_1406bf49c(&local_118);
      uVar6 = (uint)uVar4;
      if (((((int)((ulonglong)uVar4 >> 0x20) != 1) && (-1 < (int)uVar6)) &&
          (local_a0 != (longlong *)0x0)) &&
         (iVar7 = (**(code **)(*local_a0 + 0x60))(), uVar16 = uStack_110, (int)uVar6 < iVar7)) {
        plVar19 = (longlong *)((ulonglong)(uVar6 & 0x7fffffff) * 0x50 + local_a0[2]);
        if ((plVar19 != (longlong *)0x0) && ((int)plVar19[1] != *(int *)((longlong)plVar19 + 0x34)))
        {
          lVar12 = (longlong)(int)uStack_110;
          uVar8 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
          if (uStack_110._4_4_ < uVar8) {
            FUN_1406bf612(&local_118,uVar16 & 0xffffffff);
          }
          *(ulonglong *)(local_118 + lVar12 * 8) = (ulonglong)(uVar6 & 0x7fffffff) | 0x100000000;
          puVar15 = (uint *)(plVar19 + 2);
          uVar6 = *(uint *)(plVar19 + 5);
          uVar16 = (ulonglong)uVar6;
          if (uVar6 == 0) {
            uVar13 = 1;
            uVar18 = 0;
            uVar8 = 0;
            iVar7 = 0;
          }
          else {
            puVar9 = (uint *)plVar19[4];
            if ((uint *)plVar19[4] == (uint *)0x0) {
              puVar9 = puVar15;
            }
            uVar8 = *puVar9;
            if (uVar8 == 0) {
              iVar7 = uVar6 + 0x1e;
              if (-1 < (int)(uVar6 - 1)) {
                iVar7 = uVar6 - 1;
              }
              uVar18 = 0;
              uVar13 = (ulonglong)(uint)(iVar7 >> 5);
              if (iVar7 >> 5 < 1) {
                uVar13 = uVar18;
              }
              iVar7 = 0;
              do {
                if (uVar13 == uVar18) goto LAB_1406bf19c;
                iVar7 = iVar7 + 0x20;
                uVar8 = puVar9[uVar18 + 1];
                uVar18 = uVar18 + 1;
              } while (uVar8 == 0);
            }
            else {
              uVar18 = 0;
              iVar7 = 0;
            }
            uVar13 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar13 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar8 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if ((int)uVar6 <= (int)uVar8) {
              uVar8 = uVar6;
            }
          }
          if (uVar8 != uVar6) {
            uVar6 = 0xffffffff;
            local_128 = uVar16;
            local_120 = puVar15;
            do {
              uVar1 = uStack_110;
              uVar2 = *(undefined4 *)(*plVar19 + (longlong)(int)uVar8 * 0xc);
              lVar12 = (longlong)(int)uStack_110;
              uVar8 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
              if (uStack_110._4_4_ < uVar8) {
                FUN_1406bf612(&local_118,uVar1 & 0xffffffff);
                uVar16 = local_128;
                puVar15 = local_120;
              }
              *(undefined4 *)(local_118 + lVar12 * 8) = uVar2;
              *(undefined4 *)(local_118 + 4 + lVar12 * 8) = 0;
              uVar6 = uVar6 & ~(uint)uVar13;
              puVar9 = (uint *)plVar19[4];
              if ((uint *)plVar19[4] == (uint *)0x0) {
                puVar9 = puVar15;
              }
              uVar3 = *(uint *)(plVar19 + 5);
              iVar17 = (int)uVar18;
              lVar12 = (longlong)iVar17;
              uVar8 = puVar9[lVar12] & uVar6;
              if (uVar8 == 0) {
                iVar10 = uVar3 + 0x1e;
                if (-1 < (int)(uVar3 - 1)) {
                  iVar10 = uVar3 - 1;
                }
                iVar10 = iVar10 >> 5;
                iVar7 = iVar7 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar17) {
                  iVar11 = iVar17;
                }
                uVar16 = local_128;
                if (iVar17 < iVar10) {
                  lVar14 = 0;
                  do {
                    uVar8 = puVar9[lVar12 + lVar14 + 1];
                    if (uVar8 != 0) {
                      uVar18 = (ulonglong)(iVar17 + (int)lVar14 + 1);
                      uVar6 = 0xffffffff;
                      goto LAB_1406bf39c;
                    }
                    iVar7 = iVar7 + 0x20;
                    lVar14 = lVar14 + 1;
                  } while (iVar11 - lVar12 != lVar14);
                  uVar6 = 0xffffffff;
                  iVar17 = iVar11;
                }
                uVar18 = (ulonglong)(iVar17 + 1);
                uVar8 = uVar3;
              }
              else {
LAB_1406bf39c:
                uVar13 = (ulonglong)(-uVar8 & uVar8);
                uVar1 = uVar13 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                uVar8 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                if ((int)uVar3 <= (int)uVar8) {
                  uVar8 = uVar3;
                }
              }
            } while (uVar8 != (uint)uVar16);
          }
          goto LAB_1406bf19c;
        }
      }
      iVar7 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
        FUN_1446f48e2(param_1,iVar7);
      }
      *(uint *)(*param_1 + (longlong)iVar7 * 4) = uVar6;
      goto LAB_1406bf19c;
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1406bf49c FUN_1406bf49c body=374 status=ok
// SIG undefined FUN_1406bf49c(void)

void FUN_1406bf49c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406bf545;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1406bf545:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
    }
  }
  return;
}



// FUNCTION 1406bf612 FUN_1406bf612 body=346 status=ok
// SIG undefined FUN_1406bf612(void)

void FUN_1406bf612(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406bf6a4;
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
LAB_1406bf6a4:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1406bf76c FUN_1406bf76c body=188 status=ok
// SIG undefined FUN_1406bf76c(void)

undefined8 * FUN_1406bf76c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = DAT_14c9974b8;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[6] = uVar1;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = DAT_14c9974c0;
  param_1[10] = DAT_14c9974a8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = FUN_140b35e94(param_2);
  param_1[0xd] = uVar1;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_14c9974a0;
  param_1[0x11] = DAT_14c9974a8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x14] = uVar1;
  return param_1;
}



// FUNCTION 1406bf828 FUN_1406bf828 body=422 status=ok
// SIG undefined FUN_1406bf828(void)

undefined8 FUN_1406bf828(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined8 local_130 [2];
  undefined4 auStack_120 [48];
  undefined8 uStack_60;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  longlong lStack_4b;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_130,0,0xd0);
  lVar2 = 0x10;
  do {
    *(undefined8 *)((longlong)local_130 + lVar2) = 0;
    *(undefined8 *)((longlong)local_130 + lVar2 + 8) = 0;
    *(undefined4 *)((longlong)auStack_120 + lVar2) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xd0);
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_53 = 0;
  lStack_4b = (ulonglong)(*param_2 != 0) << 0x38;
  uVar1 = *(undefined4 *)(param_1 + 0x214);
  lVar2 = param_2[1] + 0xa0;
  if (param_2[1] == 0) {
    lVar2 = 0;
  }
  local_138[0] = 1;
  FUN_1406bf9cf(local_130,lVar2,uVar1,0);
  lVar2 = param_2[3] + 0xa0;
  if (param_2[3] == 0) {
    lVar2 = 0;
  }
  local_138[0] = 0;
  FUN_1406bf9cf(local_130,lVar2,uVar1,3);
  lVar2 = param_2[4] + 0xa0;
  if (param_2[4] == 0) {
    lVar2 = 0;
  }
  local_138[0] = 0;
  FUN_1406bf9cf(local_130,lVar2,uVar1,4);
  lVar2 = param_2[2] + 0xa0;
  if (param_2[2] == 0) {
    lVar2 = 0;
  }
  local_138[0] = 1;
  FUN_1406bf9cf(local_130,lVar2,uVar1,1);
  lVar2 = param_2[5] + 0xa0;
  if (param_2[5] == 0) {
    lVar2 = 0;
  }
  local_138[0] = 0;
  FUN_1406bf9cf(local_130,lVar2,uVar1,2);
  uVar3 = FUN_1406bfa6a(param_1 + 0x238,local_130);
  lVar2 = 0xc0;
  do {
    if (*(longlong *)(local_138 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406bf9cf FUN_1406bf9cf body=155 status=ok
// SIG undefined FUN_1406bf9cf(void)

void FUN_1406bf9cf(longlong param_1,longlong param_2,undefined4 param_3,ulonglong param_4,
                  undefined1 param_5)

{
  undefined8 in_RAX;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    FUN_14317dcda(param_3,param_2 + 0x10,param_1 + (param_4 & 0xffffffff) * 4 + 0xd0,
                  CONCAT71((int7)((ulonglong)in_RAX >> 8),param_5) & 0xffffffff);
    if ((longlong)*(int *)(param_2 + 0x28) == 0) {
      bVar2 = false;
    }
    else {
      lVar1 = 0;
      do {
        bVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar1) == 0x1002;
        if (bVar2) break;
        bVar3 = (longlong)*(int *)(param_2 + 0x28) * 0xc + -0xc != lVar1;
        lVar1 = lVar1 + 0xc;
      } while (bVar3);
    }
    *(byte *)(param_1 + 0xec) =
         *(byte *)(param_1 + 0xec) & 0xfd | ((*(byte *)(param_1 + 0xec) & 2) >> 1 | bVar2) * '\x02';
  }
  FUN_14317de36(param_1,param_2);
  return;
}



// FUNCTION 1406bfa6a FUN_1406bfa6a body=130 status=ok
// SIG undefined FUN_1406bfa6a(void)

undefined8 FUN_1406bfa6a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar2 = FUN_1406bfaec(param_2);
  iVar3 = FUN_144a1a8e2((longlong *)(param_1 + 0x30),uVar2,param_2);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if ((lVar1 + (longlong)iVar3 * 0x100 != 0) &&
       (puVar4 = (undefined8 *)((longlong)iVar3 * 0x100 + lVar1 + 0xf0), puVar4 != (undefined8 *)0x0
       )) {
      uVar5 = *puVar4;
      goto LAB_1406bfac6;
    }
  }
  uVar5 = FUN_1406bfbcc(param_1,param_2);
LAB_1406bfac6:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar5;
}



// FUNCTION 1406bfaec FUN_1406bfaec body=223 status=ok
// SIG undefined FUN_1406bfaec(void)

uint FUN_1406bfaec(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  lVar3 = 0;
  do {
    bVar1 = (byte)param_1[lVar3 + 0x34];
    uVar4 = (bVar1 >> 2) + 0x9e3779b9 +
            (uint)bVar1 * 0x40 + (uint)*(byte *)((longlong)param_1 + lVar3 * 4 + 0xd1) ^ (uint)bVar1
    ;
    uVar4 = (uVar4 >> 2) + 0x9e3779b9 +
            uVar4 * 0x40 + (uint)*(byte *)((longlong)param_1 + lVar3 * 4 + 0xd2) ^ uVar4;
    uVar2 = (uVar2 >> 2) + uVar2 * 0x40 + -0x61c88647 +
            ((uVar4 >> 2) + 0x9e3779b9 +
             uVar4 * 0x40 + (uint)*(byte *)((longlong)param_1 + lVar3 * 4 + 0xd3) ^ uVar4) ^ uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 6);
  uVar2 = (uVar2 >> 2) + uVar2 * 0x40 + param_1[0x3a] + 0x9e3779b9 ^ uVar2;
  return (uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + (uint)(byte)param_1[0x3b] ^ uVar2;
}



// FUNCTION 1406bfbcc FUN_1406bfbcc body=212 status=ok
// SIG undefined FUN_1406bfbcc(void)

undefined8 * FUN_1406bfbcc(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  *local_48 = *param_1;
  local_48[1] = 0;
  lVar1 = 0x2a;
  do {
    *(undefined4 *)((longlong)local_48 + lVar1 + 3) = 0;
    *(undefined4 *)((longlong)local_48 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x8a);
  *(undefined8 *)((longlong)local_48 + 0xa9) = 0;
  *(undefined8 *)((longlong)local_48 + 0xb1) = 0;
  local_48[0x14] = 0;
  local_48[0x15] = 0;
  local_48[0x12] = 0;
  local_48[0x13] = 0;
  *(undefined4 *)((longlong)local_48 + 0xb9) = 0xffffffff;
  FUN_1406bfca2(local_48,param_2);
  local_38 = &local_48;
  local_40 = param_2;
  FUN_1406bffa0(param_1 + 6,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406bfca2 FUN_1406bfca2 body=165 status=ok
// SIG undefined FUN_1406bfca2(void)

void FUN_1406bfca2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_778 [32];
  undefined1 local_758 [4];
  undefined1 local_754;
  undefined1 local_753;
  undefined1 local_752;
  undefined1 local_751;
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_778;
  FUN_1406c0fd8(local_758,param_2,*(undefined4 *)(*param_1 + 0x214));
  *(undefined1 *)((longlong)param_1 + 0xb9) = local_754;
  *(undefined1 *)((longlong)param_1 + 0xbb) = local_752;
  *(undefined1 *)((longlong)param_1 + 0xbc) = local_751;
  *(undefined1 *)((longlong)param_1 + 0xba) = local_753;
  FUN_1406bfd48(param_1,local_50,(*(int *)(param_2 + 0xe8) - 1U & 0xfffffffd) == 0);
  if ((local_20 ^ (ulonglong)auStack_778) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406bfd48 FUN_1406bfd48 body=567 status=ok
// SIG undefined FUN_1406bfd48(void)

void FUN_1406bfd48(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  longlong *local_190;
  longlong local_188 [4];
  longlong *local_168;
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar3 = *(longlong **)(*param_1 + 8);
  local_168 = (longlong *)0x0;
  uVar2 = *(undefined4 *)(*param_1 + 0xc0);
  plVar1 = param_1 + 0x12;
  plVar4 = (longlong *)param_1[0x12];
  if (plVar4 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  iVar5 = FUN_1406c03a7(param_2,uVar2,plVar1,&local_168);
  if (local_168 != (longlong *)0x0) {
    uVar6 = (**(code **)(*local_168 + 0x18))();
    FUN_144a81018(local_160,uVar6);
    FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12RootSignature.cpp",0x22f,
                  L"D3DX12SerializeVersionedRootSignature failed with error %s",local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if (iVar5 < 0) {
    local_190 = local_188 + 2;
    local_188[2] = 0;
    local_188[3] = 0;
    local_198 = (undefined *)0x0;
    FUN_145763094(iVar5,"SerializeHR",".\\Runtime/D3D12RHI/Private/D3D12RootSignature.cpp",0x231);
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    param_1[1] = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  uVar6 = (**(code **)(*(longlong *)*plVar1 + 0x20))();
  uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
  uVar8 = 1;
  if (DAT_14ca81480 == 0) {
    uVar8 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  local_198 = &DAT_14a34da88;
  local_190 = param_1 + 1;
  iVar5 = (**(code **)(*plVar3 + 0x80))(plVar3,uVar8,uVar7,uVar6);
  if (iVar5 < 0) {
    local_190 = local_188;
    local_188[0] = 0;
    local_188[1] = 0;
    local_198 = (undefined *)0x0;
    FUN_145763094(iVar5,
                  "Device->CreateRootSignature(FRHIGPUMask::All().GetNative(), RootSignatureBlob->GetBufferPointer(), RootSignatureBlob->GetBufferSize(), IID_PPV_ARGS(RootSignature.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12RootSignature.cpp",0x237);
  }
  FUN_1406bff80(param_1,param_2,param_3);
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406bff80 FUN_1406bff80 body=31 status=ok
// SIG undefined FUN_1406bff80(void)

void FUN_1406bff80(undefined8 param_1,int *param_2)

{
  if (*param_2 == 2) {
    FUN_1406c091a(param_1,param_2 + 2);
    return;
  }
  if (*param_2 == 1) {
    FUN_14737ffd2(param_1,param_2 + 2);
    return;
  }
  return;
}



// FUNCTION 1406bffa0 FUN_1406bffa0 body=1031 status=ok
// SIG undefined FUN_1406bffa0(void)

void FUN_1406bffa0(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  void *_Src;
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar24 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar24 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar24) {
      FUN_1406c169c(param_1,iVar24);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar20 = param_1 + 2;
    iVar18 = iVar14 + 1;
    iVar23 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar23 = iVar14;
    }
    if (iVar23 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar18;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar18 = 0x80;
          iVar12 = iVar14;
        }
        else {
          uVar13 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar13) {
              uVar15 = uVar13;
            }
          }
          else {
            uVar15 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar19 = FUN_144a3809e(uVar15 << 2,0);
          iVar12 = (int)(uVar19 >> 2);
          iVar18 = -0x20;
          if ((int)uVar13 <= iVar12) {
            iVar18 = iVar12 << 5;
          }
          iVar12 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar18;
        FUN_1446efbd8(plVar20,iVar12);
        iVar18 = (int)param_1[5] + 1;
      }
      iVar12 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar12 = iVar18;
      }
      *(int *)(param_1 + 5) = iVar18;
      if (iVar18 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar20;
        }
        bVar17 = -(char)(iVar18 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar24;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[4];
    }
    bVar17 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar20 + (longlong)(iVar23 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    iVar24 = (int)param_1[6];
    lVar16 = (longlong)iVar24;
    iVar14 = *(int *)(*param_1 + 4 + lVar16 * 0x100);
    *(int *)(param_1 + 6) = iVar14;
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x100) = 0xffffffff;
    }
  }
  plVar20 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar20 = (longlong *)param_1[4];
  }
  iVar14 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar14 = iVar24;
  }
  puVar1 = (uint *)((longlong)plVar20 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar24 & 0x1f);
  _Src = (void *)(*param_1 + lVar16 * 0x100);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  lVar16 = *param_1 + 0x10 + lVar16 * 0x100;
  *(undefined4 *)(lVar16 + -8) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(lVar16 + -0x10) = *puVar2;
  lVar22 = 0;
  do {
    *(undefined8 *)(lVar16 + lVar22) = 0;
    iVar14 = *(int *)((longlong)puVar2 + lVar22 + 0x18);
    pvVar25 = *(void **)((longlong)puVar2 + lVar22 + 0x10);
    *(int *)(lVar16 + 8 + lVar22) = iVar14;
    if ((longlong)iVar14 == 0) {
      *(undefined4 *)(lVar16 + 0xc + lVar22) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(lVar16 + lVar22),iVar14,0);
      memcpy(*(void **)(lVar16 + lVar22),pvVar25,(longlong)iVar14 * 2);
    }
    *(undefined4 *)(lVar16 + 0x10 + lVar22) = *(undefined4 *)((longlong)puVar2 + lVar22 + 0x20);
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0xc0);
  uVar4 = *(undefined4 *)(puVar2 + 0x1a);
  uVar5 = *(undefined4 *)((longlong)puVar2 + 0xd4);
  uVar6 = *(undefined4 *)(puVar2 + 0x1b);
  uVar7 = *(undefined4 *)((longlong)puVar2 + 0xdc);
  uVar8 = *(undefined4 *)((longlong)puVar2 + 0xe1);
  uVar9 = *(undefined4 *)((longlong)puVar2 + 0xe5);
  uVar10 = *(undefined4 *)((longlong)puVar2 + 0xe9);
  *(undefined4 *)((longlong)_Src + 0xdd) = *(undefined4 *)((longlong)puVar2 + 0xdd);
  *(undefined4 *)((longlong)_Src + 0xe1) = uVar8;
  *(undefined4 *)((longlong)_Src + 0xe5) = uVar9;
  *(undefined4 *)((longlong)_Src + 0xe9) = uVar10;
  *(undefined4 *)((longlong)_Src + 0xd0) = uVar4;
  *(undefined4 *)((longlong)_Src + 0xd4) = uVar5;
  *(undefined4 *)((longlong)_Src + 0xd8) = uVar6;
  *(undefined4 *)((longlong)_Src + 0xdc) = uVar7;
  *(undefined8 *)((longlong)_Src + 0xf0) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0xf8) = 0xffffffff;
  uVar13 = FUN_1406bfaec(_Src);
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    cVar11 = '\0';
  }
  else {
    iVar14 = FUN_144a1a8e2(param_1,uVar13,_Src);
    if (iVar14 == -1) {
      cVar11 = '\0';
    }
    else {
      pvVar25 = (void *)((longlong)iVar14 * 0x100 + *param_1);
      lVar16 = 0xc0;
      do {
        if (*(longlong *)((longlong)pvVar25 + lVar16 + -8) != 0) {
          FUN_1400020a8();
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != 0);
      memmove(pvVar25,_Src,0xf8);
      FUN_1473842aa(param_1,iVar24);
      cVar11 = '\x01';
      iVar24 = iVar14;
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar11;
  }
  if (cVar11 == '\0') {
    uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar15 < 4) {
      iVar14 = 1;
    }
    else {
      uVar19 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar13 = (int)param_1[9] - 1U & uVar13;
      *(uint *)((longlong)_Src + 0xfc) = uVar13;
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0xf8) =
           *(undefined4 *)
            ((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = param_1 + 7;
      }
      *(int *)((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
           iVar24;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_1406c179c(param_1);
    }
  }
  *param_2 = iVar24;
  return;
}



// FUNCTION 1406c03a7 FUN_1406c03a7 body=1329 status=ok
// SIG undefined FUN_1406c03a7(void)

ulonglong FUN_1406c03a7(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  LPVOID lpMem;
  longlong lVar11;
  LPVOID pvVar12;
  HANDLE pvVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  SIZE_T local_80;
  int local_78 [2];
  LPVOID local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 == 2) {
    if (*param_1 - 1U < 2) {
LAB_1406c03ee:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    local_90 = 0x80070057;
    if (*param_1 != 3) goto LAB_1406c0727;
    uVar10 = param_1[6];
    if ((ulonglong)uVar10 == 0) {
      puVar14 = *(undefined4 **)(param_1 + 8);
      uVar22 = 0;
      puVar18 = (undefined4 *)0x0;
    }
    else {
      pvVar13 = GetProcessHeap();
      uVar22 = 0;
      puVar14 = HeapAlloc(pvVar13,0,(ulonglong)uVar10 * 0x34);
      if (puVar14 == (undefined4 *)0x0) {
        local_90 = 0x8007000e;
        goto LAB_1406c0727;
      }
      puVar18 = puVar14;
      if (param_1[6] != 0) {
        lVar15 = 0;
        uVar19 = 0;
        puVar17 = puVar14;
        do {
          lVar11 = *(longlong *)(param_1 + 8);
          if (1 < *(uint *)(lVar11 + 0x34 + lVar15)) {
            local_90 = 0x80070057;
            goto LAB_1406c0709;
          }
          puVar17[0xc] = *(undefined4 *)(lVar11 + 0x30 + lVar15);
          puVar1 = (undefined4 *)(lVar11 + lVar15);
          uVar16 = *puVar1;
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar15);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar15);
          uVar9 = puVar2[1];
          *(undefined8 *)(puVar17 + 8) = *puVar2;
          *(undefined8 *)(puVar17 + 10) = uVar9;
          *(undefined8 *)(puVar17 + 4) = uVar7;
          *(undefined8 *)(puVar17 + 6) = uVar8;
          *puVar17 = uVar16;
          puVar17[1] = uVar4;
          puVar17[2] = uVar5;
          puVar17[3] = uVar6;
          uVar19 = uVar19 + 1;
          uVar22 = param_1[6];
          lVar15 = lVar15 + 0x38;
          puVar17 = puVar17 + 0xd;
        } while (uVar19 < uVar22);
      }
    }
    local_50 = param_1[10];
    local_68 = *(undefined8 *)(param_1 + 4);
    local_78[0] = 2;
    local_70 = (LPVOID)CONCAT44(local_70._4_4_,param_1[2]);
    local_60 = (undefined4 *)CONCAT44(local_60._4_4_,uVar22);
    local_58 = puVar14;
    local_90 = D3D12SerializeVersionedRootSignature(local_78,param_3,param_4);
    puVar14 = puVar18;
LAB_1406c0709:
    if (puVar14 == (undefined4 *)0x0) goto LAB_1406c0727;
    pvVar13 = GetProcessHeap();
  }
  else {
    if (param_2 != 1) goto LAB_1406c03ee;
    if (1 < *param_1 - 2U) {
      local_90 = 0x80070057;
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
      goto LAB_1406c0727;
    }
    uVar10 = param_1[2];
    local_88 = 0;
    if ((ulonglong)uVar10 == 0) {
      lpMem = (LPVOID)0x0;
      local_90 = 0;
    }
    else {
      pvVar13 = GetProcessHeap();
      local_90 = 0;
      lpMem = HeapAlloc(pvVar13,0,(ulonglong)uVar10 << 5);
      if (lpMem == (LPVOID)0x0) {
        local_90 = 0x8007000e;
        lpMem = (LPVOID)0x0;
      }
      else if (param_1[2] != 0) {
        uVar19 = 0;
        local_90 = 0;
        do {
          lVar11 = uVar19 * 0x20;
          *(undefined4 *)((longlong)lpMem + lVar11) =
               *(undefined4 *)(*(longlong *)(param_1 + 4) + lVar11);
          *(undefined4 *)((longlong)lpMem + lVar11 + 0x18) =
               *(undefined4 *)(*(longlong *)(param_1 + 4) + 0x18 + lVar11);
          lVar15 = *(longlong *)(param_1 + 4);
          iVar3 = *(int *)(lVar15 + lVar11);
          if (iVar3 - 2U < 3) {
            uVar16 = *(undefined4 *)(lVar15 + 0xc + lVar11);
LAB_1406c04bc:
            *(undefined4 *)((longlong)lpMem + lVar11 + 0xc) = uVar16;
            *(undefined4 *)((longlong)lpMem + lVar11 + 8) =
                 *(undefined4 *)(*(longlong *)(param_1 + 4) + 8 + lVar11);
          }
          else {
            lVar15 = lVar15 + lVar11;
            if (iVar3 == 0) {
              uVar10 = *(uint *)(lVar15 + 8);
              uVar22 = uVar10;
              if ((ulonglong)uVar10 == 0) {
                pvVar12 = (LPVOID)0x0;
              }
              else {
                pvVar12 = (LPVOID)0x0;
                if (-1 < (int)local_90) {
                  local_80 = (ulonglong)uVar10 * 0x14;
                  pvVar13 = GetProcessHeap();
                  pvVar12 = HeapAlloc(pvVar13,0,local_80);
                  uVar22 = *(uint *)(lVar15 + 8);
                }
              }
              uVar21 = local_90 & 0xffffffff;
              if (pvVar12 == (LPVOID)0x0) {
                uVar21 = 0x8007000e;
              }
              local_90 = local_90 & 0xffffffff;
              if (uVar10 != 0) {
                local_90 = uVar21;
              }
              if (-1 < (int)local_90) {
                if (uVar22 == 0) {
                  uVar22 = 0;
                }
                else {
                  puVar14 = (undefined4 *)((longlong)pvVar12 + 0x10);
                  lVar20 = 0;
                  uVar21 = 0;
                  do {
                    puVar14[-2] = *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + 8 + lVar20);
                    puVar14[-3] = *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + 4 + lVar20);
                    *puVar14 = *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + 0x14 + lVar20);
                    puVar14[-4] = *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + lVar20);
                    puVar14[-1] = *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + 0xc + lVar20);
                    uVar21 = uVar21 + 1;
                    uVar22 = *(uint *)(lVar15 + 8);
                    lVar20 = lVar20 + 0x18;
                    puVar14 = puVar14 + 5;
                  } while (uVar21 < uVar22);
                }
              }
              *(uint *)((longlong)lpMem + lVar11 + 8) = uVar22;
              *(LPVOID *)((longlong)lpMem + lVar11 + 0x10) = pvVar12;
            }
            else if (iVar3 == 1) {
              *(undefined4 *)((longlong)lpMem + lVar11 + 0x10) = *(undefined4 *)(lVar15 + 0x10);
              uVar16 = *(undefined4 *)(*(longlong *)(param_1 + 4) + 0xc + lVar11);
              goto LAB_1406c04bc;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < (uint)param_1[2]);
      }
    }
    uVar19 = (ulonglong)(uint)param_1[6];
    if (uVar19 == 0) {
      puVar14 = (undefined4 *)0x0;
LAB_1406c080e:
      if (-1 < (int)local_90) {
        local_60 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          local_60 = *(undefined4 **)(param_1 + 8);
        }
        local_78[0] = param_1[2];
        local_68 = CONCAT44(local_68._4_4_,(int)local_88);
        local_58 = (undefined4 *)CONCAT44(local_58._4_4_,param_1[10]);
        local_70 = lpMem;
        local_90 = D3D12SerializeRootSignature(local_78,1,param_3,param_4);
      }
    }
    else {
      if (*param_1 != 3) {
        puVar14 = (undefined4 *)0x0;
        local_88 = uVar19;
        goto LAB_1406c080e;
      }
      pvVar13 = GetProcessHeap();
      local_88 = 0;
      puVar14 = HeapAlloc(pvVar13,0,uVar19 * 0x34);
      if (puVar14 != (undefined4 *)0x0) {
        if (param_1[6] != 0) {
          lVar15 = 0;
          uVar19 = 0;
          puVar18 = puVar14;
          do {
            lVar11 = *(longlong *)(param_1 + 8);
            if (1 < *(uint *)(lVar11 + 0x34 + lVar15)) {
              local_90 = 0x80070057;
              goto LAB_1406c0859;
            }
            puVar18[0xc] = *(undefined4 *)(lVar11 + 0x30 + lVar15);
            puVar17 = (undefined4 *)(lVar11 + lVar15);
            uVar16 = *puVar17;
            uVar4 = puVar17[1];
            uVar5 = puVar17[2];
            uVar6 = puVar17[3];
            puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar15);
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar15);
            uVar9 = puVar2[1];
            *(undefined8 *)(puVar18 + 8) = *puVar2;
            *(undefined8 *)(puVar18 + 10) = uVar9;
            *(undefined8 *)(puVar18 + 4) = uVar7;
            *(undefined8 *)(puVar18 + 6) = uVar8;
            *puVar18 = uVar16;
            puVar18[1] = uVar4;
            puVar18[2] = uVar5;
            puVar18[3] = uVar6;
            uVar19 = uVar19 + 1;
            local_88 = (ulonglong)(uint)param_1[6];
            lVar15 = lVar15 + 0x38;
            puVar18 = puVar18 + 0xd;
          } while (uVar19 < local_88);
        }
        goto LAB_1406c080e;
      }
      local_90 = 0x8007000e;
      puVar14 = (undefined4 *)0x0;
    }
LAB_1406c0859:
    if (lpMem != (LPVOID)0x0) {
      uVar10 = param_1[2];
      if (uVar10 != 0) {
        lVar15 = 0;
        uVar19 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 4) + lVar15) == 0) {
            pvVar12 = *(LPVOID *)((longlong)lpMem + lVar15 + 0x10);
            pvVar13 = GetProcessHeap();
            HeapFree(pvVar13,0,pvVar12);
            uVar10 = param_1[2];
          }
          uVar19 = uVar19 + 1;
          lVar15 = lVar15 + 0x20;
        } while (uVar19 < uVar10);
      }
      pvVar13 = GetProcessHeap();
      HeapFree(pvVar13,0,lpMem);
    }
    if (puVar14 == (undefined4 *)0x0) goto LAB_1406c0727;
    pvVar13 = GetProcessHeap();
  }
  HeapFree(pvVar13,0,puVar14);
LAB_1406c0727:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_90;
}



// FUNCTION 1406c091a FUN_1406c091a body=1726 status=ok
// SIG undefined FUN_1406c091a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406c091a(longlong param_1,uint *param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  ushort *puVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  byte bVar19;
  undefined1 uVar20;
  ulonglong uVar21;
  char cVar22;
  int iVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  longlong lVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  bVar10 = *(byte *)(param_1 + 0xbd);
  *(byte *)(param_1 + 0xbd) = bVar10 & 0xe0;
  *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  bVar19 = (byte)(param_2[8] >> 4) & 0x40;
  *(byte *)(param_1 + 0xbd) = bVar10 & 0xa0 | bVar19;
  *(byte *)(param_1 + 0xbd) = bVar10 & 0x20 | bVar19 | (byte)(param_2[8] >> 4) & 0x80;
  auVar9 = _DAT_149931e80;
  if (*param_2 != 0) {
    uVar5 = param_2[8];
    auVar26 = pmovsxbq((undefined1  [16])0x0,0x100);
    auVar28 = pmovsxbq(in_XMM3,0x202);
    cVar16 = '\0';
    uVar21 = 0;
    do {
      piVar1 = (int *)(*(longlong *)(param_2 + 2) + uVar21 * 0x20);
      iVar11 = *(int *)(*(longlong *)(param_2 + 2) + uVar21 * 0x20);
      if (iVar11 - 2U < 3) {
        iVar11 = piVar1[3];
        *(char *)(param_1 + 0x98 + uVar21) = cVar16;
        cVar16 = *(char *)(param_1 + 0xb8) + '\x02';
LAB_1406c0a3c:
        *(char *)(param_1 + 0xb8) = cVar16;
      }
      else {
        if (iVar11 == 0) {
          iVar11 = *(int *)(*(longlong *)(piVar1 + 4) + 0xc);
          *(char *)(param_1 + 0x98 + uVar21) = cVar16;
          cVar16 = *(char *)(param_1 + 0xb8) + ('\x01' - ((char)uVar5 >> 7));
          goto LAB_1406c0a3c;
        }
        if (iVar11 == 1) {
          iVar11 = piVar1[3];
          *(char *)(param_1 + 0x98 + uVar21) = cVar16;
          cVar16 = *(char *)(param_1 + 0xb8) + (char)piVar1[4];
          goto LAB_1406c0a3c;
        }
        iVar11 = -1;
      }
      if (iVar11 != param_3) goto switchD_1406c0bda_default;
      bVar10 = 0xc;
      lVar18 = 0x19;
      bVar8 = true;
      switch(piVar1[6]) {
      case 1:
        lVar18 = 8;
        bVar8 = false;
        bVar10 = 0;
      default:
        goto switchD_1406c0a73_caseD_2;
      case 4:
        bVar10 = 4;
        break;
      case 5:
        bVar10 = 3;
        break;
      case 6:
        bVar10 = 2;
        break;
      case 7:
        bVar10 = 1;
      }
      bVar8 = false;
switchD_1406c0a73_caseD_2:
      *(byte *)(param_1 + 0x30) =
           *(byte *)(param_1 + 0x30) | ((uint)piVar1[6] < 2 && (uVar5 & 2) == 0);
      cVar22 = *(char *)(param_1 + 0x50);
      if ((char)((uVar5 & 0x10) >> 4) == '\0' && cVar22 == '\0') {
        cVar22 = (piVar1[6] & 0xfffffffbU) == 0;
      }
      *(char *)(param_1 + 0x50) = cVar22;
      cVar22 = *(char *)(param_1 + 0x48);
      if ((char)((uVar5 & 0x20) >> 5) == '\0' && cVar22 == '\0') {
        cVar22 = piVar1[6] == 5 || piVar1[6] == 0;
      }
      *(char *)(param_1 + 0x48) = cVar22;
      cVar22 = *(char *)(param_1 + 0x38);
      if ((uVar5 >> 9 & 1) == 0 && cVar22 == '\0') {
        cVar22 = piVar1[6] == 7 || piVar1[6] == 0;
      }
      *(char *)(param_1 + 0x38) = cVar22;
      cVar22 = *(char *)(param_1 + 0x40);
      if ((uVar5 & 0x100) == 0 && cVar22 == '\0') {
        cVar22 = piVar1[6] == 6 || piVar1[6] == 0;
      }
      *(char *)(param_1 + 0x40) = cVar22;
      if (*(char *)(param_1 + 0x58) == '\0') {
        bVar25 = piVar1[6] == 0;
      }
      else {
        bVar25 = true;
      }
      *(bool *)(param_1 + 0x58) = bVar25;
      uVar20 = (undefined1)uVar21;
      if (*piVar1 == 2) {
        if (bVar8) {
          lVar18 = 0;
          do {
            pcVar2 = (char *)(param_1 + 0x2a + lVar18 * 8);
            *pcVar2 = *pcVar2 + '\x01';
            lVar18 = lVar18 + 1;
          } while (lVar18 != 6);
        }
        else {
          pcVar2 = (char *)(param_1 + 0x2a + (ulonglong)bVar10 * 8);
          *pcVar2 = *pcVar2 + '\x01';
        }
        if (piVar1[2] == 0) {
          puVar15 = (undefined1 *)(param_1 + 0x16);
          switch(bVar10) {
          case 0:
            break;
          case 1:
            puVar15 = (undefined1 *)(param_1 + 0x1f);
            break;
          case 2:
            puVar15 = (undefined1 *)(param_1 + 0x23);
            break;
          case 3:
            puVar15 = (undefined1 *)(param_1 + 0x12);
            break;
          case 4:
            puVar15 = (undefined1 *)(param_1 + 0x1b);
            break;
          case 5:
          case 0xc:
            puVar15 = (undefined1 *)(param_1 + 0x27);
            break;
          default:
            goto switchD_1406c0c41_caseD_6;
          }
          *puVar15 = uVar20;
          *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | 8;
        }
switchD_1406c0c41_caseD_6:
        uVar12 = (uint)bVar10;
        uVar13 = uVar12;
        if (bVar8) {
          uVar13 = 0;
          uVar12 = 5;
        }
        if (uVar13 <= uVar12) {
          uVar24 = (ulonglong)uVar13;
          do {
            puVar3 = (ushort *)(param_1 + 0x2e + uVar24 * 8);
            *puVar3 = *puVar3 | (ushort)(1 << (*(byte *)(piVar1 + 2) & 0x1f));
            uVar24 = uVar24 + 1;
          } while (uVar12 + 1 != uVar24);
        }
      }
      else {
        if (*piVar1 != 0) goto switchD_1406c0bda_default;
        puVar7 = *(undefined4 **)(piVar1 + 4);
        lVar27 = auVar28._0_8_;
        lVar29 = auVar28._8_8_;
        switch(*puVar7) {
        case 0:
          uVar4 = *(undefined1 *)(puVar7 + 1);
          if (bVar8) {
            lVar18 = 0;
            auVar31 = auVar26;
            do {
              if (SUB168(auVar31 ^ auVar9,0) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x2b + lVar18 * 8) = uVar4;
              }
              if (SUB168(auVar31 ^ auVar9,8) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x33 + lVar18 * 8) = uVar4;
              }
              lVar18 = lVar18 + 2;
              lVar14 = auVar31._8_8_;
              auVar31._0_8_ = auVar31._0_8_ + lVar27;
              auVar31._8_8_ = lVar14 + lVar29;
            } while (lVar18 != 6);
          }
          else {
            *(undefined1 *)(param_1 + 0x2b + (ulonglong)bVar10 * 8) = uVar4;
          }
          puVar15 = (undefined1 *)(param_1 + 0x10);
          switch(bVar10) {
          case 0:
            puVar15 = (undefined1 *)(param_1 + 0x14);
            break;
          case 1:
            puVar15 = (undefined1 *)(param_1 + 0x1d);
            break;
          case 2:
            puVar15 = (undefined1 *)(param_1 + 0x21);
            break;
          case 3:
            break;
          case 4:
            puVar15 = (undefined1 *)(param_1 + 0x19);
            break;
          case 5:
          case 0xc:
            puVar15 = (undefined1 *)(param_1 + 0x25);
            break;
          default:
            goto switchD_1406c0bda_default;
          }
          *puVar15 = uVar20;
          bVar10 = 2;
          break;
        case 1:
          uVar4 = *(undefined1 *)(puVar7 + 1);
          if (bVar8) {
            lVar14 = 0;
            auVar30 = auVar26;
            do {
              if (SUB168(auVar30 ^ auVar9,0) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x2d + lVar14 * 8) = uVar4;
              }
              if (SUB168(auVar30 ^ auVar9,8) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x35 + lVar14 * 8) = uVar4;
              }
              lVar14 = lVar14 + 2;
              lVar33 = auVar30._8_8_;
              auVar30._0_8_ = auVar30._0_8_ + lVar27;
              auVar30._8_8_ = lVar33 + lVar29;
            } while (lVar14 != 6);
          }
          else {
            *(undefined1 *)(param_1 + 0x2d + (ulonglong)bVar10 * 8) = uVar4;
          }
          ((undefined1 *)(param_1 + 0x10))[lVar18] = uVar20;
          bVar10 = 1;
          break;
        case 2:
          cVar22 = *(char *)(puVar7 + 1);
          if (bVar8) {
            lVar18 = 0;
            do {
              pcVar2 = (char *)(param_1 + 0x2a + lVar18 * 8);
              *pcVar2 = *pcVar2 + cVar22;
              lVar18 = lVar18 + 1;
            } while (lVar18 != 6);
          }
          else {
            pcVar2 = (char *)(param_1 + 0x2a + (ulonglong)bVar10 * 8);
            *pcVar2 = *pcVar2 + cVar22;
          }
          switch(bVar10) {
          case 0:
            puVar15 = (undefined1 *)(param_1 + 0x15);
            break;
          case 1:
            puVar15 = (undefined1 *)(param_1 + 0x1e);
            break;
          case 2:
            puVar15 = (undefined1 *)(param_1 + 0x22);
            break;
          case 3:
            puVar15 = (undefined1 *)(param_1 + 0x11);
            break;
          case 4:
            puVar15 = (undefined1 *)(param_1 + 0x1a);
            break;
          case 5:
          case 0xc:
            puVar15 = (undefined1 *)(param_1 + 0x26);
            break;
          default:
            goto switchD_1406c0f1d_caseD_6;
          }
          *puVar15 = uVar20;
          *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | 4;
switchD_1406c0f1d_caseD_6:
          uVar13 = 0;
          if (!bVar8) {
            uVar13 = (uint)bVar10;
          }
          uVar12 = 5;
          if (!bVar8) {
            uVar12 = (uint)bVar10;
          }
          if (uVar13 <= uVar12) {
            iVar11 = puVar7[1];
            uVar6 = puVar7[2];
            uVar24 = (ulonglong)uVar13;
            do {
              if (uVar6 < uVar6 + iVar11) {
                uVar17 = (uint)*(ushort *)(param_1 + 0x2e + uVar24 * 8);
                iVar23 = iVar11;
                uVar13 = uVar6;
                do {
                  uVar17 = uVar17 | 1 << (uVar13 & 0x1f);
                  uVar13 = uVar13 + 1;
                  iVar23 = iVar23 + -1;
                } while (iVar23 != 0);
                *(short *)(param_1 + 0x2e + uVar24 * 8) = (short)uVar17;
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar12 + 1);
          }
          goto switchD_1406c0bda_default;
        case 3:
          uVar4 = *(undefined1 *)(puVar7 + 1);
          if (bVar8) {
            lVar18 = 0;
            auVar32 = auVar26;
            do {
              if (SUB168(auVar32 ^ auVar9,0) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x2c + lVar18 * 8) = uVar4;
              }
              if (SUB168(auVar32 ^ auVar9,8) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x34 + lVar18 * 8) = uVar4;
              }
              lVar18 = lVar18 + 2;
              lVar14 = auVar32._8_8_;
              auVar32._0_8_ = auVar32._0_8_ + lVar27;
              auVar32._8_8_ = lVar14 + lVar29;
            } while (lVar18 != 6);
          }
          else {
            *(undefined1 *)(param_1 + 0x2c + (ulonglong)bVar10 * 8) = uVar4;
          }
          switch((ulonglong)bVar10) {
          case 0:
            puVar15 = (undefined1 *)(param_1 + 0x17);
            break;
          case 1:
            puVar15 = (undefined1 *)(param_1 + 0x20);
            break;
          case 2:
            puVar15 = (undefined1 *)(param_1 + 0x24);
            break;
          case 3:
            puVar15 = (undefined1 *)(param_1 + 0x13);
            break;
          case 4:
            puVar15 = (undefined1 *)(param_1 + 0x1c);
            break;
          case 5:
          case 0xc:
            puVar15 = (undefined1 *)(param_1 + 0x28);
            break;
          default:
            goto switchD_1406c0bda_default;
          }
          *puVar15 = uVar20;
          bVar10 = 0x10;
          break;
        default:
          goto switchD_1406c0bda_default;
        }
        *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | bVar10;
      }
switchD_1406c0bda_default:
      uVar21 = uVar21 + 1;
    } while (uVar21 < *param_2);
  }
  return;
}



// FUNCTION 1406c0fd8 FUN_1406c0fd8 body=1731 status=ok
// SIG undefined FUN_1406c0fd8(void)

void FUN_1406c0fd8(int *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  
  param_1[0] = 0;
  param_1[1] = -1;
  bVar3 = *(byte *)(param_2 + 0xec);
  iVar9 = 0;
  iVar4 = *(int *)(param_2 + 0xe8);
  if (iVar4 == 1) {
    uVar15 = 1;
LAB_1406c10d9:
    uVar19 = 0;
  }
  else {
    if (iVar4 != 2) {
      uVar15 = (uint)(iVar4 == 3);
      goto LAB_1406c10d9;
    }
    param_1[2] = 1;
    param_1[8] = 0;
    if ((bVar3 & 8) == 0) {
      param_1[6] = 4;
      param_1[4] = 0;
      param_1[5] = 2;
      uVar19 = 3;
      param_1[10] = 3;
      uVar15 = 0;
      param_1[0x10] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 2;
      param_1[0xe] = 0;
      param_1[0x12] = 3;
      param_1[0x18] = 0;
      param_1[0x14] = 1;
      param_1[0x15] = 2;
      param_1[0x16] = 0;
      *param_1 = 8;
      iVar9 = 8;
    }
    else {
      iVar9 = 8;
      param_1[6] = 8;
      param_1[4] = 0;
      param_1[5] = 2;
      *param_1 = 8;
      uVar19 = 1;
      uVar15 = 0;
    }
  }
  iVar17 = ((*(int *)(param_2 + 0xe8) - 2U & 0xfffffffd) == 0) + 1;
  piVar1 = param_1 + 2;
  lVar21 = 0;
  bVar8 = true;
  do {
    bVar7 = bVar8;
    iVar5 = (&DAT_14a34d9c8)[lVar21];
    lVar21 = 0;
    do {
      uVar13 = (ulonglong)(uint)(&DAT_14a34d9b0)[lVar21];
      lVar20 = (longlong)(int)(&DAT_14a34d9b0)[lVar21];
      if (iVar5 == 0) {
        bVar16 = *(byte *)(param_2 + 0xd2 + uVar13 * 4);
        if (bVar16 != 0) {
          uVar12 = (ulonglong)uVar19;
          piVar2 = param_1 + uVar12 * 6 + 0x102;
          *piVar2 = 0;
          piVar2[1] = (uint)bVar16;
          piVar2[2] = 0;
          piVar2[3] = uVar15;
          piVar2[4] = (1 < param_3) + 4;
          piVar2[5] = -1;
          iVar6 = *(int *)(&DAT_14a3504c4 + lVar20 * 4);
          piVar1[uVar12 * 8] = 0;
          param_1[uVar12 * 8 + 8] = iVar6;
          param_1[uVar12 * 8 + 4] = 1;
          *(int **)(param_1 + uVar12 * 8 + 6) = piVar2;
          uVar19 = uVar19 + 1;
          iVar9 = iVar9 + iVar17;
          *param_1 = iVar9;
        }
        uVar11 = (uint)*(byte *)(param_2 + 0xd1 + uVar13 * 4);
        if (0x10 < uVar11) {
          uVar12 = (ulonglong)uVar19;
          piVar2 = param_1 + uVar12 * 6 + 0x102;
          *piVar2 = 2;
          piVar2[1] = uVar11 - 0x10;
          piVar2[2] = 0x10;
          piVar2[3] = uVar15;
          piVar2[4] = param_3 < 3 ^ 5;
          piVar2[5] = -1;
          iVar6 = *(int *)(&DAT_14a3504c4 + lVar20 * 4);
          piVar1[uVar12 * 8] = 0;
          param_1[uVar12 * 8 + 8] = iVar6;
          param_1[uVar12 * 8 + 4] = 1;
          *(int **)(param_1 + uVar12 * 8 + 6) = piVar2;
          uVar19 = uVar19 + 1;
          iVar9 = iVar9 + iVar17;
          *param_1 = iVar9;
        }
        bVar16 = *(byte *)(param_2 + 0xd0 + uVar13 * 4);
        if (bVar16 != 0) {
          uVar12 = (ulonglong)uVar19;
          piVar2 = param_1 + uVar12 * 6 + 0x102;
          *piVar2 = 3;
          piVar2[1] = (uint)bVar16;
          piVar2[2] = 0;
          piVar2[3] = uVar15;
          piVar2[4] = (uint)(1 < param_3);
          piVar2[5] = -1;
          iVar6 = *(int *)(&DAT_14a3504c4 + lVar20 * 4);
          piVar1[uVar12 * 8] = 0;
          param_1[uVar12 * 8 + 8] = iVar6;
          param_1[uVar12 * 8 + 4] = 1;
          *(int **)(param_1 + uVar12 * 8 + 6) = piVar2;
          uVar19 = uVar19 + 1;
          iVar9 = iVar9 + iVar17;
          *param_1 = iVar9;
        }
        bVar16 = *(byte *)(param_2 + 0xd3 + uVar13 * 4);
        if (bVar16 != 0) {
          uVar13 = (ulonglong)uVar19;
          piVar2 = param_1 + uVar13 * 6 + 0x102;
          *piVar2 = 1;
          piVar2[1] = (uint)bVar16;
          piVar2[2] = 0;
          piVar2[3] = uVar15;
          piVar2[4] = param_3 < 3 ^ 3;
          piVar2[5] = -1;
          iVar6 = *(int *)(&DAT_14a3504c4 + lVar20 * 4);
          piVar1[uVar13 * 8] = 0;
          param_1[uVar13 * 8 + 8] = iVar6;
          param_1[uVar13 * 8 + 4] = 1;
          *(int **)(param_1 + uVar13 * 8 + 6) = piVar2;
          uVar19 = uVar19 + 1;
          iVar9 = iVar9 + iVar17;
          *param_1 = iVar9;
        }
      }
      else if ((iVar5 == 2) && (*(char *)(param_2 + 0xd1 + uVar13 * 4) != '\0')) {
        uVar11 = 0;
        do {
          uVar12 = (ulonglong)(uVar19 + uVar11);
          iVar6 = *(int *)(&DAT_14a3504c4 + lVar20 * 4);
          piVar1[uVar12 * 8] = 2;
          param_1[uVar12 * 8 + 8] = iVar6;
          param_1[uVar12 * 8 + 4] = uVar11;
          param_1[uVar12 * 8 + 5] = uVar15;
          param_1[uVar12 * 8 + 6] = 8;
          iVar9 = iVar9 + 2;
          *param_1 = iVar9;
          uVar10 = uVar11 + 1;
          if (0xe < uVar11) break;
          uVar11 = uVar10;
        } while (uVar10 < *(byte *)(param_2 + 0xd1 + uVar13 * 4));
        uVar19 = uVar19 + uVar10;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != 6);
    lVar21 = 1;
    bVar8 = false;
  } while (bVar7);
  bVar16 = *(byte *)(param_2 + 0xec);
  uVar15 = (bVar16 & 0x18) << 7;
  iVar17 = *(int *)(param_2 + 0xe8);
  if (iVar17 == 0) {
    uVar15 = uVar15 | bVar16 & 1;
    if (*(int *)(param_2 + 8) == 0) {
      lVar21 = 0;
      do {
        uVar13 = (ulonglong)*(uint *)((longlong)&DAT_14a34d9b0 + lVar21);
        if ((((*(char *)(param_2 + 0xd2 + uVar13 * 4) == '\0') &&
             (*(char *)(param_2 + 0xd1 + uVar13 * 4) == '\0')) &&
            (*(char *)(param_2 + 0xd3 + uVar13 * 4) == '\0')) &&
           (*(char *)(param_2 + 0xd0 + uVar13 * 4) == '\0')) {
          switch(*(uint *)((longlong)&DAT_14a34d9b0 + lVar21)) {
          case 0:
            uVar11 = 2;
            break;
          case 1:
            uVar11 = 0x20;
            break;
          case 2:
            uVar11 = 0x10;
            break;
          case 3:
            uVar11 = (DAT_14ca84f63 & 1) << 9;
            break;
          case 4:
            uVar11 = (DAT_14ca84f63 & 1) << 8;
            break;
          case 5:
            uVar11 = 0;
            break;
          default:
            uVar11 = 0xffffffff;
          }
          uVar15 = uVar15 | uVar11;
        }
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0x18);
    }
  }
  else if ((iVar17 == 2) || (iVar17 == 4)) {
    uVar15 = 0x80;
  }
  if ((bVar16 & 2) != 0) {
    uVar13 = (ulonglong)uVar19;
    piVar1[uVar13 * 8] = 4;
    param_1[uVar13 * 8 + 8] = 0;
    (param_1 + uVar13 * 8 + 4)[0] = 0;
    (param_1 + uVar13 * 8 + 4)[1] = 0x7fff0ade;
    param_1[uVar13 * 8 + 6] = 2;
    uVar19 = uVar19 + 1;
    iVar9 = iVar9 + 2;
    *param_1 = iVar9;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *(char *)((longlong)param_1 + 6) = (char)uVar19;
    *(undefined1 *)((longlong)param_1 + 7) = 0;
    if (*(int *)(param_2 + 8) != 0) {
      puVar18 = (uint *)(param_2 + 0x20);
      bVar16 = 0;
      uVar13 = 0;
      do {
        uVar12 = (ulonglong)(uVar19 + (int)uVar13);
        uVar11 = *puVar18;
        piVar1[uVar12 * 8] = 2;
        param_1[uVar12 * 8 + 8] = 0;
        param_1[uVar12 * 8 + 4] = uVar11 >> 4 & 0x3f;
        param_1[uVar12 * 8 + 5] = uVar11 & 0xf;
        param_1[uVar12 * 8 + 6] = 8;
        bVar14 = ((byte)(*puVar18 >> 4) & 0x3f) + 1;
        if (bVar16 < bVar14) {
          bVar16 = bVar14;
        }
        *(byte *)((longlong)param_1 + 7) = bVar16;
        iVar9 = iVar9 + 2;
        *param_1 = iVar9;
        uVar13 = uVar13 + 1;
        puVar18 = puVar18 + 6;
      } while (uVar13 < *(uint *)(param_2 + 8));
      uVar19 = uVar19 + (int)uVar13;
    }
  }
  if ((*(byte *)(param_2 + 0xec) & 0x20) != 0) {
    *(char *)(param_1 + 1) = (char)uVar19;
    uVar13 = (ulonglong)uVar19;
    piVar1[uVar13 * 8] = 1;
    param_1[uVar13 * 8 + 8] = 0;
    param_1[uVar13 * 8 + 6] = 4;
    (param_1 + uVar13 * 8 + 4)[0] = 0;
    (param_1 + uVar13 * 8 + 4)[1] = 3;
    uVar19 = uVar19 + 1;
    iVar9 = iVar9 + 2;
    *param_1 = iVar9;
  }
  if ((bVar3 & 4) != 0 && (iVar4 - 2U & 0xfffffffd) != 0) {
    *(char *)((longlong)param_1 + 5) = (char)uVar19;
    uVar13 = (ulonglong)uVar19;
    piVar1[uVar13 * 8] = 4;
    param_1[uVar13 * 8 + 8] = 0;
    (param_1 + uVar13 * 8 + 4)[0] = 0;
    (param_1 + uVar13 * 8 + 4)[1] = 999;
    param_1[uVar13 * 8 + 6] = 2;
    uVar19 = uVar19 + 1;
    *param_1 = iVar9 + 2;
  }
  if ((*(int *)(param_2 + 0xe8) == 4) || (*(int *)(param_2 + 0xe8) == 2)) {
    param_1[0x1c2] = 2;
    param_1[0x1c4] = uVar19;
    *(int **)(param_1 + 0x1c6) = piVar1;
  }
  else {
    param_1[0x1c2] = 2;
    param_1[0x1c4] = uVar19;
    *(int **)(param_1 + 0x1c6) = piVar1;
    if (1 < param_3) {
      param_1[0x1c8] = 6;
      *(undefined **)(param_1 + 0x1ca) = &DAT_14ca770b0;
      goto LAB_1406c1626;
    }
  }
  param_1[0x1c8] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
LAB_1406c1626:
  param_1[0x1cc] = uVar15;
  return;
}



// FUNCTION 1406c169c FUN_1406c169c body=255 status=ok
// SIG undefined FUN_1406c169c(void)

void FUN_1406c169c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar3;
    }
    else {
      uVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = uVar4 * 0x100;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar4 & 0xffffffffffffff) * 0x10]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    iVar2 = (int)(uVar5 >> 8);
    iVar6 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar6 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar6;
    FUN_1446f8d3c(param_1,param_2,iVar6,0x100,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406c179c FUN_1406c179c body=578 status=ok
// SIG undefined FUN_1406c179c(void)

void FUN_1406c179c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar10 = *param_1;
        lVar9 = (longlong)iVar7 * 0x100;
        local_74 = iVar5;
        iVar5 = FUN_1406bfaec(lVar9 + lVar10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0xfc + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0xf8 + lVar9) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar11 = ~(uint)uVar12 & uVar11;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar10 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar11;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_1406c19a1;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_1406c19a1:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c19e0 FUN_1406c19e0 body=526 status=ok
// SIG undefined FUN_1406c19e0(void)

longlong *
FUN_1406c19e0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,char param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  if (*(int *)(param_1 + 0x10) == 2) {
    if (*(int *)(param_1 + 200) != -1) {
      auVar2._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x68) - (double)param_3[0x51]));
      auVar2._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x60) - (double)param_3[0x50]));
      iVar5 = movmskpd(2,auVar2);
      auVar1._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x78) - (double)param_3[0x53]));
      auVar1._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x70) - (double)param_3[0x52]));
      uVar7 = movmskpd((int)param_2,auVar1);
      if ((uVar7 & 0x3fffffff) != 0 || iVar5 != 0) goto LAB_1406c1b19;
      local_58 = param_3[0x48];
      lStack_50 = param_3[0x49];
      local_80 = &local_58;
      local_48 = param_3[0x4a];
      lStack_40 = param_3[0x4b];
      local_78 = param_3[0x4c];
      lStack_70 = param_3[0x4d];
      local_88 = &local_78;
      local_68 = param_3[0x4e];
      local_38 = param_1 + 0xd0;
      if (*(longlong *)(param_1 + 1000) != 0) {
        local_38 = *(longlong *)(param_1 + 1000);
      }
      lStack_30 = CONCAT44(lStack_30._4_4_,*(undefined4 *)(param_1 + 0x3f0));
      cVar4 = FUN_1406c1bf0(param_3,param_4);
LAB_1406c1af5:
      if (cVar4 == '\0') goto LAB_1406c1b19;
    }
    lVar6 = *(longlong *)(param_4 + 0x318);
    if (*(longlong *)(param_4 + 0x318) == 0) {
      lVar6 = param_4;
    }
    param_3 = (longlong *)(param_4 + 800);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_1406c1b19;
    if (param_5 != '\0') {
      local_38 = param_3[0x50];
      lStack_30 = param_3[0x51];
      local_28 = param_3[0x52];
      local_58 = param_3[0x48];
      lStack_50 = param_3[0x49];
      local_48 = param_3[0x4a];
      lStack_40 = param_3[0x4b];
      local_78 = *(longlong *)(param_1 + 0x20);
      lStack_70 = *(longlong *)(param_1 + 0x28);
      local_68 = *(longlong *)(param_1 + 0x30);
      uStack_60 = *(undefined4 *)(param_1 + 0x38);
      uStack_5c = *(undefined4 *)(param_1 + 0x3c);
      cVar4 = (**(code **)(*param_3 + 0x828))(param_3);
      if (cVar4 != '\0') {
        local_58 = param_3[0x80];
        lStack_50 = CONCAT44(lStack_50._4_4_,(int)param_3[0x81]);
        cVar4 = FUN_1406c2154(param_3,param_4);
        goto LAB_1406c1af5;
      }
    }
    lVar6 = param_3[0x80];
    param_3 = param_3 + 0x81;
  }
  lVar3 = *param_3;
  *param_2 = lVar6;
  *(int *)(param_2 + 1) = (int)lVar3;
LAB_1406c1b19:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c1bf0 FUN_1406c1bf0 body=1378 status=ok
// SIG undefined FUN_1406c1bf0(void)

ulonglong FUN_1406c1bf0(longlong param_1,longlong param_2,longlong *param_3,int param_4,
                       undefined8 *param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 unaff_RBP;
  undefined7 uVar14;
  void *_Src;
  longlong lVar15;
  longlong *plVar16;
  uint *puVar17;
  byte bVar18;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  uint *local_100;
  code *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  bVar18 = 1;
  if ((0 < (longlong)*(int *)(param_1 + 0x220)) &&
     (lVar10 = *(longlong *)
                (*(longlong *)(param_1 + 0x218) + -8 + (longlong)*(int *)(param_1 + 0x220) * 8),
     lVar10 != 0)) {
    bVar18 = (*(byte *)(lVar10 + 0x608) & 4) >> 2;
  }
  if ((*(byte *)(param_1 + 0x2d3) & 8) == 0) {
    if (DAT_14c761414 != 0 && bVar18 == 0) {
LAB_1406c1c74:
      lVar10 = *(longlong *)(param_1 + 0xa8);
      if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1c8) == param_1)) {
        uVar14 = (undefined7)((ulonglong)unaff_RBP >> 8);
        if (DAT_14c761418 != 0) {
          local_bc = 0;
          local_b8 = 0x101;
          local_90 = 0;
          local_88 = 0x800000000;
          local_70 = 0;
          local_68 = 0x400000000;
          local_d0 = 0;
          local_c4 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_cf = 1;
          local_cd = 0;
          local_c0 = 0;
          local_cc = 0x1000000;
          local_c8 = 1;
          local_118 = (longlong)(int)param_3[1];
          iVar12 = *(int *)(param_2 + 800) + (int)param_3[1];
          if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar12);
          }
          local_110 = param_3;
          if (*(int *)(param_2 + 0x324) < iVar12) {
            FUN_1406c24c0(param_2);
          }
          _Src = (void *)CONCAT71(uVar14,1);
          local_108 = param_2;
          if (param_4 < (int)local_118) {
            lVar10 = (longlong)param_4;
            param_4 = (int)local_118 - param_4;
            lVar15 = lVar10 * 0x108 + 0xe4;
            _Src = (void *)0x0;
            plVar16 = local_110;
            lVar11 = local_118;
            do {
              lVar10 = lVar10 + 1;
              lVar3 = *plVar16;
              if (*(int *)(lVar3 + lVar15) != 0) {
                puVar17 = (uint *)(lVar3 + lVar15 + -4);
                uVar2 = *puVar17;
                if (((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
                     (plVar13 = (longlong *)
                                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                     plVar13 != (longlong *)0x0)) &&
                    (((int)plVar13[2] == *(int *)(lVar3 + lVar15) &&
                     ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) &&
                   ((plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0 &&
                    ((bVar18 & (*(byte *)((longlong)plVar13 + 0x2d3) & 8) == 0) == 0)))) {
                  if ((*(byte *)((longlong)plVar13 + 0x2d3) & 0x10) != 0) break;
                  local_100 = puVar17;
                  if (DAT_14cad2858 == 0) {
                    local_f8 = FUN_144a7958c;
                    local_120 = FUN_14081d0ea;
                    local_128 = &LAB_146395584;
                    local_130 = &local_f8;
                    local_138 = &LAB_147a0ba80;
                    local_140 = &LAB_14575ccce;
                    local_148 = L"Engine";
                    local_150 = 0x40000000000;
                    local_158 = 0x10000004;
                    local_160 = 0x10;
                    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,0x1180);
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                  FUN_1463bcebe);
                  }
                  iVar12 = *(int *)(DAT_14cad2858 + 0x38);
                  if (((iVar12 <= *(int *)(plVar13[2] + 0x38)) &&
                      (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)iVar12 * 8) ==
                       DAT_14cad2858 + 0x30)) ||
                     ((param_1 != 0 &&
                      ((iVar12 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)iVar12 * 8
                         ) == DAT_14cad2858 + 0x30)))))) break;
                  local_e8 = param_5[2];
                  local_f8 = (code *)*param_5;
                  uStack_f0 = *(undefined4 *)(param_5 + 1);
                  uStack_ec = *(undefined4 *)((longlong)param_5 + 0xc);
                  local_168 = &local_e0;
                  cVar9 = (**(code **)(*plVar13 + 0x990))(plVar13,param_1,&local_f8,param_6);
                  lVar8 = local_108;
                  plVar16 = local_110;
                  lVar11 = local_118;
                  if (cVar9 != '\0') {
                    iVar12 = *(int *)(local_108 + 800);
                    *(uint *)(local_108 + 800) = iVar12 + 1U;
                    if (*(uint *)(local_108 + 0x324) < iVar12 + 1U) {
                      FUN_14011d10e(local_108,iVar12);
                    }
                    lVar3 = lVar3 + lVar15;
                    _Src = (void *)(lVar3 + -0xdc);
                    lVar11 = *(longlong *)(lVar8 + 0x318);
                    if (lVar11 == 0) {
                      lVar11 = lVar8;
                    }
                    puVar1 = (undefined1 *)(lVar11 + (longlong)iVar12 * 0x108);
                    *puVar1 = *(undefined1 *)(lVar3 + -0xe4);
                    memcpy(puVar1 + 8,_Src,0xb8);
                    *(undefined8 *)(puVar1 + 0xc0) = 0;
                    *(undefined8 *)(puVar1 + 200) = 0;
                    *(undefined8 *)(puVar1 + 0xd0) = 0;
                    *(undefined4 *)(puVar1 + 0xd8) = 0xffffffff;
                    puVar1[0xdc] = 0;
                    *(undefined8 *)(puVar1 + 0xc0) = *(undefined8 *)(lVar3 + -0x24);
                    uVar7 = *(undefined8 *)(lVar3 + -0x14);
                    *(undefined8 *)(puVar1 + 200) = *(undefined8 *)(lVar3 + -0x1c);
                    *(undefined8 *)(puVar1 + 0xd0) = uVar7;
                    *(undefined4 *)(puVar1 + 0xd8) = *(undefined4 *)(lVar3 + -0xc);
                    puVar1[0xdc] = *(undefined1 *)(lVar3 + -8);
                    *(undefined8 *)(puVar1 + 0x100) = *(undefined8 *)(local_100 + 8);
                    uVar2 = *local_100;
                    uVar4 = local_100[1];
                    uVar5 = local_100[2];
                    uVar6 = local_100[3];
                    uVar7 = *(undefined8 *)(local_100 + 6);
                    *(undefined8 *)(puVar1 + 0xf0) = *(undefined8 *)(local_100 + 4);
                    *(undefined8 *)(puVar1 + 0xf8) = uVar7;
                    *(uint *)(puVar1 + 0xe0) = uVar2;
                    *(uint *)(puVar1 + 0xe4) = uVar4;
                    *(uint *)(puVar1 + 0xe8) = uVar5;
                    *(uint *)(puVar1 + 0xec) = uVar6;
                    plVar16 = local_110;
                    lVar11 = local_118;
                  }
                }
              }
              _Src = (void *)CONCAT71((int7)((ulonglong)_Src >> 8),lVar11 <= lVar10);
              lVar15 = lVar15 + 0x108;
              param_4 = param_4 + -1;
            } while (param_4 != 0);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1406c1c8b;
        }
        if ((int)param_3[1] == 0) {
          _Src = (void *)CONCAT71(uVar14,1);
          cVar9 = FUN_1479f0856(param_1,1);
          if (cVar9 != '\0') {
            FUN_1479fab92(param_1,lVar10,param_2);
            goto LAB_1406c1c8b;
          }
        }
      }
    }
  }
  else if (DAT_14c761414 != 0) goto LAB_1406c1c74;
  _Src = (void *)0x0;
LAB_1406c1c8b:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)_Src & 0xffffff01;
}



// FUNCTION 1406c2154 FUN_1406c2154 body=876 status=ok
// SIG undefined FUN_1406c2154(void)

undefined8 FUN_1406c2154(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  
  bVar8 = 1;
  if ((0 < (longlong)*(int *)(param_1 + 0x220)) &&
     (lVar18 = *(longlong *)
                (*(longlong *)(param_1 + 0x218) + -8 + (longlong)*(int *)(param_1 + 0x220) * 8),
     lVar18 != 0)) {
    bVar8 = (*(byte *)(lVar18 + 0x608) & 4) >> 2;
  }
  if ((*(byte *)(param_1 + 0x2d3) & 8) == 0) {
    if (bVar8 != 0 || DAT_14c761414 == 0) {
      return 0;
    }
  }
  else if (DAT_14c761414 == 0) {
    return 0;
  }
  lVar18 = *(longlong *)(param_1 + 0xa8);
  if (lVar18 == 0) {
    return 0;
  }
  uVar13 = 0;
  if (*(longlong *)(lVar18 + 0x1c8) != param_1) {
    return 0;
  }
  if (DAT_14c761418 != 0) {
    iVar10 = (int)param_3[1] + *(int *)(param_2 + 800);
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (*(int *)(param_2 + 0x324) < iVar10) {
      FUN_1406c24c0(param_2);
    }
    uVar2 = *(uint *)(lVar18 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    uVar11 = *(uint *)(lVar18 + 0x10);
    if (*(uint *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      uVar13 = (ulonglong)uVar12;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar11 = *(uint *)(lVar18 + 0x10);
      bVar19 = uVar11 == 0;
      if (bVar19) {
        *(uint *)(lVar18 + 0x10) = uVar12;
        uVar11 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar11 = uVar12;
      }
    }
    uVar14 = CONCAT71((int7)(uVar13 >> 8),1);
    if ((longlong)(int)param_3[1] != 0) {
      puVar16 = (undefined8 *)(*param_3 + 0xc0);
      lVar18 = (longlong)(int)param_3[1] * 0x108;
      do {
        lVar9 = FUN_14485cccc(puVar16);
        uVar17 = 0;
        uVar12 = 0;
        if (lVar9 != 0) {
          uVar17 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar12 = *(uint *)(lVar9 + 0x10);
          if (*(uint *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            uVar15 = DAT_14c964868 + 1;
            bVar19 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar19) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar15);
            }
            LOCK();
            uVar12 = *(uint *)(lVar9 + 0x10);
            bVar19 = uVar12 == 0;
            if (bVar19) {
              *(uint *)(lVar9 + 0x10) = uVar15;
              uVar12 = 0;
            }
            UNLOCK();
            if (bVar19) {
              uVar12 = uVar15;
            }
          }
        }
        if ((uVar17 != uVar2) || (uVar12 != uVar11)) {
          iVar10 = *(int *)(param_2 + 800);
          *(uint *)(param_2 + 800) = iVar10 + 1U;
          if (*(uint *)(param_2 + 0x324) < iVar10 + 1U) {
            FUN_14011d10e(param_2,iVar10);
          }
          lVar9 = *(longlong *)(param_2 + 0x318);
          if (*(longlong *)(param_2 + 0x318) == 0) {
            lVar9 = param_2;
          }
          puVar1 = (undefined1 *)(lVar9 + (longlong)iVar10 * 0x108);
          *puVar1 = *(undefined1 *)(puVar16 + -0x18);
          memcpy(puVar1 + 8,puVar16 + -0x17,0xb8);
          *(undefined8 *)(puVar1 + 0xc0) = 0;
          *(undefined8 *)(puVar1 + 200) = 0;
          *(undefined8 *)(puVar1 + 0xd0) = 0;
          *(undefined4 *)(puVar1 + 0xd8) = 0xffffffff;
          puVar1[0xdc] = 0;
          *(undefined8 *)(puVar1 + 0xc0) = *puVar16;
          uVar7 = puVar16[2];
          *(undefined8 *)(puVar1 + 200) = puVar16[1];
          *(undefined8 *)(puVar1 + 0xd0) = uVar7;
          *(undefined4 *)(puVar1 + 0xd8) = *(undefined4 *)(puVar16 + 3);
          puVar1[0xdc] = *(undefined1 *)((longlong)puVar16 + 0x1c);
          *(undefined8 *)(puVar1 + 0x100) = puVar16[8];
          uVar3 = *(undefined4 *)(puVar16 + 4);
          uVar4 = *(undefined4 *)((longlong)puVar16 + 0x24);
          uVar5 = *(undefined4 *)(puVar16 + 5);
          uVar6 = *(undefined4 *)((longlong)puVar16 + 0x2c);
          uVar7 = puVar16[7];
          *(undefined8 *)(puVar1 + 0xf0) = puVar16[6];
          *(undefined8 *)(puVar1 + 0xf8) = uVar7;
          *(undefined4 *)(puVar1 + 0xe0) = uVar3;
          *(undefined4 *)(puVar1 + 0xe4) = uVar4;
          *(undefined4 *)(puVar1 + 0xe8) = uVar5;
          *(undefined4 *)(puVar1 + 0xec) = uVar6;
        }
        puVar16 = puVar16 + 0x21;
        lVar18 = lVar18 + -0x108;
      } while (lVar18 != 0);
      return uVar14;
    }
    return uVar14;
  }
  return 0;
}



// FUNCTION 1406c24c0 FUN_1406c24c0 body=358 status=ok
// SIG undefined FUN_1406c24c0(void)

void FUN_1406c24c0(longlong param_1,uint param_2)

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
  else if (param_2 < 4) {
    uVar5 = 3;
  }
  else {
    uVar3 = (longlong)(int)param_2 * 0x108;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1406c253a;
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
LAB_1406c253a:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x108)) {
      uVar5 = uVar3 / 0x108 & 0xffffffff;
    }
  }
  if ((int)uVar5 == *(int *)(param_1 + 0x324)) {
    return;
  }
  *(int *)(param_1 + 0x324) = (int)uVar5;
  FUN_14011d28a(param_1,*(undefined4 *)(param_1 + 800),uVar5,0x108);
  return;
}



// FUNCTION 1406c2626 FUN_1406c2626 body=110 status=ok
// SIG undefined FUN_1406c2626(void)

undefined8
FUN_1406c2626(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_1406c2694(param_1,param_4);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x38) == 0) {
      lVar3 = *(longlong *)(lVar1 + 0x20);
    }
    else {
      lVar3 = FUN_1406f7aac(lVar1);
    }
    if (lVar3 != 0) {
      uVar2 = FUN_14001cc68(0x130,0x10);
      FUN_1406c271c(uVar2,param_2,param_3,lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1406c2694 FUN_1406c2694 body=134 status=ok
// SIG undefined FUN_1406c2694(void)

undefined8 FUN_1406c2694(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 *local_58;
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a34c400;
  local_58 = &LAB_143169f46;
  local_30 = param_1;
  FUN_1406c28c8();
  if (local_58 != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c271c FUN_1406c271c body=428 status=ok
// SIG undefined FUN_1406c271c(void)

undefined8 *
FUN_1406c271c(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xd;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14a34ab10;
  memcpy(param_1 + 6,param_2,0xd8);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  if (param_1[9] == 0) {
    LOCK();
    *(int *)(param_1[6] + 8) = *(int *)(param_1[6] + 8) + 1;
    UNLOCK();
    lVar6 = param_1[7];
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1[9] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    lVar6 = param_1[10];
    if (lVar6 == 0) goto LAB_1406c279c;
  }
  LOCK();
  *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  UNLOCK();
LAB_1406c279c:
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[0xe] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xe] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar6 = *param_2;
  if (lVar6 != 0) {
    *(undefined2 *)(param_1 + 0x25) = *(undefined2 *)(lVar6 + 600);
    uVar2 = *(undefined8 *)(lVar6 + 0x238);
    uVar3 = *(undefined8 *)(lVar6 + 0x240);
    uVar4 = *(undefined8 *)(lVar6 + 0x250);
    param_1[0x23] = *(undefined8 *)(lVar6 + 0x248);
    param_1[0x24] = uVar4;
    param_1[0x21] = uVar2;
    param_1[0x22] = uVar3;
  }
  if (param_1[7] == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1[7] + 0xb0) & 1;
  }
  *(byte *)((longlong)param_1 + 0x12a) = bVar5;
  if (param_1[9] == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1[9] + 0xb0) & 1;
  }
  *(byte *)((longlong)param_1 + 299) = bVar5;
  if (param_1[10] == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1[10] + 0xb0) & 1;
  }
  *(byte *)((longlong)param_1 + 300) = bVar5;
  if (param_1[8] == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1[8] + 0xb0) & 1;
  }
  *(byte *)((longlong)param_1 + 0x12d) = bVar5;
  if (param_1[0xb] == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1[0xb] + 0xb0) & 1;
  }
  *(byte *)((longlong)param_1 + 0x12e) = bVar5;
  param_1[2] = *(undefined8 *)(param_4 + 0x40);
  return param_1;
}



// FUNCTION 1406c28c8 FUN_1406c28c8 body=1543 status=ok
// SIG undefined FUN_1406c28c8(void)

void FUN_1406c28c8(longlong param_1,void *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  uint *puVar2;
  void *_Dst;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 auStack_98 [32];
  PSRWLOCK local_78;
  longlong *local_70;
  void *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  SRWLock = (PSRWLOCK)(param_1 + 0xb0);
  AcquireSRWLockExclusive(SRWLock);
  plVar21 = (longlong *)(param_1 + 0x10);
  local_68 = param_2;
  iVar5 = FUN_14049ade6(plVar21,*(undefined4 *)((longlong)param_2 + 0x2d0),param_2);
  if ((iVar5 != -1) &&
     (lVar10 = (longlong)iVar5 * 0x310 + *plVar21, plVar11 = (longlong *)(lVar10 + 0x300),
     plVar11 != (longlong *)0x0 && lVar10 != 0)) {
    lVar10 = *plVar11;
    *param_3 = lVar10;
    if (((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) != 0) ||
       (DAT_14ca76a80 == 0)) {
      LOCK();
      piVar1 = (int *)(lVar10 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  local_58 = param_3;
  puVar12 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar12[2] = *(undefined8 *)(param_1 + 8);
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(uint *)(puVar12 + 3) = uVar6;
  *(uint *)((longlong)puVar12 + 0x1c) = uVar6;
  *(undefined4 *)(puVar12 + 1) = 0;
  *puVar12 = &PTR_FUN_14a34ab08;
  puVar12[4] = 0;
  puVar12[5] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar12 + 6));
  *(undefined4 *)(puVar12 + 7) = 1;
  puVar12[8] = 0;
  local_78 = SRWLock;
  local_70 = plVar21;
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar5 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar5) {
      FUN_14631a1ec(plVar21,iVar5);
    }
    iVar24 = *(int *)(param_1 + 0x38);
    if (iVar24 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar15 = iVar24 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    lVar10 = param_1 + 0x20;
    iVar16 = iVar24 + 1;
    iVar22 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar22 = iVar24;
    }
    if (iVar22 >> 5 == iVar15) {
      *(int *)(param_1 + 0x38) = iVar16;
    }
    else {
      if (*(int *)(param_1 + 0x3c) <= iVar24) {
        iVar15 = iVar24;
        local_60 = lVar10;
        if (iVar24 + 0x20U < 0xa0) {
          iVar16 = 0x80;
        }
        else {
          uVar6 = iVar24 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x3c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar6) {
              uVar7 = uVar6;
            }
          }
          else {
            uVar7 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
          }
          uVar17 = (ulonglong)(uVar7 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar17 + 0xf);
              if (uVar7 < 0x1ffd) {
                uVar17 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar8 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar4 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar4) {
                    uVar20 = (ulonglong)bVar4;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar4;
                  do {
                    uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_1406c2dcd;
                    lVar10 = uVar20 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar10 != 0x33);
                }
                uVar17 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar17 = (ulonglong)DAT_14c841df8;
                }
                uVar17 = -uVar17 & (uVar18 + uVar17) - 1;
              }
            }
            else {
              uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
              iVar15 = *(int *)(param_1 + 0x38);
            }
          }
LAB_1406c2dcd:
          iVar9 = (int)(uVar17 >> 2);
          iVar16 = -0x20;
          if ((int)uVar6 <= iVar9) {
            iVar16 = iVar9 << 5;
          }
        }
        lVar10 = local_60;
        *(int *)(param_1 + 0x3c) = iVar16;
        FUN_1446efbd8(local_60,iVar15);
        iVar16 = *(int *)(param_1 + 0x38) + 1;
      }
      iVar15 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar15 = iVar16;
      }
      *(int *)(param_1 + 0x38) = iVar16;
      if (iVar16 % 0x20 != 0) {
        lVar13 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar13 = lVar10;
        }
        bVar4 = -(char)(iVar16 % 0x20);
        *(uint *)(lVar13 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)(lVar13 + (longlong)(iVar15 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar5;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x30);
    }
    bVar4 = (byte)iVar24 & 0x1f;
    puVar2 = (uint *)(lVar10 + (longlong)(iVar22 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x40);
    lVar13 = (longlong)iVar5;
    iVar24 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar13 * 0x310);
    *(int *)(param_1 + 0x40) = iVar24;
    iVar15 = *(int *)(param_1 + 0x44) + -1;
    *(int *)(param_1 + 0x44) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar24 * 0x310) = 0xffffffff;
    }
  }
  lVar10 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x30);
  }
  iVar24 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar24 = iVar5;
  }
  puVar2 = (uint *)(lVar10 + (longlong)(iVar24 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  iVar24 = 1;
  lVar10 = *(longlong *)(param_1 + 0x10);
  lVar13 = lVar13 * 0x310;
  _Dst = (void *)(lVar10 + lVar13);
  memcpy(_Dst,local_68,0x300);
  *(undefined8 **)(lVar10 + 0x300 + lVar13) = puVar12;
  *(undefined4 *)(lVar10 + 0x308 + lVar13) = 0xffffffff;
  uVar6 = *(uint *)(lVar10 + 0x2d0 + lVar13);
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44) == 1) {
    uVar7 = 1;
  }
  else {
    iVar15 = FUN_14049ade6(local_70,uVar6,_Dst);
    plVar21 = local_70;
    if (iVar15 != -1) {
      memmove((void *)((longlong)iVar15 * 0x310 + *local_70),_Dst,0x308);
      FUN_140840c18(plVar21,iVar5);
      goto LAB_1406c2bf1;
    }
    uVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
    if (3 < uVar7) {
      uVar17 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar24 = 1 << ((byte)lVar10 & 0x1f);
    }
  }
  if (((int)uVar7 < 1) || (iVar24 <= *(int *)(param_1 + 0x58))) {
    uVar6 = *(int *)(param_1 + 0x58) - 1U & uVar6;
    *(uint *)((longlong)_Dst + 0x30c) = uVar6;
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar10 = param_1 + 0x48;
    }
    *(undefined4 *)((longlong)_Dst + 0x308) =
         *(undefined4 *)
          (lVar10 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar6) * 4);
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar10 = param_1 + 0x48;
    }
    *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar6) * 4) = iVar5;
  }
  else {
    *(int *)(param_1 + 0x58) = iVar24;
    FUN_1402cdf14(local_70);
  }
LAB_1406c2bf1:
  plVar21 = local_58;
  bVar4 = DAT_14ca76a68 ^ 1;
  bVar19 = DAT_14ca76a80 ^ 1;
  if ((DAT_14ca84f5a & bVar4 & DAT_14c760d84 != 0) != 0 || (bVar19 & 1) != 0) {
    LOCK();
    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
    UNLOCK();
    bVar4 = DAT_14ca76a68 ^ 1;
    bVar19 = DAT_14ca76a80 ^ 1;
  }
  iVar5 = DAT_14c760d84;
  *local_58 = (longlong)puVar12;
  if (((iVar5 != 0 & DAT_14ca84f5a & bVar4) != 0) || ((bVar19 & 1) != 0)) {
    LOCK();
    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
    UNLOCK();
  }
  ReleaseSRWLockExclusive(local_78);
  local_50 = plVar21;
  pcVar3 = (code *)*param_4;
  plVar21 = param_4 + 4;
  if ((longlong *)param_4[2] != (longlong *)0x0) {
    plVar21 = (longlong *)param_4[2];
  }
  uVar14 = (**(code **)(*plVar21 + 8))(plVar21);
  (*pcVar3)(uVar14,&local_50,local_68);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c2eea FUN_1406c2eea body=40 status=ok
// SIG undefined FUN_1406c2eea(void)

undefined8 FUN_1406c2eea(undefined8 param_1,int param_2)

{
  FUN_1406c2f12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406c2f12 FUN_1406c2f12 body=128 status=ok
// SIG undefined FUN_1406c2f12(void)

void FUN_1406c2f12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f9c70;
  if ((param_1[0x37] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x37] + 0x50));
  }
  FUN_1406c2f92(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406c2f92 FUN_1406c2f92 body=49 status=ok
// SIG undefined FUN_1406c2f92(void)

void FUN_1406c2f92(longlong param_1,int param_2)

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



// FUNCTION 1406c2fc4 FUN_1406c2fc4 body=1668 status=ok
// SIG undefined FUN_1406c2fc4(void)

void FUN_1406c2fc4(longlong param_1,longlong param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1b8 [40];
  uint *local_190;
  double *local_188;
  longlong local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 auStack_160 [16];
  double local_150;
  bool local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130 [2];
  undefined1 local_128 [28];
  char local_10c;
  longlong local_100;
  char local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar14 = FUN_1406c3de4();
    lVar13 = *(longlong *)(param_1 + 0x40);
    if (((((lVar13 != 0) && (lVar14 != 0)) && (lVar4 = *(longlong *)(lVar13 + 0x10), lVar4 != 0)) &&
        ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
          lVar14 + 0x30)))) && (*(byte *)(param_1 + 0x48) < 2)) goto LAB_1406c33dd;
  }
  local_148 = *(char *)(param_2 + 0x860) == '\0';
  if (local_148) {
    local_150 = 0.0;
    local_168 = 0.0;
    auStack_160 = ZEXT816(0);
    local_178 = 0.0;
    dStack_170 = 0.0;
  }
  else {
    dVar9 = *(double *)(param_2 + 0x50);
    dVar10 = *(double *)(param_2 + 0x58);
    dVar24 = *(double *)(param_2 + 0x60);
    dVar11 = *(double *)(param_2 + 0x68);
    dVar19 = *(double *)(param_2 + 0x90);
    dVar23 = *(double *)(param_2 + 0x98);
    dVar26 = *(double *)(param_2 + 0xa0);
    dVar7 = dVar24 + dVar24;
    dVar5 = dVar9 + dVar9;
    dVar6 = dVar10 + dVar10;
    auVar22._0_8_ = (dVar6 * dVar11 + dVar9 * dVar7) * dVar26;
    auVar22._8_8_ = (dVar5 * dVar11 + dVar9 * dVar5) * *(double *)(param_2 + 0xa8);
    dVar8 = (1.0 - (dVar7 * dVar24 + dVar6 * dVar10)) * dVar19;
    dVar24 = (1.0 - (dVar7 * dVar24 + dVar5 * dVar9)) * dVar23;
    dVar20 = (dVar11 * dVar7 + dVar6 * dVar9) * dVar19;
    dVar21 = (dVar11 * dVar5 + dVar7 * dVar10) * dVar23;
    dVar19 = (dVar9 * dVar7 - dVar6 * dVar11) * dVar19;
    auVar27._0_8_ = dVar23 * (dVar6 * dVar9 - dVar11 * dVar7);
    auVar27._8_8_ = dVar26 * (dVar7 * dVar10 - dVar11 * dVar5);
    auVar22 = blendpd(auVar22,auVar27,2);
    auVar28._8_4_ = SUB84(dVar24,0);
    auVar28._0_8_ = dVar8;
    auVar28._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    auVar28 = blendpd(auVar27,auVar28,2);
    dVar26 = (1.0 - (dVar5 * dVar9 + dVar6 * dVar10)) * dVar26;
    dVar6 = (*(double *)(param_2 + 0x830) + *(double *)(param_2 + 0x848)) * 0.5;
    dVar7 = (*(double *)(param_2 + 0x838) + *(double *)(param_2 + 0x850)) * 0.5;
    dVar5 = (*(double *)(param_2 + 0x840) + *(double *)(param_2 + 0x858)) * 0.5;
    dVar23 = (*(double *)(param_2 + 0x848) - *(double *)(param_2 + 0x830)) * 0.5;
    dVar25 = (*(double *)(param_2 + 0x850) - *(double *)(param_2 + 0x838)) * 0.5;
    dVar24 = (*(double *)(param_2 + 0x858) - *(double *)(param_2 + 0x840)) * 0.5;
    dVar9 = dVar5 * auVar22._0_8_ + auVar28._0_8_ * dVar7 + dVar6 * dVar8 +
            *(double *)(param_2 + 0x70);
    dVar10 = dVar5 * auVar22._8_8_ + auVar28._8_8_ * dVar7 + dVar6 * dVar20 +
             *(double *)(param_2 + 0x78);
    dVar8 = ABS(dVar24 * auVar22._0_8_) + ABS(auVar28._0_8_ * dVar25) + ABS(dVar23 * dVar8);
    dVar11 = ABS(dVar24 * auVar22._8_8_) + ABS(auVar28._8_8_ * dVar25) + ABS(dVar23 * dVar20);
    local_178 = dVar9 - dVar8;
    dStack_170 = dVar10 - dVar11;
    dVar11 = dVar11 + dVar10;
    dVar24 = ABS(dVar25 * dVar21) + ABS(dVar19 * dVar23) + ABS(dVar24 * dVar26);
    local_150 = dVar5 * dVar26 + dVar7 * dVar21 + dVar6 * dVar19 + *(double *)(param_2 + 0x80);
    local_168 = local_150 - dVar24;
    auStack_160._8_4_ = SUB84(dVar11,0);
    auStack_160._0_8_ = dVar8 + dVar9;
    auStack_160._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_150 = local_150 + dVar24;
  }
  local_148 = !local_148;
  local_188 = &local_178;
  local_190 = param_3;
  local_180 = param_2;
  if ((((param_3[1] == 0) || (uVar2 = *param_3, (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (((plVar15 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar15 == (longlong *)0x0 || (*(uint *)(plVar15 + 2) != param_3[1])) ||
        ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))))) ||
     ((lVar13 = *plVar15, lVar13 == 0 || (cVar12 = FUN_1406c36b2(&local_190,lVar13), cVar12 == '\0')
      ))) {
    local_140 = FUN_1406c3de4();
    if (local_140 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_140);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    if ((local_140 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(local_140);
    }
    local_130[0] = 5;
    local_d8 = '\0';
    local_138 = uVar3;
    FUN_140244552(local_128,&local_138,&local_140);
    FUN_1406c3a2a(local_130);
    if (local_10c == '\0') {
      do {
        lVar13 = local_100;
        if ((local_100 != 0) && (cVar12 = FUN_1406c36b2(&local_190,local_100), cVar12 != '\0'))
        goto LAB_1406c33cb;
        FUN_1406c3a2a(local_130);
      } while (local_10c != '\x01');
    }
    lVar13 = 0;
LAB_1406c33cb:
    if (local_d8 == '\x01') {
      FUN_14024445c(local_128);
    }
  }
LAB_1406c33dd:
  cVar12 = FUN_1406c3eca(param_3,lVar13);
  if (cVar12 == '\0') {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_1b8);
    }
    FUN_14485c47a(param_3,lVar13);
    param_3[0xb] = 0xffffffff;
    param_3[0xc] = 0xffffffff;
    param_3[0xd] = 0xffffffff;
    if ((*(char *)(param_1 + 0x60) == '\x01') &&
       (cVar12 = FUN_1449d9015(*(undefined2 *)
                                (&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x890) * 2),0),
       cVar12 != '\0')) {
      lVar13 = FUN_14479d2ce(param_3);
      uVar2 = *(uint *)(lVar13 + 0x570);
      if (0 < (int)uVar2) {
        uVar17 = 0;
        do {
          lVar13 = FUN_14479d2ce(param_3);
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x568) + uVar17 * 8);
          if (lVar13 != 0) {
            bVar1 = *(byte *)(lVar13 + 0x34);
            uVar16 = (uint)uVar17;
            if (bVar1 - 2 < 4) {
              if (param_3[0xd] == 0xffffffff) {
                param_3[0xd] = uVar16;
                *(byte *)(param_3 + 0xe) = bVar1;
              }
              if (param_3[0xb] == 0xffffffff) {
                param_3[0xb] = uVar16;
                *(bool *)(param_3 + 10) = (bVar1 & 0xfe) == 2;
              }
            }
            else if (bVar1 == 6) {
              if (param_3[0xc] == 0xffffffff) {
                param_3[0xc] = uVar16;
              }
            }
            else if ((bVar1 == 0) && (param_3[0xb] == 0xffffffff)) {
              param_3[0xb] = uVar16;
              *(undefined1 *)(param_3 + 10) = 1;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar2 != uVar17);
      }
    }
    bVar18 = true;
    if ((((char)param_3[0xf] != '\x01') || (param_3[0xb] != 0xffffffff)) &&
       ((*(char *)((longlong)param_3 + 0x3d) != '\x01' || (param_3[0xc] != 0xffffffff)))) {
      if (*(char *)((longlong)param_3 + 0x3e) == '\x01') {
        bVar18 = param_3[0xd] == 0xffffffff;
      }
      else {
        bVar18 = false;
      }
    }
    *(bool *)((longlong)param_3 + 0x3a) = bVar18;
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c36b2 FUN_1406c36b2 body=887 status=ok
// SIG undefined FUN_1406c36b2(void)

undefined8 FUN_1406c36b2(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  
  iVar2 = *(int *)(*param_1 + 0xc);
  if (((((iVar2 != 0) && (uVar9 = *(uint *)(*param_1 + 8), -1 < (int)uVar9)) &&
       ((int)uVar9 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar2)))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar4 = *plVar6, lVar4 != 0)))) {
    pdVar3 = (double *)param_1[1];
    if ((*pdVar3 <= *(double *)(lVar4 + 0x160) + *(double *)(lVar4 + 0x178)) &&
       (dVar18 = *(double *)(lVar4 + 0x160) - *(double *)(lVar4 + 0x178),
       dVar18 < pdVar3[3] || dVar18 == pdVar3[3])) {
      if ((pdVar3[1] <= *(double *)(lVar4 + 0x168) + *(double *)(lVar4 + 0x180)) &&
         (dVar18 = *(double *)(lVar4 + 0x168) - *(double *)(lVar4 + 0x180),
         dVar18 < pdVar3[4] || dVar18 == pdVar3[4])) {
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
    }
  }
  lVar4 = FUN_1447210f0(param_2);
  if (lVar4 == *(longlong *)(param_1[2] + 0x30)) {
    lVar4 = (**(code **)(*(longlong *)(param_2 + 0x390) + 0x18))(param_2 + 0x390);
    uVar5 = 0;
    if (lVar4 == 0) {
      return 0;
    }
    iVar2 = *(int *)(lVar4 + 200);
    if (iVar2 == 0) {
      uVar8 = 1;
      iVar11 = 0;
      iVar14 = 0;
    }
    else {
      puVar12 = *(uint **)(lVar4 + 0xc0);
      if (*(uint **)(lVar4 + 0xc0) == (uint *)0x0) {
        puVar12 = (uint *)(lVar4 + 0xb0);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar14 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar14 = iVar2 + -1;
        }
        uVar5 = 0;
        uVar8 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar8 = uVar5;
        }
        iVar11 = 0;
        do {
          if (uVar8 == uVar5) {
            return 0;
          }
          iVar11 = iVar11 + 0x20;
          uVar9 = puVar12[uVar5 + 1];
          uVar5 = uVar5 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar5 = 0;
        iVar11 = 0;
      }
      uVar8 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar8 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar14 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar14) {
        iVar14 = iVar2;
      }
    }
    if (iVar14 != iVar2) {
      pdVar3 = (double *)param_1[1];
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      iVar10 = iVar10 >> 5;
      uVar9 = 0xffffffff;
      do {
        lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 8 + (longlong)iVar14 * 0x18);
        iVar14 = (int)uVar5;
        if ((*pdVar3 <= *(double *)(lVar13 + 0x160) + *(double *)(lVar13 + 0x178)) &&
           (dVar18 = *(double *)(lVar13 + 0x160) - *(double *)(lVar13 + 0x178),
           dVar18 < pdVar3[3] || dVar18 == pdVar3[3])) {
          if ((pdVar3[1] <= *(double *)(lVar13 + 0x168) + *(double *)(lVar13 + 0x180)) &&
             (dVar18 = *(double *)(lVar13 + 0x168) - *(double *)(lVar13 + 0x180),
             dVar18 < pdVar3[4] || dVar18 == pdVar3[4])) {
            lVar4 = *param_1;
            if (lVar13 == 0) {
              *(undefined4 *)(lVar4 + 8) = 0;
              uVar5 = 0;
            }
            else {
              uVar9 = *(uint *)(lVar13 + 0xc);
              *(uint *)(lVar4 + 8) = uVar9;
              if ((int)uVar9 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              uVar5 = (ulonglong)*(uint *)(lVar13 + 0x10);
              if (*(uint *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar17 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar17) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                }
                LOCK();
                uVar15 = *(uint *)(lVar13 + 0x10);
                bVar17 = uVar15 == 0;
                if (bVar17) {
                  *(uint *)(lVar13 + 0x10) = uVar9;
                  uVar15 = 0;
                }
                UNLOCK();
                if (bVar17) {
                  uVar15 = uVar9;
                }
                uVar5 = (ulonglong)uVar15;
              }
            }
            *(int *)(lVar4 + 0xc) = (int)uVar5;
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
        }
        uVar9 = uVar9 & ~(uint)uVar8;
        puVar12 = *(uint **)(lVar4 + 0xc0);
        if (*(uint **)(lVar4 + 0xc0) == (uint *)0x0) {
          puVar12 = (uint *)(lVar4 + 0xb0);
        }
        lVar13 = (longlong)iVar14;
        uVar15 = puVar12[lVar13] & uVar9;
        if (uVar15 == 0) {
          iVar7 = iVar10;
          if (iVar10 < iVar14) {
            iVar7 = iVar14;
          }
          if (iVar10 <= iVar14) {
            return 0;
          }
          lVar16 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar15 = puVar12[lVar13 + lVar16 + 1];
            if (uVar15 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar7 - lVar13 == lVar16) {
              return 0;
            }
          }
          uVar5 = (ulonglong)(iVar14 + (int)lVar16 + 1);
          uVar9 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar14 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar14 < iVar2);
    }
  }
  return 0;
}



// FUNCTION 1406c3a2a FUN_1406c3a2a body=953 status=ok
// SIG undefined FUN_1406c3a2a(void)

void FUN_1406c3a2a(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  bool bVar15;
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
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar14 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      puVar6 = param_1 + 4;
      lVar10 = lVar11;
      if (lVar14 <= lVar11) {
        puVar6 = param_1 + 0xe;
        lVar10 = lVar11 - lVar14;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar6 + lVar10 * 8);
      param_1[10] = param_1[10] + 1;
      if (lVar10 != 0) {
        if (DAT_14cae8b20 == 0) {
          local_70 = &local_50;
          local_50 = (code *)&LAB_14355090c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_78 = &LAB_147b8e16d;
          local_80 = (code *)&LAB_140810a38;
          local_88 = L"Engine";
          local_90 = 0x800000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar8 = DAT_14cae8b20;
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
        lVar7 = *(longlong *)(lVar10 + 0x20);
        if (lVar7 != 0) {
          iVar1 = *(int *)(lVar8 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
               (lVar12 = lVar7,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
               lVar8 + 0x30)) {
              lVar12 = 0;
            }
          } while ((lVar12 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
          if ((lVar12 != 0) &&
             ((uVar5 = *param_1, (uVar5 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
            if ((uVar5 & 2) != 0) {
              cVar4 = FUN_144affb44(lVar10);
              if (cVar4 == '\0') goto LAB_1406c3dc0;
              uVar5 = *param_1;
            }
            if ((uVar5 & 4) == 0) {
              lVar8 = *(longlong *)(lVar12 + 0xc0);
            }
            else {
              if (((*(byte *)(lVar12 + 0x240) & 0x20) == 0) ||
                 (bVar9 = 1, (*(byte *)(lVar12 + 0x242) & 8) != 0)) {
                bVar9 = 1;
                if ((*(byte *)(lVar12 + 0x241) & 0x20) == 0) {
                  bVar9 = (*(byte *)(lVar12 + 0x241) & 0x40) >> 6;
                }
              }
              lVar8 = *(longlong *)(lVar12 + 0xc0);
              if (lVar8 == 0) {
LAB_1406c3bf5:
                pcVar13 = (char *)0x0;
              }
              else {
                iVar1 = *(int *)(lVar8 + 0x1b0);
                if (((longlong)iVar1 < 0) || (*(int *)(lVar8 + 0x1a8) <= iVar1)) goto LAB_1406c3bf5;
                pcVar13 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar8 + 0x1a0));
              }
              pcVar3 = *(char **)(lVar12 + 0x2e8);
              if (pcVar3 == (char *)0x0) {
                bVar15 = true;
              }
              else {
                bVar15 = *pcVar3 == '\x02';
              }
              if ((bVar9 & ((pcVar13 == (char *)0x0 || pcVar3 == pcVar13) | bVar15)) != 1)
              goto LAB_1406c3dc0;
            }
            if (lVar8 == lVar2) {
              if (*(longlong *)(lVar2 + 0x30) != lVar12) {
                lVar8 = FUN_14059e8cc();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_1406c3dc0;
              }
              *(longlong *)(param_1 + 0xc) = lVar10;
              param_1[8] = (uint)lVar11;
              goto LAB_1406c3bc7;
            }
          }
        }
      }
LAB_1406c3dc0:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar14);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
LAB_1406c3bc7:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c3de4 FUN_1406c3de4 body=228 status=ok
// SIG undefined FUN_1406c3de4(void)

longlong FUN_1406c3de4(void)

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
  if (DAT_14caa1778 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1432469d6;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9ba;
    local_38 = &LAB_14744f8b4;
    local_40 = FUN_1417917a9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x8a8;
    FUN_14081cfa3(L"/Script/Landscape",L"Landscape",&DAT_14caa1778,FUN_146322520);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1778;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c3eca FUN_1406c3eca body=255 status=ok
// SIG undefined FUN_1406c3eca(void)

ulonglong FUN_1406c3eca(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
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
    uVar4 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  local_24 = uVar4;
  if ((*param_1 != local_28) ||
     (uVar3 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1), param_1[1] != uVar4)) {
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_144729dda(&local_28);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1406c3fca FUN_1406c3fca body=80 status=ok
// SIG undefined FUN_1406c3fca(void)

void FUN_1406c3fca(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x1179) != '\x01') {
    (**(code **)(*param_1 + 0xd40))(param_1);
    FUN_1406c401a(param_1);
    (**(code **)(*param_1 + 0xd48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001406c4006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcf0))(param_1);
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x117f) = 1;
  return;
}



// FUNCTION 1406c401a FUN_1406c401a body=89 status=ok
// SIG undefined FUN_1406c401a(void)

void FUN_1406c401a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_14036294a(param_1,1,1);
    FUN_1406c4ac2(*(undefined8 *)(param_1 + 0xae8));
    FUN_140107fd2(*(undefined8 *)(param_1 + 0xae8));
  }
  *(undefined8 *)(param_1 + 0xae8) = 0;
  FUN_1406c4074(param_1);
  FUN_140729606(param_1);
  return;
}



// FUNCTION 1406c4074 FUN_1406c4074 body=239 status=ok
// SIG undefined FUN_1406c4074(void)

ulonglong FUN_1406c4074(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((*(longlong *)(param_1 + 0xae8) != 0) && (lVar5 = FUN_140211672(), lVar5 != 0)) {
    FUN_14792da7e(lVar5);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0xb80);
  if (uVar4 != 0) {
    plVar6 = *(longlong **)(param_1 + 0xb78);
    plVar1 = plVar6 + uVar4;
    do {
      lVar5 = *plVar6;
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x31) & 8) != 0)) {
        FUN_1406c4ac2(lVar5);
        FUN_144757f48(lVar5,0x40000000);
        uVar3 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        do {
          uVar3 = *(uint *)(lVar5 + 8);
          uVar4 = (ulonglong)uVar3;
          if ((uVar3 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar2 = *(uint *)(lVar5 + 8);
          if (uVar3 == uVar2) {
            *(uint *)(lVar5 + 8) = uVar3 | 0x200000;
          }
          else {
            uVar4 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar3 != uVar2);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  *(undefined4 *)(param_1 + 0xb80) = 0;
  if (*(int *)(param_1 + 0xb84) < 0) {
    uVar4 = FUN_147a14754(param_1 + 0xb78,0);
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 1406c4164 FUN_1406c4164 body=670 status=ok
// SIG undefined FUN_1406c4164(void)

undefined8 FUN_1406c4164(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined8 **)(param_1 + 0x298);
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar6 = 0;
    puVar6[1] = param_2;
    uVar7 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (undefined8 *)*puVar2;
      *puVar2 = puVar6;
      UNLOCK();
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = puVar6;
      UNLOCK();
    }
    goto LAB_1406c434c;
  }
  local_2c = 0;
  if (param_2 != 0) {
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_30 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (iVar5 == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar9;
      }
      local_2c = iVar5;
      if (iVar5 == 0) goto LAB_1406c4256;
    }
    local_2c = iVar5;
    if ((((-1 < (int)local_30) && ((int)local_30 < DAT_14c9647dc)) &&
        (lVar10 = (ulonglong)((local_30 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8), lVar10 != 0)) &&
       ((*(int *)(lVar10 + 0x10) == iVar5 && ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
      FUN_1406c499e(param_1 + 0xf0);
    }
  }
LAB_1406c4256:
  cVar4 = FUN_140760b84(param_2,0x3e4ccccd);
  if (cVar4 == '\0') {
    lVar10 = *(longlong *)(param_2 + 0xb0);
    if ((lVar10 == 0) && (lVar10 = FUN_1448abda6(param_2), lVar10 == 0)) {
LAB_1406c43cf:
      FUN_1406c492a(param_2,1);
    }
    else if (((*(longlong *)(lVar10 + 0x30) == 0) ||
             (((lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x2b0), lVar8 == 0 ||
               (*(longlong *)(lVar8 + 0x588) == 0)) ||
              (*(double *)(lVar10 + 0x6d0) < *(double *)(lVar10 + 0x708))))) &&
            (((*(byte *)(lVar10 + 0x154) & 0x40) == 0 || (iVar5 = FUN_14490d72a(lVar10), iVar5 != 3)
             ))) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
          if (*(longlong *)(lVar3 + 0x360) == lVar10) {
            if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x278) & 1) != 0)) goto LAB_1406c4322;
            break;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
      }
      cVar4 = FUN_144a80e00(lVar10);
      if ((cVar4 == '\0') || (-1 < *(char *)(lVar10 + 0x155))) goto LAB_1406c43cf;
    }
  }
LAB_1406c4322:
  lVar10 = FUN_1406c47dc(*(undefined8 *)(param_2 + 0xa8));
  uVar7 = 0;
  if (lVar10 != 0) {
    uVar7 = FUN_14082bc44(param_1 + 0x1d0,lVar10,lVar10 + 0x40);
  }
LAB_1406c434c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1406c4404 FUN_1406c4404 body=982 status=ok
// SIG undefined FUN_1406c4404(void)

ulonglong FUN_1406c4404(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_a8 [46];
  byte local_7a;
  byte local_79;
  int local_78;
  int local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = *(undefined8 **)(param_1 + 0x2a0);
  if (puVar2 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      local_50._0_4_ = 0;
      iVar5 = 0;
      uVar12 = (uint)local_50;
    }
    else {
      uVar12 = *(uint *)(param_2 + 0xc);
      local_50 = (ulonglong)uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar5 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar5 = *(int *)(lVar16 + 0x10);
        bVar18 = iVar5 == 0;
        if (bVar18) {
          *(int *)(lVar16 + 0x10) = iVar13;
          iVar5 = 0;
        }
        UNLOCK();
        uVar12 = (uint)local_50;
        if (bVar18) {
          iVar5 = iVar13;
        }
      }
    }
    local_50._0_4_ = uVar12;
    local_50 = CONCAT44(iVar5,(uint)local_50);
    iVar5 = *(int *)(param_1 + 0xf8);
    lVar16 = (longlong)iVar5;
    if (lVar16 != 0) {
      lVar10 = *(longlong *)(param_1 + 0xf0);
      bVar3 = FUN_1406c4a1c(lVar10,&local_50);
      local_60 = lVar10 + 8;
      iVar11 = 0;
      local_70 = lVar10;
      iVar13 = 0;
      do {
        local_79 = bVar3;
        local_74 = iVar13;
        local_7a = local_79 ^ 1;
        lVar10 = (longlong)local_74;
        iVar14 = local_74 + 1;
        if (local_74 + 1 < iVar5) {
          iVar14 = iVar5;
        }
        lVar17 = local_60 + lVar10 * 8;
        bVar3 = local_79 & 1;
        local_78 = iVar11;
        local_68 = lVar10;
        iVar11 = local_74;
        do {
          lVar10 = lVar10 + 1;
          iVar13 = iVar14;
          if (lVar16 <= lVar10) break;
          bVar4 = FUN_1406c4a1c(lVar17,&local_50);
          iVar11 = iVar11 + 1;
          lVar17 = lVar17 + 8;
          iVar13 = iVar11;
        } while (bVar3 == bVar4);
        iVar11 = local_78;
        bVar3 = local_7a;
        if ((local_79 & 1) == 0) {
          iVar14 = iVar13 - local_74;
          if (local_78 != local_74) {
            memmove((void *)(local_70 + (longlong)local_78 * 8),(void *)(local_70 + local_68 * 8),
                    (longlong)iVar14 << 3);
          }
          iVar11 = iVar11 + iVar14;
        }
      } while (lVar10 < lVar16);
      *(int *)(param_1 + 0xf8) = iVar11;
    }
    FUN_1406c499e(param_1 + 0x100,&local_50);
    uVar12 = 0;
    FUN_1406c492a(param_2,0);
    lVar16 = FUN_1406c47dc(*(undefined8 *)(param_2 + 0xa8));
    if (lVar16 != 0) {
      FUN_1401c4d5c(param_1 + 0x1d0,lVar16,lVar16 + 0x40);
    }
    uVar7 = 0;
    if (param_2 != 0) {
      uVar12 = *(uint *)(param_2 + 0xc);
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar16 + 0x10);
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar15 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar15);
        }
        LOCK();
        uVar6 = *(uint *)(lVar16 + 0x10);
        bVar18 = uVar6 == 0;
        if (bVar18) {
          *(uint *)(lVar16 + 0x10) = uVar15;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar18) {
          uVar6 = uVar15;
        }
        uVar7 = (ulonglong)uVar6;
      }
    }
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      lVar16 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        lVar16 = *(longlong *)(param_1 + 0xe0);
      }
      iVar5 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & ((uint)uVar7 ^ uVar12))
                                * 4);
      if (iVar5 != -1) {
        uVar8 = uVar7 << 0x20;
        lVar16 = *(longlong *)(param_1 + 0xa0);
        do {
          lVar10 = (longlong)iVar5 * 0x230;
          local_50 = *(undefined8 *)(lVar16 + lVar10);
          local_58 = uVar12 | uVar8;
          uVar7 = FUN_144717174(&local_50,&local_58);
          lVar16 = *(longlong *)(param_1 + 0xa0);
          if ((char)uVar7 != '\0') {
            uVar7 = lVar16 + lVar10;
            if ((uVar7 != 0) && (lVar16 + lVar10 != -8)) {
              uVar7 = FUN_140164b70();
            }
            break;
          }
          iVar5 = *(int *)(lVar16 + 0x228 + lVar10);
        } while (iVar5 != -1);
      }
    }
  }
  else {
    puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar9 = 0;
    puVar9[1] = param_2;
    uVar7 = 0;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (ulonglong *)*puVar2;
      *puVar2 = puVar9;
      UNLOCK();
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = (ulonglong)puVar9;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1406c47dc FUN_1406c47dc body=102 status=ok
// SIG undefined FUN_1406c47dc(void)

void FUN_1406c47dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1406c4844();
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



// FUNCTION 1406c4844 FUN_1406c4844 body=228 status=ok
// SIG undefined FUN_1406c4844(void)

longlong FUN_1406c4844(void)

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
  if (DAT_14cad1a20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1479e8a20;
    local_40 = &LAB_1463b95a4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x178;
    FUN_14081cfa3(L"/Script/Engine",L"MovementComponent",&DAT_14cad1a20,FUN_1463b9582);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1a20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c492a FUN_1406c492a body=115 status=ok
// SIG undefined FUN_1406c492a(void)

void FUN_1406c492a(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if ((*(char *)(param_1 + 0x117b) != param_2) &&
     (*(char *)(param_1 + 0x117b) = param_2, (~*(byte *)(param_1 + 0x9c) & 3) == 0)) {
    bVar2 = *(byte *)(param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_1406c4979:
      *(byte *)(param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar1 = FUN_1448abda6(param_1);
      if (lVar1 == 0) {
        bVar2 = *(byte *)(param_1 + 0x9d);
        goto LAB_1406c4979;
      }
    }
  }
  return;
}



// FUNCTION 1406c499e FUN_1406c499e body=125 status=ok
// SIG undefined FUN_1406c499e(void)

int FUN_1406c499e(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_1406c4a1c(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1406c988a(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 1406c4a1c FUN_1406c4a1c body=166 status=ok
// SIG undefined FUN_1406c4a1c(void)

bool FUN_1406c4a1c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 != uVar3) || (bVar5 = true, uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      bVar5 = true;
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 1406c4ac2 FUN_1406c4ac2 body=350 status=ok
// SIG undefined FUN_1406c4ac2(void)

void FUN_1406c4ac2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar5 = *(int *)(param_1 + 0x288);
  if (0 < iVar5) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar7 = 0x50;
    lVar8 = 0;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x280) + lVar7);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x290);
        lVar9 = plVar2[4];
        if (lVar9 == 0) {
LAB_1406c4b90:
          lVar9 = 0;
        }
        else {
          lVar4 = FUN_14063d1f6();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1406c4b90;
        }
        (**(code **)(*plVar2 + 0x2d0))(plVar2,uVar1,lVar9,lVar3 + lVar8,4);
        iVar5 = *(int *)(param_1 + 0x288);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xb8;
      lVar8 = lVar8 + 0x30;
    } while (lVar6 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x28c);
  FUN_14499183d(*(undefined8 *)(param_1 + 0x280));
  *(undefined4 *)(param_1 + 0x288) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x28c) != 0)) {
    FUN_1417b4232(param_1 + 0x280,0);
  }
  iVar5 = *(int *)(param_1 + 0x29c);
  FUN_1448262fc(*(undefined8 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x298));
  *(undefined4 *)(param_1 + 0x298) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x29c) != 0)) {
    FUN_14052b4a8(param_1 + 0x290,0);
    return;
  }
  return;
}



// FUNCTION 1406c4c20 FUN_1406c4c20 body=144 status=ok
// SIG undefined FUN_1406c4c20(void)

bool FUN_1406c4c20(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  if (DAT_14c763888 == '\x01') {
    if ((-1 < *(int *)(param_1 + 0x3d4)) ||
       ((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 == 0 &&
        (lVar1 = FUN_1448abda6(param_1), lVar1 == 0)))) {
      fVar2 = *(float *)(param_1 + 0x3c8);
      goto LAB_1406c4c65;
    }
  }
  else if ((-1 < *(int *)(param_1 + 0x3d4)) ||
          ((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 == 0 &&
           (lVar1 = FUN_1448abda6(param_1), lVar1 == 0)))) {
    fVar2 = *(float *)(param_1 + 0x3c4);
    goto LAB_1406c4c65;
  }
  fVar2 = (float)*(double *)(lVar1 + 0x6d0);
LAB_1406c4c65:
  return param_2 + -1.0 < fVar2;
}



// FUNCTION 1406c4cb0 FUN_1406c4cb0 body=172 status=ok
// SIG undefined FUN_1406c4cb0(void)

void FUN_1406c4cb0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)((longlong)param_1 + 0x1179) == '\x01') {
    *(char *)((longlong)param_1 + 0x117d) = (char)param_2;
    *(undefined1 *)((longlong)param_1 + 0x117e) = 1;
  }
  else {
    (**(code **)(*param_1 + 0xd30))(param_1,param_2);
    FUN_1406c5e38(param_1,param_2);
    (**(code **)(*param_1 + 0xd38))(param_1,param_2);
    FUN_1406c4f64(param_1);
    if ((DAT_14cb71bf8 == '\x01') && (param_1[0x15d] != 0)) {
      lVar3 = FUN_140732592();
      lVar1 = param_1[0x15d];
      if (((lVar1 != 0) &&
          (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        *(byte *)(lVar1 + 0x31) = *(byte *)(lVar1 + 0x31) | 1;
      }
    }
  }
  return;
}



// FUNCTION 1406c4d5c FUN_1406c4d5c body=356 status=ok
// SIG undefined FUN_1406c4d5c(void)

void FUN_1406c4d5c(longlong param_1)

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
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x12c0) <= *(int *)(param_1 + 0x12ec)) {
    FUN_1406c5554(param_1 + 0x1288,*(undefined8 *)(param_1 + 0xa8),0);
  }
  lVar1 = *(longlong *)(param_1 + 0xae8);
  if (lVar1 != 0) {
    if (DAT_14c9a51d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1433d5220;
      local_30 = FUN_142b32f24;
      local_38 = &LAB_1462ac436;
      local_48 = &LAB_1470c7d1d;
      local_50 = &LAB_1462ac43b;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000008;
      local_70 = 0x10;
      local_78 = 0x560;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
    }
    if ((*(int *)(DAT_14c9a51d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) == DAT_14c9a51d8 + 0x30)) {
      FUN_1406c78ea(param_1);
      FUN_1406c6972(lVar1,param_1 + 0x1288);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1406c4ec2(param_1 + 0x1978,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1406c4ec2 FUN_1406c4ec2 body=162 status=ok
// SIG undefined FUN_1406c4ec2(void)

void FUN_1406c4ec2(longlong *param_1,undefined8 param_2)

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
        goto LAB_1406c4f4f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1406c4f4f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1406c4f64 FUN_1406c4f64 body=430 status=ok
// SIG undefined FUN_1406c4f64(void)

void FUN_1406c4f64(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb71bf8 == '\x01') &&
     ((lVar5 = *(longlong *)(param_1 + 0xb0), lVar5 != 0 ||
      (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)))) {
    uVar2 = DAT_14cb71f80;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar2,lVar5);
    plVar6 = local_30;
    if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = local_30 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (plVar6 != (longlong *)0x0) {
      iVar4 = (int)plVar6[1];
      do {
        plVar7 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plVar6;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_38 != 0) {
          FUN_1406c5114(local_38,param_1);
        }
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c5114 FUN_1406c5114 body=394 status=ok
// SIG undefined FUN_1406c5114(void)

void FUN_1406c5114(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar2 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar5;
      }
    }
  }
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar6 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & (uVar2 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xa0);
      do {
        lVar7 = (longlong)iVar3 * 0x230;
        local_38 = *(undefined8 *)(lVar6 + lVar7);
        local_40 = CONCAT44(uVar2,uVar4);
        cVar1 = FUN_144717174(&local_38,&local_40);
        lVar6 = *(longlong *)(param_1 + 0xa0);
        if (cVar1 != '\0') {
          if ((lVar6 + lVar7 + 8U & 0xfffffffffffffff7) != 0) {
            *(undefined1 *)(lVar6 + lVar7 + 0x99) = 1;
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x228 + lVar7);
      } while (iVar3 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c52a0 FUN_1406c52a0 body=670 status=ok
// SIG undefined FUN_1406c52a0(void)

void FUN_1406c52a0(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  code *pcVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
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
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[600] <= *(int *)((longlong)param_1 + 0x12ec)) {
    FUN_1406c5554(param_1 + 0x251,param_1[0x15],0);
  }
  lVar8 = param_1[0xcb];
  if (lVar8 == 0) {
    lVar8 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar8 != 0) != 0) goto LAB_1406c5546;
    if (lVar8 == 0) goto LAB_1406c542d;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1406c5546:
    FUN_1456cec3c(lVar8);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
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
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    local_38 = (code *)0x0;
    uStack_30 = 0;
    local_28 = *(undefined8 *)(lVar8 + 0x18);
    FUN_1400348e2(&local_28,&local_38);
    uVar6 = 0;
    uVar7 = (ulonglong)(DAT_14cadbef0 - 1);
    if (DAT_14cadbef0 == 0) {
      uVar7 = uVar6;
    }
    if (0 < (int)uVar7) {
      puVar5 = &DAT_149dfb77a;
      if (DAT_14cadbef0 != 0) {
        puVar5 = DAT_14cadbee8;
      }
      pcVar4 = (code *)&DAT_149dfb77a;
      if ((int)uStack_30 != 0) {
        pcVar4 = local_38;
      }
      lVar8 = 0;
LAB_1406c539d:
      uVar1 = *(ushort *)(pcVar4 + lVar8);
      uVar2 = *(ushort *)((longlong)puVar5 + lVar8);
      if (uVar1 == uVar2) {
        iVar9 = 0;
        if ((uVar1 == 0) || (uVar7 == 1)) goto LAB_1406c53e7;
LAB_1406c53b8:
        uVar7 = uVar7 - 1;
        lVar8 = lVar8 + 2;
        goto LAB_1406c539d;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
          iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
          goto LAB_1406c53e7;
        }
        if (uVar7 == 1) {
          iVar9 = 0;
          goto LAB_1406c53e7;
        }
        goto LAB_1406c53b8;
      }
      iVar9 = (uint)uVar1 - (uint)uVar2;
LAB_1406c53e7:
      uVar6 = (ulonglong)(iVar9 == 0);
    }
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (((char)uVar6 == '\0') &&
       ((((param_1[0x2c6] != 0 || (cVar3 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar3 != '\0'))
         || (cVar3 = FUN_140769252(param_1), cVar3 != '\0')) || (param_1[0x2c7] != 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
    }
  }
LAB_1406c542d:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c5554 FUN_1406c5554 body=600 status=ok
// SIG undefined FUN_1406c5554(void)

void FUN_1406c5554(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_c8 [32];
  uint local_a8;
  int local_a4;
  undefined8 *local_a0;
  uint *local_98;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a4 = 0;
  if (param_2 == 0) {
    local_a8 = 0;
    iVar1 = 0;
  }
  else {
    local_a8 = *(uint *)(param_2 + 0xc);
    if ((int)local_a8 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_a8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a8 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x10) = iVar2;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar2;
      }
    }
  }
  local_a0 = &DAT_14c9a63f0;
  local_a4 = iVar1;
  local_98 = &local_a8;
  FUN_1406c57ae(&local_88,local_8c,&local_a0,0);
  local_a4 = 0;
  if (param_3 == 0) {
    local_a8 = 0;
    iVar1 = 0;
  }
  else {
    local_a8 = *(uint *)(param_3 + 0xc);
    if ((int)local_a8 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_a8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a8 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x10) = iVar2;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar2;
      }
    }
  }
  local_a0 = &DAT_14c9a63e8;
  local_a4 = iVar1;
  local_98 = &local_a8;
  FUN_1406c57ae(&local_88,local_8c,&local_a0,0);
  FUN_140535930(param_1 + 0x30,&local_88);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140535736(&local_88);
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c57ae FUN_1406c57ae body=352 status=ok
// SIG undefined FUN_1406c57ae(void)

undefined4 *
FUN_1406c57ae(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
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
  FUN_1406c59a8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1406c5910(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
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
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1406c5b84(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c5910 FUN_1406c5910 body=152 status=ok
// SIG undefined FUN_1406c5910(void)

void FUN_1406c5910(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1406c7860((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1406c597d;
    }
  }
  uVar5 = 0;
LAB_1406c597d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1406c59a8 FUN_1406c59a8 body=476 status=ok
// SIG undefined FUN_1406c59a8(void)

int * FUN_1406c59a8(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar11);
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



// FUNCTION 1406c5b84 FUN_1406c5b84 body=691 status=ok
// SIG undefined FUN_1406c5b84(void)

void FUN_1406c5b84(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1406c5bea;
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
  } while (uVar10 != uVar3);
LAB_1406c5bea:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 1406c5e38 FUN_1406c5e38 body=2871 status=ok
// SIG undefined FUN_1406c5e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406c5e38(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  double *pdVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double _X;
  double _X_00;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double _X_01;
  undefined1 auStack_158 [32];
  code **local_138;
  uint local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  code *local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(byte *)(param_1 + 0x18e) & 0x20) == 0) goto LAB_1406c62fe;
  lVar6 = param_1[0xcb];
  if (lVar6 == 0) {
    lVar6 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar6 != 0) != 0) goto LAB_1406c688b;
    if (lVar6 == 0) goto LAB_1406c62fe;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1406c688b:
    FUN_1456cec3c(lVar6);
  }
  if (DAT_14cb06da8 == 0) {
    local_100 = &local_e8;
    local_e8 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = &LAB_1464003b0;
    local_108 = &LAB_147d17bdf;
    local_110 = &LAB_1417edf22;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 0x10000000;
    local_130 = 8;
    local_138 = (code **)CONCAT44(local_138._4_4_,0x588);
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  lVar7 = DAT_14cb06da8;
  if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) ||
     ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) goto LAB_1406c62fe;
  *(undefined2 *)((longlong)param_1 + 0xc74) = 0;
  plVar8 = (longlong *)param_1[0xcb];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar8 != (longlong *)0x0) != 0) goto LAB_1406c6898;
    if (plVar8 != (longlong *)0x0) goto LAB_1406c5f3c;
LAB_1406c6643:
    plVar8 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 != 0) {
LAB_1406c6898:
      FUN_1456cec3c(plVar8);
      lVar7 = DAT_14cb06da8;
      if (DAT_14cb06da8 == 0) {
        local_100 = &local_e8;
        local_e8 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_1464003b0;
        local_108 = &LAB_147d17bdf;
        local_110 = &LAB_1417edf22;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000000;
        local_130 = 8;
        local_138 = (code **)CONCAT44(local_138._4_4_,0x588);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        lVar7 = DAT_14cb06da8;
      }
    }
LAB_1406c5f3c:
    if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_1406c6643;
  }
  plVar9 = param_1 + 0x102;
  lVar6 = (**(code **)(*plVar8 + 0x438))(plVar8);
  iVar1 = *(int *)(lVar6 + 8);
  iVar2 = (int)param_1[0x103];
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x103) = iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x81c) - iVar2) < (uint)(iVar1 - iVar2)) {
      FUN_14475e4ac(plVar9);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar9),0,(longlong)(iVar1 - iVar2) << 2);
  }
  else {
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x103) = iVar1;
      FUN_1401fef06(plVar9);
    }
  }
  FUN_14036294a(param_1,1,1);
  plVar8 = (longlong *)param_1[0x15c];
  if (((plVar8 == (longlong *)0x0) || (lVar6 = FUN_1402e44f4(), lVar6 == 0)) ||
     (((int)plVar8[7] < *(int *)(lVar6 + 0x38) ||
      (((*(longlong *)(plVar8[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30 ||
        (lVar6 = param_1[0x15c], lVar6 == 0)) || (param_1[0x15d] == 0)))))) {
    bVar13 = false;
  }
  else {
    plVar8 = *(longlong **)(param_1[0x15d] + 0x10);
    lVar7 = FUN_1402e44f4();
    if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)param_1[0x15c];
    }
    bVar13 = plVar8 != plVar9;
  }
  lVar6 = param_1[0x15d];
  if (lVar6 == 0) {
LAB_1406c6124:
    *(undefined4 *)(param_1 + 0x22e) = 0;
LAB_1406c612e:
    (**(code **)(*param_1 + 0xcb0))(param_1);
  }
  else {
    if ((*(longlong *)(lVar6 + 0x28) != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      lVar6 = param_1[0x15d];
    }
    else if (*(longlong *)(lVar6 + 0x28) == 0) goto LAB_1406c6124;
    plVar8 = (longlong *)param_1[0xcb];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0xcc];
      if ((DAT_14c950c29 & plVar8 != (longlong *)0x0) != 0) goto LAB_1406c694e;
      if (plVar8 != (longlong *)0x0) goto LAB_1406c605d;
LAB_1406c666c:
      plVar8 = (longlong *)0x0;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_1406c694e:
        FUN_1456cec3c(plVar8);
      }
LAB_1406c605d:
      if (DAT_14cb06da8 == 0) {
        local_100 = &local_e8;
        local_e8 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_1464003b0;
        local_108 = &LAB_147d17bdf;
        local_110 = &LAB_1417edf22;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000000;
        local_130 = 8;
        local_138 = (code **)CONCAT44(local_138._4_4_,0x588);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_1406c666c;
    }
    lVar7 = (**(code **)(*plVar8 + 0x3f8))(plVar8);
    lVar6 = *(longlong *)(lVar6 + 0x28);
    plVar9 = (longlong *)param_1[0xcb];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0xcc];
      if ((DAT_14c950c29 & plVar9 != (longlong *)0x0) != 0) goto LAB_1406c695b;
      if (plVar9 != (longlong *)0x0) goto LAB_1406c60c0;
LAB_1406c6695:
      plVar9 = (longlong *)0x0;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_1406c695b:
        FUN_1456cec3c(plVar9);
      }
LAB_1406c60c0:
      if (DAT_14cb06da8 == 0) {
        local_100 = &local_e8;
        local_e8 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_1464003b0;
        local_108 = &LAB_147d17bdf;
        local_110 = &LAB_1417edf22;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000000;
        local_130 = 8;
        local_138 = (code **)CONCAT44(local_138._4_4_,0x588);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_1406c6695;
    }
    bVar12 = lVar6 != lVar7;
    plVar8 = (longlong *)CONCAT71((int7)((ulonglong)lVar7 >> 8),bVar12);
    lVar6 = (**(code **)(*plVar9 + 0x3f8))(plVar9);
    *(undefined4 *)(param_1 + 0x22e) = 0;
    if ((bool)(bVar13 | (lVar6 == 0 || bVar12))) goto LAB_1406c612e;
  }
  FUN_14072916a(param_1,*(undefined4 *)((longlong)param_1 + 0x854));
  lVar6 = param_1[0x16];
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  if ((*(char *)(lVar6 + 0x152) == '\x02') && ((*(byte *)((longlong)param_1 + 0xc71) & 1) == 0)) {
LAB_1406c619b:
    uVar11 = (uint)CONCAT71((int7)((ulonglong)plVar8 >> 8),(*(byte *)(param_1 + 0x18e) & 0x40) == 0)
    ;
  }
  else {
    plVar8 = (longlong *)FUN_14143f0c0();
    lVar6 = plVar8[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      lVar6 = plVar8[0x22];
    }
    if (*(char *)(lVar6 + 0x56) == '\x01') goto LAB_1406c619b;
    uVar11 = 0;
  }
  cVar5 = FUN_14348cf12(param_1,param_2,uVar11 ^ 1);
  if ((((((*(int *)((longlong)param_1 + 0x66c) == 0) ||
         (uVar3 = *(uint *)(param_1 + 0xcd), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
       ((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 == 0 ||
        (*(int *)(lVar6 + 0x10) != *(int *)((longlong)param_1 + 0x66c))))) ||
      ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) && ((cVar5 != '\0' || (param_1[0x15d] == 0)))) {
    if ((char)uVar11 == '\0') {
      FUN_1407ec9d0(param_1);
    }
    else {
      FUN_1407396de(param_1,0,0);
      (**(code **)(*param_1 + 0xaf8))(param_1,0);
    }
    uVar4 = DAT_14c872b88;
    DAT_14c872b88 = uVar4;
    if (cVar5 != '\0') {
      DAT_14c872b88 = 1;
      FUN_1447cd2ec(param_1 + 0x1e4,0);
      DAT_14c872b88 = uVar4;
    }
  }
  auVar19 = *(undefined1 (*) [16])(param_1 + 0x36);
  dVar15 = auVar19._0_8_;
  dVar16 = auVar19._8_8_;
  dVar14 = (double)param_1[0x38];
  pdVar10 = (double *)param_1[0x46];
  if (pdVar10 == (double *)0x0) {
    pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
    dVar17 = DAT_14c8463d8;
    *pdVar10 = DAT_14c8463d0;
    pdVar10[1] = dVar17;
    dVar17 = DAT_14c8463e8;
    pdVar10[2] = DAT_14c8463e0;
    pdVar10[3] = dVar17;
    dVar17 = DAT_14c846500;
    pdVar10[4] = DAT_14c8464f8;
    pdVar10[5] = dVar17;
    pdVar10[6] = DAT_14c846508;
    param_1[0x46] = (longlong)pdVar10;
  }
  auVar23 = _DAT_1499387d0;
  if ((((pdVar10[4] != dVar15) || (NAN(pdVar10[4]) || NAN(dVar15))) || (pdVar10[5] != dVar16)) ||
     (((NAN(pdVar10[5]) || NAN(dVar16) || (pdVar10[6] != dVar14)) ||
      (NAN(pdVar10[6]) || NAN(dVar14))))) {
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar14;
    dVar17 = (double)DAT_1499387d0;
    dVar18 = DAT_1499387d0._8_8_;
    auVar19 = divpd(auVar19,_DAT_1499387d0);
    auVar22 = divpd(auVar25,_DAT_1499387d0);
    auVar19 = roundpd(auVar19,auVar19,3);
    auVar22 = roundpd(auVar22,auVar22,3);
    auVar31._0_8_ = dVar15 - auVar19._0_8_ * dVar17;
    auVar31._8_8_ = dVar16 - auVar19._8_8_ * dVar18;
    auVar26._0_8_ = dVar14 - auVar22._0_8_ * dVar17;
    auVar26._8_8_ = 0.0 - auVar22._8_8_ * dVar18;
    auVar29._0_8_ = auVar31._0_8_ + dVar17;
    auVar29._8_8_ = auVar31._8_8_ + dVar18;
    auVar24._0_8_ = auVar26._0_8_ + dVar17;
    auVar24._8_8_ = auVar26._8_8_ + dVar18;
    auVar22._8_8_ = -(ulonglong)(0.0 <= auVar31._8_8_);
    auVar22._0_8_ = -(ulonglong)(0.0 <= auVar31._0_8_);
    auVar19 = blendvpd(auVar29,auVar31,auVar22);
    auVar30._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
    auVar30._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
    auVar22 = blendvpd(auVar24,auVar26,auVar30);
    auVar27._0_8_ = auVar19._0_8_ + -360.0;
    auVar27._8_8_ = auVar19._8_8_ + -360.0;
    auVar20._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
    auVar20._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
    auVar30 = blendvpd(auVar19,auVar27,auVar20);
    auVar21._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
    auVar21._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
    auVar19._8_8_ = auVar22._8_8_ + 0.0;
    auVar19._0_8_ = auVar22._0_8_ + -360.0;
    auVar19 = blendvpd(auVar22,auVar19,auVar21);
    *(undefined1 (*) [16])(pdVar10 + 4) = auVar30;
    dVar14 = auVar19._0_8_;
    pdVar10[6] = dVar14;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = dVar14;
    auVar19 = divpd(auVar30,auVar23);
    auVar23 = divpd(auVar32,auVar23);
    auVar19 = roundpd(auVar19,auVar19,3);
    auVar23 = roundpd(auVar23,auVar23,3);
    dVar28 = (auVar30._0_8_ - auVar19._0_8_ * dVar17) * 0.008726646259971648;
    _X = (auVar30._8_8_ - auVar19._8_8_ * dVar18) * 0.008726646259971648;
    _X_00 = (dVar14 - auVar23._0_8_ * dVar17) * 0.008726646259971648;
    _X_01 = (0.0 - auVar23._8_8_ * dVar18) * 0.008726646259971648;
    dVar14 = sin(dVar28);
    dVar15 = sin(_X);
    dVar16 = sin(_X_00);
    sin(_X_01);
    dVar17 = cos(dVar28);
    dVar18 = cos(_X);
    dVar28 = cos(_X_00);
    cos(_X_01);
    *pdVar10 = dVar14 * dVar15 * dVar28 - dVar17 * dVar18 * dVar16;
    pdVar10[1] = -(dVar14 * dVar18 * dVar28) - dVar17 * dVar15 * dVar16;
    pdVar10[2] = -(dVar18 * dVar14 * dVar16) + dVar15 * dVar17 * dVar28;
    pdVar10[3] = dVar15 * dVar14 * dVar16 + dVar18 * dVar17 * dVar28;
  }
  local_e8 = (code *)*pdVar10;
  dStack_e0 = pdVar10[1];
  local_d8 = pdVar10[2];
  dStack_d0 = pdVar10[3];
  local_138 = &local_e8;
  local_130 = local_130 & 0xffffff00;
  FUN_140092404(param_1,param_1[0x24],param_1[0x25],0);
LAB_1406c62fe:
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c6972 FUN_1406c6972 body=1260 status=ok
// SIG undefined FUN_1406c6972(void)

void FUN_1406c6972(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
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
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = param_1[4];
  if (lVar9 != 0) {
    if (DAT_14cad2858 == 0) {
      local_80 = &local_60;
      local_60 = FUN_144a7958c;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_146395584;
      local_88 = &LAB_147a0ba80;
      local_90 = &LAB_14575ccce;
      local_98 = L"Engine";
      local_a0 = 0x40000000000;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar9 = *(longlong *)(lVar9 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar12 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar12 != 2)) {
        if (iVar12 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1406c6dc8;
        }
      }
      else {
LAB_1406c6dc8:
        FUN_14036294a(param_1[4],1,1);
      }
    }
  }
  lVar9 = param_1[0x7c];
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar9;
  }
  *(longlong *)(lVar9 + 0x948) = param_2;
  if ((param_2 == 0) || (*(char *)(param_2 + 0xa8) != '\x01')) goto LAB_1406c6a2f;
  FUN_140457ffc(param_2 + 0x130,param_1);
  lVar2 = *(longlong *)(lVar9 + 0x948);
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  pcVar4 = local_60;
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_60 + 0x10) = lVar10;
  *(undefined ***)local_60 = &PTR_FUN_14a1c7260;
  *(longlong *)(local_60 + 0x18) = 0;
  iVar12 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_60 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar12 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar12 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar12 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar6;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar12 = iVar6;
      }
    }
  }
  *(int *)(pcVar4 + 0x1c) = iVar12;
  *(longlong **)(pcVar4 + 0x20) = param_1;
  if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar5 == '\0')) {
    if (local_58 == 0) goto LAB_1406c6c11;
    if (local_60 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1406c6c01;
    }
  }
  else {
    plVar13 = (longlong *)(lVar2 + 0x130);
    if (*(int *)(lVar2 + 0x144) < 1) {
      iVar12 = *(int *)(lVar2 + 0x138);
      iVar6 = *(int *)(lVar2 + 0x140) + -1;
      *(int *)(lVar2 + 0x140) = iVar6;
      if (iVar6 <= iVar12) {
        iVar6 = iVar12;
        if (0 < iVar12) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar13 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar13 + (longlong)iVar11 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar13,iVar11);
              FUN_14005b248(plVar13);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar6 = *(int *)(lVar2 + 0x138);
          } while (iVar11 < iVar6);
        }
        iVar11 = 2;
        if (2 < iVar6 * 2) {
          iVar11 = iVar6 * 2;
        }
        *(int *)(lVar2 + 0x140) = iVar11;
        if ((iVar11 < iVar12) && (*(int *)(lVar2 + 0x13c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_60 + 0x38))(local_60,local_50);
    }
    iVar12 = *(int *)(lVar2 + 0x138);
    *(uint *)(lVar2 + 0x138) = iVar12 + 1U;
    if (*(uint *)(lVar2 + 0x13c) < iVar12 + 1U) {
      FUN_1447a71f6(plVar13,iVar12);
    }
    lVar2 = *plVar13;
    lVar14 = (longlong)iVar12 * 0x10;
    *(undefined8 *)(lVar2 + lVar14) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar14) = 0;
    *(code **)(lVar2 + lVar14) = local_60;
    local_60 = (code *)0x0;
    *(int *)(lVar2 + 8 + lVar14) = local_58;
LAB_1406c6c01:
    local_58 = 0;
LAB_1406c6c11:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1406c6e60(*(undefined8 *)(lVar9 + 0x948));
  FUN_140a87c14(*(undefined8 *)(lVar9 + 0x948),lVar9,1);
LAB_1406c6a2f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c6e60 FUN_1406c6e60 body=604 status=ok
// SIG undefined FUN_1406c6e60(void)

void FUN_1406c6e60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar6 = FUN_1406c74ac();
  if (cVar6 != '\0') {
    local_d8 = param_1 + 0xb0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) < 0) {
      FUN_1470d9c7a(local_d8);
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    FUN_1403c4669(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((iVar2 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_1470d9caa(param_1 + 0x20);
    }
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x10);
      plVar1 = plVar7 + *(int *)(param_1 + 0x18);
      do {
        plVar4 = (longlong *)*plVar7;
        if (plVar4 != (longlong *)0x0) {
          local_98 = 0;
          local_90 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_8c = 0xffffffff00000080;
          local_84 = 0;
          local_78 = 0;
          local_70 = 0;
          FUN_140535930(&local_b8,param_1 + 0x30);
          (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_c8,&local_b8,param_1 + 0x20);
          lVar5 = local_c8;
          lVar9 = (longlong)local_c0;
          if (lVar9 != 0) {
            lVar8 = 0;
            do {
              local_d0 = *(longlong *)(lVar5 + lVar8);
              if ((local_d0 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c();
              }
              FUN_1406c70be(local_d8,&local_d0);
              lVar8 = lVar8 + 8;
            } while (lVar9 * 8 != lVar8);
          }
          if (local_c8 != 0) {
            FUN_1400020a8(local_c8);
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    FUN_1406c717c(param_1);
    uVar3 = *(uint *)(param_1 + 0x88);
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar2 + uVar3;
      if ((uint)(*(int *)(param_1 + 0xbc) - iVar2) < uVar3) {
        FUN_1406c80ba(local_d8,iVar2);
      }
      FUN_140efa4fd((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0xb0),
                    *(undefined8 *)(param_1 + 0x80),uVar3);
    }
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c70be FUN_1406c70be body=190 status=ok
// SIG undefined FUN_1406c70be(void)

void FUN_1406c70be(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406c80ba(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1406c717c FUN_1406c717c body=814 status=ok
// SIG undefined FUN_1406c717c(void)

void FUN_1406c717c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar2 = FUN_1406c74ac();
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 200) = 0;
    if (*(int *)(param_1 + 0xcc) < 0) {
      FUN_1470d9c7a(param_1 + 0xc0);
    }
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if ((longlong)*(int *)(param_1 + 0x128) == 0) {
      uVar4 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x120);
      puVar5 = puVar7 + (longlong)*(int *)(param_1 + 0x128) * 4;
      do {
        plVar3 = *(longlong **)(puVar7 + 2);
        if (((((plVar3 != (longlong *)0x0) && (puVar7[1] != 0)) &&
             (uVar1 = *puVar7, -1 < (int)uVar1)) &&
            (((int)uVar1 < DAT_14c9647dc &&
             (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0))))
           && ((*(uint *)(lVar6 + 0x10) == puVar7[1] && ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))
           ) {
          bVar8 = (longlong)uStack_c0 < 0;
          uStack_c0 = uStack_c0 & 0xffffffff00000000;
          if (bVar8) {
            FUN_1470d9a66(&local_c8);
            plVar3 = *(longlong **)(puVar7 + 2);
          }
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_c8);
          if ((longlong)(int)uStack_c0 != 0) {
            local_110 = local_c8;
            local_f8 = local_c8 + (int)uStack_c0;
            do {
              local_120 = (longlong *)*local_110;
              local_98 = 0;
              local_90 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_8c = 0xffffffff00000080;
              local_84 = 0;
              local_78 = 0;
              local_70 = 0;
              FUN_140535930(&local_b8,param_1 + 0x30);
              (**(code **)(*local_120 + 0x2a0))(local_120,&local_e8,&local_b8,&local_d8);
              local_118 = local_e8;
              local_100 = (longlong *)(longlong)local_e0;
              if (local_100 != (longlong *)0x0) {
                local_100 = (longlong *)((longlong)local_100 << 3);
                local_120 = (longlong *)0x0;
                do {
                  local_108 = *(longlong *)(local_118 + (longlong)local_120);
                  if (local_108 != 0 && DAT_14c950c29 == 1) {
                    FUN_1456cec3c(local_108);
                  }
                  local_f0 = local_108;
                  if ((local_108 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                    FUN_1456cec3c(local_108);
                  }
                  FUN_1406c70be(param_1 + 0xc0,&local_f0);
                  local_120 = local_120 + 1;
                } while (local_100 != local_120);
              }
              if (local_e8 != 0) {
                FUN_1400020a8(local_e8);
              }
              local_110 = local_110 + 1;
            } while (local_110 != local_f8);
          }
        }
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar5);
      uVar4 = uStack_d0 & 0xffffffff;
    }
    FUN_1403c4669(local_d8,uVar4);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c74ac FUN_1406c74ac body=946 status=ok
// SIG undefined FUN_1406c74ac(void)

undefined8 FUN_1406c74ac(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  longlong *plVar22;
  int iVar23;
  undefined8 unaff_R14;
  ulonglong uVar24;
  undefined1 auStack_98 [44];
  uint local_6c;
  uint *local_68;
  longlong *local_60;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) {
LAB_1406c76fa:
    uVar9 = 1;
  }
  else {
    puVar21 = (uint *)(param_1 + 0x40);
    local_58 = (ulonglong *)0x0;
    uStack_50 = 0;
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar3 == 0) {
      uVar17 = 1;
      uVar15 = 0;
      iVar10 = 0;
      iVar23 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar8 = puVar21;
      }
      uVar18 = *puVar8;
      if (uVar18 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        uVar15 = 0;
        uVar17 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar17 = uVar15;
        }
        iVar23 = 0;
        do {
          if (uVar17 == uVar15) goto LAB_1406c77f5;
          iVar23 = iVar23 + 0x20;
          uVar18 = puVar8[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar15 = 0;
        iVar23 = 0;
      }
      uVar17 = (ulonglong)(-uVar18 & uVar18);
      uVar24 = uVar17 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar10 = (iVar23 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar10) {
        iVar10 = iVar3;
      }
    }
    if (iVar10 != iVar3) {
      plVar22 = (longlong *)(param_1 + 0x30);
      uVar18 = 0xffffffff;
      uVar24 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
      iVar7 = iVar3;
      do {
        uVar6 = uStack_50;
        uVar4 = *(ulonglong *)(*plVar22 + (longlong)iVar10 * 0x18);
        uVar5 = *(ulonglong *)(*plVar22 + 8 + (longlong)iVar10 * 0x18);
        if ((((uVar5 >> 0x20 == 0) || (uVar11 = (uint)uVar5, (int)uVar11 < 0)) ||
            (DAT_14c9647dc <= (int)uVar11)) ||
           (((lVar19 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0xd & 0x3fff8)),
             lVar19 == 0 || (*(int *)(lVar19 + 0x10) != (int)(uVar5 >> 0x20))) ||
            ((*(uint *)(lVar19 + 8) & 0x10200000) != 0)))) {
          local_6c = (uint)uVar24;
          lVar19 = (longlong)(int)uStack_50;
          uVar11 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
          local_68 = puVar21;
          local_60 = plVar22;
          if (uStack_50._4_4_ < uVar11) {
            FUN_1446f84a2(&local_58,uVar6 & 0xffffffff);
          }
          local_58[lVar19] = uVar4;
          iVar7 = *(int *)(param_1 + 0x58);
          uVar24 = (ulonglong)local_6c;
          puVar21 = local_68;
          plVar22 = local_60;
        }
        else {
          uVar24 = 0;
        }
        uVar18 = uVar18 & ~(uint)uVar17;
        puVar8 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar8 = puVar21;
        }
        iVar10 = (int)uVar15;
        lVar19 = (longlong)iVar10;
        uVar11 = puVar8[lVar19] & uVar18;
        if (uVar11 == 0) {
          iVar12 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar12 = iVar7 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar10) {
            iVar13 = iVar10;
          }
          if (iVar10 < iVar12) {
            lVar20 = 0;
            do {
              uVar11 = puVar8[lVar19 + lVar20 + 1];
              if (uVar11 != 0) {
                uVar15 = (ulonglong)(iVar10 + (int)lVar20 + 1);
                uVar18 = 0xffffffff;
                goto LAB_1406c7659;
              }
              iVar23 = iVar23 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar13 - lVar19 != lVar20);
            uVar18 = 0xffffffff;
            iVar10 = iVar13;
          }
          uVar15 = (ulonglong)(iVar10 + 1);
          iVar10 = iVar7;
        }
        else {
LAB_1406c7659:
          uVar17 = (ulonglong)(-uVar11 & uVar11);
          uVar4 = uVar17 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar10 = (iVar23 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar10) {
            iVar10 = iVar7;
          }
        }
      } while (iVar10 != iVar3);
      if ((longlong)(int)uStack_50 != 0) {
        puVar1 = local_58 + (int)uStack_50;
        puVar16 = local_58;
        do {
          if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
            uVar15 = *puVar16;
            uVar18 = (uint)(uVar15 >> 0x10);
            uVar11 = (uint)uVar15 & 0xffff;
            lVar19 = *(longlong *)(param_1 + 0x70);
            if (*(longlong *)(param_1 + 0x70) == 0) {
              lVar19 = param_1 + 0x68;
            }
            iVar3 = *(int *)(lVar19 + ((longlong)
                                       (int)(((uint)uVar15 << 0x10 | uVar11) + (int)(uVar15 >> 0x20)
                                             + (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar11 >> 4)) &
                                      (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
            if (iVar3 != -1) {
LAB_1406c778f:
              puVar2 = (ulonglong *)(*plVar22 + (longlong)iVar3 * 0x18);
              if (*puVar2 != uVar15) goto LAB_1406c7836;
              iVar10 = *(int *)(lVar19 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 4);
              if (iVar10 == iVar3) {
                piVar14 = (int *)(lVar19 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 4);
              }
              else {
                do {
                  piVar14 = (int *)(*plVar22 + (longlong)iVar10 * 0x18 + 0x10);
                  iVar10 = *piVar14;
                } while (iVar10 != iVar3);
              }
              *piVar14 = (int)puVar2[2];
              FUN_1406c7860(plVar22,iVar3,1);
            }
          }
LAB_1406c77d1:
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
      }
      if (local_58 != (ulonglong *)0x0) {
        FUN_1400020a8(local_58);
      }
      if ((uVar24 & 1) == 0) goto LAB_1406c76fa;
    }
LAB_1406c77f5:
    uVar9 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
LAB_1406c7836:
  iVar3 = (int)puVar2[2];
  if (iVar3 == -1) goto LAB_1406c77d1;
  goto LAB_1406c778f;
}



// FUNCTION 1406c7860 FUN_1406c7860 body=138 status=ok
// SIG undefined FUN_1406c7860(void)

void FUN_1406c7860(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406c78ea FUN_1406c78ea body=974 status=ok
// SIG undefined FUN_1406c78ea(void)

void FUN_1406c78ea(longlong param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = &DAT_000018c0 + param_1;
  *(byte *)(param_1 + 0x1330) =
       *(byte *)(param_1 + 0x1330) | *(int *)(param_1 + 0x18f4) < *(int *)(param_1 + 0x18c8);
  if (*(int *)(param_1 + 0x18c8) != *(int *)(param_1 + 0x18f4)) {
    FUN_1405eb620(puVar1);
    FUN_1405eb766(puVar1);
  }
  plVar2 = (longlong *)(param_1 + 0x1318);
  FUN_140457ffc(plVar2,param_1);
  plVar7 = *(longlong **)(param_1 + 0xa8);
  if (plVar7 == (longlong *)0x0) goto LAB_1406c79be;
  uVar6 = FUN_1401fa540();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
  if (plVar7 == (longlong *)0x0) goto LAB_1406c79be;
  uVar6 = FUN_1401fa540();
  plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
  if (((plVar7 == plVar8) || (plVar8 == (longlong *)0x0)) ||
     (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 == 0)) goto LAB_1406c79be;
  FUN_1406c7cba(param_1 + 0x1898,lVar9,puVar1);
  *(byte *)(param_1 + 0x1330) =
       *(byte *)(param_1 + 0x1330) | *(int *)(param_1 + 0x18f4) < *(int *)(param_1 + 0x18c8);
  if (*(int *)(param_1 + 0x18c8) <= *(int *)(param_1 + 0x18f4)) goto LAB_1406c79be;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar7 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b3f5140;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_50[2] = lVar10;
  *local_50 = (longlong)&PTR_FUN_14b3f50d0;
  local_50[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar11 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar11 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar11 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar5;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar11 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar7 + 0x1c) = iVar11;
  plVar7[4] = (longlong)&LAB_14133dfce;
  *(undefined4 *)(plVar7 + 5) = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_1406c79be;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1406c7b5f;
    }
  }
  else {
    if (*(int *)(param_1 + 0x132c) < 1) {
      iVar11 = *(int *)(param_1 + 0x1320);
      iVar5 = *(int *)(param_1 + 0x1328) + -1;
      *(int *)(param_1 + 0x1328) = iVar5;
      if (iVar5 <= iVar11) {
        iVar5 = iVar11;
        if (0 < iVar11) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar2 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar7 = *(longlong **)(*plVar2 + (longlong)iVar12 * 0x10),
                plVar7 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar7 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar2,iVar12);
              FUN_14005b248(plVar2);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar5 = *(int *)(param_1 + 0x1320);
          } while (iVar12 < iVar5);
        }
        iVar12 = 2;
        if (2 < iVar5 * 2) {
          iVar12 = iVar5 * 2;
        }
        *(int *)(param_1 + 0x1328) = iVar12;
        if ((iVar12 < iVar11) && (*(int *)(param_1 + 0x1324) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar11 = *(int *)(param_1 + 0x1320);
    *(uint *)(param_1 + 0x1320) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1324) < iVar11 + 1U) {
      FUN_1447a71f6(plVar2,iVar11);
    }
    lVar9 = *plVar2;
    lVar10 = (longlong)iVar11 * 0x10;
    *(undefined8 *)(lVar9 + lVar10) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
    *(longlong **)(lVar9 + lVar10) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar10) = local_48;
LAB_1406c7b5f:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1406c79be:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c7cba FUN_1406c7cba body=144 status=ok
// SIG undefined FUN_1406c7cba(void)

void FUN_1406c7cba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406c7d4c(param_2,&local_38);
  if (local_38 != 0) {
    FUN_1406c821c(local_38,param_1,param_2,param_3);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c7d4c FUN_1406c7d4c body=806 status=ok
// SIG undefined FUN_1406c7d4c(void)

longlong * FUN_1406c7d4c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  uint local_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_1 + 0x20) == 0) || (uVar4 = *(uint *)(param_1 + 0x1c), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0 ||
       (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x20))) ||
      (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 ||
       ((*(longlong *)(param_1 + 0x30) == 0 || (*(int *)(param_1 + 0x2c) == 0)))))))) {
LAB_1406c7ed4:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (((int)uVar4 < 0) ||
     ((((DAT_14c9647dc <= (int)uVar4 ||
        (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0)) ||
       (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x2c))) ||
      (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 || (lVar9 = FUN_1406c8074(), lVar9 == 0))))))
  goto LAB_1406c7ed4;
  uStack_3c = 0;
  local_40 = *(uint *)(lVar9 + 0xc);
  if ((int)local_40 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((local_40 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar4 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    uVar7 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar7);
    }
    LOCK();
    uVar4 = *(uint *)(lVar9 + 0x10);
    bVar10 = uVar4 == 0;
    if (bVar10) {
      *(uint *)(lVar9 + 0x10) = uVar7;
      uVar4 = 0;
    }
    UNLOCK();
    if (bVar10) {
      uVar4 = uVar7;
    }
  }
  uStack_3c = uVar4;
  plVar5 = (longlong *)FUN_1407699b8(param_1 + 0x50,uVar4 ^ local_40);
  if (*plVar5 != 0) goto LAB_1406c7ea6;
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b3e7030;
  plVar6[2] = *(longlong *)(param_1 + 0x1c);
  lVar9 = *(longlong *)(param_1 + 0x30);
  plVar6[3] = *(longlong *)(param_1 + 0x28);
  plVar6[4] = lVar9;
  plVar6[9] = 0;
  *(undefined4 *)(plVar6 + 10) = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x5c) = 0;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 0;
  if (plVar6 == (longlong *)0x0) {
    *plVar5 = 0x10;
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) goto LAB_1406c7ea6;
    plVar5[1] = 0;
LAB_1406c7ffc:
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1406c7ea6;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)(plVar6 + 2);
    plVar8 = (longlong *)plVar5[1];
    if (plVar6 == plVar8) {
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
    else {
      plVar5[1] = (longlong)plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_1406c7ffc;
    }
  }
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
LAB_1406c7ea6:
  *param_2 = *plVar5;
  lVar9 = plVar5[1];
  param_2[1] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c8074 FUN_1406c8074 body=57 status=ok
// SIG undefined FUN_1406c8074(void)

void FUN_1406c8074(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58550 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58550 = FUN_140002ddd(FUN_1464c1676,uVar1,L"GbxActorPartState_AnimSet");
  }
  return;
}



// FUNCTION 1406c80ba FUN_1406c80ba body=353 status=ok
// SIG undefined FUN_1406c80ba(void)

void FUN_1406c80ba(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406c813f;
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
LAB_1406c813f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406c821c FUN_1406c821c body=3188 status=ok
// SIG undefined FUN_1406c821c(void)

void FUN_1406c821c(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  void *_Dst;
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined ***pppuVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  uint *local_e0;
  int local_d4;
  longlong *local_d0;
  longlong local_c8;
  int local_bc;
  code *local_b8;
  undefined8 *puStack_b0;
  undefined ***local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar12 = (uint *)(param_1 + 0x18);
  iVar28 = *(int *)(param_1 + 0x20);
  iVar23 = *(int *)(param_1 + 0x4c);
  local_d0 = param_4;
  if (iVar28 != iVar23) {
    lVar27 = *param_2;
    uVar29 = (uint)((ulonglong)lVar27 >> 0x10);
    uVar15 = (uint)lVar27 & 0xffff;
    lVar24 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar24 = *(longlong *)(param_1 + 0x58);
    }
    iVar16 = *(int *)(lVar24 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               (int)((ulonglong)lVar27 >> 0x20) + ((uint)lVar27 << 0x10 | uVar15) +
                               (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar15 >> 4)) * 4);
    if (iVar16 != -1) {
      do {
        lVar24 = *(longlong *)puVar12 + (longlong)iVar16 * 0x60;
        if (*(longlong *)(*(longlong *)puVar12 + (longlong)iVar16 * 0x60) == lVar27) {
          if (lVar24 != 0) {
            plVar26 = (longlong *)(lVar24 + 8);
            goto LAB_1406c82ed;
          }
          break;
        }
        iVar16 = *(int *)(lVar24 + 0x58);
      } while (iVar16 != -1);
    }
  }
  local_e0 = puVar12;
  if (iVar23 == 0) {
    *(int *)(param_1 + 0x20) = iVar28 + 1;
    if (*(int *)(param_1 + 0x24) == iVar28) {
      FUN_14488f93c(puVar12,iVar28);
    }
    iVar23 = *(int *)(param_1 + 0x40);
    if (iVar23 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar16 = iVar23 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    lVar24 = param_1 + 0x28;
    iVar10 = iVar23 + 1;
    iVar11 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar11 = iVar23;
    }
    if (iVar11 >> 5 == iVar16) {
      *(int *)(param_1 + 0x40) = iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x44) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar16 = iVar23;
        }
        else {
          uVar29 = iVar23 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x44) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar29) {
              uVar15 = uVar29;
            }
          }
          else {
            uVar15 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
          }
          uVar22 = FUN_144a3809e(uVar15 << 2,0);
          iVar16 = (int)(uVar22 >> 2);
          iVar10 = -0x20;
          if ((int)uVar29 <= iVar16) {
            iVar10 = iVar16 << 5;
          }
          iVar16 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x44) = iVar10;
        FUN_1446efbd8(lVar24,iVar16);
        iVar10 = *(int *)(param_1 + 0x40) + 1;
      }
      iVar16 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar16 = iVar10;
      }
      *(int *)(param_1 + 0x40) = iVar10;
      if (iVar10 % 0x20 != 0) {
        lVar27 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar27 = lVar24;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)(lVar27 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)(lVar27 + (longlong)(iVar16 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar27 = (longlong)iVar28;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar24 = *(longlong *)(param_1 + 0x38);
    }
    bVar9 = (byte)iVar23 & 0x1f;
    puVar12 = (uint *)(lVar24 + (longlong)(iVar11 >> 5) * 4);
    *puVar12 = *puVar12 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar28 = *(int *)(param_1 + 0x48);
    lVar27 = (longlong)iVar28;
    iVar16 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar27 * 0x60);
    *(int *)(param_1 + 0x48) = iVar16;
    *(int *)(param_1 + 0x4c) = iVar23 + -1;
    if (iVar23 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar16 * 0x60) = 0xffffffff;
    }
  }
  puVar12 = (uint *)(param_1 + 0x28);
  puVar13 = *(uint **)(param_1 + 0x38);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    puVar13 = puVar12;
  }
  iVar23 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar23 = iVar28;
  }
  puVar13[iVar23 >> 5] = puVar13[iVar23 >> 5] | 1 << ((byte)iVar28 & 0x1f);
  plVar26 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar27 * 0x60);
  local_98 = (undefined **)0x0;
  plStack_80 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  uStack_a0 = 0;
  local_b8 = (code *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  plStack_90 = (longlong *)0x8000000000;
  plVar17 = (longlong *)(lVar27 * 0x60 + *(longlong *)(param_1 + 0x18));
  *plVar17 = *param_2;
  plVar17[5] = 0;
  *(undefined4 *)(plVar17 + 6) = 0;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *(undefined8 *)((longlong)plVar17 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar17 + 0x3c) = 0;
  if ((code **)(plVar17 + 1) != &local_b8) {
    *(undefined4 *)(plVar26 + 3) = 0;
    *(undefined4 *)((longlong)plVar26 + 0x1c) = 0;
    *(undefined4 *)(plVar26 + 4) = 0;
    *(undefined4 *)((longlong)plVar26 + 0x24) = 0;
    plStack_90 = (longlong *)0x0;
  }
  local_88 = 0xffffffff;
  *(undefined4 *)(plVar26 + 8) = 0;
  plVar26[9] = 0;
  local_78 = 0;
  *(undefined4 *)(plVar26 + 10) = 0;
  uStack_70 = 0;
  FUN_1406c8ecc();
  *(undefined4 *)(plVar26 + 0xb) = 0xffffffff;
  lVar27 = *plVar26;
  uVar29 = (uint)((ulonglong)lVar27 >> 0x10);
  uVar15 = (uint)lVar27 & 0xffff;
  uVar29 = ((uint)lVar27 << 0x10 | uVar15) + (int)((ulonglong)lVar27 >> 0x20) +
           (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar15 >> 4);
  uVar15 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
  if (1 < uVar15) {
    lVar24 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar24 = *(longlong *)(param_1 + 0x58);
    }
    iVar23 = *(int *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar29) * 4);
    if (iVar23 != -1) {
      do {
        _Dst = (void *)(*(longlong *)local_e0 + (longlong)iVar23 * 0x60);
        if (*(longlong *)(*(longlong *)local_e0 + (longlong)iVar23 * 0x60) == lVar27) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1406c8ecc((longlong)_Dst + 8);
          memmove(_Dst,plVar26,0x58);
          FUN_1487be5f6(local_e0,iVar28);
          iVar28 = iVar23;
          goto LAB_1406c8ab7;
        }
        iVar23 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar23 != -1);
    }
  }
  uVar20 = 1;
  if (3 < uVar15) {
    uVar22 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar27 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar27 & 0x1f);
  }
  if (((int)uVar15 < 1) || ((int)uVar20 <= *(int *)(param_1 + 0x60))) {
    uVar29 = *(int *)(param_1 + 0x60) - 1U & uVar29;
    *(uint *)((longlong)plVar26 + 0x5c) = uVar29;
    lVar27 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar27 = param_1 + 0x50;
    }
    *(undefined4 *)(plVar26 + 0xb) =
         *(undefined4 *)
          (lVar27 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar29) * 4);
    lVar27 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar27 = param_1 + 0x50;
    }
    *(int *)(lVar27 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar29) * 4) =
         iVar28;
  }
  else {
    *(uint *)(param_1 + 0x60) = uVar20;
    plVar26 = (longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1446efa72(plVar26,0,0);
      uVar20 = *(uint *)(param_1 + 0x60);
    }
    lVar27 = param_1 + 0x50;
    if (uVar20 == 1) {
      if (*plVar26 != 0) {
        FUN_1446efa72(plVar26,0,0);
      }
LAB_1406c855b:
      uVar29 = 0;
      do {
        lVar24 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar24 = lVar27;
        }
        *(undefined4 *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x60) + 0x7fffffffU & uVar29) * 4) =
             0xffffffff;
        uVar29 = uVar29 + 1;
      } while (uVar20 != uVar29);
    }
    else {
      if (uVar20 == 0) goto LAB_1406c8ab7;
      FUN_1446efa72(plVar26,0,uVar20);
      if (0 < (int)uVar20) goto LAB_1406c855b;
    }
    iVar23 = *(int *)(param_1 + 0x40);
    if (iVar23 == 0) {
      uVar22 = 0;
      uVar5 = 1;
      iVar16 = 0;
      iVar10 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar13 = puVar12;
      }
      uVar29 = *puVar13;
      if (uVar29 == 0) {
        iVar16 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar16 = iVar23 + -1;
        }
        uVar22 = 0;
        uVar5 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar5 = uVar22;
        }
        iVar10 = 0;
        do {
          if (uVar5 == uVar22) goto LAB_1406c8ab7;
          iVar10 = iVar10 + 0x20;
          uVar29 = puVar13[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar29 == 0);
      }
      else {
        uVar22 = 0;
        iVar10 = 0;
      }
      uVar5 = (ulonglong)(-uVar29 & uVar29);
      uVar18 = uVar5 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar16 = (iVar10 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar16) {
        iVar16 = iVar23;
      }
    }
    local_c8 = lVar27;
    if (iVar16 < iVar23) {
      uVar29 = 0xffffffff;
      do {
        lVar24 = *(longlong *)(param_1 + 0x18);
        lVar25 = (longlong)iVar16 * 0x60;
        uVar7 = *(undefined8 *)(lVar24 + lVar25);
        uVar15 = (uint)((ulonglong)uVar7 >> 0x10);
        uVar20 = (uint)uVar7 & 0xffff;
        uVar18 = (longlong)
                 (int)(((uint)uVar7 << 0x10 | uVar20) + (int)((ulonglong)uVar7 >> 0x20) +
                       (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar20 >> 4)) &
                 (longlong)*(int *)(param_1 + 0x60) - 1U;
        iVar23 = (int)uVar18;
        *(int *)(lVar24 + 0x5c + lVar25) = iVar23;
        lVar6 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar6 = lVar27;
        }
        *(undefined4 *)(lVar24 + 0x58 + lVar25) =
             *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x60) - 1U & uVar18) * 4);
        lVar24 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar24 = lVar27;
        }
        *(int *)(lVar24 + ((longlong)iVar23 & (longlong)*(int *)(param_1 + 0x60) - 1U) * 4) = iVar16
        ;
        uVar29 = ~(uint)uVar5 & uVar29;
        puVar13 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar13 = puVar12;
        }
        iVar23 = *(int *)(param_1 + 0x40);
        iVar16 = (int)uVar22;
        lVar24 = (longlong)iVar16;
        uVar15 = puVar13[lVar24] & uVar29;
        local_f0 = param_3;
        local_e8 = param_2;
        if (uVar15 == 0) {
          iVar11 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar11 = iVar23 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar14 = iVar11;
          if (iVar11 < iVar16) {
            iVar14 = iVar16;
          }
          if (iVar11 <= iVar16) break;
          lVar6 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar15 = puVar13[lVar24 + lVar6 + 1];
            if (uVar15 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar14 - lVar24 == lVar6) goto LAB_1406c8ab7;
          }
          uVar22 = (ulonglong)(iVar16 + (int)lVar6 + 1);
          uVar29 = 0xffffffff;
        }
        uVar5 = (ulonglong)(-uVar15 & uVar15);
        uVar18 = uVar5 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar16 = (iVar10 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar23);
    }
  }
LAB_1406c8ab7:
  plVar26 = (longlong *)(*(longlong *)local_e0 + (longlong)iVar28 * 0x60 + 8);
  lVar27 = *(longlong *)(param_3 + 0x40);
  if (lVar27 != 0) {
    local_88 = lVar27 + 0x18;
    local_b8 = FUN_143c992d8;
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14b3e7050;
    plStack_90 = param_2;
    plStack_80 = plVar26;
    uVar7 = FUN_1406c8e92();
    plVar17 = (longlong *)FUN_1403566f4(lVar27,uVar7);
    if ((longlong)(int)plVar17[1] == 0) {
      pppuVar8 = (undefined ***)0x0;
    }
    else {
      plVar21 = (longlong *)*plVar17;
      plVar17 = plVar21 + (int)plVar17[1];
      do {
        plVar1 = (longlong *)*plVar21;
        if (plVar1 != (longlong *)0x0) {
          lVar27 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar24 = FUN_1406c8e92();
          pcVar2 = local_b8;
          if (((lVar24 != 0) && (*(int *)(lVar24 + 0x38) <= *(int *)(lVar27 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar27 + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8) ==
              lVar24 + 0x30)) {
            pppuVar8 = local_a8;
            if (local_a8 == (undefined ***)0x0) {
              pppuVar8 = &local_98;
            }
            uVar7 = (*(code *)(*pppuVar8)[1])();
            cVar4 = (*pcVar2)(uVar7,plVar1);
            if (cVar4 == '\0') break;
          }
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar17);
      pppuVar8 = local_a8;
      if (local_b8 == (code *)0x0) goto LAB_1406c8bb8;
    }
    pppuVar19 = &local_98;
    if (pppuVar8 != (undefined ***)0x0) {
      pppuVar19 = pppuVar8;
    }
    (*(code *)(*pppuVar19)[2])(pppuVar19);
  }
LAB_1406c8bb8:
  if (plVar26 != (longlong *)0x0) {
LAB_1406c82ed:
    iVar28 = (int)plVar26[5];
    if (iVar28 == 0) {
      uVar18 = 1;
      uVar22 = 0;
      iVar23 = 0;
      iVar16 = 0;
    }
    else {
      puVar12 = (uint *)plVar26[4];
      if ((uint *)plVar26[4] == (uint *)0x0) {
        puVar12 = (uint *)(plVar26 + 2);
      }
      uVar29 = *puVar12;
      if (uVar29 == 0) {
        iVar23 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar23 = iVar28 + -1;
        }
        uVar22 = 0;
        uVar5 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar5 = uVar22;
        }
        iVar23 = 0;
        do {
          if (uVar5 == uVar22) goto LAB_1406c8312;
          iVar23 = iVar23 + 0x20;
          uVar29 = puVar12[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar29 == 0);
      }
      else {
        uVar22 = 0;
        iVar23 = 0;
      }
      uVar18 = (ulonglong)(-uVar29 & uVar29);
      uVar5 = uVar18 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar16 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      if (iVar28 <= iVar16) {
        iVar16 = iVar28;
      }
    }
    if (iVar16 != iVar28) {
      uVar29 = 0xffffffff;
      local_e0 = (uint *)(plVar26 + 2);
      do {
        plVar17 = local_d0;
        local_e8 = (longlong *)CONCAT44(local_e8._4_4_,uVar29);
        lVar27 = *plVar26;
        local_d4 = iVar23;
        FUN_1405eb2fa(local_d0,&local_b8);
        puVar3 = puStack_b0;
        puStack_b0[2] = 0;
        puStack_b0[3] = 0;
        uVar7 = *(undefined8 *)(lVar27 + (longlong)iVar16 * 0x18);
        *puStack_b0 = uVar7;
        puStack_b0[1] = 0;
        puStack_b0[7] = 0;
        puStack_b0[4] = 0;
        puStack_b0[5] = 0;
        *(undefined1 *)(puStack_b0 + 6) = 0;
        *(undefined4 *)(puStack_b0 + 8) = 0xffffffff;
        local_bc = (int)local_b8;
        uVar29 = (uint)((ulonglong)uVar7 >> 0x10);
        uVar15 = (uint)uVar7 & 0xffff;
        uVar29 = ((uint)uVar7 << 0x10 | uVar15) + (int)((ulonglong)uVar7 >> 0x20) +
                 (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar15 >> 4);
        local_f8 = 0;
        local_f0 = lVar27;
        local_c8 = (longlong)iVar16 * 3;
        cVar4 = FUN_1405eb1a2(plVar17,uVar29,puStack_b0,&local_bc);
        if (cVar4 == '\0') {
          uVar15 = (int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34);
          iVar23 = 1;
          if (3 < uVar15) {
            uVar5 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
            lVar27 = 0x3f;
            if (uVar5 != 0) {
              for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            iVar23 = 1 << ((byte)lVar27 & 0x1f);
          }
          plVar17 = local_d0;
          if (((int)uVar15 < 1) || (iVar23 <= (int)local_d0[9])) {
            uVar29 = (int)local_d0[9] - 1U & uVar29;
            *(uint *)((longlong)puVar3 + 0x44) = uVar29;
            plVar21 = (longlong *)local_d0[8];
            if ((longlong *)local_d0[8] == (longlong *)0x0) {
              plVar21 = local_d0 + 7;
            }
            *(undefined4 *)(puVar3 + 8) =
                 *(undefined4 *)
                  ((longlong)plVar21 + ((longlong)(int)local_d0[9] - 1U & (longlong)(int)uVar29) * 4
                  );
            plVar21 = (longlong *)local_d0[8];
            if ((longlong *)local_d0[8] == (longlong *)0x0) {
              plVar21 = local_d0 + 7;
            }
            *(int *)((longlong)plVar21 +
                    ((longlong)(int)local_d0[9] - 1U & (longlong)(int)uVar29) * 4) = local_bc;
          }
          else {
            *(int *)(local_d0 + 9) = iVar23;
            FUN_1405eb90a(local_d0);
          }
        }
        lVar27 = local_f0 + local_c8 * 8;
        lVar6 = (longlong)local_bc;
        lVar24 = *plVar17;
        *(undefined1 *)(lVar24 + 0x30 + lVar6 * 0x48) = 1;
        iVar23 = *(int *)(lVar27 + 0xc);
        if ((iVar23 == 0) || (uVar29 = *(uint *)(lVar27 + 8), (int)uVar29 < 0)) {
LAB_1406c8cda:
          lVar27 = 0;
        }
        else {
          lVar27 = 0;
          if ((int)uVar29 < DAT_14c9647dc) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if (((plVar17 == (longlong *)0x0) || ((int)plVar17[2] != iVar23)) ||
               ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_1406c8cda;
            lVar27 = *plVar17;
            if ((lVar27 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar27);
            }
          }
        }
        *(longlong *)(lVar24 + lVar6 * 0x48 + 0x38) = lVar27;
        uVar29 = (uint)local_e8 & ~(uint)uVar18;
        puVar12 = (uint *)plVar26[4];
        if ((uint *)plVar26[4] == (uint *)0x0) {
          puVar12 = local_e0;
        }
        iVar10 = (int)plVar26[5];
        iVar16 = (int)uVar22;
        lVar27 = (longlong)iVar16;
        uVar15 = puVar12[lVar27] & uVar29;
        iVar23 = local_d4;
        if (uVar15 == 0) {
          iVar11 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar11 = iVar10 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar23 = local_d4 + 0x20;
          iVar14 = iVar11;
          if (iVar11 < iVar16) {
            iVar14 = iVar16;
          }
          if (iVar16 < iVar11) {
            lVar24 = 0;
            do {
              uVar15 = puVar12[lVar27 + lVar24 + 1];
              if (uVar15 != 0) {
                uVar22 = (ulonglong)(iVar16 + (int)lVar24 + 1);
                uVar29 = 0xffffffff;
                goto LAB_1406c89db;
              }
              iVar23 = iVar23 + 0x20;
              lVar24 = lVar24 + 1;
            } while (iVar14 - lVar27 != lVar24);
            uVar29 = 0xffffffff;
            iVar16 = iVar14;
          }
          uVar22 = (ulonglong)(iVar16 + 1);
          iVar16 = iVar10;
        }
        else {
LAB_1406c89db:
          uVar18 = (ulonglong)(-uVar15 & uVar15);
          uVar5 = uVar18 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar16 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if (iVar10 <= iVar16) {
            iVar16 = iVar10;
          }
        }
      } while (iVar16 != iVar28);
    }
  }
LAB_1406c8312:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c8e92 FUN_1406c8e92 body=57 status=ok
// SIG undefined FUN_1406c8e92(void)

void FUN_1406c8e92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58538 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58538 = FUN_140002ddd(FUN_1464c1616,uVar1,L"GbxActorPartDef_AnimSet");
  }
  return;
}



// FUNCTION 1406c8ecc FUN_1406c8ecc body=55 status=ok
// SIG undefined FUN_1406c8ecc(void)

void FUN_1406c8ecc(longlong *param_1)

{
  FUN_1406c8f04(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406c8f04 FUN_1406c8f04 body=123 status=ok
// SIG undefined FUN_1406c8f04(void)

void FUN_1406c8f04(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 1406c8fce FUN_1406c8fce body=281 status=ok
// SIG undefined FUN_1406c8fce(void)

void FUN_1406c8fce(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *(undefined4 *)(param_1 + 0x1660) = 0;
  if (*(int *)(param_1 + 0x1664) != 0) {
    FUN_140832776(param_1 + 0x1658,0);
  }
  *(undefined8 *)(param_1 + 0x1680) = 0;
  FUN_1406c90e8(param_1 + 0x16f8,0);
  FUN_1406c9372(param_1 + 0x1748,0);
  FUN_1406c9154(param_1 + 0x1838,0);
  FUN_1406c9306(param_1 + 0x17a0,0);
  *(undefined4 *)(param_1 + 0x17f0) = 0;
  *(undefined4 *)(param_1 + 0x17f8) = 0;
  *(undefined2 *)(param_1 + 0x17fc) = 0x101;
  FUN_1406c9778(param_1);
  if ((~*(byte *)(param_1 + 0x9c) & 3) != 0) goto LAB_1406c90a5;
  bVar2 = *(byte *)(param_1 + 0x9d);
  if ((bVar2 & 1) != 0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) goto LAB_1406c90a5;
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 != 0) goto LAB_1406c90a5;
    bVar2 = *(byte *)(param_1 + 0x9d);
  }
  *(byte *)(param_1 + 0x9d) = bVar2 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
LAB_1406c90a5:
  FUN_1406c97fc(param_1);
  *(undefined1 *)(param_1 + 0x1800) = 0;
  if (param_2 == '\0') {
    return;
  }
  FUN_1406547e8(param_1,0,1);
  return;
}



// FUNCTION 1406c90e8 FUN_1406c90e8 body=107 status=ok
// SIG undefined FUN_1406c90e8(void)

void FUN_1406c90e8(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1406c9137:
      FUN_1403c4f90(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1407bb198(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1406c9137;
  FUN_1407ba560(param_1);
  FUN_1403c4f90(param_1,param_2);
  return;
}



// FUNCTION 1406c9154 FUN_1406c9154 body=107 status=ok
// SIG undefined FUN_1406c9154(void)

void FUN_1406c9154(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (*(int *)(param_1 + 0x48) <= iVar3) {
LAB_1406c91a6:
      FUN_1406c91c0(param_1);
      FUN_1403c49e0(param_1,param_2);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == iVar3) goto LAB_1406c91a6;
  FUN_1403c49e0(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1407bd9aa(param_1);
  return;
}



// FUNCTION 1406c91c0 FUN_1406c91c0 body=325 status=ok
// SIG undefined FUN_1406c91c0(void)

void FUN_1406c91c0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1406c9306 FUN_1406c9306 body=107 status=ok
// SIG undefined FUN_1406c9306(void)

void FUN_1406c9306(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1406c9355:
      FUN_1403c407e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140e12164(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1406c9355;
  FUN_140e116d8(param_1);
  FUN_1403c407e(param_1,param_2);
  return;
}



// FUNCTION 1406c9372 FUN_1406c9372 body=117 status=ok
// SIG undefined FUN_1406c9372(void)

void FUN_1406c9372(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_1403c3f86(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1406c952e(param_1);
    return;
  }
  FUN_1406c93e8(param_1);
  FUN_1403c3f86(param_1,param_2);
  return;
}



// FUNCTION 1406c93e8 FUN_1406c93e8 body=325 status=ok
// SIG undefined FUN_1406c93e8(void)

void FUN_1406c93e8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1406c952e FUN_1406c952e body=584 status=ok
// SIG undefined FUN_1406c952e(void)

void FUN_1406c952e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
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
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
LAB_1406c9577:
    uVar4 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
  }
  else {
    uVar3 = local_70;
    if (uVar6 == 0) goto LAB_1406c961e;
    FUN_1446efa72(plVar5,0,uVar6,4);
    if (0 < (int)uVar6) goto LAB_1406c9577;
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
  uVar3 = local_70;
  local_68 = local_48;
  local_64 = local_44;
  local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
  local_88 = param_1;
  if (local_70._4_4_ < (int)local_58[3]) {
    iVar9 = local_70._4_4_;
    local_70 = uVar3;
    do {
      lVar2 = *local_88;
      uVar8 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
      if ((DAT_14c950c29 == '\x01') && (uVar8 != 0)) {
        FUN_1456cec3c(uVar8);
      }
      lVar2 = lVar2 + (longlong)iVar9 * 0x18;
      uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar8 = (longlong)(int)(uVar6 >> 0x10 ^ uVar6) & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar2 + 0x14) = iVar7;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x10) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
      FUN_1449c0562(&local_80);
      iVar9 = local_70._4_4_;
      uVar3 = local_70;
    } while (local_70._4_4_ < (int)local_78[3]);
  }
LAB_1406c961e:
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c9778 FUN_1406c9778 body=130 status=ok
// SIG undefined FUN_1406c9778(void)

void FUN_1406c9778(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0xce0) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_1 + 0xcf0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140718404(param_1);
  local_28 = &local_38;
  local_30 = FUN_1436b9df0;
  local_38 = param_1;
  FUN_14071831e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c97fc FUN_1406c97fc body=141 status=ok
// SIG undefined FUN_1406c97fc(void)

void FUN_1406c97fc(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  *(byte *)((longlong)param_1 + 0xc61) = *(byte *)((longlong)param_1 + 0xc61) & 0xef;
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x48), 0 < iVar2)) {
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + lVar5 * 8);
      if (((bVar4 & 1) == 0) || (lVar1 == 0)) {
        if (lVar1 != 0) goto LAB_1406c9847;
      }
      else {
        FUN_1456cec3c(lVar1);
LAB_1406c9847:
        iVar2 = FUN_144909502(param_1,*(undefined8 *)(lVar1 + 0x28));
        if (iVar2 != -1) {
          *(byte *)((longlong)param_1 + 0xc61) = *(byte *)((longlong)param_1 + 0xc61) | 0x10;
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x48);
        bVar4 = DAT_14c950c29;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  return;
}



// FUNCTION 1406c988a FUN_1406c988a body=353 status=ok
// SIG undefined FUN_1406c988a(void)

void FUN_1406c988a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406c9911;
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
LAB_1406c9911:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1406c9a0c FUN_1406c9a0c body=29 status=ok
// SIG undefined FUN_1406c9a0c(void)

undefined8 FUN_1406c9a0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406c9a2a FUN_1406c9a2a body=29 status=ok
// SIG undefined FUN_1406c9a2a(void)

undefined8 FUN_1406c9a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406c9a48 FUN_1406c9a48 body=29 status=ok
// SIG undefined FUN_1406c9a48(void)

undefined8 FUN_1406c9a48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406c9a66 FUN_1406c9a66 body=241 status=ok
// SIG undefined FUN_1406c9a66(void)

void FUN_1406c9a66(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406c9b58();
  local_40 = FUN_14079f750();
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  FUN_1406ca43a(param_1,&local_38,&local_40);
  lVar2 = local_38;
  if ((longlong)local_30 != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar5);
      if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar1 != 0) goto LAB_1406c9b07;
        plVar4 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c(lVar1);
LAB_1406c9b07:
        uVar3 = FUN_14079f750();
        plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,0);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_30 * 8 != lVar5);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406c9b58 FUN_1406c9b58 body=42 status=ok
// SIG undefined FUN_1406c9b58(void)

void FUN_1406c9b58(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  FUN_1406c9b82(param_1);
  return;
}



// FUNCTION 1406c9b82 FUN_1406c9b82 body=115 status=ok
// SIG undefined FUN_1406c9b82(void)

void FUN_1406c9b82(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (((*(uint *)(param_1 + 1) >> 0x13 & 1) != 0) && ((*(uint *)(param_1 + 1) & 0x10) == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x638))(param_1);
    uVar2 = 0;
    if ((*(byte *)((longlong)param_1 + 99) & 8) != 0) {
      uVar2 = (uint)((char)param_1[0xd] == '\x01');
    }
    if (uVar2 != (uVar1 & 0xff)) {
      if (((*(byte *)((longlong)param_1 + 100) & 2) != 0) && ((char)param_1[0x2f] == '\x03')) {
        FUN_140c7ce82(param_1,uVar1);
        return;
      }
      *(byte *)((longlong)param_1 + 99) =
           *(byte *)((longlong)param_1 + 99) & 0xf7 | (char)uVar1 << 3;
    }
  }
  return;
}



// FUNCTION 1406c9bf6 FUN_1406c9bf6 body=44 status=ok
// SIG undefined FUN_1406c9bf6(void)

undefined1 FUN_1406c9bf6(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(byte *)(param_1 + 99) & 8) == 0) {
    cVar1 = FUN_1406c9c22();
    if (cVar1 == '\0') {
      uVar2 = FUN_1406c9ee6(param_1);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1406c9c22 FUN_1406c9c22 body=220 status=ok
// SIG undefined FUN_1406c9c22(void)

undefined8 FUN_1406c9c22(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406c9d00(param_1 + 0x988,&local_28);
  if (local_20 == 0) {
    uVar4 = FUN_140927942();
    local_20 = FUN_14477b664(uVar4);
  }
  if (local_18 == (longlong *)0x0) {
    if ((((local_28 != 0) && (local_20 != 0)) &&
        (plVar1 = *(longlong **)(local_20 + 0xb8), plVar1 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      local_18 = (longlong *)FUN_144aff482(uVar4,&local_28);
      if (local_18 != (longlong *)0x0) goto LAB_1406c9c5d;
    }
  }
  else {
LAB_1406c9c5d:
    lVar3 = (**(code **)(*local_18 + 0x128))();
    if (lVar3 != 0) {
      uVar4 = FUN_1402611f4(lVar3);
      goto LAB_1406c9c73;
    }
  }
  uVar4 = 0;
LAB_1406c9c73:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1406c9d00 FUN_1406c9d00 body=485 status=ok
// SIG undefined FUN_1406c9d00(void)

longlong * FUN_1406c9d00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 == 0) {
    uVar3 = FUN_140927942();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x60) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x68) != 0) {
LAB_1406c9d38:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = lVar5;
    uVar3 = FUN_14477b664(lVar4);
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
    param_2[2] = *(longlong *)(param_1 + 0x68);
    goto LAB_1406c9d5b;
  }
  if ((lVar5 != 0) && (lVar4 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_1 + 0x58);
        *(longlong *)(param_1 + 0x68) = lVar4;
        if (lVar4 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x58);
          lVar4 = *(longlong *)(param_1 + 0x60);
          goto LAB_1406c9d38;
        }
        goto LAB_1406c9d8a;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
LAB_1406c9d8a:
  lVar4 = *(longlong *)(param_1 + 0xd8);
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = FUN_140927942();
  lVar5 = FUN_14477b664(uVar3);
  lVar6 = FUN_140927942();
  uVar3 = FUN_140927942();
  FUN_1402d1bfa(&local_38,uVar3,lVar4);
  if (local_38 != 0) {
    param_2[2] = 0;
  }
  *param_2 = local_38;
  lVar7 = FUN_140927942();
  if (lVar6 == 0) {
LAB_1406c9e05:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_1406c9e05;
  if (lVar5 != lVar7) {
    param_2[2] = 0;
  }
  uVar3 = FUN_14477b664(lVar7);
  lVar5 = FUN_14477b664(uVar3);
  param_2[1] = lVar5;
  if (lVar5 != 0 && local_38 != 0) {
    param_2[2] = lVar4;
  }
LAB_1406c9d5b:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406c9ee6 FUN_1406c9ee6 body=391 status=ok
// SIG undefined FUN_1406c9ee6(void)

undefined8 FUN_1406c9ee6(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar9 = 0;
    uVar6 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x250);
    }
    uVar7 = *puVar11;
    if (uVar7 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar4 = iVar3 >> 5;
      if (iVar3 >> 5 < 1) {
        uVar4 = 0;
      }
      iVar10 = 0;
      do {
        if (uVar4 == uVar9) {
          return 0;
        }
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar11[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar6 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar6 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 != iVar2) {
    iVar12 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar12 = iVar2 + -1;
    }
    iVar12 = iVar12 >> 5;
    uVar7 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar3 * 0x10);
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x9c) < '\0')) {
        return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
      uVar7 = uVar7 & ~(uint)uVar6;
      puVar11 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x250);
      }
      iVar3 = (int)uVar9;
      lVar13 = (longlong)iVar3;
      uVar4 = puVar11[lVar13] & uVar7;
      if (uVar4 == 0) {
        iVar5 = iVar12;
        if (iVar12 < iVar3) {
          iVar5 = iVar3;
        }
        if (iVar12 <= iVar3) {
          return 0;
        }
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar11[lVar13 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar13 == lVar8) {
            return 0;
          }
        }
        uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar7 = 0xffffffff;
      }
      uVar6 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar6 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
  return 0;
}



// FUNCTION 1406ca06e FUN_1406ca06e body=971 status=ok
// SIG undefined FUN_1406ca06e(void)

void FUN_1406ca06e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar15 = param_1 + 0x230;
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) < 0) {
    FUN_1417970e8(lVar15,0);
  }
  iVar2 = *(int *)(param_1 + 0x228);
  if ((longlong)iVar2 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x220);
    lVar14 = 0;
    do {
      *(undefined4 *)(lVar13 + 0x10 + lVar14) = 0xf;
      if (((*(char *)(param_1 + 0x178) == '\x03') &&
          (lVar5 = *(longlong *)(lVar13 + lVar14), lVar5 != 0)) && (-1 < *(char *)(lVar5 + 0x9c))) {
        FUN_14092d9da();
      }
      lVar14 = lVar14 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar14);
  }
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar17 = 0;
    iVar6 = 0;
    iVar16 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x250);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar17 = 0;
      uVar12 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar12 = uVar17;
      }
      iVar16 = 0;
      do {
        if (uVar12 == uVar17) goto LAB_1406ca219;
        iVar16 = iVar16 + 0x20;
        uVar11 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar17 = 0;
      iVar16 = 0;
    }
    uVar12 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar12 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    local_80 = (longlong *)(param_1 + 0x220);
    uVar11 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
      if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x9c) < '\0')) {
        lVar13 = (longlong)*(int *)(param_1 + 0x238);
        uVar10 = *(int *)(param_1 + 0x238) + 1;
        *(uint *)(param_1 + 0x238) = uVar10;
        if (*(uint *)(param_1 + 0x23c) < uVar10) {
          local_98 = lVar15;
          local_90 = lVar13;
          FUN_1406ca8e4(lVar15,lVar13);
          lVar13 = local_90;
          lVar15 = local_98;
        }
        *(longlong **)(*(longlong *)(param_1 + 0x230) + lVar13 * 8) = plVar4;
        if ((*(byte *)(param_1 + 0x65) & 0x18) != 0) {
          local_90 = CONCAT71(local_90._1_7_,*(char *)((longlong)plVar4 + 0x9c));
          local_84 = 0xf;
          if (*(char *)((longlong)plVar4 + 0x9c) < '\0') {
            local_84 = 0;
          }
          local_70 = 0;
          local_50 = 0;
          local_98 = lVar15;
          local_78 = plVar4;
          FUN_14485c47a(&local_50,plVar4);
          local_70 = local_50;
          local_68 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_88 = FUN_1405f21fe(local_80);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          *(undefined4 *)(*local_80 + 0x10 + (longlong)local_88 * 0x28) = local_84;
          if ((*(byte *)((longlong)plVar4 + 0x9f) & 0x10) == 0) {
            (**(code **)(*plVar4 + 0x380))(plVar4);
          }
          lVar15 = local_98;
          if (*(char *)(param_1 + 0x178) == '\x03') {
            if ((char)local_90 < '\0') {
              FUN_1406caa46(plVar4);
              lVar15 = local_98;
            }
            else {
              FUN_14092d9da(plVar4);
              lVar15 = local_98;
            }
          }
        }
      }
      uVar11 = uVar11 & ~(uint)uVar12;
      puVar7 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x250);
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar6 = (int)uVar17;
      lVar13 = (longlong)iVar6;
      uVar10 = puVar7[lVar13] & uVar11;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar14 = 0;
          do {
            uVar10 = puVar7[lVar13 + lVar14 + 1];
            if (uVar10 != 0) {
              uVar17 = (ulonglong)(iVar6 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1406ca1ed;
            }
            iVar16 = iVar16 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar17 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_1406ca1ed:
        uVar12 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar12 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_1406ca219:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406ca43a FUN_1406ca43a body=1193 status=ok
// SIG undefined FUN_1406ca43a(void)

longlong * FUN_1406ca43a(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  ulonglong local_70;
  longlong *local_68;
  longlong *local_60;
  uint *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar10 = *param_3;
  local_68 = param_2;
  local_60 = param_3;
  if (lVar10 != 0) {
    if (DAT_14c950d78 == 0) {
      local_90 = &local_50;
      local_50 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_1468b50ee;
      local_a0 = FUN_1427f23a3;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78);
      if (DAT_14c950d78 == 0) goto LAB_1406ca723;
    }
    if (((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8)
         == DAT_14c950d78 + 0x30)) && (*local_60 != 0)) {
      uVar2 = *(uint *)(param_1 + 0x268);
      if (uVar2 == 0) {
        uVar15 = 0;
        uVar13 = 1;
        uVar4 = 0;
        iVar8 = 0;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x250);
        }
        uVar4 = *puVar5;
        if (uVar4 == 0) {
          iVar8 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar8 = uVar2 - 1;
          }
          uVar15 = 0;
          uVar13 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar13 = uVar15;
          }
          iVar8 = 0;
          do {
            if (uVar13 == uVar15) goto LAB_1406ca723;
            iVar8 = iVar8 + 0x20;
            uVar4 = puVar5[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar15 = 0;
          iVar8 = 0;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar4 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar4) {
          uVar4 = uVar2;
        }
      }
      if (uVar4 != uVar2) {
        uVar9 = 0xffffffff;
        local_70 = (ulonglong)uVar2;
        local_58 = (uint *)(param_1 + 0x250);
        do {
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar4 * 0x10);
          if ((lVar10 != 0) && (lVar11 = *local_60, lVar11 != 0)) {
            lVar16 = *(longlong *)(lVar10 + 0x10);
            if (DAT_14c950d78 == 0) {
              local_90 = &local_50;
              local_50 = FUN_1449e2820;
              local_80 = FUN_14081d0ea;
              local_88 = FUN_14081d0ea;
              local_98 = &LAB_1468b50ee;
              local_a0 = FUN_1427f23a3;
              local_a8 = L"Engine";
              local_b0 = 0;
              local_b8 = 0x10004001;
              local_c0 = 8;
              local_c8 = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78);
              if (DAT_14c950d78 == 0) goto LAB_1406ca677;
            }
            if (((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) ==
                 DAT_14c950d78 + 0x30)) &&
               ((lVar11 = *local_60, lVar11 != 0 &&
                ((((*(byte *)(lVar11 + 0xd5) & 0x40) != 0 && (lVar16 != 0)) &&
                 (DAT_14c950d78 != lVar11)))))) {
              do {
                if (0 < (longlong)*(int *)(lVar16 + 0x1e0)) {
                  lVar12 = 0;
                  do {
                    lVar3 = *(longlong *)(*(longlong *)(lVar16 + 0x1d8) + lVar12);
                    if (((lVar3 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                        lVar11 + 0x30)) {
                      iVar14 = (int)local_68[1];
                      *(uint *)(local_68 + 1) = iVar14 + 1U;
                      if (*(uint *)((longlong)local_68 + 0xc) < iVar14 + 1U) {
                        FUN_1406ca8e4(local_68,iVar14);
                      }
                      *(longlong *)(*local_68 + (longlong)iVar14 * 8) = lVar10;
                      goto LAB_1406ca677;
                    }
                    lVar12 = lVar12 + 0x10;
                  } while ((longlong)*(int *)(lVar16 + 0x1e0) * 0x10 != lVar12);
                }
                lVar16 = *(longlong *)(lVar16 + 0x40);
              } while (lVar16 != 0);
            }
          }
LAB_1406ca677:
          uVar9 = uVar9 & ~(uint)uVar13;
          puVar5 = *(uint **)(param_1 + 0x260);
          if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
            puVar5 = local_58;
          }
          uVar2 = *(uint *)(param_1 + 0x268);
          iVar14 = (int)uVar15;
          lVar10 = (longlong)iVar14;
          uVar4 = puVar5[lVar10] & uVar9;
          if (uVar4 == 0) {
            iVar6 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar6 = uVar2 - 1;
            }
            iVar6 = iVar6 >> 5;
            iVar8 = iVar8 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar14) {
              iVar7 = iVar14;
            }
            if (iVar14 < iVar6) {
              lVar11 = 0;
              do {
                uVar4 = puVar5[lVar10 + lVar11 + 1];
                if (uVar4 != 0) {
                  uVar15 = (ulonglong)(iVar14 + (int)lVar11 + 1);
                  uVar9 = 0xffffffff;
                  goto LAB_1406ca6ef;
                }
                iVar8 = iVar8 + 0x20;
                lVar11 = lVar11 + 1;
              } while (iVar7 - lVar10 != lVar11);
              uVar9 = 0xffffffff;
              iVar14 = iVar7;
            }
            uVar15 = (ulonglong)(iVar14 + 1);
            uVar4 = uVar2;
          }
          else {
LAB_1406ca6ef:
            uVar13 = (ulonglong)(-uVar4 & uVar4);
            uVar1 = uVar13 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            uVar4 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar4) {
              uVar4 = uVar2;
            }
          }
        } while (uVar4 != (uint)local_70);
      }
    }
  }
LAB_1406ca723:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_68;
}



// FUNCTION 1406ca8e4 FUN_1406ca8e4 body=353 status=ok
// SIG undefined FUN_1406ca8e4(void)

void FUN_1406ca8e4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406ca969;
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
LAB_1406ca969:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406caa46 FUN_1406caa46 body=15 status=ok
// SIG undefined FUN_1406caa46(void)

void FUN_1406caa46(longlong param_1)

{
  FUN_1406caa56(*(undefined8 *)(param_1 + 0xa8),param_1);
  return;
}



// FUNCTION 1406caa56 FUN_1406caa56 body=147 status=ok
// SIG undefined FUN_1406caa56(void)

void FUN_1406caa56(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  code *local_38;
  undefined1 *local_30;
  int local_28;
  int iStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14020496a(&local_28,param_1);
  if (iStack_24 != 0 || local_28 != 0) {
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 != 0) {
      local_30 = local_48;
      local_38 = FUN_1435a6648;
      local_40 = param_2;
      FUN_1405f17cf(DAT_14cb0d2b0,lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406caaea FUN_1406caaea body=84 status=ok
// SIG undefined FUN_1406caaea(void)

void FUN_1406caaea(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_1406cab40(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406cab40 FUN_1406cab40 body=132 status=ok
// SIG undefined FUN_1406cab40(void)

void FUN_1406cab40(undefined8 *param_1,longlong param_2)

{
  FUN_1406caf92(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1406cabc4(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1406caece(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1406cac5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1406cacfa(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1406cad96(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1406cae32(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1406cabc4 FUN_1406cabc4 body=154 status=ok
// SIG undefined FUN_1406cabc4(void)

void FUN_1406cabc4(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1406cac06;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1406cac06:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined4 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined4 *)(param_1 + 2);
    if ((char)param_1[4] == '\x01') {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001406cac57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406cac5e FUN_1406cac5e body=156 status=ok
// SIG undefined FUN_1406cac5e(void)

void FUN_1406cac5e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1406caca0;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1406caca0:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(short *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         param_1[2];
    if ((char)param_1[3] == '\x01') {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001406cacf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406cacfa FUN_1406cacfa body=156 status=ok
// SIG undefined FUN_1406cacfa(void)

void FUN_1406cacfa(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1406cad3c;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1406cad3c:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined8 *)(param_1 + 2);
    if ((char)param_1[6] == '\x01') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001406cad8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406cad96 FUN_1406cad96 body=156 status=ok
// SIG undefined FUN_1406cad96(void)

void FUN_1406cad96(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1406cadd8;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1406cadd8:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined8 *)(param_1 + 4);
    if ((char)param_1[8] == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001406cae2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406cae32 FUN_1406cae32 body=156 status=ok
// SIG undefined FUN_1406cae32(void)

void FUN_1406cae32(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1406cae74;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_1406cae74:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         *(undefined8 *)(param_1 + 2);
    if ((char)param_1[6] == '\x01') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001406caec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406caece FUN_1406caece body=195 status=ok
// SIG undefined FUN_1406caece(void)

void FUN_1406caece(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar5 = *(longlong **)(param_2 + 0x28);
      lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_1406caf14;
        plVar5 = plVar5 + 4;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    plVar5 = (longlong *)0x0;
LAB_1406caf14:
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
    }
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
    UNLOCK();
    lVar3 = *plVar5;
    bVar1 = *(byte *)((longlong)plVar5 + 0x1c);
    lVar4 = *(longlong *)(param_1 + 4);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_1 + 4);
      }
    }
    *(longlong *)(lVar3 + (longlong)param_3 * (ulonglong)bVar1) = lVar4;
    if ((char)param_1[8] == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001406caf76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406caf92 FUN_1406caf92 body=196 status=ok
// SIG undefined FUN_1406caf92(void)

void FUN_1406caf92(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar5 = *(longlong **)(param_2 + 0x28);
      lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_1406cafd1;
        plVar5 = plVar5 + 4;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    plVar5 = (longlong *)0x0;
LAB_1406cafd1:
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
    }
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
    UNLOCK();
    lVar3 = *plVar5;
    bVar1 = *(byte *)((longlong)plVar5 + 0x1c);
    lVar4 = *(longlong *)(param_1 + 4);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_1 + 4);
      }
    }
    *(longlong *)(lVar3 + (longlong)param_3 * (ulonglong)bVar1) = lVar4;
    if ((char)param_1[8] == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001406cb02f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406cb0c0 FUN_1406cb0c0 body=664 status=ok
// SIG undefined FUN_1406cb0c0(void)

void FUN_1406cb0c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406cb468(param_2,&local_40);
  plVar1 = local_38;
  *(longlong **)(param_1 + 0x6a0) = local_40;
  local_40 = (longlong *)0x0;
  plVar7 = *(longlong **)(param_1 + 0x6a8);
  if (local_38 != plVar7) {
    local_38 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x6a8) = plVar1;
    if (plVar7 == (longlong *)0x0) goto LAB_1406cb128;
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
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_1406cb128:
  lVar5 = *(longlong *)(param_1 + 0x6a0);
  if (((((*(int *)(lVar5 + 0x34) == 0) || (uVar4 = *(uint *)(lVar5 + 0x30), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar8 == 0 ||
       (*(int *)(lVar8 + 0x10) != *(int *)(lVar5 + 0x34))))) ||
     (((*(uint *)(lVar8 + 8) & 0x10200000) != 0 ||
      ((*(longlong *)(lVar5 + 0x48) == 0 || (*(int *)(lVar5 + 8) < 1)))))) {
    local_58 = (**(code **)(*param_2 + 0xc00))(param_2);
    local_40 = (longlong *)0x0;
    if ((*(byte *)(param_2 + 0x18d) & 2) == 0) {
      local_38 = (longlong *)CONCAT71(local_38._1_7_,1);
    }
    else if ((int)param_2[0x191] < 1) {
      local_38 = (longlong *)CONCAT71(local_38._1_7_,3);
    }
    else {
      local_40 = param_2 + 400;
      local_38._0_4_ = (uint)CONCAT71(local_38._1_7_,*(undefined1 *)((longlong)param_2 + 0xc7d)) ^ 3
      ;
    }
    local_38 = (longlong *)CONCAT44(*(undefined4 *)((longlong)param_2 + 0x854),(uint)local_38);
    local_50 = param_2[0x1aa];
    local_48 = (undefined4)param_2[0x1ab];
    FUN_1406cb364(lVar5,&local_50,&local_40,param_3);
    lVar5 = *(longlong *)(param_1 + 0x6a0);
    plVar7 = (longlong *)(**(code **)(*param_2 + 0xae8))(param_2);
    lVar8 = *plVar7;
    if (lVar8 != *(longlong *)(lVar5 + 0xe8)) {
      lVar6 = plVar7[1];
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      plVar7 = *(longlong **)(lVar5 + 0xf0);
      *(longlong *)(lVar5 + 0xe8) = lVar8;
      *(longlong *)(lVar5 + 0xf0) = lVar6;
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
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1478ff6b8(*(longlong *)(param_1 + 0x178) + 0x38,*(undefined8 *)(param_1 + 0x6a0));
    pbVar3 = (byte *)(*(longlong *)(param_1 + 0x178) + 0xb0);
    *pbVar3 = *pbVar3 & 0xfe;
  }
  *(byte *)(param_1 + 0x7e1) = *(byte *)(param_1 + 0x7e1) | 1;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406cb35a FUN_1406cb35a body=9 status=ok
// SIG undefined FUN_1406cb35a(void)

void FUN_1406cb35a(longlong param_1)

{
  FUN_1406cb64a(param_1 + 0x10);
  return;
}



// FUNCTION 1406cb364 FUN_1406cb364 body=260 status=ok
// SIG undefined FUN_1406cb364(void)

void FUN_1406cb364(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140817052(param_1,iVar2);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 6) = uVar1;
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
  *(int *)((longlong)param_1 + 0x34) = iVar2;
  FUN_1434166e6(param_1,param_3,param_5);
  return;
}



// FUNCTION 1406cb468 FUN_1406cb468 body=481 status=ok
// SIG undefined FUN_1406cb468(void)

undefined8 * FUN_1406cb468(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0xb88) != 0) goto LAB_1406cb488;
  plVar4 = (longlong *)FUN_14001cc68(0x178);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a7be2e0;
  plVar4[6] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined4 *)((longlong)plVar4 + 0x3c) = 0x80;
  *(undefined1 *)(plVar4 + 0x1b) = 0;
  plVar4[0x26] = 0;
  *(undefined4 *)(plVar4 + 0x27) = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 0;
  *(undefined1 *)(plVar4 + 0x1e) = 0;
  plVar4[0x1f] = 0;
  plVar4[0x20] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x105) = 0;
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  memset(plVar4 + 8,0,0x91);
  *(undefined8 *)((longlong)plVar4 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar4 + 0x144) = 0;
  plVar4[0x2a] = 0;
  *(undefined4 *)(plVar4 + 0x2b) = 0;
  plVar4[0x2c] = 0;
  plVar4[0x2d] = 0;
  plVar4[0x2e] = 2;
  *(undefined4 *)(plVar4 + 7) = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb88) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0xb90);
    if (plVar5 == (longlong *)0x0) goto LAB_1406cb488;
    *(undefined8 *)(param_1 + 0xb90) = 0;
LAB_1406cb5fa:
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_1406cb488;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xb88) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0xb90);
    if (plVar4 == plVar5) {
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
    else {
      *(longlong **)(param_1 + 0xb90) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1406cb5fa;
    }
  }
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
LAB_1406cb488:
  *param_2 = *(undefined8 *)(param_1 + 0xb88);
  lVar3 = *(longlong *)(param_1 + 0xb90);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1406cb64a FUN_1406cb64a body=368 status=ok
// SIG undefined FUN_1406cb64a(void)

void FUN_1406cb64a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_144760e21(param_1[0x2a],(int)param_1[0x2b]);
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1406cb7ba(param_1 + 0x20);
  plVar3 = (longlong *)param_1[0x1e];
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
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406cb7ba FUN_1406cb7ba body=55 status=ok
// SIG undefined FUN_1406cb7ba(void)

void FUN_1406cb7ba(longlong *param_1)

{
  FUN_1406cb7f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406cb7f2 FUN_1406cb7f2 body=564 status=ok
// SIG undefined FUN_1406cb7f2(void)

void FUN_1406cb7f2(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1406cb827;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *param_1;
      if (*(longlong *)(lVar12 + 0x28 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar12 + (longlong)iVar6 * 0x40 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1406cb827;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1406cb827:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1406cba26 FUN_1406cba26 body=101 status=ok
// SIG undefined FUN_1406cba26(void)

void FUN_1406cba26(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406cba8c(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar2;
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_3;
  if (*(longlong *)(param_3 + 0x10) == param_2) {
    *(int *)(param_3 + 0x38) = iVar1;
  }
  else {
    *(int *)(param_3 + 0x3c) = iVar1;
  }
  return;
}



// FUNCTION 1406cba8c FUN_1406cba8c body=269 status=ok
// SIG undefined FUN_1406cba8c(void)

void FUN_1406cba8c(longlong param_1,int param_2)

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



// FUNCTION 1406cbb9a FUN_1406cbb9a body=1471 status=ok
// SIG undefined FUN_1406cbb9a(void)

undefined8 * FUN_1406cbb9a(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar5 = (**(code **)(*param_2 + 0x180))();
  *param_1 = uVar5;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  param_1[1] = *(undefined8 *)(lVar6 + 0x30);
  uVar2 = FUN_140183ea4();
  *(undefined1 *)(param_1 + 2) = uVar2;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  lVar7 = *(longlong *)(lVar6 + 0x40);
  if (lVar7 == 0) {
    lVar7 = FUN_14475ec7e();
    bVar12 = (byte)lVar6;
    if (lVar7 == 0) {
      bVar3 = 0;
      goto LAB_1406cbc36;
    }
  }
  iVar4 = FUN_14490d72a(lVar7);
  bVar12 = iVar4 - 1U < 2;
  bVar3 = 1;
LAB_1406cbc36:
  *(byte *)((longlong)param_1 + 0x11) = bVar3 & bVar12;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  uVar2 = FUN_1406cc15a(lVar6);
  *(undefined1 *)((longlong)param_1 + 0x12) = uVar2;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  uVar2 = FUN_1400900b4(lVar6);
  *(undefined1 *)((longlong)param_1 + 0x13) = uVar2;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  uVar2 = FUN_1406cc1a6(lVar6);
  *(undefined1 *)((longlong)param_1 + 0x14) = uVar2;
  lVar6 = (**(code **)(*param_2 + 0x180))(param_2);
  if ((*(int *)(lVar6 + 0x15c) == 0) || ((char)param_2[0x26] == '\0')) {
    bVar13 = false;
  }
  else {
    bVar13 = *(int *)((longlong)param_2 + 0x2cc) == *(int *)(lVar6 + 0x160);
  }
  *(bool *)((longlong)param_1 + 0x15) = bVar13;
  *(char *)((longlong)param_1 + 0x16) = (char)param_2[0x59];
  *(int *)(param_1 + 3) = (int)param_2[0x5d];
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)(lVar6 + 0x3b);
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  puVar10 = &DAT_14c846480;
  if (*(char *)(lVar6 + 0xb0) != '\0') {
    puVar10 = (undefined8 *)(lVar6 + 0x50);
  }
  puVar11 = param_1 + 4;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  param_1[0x10] = param_3;
  ppcVar1 = (code **)(param_2 + 0x61);
  if (*(int *)((longlong)param_2 + 0x314) == -1) {
    local_78 = 0;
    local_70 = 0;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (1 < DAT_14cb11f18) {
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      FUN_1403de9f2(&DAT_14cb11f10,&local_b8,&DAT_149e06196,1);
      lVar6 = *(longlong *)(param_2[5] + 0xd0);
      if ((lVar6 != 0) && ((int)uStack_b0 != 0)) {
        puVar11 = local_b8 + (longlong)(int)uStack_b0 * 2;
        puVar10 = local_b8;
        do {
          iVar4 = *(int *)(puVar10 + 1) + -1;
          if (*(int *)(puVar10 + 1) == 0) {
            iVar4 = 0;
          }
          FUN_1446f82e2(&local_a0,iVar4,*puVar10,1);
          local_c0 = local_a0;
          plVar8 = (longlong *)FUN_147db46ac(lVar6,&local_c0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x310))(plVar8,&local_a0);
            FUN_144869592(&local_98,&local_c0,&local_a0,0);
          }
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar11);
      }
      FUN_1447a1747(local_b8);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (&local_98 != ppcVar1) {
      FUN_145737ea2(ppcVar1);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_98);
  }
  param_1[0x11] = ppcVar1;
  param_1[0x12] = param_2 + 0x6b;
  param_1[0x13] = param_2 + 0x75;
  if ((*(uint *)(param_2 + 1) & 0x10) == 0) {
    lVar6 = param_2[4];
  }
  else {
    lVar6 = 0;
  }
  if (DAT_14cb10130 == 0) {
    local_e0 = &local_98;
    local_98 = FUN_140754f84;
    local_d0 = FUN_14081d0ea;
    local_d8 = FUN_14081d0ea;
    local_e8 = &LAB_147da9a76;
    local_f0 = FUN_1409f3105;
    local_f8 = L"Engine";
    local_100 = 0;
    local_108 = 0x10000000;
    local_110 = 8;
    local_118 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar7 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_e0 = &local_98;
    local_98 = FUN_1449e2820;
    local_d0 = FUN_14081d0ea;
    local_d8 = FUN_14081d0ea;
    local_e8 = &LAB_1468c5283;
    local_f0 = FUN_142809da0;
    local_f8 = L"Engine";
    local_100 = 0x400000000;
    local_108 = 0x10000000;
    local_110 = 8;
    local_118 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar6 = *(longlong *)(lVar6 + 0x20);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    iVar4 = *(int *)(lVar7 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar4) ||
         (lVar9 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
         lVar7 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
  }
  if (*(longlong *)(lVar9 + 0x30) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b8);
  }
  param_1[0x14] = lVar6 + 0x720;
  *(undefined1 *)(param_1 + 0x53) = 0;
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406cc15a FUN_1406cc15a body=75 status=ok
// SIG undefined FUN_1406cc15a(void)

undefined1 FUN_1406cc15a(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((((lVar3 != 0) || (lVar3 = FUN_14475ec7e(param_1), lVar3 != 0)) &&
      (iVar2 = FUN_14490d72a(lVar3), iVar2 - 1U < 2)) &&
     (cVar1 = FUN_1400900b4(param_1), cVar1 == '\0')) {
    return 1;
  }
  return *(undefined1 *)(param_1 + 0xc0);
}



// FUNCTION 1406cc1a6 FUN_1406cc1a6 body=196 status=ok
// SIG undefined FUN_1406cc1a6(void)

ulonglong FUN_1406cc1a6(longlong param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined7 uVar5;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 200) == '\x01') {
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 199));
    goto LAB_1406cc1be;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((lVar3 == 0) && (lVar3 = FUN_14475ec7e(param_1), lVar3 == 0)) {
LAB_1406cc256:
    uVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar3 + 0x152);
    if ((bVar1 == 1) || ((uVar4 = 0, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      uVar2 = FUN_1400900b4(param_1);
      if ((char)uVar2 == '\0') goto LAB_1406cc256;
      if (*(char *)(param_1 + 0x39) == '\0') {
        uVar5 = 0;
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0);
          uVar5 = 0;
          if ((lVar3 != 0) &&
             (uVar5 = (undefined7)((ulonglong)lVar3 >> 8),
             *(longlong *)(lVar3 + 0x3f0) != param_1 && *(longlong *)(lVar3 + 0x3f0) != 0)) {
            uVar4 = FUN_1406cc1a6();
            goto LAB_1406cc220;
          }
        }
        uVar4 = CONCAT71(uVar5,DAT_14cb11858);
      }
      else {
        uVar4 = CONCAT71((int7)((ulonglong)uVar2 >> 8),*(char *)(param_1 + 0x3a) == '\x02');
      }
    }
  }
LAB_1406cc220:
  *(char *)(param_1 + 199) = (char)uVar4;
  *(undefined1 *)(param_1 + 200) = 1;
LAB_1406cc1be:
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 1406cc26a FUN_1406cc26a body=269 status=ok
// SIG undefined FUN_1406cc26a(void)

void FUN_1406cc26a(longlong param_1,longlong param_2,char param_3,char param_4)

{
  char cVar1;
  
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x660) = param_2;
    if (*(int *)(param_1 + 0x774) < 0) {
      *(undefined4 *)(param_1 + 0x770) = 0;
      FUN_1401a2688(param_1 + 0x768,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x770) = 0;
    }
    FUN_1406cc694(param_1);
    if (param_4 != '\0') {
      FUN_1406cc378(param_1);
    }
    cVar1 = FUN_1406cc3a4(param_1);
    if (cVar1 == '\0') {
      FUN_140b362ea(param_1);
    }
    if ((*(longlong *)(param_1 + 0x878) != 0) &&
       (*(longlong **)(param_1 + 0x880) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x28))();
      FUN_1474a764c(param_1);
      FUN_140ca2e9a(param_1);
    }
    *(undefined4 *)(param_1 + 0xae8) = 0;
    if (*(int *)(param_1 + 0xaec) != 0) {
      FUN_140491bf8(param_1 + 0xae0,0);
    }
    if (param_3 != '\0') {
      FUN_1406cc482(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1406cc378 FUN_1406cc378 body=43 status=ok
// SIG undefined FUN_1406cc378(void)

void FUN_1406cc378(longlong param_1)

{
  FUN_140acf690();
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    return;
  }
  FUN_141062a52(param_1,0);
  return;
}



// FUNCTION 1406cc3a4 FUN_1406cc3a4 body=222 status=ok
// SIG undefined FUN_1406cc3a4(void)

ulonglong FUN_1406cc3a4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0x660) == 0) ||
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x660) + 0xa8), iVar1 != *(int *)(param_1 + 0xa68)))
  {
LAB_1406cc471:
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < iVar1) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        lVar2 = FUN_140081d40(*(longlong *)(*(longlong *)(param_1 + 0x660) + 0xa0) + lVar6,0);
        if (lVar2 == 0) goto LAB_1406cc471;
        lVar3 = FUN_1406d0862();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1406cc471;
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa60) + lVar5 * 8) + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        if (lVar3 != lVar2) goto LAB_1406cc471;
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (lVar5 < *(int *)(param_1 + 0xa68));
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1406cc482 FUN_1406cc482 body=229 status=ok
// SIG undefined FUN_1406cc482(void)

void FUN_1406cc482(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x660);
  if (lVar3 != 0) {
    *(undefined1 *)(param_1 + 0x694) = *(undefined1 *)(lVar3 + 100);
    puVar1 = (undefined8 *)(param_1 + 0x698);
    if (puVar1 != (undefined8 *)(lVar3 + 0x68)) {
      iVar2 = *(int *)(lVar3 + 0x70);
      _Src = *(void **)(lVar3 + 0x68);
      *(int *)(param_1 + 0x6a0) = iVar2;
      if (iVar2 == 0 && *(int *)(param_1 + 0x6a4) == 0) {
        *(undefined4 *)(param_1 + 0x6a4) = 0;
      }
      else {
        FUN_1447c510a(puVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
        }
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x660);
    *(undefined1 *)(param_1 + 0x6a8) = *(undefined1 *)(lVar3 + 0x78);
    *(undefined1 *)(param_1 + 0x6a9) = *(undefined1 *)(lVar3 + 0x79);
    *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(lVar3 + 0x84);
    *(undefined8 *)(param_1 + 0x6ac) = *(undefined8 *)(lVar3 + 0x7c);
    if (*(longlong *)(lVar3 + 0xe8) != 0) {
      FUN_1406cc568(param_1 + 0x410);
      lVar3 = *(longlong *)(param_1 + 0x660);
    }
    *(undefined1 *)(param_1 + 0x684) = *(undefined1 *)(lVar3 + 0xf0);
  }
  return;
}



// FUNCTION 1406cc568 FUN_1406cc568 body=65 status=ok
// SIG undefined FUN_1406cc568(void)

void FUN_1406cc568(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x120) = param_2;
  FUN_1406cc5aa(param_1);
  FUN_14034b25c(param_1);
  return;
}



// FUNCTION 1406cc5aa FUN_1406cc5aa body=232 status=ok
// SIG undefined FUN_1406cc5aa(void)

void FUN_1406cc5aa(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  longlong *local_60;
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = FUN_14034b308();
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_98 = *(undefined8 *)(param_1 + 0x148);
  FUN_143605db2(param_1,*(undefined8 *)(param_1 + 0x140),local_58,local_58 + 2);
  local_60 = &local_88;
  local_68 = FUN_14361aa94;
  lVar1 = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar1 = param_1;
  }
  local_88 = param_1;
  local_80 = &local_30;
  local_78 = local_58;
  local_70 = local_58 + 2;
  FUN_140e2683c(lVar1 + 0x138);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406cc694 FUN_1406cc694 body=1073 status=ok
// SIG undefined FUN_1406cc694(void)

void FUN_1406cc694(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = param_1[0xcc];
  if (lVar11 == 0) {
LAB_1406cc988:
    puVar6 = (undefined8 *)param_1[0x149];
    if (puVar6 != (undefined8 *)0x0) {
      param_1[0x149] = 0;
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  else {
    lVar3 = *(longlong *)(lVar11 + 0x218);
    plVar4 = *(longlong **)(lVar11 + 0x220);
    if (plVar4 != (longlong *)0x0) {
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
    }
    if (lVar3 == 0) goto LAB_1406cc988;
    uVar5 = *(undefined8 *)(param_1[0xcc] + 0x218);
    plVar4 = *(longlong **)(param_1[0xcc] + 0x220);
    if (plVar4 == (longlong *)0x0) {
      lVar11 = FUN_14001cc68(600,0x10);
      uStack_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar11 = FUN_14001cc68(600,0x10);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uStack_60 = plVar4;
    }
    local_68 = uVar5;
    FUN_1406ccb14(lVar11,&local_68);
    puVar6 = (undefined8 *)param_1[0x149];
    param_1[0x149] = lVar11;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
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
    if ((*(char *)((longlong)param_1 + 0x84b) != '\0') ||
       (*(char *)((longlong)param_1 + 0x842) == '\x01')) {
      FUN_146e99940(param_1[0x149]);
    }
    *(undefined1 *)(param_1[0x149] + 0xa8) = 1;
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar9 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar9 & 1) == 0) {
LAB_1406cc7c0:
        *(byte *)((longlong)param_1 + 0x9d) = bVar9 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
      else if (param_1[0x16] == 0) {
        lVar11 = FUN_1448abda6(param_1);
        if (lVar11 == 0) {
          bVar9 = *(byte *)((longlong)param_1 + 0x9d);
          goto LAB_1406cc7c0;
        }
      }
    }
    FUN_1448c6f34(param_1);
  }
  lVar11 = param_1[0xcc];
  if (lVar11 == 0) {
    iVar13 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar11 + 0x218);
    plVar4 = *(longlong **)(lVar11 + 0x220);
    if (plVar4 == (longlong *)0x0) {
      iVar13 = *(int *)(lVar3 + 200);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar13 = *(int *)(lVar3 + 200);
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
  iVar10 = iVar13;
  if ((int)param_1[0xee] != iVar13) {
    *(undefined4 *)(param_1 + 0xee) = 0;
    if (-1 < *(int *)((longlong)param_1 + 0x774)) goto LAB_1406cc84e;
    FUN_1401a2688(param_1 + 0xed,0);
    iVar10 = (int)param_1[0xee];
  }
  if (0 < iVar10) {
    FUN_1474a5c64(param_1,param_1 + 0xed);
  }
LAB_1406cc84e:
  if (param_1[0xcc] == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(undefined4 *)(param_1[0xcc] + 0x1e8);
  }
  FUN_1406ccac6(param_1 + 0x135,iVar13,1);
  *(undefined4 *)(param_1 + 0x134) = uVar12;
  *(byte *)((longlong)param_1 + 0x9a4) = *(byte *)((longlong)param_1 + 0x9a4) | 3;
  lVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x13b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x13c] = lVar11;
  param_1[0x13d] = DAT_14c8464f0;
  uVar8 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar12 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x138) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = uVar12;
  *(undefined4 *)(param_1 + 0x139) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x9cc) = uVar8;
  param_1[0x13a] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  FUN_1406ceb3e(param_1,&local_68,&DAT_14c846480);
  param_1[0x145] = local_38;
  *(undefined4 *)(param_1 + 0x143) = local_48;
  *(undefined4 *)((longlong)param_1 + 0xa1c) = uStack_44;
  *(undefined4 *)(param_1 + 0x144) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xa24) = uStack_3c;
  *(undefined4 *)(param_1 + 0x141) = local_58;
  *(undefined4 *)((longlong)param_1 + 0xa0c) = uStack_54;
  *(undefined4 *)(param_1 + 0x142) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0xa14) = uStack_4c;
  *(undefined4 *)(param_1 + 0x13f) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 0x9fc) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x140) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0xa04) = uStack_60._4_4_;
  (**(code **)(*param_1 + 0x540))(param_1);
  *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) & 0xfe;
  *(int *)(param_1 + 0x151) = iVar13;
  *(undefined1 *)((longlong)param_1 + 0xa8c) = 0;
  *(undefined4 *)(param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xab4)) {
    *(undefined4 *)((longlong)param_1 + 0xab4) = 0x80;
    FUN_1446efbd8(param_1 + 0x153,0);
  }
  *(undefined4 *)(param_1 + 0x15a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xad4)) {
    *(undefined4 *)((longlong)param_1 + 0xad4) = 0x80;
    FUN_1446efbd8(param_1 + 0x157,0);
  }
  param_1[0x152] = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ccac6 FUN_1406ccac6 body=77 status=ok
// SIG undefined FUN_1406ccac6(void)

void FUN_1406ccac6(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1406ce8b4();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146e9de54();
      return;
    }
  }
  return;
}



// FUNCTION 1406ccb14 FUN_1406ccb14 body=918 status=ok
// SIG undefined FUN_1406ccb14(void)

undefined8 * FUN_1406ccb14(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 9;
  *param_1 = &PTR_FUN_149f62790;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar3;
  param_1[0x18] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000;
  param_1[0x19] = &PTR_FUN_149f62ee0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = &PTR_LAB_149f62610;
  *(undefined1 *)(param_1 + 0x23) = 0;
  local_a8 = &local_58;
  local_58 = 0;
  local_50 = 1;
  FUN_1406cceac(param_1,DAT_14c9974b8,DAT_14c9974a8,param_1 + 0x19);
  local_a8 = (undefined8 *)DAT_14c9974a8;
  FUN_1408a6bca(param_1,param_1[0x17],DAT_14c9974b8,DAT_14c9974b8);
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
  *param_1 = &PTR_FUN_149f626a0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x8000000000;
  param_1[0x24] = &PTR_FUN_149f62ee0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = &PTR_FUN_149f4b600;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = &PTR_LAB_149f62880;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x8000000000;
  param_1[0x32] = &PTR_FUN_149f62ee0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = &PTR_FUN_149f62c60;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = &PTR_FUN_149f4b600;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  local_a8 = &local_68;
  local_68 = 0;
  local_60 = 1;
  FUN_1406cceac(param_1,DAT_14c9968a8,DAT_14c9974a8,param_1 + 0x24);
  local_a8 = &local_78;
  local_78 = 0;
  local_70 = 1;
  FUN_1406ce360(param_1,DAT_14c9965f0,DAT_14c9974a8,param_1 + 0x2a);
  local_a8 = &local_88;
  local_88 = 0;
  local_80 = 1;
  FUN_1406cceac(param_1,DAT_14c996608,DAT_14c9974a8,param_1 + 0x32);
  local_a8 = &local_98;
  local_98 = 0;
  local_90 = 1;
  FUN_1406ce360(param_1,DAT_14c996618,DAT_14c9974a8,param_1 + 0x44);
  plVar4 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406cceac FUN_1406cceac body=457 status=ok
// SIG undefined FUN_1406cceac(void)

void FUN_1406cceac(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x58);
      do {
        if (*(undefined8 **)(lVar5 + (longlong)iVar7 * 0x14) == param_3) goto LAB_1406ccf5e;
        iVar7 = *(int *)(lVar5 + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  local_88 = &local_60;
  local_4c = 0;
  uStack_80 = SUB84(&local_4c,0);
  uStack_7c = (undefined1)((ulonglong)&local_4c >> 0x20);
  uStack_7b = (undefined1)((ulonglong)&local_4c >> 0x28);
  uStack_7a = (undefined2)((ulonglong)&local_4c >> 0x30);
  local_60 = param_3;
  FUN_140b20442((longlong *)(param_1 + 0x58),&local_98,&local_88,0);
LAB_1406ccf5e:
  FUN_1401f66f6(param_1,param_3);
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar3 != '\0') {
      uVar8 = 0;
      goto LAB_1406ccf89;
    }
  }
  uVar8 = *param_5;
LAB_1406ccf89:
  uVar1 = *(undefined1 *)(param_5 + 1);
  uVar4 = FUN_1401f66f6(param_1,param_3);
  local_88._0_4_ = CONCAT31(local_88._1_3_,6);
  local_88._4_4_ = (undefined4)uVar8;
  uStack_80 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  uStack_7c = uVar1;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar4);
  (**(code **)*param_4)(param_4,uVar4);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = &local_88;
  FUN_1406cd0ac(param_1 + 8,&local_4c,&local_60,0);
  FUN_1406cd076(&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406cd076 FUN_1406cd076 body=53 status=ok
// SIG undefined FUN_1406cd076(void)

void FUN_1406cd076(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406cd0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406cd0ac FUN_1406cd0ac body=444 status=ok
// SIG undefined FUN_1406cd0ac(void)

undefined4 *
FUN_1406cd0ac(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406cd3e0(param_1,local_50);
  puVar1 = (undefined4 *)*param_3;
  lVar12 = param_3[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)local_48 = *puVar1;
  *(undefined4 *)((longlong)local_48 + 4) = uVar4;
  *(undefined4 *)(local_48 + 1) = uVar5;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar6;
  FUN_1406cd26a(local_48 + 2,lVar12);
  *(undefined4 *)(local_48 + 7) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = *local_48;
  uVar3 = local_48[1];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar13 = (uint)uVar2 & 0xffff;
  uVar13 = ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar13 >> 4);
  uVar10 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar9 = (uint)uVar3 & 0xffff;
  uVar13 = (uVar13 >> 2) +
           ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar9 >> 4) + uVar13 * 0x40 + 0x9e3779b9 ^ uVar13;
  local_68 = param_4;
  cVar7 = FUN_1406cd30e(param_1,uVar13,local_48);
  if (cVar7 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar10 < 4) {
      iVar11 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar13 = *(int *)(param_1 + 0x48) - 1U & uVar13;
      *(uint *)((longlong)local_48 + 0x3c) = uVar13;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 7) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1406ce504(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406cd26a FUN_1406cd26a body=163 status=ok
// SIG undefined FUN_1406cd26a(void)

undefined1 * FUN_1406cd26a(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 != param_1) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    plVar2 = *(longlong **)(param_2 + 0x18);
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(longlong **)(param_1 + 0x18) = plVar2;
      if (plVar3 != (longlong *)0x0) {
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    param_2[0xd] = 0;
  }
  return param_1;
}



// FUNCTION 1406cd30e FUN_1406cd30e body=210 status=ok
// SIG undefined FUN_1406cd30e(void)

void FUN_1406cd30e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined1 uVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  
  uVar13 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar13 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 == -1) {
      uVar13 = 0;
    }
    else {
      lVar2 = *param_1;
      do {
        lVar15 = (longlong)iVar16 * 0x40;
        puVar1 = (undefined4 *)(lVar2 + lVar15);
        if ((*(longlong *)(lVar2 + lVar15) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar15) == param_3[1])) {
          FUN_1406cd076(puVar1 + 4);
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar15 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar9 = param_3[2];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar11 = param_3[4];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar11;
          puVar1[9] = uVar7;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar8;
          puVar1[4] = (int)lVar9;
          puVar1[5] = uVar5;
          puVar1[6] = (int)lVar10;
          puVar1[7] = uVar6;
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar15;
          puVar1[3] = uVar4;
          FUN_1404992ec(param_1,*param_4,1);
          *param_4 = iVar16;
          uVar13 = 1;
          break;
        }
        iVar16 = puVar1[0xe];
        uVar13 = 0;
      } while (iVar16 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 1406cd3e0 FUN_1406cd3e0 body=712 status=ok
// SIG undefined FUN_1406cd3e0(void)

int * FUN_1406cd3e0(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1406cd5d3;
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
LAB_1406cd5d3:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x40);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1406cd6a8 FUN_1406cd6a8 body=255 status=ok
// SIG undefined FUN_1406cd6a8(void)

void FUN_1406cd6a8(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406cd7a8 FUN_1406cd7a8 body=360 status=ok
// SIG undefined FUN_1406cd7a8(void)

void FUN_1406cd7a8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  
  lVar1 = param_1 + 0x10;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < param_2) {
    iVar8 = param_2 - iVar2;
    if (-1 < iVar8) {
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
      iVar6 = param_2 + 0x1e;
      if (-1 < param_2 + -1) {
        iVar6 = param_2 + -1;
      }
      if (iVar6 >> 5 == iVar3) {
        *(int *)(param_1 + 0x28) = param_2;
      }
      else {
        if (*(int *)(param_1 + 0x2c) < param_2) {
          if (param_2 + 0x1fU < 0xa0) {
            iVar6 = 0x80;
            iVar3 = iVar2;
          }
          else {
            uVar10 = param_2 + 0x1fU >> 5;
            if (*(int *)(param_1 + 0x2c) + 0x1fU < 0xa0) {
              uVar5 = 4;
              if (4 < uVar10) {
                uVar5 = uVar10;
              }
            }
            else {
              uVar5 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
            }
            uVar4 = FUN_144a3809e(uVar5 << 2,0);
            iVar3 = (int)(uVar4 >> 2);
            iVar6 = -0x20;
            if ((int)uVar10 <= iVar3) {
              iVar6 = iVar3 << 5;
            }
            iVar3 = *(int *)(param_1 + 0x28);
          }
          *(int *)(param_1 + 0x2c) = iVar6;
          FUN_1446efbd8(lVar1,iVar3);
          param_2 = *(int *)(param_1 + 0x28) + iVar8;
        }
        iVar3 = param_2 + 0x1f;
        if (-1 < param_2) {
          iVar3 = param_2;
        }
        *(int *)(param_1 + 0x28) = param_2;
        if (param_2 % 0x20 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x20);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar7 = lVar1;
          }
          bVar9 = -(char)(param_2 % 0x20);
          *(uint *)(lVar7 + (longlong)(iVar3 >> 5) * 4) =
               (uint)(*(int *)(lVar7 + (longlong)(iVar3 >> 5) * 4) << (bVar9 & 0x1f)) >>
               (bVar9 & 0x1f);
        }
      }
      FUN_1447c6044(lVar1,iVar2,iVar8,0);
      return;
    }
  }
  else if (param_2 < iVar2) {
    FUN_144a6134a(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1406cd910 FUN_1406cd910 body=364 status=ok
// SIG undefined FUN_1406cd910(void)

void FUN_1406cd910(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_2 <= *(int *)(param_1 + 0x2c)) {
    return;
  }
  if (param_2 + 0x1fU < 0xa0) {
    iVar5 = 0x80;
  }
  else {
    uVar10 = param_2 + 0x1fU >> 5;
    if (*(int *)(param_1 + 0x2c) + 0x1fU < 0xa0) {
      uVar8 = 4;
      if (4 < uVar10) {
        uVar8 = uVar10;
      }
    }
    else {
      uVar8 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
    }
    uVar6 = (ulonglong)(uVar8 * 4);
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = (uint)(uVar6 + 0xf);
        if (uVar8 < 0x1ffd) {
          uVar6 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
        }
        else {
          uVar7 = (ulonglong)(uVar3 & 0xfffffff0);
          if (uVar7 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar9 = 0x32;
            if (0x32 < bVar2) {
              uVar9 = (ulonglong)bVar2;
            }
            uVar11 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1406cd9b0;
              lVar1 = uVar9 + 1 + uVar11;
              uVar11 = uVar11 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & (uVar7 + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_1406cd9b0:
    iVar4 = (int)(uVar6 >> 2);
    iVar5 = -0x20;
    if ((int)uVar10 <= iVar4) {
      iVar5 = iVar4 << 5;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar5;
  FUN_1446efbd8(param_1 + 0x10,*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1406cda7c FUN_1406cda7c body=2275 status=ok
// SIG undefined FUN_1406cda7c(void)

undefined8 FUN_1406cda7c(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_178 [40];
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  uint *local_130;
  undefined1 local_124 [4];
  undefined8 local_120;
  void *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  void **ppvStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 != 0) {
    uVar12 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    uVar17 = *(uint *)(param_1 + 0x30);
    local_138 = param_2;
    if (uVar17 == 0) {
      uVar20 = 1;
      uVar5 = 0;
      iVar14 = 0;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x18);
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
        iVar14 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar14 = uVar17 - 1;
        }
        uVar12 = 0;
        uVar20 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar20 = uVar12;
        }
        iVar14 = 0;
        do {
          if (uVar20 == uVar12) goto LAB_1406cdebf;
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar6[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar12 = 0;
        iVar14 = 0;
      }
      uVar20 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar20 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar5) {
        uVar5 = uVar17;
      }
    }
    if (uVar5 != uVar17) {
      local_148 = param_3 >> 0x20;
      uVar19 = 0xffffffff;
      local_150 = (ulonglong)uVar17;
      local_140 = param_3;
      local_130 = (uint *)(param_1 + 0x18);
      do {
        lVar16 = *(longlong *)(param_1 + 8);
        lVar18 = (longlong)(int)uVar5 * 0x40;
        plVar13 = (longlong *)(lVar18 + lVar16 + 8);
        if ((int)uStack_b0 != local_84) {
          lVar2 = *(longlong *)(lVar16 + 8 + lVar18);
          uVar17 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar5 = (uint)lVar2 & 0xffff;
          puVar10 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar10 = local_80;
          }
          for (iVar11 = *(int *)(puVar10 +
                                (ulonglong)
                                (local_70 - 1U &
                                (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                                (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar5 >> 4)) * 4);
              iVar11 != -1; iVar11 = *(int *)((longlong)iVar11 * 0x20 + local_b8 + 0x18)) {
            if (*(longlong *)(local_b8 + (longlong)iVar11 * 0x20) == lVar2) goto LAB_1406cdcc3;
          }
        }
        local_118 = (void *)0x0;
        uStack_110 = 0;
        ppvStack_100 = &local_118;
        local_108 = plVar13;
        FUN_1406ce9c4(&local_b8,&local_120,&local_108,0);
        if (local_118 != (void *)0x0) {
          FUN_1400020a8();
        }
LAB_1406cdcc3:
        plVar3 = *(longlong **)(lVar16 + lVar18 + 0x14);
        uVar17 = (uint)local_150;
        if (plVar3 != (longlong *)0x0) {
          if ((int)uStack_b0 == local_84) {
LAB_1406ce2ab:
            lVar18 = 0;
          }
          else {
            lVar16 = *plVar13;
            uVar5 = (uint)((ulonglong)lVar16 >> 0x10);
            uVar15 = (uint)lVar16 & 0xffff;
            puVar10 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar10 = local_80;
            }
            iVar11 = *(int *)(puVar10 +
                             (ulonglong)
                             (local_70 - 1U &
                             (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar15) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4)) * 4);
            if (iVar11 == -1) goto LAB_1406ce2ab;
            do {
              lVar18 = local_b8 + (longlong)iVar11 * 0x20;
              if (*(longlong *)(local_b8 + (longlong)iVar11 * 0x20) == lVar16) break;
              iVar11 = *(int *)(lVar18 + 0x18);
              lVar18 = 0;
            } while (iVar11 != -1);
          }
          local_108 = plVar3;
          FUN_1409d9716(lVar18 + 8,&local_108);
        }
        uVar19 = uVar19 & ~(uint)uVar20;
        puVar6 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar6 = local_130;
        }
        uVar15 = *(uint *)(param_1 + 0x30);
        iVar11 = (int)uVar12;
        lVar16 = (longlong)iVar11;
        uVar5 = puVar6[lVar16] & uVar19;
        if (uVar5 == 0) {
          iVar8 = uVar15 + 0x1e;
          if (-1 < (int)(uVar15 - 1)) {
            iVar8 = uVar15 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar11 < iVar8) {
            lVar18 = 0;
            do {
              uVar5 = puVar6[lVar16 + lVar18 + 1];
              if (uVar5 != 0) {
                uVar12 = (ulonglong)(iVar11 + (int)lVar18 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1406cdd47;
              }
              iVar14 = iVar14 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar9 - lVar16 != lVar18);
            uVar19 = 0xffffffff;
            iVar11 = iVar9;
          }
          uVar12 = (ulonglong)(iVar11 + 1);
          uVar17 = (uint)local_150;
          uVar5 = uVar15;
        }
        else {
LAB_1406cdd47:
          uVar20 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar20 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar15 <= (int)uVar5) {
            uVar5 = uVar15;
          }
        }
      } while (uVar5 != uVar17);
      if ((int)uStack_b0 != local_84) {
        uVar17 = (uint)((ulonglong)local_138 >> 0x10);
        uVar5 = (uint)local_138 & 0xffff;
        puVar10 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar10 = local_80;
        }
        uVar12 = (ulonglong)
                 (local_70 - 1U &
                 (int)((ulonglong)local_138 >> 0x20) + ((uint)local_138 << 0x10 | uVar5) +
                 (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar5 >> 4));
        for (iVar14 = *(int *)(puVar10 + uVar12 * 4); iVar14 != -1;
            iVar14 = *(int *)((longlong)iVar14 * 0x20 + local_b8 + 0x18)) {
          if (*(longlong *)(local_b8 + (longlong)iVar14 * 0x20) == local_138) {
            lVar16 = 0;
            local_e8 = 0;
            local_e0 = 0;
            local_108 = (longlong *)0x0;
            ppvStack_100 = (void **)0x0;
            local_dc = 0x80;
            uStack_d8 = 0xffffffff;
            local_d4 = 0;
            local_c8 = (undefined1 *)0x0;
            local_c0 = 0;
            iVar14 = *(int *)(puVar10 + uVar12 * 4);
            if (iVar14 != -1) goto LAB_1406cdf0a;
            goto LAB_1406cdf27;
          }
        }
      }
    }
LAB_1406cdebf:
    bVar4 = true;
    goto LAB_1406ce21f;
  }
  goto LAB_1406cdaae;
  while (iVar8 = *(int *)(lVar16 + 0x18), *(int *)(lVar16 + 0x18) != -1) {
LAB_1406ce0f7:
    lVar16 = local_b8 + (longlong)iVar8 * 0x20;
    if (*(longlong *)(local_b8 + (longlong)iVar8 * 0x20) == local_120) goto LAB_1406ce117;
  }
  lVar16 = 0;
LAB_1406ce117:
  if (*(int *)(lVar16 + 0x10) != 0) {
    do {
      lVar16 = local_b8 + (longlong)iVar14 * 0x20;
      if (*(longlong *)(local_b8 + (longlong)iVar14 * 0x20) == local_120) goto LAB_1406ce140;
      iVar14 = *(int *)(lVar16 + 0x18);
    } while (iVar14 != -1);
    lVar16 = 0;
LAB_1406ce140:
    uVar17 = *(uint *)(lVar16 + 0x10);
    if ((longlong)(int)uVar17 != 0) {
      iVar14 = (int)uStack_110;
      lVar18 = (longlong)(int)uStack_110;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar17 + (int)uStack_110);
      if ((uint)(uStack_110._4_4_ - iVar14) < uVar17) {
        FUN_1446f84a2(&local_118,uVar12 & 0xffffffff);
      }
      memcpy((void *)(lVar18 * 8 + (longlong)local_118),*(void **)(lVar16 + 8),
             (longlong)(int)uVar17 << 3);
    }
  }
LAB_1406ce11e:
  if ((int)uStack_110 == 0) goto LAB_1406ce193;
  goto LAB_1406cdf91;
  while (iVar14 = *(int *)(lVar16 + 0x18), iVar14 != -1) {
LAB_1406cdf0a:
    lVar16 = local_b8 + (longlong)iVar14 * 0x20;
    if (*(longlong *)(local_b8 + (longlong)iVar14 * 0x20) == local_138) goto LAB_1406cdf27;
  }
  lVar16 = 0;
LAB_1406cdf27:
  local_118 = (void *)0x0;
  uVar17 = *(uint *)(lVar16 + 0x10);
  _Src = *(void **)(lVar16 + 8);
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar17);
  if ((longlong)(int)uVar17 == 0) {
    uStack_110 = (ulonglong)uVar17;
  }
  else {
    FUN_1401b309e(&local_118,uVar17,0);
    memcpy(local_118,_Src,(longlong)(int)uVar17 << 3);
    if ((int)uStack_110 != 0) {
LAB_1406cdf91:
      local_120 = *(longlong *)((longlong)local_118 + (longlong)(int)uStack_110 * 8 + -8);
      uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + -1);
      FUN_1406ce816(&local_118);
      if (((uint)local_120 != (uint)local_140) || (local_120._4_4_ != (int)local_148)) {
        if ((int)ppvStack_100 != local_d4) {
          uVar17 = (uint)((ulonglong)local_120 >> 0x10);
          puVar10 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar10 = local_d0;
          }
          for (iVar14 = *(int *)(puVar10 +
                                (ulonglong)
                                (local_c0 - 1U &
                                local_120._4_4_ +
                                ((uint)local_120 << 0x10 | (uint)local_120 & 0xffff) +
                                (uVar17 << 0x13 | uVar17 & 0xffff) +
                                (((uint)local_120 & 0xffff) >> 4)) * 4); iVar14 != -1;
              iVar14 = (int)local_108[(longlong)iVar14 * 2 + 1]) {
            if (local_108[(longlong)iVar14 * 2] == local_120) goto LAB_1406ce11e;
          }
        }
        FUN_144a13f80(&local_108,local_124,&local_120,0);
        uVar12 = uStack_110;
        if ((int)uStack_b0 != local_84) {
          uVar17 = (uint)((ulonglong)local_120 >> 0x10);
          uVar5 = (uint)local_120 & 0xffff;
          puVar10 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar10 = local_80;
          }
          iVar14 = *(int *)(puVar10 +
                           (ulonglong)
                           (local_70 - 1U &
                           (int)((ulonglong)local_120 >> 0x20) + ((uint)local_120 << 0x10 | uVar5) +
                           (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar5 >> 4)) * 4);
          for (iVar11 = iVar14; iVar11 != -1;
              iVar11 = *(int *)((longlong)iVar11 * 0x20 + local_b8 + 0x18)) {
            iVar8 = iVar14;
            if (*(longlong *)(local_b8 + (longlong)iVar11 * 0x20) == local_120) goto LAB_1406ce0f7;
          }
        }
        goto LAB_1406ce11e;
      }
      if (local_118 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_c0 = 0;
      if (local_c8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(&local_108);
      bVar4 = false;
      goto LAB_1406ce21f;
    }
  }
LAB_1406ce193:
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  bVar4 = true;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar12 = (ulonglong)ppvStack_100 >> 0x20;
  ppvStack_100 = (void **)((ulonglong)ppvStack_100 & 0xffffffff00000000);
  if ((int)uVar12 != 0) {
    FUN_14472eb64(&local_108,0);
  }
  uStack_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    FUN_1446efbd8(local_f8,0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1406ce21f:
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401fc242(&local_b8);
  if (!bVar4) {
    uVar7 = 1;
    goto LAB_1406cdab0;
  }
LAB_1406cdaae:
  uVar7 = 0;
LAB_1406cdab0:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ce360 FUN_1406ce360 body=418 status=ok
// SIG undefined FUN_1406ce360(void)

void FUN_1406ce360(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_1406ce40c;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_1406ce40c:
  FUN_1401f66f6(param_1,param_3);
  if (*(char *)((longlong)param_5 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_5,param_3);
    if (cVar3 != '\0') {
      uVar8 = 0;
      goto LAB_1406ce437;
    }
  }
  uVar8 = *param_5;
LAB_1406ce437:
  uVar1 = *(undefined1 *)(param_5 + 1);
  uVar4 = FUN_1401f66f6(param_1,param_3);
  local_88[0] = 0x10;
  local_7b = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_84 = uVar8;
  local_7c = uVar1;
  local_68 = param_4;
  (**(code **)(*param_4 + 8))(param_4,uVar4);
  (**(code **)*param_4)(param_4,uVar4);
  local_60 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_58 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_4c,&local_60,0);
  FUN_1406cd076(local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ce504 FUN_1406ce504 body=785 status=ok
// SIG undefined FUN_1406ce504(void)

void FUN_1406ce504(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_1406ce56a;
  }
  uVar4 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar14 != uVar4);
LAB_1406ce56a:
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar7 = 0;
    uVar18 = 1;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    puVar17 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar17 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar17;
    if (uVar14 == 0) {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      uVar7 = 0;
      uVar18 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar18 = uVar7;
      }
      iVar8 = 0;
      do {
        if (uVar18 == uVar7) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar14 = puVar17[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar7 = 0;
      iVar8 = 0;
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14);
    uVar6 = uVar18 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar10) {
      iVar10 = iVar5;
    }
  }
  if (iVar10 < iVar5) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar11 = (longlong)iVar10 * 0x40;
      uVar2 = *(undefined8 *)(lVar12 + lVar11);
      uVar3 = *(undefined8 *)(lVar12 + 8 + lVar11);
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar13 = (uint)uVar2 & 0xffff;
      uVar19 = ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4);
      uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar13 = (uint)uVar3 & 0xffff;
      uVar6 = (longlong)
              (int)((uVar19 >> 2) +
                    ((uint)uVar3 << 0x10 | uVar13) + (int)((ulonglong)uVar3 >> 0x20) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4) + uVar19 * 0x40 + 0x9e3779b9 ^
                   uVar19) & (longlong)(int)param_1[9] - 1U;
      iVar5 = (int)uVar6;
      *(int *)(lVar12 + 0x3c + lVar11) = iVar5;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(undefined4 *)(lVar12 + 0x38 + lVar11) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar14 = ~(uint)uVar18 & uVar14;
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 2);
      }
      iVar5 = (int)param_1[5];
      iVar10 = (int)uVar7;
      lVar12 = (longlong)iVar10;
      uVar4 = puVar17[lVar12] & uVar14;
      if (uVar4 == 0) {
        iVar15 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar15 = iVar5 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar10) {
          iVar16 = iVar10;
        }
        if (iVar15 <= iVar10) {
          return;
        }
        lVar11 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar4 = puVar17[lVar12 + lVar11 + 1];
          if (uVar4 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar16 - lVar12 == lVar11) {
            return;
          }
        }
        uVar7 = (ulonglong)(iVar10 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar4 & uVar4);
      uVar6 = uVar18 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar5);
  }
  return;
}



// FUNCTION 1406ce816 FUN_1406ce816 body=63 status=ok
// SIG undefined FUN_1406ce816(void)

void FUN_1406ce816(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1406ce856(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1406ce856 FUN_1406ce856 body=93 status=ok
// SIG undefined FUN_1406ce856(void)

ulonglong FUN_1406ce856(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1406ce8b4 FUN_1406ce8b4 body=272 status=ok
// SIG undefined FUN_1406ce8b4(void)

void FUN_1406ce8b4(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406ce9c4 FUN_1406ce9c4 body=376 status=ok
// SIG undefined FUN_1406ce9c4(void)

undefined4 *
FUN_1406ce9c4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
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
  FUN_1409d9a2a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1409d996c(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1409d9c06(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ceb3e FUN_1406ceb3e body=2930 status=ok
// SIG undefined FUN_1406ceb3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1406ceb3e(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar27;
  undefined1 auVar26 [16];
  float fVar28;
  double dVar29;
  float fVar34;
  double dVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar36;
  undefined1 auVar32 [16];
  double dVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    if (*(char *)(param_1 + 0xa8c) == '\x01') {
      lVar8 = FUN_1406cf856(param_1 + 0x9a0);
      if (0 < *(int *)(lVar8 + 8)) {
        FUN_144a1ae7a(param_1,param_2,param_3,lVar8);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_2c8);
      }
    }
    else {
      if (*(char *)(param_1 + 0x9f0) == '\0') {
        lVar8 = param_1 + 0x9a0;
        lVar9 = FUN_1406cf856(lVar8);
        if (0 < *(int *)(lVar9 + 8)) {
          pfVar10 = (float *)FUN_1406cf6b2();
          auVar31 = *(undefined1 (*) [16])(pfVar10 + 8);
          auVar46._4_4_ = -(uint)(1e-08 < ABS(auVar31._4_4_));
          auVar46._0_4_ = -(uint)(1e-08 < ABS(auVar31._0_4_));
          auVar46._8_4_ = -(uint)(1e-08 < ABS(auVar31._8_4_));
          auVar46._12_4_ = -(uint)(1e-08 < ABS(auVar31._12_4_));
          iVar12 = movmskps((int)lVar8,auVar46);
          auVar46 = _DAT_14c846080;
          auVar52 = _DAT_14c846070;
          fVar19 = _DAT_14c846060;
          fVar21 = fRam000000014c846064;
          fVar22 = fRam000000014c846068;
          fVar23 = fRam000000014c84606c;
          if (iVar12 != 0) {
            auVar46 = insertps(auVar31,0x3f800000,0x30);
            auVar52 = divps(_DAT_149e1ef10,auVar31);
            auVar31._0_4_ = -(uint)(1e-08 < ABS(auVar46._0_4_)) & auVar52._0_4_;
            auVar31._4_4_ = -(uint)(1e-08 < ABS(auVar46._4_4_)) & auVar52._4_4_;
            auVar31._8_4_ = -(uint)(1e-08 < ABS(auVar46._8_4_)) & auVar52._8_4_;
            auVar31._12_4_ = -(uint)(1e-08 < ABS(auVar46._12_4_)) & auVar52._12_4_;
            auVar46 = blendps(auVar31,ZEXT816(0),8);
            fVar19 = *pfVar10 * -1.0;
            fVar21 = pfVar10[1] * -1.0;
            fVar22 = pfVar10[2] * -1.0;
            fVar23 = pfVar10[3] * 1.0;
            fVar28 = pfVar10[4] * auVar46._0_4_;
            fVar33 = pfVar10[5] * auVar46._4_4_;
            fVar34 = pfVar10[6] * auVar46._8_4_;
            fVar36 = pfVar10[7] * auVar46._12_4_;
            fVar39 = fVar33 * fVar19 - fVar21 * fVar28;
            fVar40 = fVar34 * fVar21 - fVar22 * fVar33;
            fVar41 = fVar28 * fVar22 - fVar19 * fVar34;
            fVar42 = fVar36 * fVar23 - fVar23 * fVar36;
            fVar39 = fVar39 + fVar39;
            fVar40 = fVar40 + fVar40;
            fVar41 = fVar41 + fVar41;
            fVar42 = fVar42 + fVar42;
            auVar52._0_4_ = 0.0 - ((fVar39 * fVar21 - fVar41 * fVar22) + fVar23 * fVar40 + fVar28);
            auVar52._4_4_ = 0.0 - ((fVar40 * fVar22 - fVar39 * fVar19) + fVar23 * fVar41 + fVar33);
            auVar52._8_4_ = 0.0 - ((fVar41 * fVar19 - fVar40 * fVar21) + fVar23 * fVar39 + fVar34);
            auVar52._12_4_ = 0.0 - ((fVar42 * fVar23 - fVar42 * fVar23) + fVar23 * fVar42 + fVar36);
            auVar52 = blendps(auVar52,ZEXT816(0),8);
          }
          local_128 = (double)auVar46._0_4_;
          dStack_120 = (double)auVar46._4_4_;
          local_118 = (double)auVar46._8_4_;
          dStack_110 = (double)auVar46._12_4_;
          local_148 = (double)auVar52._0_4_;
          dStack_140 = (double)auVar52._4_4_;
          local_138 = (double)auVar52._8_4_;
          dStack_130 = (double)auVar52._12_4_;
          local_158 = (double)fVar22;
          dStack_150 = (double)fVar23;
          local_168._8_4_ = SUB84((double)fVar21,0);
          local_168._0_8_ = (double)fVar19;
          local_168._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
          FUN_144a1ae7a(param_1,local_1e8,local_168,lVar9);
          *(double *)(param_1 + 0x9f0) = local_1b8;
          *(undefined8 *)(param_1 + 0x9e0) = local_1c8._0_8_;
          *(undefined8 *)(param_1 + 0x9e8) = local_1c8._8_8_;
          *(double *)(param_1 + 0x9d0) = local_1d8;
          *(undefined8 *)(param_1 + 0x9d8) = uStack_1d0;
          *(undefined8 *)(param_1 + 0x9c0) = local_1e8._0_8_;
          *(undefined8 *)(param_1 + 0x9c8) = local_1e8._8_8_;
        }
        if (*(char *)(param_1 + 0x9f0) == '\0') goto LAB_1406cf065;
      }
      iVar12 = (int)param_1 + 0x9a0;
      puVar7 = (undefined8 *)FUN_1406cf6b2();
      auVar45._0_8_ = (double)(float)puVar7[4];
      auVar45._8_8_ = (double)(float)((ulonglong)puVar7[4] >> 0x20);
      dVar24 = (double)(float)puVar7[5];
      dVar27 = (double)(float)((ulonglong)puVar7[5] >> 0x20);
      dVar29 = (double)(float)puVar7[2];
      dVar35 = (double)(float)((ulonglong)puVar7[2] >> 0x20);
      dVar37 = (double)(float)*puVar7;
      dVar20 = (double)(float)((ulonglong)*puVar7 >> 0x20);
      dVar25 = (double)(float)puVar7[1];
      dVar18 = (double)(float)((ulonglong)puVar7[1] >> 0x20);
      local_298 = *(undefined1 (*) [16])(param_3 + 8);
      auVar31 = *(undefined1 (*) [16])(param_3 + 10);
      dVar15 = auVar31._0_8_;
      auVar46 = minpd(auVar45,local_298);
      auVar51._8_8_ = dVar27;
      auVar51._0_8_ = dVar24;
      auVar52 = minpd(auVar51,auVar31);
      auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
      iVar6 = movmskpd((int)puVar7,auVar47);
      auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
      auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
      uVar11 = movmskpd(iVar12,auVar53);
      uVar4 = local_298._0_8_;
      uVar5 = local_298._8_8_;
      local_2a8 = auVar45;
      if ((uVar11 & 0x3fffffff) == 0 && iVar6 == 0) {
        dVar56 = *param_3;
        dVar57 = param_3[1];
        dVar54 = param_3[3];
        dVar55 = param_3[3];
        dVar50 = param_3[1];
        dVar48 = param_3[1];
        dVar58 = param_3[2];
        dVar1 = param_3[2];
        dVar49 = param_3[2];
        dVar2 = dVar20 * dVar1 * -1.0 + dVar25 * dVar50 + dVar18 * *param_3 * 1.0 + dVar54 * dVar37;
        dVar44 = dVar37 * dVar49 * 1.0 +
                 dVar18 * dVar48 + dVar25 * *param_3 * -1.0 + dVar55 * dVar20;
        auVar43._0_8_ =
             dVar18 * dVar1 * 1.0 + ((*param_3 * dVar20 * 1.0 + dVar54 * dVar25) - dVar50 * dVar37);
        auVar43._8_8_ =
             dVar25 * dVar49 * -1.0 +
             ((*param_3 * dVar37 * -1.0 + dVar55 * dVar18) - dVar48 * dVar20);
        dVar29 = dVar29 * (double)local_298._0_8_;
        dVar35 = dVar35 * (double)local_298._8_8_;
        dVar20 = (double)(float)puVar7[3] * dVar15;
        dVar25 = dVar35 * dVar56 - dVar29 * dVar57;
        dVar18 = dVar20 * dVar57 - dVar35 * dVar58;
        dVar37 = dVar29 * dVar58 - dVar20 * dVar56;
        dVar18 = dVar18 + dVar18;
        dVar37 = dVar37 + dVar37;
        dVar25 = dVar25 + dVar25;
        local_108 = (dVar25 * dVar57 - dVar58 * dVar37) + dVar54 * dVar18 + dVar29 + param_3[4];
        dStack_100 = (dVar18 * dVar58 - dVar25 * dVar56) + dVar55 * dVar37 + dVar35 + param_3[5];
        local_f8 = (dVar37 * dVar56 - dVar57 * dVar18) + dVar54 * dVar25 + dVar20 + param_3[6];
      }
      else {
        dVar48 = *param_3;
        dVar50 = param_3[1];
        dVar1 = param_3[2];
        dVar54 = dVar50 + dVar50;
        dVar56 = dVar1 + dVar1;
        dVar49 = dVar48 * (dVar48 + dVar48);
        dVar2 = param_3[3];
        dVar57 = dVar56 * dVar2;
        dVar58 = (dVar48 + dVar48) * param_3[3];
        dVar2 = dVar54 * dVar2;
        dVar44 = (dVar56 * dVar50 - dVar58) * dVar15;
        dVar55 = (1.0 - (dVar1 * dVar56 + dVar49)) * (double)local_298._8_8_;
        local_198 = (1.0 - (dVar49 + dVar50 * dVar54)) * dVar15;
        dVar49 = (dVar54 * dVar48 + dVar57) * (double)local_298._0_8_;
        local_1b8 = (dVar56 * dVar50 + dVar58) * (double)local_298._8_8_;
        local_1d8 = (*param_3 * dVar56 - dVar2) * (double)local_298._0_8_;
        local_1e8._8_4_ = SUB84(dVar49,0);
        local_1e8._0_8_ = (1.0 - (dVar1 * dVar56 + dVar50 * dVar54)) * (double)local_298._0_8_;
        local_1e8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar55,0);
        local_1c8._0_8_ = (dVar54 * dVar48 - dVar57) * (double)local_298._8_8_;
        local_1c8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        uStack_1b0 = 0;
        local_1a8._8_4_ = SUB84(dVar44,0);
        local_1a8._0_8_ = (dVar2 + *param_3 * dVar56) * dVar15;
        local_1a8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        uStack_190 = 0;
        local_188 = param_3[4];
        dStack_180 = param_3[5];
        local_178 = param_3[6];
        uStack_170 = 0x3ff0000000000000;
        dVar54 = dVar20 + dVar20;
        dVar55 = dVar25 + dVar25;
        dVar50 = (dVar37 + dVar37) * dVar37;
        local_218 = (1.0 - (dVar50 + dVar54 * dVar20)) * dVar24;
        dVar48 = (dVar37 + dVar37) * dVar18;
        local_228 = (dVar37 * dVar55 + dVar54 * dVar18) * dVar24;
        dStack_220 = (dVar55 * dVar20 - dVar48) * dVar24;
        dVar2 = (double)local_298._0_8_ * auVar45._0_8_;
        dVar44 = (double)local_298._8_8_ * auVar45._8_8_;
        local_268 = (1.0 - (dVar55 * dVar25 + dVar54 * dVar20)) * auVar45._0_8_;
        dVar25 = (1.0 - (dVar55 * dVar25 + dVar50)) * auVar45._8_8_;
        dStack_260 = (dVar54 * dVar37 + dVar55 * dVar18) * auVar45._0_8_;
        local_238 = (dVar55 * dVar20 + dVar48) * auVar45._8_8_;
        local_258 = (dVar37 * dVar55 - dVar54 * dVar18) * auVar45._0_8_;
        uStack_250 = 0;
        local_248._8_4_ = SUB84(dVar25,0);
        local_248._0_8_ = (dVar54 * dVar37 - dVar55 * dVar18) * auVar45._8_8_;
        local_248._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        uStack_230 = 0;
        uStack_210 = 0;
        uStack_1f0 = 0x3ff0000000000000;
        local_208 = dVar29;
        dStack_200 = dVar35;
        local_1f8 = (double)(float)puVar7[3];
        FUN_1447fea8d(local_168);
        FUN_144a1c686(local_168,0x3e45798ee0000000);
        auVar46 = _DAT_149934d80;
        auVar16._8_8_ = -(ulonglong)(0.0 <= dVar44);
        auVar16._0_8_ = -(ulonglong)(0.0 <= dVar2);
        auVar52 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar16);
        uVar14 = -(ulonglong)(0.0 <= dVar15 * dVar24);
        dVar25 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
        dVar18 = auVar52._0_8_;
        local_158 = local_158 * dVar18;
        local_168._8_8_ = (double)local_168._8_8_ * dVar18;
        local_168._0_8_ = (double)local_168._0_8_ * dVar18;
        dVar18 = auVar52._8_8_;
        local_138 = local_138 * dVar18;
        dStack_140 = dStack_140 * dVar18;
        local_148 = dVar18 * local_148;
        local_118 = local_118 * dVar25;
        dStack_120 = dStack_120 * dVar25;
        local_128 = dVar25 * local_128;
        FUN_14481fd10(&local_288,local_168);
        dVar25 = local_278 * local_278 + local_288 * local_288;
        dVar18 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar26._0_8_ = dVar25 + dVar18;
        auVar26._8_8_ = dVar25 + dVar18;
        auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar52 = sqrtpd(auVar26,auVar26);
        auVar46 = divpd(auVar46,auVar52);
        auVar32._0_8_ = auVar46._0_8_ * local_278;
        auVar32._8_8_ = auVar46._8_8_ * dStack_270;
        dVar2 = (double)((ulonglong)(local_288 * auVar46._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        dVar44 = (double)((ulonglong)(dStack_280 * auVar46._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
        auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar17);
      }
      dVar18 = auVar45._8_8_ * (double)uVar5;
      dVar25 = auVar45._0_8_ * (double)uVar4;
      dVar24 = dVar24 * dVar15;
      bVar13 = *(char *)(param_1 + 0x9f0) == '\0';
      if (bVar13) {
        dVar37 = 0.0;
        dVar20 = 0.0;
        dVar15 = 0.0;
        local_f8 = 0.0;
        dVar27 = 0.0;
        dVar29 = 0.0;
      }
      else {
        dVar20 = auVar43._0_8_;
        dVar29 = auVar43._8_8_;
        dVar15 = dVar20 + dVar20;
        dVar35 = dVar2 + dVar2;
        dVar54 = dVar44 + dVar44;
        auVar30._0_8_ = (dVar54 * dVar29 + dVar2 * dVar15) * dVar24;
        auVar30._8_8_ = (dVar35 * dVar29 + dVar2 * dVar35) * dVar27 * auVar31._8_8_;
        auVar38._0_8_ = dVar18 * (dVar54 * dVar2 - dVar29 * dVar15);
        auVar38._8_8_ = dVar24 * (dVar15 * dVar44 - dVar29 * dVar35);
        auVar31 = blendpd(auVar30,auVar38,2);
        dVar37 = (1.0 - (dVar15 * dVar20 + dVar54 * dVar44)) * dVar25;
        dVar20 = (1.0 - (dVar15 * dVar20 + dVar35 * dVar2)) * dVar18;
        auVar3._8_4_ = SUB84(dVar20,0);
        auVar3._0_8_ = dVar37;
        auVar3._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        auVar46 = blendpd(auVar38,auVar3,2);
        dVar20 = (dVar29 * dVar15 + dVar54 * dVar2) * dVar25;
        dVar18 = (dVar29 * dVar35 + dVar15 * dVar44) * dVar18;
        dVar24 = (1.0 - (dVar35 * dVar2 + dVar54 * dVar44)) * dVar24;
        dVar25 = (dVar2 * dVar15 - dVar54 * dVar29) * dVar25;
        dVar54 = (*(double *)(param_1 + 0x9c0) + *(double *)(param_1 + 0x9d8)) * 0.5;
        dVar55 = (*(double *)(param_1 + 0x9c8) + *(double *)(param_1 + 0x9e0)) * 0.5;
        dVar44 = (*(double *)(param_1 + 0x9d0) + *(double *)(param_1 + 0x9e8)) * 0.5;
        dVar15 = (*(double *)(param_1 + 0x9d8) - *(double *)(param_1 + 0x9c0)) * 0.5;
        dVar35 = (*(double *)(param_1 + 0x9e0) - *(double *)(param_1 + 0x9c8)) * 0.5;
        dVar2 = (*(double *)(param_1 + 0x9e8) - *(double *)(param_1 + 0x9d0)) * 0.5;
        local_108 = local_108 + dVar44 * auVar31._0_8_ + auVar46._0_8_ * dVar55 + dVar54 * dVar37;
        dStack_100 = dStack_100 + dVar44 * auVar31._8_8_ + auVar46._8_8_ * dVar55 + dVar54 * dVar20;
        dVar37 = ABS(dVar2 * auVar31._0_8_) + ABS(auVar46._0_8_ * dVar35) + ABS(dVar15 * dVar37);
        dVar20 = ABS(dVar2 * auVar31._8_8_) + ABS(auVar46._8_8_ * dVar35) + ABS(dVar15 * dVar20);
        dVar27 = local_108 - dVar37;
        dVar29 = dStack_100 - dVar20;
        dVar37 = dVar37 + local_108;
        dVar20 = dVar20 + dStack_100;
        dVar35 = ABS(dVar35 * dVar18) + ABS(dVar25 * dVar15) + ABS(dVar2 * dVar24);
        local_f8 = local_f8 + dVar44 * dVar24 + dVar55 * dVar18 + dVar54 * dVar25;
        dVar15 = local_f8 - dVar35;
        local_f8 = local_f8 + dVar35;
      }
      *param_2 = dVar27;
      param_2[1] = dVar29;
      param_2[2] = dVar15;
      param_2[3] = dVar37;
      param_2[4] = dVar20;
      param_2[5] = local_f8;
      *(bool *)(param_2 + 6) = !bVar13;
    }
  }
LAB_1406cf065:
  if ((local_e0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406cf6b2 FUN_1406cf6b2 body=420 status=ok
// SIG undefined FUN_1406cf6b2(void)

undefined * FUN_1406cf6b2(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  double *pdVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar7 = *(longlong *)(param_1 + 6);
  if (lVar7 == 0) {
    return &DAT_14c846060;
  }
  iVar8 = *param_1;
  lVar9 = (longlong)iVar8;
  if (lVar9 < 0) {
    return &DAT_14c846060;
  }
  if (param_1[4] <= iVar8) {
    return &DAT_14c846060;
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) goto LAB_1406cf75f;
  lVar5 = *(longlong *)(lVar7 + 0xa48);
  if (lVar5 == 0) {
    if (*(int *)(lVar7 + 0x770) < 1) {
      lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x660) + 0x218);
      plVar6 = *(longlong **)(*(longlong *)(lVar7 + 0x660) + 0x220);
      if (plVar6 == (longlong *)0x0) {
        lVar7 = *(longlong *)(lVar5 + 0xc0);
        goto LAB_1406cf71e;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      lVar7 = *(longlong *)(lVar5 + 0xc0);
      lVar9 = lVar9 * 0x30;
      pfVar3 = (float *)(lVar7 + lVar9);
      fVar20 = *pfVar3;
      fVar21 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar13 = pfVar3[3];
      pfVar3 = (float *)(lVar7 + 0x10 + lVar9);
      fVar18 = *pfVar3;
      fVar19 = pfVar3[1];
      fVar14 = pfVar3[2];
      fVar15 = pfVar3[3];
      pfVar3 = (float *)(lVar7 + 0x20 + lVar9);
      fVar16 = *pfVar3;
      fVar17 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar12 = pfVar3[3];
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
    else {
      lVar7 = *(longlong *)(lVar7 + 0x768);
      lVar9 = lVar9 * 0x60;
      pdVar4 = (double *)(lVar7 + 0x50 + lVar9);
      fVar10 = (float)*pdVar4;
      fVar12 = (float)pdVar4[1];
      pdVar4 = (double *)(lVar7 + 0x40 + lVar9);
      fVar16 = (float)*pdVar4;
      fVar17 = (float)pdVar4[1];
      pdVar4 = (double *)(lVar7 + 0x30 + lVar9);
      fVar14 = (float)*pdVar4;
      fVar15 = (float)pdVar4[1];
      pdVar4 = (double *)(lVar7 + 0x20 + lVar9);
      fVar18 = (float)*pdVar4;
      fVar19 = (float)pdVar4[1];
      pdVar4 = (double *)(lVar7 + 0x10 + lVar9);
      fVar11 = (float)*pdVar4;
      fVar13 = (float)pdVar4[1];
      fVar20 = (float)*(double *)(lVar7 + lVar9);
      fVar21 = (float)((double *)(lVar7 + lVar9))[1];
    }
  }
  else {
    if (*(char *)(lVar5 + 0x118) == '\0') {
      plVar6 = (longlong *)(*(longlong *)(lVar5 + 0xb8) + 0xc0);
    }
    else {
      plVar6 = (longlong *)(lVar5 + 0x108);
    }
    lVar7 = *plVar6;
LAB_1406cf71e:
    lVar9 = lVar9 * 0x30;
    pfVar3 = (float *)(lVar7 + lVar9);
    fVar20 = *pfVar3;
    fVar21 = pfVar3[1];
    fVar11 = pfVar3[2];
    fVar13 = pfVar3[3];
    pfVar3 = (float *)(lVar7 + 0x10 + lVar9);
    fVar18 = *pfVar3;
    fVar19 = pfVar3[1];
    fVar14 = pfVar3[2];
    fVar15 = pfVar3[3];
    pfVar3 = (float *)(lVar7 + 0x20 + lVar9);
    fVar16 = *pfVar3;
    fVar17 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar12 = pfVar3[3];
  }
  lVar7 = *(longlong *)(param_1 + 2);
  lVar9 = (longlong)*param_1 * 0x30;
  pfVar3 = (float *)(lVar7 + lVar9);
  *pfVar3 = fVar20;
  pfVar3[1] = fVar21;
  pfVar3[2] = fVar11;
  pfVar3[3] = fVar13;
  pfVar3 = (float *)(lVar7 + 0x10 + lVar9);
  *pfVar3 = fVar18;
  pfVar3[1] = fVar19;
  pfVar3[2] = fVar14;
  pfVar3[3] = fVar15;
  pfVar3 = (float *)(lVar7 + 0x20 + lVar9);
  *pfVar3 = fVar16;
  pfVar3[1] = fVar17;
  pfVar3[2] = fVar10;
  pfVar3[3] = fVar12;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
  iVar8 = *param_1;
LAB_1406cf75f:
  return (undefined *)((longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 2));
}



// FUNCTION 1406cf856 FUN_1406cf856 body=2469 status=ok
// SIG undefined FUN_1406cf856(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1406cf856(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  double *pdVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar21;
  float fVar23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  float fVar41;
  float fVar43;
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa9848) && (FUN_144b3d300(&DAT_14caa9848), DAT_14caa9848 == -1)) {
    DAT_14caa9838 = 0;
    uRam000000014caa9840 = 0;
    atexit((_func_5014 *)&LAB_14327b9a7);
    _Init_thread_footer(&DAT_14caa9848);
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  plVar11 = &DAT_14caa9838;
  if (((lVar6 == 0) || (*(int *)(param_1 + 0x10) == 0)) ||
     (plVar11 = (longlong *)(param_1 + 8), (*(byte *)(param_1 + 4) & 2) == 0)) goto LAB_1406d0131;
  if (*(longlong *)(lVar6 + 0xa48) == 0) {
    lVar12 = *(longlong *)(*(longlong *)(lVar6 + 0x660) + 0x218);
    plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x660) + 0x220);
    if (plVar7 == (longlong *)0x0) goto LAB_1406cf93e;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    iVar10 = *(int *)(lVar12 + 200);
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
  else {
    lVar12 = *(longlong *)(*(longlong *)(lVar6 + 0xa48) + 0xb8);
LAB_1406cf93e:
    iVar10 = *(int *)(lVar12 + 200);
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x660);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x1f8) != iVar10)) {
    FUN_1474a5948(*(longlong *)(param_1 + 0x18),plVar11);
  }
  else if (0 < iVar10) {
    lVar12 = 0;
    do {
      uVar14 = *(uint *)(*(longlong *)(lVar6 + 0x1f0) + lVar12 * 4);
      lVar13 = (longlong)(int)uVar14;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa48);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x660);
        lVar9 = *(longlong *)(lVar8 + 0x218);
        local_158 = *(longlong **)(lVar8 + 0x220);
        if (local_158 == (longlong *)0x0) {
          iVar10 = *(int *)(*(longlong *)(lVar9 + 0x120) + lVar13 * 4);
        }
        else {
          LOCK();
          *(int *)(local_158 + 1) = (int)local_158[1] + 1;
          UNLOCK();
          iVar10 = *(int *)(*(longlong *)(lVar9 + 0x120) + lVar13 * 4);
          LOCK();
          plVar7 = local_158 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_158)();
            LOCK();
            piVar2 = (int *)((longlong)local_158 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_158 + 0x10))();
            }
          }
        }
      }
      else {
        iVar10 = -1;
        if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar8 + 0xf0))) {
          lVar9 = lVar8 + 0xd8;
          if (*(longlong *)(lVar8 + 0xe8) != 0) {
            lVar9 = *(longlong *)(lVar8 + 0xe8);
          }
          if ((*(uint *)(lVar9 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0) {
            iVar10 = *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0xb8) + 0x120) +
                             (ulonglong)uVar14 * 4);
          }
        }
      }
      lVar8 = *(longlong *)(param_1 + 0x18);
      lVar9 = *(longlong *)(lVar8 + 0xa48);
      if (lVar9 == 0) {
        if (*(int *)(lVar8 + 0x770) < 1) {
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x660) + 0x218);
          plVar7 = *(longlong **)(*(longlong *)(lVar8 + 0x660) + 0x220);
          if (plVar7 == (longlong *)0x0) {
            lVar8 = *(longlong *)(lVar9 + 0xc0);
            lVar9 = lVar13 * 0x30;
            auVar30 = *(undefined1 (*) [16])(lVar8 + lVar9);
            auVar53 = *(undefined1 (*) [16])(lVar8 + 0x10 + lVar9);
            pfVar4 = (float *)(lVar8 + 0x20 + lVar9);
            fVar39 = *pfVar4;
            fVar34 = pfVar4[1];
            fVar37 = pfVar4[2];
            fVar25 = pfVar4[3];
          }
          else {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            lVar8 = *(longlong *)(lVar9 + 0xc0);
            lVar9 = lVar13 * 0x30;
            auVar30 = *(undefined1 (*) [16])(lVar8 + lVar9);
            auVar53 = *(undefined1 (*) [16])(lVar8 + 0x10 + lVar9);
            pfVar4 = (float *)(lVar8 + 0x20 + lVar9);
            fVar39 = *pfVar4;
            fVar34 = pfVar4[1];
            fVar37 = pfVar4[2];
            fVar25 = pfVar4[3];
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
        else {
          lVar8 = *(longlong *)(lVar8 + 0x768);
          lVar9 = lVar13 * 0x60;
          pdVar5 = (double *)(lVar8 + 0x50 + lVar9);
          fVar37 = (float)*pdVar5;
          fVar25 = (float)pdVar5[1];
          pdVar5 = (double *)(lVar8 + 0x40 + lVar9);
          fVar39 = (float)*pdVar5;
          fVar34 = (float)pdVar5[1];
          pdVar5 = (double *)(lVar8 + 0x30 + lVar9);
          auVar53._12_4_ = (float)pdVar5[1];
          auVar53._8_4_ = (float)*pdVar5;
          pdVar5 = (double *)(lVar8 + 0x20 + lVar9);
          auVar53._0_4_ = (float)*pdVar5;
          auVar53._4_4_ = (float)pdVar5[1];
          pdVar5 = (double *)(lVar8 + 0x10 + lVar9);
          auVar30._12_4_ = (float)pdVar5[1];
          auVar30._8_4_ = (float)*pdVar5;
          auVar30._0_4_ = (float)*(double *)(lVar8 + lVar9);
          auVar30._4_4_ = (float)((double *)(lVar8 + lVar9))[1];
        }
      }
      else {
        if (*(char *)(lVar9 + 0x118) == '\0') {
          plVar7 = (longlong *)(*(longlong *)(lVar9 + 0xb8) + 0xc0);
        }
        else {
          plVar7 = (longlong *)(lVar9 + 0x108);
        }
        lVar8 = *plVar7;
        lVar9 = (longlong)(int)uVar14 * 0x30;
        auVar30 = *(undefined1 (*) [16])(lVar8 + lVar9);
        auVar53 = *(undefined1 (*) [16])(lVar8 + 0x10 + lVar9);
        pfVar4 = (float *)(lVar8 + 0x20 + lVar9);
        fVar39 = *pfVar4;
        fVar34 = pfVar4[1];
        fVar37 = pfVar4[2];
        fVar25 = pfVar4[3];
      }
      lVar8 = *plVar11;
      fVar15 = fVar39;
      fVar21 = fVar34;
      fVar23 = fVar37;
      if (iVar10 != -1) {
        lVar9 = (longlong)iVar10 * 0x30;
        pauVar3 = (undefined1 (*) [16])(lVar8 + lVar9);
        auVar17 = *(undefined1 (*) [16])(lVar8 + 0x20 + lVar9);
        fVar38 = auVar17._0_4_;
        fVar32 = auVar17._4_4_;
        fVar36 = auVar17._8_4_;
        fVar33 = auVar17._12_4_;
        auVar16._4_4_ = fVar34;
        auVar16._0_4_ = fVar39;
        auVar16._12_4_ = fVar25;
        auVar16._8_4_ = fVar37;
        auVar17 = minps(auVar16,auVar17);
        auVar18._4_4_ = -(uint)(auVar17._4_4_ < 0.0);
        auVar18._0_4_ = -(uint)(auVar17._0_4_ < 0.0);
        auVar18._8_4_ = -(uint)(auVar17._8_4_ < 0.0);
        auVar18._12_4_ = -(uint)(auVar17._12_4_ < 0.0);
        iVar10 = movmskps((int)lVar9,auVar18);
        fVar22 = auVar30._0_4_;
        fVar24 = auVar30._4_4_;
        fVar26 = auVar30._8_4_;
        fVar48 = auVar30._12_4_;
        fVar49 = auVar53._0_4_;
        fVar50 = auVar53._4_4_;
        fVar51 = auVar53._8_4_;
        if (iVar10 == 0) {
          auVar30 = *pauVar3;
          fVar27 = auVar30._12_4_;
          fVar41 = auVar30._0_4_;
          fVar43 = auVar30._4_4_;
          fVar44 = auVar30._8_4_;
          fVar49 = fVar49 * fVar38;
          fVar50 = fVar50 * fVar32;
          fVar51 = fVar51 * fVar36;
          fVar45 = auVar53._12_4_ * fVar33;
          fVar28 = fVar50 * fVar41 - fVar49 * fVar43;
          fVar31 = fVar51 * fVar43 - fVar50 * fVar44;
          fVar47 = fVar49 * fVar44 - fVar51 * fVar41;
          fVar40 = fVar45 * fVar27 - fVar45 * fVar27;
          fVar28 = fVar28 + fVar28;
          fVar31 = fVar31 + fVar31;
          fVar47 = fVar47 + fVar47;
          fVar40 = fVar40 + fVar40;
          auVar30._4_4_ =
               fVar44 * fVar22 * 1.0 +
               fVar43 * fVar48 * 1.0 + fVar41 * fVar26 * -1.0 + fVar24 * fVar27;
          auVar30._0_4_ =
               fVar44 * fVar24 * -1.0 +
               fVar43 * fVar26 * 1.0 + fVar41 * fVar48 * 1.0 + fVar22 * fVar27;
          fVar15 = fVar39 * fVar38;
          fVar21 = fVar34 * fVar32;
          fVar23 = fVar37 * fVar36;
          fVar25 = fVar25 * fVar33;
          auVar30._8_4_ =
               fVar44 * fVar48 * 1.0 +
               fVar43 * fVar22 * -1.0 + fVar41 * fVar24 * 1.0 + fVar26 * fVar27;
          auVar30._12_4_ =
               fVar44 * fVar26 * -1.0 +
               fVar43 * fVar24 * -1.0 + fVar41 * fVar22 * -1.0 + fVar48 * fVar27;
          auVar53._4_4_ =
               (fVar31 * fVar44 - fVar28 * fVar41) + fVar27 * fVar47 + fVar50 +
               *(float *)(pauVar3[1] + 4);
          auVar53._0_4_ =
               (fVar28 * fVar43 - fVar47 * fVar44) + fVar27 * fVar31 + fVar49 + *(float *)pauVar3[1]
          ;
          auVar53._8_4_ =
               (fVar47 * fVar41 - fVar31 * fVar43) + fVar27 * fVar28 + fVar51 +
               *(float *)(pauVar3[1] + 8);
          auVar53._12_4_ =
               (fVar40 * fVar27 - fVar40 * fVar27) + fVar27 * fVar40 + fVar45 +
               *(float *)(pauVar3[1] + 0xc);
        }
        else {
          fVar15 = fVar39 * fVar38;
          fVar21 = fVar34 * fVar32;
          fVar23 = fVar37 * fVar36;
          fVar25 = fVar25 * fVar33;
          local_158 = (longlong *)CONCAT44(fVar21,fVar15);
          fVar27 = *(float *)*pauVar3;
          fVar28 = *(float *)(*pauVar3 + 4);
          fVar31 = *(float *)(*pauVar3 + 8);
          fVar47 = *(float *)(*pauVar3 + 0xc);
          fVar44 = fVar27 + fVar27;
          fVar45 = fVar28 + fVar28;
          fVar46 = fVar31 + fVar31;
          fVar40 = fVar47 * (fVar47 + fVar47);
          auVar52._0_4_ = (1.0 - (fVar31 * fVar46 + fVar28 * fVar45)) * fVar38;
          auVar52._4_4_ = (1.0 - (fVar31 * fVar46 + fVar27 * fVar44)) * fVar32;
          auVar52._8_4_ = (1.0 - (fVar28 * fVar45 + fVar27 * fVar44)) * fVar36;
          auVar52._12_4_ = (0.0 - (fVar40 + fVar40)) * fVar33;
          fVar41 = (fVar45 * fVar27 + fVar46 * fVar47) * fVar38;
          auVar29._4_4_ = (fVar46 * fVar28 + fVar44 * fVar47) * fVar32;
          auVar29._0_4_ = fVar41;
          fVar43 = (fVar46 * fVar27 + fVar45 * fVar47) * fVar36;
          fVar32 = (fVar45 * fVar27 - fVar46 * fVar47) * fVar32;
          fVar36 = (fVar46 * fVar28 - fVar44 * fVar47) * fVar36;
          fVar38 = (fVar46 * fVar27 - fVar45 * fVar47) * fVar38;
          auVar53 = blendps(auVar52,ZEXT816(0),8);
          auVar29._8_4_ = fVar43;
          auVar29._12_4_ = (fVar44 * fVar27 + fVar44 * fVar47) * fVar33;
          auVar30 = insertps(auVar29,auVar29,0x4c);
          fVar27 = auVar30._0_4_;
          fVar47 = auVar30._8_4_;
          fVar46 = auVar53._8_4_;
          fVar54 = auVar53._12_4_;
          auVar30 = insertps(pauVar3[1],ZEXT816(0x3f800000),0x30);
          fVar44 = fVar24 + fVar24;
          fVar45 = fVar26 + fVar26;
          fVar33 = fVar22 * (fVar22 + fVar22);
          fVar28 = (1.0 - (fVar26 * fVar45 + fVar24 * fVar44)) * fVar39;
          fVar31 = (1.0 - (fVar26 * fVar45 + fVar33)) * fVar34;
          fVar40 = (1.0 - (fVar24 * fVar44 + fVar33)) * fVar37;
          fVar33 = (fVar22 + fVar22) * fVar48;
          fVar55 = (fVar44 * fVar22 + fVar45 * fVar48) * fVar39;
          fVar56 = (fVar45 * fVar24 + fVar33) * fVar34;
          fVar57 = (fVar45 * fVar22 + fVar44 * fVar48) * fVar37;
          fVar34 = (fVar44 * fVar22 - fVar45 * fVar48) * fVar34;
          fVar37 = (fVar45 * fVar24 - fVar33) * fVar37;
          fVar39 = (fVar45 * fVar22 - fVar44 * fVar48) * fVar39;
          local_108 = fVar51 * fVar43 + fVar50 * fVar32 + fVar49 * auVar52._0_4_ + auVar30._0_4_;
          fStack_104 = fVar51 * fVar36 + fVar50 * auVar52._4_4_ + fVar49 * fVar41 + auVar30._4_4_;
          fStack_100 = fVar51 * fVar46 + fVar50 * fVar27 + fVar49 * fVar38 + auVar30._8_4_;
          fStack_fc = fVar51 * fVar54 + fVar50 * fVar47 + fVar49 * 0.0 + auVar30._12_4_;
          fVar33 = auVar30._0_4_ * 0.0;
          fVar22 = auVar30._4_4_ * 0.0;
          fVar24 = auVar30._8_4_ * 0.0;
          fVar26 = auVar30._12_4_ * 0.0;
          fVar51 = fVar39 * fVar43 + fVar55 * fVar32 + fVar28 * auVar52._0_4_ + fVar33;
          fVar44 = fVar39 * fVar36 + fVar55 * auVar52._4_4_ + fVar28 * fVar41 + fVar22;
          fVar45 = fVar39 * fVar46 + fVar55 * fVar27 + fVar28 * fVar38 + fVar24;
          fStack_12c = fVar39 * fVar54 + fVar55 * fVar47 + fVar28 * 0.0 + fVar26;
          fVar48 = fVar56 * fVar43 + fVar31 * fVar32 + fVar34 * auVar52._0_4_ + fVar33;
          fVar49 = fVar56 * fVar36 + fVar31 * auVar52._4_4_ + fVar34 * fVar41 + fVar22;
          fVar50 = fVar56 * fVar46 + fVar31 * fVar27 + fVar34 * fVar38 + fVar24;
          fStack_11c = fVar56 * fVar54 + fVar31 * fVar47 + fVar34 * 0.0 + fVar26;
          fVar33 = fVar40 * fVar43 + fVar37 * fVar32 + fVar57 * auVar52._0_4_ + fVar33;
          fVar22 = fVar40 * fVar36 + fVar37 * auVar52._4_4_ + fVar57 * fVar41 + fVar22;
          fVar24 = fVar40 * fVar46 + fVar37 * fVar27 + fVar57 * fVar38 + fVar24;
          fVar38 = fVar45 * fVar45 + fVar51 * fVar51 + fVar44 * fVar44;
          fVar39 = fVar50 * fVar50 + fVar48 * fVar48 + fVar49 * fVar49;
          fVar34 = fVar24 * fVar24 + fVar33 * fVar33 + fVar22 * fVar22;
          uVar14 = -(uint)(0.0 <= fVar38 + -1e-08);
          fVar38 = (float)(~uVar14 & 0x3f800000 | (uint)(1.0 / SQRT(fVar38)) & uVar14);
          uVar14 = -(uint)(0.0 <= fVar39 + -1e-08);
          fVar39 = (float)(~uVar14 & 0x3f800000 | (uint)(1.0 / SQRT(fVar39)) & uVar14);
          uVar14 = -(uint)(0.0 <= fVar34 + -1e-08);
          fVar34 = (float)(~uVar14 & 0x3f800000 | (uint)(1.0 / SQRT(fVar34)) & uVar14);
          auVar19._4_4_ = -(uint)(0.0 <= fVar21);
          auVar19._0_4_ = -(uint)(0.0 <= fVar15);
          auVar19._8_4_ = -(uint)(0.0 <= fVar23);
          auVar19._12_4_ = -(uint)(0.0 <= fVar25);
          auVar30 = blendvps(_DAT_149f63320,_DAT_149e1ef10,auVar19);
          fStack_130 = auVar30._0_4_;
          local_138 = fVar51 * fVar38 * fStack_130;
          fStack_134 = fVar44 * fVar38 * fStack_130;
          fStack_130 = fVar38 * fVar45 * fStack_130;
          local_128 = auVar30._4_4_;
          fStack_120 = fVar39 * fVar50 * local_128;
          fStack_124 = fVar49 * fVar39 * local_128;
          local_128 = fVar48 * fVar39 * local_128;
          fVar39 = auVar30._8_4_;
          fStack_114 = fVar22 * fVar34 * fVar39;
          local_118 = fVar39 * fVar33 * fVar34;
          fStack_110 = fVar34 * fVar24 * fVar39;
          fStack_10c = fVar40 * fVar54 + fVar37 * fVar47 + fVar57 * 0.0 + fVar26;
          fStack_150 = fVar23;
          fStack_14c = fVar25;
          FUN_14066c2ac(local_148,&local_138);
          fVar39 = local_148._12_4_;
          fVar38 = local_148._0_4_;
          fVar32 = local_148._4_4_;
          fVar36 = local_148._8_4_;
          fVar34 = fVar38 * fVar38 + fVar32 * fVar32;
          fVar37 = fVar36 * fVar36 + fVar39 * fVar39;
          auVar35._0_4_ = fVar37 + fVar34;
          auVar35._4_4_ = fVar37 + fVar34;
          auVar35._8_4_ = fVar34 + fVar37;
          auVar35._12_4_ = fVar34 + fVar37;
          auVar20._4_4_ = -(uint)(1e-08 <= auVar35._4_4_);
          auVar20._0_4_ = -(uint)(1e-08 <= auVar35._0_4_);
          auVar20._8_4_ = -(uint)(1e-08 <= auVar35._8_4_);
          auVar20._12_4_ = -(uint)(1e-08 <= auVar35._12_4_);
          auVar30 = sqrtps(auVar35,auVar35);
          auVar30 = divps(_DAT_1499314a0,auVar30);
          auVar42._0_4_ = auVar30._0_4_ * fVar38;
          auVar42._4_4_ = auVar30._4_4_ * fVar32;
          auVar42._8_4_ = auVar30._8_4_ * fVar36;
          auVar42._12_4_ = auVar30._12_4_ * fVar39;
          auVar30 = blendvps(_DAT_149932320,auVar42,auVar20);
          auVar17._4_4_ = fStack_104;
          auVar17._0_4_ = local_108;
          auVar17._8_4_ = fStack_100;
          auVar17._12_4_ = fStack_fc;
          auVar53 = blendps(auVar17,ZEXT816(0),8);
          lVar8 = *plVar11;
        }
      }
      lVar13 = lVar13 * 0x30;
      *(undefined1 (*) [16])(lVar8 + lVar13) = auVar30;
      *(undefined1 (*) [16])(lVar8 + 0x10 + lVar13) = auVar53;
      pfVar4 = (float *)(lVar8 + 0x20 + lVar13);
      *pfVar4 = fVar15;
      pfVar4[1] = fVar21;
      pfVar4[2] = fVar23;
      pfVar4[3] = fVar25;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(lVar6 + 0x1f8));
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
LAB_1406d0131:
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
}



// FUNCTION 1406d01fc FUN_1406d01fc body=55 status=ok
// SIG undefined FUN_1406d01fc(void)

void FUN_1406d01fc(longlong *param_1)

{
  FUN_1406d0234(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406d0234 FUN_1406d0234 body=121 status=ok
// SIG undefined FUN_1406d0234(void)

void FUN_1406d0234(longlong param_1,int param_2)

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



// FUNCTION 1406d02ae FUN_1406d02ae body=261 status=ok
// SIG undefined FUN_1406d02ae(void)

void FUN_1406d02ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171010;
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d03ec(param_1 + 0x5d);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d06c4(param_1 + 0x53);
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d06c4(param_1 + 0x49);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d03b4(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4f4a(param_1);
  return;
}



// FUNCTION 1406d03b4 FUN_1406d03b4 body=55 status=ok
// SIG undefined FUN_1406d03b4(void)

void FUN_1406d03b4(longlong *param_1)

{
  FUN_1406d04a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406d03ec FUN_1406d03ec body=55 status=ok
// SIG undefined FUN_1406d03ec(void)

void FUN_1406d03ec(longlong *param_1)

{
  FUN_1406d0424(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406d0424 FUN_1406d0424 body=123 status=ok
// SIG undefined FUN_1406d0424(void)

void FUN_1406d0424(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1406d04a0 FUN_1406d04a0 body=546 status=ok
// SIG undefined FUN_1406d04a0(void)

void FUN_1406d04a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_1406d05a1;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x70;
      *(undefined4 *)(lVar11 + 0x60 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x58 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_1406d06c4(lVar11 + lVar10 + 0x18);
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar11 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar11 == lVar10) goto LAB_1406d05a1;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1406d05a1:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140875b54(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar3 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1406d06c4 FUN_1406d06c4 body=55 status=ok
// SIG undefined FUN_1406d06c4(void)

void FUN_1406d06c4(longlong *param_1)

{
  FUN_1406d06fc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406d06fc FUN_1406d06fc body=121 status=ok
// SIG undefined FUN_1406d06fc(void)

void FUN_1406d06fc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1406d0776 FUN_1406d0776 body=216 status=ok
// SIG undefined FUN_1406d0776(void)

void FUN_1406d0776(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_21);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    FUN_1400337aa(lVar1);
    lVar3 = FUN_1406d0862();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d0862 FUN_1406d0862 body=228 status=ok
// SIG undefined FUN_1406d0862(void)

longlong FUN_1406d0862(void)

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
  if (DAT_14cb09aa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145892f94;
    local_38 = &LAB_147d51820;
    local_40 = FUN_1417f170d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x268;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMesh",&DAT_14cb09aa0,FUN_14640597c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb09aa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d0948 FUN_1406d0948 body=662 status=ok
// SIG undefined FUN_1406d0948(void)

void FUN_1406d0948(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint5 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined **local_f8;
  ulonglong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  longlong *local_a0;
  longlong local_80;
  char *local_68;
  ulonglong local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((param_2 != 0) && ((*(uint *)(param_1 + 0x28) & 2) == 0)) &&
     ((*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe8) ||
      (((*(int *)(param_1 + 0xe8) != *(int *)(param_2 + 0xec) ||
        (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xf0))) ||
       (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf4))))))) {
    uVar3 = *(undefined4 *)(param_2 + 0xec);
    uVar4 = *(undefined4 *)(param_2 + 0xf0);
    uVar5 = *(undefined4 *)(param_2 + 0xf4);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xe8) = uVar3;
    *(undefined4 *)(param_1 + 0xec) = uVar4;
    *(undefined4 *)(param_1 + 0xf0) = uVar5;
    FUN_143831374(param_1);
    lVar7 = FUN_14383145c(param_1,DAT_14cb1d500);
    if (((lVar7 != 0) && ((*(uint *)(param_1 + 0xe0) & 4) == 0)) &&
       (*(char *)(lVar7 + 0x13) == '\0')) {
      local_100 = param_1 + 0x80;
      pcVar8 = (char *)FUN_140fc05d0(lVar7,1);
      uVar2 = *(uint5 *)(lVar7 + 8);
      FUN_144869430(&local_f8);
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf | 1;
      local_f8 = &PTR_FUN_149e447c0;
      pcVar1 = (char *)*local_f0 + 1;
      if (pcVar1 <= (char *)local_f0[1]) {
        cVar6 = *(char *)*local_f0;
        *local_f0 = (ulonglong)pcVar1;
      }
      else {
        cVar6 = *pcVar8;
      }
      local_60 = (ulonglong)(pcVar1 > (char *)local_f0[1]);
      local_ce = local_ce & 0xfd | (cVar6 == '\0') * '\x02';
      local_68 = pcVar8;
      local_58 = (ulonglong)uVar2;
      FUN_1436364e8(&local_f8,param_1 + 0x30);
      FUN_1403b0476(&local_f8,param_1 + 0x40);
      FUN_1436364e8(&local_f8,param_1 + 0x50);
      FUN_1403b0476(&local_f8,param_1 + 0x60);
      FUN_1403b0476(&local_f8,param_1 + 0x70);
      FUN_140119d96(&local_f8,local_100);
      *(undefined1 *)(lVar7 + 0x13) = 0;
      if ((*(byte *)(lVar7 + 0x14) & 8) != 0) {
        FUN_1400ea36e(lVar7,lVar7);
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (char *)0x0;
      }
      local_f8 = &PTR__purecall_149e35f70;
      if (local_a0 != (longlong *)0x0) {
        if (*local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      if (local_80 != 0) {
        if (*(longlong *)(local_80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_80);
      }
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d0be0 FUN_1406d0be0 body=404 status=ok
// SIG undefined FUN_1406d0be0(void)

void FUN_1406d0be0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  code *local_30;
  undefined1 **local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_30;
      local_30 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_48 = param_1;
      local_20 = FUN_1406d1414();
      if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_20);
      }
      local_28 = &local_40;
      local_40 = &LAB_1442bb462;
      local_38 = &local_48;
      local_30 = FUN_1442bb41e;
      FUN_1406d0d76(lVar1 + 0x3b38,&local_30,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d0d76 FUN_1406d0d76 body=155 status=ok
// SIG undefined FUN_1406d0d76(void)

void FUN_1406d0d76(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_28 = &local_40;
  local_38 = param_2[1];
  local_30 = FUN_140dc504c;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lVar1 = FUN_1406d132e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_3;
      goto LAB_1406d0de6;
    }
  }
  lVar2 = 0;
LAB_1406d0de6:
  FUN_1406d0e12(param_1,lVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d0e12 FUN_1406d0e12 body=149 status=ok
// SIG undefined FUN_1406d0e12(void)

void FUN_1406d0e12(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    param_2 = FUN_1406d1670();
  }
  plVar2 = (longlong *)FUN_1406d0ea8(param_1,param_2);
  lVar1 = plVar2[2];
  *(undefined1 *)(plVar2 + 2) = 1;
  if (0 < (int)plVar2[1]) {
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(*plVar2 + lVar3 * 8);
      (*(code *)*param_3)(param_3[1],&local_38);
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)plVar2[1]);
  }
  *(char *)(plVar2 + 2) = (char)lVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d0ea8 FUN_1406d0ea8 body=1156 status=ok
// SIG undefined FUN_1406d0ea8(void)

ulonglong FUN_1406d0ea8(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  uint *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  code *local_60;
  longlong **local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = param_2;
  if (DAT_14c950d78 == 0) {
    local_a0 = &local_60;
    local_60 = FUN_1449e2820;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_1468b50ee;
    local_b0 = FUN_1427f23a3;
    local_b8 = L"Engine";
    local_c0 = 0;
    local_c8 = 0x10004001;
    local_d0 = 8;
    local_d8 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
    if (DAT_14c950d78 != 0) goto LAB_1406d0eeb;
LAB_1406d12f7:
    bVar20 = false;
  }
  else {
LAB_1406d0eeb:
    if (*(int *)(param_2 + 0x38) < *(int *)(DAT_14c950d78 + 0x38)) goto LAB_1406d12f7;
    bVar20 = *(longlong *)
              (*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) ==
             DAT_14c950d78 + 0x30;
  }
  plVar11 = (longlong *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar15 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x98);
    }
    iVar6 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                              4);
    if (iVar6 != -1) {
      lVar15 = *plVar11;
      iVar10 = iVar6;
      do {
        if (*(ulonglong *)(lVar15 + (longlong)iVar10 * 0x18) == param_2) goto LAB_1406d0f7c;
        iVar10 = *(int *)(lVar15 + (longlong)iVar10 * 0x18 + 0x10);
      } while (iVar10 != -1);
    }
  }
  local_70 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_70 = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_58 = &local_70;
  local_60 = (code *)&local_68;
  uVar19 = 0;
  FUN_140197860(plVar11,&local_4c,&local_60,0);
  plVar3 = local_70;
  lVar15 = *plVar11;
  if (local_70 != (longlong *)0x0) {
    if (*local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
  }
  puVar18 = (ulonglong *)(lVar15 + (longlong)local_4c * 0x18 + 8);
  puVar16 = (uint *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x30);
  uVar14 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar6 != 0) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar16;
    }
    uVar5 = *puVar12;
    if (uVar5 == 0) {
      iVar10 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar10 = iVar6 + -1;
      }
      uVar19 = 0;
      uVar14 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar14 = uVar19;
      }
      do {
        if (uVar14 == uVar19) goto LAB_1406d0f94;
        iVar17 = iVar17 + 0x20;
        uVar5 = puVar12[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar19 = 0;
    }
    uVar14 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 < iVar6) {
    uVar5 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(param_1 + 8);
      lVar13 = *(longlong *)(lVar15 + (longlong)iVar10 * 0x18);
      if (bVar20) {
        local_88 = puVar16;
        cVar4 = FUN_144a7ff9e();
        puVar16 = local_88;
        if (cVar4 != '\0') {
          lVar15 = *(longlong *)(param_1 + 8);
          goto LAB_1406d117d;
        }
      }
      else if (((local_68 != 0) && (*(int *)(local_68 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(local_68 + 0x38) * 8)
               == local_68 + 0x30)) {
LAB_1406d117d:
        plVar11 = (longlong *)*puVar18;
        uVar2 = *(undefined8 *)(lVar15 + 8 + (longlong)iVar10 * 0x18);
        lVar15 = (longlong)(int)plVar11[1];
        uVar7 = (int)plVar11[1] + 1;
        *(uint *)(plVar11 + 1) = uVar7;
        if (*(uint *)((longlong)plVar11 + 0xc) < uVar7) {
          local_88 = puVar16;
          local_80 = lVar15;
          local_78 = plVar11;
          FUN_14019835c(plVar11,lVar15);
          plVar11 = local_78;
          lVar15 = local_80;
          puVar16 = local_88;
        }
        *(undefined8 *)(*plVar11 + lVar15 * 8) = uVar2;
      }
      uVar5 = uVar5 & ~(uint)uVar14;
      puVar12 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar12 = puVar16;
      }
      iVar6 = *(int *)(param_1 + 0x30);
      iVar10 = (int)uVar19;
      lVar15 = (longlong)iVar10;
      uVar7 = puVar12[lVar15] & uVar5;
      if (uVar7 == 0) {
        iVar8 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar8 = iVar6 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar8 <= iVar10) break;
        lVar13 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar7 = puVar12[lVar15 + lVar13 + 1];
          if (uVar7 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar15 == lVar13) goto LAB_1406d0f94;
        }
        uVar19 = (ulonglong)(iVar10 + (int)lVar13 + 1);
        uVar5 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar14 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar6);
  }
LAB_1406d0f94:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return *puVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar6 = (int)puVar18[2], iVar6 != -1) {
LAB_1406d0f7c:
    puVar18 = (ulonglong *)(lVar15 + (longlong)iVar6 * 0x18);
    if (*puVar18 == param_2) goto LAB_1406d0f90;
  }
  puVar18 = (ulonglong *)0x0;
LAB_1406d0f90:
  puVar18 = puVar18 + 1;
  goto LAB_1406d0f94;
}



// FUNCTION 1406d132e FUN_1406d132e body=228 status=ok
// SIG undefined FUN_1406d132e(void)

longlong FUN_1406d132e(void)

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
  if (DAT_14cbadfa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_148c3c9ef;
    local_40 = &LAB_1459a6789;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerControllerSubsystem",&DAT_14cbadfa0,&DAT_148c3c9ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbadfa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d1414 FUN_1406d1414 body=228 status=ok
// SIG undefined FUN_1406d1414(void)

longlong FUN_1406d1414(void)

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
  if (DAT_14cbb2648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c591c3;
    local_40 = FUN_1465f6310;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Message",&DAT_14cbb2648,&DAT_148c591c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d14fa FUN_1406d14fa body=373 status=ok
// SIG undefined FUN_1406d14fa(void)

longlong FUN_1406d14fa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    if (DAT_14cae9568 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1417de738;
      local_20 = &LAB_145893408;
      local_28 = &LAB_1458cbbd2;
      local_38 = &LAB_147ba21f1;
      local_40 = &LAB_1463e9233;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_1406d1669;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      goto LAB_1406d155b;
    }
    lVar4 = FUN_144a75eb4();
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar3 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1406d155b;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar3 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar3 = lVar1;
        }
        goto LAB_1406d155b;
      }
    }
  }
LAB_1406d1669:
  lVar3 = 0;
LAB_1406d155b:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1406d1670 FUN_1406d1670 body=221 status=ok
// SIG undefined FUN_1406d1670(void)

longlong FUN_1406d1670(void)

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
  if (DAT_14cb0ad18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d67b33;
    local_40 = FUN_146406c23;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"Subsystem",&DAT_14cb0ad18,&DAT_147d67b32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0ad18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d174e FUN_1406d174e body=72 status=ok
// SIG undefined FUN_1406d174e(void)

undefined8
FUN_1406d174e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((char)param_1[3] == '\x01') {
    uVar1 = FUN_1406d1843(param_2);
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = (char)uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001406d1789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,uVar1,param_3,*(code **)(*param_1 + 0x18));
    return uVar2;
  }
  return 0;
}



// FUNCTION 1406d1796 FUN_1406d1796 body=173 status=ok
// SIG undefined FUN_1406d1796(void)

longlong FUN_1406d1796(longlong param_1,byte param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (param_2 < 6) {
    lVar1 = param_1 + (ulonglong)param_2 * 0x38;
    lVar2 = FUN_1402d1dc0(lVar1 + 0x20);
    if (param_3 != (undefined8 *)0x0 && lVar2 != 0) {
      iVar3 = *(int *)(lVar1 + 0x50);
      if (iVar3 < 1) {
        return lVar2;
      }
      uVar5 = *(undefined8 *)(lVar1 + 0x48);
LAB_1406d17de:
      *param_3 = uVar5;
      *(int *)(param_3 + 1) = iVar3;
      return lVar2;
    }
    if (lVar2 != 0) {
      return lVar2;
    }
    if (*(char *)(param_1 + 0x19) == '\x01') {
      lVar2 = FUN_1402d1dc0(param_1 + 0x20);
      if (lVar2 != 0 && param_3 != (undefined8 *)0x0) {
        uVar4 = 0;
        if (0 < *(int *)(lVar1 + 0x50)) {
          uVar4 = (ulonglong)param_2;
        }
        iVar3 = *(int *)(param_1 + 0x50 + uVar4 * 0x38);
        if (iVar3 < 1) {
          return lVar2;
        }
        uVar5 = *(undefined8 *)(uVar4 * 0x38 + param_1 + 0x20 + 0x28);
        goto LAB_1406d17de;
      }
      if (lVar2 != 0) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1406d1843 FUN_1406d1843 body=233 status=ok
// SIG undefined FUN_1406d1843(void)

undefined1 FUN_1406d1843(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[2] == 0x3002) {
    local_48 = param_1[1];
    FUN_1446dcdd4(local_40);
    plVar3 = (longlong *)FUN_14058374a(local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (plVar3 != (longlong *)0x0) {
LAB_1406d18cc:
      uVar1 = *(undefined1 *)((longlong)plVar3 + 0x121);
      goto LAB_1406d18d2;
    }
  }
  else {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      uVar2 = FUN_1406d192e();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar5 = FUN_14018fb44();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) goto LAB_1406d18cc;
        }
      }
    }
  }
  uVar1 = 0;
LAB_1406d18d2:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d192e FUN_1406d192e body=228 status=ok
// SIG undefined FUN_1406d192e(void)

longlong FUN_1406d192e(void)

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
  if (DAT_14cb56c80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14863c521;
    local_40 = FUN_1464ba0bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageTypeInterface",&DAT_14cb56c80,&DAT_14863c520);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d1a14 FUN_1406d1a14 body=135 status=ok
// SIG undefined FUN_1406d1a14(void)

undefined8 FUN_1406d1a14(longlong *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x38 + lVar1;
        cVar2 = FUN_1401f8838(lVar5,param_2,0);
        if (cVar2 != '\0') {
          FUN_1406d1a9c(param_1,iVar4);
          return 1;
        }
        iVar4 = *(int *)(lVar5 + 0x30);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1406d1a9c FUN_1406d1a9c body=92 status=ok
// SIG undefined FUN_1406d1a9c(void)

void FUN_1406d1a9c(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x38 + 0x30);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1406d1af8(param_1,param_2,1);
  return;
}



// FUNCTION 1406d1af8 FUN_1406d1af8 body=136 status=ok
// SIG undefined FUN_1406d1af8(void)

void FUN_1406d1af8(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406d1b80 FUN_1406d1b80 body=1213 status=ok
// SIG undefined FUN_1406d1b80(void)

void FUN_1406d1b80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined **ppuVar8;
  longlong lVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = FUN_1406d203e(param_4,param_4 + 0x18);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x18) != param_1)) {
    local_138 = *(undefined8 *)(param_1 + 0xc0);
    uStack_130 = *(undefined8 *)(param_1 + 200);
    local_118 = (undefined4)param_5[0x24];
    local_128 = param_5[0x22];
    lStack_120 = param_5[0x23];
    uStack_114 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
    uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
    uStack_10c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
    uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
    local_100 = (undefined4)param_5[0x27];
    uStack_fc = *(undefined4 *)((longlong)param_5 + 0x13c);
    uStack_f8 = (undefined4)param_5[0x28];
    uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x144);
    local_f0 = (undefined4)param_5[0x29];
    uStack_ec = *(undefined4 *)((longlong)param_5 + 0x14c);
    uStack_e8 = (undefined4)param_5[0x2a];
    uStack_e4 = *(undefined4 *)((longlong)param_5 + 0x154);
    local_e0 = param_5[0x2b];
    local_d0 = (undefined4)param_5[0x2d];
    local_d8 = param_5[0x2c];
    local_c8 = 0;
    iVar4 = (int)param_5[0x2f];
    lVar7 = param_5[0x2e];
    local_c0 = CONCAT44(local_c0._4_4_,iVar4);
    if (iVar4 == 0) {
      local_c0 = 0;
    }
    else {
      FUN_14753cf4a(&local_c8,iVar4,0);
      FUN_14753cfbd(local_c8,lVar7,iVar4);
    }
    local_b8 = (void *)0x0;
    uVar5 = *(uint *)(param_5 + 0x31);
    pvVar6 = (void *)param_5[0x30];
    local_b0 = CONCAT44(local_b0._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      local_b0 = (ulonglong)uVar5;
    }
    else {
      FUN_1456c5740(&local_b8,uVar5,0);
      memcpy(local_b8,pvVar6,(longlong)(int)uVar5 << 3);
    }
    local_a8 = (undefined1)param_5[0x32];
    local_a0 = (void *)0x0;
    uVar5 = *(uint *)(param_5 + 0x34);
    pvVar6 = (void *)param_5[0x33];
    local_98 = CONCAT44(local_98._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      local_98 = (ulonglong)uVar5;
    }
    else {
      FUN_1447bda9e(&local_a0,uVar5,0);
      memcpy(local_a0,pvVar6,(longlong)(int)uVar5 << 2);
    }
    uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
    uStack_90 = (undefined5)param_5[0x35];
    local_8b = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
    local_40 = local_40 | 3;
    local_80 = &PTR_FUN_14b423b90;
    uStack_78 = param_1;
    local_70 = (undefined4)local_138;
    uStack_6c = local_138._4_4_;
    uStack_68 = (undefined4)uStack_130;
    uStack_64 = uStack_130._4_4_;
    local_60 = param_1 + 0x20;
    iVar4 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar4 + 1U) {
      FUN_140ac5684(param_5,iVar4);
    }
    lVar7 = *param_5;
    lVar9 = (longlong)iVar4 * 0xf0;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uStack_108;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
    *puVar1 = CONCAT44(uStack_114,local_118);
    puVar1[1] = CONCAT44(uStack_10c,uStack_110);
    *(longlong *)(lVar7 + lVar9) = local_128;
    ((longlong *)(lVar7 + lVar9))[1] = lStack_120;
    *(longlong *)(lVar7 + 0x48 + lVar9) = local_e0;
    puVar2 = (undefined4 *)(lVar7 + 0x38 + lVar9);
    *puVar2 = local_f0;
    puVar2[1] = uStack_ec;
    puVar2[2] = uStack_e8;
    puVar2[3] = uStack_e4;
    puVar2 = (undefined4 *)(lVar7 + 0x28 + lVar9);
    *puVar2 = local_100;
    puVar2[1] = uStack_fc;
    puVar2[2] = uStack_f8;
    puVar2[3] = uStack_f4;
    *(longlong *)(lVar7 + 0x50 + lVar9) = local_d8;
    *(undefined4 *)(lVar7 + 0x58 + lVar9) = local_d0;
    *(undefined8 *)(lVar7 + 0x60 + lVar9) = 0;
    *(longlong *)(lVar7 + 0x60 + lVar9) = local_c8;
    local_c8 = 0;
    *(undefined4 *)(lVar7 + 0x68 + lVar9) = (undefined4)local_c0;
    *(undefined4 *)(lVar7 + 0x6c + lVar9) = local_c0._4_4_;
    local_c0 = 0;
    *(undefined8 *)(lVar7 + 0x70 + lVar9) = 0;
    *(void **)(lVar7 + 0x70 + lVar9) = local_b8;
    local_b8 = (void *)0x0;
    *(undefined4 *)(lVar7 + 0x78 + lVar9) = (undefined4)local_b0;
    *(undefined4 *)(lVar7 + 0x7c + lVar9) = local_b0._4_4_;
    local_b0 = 0;
    *(undefined1 *)(lVar7 + 0x80 + lVar9) = local_a8;
    *(undefined8 *)(lVar7 + 0x88 + lVar9) = 0;
    *(void **)(lVar7 + 0x88 + lVar9) = local_a0;
    local_a0 = (void *)0x0;
    *(undefined4 *)(lVar7 + 0x90 + lVar9) = (undefined4)local_98;
    *(undefined4 *)(lVar7 + 0x94 + lVar9) = local_98._4_4_;
    local_98 = 0;
    *(ulonglong *)(lVar7 + 0x9d + lVar9) = CONCAT53(uStack_88,local_8b);
    *(ulonglong *)(lVar7 + 0x98 + lVar9) = CONCAT35(local_8b,uStack_90);
    bVar3 = *(byte *)(lVar7 + 0xe8 + lVar9);
    *(byte *)(lVar7 + 0xe8 + lVar9) = bVar3 & 0xfc | 2;
    if ((local_40 & 1) != 0) {
      lVar7 = lVar7 + lVar9;
      *(byte *)(lVar7 + 0xe8) = bVar3 | 3;
      *(byte *)(lVar7 + 0xe8) = *(byte *)(lVar7 + 0xe8) & 0xfd | local_40 & 2;
      *(undefined8 *)(lVar7 + 0xd8) = local_50;
      *(undefined8 *)(lVar7 + 0xe0) = uStack_48;
      *(longlong *)(lVar7 + 200) = local_60;
      *(undefined8 *)(lVar7 + 0xd0) = uStack_58;
      *(undefined4 *)(lVar7 + 0xb8) = local_70;
      *(undefined4 *)(lVar7 + 0xbc) = uStack_6c;
      *(undefined4 *)(lVar7 + 0xc0) = uStack_68;
      *(undefined4 *)(lVar7 + 0xc4) = uStack_64;
      *(undefined4 *)(lVar7 + 0xa8) = (undefined4)local_80;
      *(undefined4 *)(lVar7 + 0xac) = local_80._4_4_;
      *(undefined4 *)(lVar7 + 0xb0) = (undefined4)uStack_78;
      *(undefined4 *)(lVar7 + 0xb4) = uStack_78._4_4_;
      local_40 = local_40 & 0xfe;
    }
    if ((local_40 & 1) != 0) {
      ppuVar8 = (undefined **)&local_80;
      if ((local_40 & 2) == 0) {
        ppuVar8 = local_80;
      }
      local_40 = local_40 & 0xfe;
      (**(code **)*ppuVar8)(ppuVar8,0);
      if ((local_40 & 2) == 0) {
        FUN_1400020a8(local_80);
      }
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447bda9c(local_c8,local_c0 & 0xffffffff);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d203e FUN_1406d203e body=73 status=ok
// SIG undefined FUN_1406d203e(void)

undefined8 FUN_1406d203e(longlong param_1,uint *param_2)

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



// FUNCTION 1406d2087 FUN_1406d2087 body=157 status=ok
// SIG undefined FUN_1406d2087(void)

void FUN_1406d2087(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ffa2(puVar1);
  *puVar1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0xf00000d000000000;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0x1ffffffff;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  puVar1[0x14] = DAT_14cb8ce08;
  *puVar1 = &PTR_FUN_14b2ba5b0;
  puVar1[6] = &PTR_LAB_14b2ba8a0;
  FUN_1406d2124(puVar1 + 0x1b);
  puVar1[0x45] = 0;
  return;
}



// FUNCTION 1406d2124 FUN_1406d2124 body=334 status=ok
// SIG undefined FUN_1406d2124(void)

longlong * FUN_1406d2124(longlong *param_1)

{
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = DAT_14cb8d430;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 7) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x16) = 3;
  *(char *)(param_1 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 4;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 3;
  *(char *)(param_1 + 0x1f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_1 + 0x20) = 0x10001;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0x27) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
  param_1[0x28] = 0x100013dcccccd;
  *(undefined2 *)(param_1 + 0x29) = 1;
  FUN_1406d2272(param_1);
  *(undefined8 *)(*param_1 + 4) = DAT_14cb8d438;
  return param_1;
}



// FUNCTION 1406d2272 FUN_1406d2272 body=63 status=ok
// SIG undefined FUN_1406d2272(void)

int FUN_1406d2272(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406d22da(param_1,iVar1);
  }
  FUN_1406d22b1((longlong)iVar1 * 0xf0 + *param_1,1);
  return iVar1;
}



// FUNCTION 1406d22b1 FUN_1406d22b1 body=41 status=ok
// SIG undefined FUN_1406d22b1(void)

void FUN_1406d22b1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1404d36f8(param_1);
    param_1 = param_1 + 0xf0;
  }
  return;
}



// FUNCTION 1406d22da FUN_1406d22da body=271 status=ok
// SIG undefined FUN_1406d22da(void)

void FUN_1406d22da(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xf0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406d23f6 FUN_1406d23f6 body=774 status=ok
// SIG undefined FUN_1406d23f6(void)

void FUN_1406d23f6(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_98 [44];
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar14 = 0x20;
  if (2 < (int)param_1) {
    cVar5 = FUN_1447be618(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)param_1 * 2));
    lVar4 = DAT_14ca43398;
    if (cVar5 != '\0') {
      iVar14 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
        uVar11 = 0;
      }
      else if (iVar14 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar11 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar11 = 1;
      }
      iVar14 = (*(int *)(lVar4 + uVar11 * 4) == 0) + 0x20;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b61e0) {
    FUN_144b3d300(&DAT_14c9b61e0);
    if (DAT_14c9b61e0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar10 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.BasePassOutputsVelocityDebug",1);
      if (plVar10 == (longlong *)0x0) {
        DAT_14c9b61d8 = 0;
      }
      else {
        DAT_14c9b61d8 = (**(code **)(*plVar10 + 0x68))(plVar10);
      }
      _Init_thread_footer(&DAT_14c9b61e0);
    }
  }
  uVar3 = DAT_14c9c0d38;
  if ((DAT_14c9b61d8 == 0) || (*(int *)(DAT_14c9b61d8 + 4) != 2)) {
    puVar8 = &DAT_14c9c0d50;
  }
  else {
    puVar8 = &DAT_14c9b7ad0;
  }
  uVar2 = *puVar8;
  puVar8 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar12 = (uint *)*puVar8;
  if (puVar12 != (uint *)0x0) goto LAB_1406d2520;
  while( true ) {
    FUN_14472e504(puVar8);
    puVar12 = (uint *)*puVar8;
LAB_1406d2520:
    puVar9 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar13 = puVar12[0x12];
    if (puVar9 + 0x11 <= puVar12 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
      LOCK();
      uVar1 = *puVar12;
      *puVar12 = *puVar12 + uVar13 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar13) != 0xffffffff) break;
      puVar12 = (uint *)*puVar8;
      *puVar12 = 0xffffffff;
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar8 = puVar12;
      puVar9 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
      uVar13 = 0;
      if (puVar9 + 0x11 <= puVar12 + 0x4000) {
        uVar13 = 1;
        goto LAB_1406d259c;
      }
    }
  }
  uVar13 = uVar13 + 1;
LAB_1406d259c:
  *(undefined8 **)(puVar12 + 0x10) = puVar9 + 0x12;
  puVar12[0x12] = uVar13;
  *(int *)(puVar9 + -1) = ((int)puVar9 + -8) - (int)puVar12;
  *(undefined4 *)((longlong)puVar9 + -4) = 0x88;
  *(undefined4 *)(puVar9 + 1) =
       *(undefined4 *)(&DAT_14ca11f30 + (ulonglong)(2 < (int)param_1) * 0xe8);
  *(undefined2 *)(puVar9 + 2) = 0x404;
  puVar9[3] = param_2;
  *(uint *)(puVar9 + 4) = param_1;
  puVar9[5] = param_3;
  puVar9[6] = param_4;
  *(undefined1 *)(puVar9 + 7) = 0x3a;
  *puVar9 = &PTR_FUN_14a30dfb0;
  puVar9[8] = uVar2;
  puVar9[9] = uVar3;
  *(int *)(puVar9 + 10) = iVar14;
  *(undefined4 *)((longlong)puVar9 + 0x54) = uStack_6c;
  *(undefined4 *)(puVar9 + 0xb) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar9 + 0x5c) = local_68._4_4_;
  *(undefined4 *)(puVar9 + 0xc) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar9 + 100) = uStack_60._4_4_;
  *(undefined4 *)(puVar9 + 0xd) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar9 + 0x6c) = local_58._4_4_;
  *(undefined4 *)(puVar9 + 0xe) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x74) = uStack_50._4_4_;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d26fe FUN_1406d26fe body=304 status=ok
// SIG undefined FUN_1406d26fe(void)

undefined8 FUN_1406d26fe(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1406d2828;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1406d2828;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_1406d2828:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1406d27d0;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1406d27d0;
    }
  }
  uVar6 = 0;
LAB_1406d27d0:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d284c FUN_1406d284c body=57 status=ok
// SIG undefined FUN_1406d284c(void)

void FUN_1406d284c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb212e8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb212e8 = FUN_140002ddd(FUN_146432930,uVar1,L"GbxBrainAspect_Condition");
  }
  return;
}



// FUNCTION 1406d2885 FUN_1406d2885 body=419 status=ok
// SIG undefined FUN_1406d2885(void)

undefined4 FUN_1406d2885(double *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double _X;
  double *pdVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  double *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = *param_1;
  uVar5 = 0;
  if ((-DAT_14cb1c860 < dVar1) && (dVar1 < DAT_14cb1c860)) {
    dVar2 = param_1[1];
    uVar5 = 0;
    if ((-DAT_14cb1c868 < dVar2) && (uVar5 = 0, dVar2 < DAT_14cb1c868)) {
      _X = param_1[2];
      uVar5 = 0;
      if ((-DAT_14cb1c870 < _X) && (_X < DAT_14cb1c870)) {
        iVar4 = _finite(dVar1);
        if (iVar4 != 0) {
          iVar4 = _finite(dVar2);
          if (iVar4 != 0) {
            iVar4 = _finite(_X);
            if (iVar4 != 0) {
              local_68 = (double *)0x0;
              uStack_60 = 1;
              FUN_1406d2ac8(&local_68,0);
              pdVar3 = local_68;
              FUN_1406d2a2a(local_68);
              *(undefined1 *)((longlong)pdVar3 + 0x31) = 1;
              dVar1 = param_1[2];
              dVar2 = param_1[1];
              *pdVar3 = *param_1;
              pdVar3[1] = dVar2;
              pdVar3[2] = dVar1;
              *(undefined1 *)((longlong)pdVar3 + 0x1c) = 0;
              *(undefined1 *)(pdVar3 + 6) = 0;
              fVar6 = *(float *)(param_1 + 9);
              if (*(float *)(param_1 + 9) <= *(float *)((longlong)param_1 + 0x4c)) {
                fVar6 = *(float *)((longlong)param_1 + 0x4c);
              }
              if (fVar6 <= 100.0) {
                fVar6 = 100.0;
              }
              *(float *)(pdVar3 + 3) = fVar6;
              uVar5 = FUN_1406d2c3e(param_2,2,&local_68,1);
              FUN_1406d33ae(local_68,uStack_60 & 0xffffffff);
              if (local_68 != (double *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1406d29f7;
            }
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_1406d29f7:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d2a2a FUN_1406d2a2a body=158 status=ok
// SIG undefined FUN_1406d2a2a(void)

void FUN_1406d2a2a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}



// FUNCTION 1406d2ac8 FUN_1406d2ac8 body=373 status=ok
// SIG undefined FUN_1406d2ac8(void)

void FUN_1406d2ac8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x108;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406d2b54;
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
LAB_1406d2b54:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x108)) {
    uVar7 = uVar5 / 0x108 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x108,8);
  return;
}



// FUNCTION 1406d2c3e FUN_1406d2c3e body=1903 status=ok
// SIG undefined FUN_1406d2c3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406d2c3e(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_RBP;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
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
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_208 [32];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double *local_100;
  uint local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((longlong)*(int *)(param_1 + 0x50) == 0) {
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    uVar11 = param_2 & 0xffffffff;
    plVar12 = *(longlong **)(param_1 + 0x48);
    plVar1 = plVar12 + *(int *)(param_1 + 0x50);
    do {
      lVar3 = *plVar12;
      pdVar6 = (double *)(lVar3 + 0x50);
      if (*(char *)(lVar3 + 0xb0) == '\0') {
        pdVar6 = (double *)&DAT_14c846480;
      }
      auVar2 = *(undefined1 (*) [16])(pdVar6 + 8);
      auVar16 = *(undefined1 (*) [16])(pdVar6 + 10);
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
      iVar7 = movmskpd(0x4c846480,auVar18);
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar16._8_8_));
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar16._0_8_));
      uVar8 = movmskpd((int)param_2,auVar20);
      if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
        local_1d8 = DAT_14c8464a0;
        dStack_1d0 = DAT_14c8464a8;
        uStack_1e0 = DAT_14c8464b8;
        local_1e8 = DAT_14c8464b0;
        uStack_1c0 = uRam000000014c8464d8;
        local_1c8 = DAT_14c8464d0;
        uVar29 = (undefined4)DAT_14c8464c0;
        uVar30 = DAT_14c8464c0._4_4_;
        uVar31 = (undefined4)DAT_14c8464c8;
        uVar32 = DAT_14c8464c8._4_4_;
        uVar33 = (undefined4)DAT_14c846480;
        uVar34 = DAT_14c846480._4_4_;
        uVar35 = (undefined4)DAT_14c846488;
        uVar36 = DAT_14c846488._4_4_;
        dVar5 = DAT_14c846490;
        dVar13 = DAT_14c846498;
      }
      else {
        auVar20 = divpd(_DAT_149934d80,auVar2);
        auVar18 = divpd(ZEXT816(0x3ff0000000000000),auVar16);
        dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar20._0_8_);
        dVar24 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar20._8_8_);
        local_1c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar16._0_8_)) & auVar18._0_8_
                            );
        dVar15 = *pdVar6;
        dVar26 = -dVar15;
        dVar14 = -pdVar6[1];
        dVar5 = pdVar6[2] * -1.0;
        dVar13 = pdVar6[3] * 1.0;
        dVar23 = pdVar6[4] * dVar28;
        dVar25 = pdVar6[5] * dVar24;
        uStack_1c0 = 0;
        dVar27 = pdVar6[6] * local_1c8;
        dVar19 = dVar25 * dVar26 - dVar14 * dVar23;
        dVar21 = dVar27 * dVar14 - dVar5 * dVar25;
        dVar22 = dVar23 * dVar5 - dVar26 * dVar27;
        dVar21 = dVar21 + dVar21;
        dVar22 = dVar22 + dVar22;
        dVar19 = dVar19 + dVar19;
        local_1d8 = 0.0 - ((dVar19 * dVar14 - dVar22 * dVar5) + dVar13 * dVar21 + dVar23);
        dStack_1d0 = 0.0 - (dVar19 * dVar15 + dVar5 * dVar21 + dVar13 * dVar22 + dVar25);
        local_1e8 = 0.0 - (dVar13 * dVar19 + dVar27 + (dVar22 * dVar26 - dVar21 * dVar14));
        uStack_1e0 = 0;
        uVar29 = SUB84(dVar28,0);
        uVar30 = (int)((ulonglong)dVar28 >> 0x20);
        uVar31 = SUB84(dVar24,0);
        uVar32 = (int)((ulonglong)dVar24 >> 0x20);
        uVar33 = SUB84(dVar15,0);
        uVar34 = (int)((ulonglong)dVar26 >> 0x20);
        uVar35 = SUB84(pdVar6[1],0);
        uVar36 = (int)((ulonglong)dVar14 >> 0x20);
      }
      local_100 = (double *)0x0;
      uVar8 = *(uint *)(param_3 + 1);
      uVar4 = *param_3;
      local_f8 = uVar8;
      if (uVar8 == 0) {
        local_f4 = 0;
      }
      else {
        FUN_1406d370e(&local_100,uVar8,0);
        FUN_1406d33d7(local_100,uVar4,uVar8);
        if ((longlong)(int)local_f8 != 0) {
          pdVar9 = local_100 + (longlong)(int)local_f8 * 0x21;
          local_168 = (double)CONCAT44(uVar34,uVar33);
          local_178 = (double)CONCAT44(uVar36,uVar35);
          local_188 = (double)CONCAT44(uVar34,uVar33);
          dStack_180 = (double)CONCAT44(uVar34,uVar33);
          local_198 = (double)CONCAT44(uVar36,uVar35);
          dStack_190 = (double)CONCAT44(uVar36,uVar35);
          pdVar6 = local_100;
          local_1b8 = dVar13;
          dStack_1b0 = dVar13;
          local_1a8 = dVar5;
          dStack_1a0 = dVar5;
          dStack_170 = dVar5;
          dStack_160 = dVar13;
          local_158 = uVar29;
          uStack_154 = uVar30;
          uStack_150 = uVar31;
          uStack_14c = uVar32;
          do {
            dVar24 = *pdVar6 * (double)CONCAT44(uVar30,uVar29);
            dVar26 = pdVar6[1] * (double)CONCAT44(uVar32,uVar31);
            dVar13 = pdVar6[2] * local_1c8;
            dVar19 = dVar26 * (double)CONCAT44(uVar34,uVar33) - local_178 * dVar24;
            dVar22 = dVar13 * (double)CONCAT44(uVar36,uVar35) - dStack_170 * dVar26;
            dVar28 = dVar24 * dVar5 - local_168 * dVar13;
            dVar22 = dVar22 + dVar22;
            dVar28 = dVar28 + dVar28;
            dVar19 = dVar19 + dVar19;
            *pdVar6 = (dVar19 * (double)CONCAT44(uVar36,uVar35) - dVar28 * dStack_170) +
                      local_1b8 * dVar22 + dVar24 + local_1d8;
            pdVar6[1] = (dVar5 * dVar22 - local_168 * dVar19) + dStack_1b0 * dVar28 + dVar26 +
                        dStack_1d0;
            pdVar6[2] = dVar19 * local_1b8 + dVar13 +
                        (dVar28 * (double)CONCAT44(uVar34,uVar33) - dVar22 * local_178) + local_1e8;
            auVar2 = *(undefined1 (*) [16])(pdVar6 + 7);
            auVar16 = divpd(auVar2,_DAT_1499387d0);
            auVar16 = roundpd(auVar16,auVar16,3);
            auVar17._8_8_ = 0;
            auVar17._0_8_ = pdVar6[9];
            auVar18 = divpd(auVar17,_DAT_1499387d0);
            auVar18 = roundpd(auVar18,auVar18,3);
            dVar13 = (auVar2._0_8_ - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar19 = (auVar2._8_8_ - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar22 = (pdVar6[9] - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar28 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            local_148 = sin(dVar13);
            dVar24 = sin(dVar19);
            dVar26 = sin(dVar22);
            sin(dVar28);
            dVar14 = cos(dVar13);
            dVar15 = cos(dVar19);
            dVar22 = cos(dVar22);
            cos(dVar28);
            uVar32 = uStack_14c;
            uVar31 = uStack_150;
            uVar30 = uStack_154;
            uVar29 = local_158;
            dVar13 = -(dVar15 * local_148 * dVar26) + dVar24 * dVar14 * dVar22;
            dVar19 = dVar24 * local_148 * dVar26 + dVar15 * dVar14 * dVar22;
            dVar28 = local_148 * dVar24 * dVar22 - dVar14 * dVar15 * dVar26;
            dVar24 = -(local_148 * dVar15 * dVar22) - dVar14 * dVar24 * dVar26;
            local_138 = dVar24 * local_1a8 * -1.0 +
                        local_188 * dVar19 * 1.0 + local_1b8 * dVar28 + local_198 * dVar13;
            dStack_130 = dVar28 * dStack_1a0 * 1.0 +
                         dStack_180 * dVar13 * -1.0 + dStack_1b0 * dVar24 + dStack_190 * dVar19;
            dVar22 = dVar13 * dStack_1a0 * -1.0 +
                     ((dStack_180 * dVar28 * -1.0 + dStack_1b0 * dVar19) - dStack_190 * dVar24);
            local_128._8_4_ = SUB84(dVar22,0);
            local_128._0_8_ =
                 dVar19 * local_1a8 * 1.0 +
                 ((local_188 * dVar24 * 1.0 + local_1b8 * dVar13) - local_198 * dVar28);
            local_128._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
            FUN_1448052ee(&local_138,&local_118);
            pdVar6[9] = local_108;
            pdVar6[7] = local_118;
            pdVar6[8] = dStack_110;
            pdVar6 = pdVar6 + 0x21;
          } while (pdVar6 != pdVar9);
        }
      }
      uVar8 = FUN_1406d351e(lVar3,uVar11,&local_100,param_4);
      uVar10 = (ulonglong)uVar8;
      param_2 = (ulonglong)local_f8;
      FUN_1406d33ae(local_100);
      if (local_100 != (double *)0x0) {
        FUN_1400020a8();
      }
      plVar12 = plVar12 + 1;
    } while (((byte)uVar8 & plVar12 != plVar1) != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d33ae FUN_1406d33ae body=41 status=ok
// SIG undefined FUN_1406d33ae(void)

void FUN_1406d33ae(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1406d3414(param_1);
    param_1 = param_1 + 0x108;
  }
  return;
}



// FUNCTION 1406d33d7 FUN_1406d33d7 body=60 status=ok
// SIG undefined FUN_1406d33d7(void)

void FUN_1406d33d7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1406d359e(param_1,param_2);
    param_1 = param_1 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return;
}



// FUNCTION 1406d3414 FUN_1406d3414 body=265 status=ok
// SIG undefined FUN_1406d3414(void)

void FUN_1406d3414(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x58),0);
  }
  *(undefined8 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (0x80 < *(uint *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = 0x80;
    FUN_1446efbd8(param_1 + 0x68,0);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1406d351e FUN_1406d351e body=127 status=ok
// SIG undefined FUN_1406d351e(void)

undefined8 FUN_1406d351e(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    lVar4 = FUN_14475ec7e(param_1);
  }
  bVar1 = *(byte *)(lVar4 + 0x152);
  if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
     (plVar2 = *(longlong **)(param_1 + 0xe0), plVar2 != (longlong *)0x0)) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001406d3575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}



// FUNCTION 1406d359e FUN_1406d359e body=367 status=ok
// SIG undefined FUN_1406d359e(void)

undefined4 * FUN_1406d359e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x11);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x15);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xd) = *(undefined4 *)((longlong)param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x11) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x15) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x19) = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  pvVar2 = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  uVar7 = param_2[0x11];
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar7;
  param_1[0x12] = uVar8;
  param_1[0x13] = uVar9;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0xffffffff00000080;
  param_1[0x23] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  FUN_144881636(param_1 + 0x16,param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0xffffffff00000080;
  param_1[0x37] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  FUN_140177c44(param_1 + 0x2a,param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x3e) = 0;
  iVar1 = param_2[0x40];
  pvVar2 = *(void **)(param_2 + 0x3e);
  param_1[0x40] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x41] = 0;
  }
  else {
    FUN_14017819c(param_1 + 0x3e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x3e),pvVar2,(longlong)iVar1 * 0x48);
  }
  return param_1;
}



// FUNCTION 1406d370e FUN_1406d370e body=337 status=ok
// SIG undefined FUN_1406d370e(void)

void FUN_1406d370e(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x108;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406d3783;
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
LAB_1406d3783:
    iVar5 = (int)(uVar4 / 0x108);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x108,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1406d3860 FUN_1406d3860 body=892 status=ok
// SIG undefined FUN_1406d3860(void)

longlong FUN_1406d3860(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((DAT_14c872bf2 == '\x01') && (lVar4 = FUN_140fb95f6(param_1), lVar4 != 0)) &&
     (*(char *)(lVar4 + 0x31) != '\x01')) {
    return 0;
  }
  lVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    uVar5 = FUN_1406d3bdc();
    cVar3 = FUN_1448093f4(lVar4,uVar5);
    lVar7 = 0;
    if (cVar3 != '\0') {
      lVar7 = lVar4;
    }
  }
  if (*(char *)((longlong)param_1 + 0x119) != '\x01') goto LAB_1406d38b7;
  lVar4 = FUN_1410ef012(param_1);
  if (lVar4 == 0) {
LAB_1406d3b2c:
    if (lVar7 == 0) goto LAB_1406d38b7;
  }
  else {
    lVar4 = FUN_1410ef012(param_1);
    lVar4 = *(longlong *)(lVar4 + 0x160);
    if (lVar4 == 0) goto LAB_1406d3b2c;
    uVar5 = FUN_1410ef06e();
    cVar3 = FUN_1448093f4(lVar4,uVar5);
    if (((cVar3 == '\0') || (lVar7 == 0)) || (*(char *)(lVar4 + 0x298) == '\0')) goto LAB_1406d3b2c;
    lVar4 = *(longlong *)(lVar7 + 0x208);
    if (lVar4 == 0) {
      uVar5 = FUN_140bd9786();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(lVar7 + 0x208) = lVar4;
    }
    plVar1 = (longlong *)(lVar7 + 0x200);
    lVar6 = *(longlong *)(lVar7 + 0x210);
    if (lVar6 != 0) {
LAB_1406d3ad8:
      if (lVar4 != 0) {
        return lVar6;
      }
      uVar5 = FUN_140bd9786();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(lVar7 + 0x208) = lVar4;
      if (*(longlong *)(lVar7 + 0x210) != 0) {
        return *(longlong *)(lVar7 + 0x210);
      }
      if (lVar4 == 0) {
        return 0;
      }
      if (*plVar1 == 0) {
        return 0;
      }
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(lVar7 + 0x210) = lVar4;
      return lVar4;
    }
    if ((lVar4 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar7 + 0x210) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(lVar7 + 0x210) = lVar6;
        if (lVar6 != 0) {
          lVar4 = *(longlong *)(lVar7 + 0x208);
          goto LAB_1406d3ad8;
        }
      }
    }
  }
  lVar4 = *(longlong *)(lVar7 + 0x1f0);
  if (lVar4 == 0) {
    uVar5 = FUN_140bd9786();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar7 + 0x1f0) = lVar4;
  }
  plVar1 = (longlong *)(lVar7 + 0x1e8);
  lVar6 = *(longlong *)(lVar7 + 0x1f8);
  if (lVar6 != 0) {
LAB_1406d39e1:
    if (lVar4 == 0) {
      uVar5 = FUN_140bd9786();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(lVar7 + 0x1f0) = lVar4;
      lVar6 = *(longlong *)(lVar7 + 0x1f8);
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar1);
        }
        *(longlong *)(lVar7 + 0x1f8) = lVar6;
      }
    }
    return lVar6;
  }
  if ((*plVar1 != 0) && (lVar4 != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar7 + 0x1f8) = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,plVar1);
      *(longlong *)(lVar7 + 0x1f8) = lVar6;
      if (lVar6 != 0) {
        lVar4 = *(longlong *)(lVar7 + 0x1f0);
        goto LAB_1406d39e1;
      }
    }
  }
LAB_1406d38b7:
  lVar4 = FUN_1406d3c16(param_1,param_2);
  return lVar4;
}


