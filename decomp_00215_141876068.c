// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141876068 FUN_141876068 body=101 status=ok
// SIG undefined FUN_141876068(void)

void FUN_141876068(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f4f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418760ce FUN_1418760ce body=679 status=ok
// SIG undefined FUN_1418760ce(void)

void FUN_1418760ce(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_141876132;
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
LAB_141876132:
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



// FUNCTION 141876376 FUN_141876376 body=370 status=ok
// SIG undefined FUN_141876376(void)

void FUN_141876376(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418763ff;
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
LAB_1418763ff:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1418764e8 FUN_1418764e8 body=272 status=ok
// SIG undefined FUN_1418764e8(void)

void FUN_1418764e8(longlong param_1,int param_2)

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



// FUNCTION 1418765f8 FUN_1418765f8 body=269 status=ok
// SIG undefined FUN_1418765f8(void)

void FUN_1418765f8(longlong param_1,int param_2)

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



// FUNCTION 141876706 FUN_141876706 body=29 status=ok
// SIG undefined FUN_141876706(void)

undefined8 FUN_141876706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141876724 FUN_141876724 body=269 status=ok
// SIG undefined FUN_141876724(void)

void FUN_141876724(longlong param_1,int param_2)

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



// FUNCTION 141876832 FUN_141876832 body=353 status=ok
// SIG undefined FUN_141876832(void)

void FUN_141876832(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418768b7;
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
LAB_1418768b7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141876994 FUN_141876994 body=101 status=ok
// SIG undefined FUN_141876994(void)

void FUN_141876994(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f5060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418769fa FUN_1418769fa body=102 status=ok
// SIG undefined FUN_1418769fa(void)

void FUN_1418769fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140993a2e();
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



// FUNCTION 141876a62 FUN_141876a62 body=306 status=ok
// SIG undefined FUN_141876a62(void)

void FUN_141876a62(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + 900) != 0) && (uVar1 = *(uint *)(param_1 + 0x380), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 900))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      local_48 = *(undefined8 *)(param_4 + 4);
      local_58 = *param_4;
      uStack_54 = param_4[1];
      uStack_50 = param_4[2];
      uStack_4c = param_4[3];
      local_68[0] = param_2;
      local_60 = param_3;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb55fd0);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,local_68);
      local_48 = *(undefined8 *)(param_4 + 4);
      local_58 = *param_4;
      uStack_54 = param_4[1];
      uStack_50 = param_4[2];
      uStack_4c = param_4[3];
      local_68[0] = param_2;
      local_60 = param_3;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb55fe0);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,local_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141876b96 FUN_141876b96 body=225 status=ok
// SIG undefined FUN_141876b96(void)

void FUN_141876b96(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_1 + 900) != 0) && (uVar1 = *(uint *)(param_1 + 0x380), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 900))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      local_22 = param_2;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb55ff0);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,&local_22);
      local_21 = param_2;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb56000);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,&local_21);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141876c78 FUN_141876c78 body=327 status=ok
// SIG undefined FUN_141876c78(void)

void FUN_141876c78(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_1 + 900) != 0) && (uVar1 = *(uint *)(param_1 + 0x380), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 900))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      local_48 = *(undefined8 *)(param_5 + 4);
      local_58 = *param_5;
      uStack_54 = param_5[1];
      uStack_50 = param_5[2];
      uStack_4c = param_5[3];
      local_70[0] = param_2;
      local_68 = param_3;
      local_60 = param_4;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb55f90);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,local_70);
      local_48 = *(undefined8 *)(param_5 + 4);
      local_58 = *param_5;
      uStack_54 = param_5[1];
      uStack_50 = param_5[2];
      uStack_4c = param_5[3];
      local_70[0] = param_2;
      local_68 = param_3;
      local_60 = param_4;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb55fa0);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,local_70);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141876dc0 FUN_141876dc0 body=225 status=ok
// SIG undefined FUN_141876dc0(void)

void FUN_141876dc0(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_1 + 900) != 0) && (uVar1 = *(uint *)(param_1 + 0x380), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 900))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      local_22 = param_2;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb55fb0);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,&local_22);
      local_21 = param_2;
      uVar2 = FUN_14477b072(plVar3,DAT_14cb55fc0);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,&local_21);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141876ea8 FUN_141876ea8 body=216 status=ok
// SIG undefined FUN_141876ea8(void)

undefined1 *
FUN_141876ea8(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,byte param_5,
             float param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [44];
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar1 = (longlong *)FUN_140ac4d02(param_4);
    if (plVar1 != (longlong *)0x0) {
      iVar2 = 0;
      if (0 < (int)param_6) {
        iVar2 = (int)param_6;
      }
      if (param_5 - 1 < 2) {
        FUN_1401533ba(local_3c,param_1 + 8,1);
        (**(code **)(*plVar1 + 0x28))(plVar1,local_3c,iVar2);
      }
      else if (param_5 == 4) {
        FUN_1401533ba(local_3c,param_1 + 8,1);
        (**(code **)(*plVar1 + 0x40))(plVar1,local_3c,iVar2);
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141876f82 FUN_141876f82 body=835 status=ok
// SIG undefined FUN_141876f82(void)

ulonglong FUN_141876f82(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  int local_88;
  longlong *local_80;
  longlong local_78;
  int local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = local_90 & 0xffffffffffffff00;
  local_68 = 0;
  FUN_1456bb102(&local_90,*param_2);
  FUN_1448729ea(param_1 + 0x38,local_60,&local_90);
  iVar3 = FUN_1405d5f74(local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar15 = local_60;
    if (0x18 < local_48) {
      ppppuVar15 = (undefined8 ****)local_60[0];
    }
    (*pcVar1)(ppppuVar15);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_68 != 0) {
    lVar14 = (longlong)local_68 + -1;
    lVar16 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar4 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar13 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
    }
    *(undefined4 *)(lVar4 + lVar16) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar16) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar8 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar8 = iVar13;
    }
    bVar2 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar13;
    *(uint *)(puVar12 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_68 = 0;
  }
  if (((char)local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar9 = (int *)((longlong)local_80 + 0xc);
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (*piVar9 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  iVar3 = (int)((float)iVar3 * *(float *)((longlong)param_2 + 0x1c));
  uVar11 = 0;
  if (iVar3 < 1) goto LAB_141877157;
  local_60[0] = *(undefined8 ****)(param_1 + 0x20);
  FUN_1446dcdd4(&local_90);
  if (DAT_14cb758b8 == 0) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar4 = FUN_144837462(DAT_14cb758b8,&local_90);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if ((lVar4 != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      uVar5 = FUN_140ac4d32();
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
      if (plVar6 != (longlong *)0x0) {
        uVar5 = FUN_140ac4d32();
        plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
        uVar11 = 0;
        if ((plVar6 == plVar7) || (plVar7 == (longlong *)0x0)) goto LAB_141877157;
        piVar9 = &DAT_14c9485f0;
        if (*(int **)(lVar4 + 8) != (int *)0x0) {
          piVar9 = *(int **)(lVar4 + 8);
        }
        if (((*piVar9 == 0) || (iVar13 = piVar9[1], iVar13 == 0)) || (*piVar9 == DAT_14c948000)) {
LAB_141877269:
          local_88 = DAT_14c948620;
          local_90 = DAT_14c948618;
        }
        else {
          if ((iVar13 < 2) && (piVar9[9] < 1)) {
            puVar10 = (ulonglong *)(piVar9 + 2);
          }
          else {
            puVar10 = *(ulonglong **)(piVar9 + 6);
          }
          if (iVar13 < 1) goto LAB_141877269;
          local_88 = (int)puVar10[1];
          local_90 = *puVar10;
        }
        puVar10 = &local_90;
        (**(code **)(*plVar7 + 0x28))(plVar7,puVar10,iVar3);
        uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
        goto LAB_141877157;
      }
    }
  }
  uVar11 = 0;
LAB_141877157:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418772c6 FUN_1418772c6 body=413 status=ok
// SIG undefined FUN_1418772c6(void)

undefined8 FUN_1418772c6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_14009b010(&local_a8,2,0);
  iVar3 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_14009b010(&local_88,1,0);
      local_98 = *(undefined8 *)(lVar4 + lVar6);
      FUN_1401269c0(&local_88,&local_98);
      FUN_14173818c(&local_a8,&local_88);
      plVar5 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  local_90 = DAT_14cb765c8;
  local_98 = DAT_14cb765c0;
  FUN_1448075d0(&local_88);
  if (*param_3 != 0) {
    local_b8 = 0;
    FUN_14014191c(*param_3,&local_88,&local_a8,0);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  plVar5 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 141877464 FUN_141877464 body=961 status=ok
// SIG undefined FUN_141877464(void)

void FUN_141877464(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar3 = *(byte *)(param_1 + 6);
  *(byte *)(param_1 + 6) = bVar3 | 0x10;
  if ((((*(byte *)(*param_1 + 0x61) & 1) != 0) || ((bVar3 & 3) != 3)) ||
     (lVar7 = FUN_1447210f0(), lVar7 == 0)) goto LAB_1418776bb;
  FUN_140ebf024(&local_b8,lVar7);
  plVar12 = (longlong *)CONCAT44(uStack_ac,local_b0);
  if (plVar12 == (longlong *)0x0) {
LAB_141877764:
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      puVar8 = (undefined8 *)(lVar7 + 0x458);
    }
    else {
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    uVar11 = *puVar8;
    uVar16 = 0x3f800000;
    bVar14 = true;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar12[1];
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar13 = (int)plVar12[1];
      bVar14 = iVar6 == iVar13;
      if (bVar14) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar13 = iVar6;
      }
      iVar6 = iVar13;
      UNLOCK();
    } while (!bVar14);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_ac,local_b0) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_ac,local_b0) + 0x10))();
    }
    if (plVar12 == (longlong *)0x0) goto LAB_141877764;
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      puVar8 = (undefined8 *)(lVar7 + 0x458);
    }
    else {
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    uVar11 = *puVar8;
    if (local_b8 == 0) {
      bVar14 = false;
      uVar16 = 0x3f800000;
    }
    else {
      lVar7 = FUN_140ccfc10();
      puVar10 = (undefined4 *)((longlong)DAT_14cb765e0 * 0x18 + *(longlong *)(lVar7 + 0xec8));
      if (*(int *)(lVar7 + 0xed0) <= DAT_14cb765e0) {
        puVar10 = &DAT_14b3f5718;
      }
      if (DAT_14cb765e0 < 0) {
        puVar10 = &DAT_14b3f5718;
      }
      uVar16 = puVar10[3];
      bVar14 = false;
    }
  }
  lVar7 = *param_1;
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar8 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_d0[2] = lVar9;
  *local_d0 = &PTR_FUN_14b3f6070;
  local_d0[3] = 0;
  iVar6 = 0;
  if (lVar7 != 0) {
    uVar4 = *(uint *)(lVar7 + 0xc);
    *(uint *)(local_d0 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar15 = iVar6 == 0;
      if (bVar15) {
        *(int *)(lVar7 + 0x10) = iVar13;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar6 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar8 + 0x1c) = iVar6;
  puVar8[4] = param_1;
  local_b8 = 0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d0);
  local_78 = 1;
  local_d8 = local_c0;
  local_c0[0] = 0;
  local_bc = 0xbf800000;
  FUN_1406f4044(uVar11,param_1 + 7,&local_b8,uVar16);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_c8 == 0) {
LAB_14187769e:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_14187769e;
  }
  if (!bVar14) {
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
LAB_1418776bb:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141877826 FUN_141877826 body=109 status=ok
// SIG undefined FUN_141877826(void)

void FUN_141877826(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1[7] != 0) {
    lVar2 = FUN_1447210f0(*param_1);
    if (lVar2 != 0) {
      param_1 = param_1 + 7;
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      lVar2 = FUN_144a61814(uVar1,param_1);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,*param_1);
      }
      *param_1 = 0;
    }
  }
  return;
}



// FUNCTION 141877894 FUN_141877894 body=222 status=ok
// SIG undefined FUN_141877894(void)

void FUN_141877894(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((int)param_1[3] == 1) {
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      lVar1 = param_1[1];
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x10);
        FUN_1400020a8();
        param_1[1] = lVar1;
      }
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar2 = 0;
  }
  else {
    if (param_1[1] == param_2) {
      lVar1 = *(longlong *)(param_1[1] + 0x10);
      param_1[1] = lVar1;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    else if (param_1[2] == param_2) {
      lVar1 = *(longlong *)(param_1[2] + 0x18);
      param_1[2] = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x18);
      *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18) = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    else {
      FUN_1400020a8(param_2);
    }
    iVar2 = (int)param_1[3] + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001418778f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,iVar2);
  return;
}



// FUNCTION 141877972 FUN_141877972 body=101 status=ok
// SIG undefined FUN_141877972(void)

void FUN_141877972(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = FUN_1410ce2ea();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418779b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_3,*(code **)(*plVar2 + 0x20));
      return;
    }
    FUN_140aeefbc(param_2,0,1);
    return;
  }
  return;
}



// FUNCTION 1418779d8 FUN_1418779d8 body=764 status=ok
// SIG undefined FUN_1418779d8(void)

void FUN_1418779d8(byte *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  code *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb56270 == 0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_1427b09ee;
    local_78 = &LAB_148630fef;
    local_80 = FUN_1464b6a91;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10004001;
    local_a0 = 8;
    local_a8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar10 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
  if (plVar10 == (longlong *)0x0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
    bVar8 = (bVar8 ^ 1) << 3;
  }
  *param_1 = *param_1 & 0xf7 | bVar8;
  FUN_140871de8(&local_50,param_2);
  *(undefined4 *)(param_1 + 0xc0) = (undefined4)local_50;
  *(undefined4 *)(param_1 + 0xc4) = local_50._4_4_;
  *(undefined4 *)(param_1 + 200) = uStack_48;
  *(undefined4 *)(param_1 + 0xcc) = uStack_44;
  *(undefined4 *)(param_1 + 0xd0) = local_40;
  *(undefined4 *)(param_1 + 0xd4) = uStack_3c;
  *(undefined4 *)(param_1 + 0xd8) = uStack_38;
  *(undefined4 *)(param_1 + 0xdc) = uStack_34;
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_2 + 0x1c8);
    if (param_4 != 0) {
      if (DAT_14cac6e60 == 0) {
        local_50 = FUN_144a7958c;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_142b47bc4;
        local_78 = &LAB_1478989f1;
        local_80 = (code *)&LAB_146391124;
        local_88 = L"Engine";
        local_90 = 0x10000000000;
        local_98 = 0x10000005;
        local_a0 = 0x10;
        local_a8 = 0x620;
        local_70 = &local_50;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30))
      goto LAB_141877aab;
    }
    param_1[0xe0] = 0;
    param_1[0xe1] = 0;
    param_1[0xe2] = 0;
    param_1[0xe3] = 0;
    iVar9 = 0;
  }
  else {
LAB_141877aab:
    uVar1 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 0xe0) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar9 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar9 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar9 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar9 = iVar11;
      }
    }
  }
  *(int *)(param_1 + 0xe4) = iVar9;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  uVar2 = *(undefined4 *)param_3;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined8 *)(param_1 + 0x40) = param_3[2];
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141877cd6 FUN_141877cd6 body=4369 status=ok
// SIG undefined FUN_141877cd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141877cd6(longlong param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
                  undefined1 (*param_5) [16],undefined8 *param_6,undefined8 param_7,longlong param_8
                  )

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  float fVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  float local_1f0;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined8 local_1d8;
  float local_1cc;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  float local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_170 [4];
  longlong *local_160;
  int local_148;
  float local_140;
  undefined4 uStack_13c;
  ushort local_128;
  byte local_120;
  float local_118;
  undefined4 uStack_114;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar2 = *param_6;
  auVar23 = divpd(*param_5,_DAT_1499387d0);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *(double *)param_5[1];
  auVar26 = divpd(auVar26,_DAT_1499387d0);
  auVar23 = roundpd(auVar23,auVar23,3);
  auVar26 = roundpd(auVar26,auVar26,3);
  dVar32 = (*(double *)*param_5 - auVar23._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar34 = (*(double *)(*param_5 + 8) - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar37 = (*(double *)param_5[1] - auVar26._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar38 = (0.0 - auVar26._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  local_1d8 = param_3;
  dVar17 = sin(dVar32);
  dVar18 = sin(dVar34);
  dVar19 = sin(dVar37);
  sin(dVar38);
  dVar32 = cos(dVar32);
  dVar34 = cos(dVar34);
  dVar37 = cos(dVar37);
  cos(dVar38);
  if ((param_8 == 0) || (*(char *)(param_8 + 0x7c) != '\x01')) {
    local_170[0] = (float)((uint)local_170[0] & 0xffffff00);
    local_148 = 0;
    FUN_1456bb102(local_170,uVar2);
    pfVar13 = &local_140;
    FUN_1448729ea(param_1 + 0x48,pfVar13,local_170);
    if (local_120 == 3) {
      local_1e4 = local_140;
      bVar5 = 3;
    }
    else {
      pfVar14 = &local_118;
      FUN_1400b56fe(pfVar14,&local_140,3);
      local_1e4 = local_118;
      if (local_f8 == 0) {
        local_1e4 = 200.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_100) {
          pfVar14 = (float *)CONCAT44(uStack_114,local_118);
        }
        (*pcVar3)(pfVar14);
      }
      bVar5 = local_120;
      if (0x18 < local_100) {
        FUN_1400020a8(CONCAT44(uStack_114,local_118));
        bVar5 = local_120;
      }
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_128) {
        pfVar13 = (float *)CONCAT44(uStack_13c,local_140);
      }
      (*pcVar3)(pfVar13);
    }
    if (0x18 < local_128) {
      FUN_1400020a8(CONCAT44(uStack_13c,local_140));
    }
    lVar8 = DAT_14c9a3da0;
    if ((longlong)local_148 != 0) {
      lVar12 = (longlong)local_148 + -1;
      lVar16 = lVar12 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
      if (*(longlong *)(lVar8 + lVar16) != 0) {
        FUN_1400020a8();
      }
      lVar8 = DAT_14c9a3da0;
      iVar15 = (int)lVar12;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar15;
      }
      *(undefined4 *)(lVar8 + lVar16) = 0xffffffff;
      iVar7 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar7 = DAT_14c9a3dd0;
      }
      *(int *)(lVar8 + 4 + lVar16) = iVar7;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar9 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar9 = DAT_14c9a3dc0;
      }
      iVar7 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
      bVar5 = (byte)lVar12 & 0x1f;
      DAT_14c9a3dd0 = iVar15;
      *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) &
           (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      local_148 = 0;
    }
    if ((local_170[0]._0_1_ == '\x03') && (local_160 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
    if (param_8 != 0) goto LAB_141877f09;
LAB_141877f16:
    local_170[0] = (float)((uint)local_170[0] & 0xffffff00);
    local_148 = 0;
    FUN_1456bb102(local_170,uVar2);
    pfVar13 = &local_140;
    FUN_1448729ea(param_1 + 0xa0,pfVar13,local_170);
    if (local_120 == 3) {
      fVar36 = local_140;
      bVar5 = 3;
    }
    else {
      pfVar14 = &local_118;
      FUN_1400b56fe(pfVar14,&local_140,3);
      fVar36 = local_118;
      if (local_f8 == 0) {
        fVar36 = 100.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_100) {
          pfVar14 = (float *)CONCAT44(uStack_114,local_118);
        }
        (*pcVar3)(pfVar14);
      }
      bVar5 = local_120;
      if (0x18 < local_100) {
        FUN_1400020a8(CONCAT44(uStack_114,local_118));
        bVar5 = local_120;
      }
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_128) {
        pfVar13 = (float *)CONCAT44(uStack_13c,local_140);
      }
      (*pcVar3)(pfVar13);
    }
    if (0x18 < local_128) {
      FUN_1400020a8(CONCAT44(uStack_13c,local_140));
    }
    lVar8 = DAT_14c9a3da0;
    if ((longlong)local_148 != 0) {
      lVar16 = (longlong)local_148 + -1;
      lVar12 = lVar16 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
      if (*(longlong *)(lVar8 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar8 = DAT_14c9a3da0;
      iVar15 = (int)lVar16;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar15;
      }
      *(undefined4 *)(lVar8 + lVar12) = 0xffffffff;
      iVar7 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar7 = DAT_14c9a3dd0;
      }
      *(int *)(lVar8 + 4 + lVar12) = iVar7;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar9 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar9 = DAT_14c9a3dc0;
      }
      iVar7 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
      bVar5 = (byte)lVar16 & 0x1f;
      DAT_14c9a3dd0 = iVar15;
      *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) &
           (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      local_148 = 0;
    }
    if ((local_170[0]._0_1_ == '\x03') && (local_160 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
    local_1dc = fVar36 * 0.5;
  }
  else {
    local_1e4 = *(float *)(param_8 + 0x78);
LAB_141877f09:
    if (*(char *)(param_8 + 0x98) != '\x01') goto LAB_141877f16;
    local_1dc = (float)(*(double *)(param_8 + 0x90) * 0.5);
    if ((0.0 < *(double *)(param_8 + 0x80)) && (*(char *)(param_8 + 0x7c) == '\0')) {
      local_1e4 = (float)*(double *)(param_8 + 0x80);
    }
  }
  local_170[0] = (float)((uint)local_170[0] & 0xffffff00);
  local_148 = 0;
  FUN_1456bb102(local_170,uVar2);
  pfVar13 = &local_140;
  FUN_1448729ea(param_1 + 0xf8,pfVar13,local_170);
  if (local_120 == 3) {
    uVar6 = 3;
    fVar36 = local_140;
  }
  else {
    pfVar14 = &local_118;
    FUN_1400b56fe(pfVar14,&local_140,3);
    fVar36 = local_118;
    if (local_f8 == 0) {
      fVar36 = 20.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_100) {
        pfVar14 = (float *)CONCAT44(uStack_114,local_118);
      }
      (*pcVar3)(pfVar14);
    }
    if (0x18 < local_100) {
      FUN_1400020a8(CONCAT44(uStack_114,local_118));
    }
    uVar6 = (uint)local_120;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_128) {
      pfVar13 = (float *)CONCAT44(uStack_13c,local_140);
    }
    (*pcVar3)(pfVar13);
  }
  if (0x18 < local_128) {
    FUN_1400020a8(CONCAT44(uStack_13c,local_140));
  }
  lVar8 = DAT_14c9a3da0;
  if ((longlong)local_148 != 0) {
    lVar16 = (longlong)local_148 + -1;
    lVar12 = lVar16 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar8 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar8 = DAT_14c9a3da0;
    iVar15 = (int)lVar16;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar15;
    }
    *(undefined4 *)(lVar8 + lVar12) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar8 + 4 + lVar12) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar7 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar7 = iVar15;
    }
    bVar5 = (byte)lVar16 & 0x1f;
    DAT_14c9a3dd0 = iVar15;
    *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_148 = 0;
  }
  if ((local_170[0]._0_1_ == '\x03') && (local_160 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_160 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  fVar24 = fVar36 * 0.017453292 * 0.5;
  fVar24 = (float)(longlong)
                  (fVar24 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar24 < 0.0) * 4))
           * -6.2831855 + fVar24;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  if (1.5707964 < fVar24) {
    fVar28 = 3.1415927;
  }
  else {
    if (-1.5707964 <= fVar24) {
      local_1e0 = 1.0;
      goto LAB_14187812c;
    }
    fVar28 = -3.1415927;
  }
  fVar24 = fVar28 - fVar24;
  local_1e0 = -1.0;
LAB_14187812c:
  dVar38 = -(dVar17 * dVar34 * dVar19) + dVar32 * dVar18 * dVar37;
  dVar4 = dVar17 * dVar18 * dVar19 + dVar32 * dVar34 * dVar37;
  dVar29 = dVar18 * dVar17 * dVar37 - dVar34 * dVar32 * dVar19;
  dStack_1a0 = -(dVar34 * dVar17 * dVar37) - dVar18 * dVar32 * dVar19;
  dVar17 = dVar29 * 0.0;
  dVar34 = dStack_1a0 * -0.0 + dVar17;
  dVar34 = dVar34 + dVar34;
  dVar32 = dVar38 * 0.0 - dVar29;
  dVar32 = dVar32 + dVar32;
  dVar19 = dStack_1a0 + dVar38 * -0.0;
  dVar19 = dVar19 + dVar19;
  dVar18 = (double)(*(float *)(param_1 + 0xf0) * local_1dc);
  local_198 = *param_4 + ((dStack_1a0 * dVar34 - dVar32 * dVar38) + dVar4 * dVar19 + 0.0) * dVar18;
  uStack_190 = 0;
  local_1b8 = param_4[1] + ((dVar38 * dVar19 - dVar34 * dVar29) + dVar4 * dVar32 + 0.0) * dVar18;
  uStack_1b0 = 0;
  local_1c8 = param_4[2] + ((dVar32 * dVar29 - dVar19 * dStack_1a0) + dVar4 * dVar34 + 1.0) * dVar18
  ;
  uStack_1c0 = 0;
  dVar30 = dStack_1a0 * 0.0 + dVar38 * -0.0;
  dVar30 = dVar30 + dVar30;
  dVar32 = (dVar38 - dVar17) + (dVar38 - dVar17);
  dVar31 = dVar30 * dStack_1a0;
  dVar17 = (dVar17 - dStack_1a0) + (dVar17 - dStack_1a0);
  local_1a8 = (dStack_1a0 * dVar17 - dVar32 * dVar38) + dVar4 * dVar30 + 1.0;
  fVar28 = fVar24 * fVar24;
  *(float *)(param_2 + 0x178) =
       (((((fVar28 * -2.3889859e-08 + 2.7525562e-06) * fVar28 + -0.00019840874) * fVar28 +
         0.008333331) * fVar28 + -0.16666667) * fVar28 + 1.0) * fVar24;
  *(float *)(param_2 + 0x174) =
       (((((fVar28 * -2.6051615e-07 + 2.4760495e-05) * fVar28 + -0.0013888378) * fVar28 +
         0.041666638) * fVar28 + -0.5) * fVar28 + 1.0) * local_1e0;
  local_1f0 = local_1e4;
  local_1f8 = local_1d8;
  local_188 = fVar36;
  FUN_140cd3016(param_1,local_170,&local_118,param_7);
  local_1d8 = CONCAT44(local_1d8._4_4_,local_170[0] * local_170[0]);
  local_1cc = local_118;
  local_1e0 = local_118 * local_118;
  auVar23 = divpd(*param_5,_DAT_1499387d0);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *(double *)param_5[1];
  auVar26 = divpd(auVar27,_DAT_1499387d0);
  auVar23 = roundpd(auVar23,auVar23,3);
  auVar26 = roundpd(auVar26,auVar26,3);
  dVar18 = (*(double *)*param_5 - auVar23._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar19 = (*(double *)(*param_5 + 8) - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar33 = (*(double *)param_5[1] - auVar26._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar35 = (0.0 - auVar26._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar34 = sin(dVar18);
  dVar37 = sin(dVar19);
  dVar20 = sin(dVar33);
  sin(dVar35);
  dVar21 = cos(dVar18);
  dVar22 = cos(dVar19);
  dVar33 = cos(dVar33);
  cos(dVar35);
  dVar35 = dVar34 * dVar37 * dVar33 - dVar21 * dVar22 * dVar20;
  dVar18 = (-(dVar22 * dVar34 * dVar20) + dVar37 * dVar21 * dVar33) * -1.0;
  dVar19 = (dVar37 * dVar34 * dVar20 + dVar22 * dVar21 * dVar33) * 1.0;
  dVar25 = -dVar35;
  dVar34 = -(-(dVar34 * dVar22 * dVar33) - dVar21 * dVar37 * dVar20);
  dVar37 = local_198 * dVar18 - dVar25 * local_1c8;
  dVar20 = local_1b8 * dVar25 - local_198 * dVar34;
  dVar21 = local_1c8 * dVar34 - local_1b8 * dVar18;
  dVar21 = dVar21 + dVar21;
  dVar37 = dVar37 + dVar37;
  dVar20 = dVar20 + dVar20;
  *(double *)(param_2 + 0x80) = dVar25;
  *(double *)(param_2 + 0x88) = dVar34;
  auVar23._8_4_ = SUB84(dVar19,0);
  auVar23._0_8_ = dVar18;
  auVar23._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x90) = auVar23;
  *(double *)(param_2 + 0xa0) =
       0.0 - ((dVar20 * dVar34 - dVar37 * dVar18) + dVar19 * dVar21 + local_198);
  *(double *)(param_2 + 0xa8) =
       0.0 - (dVar20 * dVar35 + dVar18 * dVar21 + dVar19 * dVar37 + local_1b8);
  *(double *)(param_2 + 0xb0) =
       0.0 - (dVar19 * dVar20 + local_1c8 + (dVar37 * dVar25 - dVar21 * dVar34));
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  puVar10 = (undefined8 *)(param_2 + 0x80);
  puVar11 = (undefined8 *)(param_2 + 0xe0);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *param_2 = 2;
  *(undefined4 *)(param_2 + 4) = 3;
  *(float *)(param_2 + 8) = local_1cc;
  *(float *)(param_2 + 0xc) = local_1dc;
  *(float *)(param_2 + 0x164) = local_1e4;
  param_2[1] = param_2[1] & 0xfe | ABS(local_188 + -360.0) <= 1e-08;
  *(double *)(param_2 + 0x20) = local_198;
  *(double *)(param_2 + 0x28) = local_1b8;
  *(double *)(param_2 + 0x30) = local_1c8;
  uVar2 = *(undefined8 *)(*param_5 + 8);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)*param_5;
  *(undefined8 *)(param_2 + 0x40) = uVar2;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)param_5[1];
  *(double *)(param_2 + 0x50) = local_198;
  *(double *)(param_2 + 0x58) = local_1b8;
  *(double *)(param_2 + 0x60) = local_1c8;
  dVar18 = (double)local_1cc;
  *(double *)(param_2 + 0x68) = local_1a8 * dVar18;
  *(double *)(param_2 + 0x70) =
       ((dVar38 * dVar30 - dVar17 * dVar29) + dVar4 * dVar32 + 0.0) * dVar18;
  *(double *)(param_2 + 0x78) = ((dVar32 * dVar29 - dVar31) + dVar4 * dVar17 + 0.0) * dVar18;
  *(float *)(param_2 + 0x168) = local_1dc;
  *(undefined4 *)(param_2 + 0x16c) = (undefined4)local_1d8;
  *(float *)(param_2 + 0x170) = local_1e0;
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141878de8 FUN_141878de8 body=1854 status=ok
// SIG undefined FUN_141878de8(void)

undefined8 FUN_141878de8(longlong param_1,longlong param_2)

{
  double dVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1c8 [40];
  double local_1a0;
  double local_198;
  double local_190;
  float local_188;
  float local_184;
  double local_180;
  undefined1 local_178 [16];
  double local_160;
  double local_158 [6];
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
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_144a76660(param_2 + 0x38,&local_160);
  dVar6 = *(double *)(param_1 + 0x280) - *(double *)(param_2 + 0x60);
  dVar11 = *(double *)(param_1 + 0x278) - *(double *)(param_2 + 0x58);
  dVar8 = *(double *)(param_1 + 0x270) - *(double *)(param_2 + 0x50);
  dVar4 = dVar6 * dVar6 + dVar8 * dVar8 + dVar11 * dVar11;
  if (((dVar4 != 1.0) || (dVar7 = dVar6, dVar9 = dVar8, dVar12 = dVar11, NAN(dVar4))) &&
     (dVar7 = DAT_14c8464f0, dVar9 = DAT_14c8464e0, dVar12 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar4)) {
    dVar12 = 1.0 / SQRT(dVar4);
    dVar7 = dVar6 * dVar12;
    dVar9 = dVar8 * dVar12;
    dVar12 = dVar11 * dVar12;
  }
  fVar13 = (float)(dVar7 * local_158[1] + dVar9 * local_160 + dVar12 * local_158[0]);
  fVar10 = *(float *)(param_2 + 0x168);
  if ((*(float *)(param_2 + 0x170) * *(float *)(param_2 + 0x170) < (float)dVar4) ||
     (fVar13 < fVar10)) {
    dVar4 = *(double *)(param_1 + 0x2a0);
    if (*(double *)(param_1 + 0x2a0) <= *(double *)(param_1 + 0x2a8)) {
      dVar4 = *(double *)(param_1 + 0x2a8);
    }
    local_158[2] = *(double *)(param_1 + 0x2b8);
    local_190 = DAT_14c8462c0;
    local_1a0 = DAT_14c8462c8;
    local_198 = DAT_14c8462d0;
    local_158[3] = *(double *)(param_1 + 0x2c0);
    local_158[4] = *(double *)(param_1 + 0x2c8);
    dVar6 = local_160 * local_160 + local_158[0] * local_158[0];
    if ((dVar6 != 1.0) || (NAN(dVar6))) {
      dVar11 = DAT_14c8464e0;
      dVar7 = DAT_14c8464f0;
      dVar8 = DAT_14c8464e8;
      if (9.99999993922529e-09 <= dVar6) {
        dVar11 = local_160 * (1.0 / SQRT(dVar6));
        dVar7 = 0.0;
        dVar8 = local_158[0] * (1.0 / SQRT(dVar6));
      }
    }
    else {
      dVar11 = local_160;
      dVar7 = (double)(-(ulonglong)(local_158[1] == 0.0) & (ulonglong)local_158[1]);
      dVar8 = local_158[0];
    }
    dVar4 = (double)(float)dVar4;
    dVar6 = (DAT_14c8462c0 * dVar8 - dVar11 * DAT_14c8462c8) * dVar4;
    dVar9 = (DAT_14c8462d0 * dVar11 - dVar7 * DAT_14c8462c0) * dVar4;
    dVar12 = (DAT_14c8462c8 * dVar7 - dVar8 * DAT_14c8462d0) * dVar4;
    local_158[5] = local_158[2] - dVar12;
    local_128 = local_158[3] - dVar9;
    local_120 = local_158[4] - dVar6;
    local_118 = dVar12 + local_158[2];
    local_110 = dVar9 + local_158[3];
    local_108 = dVar6 + local_158[4];
    local_100 = local_158[2] + dVar11 * dVar4;
    local_f8 = local_158[3] + dVar8 * dVar4;
    local_f0 = local_158[4] + dVar7 * dVar4;
    local_e8 = local_158[2] - dVar11 * dVar4;
    local_e0 = local_158[3] - dVar8 * dVar4;
    local_d8 = local_158[4] - dVar7 * dVar4;
    fVar10 = fVar10 * fVar10;
    local_180 = (double)fVar10;
    lVar3 = 0x10;
    dVar4 = DAT_14c8462c8;
    local_188 = fVar13;
    do {
      dVar1 = local_158[1];
      dVar12 = local_158[0];
      dVar9 = local_160;
      fVar14 = (float)(local_198 * local_158[1] + local_190 * local_160 + dVar4 * local_158[0]);
      dVar11 = *(double *)((longlong)local_158 + lVar3 + 0x10) - *(double *)(param_2 + 0x60);
      dVar8 = *(double *)((longlong)local_158 + lVar3 + 8) - *(double *)(param_2 + 0x58);
      dVar7 = *(double *)((longlong)local_158 + lVar3) - *(double *)(param_2 + 0x50);
      fVar13 = (float)(dVar11 * local_158[1] + dVar7 * local_160 + dVar8 * local_158[0]);
      dVar6 = (double)(fVar14 * fVar13) -
              (local_198 * dVar11 + local_190 * dVar7 + dVar4 * dVar8) * local_180;
      fVar16 = fVar14 * fVar14 - fVar10;
      fVar15 = (float)(dVar6 + dVar6);
      fVar13 = fVar16 * -4.0 *
               (float)((double)(fVar13 * fVar13) -
                      (dVar11 * dVar11 + dVar7 * dVar7 + dVar8 * dVar8) * local_180) +
               fVar15 * fVar15;
      if (fVar13 >= 0.0 && fVar13 != 0.0) {
        local_178 = ZEXT416((uint)(float)*(double *)(param_1 + 0x2b0));
        local_184 = fVar10;
        if (fVar13 < 0.0) {
          fVar13 = sqrtf(fVar13);
          dVar4 = local_1a0;
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        fVar5 = (-fVar15 - fVar13) / (fVar16 + fVar16);
        dVar6 = (double)fVar5;
        dVar6 = (local_198 * dVar6 + dVar11) * dVar1 +
                (dVar6 * local_190 + dVar7) * dVar9 + (dVar4 * dVar6 + dVar8) * dVar12;
        fVar13 = (fVar13 - fVar15) / (fVar16 + fVar16);
        dVar4 = (double)fVar13;
        dVar8 = (local_198 * dVar4 + dVar11) * dVar1 +
                (dVar4 * local_190 + dVar7) * dVar9 + (local_1a0 * dVar4 + dVar8) * dVar12;
        dVar4 = local_1a0;
        fVar10 = local_184;
        if ((0.0 <= dVar8) || (0.0 <= dVar6)) {
          if (dVar8 < 0.0) {
            fVar13 = *(float *)(&DAT_14b3f5290 + (ulonglong)(0.0 < fVar14) * 4);
          }
          if (dVar6 < 0.0) {
            fVar5 = *(float *)(&DAT_14b3f5290 + (ulonglong)(0.0 < fVar14) * 4);
          }
          fVar14 = fVar5;
          if (fVar5 <= fVar13) {
            fVar14 = fVar13;
          }
          if (-(float)local_178._0_4_ <= fVar14) {
            if (fVar13 <= fVar5) {
              fVar5 = fVar13;
            }
            fVar13 = local_188;
            if (fVar5 <= (float)local_178._0_4_) goto LAB_141879448;
          }
        }
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != 0x88);
    uVar2 = 0;
  }
  else {
LAB_141879448:
    *(float *)(param_1 + 0x268) = fVar13;
    uVar2 = 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 141879528 FUN_141879528 body=3279 status=ok
// SIG undefined FUN_141879528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141879528(longlong param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
                  undefined1 (*param_5) [16],undefined8 *param_6,undefined8 param_7,longlong param_8
                  )

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_1b8 [32];
  double local_198;
  double local_180;
  double local_178;
  char local_170 [16];
  longlong *local_160;
  undefined4 local_148 [2];
  float local_140;
  undefined4 uStack_13c;
  ushort local_128;
  byte local_120;
  float local_118;
  undefined4 uStack_114;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar2 = *param_6;
  dVar12 = (double)FUN_144719204(*(undefined8 *)*param_5);
  dVar13 = (double)FUN_144719204(*(undefined8 *)(*param_5 + 8));
  local_198 = sin(dVar12 * 0.017453292519943295);
  dVar12 = cos(dVar12 * 0.017453292519943295);
  dVar14 = sin(dVar13 * 0.017453292519943295);
  dVar13 = cos(dVar13 * 0.017453292519943295);
  local_170[0] = '\0';
  local_148[0] = 0;
  FUN_1456bb102(local_170,uVar2);
  pfVar8 = &local_140;
  FUN_1448729ea(param_1 + 0x48,pfVar8,local_170);
  if (local_120 == 3) {
    fVar29 = local_140;
    bVar4 = 3;
  }
  else {
    pfVar9 = &local_118;
    FUN_1400b56fe(pfVar9,&local_140,3);
    fVar29 = local_118;
    if (local_f8 == 0) {
      fVar29 = 100.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_100) {
        pfVar9 = (float *)CONCAT44(uStack_114,local_118);
      }
      (*pcVar3)(pfVar9);
    }
    bVar4 = local_120;
    if (0x18 < local_100) {
      FUN_1400020a8(CONCAT44(uStack_114,local_118));
      bVar4 = local_120;
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_128) {
      pfVar8 = (float *)CONCAT44(uStack_13c,local_140);
    }
    (*pcVar3)(pfVar8);
  }
  if (0x18 < local_128) {
    FUN_1400020a8(CONCAT44(uStack_13c,local_140));
  }
  FUN_1448173f8(local_148);
  if ((local_170[0] == '\x03') && (local_160 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_160 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  local_170[0] = '\0';
  local_148[0] = 0;
  FUN_1456bb102(local_170,uVar2);
  pfVar8 = &local_140;
  FUN_1448729ea(param_1 + 0x98,pfVar8,local_170);
  if (local_120 == 3) {
    fVar31 = local_140;
    bVar4 = 3;
  }
  else {
    pfVar9 = &local_118;
    FUN_1400b56fe(pfVar9,&local_140,3);
    fVar31 = local_118;
    if (local_f8 == 0) {
      fVar31 = 100.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_100) {
        pfVar9 = (float *)CONCAT44(uStack_114,local_118);
      }
      (*pcVar3)(pfVar9);
    }
    bVar4 = local_120;
    if (0x18 < local_100) {
      FUN_1400020a8(CONCAT44(uStack_114,local_118));
      bVar4 = local_120;
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_128) {
      pfVar8 = (float *)CONCAT44(uStack_13c,local_140);
    }
    (*pcVar3)(pfVar8);
  }
  if (0x18 < local_128) {
    FUN_1400020a8(CONCAT44(uStack_13c,local_140));
  }
  FUN_1448173f8(local_148);
  if ((local_170[0] == '\x03') && (local_160 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_160 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  local_170[0] = '\0';
  local_148[0] = 0;
  FUN_1456bb102(local_170,uVar2);
  pfVar8 = &local_140;
  FUN_1448729ea(param_1 + 0xe8,pfVar8,local_170);
  if (local_120 == 3) {
    uVar30 = 3;
    fVar32 = local_140;
  }
  else {
    pfVar9 = &local_118;
    FUN_1400b56fe(pfVar9,&local_140,3);
    fVar32 = local_118;
    if (local_f8 == 0) {
      fVar32 = 400.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_100) {
        pfVar9 = (float *)CONCAT44(uStack_114,local_118);
      }
      (*pcVar3)(pfVar9);
    }
    if (0x18 < local_100) {
      FUN_1400020a8(CONCAT44(uStack_114,local_118));
    }
    uVar30 = (uint)local_120;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar30 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_128) {
      pfVar8 = (float *)CONCAT44(uStack_13c,local_140);
    }
    (*pcVar3)(pfVar8);
  }
  if (0x18 < local_128) {
    FUN_1400020a8(CONCAT44(uStack_13c,local_140));
  }
  FUN_1448173f8(local_148);
  if ((local_170[0] == '\x03') && (local_160 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_160 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  local_178 = dVar14 * dVar12;
  fVar29 = fVar29 * 0.5;
  local_180 = dVar13 * dVar12;
  dVar13 = (double)(fVar31 * 0.5);
  dVar12 = (double)(fVar32 * 0.5);
  if (param_8 != 0) {
    if (*(char *)(param_8 + 0x7c) == '\x01') {
      dVar12 = (double)*(float *)(param_8 + 0x78);
    }
    uVar11 = (ulonglong)dVar12 >> 0x20;
    uVar30 = SUB84(dVar12,0);
    if (*(char *)(param_8 + 0x98) == '\x01') {
      if (*(char *)(param_8 + 0x7c) == '\0') {
        dVar12 = *(double *)(param_8 + 0x80) * 0.5;
      }
      uVar10 = -(ulonglong)(0.0 < *(double *)(param_8 + 0x80));
      dVar12 = (double)(CONCAT44(~(uint)(uVar10 >> 0x20) & (uint)uVar11,~(uint)uVar10 & uVar30) |
                       (ulonglong)dVar12 & uVar10);
      uVar11 = -(ulonglong)(0.0 < *(double *)(param_8 + 0x88));
      dVar13 = (double)(~uVar11 & (ulonglong)dVar13 |
                       (ulonglong)(*(double *)(param_8 + 0x88) * 0.5) & uVar11);
      if (0.0 < *(double *)(param_8 + 0x90)) {
        fVar29 = (float)(*(double *)(param_8 + 0x90) * 0.5);
      }
    }
  }
  *param_2 = 5;
  param_2[1] = param_2[1] & 0xfe;
  *(undefined4 *)(param_2 + 4) = 1;
  *(float *)(param_2 + 8) = (float)dVar12;
  *(float *)(param_2 + 0xc) = (float)dVar13;
  *(float *)(param_2 + 0x10) = fVar29;
  *(float *)(param_2 + 0x164) = (float)dVar12;
  auVar23 = _DAT_1499387d0;
  dVar13 = (double)DAT_1499387d0;
  dVar14 = DAT_1499387d0._8_8_;
  auVar22 = divpd(*param_5,_DAT_1499387d0);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(double *)param_5[1];
  auVar25 = divpd(auVar25,_DAT_1499387d0);
  auVar22 = roundpd(auVar22,auVar22,3);
  auVar25 = roundpd(auVar25,auVar25,3);
  dVar33 = (*(double *)*param_5 - auVar22._0_8_ * dVar13) * 0.008726646259971648;
  dVar35 = (*(double *)(*param_5 + 8) - auVar22._8_8_ * dVar14) * 0.008726646259971648;
  dVar20 = (*(double *)param_5[1] - auVar25._0_8_ * dVar13) * 0.008726646259971648;
  dVar28 = (0.0 - auVar25._8_8_ * dVar14) * 0.008726646259971648;
  dVar15 = sin(dVar33);
  dVar16 = sin(dVar35);
  dVar17 = sin(dVar20);
  sin(dVar28);
  dVar18 = cos(dVar33);
  dVar19 = cos(dVar35);
  dVar20 = cos(dVar20);
  cos(dVar28);
  dVar21 = dVar15 * dVar16 * dVar20 - dVar18 * dVar19 * dVar17;
  dVar33 = *param_4;
  dVar35 = param_4[1];
  dVar24 = -dVar21;
  dVar27 = -(-(dVar15 * dVar19 * dVar20) - dVar18 * dVar16 * dVar17);
  dVar34 = (-(dVar19 * dVar15 * dVar17) + dVar16 * dVar18 * dVar20) * -1.0;
  dVar17 = (dVar16 * dVar15 * dVar17 + dVar19 * dVar18 * dVar20) * 1.0;
  dVar16 = param_4[2] * 1.0;
  dVar20 = dVar35 * dVar24 - dVar33 * dVar27;
  dVar28 = dVar16 * dVar27 - dVar35 * dVar34;
  dVar15 = *param_4 * dVar34 - dVar24 * dVar16;
  dVar28 = dVar28 + dVar28;
  dVar15 = dVar15 + dVar15;
  dVar20 = dVar20 + dVar20;
  *(double *)(param_2 + 0x80) = dVar24;
  *(double *)(param_2 + 0x88) = dVar27;
  *(double *)(param_2 + 0x90) = dVar34;
  *(double *)(param_2 + 0x98) = dVar17;
  *(double *)(param_2 + 0xa0) =
       0.0 - ((dVar20 * dVar27 - dVar15 * dVar34) + dVar17 * dVar28 + dVar33);
  *(double *)(param_2 + 0xa8) = 0.0 - (dVar20 * dVar21 + dVar34 * dVar28 + dVar17 * dVar15 + dVar35)
  ;
  *(double *)(param_2 + 0xb0) =
       0.0 - (dVar17 * dVar20 + dVar16 + (dVar15 * dVar24 - dVar28 * dVar27));
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(double *)(param_2 + 0x30) = param_4[2];
  dVar20 = param_4[1];
  *(double *)(param_2 + 0x20) = *param_4;
  *(double *)(param_2 + 0x28) = dVar20;
  dVar20 = local_198 * dVar12;
  dVar28 = local_178 * dVar12;
  dVar12 = local_180 * dVar12;
  if (*(char *)(param_1 + 0x138) == '\x01') {
    *(double *)(param_2 + 0x20) = *(double *)(param_2 + 0x20) + dVar12;
    *(double *)(param_2 + 0x28) = *(double *)(param_2 + 0x28) + dVar28;
    *(double *)(param_2 + 0x30) = *(double *)(param_2 + 0x30) + dVar20;
    *(double *)(param_2 + 0x68) = dVar12 + dVar12;
    *(double *)(param_2 + 0x70) = dVar28 + dVar28;
    *(double *)(param_2 + 0x78) = dVar20 + dVar20;
    auVar22 = divpd(*param_5,auVar23);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(double *)param_5[1];
    auVar25 = divpd(auVar26,auVar23);
    auVar23 = roundpd(auVar22,auVar22,3);
    auVar22 = roundpd(auVar25,auVar25,3);
    dVar12 = (*(double *)*param_5 - auVar23._0_8_ * dVar13) * 0.008726646259971648;
    dVar20 = (*(double *)(*param_5 + 8) - auVar23._8_8_ * dVar14) * 0.008726646259971648;
    dVar13 = (*(double *)param_5[1] - auVar22._0_8_ * dVar13) * 0.008726646259971648;
    dVar14 = (0.0 - auVar22._8_8_ * dVar14) * 0.008726646259971648;
    local_198 = sin(dVar12);
    dVar33 = sin(dVar20);
    dVar35 = sin(dVar13);
    sin(dVar14);
    dVar12 = cos(dVar12);
    dVar16 = cos(dVar20);
    dVar13 = cos(dVar13);
    cos(dVar14);
    dVar17 = local_198 * dVar33 * dVar13 - dVar12 * dVar16 * dVar35;
    dVar15 = *(double *)(param_2 + 0x28);
    dVar20 = (-(dVar16 * local_198 * dVar35) + dVar33 * dVar12 * dVar13) * -1.0;
    dVar28 = (dVar33 * local_198 * dVar35 + dVar16 * dVar12 * dVar13) * 1.0;
    dVar18 = -dVar17;
    dVar33 = -(-(local_198 * dVar16 * dVar13) - dVar12 * dVar33 * dVar35);
    dVar35 = *(double *)(param_2 + 0x30) * 1.0;
    dVar12 = dVar15 * dVar18 - *(double *)(param_2 + 0x20) * dVar33;
    dVar13 = dVar35 * dVar33 - dVar15 * dVar20;
    dVar14 = *(double *)(param_2 + 0x20) * dVar20 - dVar18 * dVar35;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    *(double *)(param_2 + 0xe0) = dVar18;
    *(double *)(param_2 + 0xe8) = dVar33;
    auVar23._8_4_ = SUB84(dVar28,0);
    auVar23._0_8_ = dVar20;
    auVar23._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0xf0) = auVar23;
    *(double *)(param_2 + 0x100) =
         0.0 - ((dVar12 * dVar33 - dVar14 * dVar20) + dVar28 * dVar13 + *(double *)(param_2 + 0x20))
    ;
    *(double *)(param_2 + 0x108) =
         0.0 - (dVar12 * dVar17 + dVar20 * dVar13 + dVar28 * dVar14 + dVar15);
    *(double *)(param_2 + 0x110) =
         0.0 - (dVar28 * dVar12 + dVar35 + (dVar14 * dVar18 - dVar13 * dVar33));
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined8 *)(param_2 + 0x120) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0x128) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0x130) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0x138) = 0;
  }
  else {
    *(double *)(param_2 + 0x68) = dVar12;
    *(double *)(param_2 + 0x70) = dVar28;
    *(double *)(param_2 + 0x78) = dVar20;
    puVar6 = (undefined8 *)(param_2 + 0x80);
    puVar7 = (undefined8 *)(param_2 + 0xe0);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)param_5[1];
  uVar2 = *(undefined8 *)(*param_5 + 8);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)*param_5;
  *(undefined8 *)(param_2 + 0x40) = uVar2;
  dVar12 = param_4[1];
  *(double *)(param_2 + 0x50) = *param_4;
  *(double *)(param_2 + 0x58) = dVar12;
  *(double *)(param_2 + 0x60) = param_4[2];
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14187a1f8 FUN_14187a1f8 body=2417 status=ok
// SIG undefined FUN_14187a1f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14187a1f8(longlong param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
                  undefined1 (*param_5) [16],undefined8 *param_6,undefined8 param_7,longlong param_8
                  )

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  float local_170;
  undefined8 local_160;
  float local_158;
  undefined1 local_154 [4];
  char local_150 [16];
  longlong *local_140;
  undefined4 local_128 [2];
  float local_120;
  undefined4 uStack_11c;
  ushort local_108;
  byte local_100;
  float local_f8;
  undefined4 uStack_f4;
  ushort local_e0;
  byte local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_160 = *param_6;
  if ((param_8 == 0) || (*(char *)(param_8 + 0x7c) != '\x01')) {
    local_150[0] = '\0';
    local_128[0] = 0;
    FUN_1456bb102(local_150,local_160);
    pfVar8 = &local_120;
    FUN_1448729ea(param_1 + 0x48,pfVar8,local_150);
    if (local_100 == 3) {
      fVar24 = local_120;
      bVar5 = 3;
    }
    else {
      pfVar7 = &local_f8;
      FUN_1400b56fe(pfVar7,&local_120,3);
      fVar24 = local_f8;
      if (local_d8 == 0) {
        fVar24 = 200.0;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_e0) {
          pfVar7 = (float *)CONCAT44(uStack_f4,local_f8);
        }
        (*pcVar2)(pfVar7);
      }
      bVar5 = local_100;
      if (0x18 < local_e0) {
        FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
        bVar5 = local_100;
      }
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_108) {
        pfVar8 = (float *)CONCAT44(uStack_11c,local_120);
      }
      (*pcVar2)(pfVar8);
    }
    if (0x18 < local_108) {
      FUN_1400020a8(CONCAT44(uStack_11c,local_120));
    }
    FUN_1448173f8(local_128);
    if ((local_150[0] == '\x03') && (local_140 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_140 + 0x10))();
      }
    }
    if (param_8 == 0) goto LAB_14187a36e;
  }
  else {
    fVar24 = *(float *)(param_8 + 0x78);
  }
  if ((*(byte *)(param_8 + 0x278) & 4) != 0) {
    fVar10 = (float)FUN_140acff56(param_6[1]);
    fVar24 = fVar24 * fVar10;
  }
LAB_14187a36e:
  local_178 = param_3;
  local_170 = fVar24;
  FUN_140cd3016(param_1,local_154,&local_158,param_7);
  *(float *)(param_2 + 0x170) = local_158;
  *(float *)(param_2 + 0x16c) = local_158 * local_158;
  *(float *)(param_2 + 0x164) = fVar24;
  *(double *)(param_2 + 0x30) = param_4[2];
  dVar11 = param_4[1];
  *(double *)(param_2 + 0x20) = *param_4;
  *(double *)(param_2 + 0x28) = dVar11;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)param_5[1];
  uVar9 = *(undefined8 *)(*param_5 + 8);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)*param_5;
  *(undefined8 *)(param_2 + 0x40) = uVar9;
  *(double *)(param_2 + 0x60) = param_4[2];
  dVar11 = param_4[1];
  *(double *)(param_2 + 0x50) = *param_4;
  *(double *)(param_2 + 0x58) = dVar11;
  dVar11 = (double)FUN_144719204(*(undefined8 *)*param_5);
  dVar12 = (double)FUN_144719204(*(undefined8 *)(*param_5 + 8));
  dVar13 = sin(dVar11 * 0.017453292519943295);
  dVar11 = cos(dVar11 * 0.017453292519943295);
  dVar14 = sin(dVar12 * 0.017453292519943295);
  dVar12 = cos(dVar12 * 0.017453292519943295);
  uVar9 = local_160;
  dVar19 = (double)fVar24;
  *(double *)(param_2 + 0x68) = dVar12 * dVar11 * dVar19;
  *(double *)(param_2 + 0x70) = dVar14 * dVar11 * dVar19;
  *(double *)(param_2 + 0x78) = dVar13 * dVar19;
  *param_2 = 6;
  *(undefined4 *)(param_2 + 4) = 2;
  *(float *)(param_2 + 8) = local_158;
  param_2[1] = param_2[1] | 1;
  local_150[0] = '\0';
  local_128[0] = 0;
  FUN_1456bb102(local_150,local_160);
  pfVar8 = &local_120;
  FUN_1448729ea(param_1 + 0xf0,pfVar8,local_150);
  if (local_100 == 3) {
    uVar6 = 3;
    fVar24 = local_120;
  }
  else {
    pfVar7 = &local_f8;
    FUN_1400b56fe(pfVar7,&local_120,3);
    fVar24 = 0.0;
    if (local_d8 != 0) {
      fVar24 = local_f8;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_e0) {
        pfVar7 = (float *)CONCAT44(uStack_f4,local_f8);
      }
      (*pcVar2)(pfVar7);
      uVar9 = local_160;
    }
    if (0x18 < local_e0) {
      FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
    }
    uVar6 = (uint)local_100;
  }
  *(float *)(param_2 + 0x174) = fVar24 * fVar24;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_108) {
      pfVar8 = (float *)CONCAT44(uStack_11c,local_120);
    }
    (*pcVar2)(pfVar8);
    uVar9 = local_160;
  }
  if (0x18 < local_108) {
    FUN_1400020a8(CONCAT44(uStack_11c,local_120));
  }
  FUN_1448173f8(local_128);
  if ((local_150[0] == '\x03') && (local_140 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_140 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
  local_150[0] = '\0';
  local_128[0] = 0;
  FUN_1456bb102(local_150,uVar9);
  pfVar8 = &local_120;
  FUN_1448729ea(param_1 + 0xa0,pfVar8,local_150);
  if (local_100 == 3) {
    uVar6 = 3;
    fVar24 = local_120;
  }
  else {
    pfVar7 = &local_f8;
    FUN_1400b56fe(pfVar7,&local_120,3);
    fVar24 = 0.0;
    if (local_d8 != 0) {
      fVar24 = local_f8;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_e0) {
        pfVar7 = (float *)CONCAT44(uStack_f4,local_f8);
      }
      (*pcVar2)(pfVar7);
    }
    if (0x18 < local_e0) {
      FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
    }
    uVar6 = (uint)local_100;
  }
  *(float *)(param_2 + 0x168) = fVar24;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_108) {
      pfVar8 = (float *)CONCAT44(uStack_11c,local_120);
    }
    (*pcVar2)(pfVar8);
  }
  if (0x18 < local_108) {
    FUN_1400020a8(CONCAT44(uStack_11c,local_120));
  }
  FUN_1448173f8(local_128);
  if ((local_150[0] == '\x03') && (local_140 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_140 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
  auVar20 = divpd(*param_5,_DAT_1499387d0);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *(double *)param_5[1];
  auVar22 = divpd(auVar22,_DAT_1499387d0);
  auVar20 = roundpd(auVar20,auVar20,3);
  auVar22 = roundpd(auVar22,auVar22,3);
  dVar11 = (*(double *)*param_5 - auVar20._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar12 = (*(double *)(*param_5 + 8) - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar13 = (*(double *)param_5[1] - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar14 = (0.0 - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar19 = sin(dVar11);
  dVar15 = sin(dVar12);
  dVar16 = sin(dVar13);
  sin(dVar14);
  dVar17 = cos(dVar11);
  dVar12 = cos(dVar12);
  dVar13 = cos(dVar13);
  cos(dVar14);
  dVar18 = dVar19 * dVar15 * dVar13 - dVar17 * dVar12 * dVar16;
  dVar3 = *param_4;
  dVar4 = param_4[1];
  dVar21 = -dVar18;
  dVar23 = -(-(dVar19 * dVar12 * dVar13) - dVar17 * dVar15 * dVar16);
  dVar11 = (-(dVar12 * dVar19 * dVar16) + dVar15 * dVar17 * dVar13) * -1.0;
  dVar12 = (dVar15 * dVar19 * dVar16 + dVar12 * dVar17 * dVar13) * 1.0;
  dVar15 = param_4[2] * 1.0;
  dVar13 = dVar4 * dVar21 - dVar3 * dVar23;
  dVar14 = dVar15 * dVar23 - dVar4 * dVar11;
  dVar19 = *param_4 * dVar11 - dVar21 * dVar15;
  dVar14 = dVar14 + dVar14;
  dVar19 = dVar19 + dVar19;
  dVar13 = dVar13 + dVar13;
  *(double *)(param_2 + 0x80) = dVar21;
  *(double *)(param_2 + 0x88) = dVar23;
  auVar20._8_4_ = SUB84(dVar12,0);
  auVar20._0_8_ = dVar11;
  auVar20._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x90) = auVar20;
  *(double *)(param_2 + 0xa0) =
       0.0 - ((dVar13 * dVar23 - dVar19 * dVar11) + dVar12 * dVar14 + dVar3);
  *(double *)(param_2 + 0xa8) = 0.0 - (dVar13 * dVar18 + dVar11 * dVar14 + dVar12 * dVar19 + dVar4);
  *(double *)(param_2 + 0xb0) =
       0.0 - (dVar12 * dVar13 + dVar15 + (dVar19 * dVar21 - dVar14 * dVar23));
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14187ab6a FUN_14187ab6a body=1896 status=ok
// SIG undefined FUN_14187ab6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14187ab6a(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  longlong in_stack_00000038;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 7;
  param_2[1] = param_2[1] | 1;
  iVar5 = DAT_14c9647dc;
  lVar14 = DAT_14c9647c8;
  if (in_stack_00000038 == 0) {
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x164) = 0;
    goto LAB_14187b21b;
  }
  if ((((*(int *)(in_stack_00000038 + 0x74) == 0) ||
       (uVar9 = *(uint *)(in_stack_00000038 + 0x70), (int)uVar9 < 0)) ||
      (DAT_14c9647dc <= (int)uVar9)) ||
     (((plVar13 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(in_stack_00000038 + 0x74))) ||
      ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) {
LAB_14187b1d0:
    *(undefined4 *)(param_2 + 0x14) = 0;
    iVar5 = 0;
  }
  else {
    if (*plVar13 == 0) goto LAB_14187b1d0;
    uVar9 = *(uint *)(*plVar13 + 0xc);
    *(uint *)(param_2 + 0x14) = uVar9;
    if ((int)uVar9 < iVar5) {
      lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(lVar14 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar5 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar5 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar5 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar11;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar5 = iVar11;
      }
    }
  }
  *(int *)(param_2 + 0x18) = iVar5;
  *(undefined4 *)(param_2 + 0x164) = 0;
  if (((*(int *)(in_stack_00000038 + 0x74) != 0) &&
      (uVar9 = *(uint *)(in_stack_00000038 + 0x70), -1 < (int)uVar9)) &&
     (((int)uVar9 < DAT_14c9647dc &&
      ((((plVar13 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
         plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(in_stack_00000038 + 0x74))) &&
        ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) && (lVar14 = *plVar13, lVar14 != 0)))))) {
    lVar6 = FUN_1401726e6();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
       (lVar10 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30),
       *(longlong *)(lVar10 + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
      lVar6 = *(longlong *)(lVar14 + 0x1c8);
      if (lVar6 == 0) {
        puVar7 = &DAT_14c8464e0;
        uVar2 = DAT_14c8464f0;
      }
      else {
        puVar7 = (undefined8 *)(lVar6 + 0x260);
        uVar2 = *(undefined8 *)(lVar6 + 0x270);
      }
      uVar4 = puVar7[1];
      *(undefined8 *)(param_2 + 0x20) = *puVar7;
      *(undefined8 *)(param_2 + 0x28) = uVar4;
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      lVar6 = *(longlong *)(lVar14 + 0x1c8);
      if (lVar6 == 0) {
        local_b8 = DAT_14c846508;
        local_c8 = DAT_14c8464f8;
        dStack_c0 = DAT_14c846500;
      }
      else {
        dVar21 = *(double *)(lVar6 + 0x240);
        dVar19 = *(double *)(lVar6 + 0x248);
        dVar27 = *(double *)(lVar6 + 0x250);
        dVar29 = *(double *)(lVar6 + 600);
        pdVar8 = *(double **)(lVar6 + 0x228);
        local_e8 = dVar21;
        dStack_e0 = dVar19;
        local_d8 = dVar27;
        dStack_d0 = dVar29;
        if (pdVar8 == (double *)0x0) {
          lVar10 = 0x40;
          pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
          dVar16 = DAT_14c8463d8;
          *pdVar8 = DAT_14c8463d0;
          pdVar8[1] = dVar16;
          dVar16 = DAT_14c8463e8;
          pdVar8[2] = DAT_14c8463e0;
          pdVar8[3] = dVar16;
          dVar16 = DAT_14c846500;
          pdVar8[4] = DAT_14c8464f8;
          pdVar8[5] = dVar16;
          puVar7 = DAT_14c846508;
          pdVar8[6] = (double)DAT_14c846508;
          *(double **)(lVar6 + 0x228) = pdVar8;
        }
        auVar22._8_4_ = (int)-(ulonglong)(dVar19 != pdVar8[1]);
        auVar22._0_8_ = -(ulonglong)(dVar21 != *pdVar8);
        auVar22._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar8[1]) >> 0x20);
        iVar5 = movmskpd((int)puVar7,auVar22);
        auVar25._8_4_ = (int)-(ulonglong)(dVar29 != pdVar8[3]);
        auVar25._0_8_ = -(ulonglong)(dVar27 != pdVar8[2]);
        auVar25._12_4_ = (int)(-(ulonglong)(dVar29 != pdVar8[3]) >> 0x20);
        uVar9 = movmskpd((int)lVar10,auVar25);
        if ((uVar9 & 0x3fffffff) != 0 || iVar5 != 0) {
          pdVar8[2] = local_d8;
          pdVar8[3] = dStack_d0;
          *pdVar8 = local_e8;
          pdVar8[1] = dStack_e0;
          FUN_1448052ee(&local_e8,&local_c8);
          pdVar8[6] = (double)local_b8;
          pdVar8[4] = local_c8;
          pdVar8[5] = dStack_c0;
        }
        local_b8 = (undefined8 *)pdVar8[6];
        local_c8 = pdVar8[4];
        dStack_c0 = pdVar8[5];
      }
      *(undefined8 **)(param_2 + 0x48) = local_b8;
      *(double *)(param_2 + 0x38) = local_c8;
      *(double *)(param_2 + 0x40) = dStack_c0;
      *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x28);
      lVar14 = *(longlong *)(lVar14 + 0x1c8);
      dVar21 = DAT_14c8462e8;
      dVar19 = DAT_14c8462d8;
      dVar27 = DAT_14c8462e0;
      if (lVar14 != 0) {
        dVar16 = *(double *)(lVar14 + 0x240);
        dVar3 = *(double *)(lVar14 + 0x248);
        dVar17 = *(double *)(lVar14 + 0x250);
        dVar19 = *(double *)(lVar14 + 600);
        dVar27 = dVar16 * 0.0 - dVar3 * 1.0;
        dVar28 = dVar3 * 0.0 - dVar17 * 0.0;
        dVar29 = dVar17 * 1.0 - dVar16 * 0.0;
        dVar28 = dVar28 + dVar28;
        dVar29 = dVar29 + dVar29;
        dVar27 = dVar27 + dVar27;
        dVar21 = dVar27 * dVar19 + 0.0 + (dVar29 * dVar16 - dVar28 * dVar3);
        dVar19 = (dVar27 * dVar3 - dVar29 * dVar17) + dVar19 * dVar28 + 1.0;
        dVar27 = (dVar17 * dVar28 - dVar16 * dVar27) + *(double *)(lVar14 + 600) * dVar29 + 0.0;
      }
      *(double *)(param_2 + 0x68) = dVar19;
      *(double *)(param_2 + 0x70) = dVar27;
      *(double *)(param_2 + 0x78) = dVar21;
      auVar22 = divpd(*(undefined1 (*) [16])(param_2 + 0x38),_DAT_1499387d0);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(double *)(param_2 + 0x48);
      auVar25 = divpd(auVar24,_DAT_1499387d0);
      auVar22 = roundpd(auVar22,auVar22,3);
      auVar25 = roundpd(auVar25,auVar25,3);
      dVar21 = (*(double *)*(undefined1 (*) [16])(param_2 + 0x38) -
               auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar19 = (*(double *)(param_2 + 0x40) - auVar22._8_8_ * DAT_1499387d0._8_8_) *
               0.008726646259971648;
      dVar27 = (*(double *)(param_2 + 0x48) - auVar25._0_8_ * (double)DAT_1499387d0) *
               0.008726646259971648;
      dVar29 = (0.0 - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar16 = sin(dVar21);
      dVar17 = sin(dVar19);
      dVar28 = sin(dVar27);
      sin(dVar29);
      dVar18 = cos(dVar21);
      dVar19 = cos(dVar19);
      dVar27 = cos(dVar27);
      cos(dVar29);
      dVar20 = dVar16 * dVar17 * dVar27 - dVar18 * dVar19 * dVar28;
      dVar3 = *(double *)(param_2 + 0x58);
      dVar23 = -dVar20;
      dVar26 = -(-(dVar16 * dVar19 * dVar27) - dVar18 * dVar17 * dVar28);
      dVar21 = (-(dVar19 * dVar16 * dVar28) + dVar17 * dVar18 * dVar27) * -1.0;
      dVar19 = (dVar17 * dVar16 * dVar28 + dVar19 * dVar18 * dVar27) * 1.0;
      dVar17 = *(double *)(param_2 + 0x60) * 1.0;
      dVar27 = dVar3 * dVar23 - *(double *)(param_2 + 0x50) * dVar26;
      dVar29 = dVar17 * dVar26 - dVar3 * dVar21;
      dVar16 = *(double *)(param_2 + 0x50) * dVar21 - dVar23 * dVar17;
      dVar29 = dVar29 + dVar29;
      dVar16 = dVar16 + dVar16;
      dVar27 = dVar27 + dVar27;
      *(double *)(param_2 + 0x80) = dVar23;
      *(double *)(param_2 + 0x88) = dVar26;
      auVar1._8_4_ = SUB84(dVar19,0);
      auVar1._0_8_ = dVar21;
      auVar1._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x90) = auVar1;
      *(double *)(param_2 + 0xa0) =
           0.0 - ((dVar27 * dVar26 - dVar16 * dVar21) +
                 dVar19 * dVar29 + *(double *)(param_2 + 0x50));
      *(double *)(param_2 + 0xa8) =
           0.0 - (dVar27 * dVar20 + dVar21 * dVar29 + dVar19 * dVar16 + dVar3);
      *(double *)(param_2 + 0xb0) =
           0.0 - (dVar19 * dVar27 + dVar17 + (dVar16 * dVar23 - dVar29 * dVar26));
      *(undefined8 *)(param_2 + 0xb8) = 0;
      *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
      *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
      *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
      *(undefined8 *)(param_2 + 0xd8) = 0;
      puVar7 = (undefined8 *)(param_2 + 0x80);
      puVar12 = (undefined8 *)(param_2 + 0xe0);
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_108);
    }
  }
LAB_14187b21b:
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187b2d4 FUN_14187b2d4 body=590 status=ok
// SIG undefined FUN_14187b2d4(void)

void FUN_14187b2d4(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_2 + 0x39c) & 1;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_2 + 0x39c) >> 2 & 1;
  *(byte *)((longlong)param_1 + 0x73) = *(byte *)((longlong)param_2 + 0x39c) >> 3 & 1;
  uVar8 = (**(code **)(*param_2 + 0x140))(param_2,0);
  *(undefined4 *)(param_1 + 0xd) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x394);
  *(byte *)(param_1 + 0xe) = *(byte *)((longlong)param_2 + 0x39c) >> 4 & 1;
  if (param_1 + 3 != param_2 + 0xb) {
    plVar6 = param_2 + 0xb;
    if ((longlong *)param_2[0x11] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[0x11];
    }
    FUN_1400709d4(param_1 + 3,plVar6,(int)param_2[0x12],*(undefined4 *)((longlong)param_1 + 0x54));
  }
  if (param_2[10] == 0) {
    local_38 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(param_2[10] + 8);
    puVar7 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar7 = puVar1;
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar7,1);
  }
  if (*param_1 != local_38) {
    param_1[2] = 0;
  }
  *param_1 = local_38;
  lVar5 = param_2[0x3f];
  lVar3 = param_2[0x40];
  param_1[0x11] = param_2[0x41];
  param_1[0xf] = lVar5;
  param_1[0x10] = lVar3;
  lVar5 = param_2[0x42];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x214);
  lVar3 = param_2[0x43];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x21c);
  param_1[0x14] = param_2[0x44];
  *(int *)(param_1 + 0x12) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar8;
  *(int *)(param_1 + 0x13) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  lVar5 = param_2[7];
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  bVar4 = DAT_14c950c29;
  param_1[0xc] = lVar5;
  lVar5 = param_2[5];
  if ((lVar5 != 0) && ((bVar4 & 1) != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0xb] = lVar5;
  FUN_1403e062e(param_1 + 0x19,param_2 + 0x80);
  (**(code **)(param_1[0x1b] + 0x20))(param_1 + 0x1b,0);
  param_1[0x1c] = param_2[0x14];
  FUN_1406022fe(param_1 + 0x1d,param_2 + 0x15);
  if ((char)param_2[0x9b] != '\0') {
    param_1[0x17] = param_2[0x9e];
    lVar5 = param_2[0x9d];
    param_1[0x15] = param_2[0x9c];
    param_1[0x16] = lVar5;
    *(int *)(param_1 + 0x18) = (int)param_2[0x9f];
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187b524 FUN_14187b524 body=331 status=ok
// SIG undefined FUN_14187b524(void)

void FUN_14187b524(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (0 < *(int *)(param_1 + 0x98)) {
    local_138 = 0;
    local_130 = 0x3002;
    local_128 = 0;
    local_f0 = 0;
    local_e8 = 0x200000000;
    local_e0 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c0 = (undefined4)DAT_14c8464e0;
    uStack_bc = DAT_14c8464e0._4_4_;
    uStack_b8 = (undefined4)DAT_14c8464e8;
    uStack_b4 = DAT_14c8464e8._4_4_;
    local_b0 = DAT_14c8464f0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_90 = (undefined4)DAT_14c8464e0;
    uStack_8c = DAT_14c8464e0._4_4_;
    uStack_88 = (undefined4)DAT_14c8464e8;
    uStack_84 = DAT_14c8464e8._4_4_;
    local_80 = DAT_14c8464f0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1405c5fa2();
    local_58 = &DAT_14cb769e8;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = &PTR_FUN_14b0394b0;
    FUN_14187b2d4(&local_138,param_2);
    uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    FUN_1486311eb(param_1 + 0x90,uVar1,&local_138);
    FUN_141845be6(&local_138);
  }
  FUN_14095dc64(param_1 + 0x20,param_2);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187b670 FUN_14187b670 body=1075 status=ok
// SIG undefined FUN_14187b670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14187b670(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  double dVar5;
  double _X;
  undefined2 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [35];
  byte local_125;
  undefined4 local_124;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  auVar3 = *(undefined1 (*) [16])(param_1 + 0xf8);
  auVar13 = divpd(auVar3,_DAT_1499387d0);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(double *)(param_1 + 0x108);
  auVar14 = divpd(auVar14,_DAT_1499387d0);
  auVar13 = roundpd(auVar13,auVar13,3);
  auVar14 = roundpd(auVar14,auVar14,3);
  dVar10 = (auVar3._0_8_ - auVar13._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar11 = (auVar3._8_8_ - auVar13._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar5 = (*(double *)(param_1 + 0x108) - auVar14._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  _X = (0.0 - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar7 = sin(dVar10);
  dVar8 = sin(dVar11);
  dVar9 = sin(dVar5);
  sin(_X);
  dVar10 = cos(dVar10);
  dVar11 = cos(dVar11);
  dVar12 = cos(dVar5);
  cos(_X);
  dVar5 = dVar8 * dVar7 * dVar9 + dVar11 * dVar10 * dVar12;
  *(double *)(param_1 + 0x110) = dVar7 * dVar8 * dVar12 - dVar10 * dVar11 * dVar9;
  *(double *)(param_1 + 0x118) = -(dVar7 * dVar11 * dVar12) - dVar10 * dVar8 * dVar9;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = -(dVar11 * dVar7 * dVar9) + dVar8 * dVar10 * dVar12;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar3;
  if (*(longlong *)(param_1 + 0x348) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0x348) + 8) = param_1;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar4 + 0xc7c);
  local_124 = *puVar1;
  pbVar2 = (byte *)(lVar4 + 0xc80);
  local_125 = *pbVar2;
  if ((local_125 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0;
  }
  uVar6 = FUN_1408da90e(param_2,&DAT_14cb766a8);
  *(undefined2 *)(param_1 + 0x30) = uVar6;
  uVar6 = FUN_14026189c(param_2,&DAT_14cb766b0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x32) = uVar6;
  local_120[0] = 0x3dcccccd;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0xf00000d0;
  local_e0 = 0;
  local_d8 = 0x3f800000;
  uVar6 = FUN_14026189c(param_2,&DAT_14cb766b8,local_120);
  *(undefined2 *)(param_1 + 0x1ac) = uVar6;
  uVar6 = FUN_1408da90e(param_2,&DAT_14cb766c0);
  *(undefined2 *)(param_1 + 0x1b2) = uVar6;
  uVar6 = FUN_14026189c(param_2,&DAT_14cb766c8,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x1b4) = uVar6;
  local_120[0] = 0x40a00000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0xf00000d0;
  local_e0 = 0;
  local_d8 = 0x3f800000;
  uVar6 = FUN_14026189c(param_2,&DAT_14cb766d0,local_120);
  *(undefined2 *)(param_1 + 0x314) = uVar6;
  uVar6 = FUN_1408da90e(param_2,&DAT_14cb766d8);
  *(undefined2 *)(param_1 + 0x310) = uVar6;
  uVar6 = FUN_14026189c(param_2,&DAT_14cb766e0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x312) = uVar6;
  local_120[0] = 0x40a00000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0xf00000d0;
  local_e0 = 0;
  local_d8 = 0x3f800000;
  uVar6 = FUN_14026189c(param_2,&DAT_14cb766e8,local_120);
  *(undefined2 *)(param_1 + 0x1aa) = uVar6;
  uVar6 = FUN_1408da90e(param_2,&DAT_14cb766f0);
  *(undefined2 *)(param_1 + 0x1ae) = uVar6;
  uVar6 = FUN_1408da90e(param_2,&DAT_14cb766f8);
  *(undefined2 *)(param_1 + 0x1b0) = uVar6;
  uVar6 = FUN_14026189c(param_2,&DAT_14cb76700,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x1b6) = uVar6;
  if ((local_125 & 1) != 0) {
    *puVar1 = local_124;
    *pbVar2 = 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187baa4 FUN_14187baa4 body=111 status=ok
// SIG undefined FUN_14187baa4(void)

void FUN_14187baa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_140a8c38c(param_1,param_2,param_4,param_6,0);
  FUN_140a8af98(param_1,param_2,param_4,param_5,param_3,param_6,0);
  return;
}



// FUNCTION 14187bb14 FUN_14187bb14 body=218 status=ok
// SIG undefined FUN_14187bb14(void)

undefined4 FUN_14187bb14(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  char local_70 [16];
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == 0) || (*(char *)(param_3 + 0x1cc) != '\x01')) {
    local_70[0] = '\0';
    local_48[0] = 0;
    FUN_1456bb102(local_70);
    local_74 = *(undefined4 *)(param_1 + 0x160);
    uVar2 = FUN_140430f72();
    FUN_140431068(uVar2,*(undefined8 *)(param_1 + 0x164),&local_74);
    uVar3 = local_74;
    FUN_1448173f8(local_48);
    if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 0x1c8);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187bbf0 FUN_14187bbf0 body=218 status=ok
// SIG undefined FUN_14187bbf0(void)

undefined4 FUN_14187bbf0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  char local_70 [16];
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == 0) || (*(char *)(param_3 + 0x1d4) != '\x01')) {
    local_70[0] = '\0';
    local_48[0] = 0;
    FUN_1456bb102(local_70);
    local_74 = *(undefined4 *)(param_1 + 0x16c);
    uVar2 = FUN_140430f72();
    FUN_1405506f4(uVar2,*(undefined8 *)(param_1 + 0x170),&local_74);
    uVar3 = local_74;
    FUN_1448173f8(local_48);
    if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 0x1d0);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187bccc FUN_14187bccc body=523 status=ok
// SIG undefined FUN_14187bccc(void)

longlong FUN_14187bccc(char *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 4);
  lVar5 = CONCAT71((int7)(local_48 >> 8),1);
  if (iVar3 == 0) goto LAB_14187bcf7;
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    puVar6 = *(undefined4 **)(param_2 + 8);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = &DAT_14c9485f0;
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_58,puVar6,1);
    if (*param_1 == '\x01') {
      if ((longlong)*(int *)(param_1 + 0x10) == 0) goto LAB_14187be88;
      plVar1 = *(longlong **)(param_1 + 8);
      lVar5 = (longlong)*(int *)(param_1 + 0x10) * 0x18;
      do {
        if (*plVar1 == local_58) goto LAB_14187be01;
        plVar1 = plVar1 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
      plVar1 = (longlong *)0x0;
LAB_14187be01:
      bVar2 = plVar1 != (longlong *)0x0;
    }
    else {
      if ((longlong)*(int *)(param_1 + 0x10) != 0) {
        plVar1 = *(longlong **)(param_1 + 8);
        plVar7 = plVar1 + (longlong)*(int *)(param_1 + 0x10) * 3;
        do {
          lVar5 = *plVar1;
          puVar6 = *(undefined4 **)(param_2 + 8);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar4 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar4);
            DAT_14c947fe0 = lVar4;
          }
          FUN_140045924(DAT_14c947fe0,&local_50,puVar6,1);
          if (lVar5 == local_50) goto LAB_14187be01;
          if ((longlong)*(int *)(param_2 + 0x118) != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_2 + 0x110) + lVar4) == lVar5)
              goto LAB_14187be01;
              lVar4 = lVar4 + 8;
            } while ((longlong)*(int *)(param_2 + 0x118) * 8 != lVar4);
          }
          plVar1 = plVar1 + 3;
        } while (plVar1 != plVar7);
      }
LAB_14187be88:
      bVar2 = false;
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 != 0) {
      if ((longlong)*(int *)(param_2 + 0x58) == 0) {
        bVar8 = false;
      }
      else {
        lVar4 = 0;
        do {
          bVar8 = *(longlong *)(*(longlong *)(param_2 + 0x50) + lVar4) == lVar5;
          if (bVar8) break;
          bVar9 = (longlong)*(int *)(param_2 + 0x58) * 8 + -8 != lVar4;
          lVar4 = lVar4 + 8;
        } while (bVar9);
      }
      bVar2 = (bool)(bVar2 | bVar8);
    }
    iVar3 = *(int *)(param_1 + 4);
  }
  lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),iVar3 != 1 ^ bVar2);
LAB_14187bcf7:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14187bed8 FUN_14187bed8 body=61 status=ok
// SIG undefined FUN_14187bed8(void)

ulonglong FUN_14187bed8(char *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (iVar4 != 0) {
    pcVar3 = param_1 + 8;
    if (*param_1 == '\x01') {
      bVar1 = FUN_144a8028a(pcVar3);
      iVar4 = *(int *)(param_1 + 4);
    }
    else {
      bVar1 = FUN_1405d595e();
    }
    uVar2 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),iVar4 != 1 ^ bVar1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14187bf16 FUN_14187bf16 body=192 status=ok
// SIG undefined FUN_14187bf16(void)

void FUN_14187bf16(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((*param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x78), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if ((param_3 == 0) || (*(longlong *)(lVar4 + 0x40) == param_3)) {
        if ((*(int *)(lVar4 + 0x5c) == 0) || (uVar2 = *(uint *)(lVar4 + 0x58), (int)uVar2 < 0)) {
LAB_14187bfd1:
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(lVar4 + 0x5c))) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_14187bfd1;
            lVar5 = *plVar6;
          }
        }
        if (*param_2 == lVar5) {
          FUN_14074668c(param_1);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return;
}



// FUNCTION 14187bfd6 FUN_14187bfd6 body=289 status=ok
// SIG undefined FUN_14187bfd6(void)

void FUN_14187bfd6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0xe8) != -1) {
    uVar6 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
    FUN_1407f7f84(&local_28,uVar6);
    if (local_20 != (longlong *)0x0) {
      iVar5 = (int)local_20[1];
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_20[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(local_20 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar7 = local_20;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_28 != 0) {
          FUN_1488313f8(local_28,*(undefined4 *)(param_2 + 0xe8));
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
    *(undefined4 *)(param_2 + 0xe8) = 0xffffffff;
  }
  if ((((*(int *)(param_2 + 0x74) != 0) && (uVar3 = *(uint *)(param_2 + 0x70), -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_2 + 0x74))) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
    FUN_140aeefbc(*plVar7,0,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1));
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14187c0f8 FUN_14187c0f8 body=61 status=ok
// SIG undefined FUN_14187c0f8(void)

undefined8 * FUN_14187c0f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187c136 FUN_14187c136 body=93 status=ok
// SIG undefined FUN_14187c136(void)

void FUN_14187c136(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f5f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14187c194 FUN_14187c194 body=80 status=ok
// SIG undefined FUN_14187c194(void)

undefined8 * FUN_14187c194(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b039460;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14020a6cc(param_1 + 1,1);
  return param_1;
}



// FUNCTION 14187c1e4 FUN_14187c1e4 body=301 status=ok
// SIG undefined FUN_14187c1e4(void)

longlong * FUN_14187c1e4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0xc);
  FUN_14020a6cc(param_1 + 1,1);
  FUN_140d9addc(param_1 + 5,param_2 + 0x28);
  FUN_140d9ae3a(param_1 + 7,param_2 + 0x38);
  FUN_140d9ae98(param_1 + 9,param_2 + 0x48);
  FUN_140d9aef6(param_1 + 0xb,param_2 + 0x58);
  FUN_140d9af54(param_1 + 0xd,param_2 + 0x68);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(param_2 + 0x20);
    if (plVar5 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_28 = plVar5;
    }
    local_30 = lVar4;
    (**(code **)(*param_1 + 0x20))(param_1,&local_30);
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    FUN_140c67048(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187c312 FUN_14187c312 body=239 status=ok
// SIG undefined FUN_14187c312(void)

void FUN_14187c312(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [47];
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)((longlong)param_1 + 0x51c) & 0xfe) == 2) {
    lVar1 = FUN_140ccfc10();
    lVar2 = FUN_1405faa04(lVar1 + 0x178);
    param_1[10] = lVar2;
    if ((param_1[0x37] != *(longlong *)(lVar1 + 400)) ||
       ((int)param_1[0x38] != *(int *)(lVar1 + 0x198))) {
      param_1[0x37] = *(longlong *)(lVar1 + 400);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x198);
      param_1[0x39] = 0;
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_49 = '\0';
  (**(code **)(*param_1 + 400))(param_1,&local_48,&local_49);
  if (local_49 == '\x01') {
    FUN_140af2ad2(param_1 + 0x67,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187c402 FUN_14187c402 body=37 status=ok
// SIG undefined FUN_14187c402(void)

bool FUN_14187c402(longlong param_1)

{
  bool bVar1;
  float extraout_XMM0_Da;
  
  if (*(int *)(param_1 + 0x40) < 1) {
    bVar1 = false;
  }
  else {
    FUN_14055830e(*(undefined8 *)(param_1 + 0x38));
    bVar1 = extraout_XMM0_Da <= 0.0;
  }
  return bVar1;
}



// FUNCTION 14187c428 FUN_14187c428 body=22 status=ok
// SIG undefined FUN_14187c428(void)

undefined8 FUN_14187c428(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb77da0;
  if (DAT_14cb77da0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb77da0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb77da0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb77da0[0x3a] <= *(int *)((longlong)DAT_14cb77da0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb77da0 + 0x300))(DAT_14cb77da0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14187c43e FUN_14187c43e body=19 status=ok
// SIG undefined FUN_14187c43e(void)

undefined8 FUN_14187c43e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  lVar3 = *(longlong *)(param_1 + 0x250);
  if (lVar3 == 0) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(lVar3 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(lVar3 + 0x20), lVar5 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = (code *)&LAB_14355090c;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_147b8e16d;
        pcStack_50 = (code *)&LAB_140810a38;
        pwStack_58 = L"Engine";
        uStack_60 = 0x800000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_1449e2820;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_1468c5283;
        pcStack_50 = FUN_142809da0;
        pwStack_58 = L"Engine";
        uStack_60 = 0x400000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
             (lVar6 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar5 + 0x30)) {
            lVar6 = 0;
          }
        } while ((lVar6 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if (lVar6 != 0) {
          uVar4 = *(undefined8 *)(lVar6 + 0xc0);
          goto LAB_1447211c7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1447211c7:
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187c452 FUN_14187c452 body=314 status=ok
// SIG undefined FUN_14187c452(void)

void FUN_14187c452(longlong *param_1,undefined4 param_2,undefined1 param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6,char param_7)

{
  longlong *plVar1;
  undefined1 auStack_388 [32];
  undefined1 local_368 [64];
  undefined8 local_328;
  longlong local_320 [7];
  undefined4 local_2e4;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_388;
  FUN_140749074(local_368,param_4 + 0x10);
  local_328 = param_5;
  if (0 < (int)param_6[7]) {
    plVar1 = (longlong *)param_6[6];
    if ((longlong *)param_6[6] == (longlong *)0x0) {
      plVar1 = param_6;
    }
    if ((*plVar1 != 0) && ((int)plVar1[1] - 1U < 0xfffffffe)) {
      if (param_7 == '\0') {
        if (local_320 != param_6) {
          FUN_1400709d4(local_320,plVar1,(int)param_6[7],local_2e4);
        }
      }
      else {
        FUN_1405faa8e(local_320,param_6);
      }
    }
  }
  plVar1 = (longlong *)FUN_1405473b6();
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)((longlong)plVar1 + 0x54c) = *(undefined4 *)(param_4 + 0x54c);
    *(undefined1 *)(plVar1 + 0xa9) = param_3;
    (**(code **)(*plVar1 + 0x128))(plVar1,local_368);
    (**(code **)(*param_1 + 0x20))(param_1,param_2,plVar1);
    FUN_14025a2c6(plVar1);
  }
  FUN_1403dfdc4(local_368);
  if ((local_50 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187c58e FUN_14187c58e body=363 status=ok
// SIG undefined FUN_14187c58e(void)

void FUN_14187c58e(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,char param_6)

{
  longlong *plVar1;
  undefined1 auStack_378 [32];
  undefined1 local_358 [64];
  undefined8 local_318;
  longlong local_310 [7];
  undefined4 local_2d4;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  FUN_14082cf0e(local_358,param_1[0x4a],*(undefined8 *)(param_3 + 0x478),0);
  local_318 = param_4;
  if (local_310 != (longlong *)(param_3 + 0x58)) {
    plVar1 = (longlong *)(param_3 + 0x58);
    if (*(longlong **)(param_3 + 0x88) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_3 + 0x88);
    }
    FUN_1400709d4(local_310,plVar1,*(undefined4 *)(param_3 + 0x90),local_2d4);
  }
  if (0 < (int)param_5[7]) {
    plVar1 = (longlong *)param_5[6];
    if ((longlong *)param_5[6] == (longlong *)0x0) {
      plVar1 = param_5;
    }
    if ((*plVar1 != 0) && ((int)plVar1[1] - 1U < 0xfffffffe)) {
      if (param_6 == '\0') {
        if (local_310 != param_5) {
          FUN_1400709d4(local_310,plVar1,(int)param_5[7],local_2d4);
        }
      }
      else {
        FUN_1405faa8e(local_310,param_5);
      }
    }
  }
  plVar1 = (longlong *)FUN_1405473b6();
  if (plVar1 != (longlong *)0x0) {
    *(undefined1 *)(plVar1 + 0xa9) = 2;
    (**(code **)(*plVar1 + 0x128))(plVar1,local_358);
    (**(code **)(*param_1 + 0x20))(param_1,param_2,plVar1);
    FUN_14025a2c6(plVar1);
  }
  FUN_1403dfdc4(local_358);
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187c6fa FUN_14187c6fa body=234 status=ok
// SIG undefined FUN_14187c6fa(void)

void FUN_14187c6fa(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if ((((*(longlong *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x260) != (longlong *)0x0))
      && ((*(byte *)(param_1 + 0x471) & 4) == 0)) &&
     ((lVar2 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))(), lVar2 != 0 &&
      (iVar1 = *(int *)(lVar2 + 0x40), 0 < (longlong)iVar1)))) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      if ((lVar4 < *(int *)(param_2 + 0x368)) &&
         (1e-08 < ABS(*(float *)(*(longlong *)(param_2 + 0x360) + lVar4 * 4)))) {
        lVar3 = *(longlong *)(lVar2 + 0x38) + lVar5;
        fVar6 = (float)FUN_14055830e(lVar3);
        FUN_1409d451a(lVar3,fVar6 + *(float *)(*(longlong *)(param_2 + 0x360) + lVar4 * 4),0);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x88;
    } while (iVar1 != lVar4);
  }
  return;
}



// FUNCTION 14187c7e4 FUN_14187c7e4 body=133 status=ok
// SIG undefined FUN_14187c7e4(void)

bool FUN_14187c7e4(char *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  if (*param_1 == '\x01') {
    cVar1 = FUN_1403ae288(param_1 + 0x30);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      lVar3 = FUN_140280ec4(param_1 + 0x30);
      if ((*(longlong *)(lVar3 + 0x18) == 0) ||
         (*(char *)(*(longlong *)(lVar3 + 0x18) + 0x18) != '\x01')) {
        fVar4 = *(float *)(lVar3 + 0x30);
      }
      else {
        auVar5 = roundps(ZEXT416(*(uint *)(lVar3 + 0x30)),ZEXT416(*(uint *)(lVar3 + 0x30)),3);
        fVar4 = auVar5._0_4_;
      }
      bVar2 = ABS(*(float *)(lVar3 + 200) - fVar4) < 0.0001;
    }
  }
  else {
    bVar2 = (bool)(-(*(float *)(param_1 + 0x54) == *(float *)(param_1 + 0x74)) & 1);
  }
  return bVar2;
}



// FUNCTION 14187c86a FUN_14187c86a body=44 status=ok
// SIG undefined FUN_14187c86a(void)

void FUN_14187c86a(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  while (puVar1 != (undefined4 *)0x0) {
    FUN_145cfd944(param_1,*puVar1);
    puVar1 = *(undefined4 **)(param_1 + 0x60);
  }
  return;
}



// FUNCTION 14187c896 FUN_14187c896 body=437 status=ok
// SIG undefined FUN_14187c896(void)

undefined4 FUN_14187c896(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x19) < '\0') {
    local_b0[0] = '\0';
    local_88[0] = 0;
    FUN_1456bb102(local_b0);
    puVar4 = &local_80;
    FUN_1448729ea(param_1 + 0x30,puVar4,local_b0);
    if (local_60 == 3) {
      uVar3 = 3;
      uVar6 = local_80;
    }
    else {
      puVar5 = &local_58;
      FUN_1400b56fe(puVar5,&local_80,3);
      uVar6 = 0;
      if (local_38 != 0) {
        uVar6 = local_58;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar2)(puVar5);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
      uVar3 = (uint)local_60;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_68) {
        puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
      }
      (*pcVar2)(puVar4);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(CONCAT44(uStack_7c,local_80));
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
  else {
    uVar6 = 0x3f800000;
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187ca4c FUN_14187ca4c body=40 status=ok
// SIG undefined FUN_14187ca4c(void)

undefined8 FUN_14187ca4c(undefined8 param_1,int param_2)

{
  FUN_1406399d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187ca74 FUN_14187ca74 body=29 status=ok
// SIG undefined FUN_14187ca74(void)

undefined8 FUN_14187ca74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187ca92 FUN_14187ca92 body=29 status=ok
// SIG undefined FUN_14187ca92(void)

undefined8 FUN_14187ca92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187caaf FUN_14187caaf body=54 status=ok
// SIG undefined FUN_14187caaf(void)

void FUN_14187caaf(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140653573(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14187cae6 FUN_14187cae6 body=373 status=ok
// SIG undefined FUN_14187cae6(void)

void FUN_14187cae6(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x88;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14187cb72;
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
LAB_14187cb72:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x88)) {
    uVar7 = uVar5 / 0x88 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x88,8);
  return;
}



// FUNCTION 14187cc5c FUN_14187cc5c body=369 status=ok
// SIG undefined FUN_14187cc5c(void)

void FUN_14187cc5c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14187cce1;
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
LAB_14187cce1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 14187cdce FUN_14187cdce body=1560 status=ok
// SIG undefined FUN_14187cdce(void)

longlong * FUN_14187cdce(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  
  iVar18 = (int)param_1[1];
  iVar16 = *(int *)((longlong)param_1 + 0x34);
  if (iVar18 != iVar16) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar6 == *param_3) {
          if (plVar6 != (longlong *)0x0) goto LAB_14187d207;
          break;
        }
        iVar3 = *(int *)((longlong)plVar6 + 0xc);
      } while (iVar3 != -1);
    }
  }
  if (iVar16 == 0) {
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_140171ad2(param_1,iVar18);
    }
    iVar16 = (int)param_1[5];
    if (iVar16 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar3 = iVar16 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar8 = iVar16 + 1;
    iVar12 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar12 = iVar16;
    }
    if (iVar12 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar16) {
        if (iVar16 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar3 = iVar16;
        }
        else {
          uVar11 = iVar16 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar11) {
              uVar10 = uVar11;
            }
          }
          else {
            uVar10 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar10 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar11 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
          iVar3 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar6,iVar3);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar3 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar3 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar6;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar16 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar4 = (longlong)iVar18;
    iVar3 = *(int *)(*param_1 + 4 + lVar4 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar16 + -1;
    if (iVar16 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar11 = 1;
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar16 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar16 = iVar18;
  }
  puVar9[iVar16 >> 5] = puVar9[iVar16 >> 5] | 1 << ((byte)iVar18 & 0x1f);
  plVar6 = (longlong *)(*param_1 + lVar4 * 0x14);
  lVar4 = *param_3;
  *plVar6 = lVar4;
  plVar6[1] = -1;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar10) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        plVar14 = (longlong *)(*param_1 + (longlong)iVar16 * 0x14);
        if (*plVar14 == lVar4) {
          lVar4 = *plVar6;
          *(int *)(plVar14 + 1) = (int)plVar6[1];
          *plVar14 = lVar4;
          FUN_14594079e(param_1,iVar18);
          goto LAB_14187d1f5;
        }
        iVar16 = *(int *)((longlong)plVar14 + 0xc);
      } while (iVar16 != -1);
    }
  }
  if (3 < uVar10) {
    uVar5 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar11 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)(plVar6 + 2) = param_2;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)((longlong)plVar6 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar18;
    goto LAB_14187d1f5;
  }
  *(uint *)(param_1 + 9) = uVar11;
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
    uVar11 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar11 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
LAB_14187cf18:
    uVar10 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar14;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4) =
           0xffffffff;
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  else {
    if (uVar11 == 0) goto LAB_14187d1f5;
    FUN_1446efa72(plVar6,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_14187cf18;
  }
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar5 = 0;
    uVar15 = 1;
    iVar3 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = *puVar9;
    if (uVar11 == 0) {
      iVar3 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar3 = iVar16 + -1;
      }
      uVar5 = 0;
      uVar15 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar15 = uVar5;
      }
      iVar8 = 0;
      do {
        if (uVar15 == uVar5) goto LAB_14187d1f5;
        iVar8 = iVar8 + 0x20;
        uVar11 = puVar9[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar5 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar17 = uVar15 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar3 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar3) {
      iVar3 = iVar16;
    }
  }
  if (iVar3 < iVar16) {
    uVar11 = 0xffffffff;
    do {
      lVar4 = *param_1;
      lVar19 = (longlong)iVar3;
      uVar2 = *(undefined8 *)(lVar4 + lVar19 * 0x14);
      uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar20 = (uint)uVar2 & 0xffff;
      uVar17 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar20) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar20 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar17;
      *(int *)(lVar4 + 0x10 + lVar19 * 0x14) = iVar16;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar14;
      }
      *(undefined4 *)(lVar4 + 0xc + lVar19 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar14;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar3;
      uVar11 = ~(uint)uVar15 & uVar11;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar16 = (int)param_1[5];
      iVar3 = (int)uVar5;
      lVar4 = (longlong)iVar3;
      uVar10 = puVar9[lVar4] & uVar11;
      if (uVar10 == 0) {
        iVar12 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar12 = iVar16 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar3) {
          iVar13 = iVar3;
        }
        if (iVar12 <= iVar3) break;
        lVar19 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar10 = puVar9[lVar4 + lVar19 + 1];
          if (uVar10 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar13 - lVar4 == lVar19) goto LAB_14187d1f5;
        }
        uVar5 = (ulonglong)(iVar3 + (int)lVar19 + 1);
        uVar11 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar10 & uVar10);
      uVar17 = uVar15 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar3 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar16);
  }
LAB_14187d1f5:
  plVar6 = (longlong *)(*param_1 + (longlong)iVar18 * 0x14);
LAB_14187d207:
  return plVar6 + 1;
}



// FUNCTION 14187d3e6 FUN_14187d3e6 body=150 status=ok
// SIG undefined FUN_14187d3e6(void)

void FUN_14187d3e6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x68)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x68,8);
      uVar3 = uVar3 / 0x68;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x68,8);
    }
  }
  return;
}



// FUNCTION 14187d47c FUN_14187d47c body=240 status=ok
// SIG undefined FUN_14187d47c(void)

void FUN_14187d47c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14012ae14();
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_4 + 1);
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_14012afbc(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 << 3);
  }
  FUN_140f5eecb(&local_38,&local_48);
  if ((longlong *)(param_2 + 0x110) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x110) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x110) = local_38;
    *(undefined4 *)(param_2 + 0x118) = local_30;
    *(undefined4 *)(param_2 + 0x11c) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187d56e FUN_14187d56e body=308 status=ok
// SIG undefined FUN_14187d56e(void)

longlong * FUN_14187d56e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x238);
  if (lVar4 == 0) {
    uVar5 = FUN_1447210f0();
    local_50 = 0;
    local_48 = 0xaaad1010;
    local_40 = 0;
    local_58 = 1;
    FUN_14078bff4(&local_38,&local_50,param_1,uVar5);
    plVar1 = local_30;
    if ((longlong *)(param_1 + 0x238) != &local_38) {
      *(longlong *)(param_1 + 0x238) = local_38;
      local_38 = 0;
      plVar3 = *(longlong **)(param_1 + 0x240);
      if (local_30 != plVar3) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x240) = plVar1;
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
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x238);
  }
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x240);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187d6a4 FUN_14187d6a4 body=128 status=ok
// SIG undefined FUN_14187d6a4(void)

void FUN_14187d6a4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_1401726e6();
  FUN_14042b5a6(local_68,uVar2);
  FUN_14042b1ec(param_2,local_68,1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187d726 FUN_14187d726 body=4042 status=ok
// SIG undefined FUN_14187d726(void)

void FUN_14187d726(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  double dVar15;
  double *pdVar16;
  undefined8 uVar17;
  uint uVar18;
  float *pfVar19;
  undefined8 ****ppppuVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  uint local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 *local_150;
  code *local_148;
  code *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_110 [2];
  float local_100;
  undefined4 uStack_fc;
  ushort local_e8;
  byte local_e0;
  undefined8 ***local_d8;
  double dStack_d0;
  double local_c8;
  ushort local_c0;
  byte local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar13 = FUN_1447210f0();
  if (lVar13 == 0) {
    fVar26 = 0.0;
  }
  else {
    lVar13 = FUN_1447210f0(param_1);
    fVar26 = (float)*(double *)(lVar13 + 0x6d0);
  }
  *(float *)(param_1 + 0x6ac) = fVar26;
  FUN_1405f1eac(param_1);
  if ((*(longlong *)(param_1 + 0x660) != 0) &&
     (lVar13 = *(longlong *)(param_1 + 0x1c8), lVar13 != 0)) {
    if (DAT_14cac6e60 == 0) {
      local_150 = &local_138;
      local_138 = FUN_144a7958c;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_142b47bc4;
      local_158 = &LAB_1478989f1;
      local_160 = &LAB_146391124;
      local_168 = L"Engine";
      local_170 = 0x10000000000;
      local_178 = 0x10000005;
      local_180 = 0x10;
      local_188 = CONCAT44(local_188._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb78680) && (FUN_144b3d300(&DAT_14cb78680), DAT_14cb78680 == -1))
      {
        local_128 = (longlong *)0x6e006900670065;
        uStack_120 = (double)0x7200650076004f;
        local_138 = (code *)0x630041006e004f;
        uStack_130 = 2.002760001547926e-307;
        local_118 = 0x700061006c;
        FUN_1446f470e(&DAT_14cb78678,&local_138,1);
        _Init_thread_footer(&DAT_14cb78680);
      }
      lVar23 = DAT_14cb78678;
      if (param_1 == 0) {
        uVar24 = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(uint *)(param_1 + 0xc);
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar22 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar22 = 0;
        }
        uVar12 = *(uint *)(lVar22 + 0x10);
        if (*(uint *)(lVar22 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          uVar21 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar25) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar21);
          }
          LOCK();
          uVar12 = *(uint *)(lVar22 + 0x10);
          bVar25 = uVar12 == 0;
          if (bVar25) {
            *(uint *)(lVar22 + 0x10) = uVar21;
            uVar12 = 0;
          }
          UNLOCK();
          if (bVar25) {
            uVar12 = uVar21;
          }
        }
        uVar24 = (ulonglong)uVar12;
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else if (uVar12 == 0) {
          uVar24 = 0;
        }
        else if (((((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) &&
                  (plVar14 = (longlong *)
                             ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                  plVar14 != (longlong *)0x0)) &&
                 ((*(uint *)(plVar14 + 2) == uVar12 && ((*(uint *)(plVar14 + 1) & 0x10200000) == 0))
                 )) && (*plVar14 != 0)) {
          FUN_1400796d0(*(undefined8 *)(*plVar14 + 0x10),lVar23,1);
        }
      }
      local_138 = (code *)((ulonglong)uVar18 | uVar24 << 0x20);
      uStack_130 = (double)lVar23;
      FUN_140838726(lVar13 + 0x599,&local_d8);
      bVar10 = FUN_140819c20(lVar13,local_d8,&local_138);
      *(byte *)(lVar13 + 0x599) = *(byte *)(lVar13 + 0x599) | bVar10;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb78690) && (FUN_144b3d300(&DAT_14cb78690), DAT_14cb78690 == -1))
      {
        local_128 = (longlong *)0x76004f0064006e;
        uStack_120 = (double)0x61006c00720065;
        local_138 = (code *)0x630041006e004f;
        uStack_130 = 2.336521080324006e-307;
        local_118 = CONCAT44(local_118._4_4_,0x70);
        FUN_1446f470e(&DAT_14cb78688,&local_138,1);
        _Init_thread_footer(&DAT_14cb78690);
      }
      dVar15 = DAT_14cb78688;
      if (param_1 == 0) {
        uVar24 = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(uint *)(param_1 + 0xc);
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar23 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar23 = 0;
        }
        uVar12 = *(uint *)(lVar23 + 0x10);
        if (*(uint *)(lVar23 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          uVar21 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar25) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar21);
          }
          LOCK();
          uVar12 = *(uint *)(lVar23 + 0x10);
          bVar25 = uVar12 == 0;
          if (bVar25) {
            *(uint *)(lVar23 + 0x10) = uVar21;
            uVar12 = 0;
          }
          UNLOCK();
          if (bVar25) {
            uVar12 = uVar21;
          }
        }
        uVar24 = (ulonglong)uVar12;
        if (dVar15 == 0.0) {
          dVar15 = 0.0;
        }
        else if (uVar12 == 0) {
          uVar24 = 0;
        }
        else if ((((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) &&
                 (plVar14 = (longlong *)
                            ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                 plVar14 != (longlong *)0x0)) &&
                (((*(uint *)(plVar14 + 2) == uVar12 && ((*(uint *)(plVar14 + 1) & 0x10200000) == 0))
                 && (*plVar14 != 0)))) {
          FUN_1400796d0(*(undefined8 *)(*plVar14 + 0x10),dVar15,1);
        }
      }
      local_138 = (code *)((ulonglong)uVar18 | uVar24 << 0x20);
      uStack_130 = dVar15;
      FUN_140852908(lVar13 + 0x59a,&local_d8);
      bVar10 = FUN_140819c20(lVar13,local_d8,&local_138);
      *(byte *)(lVar13 + 0x59a) = *(byte *)(lVar13 + 0x59a) | bVar10;
      if ((longlong)*(int *)(lVar13 + 0x408) != 0) {
        lVar23 = (longlong)*(int *)(lVar13 + 0x408) * 0x108;
        lVar13 = *(longlong *)(lVar13 + 0x400) + 0xe0;
        do {
          lVar22 = FUN_14485cccc(lVar13 + -0x20);
          if ((lVar22 != 0) && ((*(byte *)(lVar22 + 0x62) & 4) != 0)) {
            iVar11 = *(int *)(param_1 + 0x680);
            *(uint *)(param_1 + 0x680) = iVar11 + 1U;
            if (*(uint *)(param_1 + 0x684) < iVar11 + 1U) {
              FUN_1414fa4c8((longlong *)(param_1 + 0x678),iVar11);
            }
            lVar4 = *(longlong *)(param_1 + 0x678);
            puVar2 = (undefined8 *)(lVar4 + (longlong)iVar11 * 0x48);
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[8] = 0;
            lVar4 = lVar4 + (longlong)iVar11 * 0x48;
            FUN_140871de8(puVar2,lVar22);
            uVar17 = FUN_14479d2ce(lVar13);
            FUN_14485c47a(lVar4 + 0x20,uVar17);
            *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar13 + -0x30);
          }
          lVar13 = lVar13 + 0x108;
          lVar23 = lVar23 + -0x108;
        } while (lVar23 != 0);
      }
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x1b0);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(param_1 + 0x168);
  }
  lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 8);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar23 = (ulonglong)((uint)*(ushort *)(lVar23 + 0x1ac) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_138 = (code *)((ulonglong)local_138 & 0xffffffffffffff00);
  local_110[0]._0_4_ = 0;
  FUN_1456bb102(&local_138,lVar13);
  pfVar19 = &local_100;
  FUN_1448729ea(lVar23,pfVar19,&local_138);
  if (local_e0 == 3) {
    fVar26 = local_100;
    bVar10 = 3;
  }
  else {
    FUN_1400b56fe(&local_d8,&local_100,3);
    if (local_b8 == 0) {
      fVar26 = 0.1;
    }
    else {
      fVar26 = local_d8._0_4_;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar20 = &local_d8;
      if (0x18 < local_c0) {
        ppppuVar20 = (undefined8 ****)local_d8;
      }
      (*pcVar3)(ppppuVar20);
    }
    bVar10 = local_e0;
    if (0x18 < local_c0) {
      FUN_1400020a8(local_d8);
      bVar10 = local_e0;
    }
  }
  *(float *)(param_1 + 0x6a8) = fVar26;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar10 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_e8) {
      pfVar19 = (float *)CONCAT44(uStack_fc,local_100);
    }
    (*pcVar3)(pfVar19);
  }
  plVar14 = local_110;
  if (0x18 < local_e8) {
    FUN_1400020a8(CONCAT44(uStack_fc,local_100));
  }
  FUN_1448173f8(plVar14);
  if (((char)local_138 == '\x03') && (plVar14 = local_128, local_128 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_128 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_128 + 0x10))();
    }
  }
  dVar15 = *(double *)(param_1 + 0x660);
  bVar10 = lVar13 != 0 & *(byte *)((longlong)dVar15 + 0x2e9);
  uVar27 = (undefined4)CONCAT71((int7)((ulonglong)plVar14 >> 8),bVar10);
  if (bVar10 == 1) {
    lVar23 = *(longlong *)(lVar13 + 0x1c8);
  }
  else {
    lVar23 = *(longlong *)(param_1 + 0x1c8);
  }
  if (lVar23 == 0) {
    uVar27 = SUB84(DAT_14c8464f8,0);
    uVar28 = SUB84(DAT_14c846500,0);
    uVar29 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  }
  else {
    dVar8 = *(double *)(lVar23 + 0x240);
    dVar5 = *(double *)(lVar23 + 0x248);
    plVar14 = *(longlong **)(lVar23 + 0x250);
    dVar9 = *(double *)(lVar23 + 600);
    pdVar16 = *(double **)(lVar23 + 0x228);
    local_138 = (code *)dVar8;
    uStack_130 = dVar5;
    local_128 = plVar14;
    uStack_120 = dVar9;
    if (pdVar16 == (double *)0x0) {
      uVar27 = 0x40;
      pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
      dVar15 = DAT_14c8463d8;
      *pdVar16 = DAT_14c8463d0;
      pdVar16[1] = dVar15;
      dVar15 = DAT_14c8463e8;
      pdVar16[2] = DAT_14c8463e0;
      pdVar16[3] = dVar15;
      dVar15 = DAT_14c846500;
      pdVar16[4] = DAT_14c8464f8;
      pdVar16[5] = dVar15;
      dVar15 = DAT_14c846508;
      pdVar16[6] = DAT_14c846508;
      *(double **)(lVar23 + 0x228) = pdVar16;
    }
    auVar6._8_4_ = (int)-(ulonglong)(dVar5 != pdVar16[1]);
    auVar6._0_8_ = -(ulonglong)(dVar8 != *pdVar16);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar16[1]) >> 0x20);
    iVar11 = movmskpd(SUB84(dVar15,0),auVar6);
    auVar7._8_4_ = (int)-(ulonglong)(dVar9 != pdVar16[3]);
    auVar7._0_8_ = -(ulonglong)((double)plVar14 != pdVar16[2]);
    auVar7._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar16[3]) >> 0x20);
    uVar18 = movmskpd(uVar27,auVar7);
    if ((uVar18 & 0x3fffffff) != 0 || iVar11 != 0) {
      *(undefined4 *)(pdVar16 + 2) = (undefined4)local_128;
      *(undefined4 *)((longlong)pdVar16 + 0x14) = local_128._4_4_;
      *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_120._4_4_;
      *(undefined4 *)pdVar16 = (undefined4)local_138;
      *(undefined4 *)((longlong)pdVar16 + 4) = local_138._4_4_;
      *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_130;
      *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_130._4_4_;
      FUN_1448052ee(&local_138,&local_d8);
      pdVar16[6] = local_c8;
      pdVar16[4] = (double)local_d8;
      pdVar16[5] = dStack_d0;
    }
    uVar27 = SUB84(pdVar16[4],0);
    uVar28 = SUB84(pdVar16[5],0);
    uVar29 = (undefined4)((ulonglong)pdVar16[5] >> 0x20);
  }
  local_d8 = (undefined8 ***)CONCAT44(uVar29,uVar28);
  dVar8 = (double)FUN_144719204(uVar27,0);
  dVar9 = (double)FUN_144719204((int)local_d8,0);
  dVar15 = sin(dVar8 * 0.017453292519943295);
  uVar27 = SUB84(dVar15,0);
  uVar28 = (undefined4)((ulonglong)dVar15 >> 0x20);
  dVar8 = cos(dVar8 * 0.017453292519943295);
  dVar5 = sin(dVar9 * 0.017453292519943295);
  dVar9 = cos(dVar9 * 0.017453292519943295);
  dVar5 = dVar5 * dVar8;
  dVar9 = dVar9 * dVar8;
  lVar23 = *(longlong *)(param_1 + 0x660);
  if (*(char *)(lVar23 + 0x198) != '\0') {
    dVar8 = dVar9 * dVar9 + dVar5 * dVar5;
    if ((dVar8 != 1.0) || (NAN(dVar8))) {
      if (dVar8 < 9.99999993922529e-09) {
        uVar27 = (undefined4)DAT_14c8464f0;
        uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar5 = DAT_14c8464e8;
        dVar9 = DAT_14c8464e0;
      }
      else {
        uVar27 = 0;
        uVar28 = 0;
        dVar5 = dVar5 * (1.0 / SQRT(dVar8));
        dVar9 = dVar9 * (1.0 / SQRT(dVar8));
      }
    }
    else {
      uVar24 = (ulonglong)dVar15 & -(ulonglong)(dVar15 == 0.0);
      uVar27 = (undefined4)uVar24;
      uVar28 = (undefined4)(uVar24 >> 0x20);
    }
  }
  if (*(char *)(lVar23 + 0xa0) == '\x01') {
    fVar26 = *(float *)(param_1 + 0x670);
    local_138 = (code *)((ulonglong)local_138._1_7_ << 8);
    local_110[0]._0_4_ = 0;
    FUN_1456bb102(&local_138,lVar13);
    pfVar19 = &local_100;
    FUN_1448729ea(lVar23 + 0xf8,pfVar19,&local_138);
    if (local_e0 == 3) {
      uVar18 = 3;
      fVar31 = local_100;
    }
    else {
      FUN_1400b56fe(&local_d8,&local_100,3);
      fVar31 = 0.0;
      if (local_b8 != 0) {
        fVar31 = local_d8._0_4_;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar20 = &local_d8;
        if (0x18 < local_c0) {
          ppppuVar20 = (undefined8 ****)local_d8;
        }
        (*pcVar3)(ppppuVar20);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(local_d8);
      }
      uVar18 = (uint)local_e0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar18 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_e8) {
        pfVar19 = (float *)CONCAT44(uStack_fc,local_100);
      }
      (*pcVar3)(pfVar19);
    }
    if (0x18 < local_e8) {
      FUN_1400020a8(CONCAT44(uStack_fc,local_100));
    }
    FUN_1448173f8(local_110);
    if (((char)local_138 == '\x03') && (local_128 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_128 + 0x10))();
      }
    }
    lVar23 = *(longlong *)(param_1 + 0x660);
    local_138 = (code *)((ulonglong)local_138 & 0xffffffffffffff00);
    local_110[0]._0_4_ = 0;
    FUN_1456bb102(&local_138,lVar13);
    pfVar19 = &local_100;
    FUN_1448729ea(lVar23 + 0x148,pfVar19,&local_138);
    if (local_e0 == 3) {
      uVar18 = 3;
      fVar30 = local_100;
    }
    else {
      FUN_1400b56fe(&local_d8,&local_100,3);
      fVar30 = 0.0;
      if (local_b8 != 0) {
        fVar30 = local_d8._0_4_;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar20 = &local_d8;
        if (0x18 < local_c0) {
          ppppuVar20 = (undefined8 ****)local_d8;
        }
        (*pcVar3)(ppppuVar20);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(local_d8);
      }
      uVar18 = (uint)local_e0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar18 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_e8) {
        pfVar19 = (float *)CONCAT44(uStack_fc,local_100);
      }
      (*pcVar3)(pfVar19);
    }
    if (0x18 < local_e8) {
      FUN_1400020a8(CONCAT44(uStack_fc,local_100));
    }
    if (fVar26 <= 0.01) {
      fVar26 = 0.01;
    }
    FUN_1448173f8(local_110);
    if (((char)local_138 == '\x03') && (local_128 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_128 + 0x10))();
      }
    }
    fVar26 = (fVar30 - fVar31) / fVar26;
    plVar14 = *(longlong **)(param_1 + 0x1c8);
    if (plVar14 != (longlong *)0x0) {
      dVar15 = (double)fVar31;
      local_c8 = (dVar15 * (double)CONCAT44(uVar28,uVar27) + (double)plVar14[0x4e]) -
                 (double)plVar14[0x4e];
      dStack_d0 = (dVar5 * dVar15 + (double)plVar14[0x4d]) - (double)plVar14[0x4d];
      local_d8 = (undefined8 ***)((dVar9 * dVar15 + (double)plVar14[0x4c]) - (double)plVar14[0x4c]);
      local_138 = (code *)plVar14[0x48];
      uStack_130 = (double)plVar14[0x49];
      local_128 = (longlong *)plVar14[0x4a];
      uStack_120 = (double)plVar14[0x4b];
      local_178 = local_178 & 0xffffff00;
      local_180 = 0;
      local_188 = 0;
      (**(code **)(*plVar14 + 0x510))(plVar14,&local_d8,&local_138,0);
    }
  }
  else if (*(char *)(lVar23 + 0xa0) == '\0') {
    local_138 = (code *)((ulonglong)local_138._1_7_ << 8);
    local_110[0]._0_4_ = 0;
    FUN_1456bb102(&local_138,lVar13);
    FUN_1448729ea(lVar23 + 0xa8,&local_d8,&local_138);
    fVar26 = (float)FUN_144a7b41a(&local_d8,0x42c80000);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar20 = &local_d8;
      if (0x18 < local_c0) {
        ppppuVar20 = (undefined8 ****)local_d8;
      }
      (*pcVar3)(ppppuVar20);
    }
    if (0x18 < local_c0) {
      FUN_1400020a8(local_d8);
    }
    FUN_144a5ac3a(&local_138);
  }
  else {
    fVar26 = 0.0;
  }
  lVar13 = *(longlong *)(param_1 + 0x698);
  if (lVar13 != 0) {
    dVar15 = (double)fVar26;
    *(double *)(lVar13 + 0x128) = dVar9 * dVar15;
    *(double *)(lVar13 + 0x130) = dVar5 * dVar15;
    *(double *)(lVar13 + 0x138) = (double)CONCAT44(uVar28,uVar27) * dVar15;
    (**(code **)(**(longlong **)(param_1 + 0x698) + 0x4d0))();
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14187e6f2 FUN_14187e6f2 body=135 status=ok
// SIG undefined FUN_14187e6f2(void)

void FUN_14187e6f2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140872868(param_1 + 0x3c0);
  FUN_14078a7c0(param_1 + 0x5f0);
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x5e8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x5e8) = 0;
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
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 14187e77a FUN_14187e77a body=47 status=ok
// SIG undefined FUN_14187e77a(void)

void FUN_14187e77a(longlong param_1)

{
  FUN_1407fb560();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x3c0);
    return;
  }
  return;
}



// FUNCTION 14187e7b0 thunk_FUN_14482855a body=5 status=ok
// SIG undefined thunk_FUN_14482855a(void)

void thunk_FUN_14482855a(undefined *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 auStack_208 [40];
  undefined *puStack_1e0;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1bc [4];
  undefined **ppuStack_1b8;
  longlong *plStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ****ppppuStack_1a0;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  ppppuStack_1a0 = &pppuStack_1a8;
  ppuStack_1b8 = &PTR_FUN_149e37810;
  pppuStack_1a8 = &ppuStack_1b8;
  plStack_1b0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (puVar4 = param_1, (*(uint *)((longlong)param_2 + 0x34) & 0x401000) != 0x1000)) {
    for (; puVar4 != (undefined *)0x0; puVar4 = *(undefined **)(puVar4 + 0x20)) {
      if ((*(uint *)(puVar4 + 8) & 0x30) != 0) goto LAB_1448285fd;
    }
    param_1[0x9f] = param_1[0x9f] | 4;
  }
LAB_1448285fd:
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cbc8);
  if (3 < iVar2) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
      if (DAT_14cad0160 != DAT_14cad018c) {
        uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = &DAT_14cad0190;
        if (DAT_14cad0198 != (undefined *)0x0) {
          puVar4 = DAT_14cad0198;
        }
        iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar2 != -1) {
          lVar1 = DAT_14cad0158 + (longlong)iVar2 * 0x20;
          if (*(undefined **)(DAT_14cad0158 + (longlong)iVar2 * 0x20) == param_1) {
            if (lVar1 != -8 && lVar1 != 0) {
              FUN_14010e0fc(param_2);
              goto LAB_1448287f2;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x18);
        }
      }
      ppuStack_1b8 = (undefined **)0x0;
      plStack_1b0 = (longlong *)0x0;
      FUN_14010e0fc(param_2,&ppuStack_1b8);
      if (ppuStack_1b8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
LAB_1448287f2:
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
    }
    else {
      lStack_1d8 = 0;
      uStack_1d0 = 0;
      FUN_14010e0fc(param_2,&lStack_1d8);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
      if ((int)uStack_1d0 < 1) {
        if (DAT_14cad0160 != DAT_14cad018c) {
          uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                  -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          puVar4 = &DAT_14cad0190;
          if (DAT_14cad0198 != (undefined *)0x0) {
            puVar4 = DAT_14cad0198;
          }
          for (iVar2 = *(int *)(puVar4 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                         (longlong)DAT_14cad01a0 - 1U) * 4); iVar2 != -1;
              iVar2 = *(int *)((longlong)iVar2 * 0x20 + DAT_14cad0158 + 0x18)) {
            if (*(undefined **)(DAT_14cad0158 + (longlong)iVar2 * 0x20) == param_1) {
              FUN_1400fbee6(&DAT_14cad0158);
              break;
            }
          }
        }
        param_1[0xb8] = param_1[0xb8] & 0x7f;
      }
      else {
        ppuStack_1b8 = &puStack_1e0;
        puStack_1e0 = param_1;
        plStack_1b0 = &lStack_1d8;
        FUN_14010e3f8(auStack_1bc);
        param_1[0xb8] = param_1[0xb8] | 0x80;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
      if (lStack_1d8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14187e7b6 FUN_14187e7b6 body=78 status=ok
// SIG undefined FUN_14187e7b6(void)

void FUN_14187e7b6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x20))(param_1 + 0x110);
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    FUN_140cd522c(lVar1 + 8);
  }
  *(undefined1 *)(lVar1 + 0x590) = 0;
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 14187e804 FUN_14187e804 body=912 status=ok
// SIG undefined FUN_14187e804(void)

undefined8 FUN_14187e804(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar14 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar14;
    if ((int)param_1[0x54] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar5 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar5, plStack_60 != plVar14)) {
      do {
        local_78 = lVar5;
        lVar5 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar9 * 0x20);
        if (lVar5 != 0) {
          plVar16 = (longlong *)(*local_90 + (longlong)iVar9 * 0x20 + 0x10);
          if (param_3 != '\0') {
            FUN_144837e54(lVar5,0);
            lVar5 = *plVar16;
          }
          cVar4 = FUN_140dddae6(lVar5 + 0x48);
          if ((cVar4 != '\0') &&
             (plVar16 = *(longlong **)(*plVar16 + 0x30), plVar16 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar16 + 8))(plVar16);
            lVar6 = FUN_14073f72a();
            if ((lVar6 != 0) &&
               (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  == lVar6 + 0x30)) &&
                (cVar4 = (*(code *)*local_98)(local_98[1],plVar16), cVar4 != '\0'))))
            goto LAB_14187eb6b;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        lVar5 = local_78;
      } while ((uStack_80 != plVar14 || local_78._4_4_ != iVar12) || local_90 != plVar1);
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar13 = 1;
      uVar11 = 0xffffffff;
      iVar12 = 0;
      iVar15 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar13 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x3e];
      iVar9 = (int)local_90;
      uVar11 = (uint)uStack_80;
      iVar8 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar8 != iVar12 || local_88 != local_a0) {
      do {
        local_a4 = iVar12;
        plVar14 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar14 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar6 = FUN_14073f72a();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30 && (cVar4 = (*(code *)*local_98)(local_98[1],plVar14), cVar4 != '\0'))))
          goto LAB_14187eb6b;
        }
        uVar11 = uVar11 & ~(uint)uVar13;
        plVar14 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        iVar12 = (int)plVar1[3];
        lVar5 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar14 + lVar5 * 4) & uVar11;
        if (uVar10 == 0) {
          iVar8 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar8 = iVar12 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar3 = iVar8;
          if (iVar8 < iVar9) {
            iVar3 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar6 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar14 + lVar6 * 4 + lVar5 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar6 + 1;
                uVar11 = 0xffffffff;
                goto LAB_14187e992;
              }
              iVar15 = iVar15 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar3 - lVar5 != lVar6);
            uVar11 = 0xffffffff;
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar12;
        }
        else {
LAB_14187e992:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar13 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar8) {
            iVar8 = iVar12;
          }
        }
        iVar12 = local_a4;
      } while (iVar8 != local_a4 || plVar1 != local_a0);
    }
  }
  uVar7 = 0;
LAB_14187eb3d:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
LAB_14187eb6b:
  uVar7 = 1;
  goto LAB_14187eb3d;
}



// FUNCTION 14187eb96 FUN_14187eb96 body=30 status=ok
// SIG undefined FUN_14187eb96(void)

undefined8 FUN_14187eb96(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14041acbe();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x398);
  }
  return uVar2;
}



// FUNCTION 14187ebb4 FUN_14187ebb4 body=40 status=ok
// SIG undefined FUN_14187ebb4(void)

undefined8 FUN_14187ebb4(undefined8 param_1,int param_2)

{
  FUN_140b605dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187ebdc FUN_14187ebdc body=156 status=ok
// SIG undefined FUN_14187ebdc(void)

undefined8 * FUN_14187ebdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187ec78 FUN_14187ec78 body=171 status=ok
// SIG undefined FUN_14187ec78(void)

undefined8 * FUN_14187ec78(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b3f85a8;
  FUN_14054e5f7(param_1[0xb0],*(undefined4 *)(param_1 + 0xb1));
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  FUN_14494dff0(param_1 + 0x80);
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  puVar1 = param_1 + 0x58;
  lVar2 = -0x3c0;
  do {
    FUN_14494dff0(puVar1);
    if (puVar1[-2] != 0) {
      FUN_1400020a8();
    }
    puVar1 = puVar1 + -0x28;
    lVar2 = lVar2 + 0x140;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187ed24 FUN_14187ed24 body=272 status=ok
// SIG undefined FUN_14187ed24(void)

void FUN_14187ed24(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14187ee34 FUN_14187ee34 body=127 status=ok
// SIG undefined FUN_14187ee34(void)

longlong * FUN_14187ee34(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar4 = (longlong)*(int *)(param_1 + 1) << 5;
    plVar6 = (longlong *)*param_1;
    do {
      plVar5 = plVar6;
      if ((*plVar5 == *param_2) && (cVar3 = FUN_1409d2f40(plVar5 + 2,param_2[2]), cVar3 != '\0'))
      break;
      plVar6 = plVar5 + 4;
      lVar4 = lVar4 + -0x20;
      plVar5 = (longlong *)0x0;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)param_2[1];
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
  return plVar5;
}



// FUNCTION 14187eeb4 FUN_14187eeb4 body=255 status=ok
// SIG undefined FUN_14187eeb4(void)

void FUN_14187eeb4(longlong param_1,int param_2)

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



// FUNCTION 14187efb4 FUN_14187efb4 body=255 status=ok
// SIG undefined FUN_14187efb4(void)

void FUN_14187efb4(longlong param_1,int param_2)

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



// FUNCTION 14187f0b4 FUN_14187f0b4 body=275 status=ok
// SIG undefined FUN_14187f0b4(void)

void FUN_14187f0b4(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 14187f1c8 FUN_14187f1c8 body=417 status=ok
// SIG undefined FUN_14187f1c8(void)

void FUN_14187f1c8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
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
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  local_40 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_48._0_4_ = 0xffffffff;
    local_48._4_4_ = 0;
    local_58._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar13 = local_58 >> 0x20;
  }
  plVar3 = local_50;
  iVar4 = (int)local_50[3];
  iVar12 = (int)local_58;
  uVar9 = (uint)local_48;
  iVar6 = local_48._4_4_;
  iVar10 = local_40;
  if (local_48._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar9 = uVar9 & ~(uint)uVar13;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar12;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar12) {
          iVar2 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_14187f2e8;
        }
        iVar12 = iVar12 + (int)lVar8 + 1;
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14187f2e8:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187f36a FUN_14187f36a body=625 status=ok
// SIG undefined FUN_14187f36a(void)

void FUN_14187f36a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    bVar4 = *pbVar3;
    if ((~bVar4 & 3) == 0) {
      lVar1 = *(longlong *)(pbVar3 + 8);
      local_38 = &local_44;
      local_44 = 1;
      local_40 = &DAT_14cb78858;
      FUN_14049fede(lVar1 + 0x18,&local_2c,&local_40,0);
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x28 + (longlong)local_2c * 0x40);
      if (lVar1 != 0) {
        FUN_1401269d0(lVar1,param_1);
      }
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) goto LAB_14187f52b;
      bVar4 = *pbVar3;
    }
    if ((~bVar4 & 3) == 0) {
      lVar1 = *(longlong *)(pbVar3 + 8);
      local_38 = &local_44;
      local_44 = 1;
      local_40 = (undefined4 *)&DAT_14cb78880;
      FUN_14049fede(lVar1 + 0x18,&local_2c,&local_40,0);
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x28 + (longlong)local_2c * 0x40);
      if (lVar1 != 0) {
        FUN_1404a8912(lVar1,*(undefined4 *)(param_1 + 8));
      }
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) goto LAB_14187f52b;
      bVar4 = *pbVar3;
    }
    if ((~bVar4 & 3) == 0) {
      lVar1 = *(longlong *)(pbVar3 + 8);
      local_38 = &local_44;
      local_44 = 1;
      local_40 = (undefined4 *)&DAT_14cb788a8;
      FUN_14049fede(lVar1 + 0x18,&local_2c,&local_40,0);
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x28 + (longlong)local_2c * 0x40);
      if (lVar1 != 0) {
        FUN_1404a8912(lVar1,*(undefined4 *)(param_1 + 0xc));
      }
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) goto LAB_14187f52b;
      bVar4 = *pbVar3;
    }
    if ((~bVar4 & 3) == 0) {
      lVar1 = *(longlong *)(pbVar3 + 8);
      local_38 = &local_44;
      local_44 = 1;
      local_40 = (undefined4 *)&DAT_14cb788d0;
      FUN_14049fede(lVar1 + 0x18,&local_2c,&local_40,0);
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x28 + (longlong)local_2c * 0x40);
      if (lVar1 != 0) {
        FUN_1401269d0(lVar1,param_1 + 0x10);
      }
    }
  }
LAB_14187f52b:
  if (((longlong)*(int *)(param_1 + 0x20) < 1) ||
     (lVar1 = *(longlong *)(param_1 + 0x18),
     *(char *)(lVar1 + -1 + (longlong)*(int *)(param_1 + 0x20)) != '\0')) {
    FUN_14882c618(param_2);
  }
  else {
    pbVar3 = (byte *)*param_2;
    if ((pbVar3 != (byte *)0x0) && ((~*pbVar3 & 3) == 0)) {
      lVar2 = *(longlong *)(pbVar3 + 8);
      local_38 = &local_44;
      local_44 = 1;
      local_40 = (undefined4 *)&DAT_14cb788f8;
      FUN_14049fede(lVar2 + 0x18,&local_2c,&local_40,0);
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_2c * 0x40);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 1) & 2) == 0)) {
        FUN_140126aca(lVar2,lVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187f5dc FUN_14187f5dc body=154 status=ok
// SIG undefined FUN_14187f5dc(void)

undefined8 FUN_14187f5dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 == (byte *)0x0) || ((~*pbVar1 & 3) != 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if (lVar2 != 0) {
      FUN_1401269d0(lVar2,param_3);
    }
    uVar3 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187f678 FUN_14187f678 body=153 status=ok
// SIG undefined FUN_14187f678(void)

undefined8 FUN_14187f678(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 == (byte *)0x0) || ((~*pbVar1 & 3) != 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if (lVar2 != 0) {
      FUN_1404a8912(lVar2,*param_3);
    }
    uVar3 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187f712 FUN_14187f712 body=765 status=ok
// SIG undefined FUN_14187f712(void)

undefined8 FUN_14187f712(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_90;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x178) != '\x03')) {
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb78af0);
    local_a8 = DAT_14cb78ae8;
    FUN_1448075d0(&local_78);
    pbVar2 = (byte *)*param_3;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar4 = &DAT_14c9a1288;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
        plVar8 = plVar4 + 8;
        if ((longlong *)plVar4[9] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar4[9];
        }
        iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar4[10] - 1U & (uint)local_78) * 4);
        if (iVar7 != -1) {
          do {
            lVar5 = *plVar4 + (longlong)iVar7 * 0x40;
            if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == (uint)local_78) {
              if ((((lVar5 != 0) &&
                   (puVar6 = (undefined8 *)(lVar5 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar6 != (byte *)0x0)) && ((*(byte *)*puVar6 & 0x40) == 0))
              goto LAB_14187f8a3;
              break;
            }
            iVar7 = *(int *)(lVar5 + 0x38);
          } while (iVar7 != -1);
        }
      }
    }
    puVar6 = &DAT_14c9a1308;
LAB_14187f8a3:
    local_b0 = DAT_14cb78af0;
    local_b8 = DAT_14cb78ae8;
    FUN_1448075d0(&local_a8);
    if (*param_4 != 0) {
      local_c8 = 0;
      FUN_14014191c(*param_4,&local_a8,puVar6,0);
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_14009b010(&local_a8,2,0);
    if ((longlong)(int)param_1[1] != 0) {
      lVar5 = *param_1;
      lVar9 = (longlong)(int)param_1[1] * 0x78;
      do {
        lVar3 = FUN_14479d2ce(lVar5);
        if (lVar3 == param_2) {
          local_78 = 0;
          plStack_70 = (longlong *)0x0;
          FUN_14009b010(&local_78,3,0);
          FUN_14882d47a(lVar5,&local_78);
          if (local_a8 != 0) {
            local_c8 = 0;
            FUN_140141db6(local_a8,&local_78,0,0);
          }
          plVar4 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_70 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plStack_70)(plStack_70);
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
        lVar5 = lVar5 + 0x78;
        lVar9 = lVar9 + -0x78;
      } while (lVar9 != 0);
    }
    local_b0 = DAT_14cb78af0;
    local_b8 = DAT_14cb78ae8;
    FUN_1448075d0(&local_78);
    if (*param_4 != 0) {
      local_c8 = 0;
      FUN_14014191c(*param_4,&local_78,&local_a8,0);
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    plVar4 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_a0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
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
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14187fa10 FUN_14187fa10 body=380 status=ok
// SIG undefined FUN_14187fa10(void)

undefined8 * FUN_14187fa10(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  
  plVar3 = *(longlong **)(param_1 + 0xd8);
  if (((((plVar3 == (longlong *)0x0) || (*(int *)(param_1 + 0xd4) == 0)) ||
       (uVar2 = *(uint *)(param_1 + 0xd0), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0)))) ||
     ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0xd4) ||
      ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) {
    if ((2 < (int)param_3) || (lVar7 = *(longlong *)(param_1 + 200), lVar7 == 0)) {
      FUN_1404ec1fe(param_1,param_2,param_3);
      return param_2;
    }
    lVar6 = (longlong)(int)param_3 * 0x20;
    uVar4 = *(undefined8 *)(lVar7 + 0x150 + lVar6);
    *(undefined8 *)((longlong)param_2 + 5) = *(undefined8 *)(lVar7 + 0x155 + lVar6);
    *param_2 = uVar4;
    param_2[2] = 0;
    iVar1 = *(int *)(lVar7 + 0x168 + lVar6);
    _Src = *(void **)(lVar7 + 0x160 + lVar6);
  }
  else {
    lVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
    FUN_14053c150(lVar7);
    puVar5 = (undefined8 *)(lVar7 + 0x20 + (ulonglong)param_3 * 0x140);
    if (2 < param_3) {
      puVar5 = (undefined8 *)(lVar7 + 0x3e0);
    }
    uVar4 = *puVar5;
    *(undefined8 *)((longlong)param_2 + 5) = *(undefined8 *)((longlong)puVar5 + 5);
    *param_2 = uVar4;
    param_2[2] = 0;
    iVar1 = *(int *)(puVar5 + 3);
    _Src = (void *)puVar5[2];
  }
  *(int *)(param_2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    FUN_1404ec2aa(param_2 + 2,iVar1,0);
    memcpy((void *)param_2[2],_Src,(longlong)iVar1 * 0x90);
  }
  return param_2;
}



// FUNCTION 14187fb8c FUN_14187fb8c body=259 status=ok
// SIG undefined FUN_14187fb8c(void)

undefined4 * FUN_14187fb8c(longlong param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if ((((plVar2 == (longlong *)0x0) || (*(int *)(param_1 + 0xd4) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0xd0), (int)uVar1 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar1 ||
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
      ((*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0xd4) ||
       ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
    if (*(longlong *)(param_1 + 200) == 0) {
      FUN_143d1723e(param_1,param_2,param_3);
      return param_2;
    }
    if (4 < (int)param_3) {
      *(undefined1 *)param_2 = 1;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0;
      param_2[3] = 0x55000000;
      return param_2;
    }
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 200) + 0x1b0 + (longlong)(int)param_3 * 0x10);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
    FUN_14053c150(lVar4);
    puVar3 = (undefined4 *)(lVar4 + 0x520 + (ulonglong)param_3 * 0x10);
    if (4 < param_3) {
      puVar3 = (undefined4 *)(lVar4 + 0x570);
    }
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
  }
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  return param_2;
}



// FUNCTION 14187fc90 FUN_14187fc90 body=61 status=ok
// SIG undefined FUN_14187fc90(void)

undefined8 FUN_14187fc90(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0xd0);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014187fcc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14187fce8 FUN_14187fce8 body=22 status=ok
// SIG undefined FUN_14187fce8(void)

undefined8 FUN_14187fce8(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78bf0;
  if (DAT_14cb78bf0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78bf0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78bf0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78bf0[0x3a] <= *(int *)((longlong)DAT_14cb78bf0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78bf0 + 0x300))(DAT_14cb78bf0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14187fcfe FUN_14187fcfe body=722 status=ok
// SIG undefined FUN_14187fcfe(void)

void FUN_14187fcfe(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  longlong local_160;
  int local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_a4;
  undefined1 local_9b;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1407f7f84(&local_148);
  if (local_140 != (longlong *)0x0) {
    iVar6 = (int)local_140[1];
    do {
      if (iVar6 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_140[1];
      bVar12 = iVar6 == iVar5;
      if (bVar12) {
        *(int *)(local_140 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar10 = local_140;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)local_140 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_140 + 0x10))();
    }
    if (plVar10 != (longlong *)0x0) {
      lVar4 = CONCAT44(uStack_144,local_148);
      if ((((((lVar4 != 0) && (*(int *)(param_1 + 0x1a4) != 0)) &&
            (uVar2 = *(uint *)(param_1 + 0x1a0), -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            (plVar8 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar8 != (longlong *)0x0)))) &&
          (((int)plVar8[2] == *(int *)(param_1 + 0x1a4) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar3 = *plVar8, lVar3 != 0)))))) &&
         (lVar7 = FUN_1401f6e4a(param_1 + 0x18), lVar7 != 0)) {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          FUN_148830ce2(param_1 + 0x30);
        }
        uVar11 = 0;
        memset(&local_148,0,0x100);
        local_78 = 0xffffffff;
        uStack_144 = 0x3f800000;
        local_a4 = 0xffffffff;
        local_9b = 1;
        local_110 = *(undefined8 *)(param_1 + 0x48);
        local_120 = *(undefined8 *)(param_1 + 0x38);
        uStack_118 = *(undefined8 *)(param_1 + 0x40);
        local_128 = *(undefined8 *)(param_1 + 0x48);
        local_138 = *(undefined8 *)(param_1 + 0x38);
        uStack_130 = *(undefined8 *)(param_1 + 0x40);
        local_f8 = *(undefined8 *)(param_1 + 0x60);
        local_108 = *(undefined8 *)(param_1 + 0x50);
        uStack_100 = *(undefined8 *)(param_1 + 0x58);
        local_f0 = *(undefined4 *)(param_1 + 0x50);
        uStack_ec = *(undefined4 *)(param_1 + 0x54);
        uStack_e8 = *(undefined4 *)(param_1 + 0x58);
        uStack_e4 = *(undefined4 *)(param_1 + 0x5c);
        local_e0 = *(undefined8 *)(param_1 + 0x60);
        local_98 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x74) != 0) {
          uVar2 = *(uint *)(param_1 + 0x70);
          uVar11 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar9 == (undefined8 *)0x0) ||
               ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x74) ||
                ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) {
              uVar11 = 0;
            }
            else {
              uVar11 = *puVar9;
            }
          }
        }
        FUN_140871de8(local_90,uVar11);
        local_70 = *(undefined8 *)(param_1 + 0x78);
        local_58 = *(undefined8 *)(param_1 + 0x80);
        local_158 = *(int *)(param_1 + 0x10);
        local_160 = param_1 + 0x90;
        if (local_158 == 0) {
          local_158 = 0;
          local_168 = 0;
          FUN_1408f2522(lVar4,lVar7,lVar3,&local_148);
        }
        else {
          local_168 = 0;
          FUN_14883101a(lVar4,lVar7,lVar3,&local_148);
        }
      }
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14187ffd2 FUN_14187ffd2 body=511 status=ok
// SIG undefined FUN_14187ffd2(void)

ulonglong FUN_14187ffd2(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70 [24];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if ((((*(int *)(param_1 + 0x10) != 0) || (*param_2 == 0)) || (*(longlong *)(*param_2 + 0x30) == 0)
      ) || (lVar5 = FUN_1401f6e4a(param_1 + 0x18), lVar5 == 0)) goto LAB_14188014a;
  do {
    if (*(char *)(lVar5 + 0x1d0) == '\0') {
      lVar5 = lVar5 + 0x1d8;
      goto LAB_141880056;
    }
    lVar5 = FUN_1401f6e4a(lVar5 + 0x18);
  } while (lVar5 != 0);
  lVar5 = FUN_14084c139();
  lVar5 = lVar5 + 0x20;
LAB_141880056:
  lVar5 = FUN_140385aec(lVar5);
  if ((lVar5 == 0) || (*(float *)(lVar5 + 0x1c) <= 0.0)) goto LAB_14188014a;
  if (*(int *)(param_1 + 0x1a4) == 0) {
LAB_141880182:
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1a0);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x1a4) ||
          ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_141880182;
      lVar7 = *plVar6;
    }
  }
  plVar6 = *(longlong **)(*param_2 + 0x30);
  local_78 = lVar5;
  if ((plVar6[0x7a] == lVar7) ||
     ((**(code **)(*plVar6 + 0x588))(plVar6,&local_58,local_70),
     local_48 = local_48 - *(double *)(param_1 + 0x48),
     local_50 = local_50 - *(double *)(param_1 + 0x40),
     local_58 = local_58 - *(double *)(param_1 + 0x38),
     (float)(local_48 * local_48 + local_58 * local_58 + local_50 * local_50) <=
     *(float *)(lVar5 + 0x1c) * *(float *)(lVar5 + 0x1c))) {
LAB_141880147:
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0x50);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      lVar2 = *(longlong *)(*param_2 + 0x48);
      lVar9 = 0;
      uVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar9);
        if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) &&
           (cVar4 = FUN_143d1f11a(&local_78,lVar3,param_1 + 0x38,lVar7), cVar4 != '\0'))
        goto LAB_141880147;
        lVar9 = lVar9 + 8;
      } while (lVar5 * 8 != lVar9);
    }
  }
LAB_14188014a:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1418801d2 FUN_1418801d2 body=181 status=ok
// SIG undefined FUN_1418801d2(void)

longlong FUN_1418801d2(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  do {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0x61) == '\x01') {
        lVar3 = *(longlong *)(param_1 + 0x160);
        if (lVar3 == 0) {
          return 0;
        }
        plVar4 = *(longlong **)(param_1 + 0x168);
LAB_141880212:
        if (plVar4 == (longlong *)0x0) {
          return lVar3;
        }
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
            return lVar3;
          }
          return lVar3;
        }
        return lVar3;
      }
    }
    else if (*(char *)(param_1 + 99) == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
      if (lVar3 == 0) {
        return 0;
      }
      plVar4 = *(longlong **)(param_1 + 0x1a8);
      goto LAB_141880212;
    }
    param_1 = FUN_1401f6e4a(param_1 + 0x18);
  } while( true );
}



// FUNCTION 141880288 FUN_141880288 body=22 status=ok
// SIG undefined FUN_141880288(void)

undefined8 FUN_141880288(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78ff0;
  if (DAT_14cb78ff0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78ff0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78ff0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78ff0[0x3a] <= *(int *)((longlong)DAT_14cb78ff0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78ff0 + 0x300))(DAT_14cb78ff0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14188029e FUN_14188029e body=195 status=ok
// SIG undefined FUN_14188029e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14188029e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7ba98) {
    FUN_144b3d300(&DAT_14cb7ba98);
    if (DAT_14cb7ba98 == -1) {
      FUN_1409e1656(&DAT_14cb79538);
      _DAT_14cb79538 = &PTR_FUN_14b3fab40;
      DAT_14cb7a540 = 0;
      _DAT_14cb7a548 = 0x8000000000;
      DAT_14cb7a560 = 0;
      _DAT_14cb7a568 = 0x8000000000;
      _DAT_14cb7a570 = 0xffffffff;
      DAT_14cb7a678 = 0;
      DAT_14cb7a680 = 0;
      DAT_14cb7ba88 = 0;
      _DAT_14cb7ba90 = 0x8000000000;
      atexit((_func_5014 *)&LAB_143d206a6);
      _Init_thread_footer(&DAT_14cb7ba98);
      return;
    }
  }
  return;
}



// FUNCTION 141880362 FUN_141880362 body=660 status=ok
// SIG undefined FUN_141880362(void)

undefined8 * FUN_141880362(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = *(uint *)(param_1 + 0x20);
  if ((ulonglong)uVar5 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0x4fc71eb4;
  }
  else {
    uVar14 = 0;
    if (1 < (int)uVar5) {
      pfVar7 = *(float **)(param_1 + 0x18);
      fVar15 = ABS(*pfVar7 - *(float *)(param_3 + 8));
      uVar9 = 1;
      do {
        pfVar7 = pfVar7 + 0x1c;
        fVar16 = ABS(*pfVar7 - *(float *)(param_3 + 8));
        if (fVar16 <= fVar15) {
          uVar14 = uVar9 & 0xffffffff;
          fVar15 = fVar16;
        }
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
      uVar14 = (ulonglong)(int)uVar14;
    }
    if (*(longlong *)(param_3 + 0x10) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x18) + uVar14 * 0x70;
      puVar2 = *(undefined4 **)(*(longlong *)(param_3 + 0x10) + 8);
      puVar10 = &DAT_14c9485f0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar10 = puVar2;
      }
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,&local_40,puVar10,1);
      if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
        uVar5 = (uint)(local_40 >> 0x10);
        uVar8 = (int)(local_40 >> 0x20) + ((int)local_40 << 0x10 | (uint)(local_40 & 0xffff)) +
                (uVar5 << 0x13 | uVar5 & 0xffff) + (int)((local_40 & 0xffff) >> 4) ^ 1;
        uVar5 = (uVar8 - 0x3002) * 0x100 ^ 0x9e3779b9 - uVar8;
        uVar11 = uVar5 >> 0xd ^ (0x6004 - uVar8) - uVar5;
        uVar13 = uVar11 >> 0xc ^ (uVar8 - (uVar5 + uVar11)) - 0x3002;
        uVar8 = uVar13 << 0x10 ^ (uVar5 - uVar11) - uVar13;
        uVar5 = uVar8 >> 5 ^ (uVar11 - uVar13) - uVar8;
        uVar11 = uVar5 >> 3 ^ (uVar13 - uVar8) - uVar5;
        uVar8 = uVar11 << 10 ^ (uVar8 - uVar5) - uVar11;
        lVar4 = lVar1 + 0x58;
        if (*(longlong *)(lVar1 + 0x60) != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x60);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(lVar1 + 0x68) - 1U &
                                 (uVar8 >> 0xf ^ uVar5 - (uVar11 + uVar8))) * 4);
        if (iVar6 != -1) {
          lVar1 = *(longlong *)(lVar1 + 0x20);
          do {
            lVar12 = (longlong)iVar6 * 0x38;
            lVar4 = lVar1 + lVar12;
            if ((*(ulonglong *)(lVar1 + lVar12) == local_40) &&
               (*(int *)(lVar1 + 8 + lVar12) == 0x3002)) {
              if ((lVar4 != 0) && (lVar4 != -0x18)) {
                *param_2 = *(undefined8 *)(lVar4 + 0x18);
                uVar3 = *(undefined4 *)(lVar4 + 0x20);
                goto LAB_14188053b;
              }
              break;
            }
            iVar6 = *(int *)(lVar4 + 0x30);
          } while (iVar6 != -1);
        }
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    *param_2 = *(undefined8 *)(lVar1 + 8 + uVar14 * 0x70);
    uVar3 = *(undefined4 *)(lVar1 + 0x10 + uVar14 * 0x70);
LAB_14188053b:
    *(undefined4 *)(param_2 + 1) = uVar3;
  }
  param_2[2] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14188061c FUN_14188061c body=631 status=ok
// SIG undefined FUN_14188061c(void)

void FUN_14188061c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_1 + 0x51;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_78;
  if ((int)param_1[0x54] == 0) {
    uVar18 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar12 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar18 = local_68 >> 0x20;
    iVar12 = (int)param_1[0x54];
  }
  plVar5 = local_60;
  plVar16 = local_78;
  iVar19 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar10 = local_58._4_4_;
  iVar17 = local_50;
  if (local_58._4_4_ != iVar12 || local_60 != local_78) {
    do {
      lVar13 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar10 * 0x20);
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0x40) != (int)param_1[0x5f])) {
        local_70 = param_1 + 0x5a;
        lVar14 = lVar13;
        do {
          puVar6 = (undefined8 *)FUN_144a06846(lVar14 + 0x48,local_70);
          pbVar3 = (byte *)*puVar6;
          plVar16 = local_78;
          if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) == 0)) || ((*pbVar3 & 0x68) != 0))
          goto LAB_1418806e6;
          uVar7 = FUN_140625092(pbVar3,&DAT_14c9a12e0);
          lVar14 = FUN_144837648(param_1,uVar7,1);
          plVar16 = local_78;
          if (lVar14 == 0) goto LAB_1418806e6;
        } while (*(int *)(lVar14 + 0x40) != (int)param_1[0x5f]);
        (**(code **)(*param_1 + 0x420))(param_1,lVar13);
        plVar16 = local_78;
      }
LAB_1418806e6:
      uVar11 = uVar11 & ~(uint)uVar18;
      plVar15 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar15 = plVar5;
      }
      iVar2 = (int)plVar5[3];
      lVar13 = (longlong)iVar19;
      uVar9 = *(uint *)((longlong)plVar15 + lVar13 * 4) & uVar11;
      iVar10 = iVar2;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar4 = iVar8;
        if (iVar8 < iVar19) {
          iVar4 = iVar19;
        }
        if (iVar19 < iVar8) {
          lVar14 = 0;
          do {
            uVar9 = *(uint *)((longlong)plVar15 + lVar14 * 4 + lVar13 * 4 + 4);
            if (uVar9 != 0) {
              iVar19 = iVar19 + (int)lVar14 + 1;
              uVar11 = 0xffffffff;
              goto LAB_141880754;
            }
            iVar17 = iVar17 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar4 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          plVar16 = local_78;
          iVar19 = iVar4 + 1;
        }
        else {
          iVar19 = iVar19 + 1;
          plVar16 = local_78;
        }
      }
      else {
LAB_141880754:
        uVar18 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar18 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar10) {
          iVar10 = iVar2;
        }
      }
    } while (iVar10 != iVar12 || plVar5 != plVar16);
  }
  *(int *)(param_1 + 0x5f) = (int)param_1[0x5f] + 1;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141880894 FUN_141880894 body=1754 status=ok
// SIG undefined FUN_141880894(void)

void FUN_141880894(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  byte *local_f8;
  longlong *local_f0;
  byte *local_e8;
  longlong *plStack_e0;
  byte *local_d8;
  longlong *plStack_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_2 + 0xc0) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
  }
  local_d8 = (byte *)0x0;
  plStack_d0 = (longlong *)0x0;
  cVar4 = (**(code **)(*param_1 + 0x360))(param_1,&local_d8,param_3);
  if (cVar4 == '\0') goto LAB_141880ce0;
  local_e8 = (byte *)0x0;
  plStack_e0 = (longlong *)0x0;
  local_f8 = local_d8;
  local_f0 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
    UNLOCK();
  }
  do {
    local_a8 = DAT_14cb78f50;
    local_b0 = DAT_14cb78f48;
    FUN_1448075d0(&local_88,&local_b0);
    puVar8 = &DAT_14c9a1308;
    if (local_f8 != (byte *)0x0) {
      plVar5 = &DAT_14c9a1288;
      if ((*local_f8 & 2) != 0) {
        plVar5 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
      }
      puVar8 = &DAT_14c9a1308;
      if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
        plVar7 = plVar5 + 8;
        if ((longlong *)plVar5[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar5[9];
        }
        iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar5[10] - 1U & (uint)local_88) * 4)
        ;
        puVar8 = &DAT_14c9a1308;
        if (iVar11 != -1) {
          do {
            lVar2 = *plVar5 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar5 + (longlong)iVar11 * 0x40) == (uint)local_88) {
              puVar8 = &DAT_14c9a1308;
              if (lVar2 == 0) goto LAB_1418809f4;
              puVar6 = (undefined8 *)(lVar2 + 0x28);
              puVar8 = &DAT_14c9a1308;
              if ((puVar6 == (undefined8 *)0x0) ||
                 (((byte *)*puVar6 != (byte *)0x0 &&
                  (puVar8 = puVar6, (*(byte *)*puVar6 & 0x40) == 0)))) goto LAB_1418809f4;
              break;
            }
            iVar11 = *(int *)(lVar2 + 0x38);
          } while (iVar11 != -1);
          puVar8 = &DAT_14c9a1308;
        }
      }
    }
LAB_1418809f4:
    if ((byte *)*puVar8 == (byte *)0x0) {
      bVar10 = false;
    }
    else {
      bVar3 = *(byte *)*puVar8;
      bVar10 = (bVar3 & 0x68) == 0 && (bVar3 & 3) != 0;
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (bVar10) {
      local_a8 = DAT_14cb78f50;
      local_b0 = DAT_14cb78f48;
      FUN_1448075d0(&local_88);
      plVar5 = plStack_e0;
      if (local_f8 == (byte *)0x0) goto LAB_141880c59;
      if ((*local_f8 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
      }
      if ((int)plVar7[2] == *(int *)((longlong)plVar7 + 0x3c)) goto LAB_141880c59;
      plVar12 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar7[9];
      }
      iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_88) * 4);
      if (iVar11 == -1) goto LAB_141880c59;
      goto LAB_141880c3a;
    }
    local_a8 = DAT_14cb78f38;
    local_b0 = DAT_14cb78f30;
    FUN_1448075d0(&local_88,&local_b0);
    puVar8 = &DAT_14c9a1308;
    if (local_f8 != (byte *)0x0) {
      plVar5 = &DAT_14c9a1288;
      if ((*local_f8 & 2) != 0) {
        plVar5 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
      }
      puVar8 = &DAT_14c9a1308;
      if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
        plVar7 = plVar5 + 8;
        if ((longlong *)plVar5[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar5[9];
        }
        iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar5[10] - 1U & (uint)local_88) * 4)
        ;
        puVar8 = &DAT_14c9a1308;
        if (iVar11 != -1) {
          do {
            lVar2 = *plVar5 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar5 + (longlong)iVar11 * 0x40) == (uint)local_88) {
              puVar8 = &DAT_14c9a1308;
              if (lVar2 == 0) goto LAB_141880af3;
              puVar6 = (undefined8 *)(lVar2 + 0x28);
              puVar8 = &DAT_14c9a1308;
              if ((puVar6 == (undefined8 *)0x0) ||
                 (((byte *)*puVar6 != (byte *)0x0 &&
                  (puVar8 = puVar6, (*(byte *)*puVar6 & 0x40) == 0)))) goto LAB_141880af3;
              break;
            }
            iVar11 = *(int *)(lVar2 + 0x38);
          } while (iVar11 != -1);
          puVar8 = &DAT_14c9a1308;
        }
      }
    }
LAB_141880af3:
    plVar7 = plStack_e0;
    if (((byte *)*puVar8 == (byte *)0x0) ||
       (bVar3 = *(byte *)*puVar8, (bVar3 & 3) == 0 || (bVar3 & 0x68) != 0)) goto LAB_141880c8b;
    local_b8 = DAT_14cb78f68;
    local_c0 = DAT_14cb78f60;
    FUN_1448075d0(&local_b0,&local_c0);
    plVar5 = &DAT_14c9a1308;
    if (local_f8 != (byte *)0x0) {
      plVar7 = &DAT_14c9a1288;
      if ((*local_f8 & 2) != 0) {
        plVar7 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
      }
      plVar5 = &DAT_14c9a1308;
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar5 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar7[9];
        }
        iVar11 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_b0) * 4)
        ;
        plVar5 = &DAT_14c9a1308;
        if (iVar11 != -1) {
          do {
            lVar2 = *plVar7 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar11 * 0x40) == (uint)local_b0) {
              plVar5 = &DAT_14c9a1308;
              if (lVar2 == 0) goto LAB_141880dce;
              plVar7 = (longlong *)(lVar2 + 0x28);
              plVar5 = &DAT_14c9a1308;
              if ((plVar7 == (longlong *)0x0) ||
                 (((byte *)*plVar7 != (byte *)0x0 &&
                  (plVar5 = plVar7, (*(byte *)*plVar7 & 0x40) == 0)))) goto LAB_141880dce;
              break;
            }
            iVar11 = *(int *)(lVar2 + 0x38);
          } while (iVar11 != -1);
          plVar5 = &DAT_14c9a1308;
        }
      }
    }
LAB_141880dce:
    if (*plVar5 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = FUN_14000584e(*plVar5,0);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (cVar4 == '\0') break;
    local_80 = DAT_14cb78f38;
    local_88 = DAT_14cb78f30;
    FUN_1448075d0(&local_b0);
    plVar5 = (longlong *)FUN_144a06846(&local_f8,&local_b0);
    puVar9 = &DAT_14c9a12e0;
    if (*plVar5 != 0) {
      puVar9 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
    }
    FUN_1447a97f4(&local_88,puVar9);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    cVar4 = (**(code **)(*param_1 + 0x360))(param_1,&local_f8,&local_88);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  } while (cVar4 != '\0');
  goto LAB_141880c9c;
  while (iVar11 = *(int *)(lVar2 + 0x38), iVar11 != -1) {
LAB_141880c3a:
    lVar2 = *plVar7 + (longlong)iVar11 * 0x40;
    if (*(uint *)(*plVar7 + (longlong)iVar11 * 0x40) == (uint)local_88) {
      if ((((lVar2 != 0) && (puVar8 = (undefined8 *)(lVar2 + 0x28), puVar8 != (undefined8 *)0x0)) &&
          ((byte *)*puVar8 != (byte *)0x0)) && ((*(byte *)*puVar8 & 0x40) == 0)) goto LAB_141880c5c;
      break;
    }
  }
LAB_141880c59:
  puVar8 = &DAT_14c9a1308;
LAB_141880c5c:
  local_e8 = (byte *)*puVar8;
  plVar7 = (longlong *)puVar8[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_e0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      puVar8 = (undefined8 *)*plStack_e0;
      plStack_e0 = plVar7;
      (*(code *)*puVar8)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = plStack_e0;
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar7 = plStack_e0;
      }
    }
  }
LAB_141880c8b:
  plStack_e0 = plVar7;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_141880c9c:
  if (((local_e8 == (byte *)0x0) || ((*local_e8 & 3) == 0)) || ((*local_e8 & 0x68) != 0)) {
    FUN_140204f88(param_1,param_2,param_3);
  }
  else {
    FUN_14475b384(param_1,param_2,&local_e8,&DAT_14c9a1640);
  }
  plVar5 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_f0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_141880ce0:
  plVar5 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141880f98 FUN_141880f98 body=1105 status=ok
// SIG undefined FUN_141880f98(void)

void FUN_141880f98(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  uint uVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong local_190;
  undefined4 local_188;
  longlong local_178;
  longlong *local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  byte local_cb;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar8 = *(longlong *)(param_1 + 0x158);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x8c) != '\x01') goto LAB_1418812b9;
    if (((((*(int *)(lVar8 + 0x14) != 0) && (uVar4 = *(uint *)(lVar8 + 0x10), -1 < (int)uVar4)) &&
         ((int)uVar4 < DAT_14c9647dc)) &&
        ((plVar11 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(lVar8 + 0x14))))) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
        ((lVar8 = *plVar11, lVar8 != 0 &&
         (FUN_1407f7f84(&local_178,lVar8), local_170 != (longlong *)0x0)))))) {
      iVar7 = (int)local_170[1];
      do {
        if (iVar7 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)local_170[1];
        bVar14 = iVar7 == iVar6;
        if (bVar14) {
          *(int *)(local_170 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
        plVar11 = local_170;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_170 + 0x10))();
      }
      if (plVar11 != (longlong *)0x0) {
        if (local_178 != 0) {
          lVar13 = *(longlong *)(param_1 + 0x158);
          memcpy(&local_178,(void *)(lVar13 + 0x90),0xb8);
          local_c0 = *(undefined8 *)(lVar13 + 0x148);
          local_b8 = *(undefined8 *)(lVar13 + 0x150);
          uStack_b0 = *(undefined8 *)(lVar13 + 0x158);
          local_a8 = *(undefined4 *)(lVar13 + 0x160);
          local_a4 = *(undefined1 *)(lVar13 + 0x164);
          local_80 = *(undefined8 *)(lVar13 + 0x188);
          local_90 = *(undefined8 *)(lVar13 + 0x178);
          uStack_88 = *(undefined8 *)(lVar13 + 0x180);
          local_a0 = *(undefined8 *)(lVar13 + 0x168);
          uStack_98 = *(undefined8 *)(lVar13 + 0x170);
          local_158 = *(double *)(param_1 + 0x148);
          local_168 = *(double *)(param_1 + 0x138);
          dStack_160 = *(double *)(param_1 + 0x140);
          if (*(char *)(param_1 + 0x155) == '\x01') {
            if ((local_cb & 1) == 0) goto LAB_14188115d;
            local_158 = local_140;
            local_168 = local_150;
            dStack_160 = dStack_148;
          }
          else if ((local_cb & 1) == 0) {
LAB_14188115d:
            local_140 = *(double *)(param_1 + 0x148);
            local_150 = *(double *)(param_1 + 0x138);
            dStack_148 = *(double *)(param_1 + 0x140);
            local_120 = DAT_14c8462c0;
            dStack_118 = DAT_14c8462c8;
            local_110 = DAT_14c8462d0;
            local_138 = DAT_14c8462c0;
            dStack_130 = DAT_14c8462c8;
            local_128 = DAT_14c8462d0;
          }
          fVar2 = *(float *)(param_1 + 0x150);
          if (1e-08 < ABS(fVar2)) {
            if (*(char *)(param_1 + 0x154) == '\x01') {
              pdVar9 = &local_138;
              dVar5 = local_128 * (double)fVar2;
              pdVar10 = &dStack_130;
            }
            else {
              pdVar9 = &DAT_14c8462c0;
              dVar5 = DAT_14c8462d0 * (double)fVar2;
              pdVar10 = &DAT_14c8462c8;
            }
            local_168 = (double)fVar2 * *pdVar9 + local_168;
            dStack_160 = *pdVar10 * (double)fVar2 + dStack_160;
            local_158 = dVar5 + local_158;
          }
          if ((((*(int *)(param_1 + 0x134) == 0) ||
               (uVar4 = *(uint *)(param_1 + 0x130), (int)uVar4 < 0)) ||
              (DAT_14c9647dc <= (int)uVar4)) ||
             (((plVar12 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x134))) ||
              (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar13 = *plVar12, lVar13 == 0))))))
          {
            if (*(longlong *)(lVar8 + 0x30) == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
            }
          }
          uVar3 = *(undefined1 *)(param_1 + 0x156);
          local_78 = *(undefined8 *)(param_1 + 8);
          FUN_1446dcdd4(local_70);
          if (((DAT_14cb78ff0 != 0) && (lVar8 = FUN_144837462(DAT_14cb78ff0,local_70), lVar13 != 0))
             && (lVar8 != 0)) {
            local_190 = param_1 + 0x20;
            local_188 = 0;
            local_198 = uVar3;
            FUN_1408f2522(local_178,lVar8,lVar13,&local_178);
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        LOCK();
        plVar12 = plVar11 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
  *(undefined1 *)(param_2 + 0x60) = 1;
LAB_1418812b9:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418813ea FUN_1418813ea body=17 status=ok
// SIG undefined FUN_1418813ea(void)

void FUN_1418813ea(longlong param_1,undefined8 param_2)

{
  FUN_144928d62(param_1 + 0x10,3,param_2);
  return;
}



// FUNCTION 1418813fc FUN_1418813fc body=104 status=ok
// SIG undefined FUN_1418813fc(void)

void FUN_1418813fc(longlong param_1,int *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_2 == 0) {
    local_10 = DAT_14cb7bba0;
    local_18 = DAT_14cb7bb98;
  }
  else {
    local_10 = param_2[2];
    local_18 = *(undefined8 *)param_2;
  }
  FUN_144928d62(param_1 + 0x10,1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141881466 FUN_141881466 body=147 status=ok
// SIG undefined FUN_141881466(void)

int * FUN_141881466(undefined8 param_1,int *param_2)

{
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14014e996(param_1,&local_40,0,0);
  if (((local_40 == 0) || (local_3c == 0)) || (local_40 == DAT_14c948000)) {
    param_2[2] = DAT_14c948620;
    *(undefined8 *)param_2 = DAT_14c948618;
  }
  else {
    *param_2 = local_40;
    *(undefined8 *)(param_2 + 1) = DAT_14c948028;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418814fa FUN_1418814fa body=624 status=ok
// SIG undefined FUN_1418814fa(void)

void FUN_1418814fa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x1138);
  if (*(longlong *)(param_1 + 0x1138) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 0x1140);
  uVar3 = local_70;
  if (uVar8 == 0) goto LAB_141881706;
  lVar2 = param_1 + 0x1038;
  if ((uVar8 < 0x41) && (*plVar1 == 0)) {
LAB_141881557:
    uVar4 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x1138);
      if (*(longlong *)(param_1 + 0x1138) == 0) {
        lVar10 = lVar2;
      }
      *(undefined4 *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x1140) + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    uVar4 = 0;
    if (0x40 < uVar8) {
      uVar4 = uVar8;
    }
    FUN_1446efa72(plVar1,0,uVar4,4);
    if (0 < (int)uVar8) goto LAB_141881557;
  }
  local_58 = param_1 + 0x1010;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (*(int *)(param_1 + 0x1028) != 0) {
    FUN_14045d8e6(&local_60);
  }
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  uVar3 = local_70;
  local_68 = local_48;
  local_64 = local_44;
  local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
  local_88 = param_1;
  if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
    iVar5 = local_70._4_4_;
    local_70 = uVar3;
    do {
      lVar10 = *(longlong *)(local_88 + 0x1000);
      if (*(longlong *)(local_88 + 0x1000) == 0) {
        lVar10 = local_88;
      }
      lVar11 = (longlong)iVar5 * 0x20;
      uVar7 = *(ulonglong *)(lVar10 + 8 + lVar11);
      uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
      uVar4 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = ((uint)(*(ulonglong *)(lVar10 + lVar11) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar10 + lVar11) >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      iVar6 = FUN_144a78877(uVar8 >> 0x10 ^ uVar8,uVar4 >> 0x10 ^ uVar4);
      uVar7 = (longlong)iVar6 & (longlong)*(int *)(param_1 + 0x1140) - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar10 + 0x1c + lVar11) = iVar6;
      lVar9 = *(longlong *)(param_1 + 0x1138);
      if (*(longlong *)(param_1 + 0x1138) == 0) {
        lVar9 = lVar2;
      }
      *(undefined4 *)(lVar10 + 0x18 + lVar11) =
           *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x1140) - 1U & uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x1138);
      if (*(longlong *)(param_1 + 0x1138) == 0) {
        lVar10 = lVar2;
      }
      *(int *)(lVar10 + ((longlong)iVar6 & (longlong)*(int *)(param_1 + 0x1140) - 1U) * 4) = iVar5;
      local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
      FUN_14045d8e6(&local_80);
      iVar5 = local_70._4_4_;
      uVar3 = local_70;
    } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
  }
LAB_141881706:
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418817dc FUN_1418817dc body=268 status=ok
// SIG undefined FUN_1418817dc(void)

uint * FUN_1418817dc(uint *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar4 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar3;
      }
    }
  }
  param_1[1] = uVar2;
  *(undefined8 *)(param_1 + 2) = *param_3;
  *(undefined8 *)(param_1 + 4) = *param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = *(uint *)(param_5 + 1);
  _Src = (void *)*param_5;
  param_1[8] = uVar2;
  if ((longlong)(int)uVar2 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,uVar2,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)(int)uVar2);
  }
  return param_1;
}



// FUNCTION 1418818e8 FUN_1418818e8 body=67 status=ok
// SIG undefined FUN_1418818e8(void)

undefined8 * FUN_1418818e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3fad00;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14188192c FUN_14188192c body=346 status=ok
// SIG undefined FUN_14188192c(void)

void FUN_14188192c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418819be;
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
LAB_1418819be:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141881a88 FUN_141881a88 body=93 status=ok
// SIG undefined FUN_141881a88(void)

void FUN_141881a88(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fad40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 141881ae6 FUN_141881ae6 body=353 status=ok
// SIG undefined FUN_141881ae6(void)

void FUN_141881ae6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141881b6d;
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
LAB_141881b6d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141881c48 FUN_141881c48 body=29 status=ok
// SIG undefined FUN_141881c48(void)

undefined8 FUN_141881c48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141881c66 FUN_141881c66 body=15 status=ok
// SIG undefined FUN_141881c66(void)

void FUN_141881c66(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = *param_2;
  FUN_140641d04();
  return;
}



// FUNCTION 141881c76 FUN_141881c76 body=447 status=ok
// SIG undefined FUN_141881c76(void)

undefined1 * FUN_141881c76(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *_Str;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  char *local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined1 local_b8 [128];
  longlong local_38;
  char *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = (char *)0x0;
    local_28 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1449b853c(local_b8,_Str,sVar2 & 0xffffffff,1);
    pcVar1 = local_30;
    if (local_30 != (char *)0x0) {
      sVar2 = strlen(local_30);
      iVar4 = (int)sVar2;
      if (iVar4 != 0) {
        lVar5 = (longlong)iVar4;
        pcVar10 = pcVar1 + lVar5 + -1;
        uVar3 = 0;
        if (pcVar10 < pcVar1) {
          lVar9 = 0;
        }
        else {
          do {
            if (9 < (byte)(*pcVar10 - 0x30U)) break;
            uVar3 = uVar3 + 1;
            pcVar10 = pcVar10 + -1;
          } while (pcVar1 <= pcVar10);
          lVar9 = 0;
          if ((((uVar3 != 0) && ((int)uVar3 < iVar4)) && (lVar9 = 0, uVar3 < 0xb)) &&
             (lVar11 = -(ulonglong)uVar3, pcVar1[lVar11 + lVar5 + -1] == '_')) {
            if ((uVar3 == 1) || (pcVar1[lVar11 + lVar5] != '0')) {
              lVar8 = 0;
              do {
                lVar9 = (longlong)pcVar1[lVar11 + lVar5] + lVar8 * 10;
                lVar8 = lVar9 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar8 < 0x7fffffff) {
                iVar4 = ~uVar3 + iVar4;
                lVar9 = lVar9 + -0x2f;
                goto LAB_141881d43;
              }
            }
            lVar9 = 0;
          }
LAB_141881d43:
          if (iVar4 == 0) goto LAB_141881e23;
        }
        local_c8 = pcVar1;
        local_bc = 0;
        local_c0 = iVar4;
        uVar3 = FUN_14001a6c0(&local_c8,1);
        uVar7 = lVar9 << 0x20;
        uVar6 = (ulonglong)uVar3;
        goto LAB_141881d6a;
      }
    }
  }
LAB_141881e23:
  uVar6 = 0;
  uVar7 = 0;
LAB_141881d6a:
  FUN_144976b9c(param_1,uVar6 | uVar7);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141881e36 FUN_141881e36 body=432 status=ok
// SIG undefined FUN_141881e36(void)

undefined1 * FUN_141881e36(undefined1 *param_1,wchar_t *param_2)

{
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  char *local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined1 local_b8 [128];
  longlong local_38;
  char *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_38 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_30 = (char *)0x0;
    local_28 = 0;
  }
  else {
    sVar2 = wcslen(param_2);
    FUN_1449b853c(local_b8,param_2,sVar2 & 0xffffffff,1);
    pcVar1 = local_30;
    if (local_30 != (char *)0x0) {
      sVar2 = strlen(local_30);
      iVar4 = (int)sVar2;
      if (iVar4 != 0) {
        lVar5 = (longlong)iVar4;
        pcVar10 = pcVar1 + lVar5 + -1;
        uVar3 = 0;
        if (pcVar10 < pcVar1) {
          lVar9 = 0;
        }
        else {
          do {
            if (9 < (byte)(*pcVar10 - 0x30U)) break;
            uVar3 = uVar3 + 1;
            pcVar10 = pcVar10 + -1;
          } while (pcVar1 <= pcVar10);
          lVar9 = 0;
          if ((((uVar3 != 0) && ((int)uVar3 < iVar4)) && (lVar9 = 0, uVar3 < 0xb)) &&
             (lVar11 = -(ulonglong)uVar3, pcVar1[lVar11 + lVar5 + -1] == '_')) {
            if ((uVar3 == 1) || (pcVar1[lVar11 + lVar5] != '0')) {
              lVar8 = 0;
              do {
                lVar9 = (longlong)pcVar1[lVar11 + lVar5] + lVar8 * 10;
                lVar8 = lVar9 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar8 < 0x7fffffff) {
                iVar4 = ~uVar3 + iVar4;
                lVar9 = lVar9 + -0x2f;
                goto LAB_141881ef4;
              }
            }
            lVar9 = 0;
          }
LAB_141881ef4:
          if (iVar4 == 0) goto LAB_141881fd4;
        }
        local_c8 = pcVar1;
        local_bc = 0;
        local_c0 = iVar4;
        uVar3 = FUN_14001a6c0(&local_c8,1);
        uVar7 = lVar9 << 0x20;
        uVar6 = (ulonglong)uVar3;
        goto LAB_141881f1b;
      }
    }
  }
LAB_141881fd4:
  uVar6 = 0;
  uVar7 = 0;
LAB_141881f1b:
  FUN_144976b9c(param_1,uVar6 | uVar7);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141881fe8 FUN_141881fe8 body=74 status=ok
// SIG undefined FUN_141881fe8(void)

void FUN_141881fe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14105e99c(param_2);
  lVar2 = FUN_14105e9e4(uVar1);
  if (lVar2 != 0) {
    FUN_140457ffc(lVar2 + 0x48,param_1);
    FUN_140457ffc(lVar2 + 0x60,param_1);
    return;
  }
  return;
}



// FUNCTION 141882032 FUN_141882032 body=195 status=ok
// SIG undefined FUN_141882032(void)

void FUN_141882032(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    local_1c = 0xffffffff;
    local_30 = *(undefined8 *)(param_2 + 0x34);
    local_28 = *(undefined4 *)(param_2 + 0x3c);
    local_68 = &local_1d;
    lVar1 = FUN_140bc60a2(param_1 + 0x68,param_1 + 0x30);
    if (lVar1 != 0) {
      local_34 = *(undefined4 *)(param_2 + 0xc);
      local_50 = &local_34;
      local_58 = &local_40;
      local_40 = 0;
      local_68 = (undefined1 *)(param_2 + 0x40);
      local_60 = 0;
      FUN_140bc5a82(param_1,param_2 + 0x34,lVar1,local_1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418820f6 FUN_1418820f6 body=636 status=ok
// SIG undefined FUN_1418820f6(void)

void FUN_1418820f6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_2;
  if ((*(char *)(param_1 + 0x29) == '\x01') && (iVar5 = FUN_1410babec(), iVar5 != 3)) {
    local_70 = 0x70006050000U >> ((byte)(*(int *)(param_1 + 0x18) << 3) & 0x3f) & 0xffffffff;
    if (5 < (byte)*(int *)(param_1 + 0x18)) {
      local_70 = 0;
    }
    iVar5 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100)) + *(int *)(local_78 + 8);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (*(int *)(local_78 + 0xc) < iVar5) {
      FUN_140117cc8();
    }
    local_80 = param_1 + 0x40;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = local_80;
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar5 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar15 = local_68 >> 0x20;
      iVar5 = *(int *)(param_1 + 0x58);
    }
    lVar4 = local_60;
    iVar9 = (int)local_68;
    uVar7 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar11 = local_50;
    lVar14 = param_1;
    if (local_58._4_4_ != iVar5 || local_60 != local_80) {
      do {
        local_88 = lVar14;
        lVar14 = *(longlong *)(local_88 + 0x30);
        lVar10 = (longlong)iVar8 * 0x30;
        puVar6 = (undefined1 *)FUN_140116e58(local_78);
        *puVar6 = (char)local_70;
        *(undefined8 *)(puVar6 + 0x34) = *(undefined8 *)(lVar14 + lVar10);
        *(undefined4 *)(puVar6 + 0x3c) = *(undefined4 *)(lVar14 + 8 + lVar10);
        *(undefined8 *)(puVar6 + 0x40) = *(undefined8 *)(lVar14 + 0xc + lVar10);
        *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(lVar14 + 0x14 + lVar10);
        uVar7 = ~(uint)uVar15 & uVar7;
        lVar14 = *(longlong *)(lVar4 + 0x10);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar14 = lVar4;
        }
        iVar2 = *(int *)(lVar4 + 0x18);
        lVar10 = (longlong)iVar9;
        uVar12 = *(uint *)(lVar14 + lVar10 * 4) & uVar7;
        if (uVar12 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar3 = iVar8;
          if (iVar8 < iVar9) {
            iVar3 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar13 = 0;
            do {
              uVar12 = *(uint *)(lVar14 + lVar10 * 4 + 4 + lVar13 * 4);
              if (uVar12 != 0) {
                iVar9 = iVar9 + (int)lVar13 + 1;
                uVar7 = 0xffffffff;
                goto LAB_1418822b1;
              }
              iVar11 = iVar11 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar3 - lVar10 != lVar13);
            uVar7 = 0xffffffff;
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar2;
        }
        else {
LAB_1418822b1:
          uVar15 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar8) {
            iVar8 = iVar2;
          }
        }
        lVar14 = local_88;
      } while (iVar8 != iVar5 || lVar4 != local_80);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141882374 FUN_141882374 body=95 status=ok
// SIG undefined FUN_141882374(void)

void FUN_141882374(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  FUN_144976b9c(local_28);
  FUN_1403218c0(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418823d4 FUN_1418823d4 body=129 status=ok
// SIG undefined FUN_1418823d4(void)

undefined8 FUN_1418823d4(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58 [2];
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x90))(param_1,local_58);
  if (local_48 == (longlong *)0x0) {
    local_40 = local_58[0];
    FUN_1446dcdd4(local_38);
    local_48 = (longlong *)FUN_1400d6974(local_38);
    if (local_48 == (longlong *)0x0) {
      uVar1 = 0;
      goto LAB_141882435;
    }
  }
  uVar1 = (**(code **)(*local_48 + 0xa8))(local_48);
LAB_141882435:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141882456 FUN_141882456 body=103 status=ok
// SIG undefined FUN_141882456(void)

undefined8 * FUN_141882456(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    local_18 = *(undefined4 *)(lVar1 + 0x20);
    local_20 = *(undefined8 *)(lVar1 + 0x18);
    FUN_140e3418c(&local_20,param_2,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418824be FUN_1418824be body=102 status=ok
// SIG undefined FUN_1418824be(void)

undefined8 * FUN_1418824be(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
  if (puVar1 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    local_18 = *(undefined4 *)(puVar1 + 1);
    local_20 = *puVar1;
    FUN_140e3418c(&local_20,param_2,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141882526 FUN_141882526 body=91 status=ok
// SIG undefined FUN_141882526(void)

void FUN_141882526(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140c63bd8(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar1 + 1;
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = (longlong)iVar1 * 0xb0;
  *(undefined4 *)(lVar2 + lVar3) = *param_2;
  *(undefined4 *)(lVar2 + 4 + lVar3) = param_3;
  *(undefined1 *)(lVar2 + 9 + lVar3) = 7;
  FUN_140da48c8(param_1 + -0x68);
  return;
}



// FUNCTION 141882582 FUN_141882582 body=375 status=ok
// SIG undefined FUN_141882582(void)

void FUN_141882582(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c63bd8(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar4 + 1;
  lVar5 = *(longlong *)(param_1 + 0x30);
  lVar14 = (longlong)iVar4 * 0xb0;
  *(undefined4 *)(lVar5 + lVar14) = *param_2;
  *(undefined4 *)(lVar5 + 4 + lVar14) = param_3;
  *(undefined1 *)(lVar5 + 8 + lVar14) = *(undefined1 *)(param_2 + 0xbe);
  *(undefined1 *)(lVar5 + 9 + lVar14) = *(undefined1 *)(param_2 + 0xa6);
  *(undefined8 *)(lVar5 + 0xc + lVar14) = *(undefined8 *)(param_2 + 0x46);
  *(byte *)(lVar5 + 0x18 + lVar14) = *(byte *)(param_2 + 0xac) >> 3 & 1;
  *(undefined1 *)(lVar5 + 0x19 + lVar14) = *(undefined1 *)(param_2 + 0xb);
  uVar13 = *(undefined8 *)(param_2 + 0x56);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar14);
  *puVar1 = *(undefined8 *)(param_2 + 0x54);
  puVar1[1] = uVar13;
  *(undefined8 *)(lVar5 + 0x30 + lVar14) = uVar3;
  local_78 = *(undefined8 *)(param_2 + 0x4c);
  uStack_70 = *(undefined8 *)(param_2 + 0x4e);
  local_68 = param_2[0x50];
  uStack_64 = param_2[0x51];
  uStack_60 = param_2[0x52];
  uStack_5c = param_2[0x53];
  FUN_1448052ee(&local_78,&local_58);
  *(undefined8 *)(lVar5 + 0x48 + lVar14) = local_48;
  puVar1 = (undefined8 *)(lVar5 + 0x38 + lVar14);
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  uVar3 = *(undefined8 *)(param_2 + 0x9a);
  uVar13 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(lVar5 + 0x60 + lVar14) = *(undefined8 *)(param_2 + 0x9e);
  puVar1 = (undefined8 *)(lVar5 + 0x50 + lVar14);
  *puVar1 = uVar3;
  puVar1[1] = uVar13;
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar13 = *(undefined8 *)(param_2 + 0xa2);
  *(undefined8 *)(lVar5 + 0x78 + lVar14) = *(undefined8 *)(param_2 + 0xa4);
  puVar1 = (undefined8 *)(lVar5 + 0x68 + lVar14);
  *puVar1 = uVar3;
  puVar1[1] = uVar13;
  uVar6 = param_2[0x16];
  uVar7 = param_2[0x17];
  uVar8 = param_2[0x18];
  uVar9 = param_2[0x19];
  uVar10 = param_2[0x1a];
  uVar11 = param_2[0x1b];
  uVar12 = param_2[0x1c];
  puVar2 = (undefined4 *)(lVar5 + 0x80 + lVar14);
  *puVar2 = param_2[0x15];
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar2 = (undefined4 *)(lVar5 + 0x90 + lVar14);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  *(undefined4 *)(lVar5 + 0xa0 + lVar14) = param_2[0x1d];
  *(undefined8 *)(lVar5 + 0xa4 + lVar14) = *(undefined8 *)(param_2 + 0x1e);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140da48c8(param_1 + -0x68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418826fa FUN_1418826fa body=274 status=ok
// SIG undefined FUN_1418826fa(void)

void FUN_1418826fa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  uint local_4c [2];
  int local_44;
  uint local_40;
  int local_38;
  uint local_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_1401144ce(param_2);
  if (cVar2 != '\0') {
    FUN_140ac173c(local_4c,param_2);
    uVar4 = local_4c[0];
    if (local_44 != 0) {
      uVar4 = FUN_144a78877(local_4c[0]);
    }
    if (local_38 != 0) {
      local_40 = FUN_144a78877(local_40);
    }
    if (local_2c != 0) {
      local_34 = FUN_144a78877(local_34);
    }
    iVar3 = FUN_140ac163e((longlong *)(param_1 + 0x528),local_40 ^ uVar4 ^ local_34,local_4c);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x528);
      lVar5 = lVar1 + (longlong)iVar3 * 0xb0;
      if (((lVar5 != 0) && (lVar1 + (longlong)iVar3 * 0xb0 != -0x28)) &&
         (iVar3 = *(int *)(lVar5 + 0x48), (longlong)iVar3 != 0)) {
        lVar1 = *(longlong *)(lVar5 + 0x40);
        lVar5 = 0;
        do {
          FUN_1410b5f9c(param_1,*(undefined4 *)(lVar1 + lVar5));
          lVar5 = lVar5 + 4;
        } while ((longlong)iVar3 * 4 != lVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14188280e FUN_14188280e body=478 status=ok
// SIG undefined FUN_14188280e(void)

int * FUN_14188280e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
      FUN_143d347d0(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x300);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x300) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x300 + *param_1;
  return param_2;
}



// FUNCTION 1418829ec FUN_1418829ec body=124 status=ok
// SIG undefined FUN_1418829ec(void)

undefined8 FUN_1418829ec(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      return 0;
    }
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    if (DVar2 != DVar3) {
      return 0;
    }
  }
  lVar4 = FUN_140718ac0(param_1,param_2);
  if (lVar4 == 0) {
    return 0;
  }
  FUN_1407b25f0(param_3,lVar4 + 400);
  return 1;
}



// FUNCTION 141882a68 FUN_141882a68 body=92 status=ok
// SIG undefined FUN_141882a68(void)

undefined8 FUN_141882a68(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140718ac0();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x28) != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x24);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(lVar2 + 0x28))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      return *puVar3;
    }
  }
  return 0;
}



// FUNCTION 141882ac4 FUN_141882ac4 body=436 status=ok
// SIG undefined FUN_141882ac4(void)

undefined2 * FUN_141882ac4(longlong param_1,undefined2 *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [36];
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_141882b59;
      }
      *param_2 = 0;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x14) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      goto LAB_141882b2f;
    }
  }
LAB_141882b59:
  lVar5 = FUN_140718ac0(param_1,param_3);
  if (lVar5 == 0) {
    FUN_144928b90(param_2,1);
LAB_141882b2f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141882be5;
    plVar8 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar8 != (longlong *)0x0) &&
       (((int)plVar8[2] == *(int *)(param_1 + 0x20) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))
       ) {
      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar8;
      }
      else {
        lVar6 = 0;
      }
      if (*(longlong *)(lVar6 + 0x30) != 0) {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
        goto LAB_141882be5;
      }
    }
  }
  uVar7 = 0;
LAB_141882be5:
  FUN_14105743e(param_2,lVar5 + 0x30);
  FUN_140fda471(&local_44,uVar7);
  if (local_44 == 0) {
    local_30 = DAT_14cb7bba0;
    local_38 = DAT_14cb7bb98;
  }
  else {
    local_30 = local_3c;
    local_38 = CONCAT44(uStack_40,local_44);
  }
  FUN_144928d62(param_2 + 8,1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141882c7a FUN_141882c7a body=319 status=ok
// SIG undefined FUN_141882c7a(void)

undefined8 FUN_141882c7a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = (longlong)param_2 * 0x68;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_141882cdc;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar8 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
  }
LAB_141882cdc:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  uVar5 = SUB168(auVar3 * ZEXT816(0x4ec4ec4ec4ec4ec5),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar4 / 0x68)) {
    uVar8 = uVar4 / 0x68 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar5 = FUN_1446f8d3c(param_1,0,uVar8,0x68,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar5;
}



// FUNCTION 141882dba FUN_141882dba body=101 status=ok
// SIG undefined FUN_141882dba(void)

void FUN_141882dba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fcde0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b3fcd70;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 141882e20 FUN_141882e20 body=225 status=ok
// SIG undefined FUN_141882e20(void)

void FUN_141882e20(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x60;
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
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 141882f02 FUN_141882f02 body=275 status=ok
// SIG undefined FUN_141882f02(void)

void FUN_141882f02(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141883016 FUN_141883016 body=269 status=ok
// SIG undefined FUN_141883016(void)

void FUN_141883016(longlong param_1,int param_2)

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



// FUNCTION 141883124 FUN_141883124 body=448 status=ok
// SIG undefined FUN_141883124(void)

void FUN_141883124(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(uint *)(param_1 + 1);
  if ((int)uVar4 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar4) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar6 = uVar4 + (int)((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + 0x10;
  }
  uVar7 = 0x7fffffff;
  if ((int)uVar4 <= (int)uVar6) {
    uVar7 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(uVar7,8);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = uVar7 * 8;
    uVar8 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (param_2 != 0 && local_58 != (void *)0x0) {
      if ((int)uVar7 < (int)param_2) {
        param_2 = uVar7;
      }
      memcpy(_Dst,local_58,(longlong)(int)param_2 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418832e6 FUN_1418832e6 body=142 status=ok
// SIG undefined FUN_1418832e6(void)

void FUN_1418832e6(longlong param_1)

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
      uVar3 = FUN_144a3809e(uVar3 << 3,4);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,4);
    }
  }
  return;
}



// FUNCTION 141883374 FUN_141883374 body=42 status=ok
// SIG undefined FUN_141883374(void)

undefined8 FUN_141883374(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x2b0))();
    if (lVar1 != 0) {
      uVar2 = FUN_14039ffc6(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14188339e FUN_14188339e body=165 status=ok
// SIG undefined FUN_14188339e(void)

void FUN_14188339e(longlong param_1,char param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = DAT_14cb88710;
  if (((param_2 == '\x01') || (uVar3 = DAT_14cb88718, param_2 == '\x02')) ||
     (uVar3 = DAT_14cb88708, param_2 == '\0')) {
    uVar2 = uVar3 & 0xffffffff00000000;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  FUN_144976b9c(local_28,uVar3 & 0xffffffff | uVar2);
  FUN_1410432d6(uVar1,local_28,1);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141883444 FUN_141883444 body=313 status=ok
// SIG undefined FUN_141883444(void)

longlong FUN_141883444(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144928b90(param_2,10);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(lVar1 + 0x18);
    local_30 = *(undefined8 *)(lVar1 + 0x10);
  }
  lVar1 = param_2 + 0x10;
  FUN_144928d62(lVar1,1,&local_30);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(lVar2 + 0x18);
    local_40 = *(undefined8 *)(lVar2 + 0x10);
  }
  FUN_144928d62(lVar1,2,&local_40);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    local_48 = *(undefined4 *)(lVar2 + 0x18);
    local_50 = *(undefined8 *)(lVar2 + 0x10);
  }
  FUN_144928d62(lVar1,3,&local_50);
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_60 = *(undefined8 *)(param_1 + 0x20);
  FUN_144928d62(lVar1,4);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x2c);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14188357e FUN_14188357e body=104 status=ok
// SIG undefined FUN_14188357e(void)

undefined8 *
FUN_14188357e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_144976d68(param_1,param_3,1);
  if ((lVar1 != 0) && (lVar1 = FUN_1403a09ea(param_1,lVar1,param_4,1), lVar1 != 0)) {
    puVar2 = (undefined8 *)FUN_140bc52d2(lVar1);
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1418835e6 FUN_1418835e6 body=605 status=ok
// SIG undefined FUN_1418835e6(void)

void FUN_1418835e6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,3,0);
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x1c0);
    plVar7 = plVar9 + *(int *)(param_1 + 0x1c8);
    do {
      lVar5 = *plVar9;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_14009b010(&local_88,3,0);
      if (0 < *(int *)(lVar5 + 0x68)) {
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        local_b0 = plVar7;
        FUN_14009b010(&local_98,3,0);
        iVar4 = *(int *)(lVar5 + 0x68);
        if ((longlong)iVar4 != 0) {
          local_b8 = *(longlong *)(lVar5 + 0x60);
          lVar8 = 0;
          do {
            lVar6 = *(longlong *)(local_b8 + lVar8);
            local_a8 = 0;
            plStack_a0 = (longlong *)0x0;
            FUN_14009b010(&local_a8,3,0);
            FUN_14049ed72(lVar6,&local_a8,0);
            FUN_14049fca9(&local_98,lVar6 + 0x10);
            plVar7 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_a0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar4 * 8 != lVar8);
        }
        FUN_14049fca9(&local_88,&DAT_14cb7d098,&local_98);
        plVar2 = plStack_90;
        plVar7 = local_b0;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = local_b0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              plVar7 = local_b0;
            }
          }
        }
      }
      FUN_14049fca9(&local_78,lVar5 + 0x10);
      plVar2 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar7);
  }
  FUN_1404a0208(param_1,&local_78);
  FUN_14049fca9(param_3,&DAT_14cb7c890,&local_78);
  plVar9 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_70 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141883844 FUN_141883844 body=458 status=ok
// SIG undefined FUN_141883844(void)

void FUN_141883844(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x38;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = lVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar8 = 1;
    local_50._0_4_ = 0xffffffff;
    iVar5 = 0;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar8 = local_60 >> 0x20;
    iVar5 = *(int *)(param_1 + 0x50);
  }
  iVar12 = (int)local_60;
  uVar7 = (uint)local_50;
  iVar10 = local_50._4_4_;
  iVar6 = local_48;
  if (local_50._4_4_ != iVar5 || local_58 != lVar1) {
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 0x30) = 0;
      uVar7 = ~(uint)uVar8 & uVar7;
      lVar11 = *(longlong *)(local_58 + 0x10);
      if (*(longlong *)(local_58 + 0x10) == 0) {
        lVar11 = local_58;
      }
      iVar3 = *(int *)(local_58 + 0x18);
      lVar13 = (longlong)iVar12;
      uVar9 = *(uint *)(lVar11 + lVar13 * 4) & uVar7;
      if (uVar9 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar6 = iVar6 + 0x20;
        iVar4 = iVar10;
        if (iVar10 < iVar12) {
          iVar4 = iVar12;
        }
        if (iVar12 < iVar10) {
          lVar14 = 0;
          do {
            uVar9 = *(uint *)(lVar11 + lVar13 * 4 + 4 + lVar14 * 4);
            if (uVar9 != 0) {
              iVar12 = iVar12 + (int)lVar14 + 1;
              uVar7 = 0xffffffff;
              goto LAB_141883962;
            }
            iVar6 = iVar6 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar4 - lVar13 != lVar14);
          uVar7 = 0xffffffff;
          iVar12 = iVar4;
        }
        iVar12 = iVar12 + 1;
        iVar10 = iVar3;
      }
      else {
LAB_141883962:
        uVar8 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar10 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar10) {
          iVar10 = iVar3;
        }
      }
    } while (iVar10 != iVar5 || local_58 != lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141883a10 FUN_141883a10 body=429 status=ok
// SIG undefined FUN_141883a10(void)

ulonglong FUN_141883a10(longlong param_1,char *param_2,byte *param_3,longlong param_4)

{
  uint uVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_88 [40];
  ulonglong *local_60;
  longlong local_58;
  uint local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_4;
  if (*param_2 == '\x06') {
    cVar2 = FUN_140114204(param_2);
    if (cVar2 != '\0') {
      local_50 = 0xffffffff;
      puVar3 = (ulonglong *)FUN_1408264ac(param_2,(longlong *)(param_1 + 0x28),&local_50,&local_4a);
      uVar1 = local_50;
      if (puVar3 != (ulonglong *)0x0) {
        if (*param_3 == 0xff) {
          *param_3 = DAT_14cb7cad0;
          DAT_14cb7cad0 = DAT_14cb7cad0 + 1 & 0x7f;
        }
        uVar4 = (ulonglong)local_50;
        local_60 = puVar3;
        while ((byte)puVar3[2] != *param_3) {
          *(byte *)(puVar3 + 2) = *param_3;
          uVar5 = *puVar3 + local_58;
          if (0x7ffffffffffffffe < uVar5) {
            uVar5 = 0x7fffffffffffffff;
          }
          *puVar3 = uVar5;
          local_4a = (undefined2)uVar4;
          FUN_140b25444(param_1 + 0x60,&local_4a);
          uVar9 = (uint)*(short *)((longlong)puVar3 + 10);
          uVar4 = (ulonglong)uVar9;
          if (((int)uVar9 < 0) || (*(int *)(param_1 + 0x50) <= (int)uVar9)) break;
          lVar6 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar6 = param_1 + 0x38;
          }
          if (((*(uint *)(lVar6 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0) ||
             (puVar3 = (ulonglong *)(uVar4 * 0x30 + *(longlong *)(param_1 + 0x28)),
             puVar3 == (ulonglong *)0x0)) break;
        }
        puVar3 = local_60;
        FUN_140b254aa(param_1,local_60,uVar1,1);
        if ((*(int *)(param_1 + 0xc) != 0) &&
           ((uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar8 != (undefined8 *)0x0) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xc) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              uVar7 = *puVar8;
            }
            else {
              uVar7 = 0;
            }
            FUN_1405f658a(uVar7);
          }
        }
        uVar4 = *puVar3;
        goto LAB_141883b8e;
      }
    }
  }
  uVar4 = 0;
LAB_141883b8e:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141883bd6 FUN_141883bd6 body=29 status=ok
// SIG undefined FUN_141883bd6(void)

undefined8 FUN_141883bd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141883bf4 FUN_141883bf4 body=29 status=ok
// SIG undefined FUN_141883bf4(void)

undefined8 FUN_141883bf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141883c12 FUN_141883c12 body=29 status=ok
// SIG undefined FUN_141883c12(void)

undefined8 FUN_141883c12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141883c30 FUN_141883c30 body=353 status=ok
// SIG undefined FUN_141883c30(void)

void FUN_141883c30(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141883cb5;
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
LAB_141883cb5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141883d92 FUN_141883d92 body=602 status=ok
// SIG undefined FUN_141883d92(void)

void FUN_141883d92(longlong *param_1)

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
    local_78 = plVar13;
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
    plVar13 = local_78;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x20);
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x20);
        local_70 = uVar5;
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,iVar4);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[7] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[6] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
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
            if (iVar7 - lVar12 == lVar10) goto LAB_141883fac;
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
LAB_141883fac:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141883fee FUN_141883fee body=269 status=ok
// SIG undefined FUN_141883fee(void)

void FUN_141883fee(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418840fc FUN_1418840fc body=68 status=ok
// SIG undefined FUN_1418840fc(void)

undefined8 * FUN_1418840fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b400680;
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



// FUNCTION 141884140 FUN_141884140 body=118 status=ok
// SIG undefined FUN_141884140(void)

void FUN_141884140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6380;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b400680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418841b6 FUN_1418841b6 body=118 status=ok
// SIG undefined FUN_1418841b6(void)

void FUN_1418841b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4006f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14188422c FUN_14188422c body=29 status=ok
// SIG undefined FUN_14188422c(void)

undefined8 FUN_14188422c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14188424a FUN_14188424a body=118 status=ok
// SIG undefined FUN_14188424a(void)

void FUN_14188424a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4007a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418842c0 FUN_1418842c0 body=29 status=ok
// SIG undefined FUN_1418842c0(void)

undefined8 FUN_1418842c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418842de FUN_1418842de body=29 status=ok
// SIG undefined FUN_1418842de(void)

undefined8 FUN_1418842de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418842fc FUN_1418842fc body=118 status=ok
// SIG undefined FUN_1418842fc(void)

void FUN_1418842fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4008c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141884372 FUN_141884372 body=29 status=ok
// SIG undefined FUN_141884372(void)

undefined8 FUN_141884372(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141884390 FUN_141884390 body=83 status=ok
// SIG undefined FUN_141884390(void)

void FUN_141884390(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3e38b0;
  FUN_140c7203b(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_140c72088(param_1 + 0x10);
  return;
}



// FUNCTION 1418843e4 FUN_1418843e4 body=29 status=ok
// SIG undefined FUN_1418843e4(void)

undefined8 FUN_1418843e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141884402 FUN_141884402 body=315 status=ok
// SIG undefined FUN_141884402(void)

undefined8 *
FUN_141884402(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_140daa3ac();
  if (cVar4 != '\0') {
    *param_2 = 0;
    param_2[1] = 0;
LAB_1418844f0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  FUN_1410574f8(param_1,&local_38);
  if (local_38 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_68 = *param_5;
    plVar3 = (longlong *)param_5[1];
    local_60 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      FUN_1410581ea(local_38,param_2,&local_68);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_1410581ea(local_38,param_2);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        goto LAB_1418844f0;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141884540 FUN_141884540 body=1897 status=ok
// SIG undefined FUN_141884540(void)

void FUN_141884540(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_1e8 [44];
  int local_1bc;
  ulonglong local_1b8;
  uint *local_1b0;
  undefined8 *local_1a8;
  uint local_19c;
  uint local_198;
  int local_194;
  ulonglong local_190;
  ulonglong local_188;
  longlong *local_180;
  ulonglong local_178;
  ulonglong local_170;
  uint *local_168;
  uint *local_160;
  int *local_158;
  longlong local_150;
  undefined8 *local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  int local_100;
  int local_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  uint local_e0;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 local_98;
  undefined1 local_97;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  cVar3 = FUN_1411184fc();
  uStack_f0 = (uint *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
  if (cVar3 == '\0') {
    iVar10 = *param_2;
    iVar12 = param_2[2];
    if ((iVar10 != (int)DAT_14cb7bd68) ||
       (uStack_f0 = (uint *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0), iVar12 != DAT_14cb7bd70
       )) {
      if (iVar12 != 0) {
        iVar10 = FUN_144a78877(iVar10,iVar12);
      }
      plVar6 = (longlong *)FUN_140726908(param_1 + 0xf,iVar10,param_2);
      *(char *)(plVar6 + 10) = (char)plVar6[10] + '\x01';
      uVar2 = *(uint *)(plVar6 + 5);
      if (uVar2 == 0) {
        uVar15 = 1;
        uVar21 = 0;
        iVar10 = 0;
        uVar18 = 0;
      }
      else {
        puVar11 = (uint *)plVar6[4];
        if ((uint *)plVar6[4] == (uint *)0x0) {
          puVar11 = (uint *)(plVar6 + 2);
        }
        uVar18 = *puVar11;
        if (uVar18 == 0) {
          iVar10 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar10 = uVar2 - 1;
          }
          uVar21 = 0;
          uVar20 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar20 = uVar21;
          }
          iVar10 = 0;
          do {
            if (uVar20 == uVar21) goto LAB_1418845d2;
            iVar10 = iVar10 + 0x20;
            uVar18 = puVar11[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar21 = 0;
          iVar10 = 0;
        }
        uVar15 = (ulonglong)(-uVar18 & uVar18);
        uVar20 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar18 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar18) {
          uVar18 = uVar2;
        }
      }
      uStack_f0 = (uint *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
      if (uVar18 != uVar2) {
        uVar13 = 0xffffffff;
        local_188 = (ulonglong)uVar2;
        local_180 = plVar6;
        local_168 = (uint *)(plVar6 + 2);
        local_158 = param_2;
        do {
          puVar1 = (undefined8 *)(*local_180 + (longlong)(int)uVar18 * 0x68);
          lVar14 = *local_180 + (longlong)(int)uVar18 * 0x68;
          puVar11 = (uint *)(lVar14 + 0x20);
          uVar2 = *(uint *)(lVar14 + 0x38);
          uVar20 = 0;
          local_1b8 = 1;
          iVar12 = 0;
          uVar18 = 0;
          if (uVar2 != 0) {
            puVar17 = (uint *)puVar1[6];
            if ((uint *)puVar1[6] == (uint *)0x0) {
              puVar17 = puVar11;
            }
            uVar18 = *puVar17;
            if (uVar18 == 0) {
              iVar12 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar12 = uVar2 - 1;
              }
              uVar16 = 0;
              uVar9 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar9 = uVar16;
              }
              uVar20 = (ulonglong)((int)uVar9 + 1);
              iVar12 = (int)uVar9 * 0x20 + 0x20;
              iVar4 = 0;
              do {
                if (uVar9 == uVar16) {
                  local_1b8 = 1;
                  uVar18 = uVar2;
                  goto LAB_141884707;
                }
                iVar4 = iVar4 + 0x20;
                uVar18 = puVar17[uVar16 + 1];
                uVar16 = uVar16 + 1;
              } while (uVar18 == 0);
              uVar20 = uVar16 & 0xffffffff;
              iVar12 = iVar4;
            }
            else {
              uVar20 = 0;
              iVar12 = 0;
            }
            local_1b8 = (ulonglong)(-uVar18 & uVar18);
            uVar9 = local_1b8 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar9 != 0) {
              for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar18 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar18) {
              uVar18 = uVar2;
            }
          }
LAB_141884707:
          local_f8 = (int)uVar2 >> 5;
          iStack_f4 = 1 << ((byte)uVar2 & 0x1f);
          local_e8 = (longlong *)CONCAT44(uVar2,-1 << ((byte)uVar2 & 0x1f));
          local_e0 = uVar2 & 0xffffffe0;
          local_1bc = iVar10;
          local_1b0 = puVar11;
          local_19c = uVar13;
          local_190 = uVar15;
          local_170 = uVar21;
          if (*(uint *)(puVar1 + 7) != uVar2) {
            uStack_f0 = puVar11;
            FUN_1449c0562(&local_f8);
            local_1b0 = uStack_f0;
            uVar2 = local_e8._4_4_;
          }
          uStack_f0 = local_1b0;
          if ((uVar18 != uVar2) || (puVar11 != local_1b0)) {
            uVar13 = 0xffffffff;
            local_1a8 = puVar1;
            local_178 = (ulonglong)uVar2;
            local_160 = puVar11;
            do {
              lVar14 = local_1a8[2];
              lVar8 = (longlong)(int)uVar18 * 0xa8;
              lVar19 = (longlong)*(int *)(lVar14 + 0x48 + lVar8);
              if (lVar19 != 0) {
                local_148 = (undefined8 *)(lVar14 + lVar8);
                local_150 = *(longlong *)(lVar14 + 0x40 + lVar8);
                lVar14 = 0;
                local_198 = uVar13;
                local_194 = iVar12;
                local_140 = uVar20;
                do {
                  iVar10 = *(int *)(local_150 + lVar14);
                  lVar8 = param_1[8];
                  local_97 = 0;
                  local_94 = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  uStack_68 = 0;
                  local_98 = 1;
                  FUN_140c25b54(&local_98);
                  local_f8 = *(int *)((longlong)param_1 + 0x2c);
                  if (local_f8 == 0) {
                    uStack_f0._0_4_ = DAT_14cb7bba0;
                    local_f8 = (int)DAT_14cb7bb98;
                    iStack_f4 = (int)((ulonglong)DAT_14cb7bb98 >> 0x20);
                  }
                  else {
                    iStack_f4 = (int)param_1[6];
                    uStack_f0._0_4_ = (undefined4)((ulonglong)param_1[6] >> 0x20);
                  }
                  FUN_144928d62(&local_88,1,&local_f8);
                  local_108 = *(undefined8 *)local_158;
                  local_100 = local_158[2];
                  FUN_14013eb2c(&local_98,&local_108);
                  local_110 = *(undefined4 *)(local_1a8 + 1);
                  local_118 = *local_1a8;
                  FUN_14013eb54(&local_98,&local_118);
                  local_120 = *(undefined4 *)(local_148 + 1);
                  local_128 = *local_148;
                  FUN_144928d62(&local_88,4,&local_128);
                  lVar7 = (longlong)iVar10 * 0x68;
                  local_130 = *(undefined4 *)(lVar8 + 0x34 + lVar7);
                  local_138 = *(undefined8 *)(lVar8 + 0x2c + lVar7);
                  FUN_144928d62(&local_88,5,&local_138);
                  local_f8 = 0;
                  iStack_f4 = 0;
                  local_e8 = (longlong *)0x0;
                  uStack_9f = 0;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  uStack_ae = 0;
                  uStack_a0 = 1;
                  uStack_a8 = 0xdfbc;
                  uStack_a6 = 0x14b3f;
                  (**(code **)(*param_1 + 0xa8))(param_1,&local_98,0,&local_f8);
                  if (CONCAT44(iStack_f4,local_f8) != 0) {
                    plVar6 = local_e8;
                    if (local_e8 == (longlong *)0x0) {
                      plVar6 = local_d8;
                    }
                    (**(code **)(*plVar6 + 0x10))();
                  }
                  uVar20 = local_140;
                  puVar11 = local_160;
                  iVar12 = local_194;
                  uVar13 = local_198;
                  if (local_70 != 0) {
                    FUN_1400020a8();
                  }
                  lVar14 = lVar14 + 4;
                } while (lVar19 * 4 != lVar14);
              }
              uVar13 = uVar13 & ~(uint)local_1b8;
              puVar17 = (uint *)local_1a8[6];
              if ((uint *)local_1a8[6] == (uint *)0x0) {
                puVar17 = puVar11;
              }
              uVar2 = *(uint *)(local_1a8 + 7);
              iVar10 = (int)uVar20;
              lVar14 = (longlong)iVar10;
              uVar18 = puVar17[lVar14] & uVar13;
              if (uVar18 == 0) {
                iVar4 = uVar2 + 0x1e;
                if (-1 < (int)(uVar2 - 1)) {
                  iVar4 = uVar2 - 1;
                }
                iVar4 = iVar4 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar5 = iVar4;
                if (iVar4 < iVar10) {
                  iVar5 = iVar10;
                }
                if (iVar10 < iVar4) {
                  lVar8 = 0;
                  do {
                    uVar18 = puVar17[lVar14 + lVar8 + 1];
                    if (uVar18 != 0) {
                      uVar20 = (ulonglong)(iVar10 + (int)lVar8 + 1);
                      uVar13 = 0xffffffff;
                      goto LAB_141884a1e;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar8 = lVar8 + 1;
                  } while (iVar5 - lVar14 != lVar8);
                  uVar13 = 0xffffffff;
                  iVar10 = iVar5;
                }
                uVar20 = (ulonglong)(iVar10 + 1);
                uVar18 = uVar2;
              }
              else {
LAB_141884a1e:
                local_1b8 = (ulonglong)(-uVar18 & uVar18);
                uVar21 = local_1b8 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar18 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if ((int)uVar2 <= (int)uVar18) {
                  uVar18 = uVar2;
                }
              }
            } while ((uVar18 != (uint)local_178) || (puVar11 != local_1b0));
          }
          uVar13 = local_19c & ~(uint)local_190;
          puVar11 = (uint *)local_180[4];
          if ((uint *)local_180[4] == (uint *)0x0) {
            puVar11 = local_168;
          }
          uVar2 = *(uint *)(local_180 + 5);
          iVar12 = (int)local_170;
          lVar14 = (longlong)iVar12;
          uVar18 = puVar11[lVar14] & uVar13;
          uVar21 = local_170;
          iVar10 = local_1bc;
          if (uVar18 == 0) {
            iVar4 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar4 = uVar2 - 1;
            }
            iVar4 = iVar4 >> 5;
            iVar10 = local_1bc + 0x20;
            iVar5 = iVar4;
            if (iVar4 < iVar12) {
              iVar5 = iVar12;
            }
            if (iVar12 < iVar4) {
              lVar8 = 0;
              do {
                uVar18 = puVar11[lVar14 + lVar8 + 1];
                if (uVar18 != 0) {
                  uVar13 = 0xffffffff;
                  uVar21 = (ulonglong)(iVar12 + (int)lVar8 + 1);
                  goto LAB_141884aff;
                }
                iVar10 = iVar10 + 0x20;
                lVar8 = lVar8 + 1;
              } while (iVar5 - lVar14 != lVar8);
              uVar13 = 0xffffffff;
              iVar12 = iVar5;
            }
            uVar21 = (ulonglong)(iVar12 + 1);
            uVar15 = local_190;
            uVar18 = uVar2;
          }
          else {
LAB_141884aff:
            uVar15 = (ulonglong)(-uVar18 & uVar18);
            uVar20 = uVar15 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar18 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar18) {
              uVar18 = uVar2;
            }
          }
        } while (uVar18 != (uint)local_188);
      }
    }
  }
LAB_1418845d2:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141884caa FUN_141884caa body=231 status=ok
// SIG undefined FUN_141884caa(void)

void FUN_141884caa(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined8 param_9,undefined4 *param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = *param_10;
  uStack_44 = param_10[1];
  uStack_40 = param_10[2];
  uStack_3c = param_10[3];
  local_80 = &local_48;
  local_38 = *(undefined8 *)(param_10 + 4);
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_50 = 0;
  local_70 = param_12;
  local_78 = param_11;
  local_88 = param_9;
  local_90 = param_8;
  local_98 = param_7;
  local_a0 = param_6;
  local_a8 = param_5;
  FUN_1410a29b6(param_8,&local_60);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141884d92 FUN_141884d92 body=76 status=ok
// SIG undefined FUN_141884d92(void)

undefined8 FUN_141884d92(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140a28092(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000141884dd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141884dde FUN_141884dde body=288 status=ok
// SIG undefined FUN_141884dde(void)

void FUN_141884dde(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)(int)plVar4[1] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong **)(*plVar4 + 0x10 + lVar6) == param_2) {
        uVar7 = (int)(lVar6 >> 3) * -0x49249249;
        if (uVar7 == 0xffffffff) {
          return;
        }
        lVar6 = (longlong)(int)uVar7 * 0x38;
        if ((*(byte *)(*plVar4 + 0x2d + lVar6) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141884e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x3b0))(param_2,0);
          return;
        }
        lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
        uVar1 = *(undefined8 *)(lVar5 + 0x20);
        uVar2 = *(undefined8 *)(lVar5 + 0x28);
        (**(code **)(*param_2 + 0xa88))(param_2,lVar5 + 0x20);
        *(undefined8 *)(lVar5 + 0x20) = uVar1;
        *(undefined8 *)(lVar5 + 0x28) = uVar2;
        (**(code **)(*param_2 + 0x420))(param_2,0);
        iVar3 = (int)plVar4[1];
        if (~uVar7 + iVar3 != 0) {
          memmove((void *)(*plVar4 + lVar6),(void *)(*plVar4 + lVar6 + 0x38),
                  (longlong)(int)(~uVar7 + iVar3) * 0x38);
          iVar3 = (int)plVar4[1];
        }
        *(int *)(plVar4 + 1) = iVar3 + -1;
        FUN_14107e60e(plVar4);
        return;
      }
      lVar6 = lVar6 + 0x38;
    } while ((longlong)(int)plVar4[1] * 0x38 - lVar6 != 0);
  }
  return;
}



// FUNCTION 141884efe FUN_141884efe body=76 status=ok
// SIG undefined FUN_141884efe(void)

undefined8 FUN_141884efe(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140cb9188(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000141884f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141884f4a FUN_141884f4a body=2460 status=ok
// SIG undefined FUN_141884f4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141884f4a(longlong param_1,double *param_2,float param_3,int param_4,int param_5,
                       double *param_6,double *param_7,byte *param_8,byte *param_9)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 in_R8;
  double *pdVar6;
  ulonglong uVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_2c8 [39];
  bool local_2a1;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  param_6[2] = param_2[2];
  dVar21 = param_2[1];
  *param_6 = *param_2;
  param_6[1] = dVar21;
  param_7[2] = DAT_14c8464f0;
  dVar21 = DAT_14c8464e8;
  *param_7 = DAT_14c8464e0;
  param_7[1] = dVar21;
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar8 < 1) {
    uVar7 = CONCAT71((int7)((ulonglong)in_R8 >> 8),0xff);
  }
  else {
    if (*(char *)(param_1 + 0x28) == '\0') {
      uVar3 = (uint)*param_9;
    }
    else {
      uVar3 = rand();
      uVar2 = (uint)((float)iVar8 * ((float)(uVar3 & 0x7fff) / 32767.0));
      uVar3 = iVar8 - 1U;
      if ((int)uVar2 < (int)(iVar8 - 1U)) {
        uVar3 = uVar2;
      }
      *param_9 = (byte)uVar3;
      iVar8 = *(int *)(param_1 + 0x20);
    }
    if (iVar8 <= (int)(uVar3 & 0xff)) {
      *param_9 = 0;
      uVar3 = 0;
    }
    lVar5 = (ulonglong)(uVar3 & 0xff) * 0x68;
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x18) + lVar5);
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x60 + lVar5) == '\0') {
      dVar21 = *pdVar1;
      dVar25 = pdVar1[1];
      dVar23 = pdVar1[2];
      local_2a1 = true;
    }
    else {
      if ((param_5 < 2) || (*(char *)(param_1 + 0x2b) == '\0')) {
        uVar3 = rand();
        fVar9 = (float)(uVar3 & 0x7fff) / 32767.0;
        local_2a1 = true;
      }
      else {
        fVar9 = (float)param_4 / (float)(param_5 + -1);
        local_2a1 = param_5 + -1 <= param_4;
      }
      dVar23 = pdVar1[5] - pdVar1[2];
      dVar10 = pdVar1[4] - pdVar1[1];
      dVar11 = pdVar1[3] - *pdVar1;
      dVar21 = (double)DAT_1499387d0;
      dVar25 = DAT_1499387d0._8_8_;
      auVar17._8_8_ = dVar10;
      auVar17._0_8_ = dVar11;
      auVar18 = divpd(auVar17,_DAT_1499387d0);
      auVar14._0_8_ = dVar23 / 360.0;
      auVar14._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,3);
      auVar14 = roundpd(auVar14,auVar14,3);
      auVar27._0_8_ = dVar23 - auVar14._0_8_ * dVar21;
      auVar27._8_8_ = 0.0 - auVar14._8_8_ * dVar25;
      auVar24._0_8_ = dVar11 - auVar18._0_8_ * dVar21;
      auVar24._8_8_ = dVar10 - auVar18._8_8_ * dVar25;
      auVar22._0_8_ = auVar24._0_8_ + dVar21;
      auVar22._8_8_ = auVar24._8_8_ + dVar25;
      auVar26._0_8_ = dVar21 + auVar27._0_8_;
      auVar26._8_8_ = dVar25 + auVar27._8_8_;
      auVar18._8_8_ = -(ulonglong)(0.0 <= auVar24._8_8_);
      auVar18._0_8_ = -(ulonglong)(0.0 <= auVar24._0_8_);
      auVar14 = blendvpd(auVar22,auVar24,auVar18);
      auVar15._8_8_ = -(ulonglong)(0.0 <= auVar27._8_8_);
      auVar15._0_8_ = -(ulonglong)(0.0 <= auVar27._0_8_);
      auVar18 = blendvpd(auVar26,auVar27,auVar15);
      auVar19._0_8_ = auVar14._0_8_ + -360.0;
      auVar19._8_8_ = auVar14._8_8_ + -360.0;
      auVar16._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
      auVar16._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
      auVar14 = blendvpd(auVar14,auVar19,auVar16);
      dVar25 = auVar18._0_8_;
      dVar21 = (double)fVar9;
      dVar23 = (double)(~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
                       (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25)) * dVar21 +
               pdVar1[2];
      dVar25 = auVar14._8_8_ * dVar21 + pdVar1[1];
      dVar21 = auVar14._0_8_ * dVar21 + *pdVar1;
    }
    if (*(char *)((longlong)pdVar1 + 0x61) == '\0') {
      local_2a0 = pdVar1[6];
      local_298 = pdVar1[7];
      local_290 = pdVar1[8];
    }
    else {
      if ((param_5 < 2) || (*(char *)(param_1 + 0x2b) == '\0')) {
        uVar3 = rand();
        fVar9 = (float)(uVar3 & 0x7fff) / 32767.0;
      }
      else {
        fVar9 = (float)param_4 / (float)(param_5 + -1);
        local_2a1 = (bool)(local_2a1 & param_5 + -1 <= param_4);
      }
      dVar10 = (double)fVar9;
      local_290 = (pdVar1[0xb] - pdVar1[8]) * dVar10 + pdVar1[8];
      local_298 = (pdVar1[10] - pdVar1[7]) * dVar10 + pdVar1[7];
      local_2a0 = (pdVar1[9] - pdVar1[6]) * dVar10 + pdVar1[6];
    }
    if (*(char *)(param_1 + 0x2a) == '\x01') {
      param_3 = param_3 * *(float *)(param_1 + 0x30);
      if (param_3 <= *(float *)(param_1 + 0x34)) {
        param_3 = *(float *)(param_1 + 0x34);
      }
      dVar10 = (double)param_3;
      dVar21 = dVar21 * dVar10;
      dVar25 = dVar25 * dVar10;
      dVar23 = dVar23 * dVar10;
    }
    dVar10 = sin(dVar21 * 0.01745329238474369);
    dVar11 = sin(dVar25 * 0.01745329238474369);
    dVar12 = sin(dVar23 * 0.01745329238474369);
    dVar21 = cos(dVar21 * 0.01745329238474369);
    dVar25 = cos(dVar25 * 0.01745329238474369);
    local_1a8 = cos(dVar23 * 0.01745329238474369);
    local_1f8 = dVar21 * dVar25;
    local_1f0 = dVar11 * dVar21;
    local_1e0 = 0;
    local_1d8 = dVar10 * dVar12 * dVar25 - dVar11 * local_1a8;
    local_1d0 = dVar10 * dVar12 * dVar11 + dVar25 * local_1a8;
    local_1c8 = -dVar12 * dVar21;
    local_1c0 = 0;
    local_1b8 = -(dVar10 * local_1a8 * dVar25 + dVar11 * dVar12);
    local_1b0 = dVar25 * dVar12 - dVar11 * dVar10 * local_1a8;
    local_1a8 = dVar21 * local_1a8;
    local_1a0 = 0;
    local_198 = DAT_14c8464e0;
    local_190 = DAT_14c8464e8;
    dStack_188 = DAT_14c8464f0;
    local_180 = 0x3ff0000000000000;
    dVar23 = *param_2;
    dVar21 = param_2[1];
    dVar25 = param_2[2];
    local_1e8 = dVar10;
    dVar10 = sin(dVar23 * 0.01745329238474369);
    dVar11 = sin(dVar21 * 0.01745329238474369);
    dVar12 = sin(dVar25 * 0.01745329238474369);
    sin(0.0);
    dVar23 = cos(dVar23 * 0.01745329238474369);
    dVar21 = cos(dVar21 * 0.01745329238474369);
    dVar25 = cos(dVar25 * 0.01745329238474369);
    cos(0.0);
    local_278 = dVar23 * dVar21;
    pdVar6 = &local_278;
    local_270 = dVar11 * dVar23;
    local_260 = 0;
    local_258 = dVar10 * dVar12 * dVar21 - dVar11 * dVar25;
    local_250 = dVar10 * dVar12 * dVar11 + dVar21 * dVar25;
    local_248 = -dVar12 * dVar23;
    local_240 = 0;
    local_238 = -(dVar10 * dVar25 * dVar21 + dVar11 * dVar12);
    local_230 = dVar21 * dVar12 - dVar11 * dVar10 * dVar25;
    local_228 = dVar23 * dVar25;
    local_220 = 0;
    local_218 = DAT_14c8464e0;
    local_210 = DAT_14c8464e8;
    dStack_208 = DAT_14c8464f0;
    local_200 = 0x3ff0000000000000;
    local_268 = dVar10;
    FUN_1447fea8d(&local_178);
    local_288 = local_150;
    local_280 = local_130;
    dVar21 = 0.0;
    if ((((local_170 != 0.0) || (NAN(local_170))) || (local_178 != 0.0)) || (NAN(local_178))) {
      dVar21 = atan2(local_170,local_178);
      dVar21 = dVar21 * 57.29577951308232;
    }
    dVar23 = SQRT(local_170 * local_170 + local_178 * local_178);
    dVar25 = 0.0;
    if (((local_168 != 0.0) || (NAN(local_168))) || ((dVar23 != 0.0 || (NAN(dVar23))))) {
      dVar25 = atan2(local_168,dVar23);
      dVar25 = dVar25 * 57.29577951308232;
    }
    dVar23 = sin(dVar25 * 0.01745329238474369);
    dVar10 = sin(dVar21 * 0.01745329238474369);
    dVar11 = cos(dVar25 * 0.01745329238474369);
    dVar12 = cos(dVar21 * 0.01745329238474369);
    dVar13 = 0.0;
    dVar20 = dVar23 * 0.0 * dVar12 - dVar10;
    dVar12 = dVar23 * 0.0 * dVar10 + dVar12;
    dVar23 = local_148 * dVar11 * -0.0 + local_158 * dVar20 + local_288 * dVar12;
    dVar10 = local_128 * dVar11 * -0.0 + local_138 * dVar20 + local_280 * dVar12;
    if (((dVar10 != 0.0) || (NAN(dVar10))) || ((dVar23 != 0.0 || (NAN(dVar23))))) {
      dVar13 = atan2(dVar10,dVar23);
      dVar13 = dVar13 * 57.29577951308232;
    }
    *param_6 = dVar25;
    param_6[1] = dVar21;
    param_6[2] = dVar13;
    *param_7 = local_2a0;
    param_7[1] = local_298;
    param_7[2] = local_290;
    pbVar4 = (byte *)((longlong)pdVar1 + 99);
    if (*(char *)((longlong)pdVar1 + 0x62) == '\0') {
      pbVar4 = param_9;
    }
    *param_8 = *pbVar4;
    uVar7 = CONCAT71((int7)((ulonglong)pdVar6 >> 8),*param_9);
    if (local_2a1 != false) {
      *param_9 = (byte)((longlong)(ulonglong)(*param_9 + 1) % (longlong)*(int *)(param_1 + 0x20));
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418858e8 FUN_1418858e8 body=428 status=ok
// SIG undefined FUN_1418858e8(void)

longlong * FUN_1418858e8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1418859c8:
    *puVar5 = &PTR_LAB_14a78e0f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b402090;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1418859c8;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a78e0f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b402090;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 141885a9a FUN_141885a9a body=132 status=ok
// SIG undefined FUN_141885a9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141885a9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
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



// FUNCTION 141885b1e FUN_141885b1e body=29 status=ok
// SIG undefined FUN_141885b1e(void)

undefined8 FUN_141885b1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141885b3c FUN_141885b3c body=29 status=ok
// SIG undefined FUN_141885b3c(void)

undefined8 FUN_141885b3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141885b5a FUN_141885b5a body=29 status=ok
// SIG undefined FUN_141885b5a(void)

undefined8 FUN_141885b5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141885b78 FUN_141885b78 body=29 status=ok
// SIG undefined FUN_141885b78(void)

undefined8 FUN_141885b78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141885b96 FUN_141885b96 body=804 status=ok
// SIG undefined FUN_141885b96(void)

int * FUN_141885b96(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  
  iVar2 = (int)param_1[1];
  if (param_3 < iVar2) {
    lVar17 = *param_1;
  }
  else {
    iVar3 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < (uint)(iVar3 - iVar2)) {
      FUN_1406a7630(param_1);
      iVar3 = (int)param_1[1];
    }
    lVar17 = *param_1;
    iVar2 = (int)param_1[5];
    if (iVar2 < iVar3) {
      plVar12 = param_1 + 2;
      do {
        *(undefined4 *)(lVar17 + (longlong)iVar2 * 0x68) = 0xffffffff;
        lVar8 = param_1[6];
        *(int *)(lVar17 + 4 + (longlong)iVar2 * 0x68) = (int)lVar8;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar17 + (longlong)(int)lVar8 * 0x68) = iVar2;
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
        iVar10 = iVar2 + 1;
        iVar15 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar15 = iVar2;
        }
        if (iVar15 >> 5 == iVar3) {
          *(int *)(param_1 + 5) = iVar10;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
            iVar3 = iVar2;
            if (iVar2 + 0x20U < 0xa0) {
              iVar10 = 0x80;
            }
            else {
              uVar18 = iVar2 + 0x20U >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar13 = 4;
                if (4 < uVar18) {
                  uVar13 = uVar18;
                }
              }
              else {
                uVar13 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
              }
              uVar7 = (ulonglong)(uVar13 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar4 = (uint)(uVar7 + 0xf);
                  if (uVar13 < 0x1ffd) {
                    uVar7 = (ulonglong)
                            (ushort)(&DAT_14c841d90)
                                    [0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
                  }
                  else {
                    uVar11 = (ulonglong)(uVar4 & 0xfffffff0);
                    if (uVar11 < 0x7ff1) {
                      bVar9 = (&DAT_14c841e00)[uVar4 >> 4];
                      uVar14 = 0x32;
                      if (0x32 < bVar9) {
                        uVar14 = (ulonglong)bVar9;
                      }
                      uVar16 = 0x32 - (ulonglong)bVar9;
                      do {
                        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar16 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar16 & 0xffffffff] & 0xf) == 0) goto LAB_141885d46;
                        lVar8 = uVar14 + 1 + uVar16;
                        uVar16 = uVar16 - 1;
                      } while (lVar8 != 0x33);
                    }
                    uVar7 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar7 = (ulonglong)DAT_14c841df8;
                    }
                    uVar7 = -uVar7 & (uVar11 + uVar7) - 1;
                  }
                }
                else {
                  uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
                  iVar3 = (int)param_1[5];
                }
              }
LAB_141885d46:
              iVar5 = (int)(uVar7 >> 2);
              iVar10 = -0x20;
              if ((int)uVar18 <= iVar5) {
                iVar10 = iVar5 << 5;
              }
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar10;
            FUN_1446efbd8(plVar12,iVar3);
            iVar10 = (int)param_1[5] + 1;
          }
          iVar3 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar3 = iVar10;
          }
          *(int *)(param_1 + 5) = iVar10;
          if (iVar10 % 0x20 != 0) {
            plVar6 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar6 = plVar12;
            }
            bVar9 = -(char)(iVar10 % 0x20);
            *(uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4) << (bVar9 & 0x1f))
                 >> (bVar9 & 0x1f);
          }
        }
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = plVar12;
        }
        bVar9 = (byte)iVar2 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar2 = (int)param_1[5];
      } while (iVar2 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar8 = (longlong)param_3 * 0x68;
  iVar2 = *(int *)(lVar17 + lVar8);
  iVar3 = *(int *)(lVar17 + 4 + lVar8);
  if ((longlong)iVar2 == -1) {
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(lVar17 + 4 + (longlong)iVar2 * 0x68) = iVar3;
  }
  if (iVar3 != -1) {
    *(int *)(lVar17 + (longlong)iVar3 * 0x68) = iVar2;
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar2 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar8 + *param_1;
  return param_2;
}



// FUNCTION 141885eba FUN_141885eba body=143 status=ok
// SIG undefined FUN_141885eba(void)

void FUN_141885eba(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 5,8);
      uVar3 = uVar3 >> 5;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x20,8);
    }
  }
  return;
}



// FUNCTION 141885f4a FUN_141885f4a body=269 status=ok
// SIG undefined FUN_141885f4a(void)

void FUN_141885f4a(longlong param_1,int param_2)

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



// FUNCTION 141886058 FUN_141886058 body=68 status=ok
// SIG undefined FUN_141886058(void)

undefined8 * FUN_141886058(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b401e60;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 14188609c FUN_14188609c body=126 status=ok
// SIG undefined FUN_14188609c(void)

void FUN_14188609c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b401ed0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b401e60;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 14188611a FUN_14188611a body=118 status=ok
// SIG undefined FUN_14188611a(void)

void FUN_14188611a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b402090;
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



// FUNCTION 141886190 FUN_141886190 body=29 status=ok
// SIG undefined FUN_141886190(void)

undefined8 FUN_141886190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418861ae FUN_1418861ae body=29 status=ok
// SIG undefined FUN_1418861ae(void)

undefined8 FUN_1418861ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418861cc FUN_1418861cc body=29 status=ok
// SIG undefined FUN_1418861cc(void)

undefined8 FUN_1418861cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418861ea FUN_1418861ea body=296 status=ok
// SIG undefined FUN_1418861ea(void)

void FUN_1418861ea(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar9 = 0;
    do {
      if ((*(longlong *)(lVar4 + lVar9) != 0) &&
         (lVar7 = *(longlong *)(*(longlong *)(lVar4 + lVar9) + 0x10), lVar7 != 0)) {
        lVar7 = FUN_140414d56(lVar7 + 0x18);
        if ((lVar7 != 0) && ((param_3 == '\0' || (*(char *)(lVar7 + 0x19) == '\x01')))) {
          local_48 = 0;
          plStack_40 = (longlong *)0x0;
          FUN_14009b010(&local_48,1,0);
          FUN_1406111b2(&local_48,*(undefined4 *)(*(longlong *)(lVar4 + lVar9) + 200));
          if (*param_2 != 0) {
            puVar5 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + lVar9) + 0x10) + 8);
            puVar8 = &DAT_14c9485f0;
            if (puVar5 != (undefined4 *)0x0) {
              puVar8 = puVar5;
            }
            local_58 = 0;
            FUN_14014191c(*param_2,puVar8,&local_48,0);
          }
          plVar6 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_40)(plStack_40);
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
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141886314 FUN_141886314 body=23 status=ok
// SIG undefined FUN_141886314(void)

bool FUN_141886314(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x498))();
  return cVar1 == '\t';
}



// FUNCTION 14188632c FUN_14188632c body=64 status=ok
// SIG undefined FUN_14188632c(void)

ulonglong FUN_14188632c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_14487fd02();
  if (iVar1 == 2) {
    plVar2 = (longlong *)FUN_1401b2ade(param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      return uVar3 ^ 1;
    }
  }
  else if (iVar1 == 1) {
    return 1;
  }
  return 0;
}



// FUNCTION 141886378 FUN_141886378 body=353 status=ok
// SIG undefined FUN_141886378(void)

void FUN_141886378(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418863fd;
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
LAB_1418863fd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418864da FUN_1418864da body=101 status=ok
// SIG undefined FUN_1418864da(void)

void FUN_1418864da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4035d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141886540 FUN_141886540 body=195 status=ok
// SIG undefined FUN_141886540(void)

void FUN_141886540(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1418865e6;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1418865e6:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141886604 FUN_141886604 body=71 status=ok
// SIG undefined FUN_141886604(void)

void FUN_141886604(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1400de7f6();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00014188663f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,param_3,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 14188664c FUN_14188664c body=373 status=ok
// SIG undefined FUN_14188664c(void)

void FUN_14188664c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418866d5;
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
LAB_1418866d5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1418867c2 FUN_1418867c2 body=91 status=ok
// SIG undefined FUN_1418867c2(void)

void FUN_1418867c2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar3 = FUN_1405f939e();
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    lVar4 = FUN_140149a73(uVar3,0);
    if (lVar4 != 0) {
      FUN_140825b72(lVar1 + 0x78,uVar2,lVar4,0);
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  return;
}



// FUNCTION 14188681e FUN_14188681e body=244 status=ok
// SIG undefined FUN_14188681e(void)

void FUN_14188681e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403c747e(*param_2,&local_28,*(undefined8 *)(param_1 + 8));
  FUN_1403c75f4(param_3,&local_28);
  if ((local_28 != (longlong *)0x0) &&
     (*(int *)(local_28 + 0x21) = (int)local_28[0x21] + -1, (int)local_28[0x26] < 1)) {
    FUN_1400847bc(local_28 + 0x17,0);
    if ((int)local_28[0x21] == 0) {
      FUN_140087e46(local_28);
      if (*local_28 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14188688a;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_28);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_28);
      }
    }
  }
LAB_14188688a:
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141886914 FUN_141886914 body=523 status=ok
// SIG undefined FUN_141886914(void)

void FUN_141886914(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_3 == 0) goto LAB_141886983;
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  lVar7 = FUN_140206ee8(param_1 + 8,&local_48);
  if (lVar7 != 0) {
    lVar5 = *param_3;
    if (*(int *)(lVar5 + 0x1d0) == 0) {
      local_58 = DAT_14c8464f0;
      local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      lVar8 = lVar5 + 0x140;
      if (*(longlong *)(lVar5 + 0x1c0) != 0) {
        lVar8 = *(longlong *)(lVar5 + 0x1c0);
      }
      local_68 = *(undefined8 *)(lVar8 + 0x20);
      uStack_60 = *(undefined8 *)(lVar8 + 0x28);
      local_58 = *(undefined8 *)(lVar8 + 0x30);
    }
    cVar6 = FUN_140849a6e(lVar7,*(undefined8 *)(*param_2 + 0x28),&local_68);
    if (cVar6 == '\0') goto LAB_141886983;
    lVar5 = *param_3;
    lVar8 = *param_2;
    plVar4 = *(longlong **)(lVar8 + 0x20);
    if ((plVar4 == (longlong *)0x0) || (*(int *)(lVar8 + 0x1c) == 0)) {
LAB_141886acb:
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar2 = *(uint *)(lVar8 + 0x18);
      plVar9 = (longlong *)0x0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if (((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != *(int *)(lVar8 + 0x1c))) ||
           ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) goto LAB_141886acb;
        if (*(code **)(*plVar4 + 0x30) == (code *)&LAB_14479b63c) {
          plVar9 = plVar4 + -0xa4;
          if ((longlong *)plVar4[-0x77] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar4[-0x77];
          }
        }
        else {
          plVar9 = (longlong *)(**(code **)(*plVar4 + 0x30))();
        }
      }
    }
    local_88 = 0;
    FUN_14084a448(lVar5,&local_80,lVar7,plVar9);
    local_80 = 0;
    local_78 = 0xffffffffffffffff;
  }
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 == (undefined8 *)0x0) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    uVar10 = *puVar3;
  }
  *(undefined8 **)(param_1 + 0x68) = puVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
LAB_141886983:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141886b20 FUN_141886b20 body=214 status=ok
// SIG undefined FUN_141886b20(void)

void FUN_141886b20(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar3 = *param_3;
  if (lVar3 == 0) goto LAB_141886b9e;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar6 = FUN_1405b1a32();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  if (((*(longlong *)(param_1 + 0x18) == 0) && (lVar7 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_141886bb9:
      uVar6 = 0;
    }
    else {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 == '\0') goto LAB_141886bb9;
      uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
      uVar6 = FUN_144aff482(uVar6,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar6;
  }
  FUN_140849a08(lVar3);
LAB_141886b9e:
  plVar4 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000141886bf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141886bf6 FUN_141886bf6 body=325 status=ok
// SIG undefined FUN_141886bf6(void)

void FUN_141886bf6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar7 = FUN_1405b1a32();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x10) = lVar8;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar8 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_141886ce1;
    plVar5 = *(longlong **)(lVar8 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5);
      if (cVar6 != '\0') {
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(param_1 + 8));
        *(longlong *)(param_1 + 0x18) = lVar8;
        if (lVar8 == 0) goto LAB_141886ce1;
        goto LAB_141886c74;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
LAB_141886c74:
    lVar8 = *param_2;
    iVar4 = *(int *)(lVar8 + 0x218);
    lVar9 = (longlong)iVar4;
    *(uint *)(lVar8 + 0x218) = iVar4 + 1U;
    if (*(uint *)(lVar8 + 0x21c) < iVar4 + 1U) {
      FUN_1407f7a52((longlong *)(lVar8 + 0x210),iVar4);
    }
    lVar8 = *(longlong *)(lVar8 + 0x210);
    puVar3 = (undefined8 *)(lVar8 + lVar9 * 0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)(lVar8 + 0x10 + lVar9 * 0x18) = 0;
    *(undefined8 *)(lVar8 + lVar9 * 0x18) = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x10));
    uVar7 = FUN_14477b664(uVar7);
    *(undefined8 *)(lVar8 + 8 + lVar9 * 0x18) = uVar7;
    *(undefined8 *)(lVar8 + 0x10 + lVar9 * 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
LAB_141886ce1:
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000141886d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141886d3c FUN_141886d3c body=350 status=ok
// SIG undefined FUN_141886d3c(void)

void FUN_141886d3c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x60) == '\x1c') {
    FUN_140576f62(param_1 + 0x40,local_50);
    pvVar5 = local_38;
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    local_68 = (void *)0x0;
    local_60 = local_30;
    if ((longlong)local_30 == 0) {
      local_5c = 0;
      bVar4 = true;
    }
    else {
      FUN_1446dd670(&local_68,local_30,0);
      memcpy(local_68,pvVar5,(longlong)local_30 * 2);
      bVar4 = local_60 < 2;
    }
    if ((CONCAT44(uStack_74,local_78) != 0) && (bVar4)) {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1406f071e(param_2,iVar2);
      }
      pvVar5 = local_68;
      lVar3 = *param_2;
      lVar7 = (longlong)iVar2 * 0x20;
      puVar1 = (undefined4 *)(lVar3 + lVar7);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
      lVar6 = (longlong)local_60;
      *(int *)(lVar3 + 0x18 + lVar7) = local_60;
      if (lVar6 == 0) {
        *(undefined4 *)(lVar3 + lVar7 + 0x1c) = 0;
      }
      else {
        puVar8 = (undefined8 *)(lVar7 + lVar3 + 0x10);
        FUN_1446dd670(puVar8,local_60,0);
        memcpy((void *)*puVar8,pvVar5,lVar6 * 2);
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141886e9c FUN_141886e9c body=236 status=ok
// SIG undefined FUN_141886e9c(void)

undefined8 * FUN_141886e9c(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 *_Dst;
  undefined8 *_Src;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Src = (undefined8 *)(param_1 + 0x70);
  bVar3 = *(byte *)(param_1 + 0x90);
  if (bVar3 == 0x1c) {
    FUN_140576f62(_Src,local_58);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    bVar3 = *(byte *)(param_1 + 0x90);
  }
  uVar1 = *(ushort *)(param_1 + 0x88);
  *(ushort *)(param_2 + 3) = uVar1;
  _Dst = param_2;
  if (0x18 < uVar1) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1,0);
    *param_2 = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar2 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120))
          );
  }
  else {
    (*pcVar2)(_Dst,_Src);
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x90);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141886f90 FUN_141886f90 body=48 status=ok
// SIG undefined FUN_141886f90(void)

void FUN_141886f90(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b404640);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 141886fc0 FUN_141886fc0 body=741 status=ok
// SIG undefined FUN_141886fc0(void)

void FUN_141886fc0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  void *local_d8;
  undefined8 *local_d0;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *local_b0;
  int local_a8;
  char local_a0 [16];
  longlong *local_90;
  int local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x60);
    lVar10 = (longlong)*(int *)(param_1 + 0x68) * 0x38;
    do {
      if (*(char *)(lVar11 + 0x28) == '\x1c') {
        local_a0[0] = '\0';
        local_78 = 0;
        FUN_14575a19a(local_a0,0);
        FUN_1447c3578(lVar11,local_70,local_a0);
        FUN_140576f62(local_70);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar7 = local_70;
          if (0x18 < local_58) {
            ppppuVar7 = (undefined8 ****)local_70[0];
          }
          (*pcVar3)(ppppuVar7);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        if ((longlong)local_78 != 0) {
          lVar14 = (longlong)local_78 + -1;
          local_d0 = DAT_14c9a3da0;
          local_d8 = (void *)(lVar14 * 0x10);
          FUN_1448176ff(DAT_14c9a3da0[lVar14 * 2],*(undefined4 *)(DAT_14c9a3da0 + 1 + lVar14 * 2));
          if (*(longlong *)((longlong)local_d0 + (longlong)local_d8) != 0) {
            FUN_1400020a8();
          }
          puVar5 = DAT_14c9a3da0;
          iVar12 = (int)lVar14;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 2) = iVar12;
          }
          *(undefined4 *)((longlong)puVar5 + (longlong)local_d8) = 0xffffffff;
          iVar6 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar6 = DAT_14c9a3dd0;
          }
          *(int *)((longlong)puVar5 + 4 + (longlong)local_d8) = iVar6;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar9 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar9 = DAT_14c9a3dc0;
          }
          iVar6 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar6 = iVar12;
          }
          bVar4 = (byte)lVar14 & 0x1f;
          DAT_14c9a3dd0 = iVar12;
          *(uint *)(puVar9 + (longlong)(iVar6 >> 5) * 4) =
               *(uint *)(puVar9 + (longlong)(iVar6 >> 5) * 4) &
               (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          local_78 = 0;
        }
        if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
        if ((CONCAT44(uStack_bc,local_c0) != 0) && (local_a8 < 2)) {
          iVar12 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
            FUN_1406f071e(param_2,iVar12);
          }
          lVar14 = *param_2;
          lVar13 = (longlong)iVar12 * 0x20;
          puVar2 = (undefined4 *)(lVar14 + lVar13);
          *puVar2 = local_c0;
          puVar2[1] = uStack_bc;
          puVar2[2] = uStack_b8;
          puVar2[3] = uStack_b4;
          *(undefined8 *)(lVar14 + 0x10 + lVar13) = 0;
          lVar8 = (longlong)local_a8;
          *(int *)(lVar14 + 0x18 + lVar13) = local_a8;
          if (lVar8 == 0) {
            *(undefined4 *)(lVar14 + lVar13 + 0x1c) = 0;
          }
          else {
            local_d0 = (undefined8 *)(lVar14 + lVar13 + 0x10);
            local_d8 = local_b0;
            FUN_1446dd670(local_d0,lVar8,0);
            memcpy((void *)*local_d0,local_d8,lVar8 * 2);
          }
        }
        if (local_b0 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar11 = lVar11 + 0x38;
      lVar10 = lVar10 + -0x38;
    } while (lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418872a6 FUN_1418872a6 body=193 status=ok
// SIG undefined FUN_1418872a6(void)

undefined8 * FUN_1418872a6(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *_Dst;
  longlong lVar6;
  undefined8 *_Src;
  undefined8 *puVar7;
  
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x58);
  puVar7 = &DAT_14c9ab168;
  if (lVar6 != 0) {
    lVar6 = lVar6 << 3;
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x50) + lVar5 * 8) ==
          *(longlong *)(param_1 + 0x68)) {
        uVar4 = (uint)lVar5;
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x78))) {
          puVar7 = (undefined8 *)
                   ((ulonglong)(uVar4 & 0x7fffffff) * 0x28 + *(longlong *)(param_1 + 0x70));
        }
        break;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  bVar1 = *(byte *)(puVar7 + 4);
  uVar2 = *(ushort *)(puVar7 + 3);
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  _Src = puVar7;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_2 = _Dst;
    _Src = (undefined8 *)*puVar7;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)();
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar7 + 4);
  return param_2;
}



// FUNCTION 141887368 FUN_141887368 body=744 status=ok
// SIG undefined FUN_141887368(void)

void FUN_141887368(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *_Buf2;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = *(int *)(param_1[9] + 0x58);
  if ((longlong)iVar5 != 0) {
    lVar7 = (longlong)iVar5 << 3;
    lVar12 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1[9] + 0x50) + lVar12 * 8) == param_3) {
        uVar11 = (uint)lVar12;
        if (((int)uVar11 < 0) || (iVar5 <= (int)uVar11)) break;
        plVar14 = param_1 + 0xe;
        iVar2 = (int)param_1[0xf];
        if (iVar2 < iVar5) {
          *(int *)(param_1 + 0xf) = iVar5;
          if ((uint)(*(int *)((longlong)param_1 + 0x7c) - iVar2) < (uint)(iVar5 - iVar2)) {
            FUN_140a4bb3a(plVar14,iVar2);
          }
          FUN_140b21118((longlong)iVar2 * 0x28 + *plVar14,iVar5 - iVar2);
        }
        else if (iVar5 < iVar2) {
          FUN_1488721f0(plVar14,iVar5,iVar2 - iVar5);
          FUN_140c3c5c2(plVar14);
        }
        lVar7 = *plVar14;
        uVar13 = (ulonglong)(uVar11 & 0x7fffffff);
        bVar9 = *(byte *)(lVar7 + 0x20 + uVar13 * 0x28);
        bVar10 = *(byte *)(param_2 + 4);
        if (bVar9 == bVar10) {
          puVar8 = (undefined8 *)(lVar7 + uVar13 * 0x28);
          _Buf2 = param_2;
          if (0x18 < *(ushort *)(param_2 + 3)) {
            _Buf2 = (undefined8 *)*param_2;
          }
          if (0x18 < *(ushort *)(puVar8 + 3)) {
            puVar8 = (undefined8 *)*puVar8;
          }
          if (*(code **)(&DAT_14c9a85e0 + (uint)bVar9 * 0x120) != (code *)0x0) {
            cVar4 = (**(code **)(&DAT_14c9a85e0 + (uint)bVar9 * 0x120))();
            if (cVar4 == '\0') {
              lVar7 = *plVar14;
              bVar9 = *(byte *)(lVar7 + 0x20 + uVar13 * 0x28);
              bVar10 = *(byte *)(param_2 + 4);
              goto LAB_141887466;
            }
            break;
          }
          iVar5 = memcmp(puVar8,_Buf2,
                         (longlong)
                         *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar9 * 0x120)));
          if (iVar5 == 0) break;
          plVar14 = (longlong *)(lVar7 + uVar13 * 0x28);
          bVar10 = bVar9;
LAB_141887538:
          puVar8 = param_2;
          if (0x18 < *(ushort *)(param_2 + 3)) {
            puVar8 = (undefined8 *)*param_2;
          }
          if (0x18 < *(ushort *)(plVar14 + 3)) {
            plVar14 = (longlong *)*plVar14;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + (ulonglong)((uint)bVar10 * 0x120));
          if (pcVar3 == (code *)0x0) {
            memcpy(plVar14,puVar8,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar10 * 0x120)))
            ;
          }
          else {
            (*pcVar3)(plVar14);
          }
        }
        else {
LAB_141887466:
          plVar14 = (longlong *)(lVar7 + uVar13 * 0x28);
          if (bVar9 == bVar10) goto LAB_141887538;
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar9 * 0x120));
          if (pcVar3 != (code *)0x0) {
            plVar6 = plVar14;
            if (0x18 < *(ushort *)(plVar14 + 3)) {
              plVar6 = (longlong *)*plVar14;
            }
            (*pcVar3)(plVar6);
          }
          if (0x18 < *(ushort *)(plVar14 + 3)) {
            FUN_1400020a8(*plVar14);
          }
          bVar9 = *(byte *)(param_2 + 4);
          uVar1 = *(ushort *)(param_2 + 3);
          *(ushort *)(plVar14 + 3) = uVar1;
          plVar6 = plVar14;
          puVar8 = param_2;
          if (0x18 < uVar1) {
            plVar6 = (longlong *)FUN_14001cc68(uVar1,0);
            *plVar14 = (longlong)plVar6;
            puVar8 = (undefined8 *)*param_2;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar9 * 0x120));
          if (pcVar3 == (code *)0x0) {
            memcpy(plVar6,puVar8,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar9 * 0x120)));
          }
          else {
            (*pcVar3)();
          }
          *(undefined1 *)(plVar14 + 4) = *(undefined1 *)(param_2 + 4);
        }
        if (param_1[0xd] == param_3) {
          (**(code **)(*param_1 + 0x60))(param_1,param_2,0);
        }
        break;
      }
      lVar12 = lVar12 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  local_50 = param_3;
  FUN_1406074a2(param_1 + 1,param_1,&local_50,param_2);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141887652 FUN_141887652 body=852 status=ok
// SIG undefined FUN_141887652(void)

longlong FUN_141887652(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
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
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar7 + *(int *)(param_1 + 0x30);
    do {
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
        lVar6 = FUN_140076f80();
        if (((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) &&
            (((*(int *)((longlong)plVar4 + 0x4c) != 0 &&
              (uVar2 = *(uint *)(plVar4 + 9), -1 < (int)uVar2)) &&
             (((int)uVar2 < DAT_14c9647dc &&
              ((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0 &&
               (*(int *)(lVar5 + 0x10) == *(int *)((longlong)plVar4 + 0x4c))))))))) &&
           (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
            (((plVar4[10] != 0 && (lVar5 = *(longlong *)(plVar4[10] + 0xe8), lVar5 != 0)) &&
             (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 != 0)))))) {
          if (DAT_14cad2858 == 0) {
            local_60 = &local_40;
            local_40 = FUN_144a7958c;
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
            if (DAT_14cad2858 == 0) goto LAB_141887814;
          }
          if ((((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
                DAT_14cad2858 + 0x30)) &&
              (((*(int *)((longlong)plVar4 + 0x4c) != 0 &&
                ((uVar2 = *(uint *)(plVar4 + 9), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc))))
               && (lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0
                  )))) &&
             ((((*(int *)(lVar5 + 0x10) == *(int *)((longlong)plVar4 + 0x4c) &&
                ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) && (lVar5 = plVar4[10], lVar5 != 0)) &&
              (iVar3 = *(int *)(lVar5 + 0x40), (longlong)iVar3 != 0)))) {
            lVar5 = *(longlong *)(lVar5 + 0x38);
            lVar6 = 0;
            do {
              lVar8 = *(longlong *)(lVar5 + lVar6);
              if (lVar8 != 0) {
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
                if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38))
                   && (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30))
                goto LAB_141887823;
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)iVar3 * 8 != lVar6);
          }
        }
      }
LAB_141887814:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  lVar8 = 0;
LAB_141887823:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1418879a8 FUN_1418879a8 body=1053 status=ok
// SIG undefined FUN_1418879a8(void)

longlong * FUN_1418879a8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar10 + *(int *)(param_1 + 0x30);
    do {
      plVar4 = (longlong *)*plVar10;
      if (plVar4 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
        lVar7 = FUN_140076f80();
        if ((((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) &&
             ((*(int *)((longlong)plVar4 + 0x4c) != 0 &&
              (uVar2 = *(uint *)(plVar4 + 9), -1 < (int)uVar2)))) && ((int)uVar2 < DAT_14c9647dc))
           && (((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0
                && (*(int *)(lVar6 + 0x10) == *(int *)((longlong)plVar4 + 0x4c))) &&
               (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
                (((plVar4[10] != 0 && (lVar6 = *(longlong *)(plVar4[10] + 0xe8), lVar6 != 0)) &&
                 (lVar6 = *(longlong *)(lVar6 + 0x10), lVar6 != 0)))))))) {
          if (DAT_14cad2858 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_146395584;
            local_88 = &LAB_147a0ba80;
            local_90 = &LAB_14575ccce;
            local_98 = L"Engine";
            local_a0 = (wchar_t *)0x40000000000;
            local_a8 = CONCAT44(local_a8._4_4_,0x10000004);
            local_b0 = 0x10;
            local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,0x1180);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
            if (DAT_14cad2858 == 0) goto LAB_141887b80;
          }
          if ((((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
                DAT_14cad2858 + 0x30)) &&
              ((*(int *)((longlong)plVar4 + 0x4c) != 0 &&
               ((uVar2 = *(uint *)(plVar4 + 9), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc))))))
             && (((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0
                  && (((*(int *)(lVar6 + 0x10) == *(int *)((longlong)plVar4 + 0x4c) &&
                       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) &&
                      (lVar6 = plVar4[10], lVar6 != 0)))) &&
                 (iVar3 = *(int *)(lVar6 + 0x40), (longlong)iVar3 != 0)))) {
            lVar6 = *(longlong *)(lVar6 + 0x38);
            lVar7 = 0;
            do {
              lVar5 = *(longlong *)(lVar6 + lVar7);
              if (lVar5 != 0) {
                if (DAT_14c949118 == 0) {
                  local_58 = FUN_140631fbe;
                  lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c949118 = lVar9;
                  FUN_1446f470e(&local_50,L"Class",1);
                  local_80 = &local_58;
                  local_88 = &LAB_146891e90;
                  local_90 = &LAB_146273097;
                  local_a0 = L"Engine";
                  local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
                  local_a8 = 0x20;
                  local_b0 = 0x10000000;
                  local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,8);
                  FUN_14574b4b2(lVar9);
                  DAT_14c949118 = lVar9;
                  local_60 = FUN_144a7a812();
                  lVar9 = DAT_14c949118;
                  uVar8 = FUN_1449e2fb2();
                  local_b8 = L"Class";
                  FUN_14574b446(uVar8,lVar9,local_60,L"/Script/CoreUObject");
                }
                if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)
                     ) && (*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                            (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30))
                   && ((lVar9 = FUN_1402e44f4(), lVar9 != 0 &&
                       ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                        (*(longlong *)
                          (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                         lVar9 + 0x30)))))) {
                  *param_2 = lVar5;
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar5);
                    /* WARNING: Subroutine does not return */
                    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
                  }
                  goto LAB_141887b94;
                }
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)iVar3 * 8 != lVar7);
          }
        }
      }
LAB_141887b80:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  *param_2 = 0;
LAB_141887b94:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141887dcc FUN_141887dcc body=823 status=ok
// SIG undefined FUN_141887dcc(void)

undefined8 FUN_141887dcc(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_140566488();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140566488();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      uVar4 = 0;
      if ((plVar5 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_14188805e;
      lVar8 = *(longlong *)(param_1 + 0x10);
      if (lVar8 == 0) {
LAB_141888025:
        local_68 = 0;
        uStack_60 = 0;
        local_78 = (undefined1 *)0x0;
        uStack_70 = 0;
        local_58 = 0;
      }
      else {
        if (DAT_14c9a53e8 == 0) {
          local_90 = &local_78;
          local_78 = &LAB_141741c86;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_1470cc1e5;
          local_a0 = FUN_1462ad312;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10000001;
          local_c0 = 8;
          local_c8 = 0x50;
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGraphAsset",&DAT_14c9a53e8,&DAT_1470cc1e4);
          lVar8 = *(longlong *)(param_1 + 0x10);
          if (lVar8 == 0) goto LAB_141888025;
        }
        if ((((DAT_14c9a53e8 == 0) || (lVar7 = *(longlong *)(lVar8 + 0x10), lVar7 == 0)) ||
            (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14c9a53e8 + 0x38))) ||
           (*(longlong *)
             (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14c9a53e8 + 0x38) * 8) !=
            DAT_14c9a53e8 + 0x30)) goto LAB_141888025;
        lVar7 = FUN_14045ceca();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_141888025;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = (undefined1 *)0x0;
        uStack_70 = 0;
        local_58 = 0;
        FUN_1400bbfc4(&local_48,lVar8);
        uStack_70 = CONCAT44(uStack_44,local_48);
        local_68 = CONCAT44(uStack_3c,uStack_40);
        if (uStack_60 != 0) {
          FUN_1400020a8();
        }
        uStack_60 = CONCAT44(uStack_34,local_38);
        local_58 = CONCAT44(uStack_2c,uStack_30);
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        uVar1 = *(uint *)(lVar8 + 0xc);
        if (cVar2 == '\0') {
LAB_141887f2a:
          local_78 = (undefined1 *)CONCAT44(local_78._4_4_,uVar1);
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
            iVar9 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar3 = *(int *)(lVar8 + 0x10);
            bVar10 = iVar3 == 0;
            if (bVar10) {
              *(int *)(lVar8 + 0x10) = iVar9;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar10) {
              iVar3 = iVar9;
            }
          }
          local_78 = (undefined1 *)CONCAT44(iVar3,(undefined4)local_78);
        }
        else {
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_141887f2a;
          local_78 = (undefined1 *)0x0;
        }
      }
      uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
      if (uStack_60 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14188805e;
    }
  }
  uVar4 = 0;
LAB_14188805e:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14188810a FUN_14188810a body=466 status=ok
// SIG undefined FUN_14188810a(void)

uint * FUN_14188810a(longlong param_1,uint *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  
  lVar7 = *(longlong *)(param_1 + 0xd8);
  if (lVar7 != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x81) != '\x01') {
LAB_14188819e:
      iVar4 = DAT_14c9647dc;
      lVar3 = DAT_14c9647c8;
      iVar2 = *(int *)(lVar7 + 0x700);
      if (((longlong)iVar2 < 0) || (*(int *)(lVar7 + 0x6e0) <= iVar2)) {
LAB_14188826d:
        *(undefined2 *)(param_2 + 6) = 8;
        param_2[1] = 0;
LAB_14188827e:
        *param_2 = 0;
        uVar6 = 0;
      }
      else {
        lVar9 = lVar7 + 0xd8;
        if (*(longlong *)(lVar7 + 0x6d8) != 0) {
          lVar9 = *(longlong *)(lVar7 + 0x6d8);
        }
        lVar7 = (longlong)iVar2 * 0xc0;
        iVar2 = *(int *)(lVar9 + 4 + lVar7);
        if ((((iVar2 == 0) || (uVar6 = *(uint *)(lVar9 + lVar7), (int)uVar6 < 0)) ||
            (DAT_14c9647dc <= (int)uVar6)) ||
           (((plVar10 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             plVar10 == (longlong *)0x0 || ((int)plVar10[2] != iVar2)) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14188826d;
        lVar7 = *plVar10;
        *(undefined2 *)(param_2 + 6) = 8;
        param_2[1] = 0;
        if (lVar7 == 0) goto LAB_14188827e;
        uVar6 = *(uint *)(lVar7 + 0xc);
        *param_2 = uVar6;
        if ((int)uVar6 < iVar4) {
          lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(lVar3 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        uVar6 = *(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar8);
          }
          LOCK();
          uVar6 = *(uint *)(lVar7 + 0x10);
          bVar11 = uVar6 == 0;
          if (bVar11) {
            *(uint *)(lVar7 + 0x10) = uVar8;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar11) {
            uVar6 = uVar8;
          }
        }
      }
      param_2[1] = uVar6;
      uVar5 = 7;
      goto LAB_141888158;
    }
    fVar1 = *(float *)(lVar7 + 0x714);
    fVar12 = (float)FUN_1407766ee(lVar7);
    if ((*(char *)(lVar7 + 0x6f5) == '\x01') && (*(char *)(lVar7 + 0x6f4) == '\x01')) {
      fVar12 = fVar12 - *(float *)(lVar7 + 0x6f8);
      if (((*(float *)(lVar7 + 0x6fc) <= 0.0) || (fVar12 <= *(float *)(lVar7 + 0x6fc))) &&
         (fVar1 <= fVar12)) {
        lVar7 = *(longlong *)(param_1 + 0xd8);
        goto LAB_14188819e;
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  uVar5 = 0;
LAB_141888158:
  *(undefined1 *)(param_2 + 8) = uVar5;
  return param_2;
}



// FUNCTION 1418882dc FUN_1418882dc body=404 status=ok
// SIG undefined FUN_1418882dc(void)

char FUN_1418882dc(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = (**(code **)(*param_1 + 0x28))();
  if (cVar5 != '\0') {
    if (param_1[0x1b] == 0) {
      uVar6 = FUN_14131a550();
      FUN_140f48956(param_1,&local_38,uVar6,FUN_145c8d1cc);
      if (local_30 == (longlong *)0x0) {
        param_1[0x1b] = local_38;
        plVar7 = (longlong *)param_1[0x1c];
        if (plVar7 != (longlong *)0x0) {
          param_1[0x1c] = 0;
LAB_141888426:
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
joined_r0x00014188845d:
            if (iVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
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
        param_1[0x1b] = local_38;
        plVar7 = (longlong *)param_1[0x1c];
        if (local_30 == plVar7) {
          LOCK();
          plVar7 = local_30 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
            plVar7 = local_30;
            goto joined_r0x00014188845d;
          }
        }
        else {
          param_1[0x1c] = (longlong)local_30;
          if (plVar7 != (longlong *)0x0) goto LAB_141888426;
        }
      }
    }
    if ((((*(char *)(param_1[9] + 0x81) == '\x03') || (lVar4 = param_1[0x1b], lVar4 == 0)) ||
        (fVar8 = (float)FUN_1407766ee(lVar4), *(char *)(lVar4 + 0x719) != '\x01')) ||
       ((*(char *)(lVar4 + 0x718) != '\x01' ||
        ((0.0 < *(float *)(lVar4 + 0x720) &&
         (*(float *)(lVar4 + 0x720) < fVar8 - *(float *)(lVar4 + 0x71c))))))) {
      cVar5 = FUN_140776774(param_1);
      cVar5 = cVar5 * '\x02';
      goto LAB_141888369;
    }
  }
  cVar5 = '\0';
LAB_141888369:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141888472 FUN_141888472 body=224 status=ok
// SIG undefined FUN_141888472(void)

void FUN_141888472(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  FUN_14066e964();
  lVar2 = FUN_140343d7a(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_140d4a144();
    lVar4 = FUN_144718840(lVar2,uVar3);
    if (lVar4 != 0) {
      uVar6 = *(uint *)(lVar2 + 0xc);
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
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar1 = *(int *)(lVar2 + 0x10);
        bVar7 = iVar1 == 0;
        if (bVar7) {
          *(int *)(lVar2 + 0x10) = iVar5;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar1 = iVar5;
        }
      }
      goto LAB_1418884e3;
    }
  }
  lVar4 = 0;
  uVar6 = 0;
  iVar1 = 0;
LAB_1418884e3:
  *(uint *)(param_1 + 0xd8) = uVar6;
  *(int *)(param_1 + 0xdc) = iVar1;
  *(longlong *)(param_1 + 0xe0) = lVar4;
  return;
}



// FUNCTION 141888552 FUN_141888552 body=24 status=ok
// SIG undefined FUN_141888552(void)

undefined1 FUN_141888552(longlong param_1)

{
  FUN_140f8fa2c(param_1,*(longlong *)(param_1 + 0x48) + 0x80);
  return 1;
}



// FUNCTION 14188856a FUN_14188856a body=121 status=ok
// SIG undefined FUN_14188856a(void)

void FUN_14188856a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14066e964();
  lVar1 = FUN_140343d7a(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_1407725cc();
    lVar1 = FUN_144718840(lVar1,uVar2);
    if (lVar1 != 0) {
      FUN_1407eff2c(&local_28,lVar1);
      *(undefined4 *)(param_1 + 0xd8) = local_28;
      *(undefined4 *)(param_1 + 0xdc) = uStack_24;
      *(undefined4 *)(param_1 + 0xe0) = uStack_20;
      *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418885e4 FUN_1418885e4 body=37 status=ok
// SIG undefined FUN_1418885e4(void)

char FUN_1418885e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_140c855e0();
  cVar1 = FUN_140c8580e(param_1,param_2);
  return cVar1 * '\x02';
}



// FUNCTION 14188860a FUN_14188860a body=126 status=ok
// SIG undefined FUN_14188860a(void)

undefined8 * FUN_14188860a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b405360;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 1418886d4 FUN_1418886d4 body=62 status=ok
// SIG undefined FUN_1418886d4(void)

void FUN_1418886d4(longlong param_1)

{
  FUN_140cad146();
  if (*(char *)(param_1 + 0x250) == '\x01') {
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  if (*(char *)(param_1 + 0x264) == '\x01') {
    *(undefined1 *)(param_1 + 0x264) = 0;
  }
  FUN_1406eb3e8(param_1);
  return;
}



// FUNCTION 141888712 FUN_141888712 body=137 status=ok
// SIG undefined FUN_141888712(void)

undefined8 FUN_141888712(longlong param_1,longlong param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if ((((param_3 != '\x04') &&
       (lVar3 = *(longlong *)(param_1 + 0x48), *(char *)(lVar3 + 0x219) == '\x01')) &&
      (FUN_1406eacda(param_1), *(char *)(param_1 + 0x26d) == '\x01')) &&
     (*(char *)(param_1 + 0x26c) == '\x01')) {
    fVar2 = *(float *)(param_1 + 0x274);
    fVar4 = *(float *)(param_2 + 8) - *(float *)(param_1 + 0x270);
    fVar5 = 0.0;
    if (fVar2 <= 0.0 || fVar4 <= fVar2) {
      fVar5 = fVar2 - fVar4;
    }
    pfVar1 = (float *)(lVar3 + 0x21c);
    if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1418887a8 FUN_1418887a8 body=137 status=ok
// SIG undefined FUN_1418887a8(void)

undefined8 * FUN_1418887a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141888832 FUN_141888832 body=126 status=ok
// SIG undefined FUN_141888832(void)

undefined8 * FUN_141888832(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418888b0 FUN_1418888b0 body=126 status=ok
// SIG undefined FUN_1418888b0(void)

undefined8 * FUN_1418888b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14188892e FUN_14188892e body=126 status=ok
// SIG undefined FUN_14188892e(void)

undefined8 * FUN_14188892e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418889ac FUN_1418889ac body=167 status=ok
// SIG undefined FUN_1418889ac(void)

void FUN_1418889ac(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x8c);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 4,0);
      uVar4 = uVar4 >> 4;
      iVar2 = *(int *)(param_1 + 0x8c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar4;
  FUN_1459a424e(param_1,*(undefined4 *)(param_1 + 0x88),uVar4,0x10);
  return;
}



// FUNCTION 141888a54 FUN_141888a54 body=118 status=ok
// SIG undefined FUN_141888a54(void)

void FUN_141888a54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4059b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141888aca FUN_141888aca body=320 status=ok
// SIG undefined FUN_141888aca(void)

void FUN_141888aca(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141888b33;
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
LAB_141888b33:
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



// FUNCTION 141888c0a FUN_141888c0a body=353 status=ok
// SIG undefined FUN_141888c0a(void)

void FUN_141888c0a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141888c91;
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
LAB_141888c91:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141888d6c FUN_141888d6c body=210 status=ok
// SIG undefined FUN_141888d6c(void)

void FUN_141888d6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b0d3100;
  plVar3 = *(longlong **)(param_1 + 0x1750);
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
  lVar4 = param_1 + 0xbb0;
  lVar5 = -0x16e0;
  do {
    plVar3 = *(longlong **)(lVar4 + 0xb58);
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
    FUN_140cc5edc(lVar4);
    lVar4 = lVar4 + -0xb70;
    lVar5 = lVar5 + 0xb70;
  } while (lVar5 != 0);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ac53b20;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141888e1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141888e3e FUN_141888e3e body=29 status=ok
// SIG undefined FUN_141888e3e(void)

undefined8 FUN_141888e3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141888e5c FUN_141888e5c body=176 status=ok
// SIG undefined FUN_141888e5c(void)

ulonglong FUN_141888e5c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = 2;
  if (((((*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) && (*(int *)(param_1 + 0xec) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0)))) &&
     ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0xec) &&
      ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x50))();
    if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar4);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == *(char *)(param_1 + 0xd8))) {
          return 0;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)*(int *)(lVar5 + 0x48) * 0x10 != lVar4);
    }
    uVar3 = FUN_1412748bc(param_1);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 141888f0c FUN_141888f0c body=146 status=ok
// SIG undefined FUN_141888f0c(void)

void FUN_141888f0c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((((*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) && (*(int *)(param_1 + 0xec) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xec))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x50))();
      FUN_140c4a7e8(uVar2,*(undefined1 *)(param_1 + 0xd8),1);
    }
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 141888f9e FUN_141888f9e body=995 status=ok
// SIG undefined FUN_141888f9e(void)

void FUN_141888f9e(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *_Dst;
  longlong *_Dst_00;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  uVar6 = DAT_14cb7e6a8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_140a48832();
  lVar5 = FUN_140c48046(param_1 + 0x80,uVar4,uVar6,0);
  if (lVar5 != 0) {
    local_48 = 0;
    uVar6 = FUN_140c48260();
    lVar5 = FUN_140c47e50(lVar5,uVar6,&local_48);
    if (lVar5 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x198);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_1 + 0x198);
        }
      }
      *(longlong *)(lVar5 + 0x80) = lVar10;
      *(undefined4 *)(lVar5 + 0x90) = *(undefined4 *)(param_1 + 0x1a8);
      *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(param_1 + 0x1a0);
      puVar11 = (undefined8 *)(param_1 + 0x1b8);
      _Dst_00 = (longlong *)(lVar5 + 0xa0);
      bVar1 = *(byte *)(lVar5 + 0xc0);
      if (bVar1 == *(byte *)(param_1 + 0x1d8)) {
        if (0x18 < *(ushort *)(param_1 + 0x1d0)) {
          puVar11 = *(undefined8 **)(param_1 + 0x1b8);
        }
        if (0x18 < *(ushort *)(lVar5 + 0xb8)) {
          _Dst_00 = (longlong *)*_Dst_00;
        }
        uVar7 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
        if (pcVar3 == (code *)0x0) {
          memcpy(_Dst_00,puVar11,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (*pcVar3)(_Dst_00,puVar11);
        }
      }
      else {
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar3 != (code *)0x0) {
          plVar8 = _Dst_00;
          if (0x18 < *(ushort *)(lVar5 + 0xb8)) {
            plVar8 = (longlong *)*_Dst_00;
          }
          (*pcVar3)(plVar8);
        }
        if (0x18 < *(ushort *)(lVar5 + 0xb8)) {
          FUN_1400020a8(*_Dst_00);
        }
        bVar1 = *(byte *)(param_1 + 0x1d8);
        uVar2 = *(ushort *)(param_1 + 0x1d0);
        *(ushort *)(lVar5 + 0xb8) = uVar2;
        plVar8 = _Dst_00;
        if (0x18 < uVar2) {
          plVar8 = (longlong *)FUN_14001cc68(uVar2,0);
          *_Dst_00 = (longlong)plVar8;
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar7 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
        if (pcVar3 == (code *)0x0) {
          memcpy(plVar8,puVar11,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (*pcVar3)(plVar8,puVar11);
        }
        *(undefined1 *)(lVar5 + 0xc0) = *(undefined1 *)(param_1 + 0x1d8);
      }
      *(undefined1 *)(lVar5 + 200) = *(undefined1 *)(param_1 + 0x1e0);
      puVar11 = (undefined8 *)(param_1 + 0x1f0);
      _Dst = (undefined8 *)(lVar5 + 0xd8);
      bVar1 = *(byte *)(lVar5 + 0xf8);
      if (bVar1 == *(byte *)(param_1 + 0x210)) {
        if (0x18 < *(ushort *)(param_1 + 0x208)) {
          puVar11 = *(undefined8 **)(param_1 + 0x1f0);
        }
        if (0x18 < *(ushort *)(lVar5 + 0xf0)) {
          _Dst = (undefined8 *)*_Dst;
        }
        uVar7 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
        if (pcVar3 == (code *)0x0) {
          memcpy(_Dst,puVar11,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (*pcVar3)(_Dst,puVar11);
        }
      }
      else {
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar3 != (code *)0x0) {
          puVar9 = _Dst;
          if (0x18 < *(ushort *)(lVar5 + 0xf0)) {
            puVar9 = (undefined8 *)*_Dst;
          }
          (*pcVar3)(puVar9);
        }
        if (0x18 < *(ushort *)(lVar5 + 0xf0)) {
          FUN_1400020a8(*_Dst);
        }
        bVar1 = *(byte *)(param_1 + 0x210);
        uVar2 = *(ushort *)(param_1 + 0x208);
        *(ushort *)(lVar5 + 0xf0) = uVar2;
        puVar9 = _Dst;
        if (0x18 < uVar2) {
          puVar9 = (undefined8 *)FUN_14001cc68(uVar2,0);
          *_Dst = puVar9;
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar7 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
        if (pcVar3 == (code *)0x0) {
          memcpy(puVar9,puVar11,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (*pcVar3)(puVar9,puVar11);
        }
        *(undefined1 *)(lVar5 + 0xf8) = *(undefined1 *)(param_1 + 0x210);
      }
      *(undefined1 *)(lVar5 + 0x100) = *(undefined1 *)(param_1 + 0x218);
      *(undefined4 *)(lVar5 + 0x108) = *(undefined4 *)(param_1 + 0x220);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141889382 FUN_141889382 body=1179 status=ok
// SIG undefined FUN_141889382(void)

void FUN_141889382(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2 == 0) || (plVar1 = *(longlong **)(param_2 + 0xa8), plVar1 == (longlong *)0x0))
  goto LAB_1418894b9;
  lVar8 = *(longlong *)(param_1 + 0x40);
  if (lVar8 == 0) {
    uVar9 = FUN_1407ad36c();
    lVar8 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x40) = lVar8;
  }
  plVar14 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if ((lVar8 == 0) || (*plVar14 == 0)) goto LAB_1418894b9;
    plVar7 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto LAB_1418894b9;
    }
    uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar8 = FUN_144aff482(uVar9,plVar14);
    *(longlong *)(param_1 + 0x48) = lVar8;
    if (lVar8 == 0) goto LAB_1418894b9;
  }
  plVar7 = (longlong *)FUN_14017698e(plVar1);
  if (plVar7 == (longlong *)0x0) {
    lVar8 = 0;
    local_d8 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
    local_d8 = (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  bVar15 = local_d8 == 0;
  lVar10 = *(longlong *)(param_1 + 0xa8);
  if (lVar10 == 0) {
    uVar9 = FUN_14043db3a();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0xa8) = lVar10;
  }
  plVar7 = (longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    if ((*plVar7 != 0) && (lVar10 != 0)) {
      plVar2 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar10 = FUN_144aff482(uVar9,plVar7);
        *(longlong *)(param_1 + 0xb0) = lVar10;
        if (lVar10 != 0) goto LAB_1418895ad;
      }
    }
    if (lVar8 == 0 || bVar15) goto LAB_1418894b9;
  }
  else {
LAB_1418895ad:
    if (lVar8 == 0) goto LAB_1418894b9;
    if (*(longlong *)(lVar8 + 0x150) == 0) {
      uVar9 = FUN_14043db3a();
      uVar9 = FUN_14477b664(uVar9);
      *(undefined8 *)(lVar8 + 0x150) = uVar9;
    }
    lVar10 = *(longlong *)(param_1 + 0xa8);
    local_e0 = plVar14;
    if (lVar10 == 0) {
      lVar10 = FUN_14043db3a();
    }
    local_e8 = *plVar7;
    lVar10 = FUN_14477b664(lVar10);
    iVar6 = 0;
    iVar5 = 0;
    if ((lVar10 != 0) && (plVar14 = *(longlong **)(lVar10 + 0xb8), plVar14 != (longlong *)0x0)) {
      lVar11 = *plVar14;
      pcVar3 = *(code **)(lVar11 + 0x108);
      if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
        cVar4 = (*pcVar3)(plVar14);
        iVar5 = 0;
        if (cVar4 == '\0') goto LAB_141889658;
        lVar11 = *plVar14;
      }
      pcVar3 = *(code **)(lVar11 + 0x110);
      if (pcVar3 == (code *)&LAB_144783426) {
        ppuVar13 = &PTR_PTR_14c763408;
      }
      else if (pcVar3 == (code *)&LAB_144783432) {
        ppuVar13 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar13 = (undefined **)(*pcVar3)(plVar14);
      }
      iVar5 = FUN_144aff48c(ppuVar13);
    }
LAB_141889658:
    lVar11 = *(longlong *)(lVar8 + 0x148);
    lVar8 = *(longlong *)(lVar8 + 0x150);
    if ((lVar8 != 0) && (plVar14 = *(longlong **)(lVar8 + 0xb8), plVar14 != (longlong *)0x0)) {
      lVar12 = *plVar14;
      pcVar3 = *(code **)(lVar12 + 0x108);
      if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
        cVar4 = (*pcVar3)(plVar14);
        if (cVar4 == '\0') goto LAB_1418896ca;
        lVar12 = *plVar14;
      }
      pcVar3 = *(code **)(lVar12 + 0x110);
      if (pcVar3 == (code *)&LAB_144783426) {
        ppuVar13 = &PTR_PTR_14c763408;
      }
      else if (pcVar3 == (code *)&LAB_144783432) {
        ppuVar13 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar13 = (undefined **)(*pcVar3)(plVar14);
      }
      iVar6 = FUN_144aff48c(ppuVar13);
    }
LAB_1418896ca:
    if ((iVar6 != iVar5) || (lVar11 != local_e8)) goto LAB_1418894b9;
    plVar14 = local_e0;
    if (lVar8 != lVar10) {
      if ((lVar10 == 0) || (lVar8 == 0)) goto LAB_1418894b9;
      iVar5 = *(int *)(lVar10 + 0x38);
      iVar6 = *(int *)(lVar8 + 0x38);
      if (((iVar6 < iVar5) ||
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 8) != lVar10 + 0x30)) &&
         ((iVar5 < iVar6 ||
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar6 * 8) != lVar8 + 0x30))))
      goto LAB_1418894b9;
    }
  }
  local_d0[0] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_52 = 1;
  local_51 = 0;
  uVar9 = (**(code **)(*plVar1 + 0x180))(plVar1);
  local_f8 = local_d0;
  FUN_1407acb05(uVar9,plVar14,param_1 + 0x50,local_d8);
LAB_1418894b9:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14188981e FUN_14188981e body=34 status=ok
// SIG undefined FUN_14188981e(void)

void FUN_14188981e(undefined8 param_1,undefined4 param_2)

{
  FUN_140b4cc3e(param_1,0);
  FUN_1408f578a(param_1,param_2);
  return;
}



// FUNCTION 141889840 FUN_141889840 body=193 status=ok
// SIG undefined FUN_141889840(void)

undefined8 * FUN_141889840(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)(param_1 + 0x40);
  FUN_1400021e4(local_48,local_30);
  local_48[0] = 0;
  local_48[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(local_58,&DAT_149e0635c);
  local_60 = 0;
  local_68 = 1;
  FUN_1407cdbc6(local_30,local_58,local_48,param_2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141889902 FUN_141889902 body=555 status=ok
// SIG undefined FUN_141889902(void)

undefined8 FUN_141889902(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  
  if (param_1[1] == 0) {
    uVar11 = FUN_14012344a();
    lVar8 = FUN_14477b664(uVar11);
    param_1[1] = lVar8;
  }
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    lVar8 = FUN_14012344a();
  }
  lVar1 = *param_2;
  lVar8 = FUN_14477b664(lVar8);
  iVar7 = 0;
  iVar6 = 0;
  if ((lVar8 != 0) && (plVar2 = *(longlong **)(lVar8 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar9 = *plVar2;
    pcVar3 = *(code **)(lVar9 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_1418899ad;
      lVar9 = *plVar2;
    }
    pcVar3 = *(code **)(lVar9 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_1418899ad:
  lVar9 = *param_1;
  lVar4 = param_1[1];
  if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar10 = *plVar2;
    pcVar3 = *(code **)(lVar10 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      if (cVar5 == '\0') goto LAB_141889a14;
      lVar10 = *plVar2;
    }
    pcVar3 = *(code **)(lVar10 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar7 = FUN_144aff48c(ppuVar12);
  }
LAB_141889a14:
  if (iVar7 != iVar6) {
    return 0;
  }
  if (lVar9 != lVar1) {
    return 0;
  }
  if (lVar4 != lVar8) {
    if (lVar8 == 0) {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    iVar6 = *(int *)(lVar8 + 0x38);
    iVar7 = *(int *)(lVar4 + 0x38);
    if (((iVar7 < iVar6) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) != lVar8 + 0x30)) &&
       ((iVar6 < iVar7 ||
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar7 * 8) != lVar4 + 0x30)))) {
      return 0;
    }
  }
  return CONCAT71((int7)((ulonglong)param_1[3] >> 8),param_1[3] == param_2[3]);
}



// FUNCTION 141889b2e FUN_141889b2e body=44 status=ok
// SIG undefined FUN_141889b2e(void)

void FUN_141889b2e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 141889b5a FUN_141889b5a body=91 status=ok
// SIG undefined FUN_141889b5a(void)

void FUN_141889b5a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar2 != 0) &&
           ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x14) &&
            ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
          return;
        }
      }
    }
  }
  FUN_14017698e(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 141889bb6 FUN_141889bb6 body=54 status=ok
// SIG undefined FUN_141889bb6(void)

void FUN_141889bb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140fb4052(&DAT_14cb7eb10);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b4069c0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x29) = 0;
  return;
}



// FUNCTION 141889bec FUN_141889bec body=173 status=ok
// SIG undefined FUN_141889bec(void)

ulonglong FUN_141889bec(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 == 0) {
    uVar3 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x48) = lVar4;
  }
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x40));
        *(longlong *)(param_1 + 0x50) = lVar4;
        if (lVar4 != 0) goto LAB_141889c0b;
      }
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar5 = CONCAT71(uVar6,*(longlong *)(param_1 + 0x34) != 0);
    }
    else {
      uVar5 = 0;
    }
  }
LAB_141889c0b:
  return uVar5 & 0xffffffff;
}



// FUNCTION 141889c9a FUN_141889c9a body=143 status=ok
// SIG undefined FUN_141889c9a(void)

undefined1 FUN_141889c9a(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar3 = &DAT_14c763940;
  if (DAT_14cb7f870 != 0) {
    if ((int)(uint)*(byte *)(param_1 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8)) {
      puVar3 = (undefined4 *)
               ((ulonglong)*(byte *)(param_1 + 0x2c) * 0x10 + *(longlong *)(DAT_14cb7f870 + 0x3a0));
    }
  }
  if (*(char *)((longlong)puVar3 + 0xd) != '\x01') {
    if (*(char *)((longlong)puVar3 + 0xd) == '\x02') {
      uVar1 = 1;
      goto LAB_141889d06;
    }
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = FUN_140206ee8(param_1 + 0x30);
    if (lVar2 != 0) {
      uVar1 = *(undefined1 *)(lVar2 + 0x43);
      goto LAB_141889d06;
    }
  }
  uVar1 = 0;
LAB_141889d06:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141889d2a FUN_141889d2a body=332 status=ok
// SIG undefined FUN_141889d2a(void)

void FUN_141889d2a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140c04244();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar6 = *param_2;
  if (param_2[2] != 0) {
LAB_141889dab:
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      uVar2 = (uint)((ulonglong)lVar6 >> 0x10);
      uVar7 = (uint)lVar6 & 0xffff;
      lVar5 = param_1 + 0x90;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x98);
      }
      iVar8 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0xa0) - 1U &
                               (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar7) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar8 * 0x14);
          if (*plVar1 == lVar6) {
            if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) && (0 < (int)plVar1[1])
               ) {
              return;
            }
            break;
          }
          iVar8 = *(int *)((longlong)plVar1 + 0xc);
        } while (iVar8 != -1);
      }
    }
    FUN_140d54314(param_1,param_2);
    return;
  }
  if ((lVar5 != 0) && (lVar6 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,param_2);
      param_2[2] = lVar5;
      if (lVar5 != 0) {
        lVar6 = *param_2;
        goto LAB_141889dab;
      }
    }
  }
  return;
}



// FUNCTION 141889e76 FUN_141889e76 body=309 status=ok
// SIG undefined FUN_141889e76(void)

longlong FUN_141889e76(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    lVar7 = FUN_1407ad36c();
  }
  uVar1 = *param_2;
  uVar4 = FUN_14477b664(lVar7);
  uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  uVar2 = uVar6 >> 0xd ^
          (((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) - uVar6;
  uVar8 = uVar2 << 8 ^ (-0x61c88647 - uVar6) - uVar2;
  uVar9 = uVar8 >> 0xd ^ (uVar6 - uVar2) - uVar8;
  uVar2 = uVar9 >> 0xc ^ (uVar2 - uVar8) - uVar9;
  uVar6 = uVar2 << 0x10 ^ (uVar8 - uVar9) - uVar2;
  uVar9 = uVar6 >> 5 ^ (uVar9 - uVar2) - uVar6;
  uVar8 = uVar9 >> 3 ^ (uVar2 - uVar6) - uVar9;
  uVar2 = uVar8 << 10 ^ (uVar6 - uVar9) - uVar8;
  iVar3 = FUN_1405a5be8((longlong *)(param_1 + 0x10),uVar2 >> 0xf ^ uVar9 - (uVar8 + uVar2),param_2)
  ;
  if (iVar3 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 0x10);
  }
  lVar5 = lVar7 + 0x18;
  if (lVar7 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 141889fac FUN_141889fac body=1658 status=ok
// SIG undefined FUN_141889fac(void)

longlong * FUN_141889fac(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (param_3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x20);
    if (lVar4 == 0) {
      uVar5 = FUN_14065b502();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_3 + 0x20) = lVar4;
    }
    plVar7 = (longlong *)(param_3 + 0x18);
    plVar1 = (longlong *)(param_3 + 0x28);
    lVar6 = *(longlong *)(param_3 + 0x28);
    if (lVar6 == 0) {
      if ((*plVar7 != 0) && (lVar4 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        plVar8 = plVar1;
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
LAB_14188a60d:
          *plVar8 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar7);
          *plVar1 = lVar6;
          if (lVar6 != 0) {
            lVar4 = *(longlong *)(param_3 + 0x20);
            goto LAB_14188a443;
          }
        }
      }
LAB_14188a0bd:
      lVar4 = *(longlong *)(param_3 + 0x48);
      if (lVar4 == 0) {
        uVar5 = FUN_140e2f220();
        lVar4 = FUN_14477b664(uVar5);
        *(longlong *)(param_3 + 0x48) = lVar4;
      }
      lVar6 = *(longlong *)(param_3 + 0x40);
      if (*(longlong *)(param_3 + 0x50) != 0) {
LAB_14188a0d5:
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = lVar6;
        uVar5 = FUN_14477b664(lVar4);
        lVar4 = FUN_14477b664(uVar5);
        param_1[1] = lVar4;
        lVar4 = *(longlong *)(param_3 + 0x50);
        goto LAB_14188a076;
      }
      if ((lVar4 != 0) && (lVar6 != 0)) {
        plVar7 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
          *(undefined8 *)(param_3 + 0x50) = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
          lVar4 = FUN_144aff482(uVar5,param_3 + 0x40);
          *(longlong *)(param_3 + 0x50) = lVar4;
          if (lVar4 != 0) {
            lVar6 = *(longlong *)(param_3 + 0x40);
            lVar4 = *(longlong *)(param_3 + 0x48);
            goto LAB_14188a0d5;
          }
        }
      }
      goto LAB_141889fcb;
    }
LAB_14188a443:
    if (lVar4 == 0) {
      uVar5 = FUN_14065b502();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_3 + 0x20) = lVar4;
      lVar6 = *(longlong *)(param_3 + 0x28);
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar7 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar7);
        }
        *plVar1 = lVar6;
      }
    }
    lVar4 = *(longlong *)(lVar6 + 0x48);
    if (lVar4 == 0) {
      uVar5 = FUN_140e2f220();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(lVar6 + 0x48) = lVar4;
    }
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      if ((*(longlong *)(lVar6 + 0x40) != 0) && (lVar4 != 0)) {
        plVar8 = (longlong *)(lVar6 + 0x50);
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) goto LAB_14188a60d;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,(longlong *)(lVar6 + 0x40));
        *plVar8 = lVar4;
        if (lVar4 != 0) goto LAB_14188a4c5;
      }
      goto LAB_14188a0bd;
    }
LAB_14188a4c5:
    lVar4 = *(longlong *)(param_3 + 0x20);
    if (lVar4 == 0) {
      uVar5 = FUN_14065b502();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_3 + 0x20) = lVar4;
    }
    lVar6 = *plVar1;
    if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar7 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar7);
      }
      *plVar1 = lVar6;
    }
LAB_14188a2fe:
    plVar7 = (longlong *)(lVar6 + 0x40);
LAB_14188a35e:
    FUN_14188a626(param_1,plVar7);
    return param_1;
  }
LAB_141889fcb:
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x48);
    if (lVar4 == 0) {
      uVar5 = FUN_14065b502();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_2 + 0x48) = lVar4;
    }
    plVar7 = (longlong *)(param_2 + 0x40);
    plVar1 = (longlong *)(param_2 + 0x50);
    lVar6 = *(longlong *)(param_2 + 0x50);
    if (lVar6 == 0) {
      if ((lVar4 != 0) && (*plVar7 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        plVar8 = plVar1;
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
LAB_14188a5e9:
          *plVar8 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar7);
          *plVar1 = lVar6;
          if (lVar6 != 0) {
            lVar4 = *(longlong *)(param_2 + 0x48);
            goto LAB_141889ff2;
          }
        }
      }
    }
    else {
LAB_141889ff2:
      if (lVar4 == 0) {
        uVar5 = FUN_14065b502();
        lVar4 = FUN_14477b664(uVar5);
        *(longlong *)(param_2 + 0x48) = lVar4;
        lVar6 = *(longlong *)(param_2 + 0x50);
        if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar7 != 0)) {
          plVar2 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,plVar7);
          }
          *plVar1 = lVar6;
        }
      }
      lVar4 = *(longlong *)(lVar6 + 0x48);
      if (lVar4 == 0) {
        uVar5 = FUN_140e2f220();
        lVar4 = FUN_14477b664(uVar5);
        *(longlong *)(lVar6 + 0x48) = lVar4;
      }
      if (*(longlong *)(lVar6 + 0x50) != 0) {
LAB_14188a2db:
        lVar4 = *(longlong *)(param_2 + 0x48);
        if (lVar4 == 0) {
          uVar5 = FUN_14065b502();
          lVar4 = FUN_14477b664(uVar5);
          *(longlong *)(param_2 + 0x48) = lVar4;
        }
        lVar6 = *plVar1;
        if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar7 != 0)) {
          plVar2 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,plVar7);
          }
          *plVar1 = lVar6;
        }
        goto LAB_14188a2fe;
      }
      if ((*(longlong *)(lVar6 + 0x40) != 0) && (lVar4 != 0)) {
        plVar8 = (longlong *)(lVar6 + 0x50);
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) goto LAB_14188a5e9;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,(longlong *)(lVar6 + 0x40));
        *plVar8 = lVar4;
        if (lVar4 != 0) goto LAB_14188a2db;
      }
    }
    lVar4 = *(longlong *)(param_2 + 0x30);
    if (lVar4 == 0) {
      uVar5 = FUN_140e2f220();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_2 + 0x30) = lVar4;
    }
    plVar7 = (longlong *)(param_2 + 0x28);
    if (*(longlong *)(param_2 + 0x38) != 0) goto LAB_14188a35e;
    if ((*plVar7 != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        *(undefined8 *)(param_2 + 0x38) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar5,plVar7);
        *(longlong *)(param_2 + 0x38) = lVar4;
        if (lVar4 != 0) goto LAB_14188a35e;
      }
    }
  }
  lVar4 = FUN_140316ff8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *(longlong *)(lVar4 + 0x30);
  uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x38));
  lVar6 = FUN_14477b664(uVar5);
  param_1[1] = lVar6;
  lVar4 = *(longlong *)(lVar4 + 0x40);
LAB_14188a076:
  param_1[2] = lVar4;
  return param_1;
}



// FUNCTION 14188a626 FUN_14188a626 body=71 status=ok
// SIG undefined FUN_14188a626(void)

undefined8 * FUN_14188a626(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14188a66e FUN_14188a66e body=1965 status=ok
// SIG undefined FUN_14188a66e(void)

ulonglong FUN_14188a66e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8 [7];
  byte local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  byte local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (lVar8 == 0) {
    uVar7 = FUN_140490c9a();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x30) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  plVar10 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) != 0) {
LAB_14188a6b8:
    lVar8 = *(longlong *)(param_1 + 0x48);
    if (lVar8 == 0) {
      uVar7 = FUN_140490c9a();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x48) = lVar8;
    }
    plVar2 = (longlong *)(param_1 + 0x40);
    plVar14 = (longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((lVar8 != 0) && (*plVar2 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) goto LAB_14188adf2;
        uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar7,plVar2);
        *plVar14 = lVar8;
        if (lVar8 != 0) goto LAB_14188a6d8;
      }
      goto LAB_14188adfa;
    }
LAB_14188a6d8:
    lVar8 = *(longlong *)(param_1 + 0x30);
    if (lVar8 == 0) {
      uVar7 = FUN_140490c9a();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x30) = lVar8;
    }
    lVar11 = *plVar10;
    if (((lVar11 == 0) && (lVar11 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar11 = FUN_144aff482(uVar7,plVar1);
      }
      *plVar10 = lVar11;
    }
    if (*(char *)(lVar11 + 0x18) != '\x01') goto LAB_14188adfa;
    lVar8 = *(longlong *)(param_1 + 0x48);
    if (lVar8 == 0) {
      uVar7 = FUN_140490c9a();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x48) = lVar8;
    }
    lVar11 = *plVar14;
    if (((lVar11 == 0) && (lVar11 = 0, lVar8 != 0)) && (*plVar2 != 0)) {
      plVar3 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar11 = FUN_144aff482(uVar7,plVar2);
      }
      *plVar14 = lVar11;
    }
    if (*(char *)(lVar11 + 0x18) != '\x05') goto LAB_14188adfa;
    local_50 = 0;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    lVar8 = *(longlong *)(param_1 + 0x30);
    if (lVar8 == 0) {
      uVar7 = FUN_140490c9a();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x30) = lVar8;
    }
    lVar11 = *plVar10;
    if (((lVar11 == 0) && (lVar11 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
        lVar11 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar11 = FUN_144aff482(uVar7,plVar1);
      }
      *plVar10 = lVar11;
    }
    local_e8 = 0;
    lStack_e0 = 0;
    local_d8 = 0;
    uVar7 = FUN_140490c9a();
    lStack_e0 = FUN_14477b664(uVar7);
    lVar8 = FUN_140490c9a();
    uVar7 = FUN_140490c9a();
    FUN_1402d1bfa(&local_108,uVar7,lVar11);
    if (local_e8 != local_108) {
      local_d8 = 0;
    }
    local_e8 = local_108;
    lVar9 = FUN_140490c9a();
    if (lVar8 == 0) {
LAB_14188a7f1:
      lVar9 = lVar8;
    }
    else if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
             lVar9 + 0x30)) goto LAB_14188a7f1;
    if (lStack_e0 != lVar9) {
      local_d8 = 0;
    }
    uVar7 = FUN_14477b664(lVar9);
    lStack_e0 = FUN_14477b664(uVar7);
    if ((lStack_e0 != 0) && (local_e8 != 0)) {
      local_d8 = lVar11;
    }
    cVar6 = FUN_140490d6e(param_2,&local_e8,&local_88);
    plVar1 = param_2;
    if (cVar6 != '\0') {
      lVar8 = *(longlong *)(param_1 + 0x48);
      if (lVar8 == 0) {
        uVar7 = FUN_140490c9a();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(param_1 + 0x48) = lVar8;
      }
      lVar11 = *plVar14;
      if (((lVar11 == 0) && (lVar11 = 0, lVar8 != 0)) && (*plVar2 != 0)) {
        plVar10 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
          lVar11 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
          lVar11 = FUN_144aff482(uVar7,plVar2);
        }
        *plVar14 = lVar11;
      }
      local_108 = 0;
      lStack_100 = 0;
      local_f8 = 0;
      uVar7 = FUN_140490c9a();
      lStack_100 = FUN_14477b664(uVar7);
      lVar8 = FUN_140490c9a();
      uVar7 = FUN_140490c9a();
      FUN_1402d1bfa(&local_d0,uVar7,lVar11);
      if (local_108 != local_d0) {
        local_f8 = 0;
      }
      local_108 = local_d0;
      lVar9 = FUN_140490c9a();
      if (lVar8 == 0) {
LAB_14188a8e5:
        lVar9 = lVar8;
      }
      else if (lVar9 == 0) {
        lVar9 = 0;
      }
      else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
               lVar9 + 0x30)) goto LAB_14188a8e5;
      if (lStack_100 != lVar9) {
        local_f8 = 0;
      }
      uVar7 = FUN_14477b664(lVar9);
      lStack_100 = FUN_14477b664(uVar7);
      if ((local_d0 != 0) && (lStack_100 != 0)) {
        local_f8 = lVar11;
      }
      cVar6 = FUN_140490d6e(param_2,&local_108,local_c8);
      plVar10 = local_88;
      bVar4 = true;
      if (((cVar6 != '\0') && (local_50 == 1)) && (plVar1 = plVar10, local_88 != (longlong *)0x0)) {
        uVar7 = FUN_1401b0f18();
        param_2 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar7);
        if (param_2 != (longlong *)0x0) {
          uVar7 = FUN_1401b0f18();
          plVar10 = (longlong *)FUN_144718840(param_2,uVar7);
          plVar1 = param_2;
          if (((param_2 != plVar10) && (plVar10 != (longlong *)0x0)) &&
             (lVar8 = FUN_140316ff8(), *(int *)(lVar8 + 0x350) != *(int *)(lVar8 + 0x37c))) {
            uVar5 = (uint)((ulonglong)local_c8[0] >> 0x10);
            uVar13 = (uint)local_c8[0] & 0xffff;
            lVar11 = lVar8 + 0x380;
            if (*(longlong *)(lVar8 + 0x388) != 0) {
              lVar11 = *(longlong *)(lVar8 + 0x388);
            }
            iVar12 = *(int *)(lVar11 + (ulonglong)
                                       (*(int *)(lVar8 + 0x390) - 1U &
                                       (int)((ulonglong)local_c8[0] >> 0x20) +
                                       ((uint)local_c8[0] << 0x10 | uVar13) +
                                       (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar13 >> 4)) * 4);
            if (iVar12 != -1) {
              do {
                plVar14 = (longlong *)(*(longlong *)(lVar8 + 0x348) + (longlong)iVar12 * 0x18);
                if (*plVar14 == local_c8[0]) {
                  if (plVar14 + 1 == (longlong *)0x0 || plVar14 == (longlong *)0x0)
                  goto LAB_14188aab4;
                  lVar11 = (**(code **)(*plVar10 + 0x28))(plVar10);
                  lVar8 = plVar14[1];
                  param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
                  if (lVar8 == 0) goto LAB_14188aab2;
                  if ((longlong)*(int *)(lVar11 + 0x80) == 0) goto LAB_14188aa89;
                  lVar9 = 0;
                  goto LAB_14188aa76;
                }
                iVar12 = (int)plVar14[2];
              } while (iVar12 != -1);
            }
          }
        }
      }
    }
    param_2 = plVar1;
    bVar4 = true;
    goto LAB_14188aab4;
  }
  if ((lVar8 != 0) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar8 + 0xb8);
    plVar14 = plVar10;
    if ((plVar2 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
LAB_14188adf2:
      *plVar14 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar8 = FUN_144aff482(uVar7,plVar1);
      *plVar10 = lVar8;
      if (lVar8 != 0) goto LAB_14188a6b8;
    }
  }
  goto LAB_14188adfa;
LAB_14188ab0d:
  param_2 = (longlong *)0x0;
  goto LAB_14188aab2;
  while (lVar9 = lVar9 + 8, (longlong)*(int *)(lVar11 + 0x80) * 8 != lVar9) {
LAB_14188aa76:
    if (*(longlong *)(*(longlong *)(lVar11 + 0x78) + lVar9) == lVar8) goto LAB_14188ab0d;
  }
LAB_14188aa89:
  if ((longlong)*(int *)(lVar11 + 0x90) != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar11 + 0x88) + lVar9) == lVar8) goto LAB_14188ab0d;
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(lVar11 + 0x90) * 8 != lVar9);
  }
LAB_14188aab2:
  bVar4 = false;
LAB_14188aab4:
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])();
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_50])();
  if (bVar4) {
LAB_14188adfa:
    param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),2);
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 14188ae1c FUN_14188ae1c body=2623 status=ok
// SIG undefined FUN_14188ae1c(void)

ulonglong FUN_14188ae1c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *unaff_RBX;
  longlong *plVar11;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  longlong *plStack_100;
  longlong local_f8;
  code *local_f0;
  code *local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_c8 [7];
  byte local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    uVar5 = FUN_140490c9a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x30) = lVar6;
  }
  plVar8 = (longlong *)(param_1 + 0x28);
  plVar9 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((lVar6 != 0) && (*plVar8 != 0)) {
      unaff_RBX = *(longlong **)(lVar6 + 0xb8);
      plVar11 = plVar9;
      if ((unaff_RBX == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*unaff_RBX + 0x108))(unaff_RBX), cVar3 == '\0')) {
LAB_14188b833:
        *plVar11 = 0;
      }
      else {
        uVar5 = (**(code **)(*unaff_RBX + 0x110))(unaff_RBX);
        lVar6 = FUN_144aff482(uVar5,plVar8);
        *plVar9 = lVar6;
        if (lVar6 != 0) goto LAB_14188ae67;
      }
    }
  }
  else {
LAB_14188ae67:
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (lVar6 == 0) {
      uVar5 = FUN_140490c9a();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x48) = lVar6;
    }
    unaff_RBX = (longlong *)(param_1 + 0x40);
    plVar11 = (longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((lVar6 != 0) && (*unaff_RBX != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) goto LAB_14188b833;
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar5,unaff_RBX);
        *plVar11 = lVar6;
        if (lVar6 != 0) goto LAB_14188ae87;
      }
    }
    else {
LAB_14188ae87:
      lVar6 = *(longlong *)(param_1 + 0x30);
      if (lVar6 == 0) {
        uVar5 = FUN_140490c9a();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x30) = lVar6;
      }
      lVar10 = *plVar9;
      if (((lVar10 == 0) && (lVar10 = 0, lVar6 != 0)) && (*plVar8 != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar10 = FUN_144aff482(uVar5,plVar8);
        }
        *plVar9 = lVar10;
      }
      if (*(char *)(lVar10 + 0x18) == '\x01') {
        lVar6 = *(longlong *)(param_1 + 0x48);
        if (lVar6 == 0) {
          uVar5 = FUN_140490c9a();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x48) = lVar6;
        }
        lVar10 = *plVar11;
        if (((lVar10 == 0) && (lVar10 = 0, lVar6 != 0)) && (*unaff_RBX != 0)) {
          plVar1 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar10 = FUN_144aff482(uVar5,unaff_RBX);
          }
          *plVar11 = lVar10;
        }
        if (*(char *)(lVar10 + 0x18) == '\x01') {
          local_50 = 0;
          local_88 = (longlong *)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_90 = 0;
          local_c8[0] = 0;
          local_c8[1] = 0;
          local_c8[2] = 0;
          lVar6 = *(longlong *)(param_1 + 0x30);
          if (lVar6 == 0) {
            uVar5 = FUN_140490c9a();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(param_1 + 0x30) = lVar6;
          }
          lVar10 = *plVar9;
          if (((lVar10 == 0) && (lVar10 = 0, lVar6 != 0)) && (*plVar8 != 0)) {
            plVar1 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              lVar10 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar10 = FUN_144aff482(uVar5,plVar8);
            }
            *plVar9 = lVar10;
          }
          local_e8 = (code *)0x0;
          lStack_e0 = 0;
          local_d8 = 0;
          uVar5 = FUN_140490c9a();
          lStack_e0 = FUN_14477b664(uVar5);
          lVar6 = FUN_140490c9a();
          uVar5 = FUN_140490c9a();
          FUN_1402d1bfa(&local_108,uVar5,lVar10);
          if (local_e8 != local_108) {
            local_d8 = 0;
          }
          local_e8 = local_108;
          lVar7 = FUN_140490c9a();
          if (lVar6 == 0) {
LAB_14188afb8:
            lVar7 = lVar6;
          }
          else if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                   == lVar7 + 0x30)) goto LAB_14188afb8;
          if (lStack_e0 != lVar7) {
            local_d8 = 0;
          }
          uVar5 = FUN_14477b664(lVar7);
          lStack_e0 = FUN_14477b664(uVar5);
          if ((lStack_e0 != 0) && (local_e8 != (code *)0x0)) {
            local_d8 = lVar10;
          }
          cVar3 = FUN_140490d6e(param_2,&local_e8,&local_88);
          if (cVar3 == '\0') {
LAB_14188b7a2:
            bVar2 = true;
          }
          else {
            lVar6 = *(longlong *)(param_1 + 0x48);
            if (lVar6 == 0) {
              uVar5 = FUN_140490c9a();
              lVar6 = FUN_14477b664(uVar5);
              *(longlong *)(param_1 + 0x48) = lVar6;
            }
            lVar10 = *plVar11;
            if (((lVar10 == 0) && (lVar10 = 0, lVar6 != 0)) && (*unaff_RBX != 0)) {
              plVar8 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar8 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
                lVar10 = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
                lVar10 = FUN_144aff482(uVar5,unaff_RBX);
              }
              *plVar11 = lVar10;
            }
            local_108 = (code *)0x0;
            plStack_100 = (longlong *)0x0;
            local_f8 = 0;
            uVar5 = FUN_140490c9a();
            plStack_100 = (longlong *)FUN_14477b664(uVar5);
            unaff_RBX = (longlong *)FUN_140490c9a();
            uVar5 = FUN_140490c9a();
            FUN_1402d1bfa(&local_f0,uVar5,lVar10);
            if (local_108 != local_f0) {
              local_f8 = 0;
            }
            local_108 = local_f0;
            plVar8 = (longlong *)FUN_140490c9a();
            if (unaff_RBX == (longlong *)0x0) {
LAB_14188b0c7:
              plVar8 = unaff_RBX;
            }
            else if (plVar8 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
            }
            else if (((int)plVar8[7] <= (int)unaff_RBX[7]) &&
                    (*(longlong **)(unaff_RBX[6] + (longlong)(int)plVar8[7] * 8) == plVar8 + 6))
            goto LAB_14188b0c7;
            if (plStack_100 != plVar8) {
              local_f8 = 0;
            }
            uVar5 = FUN_14477b664(plVar8);
            plStack_100 = (longlong *)FUN_14477b664(uVar5);
            if ((local_f0 != (code *)0x0) && (plStack_100 != (longlong *)0x0)) {
              local_f8 = lVar10;
            }
            cVar3 = FUN_140490d6e(param_2,&local_108,local_c8);
            plVar8 = local_88;
            if (cVar3 == '\0') goto LAB_14188b7a2;
            if ((local_50 == 1) && (local_88 != (longlong *)0x0)) {
              if (DAT_14cac9ca8 == 0) {
                local_e8 = FUN_141030f22;
                local_110 = FUN_14081d0ea;
                local_118 = FUN_14081d0ea;
                local_128 = &LAB_1478c0a72;
                local_130 = (code *)&LAB_1417b2375;
                local_138 = L"Engine";
                local_140 = 0x1000000000;
                local_148 = 0x10000004;
                local_150 = 8;
                local_158 = 0x390;
                local_120 = &local_e8;
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
                  != DAT_14cac9ca8 + 0x30)) goto LAB_14188b2c7;
            }
            else {
LAB_14188b2c7:
              plVar8 = (longlong *)0x0;
            }
            lVar6 = local_c8[0];
            if ((local_90 != 1) || (local_c8[0] == 0)) goto LAB_14188b7a2;
            if (DAT_14cac9ca8 == 0) {
              local_e8 = FUN_141030f22;
              local_110 = FUN_14081d0ea;
              local_118 = FUN_14081d0ea;
              local_128 = &LAB_1478c0a72;
              local_130 = (code *)&LAB_1417b2375;
              local_138 = L"Engine";
              local_140 = 0x1000000000;
              local_148 = 0x10000004;
              local_150 = 8;
              local_158 = 0x390;
              local_120 = &local_e8;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            lVar10 = *(longlong *)(lVar6 + 0x10);
            if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
                DAT_14cac9ca8 + 0x30)) goto LAB_14188b7a2;
            bVar2 = true;
            if (plVar8 != (longlong *)0x0) {
              if (DAT_14cb223d8 == 0) {
                local_e8 = FUN_1449e2820;
                local_110 = FUN_14081d0ea;
                local_118 = FUN_1427b09ee;
                local_128 = &LAB_147f29feb;
                local_130 = FUN_1464384fe;
                local_138 = L"Engine";
                local_140 = 0;
                local_148 = 0x10004001;
                local_150 = 8;
                local_158 = 0x28;
                local_120 = &local_e8;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
              }
              plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb223d8);
              unaff_RBX = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
              if (plVar8 != (longlong *)0x0) {
                if (DAT_14cb223d8 == 0) {
                  local_e8 = FUN_1449e2820;
                  local_110 = FUN_14081d0ea;
                  local_118 = FUN_1427b09ee;
                  local_128 = &LAB_147f29feb;
                  local_130 = FUN_1464384fe;
                  local_138 = L"Engine";
                  local_140 = 0;
                  local_148 = 0x10004001;
                  local_150 = 8;
                  local_158 = 0x28;
                  local_120 = &local_e8;
                  FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                }
                plVar9 = (longlong *)FUN_144718840(plVar8,DAT_14cb223d8);
                bVar2 = false;
                if ((plVar8 == plVar9) || (bVar2 = false, plVar9 == (longlong *)0x0))
                goto LAB_14188b269;
                lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
                if (lVar10 != 0) {
                  if (*(longlong **)(lVar10 + 0x18) == (longlong *)0x0) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = (**(code **)(**(longlong **)(lVar10 + 0x18) + 0x180))();
                  }
                  FUN_140154c96(&local_e8,lVar6);
                  iVar4 = FUN_1448618b0(lVar10 + 0x20,&local_e8,uVar5);
                  unaff_RBX = (longlong *)CONCAT71((int7)((ulonglong)uVar5 >> 8),iVar4 != 0);
                }
              }
              bVar2 = false;
            }
          }
LAB_14188b269:
          (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])();
          (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_50])();
          if (!bVar2) goto LAB_14188b297;
        }
      }
    }
  }
  unaff_RBX = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
LAB_14188b297:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 14188b85c FUN_14188b85c body=3378 status=ok
// SIG undefined FUN_14188b85c(void)

ulonglong FUN_14188b85c(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  bool bVar7;
  double dVar8;
  uint uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  double *pdVar16;
  double *pdVar17;
  float *pfVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  longlong *plVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  longlong *local_170;
  code *local_168;
  longlong lStack_160;
  longlong local_158;
  code *local_148;
  longlong lStack_140;
  longlong local_138;
  code *local_128;
  longlong lStack_120;
  longlong local_118;
  code *local_110;
  longlong local_108 [7];
  byte local_d0;
  longlong local_c8 [7];
  byte local_90;
  ulonglong local_88 [7];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar12 = *(longlong *)(param_1 + 0x30);
  if (lVar12 == 0) {
    uVar11 = FUN_140490c9a();
    lVar12 = FUN_14477b664(uVar11);
    *(longlong *)(param_1 + 0x30) = lVar12;
  }
  plVar15 = (longlong *)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((lVar12 != 0) && (*plVar15 != 0)) {
      plVar2 = *(longlong **)(lVar12 + 0xb8);
      plVar22 = plVar1;
      if ((plVar2 == (longlong *)0x0) ||
         (cVar10 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar10 == '\0')) {
LAB_14188c556:
        *plVar22 = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar12 = FUN_144aff482(uVar11,plVar15);
        *plVar1 = lVar12;
        if (lVar12 != 0) goto LAB_14188b8a7;
      }
    }
  }
  else {
LAB_14188b8a7:
    lVar12 = *(longlong *)(param_1 + 0x48);
    if (lVar12 == 0) {
      uVar11 = FUN_140490c9a();
      lVar12 = FUN_14477b664(uVar11);
      *(longlong *)(param_1 + 0x48) = lVar12;
    }
    plVar2 = (longlong *)(param_1 + 0x40);
    plVar3 = (longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((lVar12 != 0) && (*plVar2 != 0)) {
        plVar6 = *(longlong **)(lVar12 + 0xb8);
        plVar22 = plVar3;
        if ((plVar6 == (longlong *)0x0) ||
           (cVar10 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar10 == '\0')) goto LAB_14188c556;
        uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar12 = FUN_144aff482(uVar11,plVar2);
        *plVar3 = lVar12;
        if (lVar12 != 0) goto LAB_14188b8c7;
      }
    }
    else {
LAB_14188b8c7:
      lVar12 = *(longlong *)(param_1 + 0x60);
      if (lVar12 == 0) {
        uVar11 = FUN_140490c9a();
        lVar12 = FUN_14477b664(uVar11);
        *(longlong *)(param_1 + 0x60) = lVar12;
      }
      local_170 = (longlong *)(param_1 + 0x58);
      plVar22 = (longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        if ((lVar12 != 0) && (*local_170 != 0)) {
          plVar6 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar6 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar10 == '\0')) goto LAB_14188c556;
          uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
          lVar12 = FUN_144aff482(uVar11,local_170);
          *plVar22 = lVar12;
          if (lVar12 != 0) goto LAB_14188b8ec;
        }
      }
      else {
LAB_14188b8ec:
        lVar12 = *(longlong *)(param_1 + 0x30);
        if (lVar12 == 0) {
          uVar11 = FUN_140490c9a();
          lVar12 = FUN_14477b664(uVar11);
          *(longlong *)(param_1 + 0x30) = lVar12;
        }
        lVar14 = *plVar1;
        if (((lVar14 == 0) && (lVar14 = 0, lVar12 != 0)) && (*plVar15 != 0)) {
          plVar6 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar6 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar10 == '\0')) {
            lVar14 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar14 = FUN_144aff482(uVar11,plVar15);
          }
          *plVar1 = lVar14;
        }
        if (*(char *)(lVar14 + 0x18) == '\x01') {
          lVar12 = *(longlong *)(param_1 + 0x48);
          if (lVar12 == 0) {
            uVar11 = FUN_140490c9a();
            lVar12 = FUN_14477b664(uVar11);
            *(longlong *)(param_1 + 0x48) = lVar12;
          }
          lVar14 = *plVar3;
          if (((lVar14 == 0) && (lVar14 = 0, lVar12 != 0)) && (*plVar2 != 0)) {
            plVar6 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar10 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar10 == '\0')) {
              lVar14 = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar14 = FUN_144aff482(uVar11,plVar2);
            }
            *plVar3 = lVar14;
          }
          if (*(char *)(lVar14 + 0x18) == '\x01') {
            lVar12 = *(longlong *)(param_1 + 0x60);
            if (lVar12 == 0) {
              uVar11 = FUN_140490c9a();
              lVar12 = FUN_14477b664(uVar11);
              *(longlong *)(param_1 + 0x60) = lVar12;
            }
            lVar14 = *plVar22;
            if (((lVar14 == 0) && (lVar14 = 0, lVar12 != 0)) && (*local_170 != 0)) {
              plVar6 = *(longlong **)(lVar12 + 0xb8);
              if ((plVar6 == (longlong *)0x0) ||
                 (cVar10 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar10 == '\0')) {
                lVar14 = 0;
              }
              else {
                uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
                lVar14 = FUN_144aff482(uVar11,local_170);
              }
              *plVar22 = lVar14;
            }
            if (*(char *)(lVar14 + 0x18) == '\x05') {
              local_50 = 0;
              local_88[0] = 0;
              local_88[1] = 0;
              local_88[2] = 0;
              local_90 = 0;
              local_c8[0] = 0;
              local_c8[1] = 0;
              local_c8[2] = 0;
              local_d0 = 0;
              local_108[0] = 0;
              local_108[1] = 0;
              local_108[2] = 0;
              lVar12 = *(longlong *)(param_1 + 0x30);
              if (lVar12 == 0) {
                uVar11 = FUN_140490c9a();
                lVar12 = FUN_14477b664(uVar11);
                *(longlong *)(param_1 + 0x30) = lVar12;
              }
              lVar14 = *plVar1;
              if (((lVar14 == 0) && (lVar14 = 0, lVar12 != 0)) && (*plVar15 != 0)) {
                plVar6 = *(longlong **)(lVar12 + 0xb8);
                if ((plVar6 == (longlong *)0x0) ||
                   (cVar10 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar10 == '\0')) {
                  lVar14 = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar6 + 0x110))(plVar6);
                  lVar14 = FUN_144aff482(uVar11,plVar15);
                }
                *plVar1 = lVar14;
              }
              local_128 = (code *)0x0;
              lStack_120 = 0;
              local_118 = 0;
              uVar11 = FUN_140490c9a();
              lStack_120 = FUN_14477b664(uVar11);
              lVar12 = FUN_140490c9a();
              uVar11 = FUN_140490c9a();
              FUN_1402d1bfa(&local_148,uVar11,lVar14);
              if (local_128 != local_148) {
                local_118 = 0;
              }
              local_128 = local_148;
              lVar13 = FUN_140490c9a();
              if (lVar12 == 0) {
LAB_14188ba5a:
                lVar13 = lVar12;
              }
              else if (lVar13 == 0) {
                lVar13 = 0;
              }
              else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                       lVar13 + 0x30)) goto LAB_14188ba5a;
              if (lStack_120 != lVar13) {
                local_118 = 0;
              }
              uVar11 = FUN_14477b664(lVar13);
              lStack_120 = FUN_14477b664(uVar11);
              if ((lStack_120 != 0) && (local_128 != (code *)0x0)) {
                local_118 = lVar14;
              }
              cVar10 = FUN_140490d6e(param_2,&local_128,local_88);
              if (cVar10 == '\0') {
LAB_14188c1e7:
                bVar7 = true;
              }
              else {
                lVar12 = *(longlong *)(param_1 + 0x48);
                if (lVar12 == 0) {
                  uVar11 = FUN_140490c9a();
                  lVar12 = FUN_14477b664(uVar11);
                  *(longlong *)(param_1 + 0x48) = lVar12;
                }
                lVar14 = *plVar3;
                if (((lVar14 == 0) && (lVar14 = 0, lVar12 != 0)) && (*plVar2 != 0)) {
                  plVar15 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar15 == (longlong *)0x0) ||
                     (cVar10 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar10 == '\0')) {
                    lVar14 = 0;
                  }
                  else {
                    uVar11 = (**(code **)(*plVar15 + 0x110))(plVar15);
                    lVar14 = FUN_144aff482(uVar11,plVar2);
                  }
                  *plVar3 = lVar14;
                }
                local_148 = (code *)0x0;
                lStack_140 = 0;
                local_138 = 0;
                uVar11 = FUN_140490c9a();
                lStack_140 = FUN_14477b664(uVar11);
                lVar12 = FUN_140490c9a();
                uVar11 = FUN_140490c9a();
                FUN_1402d1bfa(&local_110,uVar11,lVar14);
                if (local_148 != local_110) {
                  local_138 = 0;
                }
                local_148 = local_110;
                lVar13 = FUN_140490c9a();
                if (lVar12 == 0) {
LAB_14188bb76:
                  lVar13 = lVar12;
                }
                else if (lVar13 == 0) {
                  lVar13 = 0;
                }
                else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                         lVar13 + 0x30)) goto LAB_14188bb76;
                if (lStack_140 != lVar13) {
                  local_138 = 0;
                }
                uVar11 = FUN_14477b664(lVar13);
                lStack_140 = FUN_14477b664(uVar11);
                if ((lStack_140 != 0) && (local_148 != (code *)0x0)) {
                  local_138 = lVar14;
                }
                cVar10 = FUN_140490d6e(param_2,&local_148,local_c8);
                if (cVar10 == '\0') goto LAB_14188c1e7;
                lVar12 = *(longlong *)(param_1 + 0x60);
                if (lVar12 == 0) {
                  uVar11 = FUN_140490c9a();
                  lVar12 = FUN_14477b664(uVar11);
                  *(longlong *)(param_1 + 0x60) = lVar12;
                }
                lVar14 = *plVar22;
                if (((lVar14 == 0) && (lVar14 = 0, lVar12 != 0)) && (*local_170 != 0)) {
                  plVar15 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar15 == (longlong *)0x0) ||
                     (cVar10 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar10 == '\0')) {
                    lVar14 = 0;
                  }
                  else {
                    uVar11 = (**(code **)(*plVar15 + 0x110))(plVar15);
                    lVar14 = FUN_144aff482(uVar11,local_170);
                  }
                  *plVar22 = lVar14;
                }
                local_168 = (code *)0x0;
                lStack_160 = 0;
                local_158 = 0;
                uVar11 = FUN_140490c9a();
                lStack_160 = FUN_14477b664(uVar11);
                lVar12 = FUN_140490c9a();
                uVar11 = FUN_140490c9a();
                FUN_1402d1bfa(&local_110,uVar11,lVar14);
                if (local_168 != local_110) {
                  local_158 = 0;
                }
                local_168 = local_110;
                lVar13 = FUN_140490c9a();
                if (lVar12 == 0) {
LAB_14188bc8e:
                  lVar13 = lVar12;
                }
                else if (lVar13 == 0) {
                  lVar13 = 0;
                }
                else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                         lVar13 + 0x30)) goto LAB_14188bc8e;
                if (lStack_160 != lVar13) {
                  local_158 = 0;
                }
                uVar11 = FUN_14477b664(lVar13);
                lStack_160 = FUN_14477b664(uVar11);
                if ((local_110 != (code *)0x0) && (lStack_160 != 0)) {
                  local_158 = lVar14;
                }
                cVar10 = FUN_140490d6e(param_2,&local_168,local_108);
                uVar19 = local_88[0];
                if (cVar10 == '\0') goto LAB_14188c1e7;
                if ((local_50 == 1) && (local_88[0] != 0)) {
                  if (DAT_14cac9ca8 == 0) {
                    local_128 = FUN_141030f22;
                    local_180 = FUN_14081d0ea;
                    local_188 = FUN_14081d0ea;
                    local_198 = &LAB_1478c0a72;
                    local_1a0 = &LAB_1417b2375;
                    local_1a8 = L"Engine";
                    local_1b0 = 0x1000000000;
                    local_1b8 = 0x10000004;
                    local_1c0 = 8;
                    local_1c8 = 0x390;
                    local_190 = &local_128;
                    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                  }
                  if ((*(int *)(*(longlong *)(uVar19 + 0x10) + 0x38) <
                       *(int *)(DAT_14cac9ca8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(uVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
                  goto LAB_14188bf72;
                }
                else {
LAB_14188bf72:
                  uVar19 = 0;
                }
                lVar12 = local_c8[0];
                if ((local_90 == 1) && (local_c8[0] != 0)) {
                  if (DAT_14cac9ca8 == 0) {
                    local_128 = FUN_141030f22;
                    local_180 = FUN_14081d0ea;
                    local_188 = FUN_14081d0ea;
                    local_198 = &LAB_1478c0a72;
                    local_1a0 = &LAB_1417b2375;
                    local_1a8 = L"Engine";
                    local_1b0 = 0x1000000000;
                    local_1b8 = 0x10000004;
                    local_1c0 = 8;
                    local_1c8 = 0x390;
                    local_190 = &local_128;
                    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                  }
                  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) <
                       *(int *)(DAT_14cac9ca8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
                  goto LAB_14188c1dd;
                }
                else {
LAB_14188c1dd:
                  lVar12 = 0;
                }
                lVar14 = FUN_140316ff8();
                if (*(int *)(lVar14 + 0x3f0) != *(int *)(lVar14 + 0x41c)) {
                  uVar9 = (uint)((ulonglong)local_108[0] >> 0x10);
                  uVar20 = (uint)local_108[0] & 0xffff;
                  lVar13 = lVar14 + 0x420;
                  if (*(longlong *)(lVar14 + 0x428) != 0) {
                    lVar13 = *(longlong *)(lVar14 + 0x428);
                  }
                  iVar21 = *(int *)(lVar13 + (ulonglong)
                                             (*(int *)(lVar14 + 0x430) - 1U &
                                             (int)((ulonglong)local_108[0] >> 0x20) +
                                             ((uint)local_108[0] << 0x10 | uVar20) +
                                             (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar20 >> 4)) * 4);
                  if (iVar21 != -1) {
                    do {
                      plVar15 = (longlong *)(*(longlong *)(lVar14 + 1000) + (longlong)iVar21 * 0x18)
                      ;
                      if (*plVar15 == local_108[0]) goto LAB_14188be30;
                      iVar21 = (int)plVar15[2];
                    } while (iVar21 != -1);
                  }
                }
                plVar15 = (longlong *)0x0;
LAB_14188be30:
                pfVar18 = (float *)(plVar15 + 1);
                if (plVar15 == (longlong *)0x0) {
                  pfVar18 = (float *)0x0;
                }
                param_2 = uVar19;
                if (((uVar19 == 0) || (lVar12 == 0)) || (pfVar18 == (float *)0x0))
                goto LAB_14188c1e7;
                fVar4 = *pfVar18;
                fVar5 = pfVar18[1];
                if (fVar5 < fVar4) goto LAB_14188c1e7;
                if (fVar5 * fVar5 < fVar4 * fVar4) goto LAB_14188c1e7;
                lVar14 = *(longlong *)(uVar19 + 0x1c8);
                if (lVar14 == 0) {
                  pdVar16 = (double *)&DAT_14c8464e0;
                  dVar8 = DAT_14c8464f0;
                }
                else {
                  pdVar16 = (double *)(lVar14 + 0x260);
                  dVar8 = *(double *)(lVar14 + 0x270);
                }
                lVar12 = *(longlong *)(lVar12 + 0x1c8);
                if (lVar12 == 0) {
                  pdVar17 = (double *)&DAT_14c8464e0;
                  dVar24 = DAT_14c8464f0;
                }
                else {
                  pdVar17 = (double *)(lVar12 + 0x260);
                  dVar24 = *(double *)(lVar12 + 0x270);
                }
                fVar23 = (float)((dVar24 - dVar8) * (dVar24 - dVar8) +
                                (*pdVar17 - *pdVar16) * (*pdVar17 - *pdVar16) +
                                (pdVar17[1] - pdVar16[1]) * (pdVar17[1] - pdVar16[1]));
                param_2 = (ulonglong)-(uint)(fVar5 * fVar5 < fVar23 || fVar23 < fVar4 * fVar4) &
                          0xffffffffffffff01;
                bVar7 = false;
              }
              (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_d0])();
              (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])();
              (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_50])();
              if (!bVar7) goto LAB_14188bf2e;
            }
          }
        }
      }
    }
  }
  param_2 = CONCAT71((int7)(param_2 >> 8),2);
LAB_14188bf2e:
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 & 0xffffffff;
}



// FUNCTION 14188c590 FUN_14188c590 body=2322 status=ok
// SIG undefined FUN_14188c590(void)

ulonglong FUN_14188c590(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  byte local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = param_1[6];
  if (lVar5 == 0) {
    uVar4 = FUN_140490c9a();
    lVar5 = FUN_14477b664(uVar4);
    param_1[6] = lVar5;
  }
  plVar7 = param_1 + 5;
  plVar10 = param_1 + 7;
  if (param_1[7] == 0) {
    if ((lVar5 != 0) && (*plVar7 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      plVar9 = plVar10;
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
LAB_14188ce6f:
        *plVar9 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,plVar7);
        *plVar10 = lVar5;
        if (lVar5 != 0) goto LAB_14188c5db;
      }
    }
  }
  else {
LAB_14188c5db:
    lVar5 = param_1[9];
    if (lVar5 == 0) {
      uVar4 = FUN_140490c9a();
      lVar5 = FUN_14477b664(uVar4);
      param_1[9] = lVar5;
    }
    plVar1 = param_1 + 8;
    plVar9 = param_1 + 10;
    if (param_1[10] == 0) {
      if ((lVar5 != 0) && (*plVar1 != 0)) {
        plVar8 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) goto LAB_14188ce6f;
        uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *plVar9 = lVar5;
        if (lVar5 != 0) goto LAB_14188c5fb;
      }
    }
    else {
LAB_14188c5fb:
      lVar5 = param_1[6];
      if (lVar5 == 0) {
        uVar4 = FUN_140490c9a();
        lVar5 = FUN_14477b664(uVar4);
        param_1[6] = lVar5;
      }
      lVar6 = *plVar10;
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar7 != 0)) {
        plVar8 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar6 = FUN_144aff482(uVar4,plVar7);
        }
        *plVar10 = lVar6;
      }
      if (*(char *)(lVar6 + 0x18) == '\0') {
        lVar5 = param_1[9];
        if (lVar5 == 0) {
          uVar4 = FUN_140490c9a();
          lVar5 = FUN_14477b664(uVar4);
          param_1[9] = lVar5;
        }
        lVar6 = *plVar9;
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar8 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *plVar9 = lVar6;
        }
        if (*(char *)(lVar6 + 0x18) == '\0') {
          local_50 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = (longlong *)0x0;
          local_90 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = (longlong *)0x0;
          lVar5 = param_1[6];
          if (lVar5 == 0) {
            uVar4 = FUN_140490c9a();
            lVar5 = FUN_14477b664(uVar4);
            param_1[6] = lVar5;
          }
          plVar8 = (longlong *)*plVar10;
          if (((plVar8 == (longlong *)0x0) && (plVar8 = (longlong *)0x0, lVar5 != 0)) &&
             (*plVar7 != 0)) {
            plVar8 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar8 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
              plVar8 = (longlong *)0x0;
            }
            else {
              uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
              plVar8 = (longlong *)FUN_144aff482(uVar4,plVar7);
            }
            *plVar10 = (longlong)plVar8;
          }
          local_e8 = 0;
          lStack_e0 = 0;
          local_d8 = (longlong *)0x0;
          uVar4 = FUN_140490c9a();
          lStack_e0 = FUN_14477b664(uVar4);
          lVar5 = FUN_140490c9a();
          uVar4 = FUN_140490c9a();
          FUN_1402d1bfa(&local_108,uVar4,plVar8);
          if (local_e8 != local_108) {
            local_d8 = (longlong *)0x0;
          }
          local_e8 = local_108;
          lVar6 = FUN_140490c9a();
          if (lVar5 == 0) {
LAB_14188c714:
            lVar6 = lVar5;
          }
          else if (lVar6 == 0) {
            lVar6 = 0;
          }
          else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                   == lVar6 + 0x30)) goto LAB_14188c714;
          if (lStack_e0 != lVar6) {
            local_d8 = (longlong *)0x0;
          }
          uVar4 = FUN_14477b664(lVar6);
          lStack_e0 = FUN_14477b664(uVar4);
          if ((lStack_e0 != 0) && (local_e8 != 0)) {
            local_d8 = plVar8;
          }
          cVar3 = FUN_140490d6e(param_2,&local_e8,&local_88);
          if (cVar3 == '\0') {
LAB_14188caad:
            bVar2 = true;
          }
          else {
            lVar5 = param_1[9];
            if (lVar5 == 0) {
              uVar4 = FUN_140490c9a();
              lVar5 = FUN_14477b664(uVar4);
              param_1[9] = lVar5;
            }
            param_1 = (longlong *)*plVar9;
            if (((param_1 == (longlong *)0x0) && (param_1 = (longlong *)0x0, lVar5 != 0)) &&
               (*plVar1 != 0)) {
              plVar7 = *(longlong **)(lVar5 + 0xb8);
              if ((plVar7 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
                param_1 = (longlong *)0x0;
              }
              else {
                uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
                param_1 = (longlong *)FUN_144aff482(uVar4,plVar1);
              }
              *plVar9 = (longlong)param_1;
            }
            local_108 = 0;
            plStack_100 = (longlong *)0x0;
            local_f8 = (longlong *)0x0;
            uVar4 = FUN_140490c9a();
            plStack_100 = (longlong *)FUN_14477b664(uVar4);
            lVar5 = FUN_140490c9a();
            uVar4 = FUN_140490c9a();
            FUN_1402d1bfa(&local_d0,uVar4,param_1);
            if (local_108 != local_d0) {
              local_f8 = (longlong *)0x0;
            }
            local_108 = local_d0;
            lVar6 = FUN_140490c9a();
            if (lVar5 == 0) {
LAB_14188c808:
              lVar6 = lVar5;
            }
            else if (lVar6 == 0) {
              lVar6 = 0;
            }
            else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                     lVar6 + 0x30)) goto LAB_14188c808;
            if (plStack_100 != (longlong *)lVar6) {
              local_f8 = (longlong *)0x0;
            }
            uVar4 = FUN_14477b664(lVar6);
            plStack_100 = (longlong *)FUN_14477b664(uVar4);
            if ((plStack_100 != (longlong *)0x0) && (local_108 != 0)) {
              local_f8 = param_1;
            }
            cVar3 = FUN_140490d6e(param_2,&local_108,&local_c8);
            if (cVar3 == '\0') goto LAB_14188caad;
            local_e8 = local_88;
            uVar4 = FUN_14477b664(uStack_80);
            lStack_e0 = FUN_14477b664(uVar4);
            lVar5 = local_c8;
            local_d8 = local_78;
            local_108 = local_c8;
            uVar4 = FUN_14477b664(uStack_c0);
            param_1 = (longlong *)FUN_14477b664(uVar4);
            plVar7 = local_b8;
            local_f8 = local_b8;
            plStack_100 = param_1;
            if (lStack_e0 == 0) {
              uVar4 = FUN_14043db3a();
              lStack_e0 = FUN_14477b664(uVar4);
            }
            if (local_d8 == (longlong *)0x0) {
              if ((((lStack_e0 != 0) && (local_e8 != 0)) &&
                  (plVar10 = *(longlong **)(lStack_e0 + 0xb8), plVar10 != (longlong *)0x0)) &&
                 (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 != '\0')) {
                uVar4 = (**(code **)(*plVar10 + 0x110))(plVar10);
                local_d8 = (longlong *)FUN_144aff482(uVar4,&local_e8);
                if (local_d8 != (longlong *)0x0) goto LAB_14188c8d3;
              }
              goto LAB_14188caad;
            }
LAB_14188c8d3:
            if (param_1 == (longlong *)0x0) {
              uVar4 = FUN_14043db3a();
              param_1 = (longlong *)FUN_14477b664(uVar4);
              plStack_100 = param_1;
            }
            plVar10 = param_1;
            if (plVar7 == (longlong *)0x0) {
              local_f8 = (longlong *)0x0;
              if (((lVar5 != 0) && (param_1 != (longlong *)0x0)) &&
                 ((plVar7 = (longlong *)param_1[0x17], plVar7 != (longlong *)0x0 &&
                  (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 != '\0')))) {
                uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
                param_1 = &local_108;
                plVar7 = (longlong *)FUN_144aff482(uVar4,param_1);
                plVar10 = plStack_100;
                local_f8 = plVar7;
                if (plVar7 != (longlong *)0x0) goto LAB_14188c954;
              }
              goto LAB_14188caad;
            }
LAB_14188c954:
            if (plVar10 == (longlong *)0x0) {
              uVar4 = FUN_14043db3a();
              plStack_100 = (longlong *)FUN_14477b664(uVar4);
              plVar7 = local_f8;
              if (((local_f8 == (longlong *)0x0) &&
                  (plVar7 = (longlong *)0x0, plStack_100 != (longlong *)0x0)) && (local_108 != 0)) {
                plVar7 = (longlong *)plStack_100[0x17];
                if ((plVar7 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
                  plVar7 = (longlong *)0x0;
                  local_f8 = plVar7;
                }
                else {
                  uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
                  plVar7 = (longlong *)FUN_144aff482(uVar4,&local_108);
                  local_f8 = plVar7;
                }
              }
            }
            if (lStack_e0 == 0) {
              uVar4 = FUN_14043db3a();
              lStack_e0 = FUN_14477b664(uVar4);
            }
            plVar9 = local_d8;
            param_1 = plVar10;
            if (local_d8 == (longlong *)0x0) {
              bVar2 = false;
              param_1 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
              if ((lStack_e0 != 0) && (local_e8 != 0)) {
                plVar10 = *(longlong **)(lStack_e0 + 0xb8);
                if ((plVar10 != (longlong *)0x0) &&
                   (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 != '\0')) {
                  uVar4 = (**(code **)(*plVar10 + 0x110))(plVar10);
                  plVar9 = (longlong *)FUN_144aff482(uVar4,&local_e8);
                  if (plVar9 != (longlong *)0x0) goto LAB_14188c979;
                }
                goto LAB_14188c989;
              }
            }
            else {
LAB_14188c979:
              if (plVar7 == plVar9) {
                param_1 = (longlong *)0x0;
              }
              else {
                param_1 = (longlong *)
                          CONCAT71((int7)((ulonglong)param_1 >> 8),
                                   (longlong *)plVar7[0x14] != plVar9);
              }
LAB_14188c989:
              bVar2 = false;
            }
          }
          (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])();
          (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_50])();
          if (!bVar2) goto LAB_14188c9b6;
        }
      }
    }
  }
  param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),2);
LAB_14188c9b6:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_1 & 0xffffffff;
}



// FUNCTION 14188cea4 FUN_14188cea4 body=880 status=ok
// SIG undefined FUN_14188cea4(void)

ulonglong FUN_14188cea4(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong lStack_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 == 0) {
    uVar4 = FUN_140490c9a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x30) = lVar5;
  }
  plVar7 = (longlong *)(param_1 + 0x28);
  plVar9 = *(longlong **)(param_1 + 0x38);
  if (plVar9 == (longlong *)0x0) {
    if ((lVar5 != 0) && (*plVar7 != 0)) {
      plVar9 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
        plVar8 = (longlong *)FUN_144aff482(uVar4,plVar7);
        *(longlong **)(param_1 + 0x38) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          lVar5 = *(longlong *)(param_1 + 0x30);
          plVar9 = plVar8;
          goto LAB_14188cee6;
        }
      }
    }
  }
  else {
LAB_14188cee6:
    if (lVar5 == 0) {
      uVar4 = FUN_140490c9a();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x30) = lVar5;
      plVar9 = *(longlong **)(param_1 + 0x38);
      if (((plVar9 == (longlong *)0x0) && (plVar9 = (longlong *)0x0, lVar5 != 0)) && (*plVar7 != 0))
      {
        plVar9 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar2 == '\0')) {
          plVar9 = (longlong *)0x0;
        }
        else {
          uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
          plVar9 = (longlong *)FUN_144aff482(uVar4,plVar7);
        }
        *(longlong **)(param_1 + 0x38) = plVar9;
      }
    }
    if ((char)plVar9[3] == '\x01') {
      local_30 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (lVar5 == 0) {
        uVar4 = FUN_140490c9a();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x30) = lVar5;
        plVar9 = *(longlong **)(param_1 + 0x38);
      }
      if (plVar9 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        plVar9 = (longlong *)0x0;
        if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
          plVar9 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar9 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar2 == '\0')) {
            plVar9 = (longlong *)0x0;
          }
          else {
            uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
            plVar9 = (longlong *)FUN_144aff482(uVar4,plVar7);
          }
          *(longlong **)(param_1 + 0x38) = plVar9;
        }
      }
      local_88 = 0;
      lStack_80 = 0;
      local_78 = (longlong *)0x0;
      uVar4 = FUN_140490c9a();
      lStack_80 = FUN_14477b664(uVar4);
      lVar5 = FUN_140490c9a();
      uVar4 = FUN_140490c9a();
      FUN_1402d1bfa(&local_70,uVar4,plVar9);
      if (local_88 != local_70) {
        local_78 = (longlong *)0x0;
      }
      local_88 = local_70;
      lVar6 = FUN_140490c9a();
      if (lVar5 == 0) {
LAB_14188cfad:
        lVar6 = lVar5;
      }
      else if (lVar6 == 0) {
        lVar6 = 0;
      }
      else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)) goto LAB_14188cfad;
      if (lStack_80 != lVar6) {
        local_78 = (longlong *)0x0;
      }
      uVar4 = FUN_14477b664(lVar6);
      lStack_80 = FUN_14477b664(uVar4);
      if ((local_70 != 0) && (lStack_80 != 0)) {
        local_78 = plVar9;
      }
      cVar2 = FUN_140490d6e(param_2,&local_88,&local_68);
      bVar1 = true;
      if (cVar2 != '\0') {
        uVar4 = local_68;
        if (local_30 != 1) {
          uVar4 = 0;
        }
        plVar7 = (longlong *)FUN_14017698e(uVar4);
        if ((plVar7 != (longlong *)0x0) &&
           (lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar5 != 0)) {
          bVar1 = false;
          uVar3 = FUN_14017695c(lVar5,0);
          plVar9 = (longlong *)((ulonglong)uVar3 ^ 1);
        }
      }
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_30])();
      if (!bVar1) goto LAB_14188d04d;
    }
  }
  plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),2);
LAB_14188d04d:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar9 & 0xffffffff;
}



// FUNCTION 14188d216 FUN_14188d216 body=1254 status=ok
// SIG undefined FUN_14188d216(void)

ulonglong FUN_14188d216(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_98;
  undefined4 uStack_94;
  int local_90;
  void *local_88;
  ulonglong uStack_80;
  longlong local_78;
  longlong local_68 [7];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    uVar5 = FUN_140490c9a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x30) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_1 + 0x38);
  if (lVar10 == 0) {
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar8 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar10 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0x38) = lVar10;
        if (lVar10 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x30);
          goto LAB_14188d258;
        }
      }
    }
  }
  else {
LAB_14188d258:
    if (lVar6 == 0) {
      uVar5 = FUN_140490c9a();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x30) = lVar6;
      lVar10 = *(longlong *)(param_1 + 0x38);
      if (((lVar10 == 0) && (lVar10 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar8 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar10 = FUN_144aff482(uVar5,plVar1);
        }
        *(longlong *)(param_1 + 0x38) = lVar10;
      }
    }
    if (*(char *)(lVar10 + 0x18) == '\x05') {
      local_30 = 0;
      local_68[0] = 0;
      local_68[1] = 0;
      local_68[2] = 0;
      lVar6 = *(longlong *)(param_1 + 0x30);
      if (lVar6 == 0) {
        uVar5 = FUN_140490c9a();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x30) = lVar6;
        lVar10 = *(longlong *)(param_1 + 0x38);
      }
      if (lVar10 == 0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        lVar10 = 0;
        if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
          plVar8 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar10 = FUN_144aff482(uVar5,plVar1);
          }
          *(longlong *)(param_1 + 0x38) = lVar10;
        }
      }
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_78 = 0;
      uVar5 = FUN_140490c9a();
      uStack_80 = FUN_14477b664(uVar5);
      lVar6 = FUN_140490c9a();
      uVar5 = FUN_140490c9a();
      FUN_1402d1bfa(&local_98,uVar5,lVar10);
      pvVar3 = (void *)CONCAT44(uStack_94,local_98);
      if (local_88 != pvVar3) {
        local_78 = 0;
      }
      local_88 = pvVar3;
      lVar7 = FUN_140490c9a();
      if (lVar6 == 0) {
LAB_14188d322:
        lVar7 = lVar6;
      }
      else if (lVar7 == 0) {
        lVar7 = 0;
      }
      else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) goto LAB_14188d322;
      if (uStack_80 != lVar7) {
        local_78 = 0;
      }
      uVar5 = FUN_14477b664(lVar7);
      uStack_80 = FUN_14477b664(uVar5);
      if ((pvVar3 != (void *)0x0) && (uStack_80 != 0)) {
        local_78 = lVar10;
      }
      cVar4 = FUN_140490d6e(param_2,&local_88,local_68);
      bVar13 = true;
      if ((cVar4 != '\0') &&
         (lVar6 = FUN_140316ff8(), *(int *)(lVar6 + 0x3a0) != *(int *)(lVar6 + 0x3cc))) {
        uVar2 = (uint)((ulonglong)local_68[0] >> 0x10);
        uVar12 = (uint)local_68[0] & 0xffff;
        lVar10 = lVar6 + 0x3d0;
        if (*(longlong *)(lVar6 + 0x3d8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 0x3d8);
        }
        iVar11 = *(int *)(lVar10 + (ulonglong)
                                   (*(int *)(lVar6 + 0x3e0) - 1U &
                                   (int)((ulonglong)local_68[0] >> 0x20) +
                                   ((uint)local_68[0] << 0x10 | uVar12) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4)) * 4);
        if (iVar11 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(lVar6 + 0x398) + (longlong)iVar11 * 0x28);
            if (*plVar1 == local_68[0]) {
              if (((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) != 0) {
                param_2 = param_2 + 4;
                uVar5 = FUN_14479d2ce(param_2);
                plVar8 = (longlong *)FUN_140d28a87(uVar5);
                if (plVar8 != (longlong *)0x0) {
                  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0xb8))(plVar8);
                  local_88 = (void *)0x0;
                  uVar2 = *(uint *)(puVar9 + 1);
                  pvVar3 = (void *)*puVar9;
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
                  if ((longlong)(int)uVar2 == 0) {
                    uStack_80 = (ulonglong)uVar2;
                  }
                  else {
                    FUN_1446dd7be(&local_88,uVar2,0);
                    memcpy(local_88,pvVar3,(longlong)(int)uVar2 * 0xc);
                  }
                  lVar6 = plVar1[1];
                  uVar5 = FUN_14477b664(plVar1[2]);
                  FUN_14477b664(uVar5);
                  param_2 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
                  local_a0 = lVar6;
                  FUN_1401533ba(&local_98,&local_a0,1);
                  if ((longlong)(int)uStack_80 != 0) {
                    lVar6 = 0;
                    do {
                      if (*(int *)((longlong)local_88 + lVar6) == local_98) {
                        param_2 = CONCAT71((int7)(param_2 >> 8),
                                           *(int *)((longlong)local_88 + lVar6 + 8) == local_90);
                      }
                      else {
                        param_2 = 0;
                      }
                    } while (((char)param_2 == '\0') &&
                            (bVar13 = (longlong)(int)uStack_80 * 0xc + -0xc != lVar6,
                            lVar6 = lVar6 + 0xc, bVar13));
                    param_2 = param_2 ^ 1;
                  }
                  if (local_88 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  bVar13 = false;
                }
              }
              break;
            }
            iVar11 = (int)plVar1[4];
          } while (iVar11 != -1);
        }
      }
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_30])();
      if (!bVar13) goto LAB_14188d529;
    }
  }
  param_2 = CONCAT71((int7)(param_2 >> 8),2);
LAB_14188d529:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 & 0xffffffff;
}



// FUNCTION 14188d6fe FUN_14188d6fe body=90 status=ok
// SIG undefined FUN_14188d6fe(void)

void FUN_14188d6fe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_140578a28();
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = *(longlong *)(lVar1 + 0x40);
  if (*(longlong *)(param_1 + 0x68) != lVar2) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(longlong *)(param_1 + 0x68) = lVar2;
  if (*(longlong *)(param_1 + 0x70) != *(longlong *)(lVar1 + 0x48)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  uVar3 = FUN_14477b664();
  uVar3 = FUN_14477b664(uVar3);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x50);
  return;
}



// FUNCTION 14188d758 FUN_14188d758 body=90 status=ok
// SIG undefined FUN_14188d758(void)

undefined8 * FUN_14188d758(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (DAT_14cb7ecf0 == param_3) {
    *(undefined2 *)(param_2 + 3) = 0x18;
    *param_2 = *(undefined8 *)(param_1 + 0x68);
    uVar1 = FUN_14477b664(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_14477b664(uVar1);
    param_2[1] = uVar1;
    param_2[2] = *(undefined8 *)(param_1 + 0x78);
    *(undefined1 *)(param_2 + 4) = 0x1d;
  }
  else {
    FUN_1470e498a(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 14188d7b2 FUN_14188d7b2 body=478 status=ok
// SIG undefined FUN_14188d7b2(void)

void FUN_14188d7b2(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  iVar2 = *(int *)(param_1 + 0xa8);
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar14 = 0;
    iVar11 = 0;
    iVar13 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x90);
    }
    uVar6 = *puVar4;
    if (uVar6 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar14;
      }
      iVar13 = 0;
      do {
        if (uVar10 == uVar14) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar6 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar13 = 0;
    }
    uVar10 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar10 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar11 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 != iVar2) {
    uVar6 = 0xffffffff;
    lVar5 = 0;
    do {
      lVar15 = *(longlong *)(param_1 + 0x80);
      lVar12 = (longlong)iVar11;
      iVar11 = *(int *)(lVar15 + 8 + lVar12 * 0x14);
      *(int *)(lVar15 + 8 + lVar12 * 0x14) = iVar11 + -1;
      if (iVar11 < 2) {
        lVar5 = *(longlong *)(lVar15 + lVar12 * 0x14);
      }
      uVar6 = uVar6 & ~(uint)uVar10;
      puVar4 = *(uint **)(param_1 + 0xa0);
      if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x90);
      }
      iVar3 = *(int *)(param_1 + 0xa8);
      iVar11 = (int)uVar14;
      lVar15 = (longlong)iVar11;
      uVar7 = puVar4[lVar15] & uVar6;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar11 < iVar8) {
          lVar12 = 0;
          do {
            uVar7 = puVar4[lVar15 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar11 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14188d8f2;
            }
            iVar13 = iVar13 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar15 != lVar12);
          uVar6 = 0xffffffff;
          lVar15 = (longlong)iVar9;
        }
        uVar14 = lVar15 + 1U & 0xffffffff;
        iVar11 = iVar3;
      }
      else {
LAB_14188d8f2:
        uVar10 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar10 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar11 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar11) {
          iVar11 = iVar3;
        }
      }
    } while (iVar11 != iVar2);
    if (lVar5 != 0) {
      FUN_140c0508e((longlong *)(param_1 + 0x80));
      return;
    }
  }
  return;
}



// FUNCTION 14188d990 FUN_14188d990 body=29 status=ok
// SIG undefined FUN_14188d990(void)

undefined8 FUN_14188d990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14188d9ae FUN_14188d9ae body=153 status=ok
// SIG undefined FUN_14188d9ae(void)

void FUN_14188d9ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b406e80;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_14477b664(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_14477b664(uVar2);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b406e10;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  return;
}



// FUNCTION 14188da48 FUN_14188da48 body=269 status=ok
// SIG undefined FUN_14188da48(void)

void FUN_14188da48(longlong param_1,int param_2)

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



// FUNCTION 14188db56 FUN_14188db56 body=98 status=ok
// SIG undefined FUN_14188db56(void)

void FUN_14188db56(longlong param_1)

{
  int iVar1;
  
  FUN_140d09b26();
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140bcbe96();
    if ((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 99) & 8) != 0)) {
      iVar1 = FUN_14487fd02();
      if ((iVar1 != 3) && (*(longlong *)(param_1 + 0xa8) != 0)) {
        FUN_140d4ff22(*(longlong *)(param_1 + 0xa8),param_1,*(undefined8 *)(param_1 + 0x118));
      }
    }
  }
  FUN_1400f80f0(param_1);
  return;
}



// FUNCTION 14188dbb8 FUN_14188dbb8 body=39 status=ok
// SIG undefined FUN_14188dbb8(void)

undefined4 FUN_14188dbb8(longlong param_1)

{
  FUN_144a3ee64();
  if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
    FUN_140d09d06(param_1);
  }
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 14188dbe0 FUN_14188dbe0 body=200 status=ok
// SIG undefined FUN_14188dbe0(void)

longlong FUN_14188dbe0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x108);
  if (lVar5 == 0) {
    uVar4 = FUN_14065b502();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x108) = lVar5;
  }
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 == 0) {
    if ((*(longlong *)(param_1 + 0x100) != 0) && (lVar5 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x110) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x100));
        *(longlong *)(param_1 + 0x110) = lVar5;
        if (lVar5 != 0) {
          return lVar5;
        }
      }
    }
    lVar3 = FUN_140317ef6(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar5 = FUN_14575395a();
      return lVar5;
    }
  }
  return lVar3;
}



// FUNCTION 14188dca8 FUN_14188dca8 body=56 status=ok
// SIG undefined FUN_14188dca8(void)

void FUN_14188dca8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    FUN_140316e34(param_1,1);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14188dce0 FUN_14188dce0 body=360 status=ok
// SIG undefined FUN_14188dce0(void)

longlong FUN_14188dce0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
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
  if (((((*(longlong **)(param_1 + 0x180) != (longlong *)0x0) && (*(int *)(param_1 + 0x17c) != 0))
       && (uVar1 = *(uint *)(param_1 + 0x178), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0)))) &&
     ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x17c) &&
      (((*(uint *)(lVar2 + 8) & 0x10200000) == 0 &&
       (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar2 != 0)))))) {
    if (DAT_14cb5b388 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146431698;
      local_38 = &LAB_1486775cb;
      local_40 = &LAB_1464cee35;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 0x10;
      local_68 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) goto LAB_14188dd78;
  }
  lVar2 = 0;
LAB_14188dd78:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14188de4a FUN_14188de4a body=370 status=ok
// SIG undefined FUN_14188de4a(void)

undefined8
FUN_14188de4a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = CONCAT44(local_78._4_4_,0x10000004);
      local_80 = CONCAT44(local_80._4_4_,8);
      local_88 = CONCAT44(local_88._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      plVar2 = (longlong *)FUN_1405f1c0c(lVar1);
      if (plVar2 != (longlong *)0x0) {
        local_80 = param_5;
        local_88 = param_4;
        local_78 = param_1;
        (**(code **)(*plVar2 + 0x328))(plVar2,lVar1,param_2,param_3);
        uVar3 = 1;
        goto LAB_14188def3;
      }
    }
  }
  uVar3 = 0;
LAB_14188def3:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


