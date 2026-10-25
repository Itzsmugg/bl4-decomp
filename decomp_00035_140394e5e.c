// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140394e5e FUN_140394e5e body=197 status=ok
// SIG undefined FUN_140394e5e(void)

void FUN_140394e5e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  uVar13 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar13 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 == -1) {
      uVar13 = 0;
    }
    else {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_145707770(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          break;
        }
        iVar15 = piVar1[0xc];
        uVar13 = 0;
      } while (iVar15 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 140394f24 FUN_140394f24 body=466 status=ok
// SIG undefined FUN_140394f24(void)

int * FUN_140394f24(longlong *param_1,int *param_2)

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



// FUNCTION 1403950f6 FUN_1403950f6 body=55 status=ok
// SIG undefined FUN_1403950f6(void)

void FUN_1403950f6(longlong *param_1)

{
  FUN_14039512e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14039512e FUN_14039512e body=121 status=ok
// SIG undefined FUN_14039512e(void)

void FUN_14039512e(longlong param_1,int param_2)

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



// FUNCTION 1403951a8 FUN_1403951a8 body=373 status=ok
// SIG undefined FUN_1403951a8(void)

void FUN_1403951a8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140395231;
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
LAB_140395231:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 14039531e FUN_14039531e body=317 status=ok
// SIG undefined FUN_14039531e(void)

undefined4 *
FUN_14039531e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
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
  FUN_140394f24(param_1,local_50);
  puVar1 = (undefined2 *)param_3[1];
  FUN_1447a97f4(local_48,*param_3);
  *(undefined2 *)(local_48 + 10) = *puVar1;
  local_48[0xc] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_140394e5e(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
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
      local_48[0xd] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[0xc] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140395db0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039545c FUN_14039545c body=325 status=ok
// SIG undefined FUN_14039545c(void)

undefined4 *
FUN_14039545c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140395610(param_1,local_50);
  puVar1 = (undefined2 *)param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  *(undefined2 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = FUN_144972764(local_48);
  local_68 = param_4;
  cVar2 = FUN_1403955a2(param_1,uVar3,local_48,&local_54);
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14039602e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403955a2 FUN_1403955a2 body=109 status=ok
// SIG undefined FUN_1403955a2(void)

void FUN_1403955a2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar6 = FUN_140394cb2();
    if (iVar6 != -1) {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x18);
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_14709f1d6(param_1,*param_4,1);
      *param_4 = iVar6;
      uVar5 = 1;
      goto LAB_1403955d1;
    }
  }
  uVar5 = 0;
LAB_1403955d1:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140395610 FUN_140395610 body=230 status=ok
// SIG undefined FUN_140395610(void)

int * FUN_140395610(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1403956f6 FUN_1403956f6 body=55 status=ok
// SIG undefined FUN_1403956f6(void)

void FUN_1403956f6(longlong *param_1)

{
  FUN_140395786(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14039572e FUN_14039572e body=87 status=ok
// SIG undefined FUN_14039572e(void)

undefined8 FUN_14039572e(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 < 4) {
    iVar4 = 1;
  }
  else {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_140395db0(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140395786 FUN_140395786 body=127 status=ok
// SIG undefined FUN_140395786(void)

void FUN_140395786(longlong param_1,int param_2)

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
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
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



// FUNCTION 140395806 FUN_140395806 body=226 status=ok
// SIG undefined FUN_140395806(void)

void FUN_140395806(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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



// FUNCTION 1403958e8 FUN_1403958e8 body=307 status=ok
// SIG undefined FUN_1403958e8(void)

void FUN_1403958e8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    uVar9 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar7 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar5 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar11 = uVar9 == 0;
      uVar9 = uVar9 - 1;
      if (bVar11) goto LAB_140395964;
      iVar7 = iVar7 + 0x20;
      uVar10 = uVar5 & *(uint *)((longlong)plVar6 + uVar9 * 4);
      uVar5 = 0xffffffff;
    } while (uVar10 == 0);
    uVar9 = (ulonglong)uVar10 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = -(((uint)lVar3 ^ 0x3f) + iVar7);
  }
LAB_140395964:
  iVar1 = iVar4 + 1;
  iVar7 = (int)param_1[1];
  if (iVar1 < iVar7) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar9 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        iVar7 = (int)uVar9;
        if (iVar4 < iVar7) {
          lVar8 = (longlong)iVar7 * 0x38;
          iVar7 = *(int *)(lVar3 + lVar8);
          iVar2 = *(int *)(lVar3 + 4 + lVar8);
          uVar9 = (ulonglong)iVar2;
          if (uVar9 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar9 * 0x38) = iVar7;
          }
          if (iVar7 == -1) {
            *(int *)(param_1 + 6) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x38) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar9 = (ulonglong)*(uint *)(lVar3 + 4 + (longlong)iVar7 * 0x38);
        }
      } while ((int)uVar9 != -1);
      iVar7 = (int)param_1[1];
    }
    if (iVar7 != iVar1) {
      *(int *)(param_1 + 1) = iVar1;
    }
    FUN_144a6134a(param_1 + 2,iVar1,(int)param_1[5] - iVar1);
    iVar7 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar7) {
    return;
  }
  FUN_144748838(param_1,iVar7);
  return;
}



// FUNCTION 140395a1c FUN_140395a1c body=457 status=ok
// SIG undefined FUN_140395a1c(void)

void FUN_140395a1c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_144748838(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_1447030e2(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(uVar8 * 0x38 + lVar2 + -0x34);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -0xe;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 140395be6 FUN_140395be6 body=458 status=ok
// SIG undefined FUN_140395be6(void)

void FUN_140395be6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_14482b872(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + uVar8 * 0x18 + -0x14);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -6;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 140395db0 FUN_140395db0 body=638 status=ok
// SIG undefined FUN_140395db0(void)

void FUN_140395db0(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140395e13;
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
LAB_140395e13:
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
      lVar13 = (longlong)iVar12 * 0x38;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x34 + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x30 + lVar13) =
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



// FUNCTION 14039602e FUN_14039602e body=609 status=ok
// SIG undefined FUN_14039602e(void)

void FUN_14039602e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
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
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0);
    }
LAB_140396075:
    uVar4 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    if (uVar8 == 0) goto LAB_140396167;
    FUN_1446efa72(plVar6,0);
    if (0 < (int)uVar8) goto LAB_140396075;
  }
  local_50 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_54 = 1;
  if (iVar2 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_50;
    }
    uVar8 = *puVar9;
    if (uVar8 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar7 = 0;
      uVar5 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar5 = uVar7;
      }
      local_58 = (int)uVar5 + 1;
      local_40 = (int)uVar5 * 0x20 + 0x20;
      iVar10 = 0;
      do {
        local_44 = iVar2;
        if (uVar5 == uVar7) goto LAB_140396139;
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar9[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar8 == 0);
      local_58 = (int)uVar7;
      local_40 = iVar10;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar8 & uVar8;
    uVar5 = (ulonglong)local_54 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_44) {
      local_44 = iVar2;
    }
  }
LAB_140396139:
  local_48 = 0xffffffff;
  local_60 = param_1;
  if (local_44 < iVar2) {
    do {
      iVar2 = local_44;
      lVar3 = *local_60 + (longlong)local_44 * 0x18;
      iVar10 = FUN_144972764(lVar3);
      uVar5 = (longlong)iVar10 & (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar5;
      *(int *)(lVar3 + 0x14) = iVar10;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar3 + 0x10) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar2;
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
LAB_140396167:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140396290 FUN_140396290 body=149 status=ok
// SIG undefined FUN_140396290(void)

ulonglong FUN_140396290(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar2 = CONCAT71(uVar3,1);
    if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
      cVar1 = FUN_1403964ee();
      if (cVar1 == '\0') {
        cVar1 = FUN_1403963d0();
        if (cVar1 == '\0') {
          cVar1 = FUN_140396325();
          if (cVar1 == '\0') {
            if (DAT_14ca9f270 == (int *)0x0) {
              DAT_14ca9f270 = (int *)FUN_14001cc68(0x38,0x10);
              DAT_14ca9f270[4] = 0;
              DAT_14ca9f270[5] = 0;
              DAT_14ca9f270[6] = 0;
              DAT_14ca9f270[7] = 0;
              DAT_14ca9f270[0] = 0;
              DAT_14ca9f270[1] = 0;
              DAT_14ca9f270[2] = 0;
              DAT_14ca9f270[3] = 0;
              DAT_14ca9f270[8] = 0;
              DAT_14ca9f270[9] = 0;
              DAT_14ca9f270[10] = 0;
              DAT_14ca9f270[0xb] = 0;
              DAT_14ca9f270[0xc] = 0;
              DAT_14ca9f270[0xd] = 0;
              *(undefined ***)(DAT_14ca9f270 + 6) = &PTR_FUN_14a399cd0;
              DAT_14ca9f270[0xc] = 0;
            }
            uVar2 = CONCAT71(uVar3,0 < *DAT_14ca9f270);
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 140396325 FUN_140396325 body=171 status=ok
// SIG undefined FUN_140396325(void)

bool FUN_140396325(void)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0b60) {
    FUN_144b3d300(&DAT_14caa0b60);
    if (DAT_14caa0b60 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14caa0b58 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.ShaderPipelineCache.SaveUserCache",1);
      _Init_thread_footer(&DAT_14caa0b60);
    }
  }
  if ((DAT_14caa0b58 != (longlong *)0x0 & DAT_14ca84f59) == 1) {
    iVar2 = (**(code **)(*DAT_14caa0b58 + 0xb0))();
    bVar1 = 0 < iVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1403963d0 FUN_1403963d0 body=285 status=ok
// SIG undefined FUN_1403963d0(void)

bool FUN_1403963d0(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  bool bVar8;
  
  cVar4 = DAT_14caa0b51;
  if (DAT_14caa0b50 == '\0') {
    DAT_14caa0b50 = '\x01';
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_14054d46e(&DAT_14c846b20,L"logpso");
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar4 = FUN_14054d46e(&DAT_14c846b20,L"AwsPSO");
    }
  }
  DAT_14caa0b51 = cVar4;
  lVar2 = DAT_14ca9f130;
  if (DAT_14ca84f59 == '\x01') {
    bVar8 = true;
    if (DAT_14caa0b51 == '\0') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar7 = 0;
      }
      else if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar7 = 1;
      }
      bVar8 = *(int *)(lVar2 + uVar7 * 4) == 1;
    }
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}



// FUNCTION 1403964ee FUN_1403964ee body=293 status=ok
// SIG undefined FUN_1403964ee(void)

undefined8 FUN_1403964ee(longlong param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  BOOL BVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 extraout_var;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  lVar6 = DAT_14ca9f0d0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar4 + 0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar13 = 0;
  }
  else if (iVar2 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar13 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar13 = 1;
  }
  uVar3 = *(uint *)(lVar6 + uVar13 * 4);
  uVar8 = FUN_144972c84();
  BVar9 = QueryPerformanceCounter(&local_48);
  lVar6 = DAT_14ca9f0e8;
  uVar13 = CONCAT44(extraout_var,BVar9);
  if (uVar3 != 0) {
    if (uVar3 <= uVar8) {
LAB_14039660d:
      uVar12 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_14039656f;
    }
    if (uVar8 != 0) {
      dVar5 = (double)local_48.QuadPart * DAT_14c83f420;
      dVar1 = *(double *)(param_1 + 0x18);
      if (*(int *)(lVar4 + 0xc60) == 0x40000002) {
        uVar13 = 0;
      }
      else {
        bVar7 = FUN_144a61b4f();
        uVar13 = (ulonglong)(bVar7 ^ 1);
      }
      if ((double)*(int *)(lVar6 + uVar13 * 4) <= (dVar5 + 16777216.0) - dVar1) goto LAB_14039660d;
    }
  }
  uVar12 = 0;
LAB_14039656f:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140396614 FUN_140396614 body=209 status=ok
// SIG undefined FUN_140396614(void)

bool FUN_140396614(void)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (DAT_14ca806a2 == '\x01') {
    bVar2 = DAT_14ca806a3 & 1;
    DAT_14ca806a2 = 1;
    lVar3 = DAT_14ca80330;
  }
  else {
    DAT_14ca806a2 = 1;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca806a3 = FUN_14054d46e(&DAT_14c846b20,L"logpso");
    lVar3 = DAT_14ca80330;
    bVar2 = DAT_14ca806a3;
  }
  bVar7 = true;
  DAT_14ca80330 = lVar3;
  if (bVar2 == 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    bVar7 = *(int *)(lVar3 + uVar6 * 4) == 1;
  }
  return bVar7;
}



// FUNCTION 1403966e6 FUN_1403966e6 body=216 status=ok
// SIG undefined FUN_1403966e6(void)

bool FUN_1403966e6(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (DAT_14ca806a0 == '\0') {
    DAT_14ca806a0 = '\x01';
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca806a1 = FUN_14054d46e(&DAT_14c846b20,L"psocache");
  }
  lVar2 = DAT_14ca80318;
  if (DAT_14ca80670 == '\x01') {
    bVar6 = true;
    if (DAT_14ca806a1 == '\0') {
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
      bVar6 = *(int *)(lVar2 + uVar5 * 4) == 1;
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



// FUNCTION 1403967cc FUN_1403967cc body=119 status=ok
// SIG undefined FUN_1403967cc(void)

void FUN_1403967cc(longlong *param_1,uint param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  
  cVar2 = param_3;
  if (param_2 != 6) {
    cVar2 = '\0';
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x291);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (bVar1 == param_2) {
    if (param_2 != 6) {
      return;
    }
    uVar3 = (undefined4)CONCAT71(uVar4,*(char *)((longlong)param_1 + 0x292));
    if (*(char *)((longlong)param_1 + 0x292) == param_3) {
      return;
    }
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar4,*(undefined1 *)((longlong)param_1 + 0x292));
  }
  *(char *)((longlong)param_1 + 0x291) = (char)param_2;
  *(char *)((longlong)param_1 + 0x292) = cVar2;
  cVar2 = (**(code **)(*param_1 + 0x600))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x5d8))(param_1,(uint)bVar1,uVar3);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}



// FUNCTION 140396844 FUN_140396844 body=1146 status=ok
// SIG undefined FUN_140396844(void)

void FUN_140396844(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined1 auStack_178 [32];
  void **local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_140396cbf(*param_1,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1457077fa(param_1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  lVar5 = *param_1;
  lVar2 = param_1[1];
  *param_1 = param_1[2];
  param_1[1] = param_1[3];
  local_88._0_4_ = (undefined4)lVar5;
  local_88._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_80._0_4_ = (undefined4)lVar2;
  uStack_80._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  *(undefined4 *)(param_1 + 2) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_88._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_80._4_4_;
  local_88 = lVar5;
  uStack_80 = lVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_1;
    lVar10 = 0;
    do {
      plVar8 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar8 != (longlong *)0x0) {
        iVar1 = *(int *)(lVar2 + lVar10);
        if (iVar1 == 1) {
          if (*plVar8 != 0) {
            FUN_140396cf6();
          }
        }
        else if (iVar1 < 0x100) {
          if (iVar1 == 0x40) {
            lVar6 = *(longlong *)(lVar2 + 0x10 + lVar10);
            if (lVar6 != 0) {
              uVar15 = *(undefined8 *)(lVar6 + 0x30);
              local_118 = *(undefined8 *)(lVar6 + 0x28);
              uVar11 = *(undefined4 *)(lVar6 + 8);
              uVar12 = *(undefined4 *)(lVar6 + 0xc);
              uVar13 = *(undefined4 *)(lVar6 + 0x10);
              uVar14 = *(undefined4 *)(lVar6 + 0x14);
              local_128 = *(undefined8 *)(lVar6 + 0x18);
              uStack_120 = *(undefined8 *)(lVar6 + 0x20);
              local_138 = uVar11;
              uStack_134 = uVar12;
              uStack_130 = uVar13;
              uStack_12c = uVar14;
              if ((*(int *)(*plVar8 + 0x88) != 0) &&
                 (plVar7 = *(longlong **)(*plVar8 + 0x80), plVar7 != (longlong *)0x0)) {
                local_128._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
                uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
                local_78 = (undefined4)local_128;
                uStack_74 = local_128._4_4_;
                uStack_70 = (undefined4)uStack_120;
                uStack_6c = uStack_120._4_4_;
                local_68 = local_118;
                goto LAB_1403969de;
              }
            }
          }
          else if (iVar1 == 8) {
            if ((*plVar8 != 0) && (lVar6 = *(longlong *)(lVar2 + 0x10 + lVar10), lVar6 != 0)) {
              FUN_140396e40(*plVar8,plVar8,*(undefined4 *)(lVar6 + 0x20),
                            *(undefined4 *)(lVar6 + 0x24));
            }
          }
          else if (((iVar1 == 4) && (lVar6 = *plVar8, lVar6 != 0)) &&
                  (lVar3 = *(longlong *)(lVar2 + 0x10 + lVar10), lVar3 != 0)) {
            local_98 = (void *)0x0;
            local_90 = *(int *)(lVar3 + 0x18);
            lVar9 = (longlong)local_90;
            pvVar4 = *(void **)(lVar3 + 0x10);
            if (lVar9 == 0) {
              local_8c = 0;
            }
            else {
              FUN_1446dd670(&local_98,local_90,0);
              memcpy(local_98,pvVar4,lVar9 * 2);
              plVar8 = *(longlong **)(lVar2 + 8 + lVar10);
            }
            local_158 = &local_98;
            FUN_147f7c9c4(lVar6,plVar8,*(undefined4 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0xc));
          }
        }
        else if (iVar1 < 0x2000) {
          if (((iVar1 == 0x100) && (lVar6 = *plVar8, lVar6 != 0)) &&
             (lVar3 = *(longlong *)(lVar2 + 0x10 + lVar10), lVar3 != 0)) {
            uVar15 = *(undefined8 *)(lVar3 + 0x50);
            local_a8 = *(undefined4 *)(lVar3 + 0x3c);
            uVar11 = *(undefined4 *)(lVar3 + 0x1c);
            uVar12 = *(undefined4 *)(lVar3 + 0x20);
            uVar13 = *(undefined4 *)(lVar3 + 0x24);
            uVar14 = *(undefined4 *)(lVar3 + 0x28);
            local_b8 = *(undefined8 *)(lVar3 + 0x2c);
            uStack_b0 = *(undefined8 *)(lVar3 + 0x34);
            local_c8 = uVar11;
            uStack_c4 = uVar12;
            uStack_c0 = uVar13;
            uStack_bc = uVar14;
            if ((*(int *)(lVar6 + 0x58) != 0) &&
               (plVar7 = *(longlong **)(lVar6 + 0x50), plVar7 != (longlong *)0x0)) {
              local_68 = CONCAT44(local_68._4_4_,local_a8);
              local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
              uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
              local_78 = (undefined4)local_b8;
              uStack_74 = local_b8._4_4_;
              uStack_70 = (undefined4)uStack_b0;
              uStack_6c = uStack_b0._4_4_;
LAB_1403969de:
              local_88 = CONCAT44(uVar12,uVar11);
              uStack_80 = CONCAT44(uVar14,uVar13);
              lVar6 = *plVar7;
LAB_1403969f4:
              (**(code **)(lVar6 + 0x60))(plVar7,plVar8,&local_88,uVar15);
            }
          }
        }
        else if (iVar1 == 0x4000) {
          lVar6 = *plVar8;
          if ((lVar6 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10 + lVar10), lVar3 != 0)) {
            uVar15 = *(undefined8 *)(lVar3 + 0x50);
            local_e8 = *(undefined4 *)(lVar3 + 0x3c);
            local_108 = *(undefined4 *)(lVar3 + 0x1c);
            uStack_104 = *(undefined4 *)(lVar3 + 0x20);
            uStack_100 = *(undefined4 *)(lVar3 + 0x24);
            uStack_fc = *(undefined4 *)(lVar3 + 0x28);
            local_f8 = *(undefined8 *)(lVar3 + 0x2c);
            uStack_f0 = *(undefined8 *)(lVar3 + 0x34);
            if ((*(int *)(lVar6 + 0x78) != 0) &&
               (plVar7 = *(longlong **)(lVar6 + 0x70), plVar7 != (longlong *)0x0)) {
              local_68 = CONCAT44(local_68._4_4_,local_e8);
              local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
              uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
              local_78 = (undefined4)local_f8;
              uStack_74 = local_f8._4_4_;
              uStack_70 = (undefined4)uStack_f0;
              uStack_6c = uStack_f0._4_4_;
              lVar6 = *plVar7;
              local_88 = *(longlong *)(lVar3 + 0x1c);
              uStack_80 = *(longlong *)(lVar3 + 0x24);
              goto LAB_1403969f4;
            }
          }
        }
        else if (iVar1 == 0x2000) {
          lVar6 = *(longlong *)(lVar2 + 0x10 + lVar10);
          if (lVar6 != 0) {
            lVar3 = *plVar8;
            uVar15 = *(undefined8 *)(lVar6 + 0x18);
            local_d8 = (void *)0x0;
            local_d0 = *(int *)(lVar6 + 0x10);
            lVar9 = (longlong)local_d0;
            pvVar4 = *(void **)(lVar6 + 8);
            if (lVar9 == 0) {
              local_cc = 0;
            }
            else {
              FUN_1446dd670(&local_d8,local_d0,0);
              memcpy(local_d8,pvVar4,lVar9 * 2);
              plVar8 = *(longlong **)(lVar2 + 8 + lVar10);
            }
            FUN_147f7ca02(lVar3,plVar8,&local_d8,uVar15);
          }
        }
        else if (((iVar1 == 0x10000) && (*plVar8 != 0)) &&
                (lVar6 = *(longlong *)(lVar2 + 0x10 + lVar10), lVar6 != 0)) {
          local_140 = *(undefined4 *)(lVar6 + 0x28);
          local_148 = *(undefined8 *)(lVar6 + 0x20);
          FUN_147f7ca3c();
        }
        *(undefined8 *)(lVar2 + 8 + lVar10) = 0;
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)(int)lVar5 * 0x18 != lVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140396cbf FUN_140396cbf body=54 status=ok
// SIG undefined FUN_140396cbf(void)

void FUN_140396cbf(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140396cf6 FUN_140396cf6 body=329 status=ok
// SIG undefined FUN_140396cf6(void)

void FUN_140396cf6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((int)param_1[5] != 0) && (plVar2 = (longlong *)param_1[4], plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
  }
  if ((((*(longlong *)(param_2 + 0x18) != 0) && ((DAT_14cb26569 & 1) != 0)) &&
      (*(char *)(*(longlong *)(param_2 + 0x18) + 0x42) == '\x01')) &&
     (DAT_14cb25ed0 != (longlong *)0x0)) {
    (**(code **)(*DAT_14cb25ed0 + 0x2d0))(DAT_14cb25ed0,param_2);
  }
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    plVar2 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0x28);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      plVar2 = param_1 + 0x25;
    }
    *plVar2 = lVar1;
    plVar2 = (longlong *)(lVar1 + 0x30);
    if (lVar1 == 0) {
      plVar2 = param_1 + 0x24;
    }
    *plVar2 = *(longlong *)(param_2 + 0x30);
    *(int *)(param_1 + 0x26) = (int)param_1[0x26] + -1;
    if ((*(longlong *)(param_2 + 0x18) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x50));
    }
    FUN_1400020a8(param_2);
  }
  if ((int)param_1[0x26] < 1) {
    FUN_1400847bc(param_1 + 0x17,0);
    if ((int)param_1[0x21] == 0) {
      FUN_140087e46(param_1);
      if (((*param_1 != -1) && (param_1 != (longlong *)0x0)) && (DAT_14cb259f8 != 0)) {
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),param_1);
      }
      if ((param_1 != (longlong *)0x0) && (DAT_14cb259f8 != 0)) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140396e40 FUN_140396e40 body=107 status=ok
// SIG undefined FUN_140396e40(void)

void FUN_140396e40(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  if ((((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) && (*(char *)(lVar1 + 0x42) == '\x01')) &&
     (*(char *)(lVar1 + 0x5c) == '\0')) {
    uVar2 = -(uint)(*(float *)(lVar1 + 0x48) * 0.8 < param_4 / 1000.0);
    *(uint *)(lVar1 + 0x58) =
         ~uVar2 & (uint)*(float *)(lVar1 + 0x48) | (uint)(param_4 / 1000.0) & uVar2;
    *(undefined1 *)(lVar1 + 0x5c) = 1;
  }
  if ((*(int *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140396ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 140396eac FUN_140396eac body=114 status=ok
// SIG undefined FUN_140396eac(void)

void FUN_140396eac(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_14483a318(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x430) + 0x38,param_2);
      FUN_14483a318(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x438) + 0x38,param_2);
    }
    FUN_14483a318(param_1 + 0x1e8,param_2);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_14483a318(*(longlong *)(param_1 + 0x40),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140396f1e FUN_140396f1e body=124 status=ok
// SIG undefined FUN_140396f1e(void)

void FUN_140396f1e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14aa2fac0;
  FUN_140396f9a(puVar1 + 5);
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  FUN_14039707a(puVar1 + 0x58);
  return;
}



// FUNCTION 140396f9a FUN_140396f9a body=224 status=ok
// SIG undefined FUN_140396f9a(void)

undefined4 * FUN_140396f9a(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 1;
  param_1[0x45] = 0;
  FUN_14039707a(param_1 + 0x46);
  param_1[0x9e] = 4;
  *(undefined4 **)(param_1 + 0xa0) = param_1;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 14039707a FUN_14039707a body=367 status=ok
// SIG undefined FUN_14039707a(void)

void FUN_14039707a(undefined8 *param_1)

{
  *param_1 = 0x4334000040a00000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x439600003e99999a;
  param_1[3] = 0x43fa00003dcccccd;
  param_1[4] = &DAT_41200000;
  param_1[6] = 0x40a0000000000000;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 8) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x42) = 2;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x40a0000042480000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f80000000000000;
  param_1[0xb] = 0x4234000042340000;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(byte *)((longlong)param_1 + 0x54) = *(byte *)((longlong)param_1 + 0x54) | 1;
  *(undefined8 *)((longlong)param_1 + 100) = 0x40a0000042480000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 1;
  *(undefined4 *)(param_1 + 0xf) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0x18;
  *(byte *)((longlong)param_1 + 0x81) = *(byte *)((longlong)param_1 + 0x81) & 0xfe;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0x3f80000042480000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(byte *)((longlong)param_1 + 0xc4) = *(byte *)((longlong)param_1 + 0xc4) & 0xfc;
  param_1[0x19] = 0x3f80000042480000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(byte *)((longlong)param_1 + 0xd4) = *(byte *)((longlong)param_1 + 0xd4) & 0xfc;
  param_1[0x1b] = 0x3f80000042480000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) & 0xfc;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0x3f80000042480000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) & 0xfc;
  param_1[0x20] = 0x3f80000042480000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(byte *)((longlong)param_1 + 0x10c) = *(byte *)((longlong)param_1 + 0x10c) & 0xfc;
  param_1[0x22] = 0x3f80000042480000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x11c) = *(byte *)((longlong)param_1 + 0x11c) & 0xfc;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)((longlong)param_1 + 0x151) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return;
}



// FUNCTION 1403971ea FUN_1403971ea body=83 status=ok
// SIG undefined FUN_1403971ea(void)

undefined8 FUN_1403971ea(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((((*(byte *)(param_1 + 2) & 1) == 0) && (param_1[1] != 0)) && (*param_1 != 0)) {
    FUN_14039723e(param_1);
    memset(param_1 + 0x103,0,0x470);
    FUN_140397346(param_1,param_1 + 0x103);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14039723e FUN_14039723e body=264 status=ok
// SIG undefined FUN_14039723e(void)

void FUN_14039723e(longlong *param_1)

{
  longlong *_Dst;
  double dVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    if ((*(longlong *)(*param_1 + 0xb0) == 0) && (lVar3 = FUN_1448abda6(), lVar3 == 0)) {
      return;
    }
    _Dst = param_1 + 10;
    memcpy(_Dst,param_1 + 0x116,0x3d0);
    if (((int)param_1[0x83] == -1) ||
       (((char)param_1[0x2c] == '\0' && ((char)param_1[0x58] != '\x01')))) {
      cVar2 = FUN_14189b55e(param_1);
      if ((cVar2 != '\0') && ((*(byte *)(param_1 + 2) & 1) == 0)) {
        *(undefined4 *)(param_1 + 0x101) = 0;
        *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
      }
    }
    else {
      *(int *)(param_1 + 3) = (int)param_1[0x83];
      FUN_143dd25a6(param_1,_Dst,param_1 + 3);
      lVar3 = *(longlong *)(*param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6();
      }
      dVar1 = *(double *)(lVar3 + 0x6d0);
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
      *(float *)((longlong)param_1 + 0x80c) = (float)dVar1;
      memcpy(param_1 + 0x84,_Dst,0x3d0);
      if ((*(float *)(param_1 + 0x101) == 0.0) && (!NAN(*(float *)(param_1 + 0x101)))) {
        *(float *)(param_1 + 0x101) = (float)dVar1;
      }
    }
  }
  return;
}



// FUNCTION 140397346 FUN_140397346 body=831 status=ok
// SIG undefined FUN_140397346(void)

void FUN_140397346(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined1 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar15 = FUN_14069294b();
  (**(code **)(**(longlong **)(&DAT_00001ce8 + *param_1) + 0x528))
            (*(longlong **)(&DAT_00001ce8 + *param_1),param_2,param_2 + 4);
  (**(code **)(**(longlong **)(&DAT_00001ce8 + *param_1) + 0x710))
            (*(longlong **)(&DAT_00001ce8 + *param_1),&local_88);
  dVar8 = (double)FUN_144719204(local_88,0);
  dVar7 = (double)FUN_144719204(uStack_80,0);
  dVar5 = sin(dVar8 * 0.017453292519943295);
  dVar8 = cos(dVar8 * 0.017453292519943295);
  dVar6 = sin(dVar7 * 0.017453292519943295);
  dVar7 = cos(dVar7 * 0.017453292519943295);
  *(double *)(param_2 + 0x10) = dVar7 * dVar8;
  *(double *)(param_2 + 0x18) = dVar6 * dVar8;
  *(double *)(param_2 + 0x20) = dVar5;
  lVar17 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + *param_1) + 0x1c8);
  if (lVar17 == 0) {
    puVar16 = &DAT_14c8464e0;
    uVar19 = (undefined4)DAT_14c8464f0;
    uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar19 = (undefined4)*(undefined8 *)(lVar17 + 0x270);
    uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x270) >> 0x20);
    puVar16 = (undefined8 *)(lVar17 + 0x260);
  }
  uVar9 = *(undefined4 *)puVar16;
  uVar10 = *(undefined4 *)((longlong)puVar16 + 4);
  uVar11 = *(undefined4 *)(puVar16 + 1);
  uVar12 = *(undefined4 *)((longlong)puVar16 + 0xc);
  *(undefined4 *)(param_2 + 0x28) = uVar9;
  *(undefined4 *)(param_2 + 0x2c) = uVar10;
  *(undefined4 *)(param_2 + 0x30) = uVar11;
  *(undefined4 *)(param_2 + 0x34) = uVar12;
  *(ulonglong *)(param_2 + 0x38) = CONCAT44(uVar20,uVar19);
  *(undefined4 *)(param_2 + 0x40) = uVar9;
  *(undefined4 *)(param_2 + 0x44) = uVar10;
  *(undefined4 *)(param_2 + 0x48) = uVar11;
  *(undefined4 *)(param_2 + 0x4c) = uVar12;
  *(double *)(param_2 + 0x50) = (double)CONCAT44(uVar20,uVar19) - (double)*(float *)(param_2 + 4);
  (**(code **)(**(longlong **)(*param_1 + 0x118) + 0x820))
            (*(longlong **)(*param_1 + 0x118),&local_88,0xbf800000);
  *(undefined4 *)(param_2 + 0x58) = local_88;
  *(undefined4 *)(param_2 + 0x5c) = uStack_84;
  *(undefined4 *)(param_2 + 0x60) = uStack_80;
  *(undefined4 *)(param_2 + 100) = uStack_7c;
  if (*(char *)(lVar15 + 0xa8) == '\x01') {
    uVar14 = *(undefined1 *)(*(longlong *)(*param_1 + 0x118) + 0x2ea);
  }
  else {
    uVar14 = 0;
  }
  *(undefined1 *)(param_2 + 0x68) = uVar14;
  lVar17 = *(longlong *)(*param_1 + 0xb0);
  if (lVar17 == 0) {
    lVar17 = FUN_1448abda6();
  }
  if (lVar17 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar17);
  }
  bVar13 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x70) = lVar17;
  *(longlong *)(param_2 + 0x78) = param_1[1];
  lVar17 = *param_1;
  lVar15 = *(longlong *)(&DAT_00001ce8 + lVar17);
  if ((bVar13 & 1) != 0) {
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar15 = *(longlong *)(&DAT_00001ce8 + lVar17);
    }
  }
  *(longlong *)(param_2 + 0x80) = lVar15;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*param_1 + 0x228);
  *(undefined1 *)(param_2 + 0x69) = (&DAT_00001100)[*param_1];
  uVar3 = *(undefined8 *)(*param_1 + 0x1eb8);
  plVar4 = *(longlong **)(*param_1 + 0x1ec0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = uVar3;
    plVar18 = *(longlong **)(param_2 + 0x90);
    if (plVar18 == (longlong *)0x0) goto LAB_140397587;
    *(undefined8 *)(param_2 + 0x90) = 0;
LAB_14039762a:
    LOCK();
    plVar4 = plVar18 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140397587;
    (**(code **)*plVar18)(plVar18);
    LOCK();
    piVar1 = (int *)((longlong)plVar18 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar18;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 0x88) = uVar3;
    plVar18 = *(longlong **)(param_2 + 0x90);
    if (plVar4 != plVar18) {
      *(longlong **)(param_2 + 0x90) = plVar4;
      if (plVar18 == (longlong *)0x0) goto LAB_140397587;
      goto LAB_14039762a;
    }
    LOCK();
    plVar18 = plVar4 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 != 0) goto LAB_140397587;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_140397587:
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140397686 FUN_140397686 body=147 status=ok
// SIG undefined FUN_140397686(void)

void FUN_140397686(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14039771a(*(undefined8 *)(param_1 + 0x120),&local_30,*(undefined4 *)(param_1 + -0x1b8));
  uVar1 = *(uint *)(param_1 + 0x118);
  uVar3 = 0x20;
  uVar4 = 0x20;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar4 = (ulonglong)uVar2;
  }
  *(undefined8 *)(param_2 + 0x50 + uVar4 * 8) = local_28;
  uVar1 = *(uint *)(param_1 + 0x118);
  if ((uVar1 != 0) && (uVar3 = 0, uVar1 != 0)) {
    for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  *(undefined8 *)(param_2 + 0x10 + (ulonglong)uVar3 * 8) = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14039771a FUN_14039771a body=483 status=ok
// SIG undefined FUN_14039771a(void)

ulonglong * FUN_14039771a(longlong param_1,ulonglong *param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  LARGE_INTEGER *local_80;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x1280);
  if (*(longlong *)(param_1 + 0x1280) == 0) {
    lVar4 = param_1 + 0xb00;
  }
  plVar1 = *(longlong **)(lVar4 + 0x10 + (longlong)param_3 * 0x280);
  iVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,&local_40);
  if (iVar3 < 0) {
    local_80 = &local_58;
    local_58.QuadPart = 0;
    uStack_50 = 0;
    local_88 = 0;
    FUN_145763094(iVar3,
                  "Queues[(uint32)QueueType].D3DCommandQueue->GetTimestampFrequency(&Frequency)",
                  ".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x2ff);
  }
  uVar2 = local_40;
  QueryPerformanceFrequency(&local_58);
  lVar4 = param_1 + 0xb00;
  if (*(longlong *)(param_1 + 0x1280) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1280);
  }
  plVar1 = *(longlong **)(lVar4 + 0x10 + (longlong)param_3 * 0x280);
  iVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,&local_40,&local_60);
  if (iVar3 < 0) {
    local_80 = &local_78;
    local_78.QuadPart = 0;
    uStack_70 = 0;
    local_88 = 0;
    FUN_145763094(iVar3,
                  "Queues[(uint32)QueueType].D3DCommandQueue->GetClockCalibration(&GPUTimestamp, &CPUTimestamp)"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x310);
  }
  auVar6._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar6._0_8_ = uVar2;
  auVar6._12_4_ = 0x45300000;
  dVar8 = (1000000.0 /
          (((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
          (auVar6._8_8_ - 1.9342813113834067e+25))) *
          (((double)CONCAT44(0x43300000,(int)local_40) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,(int)((ulonglong)local_40 >> 0x20)) - 1.9342813113834067e+25)
          );
  uVar5 = (ulonglong)dVar8;
  auVar7._8_4_ = (int)((ulonglong)local_60 >> 0x20);
  auVar7._0_8_ = local_60;
  auVar7._12_4_ = 0x45300000;
  *param_2 = (longlong)(dVar8 - 9.223372036854776e+18) & (longlong)uVar5 >> 0x3f | uVar5;
  dVar8 = (1000000.0 / (double)local_58.QuadPart) *
          (((double)CONCAT44(0x43300000,(int)local_60) - 4503599627370496.0) +
          (auVar7._8_8_ - 1.9342813113834067e+25));
  uVar5 = (ulonglong)dVar8;
  param_2[1] = (longlong)(dVar8 - 9.223372036854776e+18) & (longlong)uVar5 >> 0x3f | uVar5;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140397912 FUN_140397912 body=643 status=ok
// SIG undefined FUN_140397912(void)

void FUN_140397912(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  void *_Src;
  ulonglong uVar9;
  uint uVar10;
  void *_Dst;
  undefined1 auStack_78 [40];
  undefined **local_50;
  void *local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x30) = param_3;
  if ((int)param_2[8] < 0x115) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_50 = &PTR_FUN_14a3d46e0;
    local_38 = 0;
    *(undefined1 *)(param_1 + 0x3c) = 0;
    FUN_1407131fe(&local_48,param_2,0);
    iVar7 = (int)uStack_40;
    lVar2 = param_1 + 0x20;
    uVar10 = (int)uStack_40 * 2;
    FUN_140397dde(lVar2,uVar10);
    iVar8 = *(int *)(param_1 + 0x28);
    iVar7 = iVar8 + iVar7 * 2;
    *(int *)(param_1 + 0x28) = iVar7;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar8) < uVar10) {
      FUN_14746fa8e(lVar2);
      iVar7 = *(int *)(param_1 + 0x28);
    }
    _Src = (void *)((longlong)&local_48 + ((longlong)local_48 >> 0x18));
    if (((ulonglong)local_48 & 1) == 0) {
      _Src = local_48;
    }
    pvVar3 = *(void **)(param_1 + 0x20);
    _Dst = (void *)(lVar2 + ((longlong)pvVar3 >> 0x18));
    if (((ulonglong)pvVar3 & 1) == 0) {
      _Dst = pvVar3;
    }
    memcpy(_Dst,_Src,(longlong)iVar7);
    iVar8 = (uint)*(byte *)(param_1 + 0x3c) * 2 + 2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x28) / iVar8;
    if (local_48 != (void *)0x0 && ((ulonglong)local_48 & 1) == 0) {
      FUN_1400020a8(local_48,(longlong)*(int *)(param_1 + 0x28) % (longlong)iVar8 & 0xffffffff);
    }
  }
  else {
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_50 = (undefined **)CONCAT44(local_50._4_4_,(uint)*(byte *)(param_1 + 0x3c));
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
      if (1 < (uint)local_50) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x3c) = (uint)local_50 != 0;
    }
    else {
      *(bool *)(param_1 + 0x3c) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    uVar10 = 0;
    FUN_140397b96(param_1 + 0x20,param_2,0);
    uVar5 = (longlong)*(int *)(param_1 + 0x28) /
            (longlong)(int)((uint)*(byte *)(param_1 + 0x3c) * 2 + 2);
    iVar8 = (int)uVar5;
    *(int *)(param_1 + 0x38) = iVar8;
    lVar2 = param_2[0xd];
    if ((lVar2 == 0) ||
       ((*(longlong *)(lVar2 + 0x10) == 0 || *(byte *)(param_1 + 0x3c) != 0) || iVar8 < 1)) {
      *(undefined1 *)(param_1 + 0x3d) = 0;
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 0x20);
      uVar9 = param_1 + 0x20 + ((longlong)uVar4 >> 0x18);
      if ((uVar4 & 1) == 0) {
        uVar9 = uVar4;
      }
      bVar6 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 0x1b8))
                        (*(longlong *)(lVar2 + 8) + 8,uVar9,uVar5 & 0xffffffff);
      *(byte *)(param_1 + 0x3d) = bVar6;
      uVar10 = (uint)bVar6;
    }
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar10);
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
      if (1 < (uint)local_50) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x3d) = (uint)local_50 != 0;
    }
    else {
      *(bool *)(param_1 + 0x3d) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140397b96 FUN_140397b96 body=583 status=ok
// SIG undefined FUN_140397b96(void)

void FUN_140397b96(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 1;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_14056354a(param_2,param_1);
    goto LAB_140397cc0;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1],(longlong)*(int *)((longlong)param_1 + 0xc));
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140397cc0;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    uVar4 = *param_1;
    uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar6 = uVar4;
    }
    lVar5 = *param_2;
LAB_140397cba:
    (**(code **)(lVar5 + 0x170))(param_2,uVar6,(longlong)(int)local_28);
  }
  else {
    if (local_24 == 1) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (-1 < (int)local_28) {
        FUN_140397dde(param_1);
        uVar6 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar6 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar6) < local_28) {
          FUN_14746fa8e(param_1);
        }
        uVar6 = *param_1;
        if ((uVar6 & 1) != 0) {
          uVar6 = (longlong)param_1 + ((longlong)uVar6 >> 0x18);
        }
        lVar5 = *param_2;
        goto LAB_140397cba;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140397cc0:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140397dde FUN_140397dde body=42 status=ok
// SIG undefined FUN_140397dde(void)

void FUN_140397dde(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140397e0a();
    return;
  }
  return;
}



// FUNCTION 140397e0a FUN_140397e0a body=329 status=ok
// SIG undefined FUN_140397e0a(void)

void FUN_140397e0a(ulonglong *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint unaff_EDI;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (param_2 == 0) goto LAB_140397e78;
  uVar3 = (ulonglong)(int)param_2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar3 = uVar3 + 0xf;
      if (0x7ff0 < param_2) {
        uVar5 = uVar3 & 0xfffffffffffffff0;
        if (uVar5 < 0x7ff1) goto LAB_140397ef4;
        goto LAB_140397ec6;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,1);
    }
  }
LAB_140397e6e:
  do {
    uVar5 = 0x7fffffff;
    unaff_EDI = param_2;
    if ((int)param_2 <= (int)uVar3) {
      uVar5 = uVar3 & 0xffffffff;
    }
LAB_140397e78:
    param_2 = unaff_EDI;
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5,1);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar3 = FUN_1467ac767(uVar5,1);
LAB_140397ef4:
    bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140397e6e;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_140397ec6:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 140397f54 FUN_140397f54 body=38 status=ok
// SIG undefined FUN_140397f54(void)

void FUN_140397f54(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x90))(param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  return;
}



// FUNCTION 140397f87 FUN_140397f87 body=163 status=ok
// SIG undefined FUN_140397f87(void)

void FUN_140397f87(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(&DAT_14ca11fa0 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar1 + 2) = 0x2020;
  puVar1[3] = param_2;
  *(int *)(puVar1 + 4) = param_1;
  puVar1[5] = param_3;
  puVar1[6] = param_4;
  *(undefined1 *)(puVar1 + 7) = 0x3a;
  *puVar1 = &PTR_FUN_14a1fdf30;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x11;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0x10) = 0x202;
  puVar1[9] = DAT_14c9c0d38;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 14039802a FUN_14039802a body=399 status=ok
// SIG undefined FUN_14039802a(void)

ulonglong FUN_14039802a(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_62;
  undefined1 local_5e;
  undefined2 local_5d;
  undefined1 local_5b;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined2 local_2c;
  undefined4 local_2a;
  undefined1 local_26;
  undefined2 local_25;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1403981ba(&local_90);
  local_26 = local_5e;
  local_58 = local_90;
  local_25 = local_5d;
  local_2c = local_64;
  local_2a = local_62;
  local_50 = local_88;
  uStack_4c = uStack_84;
  uStack_48 = uStack_80;
  uStack_44 = uStack_7c;
  local_40 = local_78;
  local_34 = DAT_14ca84e40;
  if ((int)local_6c < DAT_14ca84e40) {
    local_34 = (int)local_6c;
  }
  if (local_34 < 2) {
    local_34 = 1;
  }
  iVar1 = (int)((ulonglong)local_6c >> 0x20);
  local_30 = DAT_14ca84e40;
  if (iVar1 < DAT_14ca84e40) {
    local_30 = iVar1;
  }
  local_38 = local_70;
  local_23 = local_5b;
  local_3c = local_74;
  if (local_30 < 2) {
    local_30 = 1;
  }
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x128);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1456bbb8c(uVar3,L"ScreenSpaceAO",&local_58,0);
  iVar1 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar1 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403981ba FUN_1403981ba body=245 status=ok
// SIG undefined FUN_1403981ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1403981ba(ulonglong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  
  uVar3 = DAT_14ca4af30;
  lVar2 = DAT_14c9b6c38;
  if (param_2 < 3) {
    uVar7 = 0x20009;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    uVar7 = (ulonglong)((uint)(0 < *(int *)(lVar2 + uVar7 * 4)) << 0x1a) | 0x20009;
  }
  *(undefined4 *)(param_1 + 3) = DAT_14ca84d40;
  uVar4 = uRam000000014ca84d38;
  param_1[1] = _DAT_14ca84d30;
  param_1[2] = uVar4;
  *param_1 = uVar7 | uVar3;
  *(int *)((longlong)param_1 + 0x1c) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x300010100010001;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0xff00;
  return param_1;
}



// FUNCTION 1403982b0 FUN_1403982b0 body=2335 status=ok
// SIG undefined FUN_1403982b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403982b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  float fVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_218 [32];
  float *local_1f8;
  float *local_1f0;
  longlong local_1e8;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  longlong local_180;
  longlong *local_178;
  undefined8 local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong *local_128;
  undefined4 local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  char local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98f0e8) {
    FUN_144b3d300(&DAT_14c98f0e8);
    if (DAT_14c98f0e8 == -1) {
      _DAT_14c98f0d8 = 12.0;
      _DAT_14c98f0e0 = 12.0;
      _Init_thread_footer(&DAT_14c98f0e8);
    }
  }
  if (((*(longlong *)(param_1 + 0x1f8) == 0) || (*(longlong *)(param_1 + 0x200) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x200) + 8) < 1)) goto LAB_140398871;
  lVar4 = param_1 + 0x1e0;
  FUN_140398bd0(lVar4,&local_180);
  (**(code **)(*DAT_14c98e618 + 0x68))(DAT_14c98e618,&local_168);
  fVar13 = 1.0 / (*(float *)(param_1 + 0xec) * *(float *)(param_1 + 0xf8) -
                 *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xf0));
  fVar14 = *(float *)(param_1 + 0xec) * fVar13;
  fVar11 = -*(float *)(param_1 + 0xf4) * fVar13;
  fVar10 = -*(float *)(param_1 + 0xf0) * fVar13;
  fVar13 = fVar13 * *(float *)(param_1 + 0xf8);
  local_18c = fVar10 * local_168 + fVar14 * fStack_164 +
              (-*(float *)(param_1 + 0xfc) * fVar10 - fVar14 * *(float *)(param_1 + 0x100));
  local_190 = fVar13 * local_168 + fVar11 * fStack_164 +
              (-*(float *)(param_1 + 0xfc) * fVar13 - *(float *)(param_1 + 0x100) * fVar11);
  local_19c = (float)((double)local_18c + _DAT_14c98f0e0);
  local_1a0 = (float)((double)local_190 + _DAT_14c98f0d8);
  pfVar8 = (float *)(local_180 + 0x168);
  if ((*(byte *)(local_180 + 0x31) & 0x20) == 0) {
    pfVar8 = (float *)&DAT_14c84635c;
  }
  local_194 = pfVar8[1] + local_19c;
  local_198 = *pfVar8 + local_1a0;
  fStack_164 = (float)DAT_14c8463f8;
  local_168 = (float)DAT_14c8463f0;
  fStack_160 = (float)*param_2;
  fStack_15c = (float)((ulonglong)*param_2 >> 0x20);
  local_e8 = CONCAT44(local_e8._4_4_,1);
  local_1f8 = &local_168;
  local_188 = local_1a0;
  local_184 = local_19c;
  FUN_140398c85(&local_120,&local_190,&local_1a0,&local_e8);
  fVar10 = *(float *)((longlong)param_2 + 0x1c);
  fVar11 = *(float *)(param_2 + 4);
  fVar13 = *(float *)(param_2 + 5);
  fVar14 = *(float *)((longlong)param_2 + 0x24);
  fVar5 = *(float *)(param_2 + 6);
  auVar16 = blendps(ZEXT416((uint)(local_120 * fVar11 + fStack_11c * fVar13 + fVar5 + 0.5)),
                    ZEXT816(0),0xe);
  auVar16 = roundps(auVar16,auVar16,1);
  auVar19 = blendps(ZEXT416((uint)(local_120 * fVar10 + fStack_11c * fVar14 +
                                   *(float *)((longlong)param_2 + 0x2c) + 0.5)),ZEXT816(0),0xe);
  auVar19 = roundps(auVar19,auVar19,1);
  fVar17 = 1.0 / (fVar10 * fVar13 - fVar14 * fVar11);
  fVar12 = -*(float *)((longlong)param_2 + 0x2c);
  fVar11 = -fVar11 * fVar17 * auVar19._0_4_ + fVar10 * fVar17 * auVar16._0_4_ +
           (fVar12 * -fVar11 * fVar17 - fVar10 * fVar17 * fVar5);
  fVar10 = fVar17 * fVar13 * auVar19._0_4_ + -fVar14 * fVar17 * auVar16._0_4_ +
           (fVar12 * fVar17 * fVar13 - fVar5 * -fVar14 * fVar17);
  local_1ac = 0x3f800000;
  local_1a8 = fVar10;
  fStack_1a4 = fVar11;
  FUN_140398bd0(lVar4,&local_1c8);
  puVar9 = (undefined8 *)(local_1c8 + 0x168);
  if ((*(byte *)(local_1c8 + 0x31) & 0x20) == 0) {
    puVar9 = &DAT_14c84635c;
  }
  uVar7 = *puVar9;
  local_1b8 = uVar7;
  FUN_140398bd0(lVar4,&local_1d8);
  local_d0 = *(char *)(local_1d8 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_d0 == '\0') goto LAB_1403986ba;
    local_d8 = *(ulonglong *)(local_1d8 + 400);
    local_e8 = *(undefined8 *)(local_1d8 + 0x180);
    uStack_e0 = *(undefined8 *)(local_1d8 + 0x188);
LAB_14039897d:
    local_1e8 = (longlong)param_2 + 0x1c;
    fVar10 = (float)*(double *)(local_1d8 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar10 = (0.5 - fVar10) + 0.5;
    }
    local_170 = CONCAT44((float)*(double *)(local_1d8 + 0x178),fVar10);
    local_1f8 = (float *)&local_170;
    local_168 = *(float *)(param_2 + 1);
    fStack_164 = (float)*(undefined8 *)((longlong)param_2 + 0xc);
    fStack_160 = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20);
    local_1f0 = &local_168;
    FUN_146978c22(&local_120,&local_1b8,&local_1ac,&local_e8);
    if (local_1d0 == (longlong *)0x0) {
      local_138 = local_f0;
      local_168 = local_120;
      fStack_164 = fStack_11c;
      local_148 = CONCAT44(uStack_fc,local_100);
      uStack_140 = CONCAT44(uStack_f4,uStack_f8);
      local_158 = local_110;
      fStack_154 = fStack_10c;
      fStack_150 = fStack_108;
      fStack_14c = fStack_104;
      fStack_160 = fStack_118;
      fStack_15c = fStack_114;
      goto LAB_140398ad2;
    }
    LOCK();
    *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
    UNLOCK();
    local_138 = local_f0;
    local_168 = local_120;
    fStack_164 = fStack_11c;
    fStack_154 = fStack_10c;
    fStack_150 = fStack_108;
    local_148 = CONCAT44(uStack_fc,local_100);
    uStack_140 = CONCAT44(uStack_f4,uStack_f8);
    local_158 = local_110;
    fStack_14c = fStack_104;
    fStack_160 = fStack_118;
    fStack_15c = fStack_114;
LAB_1403987ee:
    plVar2 = local_1d0;
    local_128 = local_1d0;
    LOCK();
    *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_1d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  else {
    if (local_d0 != '\0') {
      local_e8 = *(undefined8 *)(local_1d8 + 0x180);
      uStack_e0 = *(undefined8 *)(local_1d8 + 0x188);
      local_d8 = *(ulonglong *)(local_1d8 + 400) ^ 0x80000000;
      goto LAB_14039897d;
    }
LAB_1403986ba:
    uVar6 = *(undefined1 *)((longlong)param_2 + 0x34);
    fStack_160 = *(float *)(param_2 + 1);
    fStack_14c = *(float *)((longlong)param_2 + 0x1c);
    fVar13 = *(float *)(param_2 + 4);
    fVar14 = *(float *)(param_2 + 5);
    fVar5 = *(float *)((longlong)param_2 + 0x24);
    fVar12 = fVar10 * fVar13 + fVar11 * fVar14 + *(float *)(param_2 + 6);
    fVar17 = fVar10 * fStack_14c + fVar11 * fVar5 + *(float *)((longlong)param_2 + 0x2c);
    fVar15 = fVar13 * 0.0 + fVar14;
    fVar18 = fStack_14c * 0.0 + fVar5;
    fVar13 = fVar14 * 0.0 + fVar13;
    local_158 = fVar11 * fStack_160 + *(float *)(param_2 + 2);
    fStack_15c = fVar10 * fStack_160 + *(float *)((longlong)param_2 + 0xc);
    fStack_14c = fVar5 * 0.0 + fStack_14c;
    local_168 = (float)uVar7;
    fStack_164 = (float)((ulonglong)uVar7 >> 0x20);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
      fStack_154 = local_1a8;
      fStack_150 = fStack_1a4;
      local_148 = CONCAT44(fVar18,fVar13);
      uStack_140 = CONCAT44(fVar17,fVar15);
      local_138 = CONCAT17(local_120._2_1_,CONCAT25((undefined2)local_120,CONCAT14(uVar6,fVar12))) &
                  0xffffff01ffffffff;
      goto LAB_1403987ee;
    }
    fStack_154 = local_1a8;
    fStack_150 = fStack_1a4;
    local_148 = CONCAT44(fVar18,fVar13);
    uStack_140 = CONCAT44(fVar17,fVar15);
    local_138 = CONCAT35(local_138._5_3_,CONCAT14(uVar6,fVar12)) & 0xffffff01ffffffff;
LAB_140398ad2:
    local_128 = (longlong *)0x0;
  }
  FUN_1402018be(param_3,&local_168);
  plVar1 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_128 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar3 = (int *)((longlong)local_1d0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1d0 + 0x10))(local_1d0);
      }
    }
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar3 = (int *)((longlong)local_1c0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1c0 + 0x10))(local_1c0);
      }
    }
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar3 = (int *)((longlong)local_178 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_178 + 0x10))(local_178);
      }
    }
  }
LAB_140398871:
  if ((local_c0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140398bd0 FUN_140398bd0 body=181 status=ok
// SIG undefined FUN_140398bd0(void)

longlong * FUN_140398bd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140398c2c:
    *param_2 = DAT_14c98dec8;
    lVar4 = DAT_14c98ded0;
    param_2[1] = DAT_14c98ded0;
    if (lVar4 == 0) {
      return param_2;
    }
    LOCK();
    piVar2 = (int *)(lVar4 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    return param_2;
  }
  plVar1 = plVar3 + 1;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_140398c2c;
    LOCK();
    iVar5 = (int)*plVar1;
    bVar8 = iVar6 == iVar5;
    if (bVar8) {
      *(int *)plVar1 = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *param_2 = DAT_14c98dec8;
    lVar4 = DAT_14c98ded0;
    param_2[1] = DAT_14c98ded0;
    if (lVar4 == 0) goto LAB_140398c18;
    plVar7 = (longlong *)(lVar4 + 8);
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0x18);
    param_2[1] = (longlong)plVar3;
    plVar7 = plVar1;
  }
  LOCK();
  *(int *)plVar7 = (int)*plVar7 + 1;
  UNLOCK();
LAB_140398c18:
  LOCK();
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
  return param_2;
}



// FUNCTION 140398c85 FUN_140398c85 body=720 status=ok
// SIG undefined FUN_140398c85(void)

float * FUN_140398c85(float *param_1,float *param_2,float *param_3,int *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
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
  undefined1 auStack_e8 [32];
  float *local_c8;
  undefined4 local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar1 = param_5[3];
  fVar7 = param_3[3];
  fVar13 = fVar7;
  if (fVar1 <= fVar7) {
    fVar13 = fVar1;
  }
  fVar2 = param_5[2];
  fVar8 = param_3[2];
  fVar10 = fVar8;
  if (fVar2 <= fVar8) {
    fVar10 = fVar2;
  }
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar12 = *param_3;
  fVar11 = param_3[1];
  fVar15 = fVar11;
  if (fVar11 <= fVar4) {
    fVar15 = fVar4;
  }
  fVar17 = fVar12;
  if (fVar12 <= fVar3) {
    fVar17 = fVar3;
  }
  fVar14 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar16 = 0.0;
  if (fVar15 <= fVar13 && fVar17 <= fVar10) {
    fVar14 = fVar13;
    fVar18 = fVar15;
    fVar19 = fVar17;
    fVar16 = fVar10;
  }
  if (((((fVar19 != fVar12) || (NAN(fVar19) || NAN(fVar12))) || (fVar18 != fVar11)) ||
      ((NAN(fVar18) || NAN(fVar11) || (fVar16 != fVar8)))) ||
     ((NAN(fVar16) || NAN(fVar8) || ((fVar14 != fVar7 || (NAN(fVar14) || NAN(fVar7))))))) {
    fVar7 = fVar7 - fVar11;
    fVar8 = fVar8 - fVar12;
    if (*param_4 == 0) {
      if ((fVar8 + param_2[2] < fVar2) || (fVar13 = *param_2 - fVar8, fVar13 < fVar3)) {
        fVar10 = param_2[1];
        fVar13 = param_2[2];
      }
      else {
        fVar10 = param_2[1];
      }
    }
    else {
      fVar13 = param_2[3];
      fVar11 = param_2[1] - fVar7;
      fVar12 = fVar11;
      if (fVar11 < fVar4) {
        fVar12 = fVar13;
      }
      fVar10 = fVar13;
      if (fVar1 <= fVar7 + fVar13) {
        fVar10 = fVar12;
      }
      if (fVar1 <= fVar7 + fVar13 && fVar11 < fVar4) {
        local_b4 = 0;
        local_c8 = param_5;
        FUN_140398c85(param_1);
        goto LAB_140398db7;
      }
      fVar13 = *param_2;
    }
    uVar9 = ~-(uint)(fVar10 < fVar4) & DAT_14c84635c._4_4_;
    uVar5 = -(uint)(fVar2 < fVar8 + fVar13);
    uVar6 = -(uint)(fVar1 < fVar7 + fVar10);
    *param_1 = (float)(~uVar5 & (~-(uint)(fVar13 < fVar3) & (uint)DAT_14c84635c |
                                (uint)(fVar3 - fVar13) & -(uint)(fVar13 < fVar3)) |
                      (uint)(fVar2 - (fVar8 + fVar13)) & uVar5) + fVar13;
    param_1[1] = (float)(~uVar6 & (uVar9 | (uint)(fVar4 - fVar10) & -(uint)(fVar10 < fVar4)) |
                        (uint)(fVar1 - (fVar7 + fVar10)) & uVar6) + fVar10;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
  }
LAB_140398db7:
  if ((local_b0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140398f63 FUN_140398f63 body=163 status=ok
// SIG undefined FUN_140398f63(void)

void FUN_140398f63(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(&DAT_14ca11fac + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar1 + 2) = 0x2323;
  puVar1[3] = param_2;
  *(int *)(puVar1 + 4) = param_1;
  puVar1[5] = param_3;
  puVar1[6] = param_4;
  *(undefined1 *)(puVar1 + 7) = 0x3a;
  *puVar1 = &PTR_FUN_14a1fdf30;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x11;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0x10) = 0x506;
  puVar1[9] = DAT_14c9c0d38;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 140399013 FUN_140399013 body=163 status=ok
// SIG undefined FUN_140399013(void)

void FUN_140399013(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  *(undefined4 *)(puVar1 + 1) = (&DAT_14ca11fa8)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar1 + 2) = 0x2222;
  puVar1[3] = param_2;
  *(int *)(puVar1 + 4) = param_1;
  puVar1[5] = param_3;
  puVar1[6] = param_4;
  *(undefined1 *)(puVar1 + 7) = 0x3a;
  *puVar1 = &PTR_FUN_14a1fdf30;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x11;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0x10) = 0x405;
  puVar1[9] = DAT_14c9c0d38;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 1403990b6 FUN_1403990b6 body=26 status=ok
// SIG undefined FUN_1403990b6(void)

void FUN_1403990b6(undefined8 param_1)

{
  FUN_1403990d0();
  FUN_140399426(param_1);
  return;
}



// FUNCTION 1403990d0 FUN_1403990d0 body=122 status=ok
// SIG undefined FUN_1403990d0(void)

void FUN_1403990d0(longlong *param_1,ulonglong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_1403996d0();
  if (param_1 != (longlong *)0x0) {
    lVar2 = 0;
    plVar3 = param_1;
    do {
      param_2 = (ulonglong)*(uint *)(plVar3 + 1);
      if ((*(uint *)(plVar3 + 1) & 0x30) != 0) goto LAB_1403990fc;
      plVar3 = (longlong *)plVar3[4];
    } while (plVar3 != (longlong *)0x0);
  }
  lVar2 = param_1[4];
LAB_1403990fc:
  bVar1 = *(byte *)(lVar2 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
    return;
  }
  (**(code **)(*param_1 + 0x2c0))
            (param_1,CONCAT71((int7)(param_2 >> 8),(char)param_1[0x37]) & 0xffffffffffffff01);
  FUN_14039914a(param_1,(*(uint *)(param_1 + 0x37) & 2) >> 1);
  return;
}



// FUNCTION 14039914a FUN_14039914a body=78 status=ok
// SIG undefined FUN_14039914a(void)

void FUN_14039914a(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0xe8) & 8) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xf7 | param_2 << 3;
    for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140399198(*(longlong *)(param_1 + 0x20),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140399198 FUN_140399198 body=104 status=ok
// SIG undefined FUN_140399198(void)

void FUN_140399198(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = 0;
    lVar3 = param_2;
    do {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) goto LAB_1403991c3;
      lVar3 = *(longlong *)(lVar3 + 0x20);
    } while (lVar3 != 0);
    lVar2 = *(longlong *)(param_2 + 0x20);
LAB_1403991c3:
    if ((lVar2 == param_1) && (*(char *)(param_2 + 0x108) != '\0')) {
      cVar1 = FUN_14039924e(param_2);
      if (cVar1 != '\0') {
        FUN_14018b23a(param_1 + 0x98,param_2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14039924e FUN_14039924e body=220 status=ok
// SIG undefined FUN_14039924e(void)

ulonglong FUN_14039924e(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar5;
  undefined7 extraout_var;
  ulonglong uVar4;
  longlong lVar6;
  
  lVar6 = param_1;
  if ((*(byte *)(param_1 + 0x108) & 0xfd) == 0) {
switchD_140399300_caseD_3:
    return 0;
  }
  for (; (lVar6 != 0 && ((*(uint *)(lVar6 + 8) & 0x30) == 0)); lVar6 = *(longlong *)(lVar6 + 0x20))
  {
  }
  uVar3 = FUN_1403994ec(param_1);
  cVar2 = (char)uVar3;
  cVar1 = *(char *)(param_1 + 0x109);
  uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
  if (cVar1 != cVar2) {
    *(char *)(param_1 + 0x109) = cVar2;
    if (param_1 != 0) {
      uVar3 = 0;
      lVar6 = param_1;
      do {
        if ((*(uint *)(lVar6 + 8) & 0x30) != 0) goto LAB_1403992c7;
        lVar6 = *(longlong *)(lVar6 + 0x20);
      } while (lVar6 != 0);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1403992c7:
    FUN_14039932a(&DAT_14cb0a918,uVar3,param_1,*(undefined8 *)(param_1 + 0x178),
                  *(undefined1 *)(param_1 + 0x108),cVar1,cVar2);
    uVar5 = extraout_var;
  }
  if (7 < *(byte *)(param_1 + 0x108) - 1) {
    return 0;
  }
  uVar4 = CONCAT71(uVar5,1);
  switch((uint)*(byte *)(param_1 + 0x108)) {
  case 1:
    return CONCAT71(uVar5,cVar2 != '\0');
  case 2:
  case 4:
    goto switchD_140399300_caseD_3;
  default:
    goto switchD_140399300_caseD_3;
  case 5:
    if (cVar2 != '\x02') {
      return uVar4;
    }
    break;
  case 7:
    if (cVar2 != '\x03') {
      return uVar4;
    }
  }
  uVar4 = FUN_1403997f0(param_1);
  uVar4 = uVar4 ^ 1;
switchD_140399300_caseD_3:
  return uVar4;
}



// FUNCTION 14039932a FUN_14039932a body=252 status=ok
// SIG undefined FUN_14039932a(void)

void FUN_14039932a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))
                              (plVar2,param_2,param_3,param_4,param_5,param_6,param_7),
           cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14039940c;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14039940c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140399426 FUN_140399426 body=197 status=ok
// SIG undefined FUN_140399426(void)

void FUN_140399426(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  
  if (((*(int *)(param_1 + 0x1c8) != 0) && (uVar1 = *(uint *)(param_1 + 0x1c4), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x1c8))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar2 = *plVar7, lVar2 != 0)))) {
      lVar5 = FUN_140183c32(param_1 + 0x1d0);
      if (lVar5 != 0) {
        FUN_140183c32(param_1 + 0x1d0);
        cVar3 = FUN_1400900b4();
        if ((cVar3 == '\0') && (*(int *)(lVar2 + 0x50) == 0)) {
          bVar4 = *(byte *)(param_1 + 0xe8) | 0x40;
          *(byte *)(param_1 + 0xe8) = bVar4;
          bVar6 = *(char *)(lVar2 + 0x58) << 5;
        }
        else {
          bVar4 = *(byte *)(param_1 + 0xe8) & 0xbf;
          bVar6 = 0;
        }
        *(byte *)(param_1 + 0xe8) = bVar4 & 0xdf | bVar6;
      }
    }
  }
  return;
}



// FUNCTION 1403994ec FUN_1403994ec body=483 status=ok
// SIG undefined FUN_1403994ec(void)

byte FUN_1403994ec(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  PSRWLOCK SRWLock;
  
  if (param_1 != (longlong *)0x0) {
    lVar5 = 0;
    plVar4 = param_1;
    do {
      if ((*(uint *)(plVar4 + 1) & 0x30) != 0) goto LAB_140399515;
      plVar4 = (longlong *)plVar4[4];
    } while (plVar4 != (longlong *)0x0);
  }
  lVar5 = param_1[4];
LAB_140399515:
  switch((char)param_1[0x21]) {
  case '\x01':
    if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
      return 1;
    }
    if ((*(byte *)(lVar5 + 0x156) & 0x40) == 0) {
      bVar2 = *(byte *)(lVar5 + 0x152);
      if (bVar2 != 1) {
        if (6 < bVar2) {
          return 2;
        }
        if ((0x68U >> (bVar2 & 0x1f) & 1) == 0) {
          return 2;
        }
      }
      cVar3 = (**(code **)(*param_1 + 0x2d8))(param_1);
      return cVar3 * '\x02';
    }
    break;
  case '\x03':
  case '\b':
    return 2;
  case '\x04':
  case '\x05':
    if ((((*(byte *)(param_1 + 0x1d) & 1) == 0) && ((*(byte *)(lVar5 + 0x156) & 0x40) == 0)) &&
       (((bVar2 = *(byte *)(lVar5 + 0x152), bVar2 != 1 &&
         ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) ||
        (cVar3 = (**(code **)(*param_1 + 0x2d8))(param_1), cVar3 != '\0')))) {
      cVar3 = FUN_1403997f0(param_1);
      if (cVar3 != '\0') {
        bVar2 = (**(code **)(*param_1 + 0x2e0))(param_1);
        return bVar2 | 2;
      }
      return 2;
    }
    break;
  case '\x06':
    cVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
    if (cVar3 == '\0') {
      lVar1 = param_1[0x2f];
      SRWLock = (PSRWLOCK)(lVar5 + 0xe0);
      AcquireSRWLockShared(SRWLock);
      if (lVar1 == 0) {
        ReleaseSRWLockShared(SRWLock);
        return 2;
      }
      bVar2 = *(byte *)(lVar1 + 0x243);
      ReleaseSRWLockShared(SRWLock);
      if ((bVar2 & 0xc) != 4) {
        return 2;
      }
    }
    return 3;
  case '\a':
    if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
      return 2;
    }
    if ((*(byte *)(lVar5 + 0x156) & 0x40) != 0) {
      return 2;
    }
    bVar2 = *(byte *)(lVar5 + 0x152);
    if (((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
       (cVar3 = (**(code **)(*param_1 + 0x2d8))(param_1), cVar3 == '\0')) {
      return 2;
    }
    cVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
    if (cVar3 != '\0') {
      FUN_1403997f0(param_1);
      return 3;
    }
    return 2;
  }
  return 0;
}



// FUNCTION 1403996d0 FUN_1403996d0 body=286 status=ok
// SIG undefined FUN_1403996d0(void)

void FUN_1403996d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30 [2];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,local_30);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (param_1 != (longlong *)0x0) {
    lVar2 = 0;
    plVar3 = param_1;
    do {
      if ((*(uint *)(plVar3 + 1) & 0x30) != 0) goto LAB_14039972f;
      plVar3 = (longlong *)plVar3[4];
    } while (plVar3 != (longlong *)0x0);
  }
  lVar2 = param_1[4];
LAB_14039972f:
  plVar3 = param_1;
  if (*(char *)(lVar2 + 0x152) == '\x03') {
LAB_140399738:
    cVar1 = FUN_1407f031e(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,local_20);
      FUN_1400021e4(local_20,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
    if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_140399790:
  plVar4 = plVar3;
  plVar3 = plVar4;
  if ((longlong *)plVar4[4] != (longlong *)0x0) goto code_r0x00014039979f;
  goto LAB_1403997b0;
code_r0x00014039979f:
  plVar3 = (longlong *)plVar4[4];
  if ((*(uint *)(plVar4 + 1) >> 0x1c & 1) != 0) {
    plVar3 = (longlong *)FUN_142840154(plVar4);
LAB_1403997b0:
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)plVar4[4];
      goto LAB_140399790;
    }
    goto LAB_140399738;
  }
  goto LAB_140399790;
}



// FUNCTION 1403997f0 FUN_1403997f0 body=328 status=ok
// SIG undefined FUN_1403997f0(void)

undefined8 FUN_1403997f0(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x2f] == 0) {
    uVar4 = 0;
    goto LAB_14039987f;
  }
  if (param_1 != (longlong *)0x0) {
    lVar3 = 0;
    plVar6 = param_1;
    do {
      if ((*(uint *)(plVar6 + 1) & 0x30) != 0) goto LAB_140399835;
      plVar6 = (longlong *)plVar6[4];
    } while (plVar6 != (longlong *)0x0);
  }
  lVar3 = param_1[4];
LAB_140399835:
  bVar2 = *(byte *)(lVar3 + 0x152);
  if ((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) {
    iVar1 = *(int *)((longlong)param_1 + 0xe4);
    if (((longlong)iVar1 < 0) || ((int)param_1[0xd] <= iVar1)) goto LAB_140399855;
    lVar3 = *(longlong *)(param_1[0xc] + (longlong)iVar1 * 8);
    local_20 = lVar3;
  }
  else {
LAB_140399855:
    lVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,&local_20);
  }
  bVar2 = *(byte *)(param_1 + 0x1d);
  uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
  if ((bVar2 & 4) == 0) {
    lVar3 = param_1[0x2f];
    if (param_1[0x2f] != 0) {
LAB_1403998ad:
      lVar7 = lVar3;
      lVar3 = lVar7;
      if (*(longlong *)(lVar7 + 0x20) != 0) goto code_r0x0001403998bc;
      goto LAB_1403998c7;
    }
    lVar7 = 0;
    goto LAB_1403998d6;
  }
  lVar7 = param_1[0x32];
  goto LAB_140399877;
code_r0x0001403998bc:
  lVar3 = *(longlong *)(lVar7 + 0x20);
  if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) goto LAB_1403998ad;
  lVar3 = FUN_142840154(lVar7);
LAB_1403998c7:
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(lVar7 + 0x20);
    goto LAB_1403998ad;
  }
  lVar7 = *(longlong *)(lVar3 + 0x18);
  bVar2 = *(byte *)(param_1 + 0x1d);
  uVar5 = (undefined7)((ulonglong)lVar3 >> 8);
LAB_1403998d6:
  param_1[0x32] = lVar7;
  *(byte *)(param_1 + 0x1d) = bVar2 | 4;
LAB_140399877:
  uVar4 = CONCAT71(uVar5,lVar7 == local_20);
LAB_14039987f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140399946 FUN_140399946 body=163 status=ok
// SIG undefined FUN_140399946(void)

void FUN_140399946(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(&DAT_14ca11fa4 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar1 + 2) = 0x2121;
  puVar1[3] = param_2;
  *(int *)(puVar1 + 4) = param_1;
  puVar1[5] = param_3;
  puVar1[6] = param_4;
  *(undefined1 *)(puVar1 + 7) = 0x3a;
  *puVar1 = &PTR_FUN_14a1fdf30;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x11;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0x10) = 0x302;
  puVar1[9] = DAT_14c9c0d38;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 1403999e9 FUN_1403999e9 body=1597 status=ok
// SIG undefined FUN_1403999e9(void)

longlong * FUN_1403999e9(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = 0x496f436e;
  puVar3 = (ulonglong *)param_1[1];
  piVar5 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar5) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar5;
  }
  if (((*(byte *)(param_1 + 5) & 1) == 0) || (local_44 == 0x496f436e)) {
    local_48 = 4;
    puVar3 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
      }
      else {
        FUN_14572512c(param_1,&local_48);
      }
    }
    else {
      local_48 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (((*(byte *)(param_1 + 5) & 1) == 0) || (local_48 == 4)) {
      puVar4 = *(undefined8 **)param_1[1];
      if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
        }
        else {
          thunk_FUN_146821949(param_1,param_2);
        }
      }
      else {
        *param_2 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
      }
      FUN_14039a028(param_1,param_2 + 1);
      FUN_140077068(param_1,param_2 + 3);
      FUN_14039a028(param_1,param_2 + 5);
      FUN_140077068(param_1,param_2 + 7);
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        local_68 = param_2[9];
        local_60 = *(undefined4 *)(param_2 + 10);
        FUN_14682cc76(&local_68,param_1);
      }
      else {
        FUN_140393a00(&local_58,param_1);
        if (param_2 + 9 == &local_58) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_2[9] != 0) {
            FUN_1400020a8();
          }
          param_2[9] = local_58;
          local_58 = 0;
          *(undefined4 *)(param_2 + 10) = local_50;
          *(undefined4 *)((longlong)param_2 + 0x54) = local_4c;
        }
      }
      (**(code **)(*param_1 + 0x10))
                (param_1,(longlong)*(int *)(param_2 + 0xc) << 4,
                 (longlong)*(int *)((longlong)param_2 + 100) << 4);
      uVar7 = 0;
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        uVar7 = *(undefined4 *)(param_2 + 0xc);
      }
      local_58 = CONCAT44(local_58._4_4_,uVar7);
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
        }
        else {
          FUN_14572512c(param_1,&local_58);
        }
        uVar2 = (uint)local_58;
      }
      else {
        uVar2 = *(uint *)*puVar3;
        local_58 = CONCAT44(local_58._4_4_,uVar2);
        *puVar3 = (ulonglong)puVar1;
      }
      puVar4 = param_2 + 0xb;
      if (uVar2 == 0) {
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (*(undefined4 *)(param_2 + 0xc) = 0, *(int *)((longlong)param_2 + 100) != 0)) {
          FUN_145707920(puVar4,0);
        }
      }
      else if ((((int)uVar2 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
              ((0x100000 < uVar2 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
        FUN_14572541c(param_1);
      }
      else if ((*(byte *)(param_1 + 5) & 1) == 0) {
        *(uint *)(param_2 + 0xc) = uVar2;
        lVar9 = 8;
        lVar10 = 0;
        do {
          lVar6 = param_2[0xb];
          FUN_14039a1fb(param_1,lVar6 + lVar9 + -8);
          FUN_145707877(param_1,lVar6 + lVar9);
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x10;
        } while (lVar10 < *(int *)(param_2 + 0xc));
      }
      else {
        *(undefined4 *)(param_2 + 0xc) = 0;
        if (*(uint *)((longlong)param_2 + 100) != uVar2) {
          FUN_145707920(puVar4);
          if ((int)(uint)local_58 < 1) goto LAB_140399bea;
        }
        iVar8 = 0;
        do {
          lVar9 = FUN_14570782a(puVar4);
          FUN_14039a1fb(param_1,lVar9);
          FUN_145707877(param_1,lVar9 + 8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(uint)local_58);
      }
LAB_140399bea:
      (**(code **)(*param_1 + 0x10))
                (param_1,(longlong)*(int *)(param_2 + 0xe) * 0x18,
                 (longlong)*(int *)((longlong)param_2 + 0x74) * 0x18);
      uVar7 = 0;
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        uVar7 = *(undefined4 *)(param_2 + 0xe);
      }
      local_58 = CONCAT44(local_58._4_4_,uVar7);
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
        }
        else {
          FUN_14572512c(param_1,&local_58);
        }
        uVar2 = (uint)local_58;
      }
      else {
        uVar2 = *(uint *)*puVar3;
        local_58 = CONCAT44(local_58._4_4_,uVar2);
        *puVar3 = (ulonglong)puVar1;
      }
      puVar4 = param_2 + 0xd;
      if (uVar2 == 0) {
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (*(undefined4 *)(param_2 + 0xe) = 0, *(int *)((longlong)param_2 + 0x74) != 0)) {
          FUN_1467f20f4(puVar4,0);
        }
      }
      else if ((((int)uVar2 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
              ((0xaaaaa < uVar2 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
        FUN_14572541c(param_1);
      }
      else if ((*(byte *)(param_1 + 5) & 1) == 0) {
        *(uint *)(param_2 + 0xe) = uVar2;
        lVar9 = 0x10;
        lVar10 = 0;
        do {
          lVar6 = param_2[0xd];
          FUN_14039a1fb(param_1,lVar6 + lVar9 + -0x10);
          FUN_14039a1fb(param_1,lVar6 + lVar9 + -8);
          FUN_145707877(param_1,lVar6 + lVar9);
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x18;
        } while (lVar10 < *(int *)(param_2 + 0xe));
      }
      else {
        *(undefined4 *)(param_2 + 0xe) = 0;
        if (*(uint *)((longlong)param_2 + 0x74) != uVar2) {
          FUN_1467f20f4(puVar4);
          if ((int)(uint)local_58 < 1) goto LAB_140399c77;
        }
        iVar8 = 0;
        do {
          lVar9 = FUN_1467f20b4(puVar4);
          FUN_14039a1fb(param_1,lVar9);
          FUN_14039a1fb(param_1,lVar9 + 8);
          FUN_145707877(param_1,lVar9 + 0x10);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(uint)local_58);
      }
LAB_140399c77:
      if (((*(byte *)(param_1 + 5) & 4) != 0) || (3 < local_48)) {
        piVar5 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar5 + 1) {
          local_58 = CONCAT44(local_58._4_4_,(uint)*(byte *)(param_2 + 0x13));
          (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
          if (1 < (uint)local_58) {
            FUN_14572541c(param_1);
          }
          *(bool *)(param_2 + 0x13) = (uint)local_58 != 0;
          if ((uint)local_58 == 0) goto LAB_140399cd6;
        }
        else {
          *(bool *)(param_2 + 0x13) = *piVar5 != 0;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          if ((*(byte *)(param_2 + 0x13) & 1) == 0) goto LAB_140399cd6;
        }
        FUN_14039a028(param_1,param_2 + 0xf);
        FUN_140077068(param_1,param_2 + 0x11);
      }
      goto LAB_140399cd6;
    }
  }
  FUN_14572541c(param_1);
LAB_140399cd6:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14039a028 FUN_14039a028 body=381 status=ok
// SIG undefined FUN_14039a028(void)

longlong * FUN_14039a028(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
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
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14039a2a2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14039a1fb(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14039a2a2(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14039a1a6(param_2);
        FUN_14039a1fb(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14039a1a6 FUN_14039a1a6 body=66 status=ok
// SIG undefined FUN_14039a1a6(void)

longlong FUN_14039a1a6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467f1fa8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_14039a1e8(lVar2,1);
  return lVar2;
}



// FUNCTION 14039a1e8 FUN_14039a1e8 body=19 status=ok
// SIG undefined FUN_14039a1e8(void)

void FUN_14039a1e8(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14039a1fb FUN_14039a1fb body=166 status=ok
// SIG undefined FUN_14039a1fb(void)

longlong * FUN_14039a1fb(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  puVar1 = *(undefined8 **)param_1[1];
  local_198 = param_1;
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039a2a2 FUN_14039a2a2 body=94 status=ok
// SIG undefined FUN_14039a2a2(void)

void FUN_14039a2a2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14039a300 FUN_14039a300 body=644 status=ok
// SIG undefined FUN_14039a300(void)

undefined8 FUN_14039a300(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_138 [32];
  code *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x1b8) == '\x01') {
    FUN_14706f26e(param_1);
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
  if (**(longlong **)(param_1 + 0x1d8) != 0) {
    local_118 = (code *)0x0;
    local_108 = (longlong *)0x0;
    lVar10 = **(longlong **)(param_1 + 0x1d8);
    if (lVar10 != 0) {
      do {
        uVar6 = uStack_e0;
        uVar5 = local_e8;
        uVar4 = uStack_f0;
        lVar1 = local_f8;
        pcVar2 = *(code **)(lVar10 + 0x10);
        uVar11 = *(undefined8 *)(lVar10 + 0x18);
        plVar12 = *(longlong **)(lVar10 + 0x20);
        uVar3 = *(undefined8 *)(lVar10 + 0x28);
        local_e8 = *(undefined8 *)(lVar10 + 0x40);
        uStack_e0 = *(undefined8 *)(lVar10 + 0x48);
        local_f8 = *(longlong *)(lVar10 + 0x30);
        uStack_f0 = *(undefined8 *)(lVar10 + 0x38);
        *(undefined8 *)(lVar10 + 0x40) = uVar5;
        *(undefined8 *)(lVar10 + 0x48) = uVar6;
        *(longlong *)(lVar10 + 0x30) = lVar1;
        *(undefined8 *)(lVar10 + 0x38) = uVar4;
        *(longlong **)(lVar10 + 0x20) = local_108;
        *(undefined8 *)(lVar10 + 0x28) = uStack_100;
        *(code **)(lVar10 + 0x10) = local_118;
        *(undefined8 *)(lVar10 + 0x18) = uStack_110;
        lVar1 = *(longlong *)(param_1 + 0x1d8);
        *(longlong *)(param_1 + 0x1d8) = lVar10;
        local_98 = *(longlong *)(lVar10 + 0x10);
        uStack_90 = *(undefined8 *)(lVar10 + 0x18);
        local_88 = *(longlong **)(lVar10 + 0x20);
        uStack_80 = *(undefined8 *)(lVar10 + 0x28);
        local_78 = *(undefined8 *)(lVar10 + 0x30);
        uStack_70 = *(undefined8 *)(lVar10 + 0x38);
        local_68 = *(undefined8 *)(lVar10 + 0x40);
        uStack_60 = *(undefined8 *)(lVar10 + 0x48);
        uVar8 = local_68;
        uVar9 = uStack_60;
        uVar6 = local_78;
        uVar7 = uStack_70;
        uVar5 = uStack_80;
        uVar4 = uStack_90;
        *(ulonglong *)(lVar10 + 0x40) = CONCAT44(uStack_a4,local_a8);
        *(ulonglong *)(lVar10 + 0x48) = CONCAT44(uStack_9c,uStack_a0);
        *(ulonglong *)(lVar10 + 0x30) = CONCAT44(uStack_b4,local_b8);
        *(ulonglong *)(lVar10 + 0x38) = CONCAT44(uStack_ac,uStack_b0);
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(ulonglong *)(lVar10 + 0x28) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(ulonglong *)(lVar10 + 0x18) = CONCAT44(uStack_cc,uStack_d0);
        uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        local_a8 = (undefined4)local_68;
        uStack_a4 = local_68._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        local_b8 = (undefined4)local_78;
        uStack_b4 = local_78._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        local_c8 = local_88;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_d8 = local_98;
        uStack_d0 = (undefined4)uStack_90;
        uStack_cc = uStack_90._4_4_;
        local_118 = pcVar2;
        uStack_110 = uVar11;
        local_108 = plVar12;
        uStack_100 = uVar3;
        uStack_90 = uVar4;
        uStack_80 = uVar5;
        local_78 = uVar6;
        uStack_70 = uVar7;
        local_68 = uVar8;
        uStack_60 = uVar9;
        if (local_98 != 0) {
          plVar12 = local_c8;
          if (local_88 == (longlong *)0x0) {
            plVar12 = (longlong *)&local_b8;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 0x10) != 0) {
            plVar12 = (longlong *)(lVar1 + 0x30);
            if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
              plVar12 = *(longlong **)(lVar1 + 0x20);
            }
            (**(code **)(*plVar12 + 0x10))();
          }
          FUN_1400020a8(lVar1);
        }
        pcVar2 = local_118;
        plVar12 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar12 = &local_f8;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar2)(uVar11);
        lVar10 = **(longlong **)(param_1 + 0x1d8);
      } while (lVar10 != 0);
    }
    if (local_118 != (code *)0x0) {
      plVar12 = local_108;
      if (local_108 == (longlong *)0x0) {
        plVar12 = &local_f8;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14039a586 FUN_14039a586 body=603 status=ok
// SIG undefined FUN_14039a586(void)

undefined8 FUN_14039a586(longlong param_1,uint *param_2)

{
  double _X;
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2[2] - 1 < 2) {
    if (*param_2 == 0xffffffff) {
      return 0;
    }
    if (param_2[1] == 0xffffffff) {
      return 0;
    }
  }
  else if (param_2[2] != 3) {
    return 0;
  }
  _X = *(double *)(param_2 + 4);
  if (_X <= -DAT_14cb1cda8) {
    return 0;
  }
  if (DAT_14cb1cda8 <= _X) {
    return 0;
  }
  if (*(double *)(param_2 + 6) <= -DAT_14cb1cdb0) {
    return 0;
  }
  if (DAT_14cb1cdb0 <= *(double *)(param_2 + 6)) {
    return 0;
  }
  if (*(double *)(param_2 + 8) <= -DAT_14cb1cdb8) {
    return 0;
  }
  if (DAT_14cb1cdb8 <= *(double *)(param_2 + 8)) {
    return 0;
  }
  iVar4 = _finite(_X);
  if ((((iVar4 != 0) && (iVar4 = _finite(*(double *)(param_2 + 6)), iVar4 != 0)) &&
      (iVar4 = _finite(*(double *)(param_2 + 8)), iVar4 != 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0xa0), lVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar6 = 1;
    if ((0x14 < uVar1) && (uVar6 = 2, 9 < uVar1 - 0x15)) {
      uVar6 = (uint)(uVar1 == 0x200) * 3;
    }
    if (param_2[2] == uVar6) {
      if (uVar6 == 1) {
        if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
          lVar7 = ((ulonglong)*param_2 << 0x20) + (longlong)(int)param_2[1];
          lVar8 = lVar2 + 0x58;
          if (*(longlong *)(lVar2 + 0x60) != 0) {
            lVar8 = *(longlong *)(lVar2 + 0x60);
          }
          iVar4 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(lVar2 + 0x68) - 1U &
                                   (int)((ulonglong)lVar7 >> 0x20) * 0x17 + param_2[1]) * 4);
          if (iVar4 != -1) {
            plVar5 = *(longlong **)(lVar2 + 0x20);
            do {
              plVar3 = plVar5 + (longlong)iVar4 * 3;
              if (*plVar3 == lVar7) goto LAB_14039a714;
              iVar4 = (int)plVar3[2];
            } while (iVar4 != -1);
          }
        }
      }
      else if (uVar6 == 2) {
        if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
          lVar7 = ((ulonglong)*param_2 << 0x20) + (longlong)(int)param_2[1];
          lVar8 = lVar2 + 0x58;
          if (*(longlong *)(lVar2 + 0x60) != 0) {
            lVar8 = *(longlong *)(lVar2 + 0x60);
          }
          iVar4 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(lVar2 + 0x68) - 1U &
                                   (int)((ulonglong)lVar7 >> 0x20) * 0x17 + param_2[1]) * 4);
          if (iVar4 != -1) {
            while (plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x18),
                  plVar3 = plVar5, *plVar5 != lVar7) {
              iVar4 = (int)plVar5[2];
              if (iVar4 == -1) {
                return 0;
              }
            }
LAB_14039a714:
            return CONCAT71((int7)((ulonglong)plVar5 >> 8),plVar3 != (longlong *)0x0);
          }
        }
      }
      else if (uVar6 != 0) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 14039a7e2 FUN_14039a7e2 body=70 status=ok
// SIG undefined FUN_14039a7e2(void)

void FUN_14039a7e2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14039af02();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14039a828 FUN_14039a828 body=55 status=ok
// SIG undefined FUN_14039a828(void)

void FUN_14039a828(longlong *param_1)

{
  FUN_14039aaa2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14039a860 FUN_14039a860 body=93 status=ok
// SIG undefined FUN_14039a860(void)

longlong FUN_14039a860(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14039a8be(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14039a8be FUN_14039a8be body=150 status=ok
// SIG undefined FUN_14039a8be(void)

longlong * FUN_14039a8be(longlong *param_1,longlong *param_2)

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



// FUNCTION 14039a954 FUN_14039a954 body=332 status=ok
// SIG undefined FUN_14039a954(void)

undefined4 FUN_14039a954(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [36];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0xffffffffffffffff;
  uVar4 = FUN_14488ab98(param_1,local_38);
  if ((char)uVar4 != '\0') {
    local_a4 = local_40;
    local_9c = 1;
    FUN_1402fa1c0(&local_98,local_38,&local_a4,*(undefined8 *)(param_1 + 0x20));
    plVar1 = local_50;
    *param_2 = local_98;
    *(undefined4 *)(param_2 + 1) = local_90;
    *(undefined4 *)(param_2 + 2) = local_88;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_84;
    *(undefined4 *)(param_2 + 3) = uStack_80;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_7c;
    *(undefined4 *)(param_2 + 4) = local_78;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_74;
    *(undefined4 *)(param_2 + 5) = uStack_70;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_6c;
    *(undefined4 *)(param_2 + 6) = local_68;
    *(undefined4 *)((longlong)param_2 + 0x34) = uStack_64;
    *(undefined4 *)(param_2 + 7) = uStack_60;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_5c;
    if (&local_98 != param_2) {
      param_2[8] = local_58;
      local_58 = 0;
      plVar3 = (longlong *)param_2[9];
      if (local_50 != plVar3) {
        local_50 = (longlong *)0x0;
        param_2[9] = plVar1;
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
    plVar1 = local_50;
    *(undefined4 *)(param_2 + 10) = local_48;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
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
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039aaa2 FUN_14039aaa2 body=127 status=ok
// SIG undefined FUN_14039aaa2(void)

void FUN_14039aaa2(longlong param_1,int param_2)

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
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
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



// FUNCTION 14039ab22 FUN_14039ab22 body=255 status=ok
// SIG undefined FUN_14039ab22(void)

void FUN_14039ab22(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = (ulonglong)(uVar2 * 2);
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4,&local_48);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1));
  uVar5 = uVar4;
  if ((uVar4 < local_48) &&
     (uVar1 = local_48 - 1, uVar5 = local_48, local_48 = uVar1, uVar1 <= uVar4)) {
    uVar5 = uVar4 + 1;
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2 & 0x7fffffff);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14039ac22 FUN_14039ac22 body=141 status=ok
// SIG undefined FUN_14039ac22(void)

void FUN_14039ac22(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x18);
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
  iVar5 = (int)param_1[1];
  iVar6 = ~param_2 + iVar5;
  if (iVar6 != 0) {
    iVar7 = 1;
    if (iVar6 < 1) {
      iVar7 = iVar6;
    }
    memmove((void *)(lVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar3 + (longlong)(iVar5 - iVar7) * 0x18),(longlong)iVar7 * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14039acb0 FUN_14039acb0 body=153 status=ok
// SIG undefined FUN_14039acb0(void)

void FUN_14039acb0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 14039ad4a FUN_14039ad4a body=136 status=ok
// SIG undefined FUN_14039ad4a(void)

void FUN_14039ad4a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0xb8);
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
    *(undefined4 *)(lVar3 + 0x68) = 0;
    if (*(longlong *)(lVar3 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_14039a828(lVar3 + 0x20);
    plVar4 = *(longlong **)(lVar3 + 0x18);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 14039add2 FUN_14039add2 body=137 status=ok
// SIG undefined FUN_14039add2(void)

void FUN_14039add2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14039ae5c FUN_14039ae5c body=166 status=ok
// SIG undefined FUN_14039ae5c(void)

void FUN_14039ae5c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0xa8);
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
    plVar4 = *(longlong **)(lVar3 + 0x98);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    plVar4 = *(longlong **)(lVar3 + 0x78);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    plVar4 = *(longlong **)(lVar3 + 0x58);
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
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 14039af02 FUN_14039af02 body=518 status=ok
// SIG undefined FUN_14039af02(void)

void FUN_14039af02(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[8];
  }
  iVar5 = (int)param_1[9];
  iVar12 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar12 = iVar5;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar12 >> 2) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar5 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 >> 0x20;
      iVar5 = (int)param_1[5];
    }
    iVar15 = (int)local_68;
    uVar9 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ != iVar5 || local_60 != plVar1) {
      do {
        *(undefined4 *)
         ((longlong)plVar8 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar12 * 0x18) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar10 & uVar9;
        plVar14 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar14 = local_60;
        }
        iVar3 = (int)local_60[3];
        lVar6 = (longlong)iVar15;
        uVar11 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar9;
        if (uVar11 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar4 = iVar12;
          if (iVar12 < iVar15) {
            iVar4 = iVar15;
          }
          if (iVar15 < iVar12) {
            lVar13 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar6 * 4 + 4);
              if (uVar11 != 0) {
                iVar15 = iVar15 + (int)lVar13 + 1;
                uVar9 = 0xffffffff;
                goto LAB_14039b081;
              }
              iVar7 = iVar7 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar4 - lVar6 != lVar13);
            uVar9 = 0xffffffff;
            iVar15 = iVar4;
          }
          iVar15 = iVar15 + 1;
          iVar12 = iVar3;
        }
        else {
LAB_14039b081:
          uVar10 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar10 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar12 = (iVar7 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar12) {
            iVar12 = iVar3;
          }
        }
      } while (iVar12 != iVar5 || local_60 != plVar1);
    }
  }
  else if (0 < iVar5) {
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)plVar8 + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[9]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14039b109 FUN_14039b109 body=2241 status=ok
// SIG undefined FUN_14039b109(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14039b109(uint *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  double _X;
  undefined8 ****ppppuVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  LPVOID pvVar9;
  longlong *plVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar28;
  uint uVar29;
  undefined1 auVar27 [16];
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  undefined1 auStack_4d8 [44];
  uint local_4ac;
  uint *local_4a8;
  longlong local_4a0;
  undefined4 local_494;
  ulonglong local_490;
  undefined **local_488;
  undefined8 local_480;
  undefined8 local_478;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  undefined4 uStack_444;
  undefined8 uStack_440;
  longlong local_438;
  longlong local_430;
  uint local_428;
  uint local_424;
  longlong local_420;
  undefined8 local_418;
  longlong local_410;
  undefined8 local_408;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [12];
  undefined1 local_3dc [4];
  undefined8 ****local_3d8;
  undefined8 *local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined ***local_3b0;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  uint local_398;
  undefined8 *local_390;
  undefined1 *local_388;
  undefined4 *local_380;
  undefined8 *local_378;
  undefined1 *local_370;
  undefined8 local_358;
  undefined6 local_350;
  undefined2 uStack_34a;
  undefined6 uStack_348;
  undefined8 local_340;
  undefined6 local_328;
  undefined2 uStack_322;
  undefined6 uStack_320;
  undefined8 local_318;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_208;
  undefined8 uStack_200;
  uint local_1f8;
  undefined8 *local_1f0;
  undefined1 *local_1e8;
  undefined4 *local_1e0;
  undefined8 *local_1d8;
  undefined8 ****local_1c8 [2];
  undefined1 local_1b8 [56];
  float local_180;
  undefined4 local_17c;
  int local_150;
  undefined1 local_a8 [16];
  uint local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  FUN_14039a7e2(param_2);
  uVar14 = 9;
  if (param_1[2] - 1 < 2) {
    if ((*param_1 == 0xffffffff) || (param_1[1] == 0xffffffff)) goto LAB_14039b8c4;
  }
  else if (param_1[2] != 3) goto LAB_14039b8c4;
  _X = *(double *)(param_1 + 4);
  if ((((_X <= -DAT_14cb1c738) ||
       ((((DAT_14cb1c738 <= _X || (*(double *)(param_1 + 6) <= -DAT_14cb1c740)) ||
         (DAT_14cb1c740 <= *(double *)(param_1 + 6))) ||
        ((*(double *)(param_1 + 8) <= -DAT_14cb1c748 || (DAT_14cb1c748 <= *(double *)(param_1 + 8)))
        )))) || (iVar6 = _finite(_X), iVar6 == 0)) ||
     (((iVar6 = _finite(*(double *)(param_1 + 6)), iVar6 == 0 ||
       (iVar6 = _finite(*(double *)(param_1 + 8)), iVar6 == 0)) || (param_1[2] != 2))))
  goto LAB_14039b8c4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar14 = 4;
    goto LAB_14039b8c4;
  }
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (DAT_14cb1d000 == 0) {
LAB_14039b90d:
    uVar15 = 0;
  }
  else {
    pvVar9 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(((longlong)pvVar9 << 0x20) + 0x100000000 >> 0x20));
    if ((int)pvVar9 != 0) goto LAB_14039b90d;
    AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x250));
    uVar15 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  }
  uVar14 = 5;
  if ((*(longlong *)(lVar13 + 0x78) != 0) &&
     (ppppuVar2 = *(undefined8 *****)(*(longlong *)(lVar13 + 0x78) + 0x140),
     ppppuVar2 != (undefined8 ****)0x0)) {
    uVar7 = 0xffffffff;
    uVar26 = 0xffffffff;
    if (param_1[2] == 2) {
      uVar7 = *param_1;
      uVar26 = param_1[1];
    }
    uVar16 = 0xffffffff;
    if (-1 < (int)(uVar7 | uVar26)) {
      uVar16 = uVar7 << 0x16 | uVar26;
    }
    uVar7 = uVar16 >> 0x16;
    uVar14 = 1;
    if ((((int)uVar7 < *(int *)(ppppuVar2 + 8)) &&
        (lVar3 = *(longlong *)((longlong)ppppuVar2[7] + (ulonglong)(uVar7 * 0x120) + 8), lVar3 != 0)
        ) && ((int)(uVar16 & 0x3fffff) < *(int *)(*(longlong *)(lVar3 + 0x20) + 0x20))) {
      fVar31 = (float)*(double *)(param_1 + 4) * 0.01;
      fVar32 = (float)*(double *)(param_1 + 6) * 0.01;
      fVar33 = (float)*(double *)(param_1 + 8) * 0.01;
      fVar34 = (float)*(double *)(param_1 + 8) * 0.01;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x38);
      auVar22 = *(undefined1 (*) [16])(lVar4 + 0x80);
      auVar23 = *(undefined1 (*) [16])(lVar4 + 0x90);
      if (*(byte *)(lVar3 + 0x40) != 0) {
        auVar27._0_8_ = auVar22._4_8_;
        auVar27._8_4_ = auVar22._0_4_;
        auVar27._12_4_ = auVar22._12_4_;
        uVar26 = (uint)*(byte *)(lVar3 + 0x40);
        auVar19._0_4_ = 0x16a8300 << uVar26;
        auVar19._4_4_ = 0x502ab000 << uVar26;
        auVar19._8_4_ = 0xa2a8c00 << uVar26;
        auVar19._12_4_ = 0 << uVar26;
        auVar20._0_4_ = 0xa154c00 << uVar26;
        auVar20._4_4_ = 0x1554300 << uVar26;
        auVar20._8_4_ = 0x50157000 << uVar26;
        auVar20._12_4_ = 0 << uVar26;
        auVar21 = blendvps(auVar22,auVar27,auVar19);
        auVar24._4_4_ = auVar22._0_4_;
        auVar24._0_4_ = auVar22._8_4_;
        auVar24._8_4_ = auVar22._4_4_;
        auVar24._12_4_ = auVar22._12_4_;
        auVar22 = blendvps(auVar21,auVar24,auVar20);
        uVar35 = (ulonglong)uVar26;
        uVar26 = (0xae71e0U >> uVar35) << 0x1f;
        uVar28 = (0xb9e306U >> uVar35) << 0x1f;
        uVar29 = (0xeb903cU >> uVar35) << 0x1f;
        uVar30 = (0U >> uVar35) << 0x1f;
        auVar21._0_8_ = CONCAT44(auVar22._4_4_ ^ uVar28,auVar22._0_4_ ^ uVar26);
        auVar21._8_4_ = auVar22._8_4_ ^ uVar29;
        auVar21._12_4_ = auVar22._12_4_ ^ uVar30;
        auVar36._0_8_ = auVar23._4_8_;
        auVar36._8_4_ = auVar23._0_4_;
        auVar36._12_4_ = auVar23._12_4_;
        auVar24 = blendvps(auVar23,auVar36,auVar19);
        auVar22._4_4_ = auVar23._0_4_;
        auVar22._0_4_ = auVar23._8_4_;
        auVar22._8_4_ = auVar23._4_4_;
        auVar22._12_4_ = auVar23._12_4_;
        auVar22 = blendvps(auVar24,auVar22,auVar20);
        auVar25._0_4_ = auVar22._0_4_ ^ uVar26;
        auVar25._4_4_ = auVar22._4_4_ ^ uVar28;
        auVar25._8_4_ = auVar22._8_4_ ^ uVar29;
        auVar25._12_4_ = auVar22._12_4_ ^ uVar30;
        auVar23._8_4_ = auVar21._8_4_;
        auVar23._0_8_ = auVar21._0_8_;
        auVar23._12_4_ = auVar21._12_4_;
        auVar22 = minps(auVar23,auVar25);
        auVar23 = maxps(auVar21,auVar25);
      }
      fVar17 = ((float)param_1[0x18] + 15.0) * 0.01;
      auVar18._0_4_ =
           -(uint)((auVar22._0_4_ + *(float *)(lVar3 + 0x50)) - fVar17 <= fVar31 &&
                  fVar31 <= auVar23._0_4_ + *(float *)(lVar3 + 0x50) + fVar17);
      auVar18._4_4_ =
           -(uint)((auVar22._4_4_ + *(float *)(lVar3 + 0x54)) - fVar17 <= fVar32 &&
                  fVar32 <= auVar23._4_4_ + *(float *)(lVar3 + 0x54) + fVar17);
      auVar18._8_4_ =
           -(uint)((auVar22._8_4_ + *(float *)(lVar3 + 0x58)) - fVar17 <= fVar33 &&
                  fVar33 <= auVar23._8_4_ + *(float *)(lVar3 + 0x58) + fVar17);
      auVar18._12_4_ =
           -(uint)((auVar22._12_4_ + *(float *)(lVar3 + 0x5c)) - fVar17 <= fVar34 &&
                  fVar34 <= auVar23._12_4_ + *(float *)(lVar3 + 0x5c) + fVar17);
      uVar11 = movmskps((int)lVar3,auVar18);
      if ((~(byte)uVar11 & 7) == 0) {
        local_4ac = (uint)uVar15;
        local_1c8[0] = (undefined8 ****)(CONCAT44(uVar7,uVar16) & 0xffffffff003fffff);
        local_3d8 = local_1c8;
        local_3d0 = &local_208;
        local_208 = (ulonglong *)((ulonglong)local_208 & 0xffffffff00000000);
        local_4a8 = param_1;
        FUN_1449760ea(param_2,&local_488,&local_3d8,0);
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_3fc = 0xffffffff;
        local_420 = 0;
        local_418 = 0x8000000000000000;
        local_410 = 0;
        local_408._0_4_ = 0;
        local_408._4_4_ = 0x80000000;
        FUN_14039ab22(&local_420,&PTR_vftable_14c6e47c0,0x20000);
        if (((int)local_418 < 0x20000) || ((int)local_418 != 0x20000)) {
          local_418 = CONCAT44(local_418._4_4_,0x20000);
        }
        if ((local_408._4_4_ & 0x7ffffe00) < 0x90200) {
          FUN_14039ab22(&local_410,&PTR_vftable_14c6e47c0,0x90200);
        }
        puVar5 = local_4a8;
        if (((int)local_408 < 0x90200) || ((int)local_408 != 0x90200)) {
          local_408._0_4_ = 0x90200;
        }
        local_438 = local_420;
        local_428 = local_418._4_4_ & 0x7fffffff;
        local_430 = local_410;
        local_424 = local_408._4_4_ & 0x7fffffff;
        local_4a0 = lVar13;
        FUN_144b42e20(local_1c8);
        iVar6 = 0;
        uStack_440 = 0;
        local_448 = (float)puVar5[0x18] * 0.01;
        local_448 = local_448 + local_448;
        local_180 = (float)puVar5[0x16] * 0.01;
        local_480 = 0xffffffff;
        local_478 = 1;
        local_488 = &PTR_FUN_14ab9efc0;
        local_370 = local_1b8;
        local_17c = 0;
        local_468 = fVar31 - local_180;
        fStack_464 = fVar32 - local_180;
        fStack_460 = fVar33 - local_180;
        fStack_45c = fVar34 - local_180;
        local_458 = local_180 + fVar31;
        fStack_454 = local_180 + fVar32;
        fStack_450 = local_180 + fVar33;
        fStack_44c = local_180 + fVar34;
        local_3c0 = 0xbf800000bf800000;
        local_358 = 0xffffffffffffffff;
        local_340 = 0;
        local_318 = 0;
        local_350 = 0;
        uStack_34a = 0;
        uStack_348 = 0;
        local_328 = 0;
        uStack_322 = 0;
        uStack_320 = 0;
        local_308 = 0xffffffff;
        local_300 = 0;
        local_2c8 = 0xffffffff;
        local_2c0 = 0;
        local_288 = 0xffffffff;
        local_280 = 0;
        uStack_278 = 0;
        local_270 = 0;
        uStack_268 = 0;
        local_238 = _DAT_14c6dae80;
        uStack_234 = uRam000000014c6dae84;
        uStack_230 = uRam000000014c6dae88;
        uStack_22c = uRam000000014c6dae8c;
        local_228 = _DAT_14c6dae80 ^ 0x80000000;
        uStack_224 = uRam000000014c6dae84 ^ 0x80000000;
        uStack_220 = uRam000000014c6dae88 ^ 0x80000000;
        uStack_21c = uRam000000014c6dae8c ^ 0x80000000;
        local_3b8 = 0;
        local_3b0 = &local_488;
        local_3d0 = (undefined8 *)CONCAT44(uStack_444,local_448);
        uStack_3c8 = 0;
        local_378 = &local_3f8;
        local_388 = local_3e8;
        local_390 = &local_3f8;
        local_380 = &local_3fc;
        local_208 = (ulonglong *)CONCAT44(fVar32,fVar31);
        uStack_200 = (undefined4 *)CONCAT44(fVar34,fVar33);
        local_3d8 = ppppuVar2;
        local_3a8 = fVar31;
        fStack_3a4 = fVar32;
        fStack_3a0 = fVar33;
        fStack_39c = fVar34;
        local_398 = uVar16;
        local_1f8 = uVar16;
        local_1f0 = local_390;
        local_1e8 = local_388;
        local_1e0 = local_380;
        local_1d8 = local_378;
        local_1c8[0] = &local_3d8;
        FUN_144b42d20(local_1c8,&local_3d8);
        do {
          if ((int)local_4a8[0x17] <= iVar6 && 0 < (int)local_4a8[0x17]) break;
          iVar8 = FUN_144b42c50(local_1c8);
          if (local_98 != 0xffffffff) {
            local_490 = CONCAT44(local_98 >> 0x16,local_98) & 0xffffffff003fffff;
            if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
              plVar10 = (longlong *)param_2[8];
              if ((longlong *)param_2[8] == (longlong *)0x0) {
                plVar10 = param_2 + 7;
              }
              iVar12 = *(int *)((longlong)plVar10 +
                               (ulonglong)
                               ((int)param_2[9] - 1U &
                               (local_98 >> 0x16) * 0x17 + (local_98 & 0x3fffff)) * 4);
              if (iVar12 != -1) {
                do {
                  puVar1 = (ulonglong *)(*param_2 + (longlong)iVar12 * 0x18);
                  if (*puVar1 == local_490) {
                    if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) goto LAB_14039b7c3;
                    break;
                  }
                  iVar12 = (int)puVar1[2];
                } while (iVar12 != -1);
              }
            }
            local_494 = 0;
            local_208 = &local_490;
            uStack_200 = &local_494;
            FUN_1449760ea(param_2,local_3dc,&local_208,0);
          }
LAB_14039b7c3:
          iVar6 = iVar6 + 1;
        } while (iVar8 == 0 && local_150 != 0);
        FUN_14039b9cc(local_a8,&PTR_vftable_14c6e47a0);
        uVar7 = local_408._4_4_;
        local_408 = (ulonglong)local_408._4_4_ << 0x20;
        if ((-1 < (int)uVar7) && (local_410 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0);
        }
        uVar15 = local_418;
        lVar13 = local_4a0;
        local_410 = 0;
        local_408 = CONCAT44(0x80000000,(int)local_408);
        local_418 = local_418 & 0xffffffff00000000;
        if ((-1 < (longlong)uVar15) && (local_420 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0);
        }
        uVar14 = 0;
        uVar15 = (ulonglong)local_4ac;
      }
    }
  }
  if ((char)uVar15 != '\0') {
    ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar9 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar9 + -1));
  }
LAB_14039b8c4:
  if ((local_80 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 14039b9cc FUN_14039b9cc body=137 status=ok
// SIG undefined FUN_14039b9cc(void)

void FUN_14039b9cc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar1) {
    uVar3 = 0;
    do {
      if (*(int *)(*param_1 + uVar3 * 8) != -1) {
        *(undefined4 *)(*param_1 + uVar3 * 8) = 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (iVar1 + 1 != uVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 & 0x80000000;
  if (-1 < (int)uVar2 && *param_1 != 0) {
    (**(code **)(*param_2 + 0x18))
              (param_2,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 8 + 8);
  }
  *param_1 = 0;
  param_1[1] = -0x100000000;
  return;
}



// FUNCTION 14039ba56 FUN_14039ba56 body=373 status=ok
// SIG undefined FUN_14039ba56(void)

void FUN_14039ba56(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14039badf;
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
LAB_14039badf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14039bbcc FUN_14039bbcc body=111 status=ok
// SIG undefined FUN_14039bbcc(void)

void FUN_14039bbcc(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  for (lVar2 = param_1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
    if ((*(uint *)(lVar2 + 8) & 0x30) != 0) {
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (((bVar1 = *(byte *)(*(longlong *)(param_1 + 0x20) + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
      (iVar3 = FUN_14490d72a(), iVar3 == 3)))) {
    FUN_14039bc3c(param_1,param_2,0x80000000);
    return;
  }
  return;
}



// FUNCTION 14039bc3c FUN_14039bc3c body=616 status=ok
// SIG undefined FUN_14039bc3c(void)

void FUN_14039bc3c(longlong param_1,byte param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
      return;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) &&
     ((bVar4 = *(byte *)(lVar1 + 0x152), bVar4 == 1 ||
      ((bVar4 < 7 && ((0x68U >> (bVar4 & 0x1f) & 1) != 0)))))) {
    if (param_3 < 0) {
      if ((((*(char *)(param_1 + 0x1a0) != '\x01') ||
           (*(uint *)(param_1 + 0x19c) != (uint)(param_2 ^ 1))) ||
          (cVar5 = FUN_14049c8be(param_1), cVar5 == '\0')) ||
         ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1ac) &&
          (*(char *)(param_1 + 0x1b0) == '\0')))) {
        *(undefined1 *)(param_1 + 0x1b0) = 0;
        if (*(char *)(param_1 + 0x1a0) == '\x01') {
          *(undefined1 *)(param_1 + 0x1a0) = 0;
        }
        *(undefined4 *)(param_1 + 0x1a4) = 0;
        if (param_2 == 0) {
          cVar5 = FUN_14039bea4(param_1);
          if (cVar5 == '\0') {
            return;
          }
          lVar2 = *(longlong *)(param_1 + 0x178);
          if (lVar2 != 0) {
            AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0xe0));
            bVar4 = *(byte *)(lVar2 + 0x243);
            ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0xe0));
            if ((bVar4 & 0xc) == 8) {
              return;
            }
          }
          *(undefined1 *)(param_1 + 0x1b0) = 1;
          *(undefined4 *)(param_1 + 0x19c) = 1;
        }
        else {
          lVar2 = param_1;
          if ((*(byte *)(param_1 + 0xe8) & 0x40) != 0) {
            return;
          }
          for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
            if ((*(uint *)(lVar2 + 8) & 0x30) != 0) {
              return;
            }
          }
          lVar2 = *(longlong *)(param_1 + 0x20);
          if (lVar2 == 0) {
            return;
          }
          bVar4 = *(byte *)(lVar2 + 0x152);
          if (bVar4 != 1) {
            if (6 < bVar4) {
              return;
            }
            if ((0x68U >> (bVar4 & 0x1f) & 1) == 0) {
              return;
            }
          }
          if (*(char *)(lVar2 + 0xd9) == '\x01') {
            bVar4 = *(byte *)(lVar2 + 0xd8);
          }
          else {
            if (DAT_14cae8fe0 == '\0') {
              if (((*(longlong *)(lVar2 + 0x30) == 0) ||
                  (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar3 == 0)) ||
                 (*(longlong *)(lVar3 + 0x3f0) == 0)) {
                bVar4 = 0;
              }
              else {
                bVar4 = FUN_14572a5ea();
              }
            }
            else {
              bVar4 = 1;
            }
            *(byte *)(lVar2 + 0xd8) = bVar4;
            *(undefined1 *)(lVar2 + 0xd9) = 1;
          }
          if ((bVar4 & 1) == 0) {
            return;
          }
          if ((*(longlong *)(param_1 + 0x178) != 0) && (cVar5 = FUN_144b2c346(lVar1), cVar5 != '\0')
             ) {
            return;
          }
          *(undefined1 *)(param_1 + 0x1b0) = 1;
          *(undefined4 *)(param_1 + 0x19c) = 0;
        }
        *(undefined1 *)(param_1 + 0x1a0) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1b0) = 0;
      if (*(char *)(param_1 + 0x1a0) == '\x01') {
        *(undefined1 *)(param_1 + 0x1a0) = 0;
      }
      *(int *)(param_1 + 0x1a4) = param_3;
    }
  }
  return;
}



// FUNCTION 14039bea4 FUN_14039bea4 body=50 status=ok
// SIG undefined FUN_14039bea4(void)

ulonglong FUN_14039bea4(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong unaff_RDI;
  undefined7 uVar6;
  
  lVar2 = param_1;
  if ((*(byte *)(param_1 + 0xe8) & 0x20) == 0) {
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
      if ((*(uint *)(lVar2 + 8) & 0x30) != 0) {
        return 0;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      bVar1 = *(byte *)(lVar2 + 0x152);
      if ((bVar1 == 1) || ((unaff_RDI = 0, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
        uVar6 = (undefined7)(unaff_RDI >> 8);
        if (*(char *)(lVar2 + 0xdb) == '\x01') {
          unaff_RDI = CONCAT71(uVar6,*(undefined1 *)(lVar2 + 0xda));
        }
        else {
          unaff_RDI = CONCAT71(uVar6,1);
          cVar4 = FUN_145707980();
          if (cVar4 == '\0') {
            if (((*(longlong *)(lVar2 + 0x30) == 0) ||
                (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar3 == 0)) ||
               (*(longlong *)(lVar3 + 0x3f0) == 0)) {
              unaff_RDI = 0;
            }
            else {
              uVar5 = FUN_147dc0ce4();
              unaff_RDI = (ulonglong)uVar5;
            }
          }
          *(char *)(lVar2 + 0xda) = (char)unaff_RDI;
          *(undefined1 *)(lVar2 + 0xdb) = 1;
        }
      }
      return unaff_RDI & 0xffffff01;
    }
  }
  return 0;
}



// FUNCTION 14039bed6 FUN_14039bed6 body=143 status=ok
// SIG undefined FUN_14039bed6(void)

ulonglong FUN_14039bed6(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong unaff_RDI;
  undefined7 uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x152);
  if ((bVar1 == 1) || ((unaff_RDI = 0, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    uVar5 = (undefined7)(unaff_RDI >> 8);
    if (*(char *)(param_1 + 0xdb) == '\x01') {
      unaff_RDI = CONCAT71(uVar5,*(undefined1 *)(param_1 + 0xda));
    }
    else {
      unaff_RDI = CONCAT71(uVar5,1);
      cVar3 = FUN_145707980();
      if (cVar3 == '\0') {
        if (((*(longlong *)(param_1 + 0x30) == 0) ||
            (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar2 == 0)) ||
           (*(longlong *)(lVar2 + 0x3f0) == 0)) {
          unaff_RDI = 0;
        }
        else {
          uVar4 = FUN_147dc0ce4();
          unaff_RDI = (ulonglong)uVar4;
        }
      }
      *(char *)(param_1 + 0xda) = (char)unaff_RDI;
      *(undefined1 *)(param_1 + 0xdb) = 1;
    }
  }
  return unaff_RDI & 0xffffff01;
}



// FUNCTION 14039bf66 FUN_14039bf66 body=134 status=ok
// SIG undefined FUN_14039bf66(void)

void FUN_14039bf66(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14039c1ce();
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_14039bfee(*(longlong *)(param_1 + 0x390),&local_1c,&local_20);
    if (((local_1c != 0) && (local_20 != 0)) && ((*(byte *)(param_2 + 0xb0) & 4) == 0)) {
      *(float *)(param_2 + 0xa4) = (float)local_1c / (float)local_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039bfee FUN_14039bfee body=351 status=ok
// SIG undefined FUN_14039bfee(void)

void FUN_14039bfee(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
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
  undefined1 *local_40;
  code *local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  *param_3 = 0;
  lVar2 = *(longlong *)(param_1 + 0x430);
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_1 + 0x430);
      if (lVar2 == 0) goto LAB_14039c07b;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30 && (*(longlong *)(lVar2 + 0x78) != 0)))) {
      FUN_14039c14e(*(longlong *)(lVar2 + 0x78),&local_30);
      *param_2 = (int)(double)local_30;
      *param_3 = (int)local_28;
    }
  }
LAB_14039c07b:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14039c14e FUN_14039c14e body=126 status=ok
// SIG undefined FUN_14039c14e(void)

void FUN_14039c14e(longlong param_1,double *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0xf8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
    *param_2 = (double)local_28;
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x28))(*(longlong **)(param_1 + 0xf8),&local_28);
    param_2[1] = (double)local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039c1ce FUN_14039c1ce body=3769 status=ok
// SIG undefined FUN_14039c1ce(void)

void FUN_14039c1ce(longlong *param_1,double *param_2,undefined8 param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char *pcVar23;
  char cVar24;
  int iVar25;
  double dVar26;
  undefined8 uVar27;
  double *pdVar28;
  double *pdVar29;
  uint uVar30;
  longlong lVar31;
  undefined4 *puVar32;
  double *pdVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_d78 [32];
  undefined8 *local_d58;
  undefined4 local_d50;
  undefined4 *local_d48;
  double *local_d40;
  undefined1 *local_d38;
  undefined4 local_d2c;
  undefined4 local_d28;
  undefined4 uStack_d24;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  double local_d18;
  undefined4 local_d08;
  undefined8 local_d04;
  undefined4 local_cfc;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined4 local_c54;
  byte local_c4b;
  undefined4 local_c28;
  double local_bf0;
  double dStack_be8;
  double local_be0;
  undefined4 local_bd8;
  undefined4 uStack_bd4;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  double local_bc8;
  double local_bb8;
  double dStack_bb0;
  double local_ba8;
  double local_b98;
  double dStack_b90;
  undefined1 local_b88;
  undefined2 uStack_b87;
  undefined1 uStack_b85;
  undefined2 uStack_b84;
  undefined1 uStack_b82;
  undefined1 uStack_b81;
  undefined1 uStack_b80;
  undefined4 local_b7c;
  undefined1 local_b78;
  undefined4 local_b74;
  undefined2 local_b70;
  longlong local_b48;
  undefined8 local_b40;
  undefined4 local_b38 [4];
  longlong local_b28;
  undefined8 local_b20;
  undefined1 local_b18 [152];
  undefined4 local_a80;
  char local_a7c;
  double local_a78;
  undefined4 local_a70;
  undefined1 local_a68 [2088];
  longlong local_240;
  longlong local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188 [12];
  char local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_e0;
  
  uVar34 = (undefined4)param_3;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_d78;
  if (((param_1[0x1d0] != 0) && ((*(byte *)(param_1 + 0x31c) & 1) != 0)) &&
     (cVar24 = FUN_147c918e4(param_2,param_1 + 0x86), cVar24 != '\0')) goto LAB_14039cd64;
  pdVar28 = param_2 + 2;
  memcpy(local_b18,pdVar28,0x98);
  local_a7c = *(char *)((longlong)param_2 + 0xac);
  if (local_a7c == '\x01') {
    local_a80 = *(undefined4 *)(param_2 + 0x15);
  }
  local_a70 = *(undefined4 *)(param_2 + 0x17);
  local_a78 = param_2[0x16];
  FUN_144903306(local_a68,param_2 + 0x18);
  local_1a8 = param_2[0x130];
  dStack_1a0 = param_2[0x131];
  local_198 = param_2[0x132];
  dStack_190 = param_2[0x133];
  local_128 = *(char *)(param_2 + 0x140);
  if (local_128 == '\x01') {
    pdVar29 = param_2 + 0x134;
    pdVar33 = local_188;
    for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
      *pdVar33 = *pdVar29;
      pdVar29 = pdVar29 + 1;
      pdVar33 = pdVar33 + 1;
    }
  }
  local_f8 = param_2[0x146];
  local_118 = *(undefined4 *)(param_2 + 0x142);
  uStack_114 = *(undefined4 *)((longlong)param_2 + 0xa14);
  uStack_110 = *(undefined4 *)(param_2 + 0x143);
  uStack_10c = *(undefined4 *)((longlong)param_2 + 0xa1c);
  local_108 = *(undefined4 *)(param_2 + 0x144);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0xa24);
  uStack_100 = *(undefined4 *)(param_2 + 0x145);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0xa2c);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf9430) && (FUN_144b3d300(&DAT_14caf9430), DAT_14caf9430 == -1)) {
    FUN_1400e6e60(&DAT_14caf8a00);
    atexit(FUN_14364b76f);
    _Init_thread_footer(&DAT_14caf9430);
  }
  FUN_1447ff17a(pdVar28,&DAT_14caf8a00);
  *(int *)(param_2 + 8) = (int)param_1[0x75];
  *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)((longlong)param_1 + 0x3ac);
  *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)((longlong)param_1 + 0x3b4);
  *(undefined4 *)((longlong)param_2 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0x3bc);
  *(uint *)(param_2 + 0x16) =
       *(uint *)(param_2 + 0x16) & 0xfffffffb | *(uint *)(param_1 + 0x5cb) & 4;
  *(byte *)((longlong)param_2 + 0xb4) = *(byte *)(param_1 + 0x5ca) & 1;
  *(undefined4 *)(param_2 + 0x17) = 0x3f800000;
  *(byte *)((longlong)param_2 + 0x8c) = *(byte *)(param_1 + 0x5ca) >> 1 & 1;
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)((longlong)param_1 + 0x2e54);
  *(byte *)((longlong)param_2 + 0x94) = *(byte *)(param_1 + 0x5cb) & 1;
  *(byte *)((longlong)param_2 + 0x95) = *(byte *)(param_1 + 0x5cb) >> 1 & 1;
  if (*param_2 == 0.0) {
LAB_14039c46e:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf9440) && (FUN_144b3d300(&DAT_14caf9440), DAT_14caf9440 == -1)) {
      FUN_1446f470e(&DAT_14caf9438,L"Fixed",1);
      _Init_thread_footer(&DAT_14caf9440);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf9450) && (FUN_144b3d300(&DAT_14caf9450), DAT_14caf9450 == -1)) {
      FUN_1446f470e(&DAT_14caf9448,L"ThirdPerson",1);
      _Init_thread_footer(&DAT_14caf9450);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf9460) && (FUN_144b3d300(&DAT_14caf9460), DAT_14caf9460 == -1)) {
      FUN_1446f470e(&DAT_14caf9458,L"FreeCam",1);
      _Init_thread_footer(&DAT_14caf9460);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf9470) && (FUN_144b3d300(&DAT_14caf9470), DAT_14caf9470 == -1)) {
      FUN_1446f470e(&DAT_14caf9468,L"FreeCam_Default",1);
      _Init_thread_footer(&DAT_14caf9470);
    }
    puVar32 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((int)puVar32[0x44] < DAT_14caf9480) {
      puVar32 = &DAT_14caf9480;
      FUN_144b3d300();
      if (DAT_14caf9480 == -1) {
        FUN_1446f470e(&DAT_14caf9478,L"FirstPerson",1);
        puVar32 = &DAT_14caf9480;
        _Init_thread_footer();
      }
    }
    uVar35 = SUB84(puVar32,0);
    lVar31 = param_1[0x74];
    if ((lVar31 == DAT_14caf9438) && ((char)param_1[0x5d1] == '\0')) {
      FUN_1447ff17a(pdVar28,local_b18);
    }
    else if (((lVar31 == DAT_14caf9448) && ((char)param_1[0x5d1] != '\x01')) ||
            ((lVar31 == DAT_14caf9458 || (lVar31 == DAT_14caf9468)))) {
      dVar26 = *param_2;
      lVar31 = *(longlong *)((longlong)dVar26 + 0x1c8);
      if (lVar31 == 0) {
        local_ba8 = DAT_14c8464f0;
        local_bb8 = DAT_14c8464e0;
        dStack_bb0 = DAT_14c8464e8;
        local_bc8 = DAT_14c846508;
        local_bd8 = (undefined4)DAT_14c8464f8;
        uStack_bd4 = DAT_14c8464f8._4_4_;
        uStack_bd0 = (undefined4)DAT_14c846500;
        uStack_bcc = DAT_14c846500._4_4_;
      }
      else {
        local_bb8 = *(double *)(lVar31 + 0x260);
        dStack_bb0 = *(double *)(lVar31 + 0x268);
        local_ba8 = *(double *)(lVar31 + 0x270);
        pcVar23 = *(char **)(lVar31 + 0x240);
        dVar16 = *(double *)(lVar31 + 0x248);
        dVar18 = *(double *)(lVar31 + 0x250);
        dVar2 = *(double *)(lVar31 + 600);
        pdVar29 = *(double **)(lVar31 + 0x228);
        local_cf8 = pcVar23;
        uStack_cf0 = dVar16;
        local_ce8 = dVar18;
        uStack_ce0 = dVar2;
        if (pdVar29 == (double *)0x0) {
          uVar35 = 0x40;
          pdVar29 = (double *)FUN_14001cc68(0x40,0x10);
          dVar26 = DAT_14c8463d8;
          *pdVar29 = DAT_14c8463d0;
          pdVar29[1] = dVar26;
          dVar26 = DAT_14c8463e8;
          pdVar29[2] = DAT_14c8463e0;
          pdVar29[3] = dVar26;
          dVar26 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar29[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar29[5] = dVar26;
          dVar26 = DAT_14c846508;
          pdVar29[6] = DAT_14c846508;
          *(double **)(lVar31 + 0x228) = pdVar29;
        }
        auVar12._8_4_ = (int)-(ulonglong)(dVar16 != pdVar29[1]);
        auVar12._0_8_ = -(ulonglong)((double)pcVar23 != *pdVar29);
        auVar12._12_4_ = (int)(-(ulonglong)(dVar16 != pdVar29[1]) >> 0x20);
        iVar25 = movmskpd(SUB84(dVar26,0),auVar12);
        auVar14._8_4_ = (int)-(ulonglong)(dVar2 != pdVar29[3]);
        auVar14._0_8_ = -(ulonglong)(dVar18 != pdVar29[2]);
        auVar14._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar29[3]) >> 0x20);
        uVar30 = movmskpd(uVar35,auVar14);
        if ((uVar30 & 0x3fffffff) != 0 || iVar25 != 0) {
          *(undefined4 *)(pdVar29 + 2) = (undefined4)local_ce8;
          *(undefined4 *)((longlong)pdVar29 + 0x14) = local_ce8._4_4_;
          *(undefined4 *)(pdVar29 + 3) = (undefined4)uStack_ce0;
          *(undefined4 *)((longlong)pdVar29 + 0x1c) = uStack_ce0._4_4_;
          *(undefined4 *)pdVar29 = (undefined4)local_cf8;
          *(undefined4 *)((longlong)pdVar29 + 4) = local_cf8._4_4_;
          *(undefined4 *)(pdVar29 + 1) = (undefined4)uStack_cf0;
          *(undefined4 *)((longlong)pdVar29 + 0xc) = uStack_cf0._4_4_;
          FUN_1448052ee(&local_cf8,&local_b98);
          pdVar29[6] = (double)CONCAT17(uStack_b81,
                                        CONCAT16(uStack_b82,
                                                 CONCAT24(uStack_b84,
                                                          CONCAT13(uStack_b85,
                                                                   CONCAT21(uStack_b87,local_b88))))
                                       );
          pdVar29[4] = local_b98;
          pdVar29[5] = dStack_b90;
        }
        local_bc8 = pdVar29[6];
        local_bd8 = *(undefined4 *)(pdVar29 + 4);
        uStack_bd4 = *(undefined4 *)((longlong)pdVar29 + 0x24);
        uStack_bd0 = *(undefined4 *)(pdVar29 + 5);
        uStack_bcc = *(undefined4 *)((longlong)pdVar29 + 0x2c);
      }
      dVar26 = (double)param_1[0x72];
      if ((dVar26 != 0.0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(dVar26);
      }
      if (*param_2 == dVar26) {
        (**(code **)(*(longlong *)param_1[0x72] + 0xe60))((longlong *)param_1[0x72],&local_bb8);
      }
      local_d2c = uVar34;
      if ((param_1[0x74] == DAT_14caf9458) || (param_1[0x74] == DAT_14caf9468)) {
        (**(code **)(*(longlong *)param_1[0x72] + 0x680))((longlong *)param_1[0x72],&local_bd8);
      }
      dVar22 = local_ba8 + (double)param_1[0x5ba];
      dVar13 = dStack_bb0 + (double)param_1[0x5b9];
      dVar21 = local_bb8 + (double)param_1[0x5b8];
      dVar26 = (double)CONCAT44(uStack_bd4,local_bd8) * 0.01745329238474369;
      dVar16 = (double)CONCAT44(uStack_bcc,uStack_bd0) * 0.01745329238474369;
      dVar18 = local_bc8 * 0.01745329238474369;
      dVar2 = sin(dVar26);
      dVar3 = sin(dVar16);
      dVar4 = sin(dVar18);
      sin(0.0);
      dVar5 = cos(dVar26);
      dVar6 = cos(dVar16);
      dVar7 = cos(dVar18);
      cos(0.0);
      dVar26 = (double)param_1[0x5b7];
      dVar16 = (double)param_1[0x5b5];
      dVar18 = (double)param_1[0x5b6];
      dVar19 = DAT_14c8464e0 * 0.0;
      dVar20 = DAT_14c8464e8 * 0.0;
      dVar10 = DAT_14c8464f0 * 0.0;
      dVar17 = (double)FUN_144719204(local_bd8,0);
      dVar15 = (double)FUN_144719204(uStack_bd0,0);
      dVar8 = sin(dVar17 * 0.017453292519943295);
      dVar17 = cos(dVar17 * 0.017453292519943295);
      dVar9 = sin(dVar15 * 0.017453292519943295);
      dVar15 = cos(dVar15 * 0.017453292519943295);
      dVar11 = (double)*(float *)(param_1 + 0x5b4);
      local_be0 = ((dVar2 * dVar16 - dVar5 * dVar4 * dVar18) + dVar5 * dVar7 * dVar26 + dVar10 +
                  dVar22) - dVar8 * dVar11;
      dStack_be8 = (dVar20 + dVar26 * (dVar6 * dVar4 - dVar3 * dVar2 * dVar7) +
                             dVar18 * (dVar2 * dVar4 * dVar3 + dVar6 * dVar7) +
                             dVar16 * dVar3 * dVar5 + dVar13) - dVar9 * dVar17 * dVar11;
      local_bf0 = (dVar21 + dVar19 + dVar26 * -(dVar2 * dVar7 * dVar6 + dVar3 * dVar4) +
                                     dVar18 * (dVar2 * dVar4 * dVar6 - dVar3 * dVar7) +
                                     dVar16 * dVar5 * dVar6) - dVar15 * dVar17 * dVar11;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cafa488) && (FUN_144b3d300(&DAT_14cafa488), DAT_14cafa488 == -1))
      {
        local_cf8 = "FreeCam";
        uStack_cf0 = (double)CONCAT35(uStack_cf0._5_3_,7);
        uVar30 = FUN_14001a6c0(&local_cf8,1);
        DAT_14cafa480 = (double)(ulonglong)uVar30;
        _Init_thread_footer(&DAT_14cafa488);
      }
      uVar34 = local_d2c;
      local_b74 = 0;
      dStack_b90 = 0.0;
      local_b70 = 0x101;
      local_b48 = 0;
      local_b40 = 0x800000000;
      local_b28 = 0;
      local_b20 = 0x400000000;
      local_b88 = 0;
      local_b7c = 0;
      local_b98 = DAT_14cafa480;
      uStack_b87 = 1;
      uStack_b85 = 0;
      local_b78 = 0;
      uStack_b84 = 0;
      uStack_b82 = 0;
      if (param_1 != (longlong *)0x0) {
        local_b38[0] = *(undefined4 *)((longlong)param_1 + 0xc);
        local_b20 = 0x400000001;
        dStack_b90 = (double)param_1[3];
      }
      uVar30 = (uint)(param_1 != (longlong *)0x0);
      uStack_b81 = 1;
      uStack_b80 = 1;
      if (*param_2 != 0.0) {
        local_b20 = CONCAT44(local_b20._4_4_,uVar30 + 1);
        local_b38[uVar30] = *(undefined4 *)((longlong)*param_2 + 0xc);
      }
      memset(&local_cf8,0,0x100);
      local_c28 = 0xffffffff;
      local_cf8 = (char *)CONCAT44(0x3f800000,(undefined4)local_cf8);
      local_c54 = 0xffffffff;
      uVar27 = FUN_1447210f0(param_1);
      local_d48 = &local_d08;
      local_d08 = 1;
      local_d04 = 0x4140000041400000;
      local_cfc = 0x41400000;
      local_d38 = &DAT_14cad0f10;
      local_d40 = &local_b98;
      local_d58 = &DAT_14c8463d0;
      local_d50 = 4;
      FUN_14021655c(uVar27,&local_cf8,&local_bb8,&local_bf0);
      pdVar29 = (double *)&local_ce8;
      if ((local_c4b & 1) == 0) {
        pdVar29 = &local_bf0;
      }
      param_2[4] = pdVar29[2];
      dVar26 = pdVar29[1];
      *pdVar28 = *pdVar29;
      param_2[3] = dVar26;
      param_2[7] = local_bc8;
      *(undefined4 *)(param_2 + 5) = local_bd8;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_bd4;
      *(undefined4 *)(param_2 + 6) = uStack_bd0;
      *(undefined4 *)((longlong)param_2 + 0x34) = uStack_bcc;
      if (local_b28 != 0) {
        FUN_1400020a8();
      }
      if (local_b48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((lVar31 != DAT_14caf9478) || ((char)param_1[0x5d1] != '\0')) {
        (**(code **)(*param_1 + 0x840))(param_1,param_2,param_3);
        goto LAB_14039cc1e;
      }
      (**(code **)(*(longlong *)*param_2 + 0x588))((longlong *)*param_2,pdVar28,param_2 + 5);
    }
    if ((*(byte *)((longlong)param_1 + 0x2e59) & 0x40) != 0) goto LAB_14039cc1e;
  }
  else {
    lVar31 = FUN_140995914();
    dVar26 = *param_2;
    if (((dVar26 == 0.0) || (lVar31 == 0)) ||
       ((lVar1 = *(longlong *)((longlong)dVar26 + 0x10), lVar1 == 0 ||
        ((*(int *)(lVar1 + 0x38) < *(int *)(lVar31 + 0x38) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8) !=
          lVar31 + 0x30)))))) goto LAB_14039c46e;
    (**(code **)(**(longlong **)((longlong)dVar26 + 0x398) + 0x5f8))
              (*(longlong **)((longlong)dVar26 + 0x398),uVar34,pdVar28);
LAB_14039cc1e:
    (**(code **)(*param_1 + 0x6d8))(param_1,uVar34,pdVar28);
  }
  local_d18 = param_2[7];
  local_d28 = *(undefined4 *)(param_2 + 5);
  uStack_d24 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_d20 = *(undefined4 *)(param_2 + 6);
  uStack_d1c = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar31 = param_1[0x39];
  if (lVar31 != 0) {
    local_ce8 = param_2[4] - *(double *)(lVar31 + 0x270);
    uStack_cf0 = param_2[3] - *(double *)(lVar31 + 0x268);
    local_cf8 = (char *)(param_2[2] - *(double *)(lVar31 + 0x260));
    local_d48 = (undefined4 *)((ulonglong)local_d48 & 0xffffffffffffff00);
    local_d50 = 0;
    local_d58 = (undefined8 *)0x0;
    FUN_1407fd932(lVar31,&local_cf8,&local_d28,0);
  }
  if (((*(byte *)(param_1 + 0x5ca) & 2) != 0) && (*param_2 != 0.0)) {
    lVar31 = *(longlong *)((longlong)*param_2 + 0x1c8);
    if (lVar31 == 0) {
      pdVar28 = &DAT_14c8464e0;
      uVar34 = SUB84(DAT_14c8464f0,0);
      uVar35 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar34 = (undefined4)*(undefined8 *)(lVar31 + 0x270);
      uVar35 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x270) >> 0x20);
      pdVar28 = (double *)(lVar31 + 0x260);
    }
    dVar26 = pdVar28[1];
    param_2[0x144] = *pdVar28 - param_2[2];
    param_2[0x145] = dVar26 - param_2[3];
    param_2[0x146] = (double)CONCAT44(uVar35,uVar34) - param_2[4];
  }
  (**(code **)(*param_1 + 0x778))(param_1,param_2);
  if (local_128 == '\x01') {
    local_128 = '\0';
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_240 != 0) {
    FUN_1400020a8();
  }
LAB_14039cd64:
  if ((local_e0 ^ (ulonglong)auStack_d78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14039d08e FUN_14039d08e body=57 status=ok
// SIG undefined FUN_14039d08e(void)

void FUN_14039d08e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5feb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5feb0 = FUN_140002ddd(FUN_1464ea333,uVar1,L"GbxLevelRoadConnectorDef");
  }
  return;
}



// FUNCTION 14039d0c8 FUN_14039d0c8 body=144 status=ok
// SIG undefined FUN_14039d0c8(void)

undefined8 * FUN_14039d0c8(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar5 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[9];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & *param_2) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == *param_2) {
            if ((((lVar1 != 0) &&
                 (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0)) {
              return puVar4;
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  return &DAT_14c9a1308;
}



// FUNCTION 14039d158 FUN_14039d158 body=353 status=ok
// SIG undefined FUN_14039d158(void)

void FUN_14039d158(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14039d1dd;
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
LAB_14039d1dd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14039d2ba FUN_14039d2ba body=1198 status=ok
// SIG undefined FUN_14039d2ba(void)

void FUN_14039d2ba(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  code **local_a8;
  longlong *local_98;
  LPCRITICAL_SECTION local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 **local_68;
  byte local_60;
  code *local_58;
  undefined1 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14019cc7c();
  local_90 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_90);
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    lVar5 = *(longlong *)(param_2 + 0x10);
    puVar13 = *(undefined1 **)(param_1 + 0x148);
    if (*(undefined1 **)(param_1 + 0x148) == (undefined1 *)0x0) {
      puVar13 = param_1 + 0x140;
    }
    iVar12 = *(int *)(puVar13 +
                     (ulonglong)
                     (*(int *)(param_1 + 0x150) - 1U &
                     (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar12 * 0x18);
        if (*plVar1 == lVar5) {
          if ((plVar1 != (longlong *)0x0) && (uVar3 = *(uint *)(plVar1 + 1), uVar3 != 0)) {
            local_98 = (longlong *)(param_1 + 0xb8);
            lVar6 = *(longlong *)(param_1 + 0xa8);
            lVar7 = *(longlong *)(param_1 + 0xb8);
            lVar10 = (longlong)(int)(~*(uint *)(param_1 + 0xdc) & uVar3) * 0x30;
            puVar2 = (undefined8 *)(lVar7 + lVar10);
            uVar17 = *(ulonglong *)(lVar7 + lVar10) & 0xffffffffffff;
            uVar16 = *(ulonglong *)(lVar7 + lVar10) >> 0x30;
            lVar15 = uVar16 * 0x98;
            lVar5 = lVar6 + lVar15;
            uVar4 = *(uint *)(lVar7 + 0x28 + lVar10);
            local_b8 = *(undefined4 *)(lVar6 + 0x24 + lVar15);
            lVar11 = *(longlong *)(lVar7 + 8 + lVar10) + -1 + uVar17;
            local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar6 + 0x20 + lVar15));
            local_c8 = lVar11;
            local_88 = param_1 + 0x140;
            local_80 = (longlong *)(param_1 + 0x108);
            cVar8 = FUN_14039d7f2(lVar5 + (ulonglong)(uVar4 & 0xff) * 0xc + 0x34 +
                                  (longlong)*(int *)(lVar7 + 0x2c + lVar10) * 4,local_98,uVar3,
                                  uVar17);
            if (cVar8 != '\0') {
              local_60 = (byte)(uVar4 >> 9) & 1;
              local_a8 = &local_58;
              local_58 = FUN_1403dcc12;
              local_b0 = *(undefined4 *)(lVar5 + 0x24);
              local_b8 = *(undefined4 *)(lVar5 + 0x20);
              local_c0 = *(undefined8 *)(lVar5 + 0x18);
              local_c8 = 0;
              local_70 = param_1;
              local_68 = (undefined1 **)lVar11;
              local_50 = &local_70;
              FUN_14039daef(lVar5 + 0x80,param_1 + 0xe0,uVar17,lVar11);
              if (*(char *)(*(longlong *)(lVar5 + 8) + 600) == '\0') {
                FUN_14039dfac(param_1,0,uVar16);
              }
              local_68 = &local_78;
              local_70 = &LAB_14707f1e8;
              local_b0 = *(undefined4 *)(lVar5 + 0x24);
              local_b8 = *(undefined4 *)(lVar5 + 0x20);
              local_c0 = *(undefined8 *)(lVar5 + 0x18);
              local_c8 = 0;
              local_a8 = (code **)&local_70;
              local_78 = param_1;
              FUN_1401706c6(*(undefined4 *)(lVar5 + 0x7c),param_1 + 0xe0,uVar17,lVar11);
            }
            lVar5 = puVar2[3];
            uVar3 = *(uint *)(puVar2 + 4);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
            *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
            *(undefined4 *)((longlong)puVar2 + 0x2c) = 3;
            if (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x13c)) goto LAB_14039d5b9;
            puVar13 = local_88;
            if (*(undefined1 **)(param_1 + 0x148) != (undefined1 *)0x0) {
              puVar13 = *(undefined1 **)(param_1 + 0x148);
            }
            iVar12 = *(int *)(puVar13 +
                             ((longlong)((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5) &
                             (longlong)*(int *)(param_1 + 0x150) - 1U) * 4);
            if (iVar12 == -1) goto LAB_14039d5b9;
            goto LAB_14039d57f;
          }
          break;
        }
        iVar12 = (int)plVar1[2];
      } while (iVar12 != -1);
    }
  }
LAB_14039d602:
  cVar8 = FUN_144976b20(param_1);
  if (cVar8 != '\0') {
    FUN_1449d54ce(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014039d63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_90);
  return;
LAB_14039d57f:
  plVar1 = (longlong *)(*local_80 + (longlong)iVar12 * 0x18);
  if (*plVar1 == lVar5) {
    iVar9 = *(int *)(puVar13 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4);
    if (iVar9 == iVar12) {
      piVar14 = (int *)(puVar13 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4);
    }
    else {
      do {
        piVar14 = (int *)(*local_80 + (longlong)iVar9 * 0x18 + 0x10);
        iVar9 = *piVar14;
      } while (iVar9 != iVar12);
    }
    *piVar14 = (int)plVar1[2];
    FUN_14039d76a(local_80,iVar12,1);
LAB_14039d5b9:
    LOCK();
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    UNLOCK();
    uVar4 = *(uint *)(param_1 + 0xdc);
    puVar13 = param_1 + 200;
    iVar12 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar12 + 1U) {
      FUN_1446f48e2(puVar13,iVar12);
    }
    plVar1 = local_98;
    *(uint *)(*(longlong *)(param_1 + 200) + (longlong)iVar12 * 4) = uVar3 & ~uVar4;
    if (*(int *)(param_1 + 0xd0) + 1 != *(int *)(param_1 + 0xc0)) goto LAB_14039d602;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xc4) != 0) {
      FUN_14039e5ce(local_98);
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (*(int *)(param_1 + 0xd4) == 0) {
LAB_14039d72f:
      iVar9 = *(int *)(param_1 + 0xc0);
      *(uint *)(param_1 + 0xc0) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0xc4) < iVar9 + 1U) {
        FUN_140b25198(plVar1,iVar9);
      }
    }
    else {
      FUN_14481578e(puVar13,0);
      iVar12 = *(int *)(param_1 + 0xd0);
      if ((longlong)iVar12 == 0) goto LAB_14039d72f;
      iVar9 = *(int *)(*(longlong *)(param_1 + 200) + -4 + (longlong)iVar12 * 4);
      *(int *)(param_1 + 0xd0) = iVar12 + -1;
      FUN_14479f406(puVar13);
    }
    lVar5 = *plVar1;
    lVar11 = (longlong)iVar9 * 0x30;
    puVar2 = (undefined8 *)(lVar5 + 0x1c + lVar11);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar11);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar5 + lVar11) = 0;
    ((undefined8 *)(lVar5 + lVar11))[1] = 0;
    *(undefined4 *)(lVar5 + 0x2c + lVar11) = 1;
    goto LAB_14039d602;
  }
  iVar12 = (int)plVar1[2];
  if (iVar12 == -1) goto LAB_14039d5b9;
  goto LAB_14039d57f;
}



// FUNCTION 14039d76a FUN_14039d76a body=136 status=ok
// SIG undefined FUN_14039d76a(void)

void FUN_14039d76a(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14039d7f2 FUN_14039d7f2 body=765 status=ok
// SIG undefined FUN_14039d7f2(void)

char FUN_14039d7f2(uint *param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5,
                  int param_6,int param_7)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (*param_1 == 0) {
    return '\0';
  }
  uVar3 = param_4 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
  uVar7 = param_5 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
  puVar9 = (uint *)((longlong)(int)(*param_1 & ~DAT_14c99ff5c) * 0xc + DAT_14c99ff38);
  if (uVar3 == 0 && uVar7 == 0) {
    puVar4 = puVar9;
    if (param_6 == param_7) {
      uVar8 = *puVar9;
      if (uVar8 == 0) goto LAB_14039d98e;
      lVar10 = *param_2;
      lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
      if (uVar8 != param_3) {
        do {
          lVar11 = lVar5 * 0x30;
          uVar8 = *(uint *)(lVar10 + 0x24 + lVar11);
          if (uVar8 == 0) goto LAB_14039d98e;
          lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
        } while (uVar8 != param_3);
        goto LAB_14039d96a;
      }
      goto LAB_14039d972;
    }
LAB_14039d9be:
    cVar2 = FUN_14039d7f2(puVar4);
  }
  else {
    if (uVar3 == 0 && uVar7 != 0) {
      uVar8 = puVar9[1];
      if (uVar8 == 0) {
LAB_14039d98e:
        cVar2 = '\0';
        goto LAB_14039d9c3;
      }
      lVar10 = *param_2;
      lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
      if (uVar8 == param_3) {
        puVar4 = puVar9 + 1;
      }
      else {
        do {
          lVar11 = lVar5 * 0x30;
          uVar8 = *(uint *)(lVar10 + 0x24 + lVar11);
          if (uVar8 == 0) goto LAB_14039d98e;
          lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
        } while (uVar8 != param_3);
LAB_14039d96a:
        puVar4 = (uint *)(lVar10 + lVar11 + 0x24);
      }
    }
    else {
      if (param_6 != param_7) {
        puVar4 = puVar9 + 2;
        goto LAB_14039d9be;
      }
      uVar8 = puVar9[2];
      if (uVar8 == 0) goto LAB_14039d98e;
      lVar10 = *param_2;
      lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
      if (uVar8 != param_3) {
        do {
          lVar11 = lVar5 * 0x30;
          uVar8 = *(uint *)(lVar10 + 0x24 + lVar11);
          if (uVar8 == 0) goto LAB_14039d98e;
          lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
        } while (uVar8 != param_3);
        goto LAB_14039d96a;
      }
      puVar4 = puVar9 + 2;
    }
LAB_14039d972:
    *puVar4 = *(uint *)(lVar10 + 0x24 + lVar5 * 0x30);
    *(undefined4 *)(lVar10 + 0x24 + lVar5 * 0x30) = 0;
    cVar2 = '\x01';
  }
LAB_14039d9c3:
  iVar1 = DAT_14c99ff50;
  if (cVar2 == '\0') {
    return '\0';
  }
  if (*puVar9 != 0) {
    return cVar2;
  }
  if (puVar9[1] != 0) {
    return cVar2;
  }
  if (puVar9[2] != 0) {
    return cVar2;
  }
  uVar6 = ~DAT_14c99ff5c;
  uVar8 = *param_1;
  lVar10 = (longlong)(int)DAT_14c99ff50;
  DAT_14c99ff50 = DAT_14c99ff50 + 1;
  if (DAT_14c99ff54 < DAT_14c99ff50) {
    FUN_1446f48e2(&DAT_14c99ff48,iVar1);
  }
  *(uint *)(DAT_14c99ff48 + lVar10 * 4) = uVar6 & uVar8;
  if (DAT_14c99ff50 + 1 != DAT_14c99ff40) goto LAB_14039dad3;
  DAT_14c99ff40 = 0;
  if (DAT_14c99ff44 != 0) {
    FUN_1412582dc(0);
  }
  DAT_14c99ff50 = 0;
  if (DAT_14c99ff54 == 0) {
LAB_14039da9e:
    uVar8 = DAT_14c99ff40;
    DAT_14c99ff40 = DAT_14c99ff40 + 1;
    if (DAT_14c99ff44 < DAT_14c99ff40) {
      FUN_14629f588(uVar8);
    }
  }
  else {
    FUN_14481578e(&DAT_14c99ff48,0);
    if ((longlong)(int)DAT_14c99ff50 == 0) goto LAB_14039da9e;
    uVar8 = *(uint *)(DAT_14c99ff48 + -4 + (longlong)(int)DAT_14c99ff50 * 4);
    DAT_14c99ff50 = DAT_14c99ff50 - 1;
    FUN_14479f406(&DAT_14c99ff48);
  }
  lVar10 = DAT_14c99ff38;
  *(undefined8 *)(DAT_14c99ff38 + (longlong)(int)uVar8 * 0xc) = 0;
  *(undefined4 *)(lVar10 + 8 + (longlong)(int)uVar8 * 0xc) = 0;
LAB_14039dad3:
  *param_1 = 0;
  return '\x01';
}



// FUNCTION 14039daef FUN_14039daef body=1212 status=ok
// SIG undefined FUN_14039daef(void)

void FUN_14039daef(uint *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6,int param_7,int param_8,undefined8 *param_9)

{
  ulonglong *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b8;
  int local_b0;
  code **local_a8;
  ulonglong *local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  uint *local_78;
  code *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_1 == 0) goto LAB_14039df75;
  local_80 = param_4 << ((byte)param_7 & 0x3f);
  local_98 = (ulonglong *)((longlong)(int)(*param_1 & ~DAT_14c99ff5c) * 0xc + DAT_14c99ff38);
  local_88 = param_5 + param_6 + 1 >> 1;
  local_90 = param_3;
  local_78 = param_1;
  if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
    pcVar3 = (code *)*param_9;
    if (param_7 == param_8) {
      uVar7 = (uint)*local_98;
      if (uVar7 != 0) {
        uVar4 = param_9[1];
        puVar9 = local_98;
        do {
          lVar8 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar7) * 0x30;
          puVar1 = (ulonglong *)(*param_2 + lVar8);
          puVar12 = puVar1 + 4;
          uVar11 = *puVar1 & 0xffffffffffff;
          uVar2 = (uint)*puVar12;
          if ((uVar11 <= param_4) && (param_3 <= (*(longlong *)(*param_2 + 8 + lVar8) + uVar11) - 1)
             ) {
            local_4c = uVar7;
            cVar6 = (*pcVar3)(uVar4,&local_4c);
            param_3 = local_90;
            if (cVar6 == '\0') {
              uVar2 = (uint)*puVar12;
            }
            else {
              *(uint *)puVar9 = uVar2;
              puVar12 = puVar9;
            }
          }
          uVar7 = uVar2;
          puVar9 = puVar12;
        } while (uVar7 != 0);
      }
    }
    else {
      local_a8 = &local_60;
      local_58 = param_9[1];
      local_b8 = param_7 + 1;
      local_c0 = local_88 - 1;
      uVar11 = local_c0;
      if (param_4 < local_c0) {
        uVar11 = param_4;
      }
      local_b0 = param_8;
      local_c8 = param_5;
      local_60 = pcVar3;
      FUN_14039daef(local_98,param_2,param_3,uVar11);
      param_3 = local_90;
    }
  }
  uVar7 = *(uint *)((longlong)local_98 + 4);
  if (uVar7 != 0) {
    pcVar3 = (code *)*param_9;
    uVar4 = param_9[1];
    puVar9 = (ulonglong *)((longlong)local_98 + 4);
    do {
      lVar8 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar7) * 0x30;
      puVar1 = (ulonglong *)(*param_2 + lVar8);
      puVar12 = puVar1 + 4;
      uVar11 = *puVar1 & 0xffffffffffff;
      uVar2 = (uint)*puVar12;
      if ((uVar11 <= param_4) && (param_3 <= (*(longlong *)(*param_2 + 8 + lVar8) + uVar11) - 1)) {
        local_4c = uVar7;
        cVar6 = (*pcVar3)(uVar4,&local_4c);
        param_3 = local_90;
        if (cVar6 == '\0') {
          uVar2 = (uint)*puVar12;
        }
        else {
          *(uint *)puVar9 = uVar2;
          puVar12 = puVar9;
        }
      }
      uVar7 = uVar2;
      puVar9 = puVar12;
    } while (uVar7 != 0);
  }
  if (local_80 < 0) {
    pcVar3 = (code *)*param_9;
    if (param_7 == param_8) {
      uVar7 = (uint)local_98[1];
      if (uVar7 != 0) {
        uVar4 = param_9[1];
        puVar9 = local_98 + 1;
        do {
          lVar8 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar7) * 0x30;
          puVar1 = (ulonglong *)(*param_2 + lVar8);
          puVar12 = puVar1 + 4;
          uVar11 = *puVar1 & 0xffffffffffff;
          uVar2 = (uint)*puVar12;
          if ((uVar11 <= param_4) && (param_3 <= (*(longlong *)(*param_2 + 8 + lVar8) + uVar11) - 1)
             ) {
            local_4c = uVar7;
            cVar6 = (*pcVar3)(uVar4,&local_4c);
            param_3 = local_90;
            if (cVar6 == '\0') {
              uVar2 = (uint)*puVar12;
            }
            else {
              *(uint *)puVar9 = uVar2;
              puVar12 = puVar9;
            }
          }
          uVar7 = uVar2;
          puVar9 = puVar12;
        } while (uVar7 != 0);
      }
    }
    else {
      local_a8 = &local_70;
      local_68 = param_9[1];
      local_b8 = param_7 + 1;
      if (param_3 < local_88) {
        param_3 = local_88;
      }
      local_b0 = param_8;
      local_c0 = param_6;
      local_c8 = local_88;
      local_70 = pcVar3;
      FUN_14039daef(local_98 + 1,param_2,param_3,param_4);
    }
  }
  puVar5 = local_78;
  uVar7 = DAT_14c99ff50;
  if ((((int)*local_98 != 0) || (*(int *)((longlong)local_98 + 4) != 0)) || ((int)local_98[1] != 0))
  goto LAB_14039df75;
  uVar10 = ~DAT_14c99ff5c;
  uVar2 = *local_78;
  lVar8 = (longlong)(int)DAT_14c99ff50;
  DAT_14c99ff50 = DAT_14c99ff50 + 1;
  if (DAT_14c99ff54 < DAT_14c99ff50) {
    FUN_1446f48e2(&DAT_14c99ff48,uVar7);
  }
  *(uint *)(DAT_14c99ff48 + lVar8 * 4) = uVar10 & uVar2;
  if (DAT_14c99ff50 + 1 == DAT_14c99ff40) {
    DAT_14c99ff40 = 0;
    if (DAT_14c99ff44 != 0) {
      FUN_1412582dc(0);
    }
    DAT_14c99ff50 = 0;
    if (DAT_14c99ff54 == 0) {
LAB_14039df3a:
      uVar7 = DAT_14c99ff40;
      DAT_14c99ff40 = DAT_14c99ff40 + 1;
      if (DAT_14c99ff44 < DAT_14c99ff40) {
        FUN_14629f588(uVar7);
      }
    }
    else {
      FUN_14481578e(&DAT_14c99ff48,0);
      if ((longlong)(int)DAT_14c99ff50 == 0) goto LAB_14039df3a;
      uVar7 = *(uint *)(DAT_14c99ff48 + -4 + (longlong)(int)DAT_14c99ff50 * 4);
      DAT_14c99ff50 = DAT_14c99ff50 - 1;
      FUN_14479f406(&DAT_14c99ff48);
    }
    lVar8 = DAT_14c99ff38;
    *(undefined8 *)(DAT_14c99ff38 + (longlong)(int)uVar7 * 0xc) = 0;
    *(undefined4 *)(lVar8 + 8 + (longlong)(int)uVar7 * 0xc) = 0;
  }
  *puVar5 = 0;
LAB_14039df75:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14039dfac FUN_14039dfac body=1569 status=ok
// SIG undefined FUN_14039dfac(void)

void FUN_14039dfac(LARGE_INTEGER param_1,char param_2,ushort param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  code **local_f8;
  char local_e9;
  ulonglong local_e8;
  uint local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  code *local_c8;
  LARGE_INTEGER *local_c0;
  LARGE_INTEGER local_b8;
  double local_b0;
  byte *local_a8;
  code *local_a0;
  LARGE_INTEGER *local_98;
  byte local_89;
  code *local_88;
  LARGE_INTEGER *local_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (DAT_14c9a0018 == 0 || param_2 != '\0') {
    if (param_3 == 0xffff) {
      uVar5 = *(ushort *)(param_1.QuadPart + 0xb0);
      if (uVar5 == 0) goto LAB_14039e598;
      uVar12 = 0;
    }
    else {
      uVar5 = param_3 + 1;
      uVar12 = (ulonglong)param_3;
    }
    uVar15 = (ulonglong)uVar5;
    local_e9 = param_2;
    local_d8 = uVar15;
    do {
      if (*(longlong *)(*(longlong *)(param_1.QuadPart + 0xa8) + uVar12 * 0x98) != 0) {
        iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1.QuadPart + 0xa8) + uVar12 * 0x98 + 8) +
                        0x254);
        if ((-1 < (longlong)iVar7) && (iVar7 < *(int *)(param_1.QuadPart + 0x160))) {
          iVar6 = 0;
          if (param_2 == '\0') {
            iVar6 = DAT_14c75f604;
          }
          lVar14 = (longlong)iVar7 * 0x10;
          uVar9 = *(int *)(*(longlong *)(param_1.QuadPart + 0x158) + 8 + lVar14) - iVar6;
          if (0 < (int)uVar9) {
            local_e8 = (ulonglong)uVar9;
            uVar15 = 0;
            local_dc = uVar9;
            local_d0 = uVar12;
            do {
              uVar12 = *(ulonglong *)
                        (*(longlong *)(*(longlong *)(param_1.QuadPart + 0x158) + lVar14) +
                        uVar15 * 8);
              uVar13 = uVar12 & 0xffffffffffff;
              local_c8 = FUN_142b0f8ca;
              lVar11 = (uVar12 >> 0x30) * 0x98 + *(longlong *)(param_1.QuadPart + 0xa8);
              local_100 = *(undefined4 *)(lVar11 + 0x24);
              local_108 = *(undefined4 *)(lVar11 + 0x20);
              local_110 = *(undefined8 *)(lVar11 + 0x18);
              local_118 = 0;
              local_f8 = &local_c8;
              local_c0 = &local_b8;
              local_b8 = param_1;
              FUN_14039daef(lVar11 + 0x80,param_1.QuadPart + 0xe0,uVar13,uVar13);
              uVar9 = local_dc;
              uVar15 = uVar15 + 1;
            } while (local_e8 != uVar15);
            puVar1 = (undefined8 *)(*(longlong *)(param_1.QuadPart + 0x158) + lVar14);
            iVar7 = *(int *)(*(longlong *)(param_1.QuadPart + 0x158) + 8 + lVar14) - local_dc;
            uVar10 = local_dc;
            if (iVar7 != 0) {
              memmove((void *)*puVar1,(void *)((longlong)*puVar1 + (ulonglong)local_dc * 8),
                      (longlong)iVar7 << 3);
              uVar10 = *(uint *)(puVar1 + 1);
            }
            *(uint *)(puVar1 + 1) = uVar10 - uVar9;
            uVar12 = local_d0;
            uVar15 = local_d8;
            param_2 = local_e9;
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar15);
  }
  else {
    local_e8 = (ulonglong)*(ushort *)(param_1.QuadPart + 0xb0);
    local_78 = (void *)0x0;
    uVar9 = *(uint *)(param_1.QuadPart + 0x160);
    uStack_70 = (ulonglong)uVar9;
    if ((longlong)(int)uVar9 != 0) {
      FUN_1401c3474(&local_78);
    }
    memset(local_78,0,(longlong)(int)uVar9);
    lVar14 = (longlong)DAT_14c75f5f8;
    lVar11 = local_e8 * 0x98;
    do {
      if (*(longlong *)(param_1.QuadPart + 0x40) <= lVar14 * 0x100000) break;
      if (0 < (int)uStack_70) {
        lVar8 = 0;
        do {
          *(undefined1 *)((longlong)local_78 + lVar8) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uStack_70);
      }
      if ((int)local_e8 == 0) break;
      bVar4 = true;
      lVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1.QuadPart + 0xa8) + lVar8) != 0) {
          iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1.QuadPart + 0xa8) + 8 + lVar8) + 0x254
                          );
          lVar16 = (longlong)iVar7;
          if (((-1 < lVar16) && (iVar7 < *(int *)(param_1.QuadPart + 0x160))) &&
             (*(char *)((longlong)local_78 + lVar16) == '\0')) {
            *(undefined1 *)((longlong)local_78 + lVar16) = 1;
            lVar16 = lVar16 * 0x10;
            if (*(int *)(*(longlong *)(param_1.QuadPart + 0x158) + 8 + lVar16) != 0) {
              uVar12 = **(ulonglong **)(*(longlong *)(param_1.QuadPart + 0x158) + lVar16);
              uVar15 = uVar12 & 0xffffffffffff;
              local_80 = &local_b8;
              local_88 = FUN_142b0f828;
              lVar2 = *(longlong *)(param_1.QuadPart + 0xa8) + 0x80 + (uVar12 >> 0x30) * 0x98;
              local_100 = *(undefined4 *)(lVar2 + -0x5c);
              local_108 = *(undefined4 *)(lVar2 + -0x60);
              local_110 = *(undefined8 *)(lVar2 + -0x68);
              local_118 = 0;
              local_f8 = &local_88;
              local_b8 = param_1;
              FUN_14039daef(lVar2,param_1.QuadPart + 0xe0,uVar15,uVar15);
              puVar1 = (undefined8 *)(*(longlong *)(param_1.QuadPart + 0x158) + lVar16);
              iVar7 = *(int *)(*(longlong *)(param_1.QuadPart + 0x158) + 8 + lVar16);
              iVar6 = 1;
              if (iVar7 != 1) {
                memmove((void *)*puVar1,(void *)((longlong)*puVar1 + 8),(longlong)(iVar7 + -1) << 3)
                ;
                iVar6 = *(int *)(puVar1 + 1);
              }
              *(int *)(puVar1 + 1) = iVar6 + -1;
              bVar4 = false;
            }
          }
        }
        lVar8 = lVar8 + 0x98;
      } while (lVar11 - lVar8 != 0);
    } while (!bVar4);
    if ((DAT_14c9a0070 != 0.0) || (NAN(DAT_14c9a0070))) {
      QueryPerformanceCounter(&local_b8);
      if ((int)local_e8 != 0) {
        dVar3 = (double)local_b8.QuadPart * DAT_14c83f420;
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1.QuadPart + 0xa8) + uVar12 * 0x98) != 0) {
            iVar7 = *(int *)(*(longlong *)
                              (*(longlong *)(param_1.QuadPart + 0xa8) + uVar12 * 0x98 + 8) + 0x254);
            if ((-1 < (longlong)iVar7) && (iVar7 < *(int *)(param_1.QuadPart + 0x160))) {
              lVar14 = *(longlong *)(param_1.QuadPart + 0x158);
              lVar11 = (longlong)iVar7 * 0x10;
              if (0 < *(int *)(lVar14 + 8 + lVar11)) {
                lVar8 = 0;
                uVar9 = 0;
                do {
                  uVar15 = *(ulonglong *)(*(longlong *)(lVar14 + lVar11) + lVar8 * 8);
                  uVar13 = uVar15 & 0xffffffffffff;
                  local_89 = 1;
                  local_a8 = &local_89;
                  local_98 = &local_b8;
                  local_a0 = (code *)&LAB_14707dd12;
                  lVar14 = *(longlong *)(param_1.QuadPart + 0xa8) + 0x80 + (uVar15 >> 0x30) * 0x98;
                  local_100 = *(undefined4 *)(lVar14 + -0x5c);
                  local_108 = *(undefined4 *)(lVar14 + -0x60);
                  local_110 = *(undefined8 *)(lVar14 + -0x68);
                  local_118 = 0;
                  local_f8 = &local_a0;
                  local_b8 = param_1;
                  local_b0 = dVar3 + 16777216.0;
                  FUN_14039daef(lVar14,param_1.QuadPart + 0xe0,uVar13,uVar13);
                  uVar9 = uVar9 + local_89;
                  if (local_89 == 0) break;
                  lVar8 = lVar8 + 1;
                  lVar14 = *(longlong *)(param_1.QuadPart + 0x158);
                } while (lVar8 < *(int *)(lVar14 + 8 + lVar11));
                if (uVar9 != 0) {
                  puVar1 = (undefined8 *)(*(longlong *)(param_1.QuadPart + 0x158) + lVar11);
                  iVar7 = *(int *)(*(longlong *)(param_1.QuadPart + 0x158) + 8 + lVar11) - uVar9;
                  uVar10 = uVar9;
                  if (iVar7 != 0) {
                    memmove((void *)*puVar1,(void *)((longlong)*puVar1 + (ulonglong)uVar9 * 8),
                            (longlong)iVar7 << 3);
                    uVar10 = *(uint *)(puVar1 + 1);
                  }
                  *(uint *)(puVar1 + 1) = uVar10 - uVar9;
                }
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != local_e8);
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14039e598:
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039e5ce FUN_14039e5ce body=48 status=ok
// SIG undefined FUN_14039e5ce(void)

void FUN_14039e5ce(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14039e5fe FUN_14039e5fe body=5449 status=ok
// SIG undefined FUN_14039e5fe(void)

void FUN_14039e5fe(longlong *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  void *_Src;
  int *piVar22;
  int *piVar23;
  int iVar24;
  uint *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_308 [40];
  longlong *local_2e0;
  int local_2d4;
  longlong *local_2d0;
  int local_2c4;
  longlong *local_2c0;
  longlong *local_2b8;
  ulonglong local_2b0;
  longlong *local_2a8;
  uint local_29c;
  longlong local_298;
  longlong local_290;
  longlong *local_288;
  longlong local_280;
  longlong local_278;
  ulonglong local_270;
  longlong local_268;
  undefined8 local_260;
  int local_258;
  uint uStack_254;
  undefined8 local_250;
  uint uStack_248;
  int iStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined2 local_1cf;
  undefined1 local_1cd;
  int local_1cc;
  undefined1 local_1c4 [12];
  longlong local_1b8;
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  char local_180 [4];
  undefined8 local_17c;
  int local_174;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 uStack_167;
  undefined2 uStack_166;
  uint uStack_164;
  undefined8 local_160;
  uint local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined2 local_d7;
  undefined1 local_d5;
  int local_d4;
  undefined1 local_d0;
  undefined1 uStack_cf;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  int iStack_94;
  int local_90 [2];
  undefined8 local_88;
  int *piStack_80;
  undefined4 local_78;
  int local_74;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar9 = (**(code **)(*param_1 + 0x180))();
  if (lVar9 != 0) {
    local_2a8 = (longlong *)FUN_140ec3c65(lVar9);
    if (local_2a8 != (longlong *)0x0) {
      plVar12 = param_1 + 0x44;
      local_2e0 = param_1 + 0x46;
      local_168 = 0;
      uStack_167 = 0;
      uStack_166 = 0;
      uStack_164 = 1;
      local_158 = 0xffffffff;
      iStack_154 = 0;
      iStack_150 = 0;
      iVar20 = 0;
      plVar18 = local_2e0;
      if ((int)param_1[0x49] != 0) {
        local_160 = local_2e0;
        FUN_1449c0562(&local_168);
        iVar20 = (int)param_1[0x49];
        plVar18 = local_160;
      }
      local_160._4_4_ = (undefined4)((ulonglong)plVar18 >> 0x20);
      local_258 = CONCAT22(uStack_166,CONCAT11(uStack_167,local_168));
      uStack_248 = local_158;
      iStack_244 = iStack_154;
      iStack_240 = iStack_150;
      uStack_23c = uStack_14c;
      uStack_254 = uStack_164;
      local_260 = plVar12;
      local_2d0 = plVar12;
      local_298 = lVar9;
      local_250 = plVar18;
      if ((iStack_154 != iVar20) || (plVar18 != local_2e0)) {
        do {
          local_158 = 0;
          iStack_154 = 0;
          iStack_150 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          iStack_140 = 0;
          uStack_13c = 0;
          local_138 = 0;
          lVar9 = *local_260 + 0x10 + (longlong)iStack_244 * 0x50;
          local_160._0_4_ = *(undefined4 *)(lVar9 + -8);
          uVar13 = *(undefined8 *)(lVar9 + -0x10);
          local_168 = (undefined1)uVar13;
          uStack_167 = (undefined1)((ulonglong)uVar13 >> 8);
          uStack_166 = (undefined2)((ulonglong)uVar13 >> 0x10);
          uStack_164 = (uint)((ulonglong)uVar13 >> 0x20);
          FUN_1447715ec(&local_158,lVar9);
          local_98 = (undefined1)DAT_14cbe7058;
          uStack_97 = (undefined1)((ulonglong)DAT_14cbe7058 >> 8);
          uStack_96 = (undefined2)((ulonglong)DAT_14cbe7058 >> 0x10);
          iStack_94 = (int)((ulonglong)DAT_14cbe7058 >> 0x20);
          FUN_1401533ba(local_198,&local_98,1);
          FUN_144928d62(&local_158,5,local_198);
          plVar12 = local_2a8;
          (**(code **)(*local_2a8 + 0x40))(local_2a8,&local_168,*(undefined8 *)(lVar9 + 0x28));
          local_98 = (undefined1)DAT_14cbe7060;
          uStack_97 = (undefined1)((ulonglong)DAT_14cbe7060 >> 8);
          uStack_96 = (undefined2)((ulonglong)DAT_14cbe7060 >> 0x10);
          iStack_94 = (int)((ulonglong)DAT_14cbe7060 >> 0x20);
          FUN_1401533ba(local_1a4,&local_98,1);
          FUN_144928d62(&local_158,5,local_1a4);
          (**(code **)(*plVar12 + 0x40))(plVar12,&local_168,*(undefined8 *)(lVar9 + 0x30));
          if (CONCAT44(uStack_13c,iStack_140) != 0) {
            FUN_1400020a8();
          }
          uStack_248 = uStack_248 & ~uStack_254;
          FUN_1449c0562(&local_258);
          plVar18 = (longlong *)CONCAT44(local_160._4_4_,(undefined4)local_160);
        } while (((iStack_244 != iVar20) || (local_250 != local_2e0)) || (local_260 != local_2d0));
      }
      lVar9 = local_298;
      local_160 = plVar18;
      FUN_145707a0e(local_2d0);
      if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
        lVar9 = *(longlong *)(lVar9 + 0x18);
        uVar15 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar8 = (uint)lVar9 & 0xffff;
        plVar12 = param_1 + 0x1b;
        if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
          plVar12 = (longlong *)param_1[0x1c];
        }
        iVar20 = *(int *)((longlong)plVar12 +
                         (ulonglong)
                         ((int)param_1[0x1d] - 1U &
                         (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar8) +
                         (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar20 != -1) {
          lVar27 = param_1[0x14];
          iVar19 = iVar20;
          do {
            if (*(longlong *)(lVar27 + (longlong)iVar19 * 0x60) == lVar9) goto LAB_14039e7ab;
            iVar19 = *(int *)((longlong)iVar19 * 0x60 + lVar27 + 0x58);
          } while (iVar19 != -1);
        }
      }
    }
  }
  goto LAB_14039f738;
  while (iVar20 = *(int *)(lVar10 + 0x58), iVar20 != -1) {
LAB_14039e7ab:
    lVar10 = lVar27 + (longlong)iVar20 * 0x60;
    if (*(longlong *)(lVar27 + (longlong)iVar20 * 0x60) == lVar9) goto LAB_14039e7c4;
  }
  lVar10 = 0;
LAB_14039e7c4:
  plVar12 = (longlong *)(lVar10 + 0x18);
  local_168 = 0;
  uStack_167 = 0;
  uStack_166 = 0;
  uStack_164 = 1;
  local_158 = 0xffffffff;
  iStack_154 = 0;
  iStack_150 = 0;
  local_2b8 = plVar12;
  if (*(int *)(lVar10 + 0x30) == 0) {
    uVar26 = 1;
    iVar20 = 0;
    uVar21 = 0;
  }
  else {
    local_160 = plVar12;
    FUN_1449c0562(&local_168);
    uVar21 = (ulonglong)CONCAT22(uStack_166,CONCAT11(uStack_167,local_168));
    uVar26 = (ulonglong)uStack_164;
    iVar20 = *(int *)(lVar10 + 0x30);
    plVar12 = local_160;
  }
  local_160 = plVar12;
  if (iStack_154 != iVar20 || plVar12 != local_2b8) {
    local_288 = param_1 + 0x4b;
    uVar15 = local_158;
    iVar7 = iStack_154;
    iVar19 = iStack_150;
    local_2c4 = iVar20;
    local_2c0 = plVar12;
    local_290 = lVar10;
    do {
      local_278 = *(longlong *)(lVar10 + 8);
      lVar27 = (longlong)iVar7 * 0x90;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      lVar9 = local_278 + 0x28 + lVar27;
      iStack_c8 = *(int *)(lVar9 + -8);
      uVar13 = *(undefined8 *)(lVar9 + -0x10);
      local_d0 = (undefined1)uVar13;
      uStack_cf = (undefined1)((ulonglong)uVar13 >> 8);
      uStack_ce = (undefined2)((ulonglong)uVar13 >> 0x10);
      uStack_cc = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_29c = uVar15;
      FUN_1447715ec();
      cVar5 = FUN_1401144ce(&local_d0);
      if (cVar5 != '\0') {
        local_168 = (undefined1)DAT_14cbe7058;
        uStack_167 = (undefined1)((ulonglong)DAT_14cbe7058 >> 8);
        uStack_166 = (undefined2)((ulonglong)DAT_14cbe7058 >> 0x10);
        uStack_164 = (uint)((ulonglong)DAT_14cbe7058 >> 0x20);
        FUN_1401533ba(local_1b0,&local_168,1);
        FUN_144928d62(&local_c0,5,local_1b0);
        local_168 = 0;
        uStack_164 = 0;
        local_160._0_4_ = 0;
        local_160._4_4_ = 0;
        local_158 = local_158 & 0xffffff00;
        uStack_144 = 0;
        iStack_140 = 0;
        iStack_154 = 0;
        iStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        local_138 = CONCAT44(local_138._4_4_,0xc69c4000);
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_d7 = 1;
        local_d5 = 0;
        local_d4 = 0;
        local_260._0_4_ = 0;
        local_260._4_4_ = 0;
        local_258 = 0;
        FUN_1446efa72(&local_260,0,3,0x10);
        local_258 = 3;
        puVar17 = (undefined8 *)CONCAT44(local_260._4_4_,(uint)local_260);
        *puVar17 = &PTR_LAB_14b3e6310;
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
        puVar17[2] = lVar10;
        *puVar17 = &PTR_FUN_14b9dcd70;
        puVar17[3] = 0;
        local_2d4 = iVar19;
        if (param_1 == (longlong *)0x0) {
          iVar20 = 0;
        }
        else {
          uVar15 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(puVar17 + 3) = uVar15;
          if ((int)uVar15 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar20 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar20 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar28 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar20;
            if (bVar28) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            iVar20 = *(int *)(lVar9 + 0x10);
            bVar28 = iVar20 == 0;
            if (bVar28) {
              *(int *)(lVar9 + 0x10) = iVar19;
              iVar20 = 0;
            }
            UNLOCK();
            if (bVar28) {
              iVar20 = iVar19;
            }
          }
        }
        iVar19 = local_258;
        uVar4 = local_260._4_4_;
        uVar3 = (uint)local_260;
        *(int *)((longlong)puVar17 + 0x1c) = iVar20;
        puVar17[4] = FUN_1412367d4;
        *(undefined4 *)(puVar17 + 5) = 0;
        local_260._0_4_ = 0;
        local_260._4_4_ = 0;
        local_258 = 0;
        if (iStack_140 == 0) {
LAB_14039ea9f:
          if (CONCAT44(uStack_144,uStack_148) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar17 = (undefined8 *)CONCAT44(uStack_144,uStack_148);
          if (puVar17 != (undefined8 *)0x0) {
            (**(code **)*puVar17)(puVar17,0);
            FUN_1446efa72(&uStack_148,0,0,0x10);
            iStack_140 = 0;
            goto LAB_14039ea9f;
          }
        }
        uStack_148 = uVar3;
        uStack_144 = uVar4;
        iStack_140 = iVar19;
        puVar17 = (undefined8 *)CONCAT44(local_260._4_4_,(uint)local_260);
        if (local_258 == 0) {
LAB_14039ead5:
          if (puVar17 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (puVar17 != (undefined8 *)0x0) {
          (**(code **)*puVar17)(puVar17,0);
          FUN_1446efa72(&local_260,0,0,0x10);
          local_258 = 0;
          puVar17 = (undefined8 *)CONCAT44(local_260._4_4_,(uint)local_260);
          goto LAB_14039ead5;
        }
        local_2b0 = uVar26;
        (**(code **)(*local_2a8 + 0x38))(local_2a8,&local_1b8,&local_d0,&local_168);
        lVar9 = 0;
        if (local_d4 == 1) {
          lVar9 = local_1b8;
        }
        if (local_1b8 == 0) {
          lVar9 = local_1b8;
        }
        local_260._0_4_ = (uint)DAT_14cbe7060;
        local_260._4_4_ = (undefined4)((ulonglong)DAT_14cbe7060 >> 0x20);
        FUN_1401533ba(local_1c4,&local_260,1);
        FUN_144928d62(&local_c0,5,local_1c4);
        local_260._0_4_ = (uint)local_260 & 0xffffff00;
        local_260._4_4_ = 0;
        local_258 = 0;
        uStack_254 = 0;
        local_250._0_4_ = (uint)local_250 & 0xffffff00;
        uStack_23c = 0;
        iStack_238 = 0;
        local_250._4_4_ = 0;
        uStack_248 = 0;
        iStack_244 = 0;
        iStack_240 = 0;
        local_230 = 0xc69c4000;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1e8 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_1cf = 1;
        local_1cd = 0;
        local_1cc = 0;
        local_98 = 0;
        uStack_97 = 0;
        uStack_96 = 0;
        iStack_94 = 0;
        local_90[0] = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        local_90[0] = 3;
        puVar17 = (undefined8 *)CONCAT44(iStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)))
        ;
        *puVar17 = &PTR_LAB_14b3e6310;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        puVar17[2] = lVar11;
        *puVar17 = &PTR_FUN_14b9dcd70;
        puVar17[3] = 0;
        if (param_1 == (longlong *)0x0) {
          iVar20 = 0;
        }
        else {
          uVar15 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(puVar17 + 3) = uVar15;
          if ((int)uVar15 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar20 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar20 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar28 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar20;
            if (bVar28) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            iVar20 = *(int *)(lVar10 + 0x10);
            bVar28 = iVar20 == 0;
            if (bVar28) {
              *(int *)(lVar10 + 0x10) = iVar19;
              iVar20 = 0;
            }
            UNLOCK();
            if (bVar28) {
              iVar20 = iVar19;
            }
          }
        }
        iVar7 = local_90[0];
        iVar19 = iStack_94;
        *(int *)((longlong)puVar17 + 0x1c) = iVar20;
        puVar17[4] = FUN_141236c8e;
        *(undefined4 *)(puVar17 + 5) = 0;
        iVar20 = CONCAT22(uStack_96,CONCAT11(uStack_97,local_98));
        local_98 = 0;
        uStack_97 = 0;
        uStack_96 = 0;
        iStack_94 = 0;
        local_90[0] = 0;
        if (iStack_238 == 0) {
LAB_14039ecde:
          if (CONCAT44(uStack_23c,iStack_240) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar17 = (undefined8 *)CONCAT44(uStack_23c,iStack_240);
          if (puVar17 != (undefined8 *)0x0) {
            (**(code **)*puVar17)(puVar17,0);
            FUN_1446efa72(&iStack_240,0,0,0x10);
            iStack_238 = 0;
            goto LAB_14039ecde;
          }
        }
        uStack_23c = iVar19;
        iStack_238 = iVar7;
        puVar17 = (undefined8 *)CONCAT44(iStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)))
        ;
        iStack_240 = iVar20;
        if (local_90[0] == 0) {
LAB_14039ed14:
          if (puVar17 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (puVar17 != (undefined8 *)0x0) {
          (**(code **)*puVar17)(puVar17,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90[0] = 0;
          puVar17 = (undefined8 *)
                    CONCAT44(iStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)));
          goto LAB_14039ed14;
        }
        (**(code **)(*local_2a8 + 0x38))(local_2a8,&local_268,&local_d0,&local_260);
        lVar10 = 0;
        if (local_1cc == 1) {
          lVar10 = local_268;
        }
        if (local_268 == 0) {
          lVar10 = local_268;
        }
        FUN_140c258c2(&local_d0,&local_98);
        local_d0 = local_98;
        local_98 = 0;
        uStack_cc = iStack_94;
        iStack_c8 = local_90[0];
        iStack_94 = 0;
        local_90[0] = 0;
        FUN_1404e49fa(&local_c0,&local_88);
        uStack_cf = uStack_97;
        uStack_97 = 0;
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        local_280 = lVar27;
        local_270 = uVar21;
        if (*(int *)((longlong)param_1 + 0x254) == 0) {
          iVar20 = (int)param_1[0x45];
          *(int *)(param_1 + 0x45) = iVar20 + 1;
          if (*(int *)((longlong)param_1 + 0x22c) == iVar20) {
            FUN_1406fba42(local_2d0,iVar20);
          }
          iVar19 = (int)param_1[0x49];
          if (iVar19 == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar7 = iVar19 + -1;
            }
            iVar7 = iVar7 >> 5;
          }
          iVar16 = iVar19 + 1;
          iVar24 = iVar19 + 0x1f;
          if (-1 < iVar19) {
            iVar24 = iVar19;
          }
          if (iVar24 >> 5 == iVar7) {
            *(int *)(param_1 + 0x49) = iVar16;
          }
          else {
            if (*(int *)((longlong)param_1 + 0x24c) <= iVar19) {
              if (iVar19 + 0x20U < 0xa0) {
                iVar16 = 0x80;
                iVar7 = iVar19;
              }
              else {
                uVar15 = iVar19 + 0x20U >> 5;
                if (*(int *)((longlong)param_1 + 0x24c) + 0x1fU < 0xa0) {
                  uVar8 = 4;
                  if (4 < uVar15) {
                    uVar8 = uVar15;
                  }
                }
                else {
                  uVar8 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
                }
                uVar26 = FUN_144a3809e(uVar8 << 2,0);
                iVar7 = (int)(uVar26 >> 2);
                iVar16 = iVar7 << 5;
                if (iVar7 < (int)uVar15) {
                  iVar16 = -0x20;
                }
                iVar7 = (int)param_1[0x49];
              }
              *(int *)((longlong)param_1 + 0x24c) = iVar16;
              FUN_1446efbd8(local_2e0,iVar7);
              iVar16 = (int)param_1[0x49] + 1;
            }
            iVar7 = iVar16 + 0x1f;
            if (-1 < iVar16) {
              iVar7 = iVar16;
            }
            *(int *)(param_1 + 0x49) = iVar16;
            if (iVar16 % 0x20 != 0) {
              plVar12 = (longlong *)param_1[0x48];
              if ((longlong *)param_1[0x48] == (longlong *)0x0) {
                plVar12 = local_2e0;
              }
              bVar14 = -(char)(iVar16 % 0x20);
              *(uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4) <<
                         (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            }
          }
          lVar27 = (longlong)iVar20;
          plVar12 = (longlong *)param_1[0x48];
          if ((longlong *)param_1[0x48] == (longlong *)0x0) {
            plVar12 = local_2e0;
          }
          bVar14 = (byte)iVar19 & 0x1f;
          puVar25 = (uint *)((longlong)plVar12 + (longlong)(iVar24 >> 5) * 4);
          *puVar25 = *puVar25 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
        }
        else {
          iVar20 = (int)param_1[0x4a];
          lVar27 = (longlong)iVar20;
          iVar19 = *(int *)(param_1[0x44] + 4 + lVar27 * 0x50);
          *(int *)(param_1 + 0x4a) = iVar19;
          iVar7 = *(int *)((longlong)param_1 + 0x254) + -1;
          *(int *)((longlong)param_1 + 0x254) = iVar7;
          if (iVar7 != 0) {
            *(undefined4 *)(param_1[0x44] + (longlong)iVar19 * 0x50) = 0xffffffff;
          }
        }
        plVar12 = (longlong *)param_1[0x48];
        if ((longlong *)param_1[0x48] == (longlong *)0x0) {
          plVar12 = local_2e0;
        }
        iVar19 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar19 = iVar20;
        }
        puVar25 = (uint *)((longlong)plVar12 + (longlong)(iVar19 >> 5) * 4);
        *puVar25 = *puVar25 | 1 << ((byte)iVar20 & 0x1f);
        lVar11 = param_1[0x44];
        pcVar1 = (char *)(lVar11 + lVar27 * 0x50);
        puVar25 = (uint *)(pcVar1 + 0x10);
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        puVar25[0] = 0;
        puVar25[1] = 0;
        pcVar1[0x18] = '\0';
        pcVar1[0x19] = '\0';
        pcVar1[0x1a] = '\0';
        pcVar1[0x1b] = '\0';
        pcVar1[0x1c] = '\0';
        pcVar1[0x1d] = '\0';
        pcVar1[0x1e] = '\0';
        pcVar1[0x1f] = '\0';
        pcVar1[0x20] = '\0';
        pcVar1[0x21] = '\0';
        pcVar1[0x22] = '\0';
        pcVar1[0x23] = '\0';
        pcVar1[0x28] = '\0';
        pcVar1[0x29] = '\0';
        pcVar1[0x2a] = '\0';
        pcVar1[0x2b] = '\0';
        pcVar1[0x2c] = '\0';
        pcVar1[0x2d] = '\0';
        pcVar1[0x2e] = '\0';
        pcVar1[0x2f] = '\0';
        pcVar1[0x30] = '\0';
        pcVar1[0x31] = '\0';
        pcVar1[0x32] = '\0';
        pcVar1[0x33] = '\0';
        pcVar1[0x34] = '\0';
        pcVar1[0x35] = '\0';
        pcVar1[0x36] = '\0';
        pcVar1[0x37] = '\0';
        *(int *)(pcVar1 + 8) = iStack_c8;
        *(ulonglong *)pcVar1 = CONCAT44(uStack_cc,CONCAT22(uStack_ce,CONCAT11(uStack_cf,local_d0)));
        FUN_1447715ec(puVar25,&local_c0);
        *(longlong *)(pcVar1 + 0x38) = lVar9;
        *(longlong *)(pcVar1 + 0x40) = lVar10;
        pcVar1[0x48] = -1;
        pcVar1[0x49] = -1;
        pcVar1[0x4a] = -1;
        pcVar1[0x4b] = -1;
        if (*pcVar1 == '\x01') {
          FUN_1447a97f4(&local_98,puVar25);
          plVar12 = local_2d0;
          if (0 < iStack_94) {
            lVar9 = 0;
            uVar26 = 0;
            iVar19 = iStack_94;
            iVar7 = DAT_14c948000;
            do {
              iVar16 = CONCAT22(uStack_96,CONCAT11(uStack_97,local_98));
              bVar28 = iVar16 != 0;
              bVar29 = iVar16 != iVar7;
              piVar22 = (int *)&DAT_14c948618;
              piVar23 = &DAT_14c948620;
              if (bVar29 && bVar28) {
                piVar22 = local_90;
                if (0 < local_74) {
                  piVar22 = piStack_80;
                }
                if (1 < iVar19) {
                  piVar22 = piStack_80;
                }
                piVar23 = (int *)((longlong)piVar22 + lVar9 + 8);
                piVar22 = (int *)((longlong)piVar22 + lVar9);
              }
              if ((*piVar22 == DAT_14cb7beb0) && (*piVar23 == DAT_14cb7beb8)) {
LAB_14039f120:
                FUN_1402b5374(&local_98,uVar26 & 0xffffffff,0);
                iVar19 = iStack_94;
                iVar7 = DAT_14c948000;
              }
              else {
                piVar23 = &DAT_14c948620;
                piVar22 = (int *)&DAT_14c948618;
                if (bVar29 && bVar28) {
                  piVar22 = local_90;
                  if (0 < local_74) {
                    piVar22 = piStack_80;
                  }
                  if (1 < iVar19) {
                    piVar22 = piStack_80;
                  }
                  piVar23 = (int *)((longlong)piVar22 + lVar9 + 8);
                  piVar22 = (int *)((longlong)piVar22 + lVar9);
                }
                if ((*piVar22 == DAT_14cb7bec8) && (*piVar23 == DAT_14cb7bed0)) goto LAB_14039f120;
                piVar23 = &DAT_14c948620;
                piVar22 = (int *)&DAT_14c948618;
                if (bVar29 && bVar28) {
                  piVar22 = local_90;
                  if (0 < local_74) {
                    piVar22 = piStack_80;
                  }
                  if (1 < iVar19) {
                    piVar22 = piStack_80;
                  }
                  piVar23 = (int *)((longlong)piVar22 + lVar9 + 8);
                  piVar22 = (int *)((longlong)piVar22 + lVar9);
                }
                if ((*piVar22 == DAT_14cb7bee0) && (*piVar23 == DAT_14cb7bee8)) goto LAB_14039f120;
                piVar23 = &DAT_14c948620;
                piVar22 = (int *)&DAT_14c948618;
                if (bVar29 && bVar28) {
                  piVar22 = local_90;
                  if (0 < local_74) {
                    piVar22 = piStack_80;
                  }
                  if (1 < iVar19) {
                    piVar22 = piStack_80;
                  }
                  piVar23 = (int *)((longlong)piVar22 + lVar9 + 8);
                  piVar22 = (int *)((longlong)piVar22 + lVar9);
                }
                if ((*piVar22 == DAT_14cb7bef8) && (*piVar23 == DAT_14cb7bf00)) goto LAB_14039f120;
                piVar23 = &DAT_14c948620;
                piVar22 = (int *)&DAT_14c948618;
                if (bVar29 && bVar28) {
                  piVar22 = local_90;
                  if (0 < local_74) {
                    piVar22 = piStack_80;
                  }
                  if (1 < iVar19) {
                    piVar22 = piStack_80;
                  }
                  piVar23 = (int *)((longlong)piVar22 + lVar9 + 8);
                  piVar22 = (int *)((longlong)piVar22 + lVar9);
                }
                if ((*piVar22 == DAT_14cb7bf10) && (*piVar23 == DAT_14cb7bf18)) goto LAB_14039f120;
              }
              uVar26 = uVar26 + 1;
              lVar9 = lVar9 + 0xc;
            } while ((longlong)uVar26 < (longlong)iVar19);
          }
          uVar15 = CONCAT22(uStack_96,CONCAT11(uStack_97,local_98));
          if (piStack_80 != (int *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          uVar15 = *puVar25;
          plVar12 = local_2d0;
        }
        _Src = (void *)(lVar11 + lVar27 * 0x50);
        uVar8 = (int)param_1[0x45] - *(int *)((longlong)param_1 + 0x254);
        if ((uVar8 != 0) && (uVar8 != 1)) {
          plVar18 = (longlong *)param_1[0x4c];
          if ((longlong *)param_1[0x4c] == (longlong *)0x0) {
            plVar18 = local_288;
          }
          iVar19 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[0x4d] - 1U & uVar15) * 4);
          if (iVar19 != -1) {
            lVar9 = *plVar12;
            do {
              lVar27 = (longlong)iVar19 * 0x50;
              cVar5 = FUN_14493b798(lVar9 + lVar27,_Src);
              lVar9 = *plVar12;
              if (cVar5 != '\0') {
                if (*(longlong *)(lVar9 + 0x28 + lVar27) != 0) {
                  FUN_1400020a8();
                }
                memmove((void *)(lVar9 + lVar27),_Src,0x48);
                FUN_148f02d66(local_2d0,iVar20);
                goto LAB_14039f263;
              }
              iVar19 = *(int *)(lVar9 + 0x48 + lVar27);
            } while (iVar19 != -1);
            uVar8 = (int)param_1[0x45] - *(int *)((longlong)param_1 + 0x254);
          }
        }
        if (uVar8 < 4) {
          iVar19 = 1;
        }
        else {
          uVar26 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar19 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar8 < 1) || (iVar19 <= (int)param_1[0x4d])) {
          uVar15 = (int)param_1[0x4d] - 1U & uVar15;
          *(uint *)((longlong)_Src + 0x4c) = uVar15;
          plVar12 = (longlong *)param_1[0x4c];
          if ((longlong *)param_1[0x4c] == (longlong *)0x0) {
            plVar12 = local_288;
          }
          *(undefined4 *)((longlong)_Src + 0x48) =
               *(undefined4 *)
                ((longlong)plVar12 + ((longlong)(int)param_1[0x4d] - 1U & (longlong)(int)uVar15) * 4
                );
          plVar12 = (longlong *)param_1[0x4c];
          if ((longlong *)param_1[0x4c] == (longlong *)0x0) {
            plVar12 = local_288;
          }
          *(int *)((longlong)plVar12 +
                  ((longlong)(int)param_1[0x4d] - 1U & (longlong)(int)uVar15) * 4) = iVar20;
        }
        else {
          *(int *)(param_1 + 0x4d) = iVar19;
          FUN_1403a258c(plVar12);
        }
LAB_14039f263:
        uVar26 = local_2b0;
        lVar27 = local_278 + local_280;
        lVar9 = FUN_1403a1726(param_1);
        uVar21 = local_270;
        if (lVar9 == 0) {
          bVar28 = true;
          plVar12 = local_2c0;
          iVar19 = local_2d4;
        }
        else {
          cVar5 = FUN_1401144ce((undefined8 *)(lVar9 + 0x10));
          bVar28 = false;
          plVar12 = local_2c0;
          iVar19 = local_2d4;
          if (cVar5 != '\0') {
            local_180[0] = '\0';
            local_17c = 0;
            local_174 = 0;
            local_78 = 0;
            local_88 = 0;
            piStack_80 = (int *)0x0;
            local_70 = 0;
            uStack_68 = 0;
            local_90[0] = *(int *)(lVar9 + 0x18);
            uVar13 = *(undefined8 *)(lVar9 + 0x10);
            local_98 = (undefined1)uVar13;
            uStack_97 = (undefined1)((ulonglong)uVar13 >> 8);
            uStack_96 = (undefined2)((ulonglong)uVar13 >> 0x10);
            iStack_94 = (int)((ulonglong)uVar13 >> 0x20);
            FUN_1447715ec(&local_88,lVar9 + 0x20);
            local_170 = DAT_14cbe7060;
            FUN_1401533ba(local_18c,&local_170,1);
            FUN_144928d62(&local_88,5,local_18c);
            uVar13 = (**(code **)(*param_1 + 0x180))(param_1);
            lVar9 = FUN_140149a73(uVar13,0);
            if (lVar9 != 0) {
              bVar28 = false;
              FUN_14039fc7b(&local_98,local_180,lVar9,0);
              if (local_180[0] == '\x01') {
                bVar28 = local_174 != 0;
              }
            }
            plVar12 = local_2c0;
            iVar19 = local_2d4;
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
        }
        *(bool *)(lVar27 + 0x69) = bVar28;
        uVar6 = FUN_14039fb48(param_1,lVar27);
        *(undefined1 *)(lVar27 + 0x68) = uVar6;
        FUN_1409838b8(&local_260);
        FUN_1409838b8(&local_168);
        lVar10 = local_290;
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      uVar15 = local_29c & ~(uint)uVar26;
      plVar18 = (longlong *)plVar12[2];
      if ((longlong *)plVar12[2] == (longlong *)0x0) {
        plVar18 = plVar12;
      }
      iVar20 = (int)plVar12[3];
      iVar7 = (int)uVar21;
      lVar9 = (longlong)iVar7;
      uVar8 = *(uint *)((longlong)plVar18 + lVar9 * 4) & uVar15;
      if (uVar8 == 0) {
        iVar16 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar16 = iVar20 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar24 = iVar16;
        if (iVar16 < iVar7) {
          iVar24 = iVar7;
        }
        if (iVar7 < iVar16) {
          lVar27 = 0;
          do {
            uVar8 = *(uint *)((longlong)plVar18 + lVar27 * 4 + lVar9 * 4 + 4);
            if (uVar8 != 0) {
              uVar21 = (ulonglong)(iVar7 + (int)lVar27 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14039f453;
            }
            iVar19 = iVar19 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar24 - lVar9 != lVar27);
          uVar15 = 0xffffffff;
          iVar7 = iVar24;
        }
        uVar21 = (ulonglong)(iVar7 + 1);
        lVar10 = local_290;
        plVar12 = local_2c0;
        iVar7 = iVar20;
      }
      else {
LAB_14039f453:
        uVar26 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar26 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar7 = (iVar19 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar20 <= iVar7) {
          iVar7 = iVar20;
        }
      }
    } while ((iVar7 != local_2c4) || (plVar12 != local_2b8));
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  lVar9 = FUN_1406f612e(local_298);
  if (lVar9 != 0) {
    cVar5 = FUN_1411e4cda(lVar9);
    if (cVar5 == '\0') {
      if (param_1[0x58] == 0) {
        local_168 = 0x14;
        uStack_167 = 0x2a;
        uStack_166 = 0x403a;
        uStack_164 = 1;
        local_160._0_4_ = 0;
        FUN_145707c34(lVar9 + 0x30,&local_260,param_1);
        param_1[0x58] = (longlong)local_260;
      }
    }
    else {
      FUN_1403a2a14(param_1);
    }
  }
LAB_14039f738:
  if ((local_60 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14039fb48 FUN_14039fb48 body=306 status=ok
// SIG undefined FUN_14039fb48(void)

bool FUN_14039fb48(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [12];
  char local_70 [4];
  undefined8 local_6c;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_1403a1726();
  bVar4 = false;
  if (lVar2 != 0) {
    local_70[0] = '\0';
    local_6c = 0;
    local_64 = 0;
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_58 = *(undefined8 *)(lVar2 + 0x10);
    local_50 = *(undefined4 *)(lVar2 + 0x18);
    FUN_1447715ec(&local_48,lVar2 + 0x20);
    cVar1 = FUN_1401144ce(&local_58);
    if (cVar1 == '\0') {
      bVar4 = true;
    }
    else {
      local_60 = DAT_14cbe7058;
      FUN_1401533ba(local_7c,&local_60,1);
      FUN_144928d62(&local_48,5,local_7c);
      uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      bVar4 = false;
      lVar2 = FUN_140149a73(uVar3,0);
      if (lVar2 != 0) {
        bVar4 = false;
        FUN_14039fc7b(&local_58,local_70,lVar2,0);
        if (local_70[0] == '\x01') {
          bVar4 = local_64 != 0;
        }
      }
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039fc7b FUN_14039fc7b body=837 status=ok
// SIG undefined FUN_14039fc7b(void)

uint * FUN_14039fc7b(char *param_1,uint *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  uint local_34;
  undefined8 uStack_30;
  uint uStack_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = -1;
  if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
    local_24 = FUN_140985360(param_3);
  }
  if (*param_1 == '\n') {
    plVar3 = (longlong *)FUN_14039ffc6(param_3);
    if (plVar3 == (longlong *)0x0) goto switchD_14039fd20_caseD_a;
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_34,param_1);
    goto LAB_14039fcde;
  }
  switch(*param_1) {
  case '\x01':
    plVar3 = (longlong *)FUN_1401499e8(param_3);
    if (plVar3 == (longlong *)0x0) goto switchD_14039fd20_caseD_a;
    local_58 = 0;
    (**(code **)(*plVar3 + 0xa0))(plVar3,param_1,param_2,0);
    goto LAB_14039fce4;
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
    plVar3 = (longlong *)FUN_1403a0020(param_3);
    if (plVar3 == (longlong *)0x0) goto switchD_14039fd20_caseD_a;
    lVar8 = *plVar3;
    puVar7 = &local_40;
    goto LAB_14039fd3b;
  case '\x06':
    if (local_24 < 0) {
      if (*(char *)(param_3 + 0x68) == '\x01') {
        local_24 = 0;
      }
      else {
        if (*(int *)(param_3 + 0x54) == 0) {
LAB_14039feb2:
          uVar5 = 0;
        }
        else {
          uVar1 = *(uint *)(param_3 + 0x50);
          uVar5 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar7 == (undefined8 *)0x0) ||
               ((*(int *)(puVar7 + 2) != *(int *)(param_3 + 0x54) ||
                ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_14039feb2;
            uVar5 = *puVar7;
          }
        }
        local_24 = FUN_1409844f4(uVar5);
        if (local_24 < 0) goto switchD_14039fd20_caseD_a;
      }
    }
    plVar3 = (longlong *)FUN_140d17acc(param_3,&local_24);
    if (plVar3 == (longlong *)0x0) goto switchD_14039fd20_caseD_a;
    uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,param_1,&local_34);
    uVar6 = 0x7fffffff;
    if (uVar4 < 0x7fffffff) {
      uVar6 = uVar4;
    }
    *(undefined1 *)param_2 = 2;
    param_2[3] = (uint)uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    goto LAB_14039fce4;
  case '\a':
    if (local_24 < 0) {
      plVar3 = *(longlong **)(param_3 + 0x160);
    }
    else {
      plVar3 = (longlong *)FUN_143d2992a(param_3,&local_24);
    }
    if (plVar3 != (longlong *)0x0) {
      bVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,param_1);
      puVar7 = &DAT_14cb7c580;
      if (bVar2 != 0) {
        puVar7 = &DAT_14cb7c588;
      }
      uVar5 = *puVar7;
      *(undefined1 *)param_2 = 1;
      *(undefined8 *)(param_2 + 1) = uVar5;
      param_2[3] = (uint)bVar2;
      goto LAB_14039fce4;
    }
    goto switchD_14039fd20_caseD_a;
  case '\b':
    if (local_24 < 0) {
      if (*(char *)(param_3 + 0x68) == '\x01') {
        local_24 = 0;
      }
      else {
        uVar5 = FUN_14479d2ce(param_3 + 0x50);
        local_24 = FUN_1409844f4(uVar5);
        if (local_24 < 0) goto switchD_14039fd20_caseD_a;
      }
    }
    plVar3 = (longlong *)FUN_141068ae8(param_3,&local_24);
    break;
  case '\t':
    plVar3 = (longlong *)FUN_145781ab4(param_3);
    if (plVar3 == (longlong *)0x0) goto switchD_14039fd20_caseD_a;
    lVar8 = *plVar3;
    puVar7 = &local_48;
LAB_14039fd3b:
    (**(code **)(lVar8 + 0x20))(plVar3,puVar7,param_1);
    local_34 = local_34 & 0xffffff00;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_144976b9c(&local_34,*puVar7);
    goto LAB_14039fce1;
  default:
    goto switchD_14039fd20_caseD_a;
  case '\r':
    plVar3 = (longlong *)FUN_14883d45c(param_3);
    break;
  case '\x0e':
    plVar3 = (longlong *)FUN_145b08bca(param_3);
    break;
  case '\x0f':
    if ((*(longlong *)(param_1 + 4) == 0) ||
       (plVar3 = (longlong *)FUN_14883d3b2(param_3), plVar3 == (longlong *)0x0))
    goto switchD_14039fd20_caseD_a;
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_34,param_1);
    goto LAB_14039fcde;
  }
  if (plVar3 == (longlong *)0x0) {
switchD_14039fd20_caseD_a:
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_34,param_1);
LAB_14039fcde:
LAB_14039fce1:
  *param_2 = local_34;
  param_2[1] = (uint)uStack_30;
  param_2[2] = uStack_30._4_4_;
  param_2[3] = uStack_28;
LAB_14039fce4:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14039ffc6 FUN_14039ffc6 body=89 status=ok
// SIG undefined FUN_14039ffc6(void)

undefined8 FUN_14039ffc6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x178);
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
    uVar6 = *(undefined8 *)(param_1 + 0x170);
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



// FUNCTION 1403a0020 FUN_1403a0020 body=42 status=ok
// SIG undefined FUN_1403a0020(void)

undefined8 FUN_1403a0020(longlong param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 == '\x03') {
    while (((((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1))
             && ((int)uVar1 < DAT_14c9647dc)) &&
            ((puVar4 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             puVar4 != (undefined8 *)0x0 && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 100))))) &&
           ((*(uint *)(puVar4 + 1) & 0x10200000) == 0))) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar4;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f8))();
      if (plVar3 == (longlong *)0x0) break;
      param_1 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
      if (param_1 == 0) {
        return 0;
      }
    }
    return *(undefined8 *)(param_1 + 0x118);
  }
  if (param_2 == '\x02') {
    while (((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1))
           && (((int)uVar1 < DAT_14c9647dc &&
               (((puVar4 = (undefined8 *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 puVar4 != (undefined8 *)0x0 && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 100)))
                && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0))))))) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar4;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f8))();
      if (plVar3 == (longlong *)0x0) break;
      param_1 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
      if (param_1 == 0) {
        return 0;
      }
    }
    return *(undefined8 *)(param_1 + 0x110);
  }
  if (param_2 == '\x04') {
    while ((((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1))
            && (((int)uVar1 < DAT_14c9647dc &&
                ((puVar4 = (undefined8 *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 puVar4 != (undefined8 *)0x0 && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 100)))))
               )) && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0))) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar4;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f8))();
      if (plVar3 == (longlong *)0x0) break;
      param_1 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
      if (param_1 == 0) {
        return 0;
      }
    }
    return *(undefined8 *)(param_1 + 0x120);
  }
  if (param_2 != '\x05') {
    return 0;
  }
  while( true ) {
    cVar2 = FUN_144729dda(param_1 + 0x60);
    if (cVar2 == '\0') break;
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x60);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f8))(plVar3);
    if (plVar3 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 1403a004a FUN_1403a004a body=138 status=ok
// SIG undefined FUN_1403a004a(void)

undefined8 FUN_1403a004a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_3 + 0x14), iVar1 == 0)) ||
      (*(int *)(param_3 + 0x10) == DAT_14c948000)) || ((iVar1 == 1 || (iVar1 < 2)))) {
    local_18 = DAT_14c948620;
    local_20 = DAT_14c948618;
  }
  else {
    local_18 = *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x14);
    local_20 = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xc);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a00d6 FUN_1403a00d6 body=109 status=ok
// SIG undefined FUN_1403a00d6(void)

undefined8 * FUN_1403a00d6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  lVar1 = FUN_1403a01cf(param_1 + 0x68,param_1 + 0x30,&local_20,local_14);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xc);
  }
  *param_2 = uVar2;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a0144 FUN_1403a0144 body=139 status=ok
// SIG undefined FUN_1403a0144(void)

undefined8 FUN_1403a0144(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  while ((((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar3 != (undefined8 *)0x0 && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 100))) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0))))) {
    if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
      plVar2 = (longlong *)*puVar3;
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))();
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x118);
}



// FUNCTION 1403a01cf FUN_1403a01cf body=165 status=ok
// SIG undefined FUN_1403a01cf(void)

longlong FUN_1403a01cf(longlong *param_1,longlong *param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_4 = 0xffffffff;
  if (param_3[2] == 0) {
    uVar3 = *param_3;
  }
  else {
    uVar3 = FUN_144a78877(*param_3,param_3[2]);
  }
  iVar2 = FUN_1403a0274(param_1,uVar3,param_3);
  lVar4 = (longlong)iVar2 * 0x18 + *param_1;
  if (lVar4 != 0 && iVar2 != -1) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *param_4 = uVar1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if ((int)param_2[5] <= (int)uVar1) {
      return 0;
    }
    plVar5 = param_2 + 2;
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[4];
    }
    if ((*(uint *)((longlong)plVar5 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      return (ulonglong)uVar1 * 0x30 + *param_2;
    }
  }
  return 0;
}



// FUNCTION 1403a0274 FUN_1403a0274 body=95 status=ok
// SIG undefined FUN_1403a0274(void)

int FUN_1403a0274(longlong *param_1,uint param_2,int *param_3)

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
        if ((*(int *)(lVar2 + lVar4 * 0x18) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x18 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1403a02d4 FUN_1403a02d4 body=537 status=ok
// SIG undefined FUN_1403a02d4(void)

undefined1 * FUN_1403a02d4(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(undefined1 *)(param_3 + 1);
  if (((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_3 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
    local_28 = DAT_14c948620;
    local_30 = DAT_14c948618;
    local_38 = DAT_14c948620;
    local_40 = DAT_14c948618;
    local_48 = DAT_14c948620;
    local_50 = DAT_14c948618;
  }
  else {
    lVar2 = param_3 + 0x18;
    lVar3 = lVar2;
    if (0 < *(int *)(param_3 + 0x34)) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 5)) {
      local_28 = DAT_14c948620;
      local_30 = DAT_14c948618;
    }
    else {
      local_28 = *(undefined4 *)(lVar3 + 0x38);
      local_30 = *(undefined8 *)(lVar3 + 0x30);
    }
    lVar3 = lVar2;
    if (0 < *(int *)(param_3 + 0x34)) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 4)) {
      local_38 = DAT_14c948620;
      local_40 = DAT_14c948618;
    }
    else {
      local_38 = *(undefined4 *)(lVar3 + 0x2c);
      local_40 = *(undefined8 *)(lVar3 + 0x24);
    }
    if (0 < *(int *)(param_3 + 0x34)) {
      lVar2 = *(longlong *)(param_3 + 0x28);
    }
    if (1 < iVar1) {
      lVar2 = *(longlong *)(param_3 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 3)) {
      local_48 = DAT_14c948620;
      local_50 = DAT_14c948618;
    }
    else {
      local_48 = *(undefined4 *)(lVar2 + 0x20);
      local_50 = *(undefined8 *)(lVar2 + 0x18);
    }
    if ((iVar1 != 1) && (1 < iVar1)) {
      local_58 = *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x14);
      local_60 = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xc);
      goto LAB_1403a03ee;
    }
  }
  local_58 = DAT_14c948620;
  local_60 = DAT_14c948618;
LAB_1403a03ee:
  local_70 = &local_30;
  local_78 = &local_40;
  (**(code **)(*param_1 + 0x40))(param_1,&local_20,&local_60,&local_50);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_144976b9c(param_2,local_20);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a04ee FUN_1403a04ee body=101 status=ok
// SIG undefined FUN_1403a04ee(void)

undefined8 *
FUN_1403a04ee(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_1403a0554(param_1,param_3,param_4,param_5,param_6,param_7,0,0);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1403a0728(lVar1 + 0x38,param_2);
  }
  return param_2;
}



// FUNCTION 1403a0554 FUN_1403a0554 body=247 status=ok
// SIG undefined FUN_1403a0554(void)

undefined8
FUN_1403a0554(undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
             undefined1 param_6,undefined1 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  
  if ((*param_2 != 0) && (*param_5 != 0)) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_7);
    lVar1 = FUN_144976d68(param_1,param_2,uVar3 & 0xffffffff);
    if (lVar1 != 0) {
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6);
      if (*param_3 == 0) {
        uVar2 = FUN_1403a150a(param_1,lVar1,param_5,uVar4 & 0xffffffff,param_7,param_8);
        return uVar2;
      }
      lVar1 = FUN_1403a09ea(param_1,lVar1,param_3,uVar3 & 0xffffffff);
      if (lVar1 != 0) {
        if (*param_4 == 0) {
          uVar2 = FUN_1403a064c(param_1,lVar1,param_5,uVar4 & 0xffffffff,param_7,param_8);
          return uVar2;
        }
        lVar1 = FUN_140a62dba(param_1,lVar1,param_4,uVar3 & 0xffffffff);
        if (lVar1 != 0) {
          uVar2 = FUN_1403a13ac(param_1,lVar1,param_5,uVar4 & 0xffffffff,param_7,param_8);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1403a064c FUN_1403a064c body=220 status=ok
// SIG undefined FUN_1403a064c(void)

void FUN_1403a064c(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,byte param_5,
                  undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_3;
  if ((iVar1 == (int)DAT_14cb889c8) && (param_3[2] == DAT_14cb889d0)) {
    if ((param_5 & *(longlong *)(param_2 + 0x60) == 0) == 1) {
      uVar2 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(undefined8 *)(param_2 + 0x60) = uVar2;
    }
  }
  else if ((iVar1 == (int)DAT_14cb88880) && (param_3[2] == DAT_14cb88888)) {
    if ((param_5 != 0) && (*(longlong *)(param_2 + 0x68) == 0)) {
      uVar2 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(undefined8 *)(param_2 + 0x68) = uVar2;
    }
  }
  else {
    if ((iVar1 != DAT_14cb889b0) || (param_3[2] != DAT_14cb889b4._4_4_)) {
      FUN_1403a08e8(param_1,param_2);
      return;
    }
    if ((param_5 & *(longlong *)(param_2 + 0x70) == 0) == 1) {
      uVar2 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(undefined8 *)(param_2 + 0x70) = uVar2;
    }
  }
  return;
}



// FUNCTION 1403a0728 FUN_1403a0728 body=447 status=ok
// SIG undefined FUN_1403a0728(void)

ulonglong * FUN_1403a0728(char *param_1,ulonglong *param_2)

{
  char *_Str;
  char cVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_158 [32];
  char *local_138;
  int local_130;
  undefined1 local_12c;
  char acStack_12a [258];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar1 = *param_1;
  if (cVar1 == '\x03') {
    uVar9 = *(ulonglong *)(param_1 + 4);
  }
  else if (cVar1 == '\x02') {
    iVar3 = *(int *)(param_1 + 0xc);
    uVar9 = DAT_14cb7c570;
    if ((iVar3 != 1) && (uVar9 = DAT_14cb7c578, iVar3 != 0)) {
      _Str = acStack_12a + 2;
      memset(_Str,0,0x100);
      FUN_1407bf796(_Str,0x100,&DAT_149dfc0ac,iVar3);
      sVar4 = strlen(_Str);
      iVar3 = (int)sVar4;
      if (iVar3 == 0) {
LAB_1403a08e4:
        uVar12 = 0;
        uVar9 = 0;
      }
      else {
        lVar7 = (longlong)iVar3;
        if (_Str <= acStack_12a + lVar7 + 1) {
          lVar11 = 0;
          lVar8 = 0;
LAB_1403a082d:
          if ((byte)(acStack_12a[lVar8 + lVar7 + 1] - 0x30U) < 10) goto code_r0x0001403a083c;
          iVar5 = (int)lVar8;
          if (iVar5 == 0 || iVar3 <= -iVar5) goto LAB_1403a0865;
          lVar11 = 0;
          if (((uint)-iVar5 < 0xb) && (acStack_12a[lVar8 + lVar7 + 1] == '_')) {
            if ((iVar5 != -1) && (acStack_12a[lVar8 + lVar7 + 2] == '0')) goto LAB_1403a0865;
            lVar10 = 0;
            do {
              lVar11 = (longlong)acStack_12a[lVar8 + lVar7 + 2] + lVar10 * 10;
              lVar10 = lVar11 + -0x30;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0);
            if (lVar10 < 0x7fffffff) {
              iVar3 = iVar3 + iVar5 + -1;
              lVar11 = lVar11 + -0x2f;
            }
            else {
LAB_1403a0865:
              lVar11 = 0;
            }
          }
          goto LAB_1403a0867;
        }
        lVar11 = 0;
LAB_1403a086b:
        local_12c = 0;
        local_138 = _Str;
        local_130 = iVar3;
        uVar2 = FUN_14001a6c0(&local_138,1);
        uVar9 = lVar11 << 0x20;
        uVar12 = (ulonglong)uVar2;
      }
      *param_2 = uVar12 | uVar9;
      goto LAB_1403a0758;
    }
  }
  else {
    if (cVar1 != '\x01') {
      *param_2 = 0;
      goto LAB_1403a0758;
    }
    puVar6 = &DAT_14cb7c580;
    if (*(int *)(param_1 + 0xc) != 0) {
      puVar6 = &DAT_14cb7c588;
    }
    uVar9 = *puVar6;
  }
  *param_2 = uVar9;
LAB_1403a0758:
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x0001403a083c:
  lVar10 = lVar8 + -1;
  lVar8 = lVar8 + -1;
  if (acStack_12a + lVar7 + 1 + lVar10 < _Str) {
LAB_1403a0867:
    if (iVar3 == 0) goto LAB_1403a08e4;
    goto LAB_1403a086b;
  }
  goto LAB_1403a082d;
}



// FUNCTION 1403a08e8 FUN_1403a08e8 body=258 status=ok
// SIG undefined FUN_1403a08e8(void)

longlong FUN_1403a08e8(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,
                      byte param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*param_3 == (int)DAT_14cb88978) && (param_3[2] == DAT_14cb88980)) {
    lVar5 = *(longlong *)(param_2 + 0x20);
    if ((param_5 & lVar5 == 0) == 1) {
      lVar5 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(longlong *)(param_2 + 0x20) = lVar5;
    }
  }
  else {
    uVar4 = (int)param_4 - 1;
    if (((byte)uVar4 < 3) &&
       (plVar3 = (longlong *)
                 (*(longlong *)(&DAT_14b400cb0 + (ulonglong)(uVar4 & 0xff) * 8) + param_2),
       plVar3 != (longlong *)0x0)) {
      if ((longlong)(int)plVar3[1] != 0) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*plVar3 + lVar5);
          if ((*(int *)(lVar2 + 0x20) == *param_3) && (*(int *)(lVar2 + 0x28) == param_3[2])) {
            return lVar2;
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)plVar3[1] * 8 != lVar5);
      }
      if ((param_5 != 0) &&
         (lVar5 = FUN_1403a1b12(param_1,param_2,param_3,param_4,param_6), lVar5 != 0)) {
        iVar1 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
          FUN_1403a1564(plVar3,iVar1);
        }
        *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = lVar5;
        return lVar5;
      }
    }
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1403a09ea FUN_1403a09ea body=2273 status=ok
// SIG undefined FUN_1403a09ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1403a09ea(longlong param_1,longlong param_2,ulonglong *param_3,byte param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  uint local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_2 + 0x68) != 0) {
    plVar21 = *(longlong **)(param_2 + 0x60);
    lVar17 = (longlong)*(int *)(param_2 + 0x68) << 3;
    do {
      lVar11 = *plVar21;
      if ((*(uint *)(lVar11 + 0x10) == (uint)*param_3) &&
         (*(uint *)(lVar11 + 0x18) == (uint)param_3[1])) {
        if (plVar21 == (longlong *)0x0) {
          lVar11 = 0;
        }
        if ((plVar21 == (longlong *)0x0 & param_4) == 0) goto LAB_1403a0f41;
        goto LAB_1403a0a68;
      }
      plVar21 = plVar21 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  if (param_4 != 0) {
LAB_1403a0a68:
    local_80 = *param_3;
    local_78 = (uint)param_3[1];
    FUN_1448075d0(local_70);
    lVar17 = FUN_14060eaf6(local_70);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_90 = *(undefined8 *)(param_2 + 0x10);
    local_88 = *(undefined4 *)(param_2 + 0x18);
    FUN_1448075d0(local_70);
    if (((DAT_14cb86df8 == 0) || (lVar10 = FUN_144837462(DAT_14cb86df8,local_70), lVar10 == 0)) ||
       (*(char *)(lVar10 + 0x58) == '\0')) {
      lVar10 = 0;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((int)(uint)param_3[1] < 1) {
      if ((lVar10 != 0 && lVar17 != 0) && ((longlong)*(int *)(lVar10 + 0x68) != 0)) {
        lVar11 = 0;
        lVar25 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0x60) + lVar25) == lVar17) goto LAB_1403a0b10;
          lVar25 = lVar25 + 8;
        } while ((longlong)*(int *)(lVar10 + 0x68) * 8 != lVar25);
        goto LAB_1403a0f41;
      }
    }
    else if (*(char *)(param_1 + 0x358) == '\x01') {
LAB_1403a0b10:
      iVar29 = *(int *)(param_2 + 0x68);
      lVar17 = (longlong)iVar29;
      *(uint *)(param_2 + 0x68) = iVar29 + 1U;
      if (*(uint *)(param_2 + 0x6c) < iVar29 + 1U) {
        FUN_141883c30((longlong *)(param_2 + 0x60),iVar29);
      }
      lVar11 = *(longlong *)(param_2 + 0x60);
      *(undefined8 *)(lVar11 + lVar17 * 8) = 0;
      puVar12 = DAT_14cb7c9c0;
      if (DAT_14cb7c9c0 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)FUN_140595974(0xf400,0);
        lVar10 = 0x7f;
        puVar2 = puVar12;
        do {
          puVar19 = puVar2 + 0x3d;
          *puVar2 = puVar19;
          lVar10 = lVar10 + -1;
          puVar2 = puVar19;
        } while (lVar10 != 0);
        *puVar19 = DAT_14cb7c9c0;
        _DAT_14cb7c9c8 = _DAT_14cb7c9c8 + 0x80;
      }
      DAT_14cb7c9c0 = (undefined8 *)*puVar12;
      _DAT_14cb7c9cc = _DAT_14cb7c9cc + 1;
      puVar12[1] = param_1;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      *puVar12 = &PTR_FUN_14b3fe360;
      puVar12[0xb] = param_2;
      puVar12[0x1a] = 0;
      *(undefined4 *)(puVar12 + 0x1b) = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x9c) = 0;
      *(undefined8 *)((longlong)puVar12 + 0xa4) = 0;
      puVar12[0x16] = 0;
      puVar12[0x17] = 0;
      *(undefined8 *)((longlong)puVar12 + 0xdc) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar12 + 0xe4) = 0;
      puVar12[0x1e] = 0;
      *(undefined4 *)(puVar12 + 0x1f) = 0;
      *(undefined1 *)(puVar12 + 0x20) = 0;
      puVar12[0x2b] = 0;
      *(undefined4 *)(puVar12 + 0x2c) = 0;
      puVar12[0x27] = 0;
      puVar12[0x28] = 0;
      puVar12[0x25] = 0;
      puVar12[0x26] = 0;
      puVar12[0x23] = 0;
      puVar12[0x24] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x104) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x164) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar12 + 0x16c) = 0;
      puVar12[0x2f] = 0;
      *(undefined4 *)(puVar12 + 0x30) = 0;
      puVar12[0x31] = 0;
      puVar12[0x32] = 0;
      puVar12[0x33] = 0;
      puVar12[0x34] = 0;
      puVar12[0x35] = 0;
      puVar12[0x36] = 0;
      puVar12[0x37] = 0;
      puVar12[0x38] = 0;
      *(undefined4 *)(puVar12 + 0x39) = 2;
      *(undefined8 *)((longlong)puVar12 + 0x1cc) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x1d4) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x1dc) = 0;
      puVar12[0x3c] = 2;
      *(undefined8 **)(lVar11 + lVar17 * 8) = puVar12;
      *(uint *)(puVar12 + 3) = (uint)param_3[1];
      puVar12[2] = *param_3;
      plVar21 = (longlong *)(param_1 + 0x1d0);
      uVar7 = (uint)*param_3;
      uVar15 = (uint)param_3[1];
      if (uVar15 != 0) {
        uVar7 = uVar15 >> 0xd ^ uVar7 - uVar15;
        uVar20 = uVar7 << 8 ^ (-0x61c88647 - uVar15) - uVar7;
        uVar24 = uVar20 >> 0xd ^ (uVar15 - uVar7) - uVar20;
        uVar15 = uVar24 >> 0xc ^ (uVar7 - uVar20) - uVar24;
        uVar7 = uVar15 << 0x10 ^ (uVar20 - uVar24) - uVar15;
        uVar20 = uVar7 >> 5 ^ (uVar24 - uVar15) - uVar7;
        uVar15 = uVar20 >> 3 ^ (uVar15 - uVar7) - uVar20;
        uVar7 = uVar15 << 10 ^ (uVar7 - uVar20) - uVar15;
        uVar7 = uVar7 >> 0xf ^ uVar20 - (uVar15 + uVar7);
      }
      FUN_140bc5272(plVar21,uVar7,param_3);
      local_a0 = *(undefined8 *)(lVar11 + lVar17 * 8);
      local_98 = lVar11;
      if (*(int *)(param_1 + 0x204) == 0) {
        iVar29 = *(int *)(param_1 + 0x1d8);
        *(int *)(param_1 + 0x1d8) = iVar29 + 1;
        if (*(int *)(param_1 + 0x1dc) == iVar29) {
          FUN_1447711aa(plVar21,iVar29);
        }
        iVar28 = *(int *)(param_1 + 0x1f8);
        if (iVar28 == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar8 = iVar28 + -1;
          }
          iVar8 = iVar8 >> 5;
        }
        lVar10 = param_1 + 0x1e0;
        iVar16 = iVar28 + 1;
        iVar23 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar23 = iVar28;
        }
        if (iVar23 >> 5 == iVar8) {
          *(int *)(param_1 + 0x1f8) = iVar16;
        }
        else {
          if (*(int *)(param_1 + 0x1fc) <= iVar28) {
            iVar8 = iVar28;
            if (iVar28 + 0x20U < 0xa0) {
              iVar16 = 0x80;
            }
            else {
              uVar7 = iVar28 + 0x20U >> 5;
              local_a8 = (ulonglong)uVar7;
              if (*(int *)(param_1 + 0x1fc) + 0x1fU < 0xa0) {
                uVar15 = 4;
                if (4 < uVar7) {
                  uVar15 = uVar7;
                }
              }
              else {
                uVar15 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
              }
              uVar13 = (ulonglong)(uVar15 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar7 = (uint)(uVar13 + 0xf);
                  if (uVar15 < 0x1ffd) {
                    uVar13 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
                  }
                  else {
                    uVar18 = (ulonglong)(uVar7 & 0xfffffff0);
                    if (uVar18 < 0x7ff1) {
                      bVar14 = (&DAT_14c841e00)[uVar7 >> 4];
                      uVar22 = 0x32;
                      if (0x32 < bVar14) {
                        uVar22 = (ulonglong)bVar14;
                      }
                      uVar26 = 0x32 - (ulonglong)bVar14;
                      do {
                        uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0) goto LAB_1403a11ba;
                        lVar11 = uVar22 + 1 + uVar26;
                        uVar26 = uVar26 - 1;
                      } while (lVar11 != 0x33);
                    }
                    uVar13 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar13 = (ulonglong)DAT_14c841df8;
                    }
                    uVar13 = -uVar13 & (uVar18 + uVar13) - 1;
                  }
                }
                else {
                  uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
                  iVar8 = *(int *)(param_1 + 0x1f8);
                }
              }
LAB_1403a11ba:
              iVar9 = (int)(uVar13 >> 2);
              iVar16 = -0x20;
              if ((int)local_a8 <= iVar9) {
                iVar16 = iVar9 << 5;
              }
            }
            *(int *)(param_1 + 0x1fc) = iVar16;
            FUN_1446efbd8(lVar10,iVar8);
            iVar16 = *(int *)(param_1 + 0x1f8) + 1;
          }
          iVar8 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar8 = iVar16;
          }
          *(int *)(param_1 + 0x1f8) = iVar16;
          if (iVar16 % 0x20 != 0) {
            lVar11 = *(longlong *)(param_1 + 0x1f0);
            if (*(longlong *)(param_1 + 0x1f0) == 0) {
              lVar11 = lVar10;
            }
            bVar14 = -(char)(iVar16 % 0x20);
            *(uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4) =
                 (uint)(*(int *)(lVar11 + (longlong)(iVar8 >> 5) * 4) << (bVar14 & 0x1f)) >>
                 (bVar14 & 0x1f);
          }
        }
        lVar11 = (longlong)iVar29;
        if (*(longlong *)(param_1 + 0x1f0) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x1f0);
        }
        bVar14 = (byte)iVar28 & 0x1f;
        puVar1 = (uint *)(lVar10 + (longlong)(iVar23 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
      }
      else {
        iVar29 = *(int *)(param_1 + 0x200);
        lVar11 = (longlong)iVar29;
        iVar28 = *(int *)(*(longlong *)(param_1 + 0x1d0) + 4 + lVar11 * 0x20);
        *(int *)(param_1 + 0x200) = iVar28;
        iVar8 = *(int *)(param_1 + 0x204) + -1;
        *(int *)(param_1 + 0x204) = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar28 * 0x20) = 0xffffffff;
        }
      }
      iVar28 = 1;
      lVar10 = param_1 + 0x1e0;
      if (*(longlong *)(param_1 + 0x1f0) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x1f0);
      }
      iVar8 = iVar29 + 0x1f;
      if (-1 < iVar29) {
        iVar8 = iVar29;
      }
      puVar1 = (uint *)(lVar10 + (longlong)(iVar8 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar29 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0x1d0);
      lVar11 = lVar11 * 0x20;
      uVar7 = (uint)param_3[1];
      *(uint *)(lVar10 + 8 + lVar11) = uVar7;
      uVar13 = *param_3;
      *(ulonglong *)(lVar10 + lVar11) = uVar13;
      *(undefined8 *)(lVar10 + 0x10 + lVar11) = 0;
      *(undefined4 *)(lVar10 + 0x18 + lVar11) = 0xffffffff;
      if (uVar7 != 0) {
        uVar15 = uVar7 >> 0xd ^ (int)uVar13 - uVar7;
        uVar20 = uVar15 << 8 ^ (-0x61c88647 - uVar7) - uVar15;
        uVar24 = uVar20 >> 0xd ^ (uVar7 - uVar15) - uVar20;
        uVar7 = uVar24 >> 0xc ^ (uVar15 - uVar20) - uVar24;
        uVar15 = uVar7 << 0x10 ^ (uVar20 - uVar24) - uVar7;
        uVar20 = uVar15 >> 5 ^ (uVar24 - uVar7) - uVar15;
        uVar24 = uVar20 >> 3 ^ (uVar7 - uVar15) - uVar20;
        uVar7 = uVar24 << 10 ^ (uVar15 - uVar20) - uVar24;
        uVar13 = (ulonglong)(uVar7 >> 0xf ^ uVar20 - (uVar24 + uVar7));
      }
      puVar27 = (undefined4 *)(lVar10 + lVar11);
      if (*(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x204) == 1) {
        uVar7 = 1;
LAB_1403a0e7c:
        iVar8 = iVar29;
        if (((int)uVar7 < 1) || (iVar28 <= *(int *)(param_1 + 0x218))) {
          uVar7 = *(int *)(param_1 + 0x218) - 1U & (uint)uVar13;
          puVar27[7] = uVar7;
          lVar11 = *(longlong *)(param_1 + 0x210);
          if (*(longlong *)(param_1 + 0x210) == 0) {
            lVar11 = param_1 + 0x208;
          }
          puVar27[6] = *(undefined4 *)
                        (lVar11 + ((longlong)*(int *)(param_1 + 0x218) - 1U & (longlong)(int)uVar7)
                                  * 4);
          lVar11 = *(longlong *)(param_1 + 0x210);
          if (*(longlong *)(param_1 + 0x210) == 0) {
            lVar11 = param_1 + 0x208;
          }
          *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x218) - 1U & (longlong)(int)uVar7) * 4) =
               iVar29;
        }
        else {
          *(int *)(param_1 + 0x218) = iVar28;
          FUN_141883d92(plVar21);
        }
      }
      else {
        iVar8 = FUN_140bc5272(plVar21,uVar13 & 0xffffffff,puVar27);
        if (iVar8 == -1) {
          uVar7 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x204);
          if (3 < uVar7) {
            uVar18 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
            lVar11 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar28 = 1 << ((byte)lVar11 & 0x1f);
          }
          goto LAB_1403a0e7c;
        }
        lVar11 = *plVar21;
        uVar3 = *puVar27;
        uVar4 = puVar27[1];
        uVar5 = puVar27[2];
        uVar6 = puVar27[3];
        *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar8 * 0x20) = *(undefined8 *)(puVar27 + 4);
        puVar27 = (undefined4 *)(lVar11 + (longlong)iVar8 * 0x20);
        *puVar27 = uVar3;
        puVar27[1] = uVar4;
        puVar27[2] = uVar5;
        puVar27[3] = uVar6;
        FUN_140d59cc8(plVar21,iVar29);
      }
      *(undefined8 *)(*plVar21 + 0x10 + (longlong)iVar8 * 0x20) = local_a0;
      lVar11 = *(longlong *)(local_98 + lVar17 * 8);
      goto LAB_1403a0f41;
    }
  }
  lVar11 = 0;
LAB_1403a0f41:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 1403a12cc FUN_1403a12cc body=139 status=ok
// SIG undefined FUN_1403a12cc(void)

undefined8 FUN_1403a12cc(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  while ((((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar3 != (undefined8 *)0x0 && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 100))) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0))))) {
    if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
      plVar2 = (longlong *)*puVar3;
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))();
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x110);
}



// FUNCTION 1403a1358 FUN_1403a1358 body=84 status=ok
// SIG undefined FUN_1403a1358(void)

void FUN_1403a1358(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1000,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x10;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1403a13ac FUN_1403a13ac body=210 status=ok
// SIG undefined FUN_1403a13ac(void)

void FUN_1403a13ac(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,byte param_5,
                  undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_3;
  if ((iVar1 == (int)DAT_14cb889e0) && (param_3[2] == DAT_14cb889e8)) {
    if ((param_5 != 0) && (*(longlong *)(param_2 + 0x60) == 0)) {
      uVar2 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(undefined8 *)(param_2 + 0x60) = uVar2;
    }
  }
  else if ((iVar1 == (int)DAT_14cb889f8) && (param_3[2] == DAT_14cb88a00)) {
    if ((param_5 != 0) && (*(longlong *)(param_2 + 0x68) == 0)) {
      uVar2 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(undefined8 *)(param_2 + 0x68) = uVar2;
    }
  }
  else {
    if ((iVar1 != DAT_14cb889b0) || (param_3[2] != DAT_14cb889b4._4_4_)) {
      FUN_1403a08e8(param_1,param_2);
      return;
    }
    if ((param_5 & *(longlong *)(param_2 + 0x70) == 0) == 1) {
      uVar2 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(undefined8 *)(param_2 + 0x70) = uVar2;
    }
  }
  return;
}



// FUNCTION 1403a147e FUN_1403a147e body=139 status=ok
// SIG undefined FUN_1403a147e(void)

undefined8 FUN_1403a147e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  while ((((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar3 != (undefined8 *)0x0 && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 100))) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0))))) {
    if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
      plVar2 = (longlong *)*puVar3;
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))();
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x120);
}



// FUNCTION 1403a150a FUN_1403a150a body=89 status=ok
// SIG undefined FUN_1403a150a(void)

void FUN_1403a150a(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5,
                  undefined4 param_6)

{
  undefined8 uVar1;
  
  if ((*param_3 == (int)DAT_14cb889c8) && (param_3[2] == DAT_14cb889d0)) {
    if ((param_5 != '\0') && (*(longlong *)(param_2 + 0x58) == 0)) {
      uVar1 = FUN_1403a1b12(param_1,param_2,param_3,0,param_6);
      *(undefined8 *)(param_2 + 0x58) = uVar1;
    }
    return;
  }
  FUN_1403a08e8(param_1,param_2);
  return;
}



// FUNCTION 1403a1564 FUN_1403a1564 body=353 status=ok
// SIG undefined FUN_1403a1564(void)

void FUN_1403a1564(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403a15e9;
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
LAB_1403a15e9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1403a16c6 FUN_1403a16c6 body=94 status=ok
// SIG undefined FUN_1403a16c6(void)

undefined8 FUN_1403a16c6(longlong param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [46];
  undefined1 local_a [2];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = 0;
  if ((*param_2 == '\x06') && (2 < *(int *)(param_2 + 0x14))) {
    puVar2 = (undefined8 *)FUN_1408264ac(param_2,param_1 + 0x28,param_3,local_a);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar2;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a1726 FUN_1403a1726 body=601 status=ok
// SIG undefined FUN_1403a1726(void)

longlong FUN_1403a1726(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcdd4(local_50);
  lVar3 = FUN_1403a1980(local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((lVar3 != 0) && (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4))) {
    lVar3 = *(longlong *)(lVar3 + 0x98);
    uVar10 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar4 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe0);
    }
    iVar8 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xe8) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                             (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)(param_1 + 0xa0);
      iVar9 = iVar8;
      do {
        iVar2 = iVar8;
        if (*(longlong *)(lVar4 + (longlong)iVar9 * 0x60) == lVar3) goto LAB_1403a1807;
        iVar9 = *(int *)((longlong)iVar9 * 0x60 + lVar4 + 0x58);
        lVar6 = 0;
      } while (iVar9 != -1);
      goto LAB_1403a194a;
    }
  }
  goto LAB_1403a18b5;
  while (iVar8 = *(int *)(lVar5 + 0x58), iVar8 != -1) {
LAB_1403a18e4:
    lVar5 = lVar4 + (longlong)iVar8 * 0x60;
    if (*(longlong *)(lVar4 + (longlong)iVar8 * 0x60) == lVar3) goto LAB_1403a18f9;
  }
  lVar5 = 0;
LAB_1403a18f9:
  if (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 0x3c)) {
    lVar3 = lVar5 + 0x40;
    if (*(longlong *)(lVar5 + 0x48) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x48);
    }
    iVar8 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar5 + 0x50) - 1U & uVar10) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(lVar5 + 8) + (longlong)iVar8 * 0x90;
        if (*(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)iVar8 * 0x90) == lVar1)
        goto LAB_1403a1946;
        iVar8 = *(int *)(lVar6 + 0x88);
      } while (iVar8 != -1);
    }
  }
  lVar6 = 0;
LAB_1403a1946:
  lVar6 = lVar6 + 8;
  goto LAB_1403a194a;
  while (iVar2 = *(int *)(lVar5 + 0x58), *(int *)(lVar5 + 0x58) != -1) {
LAB_1403a1807:
    lVar5 = lVar4 + (longlong)iVar2 * 0x60;
    if (*(longlong *)(lVar4 + (longlong)iVar2 * 0x60) == lVar3) goto LAB_1403a181f;
  }
  lVar5 = 0;
LAB_1403a181f:
  if (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 0x3c)) {
    lVar1 = *param_2;
    uVar10 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    uVar10 = (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
             (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar7 >> 4);
    lVar6 = lVar5 + 0x40;
    if (*(longlong *)(lVar5 + 0x48) != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x48);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar5 + 0x50) - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)iVar9 * 0x90) == lVar1)
        goto LAB_1403a18e4;
        iVar9 = *(int *)((longlong)iVar9 * 0x90 + *(longlong *)(lVar5 + 8) + 0x88);
      } while (iVar9 != -1);
      goto LAB_1403a194a;
    }
  }
LAB_1403a18b5:
  lVar6 = 0;
LAB_1403a194a:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1403a1980 FUN_1403a1980 body=223 status=ok
// SIG undefined FUN_1403a1980(void)

void FUN_1403a1980(int *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[1] == 2) {
    if ((*param_1 == 0) || (*param_1 == DAT_14c948000)) {
      local_18 = DAT_14c948620;
      local_20 = DAT_14c948618;
    }
    else {
      local_18 = *(undefined4 *)(*(undefined8 **)(param_1 + 6) + 1);
      local_20 = **(undefined8 **)(param_1 + 6);
    }
    FUN_1400f0e12(param_1,&local_2c,1);
    if (DAT_14cb84f20 != 0) {
      local_30 = local_24;
      local_38 = local_2c;
      local_48 = local_20;
      local_40 = local_18;
      lVar1 = FUN_1403a1a60();
      if (lVar1 != 0) goto LAB_1403a1a1c;
    }
  }
  FUN_144837462(DAT_14cbe6378,param_1);
LAB_1403a1a1c:
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a1a60 FUN_1403a1a60 body=176 status=ok
// SIG undefined FUN_1403a1a60(void)

longlong * FUN_1403a1a60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1404e6bfe();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_1404e6bfe();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_1403a1aee;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1403a1aee:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a1b12 FUN_1403a1b12 body=1644 status=ok
// SIG undefined FUN_1403a1b12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1403a1b12(longlong param_1,longlong *param_2,undefined8 *param_3,char param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 auStack_98 [47];
  char local_69;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 == 0) {
    param_5 = *(int *)(param_1 + 0x2fc) + 1 + (uint)(*(int *)(param_1 + 0x2fc) == -1);
    *(uint *)(param_1 + 0x2fc) = param_5;
  }
  plVar14 = (longlong *)(param_1 + 0x170);
  uVar18 = *(uint *)(param_1 + 0x178);
  uVar17 = *(uint *)(param_1 + 0x1a4);
  if (uVar18 != uVar17) {
    lVar5 = param_1 + 0x1a8;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1b0);
    }
    iVar16 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1b8) - 1U & param_5) * 4);
    if (iVar16 != -1) {
      uVar6 = 0;
      do {
        if (*(uint *)(*plVar14 + (longlong)iVar16 * 0x18) == param_5) goto LAB_1403a1f58;
        iVar16 = *(int *)(*plVar14 + (longlong)iVar16 * 0x18 + 0x10);
      } while (iVar16 != -1);
    }
  }
  if (uVar17 == 0) {
    *(uint *)(param_1 + 0x178) = uVar18 + 1;
    local_69 = param_4;
    if (*(uint *)(param_1 + 0x17c) == uVar18) {
      FUN_14482b872(plVar14,uVar18);
    }
    iVar16 = *(int *)(param_1 + 0x198);
    if (iVar16 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar4 = iVar16 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    lVar15 = param_1 + 0x180;
    iVar11 = iVar16 + 1;
    iVar19 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar19 = iVar16;
    }
    if (iVar19 >> 5 == iVar4) {
      *(int *)(param_1 + 0x198) = iVar11;
    }
    else {
      if (*(int *)(param_1 + 0x19c) <= iVar16) {
        local_60 = param_3;
        if (iVar16 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar4 = iVar16;
        }
        else {
          uVar17 = iVar16 + 0x20U >> 5;
          local_68 = (ulonglong)uVar17;
          if (*(int *)(param_1 + 0x19c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar17) {
              uVar12 = uVar17;
            }
          }
          else {
            uVar12 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar12 << 2,0);
          iVar4 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)local_68 <= iVar4) {
            iVar11 = iVar4 << 5;
          }
          iVar4 = *(int *)(param_1 + 0x198);
        }
        *(int *)(param_1 + 0x19c) = iVar11;
        FUN_1446efbd8(lVar15,iVar4);
        iVar11 = *(int *)(param_1 + 0x198) + 1;
        param_3 = local_60;
      }
      iVar4 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar4 = iVar11;
      }
      *(int *)(param_1 + 0x198) = iVar11;
      if (iVar11 % 0x20 != 0) {
        lVar5 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar5 = lVar15;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)(lVar5 + (longlong)(iVar4 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar5 = (longlong)(int)uVar18;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar15 = *(longlong *)(param_1 + 400);
    }
    bVar10 = (byte)iVar16 & 0x1f;
    puVar7 = (uint *)(lVar15 + (longlong)(iVar19 >> 5) * 4);
    *puVar7 = *puVar7 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    param_4 = local_69;
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x1a0);
    lVar5 = (longlong)(int)uVar18;
    iVar16 = *(int *)(*(longlong *)(param_1 + 0x170) + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 0x1a0) = iVar16;
    *(uint *)(param_1 + 0x1a4) = uVar17 - 1;
    if (uVar17 - 1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  iVar16 = 1;
  lVar15 = param_1 + 0x180;
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar15 = *(longlong *)(param_1 + 400);
  }
  uVar17 = uVar18 + 0x1f;
  if (-1 < (int)uVar18) {
    uVar17 = uVar18;
  }
  puVar7 = (uint *)(lVar15 + (longlong)((int)uVar17 >> 5) * 4);
  *puVar7 = *puVar7 | 1 << ((byte)uVar18 & 0x1f);
  puVar7 = (uint *)(*(longlong *)(param_1 + 0x170) + lVar5 * 0x18);
  *puVar7 = param_5;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0xffffffff;
  uVar17 = *(int *)(param_1 + 0x178) - *(int *)(param_1 + 0x1a4);
  if ((uVar17 != 0) && (uVar17 != 1)) {
    lVar5 = param_1 + 0x1a8;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1b0);
    }
    uVar12 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1b8) - 1U & param_5) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar9 = (uint *)(*plVar14 + (longlong)(int)uVar12 * 0x18);
        if (*puVar9 == param_5) {
          uVar17 = puVar7[1];
          uVar1 = puVar7[2];
          uVar2 = puVar7[3];
          *puVar9 = *puVar7;
          puVar9[1] = uVar17;
          puVar9[2] = uVar1;
          puVar9[3] = uVar2;
          FUN_140d59c56(plVar14,uVar18);
          goto LAB_1403a1d97;
        }
        uVar12 = puVar9[4];
      } while (uVar12 != 0xffffffff);
    }
  }
  if (3 < uVar17) {
    uVar13 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar5 & 0x1f);
  }
  uVar12 = uVar18;
  if (((int)uVar17 < 1) || (iVar16 <= *(int *)(param_1 + 0x1b8))) {
    uVar17 = *(int *)(param_1 + 0x1b8) - 1U & param_5;
    puVar7[5] = uVar17;
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar5 = param_1 + 0x1a8;
    }
    puVar7[4] = *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U & (longlong)(int)uVar17)
                                  * 4);
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar5 = param_1 + 0x1a8;
    }
    *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U & (longlong)(int)uVar17) * 4) =
         uVar18;
  }
  else {
    *(int *)(param_1 + 0x1b8) = iVar16;
    FUN_1403a21aa(plVar14);
  }
LAB_1403a1d97:
  lVar5 = *plVar14;
  local_50 = *(uint *)(param_3 + 1);
  local_58 = *param_3;
  puVar7 = DAT_14cb7c9e0;
  if (DAT_14cb7c9e0 == (uint *)0x0) {
    puVar7 = (uint *)FUN_140595974(0x1a000,0);
    lVar15 = 0x3ff;
    puVar9 = puVar7;
    do {
      puVar8 = puVar9 + 0x1a;
      *(uint **)puVar9 = puVar8;
      lVar15 = lVar15 + -1;
      puVar9 = puVar8;
    } while (lVar15 != 0);
    *(uint **)puVar8 = DAT_14cb7c9e0;
    _DAT_14cb7c9e8 = _DAT_14cb7c9e8 + 0x400;
  }
  DAT_14cb7c9e0 = *(uint **)puVar7;
  _DAT_14cb7c9ec = _DAT_14cb7c9ec + 1;
  puVar20 = (undefined8 *)(lVar5 + (longlong)(int)uVar12 * 0x18 + 8);
  *puVar7 = param_5;
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(puVar7 + 2) = uVar6;
  uVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined8 *)(puVar7 + 4) = uVar6;
  lVar5 = (**(code **)(*param_2 + 0x20))(param_2);
  *(longlong *)(puVar7 + 6) = lVar5;
  *(undefined8 *)(puVar7 + 8) = local_58;
  puVar7[10] = local_50;
  *(char *)(puVar7 + 0xb) = param_4;
  *(longlong *)(puVar7 + 0xc) = param_1;
  *(undefined1 *)(puVar7 + 0xe) = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x17] = 0;
  bVar10 = (byte)puVar7[0x18] & 0xf8;
  *(byte *)(puVar7 + 0x18) = bVar10;
  if (param_4 != '\x02') {
    if (*(longlong *)(puVar7 + 4) != 0) {
      bVar10 = bVar10 | 1;
      *(byte *)(puVar7 + 0x18) = bVar10;
    }
    if ((((param_4 == '\0') && (puVar7[8] == (uint)DAT_14cb88978)) && (puVar7[10] == DAT_14cb88980))
       && (*(longlong *)(puVar7 + 4) != 0 || lVar5 != 0)) {
      *(byte *)(puVar7 + 0x18) = bVar10 | (lVar5 != 0) * '\x02' + 2U;
    }
  }
  *puVar20 = puVar7;
  if ((puVar7 == (uint *)0x0) || ((puVar7[0x18] & 1) == 0)) goto LAB_1403a1f55;
  cVar3 = (**(code **)(**(longlong **)(puVar7 + 0xc) + 0x158))
                    (*(longlong **)(puVar7 + 0xc),*(undefined8 *)(puVar7 + 4));
  if (cVar3 == '\0') goto LAB_1403a1f55;
  FUN_140bded0c(param_1,puVar7);
  if (*(char *)(param_1 + 0x151) != '\x01') goto LAB_1403a1f55;
  cVar3 = FUN_140bde87c(param_1);
  if (cVar3 == '\0') goto LAB_1403a1f55;
  if (*(int *)(param_1 + 0x144) == 0) {
LAB_1403a204a:
    uVar6 = 0;
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x140);
    uVar6 = 0;
    if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      if (((plVar14 == (longlong *)0x0) ||
          ((((int)plVar14[2] != *(int *)(param_1 + 0x144) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) || (*plVar14 == 0)))) ||
         (lVar5 = *(longlong *)(*plVar14 + 0x30), lVar5 == 0)) goto LAB_1403a204a;
      uVar6 = *(undefined8 *)(lVar5 + 0x360);
    }
  }
  FUN_140bde906(uVar6,puVar7,0);
  FUN_140bdeb5a(param_1,puVar7);
LAB_1403a1f55:
  uVar6 = *puVar20;
LAB_1403a1f58:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a21aa FUN_1403a21aa body=607 status=ok
// SIG undefined FUN_1403a21aa(void)

void FUN_1403a21aa(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
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
LAB_1403a2201:
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
  }
  else {
    if (uVar8 == 0) goto LAB_1403a237d;
    FUN_1446efa72(plVar6,0,uVar8,4);
    if (0 < (int)uVar8) goto LAB_1403a2201;
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  local_40 = 0;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_48._0_4_ = 0xffffffff;
    local_48._4_4_ = 0;
    local_58._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar10 = local_58 >> 0x20;
  }
  iVar5 = (int)local_58;
  uVar8 = (uint)local_48;
  iVar9 = local_48._4_4_;
  iVar4 = local_40;
  if (local_48._4_4_ < (int)local_50[3]) {
    do {
      lVar7 = *param_1;
      lVar11 = (longlong)iVar9;
      uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar7 + lVar11 * 0x18);
      iVar12 = (int)uVar13;
      *(int *)(lVar7 + 0x14 + lVar11 * 0x18) = iVar12;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar11 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar8 = ~(uint)uVar10 & uVar8;
      plVar6 = (longlong *)local_50[2];
      if ((longlong *)local_50[2] == (longlong *)0x0) {
        plVar6 = local_50;
      }
      iVar12 = (int)local_50[3];
      lVar7 = (longlong)iVar5;
      uVar3 = *(uint *)((longlong)plVar6 + lVar7 * 4) & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar9 = iVar12 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar2 = iVar9;
        if (iVar9 < iVar5) {
          iVar2 = iVar5;
        }
        if (iVar9 <= iVar5) break;
        lVar11 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar3 = *(uint *)((longlong)plVar6 + lVar11 * 4 + lVar7 * 4 + 4);
          if (uVar3 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar2 - lVar7 == lVar11) goto LAB_1403a237d;
        }
        iVar5 = iVar5 + (int)lVar11 + 1;
        uVar8 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar3 & uVar3);
      uVar13 = uVar10 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = (iVar4 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar12);
  }
LAB_1403a237d:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a240a FUN_1403a240a body=385 status=ok
// SIG undefined FUN_1403a240a(void)

undefined8 * FUN_1403a240a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(int *)(param_3 + 0x10) == 0) || (iVar4 = *(int *)(param_3 + 0x14), iVar4 == 0)) ||
      (*(int *)(param_3 + 0x10) == DAT_14c948000)) || ((iVar4 == 1 || (iVar4 < 2)))) {
    local_20 = DAT_14c948620;
    uVar5 = DAT_14c948618;
  }
  else {
    local_20 = *(uint *)(*(longlong *)(param_3 + 0x28) + 0x14);
    uVar5 = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xc);
  }
  local_28._0_4_ = (uint)uVar5;
  if (local_20 != 0) {
    uVar3 = local_20 >> 0xd ^ (uint)local_28 - local_20;
    uVar7 = uVar3 << 8 ^ (-0x61c88647 - local_20) - uVar3;
    uVar9 = uVar7 >> 0xd ^ (local_20 - uVar3) - uVar7;
    uVar6 = uVar9 >> 0xc ^ (uVar3 - uVar7) - uVar9;
    uVar3 = uVar6 << 0x10 ^ (uVar7 - uVar9) - uVar6;
    uVar7 = uVar3 >> 5 ^ (uVar9 - uVar6) - uVar3;
    uVar6 = uVar7 >> 3 ^ (uVar6 - uVar3) - uVar7;
    uVar3 = uVar6 << 10 ^ (uVar3 - uVar7) - uVar6;
    local_28._0_4_ = uVar3 >> 0xf ^ uVar7 - (uVar6 + uVar3);
  }
  uVar3 = (uint)local_28;
  local_28 = uVar5;
  iVar4 = FUN_1411305fa((longlong *)(param_1 + 8),uVar3,&local_28);
  if (iVar4 != -1) {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((lVar2 + (longlong)iVar4 * 0x80 + 0x10U & 0xffffffffffffffef) != 0) {
      bVar1 = *(byte *)(lVar2 + (longlong)iVar4 * 0x80 + 0x70);
      *(undefined1 *)param_2 = 1;
      uVar3 = (uint)bVar1;
      *(uint *)((longlong)param_2 + 0xc) = uVar3;
      puVar8 = &DAT_14cb7c580;
      if (uVar3 != 0) {
        puVar8 = &DAT_14cb7c588;
      }
      *(undefined8 *)((longlong)param_2 + 4) = *puVar8;
      goto LAB_1403a2555;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1403a2555:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a258c FUN_1403a258c body=1159 status=ok
// SIG undefined FUN_1403a258c(void)

void FUN_1403a258c(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  longlong **pplVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 != 0) {
    plVar3 = param_1 + 7;
    FUN_144a1cbf0(plVar3,0,uVar10,4);
    if (0 < (int)uVar10) {
      uVar2 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar3;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar10 != uVar2);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] == 0) {
      uVar17 = 1;
      local_98 = 0xffffffff;
      local_60._4_4_ = 0;
      uVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar16 = local_70 & 0xffffffff;
      uVar17 = local_70 >> 0x20;
      local_98 = (uint)local_60;
    }
    local_80 = local_68;
    if (local_60._4_4_ < (int)local_68[3]) {
      iVar9 = local_60._4_4_;
      iVar14 = local_58;
      local_88 = plVar3;
      do {
        local_78 = *param_1 + (longlong)iVar9 * 0x50;
        local_94 = iVar14;
        local_90 = uVar16;
        if (*(char *)(*param_1 + (longlong)iVar9 * 0x50) == '\x01') {
          FUN_1447a97f4(&local_70,local_78 + 0x10);
          if (0 < local_70._4_4_) {
            lVar15 = 0;
            uVar16 = 0;
            iVar14 = local_70._4_4_;
            iVar4 = DAT_14c948000;
            do {
              bVar18 = (int)local_70 != 0;
              bVar19 = (int)local_70 != iVar4;
              piVar11 = &DAT_14c948620;
              piVar12 = (int *)&DAT_14c948618;
              if (bVar19 && bVar18) {
                pplVar13 = &local_68;
                if (0 < local_4c) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar14) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                piVar12 = (int *)((longlong)pplVar13 + lVar15);
              }
              if ((*piVar12 == DAT_14cb7beb0) && (*piVar11 == DAT_14cb7beb8)) {
LAB_1403a2875:
                FUN_1402b5374(&local_70,uVar16 & 0xffffffff,0);
                iVar14 = local_70._4_4_;
                iVar4 = DAT_14c948000;
              }
              else {
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bec8) && (*piVar11 == DAT_14cb7bed0)) goto LAB_1403a2875;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bee0) && (*piVar11 == DAT_14cb7bee8)) goto LAB_1403a2875;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bef8) && (*piVar11 == DAT_14cb7bf00)) goto LAB_1403a2875;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar14) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar15 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar15);
                }
                if ((*piVar12 == DAT_14cb7bf10) && (*piVar11 == DAT_14cb7bf18)) goto LAB_1403a2875;
              }
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + 0xc;
            } while ((longlong)uVar16 < (longlong)iVar14);
          }
          iVar14 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar14 = *(int *)(local_78 + 0x10);
        }
        uVar16 = (longlong)iVar14 & (longlong)(int)param_1[9] - 1U;
        iVar14 = (int)uVar16;
        *(int *)(local_78 + 0x4c) = iVar14;
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_88;
        }
        *(undefined4 *)(local_78 + 0x48) =
             *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_88;
        }
        *(int *)((longlong)plVar3 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        uVar10 = local_98 & ~(uint)uVar17;
        plVar3 = (longlong *)local_80[2];
        if ((longlong *)local_80[2] == (longlong *)0x0) {
          plVar3 = local_80;
        }
        iVar4 = (int)local_80[3];
        iVar9 = (int)local_90;
        lVar15 = (longlong)iVar9;
        uVar2 = *(uint *)((longlong)plVar3 + lVar15 * 4) & uVar10;
        uVar16 = local_90;
        iVar14 = local_94;
        if (uVar2 == 0) {
          iVar5 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar5 = iVar4 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar9) {
            iVar6 = iVar9;
          }
          if (iVar5 <= iVar9) break;
          lVar8 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar2 = *(uint *)((longlong)plVar3 + lVar8 * 4 + lVar15 * 4 + 4);
            if (uVar2 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar6 - lVar15 == lVar8) goto LAB_1403a29d4;
          }
          local_98 = 0xffffffff;
          uVar16 = (ulonglong)(iVar9 + (int)lVar8 + 1);
          uVar10 = local_98;
        }
        local_98 = uVar10;
        uVar17 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar4);
    }
  }
LAB_1403a29d4:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a2a14 FUN_1403a2a14 body=899 status=ok
// SIG undefined FUN_1403a2a14(void)

void FUN_1403a2a14(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_1;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (lVar5 != 0) {
    local_70 = *(ulonglong *)(lVar5 + 0x18);
    plVar6 = (longlong *)FUN_145707f66(local_88);
    if ((plVar6 != (longlong *)0x0) &&
       (local_98 = plVar6, local_78 = FUN_1406f612e(lVar5), plVar6 = local_98, local_78 != 0)) {
      local_80 = local_98 + 2;
      local_70 = 0x100000000;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_68 = local_80;
      if ((int)local_98[5] == 0) {
        uVar16 = 1;
        local_60._0_4_ = 0xffffffff;
        iVar13 = 0;
        local_60._4_4_ = 0;
        local_70._0_4_ = 0;
      }
      else {
        FUN_1449c0562(&local_70);
        uVar16 = local_70 >> 0x20;
        iVar13 = (int)plVar6[5];
      }
      plVar3 = local_68;
      if (local_60._4_4_ != iVar13 || local_68 != local_80) {
        iVar9 = (int)local_70;
        uVar12 = (uint)local_60;
        iVar8 = local_60._4_4_;
        iVar11 = local_58;
        local_8c = iVar13;
        do {
          lVar14 = *plVar6;
          lVar7 = (longlong)iVar8 * 0x90;
          lVar5 = lVar14 + lVar7;
          if (*(longlong *)(lVar14 + 0x74 + lVar7) == 0) {
LAB_1403a2b33:
            if (*(longlong *)(lVar5 + 0x7c) != 0) {
              FUN_1446dcdd4(&local_70,lVar5 + 0x7c);
              if (DAT_14cbc5818 == 0) {
                lVar14 = 0;
              }
              else {
                lVar14 = FUN_144837462(DAT_14cbc5818,&local_70);
              }
              if (CONCAT44(uStack_54,local_58) != 0) {
                FUN_1400020a8();
              }
              plVar6 = local_98;
              if ((lVar14 != 0) &&
                 (cVar4 = FUN_1411e55f8(local_78,lVar14), plVar6 = local_98, cVar4 != '\0')) {
                FUN_148efed08(local_88,lVar5,1);
                plVar6 = local_98;
              }
            }
          }
          else {
            FUN_1446dcdd4(&local_70,lVar14 + lVar7 + 0x74);
            if (DAT_14cbc5818 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = FUN_144837462(DAT_14cbc5818,&local_70);
            }
            if (CONCAT44(uStack_54,local_58) != 0) {
              FUN_1400020a8();
            }
            plVar6 = local_98;
            if (lVar14 != 0) {
              cVar4 = FUN_1411e55f8(local_78,lVar14);
              plVar6 = local_98;
              if (cVar4 != '\0') {
                FUN_144343ad8(local_88,lVar5,1,0xc61c4000);
                plVar6 = local_98;
              }
              goto LAB_1403a2b33;
            }
          }
          uVar12 = uVar12 & ~(uint)uVar16;
          plVar15 = (longlong *)plVar3[2];
          if ((longlong *)plVar3[2] == (longlong *)0x0) {
            plVar15 = plVar3;
          }
          iVar13 = (int)plVar3[3];
          lVar5 = (longlong)iVar9;
          uVar10 = *(uint *)((longlong)plVar15 + lVar5 * 4) & uVar12;
          if (uVar10 == 0) {
            iVar8 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar8 = iVar13 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar2 = iVar8;
            if (iVar8 < iVar9) {
              iVar2 = iVar9;
            }
            if (iVar9 < iVar8) {
              lVar14 = 0;
              do {
                uVar10 = *(uint *)((longlong)plVar15 + lVar14 * 4 + lVar5 * 4 + 4);
                if (uVar10 != 0) {
                  iVar9 = iVar9 + (int)lVar14 + 1;
                  uVar12 = 0xffffffff;
                  goto LAB_1403a2bad;
                }
                iVar11 = iVar11 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar2 - lVar5 != lVar14);
              uVar12 = 0xffffffff;
              iVar9 = iVar2;
            }
            iVar9 = iVar9 + 1;
            plVar6 = local_98;
            iVar8 = iVar13;
          }
          else {
LAB_1403a2bad:
            uVar16 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar16 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar8 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar8) {
              iVar8 = iVar13;
            }
          }
        } while (iVar8 != local_8c || plVar3 != local_80);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403a2d98 FUN_1403a2d98 body=136 status=ok
// SIG undefined FUN_1403a2d98(void)

void FUN_1403a2d98(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403a2f52(&local_31);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_1403a2ea8(param_1);
  FUN_1403a2e22(&local_31);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403a2e22 FUN_1403a2e22 body=134 status=ok
// SIG undefined FUN_1403a2e22(void)

void FUN_1403a2e22(char *param_1)

{
  longlong lVar1;
  
  if (*param_1 == '\x01') {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xfc0
             );
    if (lVar1 != 0) {
      *(undefined8 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xfc0) = 0;
      FUN_1403a31e0(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1403a2ea8 FUN_1403a2ea8 body=169 status=ok
// SIG undefined FUN_1403a2ea8(void)

void FUN_1403a2ea8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    iVar4 = 0;
    do {
      iVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x18))();
      iVar4 = iVar4 + iVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((iVar4 == 0) && (0 < *(int *)(param_1 + 4))) {
    FUN_141589436();
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_147965cf0(&DAT_14cacd820,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(int *)(param_1 + 4) = iVar4;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403a2f52 FUN_1403a2f52 body=266 status=ok
// SIG undefined FUN_1403a2f52(void)

undefined1 * FUN_1403a2f52(undefined1 *param_1)

{
  void *pvVar1;
  void *_Dst;
  
  *param_1 = 0;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xfc0) == 0
     ) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    _Dst = (void *)FUN_14001cc68(0x2b0);
    memset(_Dst,0,0x2b0);
    FUN_1403a305c(_Dst);
    pvVar1 = *(void **)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xfc0);
    if ((pvVar1 != _Dst) &&
       (*(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xfc0) = _Dst, pvVar1 != (void *)0x0)) {
      FUN_1403a31e0(pvVar1);
      FUN_1400020a8(pvVar1);
    }
    *param_1 = 1;
  }
  return param_1;
}



// FUNCTION 1403a305c FUN_1403a305c body=387 status=ok
// SIG undefined FUN_1403a305c(void)

void FUN_1403a305c(undefined8 *param_1)

{
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
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xffffffff00000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x8000000000;
  param_1[0x24] = 0xffffffff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xffffffff00000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8000000000;
  param_1[0x2e] = 0xffffffff;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xffffffff00000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0x8000000000;
  param_1[0x38] = 0xffffffff;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0xffffffff00000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0x8000000000;
  param_1[0x42] = 0xffffffff;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0xffffffff00000000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x8000000000;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0xffffffff00000000;
  param_1[0x52] = 0;
  param_1[0x53] = 0xffffffff00000000;
  param_1[0x54] = 0;
  param_1[0x55] = 0xffffffff00000000;
  return;
}



// FUNCTION 1403a31e0 FUN_1403a31e0 body=2110 status=ok
// SIG undefined FUN_1403a31e0(void)

void FUN_1403a31e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)((longlong)param_1 + 0x2ac) != -1) {
    if (param_1[0x54] != 0) {
      FUN_1400020a8();
    }
    param_1[0x54] = 0;
    param_1[0x55] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x29c) != -1) {
    if (param_1[0x52] != 0) {
      FUN_1400020a8();
    }
    param_1[0x52] = 0;
    param_1[0x53] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x28c) != -1) {
    if (param_1[0x50] != 0) {
      FUN_1400020a8();
    }
    param_1[0x50] = 0;
    param_1[0x51] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x23c) != -1) {
    *(undefined4 *)(param_1 + 0x4f) = 0;
    if (param_1[0x4e] != 0) {
      FUN_1400020a8();
    }
    FUN_147beda7c(param_1 + 0x46);
    param_1[0x46] = 0;
    param_1[0x47] = -0x100000000;
    param_1[0x4a] = 0;
    *(undefined4 *)(param_1 + 0x4b) = 0;
    *(undefined4 *)((longlong)param_1 + 0x25c) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x264) = 0;
    param_1[0x4e] = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x1ec) != -1) {
    *(undefined4 *)(param_1 + 0x45) = 0;
    if (param_1[0x44] != 0) {
      FUN_1400020a8();
    }
    FUN_147bed5c6(param_1 + 0x3c);
    param_1[0x3c] = 0;
    param_1[0x3d] = -0x100000000;
    param_1[0x40] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0x80;
    *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x214) = 0;
    param_1[0x44] = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x19c) != -1) {
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (param_1[0x3a] != 0) {
      FUN_1400020a8();
    }
    FUN_147bf0f80(param_1 + 0x32);
    param_1[0x32] = 0;
    param_1[0x33] = -0x100000000;
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x80;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x14c) != -1) {
    *(undefined4 *)(param_1 + 0x31) = 0;
    if (param_1[0x30] != 0) {
      FUN_1400020a8();
    }
    FUN_147bed8ea(param_1 + 0x28);
    param_1[0x28] = 0;
    param_1[0x29] = -0x100000000;
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x2d) = 0;
    *(undefined4 *)((longlong)param_1 + 0x16c) = 0x80;
    *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xfc) != -1) {
    *(undefined4 *)(param_1 + 0x27) = 0;
    if (param_1[0x26] != 0) {
      FUN_1400020a8();
    }
    FUN_147bed758(param_1 + 0x1e);
    param_1[0x1e] = 0;
    param_1[0x1f] = -0x100000000;
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
    param_1[0x26] = 0;
    *(undefined4 *)(param_1 + 0x27) = 0;
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x14;
  plVar2 = param_1 + 0x16;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar2;
  if ((int)param_1[0x19] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_88 = plVar1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      lVar3 = *local_88;
      lVar4 = (longlong)iStack_6c * 0x60;
      *(undefined4 *)(lVar3 + 0x50 + lVar4) = 0;
      if (*(longlong *)(lVar3 + 0x48 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_147befbf8(lVar3 + lVar4 + 8);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_1448fc38a(plVar1,0);
  }
  param_1[0x1a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xcc)) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
    FUN_1446efbd8(plVar2,0);
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 10;
  plVar2 = param_1 + 0xc;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar2;
  if ((int)param_1[0xf] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_88 = plVar1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      lVar3 = *local_88;
      lVar4 = (longlong)iStack_6c * 0x60;
      *(undefined4 *)(lVar3 + 0x50 + lVar4) = 0;
      if (*(longlong *)(lVar3 + 0x48 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_147befb6a(lVar3 + lVar4 + 8);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_1448fc38a(plVar1,0);
  }
  param_1[0x10] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x7c)) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
    FUN_1446efbd8(plVar2,0);
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_88 = param_1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      lVar3 = *local_88;
      lVar4 = (longlong)iStack_6c * 0x60;
      *(undefined4 *)(lVar3 + 0x50 + lVar4) = 0;
      if (*(longlong *)(lVar3 + 0x48 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_1404dc9c0(lVar3 + lVar4 + 8);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403a3a36 FUN_1403a3a36 body=360 status=ok
// SIG undefined FUN_1403a3a36(void)

void FUN_1403a3a36(longlong param_1,int param_2)

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
  
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  if (param_2 + 0x1fU < 0xa0) {
    iVar5 = 0x80;
  }
  else {
    uVar10 = param_2 + 0x1fU >> 5;
    if (*(int *)(param_1 + 0x1c) + 0x1fU < 0xa0) {
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
              if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1403a3ad0;
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
LAB_1403a3ad0:
    iVar4 = (int)(uVar6 >> 2);
    iVar5 = -0x20;
    if ((int)uVar10 <= iVar4) {
      iVar5 = iVar4 << 5;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar5;
  FUN_1403a3b9e(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1403a3b9e FUN_1403a3b9e body=192 status=ok
// SIG undefined FUN_1403a3b9e(void)

void FUN_1403a3b9e(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2 + 0x1fU >> 5;
  uVar6 = *(int *)((longlong)param_1 + 0x1c) + 0x1f;
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  if (uVar6 < 0xa0) {
    if (pvVar4 == (void *)0x0) goto LAB_1403a3be2;
    memmove(param_1,pvVar4,(ulonglong)(uVar5 << 2));
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 >> 5;
    if (pvVar4 == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x10,0,uVar6,4);
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(ulonglong)(uVar5 << 2));
      goto LAB_1403a3be2;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x10,uVar5,uVar6,4);
LAB_1403a3be2:
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
         (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 1403a3c5e FUN_1403a3c5e body=262 status=ok
// SIG undefined FUN_1403a3c5e(void)

undefined8 * FUN_1403a3c5e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 5) = uVar2;
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
    *(int *)((longlong)param_1 + 0x2c) = iVar3;
    if (((*(uint *)(param_2 + 8) & 0x30) == 0) && (param_1[3] == 0)) {
      plVar1 = param_1 + 1;
      param_1[4] = &DAT_14cb1cff0;
      param_1[3] = param_1;
      lVar6 = DAT_14cb1cff0;
      while( true ) {
        param_1[1] = lVar6;
        LOCK();
        lVar4 = *(longlong *)param_1[4];
        bVar7 = lVar6 == lVar4;
        if (bVar7) {
          *(longlong *)param_1[4] = (longlong)plVar1;
          lVar4 = lVar6;
        }
        UNLOCK();
        if (bVar7) break;
        param_1[1] = lVar4;
        lVar6 = *(longlong *)param_1[4];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
    }
  }
  return param_1;
}



// FUNCTION 1403a3d6c FUN_1403a3d6c body=546 status=ok
// SIG undefined FUN_1403a3d6c(void)

longlong * FUN_1403a3d6c(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (longlong)&PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = (longlong)&PTR_FUN_14b0d3020;
  FUN_1446f470e(&local_48,L"ai_target",1);
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0x18;
  param_1[0x11] = local_48;
  *(undefined4 *)(param_1 + 0x12) = 0xf00000d0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 10;
  uVar1 = 10;
  if ((DAT_14c9a9054 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  *(undefined1 *)(param_1 + 0x17) = 2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_1403a4106(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x41) = 3;
  *(char *)(param_1 + 0x42) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x43) = 1;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x49) = 4;
  *(undefined4 *)(param_1 + 0x46) = 1;
  *(undefined1 *)(param_1 + 0x4a) = 2;
  *(byte *)(param_1 + 0x4b) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined2 *)(param_1 + 0x51) = 4;
  *(undefined4 *)(param_1 + 0x4e) = 0x42340000;
  *(undefined1 *)(param_1 + 0x52) = 3;
  *(char *)(param_1 + 0x53) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x57) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2ba) = 1;
  FUN_1403a3fe6(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a3f90 FUN_1403a3f90 body=86 status=ok
// SIG undefined FUN_1403a3f90(void)

void FUN_1403a3f90(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  *(undefined1 *)(param_1 + 0x78) = 1;
  bVar1 = 1;
  uVar2 = 1;
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    if (*(char *)(param_1 + 0x220) == '\x01') {
      uVar2 = *(undefined1 *)(param_1 + 0x260);
    }
    else {
      uVar2 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x79) = uVar2;
  *(undefined1 *)(param_1 + 0x7a) = uVar2;
  if (*(char *)(param_1 + 0x261) == '\0') {
    if (*(char *)(param_1 + 0x220) == '\x01') {
      bVar1 = *(byte *)(param_1 + 0x260) ^ 1;
    }
    else {
      bVar1 = 0;
    }
  }
  *(byte *)(param_1 + 0x7b) = bVar1;
  *(char *)(param_1 + 0x7c) = *(char *)(param_1 + 0x1d8);
  return;
}



// FUNCTION 1403a3fe6 FUN_1403a3fe6 body=189 status=ok
// SIG undefined FUN_1403a3fe6(void)

void FUN_1403a3fe6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    return;
  }
  lVar1 = param_1 + 0xc0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) < 0) {
    FUN_1403de8ba(lVar1,0);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_1403de8ba(param_1 + 0xd0,0);
  }
  cVar2 = *(char *)(param_1 + 0xb8);
  if (cVar2 == '\x02') {
    puVar3 = &DAT_14cb72618;
  }
  else {
    if (cVar2 == '\x04') {
      FUN_1403a40a4(lVar1,&DAT_14cb72618);
    }
    else if (cVar2 != '\x03') {
      if (cVar2 != '\x01') {
        return;
      }
      goto LAB_1403a4044;
    }
    puVar3 = &DAT_14cb72620;
  }
  FUN_1403a40a4(lVar1,puVar3);
LAB_1403a4044:
  FUN_1403a40a4(lVar1,&DAT_14cb72628);
  return;
}



// FUNCTION 1403a40a4 FUN_1403a40a4 body=98 status=ok
// SIG undefined FUN_1403a40a4(void)

void FUN_1403a40a4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1403de658(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1403a41cc(DAT_14caa8580,param_2,param_1 + 2);
  return;
}



// FUNCTION 1403a4106 FUN_1403a4106 body=198 status=ok
// SIG undefined FUN_1403a4106(void)

undefined8 * FUN_1403a4106(undefined8 *param_1)

{
  *param_1 = DAT_14cb72618;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 5) = 4;
  *(undefined4 *)(param_1 + 2) = 0x42b40000;
  *(undefined1 *)(param_1 + 6) = 3;
  *(char *)(param_1 + 7) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xd) = 3;
  *(char *)(param_1 + 0xe) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x13) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x14) = 3;
  *(char *)(param_1 + 0x15) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_140440628(param_1 + 0x17,&DAT_14cb7e2a4,0);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1403a41cc FUN_1403a41cc body=583 status=ok
// SIG undefined FUN_1403a41cc(void)

ulonglong FUN_1403a41cc(longlong param_1,longlong *param_2,longlong param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_8b8 [40];
  longlong local_890;
  undefined1 local_888 [8];
  short *local_880;
  short *local_878;
  undefined1 *local_870;
  char local_868;
  short local_860 [1035];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  if (*param_2 == 0) {
    uVar10 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
    lVar8 = *param_2;
    if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
      uVar3 = (uint)((ulonglong)lVar8 >> 0x10);
      uVar6 = (uint)lVar8 & 0xffff;
      lVar11 = param_1 + 0x160;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x168);
      }
      iVar7 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(param_1 + 0x170) - 1U &
                                (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          lVar11 = *(longlong *)(param_1 + 0x128) + (longlong)iVar7 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar7 * 0x20) == lVar8) {
            if ((lVar11 != 0) && ((longlong *)(lVar11 + 8) != (longlong *)0x0)) {
              lVar8 = *(longlong *)(lVar11 + 8);
              lVar11 = (longlong)*(int *)(lVar8 + 0x20);
              if (lVar11 != 0) {
                lVar8 = *(longlong *)(lVar8 + 0x18);
                lVar11 = lVar11 << 3;
                do {
                  FUN_144976e62(param_3,lVar8);
                  lVar8 = lVar8 + 8;
                  lVar11 = lVar11 + -8;
                } while (lVar11 != 0);
              }
              goto LAB_1403a43d0;
            }
            break;
          }
          iVar7 = *(int *)(lVar11 + 0x18);
        } while (iVar7 != -1);
      }
    }
    local_880 = local_860;
    local_868 = '\0';
    local_870 = local_4a;
    local_890 = lVar8;
    local_878 = local_880;
    FUN_14005eb5c(&local_890,&local_880);
    psVar4 = local_880;
    uVar10 = (ulonglong)((longlong)local_878 - (longlong)local_880) >> 1;
    if ((int)uVar10 != 0) {
      uVar9 = (longlong)(int)uVar10 * 2;
      do {
        psVar1 = (short *)((longlong)local_880 + (uVar9 - 2));
        if (psVar1 < local_880) goto LAB_1403a4381;
        uVar9 = uVar9 - 2;
      } while (*psVar1 != 0x2e);
      uVar9 = uVar9 >> 1;
      if ((int)uVar9 != -1) {
        do {
          uVar5 = uVar10;
          if ((int)uVar9 < (int)uVar10) {
            uVar5 = uVar9;
          }
          uVar10 = uVar5 & 0xffffffff;
          uVar9 = 0xffffffff;
          if ((int)uVar5 < 1) {
            uVar10 = 0;
          }
          else {
            uVar5 = uVar10 * 2;
            do {
              psVar1 = (short *)((longlong)psVar4 + (uVar5 - 2));
              if (psVar1 < psVar4) goto LAB_1403a4352;
              uVar5 = uVar5 - 2;
            } while (*psVar1 != 0x2e);
            uVar9 = uVar5 >> 1 & 0xffffffff;
          }
LAB_1403a4352:
          FUN_1446f82e2(local_888,uVar10,psVar4,1);
          FUN_1403a4414(param_3,local_888);
        } while ((int)uVar9 != -1);
      }
    }
LAB_1403a4381:
    if (local_868 == '\x01') {
      FUN_1400020a8(local_880);
    }
LAB_1403a43d0:
    uVar10 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(int *)(param_3 + 8) != iVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  }
  if ((local_48 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1403a4414 FUN_1403a4414 body=103 status=ok
// SIG undefined FUN_1403a4414(void)

ulonglong FUN_1403a4414(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1403a4468;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1403de658(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1403a4468:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1403a447c FUN_1403a447c body=952 status=ok
// SIG undefined FUN_1403a447c(void)

void FUN_1403a447c(longlong param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1bc;
  short local_1b4;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [256];
  undefined8 local_88;
  undefined1 local_80 [48];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1403a491c();
  plVar10 = (longlong *)FUN_14485cccc((longlong)param_2 + 0xb8);
  if (plVar10 != (longlong *)0x0) {
    uVar11 = FUN_1403a4836();
    plVar12 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar11);
    if (plVar12 != (longlong *)0x0) {
      uVar11 = FUN_1403a4836();
      plVar13 = (longlong *)FUN_144718840(plVar12,uVar11);
      if (((plVar12 != plVar13) && (plVar13 != (longlong *)0x0)) &&
         (cVar9 = (**(code **)(*plVar13 + 0x18))(plVar13), cVar9 != '\0')) {
        lVar17 = param_1 + 0x368;
        lVar14 = *(longlong *)(param_1 + 0x378);
        if (*(longlong *)(param_1 + 0x378) == 0) {
          lVar14 = lVar17;
        }
        if ((longlong)*(int *)(param_1 + 0x380) != 0) {
          lVar16 = 0;
          do {
            if (*(int *)(lVar14 + lVar16) == *(int *)((longlong)plVar10 + 0xc)) goto LAB_1403a44de;
            lVar16 = lVar16 + 4;
          } while ((longlong)*(int *)(param_1 + 0x380) * 4 != lVar16);
        }
        local_1a8 = 0;
        local_1a0 = 0xffff;
        local_198 = 0;
        local_88 = 0;
        local_50 = 0;
        local_48 = 0x200000000;
        local_1b0 = 1;
        local_190 = *(undefined8 *)(param_1 + 0x180);
        memcpy(local_188,param_2,0x100);
        if (local_80 != (undefined1 *)(param_1 + 0x98)) {
          puVar15 = (undefined1 *)(param_1 + 0x98);
          if (*(undefined1 **)(param_1 + 200) != (undefined1 *)0x0) {
            puVar15 = *(undefined1 **)(param_1 + 200);
          }
          FUN_1400709d4(local_80,puVar15,*(undefined4 *)(param_1 + 0xd0),2);
        }
        local_88 = *(undefined8 *)(param_1 + 0x90);
        local_1a8 = *(undefined8 *)(param_1 + 0x40);
        local_1a0 = *(undefined2 *)(param_1 + 0x48);
        local_198 = *(undefined8 *)(param_1 + 0x50);
        local_1bc = &DAT_3f8000003f800000;
        local_1b4 = *(short *)(param_1 + 0x3a8);
        cVar9 = (**(code **)(*plVar13 + 0x10))(plVar13);
        if (cVar9 != '\0') {
          *(float *)(param_1 + 0x88) = (float)local_1bc * *(float *)(param_1 + 0x88);
          if (1e-08 < ABS(local_1bc._4_4_ + -1.0)) {
            fVar20 = local_1bc._4_4_ * *(float *)(param_1 + 0x684);
            *(float *)(param_1 + 0x684) = fVar20;
            dVar1 = *(double *)(param_1 + 0x668);
            dVar2 = *(double *)(param_1 + 0x670);
            dVar3 = *(double *)(param_1 + 0x678);
            dVar22 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
            dVar21 = (double)fVar20;
            if (dVar21 < SQRT(dVar22)) {
              if (((dVar22 != 1.0) || (dVar18 = dVar2, dVar19 = dVar3, dVar6 = dVar1, NAN(dVar22)))
                 && (dVar18 = DAT_14c8464e8, dVar19 = DAT_14c8464f0, dVar6 = DAT_14c8464e0,
                    9.99999993922529e-09 <= dVar22)) {
                dVar22 = 1.0 / SQRT(dVar22);
                dVar18 = dVar2 * dVar22;
                dVar19 = dVar3 * dVar22;
                dVar6 = dVar1 * dVar22;
              }
              *(double *)(param_1 + 0x668) = dVar6 * dVar21;
              *(double *)(param_1 + 0x670) = dVar18 * dVar21;
              *(double *)(param_1 + 0x678) = dVar19 * dVar21;
            }
          }
          if (local_1b4 != *(short *)(param_1 + 0x3a8)) {
            local_1c8 = *(undefined8 *)(param_1 + 0x408);
            local_1d8 = *(undefined8 *)(param_1 + 0x3f8);
            uStack_1d0 = *(undefined8 *)(param_1 + 0x400);
            uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
            uVar7 = *(undefined4 *)((longlong)param_2 + 0x18);
            uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
            *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)((longlong)param_2 + 0x10);
            *(undefined4 *)(param_1 + 0x3fc) = uVar4;
            *(undefined4 *)(param_1 + 0x400) = uVar7;
            *(undefined4 *)(param_1 + 0x404) = uVar8;
            *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)((longlong)param_2 + 0x20);
            FUN_1403a4d18(param_1,local_1b4,0,1);
            *(undefined8 *)(param_1 + 0x408) = local_1c8;
            *(undefined4 *)(param_1 + 0x3f8) = (undefined4)local_1d8;
            *(undefined4 *)(param_1 + 0x3fc) = local_1d8._4_4_;
            *(undefined4 *)(param_1 + 0x400) = (undefined4)uStack_1d0;
            *(undefined4 *)(param_1 + 0x404) = uStack_1d0._4_4_;
          }
        }
        uVar4 = *(undefined4 *)((longlong)plVar10 + 0xc);
        iVar5 = *(int *)(param_1 + 0x380);
        *(uint *)(param_1 + 0x380) = iVar5 + 1U;
        if (*(uint *)(param_1 + 900) < iVar5 + 1U) {
          FUN_1447de67e(lVar17,iVar5);
        }
        if (*(longlong *)(param_1 + 0x378) != 0) {
          lVar17 = *(longlong *)(param_1 + 0x378);
        }
        *(undefined4 *)(lVar17 + (longlong)iVar5 * 4) = uVar4;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1403a44de:
  if ((local_40 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403a4836 FUN_1403a4836 body=228 status=ok
// SIG undefined FUN_1403a4836(void)

longlong FUN_1403a4836(void)

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
  if (DAT_14cbaf3a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c45f95;
    local_40 = FUN_1465eee6d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakThroughCollisionHandlerInterface",&DAT_14cbaf3a8,
                  &DAT_148c45f94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf3a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a491c FUN_1403a491c body=993 status=ok
// SIG undefined FUN_1403a491c(void)

void FUN_1403a491c(longlong param_1,void *param_2,double *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_408 [32];
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  wchar_t *local_3c8;
  code *local_3c0;
  undefined1 *local_3b8;
  code **local_3b0;
  code *local_3a8;
  code *local_3a0;
  double local_390;
  double local_388;
  double local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  code *local_358 [21];
  undefined1 local_2b0 [624];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if (((*(int *)((longlong)param_2 + 0xdc) != 0) &&
      (uVar1 = *(uint *)((longlong)param_2 + 0xd8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == *(int *)((longlong)param_2 + 0xdc))) &&
       ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
      plVar8 = (longlong *)*plVar8;
      plVar6 = (longlong *)FUN_14485cccc((longlong)param_2 + 0xb8);
      if (plVar8 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar8 + 0x480))(plVar8,*(undefined8 *)((longlong)param_2 + 0xf0));
        if (cVar5 != '\0') {
          local_368 = *(undefined8 *)((longlong)param_2 + 0x38);
          local_378 = *(undefined8 *)((longlong)param_2 + 0x28);
          uStack_370 = *(undefined8 *)((longlong)param_2 + 0x30);
          local_390 = (double)*(float *)(param_1 + 0xd8);
          local_380 = param_3[2] * local_390;
          local_388 = param_3[1] * local_390;
          local_390 = local_390 * *param_3;
          (**(code **)(*plVar8 + 0x6b8))
                    (plVar8,&local_390,&local_378,*(undefined8 *)((longlong)param_2 + 0xf0));
          uVar2 = *(undefined4 *)((longlong)plVar8 + 0xc);
          iVar3 = *(int *)(param_1 + 0x3a0);
          *(uint *)(param_1 + 0x3a0) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x3a4) < iVar3 + 1U) {
            FUN_1447de67e(param_1 + 0x388,iVar3);
          }
          lVar9 = param_1 + 0x388;
          if (*(longlong *)(param_1 + 0x398) != 0) {
            lVar9 = *(longlong *)(param_1 + 0x398);
          }
          *(undefined4 *)(lVar9 + (longlong)iVar3 * 4) = uVar2;
        }
        if (plVar6 != (longlong *)0x0) {
          if (DAT_14cb56270 == 0) {
            local_3b0 = local_358;
            local_358[0] = FUN_1449e2820;
            local_3a0 = FUN_14081d0ea;
            local_3a8 = FUN_1427b09ee;
            local_3b8 = &LAB_148630fef;
            local_3c0 = FUN_1464b6a91;
            local_3c8 = L"Engine";
            local_3d0 = 0;
            local_3d8 = 0x10004001;
            local_3e0 = 8;
            local_3e8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
          }
          plVar8 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb56270);
          if (plVar8 != (longlong *)0x0) {
            if (DAT_14cb56270 == 0) {
              local_3b0 = local_358;
              local_358[0] = FUN_1449e2820;
              local_3a0 = FUN_14081d0ea;
              local_3a8 = FUN_1427b09ee;
              local_3b8 = &LAB_148630fef;
              local_3c0 = FUN_1464b6a91;
              local_3c8 = L"Engine";
              local_3d0 = 0;
              local_3d8 = 0x10004001;
              local_3e0 = 8;
              local_3e8 = 0x28;
              FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee)
              ;
            }
            plVar6 = (longlong *)FUN_144718840(plVar8,DAT_14cb56270);
            if ((plVar8 != plVar6) && (plVar6 != (longlong *)0x0)) {
              cVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
              if (cVar5 != '\0') {
                uVar4 = *(undefined8 *)(param_1 + 0x1c8);
                uVar7 = FUN_14485cccc((longlong)param_2 + 0xb8);
                FUN_14082cf0e(local_358,uVar7,uVar4,0);
                memcpy(local_2b0,param_2,0x100);
                plVar8 = (longlong *)FUN_1405473b6();
                (**(code **)(*plVar8 + 0x128))(plVar8,local_358);
                (**(code **)(*plVar6 + 0x80))(plVar6,0,plVar8);
                if (plVar8 != (longlong *)0x0) {
                  FUN_14025a2c6(plVar8);
                }
                FUN_1403dfdc4(local_358);
              }
            }
          }
        }
      }
      if ((local_40 ^ (ulonglong)auStack_408) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_408);
}



// FUNCTION 1403a4d18 FUN_1403a4d18 body=160 status=ok
// SIG undefined FUN_1403a4d18(void)

void FUN_1403a4d18(longlong *param_1,ushort param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[0x10];
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x208) & 2) != 0)) {
    param_2 = param_2 & ~*(ushort *)(lVar1 + 0x20a);
  }
  if (*(ushort *)(param_1 + 0x75) != param_2) {
    *(ushort *)(param_1 + 0x75) = param_2;
    if (param_3 != '\0') {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar1 = param_1[4];
      }
      else {
        lVar1 = 0;
      }
      if (*(char *)(lVar1 + 0x178) == '\x03') {
        *(ushort *)((longlong)param_1 + 0x1de) = param_2;
        *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          plVar2 = (longlong *)param_1[4];
        }
        else {
          plVar2 = (longlong *)0x0;
        }
        *(int *)(plVar2 + 0x92) = (int)plVar2[0x92] + 1;
        (**(code **)(*plVar2 + 0x578))();
      }
    }
    if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001403a4da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x420))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1403a4db8 FUN_1403a4db8 body=108 status=ok
// SIG undefined FUN_1403a4db8(void)

void FUN_1403a4db8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 1;
  uVar1 = FUN_14028f9ee(&local_28,0);
  *local_28 = param_1;
  FUN_144976eca(uVar1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a4e26 FUN_1403a4e26 body=317 status=ok
// SIG undefined FUN_1403a4e26(void)

void FUN_1403a4e26(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403a4e94;
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
LAB_1403a4e94:
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



// FUNCTION 1403a4f64 FUN_1403a4f64 body=250 status=ok
// SIG undefined FUN_1403a4f64(void)

void FUN_1403a4f64(void)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  undefined8 uStack_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  lVar2 = DAT_14caec570;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caec570 == 0) goto LAB_1403a4fbb;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(DAT_14caec570 + 0x1c);
    if (2 < iVar1) {
      bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar3 < 3) {
        local_48.QuadPart = 0x20100000001;
        uStack_40 = 0x30100000101;
        local_38 = DAT_14c7585c8;
        local_34 = DAT_14c7585c8 | 0x200;
        local_30 = DAT_14c7585c8 | 0x100;
        local_2c = DAT_14c7585c8 | 0x300;
        local_28 = 0;
        uStack_24 = 0x200;
        uStack_20 = 0x100;
        uStack_1c = 0x300;
        if (*(byte *)((longlong)&local_48 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
        goto LAB_1403a5052;
      }
    }
    QueryPerformanceCounter(&local_48);
    uStack_40 = 0xffffffffffffffff;
    FUN_140056092(lVar2,&local_48);
  }
  else {
LAB_1403a5052:
    FUN_140082318(lVar2);
  }
LAB_1403a4fbb:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a5060 FUN_1403a5060 body=631 status=ok
// SIG undefined FUN_1403a5060(void)

void FUN_1403a5060(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a52d8();
  *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 0x40;
  pbVar1 = (byte *)(param_1 + 0xb0);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,pbVar1,4);
    }
    else {
      FUN_14572512c(param_2,pbVar1);
    }
  }
  else {
    *(undefined4 *)pbVar1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*pbVar1 & 0x40) != 0) {
    local_22 = 0;
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_22,2);
      }
      else {
        FUN_1457251a8(param_2,&local_22);
      }
    }
    else {
      *puVar3 = *puVar3 + 2;
    }
  }
  if (0x1c2 < (int)param_2[8]) {
    (**(code **)(*param_2 + 0x150))(param_2,param_1 + 200);
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xd0),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x35) & 0x10) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_14001067e(param_1);
    }
  }
  else {
    puVar4 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0xb4),1);
    }
    else {
      *(undefined1 *)(param_1 + 0xb4) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar5 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0xb6),2);
      }
      else {
        FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0xb6) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    puVar5 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0xb8),2);
      }
      else {
        FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0xb8) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    (**(code **)(*param_2 + 0x148))(param_2,param_1 + 0xc0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a52d8 FUN_1403a52d8 body=2901 status=ok
// SIG undefined FUN_1403a52d8(void)

void FUN_1403a52d8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar13;
  undefined *puVar14;
  ulonglong unaff_RBP;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_268 [32];
  wchar_t *local_248;
  undefined4 local_240;
  undefined8 local_238;
  wchar_t *local_230;
  undefined4 local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  code **local_210;
  longlong *local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined **local_1e8;
  undefined8 uStack_1e0;
  byte local_1bd;
  longlong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  int *local_140;
  longlong *local_138;
  undefined **local_130 [18];
  undefined8 local_a0;
  code **local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1403a6a0c();
  lVar15 = param_1[8];
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 8);
  if (((*(byte *)(param_2 + 5) & 1) != 0) || ((lVar15 != 0 && (lVar15 != param_1[8])))) {
    FUN_140010566(param_1 + 6);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca30);
  iVar6 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  local_200 = param_2;
  local_1f8 = param_1;
  if (iVar6 < 0x1d) {
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 9);
  }
  else {
    local_1e8 = (undefined **)0x0;
    uStack_1e0 = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      puVar14 = (undefined *)param_1[9];
      if (puVar14 != (undefined *)0x0) {
        do {
          uVar9 = uStack_1e0;
          lVar15 = (longlong)(int)(uint)uStack_1e0;
          uVar7 = (uint)uStack_1e0 + 1;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar7);
          if (uStack_1e0._4_4_ < uVar7) {
            FUN_1417144da(&local_1e8,uVar9 & 0xffffffff);
          }
          local_1e8[lVar15] = puVar14;
          puVar14 = *(undefined **)(puVar14 + 0x28);
        } while (puVar14 != (undefined *)0x0);
      }
      param_2 = local_200;
      FUN_1403a6fdc(local_200,&local_1e8);
      param_1 = local_1f8;
    }
    else {
      FUN_1403a6fdc(param_2,&local_1e8);
      param_1[9] = 0;
      if (0 < (int)(uint)uStack_1e0) {
        uVar9 = 1;
LAB_1403a5650:
        puVar14 = local_1e8[uVar9 - 1];
        if (puVar14 == (undefined *)0x0) goto LAB_1403a5d83;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(puVar14);
        }
        param_1[9] = (longlong)puVar14;
        if ((int)uVar9 < (int)(uint)uStack_1e0) {
          do {
            if (local_1e8[uVar9] != (undefined *)0x0) {
              *(undefined **)(puVar14 + 0x28) = local_1e8[uVar9];
              puVar14 = local_1e8[uVar9];
            }
            uVar9 = uVar9 + 1;
          } while ((uint)uStack_1e0 != uVar9);
        }
        *(undefined8 *)(puVar14 + 0x28) = 0;
      }
    }
LAB_1403a53c5:
    if (local_1e8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  iVar6 = FUN_1448332aa(param_2);
  plVar8 = local_200;
  bVar13 = *(byte *)(param_2 + 5);
  if (3 < iVar6) {
    local_64 = 0;
    if ((bVar13 & 4) != 0) {
      local_64 = 0;
      for (lVar15 = param_1[10]; param_1 = local_1f8, param_2 = local_200, lVar15 != 0;
          lVar15 = *(longlong *)(lVar15 + 0x18)) {
        local_64 = local_64 + 1;
      }
    }
    puVar4 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*local_200 + 0x170))(local_200,&local_64,4);
        param_1 = local_1f8;
        param_2 = plVar8;
      }
      else {
        FUN_14572512c(local_200);
        param_1 = local_1f8;
        param_2 = plVar8;
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      plVar8 = (longlong *)param_1[10];
      if (plVar8 != (longlong *)0x0) {
        do {
          local_1e8 = *(undefined ***)plVar8[1];
          (**(code **)(*param_2 + 0x160))(param_2,&local_1e8);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          plVar8 = (longlong *)plVar8[3];
        } while (plVar8 != (longlong *)0x0);
      }
    }
    else {
      local_1e8 = (undefined **)0x0;
      uStack_1e0 = 0;
      if (local_64 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_64);
      }
      if (local_64 != 0) {
        FUN_1403a6ea0(&local_1e8);
        if (0 < local_64) {
          unaff_RBP = (ulonglong)param_1 | 1;
          iVar6 = 0;
          do {
            local_130[0] = (undefined **)0x0;
            (**(code **)(*param_2 + 0x160))(param_2,local_130);
            local_88 = (code *)0x0;
            local_70 = unaff_RBP;
            if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 == '\x01')) {
              FUN_1456cec3c(local_1f8);
            }
            plVar8 = (longlong *)FUN_1403a5e2e(local_130,&local_70,&local_88,0);
            (**(code **)(*plVar8 + 0x10))(plVar8);
            lVar15 = (longlong)(int)(uint)uStack_1e0;
            uVar7 = (uint)uStack_1e0 + 1;
            uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar7);
            if (uStack_1e0._4_4_ < uVar7) {
              FUN_1468984f2(&local_1e8);
            }
            local_1e8[lVar15] = (undefined *)plVar8;
            iVar6 = iVar6 + 1;
            param_1 = local_1f8;
            param_2 = local_200;
          } while (iVar6 < local_64);
        }
        if (0 < (longlong)(int)(uint)uStack_1e0) {
          uVar9 = (longlong)(int)(uint)uStack_1e0 + 1;
          puVar14 = (undefined *)param_1[10];
          do {
            puVar5 = local_1e8[uVar9 - 2];
            *(undefined **)(puVar5 + 0x18) = puVar14;
            param_1[10] = (longlong)puVar5;
            uVar9 = uVar9 - 1;
            puVar14 = puVar5;
          } while (1 < uVar9);
        }
        if (local_1e8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
    }
    bVar13 = *(byte *)(param_2 + 5);
  }
  if ((bVar13 & 1) == 0) {
    local_70 = CONCAT44(local_70._4_4_,(int)param_1[0xd]);
    uVar10 = 0xffffffffffffffff;
    if ((bVar13 & 4) != 0) {
      puVar4 = (ulonglong *)local_200[1];
      puVar2 = (undefined4 *)*puVar4 + 1;
      if ((undefined4 *)puVar4[1] < puVar2) {
        if ((*(byte *)((longlong)local_200 + 0x2a) & 2) == 0) {
          (**(code **)(*local_200 + 0x170))(local_200,&local_70,4);
        }
        else {
          FUN_14572512c(local_200);
        }
      }
      else {
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)*puVar4);
        *puVar4 = (ulonglong)puVar2;
      }
      plVar8 = local_200;
      local_1e8 = (undefined **)((ulonglong)local_1e8 & 0xffffffff00000000);
      uVar10 = (**(code **)(*local_200 + 0x28))(local_200);
      puVar4 = (ulonglong *)plVar8[1];
      if (puVar4[1] < *puVar4 + 4) {
        if ((*(byte *)((longlong)local_200 + 0x2a) & 2) == 0) {
          (**(code **)(*local_200 + 0x170))(local_200,&local_1e8,4);
        }
        else {
          FUN_14572512c(local_200);
        }
      }
      else {
        *puVar4 = *puVar4 + 4;
      }
    }
    plVar8 = local_200;
    param_1 = local_1f8;
    param_2 = local_200;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc88) == '\0') {
      local_64 = 0;
      iVar6 = (**(code **)(*local_200 + 0x28))(local_200);
      if (((*(byte *)((longlong)plVar8 + 0x29) & 1) == 0) ||
         (lVar15 = (**(code **)(*local_200 + 0x20))(), lVar15 == 0)) {
        FUN_140713482(&local_1e8,local_200);
        local_1e8 = &PTR_FUN_149e6ee80;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = &local_64;
        local_138 = local_1f8;
        local_1bd = local_1bd & 0xdf | *(byte *)(local_158 + 0x2b) & 0x20;
        if (local_64 < (int)local_70) {
          do {
            (**(code **)(*local_1f8 + 0x300))(local_1f8,&local_64,&local_1e8);
          } while (local_64 < (int)local_70);
        }
        FUN_141713a8e(&local_1e8);
      }
      else {
        lVar12 = (**(code **)(*local_200 + 0x20))();
        plVar8 = local_200;
        lVar15 = 0;
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x98) == 2)) {
          lVar15 = lVar12;
        }
        local_1f0 = *(undefined8 *)(lVar15 + 0x2d0);
        local_88 = (code *)0x0;
        uStack_80 = 0;
        uVar3 = *(undefined1 *)((longlong)local_200 + 0x29);
        memset(local_130,0,0x90);
        FUN_144869430(local_130);
        local_a0 = 0;
        local_130[0] = &PTR_FUN_149e1e590;
        local_90 = 0;
        local_98 = &local_88;
        FUN_144a69558(local_130,1);
        (*(code *)local_130[0][0x1e])(local_130,CONCAT71((int7)(unaff_RBP >> 8),uVar3) & 0xffffff01)
        ;
        local_130[0] = &PTR_FUN_149e1e330;
        *(undefined ****)(lVar15 + 0x2d0) = local_130;
        FUN_140713482(&local_1e8,plVar8);
        local_1e8 = &PTR_FUN_149e6ee80;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = &local_64;
        local_138 = local_1f8;
        local_1bd = local_1bd & 0xdf | *(byte *)(local_158 + 0x2b) & 0x20;
        if (local_64 < (int)local_70) {
          do {
            (**(code **)(*local_1f8 + 0x300))(local_1f8,&local_64,&local_1e8);
          } while (local_64 < (int)local_70);
        }
        FUN_141713a8e(&local_1e8);
        *(undefined8 *)(lVar15 + 0x2d0) = local_1f0;
        (**(code **)(*local_200 + 0x170))(local_200,local_88,(longlong)(int)uStack_80);
        FUN_1468b615a(lVar15,&local_88);
        FUN_144a7fc42(local_130);
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_64 != (int)local_70) {
        local_248 = (wchar_t *)CONCAT44(local_248._4_4_,(int)local_70);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Class.cpp",0x955,
                      L"Script serialization mismatch: Got %i, expected %i");
      }
      plVar8 = local_200;
      param_1 = local_1f8;
      param_2 = local_200;
      if ((*(byte *)(local_200 + 5) & 4) != 0) {
        uVar11 = (**(code **)(*local_200 + 0x28))(local_200);
        (**(code **)(*plVar8 + 0x1a0))(plVar8,uVar10);
        local_1e8 = (undefined **)CONCAT44(local_1e8._4_4_,(int)uVar11 - iVar6);
        puVar4 = (ulonglong *)plVar8[1];
        puVar2 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar2) {
          if ((*(byte *)((longlong)local_200 + 0x2a) & 2) == 0) {
            (**(code **)(*local_200 + 0x170))(local_200,&local_1e8,4);
          }
          else {
            FUN_14572512c(local_200,&local_1e8);
          }
        }
        else {
          local_1e8 = (undefined **)CONCAT44(local_1e8._4_4_,*(undefined4 *)*puVar4);
          *puVar4 = (ulonglong)puVar2;
        }
        (**(code **)(*local_200 + 0x1a0))(local_200,uVar11);
        param_1 = local_1f8;
        param_2 = local_200;
      }
    }
  }
  else {
    FUN_1403a6d5a(&local_1e8,param_1,param_2);
    FUN_1403a718a(&local_1e8,param_1,param_2,1);
    if (param_1 != (longlong *)0x0) {
      if (DAT_14c949118 == 0) {
        local_88 = FUN_140631fbe;
        lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar15;
        FUN_1446f470e(local_130,L"Class",1);
        local_218 = &LAB_146891e90;
        local_220 = &LAB_146273097;
        local_230 = L"Engine";
        local_228 = 199;
        local_238 = 0x20;
        local_240 = 0x10000000;
        local_248 = (wchar_t *)CONCAT44(local_248._4_4_,8);
        local_210 = &local_88;
        FUN_14574b4b2(lVar15);
        DAT_14c949118 = lVar15;
        uVar10 = FUN_144a7a812();
        lVar15 = DAT_14c949118;
        uVar11 = FUN_1449e2fb2();
        local_248 = L"Class";
        FUN_14574b446(uVar11,lVar15,uVar10,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
          DAT_14c949118 + 0x30)) goto LAB_1403a55f2;
    }
    if ((*(byte *)((longlong)param_2 + 0x35) & 0x10) == 0) {
      (**(code **)(*param_1 + 0x2b8))(param_1,param_2,1);
    }
  }
LAB_1403a55f2:
  if (((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) &&
     ((*(byte *)((longlong)param_2 + 0x29) & 1) == 0)) {
    FUN_1409ea17a(param_2,param_1 + 0x12);
  }
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1403a5d83:
  bVar16 = uVar9 == (uStack_1e0 & 0xffffffff);
  uVar9 = uVar9 + 1;
  if (bVar16) goto LAB_1403a53c5;
  goto LAB_1403a5650;
}



// FUNCTION 1403a5e2e FUN_1403a5e2e body=199 status=ok
// SIG undefined FUN_1403a5e2e(void)

void FUN_1403a5e2e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1403a5ef6();
  if (DAT_14c949700 != DAT_14c94972c) {
    lVar2 = *param_1;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    puVar7 = &DAT_14c949730;
    if (DAT_14c949738 != (undefined *)0x0) {
      puVar7 = DAT_14c949738;
    }
    iVar1 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c949740 - 1U &
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar1 != -1) {
      plVar5 = (longlong *)(DAT_14c9496f8 + (longlong)iVar1 * 0x18);
      if (*plVar5 == lVar2) goto LAB_1403a5ece;
      iVar1 = (int)plVar5[2];
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1403a5ece:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001403a5ef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x40))(param_2,param_3,param_4);
  return;
}



// FUNCTION 1403a5ef6 FUN_1403a5ef6 body=157 status=ok
// SIG undefined FUN_1403a5ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403a5ef6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949748) {
    FUN_144b3d300(&DAT_14c949748);
    if (DAT_14c949748 == -1) {
      DAT_14c949718 = 0;
      _DAT_14c949720 = 0;
      DAT_14c9496f8 = 0;
      _DAT_14c949700 = 0;
      _DAT_14c949724 = 0xffffffff00000080;
      DAT_14c94972c = 0;
      DAT_14c949738 = 0;
      DAT_14c949740 = 0;
      atexit(FUN_1427e1ab6);
      _Init_thread_footer(&DAT_14c949748);
    }
  }
  return &DAT_14c9496f8;
}



// FUNCTION 1403a5f94 FUN_1403a5f94 body=342 status=ok
// SIG undefined FUN_1403a5f94(void)

undefined8 * FUN_1403a5f94(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952478) {
    FUN_144b3d300(&DAT_14c952478);
    if (DAT_14c952478 == -1) {
      FUN_1446f4b16();
      local_40 = FUN_1403a5f94;
      local_48 = &DAT_14c951c78;
      local_50 = 0;
      local_58 = 0x4018001;
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
  }
  puVar1[1] = &DAT_14c952428;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e6fb80;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a60ec(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a60ec FUN_1403a60ec body=128 status=ok
// SIG undefined FUN_1403a60ec(void)

undefined8 *
FUN_1403a60ec(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a616e(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e6fb80;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a616e FUN_1403a616e body=136 status=ok
// SIG undefined FUN_1403a616e(void)

undefined8 *
FUN_1403a616e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a61f8(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9b570;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a61f8 FUN_1403a61f8 body=135 status=ok
// SIG undefined FUN_1403a61f8(void)

undefined8 *
FUN_1403a61f8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a6280(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9b7c0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a6280 FUN_1403a6280 body=136 status=ok
// SIG undefined FUN_1403a6280(void)

undefined8 *
FUN_1403a6280(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e98410;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a630a FUN_1403a630a body=160 status=ok
// SIG undefined FUN_1403a630a(void)

undefined8 *
FUN_1403a630a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a63ac(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e90840;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a63ac FUN_1403a63ac body=89 status=ok
// SIG undefined FUN_1403a63ac(void)

undefined8 *
FUN_1403a63ac(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_LAB_149e74770;
  uVar1 = *param_2;
  param_1[2] = uVar1;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  param_1[3] = 0;
  param_1[4] = *param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  return param_1;
}



// FUNCTION 1403a6406 FUN_1403a6406 body=390 status=ok
// SIG undefined FUN_1403a6406(void)

void FUN_1403a6406(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1403a658e();
  plVar1 = (longlong *)(param_1 + 0x70);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0)) &&
     (lVar3 = *plVar1, lVar3 != 0)) {
    if (DAT_14c9512b0 == 0) {
      local_50 = &local_28;
      local_28 = FUN_140631fbe;
      local_40 = &LAB_145834656;
      local_48 = &LAB_146272d4c;
      local_58 = &LAB_1468be089;
      local_60 = FUN_14609ba58;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x410;
      FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e);
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_1403a6488;
    }
    if (((DAT_14c9512b0 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) &&
       ((*(int *)(DAT_14c9512b0 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8)
         == DAT_14c9512b0 + 0x30)))) {
      local_30 = param_1;
      FUN_1468eabe6(lVar3 + 800,&local_28,&local_30,0);
    }
  }
LAB_1403a6488:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403a658e FUN_1403a658e body=547 status=ok
// SIG undefined FUN_1403a658e(void)

void FUN_1403a658e(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a67b2();
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x30),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x34),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_28 = *(ulonglong *)(param_1 + 0x38) & 0xfff7ffefbffffdff;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (ulonglong *)*puVar3 + 1;
  if ((ulonglong *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_28,8);
    }
    else {
      thunk_FUN_146821949(param_2,&local_28);
    }
  }
  else {
    local_28 = *(ulonglong *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(ulonglong *)(param_1 + 0x38) =
         local_28 & 0xfff7ffefbffffdff | *(ulonglong *)(param_1 + 0x38) & 0x8001040000200;
  }
  puVar4 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x40),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x40) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x68);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  puVar5 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x42),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x42) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a67b2 FUN_1403a67b2 body=122 status=ok
// SIG undefined FUN_1403a67b2(void)

void FUN_1403a67b2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x20);
  puVar2 = (undefined4 *)(param_1 + 0x28);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403a6818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 1403a682c FUN_1403a682c body=335 status=ok
// SIG undefined FUN_1403a682c(void)

undefined8 * FUN_1403a682c(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  puVar1[1] = &DAT_14c952a08;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e71fe0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a697c(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a697c FUN_1403a697c body=143 status=ok
// SIG undefined FUN_1403a697c(void)

undefined8 *
FUN_1403a697c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e71fe0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a6a0c FUN_1403a6a0c body=176 status=ok
// SIG undefined FUN_1403a6a0c(void)

void FUN_1403a6a0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (iVar1 < 0x1d) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a6ad4 FUN_1403a6ad4 body=465 status=ok
// SIG undefined FUN_1403a6ad4(void)

void FUN_1403a6ad4(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  FUN_1403a658e();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a68) {
    FUN_144b3d300(&DAT_14c952a68);
    if (DAT_14c952a68 == -1) {
      DAT_14c952a60 = FUN_145708010();
      _Init_thread_footer(&DAT_14c952a68);
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
    lVar5 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar6 = DAT_14c952a60;
    if (((lVar5 != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) &&
       (*(longlong *)(param_1 + 0x70) == 0)) {
      if ((DAT_14c952a60 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(DAT_14c952a60);
      }
      *(longlong *)(param_1 + 0x70) = lVar6;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,(longlong *)(param_1 + 0x70));
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    if (DAT_14c872ba8 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001403a6b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x368))();
      return;
    }
    lVar6 = FUN_1403a6ca6(param_1);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar6 + 0x2d0) & 0x100000;
    }
    plVar3 = *(longlong **)(param_1 + 0x70);
    if (plVar3 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)plVar3 + 0xc);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      iVar4 = iVar1 + 0xffff;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
      if ((DAT_14c964390 <= iVar4 >> 0x10) ||
         (lVar6 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar6 == 0))
      {
                    /* WARNING: Could not recover jumptable at 0x0001403a6bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
        return;
      }
      lVar6 = *(longlong *)(lVar6 + (longlong)(iVar1 % 0x10000) * 0x10);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x2d0);
        *(uint *)(lVar6 + 0x2d0) = uVar7 | uVar2;
        (**(code **)(*plVar3 + 0x368))(plVar3);
        *(uint *)(lVar6 + 0x2d0) = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 1403a6ca6 FUN_1403a6ca6 body=180 status=ok
// SIG undefined FUN_1403a6ca6(void)

undefined8 FUN_1403a6ca6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar4 & 1) == 0) {
    if (uVar4 < 2) {
      return 0;
    }
    while (uVar4 = *(ulonglong *)(uVar4 + 0x10), (uVar4 & 1) == 0) {
      if (uVar4 < 2) {
        return 0;
      }
    }
  }
  uVar4 = uVar4 & 0xfffffffffffffffe;
  if (uVar4 == 0) {
    return 0;
  }
  if (DAT_14c950c29 != '\0') {
    FUN_1456cec3c(uVar4);
  }
  iVar1 = *(int *)(uVar4 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar3 = iVar1 + 0xffff;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  if ((iVar3 >> 0x10 < DAT_14c964390) &&
     (lVar2 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar3 >> 0x10) * 0x10), lVar2 != 0)) {
    uVar5 = *(undefined8 *)(lVar2 + (longlong)(iVar1 % 0x10000) * 0x10);
  }
  else {
    uVar5 = 0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  return uVar5;
}



// FUNCTION 1403a6d5a FUN_1403a6d5a body=236 status=ok
// SIG undefined FUN_1403a6d5a(void)

undefined8 * FUN_1403a6d5a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 5) & 1) != 0) {
    puVar2 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_3,param_1);
      }
    }
    else {
      *(undefined4 *)param_1 = *puVar2;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    piVar1 = (int *)((longlong)param_1 + 4);
    piVar3 = *(int **)param_3[1];
    if ((int *)((undefined8 *)param_3[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,piVar1,4);
      }
      else {
        thunk_FUN_14572512c(param_3,piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    if (0 < *piVar1) {
      uVar4 = (**(code **)(*param_3 + 0x28))(param_3);
      param_1[1] = uVar4;
    }
    FUN_1403a6e46(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1403a6e46 FUN_1403a6e46 body=90 status=ok
// SIG undefined FUN_1403a6e46(void)

void FUN_1403a6e46(int *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(int *)(param_2 + 0x6c) != iVar1) {
    FUN_144893a1c(param_2 + 0x60);
  }
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(int *)(param_2 + 0x9c) == 0) {
    return;
  }
  FUN_140c6998c(param_2 + 0x90,0);
  return;
}



// FUNCTION 1403a6ea0 FUN_1403a6ea0 body=315 status=ok
// SIG undefined FUN_1403a6ea0(void)

void FUN_1403a6ea0(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1403a6f0a;
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
LAB_1403a6f0a:
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



// FUNCTION 1403a6fdc FUN_1403a6fdc body=429 status=ok
// SIG undefined FUN_1403a6fdc(void)

longlong * FUN_1403a6fdc(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1403ab89a(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x150))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1403ab89a(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1417144da(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x150))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403a718a FUN_1403a718a body=1294 status=ok
// SIG undefined FUN_1403a718a(void)

undefined8 FUN_1403a718a(uint *param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  undefined **local_108;
  int *piStack_100;
  byte local_dd;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 uStack_68;
  int *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((((*(byte *)(param_3 + 5) & 1) != 0) && (uVar3 = param_1[1], 0 < (int)uVar3)) &&
      (lVar5 = *(longlong *)(param_1 + 2), lVar5 != -1)) &&
     (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc88) == '\0')) {
    if ((*(byte *)((longlong)param_3 + 0x29) & 1) == 0) {
      bVar11 = false;
    }
    else {
      lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
      bVar11 = lVar5 != 0;
      lVar5 = *(longlong *)(param_1 + 2);
      uVar3 = param_1[1];
    }
    if ((bVar11 == false) || (399 < (int)param_3[8] && -1 < (int)param_3[9])) {
      if ((param_4 & bVar11) == 1) {
        cVar2 = FUN_1468fdd50(param_3);
        if (cVar2 != '\0') {
          lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
          lVar10 = 0;
          if ((lVar7 != 0) && (*(int *)(lVar7 + 0x98) == 1)) {
            lVar10 = lVar7;
          }
          piStack_100 = &local_4c;
          local_108 = (undefined **)FUN_146900016;
          uVar8 = FUN_144a773aa(&local_108,&DAT_14c75ecd8);
          FUN_1468fdbc2(uVar8,lVar10,param_2,param_1);
          goto LAB_1403a7605;
        }
        lVar5 = *(longlong *)(param_1 + 2);
      }
      (**(code **)(*param_3 + 0x1a0))(param_3,lVar5);
      if (bVar11 != false) {
        lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
        lVar5 = 0;
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0x98) == 1)) {
          lVar5 = lVar10;
        }
        local_108 = (undefined **)0x0;
        piStack_100 = (int *)(ulonglong)param_1[1];
        if (param_1[1] == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1447403be(&local_108,0);
          lVar10 = (longlong)(int)param_1[1];
        }
        (**(code **)(*param_3 + 0x170))(param_3,local_108,lVar10);
        (**(code **)(*param_3 + 0x28))(param_3);
        FUN_1468b615a(lVar5,&local_108);
        (**(code **)(*param_3 + 0x1a0))(param_3,*(undefined8 *)(param_1 + 2));
        if (local_108 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      uVar3 = *param_1;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar3);
      }
      *(undefined4 *)(param_2 + 0xd) = 0;
      if (*(uint *)((longlong)param_2 + 0x6c) == uVar3) {
        iVar4 = 0;
      }
      else {
        FUN_144893a1c(param_2 + 0xc);
        iVar4 = (int)param_2[0xd];
        uVar3 = *(uint *)((longlong)param_2 + 0x6c);
      }
      uVar1 = *param_1;
      *(uint *)(param_2 + 0xd) = uVar1 + iVar4;
      if (uVar3 - iVar4 < uVar1) {
        FUN_1447403be(param_2 + 0xc,iVar4);
      }
      local_4c = 0;
      FUN_1407134c4(&local_108,param_3);
      local_80 = param_3[0x11];
      param_3[0x11] = (longlong)&local_108;
      local_108 = &PTR_FUN_149e6ee80;
      local_70 = 0;
      uStack_68 = 0;
      local_dd = local_dd & 0xdf | *(byte *)((longlong)param_3 + 0x2b) & 0x20;
      local_78 = param_3;
      local_60 = &local_4c;
      local_58 = param_2;
      if ((int)*param_1 < 1) {
LAB_1403a735c:
        plVar6 = (longlong *)param_2[0x14];
        uVar9 = 0;
        if (plVar6 != (longlong *)0x0) {
          FUN_1403a7699(*plVar6,(int)plVar6[1]);
          if (*plVar6 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar6);
          param_2[0x14] = 0;
          uVar9 = uStack_68 & 0xffffffff;
        }
      }
      else {
        do {
          (**(code **)(*param_2 + 0x300))(param_2,&local_4c,&local_108);
        } while (local_4c < (int)*param_1);
        uVar9 = uStack_68 & 0xffffffff;
        if ((int)uStack_68 == 0) goto LAB_1403a735c;
        plVar6 = (longlong *)param_2[0x14];
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)FUN_14001cc68(0x10,0x10);
          *plVar6 = 0;
          plVar6[1] = 0;
          param_2[0x14] = (longlong)plVar6;
          lVar5 = 0;
LAB_1403a7446:
          FUN_1403a7699(lVar5);
          if (*plVar6 != 0) {
            FUN_1400020a8();
          }
          *plVar6 = local_70;
          uVar9 = 0;
          local_70 = 0;
          *(int *)(plVar6 + 1) = (int)uStack_68;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uStack_68._4_4_;
          uStack_68 = 0;
        }
        else if (plVar6 != &local_70) {
          lVar5 = *plVar6;
          goto LAB_1403a7446;
        }
      }
      local_108 = &PTR_FUN_149e6ee80;
      FUN_1403a7699(local_70,uVar9);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_14041e0ea(&local_108);
      (**(code **)(*param_3 + 0x28))(param_3);
      if (DAT_14c9647bc < *(int *)((longlong)param_2 + 0xc)) {
        *(undefined4 *)(param_2 + 0x13) = 0;
        if (*(int *)((longlong)param_2 + 0x9c) != 0) {
          FUN_140c6998c(param_2 + 0x12,0);
        }
        FUN_1403a76c8(param_2,param_2 + 0x12);
        if ((DAT_14c950c29 == '\x01') && (iVar4 = (int)param_2[0x13], 0 < iVar4)) {
          lVar5 = param_2[0x12];
          lVar10 = 0;
          do {
            if (*(longlong *)(lVar5 + lVar10 * 8) != 0) {
              FUN_1456cec3c();
              iVar4 = (int)param_2[0x13];
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < iVar4);
        }
      }
      uVar8 = 1;
      goto LAB_1403a73e7;
    }
    uVar1 = *param_1;
    *param_1 = 0;
    FUN_1403a6e46(param_1,param_2);
    *param_1 = uVar1;
LAB_1403a7605:
    (**(code **)(*param_3 + 0x1a0))(param_3,(int)uVar3 + lVar5);
  }
  uVar8 = 0;
LAB_1403a73e7:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1403a7699 FUN_1403a7699 body=47 status=ok
// SIG undefined FUN_1403a7699(void)

void FUN_1403a7699(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 1403a76c8 FUN_1403a76c8 body=257 status=ok
// SIG undefined FUN_1403a76c8(void)

void FUN_1403a76c8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [36];
  int local_c4;
  undefined **local_c0 [5];
  byte local_97;
  byte local_96;
  byte local_95;
  longlong *local_68;
  longlong local_48;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144869430(local_c0);
  local_c0[0] = &PTR_FUN_149e6e310;
  local_95 = local_95 | 2;
  local_97 = local_97 & 0xfe;
  local_96 = local_96 & 0xfb;
  local_c4 = 0;
  local_30 = param_2;
  local_28 = param_1;
  if (0 < (int)param_1[0xd]) {
    do {
      (**(code **)(*param_1 + 0x300))(param_1,&local_c4,local_c0);
    } while (local_c4 < (int)param_1[0xd]);
  }
  local_c0[0] = &PTR__purecall_149e35f70;
  if (local_68 != (longlong *)0x0) {
    if (*local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_68);
  }
  if (local_48 != 0) {
    if (*(longlong *)(local_48 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403a77ca FUN_1403a77ca body=12006 status=ok
// SIG undefined FUN_1403a77ca(void)

ulonglong FUN_1403a77ca(longlong *param_1,int *param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  undefined7 uVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  code *pcVar23;
  undefined8 *puVar24;
  short sVar25;
  longlong lVar26;
  undefined1 auStack_128 [32];
  wchar_t *pwStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  wchar_t *pwStack_f0;
  wchar_t *pwStack_e8;
  code *pcStack_e0;
  undefined1 *puStack_d8;
  undefined2 **ppuStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  code *local_70;
  int iStack_68;
  undefined2 *puStack_60;
  undefined1 auStack_58 [8];
  undefined2 *puStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  (**(code **)(*param_3 + 0x218))(param_3,&DAT_149e02218);
  if ((*(byte *)(param_3 + 5) & 1) == 0) {
    local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)(param_1[0xc] + (longlong)*param_2));
  }
  pbVar1 = (byte *)(param_3 + 5);
  puVar10 = (ulonglong *)param_3[1];
  puVar2 = (undefined1 *)*puVar10 + 1;
  if ((undefined1 *)puVar10[1] < puVar2) {
    (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
  }
  else {
    local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
    *puVar10 = (ulonglong)puVar2;
  }
  if ((*pbVar1 & 4) == 0) {
    *(undefined1 *)(param_1[0xc] + (longlong)*param_2) = (undefined1)local_98;
  }
  iVar21 = *param_2 + 1;
  *param_2 = iVar21;
  if ((*pbVar1 & 1) != 0) {
    iVar16 = FUN_1448332aa(param_3,&DAT_149e02218);
    iVar21 = *param_2;
    if (iVar16 < 1) {
      if (*(char *)(param_1[0xc] + -1 + (longlong)iVar21) == -1) {
        *(undefined1 *)(param_1[0xc] + -1 + (longlong)iVar21) = 0xfe;
        iVar21 = *param_2;
      }
    }
  }
  plVar3 = param_1 + 0xc;
  lVar22 = param_1[0xc];
  lVar20 = (longlong)iVar21;
  bVar15 = *(byte *)(lVar22 + -1 + lVar20);
  puVar24 = (undefined8 *)(ulonglong)bVar15;
  uVar13 = local_98._1_7_;
  uVar7 = local_98._4_4_;
  switch(puVar24) {
  case (undefined8 *)0x0:
  case (undefined8 *)0x1:
  case (undefined8 *)0x2:
  case (undefined8 *)0x33:
  case (undefined8 *)0x48:
  case (undefined8 *)0x6c:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
    break;
  case (undefined8 *)0x3:
  case (undefined8 *)0x5:
  case (undefined8 *)0x8:
  case (undefined8 *)0xa:
  case (undefined8 *)0xb:
  case (undefined8 *)0xd:
  case (undefined8 *)0xe:
  case (undefined8 *)0x10:
  case (undefined8 *)0x15:
  case (undefined8 *)0x16:
  case (undefined8 *)0x17:
  case (undefined8 *)0x25:
  case (undefined8 *)0x26:
  case (undefined8 *)0x27:
  case (undefined8 *)0x28:
  case (undefined8 *)0x2a:
  case (undefined8 *)0x2d:
  case (undefined8 *)0x30:
  case (undefined8 *)0x32:
  case (undefined8 *)0x3a:
  case (undefined8 *)0x3c:
  case (undefined8 *)0x3e:
  case (undefined8 *)0x40:
  case (undefined8 *)0x47:
  case (undefined8 *)0x49:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x4d:
  case (undefined8 *)0x53:
  case (undefined8 *)0x56:
  case (undefined8 *)0x57:
  case (undefined8 *)0x58:
  case (undefined8 *)0x59:
  case (undefined8 *)0x5a:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x66:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x6f:
    break;
  case (undefined8 *)0x4:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000004;
    break;
  case (undefined8 *)0x6:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    puVar24 = (undefined8 *)&DAT_00000006;
    break;
  case (undefined8 *)0x7:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000007;
    break;
  case (undefined8 *)0x9:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar6 = (undefined2 *)*puVar10 + 1;
    if ((undefined2 *)puVar10[1] < puVar6) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,2);
      }
      else {
        FUN_1457251a8(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)*puVar10);
      *puVar10 = (ulonglong)puVar6;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined2 *)(*plVar3 + (longlong)*param_2) = (undefined2)local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 2;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)(*plVar3 + (longlong)(iVar21 + 2)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar2 = (undefined1 *)*puVar10 + 1;
    if ((undefined1 *)puVar10[1] < puVar2) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
    }
    else {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
      *puVar10 = (ulonglong)puVar2;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
    }
    *param_2 = *param_2 + 1;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000009;
    break;
  case (undefined8 *)0xc:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    puVar24 = (undefined8 *)&DAT_0000000c;
    break;
  case (undefined8 *)0xf:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
  case (undefined8 *)0x14:
  case (undefined8 *)0x43:
  case (undefined8 *)0x44:
  case (undefined8 *)0x5c:
  case (undefined8 *)0x5f:
  case (undefined8 *)0x60:
  case (undefined8 *)0x62:
switchD_1403a78d3_caseD_14:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
switchD_1403a9b95_caseD_2:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    break;
  case (undefined8 *)0x11:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)(*plVar3 + (longlong)(iVar21 + 8)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar2 = (undefined1 *)*puVar10 + 1;
    if ((undefined1 *)puVar10[1] < puVar2) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
    }
    else {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
      *puVar10 = (ulonglong)puVar2;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
    }
    *param_2 = *param_2 + 1;
    puVar24 = (undefined8 *)&DAT_00000011;
    break;
  case (undefined8 *)0x12:
  case (undefined8 *)0x19:
  case (undefined8 *)0x1a:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)*param_2));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar5 = (uint *)*puVar10 + 1;
    if ((uint *)puVar10[1] < puVar5) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)(ulonglong)*(uint *)*puVar10;
      *puVar10 = (ulonglong)puVar5;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 4;
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 4));
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
    goto switchD_1403a9b95_caseD_2;
  case (undefined8 *)0x13:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x150))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 4) == 0) {
      FUN_1427dc34d((longlong)iVar21 + *plVar3);
    }
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000013;
    break;
  case (undefined8 *)0x18:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000018;
    break;
  case (undefined8 *)0x1b:
  case (undefined8 *)0x45:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(*(undefined4 *)(lVar22 + 8 + lVar20),
                                  *(undefined4 *)(lVar22 + lVar20));
    }
    (**(code **)(*param_3 + 0x160))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      lVar20 = (longlong)*param_2;
      lVar22 = *plVar3;
      *(int *)(lVar22 + lVar20) = (int)local_98;
      *(undefined4 *)(lVar22 + 4 + lVar20) = 0;
      *(int *)(lVar22 + 8 + lVar20) = (int)((ulonglong)local_98 >> 0x20);
    }
    *param_2 = *param_2 + 0xc;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    } while (cVar14 != '\x16');
    break;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x46:
  case (undefined8 *)0x68:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x150))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 4) == 0) {
      FUN_1427dc34d((longlong)iVar21 + *plVar3);
    }
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    } while (cVar14 != '\x16');
    break;
  case (undefined8 *)0x1d:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    puVar24 = (undefined8 *)&DAT_0000001d;
    break;
  case (undefined8 *)0x1e:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    puVar24 = (undefined8 *)0x1e;
    break;
  case (undefined8 *)0x1f:
    do {
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)(lVar22 + iVar21));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar2 = (undefined1 *)*puVar10 + 1;
      if ((undefined1 *)puVar10[1] < puVar2) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
      }
      else {
        local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
        *puVar10 = (ulonglong)puVar2;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
      }
      iVar16 = *param_2;
      iVar21 = iVar16 + 1;
      *param_2 = iVar21;
      lVar22 = *plVar3;
      puVar24 = (undefined8 *)&DAT_0000001f;
    } while (*(char *)(lVar22 + iVar16) != '\0');
    break;
  case (undefined8 *)0x20:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x138))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    puVar24 = (undefined8 *)&DAT_00000020;
    if ((*pbVar1 & 4) == 0) {
      FUN_1427dc34d((longlong)iVar21 + *plVar3);
    }
    break;
  case (undefined8 *)0x21:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(*(undefined4 *)(lVar22 + 8 + lVar20),
                                  *(undefined4 *)(lVar22 + lVar20));
    }
    (**(code **)(*param_3 + 0x160))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      lVar20 = (longlong)*param_2;
      lVar22 = *plVar3;
      *(int *)(lVar22 + lVar20) = (int)local_98;
      *(undefined4 *)(lVar22 + 4 + lVar20) = 0;
      *(int *)(lVar22 + 8 + lVar20) = (int)((ulonglong)local_98 >> 0x20);
    }
    *param_2 = *param_2 + 0xc;
    puVar24 = (undefined8 *)&DAT_00000021;
    break;
  case (undefined8 *)0x22:
    if (*(int *)((longlong)param_3 + 0x44) < 0x3ec) {
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      *param_2 = *param_2 + 4;
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(lVar22 + lVar20);
      }
      FUN_1408383eb(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      FUN_1408383eb(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      FUN_1408383eb(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      *param_2 = *param_2 + 8;
    }
    puVar24 = (undefined8 *)&DAT_00000022;
    break;
  case (undefined8 *)0x23:
    if (*(int *)((longlong)param_3 + 0x44) < 0x3ec) {
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      *param_2 = *param_2 + 4;
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(lVar22 + lVar20);
      }
      puVar11 = (ulonglong *)param_3[1];
      puVar10 = (ulonglong *)*puVar11 + 1;
      if ((ulonglong *)puVar11[1] < puVar10) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*puVar11;
        *puVar11 = (ulonglong)puVar10;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      puVar11 = (ulonglong *)param_3[1];
      puVar10 = (ulonglong *)*puVar11 + 1;
      if ((ulonglong *)puVar11[1] < puVar10) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*puVar11;
        *puVar11 = (ulonglong)puVar10;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      puVar11 = (ulonglong *)param_3[1];
      puVar10 = (ulonglong *)*puVar11 + 1;
      if ((ulonglong *)puVar11[1] < puVar10) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*puVar11;
        *puVar11 = (ulonglong)puVar10;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      *param_2 = *param_2 + 8;
    }
    puVar24 = (undefined8 *)&DAT_00000023;
    break;
  case (undefined8 *)0x24:
  case (undefined8 *)0x2c:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT71(uVar13,*(undefined1 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar2 = (undefined1 *)*puVar10 + 1;
    if ((undefined1 *)puVar10[1] < puVar2) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
    }
    else {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
      *puVar10 = (ulonglong)puVar2;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
    }
    *param_2 = *param_2 + 1;
    break;
  case (undefined8 *)0x29:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT71(uVar13,*(undefined1 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar2 = (undefined1 *)*puVar10 + 1;
    if ((undefined1 *)puVar10[1] < puVar2) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
    }
    else {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
      *puVar10 = (ulonglong)puVar2;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
    }
    iVar21 = *param_2;
    iVar16 = iVar21 + 1;
    *param_2 = iVar16;
    puVar24 = (undefined8 *)&DAT_00000029;
    switch(*(undefined1 *)(*plVar3 + (longlong)iVar21)) {
    case 1:
      (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      break;
    case 2:
    case 3:
      goto switchD_1403a9b95_caseD_2;
    case 4:
      local_98 = (code *)0x0;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)iVar16);
      }
      (**(code **)(*param_3 + 0x150))(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 4) == 0) {
        FUN_1427dc34d((longlong)iVar21 + *plVar3);
      }
      break;
    default:
      goto switchD_1403a9b95_default;
    }
    goto switchD_1403a78d3_caseD_14;
  case (undefined8 *)0x2b:
    if (*(int *)((longlong)param_3 + 0x44) < 0x3ec) {
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 4;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      *param_2 = *param_2 + 4;
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(lVar22 + lVar20);
      }
      plVar12 = (longlong *)param_3[1];
      if ((ulonglong *)plVar12[1] < (ulonglong *)*plVar12 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      plVar12 = (longlong *)param_3[1];
      if ((ulonglong *)plVar12[1] < (ulonglong *)*plVar12 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      plVar12 = (longlong *)param_3[1];
      if ((ulonglong *)plVar12[1] < (ulonglong *)*plVar12 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      plVar12 = (longlong *)param_3[1];
      if ((ulonglong *)plVar12[1] < (ulonglong *)*plVar12 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      plVar12 = (longlong *)param_3[1];
      if ((ulonglong *)plVar12[1] < (ulonglong *)*plVar12 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      plVar12 = (longlong *)param_3[1];
      if ((ulonglong *)plVar12[1] < (ulonglong *)*plVar12 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      plVar12 = (longlong *)param_3[1];
      if ((ulonglong *)plVar12[1] < (ulonglong *)*plVar12 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      puVar11 = (ulonglong *)param_3[1];
      puVar10 = (ulonglong *)*puVar11 + 1;
      if ((ulonglong *)puVar11[1] < puVar10) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*puVar11;
        *puVar11 = (ulonglong)puVar10;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      puVar11 = (ulonglong *)param_3[1];
      puVar10 = (ulonglong *)*puVar11 + 1;
      if ((ulonglong *)puVar11[1] < puVar10) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*puVar11;
        *puVar11 = (ulonglong)puVar10;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
      }
      puVar11 = (ulonglong *)param_3[1];
      puVar10 = (ulonglong *)*puVar11 + 1;
      if ((ulonglong *)puVar11[1] < puVar10) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
        }
        else {
          FUN_146821949(param_3,&local_98);
        }
      }
      else {
        local_98 = *(code **)*puVar11;
        *puVar11 = (ulonglong)puVar10;
      }
      if ((*pbVar1 & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      *param_2 = *param_2 + 8;
    }
    puVar24 = (undefined8 *)&DAT_0000002b;
    break;
  case (undefined8 *)0x2e:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x150))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 4) == 0) {
      FUN_1427dc34d((longlong)iVar21 + *plVar3);
    }
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)0x2e;
    break;
  case (undefined8 *)0x2f:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x150))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 8)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_0000002f;
    } while (cVar14 != '0');
    break;
  case (undefined8 *)0x31:
    uVar18 = *(uint *)((longlong)param_1 + 0xc);
    puVar24 = (undefined8 *)(ulonglong)uVar18;
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    uVar17 = uVar18 + 0xffff;
    if (-1 < (int)uVar18) {
      uVar17 = uVar18;
    }
    if (((int)uVar17 >> 0x10 < DAT_14c964390) &&
       (lVar22 = *(longlong *)(DAT_14c964388 + 8 + (longlong)((int)uVar17 >> 0x10) * 0x10),
       lVar22 != 0)) {
      puVar24 = *(undefined8 **)(lVar22 + (longlong)((int)uVar18 % 0x10000) * 0x10);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      if (((puVar24 == (undefined8 *)0x0) || ((*(byte *)(param_3 + 5) & 1) == 0)) ||
         (0x12e < (int)param_3[8])) goto LAB_1403a7e40;
      local_98 = (code *)0x0;
      (**(code **)(*param_3 + 0x148))(param_3);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      *param_2 = *param_2 + 8;
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
LAB_1403a7e40:
      (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    }
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar24 >> 8),0x31);
    } while (cVar14 != '2');
    break;
  case (undefined8 *)0x34:
    do {
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)(lVar22 + iVar21));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar6 = (undefined2 *)*puVar10 + 1;
      if ((undefined2 *)puVar10[1] < puVar6) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,2);
        }
        else {
          FUN_1457251a8(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)*puVar10);
        *puVar10 = (ulonglong)puVar6;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined2 *)(*plVar3 + (longlong)*param_2) = (undefined2)local_98;
      }
      iVar16 = *param_2;
      iVar21 = iVar16 + 2;
      *param_2 = iVar21;
      lVar22 = *plVar3;
    } while ((*(char *)(lVar22 + (iVar16 + 1)) != '\0') ||
            (*(char *)(lVar22 + -2 + (longlong)iVar21) != '\0'));
    puVar24 = (undefined8 *)&DAT_00000034;
    break;
  case (undefined8 *)0x35:
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    FUN_1408383eb(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
    puVar24 = (undefined8 *)0x35;
    break;
  case (undefined8 *)0x36:
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    puVar11 = (ulonglong *)param_3[1];
    puVar10 = (ulonglong *)*puVar11 + 1;
    if ((ulonglong *)puVar11[1] < puVar10) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
      }
      else {
        FUN_146821949(param_3,&local_98);
      }
    }
    else {
      local_98 = *(code **)*puVar11;
      *puVar11 = (ulonglong)puVar10;
    }
    if ((*pbVar1 & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
    puVar24 = (undefined8 *)0x36;
    break;
  case (undefined8 *)0x37:
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    puVar11 = (ulonglong *)param_3[1];
    puVar10 = (ulonglong *)*puVar11 + 1;
    if ((ulonglong *)puVar11[1] < puVar10) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,8);
      }
      else {
        FUN_146821949(param_3,&local_98);
      }
    }
    else {
      local_98 = *(code **)*puVar11;
      *puVar11 = (ulonglong)puVar10;
    }
    if ((*pbVar1 & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
    puVar24 = (undefined8 *)&DAT_00000037;
    break;
  case (undefined8 *)0x38:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT71(uVar13,*(undefined1 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar2 = (undefined1 *)*puVar10 + 1;
    if ((undefined1 *)puVar10[1] < puVar2) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
    }
    else {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
      *puVar10 = (ulonglong)puVar2;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
    }
    *param_2 = *param_2 + 1;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000038;
    break;
  case (undefined8 *)0x39:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)*param_2));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_00000039;
    } while (cVar14 != ':');
    break;
  case (undefined8 *)0x3b:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)*param_2));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_0000003b;
    } while (cVar14 != '<');
    break;
  case (undefined8 *)0x3d:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 8)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)0x3d;
    } while (cVar14 != '>');
    break;
  case (undefined8 *)0x3f:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 8));
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 8)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_0000003f;
    } while (cVar14 != '@');
    break;
  case (undefined8 *)0x41:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 4;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 4;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    puVar24 = (undefined8 *)&DAT_00000041;
    break;
  case (undefined8 *)0x42:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)0x42;
    break;
  case (undefined8 *)0x4b:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(*(undefined4 *)(lVar22 + 8 + lVar20),
                                  *(undefined4 *)(lVar22 + lVar20));
    }
    (**(code **)(*param_3 + 0x160))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      lVar20 = (longlong)*param_2;
      lVar22 = *plVar3;
      *(int *)(lVar22 + lVar20) = (int)local_98;
      *(undefined4 *)(lVar22 + 4 + lVar20) = 0;
      *(int *)(lVar22 + 8 + lVar20) = (int)((ulonglong)local_98 >> 0x20);
    }
    *param_2 = *param_2 + 0xc;
    puVar24 = (undefined8 *)&DAT_0000004b;
    break;
  case (undefined8 *)0x4c:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    puVar24 = (undefined8 *)&DAT_0000004c;
    break;
  case (undefined8 *)0x4e:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)0x4e;
    break;
  case (undefined8 *)0x4f:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_0000004f;
    break;
  case (undefined8 *)0x50:
    puVar24 = (undefined8 *)&DAT_00000050;
    if ((*pbVar1 & 1) != 0) {
      *(undefined1 *)(lVar22 + -1 + lVar20) = 0x5e;
    }
    break;
  case (undefined8 *)0x51:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000051;
    break;
  case (undefined8 *)0x52:
  case (undefined8 *)0x54:
  case (undefined8 *)0x55:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x150))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 4) == 0) {
      FUN_1427dc34d((longlong)iVar21 + *plVar3);
    }
    goto switchD_1403a9b95_caseD_2;
  case (undefined8 *)0x5b:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    puVar24 = (undefined8 *)&DAT_0000005b;
    break;
  case (undefined8 *)0x5d:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)0x5d;
    break;
  case (undefined8 *)0x61:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(*(undefined4 *)(lVar22 + 8 + lVar20),
                                  *(undefined4 *)(lVar22 + lVar20));
    }
    (**(code **)(*param_3 + 0x160))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      lVar20 = (longlong)*param_2;
      lVar22 = *plVar3;
      *(int *)(lVar22 + lVar20) = (int)local_98;
      *(undefined4 *)(lVar22 + 4 + lVar20) = 0;
      *(int *)(lVar22 + 8 + lVar20) = (int)((ulonglong)local_98 >> 0x20);
    }
    *param_2 = *param_2 + 0xc;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)0x61;
    break;
  case (undefined8 *)0x63:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x150))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 4) == 0) {
      FUN_1427dc34d((longlong)iVar21 + *plVar3);
    }
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_00000063;
    } while (cVar14 != '\x16');
    break;
  case (undefined8 *)0x64:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    *param_2 = *param_2 + 8;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000064;
    break;
  case (undefined8 *)0x65:
    local_98 = (code *)0x0;
    if ((*pbVar1 & 1) == 0) {
      local_98 = *(code **)(lVar22 + lVar20);
    }
    (**(code **)(*param_3 + 0x148))(param_3,&local_98);
    if ((*(byte *)(param_3 + 5) & 4) == 0) {
      *(code **)(*plVar3 + (longlong)*param_2) = local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 8;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 8)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_00000065;
    } while (cVar14 != 'f');
    break;
  case (undefined8 *)0x67:
    if (((*pbVar1 & 4) == 0) || ((*(byte *)((longlong)param_3 + 0x2b) & 2) == 0)) {
      (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_00000067;
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT71(uVar13,*(undefined1 *)(lVar22 + lVar20));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar2 = (undefined1 *)*puVar10 + 1;
      if ((undefined1 *)puVar10[1] < puVar2) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
      }
      else {
        local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
        *puVar10 = (ulonglong)puVar2;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
      }
      iVar21 = *param_2;
      iVar16 = iVar21 + 1;
      *param_2 = iVar16;
      bVar15 = *(byte *)(*plVar3 + (longlong)iVar21);
      puVar24 = (undefined8 *)(ulonglong)bVar15;
      if (bVar15 == 0x1f) {
        FUN_1400b22c2();
        pcVar23 = local_98;
        do {
          if ((*pbVar1 & 1) == 0) {
            local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)(*plVar3 + (longlong)*param_2)
                                       );
          }
          puVar10 = (ulonglong *)param_3[1];
          puVar2 = (undefined1 *)*puVar10 + 1;
          if ((undefined1 *)puVar10[1] < puVar2) {
            (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
          }
          else {
            local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
            *puVar10 = (ulonglong)puVar2;
          }
          if ((*pbVar1 & 4) == 0) {
            *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
          }
          iVar21 = *param_2;
          *param_2 = iVar21 + 1;
          iVar16 = (int)uStack_90;
        } while (*(char *)(*plVar3 + (longlong)iVar21) != '\0');
      }
      else {
        FUN_142746600(&local_98,(longlong)iVar16 + *plVar3);
        pcVar23 = local_98;
        do {
          if ((*pbVar1 & 1) == 0) {
            local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)(*plVar3 + (longlong)*param_2)
                                       );
          }
          puVar10 = (ulonglong *)param_3[1];
          puVar6 = (undefined2 *)*puVar10 + 1;
          if ((undefined2 *)puVar10[1] < puVar6) {
            if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
              (**(code **)(*param_3 + 0x170))(param_3,&local_98,2);
            }
            else {
              FUN_1457251a8(param_3,&local_98);
            }
          }
          else {
            local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)*puVar10);
            *puVar10 = (ulonglong)puVar6;
          }
          if ((*pbVar1 & 4) == 0) {
            *(undefined2 *)(*plVar3 + (longlong)*param_2) = (undefined2)local_98;
          }
          iVar16 = *param_2;
          iVar21 = iVar16 + 2;
          *param_2 = iVar21;
        } while ((*(char *)(*plVar3 + (longlong)(iVar16 + 1)) != '\0') ||
                (iVar16 = (int)uStack_90, *(char *)(*plVar3 + -2 + (longlong)iVar21) != '\0'));
      }
      local_98 = (code *)0x0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      iStack_68 = iVar16 + -1;
      if (iVar16 == 0) {
        iStack_68 = 0;
      }
      local_70 = pcVar23;
      FUN_14475bf92(&local_98);
      (**(code **)(*param_3 + 0x128))(param_3,&local_98);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (pcVar23 != (code *)0x0) {
        FUN_1400020a8(pcVar23);
      }
    }
    break;
  case (undefined8 *)0x69:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar6 = (undefined2 *)*puVar10 + 1;
    if ((undefined2 *)puVar10[1] < puVar6) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,2);
      }
      else {
        FUN_1457251a8(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT62(local_98._2_6_,*(undefined2 *)*puVar10);
      *puVar10 = (ulonglong)puVar6;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined2 *)(*plVar3 + (longlong)*param_2) = (undefined2)local_98;
    }
    iVar21 = *param_2;
    iVar16 = iVar21 + 2;
    *param_2 = iVar16;
    sVar25 = *(short *)(*plVar3 + (longlong)iVar21);
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)iVar16));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    if (sVar25 != 0) {
      puVar24 = &local_98;
      do {
        (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
        if ((*(byte *)(param_3 + 5) & 1) == 0) {
          local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)*param_2));
        }
        puVar10 = (ulonglong *)param_3[1];
        puVar4 = (undefined4 *)*puVar10 + 1;
        if ((undefined4 *)puVar10[1] < puVar4) {
          if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
            (**(code **)(*param_3 + 0x170))(param_3,puVar24,4);
          }
          else {
            FUN_14572512c(param_3,puVar24);
          }
        }
        else {
          local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
          *puVar10 = (ulonglong)puVar4;
        }
        if ((*pbVar1 & 4) == 0) {
          *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
        }
        *param_2 = *param_2 + 4;
        (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
        sVar25 = sVar25 + -1;
      } while (sVar25 != 0);
    }
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar24 >> 8),0x69);
    break;
  case (undefined8 *)0x6a:
    iVar16 = iVar21 + 0xc;
    if (*(char *)(lVar22 + lVar20) != '\x04') {
      iVar16 = iVar21;
    }
    *param_2 = iVar16 + 1;
    puVar24 = (undefined8 *)&DAT_0000006a;
    break;
  case (undefined8 *)0x6b:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_0000006b;
    break;
  case (undefined8 *)0x6d:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_0000006d;
    break;
  case (undefined8 *)0x70:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 4;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 4)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    *param_2 = *param_2 + 4;
    do {
      cVar14 = (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)&DAT_00000070;
    } while (cVar14 != 'q');
    break;
  case (undefined8 *)0x71:
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar4 = (undefined4 *)*puVar10 + 1;
    if ((undefined4 *)puVar10[1] < puVar4) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
      *puVar10 = (ulonglong)puVar4;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
    }
    iVar21 = *param_2;
    *param_2 = iVar21 + 4;
    if ((*pbVar1 & 1) == 0) {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)(*plVar3 + (longlong)(iVar21 + 4)));
    }
    puVar10 = (ulonglong *)param_3[1];
    puVar2 = (undefined1 *)*puVar10 + 1;
    if ((undefined1 *)puVar10[1] < puVar2) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
    }
    else {
      local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
      *puVar10 = (ulonglong)puVar2;
    }
    if ((*pbVar1 & 4) == 0) {
      *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
    }
    *param_2 = *param_2 + 1;
    puVar24 = (undefined8 *)&DAT_00000071;
    break;
  case (undefined8 *)0x72:
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
    puVar24 = (undefined8 *)&DAT_00000072;
    break;
  default:
    switch(bVar15) {
    case 0xf9:
      local_98 = (code *)0x0;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(lVar22 + lVar20);
      }
      (**(code **)(*param_3 + 0x150))(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 1) == 0) {
        local_70 = (code *)CONCAT44(local_70._4_4_,*(undefined4 *)(*plVar3 + (longlong)(iVar21 + 8))
                                   );
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_70,4);
        }
        else {
          FUN_14572512c(param_3);
        }
      }
      else {
        local_70 = (code *)CONCAT44(local_70._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      pcVar23 = local_70;
      if ((*pbVar1 & 4) == 0) {
        *(int *)(*plVar3 + (longlong)*param_2) = (int)local_70;
      }
      *param_2 = *param_2 + 4;
      local_98 = (code *)0x0;
      uStack_90 = 0;
      if ((int)local_70 < 1) {
        iVar21 = 0;
        if ((int)local_70 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)local_70 & 0xffffffff);
        }
LAB_1403a9f1d:
        lVar22 = (longlong)iVar21;
      }
      else {
        puVar24 = &local_98;
        uStack_90 = (ulonglong)local_70 & 0xffffffff;
        FUN_1447403be(puVar24);
        memset(local_98,0,(ulonglong)pcVar23 & 0xffffffff);
        iVar21 = (int)local_70;
        if ((int)local_70 < 1 || (*pbVar1 & 1) != 0) goto LAB_1403a9f1d;
        lVar20 = 0;
        do {
          local_98[lVar20] = *(code *)(lVar20 + (longlong)*param_2 + *plVar3);
          lVar20 = lVar20 + 1;
          lVar22 = (longlong)(int)local_70;
        } while (lVar20 < lVar22);
      }
      (**(code **)(*param_3 + 0x170))(param_3,local_98,lVar22);
      if (0 < (int)local_70 && (*(byte *)(param_3 + 5) & 4) == 0) {
        lVar22 = 0;
        do {
          *(code *)(lVar22 + (longlong)*param_2 + *plVar3) = local_98[lVar22];
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)local_70);
      }
      *param_2 = *param_2 + (int)local_70;
      if (local_98 != (code *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar24 >> 8),0xf9);
      break;
    case 0xfa:
      (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)0xfa;
      break;
    case 0xfb:
      (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3);
      puVar24 = (undefined8 *)0xfb;
      break;
    case 0xfc:
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT71(uVar13,*(undefined1 *)(lVar22 + lVar20));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar2 = (undefined1 *)*puVar10 + 1;
      if ((undefined1 *)puVar10[1] < puVar2) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_98,1);
      }
      else {
        local_98 = (code *)CONCAT71(local_98._1_7_,*(undefined1 *)*puVar10);
        *puVar10 = (ulonglong)puVar2;
      }
      if ((*pbVar1 & 4) == 0) {
        *(undefined1 *)(*plVar3 + (longlong)*param_2) = (undefined1)local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 1;
      puVar24 = (undefined8 *)&DAT_000000fc;
      if (*(char *)(*plVar3 + (longlong)iVar21) != '\'') break;
      goto switchD_1403a78d3_caseD_14;
    case 0xfd:
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      if ((*pbVar1 & 1) == 0) {
        local_98._0_4_ = *(undefined4 *)(lVar22 + lVar20);
        local_98._4_4_ = *(undefined4 *)(lVar22 + 8 + lVar20);
      }
      (**(code **)(*param_3 + 0x160))(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        lVar20 = (longlong)*param_2;
        lVar22 = *plVar3;
        *(undefined4 *)(lVar22 + lVar20) = (undefined4)local_98;
        *(undefined4 *)(lVar22 + 4 + lVar20) = 0;
        *(undefined4 *)(lVar22 + 8 + lVar20) = local_98._4_4_;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 0xc;
      local_98 = (code *)0x0;
      if ((*pbVar1 & 1) == 0) {
        local_98 = *(code **)(*plVar3 + (longlong)(iVar21 + 0xc));
      }
      (**(code **)(*param_3 + 0x150))(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        *(code **)(*plVar3 + (longlong)*param_2) = local_98;
      }
      iVar21 = *param_2;
      *param_2 = iVar21 + 8;
      if ((*pbVar1 & 4) == 0) {
        FUN_1427dc34d((longlong)iVar21 + *plVar3);
      }
      puVar24 = (undefined8 *)0xfd;
      if ((*(byte *)((longlong)param_3 + 0x2b) & 2) != 0) {
        lVar22 = *plVar3;
        lVar20 = *(longlong *)(lVar22 + (*param_2 + -8));
        if (lVar20 != 0) {
          lVar26 = (longlong)(*param_2 + -0x14);
          uVar7 = *(undefined4 *)(lVar22 + lVar26);
          uVar8 = *(undefined4 *)(lVar22 + 8 + lVar26);
          if (DAT_14c948fa0 == 0) {
            puStack_60 = &DAT_1427db2a2;
            if (DAT_14c963f04 == '\0') {
              uVar19 = FUN_140011aa6();
              DAT_14c948fa0 = FUN_140011c0e(uVar19,0x250,8);
            }
            else {
              DAT_14c948fa0 = FUN_14001cc68(0x250,8);
            }
            lStack_b0 = DAT_14c948fa0;
            FUN_1446f470e(auStack_58,L"ScriptStruct",1);
            ppuStack_d0 = &puStack_60;
            puStack_d8 = &LAB_1468915ce;
            pcStack_e0 = FUN_1427dc742;
            pwStack_f0 = L"Engine";
            pwStack_e8 = (wchar_t *)CONCAT44(pwStack_e8._4_4_,199);
            uStack_f8 = 0x10;
            uStack_100 = 0x10000020;
            pwStack_108._0_4_ = 8;
            FUN_14574b4b2(lStack_b0);
            DAT_14c948fa0 = lStack_b0;
            lStack_a0 = DAT_14c927740;
            if (DAT_14c927740 == 0) {
              local_98 = FUN_1449e2820;
              pcStack_c0 = FUN_14081d0ea;
              pcStack_c8 = FUN_14081d0ea;
              puStack_d8 = &LAB_146856450;
              pcStack_e0 = FUN_1427b121c;
              pwStack_e8 = L"Engine";
              pwStack_f0 = (wchar_t *)0x0;
              uStack_f8 = CONCAT44(uStack_f8._4_4_,0x10000021);
              uStack_100 = 8;
              pwStack_108._0_4_ = 0x28;
              ppuStack_d0 = (undefined2 **)&local_98;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              lStack_b0 = DAT_14c948fa0;
            }
            DAT_14c948fa0 = lStack_b0;
            lStack_a0 = DAT_14c927740;
            if (DAT_14c948f88 == 0) {
              puStack_50 = &DAT_1427db2a2;
              if (DAT_14c963f04 == '\0') {
                uVar19 = FUN_140011aa6();
                DAT_14c948f88 = FUN_140011c0e(uVar19,0x250,8);
              }
              else {
                DAT_14c948f88 = FUN_14001cc68(0x250,8);
              }
              lStack_b8 = DAT_14c948f88;
              FUN_1446f470e(&local_70,L"Struct",1);
              ppuStack_d0 = &puStack_50;
              puStack_d8 = &LAB_146891313;
              pcStack_e0 = FUN_146272f63;
              pwStack_f0 = L"Engine";
              pwStack_e8 = (wchar_t *)CONCAT44(pwStack_e8._4_4_,199);
              uStack_f8 = 8;
              uStack_100 = 0x10000020;
              pwStack_108._0_4_ = 8;
              FUN_14574b4b2(lStack_b8);
              DAT_14c948f88 = lStack_b8;
              lStack_a8 = DAT_14c927740;
              if (DAT_14c927740 == 0) {
                local_98 = FUN_1449e2820;
                pcStack_c0 = FUN_14081d0ea;
                pcStack_c8 = FUN_14081d0ea;
                puStack_d8 = &LAB_146856450;
                pcStack_e0 = FUN_1427b121c;
                pwStack_e8 = L"Engine";
                pwStack_f0 = (wchar_t *)0x0;
                uStack_f8 = CONCAT44(uStack_f8._4_4_,0x10000021);
                uStack_100 = 8;
                pwStack_108._0_4_ = 0x28;
                ppuStack_d0 = (undefined2 **)&local_98;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                lStack_b8 = DAT_14c948f88;
              }
              DAT_14c948f88 = lStack_b8;
              lStack_a8 = DAT_14c927740;
              uVar19 = FUN_1400163b0();
              pwStack_108 = L"Struct";
              FUN_14574b446(uVar19,lStack_b8,lStack_a8,L"/Script/CoreUObject");
            }
            pwStack_108 = L"ScriptStruct";
            FUN_14574b446(DAT_14c948f88,lStack_b0,lStack_a0,L"/Script/CoreUObject");
          }
          if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) {
            pcVar23 = (code *)CONCAT44(uVar8,uVar7);
            uVar19 = FUN_14477b664(lVar20);
            local_98 = pcVar23;
            uVar19 = FUN_14477b664(uVar19);
            uStack_90 = FUN_14477b664(uVar19);
            local_88 = 0;
            (**(code **)(*param_3 + 600))(param_3,&local_98);
            if (((*(byte *)((longlong)param_3 + 0x2b) & 4) != 0) && (local_98 != pcVar23)) {
              lVar22 = *plVar3;
              *(int *)(lVar22 + lVar26) = (int)local_98;
              *(undefined4 *)(lVar22 + 4 + lVar26) = 0;
              *(int *)(lVar22 + 8 + lVar26) = (int)((ulonglong)local_98 >> 0x20);
            }
          }
        }
      }
      break;
    case 0xfe:
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(uVar7,*(undefined4 *)(lVar22 + lVar20));
      }
      puVar10 = (ulonglong *)param_3[1];
      puVar4 = (undefined4 *)*puVar10 + 1;
      if ((undefined4 *)puVar10[1] < puVar4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_98,4);
        }
        else {
          FUN_14572512c(param_3,&local_98);
        }
      }
      else {
        local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar10);
        *puVar10 = (ulonglong)puVar4;
      }
      bVar15 = *pbVar1;
      if ((bVar15 & 1) != 0) {
        uVar18 = FUN_14041e9d4((ulonglong)local_98 & 0xffffffff,0);
        local_98 = (code *)(ulonglong)uVar18;
        bVar15 = *pbVar1;
      }
      if ((bVar15 & 4) == 0) {
        *(undefined4 *)(*plVar3 + (longlong)*param_2) = (undefined4)local_98;
      }
      iVar21 = *param_2 + 4;
      *param_2 = iVar21;
      local_98 = (code *)0x0;
      if ((*pbVar1 & 1) == 0) {
        local_98 = (code *)CONCAT44(*(undefined4 *)(*plVar3 + 8 + (longlong)iVar21),
                                    *(undefined4 *)(*plVar3 + (longlong)iVar21));
      }
      (**(code **)(*param_3 + 0x160))(param_3,&local_98);
      if ((*(byte *)(param_3 + 5) & 4) == 0) {
        lVar20 = (longlong)*param_2;
        lVar22 = *plVar3;
        *(int *)(lVar22 + lVar20) = (int)local_98;
        *(undefined4 *)(lVar22 + 4 + lVar20) = 0;
        *(int *)(lVar22 + 8 + lVar20) = (int)((ulonglong)local_98 >> 0x20);
      }
      iVar21 = *param_2;
      lVar22 = (longlong)iVar21;
      *param_2 = iVar21 + 0xc;
      puVar24 = (undefined8 *)0xfe;
      if ((*(byte *)((longlong)param_3 + 0x2b) & 2) != 0) {
        lVar20 = *plVar3;
        iVar16 = *(int *)(lVar20 + lVar22);
        iVar9 = *(int *)(lVar20 + 8 + lVar22);
        local_98 = (code *)CONCAT44(iVar9,iVar16);
        uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(lVar20 + (iVar21 + -4)));
        local_88 = 0;
        (**(code **)(*param_3 + 0x250))(param_3);
        if ((*(byte *)((longlong)param_3 + 0x2b) & 4) != 0) {
          iVar21 = (int)((ulonglong)local_98 >> 0x20);
          if (iVar9 != iVar21 || iVar16 != (int)local_98) {
            lVar20 = *plVar3;
            *(int *)(lVar20 + lVar22) = (int)local_98;
            *(undefined4 *)(lVar20 + 4 + lVar22) = 0;
            *(int *)(lVar20 + 8 + lVar22) = iVar21;
          }
        }
      }
    }
  }
switchD_1403a9b95_default:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar24 & 0xffffffff;
}



// FUNCTION 1403ab89a FUN_1403ab89a body=312 status=ok
// SIG undefined FUN_1403ab89a(void)

void FUN_1403ab89a(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1403ab904;
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
LAB_1403ab904:
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



// FUNCTION 1403ab9d2 FUN_1403ab9d2 body=177 status=ok
// SIG undefined FUN_1403ab9d2(void)

ulonglong * FUN_1403ab9d2(ulonglong *param_1,wchar_t *param_2,undefined4 param_3)

{
  size_t sVar1;
  void *_Dst;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar1 = wcslen(param_2);
    iVar2 = (int)sVar1 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      FUN_1403aba84(param_1,0);
      _Dst = (void *)*param_1;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)(((longlong)_Dst >> 0x18) + (longlong)param_1);
      }
    }
    memcpy(_Dst,param_2,(longlong)iVar2 * 2);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_3;
  *(undefined4 *)(param_1 + 0xf) = 0x1ffffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  FUN_1403abc08(param_1);
  return param_1;
}



// FUNCTION 1403aba84 FUN_1403aba84 body=387 status=ok
// SIG undefined FUN_1403aba84(void)

void FUN_1403aba84(ulonglong *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = (uint)param_1[1];
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar2) {
      uVar6 = uVar2;
    }
    lVar3 = (longlong)(int)uVar6;
  }
  else {
    lVar3 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar4 = lVar3 * 2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) {
        uVar7 = uVar5 & 0xfffffffffffffff0;
        if (uVar7 < 0x7ff1) goto LAB_1403abb8f;
        goto LAB_1403abb5e;
      }
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,2);
    }
  }
LAB_1403abb08:
  do {
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 1)) {
      uVar7 = uVar4 >> 1 & 0xffffffff;
    }
    uVar6 = (uint)uVar7;
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 == 0) && ((int)uVar6 < 1)) {
        return;
      }
      if (-1 < (int)uVar6) {
        uVar4 = FUN_14001fdce(uVar4,uVar6 * 2,2);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar6 <= param_2) {
      return;
    }
    uVar5 = 0;
    FUN_1467ac767();
LAB_1403abb8f:
    bVar1 = (&DAT_14c841e00)[uVar5 >> 4];
    uVar5 = 0x32;
    if (0x32 < bVar1) {
      uVar5 = (ulonglong)bVar1;
    }
    uVar8 = 0x32 - (ulonglong)bVar1;
    do {
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403abb08;
      lVar3 = uVar5 + 1 + uVar8;
      uVar8 = uVar8 - 1;
    } while (lVar3 != 0x33);
LAB_1403abb5e:
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & (uVar7 + uVar4) - 1;
  } while( true );
}



// FUNCTION 1403abc08 FUN_1403abc08 body=326 status=ok
// SIG undefined FUN_1403abc08(void)

void FUN_1403abc08(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  bVar3 = *(byte *)(param_1 + 0x7c) * '\x02';
  uVar4 = *(byte *)(param_1 + 0x7c) & 8 |
          (uint)(*(char *)(param_1 + 0x7a) != -1) |
          (uint)*(byte *)(param_1 + 0x7b) << 8 | *(int *)(param_1 + 0x74) << 0x10 |
          (uint)(bVar3 & 2) | (uint)(bVar3 & 4);
  puVar1 = (ulonglong *)(param_1 + 0x10);
  uVar6 = (ulonglong)(int)*(uint *)(param_1 + 0x18);
  if (0 < (longlong)uVar6) {
    uVar8 = *puVar1;
    uVar7 = ((longlong)uVar8 >> 0x18) + (longlong)puVar1;
    if ((uVar8 & 1) == 0) {
      uVar7 = uVar8;
    }
    uVar8 = 0;
    do {
      uVar4 = uVar4 ^ *(ushort *)(uVar7 + uVar8 * 4);
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
  if (3 < *(uint *)(param_1 + 0x18)) {
    uVar8 = *puVar1;
    uVar7 = ((longlong)uVar8 >> 0x18) + (longlong)puVar1;
    if ((uVar8 & 1) == 0) {
      uVar7 = uVar8;
    }
    do {
      iVar2 = (int)uVar6;
      uVar5 = iVar2 - 4;
      uVar6 = (ulonglong)uVar5;
      uVar4 = uVar4 ^ CONCAT13(*(undefined1 *)(uVar7 + 2 + (longlong)(int)uVar5 * 4),
                               CONCAT12(*(undefined1 *)(uVar7 + 2 + (longlong)(iVar2 + -3) * 4),
                                        CONCAT11(*(undefined1 *)
                                                  (uVar7 + 2 + (longlong)(iVar2 + -2) * 4),
                                                 *(undefined1 *)
                                                  (uVar7 + 2 + (longlong)(iVar2 + -1) * 4))));
    } while (3 < uVar5);
  }
  uVar5 = (uint)uVar6;
  if (1 < uVar5) {
    uVar8 = *puVar1;
    uVar7 = ((longlong)uVar8 >> 0x18) + (longlong)puVar1;
    if ((uVar8 & 1) == 0) {
      uVar7 = uVar8;
    }
    uVar5 = uVar5 - 2;
    uVar4 = ((uint)*(byte *)((uVar7 - 2) + (uVar6 & 0xffffffff) * 4) |
            (uint)*(byte *)((uVar7 - 6) + (uVar6 & 0xffffffff) * 4) << 0x10) ^ uVar4;
  }
  if (uVar5 != 0) {
    uVar6 = *puVar1;
    uVar8 = ((longlong)uVar6 >> 0x18) + (longlong)puVar1;
    if ((uVar6 & 1) == 0) {
      uVar8 = uVar6;
    }
    uVar4 = uVar4 ^ *(byte *)(uVar8 + 2);
  }
  *(uint *)(param_1 + 0x70) = uVar4;
  return;
}



// FUNCTION 1403abd4e FUN_1403abd4e body=395 status=ok
// SIG undefined FUN_1403abd4e(void)

void * FUN_1403abd4e(char *param_1,void *param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  
  LOCK();
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar2 != '\0') {
    FUN_1447d2058();
  }
  iVar7 = *(int *)(param_1 + 0x18);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  if (iVar7 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x20) = 0x2000000000;
    goto LAB_1403abe4a;
  }
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x20;
  iVar7 = *(int *)(param_1 + 0x10);
  *(int *)((longlong)param_2 + 0x20) = iVar7;
  uVar8 = iVar7 + 0x1f;
  if (0x1f < uVar8) {
    if (uVar8 < 0x40) {
      pvVar6 = (void *)((longlong)param_2 + 8);
LAB_1403abda8:
      uVar8 = uVar8 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1400744f2(param_2);
      *(uint *)((longlong)param_2 + 0x24) = uVar8 & 0xffffffe0;
      pvVar6 = *(void **)((longlong)param_2 + 0x18);
      if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
        pvVar6 = (void *)((longlong)param_2 + 8);
      }
      if (pvVar6 == (void *)0x0) {
        pvVar6 = param_2;
      }
      if (uVar8 < 0x120) goto LAB_1403abda8;
      uVar8 = (uVar8 >> 5) << 2;
    }
    memset(pvVar6,0,(ulonglong)uVar8);
    iVar7 = *(int *)((longlong)param_2 + 0x20);
    iVar3 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    if (iVar7 % 0x20 != 0) {
      pvVar6 = (void *)((longlong)param_2 + 8);
      if (*(void **)((longlong)param_2 + 0x18) != (void *)0x0) {
        pvVar6 = *(void **)((longlong)param_2 + 0x18);
      }
      if (pvVar6 == (void *)0x0) {
        pvVar6 = param_2;
      }
      bVar4 = -(char)(iVar7 % 0x20);
      *(uint *)((longlong)pvVar6 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar3 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
    iVar7 = *(int *)(param_1 + 0x10);
    if (0 < iVar7) {
      uVar5 = 0;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + uVar5 * 8) + 0x4e) == '\x01') {
          pvVar6 = *(void **)((longlong)param_2 + 0x18);
          if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
            pvVar6 = (void *)((longlong)param_2 + 8);
          }
          if (pvVar6 == (void *)0x0) {
            pvVar6 = param_2;
          }
          puVar1 = (uint *)((longlong)pvVar6 + (uVar5 >> 5 & 0x7ffffff) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
          iVar7 = *(int *)(param_1 + 0x10);
        }
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar7);
    }
  }
  FUN_1403abeda(param_1,param_2);
LAB_1403abe4a:
  if (param_1 != (char *)0x0) {
    LOCK();
    cVar2 = *param_1;
    if (cVar2 == '\x01') {
      *param_1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      FUN_14008cdb0(param_1);
    }
  }
  return param_2;
}



// FUNCTION 1403abeda FUN_1403abeda body=2212 status=ok
// SIG undefined FUN_1403abeda(void)

void FUN_1403abeda(longlong param_1,uint *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar21 = param_2[8];
  iVar19 = 0;
  if (uVar21 == 0) {
    uVar18 = 1;
    uVar17 = 0;
    iVar22 = 0;
    uVar12 = 0;
  }
  else {
    puVar10 = param_2 + 2;
    if (*(uint **)(param_2 + 6) != (uint *)0x0) {
      puVar10 = *(uint **)(param_2 + 6);
    }
    if (puVar10 == (uint *)0x0) {
      puVar10 = param_2;
    }
    uVar12 = *puVar10;
    uVar17 = 0;
    iVar22 = 0;
    if (uVar12 == 0) {
      iVar16 = uVar21 + 0x1e;
      if (-1 < (int)(uVar21 - 1)) {
        iVar16 = uVar21 - 1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar18 = uVar17;
      }
      do {
        if (uVar18 == uVar17) {
          iVar19 = 0;
          goto LAB_1403ac0d2;
        }
        iVar22 = iVar22 + 0x20;
        uVar12 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar12 == 0);
    }
    uVar18 = (ulonglong)(-uVar12 & uVar12);
    uVar4 = uVar18 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar12 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar21 <= (int)uVar12) {
      uVar12 = uVar21;
    }
  }
  if ((int)uVar12 < (int)uVar21) {
    uVar21 = 0xffffffff;
    iVar19 = 0;
    local_c8 = param_1;
    do {
      lVar20 = *(longlong *)(*(longlong *)(local_c8 + 8) + (longlong)(int)uVar12 * 8);
      *(undefined1 *)(lVar20 + 0x4e) = 0;
      LOCK();
      bVar24 = *(char *)(lVar20 + 8) == '\0';
      if (bVar24) {
        *(char *)(lVar20 + 8) = '\x01';
      }
      UNLOCK();
      if (!bVar24) {
        FUN_1447d2058(lVar20 + 8);
      }
      iVar19 = iVar19 + 1;
      *(undefined8 *)(lVar20 + 0x10) = 0;
      uVar21 = uVar21 & ~(uint)uVar18;
      puVar10 = *(uint **)(param_2 + 6);
      if (*(uint **)(param_2 + 6) == (uint *)0x0) {
        puVar10 = param_2 + 2;
      }
      if (puVar10 == (uint *)0x0) {
        puVar10 = param_2;
      }
      uVar5 = param_2[8];
      iVar16 = (int)uVar17;
      lVar20 = (longlong)iVar16;
      uVar12 = puVar10[lVar20] & uVar21;
      param_1 = local_c8;
      if (uVar12 == 0) {
        iVar13 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar13 = uVar5 - 1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar16) {
          iVar14 = iVar16;
        }
        if (iVar13 <= iVar16) break;
        lVar15 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar12 = puVar10[lVar20 + lVar15 + 1];
          if (uVar12 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar14 - lVar20 == lVar15) goto LAB_1403ac0d2;
        }
        uVar17 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar21 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar12 & uVar12);
      uVar4 = uVar18 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar12 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while ((int)uVar12 < (int)uVar5);
  }
LAB_1403ac0d2:
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar19;
  local_a0 = 0;
  uStack_98 = 0;
  local_c0 = param_1;
  FUN_1400743f8(local_b8,param_2);
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar22 = *(int *)(lVar20 + 0xc60);
  local_90 = iVar19;
  if (DAT_14c86a9fc == 0) {
    if (iVar22 != 2) {
      if (iVar22 != 1) goto LAB_1403ac11a;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1403ac11f;
      goto LAB_1403ac149;
    }
  }
  else {
LAB_1403ac11a:
    if (iVar22 != 0x10) {
LAB_1403ac149:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar19 = *(int *)(lVar20 + 0xc60), iVar19 == 2))
        goto LAB_1403ac11f;
        if (iVar19 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_1403ac11f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar3;
        if (puVar10 != (uint *)0x0) goto LAB_1403ac474;
        do {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar3 = puVar9;
          FUN_140217a48(puVar3);
          puVar10 = (uint *)*puVar3;
LAB_1403ac474:
          uVar18 = *(longlong *)(puVar10 + 0x10) + 7;
          uVar21 = puVar10[0x12];
          while( true ) {
            puVar23 = (undefined8 *)(uVar18 & 0xfffffffffffffff8);
            if (puVar23 + 0x1c <= puVar10 + 0x4000) {
              *(undefined8 **)(puVar10 + 0x10) = puVar23 + 0x1c;
              puVar10[0x12] = uVar21 + 1;
              iVar19 = 0;
              FUN_1447247dc(puVar23,0);
              *puVar23 = &PTR_FUN_14a391dd0;
              puVar23[0x15] = local_c0;
              puVar23[0x19] = 0;
              puVar23[0x1a] = 0;
              FUN_1400743f8(puVar23 + 0x16,local_b8);
              *(int *)(puVar23 + 0x1b) = local_90;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar21 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
                  uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
                  iVar19 = 0;
                }
                else {
                  uVar18 = 2;
                }
              }
              else {
                iVar19 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar18 = 5;
              }
              if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
              }
              puVar23[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar23[9] = puVar23;
              puVar23[10] = puVar23;
              lVar20 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar20 == 0) {
                uVar17 = 1;
                if ((char)uVar18 != '\x06') {
                  uVar17 = uVar18;
                }
                uVar18 = uVar17;
                uVar11 = 0;
              }
              else {
                if ((char)uVar18 == '\x06') {
                  uVar18 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
                }
                uVar11 = *(undefined8 *)(lVar20 + 0x30);
              }
              puVar23[0xf] = uVar11;
              puVar23[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar23 + 0x1c) = iVar19;
              if (puVar23 == (undefined8 *)0x0) {
                local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
                UNLOCK();
                local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                FUN_1447439e4(puVar23);
                LOCK();
                piVar2 = (int *)(puVar23 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar23)(puVar23,1);
                }
              }
              goto LAB_1403ac22f;
            }
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar12 = *puVar10;
            *puVar10 = *puVar10 + uVar21 + 1;
            UNLOCK();
            if ((uVar12 ^ uVar21) != 0xffffffff) break;
            puVar10 = (uint *)*puVar3;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar3 = puVar10;
            uVar18 = (longlong)puVar10 + 0x5f;
            uVar21 = 0;
          }
        } while( true );
      }
      local_88[0] = (undefined1 *)0x0;
      plVar8 = (longlong *)FUN_14001cc68(0x40,8);
      *plVar8 = (longlong)&PTR_LAB_14a391d80;
      plVar8[1] = local_c0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      local_78 = plVar8;
      FUN_1400743f8(plVar8 + 2,local_b8);
      *(int *)(plVar8 + 7) = local_90;
      if (plVar8 != (longlong *)&DAT_fffffffffffffff8) {
        local_88[0] = &LAB_140299c40;
      }
      local_d8 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"RenderCommandPipe_Stop",&DAT_14ca98ab4);
      if (local_88[0] != (undefined1 *)0x0) {
        plVar8 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar8 = local_68;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      goto LAB_1403ac22f;
    }
  }
LAB_1403ac11f:
  FUN_140299c46(&local_c0);
LAB_1403ac22f:
  FUN_14004710c();
  uVar21 = param_2[8];
  if (uVar21 == 0) {
    uVar17 = 1;
    iVar19 = 0;
    uVar18 = 0;
    uVar12 = 0;
  }
  else {
    puVar10 = param_2 + 2;
    if (*(uint **)(param_2 + 6) != (uint *)0x0) {
      puVar10 = *(uint **)(param_2 + 6);
    }
    if (puVar10 == (uint *)0x0) {
      puVar10 = param_2;
    }
    uVar12 = *puVar10;
    iVar19 = 0;
    uVar18 = 0;
    if (uVar12 == 0) {
      iVar19 = uVar21 + 0x1e;
      if (-1 < (int)(uVar21 - 1)) {
        iVar19 = uVar21 - 1;
      }
      uVar18 = 0;
      uVar17 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar17 = 0;
      }
      iVar19 = 0;
      do {
        if (uVar17 == uVar18) goto LAB_1403ac39f;
        iVar19 = iVar19 + 0x20;
        uVar12 = puVar10[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar12 == 0);
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12);
    uVar4 = uVar17 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar12 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar21 <= (int)uVar12) {
      uVar12 = uVar21;
    }
  }
  if ((int)uVar12 < (int)uVar21) {
    uVar21 = 0xffffffff;
    do {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar12 * 8);
      pcVar1 = (char *)(lVar20 + 8);
      LOCK();
      bVar24 = *pcVar1 == '\x01';
      if (bVar24) {
        *pcVar1 = '\0';
      }
      UNLOCK();
      if (!bVar24) {
        FUN_14008cdb0(lVar20 + 8);
      }
      uVar21 = uVar21 & ~(uint)uVar17;
      puVar10 = *(uint **)(param_2 + 6);
      if (*(uint **)(param_2 + 6) == (uint *)0x0) {
        puVar10 = param_2 + 2;
      }
      if (puVar10 == (uint *)0x0) {
        puVar10 = param_2;
      }
      uVar5 = param_2[8];
      iVar22 = (int)uVar18;
      lVar20 = (longlong)iVar22;
      uVar12 = puVar10[lVar20] & uVar21;
      if (uVar12 == 0) {
        iVar16 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar16 = uVar5 - 1;
        }
        iVar16 = iVar16 >> 5;
        iVar13 = iVar16;
        if (iVar16 < iVar22) {
          iVar13 = iVar22;
        }
        if (iVar16 <= iVar22) break;
        lVar15 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar12 = puVar10[lVar20 + lVar15 + 1];
          if (uVar12 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar13 - lVar20 == lVar15) goto LAB_1403ac39f;
        }
        uVar18 = (ulonglong)(iVar22 + (int)lVar15 + 1);
        uVar21 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar12 & uVar12);
      uVar4 = uVar17 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar12 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while ((int)uVar12 < (int)uVar5);
  }
LAB_1403ac39f:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ac78e FUN_1403ac78e body=16 status=ok
// SIG undefined FUN_1403ac78e(void)

undefined1 FUN_1403ac78e(void)

{
  FUN_1403ac79e();
  return 1;
}



// FUNCTION 1403ac79e FUN_1403ac79e body=60 status=ok
// SIG undefined FUN_1403ac79e(void)

void FUN_1403ac79e(longlong param_1)

{
  switch(*(undefined4 *)(param_1 + 0x14c)) {
  case 1:
    FUN_1403ac970();
    return;
  case 2:
    FUN_1403ac7da();
    return;
  case 3:
    FUN_1403aca46();
    return;
  case 4:
    FUN_143f0212e();
    return;
  case 5:
    FUN_143f022aa();
    return;
  case 6:
    FUN_143f0265e();
    return;
  default:
    return;
  }
}



// FUNCTION 1403ac7da FUN_1403ac7da body=385 status=ok
// SIG undefined FUN_1403ac7da(void)

void FUN_1403ac7da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x164) == '\x01') {
    FUN_1402160b8(&local_38);
    lVar2 = *(longlong *)(param_1 + 0x150);
    lVar1 = FUN_140eefd48();
    if ((double)*(int *)(lVar1 + 0x3c) < (double)(local_38 - lVar2) / 10000000.0) {
      FUN_148a68598(param_1);
    }
  }
  else if (*(int *)(param_1 + 0x148) == 7) {
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = 2;
    lVar2 = FUN_14583c07a(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *local_48 = &PTR_LAB_14b4db5c0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_48[2] = lVar3;
    *local_48 = &PTR_FUN_14b4db550;
    local_48[3] = param_1;
    local_48[4] = FUN_1413d8014;
    FUN_145985626(lVar2,&local_48);
    *(undefined1 *)(param_1 + 0x164) = 1;
    FUN_1402160b8(&local_38);
    *(longlong *)(param_1 + 0x150) = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ac970 FUN_1403ac970 body=213 status=ok
// SIG undefined FUN_1403ac970(void)

void FUN_1403ac970(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x148) == 7) {
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = 1;
    plVar3 = (longlong *)FUN_1457baddc();
    if ((longlong)(int)plVar3[1] != 0) {
      puVar4 = (undefined8 *)(*plVar3 + 8);
      lVar5 = 0;
      do {
        if (*(char *)((longlong)puVar4 + 0xe1) != '\0') {
          if ((*plVar3 != lVar5) && (puVar1 = (undefined8 *)(param_1 + 0x90), puVar4 != puVar1)) {
            iVar2 = *(int *)(puVar4 + 1);
            _Src = (void *)*puVar4;
            *(int *)(param_1 + 0x98) = iVar2;
            if (iVar2 == 0 && *(int *)(param_1 + 0x9c) == 0) {
              *(undefined4 *)(param_1 + 0x9c) = 0;
            }
            else {
              FUN_1446dd670(puVar1,iVar2);
              if (iVar2 != 0) {
                memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
              }
            }
          }
          break;
        }
        puVar4 = puVar4 + 0x1e;
        lVar5 = lVar5 + -0xf0;
      } while ((longlong)(int)plVar3[1] * -0xf0 - lVar5 != 0);
    }
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
  }
  return;
}



// FUNCTION 1403aca46 FUN_1403aca46 body=596 status=ok
// SIG undefined FUN_1403aca46(void)

void FUN_1403aca46(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[0x29] == 7) {
    param_1[0x29] = 0;
    goto LAB_1403acc35;
  }
  *(undefined4 *)(param_1 + 0x29) = 3;
  iVar1 = (int)param_1[0x13];
  if (iVar1 == (int)param_1[0x17]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(param_1[0x12] + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(param_1[0x16] + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_1403acaf4;
LAB_1403acac8:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1403acac8;
      }
      if (uVar5 != uVar7) goto LAB_1403acb1c;
    }
LAB_1403acaf4:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((int)param_1[0x17] + iVar1 == 1) goto LAB_1403acaf4;
LAB_1403acb1c:
  local_68 = 0;
  uStack_60 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_78 = 0;
  cVar3 = FUN_14063337c(&DAT_14c846b20,L"patch=",&local_68,1);
  if (cVar3 == '\0') {
LAB_1403acbf7:
    if ((longlong)(int)param_1[1] != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*param_1 + 8 + lVar4) != 0) && (*(longlong *)(*param_1 + lVar4) != 0)) {
          local_48 = 0;
          local_38 = &PTR_LAB_14b4db630;
          local_58 = &LAB_143f02984;
          local_30 = param_1;
          FUN_148a685ea(param_1,param_1,param_1 + 0x16);
          goto LAB_1403acc26;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)(int)param_1[1] * 0x10 != lVar4);
    }
    *(int *)((longlong)param_1 + 0x14c) = *(int *)((longlong)param_1 + 0x14c) + 1;
  }
  else {
    if ((int)uStack_60 == (int)param_1[0x17]) {
      if (1 < (int)uStack_60) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(local_68 + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(param_1[0x16] + lVar4);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_1403acbc9;
LAB_1403acb9d:
          lVar4 = lVar4 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1403acb9d;
        }
        if (uVar5 != uVar7) goto LAB_1403acbf7;
      }
    }
    else if ((int)param_1[0x17] + (int)uStack_60 != 1) goto LAB_1403acbf7;
LAB_1403acbc9:
    if (((int)param_1[0xc] != 0) && (plVar2 = (longlong *)param_1[0xb], plVar2 != (longlong *)0x0))
    {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1,&local_68);
    }
    FUN_148a68598(param_1);
  }
LAB_1403acc26:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1403acc35:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403accac FUN_1403accac body=267 status=ok
// SIG undefined FUN_1403accac(void)

undefined8 FUN_1403accac(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1403acdb1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1403acdb1;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_1403acdb1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1403acd5f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_1403acd5f;
    }
  }
  uVar6 = 0;
LAB_1403acd5f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403acdc6 FUN_1403acdc6 body=1294 status=ok
// SIG undefined FUN_1403acdc6(void)

void FUN_1403acdc6(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong *puVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  ulonglong *local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
  plVar1 = (longlong *)(param_1 + 0x858);
  local_a8 = (ulonglong *)0x0;
  uStack_a0 = 0;
  iVar7 = *(int *)(param_1 + 0x860) - *(int *)(param_1 + 0x88c);
  if (-1 < iVar7) {
    if (iVar7 != 0) {
      FUN_147058ea2(&local_a8);
    }
    local_60 = param_1 + 0x868;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x880) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if (local_78._4_4_ < *(int *)(local_60 + 0x18)) {
      iVar7 = local_78._4_4_;
      local_78 = uVar4;
      do {
        uVar3 = uStack_a0;
        lVar6 = *local_90;
        lVar10 = (longlong)(int)uStack_a0;
        uVar5 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
        if (uStack_a0._4_4_ < uVar5) {
          FUN_147058f02(&local_a8,uVar3 & 0xffffffff);
        }
        local_a8[lVar10] = *(ulonglong *)((longlong)iVar7 * 0x10 + lVar6);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
    }
    local_78 = uVar4;
    if ((longlong)(int)uStack_a0 != 0) {
      puVar2 = local_a8 + (int)uStack_a0;
      bVar9 = 0;
      puVar8 = local_a8;
      do {
        uVar3 = *puVar8;
        if ((bVar9 & 1) == 0) {
          bVar9 = *(byte *)(uVar3 + 0xc0);
          if (bVar9 == 1) {
LAB_1403ad27f:
            *(undefined1 *)(uVar3 + 0xc0) = 0;
            FUN_14705797e(uVar3 + 0xa8);
          }
        }
        else if (*(int *)(param_1 + 0x860) != *(int *)(param_1 + 0x88c)) {
          uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          lVar6 = *(longlong *)(param_1 + 0x898);
          if (*(longlong *)(param_1 + 0x898) == 0) {
            lVar6 = param_1 + 0x890;
          }
          iVar7 = *(int *)(lVar6 + (ulonglong)
                                   (*(int *)(param_1 + 0x8a0) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (iVar7 != -1) {
            do {
              if (*(ulonglong *)(*plVar1 + (longlong)iVar7 * 0x10) == uVar3) {
                if (*(char *)(uVar3 + 0xc0) != '\0') goto LAB_1403ad27f;
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar1 + 8);
            } while (iVar7 != -1);
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar2);
    }
    if (local_a8 != (ulonglong *)0x0) {
      FUN_1400020a8(local_a8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
    plVar1 = (longlong *)(param_1 + 0x8a8);
    local_a8 = (ulonglong *)0x0;
    uStack_a0 = 0;
    iVar7 = *(int *)(param_1 + 0x8b0) - *(int *)(param_1 + 0x8dc);
    if (-1 < iVar7) {
      if (iVar7 != 0) {
        FUN_147058f88(&local_a8);
      }
      local_60 = param_1 + 0x8b8;
      local_68 = 0x100000000;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_50 = 0;
      if (*(int *)(param_1 + 0x8d0) != 0) {
        FUN_1449c0562(&local_68);
      }
      local_78._0_4_ = (uint)local_58;
      local_78._4_4_ = local_58._4_4_;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_90 = plVar1;
      if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
        do {
          uVar3 = uStack_a0;
          lVar10 = (longlong)local_78._4_4_;
          lVar6 = *local_90;
          lVar11 = (longlong)(int)uStack_a0;
          uVar5 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
          if (uStack_a0._4_4_ < uVar5) {
            FUN_147058fe8(&local_a8,uVar3 & 0xffffffff);
          }
          local_a8[lVar11] = *(ulonglong *)(lVar10 * 0x10 + lVar6);
          local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
          FUN_1449c0562(&local_88);
        } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      }
      if ((longlong)(int)uStack_a0 != 0) {
        puVar2 = local_a8 + (int)uStack_a0;
        bVar9 = 0;
        puVar8 = local_a8;
        do {
          uVar3 = *puVar8;
          if ((bVar9 & 1) == 0) {
            bVar9 = *(byte *)(uVar3 + 0xc0);
            if (bVar9 == 1) {
LAB_1403ad2a0:
              *(undefined1 *)(uVar3 + 0xc0) = 0;
              FUN_147057c64(uVar3 + 0xa8);
            }
          }
          else if (*(int *)(param_1 + 0x8b0) != *(int *)(param_1 + 0x8dc)) {
            uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            lVar6 = *(longlong *)(param_1 + 0x8e8);
            if (*(longlong *)(param_1 + 0x8e8) == 0) {
              lVar6 = param_1 + 0x8e0;
            }
            iVar7 = *(int *)(lVar6 + (ulonglong)
                                     (*(int *)(param_1 + 0x8f0) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4)
            ;
            if (iVar7 != -1) {
              do {
                if (*(ulonglong *)(*plVar1 + (longlong)iVar7 * 0x10) == uVar3) {
                  if (*(char *)(uVar3 + 0xc0) != '\0') goto LAB_1403ad2a0;
                  break;
                }
                iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar1 + 8);
              } while (iVar7 != -1);
            }
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar2);
      }
      if (local_a8 != (ulonglong *)0x0) {
        FUN_1400020a8(local_a8);
      }
      FUN_1403ad2d6(param_1);
      if (*(char *)(param_1 + 0x8f9) == '\x01') {
        *(char *)(param_1 + 0x8f8) = *(char *)(param_1 + 0x8f8) + -1;
        *(undefined1 *)(param_1 + 0x8f9) = 0;
      }
      if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  uStack_a0 = 0;
  local_a8 = (ulonglong *)0x0;
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1403ad2d6 FUN_1403ad2d6 body=374 status=ok
// SIG undefined FUN_1403ad2d6(void)

void FUN_1403ad2d6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  iVar5 = *(int *)(param_1 + 0x944);
  *(int *)(param_1 + 0x944) = iVar5 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x938);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0x944) = iVar5;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x930);
    bVar8 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((*(int *)(*plVar1 + lVar10) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar10), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(), cVar4 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar3 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar3) {
          iVar5 = *(int *)(param_1 + 0x944) + -1;
          *(int *)(param_1 + 0x944) = iVar5;
          if (bVar8) goto LAB_1403ad366;
          goto LAB_1403ad3d7;
        }
      }
      uVar6 = uVar11 - 1;
      bVar8 = true;
    } while (1 < uVar11);
    iVar5 = *(int *)(param_1 + 0x944) + -1;
    *(int *)(param_1 + 0x944) = iVar5;
LAB_1403ad366:
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x938);
      iVar7 = iVar5;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10), plVar2 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar9);
            FUN_14005b248(plVar1);
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar7 = *(int *)(param_1 + 0x938);
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(param_1 + 0x940) = iVar9;
      if ((iVar9 < iVar5) && (*(int *)(param_1 + 0x93c) != iVar7)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_1403ad3d7:
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  lVar10 = -0x7f0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x820 + lVar10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0);
                    /* WARNING: Could not recover jumptable at 0x0001403ad413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return;
}



// FUNCTION 1403ad45a FUN_1403ad45a body=138 status=ok
// SIG undefined FUN_1403ad45a(void)

void FUN_1403ad45a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x400);
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar2 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_1403ad4e4();
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
        if (plVar4 != (longlong *)0x0) {
          uVar3 = FUN_1403ad4e4();
          plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
          if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
          }
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 1403ad4e4 FUN_1403ad4e4 body=228 status=ok
// SIG undefined FUN_1403ad4e4(void)

longlong FUN_1403ad4e4(void)

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
  if (DAT_14caa7de8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14747945b;
    local_40 = FUN_146327529;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GameplayTags",L"GameplayTagAssetInterface",&DAT_14caa7de8,FUN_146327502)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7de8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ad5dc FUN_1403ad5dc body=93 status=ok
// SIG undefined FUN_1403ad5dc(void)

undefined8 * FUN_1403ad5dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403ad639(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1403ad6ce(param_1,iVar1);
      FUN_1403ad682(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403ad639 FUN_1403ad639 body=73 status=ok
// SIG undefined FUN_1403ad639(void)

void FUN_1403ad639(longlong param_1,int param_2)

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



// FUNCTION 1403ad682 FUN_1403ad682 body=76 status=ok
// SIG undefined FUN_1403ad682(void)

void FUN_1403ad682(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1403ad6ce FUN_1403ad6ce body=334 status=ok
// SIG undefined FUN_1403ad6ce(void)

void FUN_1403ad6ce(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403ad740;
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
LAB_1403ad740:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403ad81c FUN_1403ad81c body=9 status=ok
// SIG undefined FUN_1403ad81c(void)

void FUN_1403ad81c(longlong param_1)

{
  FUN_1403ad826(param_1 + 0x10);
  return;
}



// FUNCTION 1403ad826 FUN_1403ad826 body=69 status=ok
// SIG undefined FUN_1403ad826(void)

void FUN_1403ad826(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4333c0;
  if ((param_1[9] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[9] + 0x50));
  }
  param_1[6] = 0;
  param_1[7] = 0xffffffffffffffff;
  return;
}



// FUNCTION 1403ad86c FUN_1403ad86c body=739 status=ok
// SIG undefined FUN_1403ad86c(void)

void FUN_1403ad86c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  longlong lVar11;
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
  code *local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4d;
  undefined1 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = FUN_14011be0c(param_1 + -8);
  if (lVar11 == 0) {
LAB_1403adb1f:
    if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (DAT_14cbadd90 == 0) {
    local_80 = &local_60;
    local_60 = FUN_141030f22;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_1459f2e4c;
    local_88 = &LAB_148c39de3;
    local_90 = &LAB_1457a9eb2;
    local_98 = &DAT_149e063b2;
    local_a0 = 0;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1403adb1f;
  FUN_1403adc5e(&local_60,lVar11);
  puVar3 = *(undefined8 **)(local_60 + 0x70);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 4));
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if (*(int *)(puVar3 + 1) < 1) goto LAB_1403ad963;
  *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
  uVar4 = *puVar3;
  bVar9 = 0;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    cVar6 = FUN_14008355a(param_1 + 0x80,0);
    if (cVar6 == '\0') {
      lVar11 = FUN_14479d2ce();
      bVar9 = 1;
      if (*(longlong *)(lVar11 + 0xd60) != DAT_14cb95128) {
        lVar11 = FUN_14479d2ce(param_1 + 0x80);
        cVar6 = (**(code **)(*(longlong *)(lVar11 + 0x1068) + 0x38))();
        if (cVar6 == '\0') goto LAB_1403ad9af;
      }
      uVar10 = 0;
    }
    else {
LAB_1403ad9af:
      uVar10 = FUN_1403ae79a();
      bVar9 = 0;
    }
    local_49 = 0;
    bVar7 = FUN_1403adb6e(uVar4,(bVar9 | (byte)uVar10) ^ 1,DAT_14cbd6990);
    local_4b = 0;
    bVar8 = FUN_1403adb6e(uVar4,bVar9,DAT_14cbd69a8);
    local_4d = 0;
    bVar9 = FUN_1403adb6e(uVar4,uVar10,DAT_14cbd69c0);
    bVar9 = bVar9 | bVar8 | bVar7;
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  uVar5 = DAT_14cbd69d8;
  local_4f = 0;
  uVar10 = FUN_1403addf0(param_1 + -0x38);
  cVar6 = FUN_1403adb6e(uVar4,uVar10,uVar5,&local_50);
  if (cVar6 != '\0' || bVar9 != 0) {
    *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
  }
LAB_1403ad963:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1403adb6e FUN_1403adb6e body=240 status=ok
// SIG undefined FUN_1403adb6e(void)

undefined8 FUN_1403adb6e(longlong param_1,char param_2,longlong param_3,char *param_4)

{
  longlong *plVar1;
  undefined7 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar5 + 1;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    lVar6 = (longlong)*(int *)(param_1 + 0x28) * 0x1c;
    do {
      if (((int)*plVar1 == (int)param_3) &&
         (*(int *)((longlong)plVar1 + 4) == (int)((ulonglong)param_3 >> 0x20))) {
        if (plVar1 != (longlong *)0x0) {
          bVar3 = 0;
          goto LAB_1403adbc2;
        }
        break;
      }
      plVar1 = (longlong *)((longlong)plVar1 + 0x1c);
      lVar6 = lVar6 + -0x1c;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 0x30) = iVar5 + 2;
  plVar1 = (longlong *)FUN_1403ae72c(param_1 + 0x20);
  bVar3 = 1;
  if ((int)plVar1[1] == 0 || *plVar1 != param_3) {
    *plVar1 = param_3;
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  }
LAB_1403adbc2:
  if (param_4[1] == '\x01') {
    if (*param_4 == *(char *)((longlong)plVar1 + 0x14)) {
      if ((int)plVar1[3] == 0) {
        iVar5 = 1;
        goto LAB_1403adc4b;
      }
      bVar4 = 0;
    }
    else {
      iVar5 = (int)plVar1[3] + 1;
LAB_1403adc4b:
      *(char *)((longlong)plVar1 + 0x14) = *param_4;
      *(int *)(plVar1 + 3) = iVar5;
      bVar4 = 1;
    }
    bVar3 = bVar3 | bVar4;
  }
  if (*(char *)((longlong)plVar1 + 0xc) == param_2) {
    if ((int)plVar1[2] != 0) {
      bVar4 = 0;
      uVar2 = 0;
      goto LAB_1403adbd6;
    }
    iVar5 = 1;
  }
  else {
    iVar5 = (int)plVar1[2] + 1;
  }
  *(char *)((longlong)plVar1 + 0xc) = param_2;
  *(int *)(plVar1 + 2) = iVar5;
  uVar2 = (undefined7)((ulonglong)plVar1 >> 8);
  bVar4 = 1;
LAB_1403adbd6:
  if (param_4[1] == '\x01') {
    param_4[1] = '\0';
  }
  return CONCAT71(uVar2,bVar4 | bVar3);
}



// FUNCTION 1403adc5e FUN_1403adc5e body=400 status=ok
// SIG undefined FUN_1403adc5e(void)

undefined8 FUN_1403adc5e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
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
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (uVar3 = *(ulonglong *)(param_2 + 0x430), uVar3 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      uVar3 = *(ulonglong *)(param_2 + 0x430);
      if (uVar3 == 0) goto LAB_1403addb5;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(uVar3 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      local_20 = (code *)CONCAT44(local_20._4_4_,uVar2 >> 0x10 ^ uVar2);
      goto LAB_1403addc0;
    }
  }
LAB_1403addb5:
  local_20 = (code *)((ulonglong)local_20 & 0xffffffff00000000);
LAB_1403addc0:
  FUN_1448d5e3c(param_1);
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403addf0 FUN_1403addf0 body=290 status=ok
// SIG undefined FUN_1403addf0(void)

ulonglong FUN_1403addf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
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
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      cVar2 = FUN_1403adf14(lVar1,0,0);
      uVar3 = CONCAT71(uVar4,cVar2 == '\0');
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403adf14 FUN_1403adf14 body=883 status=ok
// SIG undefined FUN_1403adf14(void)

ulonglong FUN_1403adf14(longlong param_1,undefined2 **param_2,char param_3)

{
  uint3 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  float fVar11;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = FUN_1403ae46b();
  if (((((int)uVar3 < 0) || (*(int *)(param_1 + 0x78f0) <= (int)uVar3)) ||
      (lVar5 = (ulonglong)uVar3 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar5 == 0)) ||
     (((*(longlong *)(lVar5 + 0x20) == 0 || (*(longlong **)(lVar5 + 0x28) == (longlong *)0x0)) ||
      (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))(), lVar5 == 0)))) {
LAB_1403ae185:
    if (param_2 != (undefined2 **)0x0) {
      pwVar8 = L"No Gadget equipped";
LAB_1403ae191:
      FUN_14020fad6(param_2,pwVar8);
    }
  }
  else {
    uVar6 = FUN_1403ae386();
    plVar7 = (longlong *)FUN_144718840(lVar5,uVar6);
    if (plVar7 == (longlong *)0x0) goto LAB_1403ae185;
    cVar2 = FUN_1403ae2fa(param_1 + 0x60e8,0,0);
    if (cVar2 == '\0') {
      if (param_2 == (undefined2 **)0x0) goto LAB_1403ae133;
      pwVar8 = L"EWeaponActionChannel::Use disabled";
      goto LAB_1403ae191;
    }
    uVar3 = *(uint *)(param_1 + 0x6498);
    if ((uVar3 & 2) == 0) {
      uVar4 = (**(code **)(*plVar7 + 0xa8))(plVar7);
      if ((uVar4 & uVar3) == 0) {
        uVar1 = (uint3)(uVar3 >> 8);
        uVar9 = CONCAT71((uint7)uVar1,1);
        if (((param_3 != '\0') || (lVar5 = FUN_14011c349(), *(longlong *)(lVar5 + 0x250) == 0)) ||
           (0xfffffffd < *(int *)(lVar5 + 600) - 1U)) goto LAB_1403ae135;
        uVar6 = FUN_14011c2be(lVar5 + 0x250);
        local_68 = (undefined2 *)0x0;
        uStack_60 = 0;
        local_4c = 0xff;
        local_50 = 0;
        local_58 = 0;
        FUN_14493679e(param_1 + 0x40e8,&local_68,uVar6,0);
        cVar2 = FUN_1403ae288(&local_68);
        if (cVar2 == '\0') goto LAB_1403ae135;
        lVar5 = FUN_140280ec4(&local_68);
        if (((ABS(*(float *)(lVar5 + 200) - *(float *)(lVar5 + 0x24)) < 0.0001) &&
            (*(float *)(lVar5 + 200) < *(float *)(lVar5 + 0x30))) ||
           (cVar2 = (**(code **)(*plVar7 + 0x58))(plVar7), cVar2 != '\0')) goto LAB_1403ae135;
        if (*(char *)(param_1 + 0x9b30) == '\x01') {
          cVar2 = (**(code **)(*plVar7 + 0x60))(plVar7);
          uVar9 = (ulonglong)CONCAT31(uVar1,2);
          if (cVar2 != '\0') goto LAB_1403ae135;
        }
        (**(code **)(*plVar7 + 0x68))(plVar7);
        if (param_2 != (undefined2 **)0x0) {
          fVar11 = (float)FUN_148ccdb40(param_1);
          FUN_140002266(&local_68,L"On Cooldown: %0.02fs",(double)fVar11);
          local_78 = local_68;
          goto joined_r0x0001403ae179;
        }
      }
      else if (param_2 != (undefined2 **)0x0) {
        lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
        if (lVar5 == 0) {
          FUN_140056680(&local_78,&DAT_149e01fe8);
        }
        else {
          local_68 = *(undefined2 **)(lVar5 + 0x18);
          FUN_1400021e4(&local_68,&local_78);
        }
        puVar10 = local_78;
        if (local_70 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_68,L"%s is locked.",puVar10);
        if (&local_68 == param_2) {
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *param_2 = local_68;
          local_68 = (undefined2 *)0x0;
          *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
          uStack_60 = 0;
        }
        goto LAB_1403ae22a;
      }
    }
    else if (param_2 != (undefined2 **)0x0) {
      FUN_140002266(&local_68,L"Gadget is locked.");
      local_78 = local_68;
joined_r0x0001403ae179:
      local_68 = local_78;
      if (&local_68 == param_2) {
LAB_1403ae22a:
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *param_2 = local_68;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
      }
    }
  }
LAB_1403ae133:
  uVar9 = 0;
LAB_1403ae135:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ae288 FUN_1403ae288 body=113 status=ok
// SIG undefined FUN_1403ae288(void)

undefined8 FUN_1403ae288(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
      uVar2 = FUN_14486eb0e(uVar2,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1403ae2fa FUN_1403ae2fa body=139 status=ok
// SIG undefined FUN_1403ae2fa(void)

ulonglong FUN_1403ae2fa(longlong param_1,byte param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0xb0 + (ulonglong)param_2 * 0x28) == '\0') {
    uVar2 = CONCAT71((int7)((ulonglong)param_2 * 5 >> 8),1);
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0xa8))) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + (ulonglong)param_3 * 0x170);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) {
        return uVar2;
      }
      lVar1 = *(longlong *)(lVar1 + 0xd60);
      uVar2 = 0;
      if ((lVar1 != DAT_14cb95120) && (lVar1 != DAT_14cb94e38)) {
        uVar2 = (ulonglong)(lVar1 != DAT_14cb94e50);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1403ae386 FUN_1403ae386 body=228 status=ok
// SIG undefined FUN_1403ae386(void)

longlong FUN_1403ae386(void)

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
  if (DAT_14cba5000 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148bd4685;
    local_40 = FUN_1465c1591;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"InventoryGadgetInterface",&DAT_14cba5000,&DAT_148bd4684);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ae46b FUN_1403ae46b body=703 status=ok
// SIG undefined FUN_1403ae46b(void)

uint FUN_1403ae46b(void)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar7 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar8 = plVar7;
  if (cVar2 == '\0') {
LAB_1403ae4a6:
    if (*plVar8 == 0) goto LAB_1403ae5f2;
    plVar8 = plVar7;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar8 = (longlong *)(*plVar7 + 0x30);
        goto LAB_1403ae4bb;
      }
LAB_1403ae587:
      if (((DAT_14c9a1ab0 == 0) || (*plVar7 == 0)) ||
         (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
         plVar7 == (longlong *)0x0)) goto LAB_1403ae4d3;
      puVar10 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar7 + 0x2a0))(plVar7,plVar1,puVar10);
LAB_1403ae5d7:
      if (cVar2 == '\0') goto LAB_1403ae4d3;
      goto LAB_1403ae63c;
    }
LAB_1403ae4bb:
    if (*plVar8 == 0) goto LAB_1403ae587;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar8 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar7 != 0 &&
        (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
        plVar7 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar1);
      goto LAB_1403ae5d7;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar8 = (longlong *)(*plVar7 + 0x30);
      goto LAB_1403ae4a6;
    }
LAB_1403ae5f2:
    lVar4 = FUN_140162146();
    if (lVar4 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446ddda2(&local_58,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_58,plVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_1403ae63c:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_1403ae4d3:
  lVar4 = plVar1[5];
  if (lVar4 == 0) {
    uVar5 = FUN_145d8612a();
    lVar4 = FUN_14477b664(uVar5);
    plVar1[5] = lVar4;
  }
  lVar6 = plVar1[6];
  if (lVar6 == 0) {
    uVar9 = 0xffffffff;
    if ((lVar4 == 0) || (plVar1[4] == 0)) goto LAB_1403ae530;
    plVar7 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
      plVar1[6] = 0;
      goto LAB_1403ae530;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar5,plVar1 + 4);
    plVar1[6] = lVar6;
    if (lVar6 == 0) goto LAB_1403ae530;
  }
  uVar9 = 0xffffffff;
  if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x18);
    plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x20) * 7;
    uVar3 = 0;
    do {
      if (plVar1[0x11] == *plVar7) {
        uVar9 = -(uint)((int)plVar7[1] == 0) | uVar3;
        break;
      }
      uVar3 = uVar3 + (int)plVar7[1];
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
LAB_1403ae530:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1403ae72c FUN_1403ae72c body=73 status=ok
// SIG undefined FUN_1403ae72c(void)

longlong FUN_1403ae72c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457080b4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x1c + *param_1;
  FUN_1403ae775(lVar2,1);
  return lVar2;
}



// FUNCTION 1403ae775 FUN_1403ae775 body=36 status=ok
// SIG undefined FUN_1403ae775(void)

void FUN_1403ae775(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      puVar1[-2] = 0;
      *(undefined1 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + -6) = 0;
      *(undefined8 *)((longlong)puVar1 + -0x13) = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403ae79a FUN_1403ae79a body=486 status=ok
// SIG undefined FUN_1403ae79a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1403ae79a(longlong param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar10;
  undefined7 uVar9;
  
  plVar7 = *(longlong **)(param_1 + 0x60);
  if ((plVar7 != (longlong *)0x0) && (*(int *)(param_1 + 0x5c) != 0)) {
    puVar1 = (uint *)(param_1 + 0x58);
    uVar3 = *puVar1;
    if (((-1 < (int)uVar3) &&
        ((((int)uVar3 < DAT_14c9647dc &&
          (lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 != 0)) &&
         (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x5c))))) &&
       ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar7 = plVar7 + 0xd9;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))();
      }
      cVar5 = FUN_14486eb0e(plVar7,puVar1);
      if (cVar5 != '\0') {
        lVar10 = FUN_14008e0ae(puVar1);
        fVar2 = *(float *)(lVar10 + 200);
        uVar9 = (undefined7)((ulonglong)puVar1 >> 8);
        uVar8 = CONCAT71(uVar9,0.0 < fVar2);
        cVar5 = FUN_140083514((uint *)(param_1 + 0xb0),0);
        if ((cVar5 != '\0') || (fVar2 <= 0.0)) goto LAB_1403ae93b;
        iVar4 = *(int *)(param_1 + 0xb4);
        iVar6 = _DAT_00000b44;
        if ((iVar4 == 0) ||
           ((uVar3 = *(uint *)(param_1 + 0xb0), (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)))) {
LAB_1403ae96b:
          lVar10 = 0;
        }
        else {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar7 == (longlong *)0x0) ||
             (((int)plVar7[2] != iVar4 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar7;
          }
          iVar6 = *(int *)(lVar10 + 0xb44);
          plVar7 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar4)) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_1403ae96b;
          lVar10 = *plVar7;
        }
        uVar8 = CONCAT71(uVar9,(iVar6 < 1 || *(int *)(lVar10 + 0xb3c) < 2) && 0.0 < fVar2);
        goto LAB_1403ae93b;
      }
    }
  }
  uVar8 = 0;
  FUN_140083514(param_1 + 0xb0,0);
LAB_1403ae93b:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1403ae980 FUN_1403ae980 body=242 status=ok
// SIG undefined FUN_1403ae980(void)

undefined8 *
FUN_1403ae980(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_1403aea72();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca1a308;
  puVar6[4] = DAT_14ca1a308;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca1a2c0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2a03f0;
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



// FUNCTION 1403aea72 FUN_1403aea72 body=427 status=ok
// SIG undefined FUN_1403aea72(void)

undefined * FUN_1403aea72(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
              0x110) < DAT_14ca1a340) {
    FUN_144b3d300(&DAT_14ca1a340);
    if (DAT_14ca1a340 == -1) {
      FUN_145708152(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"NaniteShading";
      local_70 = L"NaniteShading";
      local_78 = L"FNaniteShadingUniformParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x12f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1a2c0,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e55429);
      _Init_thread_footer(&DAT_14ca1a340);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca1a2c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403aec1e FUN_1403aec1e body=40 status=ok
// SIG undefined FUN_1403aec1e(void)

undefined8 FUN_1403aec1e(undefined8 param_1,int param_2)

{
  FUN_1403aec46();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403aec46 FUN_1403aec46 body=190 status=ok
// SIG undefined FUN_1403aec46(void)

void FUN_1403aec46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ada3860;
  param_1[5] = &PTR_FUN_14ada4330;
  param_1[6] = &PTR_LAB_14ada4370;
  param_1[0x55] = &PTR_FUN_14ada43c0;
  param_1[0x56] = &PTR_FUN_14ada4440;
  param_1[0x57] = &PTR_FUN_14ada4450;
  if (param_1[0x114] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xed];
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
  FUN_1403aed04(param_1 + 0xcf);
  FUN_1403aed82(param_1);
  return;
}



// FUNCTION 1403aed04 FUN_1403aed04 body=70 status=ok
// SIG undefined FUN_1403aed04(void)

void FUN_1403aed04(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14adc1560;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1403aed4a(param_1 + 0x11);
  FUN_14006c2ae(param_1);
  return;
}



// FUNCTION 1403aed4a FUN_1403aed4a body=55 status=ok
// SIG undefined FUN_1403aed4a(void)

void FUN_1403aed4a(longlong *param_1)

{
  FUN_1403aee50(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403aed82 FUN_1403aed82 body=206 status=ok
// SIG undefined FUN_1403aed82(void)

void FUN_1403aed82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6fde10;
  param_1[5] = &PTR_FUN_14a6fe8e0;
  param_1[6] = &PTR_LAB_14a6fe920;
  param_1[0x55] = &PTR_FUN_14a6fe970;
  param_1[0x56] = &PTR_FUN_14a6fe9f0;
  param_1[0x57] = &PTR_FUN_14a6fea00;
  FUN_144760e21(param_1[0xca],*(undefined4 *)(param_1 + 0xcb));
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[199],*(undefined4 *)(param_1 + 200));
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc4],*(undefined4 *)(param_1 + 0xc5));
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 1403aee50 FUN_1403aee50 body=569 status=ok
// SIG undefined FUN_1403aee50(void)

void FUN_1403aee50(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_1403aefbc;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x30 + (longlong)iVar4 * 0x48) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)((longlong)iVar4 * 0x48 + lVar11 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_1403aefbc;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1403aefbc:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1403af08a FUN_1403af08a body=131 status=ok
// SIG undefined FUN_1403af08a(void)

void FUN_1403af08a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 1403af10e FUN_1403af10e body=136 status=ok
// SIG undefined FUN_1403af10e(void)

void FUN_1403af10e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x60);
  iVar3 = 0;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x14 + lVar4) != *(int *)(lVar2 + 0x10 + lVar4)) {
        FUN_1403af196(lVar2 + 8 + lVar4);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
    iVar3 = *(int *)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 100) != iVar3) {
    FUN_1403af278(param_1 + 0x58);
  }
  if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x40)) {
    FUN_1402191ca(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 1403af196 FUN_1403af196 body=226 status=ok
// SIG undefined FUN_1403af196(void)

void FUN_1403af196(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1403af278 FUN_1403af278 body=332 status=ok
// SIG undefined FUN_1403af278(void)

void FUN_1403af278(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1403af2e6;
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
LAB_1403af2e6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 1403af3c4 FUN_1403af3c4 body=981 status=ok
// SIG undefined FUN_1403af3c4(void)

void FUN_1403af3c4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_b9;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  iVar17 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar2 = (longlong *)(param_1 + 0x288);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  local_b0 = plVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    uVar16 = 1;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    local_b8._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    uVar16 = local_b8 >> 0x20;
    iVar17 = *(int *)(param_1 + 0x2a0);
  }
  plVar5 = local_b0;
  iVar9 = (int)local_b8;
  uVar11 = (uint)local_a8;
  iVar8 = local_a8._4_4_;
  iVar12 = local_a0;
  if (local_a8._4_4_ != iVar17 || local_b0 != plVar2) {
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x10 + (longlong)iVar8 * 0x20);
      if (((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x30), lVar13 != 0)) &&
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        FUN_1449774fc(&local_98,&local_b8,lVar13 + 0x20,0);
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      plVar15 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar15 = plVar5;
      }
      iVar4 = (int)plVar5[3];
      lVar13 = (longlong)iVar9;
      uVar10 = *(uint *)((longlong)plVar15 + lVar13 * 4) & uVar11;
      if (uVar10 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar6 = iVar8;
        if (iVar8 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar14 = 0;
          do {
            uVar10 = *(uint *)((longlong)plVar15 + lVar14 * 4 + lVar13 * 4 + 4);
            if (uVar10 != 0) {
              iVar9 = iVar9 + (int)lVar14 + 1;
              uVar11 = 0xffffffff;
              goto LAB_1403af55d;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar6 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          iVar9 = iVar6;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar4;
      }
      else {
LAB_1403af55d:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar17 || plVar5 != plVar2);
  }
  if ((local_64 < (int)uStack_90) && (cVar7 = FUN_1403afb62(), cVar7 != '\0')) {
    FUN_14050fd64();
    lVar13 = FUN_14050fd64();
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_1403b01b4(&local_98,&local_e8);
    local_f0 = &local_b9;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    FUN_1403b007e(lVar13 + 0x1e8,&local_b8,&local_e8,&local_d8);
    plVar2 = local_b0;
    if ((ulonglong *)(param_1 + 0x390) != &local_b8) {
      *(ulonglong *)(param_1 + 0x390) = local_b8;
      local_b8 = 0;
      plVar5 = *(longlong **)(param_1 + 0x398);
      if (local_b0 != plVar5) {
        local_b0 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x398) = plVar2;
        if (plVar5 != (longlong *)0x0) {
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
        }
      }
    }
    plVar2 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_b0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_140861e20(local_e8,local_e0);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_d8);
    FUN_140bd4428(*(ulonglong *)(param_1 + 0x390),0,1);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403af79a FUN_1403af79a body=145 status=ok
// SIG undefined FUN_1403af79a(void)

void FUN_1403af79a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_1403af82c();
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
      if (*(longlong *)(puVar1 + 4) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      puVar1[4] = param_3[4];
      puVar1[5] = uVar6;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1403afada(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_1403af7ce;
    }
  }
  uVar9 = 0;
LAB_1403af7ce:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 1403af82c FUN_1403af82c body=215 status=ok
// SIG undefined FUN_1403af82c(void)

int FUN_1403af82c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
LAB_1403af869:
      lVar10 = (longlong)iVar2;
      if ((*(longlong *)(lVar4 + lVar10 * 0x28) == *param_3) &&
         (lVar1 = lVar4 + lVar10 * 0x28, *(longlong *)(lVar1 + 8) == param_3[1])) {
        iVar3 = (int)param_3[3];
        if (*(int *)(lVar1 + 0x18) == iVar3) {
          if (iVar3 < 2) {
            return iVar2;
          }
          lVar7 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(lVar1 + 0x10) + lVar7);
            uVar9 = (ulonglong)uVar8;
            uVar6 = *(ushort *)(param_3[2] + lVar7);
            if (uVar8 == uVar6) {
              if (uVar8 == 0) {
                return iVar2;
              }
            }
            else {
              if (0x7f < (uVar6 | uVar8)) goto LAB_1403af8ed;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1403af8ed;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        if (iVar3 + *(int *)(lVar1 + 0x18) == 1) {
          return iVar2;
        }
      }
      goto LAB_1403af876;
    }
  }
  return -1;
LAB_1403af8ed:
  if (uVar8 == uVar6) {
    return iVar2;
  }
LAB_1403af876:
  iVar2 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar2 == -1) {
    return -1;
  }
  goto LAB_1403af869;
}



// FUNCTION 1403af904 FUN_1403af904 body=470 status=ok
// SIG undefined FUN_1403af904(void)

int * FUN_1403af904(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1403afada FUN_1403afada body=136 status=ok
// SIG undefined FUN_1403afada(void)

void FUN_1403afada(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1403afb62 FUN_1403afb62 body=27 status=ok
// SIG undefined FUN_1403afb62(void)

undefined8 FUN_1403afb62(void)

{
  if (DAT_14cb0d2b0 != 0) {
    return CONCAT71((int7)((ulonglong)DAT_14cb0d2b0 >> 8),*(longlong *)(DAT_14cb0d2b0 + 0x360) != 0)
    ;
  }
  return 0;
}



// FUNCTION 1403afb7e FUN_1403afb7e body=1279 status=ok
// SIG undefined FUN_1403afb7e(void)

void FUN_1403afb7e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar11 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar11,4);
    if ((int)uVar11 < 1) goto LAB_1403afbe4;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar11 != uVar4);
LAB_1403afbe4:
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar5 = 0;
    uVar24 = 1;
    iVar21 = 0;
    iVar6 = 0;
  }
  else {
    puVar17 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar17 = (uint *)(param_1 + 2);
    }
    uVar11 = *puVar17;
    if (uVar11 == 0) {
      iVar21 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar21 = iVar16 + -1;
      }
      uVar5 = 0;
      uVar24 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar24 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar24 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar11 = puVar17[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar24 = (ulonglong)(-uVar11 & uVar11);
    uVar18 = uVar24 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar21 = (iVar6 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar21) {
      iVar21 = iVar16;
    }
  }
  if (iVar21 < iVar16) {
    uVar11 = 0xffffffff;
    do {
      lVar19 = *param_1;
      lVar15 = (longlong)iVar21;
      lVar23 = lVar19 + lVar15 * 0x28;
      iVar16 = *(int *)(lVar23 + 0x18);
      iVar9 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar9 = 0;
      }
      uVar4 = 0;
      if (0 < iVar9) {
        puVar12 = &DAT_149dfb77a;
        if (iVar16 != 0) {
          puVar12 = *(undefined2 **)(lVar23 + 0x10);
        }
        lVar22 = 0;
        uVar4 = 0;
        do {
          uVar8 = ((uint)(ushort)puVar12[lVar22] +
                  (uint)(0x19 < (ushort)puVar12[lVar22] - 0x61) * 0x20) - 0x20;
          uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar4 ^ uVar8) & 0xff) * 4);
          uVar4 = uVar4 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar4 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
          lVar22 = lVar22 + 1;
        } while (iVar9 != (int)lVar22);
      }
      uVar2 = *(undefined8 *)(lVar19 + lVar15 * 0x28);
      uVar3 = *(undefined8 *)(lVar19 + 8 + lVar15 * 0x28);
      uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar13 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar10 = (uint)uVar2 & 0xffff;
      uVar13 = ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar10 >> 4);
      uVar10 = (uint)uVar3 & 0xffff;
      uVar13 = (uVar13 >> 2) + 0x9e3779b9 +
               ((uint)uVar3 << 0x10 | uVar10) + (int)((ulonglong)uVar3 >> 0x20) +
               (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4) + uVar13 * 0x40 ^ uVar13;
      uVar8 = uVar13 >> 0xd ^ -uVar13;
      uVar10 = uVar8 << 8 ^ (-0x61c88647 - uVar13) - uVar8;
      uVar13 = uVar10 >> 0xd ^ (uVar13 - uVar8) - uVar10;
      uVar8 = uVar13 >> 0xc ^ (uVar8 - uVar10) - uVar13;
      uVar10 = uVar8 << 0x10 ^ (uVar10 - uVar13) - uVar8;
      uVar13 = uVar10 >> 5 ^ (uVar13 - uVar8) - uVar10;
      uVar20 = uVar13 >> 3 ^ (uVar8 - uVar10) - uVar13;
      uVar8 = uVar20 << 10 ^ (uVar10 - uVar13) - uVar20;
      uVar8 = uVar4 >> 0xd ^ (uVar8 >> 0xf ^ uVar13 - (uVar20 + uVar8)) - uVar4;
      uVar13 = uVar8 << 8 ^ (-0x61c88647 - uVar4) - uVar8;
      uVar10 = uVar13 >> 0xd ^ (uVar4 - uVar8) - uVar13;
      uVar8 = uVar10 >> 0xc ^ (uVar8 - uVar13) - uVar10;
      uVar4 = uVar8 << 0x10 ^ (uVar13 - uVar10) - uVar8;
      uVar13 = uVar4 >> 5 ^ (uVar10 - uVar8) - uVar4;
      uVar8 = uVar13 >> 3 ^ (uVar8 - uVar4) - uVar13;
      uVar4 = uVar8 << 10 ^ (uVar4 - uVar13) - uVar8;
      uVar18 = (longlong)(int)(uVar4 >> 0xf ^ uVar13 - (uVar8 + uVar4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar18;
      *(int *)(lVar23 + 0x24) = iVar16;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar23 + 0x20) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar18) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar21;
      uVar11 = uVar11 & ~(uint)uVar24;
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 2);
      }
      iVar16 = (int)param_1[5];
      iVar21 = (int)uVar5;
      lVar23 = (longlong)iVar21;
      uVar4 = puVar17[lVar23] & uVar11;
      if (uVar4 == 0) {
        iVar9 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar9 = iVar16 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar14 = iVar9;
        if (iVar9 < iVar21) {
          iVar14 = iVar21;
        }
        if (iVar9 <= iVar21) {
          return;
        }
        lVar19 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar17[lVar23 + lVar19 + 1];
          if (uVar4 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar14 - lVar23 == lVar19) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar21 + (int)lVar19 + 1);
        uVar11 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar4 & uVar4);
      uVar18 = uVar24 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar21 = (iVar6 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while (iVar21 < iVar16);
  }
  return;
}



// FUNCTION 1403b007e FUN_1403b007e body=308 status=ok
// SIG undefined FUN_1403b007e(void)

undefined8
FUN_1403b007e(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = (undefined8 *)*param_4;
  *param_4 = 0;
  local_38 = *(int *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_70 = local_58;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = *param_3;
  *param_3 = 0;
  local_60 = (undefined4)param_3[1];
  local_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  FUN_140421d62(0,param_2,&local_68);
  FUN_140861e20(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_1403b0184;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1403b0184:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b01b4 FUN_1403b01b4 body=595 status=ok
// SIG undefined FUN_1403b01b4(void)

longlong * FUN_1403b01b4(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar11 != 0) {
    FUN_1403539de();
  }
  iVar11 = (int)param_1[5];
  if (iVar11 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    iVar6 = 0;
    iVar14 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar14 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar14 = iVar11 + -1;
      }
      uVar18 = 0;
      uVar17 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar17 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar17 == uVar18) {
          return param_2;
        }
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar10[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar6) {
      iVar6 = iVar11;
    }
  }
  if (iVar6 < iVar11) {
    uVar15 = 0xffffffff;
    do {
      puVar19 = (undefined4 *)((longlong)iVar6 * 0x28 + *param_1);
      iVar11 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
        FUN_1406f071e(param_2,iVar11);
      }
      lVar16 = *param_2;
      lVar12 = (longlong)iVar11 * 0x20;
      uVar3 = puVar19[1];
      uVar4 = puVar19[2];
      uVar5 = puVar19[3];
      puVar1 = (undefined4 *)(lVar16 + lVar12);
      *puVar1 = *puVar19;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined8 *)(lVar16 + 0x10 + lVar12) = 0;
      iVar11 = puVar19[6];
      _Src = *(void **)(puVar19 + 4);
      *(int *)(lVar16 + 0x18 + lVar12) = iVar11;
      if ((longlong)iVar11 == 0) {
        *(undefined4 *)(lVar16 + lVar12 + 0x1c) = 0;
      }
      else {
        puVar13 = (undefined8 *)(lVar12 + lVar16 + 0x10);
        FUN_1446dd670(puVar13,iVar11,0);
        memcpy((void *)*puVar13,_Src,(longlong)iVar11 * 2);
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar11 = (int)param_1[5];
      iVar6 = (int)uVar18;
      lVar16 = (longlong)iVar6;
      uVar7 = puVar10[lVar16] & uVar15;
      if (uVar7 == 0) {
        iVar8 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar8 = iVar11 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) {
          return param_2;
        }
        lVar12 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar10[lVar16 + lVar12 + 1];
          if (uVar7 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar16 == lVar12) {
            return param_2;
          }
        }
        uVar18 = (ulonglong)(iVar6 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar11);
  }
  return param_2;
}



// FUNCTION 1403b0408 FUN_1403b0408 body=110 status=ok
// SIG undefined FUN_1403b0408(void)

undefined8 FUN_1403b0408(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39268);
  FUN_1403b0476(param_2,param_3);
  FUN_1403b0476(param_2,param_3 + 0x20);
  FUN_1402bec5c(param_3 + 0x30,param_2);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e39268);
  if (0 < iVar1) {
    FUN_1403b0476(param_2,param_3 + 0x10);
  }
  return 1;
}



// FUNCTION 1403b0476 FUN_1403b0476 body=305 status=ok
// SIG undefined FUN_1403b0476(void)

longlong * FUN_1403b0476(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 2,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 2);
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
      FUN_14481578e(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_144a06ca8(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403b05a8 FUN_1403b05a8 body=306 status=ok
// SIG undefined FUN_1403b05a8(void)

undefined8 FUN_1403b05a8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [36];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar5 = (longlong *)FUN_1403ca102();
  if (plVar5 == (longlong *)0x0) {
LAB_1403b05fe:
    if (*(char *)(param_1 + 0x1990) == '\0') {
      lVar6 = FUN_1447210f0(param_1);
      if (lVar6 != 0) {
        lVar6 = FUN_1400f6f32(lVar6);
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x68), lVar6 != 0)) {
          FUN_140cf9daa(lVar6,local_24,param_1);
          if (-1 < local_24[0]) {
            uVar4 = FUN_1402d8968(lVar6,local_24);
            if (10 < uVar4) {
              if (*(longlong *)(param_1 + 0x3b0) != 0) {
                lVar7 = FUN_144a7b4ca();
                lVar6 = *(longlong *)(param_1 + 0x3b0);
                if ((((lVar6 != 0) && (lVar7 != 0)) &&
                    (lVar1 = *(longlong *)(lVar6 + 0x10), lVar1 != 0)) &&
                   ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                    (*(longlong *)
                      (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                     lVar7 + 0x30)))) {
                  cVar2 = FUN_1403b06dc(lVar6);
                  if (cVar2 != '\0') {
                    cVar2 = FUN_140d35d4c(lVar6);
                    if (cVar2 == '\0') goto LAB_1403b06ce;
                  }
                  goto LAB_1403b0655;
                }
              }
LAB_1403b06ce:
              uVar8 = FUN_1403b0840(param_1);
              goto LAB_1403b0657;
            }
          }
        }
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x490))(plVar5);
    if (cVar2 == '\0') {
      bVar3 = (**(code **)(*plVar5 + 0x498))(plVar5);
      if (5 < bVar3) {
        cVar2 = (**(code **)(*plVar5 + 0x498))(plVar5);
        if (cVar2 != '\t') goto LAB_1403b05fe;
      }
    }
  }
LAB_1403b0655:
  uVar8 = 0;
LAB_1403b0657:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b06dc FUN_1403b06dc body=36 status=ok
// SIG undefined FUN_1403b06dc(void)

undefined8 FUN_1403b06dc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1403b0700();
  lVar1 = *(longlong *)(lVar1 + 0x38);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != DAT_14cb71810 && lVar1 != 0);
}



// FUNCTION 1403b0700 FUN_1403b0700 body=319 status=ok
// SIG undefined FUN_1403b0700(void)

longlong * FUN_1403b0700(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x520);
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14b420680;
    plVar2 = plVar3 + 2;
    FUN_1457083ac(plVar2,param_1);
    local_50 = plVar2;
    local_48 = plVar3;
    FUN_145708402(&local_50,plVar2);
    local_40 = local_50;
    local_38 = local_48;
    if (local_48 != (longlong *)0x0) {
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    }
    if ((longlong **)(param_1 + 0x520) != &local_40) {
      *(longlong **)(param_1 + 0x520) = local_50;
      local_40 = (longlong *)0x0;
      FUN_145708362(param_1 + 0x528,&local_38);
    }
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar2 = local_48;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x520);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b0840 FUN_1403b0840 body=188 status=ok
// SIG undefined FUN_1403b0840(void)

bool FUN_1403b0840(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    if ((*(float *)(lVar1 + 0x1f8) <= 1.0 && *(float *)(lVar1 + 0x1f8) != 1.0) &&
       (*(longlong *)(param_1 + 0x13f8) != 0)) {
      *(undefined4 *)(lVar1 + 0x1f8) = 0x3f800000;
      lVar3 = *(longlong *)(param_1 + 0x11e8);
    }
    lVar2 = lVar3 + 0x11f8;
    if (*(longlong *)(lVar3 + 0x1208) != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x1208);
    }
    if ((longlong)*(int *)(lVar3 + 0x1210) != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) == DAT_14cb712e8) {
          FUN_1400bc8c2(lVar3 + 0x11f0,&DAT_14cb712e8);
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(lVar3 + 0x1210) * 8 != lVar4);
    }
    FUN_1447cd2ec(param_1 + 0x31d0,0);
  }
  return lVar1 != 0;
}



// FUNCTION 1403b090a FUN_1403b090a body=36 status=ok
// SIG undefined FUN_1403b090a(void)

undefined8 FUN_1403b090a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1403b092e FUN_1403b092e body=995 status=ok
// SIG undefined FUN_1403b092e(void)

undefined8 FUN_1403b092e(longlong *param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  bool bVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  int local_250;
  int local_248;
  undefined1 local_231;
  int local_230;
  int local_22c;
  longlong *local_228;
  int *local_220;
  ulonglong local_218;
  int *local_210;
  longlong local_208;
  undefined1 local_200 [192];
  undefined1 local_140 [136];
  longlong local_b8;
  longlong local_b0;
  int *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_70 = DAT_14c8464f0;
  local_80 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_78 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_88 = DAT_14c8464f0;
  local_98 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_90 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar14 = param_1[1];
  iVar15 = 0;
  local_231 = param_3;
  local_228 = param_2;
  if ((longlong)(int)lVar14 == 0) {
    local_68 = false;
  }
  else {
    lVar6 = *param_1;
    lVar19 = 0;
    bVar8 = false;
    do {
      iVar11 = _finite(*(double *)(lVar6 + lVar19));
      if (((iVar11 != 0) && (iVar11 = _finite(*(double *)(lVar6 + 8 + lVar19)), iVar11 != 0)) &&
         (iVar11 = _finite(*(double *)(lVar6 + 0x10 + lVar19)), iVar11 != 0)) {
        if (bVar8) {
          dVar2 = *(double *)(lVar6 + lVar19);
          if (dVar2 <= local_98) {
            local_98 = dVar2;
          }
          dVar3 = *(double *)(lVar6 + 8 + lVar19);
          if (dVar3 <= uStack_90) {
            uStack_90 = dVar3;
          }
          dVar4 = *(double *)(lVar6 + 0x10 + lVar19);
          if (dVar4 <= local_88) {
            local_88 = dVar4;
          }
          if (local_80 <= dVar2) {
            local_80 = dVar2;
          }
          uVar20 = SUB84(uStack_78,0);
          uVar21 = (undefined4)((ulonglong)uStack_78 >> 0x20);
          if (uStack_78 <= dVar3) {
            uVar20 = SUB84(dVar3,0);
            uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
          uStack_78 = (double)CONCAT44(uVar21,uVar20);
          uVar20 = SUB84(local_70,0);
          uVar21 = (undefined4)((ulonglong)local_70 >> 0x20);
          if (local_70 <= dVar4) {
            uVar20 = SUB84(dVar4,0);
            uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          local_70 = (double)CONCAT44(uVar21,uVar20);
        }
        else {
          pdVar1 = (double *)(lVar6 + lVar19);
          local_70 = pdVar1[2];
          local_80 = *pdVar1;
          uStack_78 = pdVar1[1];
          local_88 = pdVar1[2];
          local_98 = *pdVar1;
          uStack_90 = pdVar1[1];
        }
        bVar8 = true;
      }
      lVar19 = lVar19 + 0x18;
      local_68 = bVar8;
    } while ((longlong)(int)lVar14 * 0x18 != lVar19);
  }
  local_258 = param_4;
  FUN_1403b201c(&local_a0,param_1,&local_98,0x3f847ae140000000);
  plVar9 = local_228;
  lVar14 = param_1[1];
  FUN_1403b0d30(local_228,(int)lVar14);
  FUN_140bfc200(plVar9,(int)lVar14,1);
  FUN_1403b0d76(local_a0,local_140);
  local_22c = *local_a0;
  local_230 = local_a0[1];
  uVar5 = local_a0[4];
  local_208 = *(longlong *)(local_a0 + 0x2a);
  piVar7 = *(int **)(local_a0 + 0x2e);
  FUN_1403b1286(local_200);
  iVar18 = 0;
  iVar11 = 0;
  uVar16 = 0;
  local_220 = local_a0;
  if (*piVar7 == 0) {
    iVar15 = 0;
    uVar17 = 0;
    do {
      iVar15 = iVar15 + 1;
      if (iVar15 == local_22c) {
        iVar18 = iVar18 + 1;
        if (iVar18 == local_230) {
          if ((ulonglong)uVar5 - 1 == uVar17) {
LAB_1403b0c4b:
            FUN_1403b0dd8(local_200);
            if (local_b0 != 0) {
              FUN_1400020a8();
            }
            piVar7 = local_220;
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            if (piVar7 != (int *)0x0) {
              (**(code **)(piVar7 + -4))(piVar7 + -4);
            }
            if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return 1;
          }
          iVar11 = iVar11 + 1;
          iVar15 = 0;
          iVar18 = 0;
        }
        else {
          iVar15 = 0;
        }
      }
      uVar16 = uVar17 + 1;
      lVar14 = uVar17 + 1;
      uVar17 = uVar16;
    } while (piVar7[lVar14] == 0);
  }
  local_210 = piVar7 + 1;
  local_218 = (ulonglong)(uVar5 - 1);
  iVar13 = 0;
  do {
    do {
      local_258 = CONCAT44(local_258._4_4_,iVar15);
      local_250 = iVar18;
      local_248 = iVar11;
      cVar10 = FUN_144977a5c(local_140,local_200,uVar16 & 0xffffffff,iVar13);
      lVar14 = (longlong)(int)uVar16;
      if (cVar10 != '\0') {
        FUN_1449778a4(local_200,
                      (longlong)
                      *(int *)(*(longlong *)(local_208 + lVar14 * 8) + (longlong)iVar13 * 4) * 0x10
                      + *local_228,local_231);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < piVar7[lVar14]);
    piVar12 = local_210 + lVar14;
    do {
      iVar15 = iVar15 + 1;
      if (iVar15 == local_22c) {
        iVar18 = iVar18 + 1;
        if (iVar18 == local_230) {
          if ((int)local_218 == (int)uVar16) goto LAB_1403b0c4b;
          iVar11 = iVar11 + 1;
          iVar15 = 0;
          iVar18 = 0;
        }
        else {
          iVar15 = 0;
        }
      }
      uVar16 = (ulonglong)((int)uVar16 + 1);
      iVar13 = *piVar12;
      piVar12 = piVar12 + 1;
    } while (iVar13 == 0);
    iVar13 = 0;
  } while( true );
}



// FUNCTION 1403b0d12 FUN_1403b0d12 body=30 status=ok
// SIG undefined FUN_1403b0d12(void)

void FUN_1403b0d12(longlong param_1)

{
  FUN_1403b119e(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1403b0d30 FUN_1403b0d30 body=69 status=ok
// SIG undefined FUN_1403b0d30(void)

void FUN_1403b0d30(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_144716727(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403b10bc(param_1,param_2);
    return;
  }
  return;
}


